# type (funcs=434, hits=1605)

Top 50 functions by hit count

## 1. `FUN_71020fbb90`  (hits=153)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** TYPE;Type
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

## 2. `FUN_7102123d40`  (hits=91)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102123d40`  (offset `0x2123d40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102123d40(void)`
- **Size / BBs / Incoming:** 74688 bytes / 187 bb / 1 incoming refs
- **Match values:** TYPE
- **Strings touched:** FIGHTER_PAD_ATTACK_TRIGGER;FIGHTER_PAD_ATTACK_RELEASE;FIGHTER_PAD_SPECIAL_TRIGGER;FIGHTER_PAD_SPECIAL_RELEASE;FIGHTER_PAD_JUMP_TRIGGER;FIGHTER_PAD_JUMP_RELEASE;FIGHTER_PAD_GUARD_TRIGGER;FIGHTER_PAD_GUARD_RELEASE;FIGHTER_PAD_MAX;FIGHTER_PAD_CMD_CAT1_ATTACK_N;FIGHTER_PAD_CMD_CAT1_ATTACK_S3;FIGHTER_PAD_CMD_CAT1_ATTACK_HI3;FIGHTER_PAD_CMD_CAT1_ATTACK_LW3;FIGHTER_PAD_CMD_CAT1_ATTACK_S4;FIGHTER_PAD_CMD_CAT1_ATTACK_HI4;FIGHTER_PAD_CMD_CAT1_ATTACK_LW4;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_N;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_F;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_B;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_HI;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_LW;FIGHTER_PAD_CMD_CAT1_SPECIAL_N;FIGHTER_PAD_CMD_CAT1_SPECIAL_S;FIGHTER_PAD_CMD_CAT1_SPECIAL_HI;FIGHTER_PAD_CMD_CAT1_SPECIAL_LW;FIGHTER_PAD_CMD_CAT1_WALK;FIGHTER_PAD_CMD_CAT1_DASH;FIGHTER_PAD_CMD_CAT1_TURN;FIGHTER_PAD_CMD_CAT1_TURN_DASH;FIGHTER_PAD_CMD_CAT1_JUMP;FIGHTER_PAD_CMD_CAT1_JUMP_BUTTON;FIGHTER_PAD_CMD_CAT1_AIR_ESCAPE;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102123d40__7102123d40.c)  [cfg](../decompiled/FUN_7102123d40__7102123d40.mmd)
- **Clone hash:** `7ad94b1c5264513f`

```c

void FUN_7102123d40(void)

{
  byte ****in_x3;
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_80;
  long local_78;
  int local_70;
  
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_ATTACK_TRIGGER",(undefined **)0x0,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_ATTACK_RELEASE",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_SPECIAL_TRIGGER",(undefined **)0x2,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_SPECIAL_RELEASE",(undefined **)0x3,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_JUMP_TRIGGER",(undefined **)&DAT_00000004,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_JUMP_RELEASE",(undefined **)0x5,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_GUARD_TRIGGER",(undefined **)0x6,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_GUARD_RELEASE",(undefined **)&DAT_00000007,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_MAX",(undefined **)&DAT_00000008,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_N",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
// ... (7744 more lines)
```

## 3. `FUN_7101f45620`  (hits=47)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** TYPE;type
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

## 4. `FUN_71021723e0`  (hits=40)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021723e0`  (offset `0x21723e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021723e0(void)`
- **Size / BBs / Incoming:** 13744 bytes / 25 bb / 1 incoming refs
- **Match values:** TYPE
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

## 5. `FUN_7101f89310`  (hits=32)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** TYPE
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

## 6. `FUN_71021860a0`  (hits=31)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021860a0`  (offset `0x21860a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021860a0(void)`
- **Size / BBs / Incoming:** 15404 bytes / 25 bb / 1 incoming refs
- **Match values:** TYPE
- **Strings touched:** FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_START;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TURNIP_NUM;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_CATCH_SIZE;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_BALLOON_NUM;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_INVINCIBLE_FRAME;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIDE_HELMET_FRAME;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_TIME_LIMIT;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_CATEGORY;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_CATEGORY_PREV;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_KIND;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_NUM;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_ID;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_ID_TERM;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_S_DISABLE_FRAME;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TARGET_OBJECT_ID;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_ASYNC_TASK_ID;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_ASYNC_TASK_ID_TERM;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TERM;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y;WEAPON_DIDDY_EXPLOSION_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_FRAME;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_DAMAGE;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_START;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_WATER;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_CATCHING;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_CATCHING_COMP;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_MELEE_NO_RANDOM;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_CANCEL_ATTACK_1;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_SPECIAL_N_ASYNC_TASK_PROCESS;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021860a0__71021860a0.c)  [cfg](../decompiled/FUN_71021860a0__71021860a0.mmd)
- **Clone hash:** `a01e40fb606eece4`

```c

void FUN_71021860a0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TURNIP_NUM",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_CATCH_SIZE",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_BALLOON_NUM",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_INVINCIBLE_FRAME",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIDE_HELMET_FRAME",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_TIME_LIMIT",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_CATEGORY"
                 ,(undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_CATEGORY_PREV",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_KIND",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_NUM",
// ... (1793 more lines)
```

## 7. `FUN_71035f3bb0`  (hits=28)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71035f3bb0`  (offset `0x35f3bb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71035f3bb0(long * param_1, long * * * * * * * * * param_2, undefined8 param_3, long * * * * * * * * * param_4, long * * * * param_5, byte * * * * param_6, byte * * * * param_7, void * param_8)`
- **Size / BBs / Incoming:** 11516 bytes / 599 bb / 1 incoming refs
- **Match values:** Type
- **Strings touched:** plate_side;select_item;NODE_PRE_REFRACT_BLEND;kElementType_Color4_8;kElementType_Texcoord4_16;kElementType_Texcoord2_16;kElementType_Binormal4_16;kElementType_Position4_16;kElementType_Padding_8;kElementType_Bones4_32;kElementType_Color4_32;kElementType_Color4_16;kElementType_Texcoord4_32;kElementType_Texcoord2_32;kElementType_Binormal4_32;kElementType_Binormal3_32;kElementType_Position2_32;kElementType_Position3_32;kElementType_Position4_32;kElementType_Padding_64;kElementType_Padding_32;kElementType_Padding_16;kElementType_Weight4_32;kElementType_Normal4_32;kElementType_Normal3_32;kElementType_Normal4_16;kElementType_Padding_128;kElementType_Tangent4_32;kElementType_Tangent3_32;kElementType_Tangent4_16;kElementType_;Position0;...
- **Callers:** FUN_71025ece30
- **Callees:** FUN_71002c51f0;FUN_71035c32d0;FUN_71035e6280;FUN_71035e6450;FUN_71035e7c10;FUN_71035e8320;FUN_71035e8530;FUN_71035e88e0;FUN_71035e8ec0;FUN_71035e90a0;FUN_71035e9280;FUN_71035f68b0;FUN_71035f6ab0;FUN_71035f6cb0;FUN_71035f6eb0;FUN_71035f70b0;...
- **Files:** [decomp](../decompiled/FUN_71035f3bb0__71035f3bb0.c)  [cfg](../decompiled/FUN_71035f3bb0__71035f3bb0.mmd)
- **Clone hash:** `9acd463c72537c73`

```c

/* WARNING: Removing unreachable block (ram,0x0071035f5830) */
/* WARNING: Removing unreachable block (ram,0x0071035f425c) */
/* WARNING: Removing unreachable block (ram,0x0071035f56d8) */
/* WARNING: Removing unreachable block (ram,0x0071035f5908) */
/* WARNING: Removing unreachable block (ram,0x0071035f56c8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71035f3bb0(long *param_1,long *********param_2,undefined8 param_3,long *********param_4,
                   long ****param_5,byte ****param_6,byte ****param_7,void *param_8)

{
  byte *pbVar1;
  byte ***pppbVar2;
  long ************pppppppppppplVar3;
  long **********pppppppppplVar4;
  undefined1 auVar5 [8];
  byte *pbVar6;
  long *************ppppppppppppplVar7;
  long **********pppppppppplVar8;
  byte ***pppbVar9;
  long **********pppppppppplVar10;
  ulong *puVar11;
  byte bVar12;
  char cVar13;
  undefined8 *puVar14;
  long *********ppppppppplVar15;
  long *********ppppppppplVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  void *pvVar22;
  undefined8 uVar23;
  long **************pppppppppppppplVar24;
  long *********ppppppppplVar25;
  byte ****ppppbVar26;
// ... (2132 more lines)
```

## 8. `FUN_710225b990`  (hits=24)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** TYPE
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

## 9. `FUN_7102182bb0`  (hits=22)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102182bb0`  (offset `0x2182bb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102182bb0(void)`
- **Size / BBs / Incoming:** 12184 bytes / 19 bb / 1 incoming refs
- **Match values:** TYPE
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

## 10. `FUN_7101e40880`  (hits=21)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e40880`  (offset `0x1e40880`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101e40880(void)`
- **Size / BBs / Incoming:** 9700 bytes / 425 bb / 1 incoming refs
- **Match values:** TYPE;type
- **Strings touched:** header_on;header_off;btn_type_search;bg_search_%02d;gauge_on;btn_type_school;bg_school_%02d;gauge_off;set_parts_spirit_%02d;type_school;btn_type_gym;bg_gym_%02d;type_gym;type_search;finish_off;finish_on;set_txt_place;set_rep_master;set_rep_master_sdw;gauge_progress;set_txt_rest;cam_searchfield_time
- **Callees:** FUN_7101e42f50;FUN_7101e43170;FUN_7102512c50;FUN_7102512d40;FUN_7102512ec0;FUN_710251abf0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_7103778630;FUN_7103778b80;FUN_710377a120;FUN_710377a280;FUN_71037964b0;FUN_7103796f20;...
- **Files:** [decomp](../decompiled/FUN_7101e40880__7101e40880.c)  [cfg](../decompiled/FUN_7101e40880__7101e40880.mmd)
- **Clone hash:** `e1507133aa6324d5`

```c

/* WARNING: Removing unreachable block (ram,0x007101e42ca0) */
/* WARNING: Removing unreachable block (ram,0x007101e429e8) */
/* WARNING: Removing unreachable block (ram,0x007101e42b44) */
/* WARNING: Removing unreachable block (ram,0x007101e42dfc) */

void FUN_7101e40880(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ushort uVar2;
  ulong uVar3;
  short sVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long ********pppppppplVar8;
  ushort uVar9;
  char *pcVar10;
  long *********ppppppppplVar11;
  ulong uVar12;
  long *******ppppppplVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  short *psVar16;
  undefined2 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  uint *puVar23;
  byte *pbVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  long ********pppppppplStack_c8;
// ... (1292 more lines)
```

## 11. `FUN_710215e3b0`  (hits=21)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710215e3b0`  (offset `0x215e3b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710215e3b0(void)`
- **Size / BBs / Incoming:** 7016 bytes / 10 bb / 1 incoming refs
- **Match values:** TYPE
- **Strings touched:** FIGHTER_FALCO_ARCHIVE_GROUP_BASE;FIGHTER_FALCO_ARCHIVE_GROUP_WPN_BLASTER;FIGHTER_FALCO_ARCHIVE_GROUP_WPN_ARWING;FIGHTER_FALCO_ARCHIVE_GROUP_WPN_LANDMASTER;FIGHTER_FALCO_ARCHIVE_TERM;FIGHTER_FALCO_CLIFF_HANG_DATA_DEFAULT;FIGHTER_FALCO_CLIFF_HANG_DATA_SPECIAL_S;FIGHTER_FALCO_CLIFF_HANG_DATA_SPECIAL_HI;FIGHTER_FALCO_CLIFF_HANG_DATA_TERM;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_START;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_0;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_1;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_2;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_3;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_START;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_0;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_1;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_2;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_3;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_START;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_0;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_1;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_2;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_3;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_START;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_0;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_1;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_2;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_3;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_FIRE_DECIDE_STICK_X;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_FIRE_DECIDE_STICK_Y;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710215e3b0__710215e3b0.c)  [cfg](../decompiled/FUN_710215e3b0__710215e3b0.mmd)
- **Clone hash:** `9946bcf9866514bb`

```c

void FUN_710215e3b0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_ARCHIVE_GROUP_BASE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_ARCHIVE_GROUP_WPN_BLASTER",(undefined **)0x0,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_ARCHIVE_GROUP_WPN_ARWING",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_ARCHIVE_GROUP_WPN_LANDMASTER",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_ARCHIVE_TERM",(undefined **)0x3,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_CLIFF_HANG_DATA_DEFAULT",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_CLIFF_HANG_DATA_SPECIAL_S",(undefined **)0x1,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_CLIFF_HANG_DATA_SPECIAL_HI",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_CLIFF_HANG_DATA_TERM",(undefined **)0x3,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_68 = -3;
  local_78 = 0;
  local_70 = 0;
// ... (748 more lines)
```

## 12. `FUN_710214fdf0`  (hits=21)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710214fdf0`  (offset `0x214fdf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710214fdf0(void)`
- **Size / BBs / Incoming:** 7560 bytes / 13 bb / 1 incoming refs
- **Match values:** TYPE
- **Strings touched:** FIGHTER_FOX_ARCHIVE_GROUP_BASE;FIGHTER_FOX_ARCHIVE_GROUP_WPN_BLASTER;FIGHTER_FOX_ARCHIVE_GROUP_WPN_ARWING;FIGHTER_FOX_ARCHIVE_GROUP_WPN_LANDMASTER;FIGHTER_KIRBY_FOX_ARCHIVE_GROUP_WPN_BLASTER;FIGHTER_FOX_ARCHIVE_TERM;FIGHTER_FOX_CLIFF_HANG_DATA_DEFAULT;FIGHTER_FOX_CLIFF_HANG_DATA_SPECIAL_S;FIGHTER_FOX_CLIFF_HANG_DATA_SPECIAL_HI;FIGHTER_FOX_CLIFF_HANG_DATA_TERM;FIGHTER_FOX_WIN_WPN_DATA_BLASTER;FIGHTER_FOX_WIN_WPN_DATA_TERM;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_START;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_0;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_1;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_2;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_3;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_START;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_0;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_1;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_2;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_3;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_START;FIGHTER_MARIO_STATUS_KIND_SPECIAL_LW_CHARGE;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_0;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_1;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_2;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_3;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_START;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_0;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_1;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710214fdf0__710214fdf0.c)  [cfg](../decompiled/FUN_710214fdf0__710214fdf0.mmd)
- **Clone hash:** `63eff6ee9788de43`

```c

void FUN_710214fdf0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_ARCHIVE_GROUP_BASE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_ARCHIVE_GROUP_WPN_BLASTER",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_ARCHIVE_GROUP_WPN_ARWING",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_ARCHIVE_GROUP_WPN_LANDMASTER",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KIRBY_FOX_ARCHIVE_GROUP_WPN_BLASTER",(undefined **)0x1,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_ARCHIVE_TERM",(undefined **)0x2,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_CLIFF_HANG_DATA_DEFAULT",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_CLIFF_HANG_DATA_SPECIAL_S",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_CLIFF_HANG_DATA_SPECIAL_HI",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_CLIFF_HANG_DATA_TERM",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_78 = 0;
// ... (803 more lines)
```

## 13. `FUN_7101f7c910`  (hits=21)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f7c910`  (offset `0x1f7c910`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f7c910(long param_1)`
- **Size / BBs / Incoming:** 9552 bytes / 4 bb / 1 incoming refs
- **Match values:** TYPE;type
- **Strings touched:** entry_id;target_id;is_valid_target;fighter_kind;copy_fighter_kind;cp_type;cp_flag;cp_slide_type;act_id;prev_act_id;current_attack_start_frame;current_attack_end_frame;current_attack_combo_end_frame;current_attack_cancel_frame;uniq_stat;attack_phase;check_stat_air;gauge_parts_on;check_stat_build_max;check_stat_build_up;check_stat_rush;check_stat_gorogoro;check_stat_attention;check_stat_weapon_op;check_stat_final;check_stat_final_act;check_stat_dead;check_stat_loupe;check_stat_invincible;check_stat_invincible_l;check_stat_attack_catch;check_stat_passfall;...
- **Callers:** FUN_7101f87300
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101f7c910__7101f7c910.c)  [cfg](../decompiled/FUN_7101f7c910__7101f7c910.mmd)
- **Clone hash:** `5cbcaf3ca088c644`

```c

void FUN_7101f7c910(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)&DAT_7104292596,0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_28,(uint *)"entry_id",(long ****)FUN_7101f6f3a0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_71042f4a4b,(long ****)FUN_7101f6f3e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"target_id",(long ****)FUN_7101f6f420,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_valid_target",(long ****)FUN_7101f6f480,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"fighter_kind",(long ****)FUN_7101f6f500,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"copy_fighter_kind",(long ****)FUN_7101f6f530,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_71043cfd26,(long ****)FUN_7101f6f560,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"cp_type",(long ****)FUN_7101f6f590,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"cp_flag",(long ****)FUN_7101f6f5c0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"cp_slide_type",(long ****)FUN_7101f6f5f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"act_id",(long ****)FUN_7101f6f620,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"prev_act_id",(long ****)FUN_7101f6f650,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
// ... (772 more lines)
```

## 14. `FUN_710226f500`  (hits=20)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226f500`  (offset `0x226f500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226f500(long param_1)`
- **Size / BBs / Incoming:** 23732 bytes / 622 bb / 1 incoming refs
- **Match values:** TYPE;type
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

## 15. `FUN_7101bd7a40`  (hits=18)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bd7a40`  (offset `0x1bd7a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bd7a40(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9880 bytes / 588 bb / 2 incoming refs
- **Match values:** TYPE;type
- **Strings touched:** type_new;room_bg_name_hige;room_member_name_on;icon_type_new;balloon_off;balloon_on;room_status_info_ng;room_status_info_ok;type_lock;play_off;selected_on;set_parts_cursor_dec;select_on;type_any;type_melee;icon_type_any_lock;icon_type_melee_lock;type_spirits;icon_type_spirits_lock;icon_type_melee;set_txt_room_info_ng;mnu_local_status_01;mnu_local_status_%02d;mnu_local_rule_not_join;icon_type_any;icon_type_spirits;set_txt_room_info;mnu_local_rule_join_limit;set_txt_title_main;set_txt_title_sub;set_txt_title_sub_01;mnu_local_rule_bottom_03;...
- **Callers:** FUN_7101bd43a0;FUN_7101bdc040
- **Callees:** FUN_71000597e0;FUN_710062dc20;FUN_7101bda0e0;FUN_7101bda220;FUN_71024076d0;FUN_7103313f20;FUN_710337d450;FUN_7103771930;FUN_7103771a80;FUN_7103771d60;FUN_7103776290;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_71037790a0;...
- **Files:** [decomp](../decompiled/FUN_7101bd7a40__7101bd7a40.c)  [cfg](../decompiled/FUN_7101bd7a40__7101bd7a40.mmd)
- **Clone hash:** `34faf52be64378e6`

```c

void FUN_7101bd7a40(long param_1,ulong param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  ushort uVar5;
  bool bVar6;
  ulong uVar7;
  byte ***pppbVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  byte **ppbVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  byte ****ppppbVar16;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 uVar17;
  undefined8 extraout_x1_12;
  char *pcVar18;
  long ****pppplVar19;
  byte *pbVar20;
  long lVar21;
// ... (1651 more lines)
```

## 16. `FUN_71021baae0`  (hits=17)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021baae0`  (offset `0x21baae0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021baae0(void)`
- **Size / BBs / Incoming:** 8400 bytes / 19 bb / 1 incoming refs
- **Match values:** TYPE
- **Strings touched:** FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_START;FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_S_REMAIN;FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_S_HUD_FRAME;FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_S_HUD_EFFECT_HANDLE;FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_LW_HOP_COUNT;FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_EFFECT_KIND_FLYING;FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_EFFECT_KIND_ROLLING;FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_EFFECT_KIND_SCATTER;FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_N_SHOOT_AIR_NEXT_COUNT;FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_N_BAKYUN_BULLET_LEVEL;FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_N_BAKYUN_BULLET_SHOOT_COUNT;FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_N_BAKYUN_BULLET_RECOVERY_COUNT;FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_TERM;FIGHTER_BUDDY_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_BUDDY_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_BUDDY_INSTANCE_WORK_ID_FLAG_START;FIGHTER_BUDDY_INSTANCE_WORK_ID_FLAG_SPECIAL_N_LANDING;FIGHTER_BUDDY_INSTANCE_WORK_ID_FLAG_SPECIAL_N_SHOOT_AIR_NEXT_COUNT_CHECK;FIGHTER_BUDDY_INSTANCE_WORK_ID_FLAG_SPECIAL_N_SHOOT_AIR_NEXT_COUNT_CHECK_DONE;FIGHTER_BUDDY_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_NONE;FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_SPECIAL_S;FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_SPECIAL_HI;FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_SPECIAL_LW;FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_TERM;FIGHTER_BUDDY_CLIFF_HANG_DATA_START;FIGHTER_BUDDY_CLIFF_HANG_DATA_SPECIAL_HI;FIGHTER_BUDDY_CLIFF_HANG_DATA_TERM;FIGHTER_BUDDY_FINAL_MODULE_START_INIT;FIGHTER_BUDDY_FINAL_MODULE_START_EXIT;FIGHTER_BUDDY_FINAL_MODULE_READY_INIT;FIGHTER_BUDDY_FINAL_MODULE_READY_EXEC;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021baae0__71021baae0.c)  [cfg](../decompiled/FUN_71021baae0__71021baae0.mmd)
- **Clone hash:** `d3a028a291b9af14`

```c

void FUN_71021baae0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_S_REMAIN",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_S_HUD_FRAME",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_S_HUD_EFFECT_HANDLE",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_LW_HOP_COUNT",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_EFFECT_KIND_FLYING",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_EFFECT_KIND_ROLLING",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_EFFECT_KIND_SCATTER",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_N_SHOOT_AIR_NEXT_COUNT",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_N_BAKYUN_BULLET_LEVEL",
                 (undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_N_BAKYUN_BULLET_SHOOT_COUNT",
// ... (950 more lines)
```

## 17. `FUN_7101e1f7e0`  (hits=17)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e1f7e0`  (offset `0x1e1f7e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e1f7e0(long param_1, undefined8 param_2, undefined8 param_3, char * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9320 bytes / 447 bb / 1 incoming refs
- **Match values:** TYPE;type
- **Strings touched:** set_fxui_stand_trace;set_parts_list_%02d;set_txt_base;mnu_spirits_select_ped_nam;nam_spirits_pedestal_type_attack;set_parts_icon_base;spi_%s;set_txt_num_spirit_have;mnu_spirits_recall_spirit_n;color_bright_spirit;color_nomal_spirit;set_txt_num_base_have;mnu_spirits_recall_rev_pedestal_n;color_bright_base;color_nomal_base;color_nomal_txt_have;color_bright_txt_have;set_parts_base_%02d;icon_add_base;icon_base_class;view_unique;mode_empty_03;nam_spirits_pedestal_type_none;nam_spirits_pedestal_type_guard;nam_spirits_pedestal_type_throw;nam_spirits_pedestal_type_support;spirit_supporter;spirit_attacker_non;spirit_attacker_throw;spirit_attacker_defense;spirit_attacker_offense;icon_base_atr;...
- **Callers:** FUN_7101e1b7f0
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_7101764000;FUN_7101958040;FUN_7101989a30;FUN_7101dfe6f0;FUN_7101e1f1b0;FUN_7101e21d30;FUN_7101e32ad0;FUN_7101e32ae0;FUN_7102527570;FUN_7102528ac0;FUN_7102528c30;FUN_71032a9470;FUN_71032a9540;FUN_710337df20;...
- **Files:** [decomp](../decompiled/FUN_7101e1f7e0__7101e1f7e0.c)  [cfg](../decompiled/FUN_7101e1f7e0__7101e1f7e0.mmd)
- **Clone hash:** `35b0705beac405f3`

```c

void FUN_7101e1f7e0(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  ushort uVar5;
  undefined8 *puVar6;
  undefined2 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 uVar12;
  char *pcVar13;
  undefined8 extraout_x1;
  undefined8 uVar14;
  long ****pppplVar15;
  undefined **ppuVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  byte ***pppbVar20;
  byte **ppbVar21;
  code *pcVar22;
  byte *pbVar23;
  byte bVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  byte ****ppppbVar30;
  long lVar31;
  byte *pbVar32;
  byte *pbVar33;
  ushort *puVar34;
// ... (1517 more lines)
```

## 18. `FUN_7101de7540`  (hits=16)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101de7540`  (offset `0x1de7540`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101de7540(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2524 bytes / 145 bb / 3 incoming refs
- **Match values:** TYPE
- **Strings touched:** set_fxui_%02d;set_part_aw_%02d
- **Callers:** FUN_7101917a00;FUN_7101957110;FUN_710195d480
- **Callees:** FUN_71025af650;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377aa20;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101de7540__7101de7540.c)  [cfg](../decompiled/FUN_7101de7540__7101de7540.mmd)
- **Clone hash:** `1ce989a27d7ae010`

```c

void FUN_7101de7540(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
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
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined **local_40;
  undefined8 *local_38;
  
  lVar5 = param_1 + 0x58;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x60),0x710428ff7d);
  *(undefined4 *)(param_1 + 0x68) = 5;
  FUN_7103776910(&local_40,lVar5,(long ****)"set_fxui_%02d",0,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_710377aa20((long *)*local_38,0);
  puVar1 = local_38;
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
// ... (459 more lines)
```

## 19. `FUN_7101de6e40`  (hits=16)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101de6e40`  (offset `0x1de6e40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101de6e40(long param_1, undefined4 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1792 bytes / 113 bb / 3 incoming refs
- **Match values:** TYPE
- **Strings touched:** set_part_aw_%02d
- **Callers:** FUN_7101917570;FUN_7101956bc0;FUN_710195cf10
- **Callees:** FUN_71025ae390;FUN_7103313da0;FUN_7103775dc0;FUN_7103776640;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101de6e40__7101de6e40.c)  [cfg](../decompiled/FUN_7101de6e40__7101de6e40.mmd)
- **Clone hash:** `909a310b91c2192a`

```c

void FUN_7101de6e40(long param_1,undefined4 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
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
  undefined8 uVar3;
  long ****pppplVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **local_50;
  ulong local_48;
  
  lVar7 = *(long *)(param_1 + 0x80);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar7 + 0x50),0,(long ****)0x100a,param_4,param_5,param_6
                 ,param_7,param_8);
  lVar6 = lVar7 + 0x58;
  *(undefined4 *)(lVar7 + 0x68) = 1;
  uVar3 = 0;
  FUN_7103776640(&local_50,lVar6,(byte ****)"set_part_aw_%02d",0,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_71025ae390((long)&local_50,extraout_x1,uVar3,param_4,param_5,param_6,param_7,param_8);
// ... (323 more lines)
```

## 20. `FUN_71035e2f00`  (hits=16)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71035e2f00`  (offset `0x35e2f00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71035e2f00(undefined1 * param_1, char * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11468 bytes / 814 bb / 2 incoming refs
- **Match values:** type
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

## 21. `FUN_7101e4e150`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e4e150`  (offset `0x1e4e150`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e4e150(uint * param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, long param_6, ulong param_7, ulong param_8)`
- **Size / BBs / Incoming:** 10680 bytes / 494 bb / 1 incoming refs
- **Match values:** type
- **Strings touched:** set_txt_facility_00;set_txt_facility_01;set_rep_eff_aura_00;view_gym_%02d;cam_gym_title;set_rep_gym_owner;set_rep_gym_shadow;gauge_off;header_type_01;set_parts_spirit_%02d;type_gym;view_school_%02d;set_rep_school_owner;set_rep_school_shadow;header_type_00;type_school;view_search_%02d;cam_searchfield_title;set_rep_search_owner;set_rep_search_shadow;set_rep_spirit_shadow;type_search;finish_off;set_rep_spirit;view_shop_%02d;cam_fac_menu_shop_title;set_rep_shop_owner;set_rep_shop_shadow;set_parts_shop_%02d;type_00;soldout_off;type_01;...
- **Callers:** FUN_71024f9120
- **Callees:** FUN_7101e4e050;FUN_7101e50b10;FUN_7102510b80;FUN_71025128e0;FUN_7102512d40;FUN_7102512ec0;FUN_710259c150;FUN_710323d580;FUN_710323faf0;FUN_710327d930;FUN_71032817a0;FUN_71032a9470;FUN_710338b9b0;FUN_7103776640;FUN_7103776910;FUN_7103778300;...
- **Files:** [decomp](../decompiled/FUN_7101e4e150__7101e4e150.c)  [cfg](../decompiled/FUN_7101e4e150__7101e4e150.mmd)
- **Clone hash:** `9f7c76940592c5d1`

```c

void FUN_7101e4e150(uint *param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   long param_6,ulong param_7,ulong param_8)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar14;
  undefined8 extraout_x1_03;
  char *pcVar15;
  undefined8 extraout_x1_04;
  undefined *puVar16;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  ulong uVar17;
  long ****pppplVar18;
  long *********ppppppppplVar19;
  long lVar20;
  ushort *puVar21;
  undefined2 *puVar22;
  byte *pbVar23;
  ulong uVar24;
// ... (1630 more lines)
```

## 22. `FUN_7101b2a1f0`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b2a1f0`  (offset `0x1b2a1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b2a1f0(void)`
- **Size / BBs / Incoming:** 30364 bytes / 1105 bb / 1 incoming refs
- **Match values:** TYPE;type
- **Strings touched:** preview_1_00;preview_2_00;preview_3_00;arrows;header_tips;btn_back;set_parts_txt_head_00;set_txt_mode;set_txt_scene;mnu_header_arrow;header_stage;set_hand_%02d;set_preview_st_0%d;set_txt_num_medal;mel_stage_select_art_n;un_decide;off_atteintion;anim_stage_select;set_parts_btn_stage;view_stage;icon_normal;color_able_shortcut;unable_shortcut;blink_on;set_parts_btn_music;view_music;icon_music;player_color_%dp;view_rep_stage;set_rep_stage;set_parts_n_stage_%03d;view_random;...
- **Callers:** FUN_7101b3b1d0
- **Callees:** FUN_71000001c0;FUN_7100058250;FUN_7100058290;FUN_71003a4ca0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7101748070;FUN_7101764000;FUN_7101b260a0;FUN_7101b2a000;FUN_7101b31890;FUN_7101b31a10;FUN_7101b323a0;FUN_7101b32b00;FUN_7101b37740;FUN_7101b38160;FUN_7101b38ac0;...
- **Files:** [cfg](../decompiled/FUN_7101b2a1f0__7101b2a1f0.mmd)


## 23. `FUN_7102160190`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102160190`  (offset `0x2160190`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102160190(void)`
- **Size / BBs / Incoming:** 8224 bytes / 25 bb / 1 incoming refs
- **Match values:** TYPE
- **Strings touched:** FIGHTER_WARIO_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_SPECIAL_N_INTERVAL;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_COUNT;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_LEVEL;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_BIKE_TIME;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_BIKE_ORIGINAL_OWNER;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_TERM;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_FINAL_TIME;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_BIKE_HP;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_GAS_CHARGE_SPEED;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_STOMACH_MOTION_FRAME;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_CHANGE;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_FLASHING;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_CHARGE_MAX;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_CHARGE_STOP;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_REMOVE_BIKE;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_SPECIAL_N_AGAIN;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_FORBID_GENERATE_BIKE;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_WARIO_GASS_LEVEL_S;FIGHTER_WARIO_GASS_LEVEL_M;FIGHTER_WARIO_GASS_LEVEL_L;FIGHTER_WARIO_GASS_LEVEL_FLY;FIGHTER_WARIO_CHANGE_SUCCEED_WORK_ID_INT_GASS_COUNT;FIGHTER_WARIO_CHANGE_SUCCEED_WORK_ID_INT_GASS_LEVEL;FIGHTER_WARIO_WIN_WPN_DATA_BIKE;FIGHTER_WARIO_WIN_WPN_DATA_TERM;FIGHTER_WARIO_EAT_WEAPON_KIND_NORMAL;FIGHTER_WARIO_EAT_WEAPON_KIND_BOMB;FIGHTER_WARIO_EAT_WEAPON_KIND_NUM;FIGHTER_WARIO_FINAL_MODULE_START_INIT;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102160190__7102160190.c)  [cfg](../decompiled/FUN_7102160190__7102160190.mmd)
- **Clone hash:** `dd0509e172b95a16`

```c

void FUN_7102160190(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_SPECIAL_N_INTERVAL",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_COUNT",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_LEVEL",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_BIKE_TIME",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_BIKE_ORIGINAL_OWNER",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_FINAL_TIME",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_BIKE_HP",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_GAS_CHARGE_SPEED",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_STOMACH_MOTION_FRAME",
// ... (867 more lines)
```

## 24. `FUN_7101b9b850`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b9b850`  (offset `0x1b9b850`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b9b850(long * param_1, long param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 27552 bytes / 1366 bb / 1 incoming refs
- **Match values:** TYPE;type
- **Strings touched:** menu_in;loading_on;loading_off;in_detail;out_detail;detail_page_0;detail_page_1;detail_page_2;mode_empty_03;detail_page_3;detail_page_4;detail_extra1_type1;detail_extra1_type2;detail_extra2_type1;detail_extra2_type2;detail_extra3_type1;detail_extra3_type2;detail_extra4_type1;detail_extra4_type2;detail_navi_up_show;detail_navi_up_hide;detail_navi_down_show;detail_navi_down_hide;detail_0;detail_0_to_1;detail_1_to_2;detail_2_to_3;detail_3_to_4;detail_2_to_1;detail_3_to_2;detail_4_to_3;detail_1_to_0;...
- **Callers:** FUN_7101ba3b90
- **Callees:** FUN_71003a4ca0;FUN_7101414b10;FUN_7101989a30;FUN_7101b50990;FUN_7101ba23f0;FUN_71032cbf30;FUN_710337d5b0;FUN_710337d5c0;FUN_710337dab0;FUN_710337dac0;FUN_710376b960;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103773200;FUN_7103776290;...
- **Files:** [decomp](../decompiled/FUN_7101b9b850__7101b9b850.c)  [cfg](../decompiled/FUN_7101b9b850__7101b9b850.mmd)
- **Clone hash:** `4ab023b198ae0c56`

```c

void FUN_7101b9b850(long *param_1,long param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  byte ****ppppbVar2;
  byte ****ppppbVar3;
  byte ****ppppbVar4;
  byte ****ppppbVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long ***ppplVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long **pplVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
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
// ... (5072 more lines)
```

## 25. `FUN_71021f23b0`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021f23b0`  (offset `0x21f23b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021f23b0(void)`
- **Size / BBs / Incoming:** 8752 bytes / 22 bb / 1 incoming refs
- **Match values:** TYPE
- **Strings touched:** FIGHTER_KROOL_INSTANCE_WORK_ID_INT_START;FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE;FIGHTER_KROOL_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_BLUNDERBUSS;FIGHTER_KROOL_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_SPITBALL;FIGHTER_KROOL_INSTANCE_WORK_ID_INT_WAIST_HIT_FLASH_COUNT;FIGHTER_KROOL_INSTANCE_WORK_ID_INT_WAIST_LIFE_COUNT;FIGHTER_KROOL_INSTANCE_WORK_ID_INT_WAIST_CRACK_COUNT;FIGHTER_KROOL_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_CROWN;FIGHTER_KROOL_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_ITEM_CROWN;FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_S_GET_MOTION_SKIP_FRAME;FIGHTER_KROOL_INSTANCE_WORK_ID_INT_TERM;FIGHTER_KROOL_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_KROOL_INSTANCE_WORK_ID_FLOAT_WAIST_LIFE;FIGHTER_KROOL_INSTANCE_WORK_ID_FLOAT_WAIST_GUARD_MARK_SCALE;FIGHTER_KROOL_INSTANCE_WORK_ID_FLOAT_FINAL_START_POS_X;FIGHTER_KROOL_INSTANCE_WORK_ID_FLOAT_FINAL_START_POS_Y;FIGHTER_KROOL_INSTANCE_WORK_ID_FLOAT_FINAL_SPECIAL_S_START_SCALE;FIGHTER_KROOL_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_START;FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_SPECIAL_N_SUCTION_IRONBALL;FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_SPECIAL_N_CATCH_CUT;FIGHTER_WIIFIT_ARTICLE_TERM;FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_WAIST_HIT_FLASH;FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_WAIST_HIT;FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_WAIST_HIT_FRONT;FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_REQUEST_WAIST_SHIELD_ON;FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_REQUEST_WAIST_SHIELD_OFF;FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_REQUEST_WAIST_SHIELD_KEEP;FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_REQUEST_WAIST_CRACK_KEEP;WEAPON_GANON_BEAST_INSTANCE_WORK_ID_FLAG_HITSTOP;FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_REQUEST_WAIST_HIT_STOP;FIGHTER_KROOL_INSTANCE_WORK_ID_FLAG_DROP_CROWN;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021f23b0__71021f23b0.c)  [cfg](../decompiled/FUN_71021f23b0__71021f23b0.mmd)
- **Clone hash:** `9d316a301feef448`

```c

void FUN_71021f23b0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KROOL_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KROOL_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_BLUNDERBUSS"
                 ,(undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KROOL_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_SPITBALL",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KROOL_INSTANCE_WORK_ID_INT_WAIST_HIT_FLASH_COUNT",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KROOL_INSTANCE_WORK_ID_INT_WAIST_LIFE_COUNT",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KROOL_INSTANCE_WORK_ID_INT_WAIST_CRACK_COUNT",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KROOL_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_CROWN",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KROOL_INSTANCE_WORK_ID_INT_BATTLE_OBJECT_ID_ITEM_CROWN",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_S_GET_MOTION_SKIP_FRAME",
                 (undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KROOL_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c7,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
// ... (923 more lines)
```

## 26. `FUN_7101b69480`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b69480`  (offset `0x1b69480`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b69480(void)`
- **Size / BBs / Incoming:** 40408 bytes / 2245 bb / 4 incoming refs
- **Match values:** type;TYPE
- **Strings touched:** p%d_2;face_bg;set_dmg_p;dig_0_restore_1;dig_0_restore_2;dig_0_restore_3;dig_1_restore_1;dig_1_restore_2;dig_1_restore_3;dig_2_restore_1;dig_2_restore_2;dig_2_restore_3;dig_3_restore_1;dig_3_restore_2;dig_3_restore_3;dig_dec_01_restore_1;dig_dec_01_restore_2;dig_dec_01_restore_3;num_1;num_2;num_3;num_dec_01;stock;spirits_type;face_bg_anim;charge_bar;charge;charge_max_off;charge_max_00;charge_down;charge_lose;limit;...
- **Callers:** FUN_710139b550;FUN_7101b7a8f0;FUN_7101b7c510;FUN_7101b7c5e0
- **Callees:** FUN_71000001c0;FUN_7100058250;FUN_7100058290;FUN_71003a4ca0;FUN_7101764000;FUN_71019c1c50;FUN_7101b73260;FUN_7101b781b0;FUN_7101b80180;FUN_7101b86760;FUN_7101b8b370;FUN_7103240d30;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;...
- **Files:** [decomp](../decompiled/FUN_7101b69480__7101b69480.c)  [cfg](../decompiled/FUN_7101b69480__7101b69480.mmd)
- **Clone hash:** `61e8c613c05a7329`

```c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101b69480(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  long ***ppplVar8;
  char *pcVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *********ppppppppplVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  long ***ppplVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  ulong uVar26;
  byte *pbVar27;
  char cVar28;
  uint uVar29;
  long ****pppplVar30;
  long *plVar31;
  long lVar32;
  int iVar33;
// ... (7644 more lines)
```

## 27. `FUN_7102177b50`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102177b50`  (offset `0x2177b50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102177b50(void)`
- **Size / BBs / Incoming:** 10936 bytes / 28 bb / 1 incoming refs
- **Match values:** TYPE
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

## 28. `FUN_71021368b0`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021368b0`  (offset `0x21368b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021368b0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5556 bytes / 7 bb / 2 incoming refs
- **Match values:** TYPE
- **Strings touched:** WEAPON_LOD_KIND_DEFAULT;WEAPON_LOD_KIND_TERM;WEAPON_LINK_NO_CONSTRAINT;WEAPON_LINK_NO_PRE_START;WEAPON_LINK_NO_TERM;WEAPON_LINK_NO_FINAL;WEAPON_OTHER_ANIM_NO_RESERVED;WEAPON_OTHER_ANIM_NO_TERM;WEAPON_STATUS_WORK_KEEP_FLAG_NONE_FLAG;WEAPON_STATUS_WORK_KEEP_FLAG_NONE_INT;WEAPON_STATUS_WORK_KEEP_FLAG_NONE_FLOAT;WEAPON_STATUS_WORK_KEEP_FLAG_ALL_FLAG;WEAPON_STATUS_WORK_KEEP_FLAG_ALL_INT;WEAPON_STATUS_WORK_KEEP_FLAG_ALL_FLOAT;WEAPON_SHIELD_KIND_TERM;WEAPON_SHIELD_KIND_NUM;WEAPON_SHIELD_GROUP_KIND_TERM;WEAPON_SHIELD_GROUP_KIND_NUM;WEAPON_ANIMCMD_GAME;WEAPON_ANIMCMD_SOUND;WEAPON_ANIMCMD_EFFECT;WEAPON_ANIMCMD_KIND_NUM;WEAPON_MOTION_PART_SET_KIND_DEFAULT;WEAPON_MOTION_PART_SET_KIND_TERM;WEAPON_INSTANCE_WORK_ID_INT_PRE_START;WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER;WEAPON_INSTANCE_WORK_ID_INT_ACTIVATE_FOUNDER_ID;WEAPON_INSTANCE_WORK_ID_INT_ATTACK_SERIAL_ID;WEAPON_INSTANCE_WORK_ID_INT_ATTACK_KIND;WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE;WEAPON_INSTANCE_WORK_ID_INT_LIFE;FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_WALK;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021368b0__71021368b0.c)  [cfg](../decompiled/FUN_71021368b0__71021368b0.mmd)
- **Clone hash:** `e36a5599202e1c73`

```c

void FUN_71021368b0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long local_78;
  long local_70;
  int local_68;
  
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"WEAPON_LOD_KIND_DEFAULT",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"WEAPON_LOD_KIND_TERM",(undefined **)0x1,param_4,param_5,param_6,
                 param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"WEAPON_LINK_NO_CONSTRAINT",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"WEAPON_LINK_NO_PRE_START",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"WEAPON_LINK_NO_TERM",(undefined **)&DAT_00000004,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"WEAPON_LINK_NO_FINAL",(undefined **)0x2,param_4,param_5,param_6,
                 param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"WEAPON_OTHER_ANIM_NO_RESERVED",(undefined **)0x0,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"WEAPON_OTHER_ANIM_NO_TERM",(undefined **)0x1,param_4,param_5,
                 param_6,param_7,param_8);
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"WEAPON_STATUS_WORK_KEEP_FLAG_NONE_FLAG",(undefined **)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"WEAPON_STATUS_WORK_KEEP_FLAG_NONE_INT",(undefined **)0x0,param_4
// ... (577 more lines)
```

## 29. `FUN_71018157f0`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018157f0`  (offset `0x18157f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018157f0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2232 bytes / 77 bb / 1 incoming refs
- **Match values:** type
- **Strings touched:** selector_0;btn_type_0%d;type_0%d;type_00
- **Callees:** FUN_7101816190;FUN_71019ded40;FUN_710323b9e0;FUN_710323beb0;FUN_710323cb80;FUN_71032631a0;FUN_71032cad20;FUN_71032caea0;FUN_71032cbf30;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_7103773200;FUN_7103776640;FUN_7103778300;FUN_7103778430;...
- **Files:** [decomp](../decompiled/FUN_71018157f0__71018157f0.c)  [cfg](../decompiled/FUN_71018157f0__71018157f0.mmd)
- **Clone hash:** `8d2e6f384ed48109`

```c

void FUN_71018157f0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
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
  long *********ppppppppplVar13;
  long ****pppplVar14;
  byte ****ppppbVar15;
  undefined8 uVar16;
  long ****pppplVar17;
  code *pcVar18;
  long *plVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined **local_1b0;
  ulong local_1a8;
// ... (450 more lines)
```

## 30. `FUN_71021d99a0`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021d99a0`  (offset `0x21d99a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021d99a0(void)`
- **Size / BBs / Incoming:** 7688 bytes / 13 bb / 1 incoming refs
- **Match values:** TYPE
- **Strings touched:** FIGHTER_DEMON_INSTANCE_WORK_ID_INT_START;FIGHTER_DEMON_INSTANCE_WORK_ID_INT_RAGE_SYSTEM_FRAME;FIGHTER_DEMON_INSTANCE_WORK_ID_INT_RAGE_SYSTEM_COUNT;FIGHTER_DEMON_INSTANCE_WORK_ID_INT_ATTACK_STAND_TURN_FRAME_COMMAND_1;FIGHTER_DEMON_INSTANCE_WORK_ID_INT_ATTACK_STAND_TURN_FRAME_COMMAND_4;FIGHTER_DEMON_INSTANCE_WORK_ID_INT_ATTACK_STAND_TURN_FRAME_COMMAND_7;FIGHTER_DEMON_INSTANCE_WORK_ID_INT_TERM;FIGHTER_DEMON_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_DEMON_INSTANCE_WORK_ID_FLOAT_WING_START_FRAME;FIGHTER_DEMON_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_START;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ENABLE_RAGE_SYSTEM;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ENABLE_RAGE_SYSTEM_DONE;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_PLAY_RAGE_SYSTEM_OK;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_BEFORE_END_RAGE_SYSTEM;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_LOW_MODE;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ATTACK_RAGE_CAPTURE;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_ATTACK_RAGE;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_DISABLE_AIR_SPECIAL_S;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_DISABLE_AIR_SPECIAL_HI;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_DISABLE_SPECIAL_N;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ENABLE_THROW_MOTION_CAMERA;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_DISABLE_THROW_MOTION_CAMERA;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_KINETIC_AERIAL;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_CLOSE_WING;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_DEVIL;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_DEVIL_PREV;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_TRANSFORM;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_REFLECTOR_ATTACK_STAND1;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ATTACK_S3_STAND_5;FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_DEMON_FINAL_MODULE_START_INIT;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021d99a0__71021d99a0.c)  [cfg](../decompiled/FUN_71021d99a0__71021d99a0.mmd)
- **Clone hash:** `cd0fc27132d18df3`

```c

void FUN_71021d99a0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEMON_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000c8,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEMON_INSTANCE_WORK_ID_INT_RAGE_SYSTEM_FRAME",
                 (undefined **)0x100000c9,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEMON_INSTANCE_WORK_ID_INT_RAGE_SYSTEM_COUNT",
                 (undefined **)0x100000ca,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_DEMON_INSTANCE_WORK_ID_INT_ATTACK_STAND_TURN_FRAME_COMMAND_1",
                 (undefined **)0x100000cb,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_DEMON_INSTANCE_WORK_ID_INT_ATTACK_STAND_TURN_FRAME_COMMAND_4",
                 (undefined **)0x100000cc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_DEMON_INSTANCE_WORK_ID_INT_ATTACK_STAND_TURN_FRAME_COMMAND_7",
                 (undefined **)0x100000cd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEMON_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000ce,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEMON_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DEMON_INSTANCE_WORK_ID_FLOAT_WING_START_FRAME",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (818 more lines)
```

## 31. `FUN_71018d5f60`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018d5f60`  (offset `0x18d5f60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018d5f60(long param_1)`
- **Size / BBs / Incoming:** 9468 bytes / 431 bb / 1 incoming refs
- **Match values:** TYPE;type
- **Strings touched:** SCENE_EXIT_CODE_ORE_SOUND;SCENE_EXIT_CODE_TEST;BUTTON_ID_MODE;BUTTON_ID_PLAY_ALL;BUTTON_ID_SOUND_TYPE;BUTTON_ID_BGM;BUTTON_ID_SE;BUTTON_ID_VOICE;BUTTON_ID_EXIT_MENU;BUTTON_ID_OK;MODE_TELEVISION;MODE_PORTABLE;MODE_HEADPHONE;MODE_NUM;SOUND_TYPE_LOW;SOUND_TYPE_NORMAL;SOUND_TYPE_HIGH;SOUND_TYPE_NUM;SOUND_TYPE_DEFAULT;VOLUME_MIN;VOLUME_MAX;VOLUME_DEFAULT;EXIT_MENU_ORE_SOUND;EXIT_MENU_TEST;EXIT_MENU_SAVE;set_edited_setting_data;update_edited_sound_type;update_edited_bgm_volume;mode_empty_03;update_edited_se_volume;update_edited_voice_volume;is_not_change;...
- **Callers:** FUN_71018d8700
- **Callees:** FUN_7101d533a0;FUN_710323beb0;FUN_710323cb80;FUN_71032cad20;FUN_71032caea0;FUN_71032cb040;FUN_7103375650;FUN_7103376af0;FUN_7103377130;FUN_7103778630;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;...
- **Files:** [decomp](../decompiled/FUN_71018d5f60__71018d5f60.c)  [cfg](../decompiled/FUN_71018d5f60__71018d5f60.mmd)
- **Clone hash:** `68f47fc0c6870ce0`

```c

void FUN_71018d5f60(long param_1)

{
  int *piVar1;
  long *******ppppppplVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  long ***ppplVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar13;
  undefined8 extraout_x1_01;
  long *********ppppppppplVar14;
  undefined **ppuVar15;
  char *pcVar16;
  byte ****ppppbVar17;
  long ****pppplVar18;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar19;
  ulong uVar20;
  long ********pppppppplVar21;
  long *****ppppplVar22;
  long **pplVar23;
  long ****pppplVar24;
  long ******pppppplVar25;
  long ******pppppplVar26;
  long ****pppplVar27;
  long *plVar28;
  long *******ppppppplVar29;
  undefined8 local_d8;
// ... (1936 more lines)
```

## 32. `FUN_7103371290`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103371290`  (offset `0x3371290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103371290(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12368 bytes / 333 bb / 3 incoming refs
- **Match values:** TYPE
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

## 33. `FUN_7102158ee0`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102158ee0`  (offset `0x2158ee0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102158ee0(void)`
- **Size / BBs / Incoming:** 10240 bytes / 22 bb / 1 incoming refs
- **Match values:** TYPE
- **Strings touched:** FIGHTER_POPO_INSTANCE_WORK_ID_INT_PRE_START;FIGHTER_POPO_INSTANCE_WORK_ID_INT_OLD_REC;FIGHTER_POPO_INSTANCE_WORK_ID_INT_PARTNER_OBJECT_ID;FIGHTER_POPO_INSTANCE_WORK_ID_INT_UNABLE_TRANSITION_COUNTER;FIGHTER_POPO_INSTANCE_WORK_ID_INT_FORBID_HANG_CONDOR_FRAME;FIGHTER_POPO_INSTANCE_WORK_ID_INT_RESERVE_HIT_STOP_FRAME;FIGHTER_POPO_INSTANCE_WORK_ID_INT_MODIFY_JOSTLE_COMP_RATE_CONTINUAL_FRAME;FIGHTER_POPO_INSTANCE_WORK_ID_INT_CONDOR_OBJECT_ID;FIGHTER_POPO_INSTANCE_WORK_ID_INT_DAMAGE_FACE_COUNTER;FIGHTER_POPO_INSTANCE_WORK_ID_INT_READY_GO_FORBID_COUNTER;FIGHTER_POPO_INSTANCE_WORK_ID_INT_TERM;FIGHTER_POPO_INSTANCE_WORK_ID_FLOAT_PRE_START;FIGHTER_POPO_INSTANCE_WORK_ID_FLOAT_PARTNER_SITUATION_AIR_POS_X_OFFSET;FIGHTER_POPO_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_PRE_START;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_SPECIAL_N_RAISE;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_UNABLE;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_S_FALL;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_FINAL_UNABLE;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_ENABLE_TRANSITION_FORBID;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_RESERVE_UNABLE_TRANSITION_FORBID;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_SUBFIGHTER_CAMERA;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_HANG_CONDOR;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_SEARCH_CONDOR;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_MODIFY_JOSTLE_MAIN;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_NOT_MODIFY_JOSTLE_MAIN;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_CLIFF_CATCH;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_PARTNER_MODIFY_POS_X_OFFSET;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_RESERVE_HIT_STOP;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_MAIN_FIGHTER_NANA;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_PAUSE;FIGHTER_POPO_INSTANCE_WORK_ID_FLAG_CANCEL_CONBINATION_UNABLE_COUPLE_TECH;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102158ee0__7102158ee0.c)  [cfg](../decompiled/FUN_7102158ee0__7102158ee0.mmd)
- **Clone hash:** `98ddc5cc215bc39d`

```c

void FUN_7102158ee0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_POPO_INSTANCE_WORK_ID_INT_PRE_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_POPO_INSTANCE_WORK_ID_INT_OLD_REC",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_POPO_INSTANCE_WORK_ID_INT_PARTNER_OBJECT_ID",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_POPO_INSTANCE_WORK_ID_INT_UNABLE_TRANSITION_COUNTER",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_POPO_INSTANCE_WORK_ID_INT_FORBID_HANG_CONDOR_FRAME",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_POPO_INSTANCE_WORK_ID_INT_RESERVE_HIT_STOP_FRAME",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_POPO_INSTANCE_WORK_ID_INT_MODIFY_JOSTLE_COMP_RATE_CONTINUAL_FRAME"
                 ,(undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_POPO_INSTANCE_WORK_ID_INT_CONDOR_OBJECT_ID",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_POPO_INSTANCE_WORK_ID_INT_DAMAGE_FACE_COUNTER",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_POPO_INSTANCE_WORK_ID_INT_READY_GO_FORBID_COUNTER",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_POPO_INSTANCE_WORK_ID_INT_TERM",(undefined **)0x100000c6
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
// ... (1141 more lines)
```

## 34. `FUN_7102164700`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102164700`  (offset `0x2164700`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102164700(void)`
- **Size / BBs / Incoming:** 10172 bytes / 7 bb / 1 incoming refs
- **Match values:** TYPE
- **Strings touched:** FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_START;FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_GRENADE_GLOW_ATTACK;FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_RENDER_PRIORITY;FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_PRE_DAMAGE_STATUS_KIND;FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_TERM;FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X;FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y;FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_SNAKE_INSTANCE_WORK_ID_FLAG_START;FIGHTER_SNAKE_INSTANCE_WORK_FLAG_CYPHER_FALL;FIGHTER_SNAKE_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_SNAKE_FINAL_LOCK_ON_MAX;FIGHTER_SNAKE_STATUS_WORK_INT_START;FIGHTER_SNAKE_STATUS_WORK_INT_MOT_KIND;FIGHTER_SNAKE_STATUS_WORK_INT_MOT_AIR_KIND;FIGHTER_SNAKE_STATUS_WORK_INT_END;FIGHTER_SNAKE_STATUS_WORK_FLOAT_START;FIGHTER_SNAKE_STATUS_WORK_FLOAT_END;FIGHTER_SNAKE_STATUS_WORK_FLAG_START;FIGHTER_SNAKE_STATUS_WORK_FLAG_END;FIGHTER_SNAKE_STATUS_TRANS_ID_START;FIGHTER_SNAKE_STATUS_TRANS_ID_END;FIGHTER_SNAKE_STATUS_APPEAL_FLAG_START;FIGHTER_SNAKE_STATUS_APPEAL_FLAG_EXIT;FIGHTER_SNAKE_STATUS_APPEAL_WORK_INT_START;FIGHTER_SNAKE_STATUS_APPEAL_WORK_INT_WAIT_COUNTER;FIGHTER_SNAKE_STATUS_SMASH_APPEAL_WORK_INT_START;FIGHTER_SNAKE_STATUS_SMASH_APPEAL_WORK_INT_ADVANCE_COUNT;FIGHTER_SNAKE_STATUS_ENTRY_FLAG_START;FIGHTER_SNAKE_STATUS_ENTRY_FLAG_SPYCLOAK;FIGHTER_SNAKE_STATUS_ENTRY_FLAG_ENABLED_SPYCLOAK;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102164700__7102164700.c)  [cfg](../decompiled/FUN_7102164700__7102164700.mmd)
- **Clone hash:** `58e0509edc77702f`

```c

void FUN_7102164700(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_GRENADE_GLOW_ATTACK",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_RENDER_PRIORITY",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_PRE_DAMAGE_STATUS_KIND",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_TERM",(undefined **)0x4f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
// ... (1217 more lines)
```

## 35. `FUN_71025b32d0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71025b32d0`  (offset `0x25b32d0`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_71025b32d0(undefined1 param_1, ulong param_2)`
- **Size / BBs / Incoming:** 1636 bytes / 115 bb / 3 incoming refs
- **Match values:** type
- **Strings touched:** nam_spirits_rule_pokemon_fix;nam_spirits_rule_attack_down;nam_spirits_rule_jump_up;nam_spirits_rule_jump_down;nam_spirits_rule_mov_up;nam_spirits_rule_smash_attack_up;nam_spirits_rule_sleep;nam_spirits_rule_advantage_double;nam_spirits_rule_electric_up;nam_spirits_rule_jump_seal;nam_spirits_rule_normal_seal;nam_spirits_rule_bomb;nam_spirits_rule_charge_max;nam_spirits_rule_metal;nam_spirits_rule_type_attack_up;nam_spirits_rule_shield_down;nam_spirits_rule_magic_up;nam_spirits_rule_weapon_offense_up;nam_spirits_rule_advantage_reverse;nam_spirits_rule_horizontal_controller_flip;nam_spirits_rule_no_hold;nam_spirits_rule_sp_move_seal;nam_spirits_rule_damage;nam_spirits_rule_suddendeath;nam_spirits_rule_invincible;nam_spirits_rule_heal;nam_spirits_rule_dark;nam_spirits_rule_wind_suddenly;nam_spirits_rule_earthquake;nam_spirits_rule_flower;nam_spirits_rule_energy_charge;nam_spirits_rule_drown_up;...
- **Callers:** FUN_7101da9e30;FUN_710249f370;FUN_71025b1bc0
- **Callees:** <EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_71025b32d0__71025b32d0.c)  [cfg](../decompiled/FUN_71025b32d0__71025b32d0.mmd)
- **Clone hash:** `eefcf17479043109`

```c

char * FUN_71025b32d0(undefined1 param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  
  pcVar4 = "nam_spirits_rule_pokemon_fix";
  switch(param_1) {
  case 1:
    lVar5 = *(long *)(*DAT_7105329fa0 + 0x2f8);
    uVar7 = *(long *)(*DAT_7105329fa0 + 0x300) - lVar5 >> 4;
    uVar6 = (uint)uVar7;
    if (uVar6 != 0) {
      uVar3 = 0;
      do {
        uVar9 = (ulong)uVar3;
        if (uVar7 <= uVar9) goto LAB_71025b3930;
        if (((*(ulong *)(lVar5 + uVar9 * 0x10) ^ param_2) & 0xffffffffff) == 0) {
          lVar1 = lVar5 + uVar9 * 0x10;
          if (*(int *)(lVar1 + 0xc) < 1) {
            if (*(int *)(lVar1 + 0xc) < 0) {
              pcVar4 = "nam_spirits_rule_attack_down";
              pcVar8 = "nam_spirits_rule_defense_down";
              pcVar10 = "nam_spirits_rule_mov_down";
              switch(*(undefined1 *)(lVar1 + 10)) {
              case 0:
                goto switchD_71025b33ec_caseD_0;
              case 1:
                return "nam_spirits_rule_jump_down";
              case 2:
                goto switchD_71025b33ec_caseD_2;
// ... (287 more lines)
```

## 36. `FUN_7101bd7000`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bd7000`  (offset `0x1bd7000`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bd7000(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2612 bytes / 173 bb / 2 incoming refs
- **Match values:** TYPE;type
- **Strings touched:** set_txt_name;btn_new;icon_type_new;set_parts_profileicon_00;set_icn_profile;set_icn_profile_bg;type_00;set_icn_room_new;lock_off;friend_off;friend_on;btn_melee;btn_any;btn_spirits;icon_type_melee;icon_type_any;icon_type_any_lock;icon_type_spirits;lock_on_lock;btn_disable
- **Callers:** FUN_7101bd43a0;FUN_7101bdd4b0
- **Callees:** FUN_7101bda220;FUN_710323f760;FUN_710337d450;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778b80;FUN_710377aee0;FUN_71037a2270;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101bd7000__7101bd7000.c)  [cfg](../decompiled/FUN_7101bd7000__7101bd7000.mmd)
- **Clone hash:** `58bc90e8436936e2`

```c

void FUN_7101bd7000(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long ****pppplVar8;
  long *********ppppppppplVar9;
  long ******pppppplVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  undefined **local_b8;
  undefined8 *local_b0;
  undefined **local_a8;
  undefined8 *local_a0;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  long *local_80;
  undefined **local_78;
  long *local_70;
  long ********local_68;
  long *local_60;
  undefined4 local_54;
  
  if (param_3[1][1] == (long *******)0x0) {
// ... (472 more lines)
```

## 37. `FUN_7101c70620`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c70620`  (offset `0x1c70620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c70620(long param_1, byte * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 356 bytes / 21 bb / 2 incoming refs
- **Match values:** type
- **Strings touched:** type_rule_contents;type_txt_italic;type_rule_warning;type_rule_stock;type_rule_stamina;type_txt_nomal;set_txt_nomal;type_rule_time;set_txt_italic
- **Callers:** FUN_7101c5dcd0;FUN_7101c73720
- **Callees:** FUN_7101c70500;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c70620__7101c70620.c)  [cfg](../decompiled/FUN_7101c70620__7101c70620.mmd)
- **Clone hash:** `4ae6d4a08d1c218b`

```c

void FUN_7101c70620(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined **local_30;
  ulong local_28;
  
  switch((uint)*param_2) {
  case 0x6a:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_warning";
    break;
  case 0x6b:
  case 0x6f:
  case 0x70:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_contents";
    break;
  case 0x6c:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_time";
    break;
  case 0x6d:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_stock";
    break;
  case 0x6e:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_stamina";
    break;
  default:
    if (2 < *param_2 - 1) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x7104280a9e);
      pcVar5 = "set_txt_nomal";
// ... (33 more lines)
```

## 38. `FUN_71021eed40`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021eed40`  (offset `0x21eed40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021eed40(void)`
- **Size / BBs / Incoming:** 5784 bytes / 10 bb / 1 incoming refs
- **Match values:** TYPE
- **Strings touched:** FIGHTER_KOOPAJR_INSTANCE_WORK_ID_INT_START;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_INT_CLOWN_HIT_NO;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_FRAME;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_INT_TERM;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLOAT_SHAFT_ROT;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLOAT_SHAFT_ROT_SPEED;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLOAT_SHAFT_ROT_BRAKE;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLOAT_TERM;WEAPON_GANON_BEAST_INSTANCE_WORK_ID_FLAG_HITSTOP;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_START;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_S_KART;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DISABLE;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_S_JUMP;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_INTERRUPT;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_DAMAGE_FLY;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_CLIFF_CATCH;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_INHERIT_SPEED;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_DAMAGE_FLY_NO_COMP;FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_KOOPAJR_LINK_NO_START;FIGHTER_KOOPAJR_LINK_NO_KART;FIGHTER_KOOPAJR_LINK_NO_TERM;FIGHTER_KOOPAJR_KINETIC_ENERGY_ID_START;FIGHTER_KOOPAJR_KINETIC_ENERGY_ID_TERM;FIGHTER_KINETIC_TYPE_KOOPAJR_START;FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_N;FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_AIR_N;FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_S;FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_AIR_S;FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_S_DASH;FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_AIR_S_DASH;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021eed40__71021eed40.c)  [cfg](../decompiled/FUN_71021eed40__71021eed40.mmd)
- **Clone hash:** `eb5cc7f54e9a058e`

```c

void FUN_71021eed40(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KOOPAJR_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KOOPAJR_INSTANCE_WORK_ID_INT_CLOWN_HIT_NO",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KOOPAJR_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_FRAME",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KOOPAJR_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLOAT_START",(undefined **)0x4b
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLOAT_SHAFT_ROT",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLOAT_SHAFT_ROT_SPEED",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLOAT_SHAFT_ROT_BRAKE",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLOAT_TERM",(undefined **)0x4f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
// ... (654 more lines)
```

## 39. `FUN_7101bbacc0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bbacc0`  (offset `0x1bbacc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bbacc0(long param_1, uint * param_2, uint * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4196 bytes / 209 bb / 1 incoming refs
- **Match values:** TYPE
- **Strings touched:** mel_training_off;mel_training_on;mel_training_hit0;mel_training_invincible1;mel_training_shift2;mel_training_hit1;mel_training_invincible0;mel_training_help_cp_dmg_fixing;mel_training_help_cp_dmg_fixing_off;mel_training_help_trajectory;mel_training_help_trajectory_off;mel_training_help_hit;mel_training_help_hit_off;mel_training_help_invincible;mel_training_help_invincible_off;mel_training_help_same_offset;mel_training_help_same_offset_off;mel_training_shift1;mel_training_shift0;mel_training_speed0;mel_training_speed2;mel_training_speed3;mel_training_speed4;mel_training_speed7;mel_training_speed1
- **Callees:** FUN_7101bbbd30;FUN_7101bbbf80;FUN_71024076d0;FUN_7103313f20;FUN_710377a120;FUN_710377a280;FUN_710377aee0;FUN_71037a2270;FUN_71037a4450;FUN_71037ad940;FUN_71037ae170;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_7101bbacc0__7101bbacc0.c)  [cfg](../decompiled/FUN_7101bbacc0__7101bbacc0.mmd)
- **Clone hash:** `472ad1a7bca73307`

```c

void FUN_7101bbacc0(long param_1,uint *param_2,uint *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ushort *puVar7;
  char *pcVar8;
  byte *pbVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined4 local_1098 [2];
  undefined **local_1090;
  long local_1088;
  undefined8 local_1080;
  undefined1 local_1078;
  undefined8 local_1070;
  undefined8 uStack_1068;
  undefined8 local_1060;
  ulong local_1058;
  undefined **local_1050;
  long local_1048;
  undefined8 local_1040;
  ulong local_1038;
  undefined8 local_1030;
  undefined8 local_1028;
  undefined8 local_1020;
  int local_58 [2];
  
  if (0xc < *param_2) {
    return;
  }
  lVar11 = *(long *)(param_1 + 8);
// ... (662 more lines)
```

## 40. `FUN_7101b438a0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b438a0`  (offset `0x1b438a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b438a0(long * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 21344 bytes / 1047 bb / 1 incoming refs
- **Match values:** TYPE;type
- **Strings touched:** type_pokesta1_info;type_pokesta2_info;type_pokesta1;type_pokesta2;info_off;bg_pokesta1;bg_pokesta2;count_txt_off;count_05;count_04;count_03;count_02;count_01;txt_01;txt_02;txt_03;txt_04;txt_05;txt_06;txt_07;txt_08;teambattle_pokesta1_little;teambattle_pokesta2_little;teambattle_pokesta1_many;teambattle_pokesta2_many;set_txt_info_00;set_txt_info_01;set_txt_info_02;set_txt_info_03;set_txt_info_04;set_txt_00;set_txt_01;...
- **Callers:** FUN_7101b49840
- **Callees:** FUN_7101414b10;FUN_71032cbf30;FUN_7103773200;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_710377aee0;FUN_71037a2270;FUN_71037ad940;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_7101b438a0__7101b438a0.c)  [cfg](../decompiled/FUN_7101b438a0__7101b438a0.mmd)
- **Clone hash:** `38de826dde25f771`

```c

void FUN_7101b438a0(long *param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_3b8 [16];
  undefined1 auStack_3a8 [16];
  undefined1 auStack_398 [16];
  undefined1 auStack_388 [680];
  long ****local_e0;
  long ****local_d8;
  long ****local_d0;
  uint local_c4;
  undefined1 *local_c0;
  long *local_b8;
  undefined **local_b0;
  ulong local_a8;
  long ***local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
// ... (4447 more lines)
```

## 41. `FUN_71001ea210`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001ea210`  (offset `0x1ea210`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001ea210(long param_1)`
- **Size / BBs / Incoming:** 6988 bytes / 213 bb / 1 incoming refs
- **Match values:** type
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;probeinit;RVCID;Ntrpa;N2nn3nex15EmulationDeviceE;Ntrpp
- **Callers:** FUN_71001ec790
- **Callees:** FUN_71001af850;FUN_71001b12a0;FUN_71001b1300;FUN_71001b1820;FUN_71001b1870;FUN_71001b2f70;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e00;FUN_71001beb30;FUN_71001beb40;FUN_71001bebd0;FUN_71001becd0;FUN_71001bee30;FUN_71001bef00;FUN_71001bef20;...
- **Files:** [decomp](../decompiled/FUN_71001ea210__71001ea210.c)  [cfg](../decompiled/FUN_71001ea210__71001ea210.mmd)
- **Clone hash:** `c2da52331f3e6e0f`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_71001ea210(long param_1)

{
  long *******ppppppplVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  long *plVar12;
  undefined ********ppppppppuVar13;
  long ******pppppplVar14;
  ulong uVar15;
  undefined *******pppppppuVar16;
  undefined ******ppppppuVar17;
  long **pplVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  uint uVar24;
  long *******ppppppplVar25;
  long *******ppppppplVar26;
  undefined ********ppppppppuVar27;
  undefined1 auVar28 [16];
  undefined ******local_268;
  long **local_260;
  long *local_258;
  long ***local_250;
  long **local_248;
  long *local_240;
// ... (953 more lines)
```

## 42. `FUN_7101ad3b90`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ad3b90`  (offset `0x1ad3b90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ad3b90(long param_1, ulong * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7388 bytes / 342 bb / 1 incoming refs
- **Match values:** type
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

## 43. `FUN_7101a9a070`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a9a070`  (offset `0x1a9a070`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a9a070(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1920 bytes / 113 bb / 1 incoming refs
- **Match values:** type
- **Strings touched:** type_pause_00;type_play_00;shortcutkey_inout
- **Callees:** FUN_71024076d0;FUN_7103313f20;FUN_71037760f0;FUN_71037780e0;FUN_7103778300;FUN_710377b140;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101a9a070__7101a9a070.c)  [cfg](../decompiled/FUN_7101a9a070__7101a9a070.mmd)
- **Clone hash:** `950ffb863302dcce`

```c

void FUN_7101a9a070(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  undefined4 uVar10;
  long lVar11;
  undefined4 local_150 [4];
  long local_140;
  int local_138;
  undefined4 local_110 [4];
  long local_100;
  int local_f8;
  undefined **local_d0;
  ulong local_c8;
  undefined4 local_c0 [4];
  long local_b0;
  int local_a8;
  undefined4 local_80 [4];
  long local_70;
  int local_68;
  
  if (*(int *)(param_1 + 0xfc) == 0) {
    *(undefined1 *)(param_1 + 0x170) = 0;
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x110),1);
  }
  lVar11 = *(long *)**(undefined8 **)(param_1 + 0x110);
  lVar8 = *(long *)(*(long *)(param_1 + 0x130) + 8);
  if (*(char *)(lVar8 + 0x113) != '\0') {
    if (((*(char *)(param_1 + 0x169) == '\0') ||
        (plVar4 = *(long **)(lVar8 + 0xe8), plVar4 == (long *)0x0)) ||
// ... (266 more lines)
```

## 44. `FUN_710000c9d0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000c9d0`  (offset `0xc9d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710000c9d0(void)`
- **Size / BBs / Incoming:** 7016 bytes / 461 bb / 2 incoming refs
- **Match values:** type;Type
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

## 45. `FUN_7101c3eea0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c3eea0`  (offset `0x1c3eea0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c3eea0(long param_1, undefined8 param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1636 bytes / 75 bb / 3 incoming refs
- **Match values:** type
- **Strings touched:** set_parts_btn_00;set_txt_val;set_parts_btn_01;mode_empty_03;set_txt_sum;mel_tournament_member_sum_n;set_txt_sum_pre;on_number_%02d;cp_number_%02d;set_txt_caption;mel_tournament_type_select_a;mel_tournament_type_select_c;mel_tournament_type_select_d;mel_tournament_type_select_b;set_parts_btn2_%02d;finalist_number_%d;final_p%d;set_txt_compe;mel_tournament_type_active_txt_04;mel_tournament_type_pattern_%d;set_txt_compe_detail
- **Callers:** FUN_7101c3cf70;FUN_7101c3d0c0;FUN_7101c3eb40
- **Callees:** FUN_71003a4ca0;FUN_7103776640;FUN_7103776910;FUN_7103778430;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_71037a2660;FUN_71037a28a0;FUN_71037ad940;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error
- **Files:** [decomp](../decompiled/FUN_7101c3eea0__7101c3eea0.c)  [cfg](../decompiled/FUN_7101c3eea0__7101c3eea0.mmd)
- **Clone hash:** `956aa832e2c4a4cc`

```c

void FUN_7101c3eea0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  char *pcVar10;
  undefined8 uVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  long ***ppplVar15;
  int iVar16;
  ulong uVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  long ***local_d0;
  ulong local_c8 [8];
  undefined **local_88;
  undefined **local_80;
  undefined **local_78;
  undefined **local_70;
  ulong local_68;
  
  pppplVar13 = &local_d0;
  if (*(int *)(param_1 + 0x160) != 5) {
    if (*(int *)(param_1 + 0x160) != 2) {
      return;
    }
// ... (283 more lines)
```

## 46. `FUN_71019ad760`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019ad760`  (offset `0x19ad760`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019ad760(long param_1, undefined4 param_2)`
- **Size / BBs / Incoming:** 2644 bytes / 135 bb / 2 incoming refs
- **Match values:** type
- **Strings touched:** type_03;mnu_amiibo_reading_select;type_00;mnu_amiibo_reading_help_00
- **Callers:** FUN_71017f9650;FUN_71019a71a0
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_710324c970;FUN_71032dc2a0;FUN_71032df050;FUN_71032e2e70;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71019ad760__71019ad760.c)  [cfg](../decompiled/FUN_71019ad760__71019ad760.mmd)
- **Clone hash:** `df04ee43f17a8506`

```c

void FUN_71019ad760(long param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  ushort *puVar8;
  long *plVar9;
  undefined4 uVar10;
  long lVar11;
  ushort uVar12;
  long lVar13;
  long *plVar14;
  char local_70 [10];
  byte local_66;
  
  *(undefined1 *)(param_1 + 0x56c) = 1;
  switch(param_2) {
  case 0:
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar11 = DAT_710532f7b0;
    iVar3 = DAT_7105307d50;
    lVar13 = *(long *)(DAT_710532f7b0 + 8);
    if (*(char *)(lVar13 + 0x10a4c) != '\0') {
      *(char **)(param_1 + 0x308) = "type_03";
      *(undefined2 *)(param_1 + 800) = 0x100;
      *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_select";
      if (0x12 < *(uint *)(param_1 + 0x2cc)) goto LAB_71019ae05c;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0xc;
      if (*(int *)(param_1 + 0x2cc) < 0x12) {
        uVar7 = *(int *)(param_1 + 0x2cc) + 1;
// ... (377 more lines)
```

## 47. `FUN_710214a020`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710214a020`  (offset `0x214a020`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710214a020(void)`
- **Size / BBs / Incoming:** 21684 bytes / 28 bb / 1 incoming refs
- **Match values:** TYPE
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

## 48. `FUN_7101714c00`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101714c00`  (offset `0x1714c00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101714c00(long param_1, long param_2, undefined2 * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6812 bytes / 251 bb / 2 incoming refs
- **Match values:** Type;type
- **Strings touched:** lang:%s;DataStorePreparePostParam: (;size=;, name=;, dataType=;, accessPermission=;DataStorePermission: (permission=;, targetIds=(;, updatePermission=;, dataFlag=;, period=;, referDataId=;, persistenceInitParam=;DataStorePersistenceInitParam: (;NODE_PRE_REFRACT_BLEND;persistenceSlotId=;, deleteLastObject=;, ratingInitParams=(;slot=;, ratingInitParam=;DataStoreRatingInitParam: (;flag=;, internalFlag=;, lockType=;, initialValue=;, rangeMin=;, rangeMax=;, periodHour=;, periodDuration=;, tags=(;, metaBinary=;country;...
- **Callers:** FUN_71017320d0;FUN_7101732d10
- **Callees:** FUN_71001aff70;FUN_71001b0ab0;FUN_71001b1820;FUN_71001b1870;FUN_71001b2f70;FUN_71001b3300;FUN_71001b4390;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4b40;FUN_71001b4e80;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;FUN_71001b61d0;FUN_71001b6320;...
- **Files:** [decomp](../decompiled/FUN_7101714c00__7101714c00.c)  [cfg](../decompiled/FUN_7101714c00__7101714c00.mmd)
- **Clone hash:** `b2151cc381e6a915`

```c

void FUN_7101714c00(long param_1,long param_2,undefined2 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long ****pppplVar9;
  undefined1 *puVar10;
  long lVar11;
  long *****ppppplVar12;
  long ****pppplVar13;
  long lVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long ****pppplVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  char *pcVar23;
  long ****pppplVar24;
  long ****pppplVar25;
  byte *pbVar26;
  int iVar27;
  long *****ppppplVar28;
  long *****ppppplVar29;
  long ****local_1b0;
  long ****local_1a8;
  undefined8 *local_1a0;
  undefined **local_198;
  undefined **local_190;
  undefined **local_188;
// ... (897 more lines)
```

## 49. `FUN_7101e0b1b0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e0b1b0`  (offset `0x1e0b1b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e0b1b0(long * param_1, int param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7732 bytes / 417 bb / 3 incoming refs
- **Match values:** TYPE
- **Strings touched:** show_btn_sync;hide_btn_sync;selector_0;scr_sort;scr_ctrl;set_parts_btn_sync;blinder;btn_cursor;set_parts_det_key;set_txt_help;mnu_spirits_setorg_submenu;submenu_in;submenu_on;scroll;set_rep_spirit
- **Callers:** FUN_71018f7620;FUN_7101962010;FUN_71024f63a0
- **Callees:** FUN_71019bb740;FUN_71019bb8f0;FUN_71019c1c50;FUN_7102528f40;FUN_71025c6970;FUN_71032cbf30;FUN_71032ccb70;FUN_71032d6470;FUN_710337df20;FUN_710337e790;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103772070;FUN_7103776290;FUN_7103776390;...
- **Files:** [decomp](../decompiled/FUN_7101e0b1b0__7101e0b1b0.c)  [cfg](../decompiled/FUN_7101e0b1b0__7101e0b1b0.mmd)
- **Clone hash:** `0b608434f0de2932`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101e0b1b0(long *param_1,int param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  bool bVar9;
  byte ***pppbVar10;
  byte ***pppbVar11;
  void *pvVar12;
  long **pplVar13;
  ulong uVar14;
  long ***ppplVar15;
  byte **ppbVar16;
  ulong uVar17;
  byte ***pppbVar18;
  long *plVar19;
  undefined8 *puVar20;
  char *pcVar21;
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
// ... (1596 more lines)
```

## 50. `FUN_7101f3d240`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f3d240`  (offset `0x1f3d240`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f3d240(long param_1, int * param_2, long * * * * * * * * * param_3, undefined8 param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1504 bytes / 80 bb / 3 incoming refs
- **Match values:** type
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

