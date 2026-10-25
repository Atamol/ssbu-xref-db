# Parses stage_table_labelled.txt (a rodata dump of the StageTableEntry array from the SSBU modding
# community, 364 entries) into tables/stage_numeric_id_map.csv, which maps the numeric stage_id to its
# hash40, internal name and stage_kind
#
# The numeric stage_id is what app::sv_information::stage_id() returns at runtime (seen in socket-sniffer),
# so the table resolves a runtime stage_id to its internal stage name

import csv
import re
import sys
from pathlib import Path

ROOT = Path(__file__).parent.parent
OUT_PATH = ROOT / "tables" / "stage_numeric_id_map.csv"

ENTRY_RE = re.compile(
    r"stage_id:\s+(0x[0-9a-fA-F]+),\s*\n"
    r"\s+stage_num:\s+(0x[0-9a-fA-F]+),\s*\n"
    r"\s+stage_kind:\s+(\w+),\s*\n"
    r"\s+param_name_hash:\s+Hash40\(\s*\n"
    r"\s+(0x[0-9a-fA-F]+),(?:\s+---->\s+(\S+))?"
)


def main():
    if len(sys.argv) < 2:
        print("usage: build_stage_numeric_id_map.py <stage_table_labelled.txt>")
        sys.exit(1)
    src = Path(sys.argv[1])
    text = src.read_text(encoding="utf-8")
    rows = []
    for m in ENTRY_RE.finditer(text):
        sid_hex, snum_hex, kind, h40_hex, name = m.groups()
        rows.append({
            "stage_id_hex": sid_hex,
            "stage_id_dec": int(sid_hex, 16),
            "stage_num_hex": snum_hex,
            "stage_kind": kind,
            "param_name_hash": h40_hex,
            "internal_name": name or "",
        })
    OUT_PATH.parent.mkdir(parents=True, exist_ok=True)
    with OUT_PATH.open("w", newline="", encoding="utf-8") as f:
        w = csv.DictWriter(f, fieldnames=[
            "stage_id_hex", "stage_id_dec", "stage_num_hex",
            "stage_kind", "param_name_hash", "internal_name",
        ])
        w.writeheader()
        w.writerows(rows)
    by_kind = {}
    for r in rows:
        by_kind[r["stage_kind"]] = by_kind.get(r["stage_kind"], 0) + 1
    print(f"wrote {OUT_PATH.relative_to(ROOT)} ({len(rows)} entries)")
    for k, v in sorted(by_kind.items()):
        print(f"  {k}: {v}")


if __name__ == "__main__":
    main()
