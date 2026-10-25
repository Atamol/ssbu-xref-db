# Translate image offsets between game builds using tables/version_map_*.csv
#
# usage:
#   py scripts/remap_version.py map 0x17641a0 0x52c41b0      13.0.4 -> 13.0.5
#   py scripts/remap_version.py unmap 0x1764000              13.0.5 -> 13.0.4
#   py scripts/remap_version.py --map tables/version_map_X_Y.csv map ...
#
# Offsets are image relative (address - 0x7100000000), and absolute addresses are converted on input.
# The old raw DB used file offsets (image + 0x100), so subtract 0x100 before mapping those
#
# confidence:
#   exact     whole range verified instruction by instruction
#   refined   inside a function the patch rewrote, aligned by hand
#   partial   inside rewritten code, aligned by bytes only

import bisect
import csv
import os
import sys

ROOT = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), ".."))
DEFAULT_MAP = os.path.join(ROOT, "tables", "version_map_13.0.4_13.0.5.csv")
IMAGE_BASE = 0x7100000000


class VersionMap(object):
    def __init__(self, path=DEFAULT_MAP):
        self.path = path
        rows = []
        with open(path, newline="") as f:
            for r in csv.DictReader(f):
                rows.append((int(r["old_start"], 16), int(r["old_end"], 16),
                             int(r["delta"], 16), r["confidence"], r["region"]))
        rows.sort()
        self.rows = rows
        self.starts = [r[0] for r in rows]
        inv = sorted((r[0] + r[2], r[1] + r[2], r[2], r[3], r[4]) for r in rows)
        self.inv = inv
        self.inv_starts = [r[0] for r in inv]

    def lookup(self, off):
        k = bisect.bisect_right(self.starts, off) - 1
        if k >= 0 and self.rows[k][0] <= off < self.rows[k][1]:
            return off + self.rows[k][2], self.rows[k][3]
        return None, "unmapped"

    def lookup_back(self, off):
        k = bisect.bisect_right(self.inv_starts, off) - 1
        if k >= 0 and self.inv[k][0] <= off < self.inv[k][1]:
            return off - self.inv[k][2], self.inv[k][3]
        return None, "unmapped"

    def fwd(self, off):
        return self.lookup(off)[0]

    def back(self, off):
        return self.lookup_back(off)[0]


def parse(s):
    v = int(s, 16)
    return v - IMAGE_BASE if v >= IMAGE_BASE else v


def main(argv):
    path = DEFAULT_MAP
    if len(argv) > 1 and argv[0] == "--map":
        path = argv[1]
        argv = argv[2:]
    if len(argv) < 2 or argv[0] not in ("map", "unmap"):
        print("usage: remap_version.py [--map CSV] map|unmap OFF...")
        return 1
    vm = VersionMap(path)
    for a in argv[1:]:
        x = parse(a)
        y, conf = vm.lookup(x) if argv[0] == "map" else vm.lookup_back(x)
        print("%#x -> %s  (%s)" % (x, "-" if y is None else "%#x" % y, conf))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
