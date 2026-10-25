# Builds tables/stage_hash40_map.csv, which maps hash40 to stage internal names
#
# Stage internal names come in 3 forms:
#   Battle_<Stage>   normal form
#   End_<Stage>      Omega form (End is Final Destination)
#   BattleField      Battlefield, with _L for Big Battlefield and _S for Small Battlefield
#
# The runtime stage_id is the numeric id (see build_stage_numeric_id_map.py), not a hash40.
# These hashes equal its param_name_hash, so socket-sniffer can get from either one to a name
#
# source: Ghidra search_strings for ^Battle_[A-Z], ^End_[A-Z] and ^BattleField
# (157, 147 and 4 matches as of 2026-05-27)

import csv
import re
import zlib
from pathlib import Path

ROOT = Path(__file__).parent.parent
OUT_PATH = ROOT / "tables" / "stage_hash40_map.csv"

# The search also hits BATTLE_OBJECT_*, battle_object, battle_color_*, battle_in/out/loop and so on,
# so only capitalized stage names like Battle_<Theme>_<Sub> are kept
STAGE_NAMES = [
    "Battle_Animal_City", "Battle_Animal_Island", "Battle_Animal_Village",
    "Battle_BalloonFight", "Battle_Bayo_Clock", "Battle_Brave_Altar",
    "Battle_Buddy_Spiral", "Battle_Demon_Dojo",
    "Battle_DK_Jungle", "Battle_DK_Lodge", "Battle_DK_WaterFall",
    "Battle_Dolly_Stadium", "Battle_Dracula_Castle", "Battle_DuckHunt",
    "Battle_End",
    "Battle_FE_Arena", "Battle_FE_Colloseum", "Battle_FE_Shrine", "Battle_FE_Siege",
    "Battle_FF_Cave", "Battle_FF_Midgar", "Battle_FlatZoneX",
    "Battle_Fox_Corneria", "Battle_Fox_LylatCruise", "Battle_Fox_Venom",
    "Battle_Fzero_Bigblue", "Battle_Fzero_Mutecity3DS", "Battle_Fzero_Porttown",
    "Battle_Icarus_Angeland", "Battle_Icarus_SkyWorld", "Battle_Icarus_Uprising",
    "Battle_Ice_Top",
    "Battle_Jack_Mementoes", "Battle_Kart_CircuitFor", "Battle_Kart_CircuitX",
    "Battle_Kirby_Cave", "Battle_Kirby_Fountain", "Battle_Kirby_Gameboy",
    "Battle_Kirby_Greens", "Battle_Kirby_Halberd", "Battle_Kirby_Pupupu64",
    "Battle_LuigiMansion", "Battle_MarioBros",
    "Battle_Mario_3DLand", "Battle_Mario_Castle64", "Battle_Mario_CastleDx",
    "Battle_Mario_Dolpic", "Battle_Mario_Galaxy", "Battle_Mario_Maker",
    "Battle_Mario_NewBros2", "Battle_Mario_Odyssey", "Battle_Mario_Paper",
    "Battle_Mario_Past64", "Battle_Mario_PastUsa", "Battle_Mario_PastX",
    "Battle_Mario_Rainbow", "Battle_Mario_Uworld",
    "Battle_Metroid_Kraid", "Battle_Metroid_Norfair", "Battle_Metroid_Orpheon",
    "Battle_Metroid_ZebesDx", "Battle_MG_Shadowmoses",
    "Battle_Mother_Fourside", "Battle_Mother_Magicant", "Battle_Mother_Newpork",
    "Battle_Mother_Onett", "Battle_Nintendogs", "Battle_Pac_Land",
    "Battle_Pickel_World", "Battle_Pictochat2", "Battle_Pikmin_Garden",
    "Battle_Pikmin_Planet", "Battle_Pilotwings", "Battle_Plankton",
    "Battle_Poke_Kalos", "Battle_Poke_Stadium", "Battle_Poke_Stadium2",
    "Battle_Poke_Tengam", "Battle_Poke_Tower", "Battle_Poke_Unova",
    "Battle_Poke_Yamabuki", "Battle_PunchOutSB", "Battle_PunchOutW",
    "Battle_Rock_Wily", "Battle_SF_Suzaku",
    "Battle_Sonic_Greenhill", "Battle_Sonic_Windyhill", "Battle_Spla_Parking",
    "Battle_StreetPass", "Battle_Tantan_Spring", "Battle_Tomodachi",
    "Battle_Trail_Castle", "Battle_Wario_Gamer", "Battle_Wario_Madein",
    "Battle_WiiFit", "Battle_WreckingCrew", "Battle_WufuIsland",
    "Battle_Xeno_Alst", "Battle_Xeno_Gaur",
    "Battle_Yoshi_CartBoard", "Battle_Yoshi_Island", "Battle_Yoshi_Story",
    "Battle_Yoshi_Yoster",
    "Battle_Zelda_Gerudo", "Battle_Zelda_Greatbay", "Battle_Zelda_Hyrule",
    "Battle_Zelda_Oldin", "Battle_Zelda_Pirates", "Battle_Zelda_Skyward",
    "Battle_Zelda_Temple", "Battle_Zelda_Tower", "Battle_Zelda_Train",

    "End_Animal_City", "End_Animal_Island", "End_Animal_Village",
    "End_BalloonFight", "End_BattleField", "End_Bayo_Clock", "End_Brave_Altar",
    "End_Buddy_Spiral", "End_Demon_Dojo",
    "End_DK_Jungle", "End_DK_Lodge", "End_DK_WaterFall",
    "End_Dolly_Stadium", "End_Dracula_Castle", "End_DuckHunt",
    "End_FE_Arena", "End_FE_Colloseum", "End_FE_Siege", "End_FF_Cave",
    "End_FF_Midgar", "End_FlatZoneX",
    "End_Fox_Corneria", "End_Fox_LylatCruise", "End_Fox_Venom",
    "End_Fzero_Bigblue", "End_Fzero_Mutecity3DS", "End_Fzero_Porttown",
    "End_Icarus_Angeland", "End_Icarus_SkyWorld", "End_Icarus_Uprising",
    "End_Ice_Top",
    "End_Jack_Mementoes", "End_Kart_CircuitFor", "End_Kart_CircuitX",
    "End_Kirby_Cave", "End_Kirby_Fountain", "End_Kirby_Gameboy",
    "End_Kirby_Greens", "End_Kirby_Halberd", "End_Kirby_Pupupu64",
    "End_LuigiMansion", "End_MarioBros",
    "End_Mario_3DLand", "End_Mario_Castle64", "End_Mario_CastleDx",
    "End_Mario_Dolpic", "End_Mario_Galaxy", "End_Mario_Maker",
    "End_Mario_NewBros2", "End_Mario_Odyssey", "End_Mario_Paper",
    "End_Mario_Past64", "End_Mario_PastUsa", "End_Mario_PastX",
    "End_Mario_Rainbow", "End_Mario_Uworld",
    "End_Metroid_Kraid", "End_Metroid_Norfair", "End_Metroid_Orpheon",
    "End_Metroid_ZebesDx", "End_MG_Shadowmoses",
    "End_Mother_Fourside", "End_Mother_Magicant", "End_Mother_Newpork",
    "End_Mother_Onett", "End_Nintendogs", "End_Pac_Land",
    "End_Pickel_World", "End_Pictochat2", "End_Pikmin_Garden",
    "End_Pikmin_Planet", "End_Pilotwings", "End_Plankton",
    "End_Poke_Kalos", "End_Poke_Stadium", "End_Poke_Stadium2",
    "End_Poke_Tengam", "End_Poke_Tower", "End_Poke_Unova",
    "End_Poke_Yamabuki", "End_PunchOutSB", "End_PunchOutW",
    "End_Rock_Wily", "End_SF_Suzaku",
    "End_Sonic_Greenhill", "End_Sonic_Windyhill", "End_Spla_Parking",
    "End_StreetPass", "End_Tantan_Spring", "End_Tomodachi",
    "End_Trail_Castle", "End_Wario_Gamer", "End_Wario_Madein",
    "End_WiiFit", "End_WreckingCrew", "End_WufuIsland",
    "End_Xeno_Alst", "End_Xeno_Gaur",
    "End_Yoshi_CartBoard", "End_Yoshi_Island", "End_Yoshi_Story",
    "End_Yoshi_Yoster",
    "End_Zelda_Gerudo", "End_Zelda_Greatbay", "End_Zelda_Hyrule",
    "End_Zelda_Oldin", "End_Zelda_Pirates", "End_Zelda_Skyward",
    "End_Zelda_Temple", "End_Zelda_Tower", "End_Zelda_Train",

    "BattleField",
    "BattleField_L",
    "BattleField_S",
]


def hash40(s: str) -> int:
    lower = s.lower()
    crc = zlib.crc32(lower.encode("utf-8")) & 0xFFFFFFFF
    return (len(lower) << 32) | crc


def categorize(name: str) -> str:
    if name.startswith("BattleField"):
        if name == "BattleField":      return "battlefield"
        if name.endswith("_L"):        return "battlefield_l"
        if name.endswith("_S"):        return "battlefield_s"
        return "battlefield"
    if name.startswith("End_"):
        return "end_form"
    if name.startswith("Battle_"):
        if name == "Battle_End":
            # plain Final Destination stage (guess)
            return "final_destination"
        return "normal_form"
    return "unknown"


def theme_of(name: str) -> str:
    for prefix in ("Battle_", "End_"):
        if name.startswith(prefix):
            return name[len(prefix):]
    return name


def main():
    OUT_PATH.parent.mkdir(parents=True, exist_ok=True)
    rows = []
    for name in STAGE_NAMES:
        h = hash40(name)
        rows.append({
            "hash40_hex": f"0x{h:x}",
            "hash40_dec": h,
            "internal_name": name,
            "kind": categorize(name),
            "theme": theme_of(name),
        })
    rows.sort(key=lambda r: (r["theme"], r["kind"]))
    with OUT_PATH.open("w", encoding="utf-8", newline="") as f:
        w = csv.DictWriter(f, fieldnames=["hash40_hex", "hash40_dec", "internal_name", "kind", "theme"])
        w.writeheader()
        w.writerows(rows)
    print(f"wrote {OUT_PATH.relative_to(ROOT)} ({len(rows)} entries)")
    by_kind = {}
    for r in rows:
        by_kind[r["kind"]] = by_kind.get(r["kind"], 0) + 1
    for k, v in sorted(by_kind.items()):
        print(f"  {k}: {v}")


if __name__ == "__main__":
    main()
