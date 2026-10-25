# pid (funcs=12, hits=39)

Top 50 functions by hit count

## 1. `FUN_71021e8010`  (hits=17)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021e8010`  (offset `0x21e8010`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021e8010(void)`
- **Size / BBs / Incoming:** 10856 bytes / 4 bb / 1 incoming refs
- **Match values:** PID
- **Strings touched:** FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_START;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GROUND_MOT;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_AIR_MOT;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX;WEAPON_ELIGHT_ESWORD_MOTION_PART_SET_KIND_OPEM_CLOSE;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GUNNER_CHARGE_COUNT;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_FINAL_LASER_C;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_FINAL_GUN_ID;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_FINAL_MOT2ND;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GROUND_BOMB_OBJECT_ID;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_TERM;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_HEAD_RIGHT_OFFSET;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_HEAD_LEFT_OFFSET;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_HEAD_OFFSET;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_HEAD_OFFSET_TIMER;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_HEAD_OFFSET_TIMER_MAX;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_ABSORBER_POWER;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_ABSORBER_LR;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_FINAL_LASER_ANG;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_START;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_ST_INIT;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_EX1;FIGHTER_MIIGUNNER_INSTANCE_WORK_FLAG_CANNONJUMP_FALL;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_REFLECTOR;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_REFLECTOR_BREAK;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_GRAVITY_BRAKE_USED;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021e8010__71021e8010.c)  [cfg](../decompiled/FUN_71021e8010__71021e8010.mmd)
- **Clone hash:** `18bab05dbf474b8b`

```c

void FUN_71021e8010(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GROUND_MOT",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_AIR_MOT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GUNNER_CHARGE_COUNT",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_FINAL_LASER_C",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_FINAL_GUN_ID",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_FINAL_MOT2ND",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GROUND_BOMB_OBJECT_ID",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_START",
// ... (1254 more lines)
```

## 2. `FUN_71021723e0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021723e0`  (offset `0x21723e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021723e0(void)`
- **Size / BBs / Incoming:** 13744 bytes / 25 bb / 1 incoming refs
- **Match values:** PID
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

## 3. `FUN_71020fbb90`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** PID
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

## 4. `FUN_7101f45620`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** PID
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

## 5. `FUN_71021e61d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021e61d0`  (offset `0x21e61d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021e61d0(void)`
- **Size / BBs / Incoming:** 7744 bytes / 10 bb / 1 incoming refs
- **Match values:** PID
- **Strings touched:** WEAPON_TANTAN_BEAM_INSTANCE_WORK_ID_INT_BEAM_EFFECT_HANDLE;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_START;FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_FLOAT_MOVE_SPD_X;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_EFT_ID_SWORD_FLARE;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_EFT_TEX_SWORD;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_EFT_TEX_SWORD_ADD;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_GROUND_MOT;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_AIR_MOT;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_ACTIVE_CHAKRAM_OBJECT_ID;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_BODY_EFFECT_HANDLE;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_BODY_EFFECT_VIS_SET_ID;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_BODY_EFFECT_VIS_GROUP_ID;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_TERM;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_HEAD_RIGHT_OFFSET;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_HEAD_LEFT_OFFSET;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_HEAD_OFFSET;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_HEAD_OFFSET_TIMER;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_HEAD_OFFSET_TIMER_MAX;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_SDUSH_DECIDE_STICK_X;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_SDUSH_DECIDE_STICK_Y;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_HENSOKU_SLASH_CHARGE_RATE;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_FINAL_BLUR_ALPHA;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_RAPID_SLASH_START_SPD_X_MUL;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_RAPID_SLASH_BRAKE_SPD_X;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLOAT_TERM;WEAPON_ELIGHT_ESWORD_MOTION_PART_SET_KIND_OPEM_CLOSE;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_START;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND;FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021e61d0__71021e61d0.c)  [cfg](../decompiled/FUN_71021e61d0__71021e61d0.mmd)
- **Clone hash:** `582aad37114af052`

```c

void FUN_71021e61d0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_EFT_ID_SWORD_FLARE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_EFT_TEX_SWORD",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_EFT_TEX_SWORD_ADD",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_GROUND_MOT",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_AIR_MOT",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_ACTIVE_CHAKRAM_OBJECT_ID",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_BODY_EFFECT_HANDLE",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_BODY_EFFECT_VIS_SET_ID",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_BODY_EFFECT_VIS_GROUP_ID",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIISWORDSMAN_INSTANCE_WORK_ID_INT_TERM",
// ... (887 more lines)
```

## 6. `FUN_71001f1c60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f1c60`  (offset `0x1f1c60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001f1c60(long param_1, undefined8 param_2)`
- **Size / BBs / Incoming:** 44 bytes / 1 bb / 5 incoming refs
- **Match values:** PID
- **Callers:** FUN_71000d1170;FUN_710023f2d0;FUN_7100245c80
- **Callees:** FUN_71001f2a80
- **Files:** [decomp](../decompiled/FUN_71001f1c60__71001f1c60.c)  [cfg](../decompiled/FUN_71001f1c60__71001f1c60.mmd)
- **Clone hash:** `7023a7d9fa7670da`

```c

void FUN_71001f1c60(long param_1,undefined8 param_2)

{
  undefined4 auStack_28 [6];
  
  FUN_71001f2a80(auStack_28,param_1,"PID",param_2);
  return;
}


```

## 7. `FUN_7100033a40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** pId
- **Strings touched:** nvnDeviceBuilderSetDefaults;nvnDeviceBuilderSetFlags;nvnDeviceBuilderGetFlags;nvnDeviceInitialize;nvnDeviceFinalize;nvnDeviceSetDebugLabel;nvnDeviceGetProcAddress;nvnDeviceGetInteger;nvnDeviceGetCurrentTimestampInNanoseconds;nvnDeviceSetIntermediateShaderCache;nvnDeviceGetTextureHandle;nvnDeviceGetTexelFetchHandle;nvnDeviceGetImageHandle;nvnDeviceInstallDebugCallback;nvnDeviceGenerateDebugDomainId;chara/chara_4/chara_4_;nvnDeviceSetWindowOriginMode;nvnDeviceSetDepthMode;nvnDeviceRegisterFastClearColor;nvnDeviceRegisterFastClearColori;nvnDeviceRegisterFastClearColorui;nvnDeviceRegisterFastClearDepth;nvnDeviceGetWindowOriginMode;nvnDeviceGetDepthMode;nvnDeviceGetTimestampInNanoseconds;nvnDeviceApplyDeferredFinalizes;nvnDeviceFinalizeCommandHandle;nvnDeviceWalkDebugDatabase;nvnDeviceGetSeparateTextureHandle;nvnDeviceGetSeparateSamplerHandle;nvnDeviceIsExternalDebuggerAttached;dys_yoga03_l_03_set;...
- **Callers:** FUN_71037fb770;FUN_71037fe8c0
- **Files:** [decomp](../decompiled/FUN_7100033a40__7100033a40.c)  [cfg](../decompiled/FUN_7100033a40__7100033a40.mmd)
- **Clone hash:** `f1d8c7f827926111`

```c

void FUN_7100033a40(undefined8 param_1,undefined *param_2)

{
  DAT_71052aa310 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetDefaults");
  DAT_71052aa318 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetFlags");
  DAT_71052aa320 = (*(code *)param_2)(param_1,"nvnDeviceBuilderGetFlags");
  DAT_71052aa328 = (*(code *)param_2)(param_1,"nvnDeviceInitialize");
  DAT_71052aa330 = (*(code *)param_2)(param_1,"nvnDeviceFinalize");
  DAT_71052aa338 = (*(code *)param_2)(param_1,"nvnDeviceSetDebugLabel");
  DAT_71052aa340 = (*(code *)param_2)(param_1,"nvnDeviceGetProcAddress");
  DAT_71052aa348 = (*(code *)param_2)(param_1,"nvnDeviceGetInteger");
  DAT_71052aa350 = (*(code *)param_2)(param_1,"nvnDeviceGetCurrentTimestampInNanoseconds");
  DAT_71052aa358 = (*(code *)param_2)(param_1,"nvnDeviceSetIntermediateShaderCache");
  DAT_71052aa360 = (*(code *)param_2)(param_1,"nvnDeviceGetTextureHandle");
  DAT_71052aa368 = (*(code *)param_2)(param_1,"nvnDeviceGetTexelFetchHandle");
  DAT_71052aa370 = (*(code *)param_2)(param_1,"nvnDeviceGetImageHandle");
  DAT_71052aa378 = (*(code *)param_2)(param_1,"nvnDeviceInstallDebugCallback");
  DAT_71052aa380 = (*(code *)param_2)(param_1,"nvnDeviceGenerateDebugDomainId");
  DAT_71052aa388 = (*(code *)param_2)(param_1,"nvnDeviceSetWindowOriginMode");
  DAT_71052aa390 = (*(code *)param_2)(param_1,"nvnDeviceSetDepthMode");
  DAT_71052aa398 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColor");
  DAT_71052aa3a0 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColori");
  DAT_71052aa3a8 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColorui");
  DAT_71052aa3b0 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearDepth");
  DAT_71052aa3b8 = (*(code *)param_2)(param_1,"nvnDeviceGetWindowOriginMode");
  DAT_71052aa3c0 = (*(code *)param_2)(param_1,"nvnDeviceGetDepthMode");
  DAT_71052aa3c8 = (*(code *)param_2)(param_1,"nvnDeviceGetTimestampInNanoseconds");
  DAT_71052aa3d0 = (*(code *)param_2)(param_1,"nvnDeviceApplyDeferredFinalizes");
  DAT_71052aa3d8 = (*(code *)param_2)(param_1,"nvnDeviceFinalizeCommandHandle");
  DAT_71052aa3e0 = (*(code *)param_2)(param_1,"nvnDeviceWalkDebugDatabase");
  DAT_71052aa3e8 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateTextureHandle");
  DAT_71052aa3f0 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateSamplerHandle");
  DAT_71052aa3f8 = (*(code *)param_2)(param_1,"nvnDeviceIsExternalDebuggerAttached");
  DAT_71052aa400 = (*(code *)param_2)(param_1,"nvnQueueGetError");
  DAT_71052aa408 = (*(code *)param_2)(param_1,"nvnQueueGetTotalCommandMemoryUsed");
  DAT_71052aa410 = (*(code *)param_2)(param_1,"nvnQueueGetTotalControlMemoryUsed");
  DAT_71052aa418 = (*(code *)param_2)(param_1,"nvnQueueGetTotalComputeMemoryUsed");
  DAT_71052aa420 = (*(code *)param_2)(param_1,"nvnQueueResetMemoryUsageCounts");
  DAT_71052aa428 = (*(code *)param_2)(param_1,"nvnQueueBuilderSetDevice");
// ... (483 more lines)
```

## 8. `FUN_71001f13a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f13a0`  (offset `0x1f13a0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001f13a0(long param_1, long param_2)`
- **Size / BBs / Incoming:** 328 bytes / 10 bb / 2 incoming refs
- **Match values:** PID
- **Strings touched:** RVCID
- **Callers:** FUN_71001f4d70
- **Callees:** FUN_71001af850;FUN_71001b1820;FUN_71001beb40;FUN_71001f1f40;FUN_71001f2ba0
- **Files:** [decomp](../decompiled/FUN_71001f13a0__71001f13a0.c)  [cfg](../decompiled/FUN_71001f13a0__71001f13a0.mmd)
- **Clone hash:** `b47307235164f8d8`

```c

undefined8 FUN_71001f13a0(long param_1,long param_2)

{
  long *plVar1;
  ulonglong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar2 = FUN_71001f2ba0(param_2,"RVCID",0);
  if ((int)uVar2 != 0) {
    uVar2 = FUN_71001f2ba0(param_2,"RVCID",0);
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 8) != (int)uVar2)) {
      return 0;
    }
    *(int *)(param_1 + 8) = (int)uVar2;
    uVar2 = FUN_71001f2ba0(param_2,"PID",0);
    if (*(long *)(param_1 + 0x10) == 0) {
      *(ulonglong *)(param_1 + 0x10) = uVar2;
    }
  }
  plVar1 = (long *)(param_1 + 0x18);
  plVar3 = FUN_71001b1820(0x80);
  *plVar3 = 0;
  plVar3[2] = (long)&PTR_FUN_7104f57900;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[5] = (long)(plVar3 + 6);
  plVar3[9] = 0;
  plVar3[8] = (long)(plVar3 + 9);
  plVar3[10] = 0;
  plVar3[0xc] = 0;
  plVar3[0xb] = (long)(plVar3 + 0xc);
  *(undefined2 *)(plVar3 + 0xf) = 1;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  *(undefined1 *)((long)plVar3 + 0x7a) = 0;
  puVar4 = FUN_71001af850(0x90);
  if (puVar4 != (undefined8 *)0x0) {
// ... (13 more lines)
```

## 9. `FUN_71037f8180`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** pId
- **Strings touched:** nvnDeviceBuilderSetDefaults;nvnDeviceBuilderSetFlags;nvnDeviceBuilderGetFlags;nvnDeviceInitialize;nvnDeviceFinalize;nvnDeviceSetDebugLabel;nvnDeviceGetProcAddress;nvnDeviceGetInteger;nvnDeviceGetCurrentTimestampInNanoseconds;nvnDeviceSetIntermediateShaderCache;nvnDeviceGetTextureHandle;nvnDeviceGetTexelFetchHandle;nvnDeviceGetImageHandle;nvnDeviceInstallDebugCallback;nvnDeviceGenerateDebugDomainId;chara/chara_4/chara_4_;nvnDeviceSetWindowOriginMode;nvnDeviceSetDepthMode;nvnDeviceRegisterFastClearColor;nvnDeviceRegisterFastClearColori;nvnDeviceRegisterFastClearColorui;nvnDeviceRegisterFastClearDepth;nvnDeviceGetWindowOriginMode;nvnDeviceGetDepthMode;nvnDeviceGetTimestampInNanoseconds;nvnDeviceApplyDeferredFinalizes;nvnDeviceFinalizeCommandHandle;nvnDeviceWalkDebugDatabase;nvnDeviceGetSeparateTextureHandle;nvnDeviceGetSeparateSamplerHandle;nvnDeviceIsExternalDebuggerAttached;dys_yoga03_l_03_set;...
- **Callers:** FUN_71037fb770;FUN_71037fe8c0
- **Files:** [decomp](../decompiled/FUN_71037f8180__71037f8180.c)  [cfg](../decompiled/FUN_71037f8180__71037f8180.mmd)
- **Clone hash:** `5e5bcf3c984ab2cc`

```c

void FUN_71037f8180(undefined8 param_1,undefined *param_2)

{
  DAT_71059408e8 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetDefaults");
  DAT_71059408f0 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetFlags");
  DAT_71059408f8 = (*(code *)param_2)(param_1,"nvnDeviceBuilderGetFlags");
  DAT_7105940900 = (*(code *)param_2)(param_1,"nvnDeviceInitialize");
  DAT_7105940908 = (*(code *)param_2)(param_1,"nvnDeviceFinalize");
  DAT_7105940910 = (*(code *)param_2)(param_1,"nvnDeviceSetDebugLabel");
  DAT_7105940918 = (*(code *)param_2)(param_1,"nvnDeviceGetProcAddress");
  DAT_7105940920 = (*(code *)param_2)(param_1,"nvnDeviceGetInteger");
  DAT_7105940928 = (*(code *)param_2)(param_1,"nvnDeviceGetCurrentTimestampInNanoseconds");
  DAT_7105940930 = (*(code *)param_2)(param_1,"nvnDeviceSetIntermediateShaderCache");
  DAT_7105940938 = (*(code *)param_2)(param_1,"nvnDeviceGetTextureHandle");
  DAT_7105940940 = (*(code *)param_2)(param_1,"nvnDeviceGetTexelFetchHandle");
  DAT_7105940948 = (*(code *)param_2)(param_1,"nvnDeviceGetImageHandle");
  DAT_7105940950 = (*(code *)param_2)(param_1,"nvnDeviceInstallDebugCallback");
  DAT_7105940958 = (*(code *)param_2)(param_1,"nvnDeviceGenerateDebugDomainId");
  DAT_7105940960 = (*(code *)param_2)(param_1,"nvnDeviceSetWindowOriginMode");
  DAT_7105940968 = (*(code *)param_2)(param_1,"nvnDeviceSetDepthMode");
  DAT_7105940970 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColor");
  DAT_7105940978 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColori");
  DAT_7105940980 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColorui");
  DAT_7105940988 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearDepth");
  DAT_7105940990 = (*(code *)param_2)(param_1,"nvnDeviceGetWindowOriginMode");
  DAT_7105940998 = (*(code *)param_2)(param_1,"nvnDeviceGetDepthMode");
  DAT_71059409a0 = (*(code *)param_2)(param_1,"nvnDeviceGetTimestampInNanoseconds");
  DAT_71059409a8 = (*(code *)param_2)(param_1,"nvnDeviceApplyDeferredFinalizes");
  DAT_71059409b0 = (*(code *)param_2)(param_1,"nvnDeviceFinalizeCommandHandle");
  DAT_71059409b8 = (*(code *)param_2)(param_1,"nvnDeviceWalkDebugDatabase");
  DAT_71059409c0 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateTextureHandle");
  DAT_71059409c8 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateSamplerHandle");
  DAT_71059409d0 = (*(code *)param_2)(param_1,"nvnDeviceIsExternalDebuggerAttached");
  DAT_71059409d8 = (*(code *)param_2)(param_1,"nvnQueueGetError");
  DAT_71059409e0 = (*(code *)param_2)(param_1,"nvnQueueGetTotalCommandMemoryUsed");
  DAT_71059409e8 = (*(code *)param_2)(param_1,"nvnQueueGetTotalControlMemoryUsed");
  DAT_71059409f0 = (*(code *)param_2)(param_1,"nvnQueueGetTotalComputeMemoryUsed");
  DAT_71059409f8 = (*(code *)param_2)(param_1,"nvnQueueResetMemoryUsageCounts");
  DAT_7105940a00 = (*(code *)param_2)(param_1,"nvnQueueBuilderSetDevice");
// ... (483 more lines)
```

## 10. `FUN_710225b990`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** PID
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

## 11. `FUN_71001f16c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f16c0`  (offset `0x1f16c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001f16c0(long param_1)`
- **Size / BBs / Incoming:** 16 bytes / 1 bb / 8 incoming refs
- **Match values:** PID
- **Callers:** FUN_71000c2890;FUN_71000c3d90;FUN_71000c4770;FUN_7100110e60;FUN_7100111da0;FUN_710023f2d0;FUN_7100243b10
- **Callees:** FUN_71001f2ba0
- **Files:** [decomp](../decompiled/FUN_71001f16c0__71001f16c0.c)  [cfg](../decompiled/FUN_71001f16c0__71001f16c0.mmd)
- **Clone hash:** `02e4d3eaee1b9d82`

```c

void FUN_71001f16c0(long param_1)

{
  FUN_71001f2ba0(param_1,"PID",0);
  return;
}


```

## 12. `FUN_710023abc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710023abc0`  (offset `0x23abc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710023abc0(long * param_1, long param_2, long * param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 936 bytes / 30 bb / 1 incoming refs
- **Match values:** PID
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;ClientProtocolRequestBroker: Error processing message. pBuffer=; Protocol ID=; CntSize=; Size=;chara/chara_4/chara_4_;  EndPoint: CID=; PID=; URL=;dys_yoga03_l_03_set;  <EndPoint is NULL>
- **Callers:** FUN_710023ab90
- **Callees:** FUN_71001afae0;FUN_71001afd40;FUN_71001b0ab0;FUN_71001b1300;FUN_71001b3300;FUN_71001b6080;FUN_71001b60c0;FUN_71001b6320;FUN_71001b6470;FUN_71001b6610;FUN_71001d6ba0;FUN_71001d6c40;FUN_71001e6720;FUN_71001e6870;FUN_71001e6910;FUN_71001e69b0;...
- **Files:** [decomp](../decompiled/FUN_710023abc0__710023abc0.c)  [cfg](../decompiled/FUN_710023abc0__710023abc0.mmd)
- **Clone hash:** `f05e2e693bcc067f`

```c

void FUN_710023abc0(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 auStack_218 [37];
  undefined1 auStack_f0 [28];
  char local_d4 [4];
  undefined8 uStack_d0;
  char local_c8;
  ushort local_58 [2];
  uint local_54;
  
  lVar3 = param_4;
  FUN_71001e6870(&uStack_d0,param_4);
  puVar5 = local_58;
  FUN_710022a760((long)&uStack_d0,&local_54,puVar5);
  uVar11 = *(ulong *)(param_4 + 0x18);
  puVar2 = FUN_71001afd40((long)(param_1 + 1),(uint)local_58[0],puVar5,lVar3,param_5,param_6,param_7
                          ,param_8);
  FUN_71001afae0((long)(puVar2 + 1),uVar11);
  if (local_54 == 1) {
    FUN_710022a4b0(param_2);
    FUN_71001d6ba0((long)(param_1 + 10),param_2);
    FUN_71001e6720(auStack_218);
    local_d4[0] = '\0';
    FUN_710022bf40();
    (**(code **)(*param_1 + 0x18))(param_1,local_58[0],&uStack_d0,auStack_218,local_d4,param_3);
// ... (90 more lines)
```

