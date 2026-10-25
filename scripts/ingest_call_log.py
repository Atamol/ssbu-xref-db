# Aggregates ssbu-call-sniffer logs into a runtime xref table.
# Each enter entry has func_id (hook offset), lr and the FP-walked return addresses.
# Every address is resolved to its enclosing static function and tallied per callee.
# With tables/functions.csv and tables/call_sites.csv both lookups and the direct check are exact
#
# output:
#   tables/runtime_xrefs.csv          caller/callee pairs, kind flags the calls Ghidra missed
#   tables/runtime_xref_summary.csv   callers per callee
# kind: direct, indirect_likely, indirect_likely_approx, outside_function, out_of_module
#
# usage:
#   py scripts/ingest_call_log.py [<log path> ...]
# (default reads ../ssbu-call-sniffer/call_sniffer_*.log)

import bisect
import csv
import glob
import os
import sys
from collections import defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SNIFFER_ROOT = os.path.normpath(os.path.join(ROOT, "..", "ssbu-call-sniffer"))
FUNCS_ALL = os.path.join(ROOT, "funcs", "funcs_all.csv")
SYMBOLS = os.path.join(ROOT, "tables", "symbols.csv")
FUNCTIONS = os.path.join(ROOT, "tables", "functions.csv")
CALL_SITES = os.path.join(ROOT, "tables", "call_sites.csv")
SEGMENTS = os.path.join(ROOT, "tables", "segments.csv")
OUT_PATH = os.path.join(ROOT, "tables", "runtime_xrefs.csv")
SUMMARY_PATH = os.path.join(ROOT, "tables", "runtime_xref_summary.csv")
IMAGE_BASE = 0x7100000000
TEXT_END = None
FUNC_TABLE = None
STATIC_CALLS = None
KIND_RANK = {"precise": 0, "approx": 1, "unknown": 2}
SUMMARY_CALLERS_MAX = 1000


def norm_offset(s):
    s = (s or "").strip().lower()
    if s.startswith("0x"):
        s = s[2:]
    try:
        return int(s, 16)
    except ValueError:
        return None


def to_int(s):
    try:
        return int((s or "").strip())
    except ValueError:
        return 0


def pick_name(row):
    if (row.get("Function Symbol") or "").strip().startswith("_Z"):
        dm = (row.get("Function Demangled") or "").strip()
        if dm:
            return dm
    ext = [e.strip().rpartition("@") for e in (row.get("External Names") or "").split(";")]
    for name, _, label in ext:
        if label.startswith("curated") and name:
            return name
    fn = (row.get("Function Name") or "").strip()
    if fn and not is_placeholder(fn):
        return fn
    for name, _, label in ext:
        if label.startswith("ssbu-decomp") and name and not is_placeholder(name):
            return name
    return (row.get("Suggested Name") or "").strip() or fn


def is_placeholder(name):
    return name.split("::")[-1].removeprefix("thunk_").startswith("FUN_")


def qualified(ns, name):
    # Rebuild the getName(true) form the static Callers column holds, since symbols.csv keeps the bare name
    ns = (ns or "").strip()
    return "{}::{}".format(ns, name) if ns and ns != "Global" else name


def load_funcs():
    by_off = {}
    ranges = []
    static_callers = {}
    with open(FUNCS_ALL, "r", encoding="utf-8") as f:
        for row in csv.DictReader(f):
            off = norm_offset(row.get("Function Offset") or row.get("Function Address"))
            if off is None:
                continue
            size = to_int(row.get("Function Size"))
            name = pick_name(row)
            ghidra = (row.get("Function Name") or "").strip()
            by_off[off] = {"name": name, "size": size, "ghidra": ghidra}
            if size > 0:
                ranges.append((off, off + size, off, name, ghidra))
            callers_field = row.get("Callers") or ""
            cs = set(c.strip() for c in callers_field.split(";") if c.strip())
            static_callers[off] = cs
    ranges.sort()
    # Load symbols.csv too since funcs_all only has the xref-walked functions and most LRs land outside it.
    # It has no size, so the fallback approximates each function as the span up to the next symbol offset
    sym_offsets = []
    if os.path.isfile(SYMBOLS):
        with open(SYMBOLS, "r", encoding="utf-8") as f:
            for row in csv.DictReader(f):
                if (row.get("Is Function") or "").strip() != "1":
                    continue
                off = norm_offset(row.get("Offset") or row.get("Address"))
                if off is None:
                    continue
                name = (row.get("Demangled") or row.get("Name") or "").strip()
                ghidra = qualified(row.get("Namespace"), (row.get("Name") or "").strip())
                sym_offsets.append((off, name, ghidra))
    best = {}
    for off, name, ghidra in sorted(sym_offsets):
        cur = best.setdefault(off, [name, ghidra])
        # The dynsym mangled label is a secondary symbol, getName(true) returns the non-mangled one
        if cur[1].startswith("_Z") and not ghidra.startswith("_Z"):
            cur[1] = ghidra
    uniq = [(off, n, g) for off, (n, g) in sorted(best.items())]
    return by_off, ranges, static_callers, uniq


class FunctionTable:
    def __init__(self, path, sym_names):
        self.ranges = []
        self.names = {}
        with open(path, "r", encoding="utf-8") as f:
            for row in csv.DictReader(f):
                entry = norm_offset(row.get("Offset"))
                if entry is None:
                    continue
                ghidra = (row.get("Name") or "").strip()
                self.names[entry] = (sym_names.get(entry) or ghidra, ghidra)
                for part in (row.get("Ranges") or "").split(";"):
                    lo, _, hi = part.partition("-")
                    lo, hi = norm_offset(lo), norm_offset(hi)
                    if lo is not None and hi is not None:
                        self.ranges.append((lo, hi + 1, entry))
        self.ranges.sort()
        self.starts = [r[0] for r in self.ranges]
        self.end = max((r[1] for r in self.ranges), default=0)

    def find(self, addr):
        i = bisect.bisect_right(self.starts, addr) - 1
        if i >= 0 and addr < self.ranges[i][1]:
            entry = self.ranges[i][2]
            name, ghidra = self.names[entry]
            return entry, name, ghidra, "precise"
        if addr >= (TEXT_END or self.end):
            return None, "", "", "miss"
        # In .text but in no body, so the node stays on the raw address instead of the function before it
        return addr, "", "", "unknown"


def load_static_calls(path):
    # One packed int per (site, callee) since tuples for every call site take several times the memory
    calls = set()
    with open(path, "r", encoding="utf-8") as f:
        for row in csv.DictReader(f):
            site = norm_offset(row.get("Site"))
            if site is None:
                continue
            for col in ("Target", "Thunked"):
                callee = norm_offset(row.get(col))
                if callee is not None:
                    calls.add(site << 32 | callee)
    return calls


def load_text_end(path):
    # Return addresses past the executable blocks are in other modules, so they must not be pinned on the last function
    if not os.path.isfile(path):
        return None
    end = 0
    with open(path, "r", encoding="utf-8") as f:
        for row in csv.DictReader(f):
            if (row.get("Execute") or "").strip() != "1":
                continue
            v = norm_offset((row.get("End") or "").split(":")[-1])
            if v is None:
                continue
            if v >= IMAGE_BASE:
                v -= IMAGE_BASE
            end = max(end, v + 1)
    return end or None


def find_enclosing(ranges, sym_offsets, addr):
    if FUNC_TABLE is not None:
        return FUNC_TABLE.find(addr)
    lo, hi = 0, len(ranges)
    while lo < hi:
        mid = (lo + hi) // 2
        start, end, off, name, ghidra = ranges[mid]
        if addr < start:
            hi = mid
        elif addr >= end:
            lo = mid + 1
        else:
            return off, name, ghidra, "precise"
    if not sym_offsets or (TEXT_END and addr >= TEXT_END):
        return None, "", "", "miss"
    lo, hi = 0, len(sym_offsets)
    while lo < hi:
        mid = (lo + hi) // 2
        if sym_offsets[mid][0] <= addr:
            lo = mid + 1
        else:
            hi = mid
    if lo == 0:
        return None, "", "", "miss"
    off, name, ghidra = sym_offsets[lo - 1]
    return off, name, ghidra, "approx"


def join_capped(items, limit):
    # Cut only between entries so no caller is left half written
    out = []
    size = 0
    for item in items:
        if out and size + 1 + len(item) > limit:
            out.append("...")
            break
        size += len(item) + (1 if out else 0)
        out.append(item)
    return ";".join(out)


def worse(a, b):
    return a if KIND_RANK.get(a, 0) >= KIND_RANK.get(b, 0) else b


def main():
    args = sys.argv[1:]
    if not args:
        args = sorted(glob.glob(os.path.join(SNIFFER_ROOT, "call_sniffer_*.log")))
    else:
        # Expand glob patterns here so PowerShell users don't need to
        expanded = []
        for arg in args:
            if any(c in arg for c in "*?["):
                expanded.extend(sorted(glob.glob(arg)))
            else:
                expanded.append(arg)
        args = expanded
    if not args:
        print("no logs found. pass paths or place call_sniffer_*.log in ../ssbu-call-sniffer/")
        sys.exit(1)
    if not os.path.isfile(FUNCS_ALL):
        print("missing {}. run DumpXrefs.java first".format(FUNCS_ALL))
        sys.exit(1)

    global TEXT_END, FUNC_TABLE, STATIC_CALLS
    TEXT_END = load_text_end(SEGMENTS)
    by_off, ranges, static_callers, sym_offsets = load_funcs()
    missing = [p for p in (FUNCTIONS, CALL_SITES) if not os.path.isfile(p)]
    if not missing:
        FUNC_TABLE = FunctionTable(FUNCTIONS, {off: name for off, name, _ in sym_offsets})
        STATIC_CALLS = load_static_calls(CALL_SITES)
        print("loaded {} functions with {} body ranges, {} static calls".format(
            len(FUNC_TABLE.names), len(FUNC_TABLE.ranges), len(STATIC_CALLS)), file=sys.stderr)
    else:
        # Exact lookups without call sites would leave every callee outside funcs_all unverifiable
        print("loaded {} funcs_all entries ({} sized), {} symbols for fallback (no {})".format(
            len(by_off), len(ranges), len(sym_offsets), " or ".join(missing)), file=sys.stderr)

    pair_count = defaultdict(int)
    pair_static = defaultdict(int)
    pair_kind = {}
    pair_caller_name = {}
    pair_caller_ghidra = {}
    callee_names = {}
    out_of_module = defaultdict(int)
    total = 0
    enter_count = 0

    for path in args:
        with open(path, "r", encoding="utf-8") as f:
            for line in f:
                parts = line.rstrip("\n").split(",")
                if len(parts) < 5:
                    continue
                if parts[4] != "E":
                    continue
                total += 1
                fid = norm_offset(parts[2])
                lr = norm_offset(parts[3]) or 0
                if fid is None:
                    continue
                enter_count += 1
                # An inline hook can sit mid-function, so the callee is the function enclosing the hook
                callee_off, callee_name, _, callee_kind = find_enclosing(ranges, sym_offsets, fid)
                if callee_off is None:
                    callee_off, callee_kind = fid, "unknown"
                callee_names.setdefault(callee_off, callee_name)
                stack_addrs = []
                if lr > 0:
                    stack_addrs.append(lr)
                # The args are parts[5:13], and parts[13:45] hold up to 32 frames when log_enter_walk is used
                for i in range(13, min(len(parts), 45)):
                    v = norm_offset(parts[i])
                    if v is None or v == 0:
                        break
                    stack_addrs.append(v)
                if not stack_addrs:
                    out_of_module[callee_off] += 1
                    continue
                for raw_addr in stack_addrs:
                    caller_off, caller_name, caller_ghidra, lookup_kind = find_enclosing(ranges, sym_offsets, raw_addr - 4)
                    if caller_off is None:
                        out_of_module[callee_off] += 1
                        break
                    # Past the prologue, X30 and the first saved LR can point back into the hooked function
                    # or repeat the same caller, so a repeated frame is folded instead of counted as recursion
                    if caller_off == callee_off:
                        continue
                    key = (callee_off, caller_off)
                    pair_count[key] += 1
                    if STATIC_CALLS is not None and ((raw_addr - 4) << 32 | callee_off) in STATIC_CALLS:
                        pair_static[key] += 1
                    pair_kind[key] = worse(callee_kind, lookup_kind)
                    pair_caller_name[key] = caller_name
                    pair_caller_ghidra[key] = caller_ghidra
                    callee_names.setdefault(caller_off, caller_name)
                    # A call site outside every function has no entry, so its own callers can't be keyed
                    if lookup_kind == "unknown":
                        break
                    callee_off, callee_kind = caller_off, lookup_kind

    os.makedirs(os.path.dirname(OUT_PATH), exist_ok=True)
    rows = []
    for (callee, caller), n in pair_count.items():
        callee_name = by_off.get(callee, {}).get("name", "") or callee_names.get(callee, "")
        caller_name = by_off.get(caller, {}).get("name", "") or pair_caller_name.get((callee, caller), "")
        statics = static_callers.get(callee, set())
        ghidra_caller = by_off.get(caller, {}).get("ghidra", "") or pair_caller_ghidra.get((callee, caller), "")
        lookup_kind = pair_kind.get((callee, caller))
        if lookup_kind == "unknown":
            kind = "outside_function"
        elif STATIC_CALLS is not None:
            # One logged site without a static call is a call Ghidra missed even if other sites are known
            kind = "direct" if pair_static[(callee, caller)] == n else "indirect_likely"
        elif ghidra_caller in statics or "FUN_{:x}".format(IMAGE_BASE + caller) in statics:
            kind = "direct"
        elif lookup_kind == "approx":
            kind = "indirect_likely_approx"
        else:
            kind = "indirect_likely"
        rows.append({
            "callee_offset": "0x{:x}".format(callee),
            "callee_name": callee_name,
            "caller_offset": "0x{:x}".format(caller),
            "caller_name": caller_name,
            "runtime_count": n,
            "kind": kind,
        })
    for callee, n in out_of_module.items():
        callee_name = by_off.get(callee, {}).get("name", "") or callee_names.get(callee, "")
        rows.append({
            "callee_offset": "0x{:x}".format(callee),
            "callee_name": callee_name,
            "caller_offset": "",
            "caller_name": "",
            "runtime_count": n,
            "kind": "out_of_module",
        })
    rows.sort(key=lambda r: (-r["runtime_count"], r["callee_offset"]))

    with open(OUT_PATH, "w", encoding="utf-8", newline="") as f:
        w = csv.DictWriter(f, fieldnames=["callee_offset", "callee_name", "caller_offset", "caller_name", "runtime_count", "kind"])
        w.writeheader()
        for r in rows:
            w.writerow(r)

    by_callee = defaultdict(list)
    for r in rows:
        if r["kind"] == "out_of_module":
            continue
        by_callee[(r["callee_offset"], r["callee_name"])].append(r)
    summary_rows = []
    for (off, name), edges in by_callee.items():
        edges.sort(key=lambda r: -r["runtime_count"])
        callers_str = join_capped(
            ["{0}@{1}({2})".format(e["caller_name"] or e["caller_offset"], e["caller_offset"], e["runtime_count"])
             for e in edges],
            SUMMARY_CALLERS_MAX)
        any_indirect = any(e["kind"] != "direct" for e in edges)
        summary_rows.append({
            "callee_offset": off,
            "callee_name": name,
            "caller_count": len(edges),
            "total_runtime_count": sum(e["runtime_count"] for e in edges),
            "has_indirect": "yes" if any_indirect else "no",
            "callers": callers_str,
        })
    summary_rows.sort(key=lambda r: -r["total_runtime_count"])
    with open(SUMMARY_PATH, "w", encoding="utf-8", newline="") as f:
        w = csv.DictWriter(f, fieldnames=["callee_offset", "callee_name", "caller_count", "total_runtime_count", "has_indirect", "callers"])
        w.writeheader()
        for r in summary_rows:
            w.writerow(r)

    print("wrote {} ({} edges from {} enter entries)".format(OUT_PATH, len(rows), enter_count), file=sys.stderr)
    print("wrote {} ({} unique callees)".format(SUMMARY_PATH, len(summary_rows)), file=sys.stderr)
    direct = sum(1 for r in rows if r["kind"] == "direct")
    indirect = sum(1 for r in rows if r["kind"] == "indirect_likely")
    indirect_approx = sum(1 for r in rows if r["kind"] == "indirect_likely_approx")
    outside = sum(1 for r in rows if r["kind"] == "outside_function")
    oom = sum(1 for r in rows if r["kind"] == "out_of_module")
    print("  direct (Ghidra has the call):       {}".format(direct), file=sys.stderr)
    print("  indirect_likely (Ghidra missed!):   {}".format(indirect), file=sys.stderr)
    print("  indirect_likely_approx (sym fallback): {}".format(indirect_approx), file=sys.stderr)
    print("  outside_function (no Ghidra function): {}".format(outside), file=sys.stderr)
    print("  out_of_module:                      {}".format(oom), file=sys.stderr)


if __name__ == "__main__":
    main()
