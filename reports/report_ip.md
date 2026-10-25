# ip (funcs=273, hits=1301)

Top 50 functions by hit count

## 1. `FUN_71020fbb90`  (hits=147)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** IP
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

## 2. `FUN_71021ada80`  (hits=104)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021ada80`  (offset `0x21ada80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021ada80(void)`
- **Size / BBs / Incoming:** 8120 bytes / 16 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** FIGHTER_SIMON_WHIP_REFLECT_ATTACK_OFF_ID_NUM;FIGHTER_SIMON_INSTANCE_WORK_ID_INT_START;FIGHTER_SIMON_INSTANCE_WORK_ID_INT_SPECIAL_N_DISABLE_FRAME;FIGHTER_SIMON_INSTANCE_WORK_ID_INT_WHIP_OBJECT_ID;FIGHTER_SIMON_INSTANCE_WORK_ID_INT_COFFIN_OBJECT_ID;FIGHTER_SIMON_INSTANCE_WORK_ID_INT_TERM;FIGHTER_SIMON_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_SIMON_INSTANCE_WORK_ID_FLOAT_WHIP_HOLD_STICK_MOVE_MUL;FIGHTER_SIMON_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_START;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_CROSS;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_FINAL_HIT;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_HI;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_HI_BACK_CLIFF;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_CLIFF_RAY_CHECK;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LASSO_FLAG_CHECK;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LASSO_FLAG_IS_CHECK;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LASSO_FIGHTER_SEARCH_HIT;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LASSO_DAMAGE;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_WHIP_GENERATED;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_WHIP_NO_REFLECT;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_WHIP_REFLECT;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_WHIP_REFLECT_ATTACK_OFF_ID_TOP;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_WHIP_REFLECT_ATTACK_OFF_ID_END;FIGHTER_SIMON_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_SIMON_CLIFF_HANG_DATA_ATTACK_HOLD;FIGHTER_SIMON_CLIFF_HANG_DATA_AIR_LASSO_F_HI;FIGHTER_SIMON_CLIFF_HANG_DATA_AIR_LASSO_F;FIGHTER_SIMON_CLIFF_HANG_DATA_AIR_LASSO_F_LW;FIGHTER_SIMON_CLIFF_HANG_DATA_AIR_LASSO_B_HI;FIGHTER_SIMON_CLIFF_HANG_DATA_AIR_LASSO_B;FIGHTER_SIMON_CLIFF_HANG_DATA_AIR_LASSO_B_LW;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021ada80__71021ada80.c)  [cfg](../decompiled/FUN_71021ada80__71021ada80.mmd)
- **Clone hash:** `b7108ffd4820a388`

```c

void FUN_71021ada80(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_68 = 0xfffffffd;
  local_78 = 0;
  local_70 = 0;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SIMON_WHIP_REFLECT_ATTACK_OFF_ID_NUM",(undefined **)0xa,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SIMON_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SIMON_INSTANCE_WORK_ID_INT_SPECIAL_N_DISABLE_FRAME",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SIMON_INSTANCE_WORK_ID_INT_WHIP_OBJECT_ID",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SIMON_INSTANCE_WORK_ID_INT_COFFIN_OBJECT_ID",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SIMON_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SIMON_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SIMON_INSTANCE_WORK_ID_FLOAT_WHIP_HOLD_STICK_MOVE_MUL",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SIMON_INSTANCE_WORK_ID_FLOAT_TERM",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (895 more lines)
```

## 3. `FUN_7102169590`  (hits=54)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102169590`  (offset `0x2169590`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102169590(void)`
- **Size / BBs / Incoming:** 5764 bytes / 4 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_INT_START;FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_INT_ARMOR_PARTS_NO;FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_INT_COLLISION_LOG_GROUP;FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_INT_TERM;FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_FLAG_START;FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_FLAG_FLIP_JUMP;FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_FLAG_TO_SPECIAL_LANDING;FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_SZEROSUIT_ARMOR_PARTS_BODY;FIGHTER_SZEROSUIT_ARMOR_PARTS_BUST;FIGHTER_SZEROSUIT_ARMOR_PARTS_GUN;FIGHTER_SZEROSUIT_ARMOR_PARTS_HEAD;FIGHTER_SZEROSUIT_ARMOR_PARTS_LKNEE;FIGHTER_SZEROSUIT_ARMOR_PARTS_LSHOULDER;FIGHTER_SZEROSUIT_ARMOR_PARTS_LSHOULDERSPHERE;FIGHTER_SZEROSUIT_ARMOR_PARTS_RLEG;FIGHTER_SZEROSUIT_CLIFF_HANG_DATA_START;FIGHTER_SZEROSUIT_CLIFF_HANG_DATA_AIR_LASSO;FIGHTER_SZEROSUIT_CLIFF_HANG_DATA_AIR_LASSO_HANG;FIGHTER_SZEROSUIT_CLIFF_HANG_DATA_TERM;FIGHTER_SZEROSUIT_AREA_KIND_START;FIGHTER_SZEROSUIT_AREA_KIND_TREAD;FIGHTER_SZEROSUIT_AREA_KIND_NUM;FIGHTER_SZEROSUIT_LINK_NO_PRE_START;FIGHTER_SZEROSUIT_LINK_NO_WHIP;FIGHTER_SZEROSUIT_LINK_NO_TERM;FIGHTER_SZEROSUIT_STATUS_SPECIAL_N_FLAG_START;FIGHTER_SZEROSUIT_STATUS_SPECIAL_N_FLAG_SHOOT;FIGHTER_SZEROSUIT_STATUS_SPECIAL_N_FLAG_TERM;FIGHTER_SZEROSUIT_STATUS_SPECIAL_N_WORK_INT_START;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102169590__7102169590.c)  [cfg](../decompiled/FUN_7102169590__7102169590.mmd)
- **Clone hash:** `0eb8f00ee0aee1b4`

```c

void FUN_7102169590(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_INT_ARMOR_PARTS_NO",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_INT_COLLISION_LOG_GROUP",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_68 = 0xfffffffd;
  local_78 = 0;
  local_70 = 0;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)0x4b,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_FLOAT_TERM",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000df,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_FLAG_FLIP_JUMP",
                 (undefined **)0x200000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SZEROSUIT_INSTANCE_WORK_ID_FLAG_TO_SPECIAL_LANDING",
                 (undefined **)0x200000e1,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (652 more lines)
```

## 4. `FUN_710225b990`  (hits=49)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** IP
- **Strings touched:** FIGHTER_WIIFIT_STATUS_KIND_PREV;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_HOLD;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_SHOOT;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_JUMP_CANCEL;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_END;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_JUMP;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_HEADING;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_JUMP;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_END;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_BREATH;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_SUCCESS;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_FAILURE;FIGHTER_WIIFIT_STATUS_KIND_FINAL_HOLD;FIGHTER_WIIFIT_STATUS_KIND_FINAL_END;FIGHTER_WIIFIT_STATUS_KIND_NUM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_START;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_THROW;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_TERM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_START;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_CHARGE_FRAME;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_TARGET_NUM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_MAX_HOLD_COUNT;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_NEXT_STATUS;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_TERM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLOAT_START;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLOAT_TERM;PACMAN_SPECIAL_N_ITEM_KIND_NUM;PACMAN_SPECIAL_N_ITEM_MAX_NUM;PACMAN_SPECIAL_N_RANK_MIN;PACMAN_SPECIAL_N_RANK_MAX;PACMAN_SPECIAL_N_RANK_NUM;...
- **Callers:** FUN_710226f500
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710225b990__710225b990.c)  [cfg](../decompiled/FUN_710225b990__710225b990.mmd)
- **Clone hash:** `32c74e885489c363`

```c

void FUN_710225b990(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long local_78;
  long local_70;
  int local_68;
  
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_PREV",(undefined **)&DAT_000001e0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_HOLD",(undefined **)0x1e1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_SHOOT",
                 (undefined **)&DAT_000001e2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL",(undefined **)0x1e3
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_JUMP_CANCEL",
                 (undefined **)0x1e4,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_END",(undefined **)0x1e5,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_JUMP",(undefined **)0x1e6,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_HEADING",
                 (undefined **)0x1e7,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_JUMP",
                 (undefined **)&DAT_000001e8,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_END",(undefined **)0x1e9,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_BREATH",
                 (undefined **)0x1ea,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_SUCCESS",
                 (undefined **)0x1eb,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_FAILURE",
                 (undefined **)0x1ec,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_FINAL_HOLD",
                 (undefined **)&DAT_000001ed,param_4,param_5,param_6,param_7,param_8);
// ... (7200 more lines)
```

## 5. `FUN_7102a952d0`  (hits=28)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102a952d0`  (offset `0x2a952d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102a952d0(undefined8 param_1, long param_2, undefined8 param_3, long * * * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 15540 bytes / 867 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0017;IPP0001;IPP0002;IPP0003;IPP0010;IPP0005;IPP0006;IPP0008;IPP0019;IPP0009;plate_side;IPP0011;IPP0012;00_C_Platform06R;00_C_Platform07L;00_C_Platform07R;IPP0013;IPP0020;00_C_Platform06L
- **Callees:** FUN_71000001c0;FUN_71003a9ab0;FUN_71003ac560;FUN_71003d7950;FUN_7100532bc0;FUN_7101764000;FUN_7102405040;FUN_71025dd540;FUN_71025e9d50;FUN_71025effe0;FUN_71025f4d80;FUN_71025f5420;FUN_71025f55b0;FUN_710260fdd0;FUN_710260ffb0;FUN_7102a98fe0;...
- **Files:** [decomp](../decompiled/FUN_7102a952d0__7102a952d0.c)  [cfg](../decompiled/FUN_7102a952d0__7102a952d0.mmd)
- **Clone hash:** `da11b27fa1ee1e7e`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102a952d0(undefined8 param_1,long param_2,undefined8 param_3,long ****param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   undefined8 param_8,undefined8 param_9)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
// ... (3276 more lines)
```

## 6. `FUN_71021c4020`  (hits=25)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021c4020`  (offset `0x21c4020`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021c4020(void)`
- **Size / BBs / Incoming:** 14396 bytes / 28 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_START;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_LEG;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_2ND_PART_SET;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_BOTH_RESTRICT_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_STRANS_OFF_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_HOLD_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_NEXT_STATUS;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MAP_COLL_FRAME_L;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MAP_COLL_FRAME_R;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_SLOW_MAG;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_SLOW_MAG_PREV;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_SLOW_COUNT;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_SLOW_COUNT_PREV;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_PUNCH_KIND_R;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_MOTION_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_WAIT_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_DISABLE_PASS_COUNT;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPIRAL_OBJECT_ID;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REFLECTOR_ATTACK_HI4_HITSTOP_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REFLECTOR_ATTACK_HI4_HITSTOP_ID;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ARM_L_BIG_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_L;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_R;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_CATCH_START_COUNT;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021c4020__71021c4020.c)  [cfg](../decompiled/FUN_71021c4020__71021c4020.mmd)
- **Clone hash:** `b74f5de86553eaa1`

```c

void FUN_71021c4020(void)

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
  local_68 = -3;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_LEG",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_2ND_PART_SET",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_BOTH_RESTRICT_FRAME",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_STRANS_OFF_FRAME",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_HOLD_FRAME",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_NEXT_STATUS",
                 (undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME",
// ... (1597 more lines)
```

## 7. `FUN_7101f45620`  (hits=22)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** IP;iP;ip
- **Strings touched:** ItemManager;get_num_of_ownered_item;get_num_of_active_item_all;get_active_item;find_active_item_from_id;find_active_item_from_area_id;remove_item_from_id;is_change_fighter_restart_position;ItemParamAccessor;boss_common_param_int;is_valid_self_param;get_self_param_float;get_self_param_int;GimmickEventPresenter;dispatch_event_from_fighter;StageManager;stage_all_stop;is_discretion_final_enabled;BossManager;is_stoppable_se;notify_on_boss_defeat;notify_on_boss_keyoff_bgm;notify_on_boss_dead;sv_set_status_func;sv_set_status_func_str;Weapon;get_founder_id;get_pocket_founder_id;WeaponKineticEnergyGravity;set_accel;set_speed;get_limit_speed;...
- **Callers:** FUN_71022b7100
- **Callees:** FUN_71000001c0;FUN_7101f87300;FUN_7101f89130;FUN_7101f89310;FUN_7101f94540;FUN_7101f95230;FUN_7102123d40;FUN_71021368b0;FUN_7102137e70;FUN_71021408e0;FUN_7102144140;FUN_7102146bf0;FUN_710214a020;FUN_710214fdf0;FUN_7102151c30;FUN_71021539b0;...
- **Files:** [decomp](../decompiled/FUN_7101f45620__7101f45620.c)  [cfg](../decompiled/FUN_7101f45620__7101f45620.mmd)
- **Clone hash:** `47a872489deece59`

```c

void FUN_7101f45620(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar6;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  code *pcVar7;
  byte ****ppppbVar8;
  long lVar9;
  long **pplVar10;
  long ***ppplVar11;
  long lVar12;
  long lVar13;
  long ***ppplVar14;
  uint *__s;
  undefined1 auVar15 [16];
  undefined4 local_84;
  long ***local_80;
  undefined8 local_78;
  int local_70;
  
  if (lib::Singleton<lib::LuaManager>::instance_ != (long *)0x0) goto LAB_7101f456b4;
  plVar2 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = extraout_x1;
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_84 = 0;
// ... (19486 more lines)
```

## 8. `FUN_7102a98fe0`  (hits=17)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102a98fe0`  (offset `0x2a98fe0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102a98fe0(long param_1, undefined4 param_2)`
- **Size / BBs / Incoming:** 564 bytes / 22 bb / 3 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0001;IPP0002;IPP0003;IPP0004;IPP0017;IPP0018;IPP0005;IPP0007;IPP0009;plate_side;IPP0011;IPP0012;IPP0014;IPP0021;IPP0015;IPP0016
- **Callers:** FUN_7102a94430;FUN_7102a952d0
- **Callees:** FUN_71025f5420
- **Files:** [decomp](../decompiled/FUN_7102a98fe0__7102a98fe0.c)  [cfg](../decompiled/FUN_7102a98fe0__7102a98fe0.mmd)
- **Clone hash:** `d3939745f22396e1`

```c

void FUN_7102a98fe0(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1];
  for (puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0xaa0); puVar3 != puVar4;
      puVar3 = puVar3 + 1) {
    plVar7 = (long *)*puVar3;
    if ((char)plVar7[4] != '\0') {
      plVar1 = (long *)plVar7[1];
      lVar2 = plVar7[2];
      lVar8 = *plVar7;
      *(undefined1 *)(plVar7 + 4) = 0;
      *plVar1 = lVar8;
      *(long **)(lVar8 + 8) = plVar1;
      *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -1;
      *plVar7 = 0;
      plVar7[1] = 0;
      puVar9 = *(undefined8 **)(lVar2 + 0x40);
      *plVar7 = lVar2 + 0x38;
      plVar7[1] = (long)puVar9;
      *(long **)(lVar2 + 0x40) = plVar7;
      *puVar9 = plVar7;
      *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + 1;
      iVar6 = 0;
      if (plVar7[3] != 0) {
        iVar6 = *(int *)(plVar7[3] + 0x110);
      }
      *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) - iVar6;
    }
// ... (77 more lines)
```

## 9. `FUN_7102df0260`  (hits=16)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102df0260`  (offset `0x2df0260`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102df0260(long param_1)`
- **Size / BBs / Incoming:** 3052 bytes / 79 bb / 1 incoming refs
- **Match values:** ip
- **Strings touched:** ripple
- **Callees:** FUN_71025e0bc0;FUN_7103594510;FUN_710359a740;FUN_71035a2f20;<EXTERNAL>::memset;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7102df0260__7102df0260.c)  [cfg](../decompiled/FUN_7102df0260__7102df0260.mmd)
- **Clone hash:** `22bcc5b8a987e5c7`

```c

void FUN_7102df0260(long param_1)

{
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
// ... (367 more lines)
```

## 10. `FUN_7101fc7f30`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fc7f30`  (offset `0x1fc7f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fc7f30(long param_1)`
- **Size / BBs / Incoming:** 8568 bytes / 4 bb / 2 incoming refs
- **Match values:** IP
- **Strings touched:** sv_animcmd;is_excute;frame;execute;frame_clear;wait_loop;wait_loop_sync_mot;wait_loop_clear;IT_JUST_FRAME;get_value_int;get_value_float;IS_RANDOM;IS_EXIST_ARTICLE;IS_GENERATABLE_ARTICLE;IS_FIGHTER_STATUS_KIND;IS_STATUS_KIND;IS_HAVE_ITEM_KIND;IS_MENU;ATK_POWER;ATK_NO_ATTACKER_LOG;ATTACK;ATTACK_IND;ATTACK_IGNORE_THROW;ATTACK_ABS;ATK_HIT_ABS;ATTACK_LEGACY;ATTACK_ABS_LEGACY;ATTACK_ABS_STRENGTH;ATTACK_FP;ATTACK_FP_REAC;ATTACK_FP_ATKW;ATTACK_FP_STRENGTH;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101fc7f30__7101fc7f30.c)  [cfg](../decompiled/FUN_7101fc7f30__7101fc7f30.mmd)
- **Clone hash:** `55798d06d10f6e50`

```c

void FUN_7101fc7f30(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_28;
  long local_20;
  int local_18;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_28,param_1,(undefined **)"sv_animcmd",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_excute",(long ****)FUN_7101fa3fc0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_7104290589,(long ****)FUN_7101fa3ff0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"frame",(long ****)FUN_7101fa4040,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"execute",(long ****)FUN_7101fa4180,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"frame_clear",(long ****)FUN_7101fa42f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_7104422f3e,(long ****)FUN_7101fa4310,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"wait_loop",(long ****)app::sv_animcmd::wait_loop,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"wait_loop_sync_mot",
                 (long ****)app::sv_animcmd::wait_loop_sync_mot,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"wait_loop_clear",(long ****)app::sv_animcmd::wait_loop_clear,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"IT_JUST_FRAME",(long ****)FUN_7101fa4480,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_value_int",(long ****)FUN_7101fa46c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_value_float",(long ****)FUN_7101fa47a0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"IS_RANDOM",(long ****)FUN_7101fa4880,ppppbVar1,in_x4,in_x5,in_x6
// ... (689 more lines)
```

## 11. `FUN_71021539b0`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021539b0`  (offset `0x21539b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021539b0(void)`
- **Size / BBs / Incoming:** 6144 bytes / 7 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_START;FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIT_FRAME;FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE;FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE;FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_OBAKYUMU_OBJECT_ID;FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_OBAKYUMU_CONNECTOR_OBJECT_ID;FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_TERM;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOP;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_CHARGE_MELEE_NO_RANDOM;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_BUOYANCY;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_FINAL_IS_ROCKET_BELT_ATTACHED;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_CRITICAL_HIT_CAMERA;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DEBUG_DISCHARGE;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_CATCH_SEARCH;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_MARIO_STATUS_KIND_SPECIAL_LW_CHARGE;FIGHTER_LUIGI_LINK_NO_START;FIGHTER_LUIGI_LINK_NO_OBAKYUMU;FIGHTER_LUIGI_LINK_NO_PLUNGER;FIGHTER_LUIGI_LINK_NO_CRITICAL_HIT;FIGHTER_LUIGI_LINK_NO_TERM;FIGHTER_LUIGI_KINETIC_ENERGY_ID_START;FIGHTER_LUIGI_KINETIC_ENERGY_ID_TERM;FIGHTER_KINETIC_TYPE_LUIGI_START;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_S;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_AIR_S;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_S_RAM;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_S_END;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_AIR_S_END;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_LW;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_AIR_LW;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_HI_FALL;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021539b0__71021539b0.c)  [cfg](../decompiled/FUN_71021539b0__71021539b0.mmd)
- **Clone hash:** `ddb0b6dd3546db66`

```c

void FUN_71021539b0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIT_FRAME",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_OBAKYUMU_OBJECT_ID",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_OBAKYUMU_CONNECTOR_OBJECT_ID"
                 ,(undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOP",
                 (undefined **)0x200000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_CHARGE_MELEE_NO_RANDOM",
                 (undefined **)0x200000e1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_BUOYANCY",
                 (undefined **)0x200000e2,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (686 more lines)
```

## 12. `FUN_71030a9aa0`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71030a9aa0`  (offset `0x30a9aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71030a9aa0(undefined1[16] param_1, long param_2, undefined8 param_3, undefined * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 17400 bytes / 1063 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0004;IPP0005;IPP0001;IPP0002;IPP0003;00_FloorLR;00_FloorRL
- **Callees:** FUN_71000001c0;FUN_71003ac560;FUN_7100492c30;FUN_7100532bc0;FUN_7101764000;FUN_7102405040;FUN_71025dd540;FUN_71025e9d50;FUN_71025ee450;FUN_71025ef570;FUN_71025f0150;FUN_71025f0f50;FUN_71025f4d80;FUN_71025f5420;FUN_71025f55b0;FUN_710260fdd0;...
- **Files:** [decomp](../decompiled/FUN_71030a9aa0__71030a9aa0.c)  [cfg](../decompiled/FUN_71030a9aa0__71030a9aa0.mmd)
- **Clone hash:** `acd0d52fdc340448`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71030a9aa0(undefined1 param_1 [16],long param_2,undefined8 param_3,undefined **param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   undefined8 param_8,undefined8 param_9)

{
  long ***ppplVar1;
  uint uVar2;
  short sVar3;
  long **pplVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  ulong *puVar11;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
// ... (3175 more lines)
```

## 13. `FUN_7102d06f40`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102d06f40`  (offset `0x2d06f40`)
- **Namespace:** `Global`
- **Signature:** `undefined8 * __cdecl FUN_7102d06f40(undefined1[16] param_1, long param_2, undefined8 param_3, long * * * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 9264 bytes / 522 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0001;IPP0002;IPP0003;IPP0302;IPP0102;IPP0202;IPP0204;IPP0203;IPP0201
- **Callees:** FUN_71000001c0;FUN_71003a9ab0;FUN_71003ac560;FUN_7101764000;FUN_71025dd540;FUN_71025e9d50;FUN_71025f5420;FUN_71025f55b0;FUN_710262bb40;FUN_710262beb0;FUN_710262c200;FUN_7102d093c0;FUN_7102d097a0;FUN_7102d12a40;FUN_710313ef20;FUN_7103140b20;...
- **Files:** [decomp](../decompiled/FUN_7102d06f40__7102d06f40.c)  [cfg](../decompiled/FUN_7102d06f40__7102d06f40.mmd)
- **Clone hash:** `3ed74ae653b72d7b`

```c

/* WARNING: Removing unreachable block (ram,0x007102d08e90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_7102d06f40(undefined1 param_1 [16],long param_2,undefined8 param_3,long ****param_4,
              undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
              undefined8 param_8,undefined8 param_9)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  int iVar16;
  long lVar17;
  code *pcVar18;
// ... (1516 more lines)
```

## 14. `FUN_7101a1a090`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1a090`  (offset `0x1a1a090`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1a090(long param_1, int param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5124 bytes / 280 bb / 3 incoming refs
- **Match values:** ip
- **Strings touched:** set_txt_tips_chara;set_txt_tips_list;tips_list_0;set_txt_tips_%02d;nam_chr1_%02d_%s;tips_list_4;tips_list_3;tip_title_%04d
- **Callers:** FUN_7101a19650;FUN_7101a197f0;FUN_7101a1c300
- **Callees:** FUN_71003a4ca0;FUN_710137bc30;FUN_71019c1c50;FUN_7101a10950;FUN_7101a10eb0;FUN_7103262310;FUN_71032631a0;FUN_7103263540;FUN_71032648e0;FUN_7103265e70;FUN_71032b6c10;FUN_710333dea0;FUN_7103776910;FUN_7103778300;FUN_710377a280;FUN_710377a310;...
- **Files:** [decomp](../decompiled/FUN_7101a1a090__7101a1a090.c)  [cfg](../decompiled/FUN_7101a1a090__7101a1a090.mmd)
- **Clone hash:** `4ba2c21e222814db`

```c

void FUN_7101a1a090(long param_1,int param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int *piVar2;
  byte **ppbVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined1 *puVar8;
  long **pplVar9;
  long ***ppplVar10;
  ulong uVar11;
  long ***ppplVar12;
  long ***ppplVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *puVar16;
  int *piVar17;
  char *pcVar18;
  byte ****ppppbVar19;
  byte *pbVar20;
  byte ***pppbVar21;
  byte ***pppbVar22;
  byte ***pppbVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined8 uVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  long ***ppplVar31;
  undefined8 *puVar32;
  long lVar33;
  long ***ppplVar34;
  long lVar35;
// ... (968 more lines)
```

## 15. `FUN_710001f340`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710001f340`  (offset `0x1f340`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710001f340(long param_1, undefined8 * param_2, byte * * param_3, byte * * param_4, byte * * param_5, byte * * param_6, byte * * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12036 bytes / 695 bb / 1 incoming refs
- **Match values:** ip;IP
- **Strings touched:** Illegal characters found in URL;select_item;Bad URL, colon is first character;file:;%*15[^
/:]:%[^
];%[^
];localhost/;NODE_PRE_REFRACT_BLEND;127.0.0.1/;File drive letters are only accepted in MSDOS/Windows.;%15[^
/:]:%3[/]%[^
/?#]%[^
];Bad URL;%[^
/?#]%[^
];Unwillingly accepted illegal URL using %d slash%s!
;%s://%s%s;Invalid file://hostname/, expected localhost or 127.0.0.1 or none;dys_yoga03_l_03_set;DICT.;LDAP.;IMAP.;SMTP.;Rebuilt URL to: %s
;Protocol "%s" not supported or disabled in libcurl;<url> malformed;plate_side;Please URL encode %% as %%25, see RFC 6874.
;chara/chara_4/chara_4_;Invalid IPv6 address format
;%s://%s;Warning: CURLOPT_PROXYAUTOCONFIG is 1 (default), so options set via CURLOPT_PROXY* are ignored.
;memory shortage;no_proxy;...
- **Callers:** FUN_710001f290
- **Callees:** FUN_7100002af0;FUN_7100002bd0;FUN_7100004200;FUN_7100004360;FUN_7100004400;FUN_7100004690;FUN_71000060b0;FUN_71000067e0;FUN_71000068f0;FUN_7100007ef0;FUN_7100007fd0;FUN_7100008270;FUN_71000093f0;FUN_710000bbe0;FUN_710000bbf0;FUN_710000c980;...
- **Files:** [decomp](../decompiled/FUN_710001f340__710001f340.c)  [cfg](../decompiled/FUN_710001f340__710001f340.mmd)
- **Clone hash:** `49a38eb5ed8786c3`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710001f340(long param_1,undefined8 *param_2,byte **param_3,byte **param_4,byte **param_5,
                  byte **param_6,byte **param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  size_t sVar16;
  byte **ppbVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  long *plVar21;
  byte **ppbVar22;
  undefined8 uVar23;
  code *pcVar24;
  code *pcVar25;
  int *piVar26;
  byte bVar27;
  char cVar28;
  undefined1 uVar29;
  uint uVar30;
  undefined4 uVar31;
  char *pcVar32;
// ... (2158 more lines)
```

## 16. `FUN_710214a020`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710214a020`  (offset `0x214a020`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710214a020(void)`
- **Size / BBs / Incoming:** 21684 bytes / 28 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** FIGHTER_KIRBY_ARCHIVE_GROUP_BASE;FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_HAMMER;FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_FINALCUTTER;FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STARMISSILE;FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STONE_100T;FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STONE_IRONBALL;FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STONE_DOSUN;FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STONE_KIRBY;FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STONE_PPON;FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STONE_TBOX;FIGHTER_KIRBY_ARCHIVE_TERM;FIGHTER_KIRBY_ARCHIVE_GROUP_SPECIAL_HI_METEOR_HIT_MAX;FIGHTER_KIRBY_ARCHIVE_GROUP_FINAL_WPN_NABE;FIGHTER_KIRBY_ARCHIVE_GROUP_FINAL_WPN_COOKHAT;FIGHTER_KIRBY_ARCHIVE_GROUP_FINAL_WPN_FLYINGPAN;FIGHTER_KIRBY_ARCHIVE_GROUP_FINAL_WPN_FLYGAESHI;FIGHTER_KIRBY_ARCHIVE_GROUP_FINAL_WPN_PEPPER;FIGHTER_KIRBY_ARCHIVE_GROUP_FINAL_WPN_STICK;FIGHTER_KIRBY_ARCHIVE_FINAL_TERM;FIGHTER_KIRBY_SIMPLE_WEAPON_ID_COPY_HAT;FIGHTER_KIRBY_SIMPLE_WEAPON_ID_COPY_HAT_YOSHI;FIGHTER_KIRBY_SIMPLE_WEAPON_ID_COPY_HAT_POKEFUSHIGISOU;FIGHTER_KIRBY_SIMPLE_WEAPON_ID_COPY_GAMEWATCH_PAN;FIGHTER_KIRBY_SIMPLE_WEAPON_ID_COPY_SZEROSUIT_PARALYZER;FIGHTER_KIRBY_SIMPLE_WEAPON_ID_FINAL_FLYINGPAN;FIGHTER_KIRBY_SIMPLE_WEAPON_ID_FINAL_FLYGAESHI;FIGHTER_KIRBY_SIMPLE_WEAPON_ID_FINAL_PEPPER;FIGHTER_KIRBY_SIMPLE_WEAPON_ID_FINAL_STICK;FIGHTER_KIRBY_SIMPLE_WEAPON_ID_COPY_SNAKE_GRENADE_PIN;FIGHTER_KIRBY_SIMPLE_WEAPON_ID_COPY_METAKNIGHT_SWORD;FIGHTER_KIRBY_SIMPLE_WEAPON_ID_COPY_SONIC_SPHERE;FIGHTER_KIRBY_SIMPLE_WEAPON_ID_COPY_IKE_SWORD;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710214a020__710214a020.c)  [cfg](../decompiled/FUN_710214a020__710214a020.mmd)
- **Clone hash:** `b10a635909fd37ce`

```c

void FUN_710214a020(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_68 = 0xfffffffd;
  local_78 = 0;
  local_70 = 0;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KIRBY_ARCHIVE_GROUP_BASE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_HAMMER",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_FINALCUTTER",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STARMISSILE",(undefined **)0x3,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STONE_100T",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STONE_IRONBALL",
                 (undefined **)0x5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STONE_DOSUN",(undefined **)0x6,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STONE_KIRBY",
                 (undefined **)&DAT_00000007,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STONE_PPON",
                 (undefined **)&DAT_00000008,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KIRBY_ARCHIVE_GROUP_WPN_STONE_TBOX",
                 (undefined **)&DAT_00000009,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KIRBY_ARCHIVE_TERM",(undefined **)0xa,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
// ... (2334 more lines)
```

## 17. `FUN_7102d69fa0`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102d69fa0`  (offset `0x2d69fa0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102d69fa0(long param_1)`
- **Size / BBs / Incoming:** 1200 bytes / 78 bb / 2 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0001;IPP0301;IPP0601;IPP0901;IPP1101;IPP1301;IPP1601;IPP1901;IPP2101;IPP2201;IPP2301
- **Callers:** FUN_7102d5c680;FUN_7102d69400
- **Callees:** FUN_71025f5420;FUN_71025f55b0
- **Files:** [decomp](../decompiled/FUN_7102d69fa0__7102d69fa0.c)  [cfg](../decompiled/FUN_7102d69fa0__7102d69fa0.mmd)
- **Clone hash:** `52a35b744945bc26`

```c

void FUN_7102d69fa0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(param_1 + 0x300);
  plVar2 = (long *)**(long **)(lVar1 + 0x18);
  plVar4 = (long *)(*(long **)(lVar1 + 0x18))[1];
  plVar6 = plVar2;
  if (plVar2 != plVar4) {
    do {
      plVar5 = plVar6 + 1;
      if ((*(ulong *)(*plVar6 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
        puVar3 = *(undefined8 **)(*plVar6 + 0x130);
        if (puVar3 != (undefined8 *)0x0) {
          FUN_71025f5420((undefined8 *)*puVar3,(undefined8 *)puVar3[1],"IPP0001");
          lVar1 = *(long *)(param_1 + 0x300);
          plVar2 = (long *)**(long **)(lVar1 + 0x18);
          plVar4 = (long *)(*(long **)(lVar1 + 0x18))[1];
        }
        break;
      }
      plVar6 = plVar5;
    } while (plVar4 != plVar5);
    plVar6 = plVar2;
    if (plVar2 != plVar4) {
      do {
        plVar5 = plVar6 + 1;
        if ((*(ulong *)(*plVar6 + 0xa0) & 0xffffffffff) == 0x733fdad37) {
          puVar3 = *(undefined8 **)(*plVar6 + 0x130);
          if (puVar3 != (undefined8 *)0x0) {
            FUN_71025f55b0((undefined8 *)*puVar3,(undefined8 *)puVar3[1],"IPP0301");
// ... (184 more lines)
```

## 18. `FUN_7101ee8990`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ee8990`  (offset `0x1ee8990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ee8990(undefined8 * param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2180 bytes / 111 bb / 2 incoming refs
- **Match values:** ip
- **Strings touched:** set_txt_title_%02d;tip_title_%04d;set_parts_tips_%d;set_txt_title;set_txt_honbun_%02d_3line;set_txt_honbun_%02d;tip_text_%04d;txt_line_2;gradation_on;set_txt_honbun_3lines;set_txt_honbun;txt_line_3
- **Callers:** FUN_7101ee8050;FUN_7101ee87e0
- **Callees:** FUN_71003a4ca0;FUN_7101addb00;FUN_7101addcc0;FUN_7101adddd0;FUN_7101addf20;FUN_71032b6c10;FUN_710333dd70;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778c70;FUN_71037790a0;FUN_710377a120;FUN_710377a280;FUN_710377b010;...
- **Files:** [decomp](../decompiled/FUN_7101ee8990__7101ee8990.c)  [cfg](../decompiled/FUN_7101ee8990__7101ee8990.mmd)
- **Clone hash:** `6bf1c5411fa45c95`

```c

void FUN_7101ee8990(undefined8 *param_1,ulong param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  long *plVar7;
  char *pcVar8;
  long ****pppplVar9;
  long *********ppppppppplVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  long *plVar14;
  ushort uVar15;
  int iVar16;
  ushort *puVar17;
  ulong uVar18;
  long lVar19;
  undefined **local_118;
  ulong local_110;
  undefined **local_108;
  ulong local_100;
  undefined **local_f8;
  ulong local_f0;
  undefined **local_c8;
  ulong local_c0;
  long ********local_b8;
  ulong local_b0;
  undefined **local_a8;
  long *local_a0 [8];
  undefined **local_60;
  ulong local_58;
  
  uVar18 = (ulong)param_3 & 0xffffffff;
// ... (357 more lines)
```

## 19. `FUN_7102bd3290`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102bd3290`  (offset `0x2bd3290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102bd3290(float param_1, long * param_2, undefined8 param_3, long * * * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 12708 bytes / 722 bb / 3 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0201;IPP0202;IPP0203;IPP0204;sita_ago_locator
- **Callers:** FUN_7102bc49e0;FUN_7102bc64c0
- **Callees:** FUN_71003ac560;FUN_71005162f0;FUN_7100525010;FUN_7100532bc0;FUN_71025e9d50;FUN_71025ee450;FUN_71025ee840;FUN_71025effe0;FUN_71025f4d80;FUN_71025f5420;FUN_71025f55b0;FUN_710313ef20;FUN_710317dc90;FUN_71035707d0;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;...
- **Files:** [decomp](../decompiled/FUN_7102bd3290__7102bd3290.c)  [cfg](../decompiled/FUN_7102bd3290__7102bd3290.mmd)
- **Clone hash:** `916ed71fa55169b3`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102bd3290(float param_1,long *param_2,undefined8 param_3,long ****param_4,byte ****param_5
                   ,long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined1 (*pauVar21) [16];
  undefined8 extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  undefined4 uVar22;
  uint *puVar23;
  long lVar24;
  int *piVar25;
  undefined8 *puVar26;
  char cVar27;
  undefined8 uVar28;
// ... (2343 more lines)
```

## 20. `FUN_7102efd240`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102efd240`  (offset `0x2efd240`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102efd240(float param_1, undefined8 * param_2, undefined8 param_3, char * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 3272 bytes / 228 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0004;IPP0005;IPP0001;IPP0002;IPP0003
- **Callers:** FUN_7102ef77c0
- **Callees:** FUN_71025e9d50;FUN_71025f5420;FUN_71025f55b0;FUN_710260fdd0;FUN_7102666c30;switchD_7102efd990::default;FUN_7102efa8b0;FUN_7102efbb50;FUN_7102efbdc0;FUN_710313ef20
- **Files:** [decomp](../decompiled/FUN_7102efd240__7102efd240.c)  [cfg](../decompiled/FUN_7102efd240__7102efd240.mmd)
- **Clone hash:** `69ef0daa1217a24a`

```c

void FUN_7102efd240(float param_1,undefined8 *param_2,undefined8 param_3,char *param_4,
                   byte ****param_5,long ****param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 uVar5;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
// ... (640 more lines)
```

## 21. `FUN_71019366f0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019366f0`  (offset `0x19366f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019366f0(long param_1, undefined8 param_2, byte * * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11704 bytes / 702 bb / 1 incoming refs
- **Match values:** Ip
- **Strings touched:** dys_yoga03_l_03_set;connection%d
- **Callees:** FUN_71003a4ca0;FUN_710177a5c0;FUN_71017be550;FUN_7102486c70;FUN_71024cb8c0;FUN_71024d7ce0;FUN_71024d8040;FUN_71024d81e0;FUN_71024d85f0;FUN_71024d8890;FUN_71032617c0;FUN_7103263e20;FUN_710326a3e0;FUN_71032821b0;FUN_71032a1630;FUN_710392e290;...
- **Files:** [decomp](../decompiled/FUN_71019366f0__71019366f0.c)  [cfg](../decompiled/FUN_71019366f0__71019366f0.mmd)
- **Clone hash:** `d7bb9297fc8893b7`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_71019366f0(long param_1,undefined8 param_2,byte **********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte *********pppppppppbVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ushort uVar11;
  byte *********pppppppppbVar12;
  undefined8 uVar13;
  byte *********__dest;
  long *plVar14;
  undefined1 *puVar15;
  long lVar16;
  byte ************ppppppppppppbVar17;
  long ****pppplVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  byte **********ppppppppppbVar27;
  undefined4 uVar28;
  long lVar29;
  uint *puVar30;
  long lVar31;
  byte ***********pppppppppppbVar32;
// ... (2328 more lines)
```

## 22. `FUN_7102eab970`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102eab970`  (offset `0x2eab970`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102eab970(float param_1, long * param_2, undefined8 param_3, char * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 6380 bytes / 178 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** 00_Floor01L;00_Floor01R;IPP0002;IPP0003;IPP0004;IPP0005
- **Callers:** FUN_7102ea8740
- **Callees:** FUN_71003ac560;FUN_71003d7950;FUN_71005162f0;FUN_710067de90;FUN_71025f4d80;FUN_71025f5420;FUN_71025f55b0;FUN_7102ead260;FUN_710313ef20;<EXTERNAL>::strcmp;<EXTERNAL>::cosf;<EXTERNAL>::sinf;<EXTERNAL>::fmodf
- **Files:** [decomp](../decompiled/FUN_7102eab970__7102eab970.c)  [cfg](../decompiled/FUN_7102eab970__7102eab970.mmd)
- **Clone hash:** `5d8ffc1e1972c5d9`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102eab970(float param_1,long *param_2,undefined8 param_3,char *param_4,byte ****param_5,
                   long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  undefined4 uVar13;
  long lVar14;
  uint *puVar15;
  char cVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  float fVar21;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar29;
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  uint uVar38;
  undefined1 auVar32 [16];
// ... (1073 more lines)
```

## 23. `FUN_71024ba940`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71024ba940`  (offset `0x24ba940`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71024ba940(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 748 bytes / 45 bb / 1 incoming refs
- **Match values:** Ip
- **Callees:** FUN_71000001c0;FUN_71004eaa30;FUN_71004eb940;FUN_71004ec2a0;FUN_71004ec3b0;FUN_7100655f60;FUN_71014e1e90;FUN_7101764000;FUN_71032e4d70;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71024ba940__71024ba940.c)  [cfg](../decompiled/FUN_71024ba940__71024ba940.mmd)
- **Clone hash:** `44f99b6f350394d6`

```c

void FUN_71024ba940(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar5;
  
  if (*(int *)(param_1 + 0x24c) == 0) {
    if (((DAT_71053144d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), param_2 = extraout_x1_00, iVar4 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      param_2 = extraout_x1_01;
    }
    FUN_71014e1e90(&DAT_71052c51b0,param_2,param_3,param_4,param_5,param_6,(ulong)param_7,
                   (uint *)param_8);
    lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20);
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0x591b) = 2;
      pbVar1 = (byte *)(lVar5 + 0x5920);
      if (*pbVar1 - 3 < 2) {
        if ((*(byte *)(lVar5 + 0x591f) & 1) != 0) {
          FUN_7100655f60(lVar5,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
          *pbVar1 = 3;
          *(undefined1 *)(lVar5 + 0x5934) = 1;
        }
      }
      else if (*(int *)*DAT_71052c33d8 < 1 || *pbVar1 == 6) {
        FUN_7100655f60(lVar5,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
// ... (89 more lines)
```

## 24. `FUN_71029f6010`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71029f6010`  (offset `0x29f6010`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71029f6010(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 9208 bytes / 422 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** S08_shokikabomb;S08_nature;S08_nature_screen;S08_base_01;00_Item;IPP0001;S08_base_02;S08_base_03;plate_side;01_Item;IPP0101;S08_brokenboard_A;S08_brokenboard_A_b;IPP0102;IPP0105;S08_brokenboard_B;S08_brokenboard_B_b;IPP0103;IPP0106;S08_brokenboard_C;S08_brokenboard_C_b;IPP0104;IPP0107;polySurface3656;polySurface3655;polySurface3654;polySurface3653;polySurface3652;light00;render_param;reflection_cubemap;chara;...
- **Callees:** FUN_71003ac560;FUN_7100523f10;FUN_7100525010;FUN_7100532bc0;FUN_71025d9250;FUN_71025e9d50;FUN_71025f4d80;FUN_71025f7350;FUN_7102616cf0;FUN_710262bb40;FUN_710262beb0;FUN_7102633800;FUN_7102633910;FUN_7102633a10;FUN_7102633b90;FUN_71026533a0;...
- **Files:** [decomp](../decompiled/FUN_71029f6010__71029f6010.c)  [cfg](../decompiled/FUN_71029f6010__71029f6010.mmd)
- **Clone hash:** `f501531e3ae4b733`

```c

void FUN_71029f6010(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long ***ppplVar11;
  ulong *puVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
// ... (1625 more lines)
```

## 25. `FUN_7101f3c990`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f3c990`  (offset `0x1f3c990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f3c990(undefined8 * param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2216 bytes / 107 bb / 5 incoming refs
- **Match values:** ip
- **Strings touched:** gauge_parts_on;set_pos_seek;set_pos_grad_00;set_pos_grad_01;set_pos_start;set_pos_end;set_size_clip_behind;set_size_clip_behindsel;set_size_clip_front;set_size_clip_frontsel;set_size_clip_unmute;set_size_clip_unmute_pi;set_size_clip_overlay;set_size_frame_selected;set_size_clip_mute;set_mask_size_thumb;set_mask_size_mark;set_mask_size_mute;set_mask_size_tellop;set_mask_size_behind;set_mask_size_bg_name_00;set_mask_size_bg_name_01;set_mask_size_unmute;set_mask_size_overlay;mode_empty_03;set_rep_thumb;set_rep_thumb2;set_offset_thumb2;set_pos_transition;set_offset_minus;set_txt_value_00;set_txt_value_01;...
- **Callers:** FUN_7101f31930;FUN_7101f41680
- **Callees:** FUN_7101f3c650;FUN_7103776390;FUN_7103776910;FUN_7103778ab0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101f3c990__7101f3c990.c)  [cfg](../decompiled/FUN_7101f3c990__7101f3c990.mmd)
- **Clone hash:** `a4d7a38ff623e1e3`

```c

void FUN_7101f3c990(undefined8 *param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **local_288;
  ulong local_280;
  undefined **local_278;
  ulong local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
// ... (424 more lines)
```

## 26. `FUN_710357cef0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710357cef0`  (offset `0x357cef0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710357cef0(undefined8 * param_1, undefined4 * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 14876 bytes / 418 bb / 1 incoming refs
- **Match values:** iP
- **Strings touched:** MiiVS;MiiProjVS;MiiPS;MiiProjPS;spycloak_refract_velocity_VS;spycloak_refract_velocity_PS_for_mii;shadow_cast_only_VS;shadow_cast_with_color_VS;shadow_cast_with_color_PS;mo_mii_opaque_VS;mo_mii_opaque_PS;mo_mii_transpalency_VS;mo_mii_transpalency_PS;player_id_VS;player_id_PS;MiiMaskShaderVS;MiiMaskShaderPS;MultiShadowCBuffer0;MultiShadowCBuffer1;MultiShadowCBuffer2;MultiShadowCBuffer3;FB_VSM_256;FB_VSM_512;FB_VSM_1024;FB_FOUR_DIRECTION_SHADOW_GAUSS
- **Callers:** FUN_7103757840
- **Callees:** FUN_71000310c0;FUN_7100031140;FUN_7100031190;FUN_71000311e0;FUN_7100031210;FUN_7100031240;FUN_7100031250;FUN_71000312b0;FUN_71000312d0;FUN_71000312e0;FUN_7100031360;FUN_7100031490;FUN_71000314e0;FUN_7100037ef0;FUN_7100038120;FUN_7100038160;...
- **Files:** [decomp](../decompiled/FUN_710357cef0__710357cef0.c)  [cfg](../decompiled/FUN_710357cef0__710357cef0.mmd)
- **Clone hash:** `6e572383b1037a15`

```c

void FUN_710357cef0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  ushort uVar4;
  undefined7 uVar5;
  byte ****ppppbVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  int iVar15;
  size_t sVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong uVar19;
  long lVar20;
  long ****pppplVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  size_t sVar25;
  long *plVar26;
  long *plVar27;
  long ***ppplVar28;
  long *plVar29;
  long *****ppppplVar30;
  long ****pppplVar31;
  byte *pbVar32;
  long ****pppplVar33;
  byte ****ppppbVar34;
  long ****pppplVar35;
// ... (3470 more lines)
```

## 27. `FUN_7102eadc80`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102eadc80`  (offset `0x2eadc80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102eadc80(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 236 bytes / 7 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0002;IPP0004;IPP0003;IPP0005
- **Callers:** FUN_7102ea9120
- **Callees:** FUN_71025f55b0;FUN_7102eadd70
- **Files:** [decomp](../decompiled/FUN_7102eadc80__7102eadc80.c)  [cfg](../decompiled/FUN_7102eadc80__7102eadc80.mmd)
- **Clone hash:** `10ca95871cfc4f20`

```c

void FUN_7102eadc80(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x100) - 4U < 2) {
    FUN_7102eadd70(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x240);
    puVar2 = (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1];
    pcVar3 = "IPP0003";
  }
  else {
    if (*(int *)(param_1 + 0x100) - 1U < 2) {
      FUN_7102eadd70(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 0x240),
                     (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1],"IPP0002");
      puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x240);
      puVar2 = (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1];
      pcVar3 = "IPP0004";
      goto LAB_7102eadd60;
    }
    FUN_7102eadd70(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7102eadd70(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 0x240),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1],"IPP0002");
    FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 0x240),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1],"IPP0003");
    puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x240);
    puVar2 = (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1];
    pcVar3 = "IPP0004";
  }
  FUN_71025f55b0(puVar1,puVar2,pcVar3);
  puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x240);
  puVar2 = (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1];
  pcVar3 = "IPP0005";
LAB_7102eadd60:
// ... (4 more lines)
```

## 28. `FUN_710043ab90`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710043ab90`  (offset `0x43ab90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710043ab90(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1396 bytes / 26 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0002;IPP0003;IPP0004;IPP0005;IPP0006;IPP0007;IPP0008
- **Callees:** FUN_71000001c0;FUN_7103151710;FUN_710392e290
- **Files:** [decomp](../decompiled/FUN_710043ab90__710043ab90.c)  [cfg](../decompiled/FUN_710043ab90__710043ab90.mmd)
- **Clone hash:** `6381a926d68364b0`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710043ab90(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  long ****pppplVar3;
  undefined **ppuVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ***local_70;
  undefined4 local_64;
  
  pppplVar3 = &local_70;
  pppplVar5 = &local_70;
  pppplVar6 = &local_70;
  pppplVar7 = &local_70;
  pppplVar8 = &local_70;
  DAT_710532e978 = 0;
  DAT_710532e970 = 0xc2700000;
  DAT_710532e980 = 0;
  DAT_710532e988 = 0;
  DAT_710532e998 = 0;
  DAT_710532e990 = 0x42700000;
  uRam000000710532e9a8 = 0;
  _DAT_710532e9a0 = 0x41f00000;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&DAT_00000008;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar3,param_4,param_5,param_6,param_7,param_8),
// ... (171 more lines)
```

## 29. `FUN_7102cdb3e0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102cdb3e0`  (offset `0x2cdb3e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102cdb3e0(long param_1, undefined4 param_2)`
- **Size / BBs / Incoming:** 484 bytes / 22 bb / 2 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0002;IPP0003;IPP0004;IPP0001;IPP0005
- **Callers:** FUN_7102cdb000
- **Callees:** FUN_71025f5420;FUN_71025f55b0
- **Files:** [decomp](../decompiled/FUN_7102cdb3e0__7102cdb3e0.c)  [cfg](../decompiled/FUN_7102cdb3e0__7102cdb3e0.mmd)
- **Clone hash:** `5642e7ab453b1ab5`

```c

void FUN_7102cdb3e0(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  float fVar10;
  
  switch(param_2) {
  case 5:
    FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 0x18),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0x18))[1],"IPP0002");
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x18);
    puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0x18))[1];
    if (2 < *(int *)(param_1 + 0x104)) {
      FUN_71025f5420(puVar3,puVar4,"IPP0003");
      FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 0x18),
                     (undefined8 *)(*(undefined8 **)(param_1 + 0x18))[1],"IPP0004");
      if (*(char *)(param_1 + 0x100) == '\0') {
        return;
      }
      goto LAB_7102cdb588;
    }
    FUN_71025f55b0(puVar3,puVar4,"IPP0003");
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x18);
    puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0x18))[1];
    pcVar5 = "IPP0004";
    goto LAB_7102cdb57c;
  case 6:
    plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    if ((plVar7 != (long *)0x0) && ((int)plVar7[1] != 1 && plVar7 != (long *)0x0)) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)(*(long *)(*plVar7 + 8) + 0x10) = 1;
// ... (58 more lines)
```

## 30. `FUN_7101f31930`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f31930`  (offset `0x1f31930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f31930(undefined8 * param_1, long param_2, ulong * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7476 bytes / 419 bb / 1 incoming refs
- **Match values:** ip
- **Strings touched:** set_bnd_edge_left;set_bnd_edge_right;set_mask_size_map;set_pos_timeline;set_pos_timeline_front;set_pos_timeline_seek;mode_empty_03;set_pos_detail_measure;set_size_movie_length;set_pos_size_map_view;set_pos_map_seek;set_txt_num_clip_movie;set_txt_num_clip_sound;set_txt_num_clip_tellop;set_pos_stretch_left;set_pos_stretch_right;gauge_parts_on;set_offset_stretch;set_offset_pickup_center;set_pos_limit_front;set_pos_limit_band;set_size_limitband_00;set_size_limitband_01;set_pos_map_limit_00;set_pos_map_limit_01;set_txt_map_end;set_txt_key_change;set_txt_limit;set_txt_map_limit;set_txt_map_start;selector;set_parts_btn_next;...
- **Callers:** FUN_7101f09580
- **Callees:** FUN_7101f3c990;FUN_7101f3e4e0;FUN_7101f41680;FUN_71032cbf30;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103771a80;FUN_7103771d60;FUN_71037760f0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103777420;FUN_7103778300;FUN_7103778760;...
- **Files:** [decomp](../decompiled/FUN_7101f31930__7101f31930.c)  [cfg](../decompiled/FUN_7101f31930__7101f31930.mmd)
- **Clone hash:** `762c715697862b0f`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101f31930(undefined8 *param_1,long param_2,ulong *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte ****ppppbVar2;
  byte ****ppppbVar3;
  byte ***pppbVar4;
  long *plVar5;
  byte **ppbVar6;
  byte ***pppbVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long ****pppplVar12;
  undefined8 uVar13;
  byte ****ppppbVar14;
  char *pcVar15;
  long ***ppplVar16;
  undefined ***pppuVar17;
  undefined8 *puVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  byte ****ppppbVar28;
  undefined **ppuVar29;
  long *plVar30;
  byte ****ppppbVar31;
  byte ***pppbVar32;
  byte ****ppppbVar33;
// ... (1501 more lines)
```

## 31. `FUN_7102dfe1b0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102dfe1b0`  (offset `0x2dfe1b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102dfe1b0(long param_1, undefined4 param_2)`
- **Size / BBs / Incoming:** 336 bytes / 18 bb / 2 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0001;IPP0002;IPP0003;IPP0004;IPP0005;IPP0006
- **Callers:** FUN_7102dfd170;FUN_7102dfd8c0
- **Callees:** FUN_71025f5420
- **Files:** [decomp](../decompiled/FUN_7102dfe1b0__7102dfe1b0.c)  [cfg](../decompiled/FUN_7102dfe1b0__7102dfe1b0.mmd)
- **Clone hash:** `752da444c1edffba`

```c

void FUN_7102dfe1b0(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar5 = *(undefined8 **)(param_1 + 0x1370);
  if (puVar5 == (undefined8 *)0x0) {
switchD_7102dfe284_caseD_1:
    return;
  }
  puVar3 = (undefined8 *)*puVar5;
  puVar5 = (undefined8 *)puVar5[1];
  puVar9 = puVar3;
  if (puVar3 != puVar5) {
    do {
      plVar7 = (long *)*puVar3;
      if ((char)plVar7[4] != '\0') {
        plVar1 = (long *)plVar7[1];
        lVar2 = plVar7[2];
        lVar8 = *plVar7;
        *(undefined1 *)(plVar7 + 4) = 0;
        *plVar1 = lVar8;
        *(long **)(lVar8 + 8) = plVar1;
        *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -1;
        *plVar7 = 0;
        plVar7[1] = 0;
        puVar9 = *(undefined8 **)(lVar2 + 0x40);
        *plVar7 = lVar2 + 0x38;
        plVar7[1] = (long)puVar9;
        *(long **)(lVar2 + 0x40) = plVar7;
        *puVar9 = plVar7;
// ... (42 more lines)
```

## 32. `FUN_710226f500`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226f500`  (offset `0x226f500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226f500(long param_1)`
- **Size / BBs / Incoming:** 23732 bytes / 622 bb / 1 incoming refs
- **Match values:** ip
- **Strings touched:** backshield;is_enable_backshield;is_visible_backshield;is_force_visible_backshield;set_reflector;beetle;is_enable_capture_beetle;set_grab;boomerang;send_event_catch;set_assist_team_no;is_catch_area_hit_check;bossgalaga;is_enable_capture_bossgalaga;chicken;is_behind_fighter;is_front_fighter;clubshot;check_roll_up_area;curryshot;init_log_attack_info;is_preview_mode;diddypeanuts;DIDDYPEANUTS_DIDDYPEANUTS_SCALE_MUL;dragoonset;calc_dragoonsight2;get_stage_dragoon_camera_rectangle;dragoonsight;set_dragoonsight_effect;get_rotation_with_calc_camera_direction;calc_dragoonsight;healball;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7102219310;FUN_7102235da0;FUN_7102239aa0;FUN_710223aa90;FUN_710223b0b0;FUN_710223c0c0;FUN_710223c740;FUN_710223d040;FUN_710223d940;FUN_710223ef10;FUN_710223ff20;FUN_7102242610;FUN_7102243740;FUN_71022490e0;FUN_710224bda0;FUN_71022505d0;...
- **Files:** [decomp](../decompiled/FUN_710226f500__710226f500.c)  [cfg](../decompiled/FUN_710226f500__710226f500.mmd)
- **Clone hash:** `355e9f5d7a84e54e`

```c

void FUN_710226f500(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar3;
  code *pcVar4;
  byte ****ppppbVar5;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  
  if (param_1 == 0) {
    FUN_7102219310(0);
    FUN_7102235da0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"backshield",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_backshield",(long ****)FUN_7102237fc0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_visible_backshield",(long ****)FUN_71022380c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_force_visible_backshield",(long ****)FUN_71022381c0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_71022382c0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"beetle",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
// ... (2227 more lines)
```

## 33. `FUN_71026bcd60`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71026bcd60`  (offset `0x26bcd60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71026bcd60(long * * * param_1, undefined8 param_2, undefined * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 11052 bytes / 644 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0201;IPP0202;IPP0101;IPP0102;IPP0001;IPP0002;s17_01_pillar_l;s17_01_pillar_r;s17_02_pillar;render_param
- **Callees:** FUN_71000001c0;FUN_71003ac560;FUN_7100525010;FUN_7101764000;FUN_71025d9250;FUN_71025e9d50;FUN_7102616cf0;FUN_7102624740;FUN_7102624870;FUN_710262bb40;FUN_710262beb0;FUN_710262c200;FUN_710262fb80;FUN_7102633800;FUN_7102633910;FUN_7102633a10;...
- **Files:** [decomp](../decompiled/FUN_71026bcd60__71026bcd60.c)  [cfg](../decompiled/FUN_71026bcd60__71026bcd60.mmd)
- **Clone hash:** `544dc3c7c09c1d69`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71026bcd60(long ***param_1,undefined8 param_2,undefined **param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  long ***ppplVar5;
  long ***ppplVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong *puVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  ulong extraout_x1;
  ulong uVar16;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  long *extraout_x1_04;
  long *extraout_x1_05;
  long *extraout_x1_06;
  long *extraout_x1_07;
  long *extraout_x1_08;
  long *extraout_x1_09;
  long *extraout_x1_10;
  long *extraout_x1_11;
  long *extraout_x1_12;
  long *extraout_x1_13;
  long *extraout_x1_14;
// ... (1928 more lines)
```

## 34. `FUN_7101ad3b90`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ad3b90`  (offset `0x1ad3b90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ad3b90(long param_1, ulong * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7388 bytes / 342 bb / 1 incoming refs
- **Match values:** ip
- **Strings touched:** anim_get_default;set_parts_item;set_txt_category;have_counter;category_mii_hat;category_music;category_mii_body;miitype_fight_equip_on;category_spirit;set_rep_series;set_rep_series_sdw;set_parts_music;set_txt_icon;set_txt_help;music_newarrange;miitype_fight_equip_off;miitype_sword_equip_off;miitype_sword_equip_on;miitype_gun_equip_on;miitype_gun_equip_off;music_arrange;music_noarrange;category_energy;category_ticket;category_item;set_txt_other_caption;set_parts_param_00;set_parts_param_01;circle_series;set_parts_power;set_parts_pre_super;set_parts_super;...
- **Callers:** FUN_7101ad6b90
- **Callees:** FUN_710062dc20;FUN_7101780950;FUN_7101ad36e0;FUN_71025c7300;FUN_71025c7b60;FUN_71025c8c30;FUN_71025c8e40;FUN_71025c9ac0;FUN_71025ca840;FUN_71025cb8d0;FUN_710323f600;FUN_710323f760;FUN_71032575c0;FUN_710325d9e0;FUN_710325dd40;FUN_710327c2f0;...
- **Files:** [decomp](../decompiled/FUN_7101ad3b90__7101ad3b90.c)  [cfg](../decompiled/FUN_7101ad3b90__7101ad3b90.mmd)
- **Clone hash:** `cd51e20f65060320`

```c

void FUN_7101ad3b90(long param_1,ulong *param_2,undefined8 param_3,byte ****param_4,long ****param_5
                   ,byte ****param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar18;
  long *********ppppppppplVar19;
  byte ****ppppbVar20;
  uint uVar21;
  ulong uVar22;
  undefined *puVar23;
  byte *pbVar24;
  uint uVar25;
  ulong uVar26;
  char cVar27;
  long lVar28;
  undefined **ppuVar29;
  byte ****ppppbVar30;
  undefined8 *puVar31;
  byte bVar32;
  uint uVar33;
// ... (1236 more lines)
```

## 35. `FUN_7102841990`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102841990`  (offset `0x2841990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102841990(byte * * * * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, char * param_8)`
- **Size / BBs / Incoming:** 9920 bytes / 543 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** 0%d_Item;STG_ARENA_SMOKE;s02_hmdl_01turi_asiba;IPP0104;plate_side;01_Item;s02_01turi_rope;s02_01turi_asiba_koware;s02_02sekizou_a01;s02_02sekizou_a02;02_Item;IPP0202;s02_02sekizou_b01;s02_02sekizou_b02;IPP0203;s02_04kassya_asiba
- **Callees:** FUN_71000001c0;FUN_71003ac560;FUN_710062dc20;FUN_7101764000;FUN_71025d9250;FUN_71025e9d50;FUN_710262bb40;FUN_710262beb0;FUN_710262c340;FUN_7102845920;FUN_7102845d70;FUN_7102845ed0;FUN_71028461f0;FUN_7102846ac0;FUN_7102848440;FUN_7102848de0;...
- **Files:** [decomp](../decompiled/FUN_7102841990__7102841990.c)  [cfg](../decompiled/FUN_7102841990__7102841990.mmd)
- **Clone hash:** `78e99c5f8819e01c`

```c

void FUN_7102841990(byte ****param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   undefined1 (*param_7) [16],char *param_8)

{
  byte ****ppppbVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *piVar4;
  byte *pbVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  int *piVar10;
  long ***ppplVar11;
  uint uVar12;
  int iVar13;
  byte ***pppbVar14;
  long lVar15;
  long ***ppplVar16;
  byte **ppbVar17;
  long *plVar18;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar19;
  long ****pppplVar20;
  char *pcVar21;
  byte ****ppppbVar22;
  char *pcVar23;
  byte ****ppppbVar24;
  byte ****ppppbVar25;
  char *pcVar26;
  long ***ppplVar27;
  undefined1 (*pauVar28) [16];
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
// ... (1654 more lines)
```

## 36. `FUN_7102068680`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102068680`  (offset `0x2068680`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102068680(long param_1)`
- **Size / BBs / Incoming:** 2496 bytes / 4 bb / 2 incoming refs
- **Match values:** ip
- **Strings touched:** MotionModule;change_motion;change_motion_inherit_frame;change_motion_inherit_frame_keep_rate;change_motion_force_inherit_frame;change_motion_kind;add_motion_2nd;set_weight;get_weight;set_weight_rate;is_blend;is_changing;motion_kind;set_rate;rate_2nd;set_rate_2nd;frame;prev_frame;plate_side;set_frame;set_frame_sync_anim_cmd;end_frame;end_frame_from_hash;set_frame_2nd;frame_2nd;trans_tra;trans_tra_2nd;joint_local_tra;trans_tra_end_frame;is_end;is_looped;is_loop_flag;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102068680__7102068680.c)  [cfg](../decompiled/FUN_7102068680__7102068680.mmd)
- **Clone hash:** `19235d65e8d9bfe1`

```c

void FUN_7102068680(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_28;
  long local_20;
  int local_18;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_28,param_1,(undefined **)"MotionModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion",(long ****)FUN_710205d3b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_inherit_frame",(long ****)FUN_710205d8f0,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_inherit_frame_keep_rate",(long ****)FUN_710205de00
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_force_inherit_frame",(long ****)FUN_710205e1c0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_kind",(long ****)FUN_710205e580,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_motion_2nd",(long ****)FUN_710205e6b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_weight",(long ****)FUN_710205eb20,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_weight",(long ****)FUN_710205ed90,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_weight_rate",(long ****)FUN_710205ee60,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_blend",(long ****)FUN_710205f030,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_changing",(long ****)FUN_710205f100,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"motion_kind",(long ****)FUN_710205f1d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_71043aea1b,(long ****)FUN_710205f2b0,ppppbVar1,in_x4,in_x5,
// ... (183 more lines)
```

## 37. `FUN_7102bcdca0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102bcdca0`  (offset `0x2bcdca0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102bcdca0(long param_1)`
- **Size / BBs / Incoming:** 388 bytes / 18 bb / 3 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0002;IPP0003;IPP0004;IPP0005
- **Callers:** FUN_7102bbfe00;FUN_7102bcde30
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_71025f5420;FUN_71025f55b0;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7102bcdca0__7102bcdca0.c)  [cfg](../decompiled/FUN_7102bcdca0__7102bcdca0.mmd)
- **Clone hash:** `55b8d63af1e25e45`

```c

void FUN_7102bcdca0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 200);
    puVar5 = (undefined8 *)*puVar6;
    puVar2 = (undefined8 *)puVar6[1];
    if (puVar5 != puVar2) {
      do {
        plVar7 = (long *)*puVar5;
        if ((char)plVar7[4] == '\0') {
          plVar1 = (long *)plVar7[1];
          lVar3 = plVar7[2];
          lVar8 = *plVar7;
          *(undefined1 *)(plVar7 + 4) = 1;
          *plVar1 = lVar8;
          *(long **)(lVar8 + 8) = plVar1;
          *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
          *plVar7 = 0;
          plVar7[1] = 0;
          puVar6 = *(undefined8 **)(lVar3 + 0x28);
          *plVar7 = lVar3 + 0x20;
          plVar7[1] = (long)puVar6;
          *(long **)(lVar3 + 0x28) = plVar7;
          *puVar6 = plVar7;
          *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
          iVar4 = 0;
          if (plVar7[3] != 0) {
            iVar4 = *(int *)(plVar7[3] + 0x110);
          }
// ... (32 more lines)
```

## 38. `FUN_7102ccfe70`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102ccfe70`  (offset `0x2ccfe70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102ccfe70(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9600 bytes / 445 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0001;IPP0005;IPP0002;s06_dogs_asibaa;s06_dogs_asibab;s06_dogs_asibac;s06_item_gold;s06_item_hamburger;s06_item_shoe_highheel;s06_item_towelcube;s06_item_toy_mouse
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_71025e8370;FUN_71025f5420;FUN_71025f55b0;FUN_7102cd48f0;FUN_7102cd8ae0;FUN_7102cdbae0;FUN_710315a0a0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::std::__shared_weak_count::__release_weak;...
- **Files:** [decomp](../decompiled/FUN_7102ccfe70__7102ccfe70.c)  [cfg](../decompiled/FUN_7102ccfe70__7102ccfe70.mmd)
- **Clone hash:** `26a6da2a37ed1006`

```c

void FUN_7102ccfe70(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte **ppbVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  byte ****ppppbVar11;
  undefined **ppuVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  byte ***pppbVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  char cVar19;
  byte **ppbVar20;
  byte **ppbVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  byte ***pppbVar25;
  undefined8 uVar26;
  byte ****ppppbVar27;
  long lVar28;
  undefined8 uVar29;
  byte ***pppbVar30;
  long lVar31;
  undefined8 *puVar32;
// ... (2173 more lines)
```

## 39. `FUN_710206ac10`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710206ac10`  (offset `0x206ac10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710206ac10(long param_1)`
- **Size / BBs / Incoming:** 432 bytes / 4 bb / 2 incoming refs
- **Match values:** ip
- **Strings touched:** MotionAnimcmdModule;exec_motion_lines;change_script_motion_lines;change_script_motion_partial_lines;call_script_single;change_script_motion_line_single;exec_motion_lines_initialize;flush_current_motion;flush;set_sleep;set_sleep_game;set_sleep_effect;TRANS_A_JUMP_AERIAL;set_sleep_sound;is_sleep;enable_skip_delay_update;set_change_partial_immediate
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710206ac10__710206ac10.c)  [cfg](../decompiled/FUN_710206ac10__710206ac10.mmd)
- **Clone hash:** `4f199290e6abc563`

```c

void FUN_710206ac10(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_28;
  long local_20;
  int local_18;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_28,param_1,(undefined **)"MotionAnimcmdModule",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"exec_motion_lines",(long ****)FUN_71020691c0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_script_motion_lines",(long ****)FUN_71020693c0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_script_motion_partial_lines",(long ****)FUN_71020697f0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"call_script_single",(long ****)FUN_7102069bb0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_script_motion_line_single",(long ****)FUN_7102069d20,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"exec_motion_lines_initialize",(long ****)FUN_7102069e90,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"flush_current_motion",(long ****)FUN_710206a130,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"flush",(long ****)FUN_710206a1e0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_sleep",(long ****)FUN_710206a360,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_sleep_game",(long ****)FUN_710206a4d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_sleep_effect",(long ****)FUN_710206a640,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_sleep_sound",(long ****)FUN_710206a7b0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
// ... (12 more lines)
```

## 40. `FUN_7102e98490`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102e98490`  (offset `0x2e98490`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102e98490(long * * * * * * * * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 3516 bytes / 191 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** %s.nuanmb;plate_side;camera_stage;IPP0001;IPP0002;IPP0003;IPP0004;IPP0005
- **Callees:** FUN_7101ea04d0;FUN_71025d9250;FUN_71025e9d50;FUN_7102616cf0;FUN_7102624740;FUN_7102624870;FUN_7102e9ee70;FUN_7103151710;FUN_71031675b0;FUN_71031676c0;FUN_7103177e00;FUN_710318b040;FUN_7103540a00;FUN_7103540b10;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7102e98490__7102e98490.c)  [cfg](../decompiled/FUN_7102e98490__7102e98490.mmd)
- **Clone hash:** `c864775c317b0799`

```c

void FUN_7102e98490(long ********param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  long **pplVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *********ppppppppplVar6;
  long *******ppppppplVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 (*pauVar10) [16];
  long *********ppppppppplVar11;
  char *pcVar12;
  uint *puVar13;
  long lVar14;
  int *piVar15;
  uint *puVar16;
  long *******ppppppplVar17;
  long *****ppppplVar18;
  ulong uVar19;
  ulong uVar20;
  long ****pppplVar21;
  uint uVar22;
  long ***ppplVar23;
  long *********ppppppppplVar24;
  long *******ppppppplVar25;
  long lVar26;
  long *******__src;
  long ******pppppplVar27;
  long ****pppplVar28;
  long ******pppppplVar29;
  undefined4 uVar30;
// ... (598 more lines)
```

## 41. `FUN_7102ef6bd0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102ef6bd0`  (offset `0x2ef6bd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102ef6bd0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 3056 bytes / 120 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** dyr_a_1_leftplatform_set;stc_leftplatformlinea_1_set;dyr_a_2_leftplatform_set;stc_leftplatformlinea_2_set;dyr_a_3_leftplatform_set;stc_leftplatformlinea_3_set;dyr_a_4_leftplatform_set;stc_leftplatformlinea_4_set;dyr_a_6_leftplatform_set;stc_leftplatformlinea_6_set;dyr_b_1_rightplatform_set;stc_rightplatformlineb_1_set;dyr_b_2_rightplatform_set;stc_rightplatformlineb_2_set;plate_side;dyr_b_3_rightplatform_set;stc_rightplatformlineb_3_set;dyr_b_4_rightplatform_set;stc_rightplatformlineb_4_set;dyr_b_6_rightplatform_set;stc_rightplatformlineb_6_set;IPP0001;IPP0002;IPP0003;IPP0004;IPP0005
- **Callees:** FUN_710056c360;FUN_7102405040;FUN_71025e9d50;FUN_71025f4d80;FUN_71025f5420;FUN_71025f55b0;FUN_710262fb80;FUN_7102ef7b90;FUN_7102ef7ef0;FUN_7102ef9a60;FUN_7102ef9c90;FUN_7102efc9d0;FUN_7102efca80;FUN_7102efcf00;FUN_7102efcfe0;FUN_710313ef20;...
- **Files:** [decomp](../decompiled/FUN_7102ef6bd0__7102ef6bd0.c)  [cfg](../decompiled/FUN_7102ef6bd0__7102ef6bd0.mmd)
- **Clone hash:** `6005610354029c46`

```c

/* WARNING: Removing unreachable block (ram,0x007102ef76bc) */

void FUN_7102ef6bd0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long ****pppplVar6;
  ulong *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long *********ppppppppplVar8;
  long *********ppppppppplVar9;
  long *********ppppppppplVar10;
  long *********ppppppppplVar11;
  char *pcVar12;
  long *********ppppppppplVar13;
  byte ****ppppbVar14;
  char *pcVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  uint *puVar20;
  undefined8 uVar21;
  long *plVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
// ... (504 more lines)
```

## 42. `FUN_71029f2b20`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71029f2b20`  (offset `0x29f2b20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71029f2b20(byte * * * * param_1, long * param_2, long * * * * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9380 bytes / 624 bb / 1 incoming refs
- **Match values:** ip
- **Callees:** FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::memset;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error
- **Files:** [decomp](../decompiled/FUN_71029f2b20__71029f2b20.c)  [cfg](../decompiled/FUN_71029f2b20__71029f2b20.mmd)
- **Clone hash:** `06fa3dd386540475`

```c

void FUN_71029f2b20(byte ****param_1,long *param_2,long ****param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  byte ****ppppbVar2;
  int iVar3;
  byte ***__src;
  ulong uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  byte *pbVar8;
  long ****pppplVar9;
  byte *pbVar10;
  byte ****ppppbVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long ***ppplVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  size_t __n;
  long lVar23;
  void *__s;
  byte ***pppbVar24;
  byte *pbVar25;
  undefined4 uVar26;
  long ***local_70;
  undefined4 local_64;
  
  plVar13 = param_2 + 1;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
// ... (1875 more lines)
```

## 43. `FUN_71030ae260`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71030ae260`  (offset `0x30ae260`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71030ae260(long param_1, int param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1740 bytes / 45 bb / 3 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0006
- **Callers:** FUN_71030a5e40;FUN_71030a9aa0
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_71025f5420;FUN_71025f55b0;FUN_7102616cf0;FUN_7102624740;FUN_7102624870;FUN_71026249a0;FUN_710262c200;FUN_7103159960;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71030ae260__71030ae260.c)  [cfg](../decompiled/FUN_71030ae260__71030ae260.mmd)
- **Clone hash:** `822e58ddc55103ca`

```c

void FUN_71030ae260(long param_1,int param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_60;
  ulong uStack_58;
  float local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x1218) = 0xffffffff;
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x300) + 0x48) + 8);
    puVar2 = *(ulong **)(*(long *)(param_1 + 0x300) + 0x60);
    if (puVar2 != (ulong *)(lVar3 + 8)) {
      FUN_7102616cf0(puVar2,*(undefined1 (**) [16])(lVar3 + 8),*(undefined1 (**) [16])(lVar3 + 0x10)
                     ,param_4,param_5,param_6,param_7,param_8);
      lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x300) + 0x48) + 8);
      puVar2 = *(ulong **)(*(long *)(param_1 + 0x300) + 0x60);
    }
    if (puVar2 + 3 != (ulong *)(lVar3 + 0x20)) {
      FUN_7102616cf0(puVar2 + 3,*(undefined1 (**) [16])(lVar3 + 0x20),
                     *(undefined1 (**) [16])(lVar3 + 0x28),param_4,param_5,param_6,param_7,param_8);
    }
    FUN_7102624870(*(long *)(param_1 + 0x308),1);
    FUN_7102624740(*(long *)(param_1 + 0x308),1);
    lVar3 = *(long *)(*(long *)(param_1 + 0x300) + 0x60);
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x300) + 0x48) + 8);
    uVar6 = *(undefined8 *)(lVar5 + 0x40);
// ... (202 more lines)
```

## 44. `FUN_7103375860`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103375860`  (offset `0x3375860`)
- **Namespace:** `Global`
- **Signature:** `undefined8 * __cdecl FUN_7103375860(undefined8 * param_1, uint * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1464 bytes / 54 bb / 4 incoming refs
- **Match values:** ip
- **Strings touched:** key_context;MetatableUiScriptPlayer;require;invoke;require2;__index;UiScriptPlayer;SCENE_EXIT_CODE_NONE;SCENE_EXIT_CODE_NORMAL;SCENE_EXIT_CODE_CANCEL;BUTTON_ID_NONE
- **Callers:** FUN_71019e0e40;FUN_7101af2070;FUN_71022f2b20;FUN_71032cb040
- **Callees:** FUN_7103375650;FUN_7103541e10;FUN_710372cc40;FUN_710372d140;FUN_710372d730;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;FUN_71038f5390;FUN_71038f55d0;FUN_71038f5c00;FUN_71038f7260;FUN_71038f9510;FUN_71038fec40;FUN_710391dde0;FUN_710391e050;...
- **Files:** [decomp](../decompiled/FUN_7103375860__7103375860.c)  [cfg](../decompiled/FUN_7103375860__7103375860.mmd)
- **Clone hash:** `a0f74d0e0b597da5`

```c

undefined8 *
FUN_7103375860(undefined8 *param_1,uint *param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long **pplVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  void *__dest;
  void *pvVar7;
  long ***ppplVar8;
  undefined8 uVar9;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long ***ppplVar19;
  void *__src;
  long ****__n;
  long lVar20;
  undefined1 auVar21 [16];
  long ***local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
// ... (216 more lines)
```

## 45. `FUN_7102eaaea0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102eaaea0`  (offset `0x2eaaea0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102eaaea0(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 1960 bytes / 110 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** 00_Floor01L;00_Floor01R;S13_e;S13_e_02;IPP0002;IPP0003;IPP0004;IPP0005
- **Callers:** FUN_7102ea7150
- **Callees:** FUN_71025e9d50;FUN_71025f55b0;FUN_7102eab650;FUN_71031460f0;FUN_710392e290
- **Files:** [decomp](../decompiled/FUN_7102eaaea0__7102eaaea0.c)  [cfg](../decompiled/FUN_7102eaaea0__7102eaaea0.mmd)
- **Clone hash:** `98127ef8e14d4a18`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102eaaea0(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  long ***ppplVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long ****pppplVar5;
  char *pcVar6;
  long ****pppplVar7;
  byte ****ppppbVar8;
  long ****pppplVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  undefined4 uVar16;
  uint uVar17;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar9 = &local_50;
  pppplVar5 = &local_50;
  pppplVar7 = &local_50;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
// ... (348 more lines)
```

## 46. `FUN_7103371290`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103371290`  (offset `0x3371290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103371290(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12368 bytes / 333 bb / 3 incoming refs
- **Match values:** ip;IP
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

## 47. `FUN_7102ea7150`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102ea7150`  (offset `0x2ea7150`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102ea7150(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 5616 bytes / 241 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** IPP0002;IPP0003;IPP0004;IPP0005;S13_g;S13_f;S13_f_02;S13_Siro_hole;plate_side;S13_Siro_koware;S13_e_03;S13_enkei_break
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7102405040;FUN_71025e9d50;FUN_71025f55b0;FUN_7102626be0;FUN_7102ea9920;FUN_7102eaaea0;FUN_7102eae230;FUN_7102eae830;FUN_7102eb0f30;FUN_71031675b0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;...
- **Files:** [decomp](../decompiled/FUN_7102ea7150__7102ea7150.c)  [cfg](../decompiled/FUN_7102ea7150__7102ea7150.mmd)
- **Clone hash:** `fec922aecc42181a`

```c

/* WARNING: Removing unreachable block (ram,0x007102ea7ab0) */
/* WARNING: Removing unreachable block (ram,0x007102ea782c) */
/* WARNING: Removing unreachable block (ram,0x007102ea7b88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102ea7150(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,long ***param_8)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined2 *puVar21;
  long *plVar22;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar23;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long ****pppplVar24;
  undefined **ppuVar25;
  long ****pppplVar26;
// ... (1051 more lines)
```

## 48. `FUN_71021bf990`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021bf990`  (offset `0x21bf990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021bf990(void)`
- **Size / BBs / Incoming:** 9652 bytes / 25 bb / 1 incoming refs
- **Match values:** IP
- **Strings touched:** FIGHTER_MASTER_INSTANCE_WORK_ID_INT_START;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SWORD_AURA_EFFECT_HANDLE;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_GROUND_EFFECT_HANDLE;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_IMPACT_EFFECT_HANDLE;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_EFFECT_COUNT;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_TARGET_COLLISION_BUFFER_ID;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIT_WALL;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_HOP;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_DATA_ADDRESS;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_THROW_OBJECT_ID;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_THROW_OBJECT_ID_FRAME;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_TERM;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_EFFECT_GROUND_LINE_POS_RATIO;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_ATTACH_PREV_POS_X;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_ATTACH_PREV_POS_Y;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_ATTACH_PREV_HIT_POS_X;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_ATTACH_PREV_HIT_POS_Y;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_START;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_CHANGE_SE;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_FLICK;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SPECIAL_N_HOP_DONE;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_EFFECT_LINE_LR;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SWORD_REQ_EFFECT_AURA;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SWORD_OFF_EFFECT_AURA;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_AIR_LASSO_IMMIDIATE;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_NONE;FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE;FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_F;FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_B;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021bf990__71021bf990.c)  [cfg](../decompiled/FUN_71021bf990__71021bf990.mmd)
- **Clone hash:** `f69e7113b82d4bb8`

```c

void FUN_71021bf990(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SWORD_AURA_EFFECT_HANDLE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_GROUND_EFFECT_HANDLE",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_IMPACT_EFFECT_HANDLE",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_EFFECT_COUNT",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_TARGET_COLLISION_BUFFER_ID"
                 ,(undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIT_WALL",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_HOP",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_DATA_ADDRESS",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_THROW_OBJECT_ID",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_THROW_OBJECT_ID_FRAME",
// ... (1052 more lines)
```

## 49. `FUN_71022e6350`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71022e6350`  (offset `0x22e6350`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71022e6350(long param_1, int param_2)`
- **Size / BBs / Incoming:** 1356 bytes / 76 bb / 1 incoming refs
- **Match values:** iP
- **Callers:** FUN_71019bd310
- **Callees:** FUN_71022e46f0;FUN_71032631a0;FUN_71032632a0;FUN_7103264270;FUN_71032df050;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71022e6350__71022e6350.c)  [cfg](../decompiled/FUN_71022e6350__71022e6350.mmd)
- **Clone hash:** `1d4cf294526387bd`

```c

undefined8 FUN_71022e6350(long param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined2 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  char cVar19;
  long lVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  float fVar24;
  
  uVar11 = *(uint *)(param_1 + 0x204388);
  piVar7 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),param_2);
  lVar20 = DAT_710532f730;
  if (uVar11 == 0) {
    lVar20 = *(long *)(DAT_710532f730 + 8);
    uVar10 = FUN_71022e46f0();
    if ((uVar10 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      lVar20 = *(long *)(*(long *)(lVar20 + 0x2c8) + 8);
// ... (217 more lines)
```

## 50. `FUN_7101977420`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101977420`  (offset `0x1977420`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_7101977420(void)`
- **Size / BBs / Incoming:** 16788 bytes / 747 bb / 1 incoming refs
- **Match values:** ip
- **Strings touched:** ui/message/msg_%s.msbt;system;common;/message/msg_%s+%%s.msbt;mode_empty_03;loading_pos_normal;tips_in;tips_out;help_in;help_out;matchiup_tips_on;matchiup_tips_off;gradation_off;set_txt_cache_title_00;set_txt_cache_honbun_00;selector;set_txt_keyhelp;color_fade_out_m;black;fade_out_s;{:D=-;Mi:@$
- **Callees:** FUN_71000001c0;FUN_7100000330;FUN_71003cb050;FUN_710137c970;FUN_71015335d0;FUN_7101685520;FUN_710175cc00;FUN_710175ff50;FUN_7101797bb0;FUN_7101af77d0;FUN_71023ef9c0;FUN_710248ab00;FUN_7102491dd0;FUN_710323b9e0;FUN_710323beb0;FUN_710323c1c0;...
- **Files:** [decomp](../decompiled/FUN_7101977420__7101977420.c)  [cfg](../decompiled/FUN_7101977420__7101977420.mmd)
- **Clone hash:** `c38e4f4528ac2e71`

```c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_7101977420(void)

{
  int iVar1;
  undefined2 *puVar2;
  ulong *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined1 auVar8 [16];
  int iVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
// ... (3216 more lines)
```

