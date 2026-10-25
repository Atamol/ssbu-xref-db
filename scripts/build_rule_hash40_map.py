# Builds tables/rule_hash40_map.csv, which maps hash40 to the game mode and rule identifiers of online matches
#
# The type_rule_* and melee_rule_* identifiers come from Ghidra string searches for ^type_rule_ and ^melee_rule_.
# The battle_* rule param names are added too, so socket-sniffer can label captured values

import csv
import zlib
from pathlib import Path

ROOT = Path(__file__).parent.parent
OUT_PATH = ROOT / "tables" / "rule_hash40_map.csv"

RULE_NAMES = [
    ("type_rule_time",      "rule_type"),
    ("type_rule_stock",     "rule_type"),
    ("type_rule_stamina",   "rule_type"),
    ("type_rule_contents",  "rule_type_sub"),
    ("type_rule_warning",   "rule_type_sub"),

    # melee_rule lua_bind getters
    ("melee_rule_type",     "rule_accessor"),
    ("melee_rule_mode",     "rule_accessor"),
    ("melee_mode",          "rule_accessor"),

    # stage form, not a rule, listed for reference
    ("type_battlefield",    "stage_form_battlefield"),

    ("battle_stock",        "rule_param"),
    ("battle_time_limit",   "rule_param"),
    ("battle_hp",           "rule_param"),
    ("battle_rule",         "rule_param"),
    ("battle_game_time",    "rule_param"),
    ("battle_ave_cp_level", "rule_param"),
]

# The melee_rule_type getter reads these by rule type byte from a table at image offset 0x4545f00 (13.0.5).
# They were matched to the rules by hand, and the labels are descriptive and do not hash to these values
RESOLVED_RULE_TYPES = [
    (0x16586570f3, "melee_rule_type[0]_TIME"),
    (0x176903b131, "melee_rule_type[1]_STOCK"),
    (0x14b677f115, "melee_rule_type[2]_STAMINA_HP"),
]


def hash40(s: str) -> int:
    lower = s.lower()
    crc = zlib.crc32(lower.encode("utf-8")) & 0xFFFFFFFF
    return (len(lower) << 32) | crc


def row(h, name, kind):
    return {"hash40_hex": f"0x{h:x}", "hash40_dec": h, "internal_name": name, "kind": kind}


def main():
    OUT_PATH.parent.mkdir(parents=True, exist_ok=True)
    rows = [row(hash40(name), name, kind) for name, kind in RULE_NAMES]
    rows.sort(key=lambda r: (r["kind"], r["internal_name"]))
    rows = [row(h, name, "rule_type_resolved") for h, name in RESOLVED_RULE_TYPES] + rows
    with OUT_PATH.open("w", encoding="utf-8", newline="") as f:
        w = csv.DictWriter(f, fieldnames=["hash40_hex", "hash40_dec", "internal_name", "kind"])
        w.writeheader()
        w.writerows(rows)
    print(f"wrote {OUT_PATH.relative_to(ROOT)} ({len(rows)} entries)")
    for r in rows:
        print(f"  {r['hash40_hex']:>14}  {r['kind']:30}  {r['internal_name']}")


if __name__ == "__main__":
    main()
