# 100 (funcs=18, hits=47)

Top 50 functions by hit count

## 1. `FUN_7102182bb0`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102182bb0`  (offset `0x2182bb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102182bb0(void)`
- **Size / BBs / Incoming:** 12184 bytes / 19 bb / 1 incoming refs
- **Match values:** 100
- **Strings touched:** FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_START;FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_EXTEND_BUFFER;FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_TWINKLE_AIR_EFFECT_HANDLE;FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_TERM;WEAPON_DIDDY_EXPLOSION_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_MOTION_RATE;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_START;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_AIR_SPECIAL_LW;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_REBIRTH_XLU;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_ENTRY;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_GENERATE_TICO_ON_START;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_COMBINE_JOSTLE;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_ROSETTA_LINK_NO_START;FIGHTER_ROSETTA_LINK_NO_TICO;FIGHTER_ROSETTA_LINK_NO_TERM;FIGHTER_ROSETTA_CLIFF_HANG_DATA_DEFAULT;FIGHTER_ROSETTA_CLIFF_HANG_DATA_SPECIAL_HI_JUMP;FIGHTER_ROSETTA_CLIFF_HANG_DATA_SPECIAL_HI_END;FIGHTER_ROSETTA_CLIFF_HANG_DATA_TERM;FIGHTER_ROSETTA_AREA_KIND_START;FIGHTER_ROSETTA_AREA_KIND_SPECIAL_LW_ITEM_SEARCH;FIGHTER_ROSETTA_AREA_KIND_SPECIAL_LW_ITEM_PICKUP;FIGHTER_ROSETTA_AREA_KIND_TERM;FIGHTER_ROSETTA_AREA_KIND_NUM;FIGHTER_ROSETTA_KINETIC_ENERGY_ID_START;FIGHTER_ROSETTA_KINETIC_ENERGY_ID_TERM;FIGHTER_KINETIC_TYPE_ROSETTA_START;FIGHTER_KINETIC_TYPE_ROSETTA_SPECIAL_N;FIGHTER_KINETIC_TYPE_ROSETTA_SPECIAL_AIR_N;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102182bb0__7102182bb0.c)  [cfg](../decompiled/FUN_7102182bb0__7102182bb0.mmd)
- **Clone hash:** `bfd7b1f8583a126f`

```c

void FUN_7102182bb0(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_EXTEND_BUFFER",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_TWINKLE_AIR_EFFECT_HANDLE",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_68 = 0xfffffffd;
  local_78 = 0;
  local_70 = 0;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_START",(undefined **)0x4b
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_MOTION_RATE",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_TERM",(undefined **)0x4d,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000df,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_AIR_SPECIAL_LW",
// ... (1350 more lines)
```

## 2. `FUN_710000c9d0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000c9d0`  (offset `0xc9d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710000c9d0(void)`
- **Size / BBs / Incoming:** 7016 bytes / 461 bb / 2 incoming refs
- **Match values:** 100
- **Strings touched:** User-Agent:;Referer:;Cookie:;Referer: %s
;select_item;Accept-Encoding:;Accept-Encoding: %s
;Connection:;%s, TE
TE: gzip
;Connection: TE
TE: gzip
;Transfer-Encoding:;chunked;Transfer-Encoding: chunked
;Host:;dys_yoga03_l_03_set;Host: %s%s%s
;Host: %s%s%s:%hu
;Content-Type:;Accept:;Accept: */*
;plate_side;File already completely uploaded;ftp://;;type=;Range:;Chunky upload is not supported by HTTP 1.0;Range: bytes=%s
;ftp://%s:%s@%s;Content-Range:;Content-Range: bytes %s%ld/%ld
;Content-Range: bytes 0-%ld/%ld
;Content-Range: bytes %s/%ld
;...
- **Callees:** FUN_7100002080;FUN_7100002540;FUN_7100007ef0;FUN_7100007fd0;FUN_710000bba0;FUN_710000e840;FUN_710000ec90;FUN_710000f280;FUN_710000f530;FUN_710000f600;FUN_710000f6f0;FUN_710000f7f0;FUN_710000fa20;FUN_7100011ba0;FUN_7100011c00;FUN_7100012300;...
- **Files:** [decomp](../decompiled/FUN_710000c9d0__710000c9d0.c)  [cfg](../decompiled/FUN_710000c9d0__710000c9d0.mmd)
- **Clone hash:** `30388a151ac3798e`

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_710000c9d0(long *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                    ulong *param_5,ulong param_6,ulong param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  size_t __n;
  size_t sVar11;
  char *pcVar12;
  size_t sVar13;
  long *plVar14;
  void *pvVar15;
  byte *pbVar16;
  char *pcVar17;
  char *pcVar18;
  FILE *pFVar19;
  undefined *puVar20;
  long *plVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 uVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
// ... (1114 more lines)
```

## 3. `FUN_7103371290`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103371290`  (offset `0x3371290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103371290(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12368 bytes / 333 bb / 3 incoming refs
- **Match values:** 100
- **Strings touched:** key_context;MetatableLayoutRoot;__index;MetatableLayoutView;MetatableLayoutPane;MetatableLayoutButton;plate_side;MetatableLayoutView_Animation;MetatableLayoutButtonSelector;MetatableLayoutButtonSelectorGlobal;LayoutButtonSelector;MetatableLayoutListScroller;MetatableLayoutRangeSlider;MetatableLayoutRangeSliderGlobal;LayoutRangeSlider;MetatableLayoutListWindow;deactivate;activate;close;is_busy;update;get_result;MetatableLayoutSubMenu;clear_result;MetatableLayoutButtonSelectorConfig;LayoutButtonSelectorConfig;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_DIRECTIONAL;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_SEQUENTIAL;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_GRID;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_POINTER;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_AABB;MetatableLayoutRangeSliderConfig;...
- **Callers:** FUN_7101af2070;FUN_71022f2b20;FUN_71032cb040
- **Callees:** FUN_7103375650;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;FUN_71038f5390;FUN_71038f5c00;FUN_71038f7260;FUN_71038f9510;FUN_71038fec40;FUN_710391e050;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_7103371290__7103371290.c)  [cfg](../decompiled/FUN_7103371290__7103371290.mmd)
- **Clone hash:** `acf8abf14fe11fb8`

```c

void FUN_7103371290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *local_370;
  undefined *puStack_368;
  undefined *local_360;
  undefined *puStack_358;
  undefined *local_350;
  undefined *puStack_348;
  undefined *local_340;
  undefined *puStack_338;
  undefined *local_330;
  undefined *puStack_328;
  undefined *local_320;
  undefined *puStack_318;
  undefined *local_310;
  undefined *puStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  
  FUN_71038f4b20(param_1,"key_context");
  FUN_71038f4fc0(param_1,-0xf4628);
  plVar5 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar2 == 2) {
    puVar8 = (undefined8 *)*plVar5;
  }
  else if (uVar2 == 7) {
    puVar8 = (undefined8 *)(*plVar5 + 0x28);
  }
// ... (1658 more lines)
```

## 4. `FUN_71020fbb90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** 100
- **Strings touched:** GF_SCENE_ROOT_LAYER_GROUND;GF_SCENE_ROOT_LAYER_GROUND_AND_CHARA;TRANS_A_JUMP_AERIAL;GF_SCENE_ROOT_LAYER_CHARA;GF_SCENE_ROOT_LAYER_ALL;GF_SCENE_ROOT_LAYER_FIGHTER;GF_SCENE_ROOT_LAYER_STAGE_OBJECT;GF_SCENE_ROOT_LAYER_GROUND2;GF_SCENE_ROOT_LAYER_EFFECT;GF_SCENE_ROOT_LAYER_EFFECT_FIGHTER;GF_SCENE_ROOT_LAYER_SPECIAL_STAGE_OBJECT;GF_SCENE_ROOT_LAYER_EFFECT2D;GF_SCENE_ROOT_LAYER_INFO;GF_SCENE_ROOT_LAYER_MAX;EF_FLIP_NONE;EF_FLIP_AXIS_YZ;EF_FLIP_AXIS_ZX;EF_FLIP_AXIS_XY;EF_FLIP_1;EF_FLIP_2;EF_FLIP_TRANS_X;EF_FLIP_TRANS_Y;EF_FLIP_TRANS_Z;EF_FLIP_ROT_X;EF_FLIP_ROT_Y;EF_FLIP_ROT_Z;EF_FLIP_SCALE_X;EF_FLIP_SCALE_Y;EF_FLIP_SCALE_Z;EF_FLIP_PTCL_X;EF_FLIP_PTCL_Y;EF_FLIP_BITCTRL;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020fbb90__71020fbb90.c)  [cfg](../decompiled/FUN_71020fbb90__71020fbb90.mmd)
- **Clone hash:** `884095f7b78c7d69`

```c

void FUN_71020fbb90(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  long local_78;
  long local_70;
  int local_68;
  
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_GROUND",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_GROUND_AND_CHARA",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_CHARA",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_ALL",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_FIGHTER",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_STAGE_OBJECT",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_GROUND2",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_EFFECT",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_EFFECT_FIGHTER",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_SPECIAL_STAGE_OBJECT",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_EFFECT2D",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_INFO",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_MAX",(undefined **)&DAT_00000004,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
// ... (15385 more lines)
```

## 5. `FUN_7101f89310`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** 100
- **Strings touched:** FIGHTER_AI_PLAYER_MAX;FIGHTER_AI_FIGHTER_MAX;FIGHTER_AI_ENEMY_INDEX;FIGHTER_AI_OBJECT_MAX;FIGHTER_AI_INPUT_BUFFER_MAX;FIGHTER_AI_MARK_WEAPON_MAX;FIGHTER_AI_ENEMY_MAX;FIGHTER_AI_CP_RANK_MAX;FIGHTER_AI_CP_LEVEL_9;FIGHTER_AI_CP_LEVEL_8;FIGHTER_AI_CP_LEVEL_7;FIGHTER_AI_CP_LEVEL_6;FIGHTER_AI_CP_LEVEL_5;FIGHTER_AI_CP_LEVEL_4;FIGHTER_AI_CP_LEVEL_3;FIGHTER_AI_CP_LEVEL_2;FIGHTER_AI_CP_LEVEL_1;FIGHTER_AI_MELEE_CP_LEVEL_9;FIGHTER_AI_MELEE_CP_LEVEL_8;FIGHTER_AI_MELEE_CP_LEVEL_7;FIGHTER_AI_MELEE_CP_LEVEL_6;FIGHTER_AI_MELEE_CP_LEVEL_5;FIGHTER_AI_MELEE_CP_LEVEL_4;FIGHTER_AI_MELEE_CP_LEVEL_3;gauge_parts_on;FIGHTER_AI_MELEE_CP_LEVEL_2;FIGHTER_AI_MELEE_CP_LEVEL_1;FIGHTER_AI_ITEM_PRIORITY_MAX;FIGHTER_AI_ITEM_PRIORITY_HIGH;FighterAICPType;CPU_NORMAL;CPU_STAY;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101f89310__7101f89310.c)  [cfg](../decompiled/FUN_7101f89310__7101f89310.mmd)
- **Clone hash:** `f6405f789c3fe6a5`

```c

void FUN_7101f89310(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  long local_68;
  long local_60;
  int local_58;
  
  local_60 = 0;
  local_58 = -3;
  local_68 = param_1;
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_PLAYER_MAX",(undefined **)&DAT_00000008,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_FIGHTER_MAX",(undefined **)&DAT_00000010,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_ENEMY_INDEX",(undefined **)&DAT_00000010,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_OBJECT_MAX",(undefined **)&DAT_00000011,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_INPUT_BUFFER_MAX",(undefined **)&DAT_00000010,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_MARK_WEAPON_MAX",(undefined **)&DAT_00000004,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_ENEMY_MAX",(undefined **)0xa,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_RANK_MAX",(undefined **)&DAT_00000064,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_9",(undefined **)&DAT_00000064,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_8",(undefined **)0x4b,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_7",(undefined **)&DAT_0000003c,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_6",(undefined **)&DAT_00000030,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_5",(undefined **)&DAT_0000002a,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_4",(undefined **)0x1f,param_4,param_5,
// ... (2673 more lines)
```

## 6. `FUN_7101856ad0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101856ad0`  (offset `0x1856ad0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101856ad0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10044 bytes / 503 bb / 1 incoming refs
- **Match values:** 100
- **Strings touched:** selector;selector_01;set_txt_modecategory;mnu_local_new_rm_oth_btn_01;pic_100;mark_100;set_txt_mode;mnu_local_new_rm_mel_btn_02;pic_verious;mark_verious;mnu_local_new_rm_oth_btn_03;pic_nasake;mark_nasake;mnu_local_new_rm_mel_btn_00;pic_melee;mark_melee;mnu_local_new_rm_mel_btn_03;pic_ssdn;mark_ssdn;mnu_local_new_rm_mel_btn_top;mode_melee;mnu_local_new_rm_oth_btn_02;pic_all;mark_all;mode_standard;set_txt_mode_off;set_txt_mode_on;ly01_melee;ly02_standard
- **Callees:** FUN_71000001c0;FUN_7101696040;FUN_7101764000;FUN_71017a3910;FUN_71017ab0c0;FUN_71017dcc40;FUN_7101989a30;FUN_7101a7ed70;FUN_7101bdd9d0;FUN_7101bddb60;FUN_7101bddd60;FUN_7101bddd70;FUN_7101bddf10;FUN_7101bddf20;FUN_7101bde0e0;FUN_7101bde0f0;...
- **Files:** [decomp](../decompiled/FUN_7101856ad0__7101856ad0.c)  [cfg](../decompiled/FUN_7101856ad0__7101856ad0.mmd)
- **Clone hash:** `6b77f552b7a3c4ed`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101856ad0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  short sVar6;
  char cVar7;
  undefined8 uVar8;
  int iVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  char cVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined6 uVar17;
  undefined4 uVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 **ppuVar25;
  long *plVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ulong *puVar30;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
// ... (6550 more lines)
```

## 7. `FUN_7102d12300`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102d12300`  (offset `0x2d12300`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102d12300(long * param_1, long param_2, long * * * * param_3, char * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 1812 bytes / 88 bb / 1 incoming refs
- **Match values:** 100
- **Strings touched:** jumpScore_100_base;jumpScore_300_base;jumpScore_500_base;jumpScore_1000_base;jumpScore_7650_base
- **Callers:** FUN_7102d01fe0
- **Callees:** FUN_71026533a0;FUN_7102d0c0f0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strlen;<EXTERNAL>::memcpy;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__basic_string_common<true>::__throw_length_error;<EXTERNAL>::abort;<EXTERNAL>::std::string::compare
- **Files:** [decomp](../decompiled/FUN_7102d12300__7102d12300.c)  [cfg](../decompiled/FUN_7102d12300__7102d12300.mmd)
- **Clone hash:** `aff6f81a31736a51`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102d12300(long *param_1,long param_2,long ****param_3,char *param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  long ***ppplVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  char *__s;
  long ****pppplVar11;
  void *__dest;
  byte *pbVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  long ****pppplVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  long ****pppplVar22;
  long ***ppplVar23;
  long ***local_f0;
  long ****local_e8;
  void *local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  long local_c0;
  undefined8 uStack_b8;
// ... (306 more lines)
```

## 8. `FUN_710341c640`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710341c640`  (offset `0x341c640`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710341c640(undefined8 param_1, long * param_2)`
- **Size / BBs / Incoming:** 340 bytes / 12 bb / 1 incoming refs
- **Match values:** 100
- **Strings touched:** phong0__sfx_0x92001001___NORMEXP16___VTC__A_AB_AT_ZERO_;phong1__sfx_0x92001001___NORMEXP16___VTC__A_AB_AT_ZERO_
- **Callees:** FUN_71003a9ab0;FUN_71003ac560;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_710341c640__710341c640.c)  [cfg](../decompiled/FUN_710341c640__710341c640.mmd)
- **Clone hash:** `69e58cea456861ff`

```c

void FUN_710341c640(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_2[4];
  uVar4 = (**(code **)(*param_2 + 1000))(param_2);
  lVar5 = FUN_71003ac560(uVar4);
  if ((((lVar5 == 0) || (*(byte *)(lVar5 + 0x3a) < 4)) &&
      (lVar5 = DAT_71052b70f8, (DAT_71052b7100 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(&DAT_71052b7100), lVar5 = DAT_71052b70f8, iVar3 != 0)) {
    FUN_71003a9ab0(&DAT_71052b70f0,0);
    DAT_71052b70f0 = &PTR_FUN_7104f62078;
    __cxa_guard_release(&DAT_71052b7100);
    lVar5 = DAT_71052b70f8;
  }
  lVar5 = *(long *)(lVar5 + 0x20);
  (**(code **)(**(long **)(lVar7 + 0xd0) + 0x4d0))(0xc2b40000);
  (**(code **)(**(long **)(lVar7 + 0xd0) + 0x4e0))(0xc2b40000);
  plVar6 = *(long **)(lVar5 + 0x50);
  uVar2 = (**(code **)(*plVar6 + 0x98))(plVar6,0x100000fd);
  if (uVar2 != 0xffffffff) {
    if (7 < uVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = *(long *)(DAT_7105324680 + (long)(int)uVar2 * 8 + 0xe8);
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x94);
      (**(code **)(**(long **)(lVar7 + 0x78) + 0x308))
                (*(long **)(lVar7 + 0x78),"phong0__sfx_0x92001001___NORMEXP16___VTC__A_AB_AT_ZERO_",
                 0,*(undefined4 *)(lVar5 + 0x90));
      (**(code **)(**(long **)(lVar7 + 0x78) + 0x308))
// ... (7 more lines)
```

## 9. `FUN_71019b98c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019b98c0`  (offset `0x19b98c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019b98c0(long param_1, undefined8 param_2, long * * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4068 bytes / 139 bb / 1 incoming refs
- **Match values:** 100
- **Strings touched:** over_write_start;amiibo_write; %02X;numbering_id;color;spirits_ability0;spirits_ability1;spirits_ability2;NODE_PRE_REFRACT_BLEND;lv_exp;cp_exp;prize_point;offensive;grounded;attack_out_cliff;return_to_cliff;air_offensive;feint_master;feint_counter;feint_shooter;catcher;_100_keeper;attack_cancel;dash_attacker;critical_hitter;shield_master;just_shield_master;item_collector;item_throw_to_target;cliffer;_100_attacker;smash_holder;...
- **Callees:** FUN_7100323350;FUN_71003a5020;FUN_710175dfc0;FUN_71019bbbf0;FUN_71019bc200;FUN_71022e5e10;FUN_71032626e0;FUN_71032631a0;FUN_71032633f0;FUN_7103264270;FUN_71032a2c10;FUN_71032a2f50;FUN_71032df050;FUN_71032e00b0;FUN_71032e2e70;FUN_710375aa90;...
- **Files:** [decomp](../decompiled/FUN_71019b98c0__71019b98c0.c)  [cfg](../decompiled/FUN_71019b98c0__71019b98c0.mmd)
- **Clone hash:** `37395306bc019cfe`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_71019b98c0(long param_1,undefined8 param_2,long **********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long *plVar2;
  long **********pppppppppplVar3;
  void *__src;
  int iVar4;
  byte bVar5;
  uint uVar6;
  long ****************__n;
  long **********pppppppppplVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  int *piVar16;
  long **********__dest;
  undefined1 *puVar17;
  undefined8 uVar18;
  char *pcVar19;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long **********pppppppppplVar23;
  int *piVar24;
// ... (668 more lines)
```

## 10. `FUN_7101c70500`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c70500`  (offset `0x1c70500`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_7101c70500(undefined1 param_1)`
- **Size / BBs / Incoming:** 284 bytes / 24 bb / 3 incoming refs
- **Match values:** 100
- **Strings touched:** mnu_online_room_inside_sysmsg_enter;mnu_online_room_inside_sysmsg_rule_1;mnu_online_room_inside_sysmsg_leave;mnu_online_room_inside_sysmsg_10ko;mnu_online_room_inside_sysmsg_30ko;mnu_online_room_inside_sysmsg_50ko;mnu_online_room_inside_sysmsg_100ko;mnu_online_room_inside_sysmsg_battle_finish;mnu_online_room_inside_sysmsg_cannot_battle;mnu_online_room_inside_sysmsg_battle_start;mnu_online_room_inside_sysmsg_battle_start_c;mnu_online_room_inside_sysmsg_winning_streak;mnu_online_room_inside_chat_own;mnu_online_room_inside_chat_others;mnu_online_room_inside_sysmsg_rule_changing;mnu_online_room_inside_sysmsg_rule_change;mnu_online_room_inside_sysmsg_rule_0;mnu_online_room_inside_sysmsg_rule_2;mnu_online_room_inside_sysmsg_rule_3;mnu_online_room_inside_sysmsg_rule_no_change
- **Callers:** FUN_7101c70620;FUN_7101c73ca0;FUN_7101c74c10
- **Files:** [decomp](../decompiled/FUN_7101c70500__7101c70500.c)  [cfg](../decompiled/FUN_7101c70500__7101c70500.mmd)
- **Clone hash:** `b54599076d56a440`

```c

char * FUN_7101c70500(undefined1 param_1)

{
  char *pcVar1;
  
  pcVar1 = "mnu_online_room_inside_sysmsg_enter";
  switch(param_1) {
  case 1:
    goto switchD_7101c70528_caseD_1;
  case 2:
  case 3:
    return "mnu_online_room_inside_sysmsg_leave";
  case 4:
    return "mnu_online_room_inside_sysmsg_10ko";
  case 5:
    return "mnu_online_room_inside_sysmsg_30ko";
  case 6:
    return "mnu_online_room_inside_sysmsg_50ko";
  case 7:
    return "mnu_online_room_inside_sysmsg_100ko";
  default:
    pcVar1 = "";
switchD_7101c70528_caseD_1:
    return pcVar1;
  case 9:
    return "mnu_online_room_inside_sysmsg_battle_finish";
  case 10:
    return "mnu_online_room_inside_sysmsg_cannot_battle";
  case 100:
    return "mnu_online_room_inside_sysmsg_battle_start";
  case 0x65:
    return "mnu_online_room_inside_sysmsg_battle_start_c";
  case 0x66:
    return "mnu_online_room_inside_sysmsg_winning_streak";
  case 0x67:
    return "mnu_online_room_inside_chat_own";
  case 0x68:
    return "mnu_online_room_inside_chat_others";
  case 0x69:
// ... (18 more lines)
```

## 11. `FUN_7100017ae0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100017ae0`  (offset `0x17ae0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7100017ae0(size_t * * * * * * * param_1, long param_2, char * param_3, size_t * * * * * * * param_4, size_t * * * * * * * param_5, uint * param_6, undefined8 param_7, size_t * * * * * * * param_8)`
- **Size / BBs / Incoming:** 3632 bytes / 232 bb / 1 incoming refs
- **Match values:** 100
- **Strings touched:** select/poll returned error;We are completely uploaded and fine
;NODE_PRE_REFRACT_BLEND;Ignoring the response-body
;Rewinding stream by : %zu bytes on url %s (size = %ld, maxdownload = %ld, bytecount = %ld, nread = %zd)
;Leftovers after chunking: %zu bytes
;dys_yoga03_l_03_set;Rewinding %zu bytes
;Excess found in a non pipelined read: excess = %zu, size = %ld, maxdownload = %ld, bytecount = %ld
;The requested document is not new enough
;Operation timed out after %ld milliseconds with %ld out of %ld bytes received;Done waiting for 100-continue
;Rewinding stream by : %zd bytes on url %s (zero-length body)
;plate_side;Excess found in a non pipelined read: excess = %zd url = %s (zero-length body)
;we are done reading and this is set to close, stop send
;transfer closed with outstanding read data remaining;Operation timed out after %ld milliseconds with %ld bytes received;Failed writing data;select_item;%s in chunked-encoding;transfer closed with %ld bytes remaining to read;Failed to alloc scratch buffer!;Unrecognized content encoding type. libcurl understands `identity', `deflate' and `gzip' content encodings.;The entire document is already downloaded;HTTP server doesn't seem to support byte ranges. Cannot resume.;The requested document is not old enough
;Simulate a HTTP 304 response!

- **Callers:** FUN_7100009d00
- **Callees:** FUN_7100002af0;FUN_7100004200;FUN_71000086c0;FUN_71000093f0;FUN_710000bba0;FUN_710000fb30;FUN_7100012930;FUN_7100012dc0;FUN_7100012df0;FUN_71000130b0;FUN_7100014700;FUN_7100015020;FUN_71000151d0;FUN_7100015270;FUN_7100015800;FUN_7100015de0;...
- **Files:** [decomp](../decompiled/FUN_7100017ae0__7100017ae0.c)  [cfg](../decompiled/FUN_7100017ae0__7100017ae0.mmd)
- **Clone hash:** `05edffe8f78d3329`

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_7100017ae0(size_t *******param_1,long param_2,char *param_3,size_t *******param_4,
                    size_t *******param_5,uint *param_6,undefined8 param_7,size_t *******param_8)

{
  uint *puVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar10;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long extraout_x1_04;
  long extraout_x1_05;
  long extraout_x1_06;
  long extraout_x1_07;
  long extraout_x1_08;
  undefined8 extraout_x1_09;
  long extraout_x1_10;
  long extraout_x1_11;
  long extraout_x1_12;
  long extraout_x1_13;
  long extraout_x1_14;
  char *pcVar15;
  long extraout_x1_15;
  size_t ************ppppppppppppsVar16;
// ... (707 more lines)
```

## 12. `FUN_7101bf02a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bf02a0`  (offset `0x1bf02a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bf02a0(undefined8 * param_1, long * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10668 bytes / 435 bb / 1 incoming refs
- **Match values:** 100
- **Strings touched:** SEQUENCE_NONE;SEQUENCE_TITLE;SEQUENCE_TITLE_DEMO;SEQUENCE_MELEE;SEQUENCE_MELEE_NORMAL;SEQUENCE_MELEE_TEAM_COMPE;SEQUENCE_MELEE_SPECIAL;SEQUENCE_MELEE_SPECIAL_VARIOUS;SEQUENCE_MELEE_SPECIAL_SUDDENDEATH;SEQUENCE_MELEE_SPECIAL_ALL_BATTLE;SEQUENCE_MELEE_TOURNAMENT;SEQUENCE_SPIRITS;mode_empty_03;SEQUENCE_SPIRITS_CHALLENGE;SEQUENCE_SPIRITS_CANPAIGN;SEQUENCE_SPIRITS_FORMATION;SEQUENCE_SPIRITS_CHALLENGE_SPECIAL;SEQUENCE_OTHER;SEQUENCE_OTHER_STANDARD;SEQUENCE_OTHER_KUMITE;SEQUENCE_OTHER_KUMITE_100;SEQUENCE_OTHER_KUMITE_ALLSTAR;SEQUENCE_OTHER_KUMITE_CRUEL;SEQUENCE_OTHER_HOMERUN;SEQUENCE_OTHER_HOMERUN_SINGLE;SEQUENCE_OTHER_HOMERUN_COOP;SEQUENCE_OTHER_HOMERUN_EVERYONE;SEQUENCE_OTHER_TRAINING;SEQUENCE_OTHER_CHARA_MAKE;SEQUENCE_OTHER_STAGE_MAKE;SEQUENCE_OTHER_AMIIBO;SEQUENCE_OTHER_CHALLENGER;...
- **Callers:** FUN_710185e890
- **Callees:** FUN_71000001c0;FUN_710075f050;FUN_710172a350;FUN_7101761580;FUN_7101761830;FUN_7101762400;FUN_7101763880;FUN_7101763970;FUN_7101763b40;FUN_7101764000;FUN_7101be16e0;FUN_7101be1cf0;FUN_7101be1ef0;FUN_7101be3dc0;FUN_7101be4200;FUN_71025d2a00;...
- **Files:** [decomp](../decompiled/FUN_7101bf02a0__7101bf02a0.c)  [cfg](../decompiled/FUN_7101bf02a0__7101bf02a0.mmd)
- **Clone hash:** `5467e28c510ce846`

```c

/* WARNING: Removing unreachable block (ram,0x007101bf28e4) */
/* WARNING: Removing unreachable block (ram,0x007101bf28e8) */
/* WARNING: Removing unreachable block (ram,0x007101bf28f0) */
/* WARNING: Removing unreachable block (ram,0x007101bf28f8) */
/* WARNING: Removing unreachable block (ram,0x007101bf28fc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101bf02a0(undefined8 *param_1,long *param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  ulong *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  PosixTime *pPVar12;
  void *__dest;
  PosixTime *pPVar13;
  undefined8 extraout_x1;
  long *plVar14;
  PosixTime **ppPVar15;
  long ****pppplVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  long lVar22;
  PosixTime *pPVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  long lVar26;
// ... (1797 more lines)
```

## 13. `FUN_7101744340`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101744340`  (offset `0x1744340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101744340(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6768 bytes / 29 bb / 2 incoming refs
- **Match values:** 100
- **Strings touched:** sum_record_count;common_boot_count;common_working_time;common_play_time;common_melee_total_count;common_melee_offline_count;common_melee_adhoc_count;common_vs_time_melee_count;common_vs_stock_melee_count;common_vs_life_melee_count;common_vs_melee_5_8_count;common_vs_melee_8_count;common_vs_melee_player_count;common_vs_melee_reset_count;common_damage_total_count;common_kill_total_count;common_suicide_total_count;common_gold_get_count;common_gold_used_count;common_sp_get_count;melee_time;melee_time_total;melee_normal_count;melee_team_compe_count;melee_sp_various_count;NODE_PRE_REFRACT_BLEND;melee_sp_suddendeath_count;melee_sp_all_battle_count;melee_tournament_count;spirits_have_count;spirits_get_count;spirits_summon_count;...
- **Callers:** FUN_71022d23e0
- **Callees:** FUN_71023078d0;FUN_7102309fc0;FUN_7103264270;FUN_71032a7800;FUN_71032b1e40;FUN_710375aa90;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save
- **Files:** [decomp](../decompiled/FUN_7101744340__7101744340.c)  [cfg](../decompiled/FUN_7101744340__7101744340.mmd)
- **Clone hash:** `a9cb12115ef58153`

```c

void FUN_7101744340(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  void *__s;
  long ****pppplVar5;
  long ****pppplVar6;
  long lVar7;
  long ***local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined1 local_ac;
  ulong local_68;
  undefined4 local_60;
  ulong local_58;
  ulong *local_50;
  ulong local_48;
  
  pppplVar5 = &local_c0;
  pppplVar6 = &local_c0;
  if (DAT_7105328748 != (long *)0x0) goto LAB_7101744508;
  plVar3 = (long *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_48 = local_48 & 0xffffffff00000000;
      local_c0 = (long ***)&DAT_00000010;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_48);
      param_3 = pppplVar5;
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0x10,pppplVar5,param_4,param_5,param_6,param_7,
                                          param_8), param_3 = pppplVar5, plVar3 != (long *)0x0))
      goto LAB_71017443c0;
    }
    plVar3 = (long *)0x0;
  }
// ... (522 more lines)
```

## 14. `FUN_7102d1bec0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102d1bec0`  (offset `0x2d1bec0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102d1bec0(long * param_1, long param_2, long * * * * param_3, char * param_4, long * * * * param_5, byte * * * * param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 1648 bytes / 73 bb / 6 incoming refs
- **Match values:** 100
- **Strings touched:** balloonScore_100_base;balloonScore_7650_base
- **Callers:** FUN_7102d01fe0
- **Callees:** FUN_71026533a0;FUN_7102d0c0f0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strlen;<EXTERNAL>::memcpy;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__basic_string_common<true>::__throw_length_error;<EXTERNAL>::std::string::compare
- **Files:** [decomp](../decompiled/FUN_7102d1bec0__7102d1bec0.c)  [cfg](../decompiled/FUN_7102d1bec0__7102d1bec0.mmd)
- **Clone hash:** `76bc90b96c0243ff`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102d1bec0(long *param_1,long param_2,long ****param_3,char *param_4,long ****param_5,
                   byte ****param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  char *__s;
  long ****pppplVar9;
  void *__dest;
  long ****pppplVar10;
  byte *pbVar11;
  long ***ppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  byte ****ppppbVar15;
  ulong uVar16;
  code *pcVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long ***ppplVar21;
  uint uVar22;
  long ***local_f0;
  long ****local_e8;
  void *local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  long local_c0;
  undefined8 uStack_b8;
  long ***local_b0;
// ... (276 more lines)
```

## 15. `FUN_7101f87300`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f87300`  (offset `0x1f87300`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f87300(long param_1)`
- **Size / BBs / Incoming:** 5008 bytes / 47 bb / 2 incoming refs
- **Match values:** 100
- **Strings touched:** ai_notify_event;status_kind;motion_kind;ai_deprecated;range_in;distance_in;other_in;get_target_vector;get_safe_fall;get_safe_fall_current;find_meteor_target;ai_weapon;have_item_kind;mode_empty_03;most_earliest_weapon;most_earliest_hit_frame;plate_side;constraint_object_id;pos_x;pos_y;speed;speed_x;speed_y;speed_length;ai_camera;dead_top;dead_bottom;dead_left;dead_right;ai_stage;current_id;is_small;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7101f7c910;FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101f87300__7101f87300.c)  [cfg](../decompiled/FUN_7101f87300__7101f87300.mmd)
- **Clone hash:** `5fded580af659a60`

```c

void FUN_7101f87300(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  long local_30;
  int local_28;
  
  FUN_7101f7c910(param_1);
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"ai_notify_event",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"status_kind",(long ****)FUN_7101f7ee60,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"motion_kind",(long ****)FUN_7101f7eec0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"ai_deprecated",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_38,(uint *)"range_in",(long ****)FUN_7101f7ef20,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"distance_in",(long ****)FUN_7101f7f150,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"other_in",(long ****)FUN_7101f7f380,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_target_vector",(long ****)FUN_7101f7f5b0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_safe_fall",(long ****)FUN_7101f7f740,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_safe_fall_current",(long ****)FUN_7101f7f7c0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"find_meteor_target",(long ****)FUN_7101f7f840,ppppbVar1,in_x4,
// ... (410 more lines)
```

## 16. `FUN_7101854680`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101854680`  (offset `0x1854680`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101854680(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2240 bytes / 97 bb / 1 incoming refs
- **Match values:** 100
- **Strings touched:** MELEE_NORMAL;MELEE_TEAM_COMPE;MELEE_SPECIAL_VARIOS;MELEE_SPECIAL_SUDDENDEATH;SPIRITS_CHALLENGE;OTHER_KUMITE_100;OTHER_KUMITE_ALLSTAR;OTHER_KUMITE_CRUEL;ROOT_TYPE;CANCELLED;set_mode
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_710323b9e0;FUN_710323beb0;FUN_710323cb80;FUN_71032cad20;FUN_71032caea0;FUN_71032cb040;FUN_7103375650;FUN_7103376af0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::os::SleepThread;<EXTERNAL>::abort;...
- **Files:** [decomp](../decompiled/FUN_7101854680__7101854680.c)  [cfg](../decompiled/FUN_7101854680__7101854680.mmd)
- **Clone hash:** `683b6fec24d47975`

```c

void FUN_7101854680(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  long ********pppppppplVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *******ppppppplVar13;
  long *****ppppplVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar15;
  long *********ppppppppplVar16;
  undefined **ppuVar17;
  byte ****ppppbVar18;
  long ****pppplVar19;
  byte ****ppppbVar20;
  long ******pppppplVar21;
  undefined1 auVar22 [16];
  long ********local_48;
  undefined4 local_34;
  
  lVar7 = FUN_710392e290(0x10,0xe0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar7 == 0) {
// ... (373 more lines)
```

## 17. `FUN_7102e7f540`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102e7f540`  (offset `0x2e7f540`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102e7f540(float param_1, long * param_2)`
- **Size / BBs / Incoming:** 1436 bytes / 48 bb / 2 incoming refs
- **Match values:** 100
- **Strings touched:** sfx_100_ashiba_emi
- **Callers:** FUN_7102e7e640
- **Callees:** FUN_7102e7f380
- **Files:** [decomp](../decompiled/FUN_7102e7f540__7102e7f540.c)  [cfg](../decompiled/FUN_7102e7f540__7102e7f540.mmd)
- **Clone hash:** `cc20eaaa62ce8195`

```c

void FUN_7102e7f540(float param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar4 = 3;
  if (*(int *)((long)param_2 + 0x24) == 0) {
// ... (248 more lines)
```

## 18. `FUN_7102d0ecb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102d0ecb0`  (offset `0x2d0ecb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102d0ecb0(long * param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 2468 bytes / 142 bb / 1 incoming refs
- **Match values:** 100
- **Strings touched:** tripNumber_001_O_OBJ_O_HIR;tripNumber_010_O_OBJ_O_HIR;tripNumber_100_O_OBJ_O_HIR
- **Callers:** FUN_7102d01fe0
- **Callees:** FUN_71025e9d50;FUN_710262fb80;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7102d0ecb0__7102d0ecb0.c)  [cfg](../decompiled/FUN_7102d0ecb0__7102d0ecb0.mmd)
- **Clone hash:** `a2d49c5c65b4815e`

```c

void FUN_7102d0ecb0(long *param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long ******pppppplVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  long extraout_x1_01;
  long *extraout_x1_02;
  long *extraout_x1_03;
  long *extraout_x1_04;
  long *extraout_x1_05;
  long *extraout_x1_06;
  long extraout_x1_07;
  long *extraout_x1_08;
  long *extraout_x1_09;
  long *extraout_x1_10;
  long *extraout_x1_11;
  long *extraout_x1_12;
  long extraout_x1_13;
  long *********ppppppppplVar10;
  long lVar11;
  ulong uVar12;
  long ********pppppppplVar13;
  void *pvVar14;
  long ****pppplVar15;
  long *********ppppppppplVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  long ********local_e0;
  undefined8 uStack_d8;
// ... (461 more lines)
```

