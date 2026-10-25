# transition (funcs=19, hits=79)

Top 50 functions by hit count

## 1. `FUN_7102092330`  (hits=23)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102092330`  (offset `0x2092330`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102092330(long param_1)`
- **Size / BBs / Incoming:** 1320 bytes / 4 bb / 2 incoming refs
- **Match values:** transition
- **Strings touched:** TRANS_A_JUMP_AERIAL;WorkModule;get_float;set_float;rnd_float;add_float;gauge_parts_on;sub_float;mul_float;div_float;get_int;set_int;get_int64;set_int64;rnd_int;inc_int;dec_int;add_int;sub_int;mul_int;div_int;count_down_int;is_flag;on_flag;off_flag;set_flag;turn_off_flag;enable_transition_term_group;unable_transition_term_group;clear_transition_term_group;is_enable_transition_term_group;enable_transition_term_group_ex;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102092330__7102092330.c)  [cfg](../decompiled/FUN_7102092330__7102092330.mmd)
- **Clone hash:** `92557daa849afe29`

```c

void FUN_7102092330(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"WorkModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_float",(long ****)FUN_710208de70,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_float",(long ****)FUN_710208dfc0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"rnd_float",(long ****)FUN_710208e1a0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_float",(long ****)FUN_710208e420,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"sub_float",(long ****)FUN_710208e600,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"mul_float",(long ****)FUN_710208e7e0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"div_float",(long ****)FUN_710208e9c0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_int",(long ****)FUN_710208eba0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_int",(long ****)FUN_710208ecf0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_int64",(long ****)FUN_710208ee40,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_int64",(long ****)FUN_710208ef90,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"rnd_int",(long ****)FUN_710208f0e0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"inc_int",(long ****)FUN_710208f240,ppppbVar1,in_x4,in_x5,in_x6,
// ... (85 more lines)
```

## 2. `FUN_7101f42290`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f42290`  (offset `0x1f42290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f42290(undefined * * * param_1, undefined8 * param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1828 bytes / 114 bb / 2 incoming refs
- **Match values:** transition
- **Strings touched:** gauge_parts_on;set_rep_cap_00;transition_%02d;screen_reset_in;screen_reset_out
- **Callers:** FUN_7101f09580;FUN_7101f3e4e0
- **Callees:** FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778760;FUN_7103779650;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101f42290__7101f42290.c)  [cfg](../decompiled/FUN_7101f42290__7101f42290.mmd)
- **Clone hash:** `f1db24729b0844eb`

```c

void FUN_7101f42290(undefined ***param_1,undefined8 *param_2,byte ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  byte ****ppppbVar7;
  undefined8 uVar8;
  byte ****ppppbVar9;
  undefined **ppuVar10;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  undefined **local_48;
  
  ppppbVar7 = param_3;
  ppppbVar9 = param_4;
  FUN_7103776390(&local_60,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  *(byte *)(param_1 + 0x28) = (byte)param_4 & 1;
  FUN_7103776640(&local_50,(long)&local_60,param_3,ppppbVar7,ppppbVar9,param_5,param_6,param_7,
                 param_8);
  ppuVar3 = local_48;
  if (param_1 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar10 = param_1[1];
    param_1[1] = ppuVar3;
    if (ppuVar10 != (undefined **)0x0) {
      puVar4 = ppuVar10[3];
      ppuVar10[2] = (undefined *)&PTR_FUN_710523d9a8;
      ppuVar10[3] = (undefined *)0x0;
      if (puVar4 != (undefined *)0x0) {
        FUN_710392eb40((ulong)puVar4);
      }
      FUN_710392eb40((ulong)ppuVar10);
    }
// ... (359 more lines)
```

## 3. `FUN_71021723e0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021723e0`  (offset `0x21723e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021723e0(void)`
- **Size / BBs / Incoming:** 13744 bytes / 25 bb / 1 incoming refs
- **Match values:** TRANSITION
- **Strings touched:** FIGHTER_PIKMIN_INSTANCE_WORK_INT_START;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PRE_PIKMIN_VARIATION;FIGHTER_PIKMIN_INSTANCE_WORK_INT_BEFORE_PRE_PIKMIN_VARIATION;FIGHTER_PIKMIN_INSTANCE_WORK_INT_ALLOCATE_COLLISION_GROUP;FIGHTER_PIKMIN_INSTANCE_WORK_INT_TROOPS_MANAGER_ADDRESS;FIGHTER_PIKMIN_INSTANCE_WORK_INT_WING_PIKMIN_END_EFFECT_HANDLE;FIGHTER_PIKMIN_INSTANCE_WORK_INT_WING_PIKMIN_END_FRAME_COUNT;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_CURSOR_HANDLE;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_ANTENNA_EFFECT_HANDLE;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_1;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_2;FIGHTER_PIKMIN_INSTANCE_WORK_INT_THROW_PIKMIN_VARIATION;FIGHTER_PIKMIN_INSTANCE_WORK_INT_TERM;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_FRAME;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_CATCH_MOTION_RATE;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_START;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOP;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_EX1;FIGHTER_PIKMIN_STATUS_ATTACK_AIR_WORK_FLAG_SYNC;FIGHTER_PIKMIN_STATUS_ATTACK_AIR_WORK_FLAG_DETACH;FIGHTER_PIKMIN_INSTANCE_ATTACK_AIR_WORK_FLAG_FALL_SPECIAL;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_CATCH_CUT;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_HOMERUN_CONTEST;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_CHANGE_CATCH_MOTION_RATE;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_PIKMIN_CATCH_DASH_STATUS;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021723e0__71021723e0.c)  [cfg](../decompiled/FUN_71021723e0__71021723e0.mmd)
- **Clone hash:** `8980d91ab7f317ab`

```c

void FUN_71021723e0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_START",(undefined **)0x100000bc
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PRE_PIKMIN_VARIATION",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_BEFORE_PRE_PIKMIN_VARIATION",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_ALLOCATE_COLLISION_GROUP",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_TROOPS_MANAGER_ADDRESS",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_WING_PIKMIN_END_EFFECT_HANDLE",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_WING_PIKMIN_END_FRAME_COUNT",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_CURSOR_HANDLE",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_ANTENNA_EFFECT_HANDLE",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0"
                 ,(undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_1"
                 ,(undefined **)0x100000c7,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (1571 more lines)
```

## 4. `FUN_71020fbb90`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** TRANSITION
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

## 5. `FUN_71035e2f00`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71035e2f00`  (offset `0x35e2f00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71035e2f00(undefined1 * param_1, char * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11468 bytes / 814 bb / 2 incoming refs
- **Match values:** transition
- **Strings touched:** shadow;lightset;plate_side;caster;number;action;this_light;color;select_item;radius;offset;local_offset;opaque_sort;order;draw_range;dys_yoga03_l_03_set;drawing_order;compress_type;stage_visible_type;mirror;instancing;aurora_vision;stage_transition_type;stage_transition_visible;bounding_scale;stage_expansion_type;stage_sh_priority;is_multi_sh;poison;stencil_type;stage_ink_type;force_opaque;...
- **Callers:** FUN_71035e0e50;FUN_71035ecf10
- **Callees:** FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strcmp;<EXTERNAL>::atoi;<EXTERNAL>::atof
- **Files:** [decomp](../decompiled/FUN_71035e2f00__71035e2f00.c)  [cfg](../decompiled/FUN_71035e2f00__71035e2f00.mmd)
- **Clone hash:** `89d6038915fa509b`

```c

void FUN_71035e2f00(undefined1 *param_1,char *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  ulong uVar26;
  char *pcVar27;
  long ****pppplVar28;
  undefined1 uVar29;
  long *plVar30;
  long *plVar31;
  uint uVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
// ... (2169 more lines)
```

## 6. `FUN_7102219310`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102219310`  (offset `0x2219310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102219310(long param_1)`
- **Size / BBs / Incoming:** 10116 bytes / 52 bb / 2 incoming refs
- **Match values:** transition
- **Strings touched:** set_life;set_life_as_default;set_life_with_pocket_count;set_life_type;regist_life_status_ignore_lost;action;request_remove;is_same_create_frame;search_target_returns_work;set_hit_as_sphere;set_hit_as_capsule;set_hit_from_param;reset_hit;set_search;set_area;enable_roll_up_area;create_item;create_item_simple;create_item_with_angle;create_item_with_angle_from_param;create_item_by_lot;warp_to_target;warp_to_target_with_safe_pos;begin_scale_animation_simple;begin_scale_animation;begin_scale_animation_with_param;set_countdown;set_countdown2;set_countdown3;set_bomb_countdown;is_dead_area;enable_area;...
- **Callers:** FUN_710226f500
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102219310__7102219310.c)  [cfg](../decompiled/FUN_7102219310__7102219310.mmd)
- **Clone hash:** `93638b8ec7e90b21`

```c

void FUN_7102219310(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  long local_30;
  int local_28;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)&DAT_71042c3080,0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_38,(uint *)"set_life",(long ****)FUN_71021f5e90,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"set_life_as_default",(long ****)FUN_71021f5fa0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"set_life_with_pocket_count",(long ****)FUN_71021f6050,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"set_life_type",(long ****)FUN_71021f61d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"regist_life_status_ignore_lost",(long ****)FUN_71021f6280,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"action",(long ****)FUN_71021f6330,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"request_remove",(long ****)FUN_71021f64c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"is_same_create_frame",(long ****)FUN_71021f6540,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"search_target_returns_work",(long ****)FUN_71021f6590,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"set_hit_as_sphere",(long ****)FUN_71021f66a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"set_hit_as_capsule",(long ****)FUN_71021f6b60,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"set_hit_from_param",(long ****)FUN_71021f7230,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
// ... (836 more lines)
```

## 7. `FUN_7101f45620`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** transition
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

## 8. `FUN_7102177b50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102177b50`  (offset `0x2177b50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102177b50(void)`
- **Size / BBs / Incoming:** 10936 bytes / 28 bb / 1 incoming refs
- **Match values:** TRANSITION
- **Strings touched:** FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLOAT_START;WEAPON_DIDDY_EXPLOSION_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLOAT_STAR_MISSILE_SCALE;FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLOAT_STAR_MISSILE_ATTACK_POWER;FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE;FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_GORDO_THROW_NUM;FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_PICKUP_KIND;FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_PICKUP_TASK_ID;FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_SPECIAL_N_HIT_NEAR_COUNT;FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_SPECIAL_N_HIT_NEAR_FRAME;FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_SPECIAL_MELEE_TYPE;FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_TERM;FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_PERSONAL;FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_GORDO_GET;FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_TURN_DAMAGE;FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_START_AIR;FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_HAMMER_VISIBILITY;FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_DEDEDE_AREA_KIND_START;FIGHTER_DEDEDE_AREA_KIND_EAT_ITEM;FIGHTER_DEDEDE_AREA_KIND_TERM;FIGHTER_DEDEDE_AREA_GROUP_EAT;FIGHTER_DEDEDE_AREA_GROUP_GET;FIGHTER_DEDEDE_AREA_GROUP_TERM;FIGHTER_DEDEDE_HAVE_ITEM_WORK_0;FIGHTER_DEDEDE_HAVE_ITEM_WORK_1;FIGHTER_DEDEDE_HAVE_ITEM_WORK_2;FIGHTER_DEDEDE_HAVE_ITEM_WORK_3;FIGHTER_DEDEDE_HAVE_ITEM_WORK_TERM;FIGHTER_DEDEDE_LINK_NO_PRE_START;FIGHTER_DEDEDE_LINK_NO_SWALLOW_WEAPON;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102177b50__7102177b50.c)  [cfg](../decompiled/FUN_7102177b50__7102177b50.mmd)
- **Clone hash:** `8023c0a79db36090`

```c

void FUN_7102177b50(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLOAT_STAR_MISSILE_SCALE",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLOAT_STAR_MISSILE_ATTACK_POWER"
                 ,(undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLOAT_TERM",(undefined **)0x4f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_GORDO_THROW_NUM",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_PICKUP_KIND",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_PICKUP_TASK_ID",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_SPECIAL_N_HIT_NEAR_COUNT",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_SPECIAL_N_HIT_NEAR_FRAME",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEDEDE_INSTANCE_WORK_ID_INT_SPECIAL_MELEE_TYPE",
// ... (1158 more lines)
```

## 9. `FUN_7101f3e4e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f3e4e0`  (offset `0x1f3e4e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f3e4e0(undefined * * * param_1, undefined8 * param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 848 bytes / 47 bb / 4 incoming refs
- **Match values:** transition
- **Strings touched:** set_rep_movie;set_parts_movie;set_rep_image;mode_empty_03;set_parts_transition_00;transition_on;set_parts_tellop_txt_00;set_parts_tellop_scr_00;tellop_on
- **Callers:** FUN_7101f09580;FUN_7101f307c0;FUN_7101f31930;FUN_7101f35b00
- **Callees:** FUN_7101f3fe20;FUN_7101f41070;FUN_7101f42290;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101f3e4e0__7101f3e4e0.c)  [cfg](../decompiled/FUN_7101f3e4e0__7101f3e4e0.mmd)
- **Clone hash:** `f813efc0db33500a`

```c

void FUN_7101f3e4e0(undefined ***param_1,undefined8 *param_2,byte ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  undefined **ppuVar8;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  
  ppppbVar7 = param_3;
  ppppbVar6 = param_4;
  FUN_7103776390(&local_80,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  *(byte *)(param_1 + 6) = (byte)param_4 & 1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  FUN_7103776640(&local_50,(long)&local_80,param_3,ppppbVar7,ppppbVar6,param_5,param_6,param_7,
                 param_8);
  ppuVar2 = local_48;
  if (param_1 != &local_50) {
    local_48 = (undefined **)0x0;
    ppuVar8 = param_1[1];
    param_1[1] = ppuVar2;
    if (ppuVar8 != (undefined **)0x0) {
      puVar1 = ppuVar8[3];
      ppuVar8[2] = (undefined *)&PTR_FUN_710523d9a8;
      ppuVar8[3] = (undefined *)0x0;
      if (puVar1 != (undefined *)0x0) {
        FUN_710392eb40((ulong)puVar1);
// ... (149 more lines)
```

## 10. `FUN_7102182bb0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102182bb0`  (offset `0x2182bb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102182bb0(void)`
- **Size / BBs / Incoming:** 12184 bytes / 19 bb / 1 incoming refs
- **Match values:** TRANSITION
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

## 11. `FUN_7101f3c990`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f3c990`  (offset `0x1f3c990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f3c990(undefined8 * param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2216 bytes / 107 bb / 5 incoming refs
- **Match values:** transition
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

## 12. `FUN_7103685f20`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103685f20`  (offset `0x3685f20`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_7103685f20(long * param_1)`
- **Size / BBs / Incoming:** 3944 bytes / 231 bb / 2 incoming refs
- **Match values:** transition
- **Strings touched:** curve_blending_space;transition;dys_yoga03_l_03_set;blend_result
- **Callers:** FUN_7103675220;FUN_710367b2d0
- **Callees:** FUN_7102756040;FUN_71035da970;FUN_7103676c70;FUN_71036836c0;FUN_7103683c00;FUN_7103686e90;FUN_710368c020;FUN_710368cc20;FUN_71037c3a70;FUN_71038d74f0;FUN_71038d78d0;FUN_71038d7c40;FUN_71038d87d0;FUN_71038d8950;FUN_71038d9f10;FUN_71038db170;...
- **Files:** [decomp](../decompiled/FUN_7103685f20__7103685f20.c)  [cfg](../decompiled/FUN_7103685f20__7103685f20.mmd)
- **Clone hash:** `bfea6a07e435c114`

```c

undefined4 FUN_7103685f20(long *param_1)

{
  uint uVar1;
  void *pvVar2;
  long ***ppplVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  byte *pbVar8;
  long *****ppppplVar9;
  byte ****ppppbVar10;
  long ****in_x4;
  undefined8 in_x5;
  long ***in_x6;
  long ***in_x7;
  long **pplVar11;
  long ***ppplVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long ****pppplVar21;
  long **pplVar22;
  long **pplVar23;
  long ***ppplVar24;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined2 uStack_df;
  undefined1 uStack_dd;
  undefined4 uStack_dc;
  undefined1 local_d8;
  undefined4 uStack_d7;
  undefined1 uStack_d3;
// ... (680 more lines)
```

## 13. `FUN_7101f3d240`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f3d240`  (offset `0x1f3d240`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f3d240(long param_1, int * param_2, long * * * * * * * * * param_3, undefined8 param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1504 bytes / 80 bb / 3 incoming refs
- **Match values:** transition
- **Strings touched:** anime_stop;anime_loop;type_movie;type_image;type_movie_nobgm;type_movie_bgm_ng;gauge_parts_on;type_sound;type_tellop;delete_in;delete_out;bgm_title_%s;trans_off;trans_on;bgm_ng_on;bgm_ng_off;nobgm_on;nobgm_off;mode_empty_03;mute_on;mute_off;thumb_off;thumb_on;thumb2_off;thumb2_on;add_transition_in
- **Callers:** FUN_7101f1ee70;FUN_7101f41a50
- **Callees:** FUN_71003a4ca0;FUN_71032570e0;FUN_7103778300;FUN_7103779480;FUN_7103779650;FUN_710377a310;<EXTERNAL>::memcmp
- **Files:** [decomp](../decompiled/FUN_7101f3d240__7101f3d240.c)  [cfg](../decompiled/FUN_7101f3d240__7101f3d240.mmd)
- **Clone hash:** `38ca0033cf71d53d`

```c

void FUN_7101f3d240(long param_1,int *param_2,long *********param_3,byte ****param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  long *********ppppppppplVar13;
  long ****pppplVar14;
  char cVar15;
  long *********ppppppppplVar16;
  long *********ppppppppplVar17;
  uint auStack_e0 [18];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar5 = (uint)param_5;
  ppppppppplVar13 = param_3;
  pppplVar14 = (long ****)param_5;
  if ((int)param_4 == 0x10) {
    if (*(char *)(param_1 + 0x21d) != '\0') {
      lVar10 = *(long *)(param_1 + 8);
      *(undefined1 *)(param_1 + 0x21d) = 0;
      pcVar11 = "anime_stop";
LAB_7101f3d2a8:
      FUN_7103778300(0x3f800000,lVar10,(long)pcVar11);
    }
  }
// ... (207 more lines)
```

## 14. `FUN_71036b1a40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71036b1a40`  (offset `0x36b1a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71036b1a40(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1572 bytes / 66 bb / 2 incoming refs
- **Match values:** transition
- **Strings touched:** transition;dys_yoga03_l_03_set;blend_result
- **Callers:** FUN_7103675220;FUN_710367b2d0
- **Callees:** FUN_7103682860;FUN_71036b2070;FUN_71036b21a0;FUN_71036b2390;FUN_7103741710;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::nu::VirtualFreeHook
- **Files:** [decomp](../decompiled/FUN_71036b1a40__71036b1a40.c)  [cfg](../decompiled/FUN_71036b1a40__71036b1a40.mmd)
- **Clone hash:** `d9975e58d1c25be0`

```c

void FUN_71036b1a40(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long ****pppplVar7;
  uint extraout_w8;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 local_80;
  undefined1 local_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined2 uStack_72;
  void *local_70;
  undefined4 local_64;
  
  plVar9 = (long *)**(undefined8 **)(param_1 + 8);
  puVar2 = (undefined8 *)FUN_710392e290(0x10,0xa8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80._0_1_ = 0xa8;
      local_80._1_4_ = 0;
      local_80._5_2_ = 0;
      local_80._7_1_ = 0;
      pppplVar7 = (long ****)&local_80;
// ... (261 more lines)
```

## 15. `FUN_7101f87300`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f87300`  (offset `0x1f87300`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f87300(long param_1)`
- **Size / BBs / Incoming:** 5008 bytes / 47 bb / 2 incoming refs
- **Match values:** transition
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

## 16. `FUN_7101f09580`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f09580`  (offset `0x1f09580`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f09580(long param_1, long * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 22960 bytes / 1079 bb / 1 incoming refs
- **Match values:** transition
- **Strings touched:** set_parts_continue;mode_empty_03;set_rep_thumb;gauge_parts_on;set_txt_date;selector;set_parts_new;selector_0;set_parts_btn_trans_%02d;selector_1;set_parts_btn_speed_00;set_parts_btn_speed_01;set_parts_btn_speed_02;selector_2;set_btn_key_l;set_btn_key_r;set_parts_transition;set_rep_cap;set_parts_preview;set_txt_length;set_txt_current;set_parts_lct_rec;anime_loop;set_moive_player;set_rep_movie
- **Callers:** FUN_710197f510
- **Callees:** FUN_71000001c0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_71004f5770;FUN_7101764000;FUN_710184ca10;FUN_710184cbd0;FUN_7101a7ed70;FUN_7101d74980;FUN_7101d7f040;FUN_7101d83a00;FUN_7101d85960;FUN_7101d85b40;FUN_7101d87c30;FUN_7101f0ef30;FUN_7101f0f160;FUN_7101f1e560;...
- **Files:** [decomp](../decompiled/FUN_7101f09580__7101f09580.c)  [cfg](../decompiled/FUN_7101f09580__7101f09580.mmd)
- **Clone hash:** `2acedc979a5438c5`

```c

void FUN_7101f09580(long param_1,long *param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  undefined2 uVar3;
  long ********pppppppplVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  void *__dest;
  long *******ppppppplVar20;
  long *plVar21;
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
// ... (4580 more lines)
```

## 17. `FUN_710225b990`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** TRANSITION
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

## 18. `FUN_7101f41a50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f41a50`  (offset `0x1f41a50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f41a50(float param_1, float param_2, float param_3, int * param_4, long * param_5, long * * * * * * * * * param_6, ulong param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, long * param_11)`
- **Size / BBs / Incoming:** 1504 bytes / 79 bb / 3 incoming refs
- **Match values:** transition
- **Strings touched:** edit_seek_out;edit_seek_over;noedit_seek_out;noedit_seek_over;edit_tlmenu_item;edit_tlmenu_seek;edit_tlmenu_transition;edit_pickup_marked;edit_pickup;edit_stretch
- **Callers:** FUN_7101f1ee70
- **Callees:** FUN_7101f3d240;FUN_7101f3d820;FUN_7101f3da50;FUN_7103778300
- **Files:** [decomp](../decompiled/FUN_7101f41a50__7101f41a50.c)  [cfg](../decompiled/FUN_7101f41a50__7101f41a50.mmd)
- **Clone hash:** `8466039b1c1f96a5`

```c

void FUN_7101f41a50(float param_1,float param_2,float param_3,int *param_4,long *param_5,
                   long *********param_6,ulong param_7,long ****param_8,undefined8 param_9,
                   undefined8 param_10,long *param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *extraout_x1;
  char *pcVar5;
  long *extraout_x1_00;
  long *plVar6;
  long *********ppppppppplVar7;
  long ****pppplVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  int *piVar25;
  int iVar26;
  int *piVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
// ... (247 more lines)
```

## 19. `FUN_71004206a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004206a0`  (offset `0x4206a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004206a0(void)`
- **Size / BBs / Incoming:** 1328 bytes / 52 bb / 1 incoming refs
- **Match values:** Transition
- **Strings touched:** AmiiboReadFigureScene;AmiiboSelectColorScene;AmiiboEditScene;AmiiboWriteFigureScene;AmiiboTransitionEditScene;CharaMakeSequenceScene;IngameCallSequenceScene;SpiritsForceReturnScene;AmiiboStartJourneyScene;AmiiboPseudoSleepScene;set_assist_team_no;AmiiboReturnJourneyScene;AmiiboResultListScene;AmiiboResultDetailScene;AmiiboJourneyReplayScene;MeleeReplaySequenceScene;PrizeListScene;LoginScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004206a0__71004206a0.c)  [cfg](../decompiled/FUN_71004206a0__71004206a0.mmd)
- **Clone hash:** `767ea7d4ffe1a8d0`

```c

void FUN_71004206a0(void)

{
  int iVar1;
  
  DAT_7105328188 = 0;
  DAT_7105328190 = "AmiiboReadFigureScene";
  if (((DAT_71053282b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282b0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282b0);
  }
  DAT_7105328198 = &PTR_PTR_71050b63b8;
  DAT_71053281a0 = "AmiiboSelectColorScene";
  if (((DAT_71053282b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282b8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282b8);
  }
  DAT_71053281a8 = &PTR_PTR_71050b63c0;
  DAT_71053281b0 = "AmiiboEditScene";
  if (((DAT_71053282c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282c0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282c0);
  }
  DAT_71053281b8 = &PTR_PTR_71050b63c8;
  DAT_71053281c0 = "AmiiboWriteFigureScene";
  if (((DAT_71053282c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282c8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282c8);
  }
  DAT_71053281c8 = &PTR_PTR_71050b63d0;
  DAT_71053281d0 = "AmiiboTransitionEditScene";
  if (((DAT_71053282d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282d0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282d0);
  }
  DAT_71053281d8 = &PTR_PTR_71050b63d8;
  DAT_71053281e0 = "CharaMakeSequenceScene";
  if (((DAT_7105328078 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328078), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328078);
  }
  DAT_71053281e8 = &PTR_PTR_71050b59a8;
  DAT_71053281f0 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
// ... (57 more lines)
```

