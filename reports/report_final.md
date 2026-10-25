# final (funcs=87, hits=718)

Top 50 functions by hit count

## 1. `FUN_7101f45620`  (hits=168)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** FINAL;final
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

## 2. `FUN_71021ec200`  (hits=86)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021ec200`  (offset `0x21ec200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021ec200(void)`
- **Size / BBs / Incoming:** 11060 bytes / 10 bb / 1 incoming refs
- **Match values:** FINAL
- **Strings touched:** FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_N_FRAMES_AFTER_LAST3PS;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_FRAME;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_RANDOM_TABLE;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_SHOOT_TIMER;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_DISABLE_SHOOT_CAN_FRAME;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_3SHOTS_INVALID_FRAMES;FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_FLOAT_MOVE_SPD_X;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TRIGGER_TIMER;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TERM;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOP;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_GUNMAN_OK;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_RELEASE_CAN;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_RELEASE_CLAY;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_RELEASE_GUNMAN;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_REQUEST_SPECIAL_HI_CANCEL;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_ENABLE_SPECIAL_HI_CANCEL;WEAPON_GANON_BEAST_INSTANCE_WORK_ID_FLAG_HITSTOP;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_CANCELED;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_SPECIAL_S_CLAY_HIT;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_THROW_N_OFFSET_X;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_THROW_N_OFFSET_Y;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_THROW_N_OFFSET_Z;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_SMASH_S_CHARGE_FRAME;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_SHOOT_POS_X;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_SHOOT_POS_Y;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_DUCKHUNT_TURN_NEUTRAL;FIGHTER_DUCKHUNT_TURN_FRONT;FIGHTER_DUCKHUNT_TURN_BACK;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021ec200__71021ec200.c)  [cfg](../decompiled/FUN_71021ec200__71021ec200.mmd)
- **Clone hash:** `e53f121443819b63`

```c

void FUN_71021ec200(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_N_FRAMES_AFTER_LAST3PS",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_FRAME",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_RANDOM_TABLE",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_SHOOT_TIMER",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_DISABLE_SHOOT_CAN_FRAME",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_3SHOTS_INVALID_FRAMES",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TRIGGER_TIMER",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
// ... (1269 more lines)
```

## 3. `FUN_71020fbb90`  (hits=77)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** FINAL;Final
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

## 4. `FUN_71021723e0`  (hits=33)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021723e0`  (offset `0x21723e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021723e0(void)`
- **Size / BBs / Incoming:** 13744 bytes / 25 bb / 1 incoming refs
- **Match values:** FINAL
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

## 5. `FUN_710214a020`  (hits=20)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710214a020`  (offset `0x214a020`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710214a020(void)`
- **Size / BBs / Incoming:** 21684 bytes / 28 bb / 1 incoming refs
- **Match values:** FINAL
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

## 6. `FUN_710217dfa0`  (hits=19)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710217dfa0`  (offset `0x217dfa0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710217dfa0(void)`
- **Size / BBs / Incoming:** 7628 bytes / 10 bb / 1 incoming refs
- **Match values:** FINAL
- **Strings touched:** FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BEAM_ENERGY_VALUE;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_GYRO_CHARGE_VALUE;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BURNER_ENERGY_VALUE;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_LAMP_EFFECT_KIND;FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_LAMP_EFFECT_ID;FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_FINAL_COUNT;FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_FINAL_PATTERN_CHANGE_COUNT;FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_BEAM_GLOW_ATTACK;FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_HOMINGLASER_NUM;FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_HOMINGLASER_INDEX;FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_TERM;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_ARMSPIN_PUSH_B;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_ARMSPIN_STICK_L;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_ARMSPIN_STICK_R;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_BURNER_TRANSFORM_COMP;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_BURNER_TRANSFORM_REVERS;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_FINAL;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_FINAL_COUNT;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_FINAL_ATTACK_START;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_FINAL_ATTACK;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_FINAL_FLASHING;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_CHARGE_STOP;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_REGION_JP;FIGHTER_ROBOT_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_ROBOT_LAMP_KIND_S;FIGHTER_ROBOT_LAMP_KIND_M;FIGHTER_ROBOT_LAMP_KIND_L;FIGHTER_ROBOT_LAMP_KIND_TERM;FIGHTER_ROBOT_PARTIAL_ANIM_NO_BURNER_PARTS;FIGHTER_ROBOT_PARTIAL_ANIM_NO_INDICATOR_PARTS;FIGHTER_ROBOT_PARTIAL_ANIM_NO_TERM;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710217dfa0__710217dfa0.c)  [cfg](../decompiled/FUN_710217dfa0__710217dfa0.mmd)
- **Clone hash:** `026a37456febd9ae`

```c

void FUN_710217dfa0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BEAM_ENERGY_VALUE",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_GYRO_CHARGE_VALUE",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_BURNER_ENERGY_VALUE",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_INSTANCE_WORK_ID_FLOAT_TERM",(undefined **)0x4f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_LAMP_EFFECT_KIND",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_LAMP_EFFECT_ID",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_FINAL_COUNT",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_FINAL_PATTERN_CHANGE_COUNT",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_BEAM_GLOW_ATTACK",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_HOMINGLASER_NUM",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROBOT_INSTANCE_WORK_ID_INT_HOMINGLASER_INDEX",
// ... (842 more lines)
```

## 7. `FUN_710217ffb0`  (hits=18)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710217ffb0`  (offset `0x217ffb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710217ffb0(void)`
- **Size / BBs / Incoming:** 7620 bytes / 16 bb / 1 incoming refs
- **Match values:** FINAL
- **Strings touched:** FIGHTER_SONIC_ARCHIVE_GROUP_BASE;FIGHTER_SONIC_ARCHIVE_GROUP_WPN_GIMMICK_JUMP;FIGHTER_SONIC_ARCHIVE_GROUP_WPN_SUPER_SONIC;FIGHTER_SONIC_ARCHIVE_TERM;FIGHTER_SONIC_INSTANCE_WORK_ID_INT_START;FIGHTER_SONIC_INSTANCE_WORK_INT_JUMP_COUNT;FIGHTER_SONIC_INSTANCE_WORK_INT_SPECIAL_N_STATUS_KIND_NEXT;FIGHTER_SONIC_INSTANCE_WORK_ID_INT_WATER_FRAME;FIGHTER_SONIC_INSTANCE_WORK_ID_INT_TERM;FIGHTER_SONIC_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_SONIC_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_ADD_ATTACK_POWER;FIGHTER_SONIC_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_SONIC_INSTANCE_WORK_ID_FLAG_START;FIGHTER_SONIC_INSTANCE_WORK_FLAG_SPECIAL_HI_FALL;FIGHTER_SONIC_INSTANCE_WORK_FLAG_SPECIAL_N_FALL;FIGHTER_SONIC_INSTANCE_WORK_FLAG_SPECIAL_S_HOLD_JUMP_EFFECT;FIGHTER_SONIC_INSTANCE_WORK_FLAG_DISABLE_RUN_TRACE;WEAPON_DIDDY_EXPLOSION_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_SONIC_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_SONIC_LINK_NO_START;FIGHTER_SONIC_LINK_NO_SUPER_SONIC;FIGHTER_SONIC_LINK_NO_TERM;FIGHTER_SONIC_WIN_WPN_DATA_CHAOSEMERALD;FIGHTER_SONIC_WIN_WPN_DATA_TERM;FIGHTER_SONIC_KINETIC_ENERGY_ID_START;FIGHTER_SONIC_KINETIC_ENERGY_ID_TERM;FIGHTER_KINETIC_TYPE_SONIC_START;FIGHTER_KINETIC_TYPE_SONIC_SPECIAL_N;FIGHTER_KINETIC_TYPE_SONIC_SPECIAL_N_FAIL;FIGHTER_KINETIC_TYPE_SONIC_SPECIAL_N_REBOUND;FIGHTER_KINETIC_TYPE_SONIC_SPECIAL_N_HIT;FIGHTER_KINETIC_TYPE_SONIC_SPECIAL_N_HOMING;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710217ffb0__710217ffb0.c)  [cfg](../decompiled/FUN_710217ffb0__710217ffb0.mmd)
- **Clone hash:** `0e76e5da249366cd`

```c

void FUN_710217ffb0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SONIC_ARCHIVE_GROUP_BASE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SONIC_ARCHIVE_GROUP_WPN_GIMMICK_JUMP",(undefined **)0x1,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SONIC_ARCHIVE_GROUP_WPN_SUPER_SONIC",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SONIC_ARCHIVE_TERM",(undefined **)0x3,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SONIC_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SONIC_INSTANCE_WORK_INT_JUMP_COUNT",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SONIC_INSTANCE_WORK_INT_SPECIAL_N_STATUS_KIND_NEXT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SONIC_INSTANCE_WORK_ID_INT_WATER_FRAME",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SONIC_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
// ... (840 more lines)
```

## 8. `FUN_7102144140`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102144140`  (offset `0x2144140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102144140(long param_1)`
- **Size / BBs / Incoming:** 1248 bytes / 4 bb / 2 incoming refs
- **Match values:** final
- **Strings touched:** FighterManager;entry_count;total_fighter_num;get_entry_id;get_entry_no;get_fighter_entry;get_fighter_information;is_melee_mode_homerun;is_homerun_versus;is_melee_mode_online_tournament;one_on_one_ratio;is_discretion_final_enabled;get_top_rank_player_num;get_top_rank_player;is_ready_go;set_cursor_whole;get_fighter_pos;is_available_discretion_final;get_final_actor_entry_id;is_final;set_final;get_no_discretion_final_beat_count;get_beat_point_diff_from_top;set_final_fear_face;start_finalbg;exit_finalbg;show_finalbg;hide_finalbg;pause_finalbg;resume_finalbg;set_visible_finalbg;notify_log_event_collision_hit;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102144140__7102144140.c)  [cfg](../decompiled/FUN_7102144140__7102144140.mmd)
- **Clone hash:** `a3b0414249fe2eb2`

```c

void FUN_7102144140(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterManager",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                );
  FUN_7103728bf0(&local_28,(uint *)"entry_count",(long ****)FUN_7102141940,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"total_fighter_num",(long ****)FUN_7102141980,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_entry_id",(long ****)FUN_7102141a40,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_entry_no",(long ****)FUN_7102141bd0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_entry",(long ****)FUN_7102141d50,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_information",(long ****)FUN_7102141e40,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_melee_mode_homerun",(long ****)FUN_7102141f30,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_homerun_versus",(long ****)FUN_7102141f70,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_melee_mode_online_tournament",(long ****)FUN_7102142050,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"one_on_one_ratio",(long ****)FUN_7102142090,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_discretion_final_enabled",(long ****)FUN_71021420d0,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_top_rank_player_num",(long ****)FUN_7102142110,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
// ... (80 more lines)
```

## 9. `FUN_71021d37a0`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021d37a0`  (offset `0x21d37a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021d37a0(void)`
- **Size / BBs / Incoming:** 17364 bytes / 31 bb / 1 incoming refs
- **Match values:** FINAL
- **Strings touched:** FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_START;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_GRADE_1;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_WOOD;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_STONE;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_IRON;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_GOLD;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_RED_STONE;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_DIAMOND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_AIR_LW_FORBID_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_S_REPEAT_COUNT_ON_CATEGORY_SPECIAL;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_COUNT_ON_AIR;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N2_TABLE_REPLASE_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N2_TABLE_OBJECT_ID;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_TABLE_RECREATE_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_FINAL_MOVIE_HASH;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_HAVE_CRAFT_WEAPON_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_HAVE_CRAFT_WEAPON_MATERIAL_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_HAVE_CRAFT_WEAPON_COUNT;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_REQUEST_HAVE_CRAFT_WEAPON_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_CATCH_OBJECT_ID;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_DISABLE_CRAFT_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_LANDING_HIGH_PLACE_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_JUMP_MINI_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SITUATION_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_JUMP_COUNT_BACKUP;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_GRADE_1_TABLE_PROGRESS;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_WOOD_TABLE_PROGRESS;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_STONE_TABLE_PROGRESS;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021d37a0__71021d37a0.c)  [cfg](../decompiled/FUN_71021d37a0__71021d37a0.mmd)
- **Clone hash:** `4786da1208e21a78`

```c

void FUN_71021d37a0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_GRADE_1",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_WOOD",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_STONE",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_IRON",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_GOLD",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_RED_STONE",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_DIAMOND",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND",
                 (undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_FRAME",
// ... (1992 more lines)
```

## 10. `FUN_71037f8180`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** Final
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

## 11. `FUN_7100033a40`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** Final
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

## 12. `FUN_7101fc7f30`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fc7f30`  (offset `0x1fc7f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fc7f30(long param_1)`
- **Size / BBs / Incoming:** 8568 bytes / 4 bb / 2 incoming refs
- **Match values:** FINAL
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

## 13. `FUN_7101f89310`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** FINAL
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

## 14. `FUN_710218dcf0`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710218dcf0`  (offset `0x218dcf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710218dcf0(void)`
- **Size / BBs / Incoming:** 8048 bytes / 22 bb / 1 incoming refs
- **Match values:** FINAL
- **Strings touched:** FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_START;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_N2_NEAR_COUNT;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_N2_NEAR_FRAME;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_S_WARP_COUNT;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_S_EFFECT_ID;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_LW_LOG_ID;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_LW_DOLL_ID;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_LW_UNCONTROL_COUNT;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_ATTACK_AIR_LW_JUMP_COUNT;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_ATTACK_AIR_LW_BOUND_COUNTER;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_FINAL_HIT_NUM;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_TERM;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_START;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_N_FLASHING;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_N_FLASHING_EFFECT;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_N_HOP;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DISP_POS;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_START_HOLD;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_START_WARP;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_ATTACK_FRONT;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOLD_FRONT;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_DISABLE;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_WARP_AIR;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_WARP_GIMMICK;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_IS_DISABLE;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_SAVE_SPEED;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_BOUND;FIGHTER_ROSETTA_STATUS_SPECIAL_HI_START_INT_START;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_FINAL_ATTACK_HIT_LINK;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_PAUSE;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLOAT_START;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710218dcf0__710218dcf0.c)  [cfg](../decompiled/FUN_710218dcf0__710218dcf0.mmd)
- **Clone hash:** `29da6f66ef51cb26`

```c

void FUN_710218dcf0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_N2_NEAR_COUNT",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_N2_NEAR_FRAME",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_S_WARP_COUNT",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_S_EFFECT_ID",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_LW_LOG_ID",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_LW_DOLL_ID",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_SPECIAL_LW_UNCONTROL_COUNT",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_ATTACK_AIR_LW_JUMP_COUNT",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_ATTACK_AIR_LW_BOUND_COUNTER",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_FINAL_HIT_NUM",
                 (undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (877 more lines)
```

## 15. `FUN_7101c35b80`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c35b80`  (offset `0x1c35b80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c35b80(undefined1[16] param_1, undefined1[16] param_2, ulong param_3, long param_4, long * param_5, long * * * * * * * * * param_6, byte * * * * param_7, long * * * * param_8, ulong param_9, undefined8 param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 19320 bytes / 928 bb / 2 incoming refs
- **Match values:** final
- **Strings touched:** set_final_area;trophy_loop;final_p%d;final_p8;set_final_pos_p%d;progress_on;lookback_on;progress_off;in_win;pop_p1;trophy_on;set_rep_final_p%d;blank_p%d;inout_title_prog;progress_delay_in;set_txt_title_prog;mel_tournament_chart_round_title_semifinal;out_win;in_win_left;set_dummy;mel_tournament_chart_round_title_final;out_win_left;mode_empty_03;mel_tournament_chart_round_title;vc_narration_round%d;effect_off;figter_name_%d;nam_chr2_%02d_%s;fighter_name_%d;set_txt_fighter_%d;set_txt_player;mel_tournament_cp_n;...
- **Callers:** FUN_710187d820;FUN_710187ea70
- **Callees:** FUN_71003a4ca0;FUN_710175dfc0;FUN_7101c33d10;FUN_7101c340e0;FUN_7101c344f0;FUN_71022df110;FUN_710234dae0;FUN_710234dc20;FUN_7102351c30;FUN_71023583c0;FUN_71023583d0;FUN_71023583e0;FUN_71024076d0;FUN_7103238a70;FUN_710323c4e0;FUN_710323cb80;...
- **Files:** [decomp](../decompiled/FUN_7101c35b80__7101c35b80.c)  [cfg](../decompiled/FUN_7101c35b80__7101c35b80.mmd)
- **Clone hash:** `a9fb3376f25e3790`

```c

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffffffffee50 */

void FUN_7101c35b80(undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4,
                   long *param_5,long *********param_6,byte ****param_7,long ****param_8,
                   ulong param_9,undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  long *plVar2;
  byte ***pppbVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte bVar15;
  byte **ppbVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  long *plVar20;
  undefined1 *puVar21;
  ushort *puVar22;
  long *plVar23;
  long ***ppplVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
// ... (3708 more lines)
```

## 16. `FUN_710226f500`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226f500`  (offset `0x226f500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226f500(long param_1)`
- **Size / BBs / Incoming:** 23732 bytes / 622 bb / 1 incoming refs
- **Match values:** final
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

## 17. `FUN_710218bb20`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710218bb20`  (offset `0x218bb20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710218bb20(void)`
- **Size / BBs / Incoming:** 7184 bytes / 13 bb / 1 incoming refs
- **Match values:** FINAL
- **Strings touched:** FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_CURRENT_POINT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_REVIVAL_COUNT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_CURRENT_POINT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_REVIVAL_COUNT;FIGHTER_ROSETTA_STATUS_SPECIAL_HI_START_INT_START;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_HI_CURRENT_POINT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_HI_REVIVAL_COUNT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_SWORD_CURRENT_POINT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_SWORD_REVIVAL_COUNT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_S_REVIVAL_COUNT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_LAST_USED_MAGIC_KIND;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THROWAWAY_TABLE;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_TEMP_MAGIC_KIND;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_RECOVER_TABLE;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_RECOVER_NOTIFY_TABLE;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SWORD_START_MAT_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SWORD_END_MAT_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SWORD_CURRENT_MAT_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_HUD_MAGIC_KIND;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SWORD_RESURRECTION_VALID_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_RESURRECTION_VALID_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_GIGAFIRE_RESURRECTION_VALID_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_ELWIND_RESURRECTION_VALID_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_RISIRE_RESURRECTION_VALID_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_FINAL_HIT_NUM;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_START_STATUS_KIND;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_BOOK_START_MAT_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_BOOK_END_MAT_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_BOOK_CURRENT_MAT_FRAME;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710218bb20__710218bb20.c)  [cfg](../decompiled/FUN_710218bb20__710218bb20.mmd)
- **Clone hash:** `9e88747a4b92d20b`

```c

void FUN_710218bb20(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_CURRENT_POINT",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_REVIVAL_COUNT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_CURRENT_POINT",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_REVIVAL_COUNT",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_HI_CURRENT_POINT",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_HI_REVIVAL_COUNT",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_SWORD_CURRENT_POINT"
                 ,(undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_SWORD_REVIVAL_COUNT"
                 ,(undefined **)0x100000c7,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_S_REVIVAL_COUNT",
                 (undefined **)0x100000c8,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (785 more lines)
```

## 18. `FUN_71021539b0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021539b0`  (offset `0x21539b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021539b0(void)`
- **Size / BBs / Incoming:** 6144 bytes / 7 bb / 1 incoming refs
- **Match values:** FINAL
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

## 19. `FUN_71021c4020`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021c4020`  (offset `0x21c4020`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021c4020(void)`
- **Size / BBs / Incoming:** 14396 bytes / 28 bb / 1 incoming refs
- **Match values:** FINAL
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

## 20. `FUN_710225b990`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** FINAL
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

## 21. `FUN_71021d99a0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021d99a0`  (offset `0x21d99a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021d99a0(void)`
- **Size / BBs / Incoming:** 7688 bytes / 13 bb / 1 incoming refs
- **Match values:** FINAL
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

## 22. `FUN_71021677c0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021677c0`  (offset `0x21677c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021677c0(void)`
- **Size / BBs / Incoming:** 5720 bytes / 1 bb / 1 incoming refs
- **Match values:** FINAL
- **Strings touched:** FIGHTER_PIT_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE;FIGHTER_PIT_INSTANCE_WORK_ID_INT_SPECIAL_LW_SE_HANDLE;FIGHTER_PIT_INSTANCE_WORK_ID_INT_REFLECTOR_GROUP;FIGHTER_PIT_INSTANCE_WORK_ID_INT_SPECIAL_S_REFLECTOR_STOP_FRAME;FIGHTER_PIT_INSTANCE_WORK_ID_INT_SPECIAL_LW_NO_SHIELD_FRAME;FIGHTER_PIT_INSTANCE_WORK_ID_INT_TERM;FIGHTER_PIT_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_REFLECTOR;FIGHTER_PIT_INSTANCE_WORK_ID_FLAG_REFLECTOR_BREAK;FIGHTER_PIT_INSTANCE_WORK_ID_FLAG_HAVE_GENESISSET;FIGHTER_PIT_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_PIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_SHIELD;FIGHTER_PIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_SHIELD_DAMAGE;FIGHTER_PIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_SHIELD_LR;FIGHTER_PIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_SHIELD_HIT_STOP_FRAME;FIGHTER_PIT_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_PIT_SHIELD_KIND_SPECIAL_LW_SHIELD;FIGHTER_PIT_SHIELD_GROUP_KIND_START;FIGHTER_PIT_SHIELD_GROUP_KIND_SPECIAL_LW;FIGHTER_PIT_SHIELD_GROUP_KIND_TERM;FIGHTER_PIT_KINETIC_ENERGY_ID_START;FIGHTER_PIT_KINETIC_ENERGY_ID_TERM;FIGHTER_KINETIC_TYPE_PIT_START;FIGHTER_KINETIC_TYPE_PIT_SPECIAL_AIR_N;FIGHTER_KINETIC_TYPE_PIT_SPECIAL_S_END;FIGHTER_KINETIC_TYPE_PIT_TERM;FIGHTER_PIT_STATUS_SPECIAL_N_FLAG_START;FIGHTER_PIT_STATUS_SPECIAL_N_FLAG_FIRST;FIGHTER_PIT_STATUS_SPECIAL_N_FLAG_DIR_S;FIGHTER_PIT_STATUS_SPECIAL_N_INT_START;FIGHTER_PIT_STATUS_SPECIAL_N_INT_CHARGE;FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_FLAG_START;FIGHTER_PIT_STATUS_SPECIAL_N_CHARGE_FLAG_FIRST;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0
- **Files:** [decomp](../decompiled/FUN_71021677c0__71021677c0.c)  [cfg](../decompiled/FUN_71021677c0__71021677c0.mmd)
- **Clone hash:** `773b6349f0347f96`

```c

void FUN_71021677c0(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78 [2];
  undefined4 local_68;
  
  local_78[0] = 0;
  local_78[1] = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(local_78,(uint *)"FIGHTER_PIT_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(local_78,(uint *)"FIGHTER_PIT_INSTANCE_WORK_ID_INT_SPECIAL_LW_SE_HANDLE",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(local_78,(uint *)"FIGHTER_PIT_INSTANCE_WORK_ID_INT_REFLECTOR_GROUP",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(local_78,(uint *)"FIGHTER_PIT_INSTANCE_WORK_ID_INT_SPECIAL_S_REFLECTOR_STOP_FRAME",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(local_78,(uint *)"FIGHTER_PIT_INSTANCE_WORK_ID_INT_SPECIAL_LW_NO_SHIELD_FRAME",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(local_78,(uint *)"FIGHTER_PIT_INSTANCE_WORK_ID_INT_TERM",(undefined **)0x100000c2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_68 = 0xfffffffd;
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_71037289c0(local_78,(uint *)"FIGHTER_PIT_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_REFLECTOR",
                 (undefined **)0x200000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(local_78,(uint *)"FIGHTER_PIT_INSTANCE_WORK_ID_FLAG_REFLECTOR_BREAK",
                 (undefined **)0x200000e1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(local_78,(uint *)"FIGHTER_PIT_INSTANCE_WORK_ID_FLAG_HAVE_GENESISSET",
                 (undefined **)0x200000e2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(local_78,(uint *)"FIGHTER_PIT_INSTANCE_WORK_ID_FLAG_TERM",(undefined **)0x200000e3,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_68 = 0xfffffffd;
  local_78[0] = 0;
// ... (611 more lines)
```

## 23. `FUN_7102219310`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102219310`  (offset `0x2219310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102219310(long param_1)`
- **Size / BBs / Incoming:** 10116 bytes / 52 bb / 2 incoming refs
- **Match values:** final
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

## 24. `FUN_71021eed40`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021eed40`  (offset `0x21eed40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021eed40(void)`
- **Size / BBs / Incoming:** 5784 bytes / 10 bb / 1 incoming refs
- **Match values:** FINAL
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

## 25. `FUN_71021baae0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021baae0`  (offset `0x21baae0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021baae0(void)`
- **Size / BBs / Incoming:** 8400 bytes / 19 bb / 1 incoming refs
- **Match values:** FINAL
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

## 26. `FUN_71035a46e0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71035a46e0`  (offset `0x35a46e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71035a46e0(long param_1, byte * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 * param_7, ulong param_8)`
- **Size / BBs / Incoming:** 32256 bytes / 936 bb / 1 incoming refs
- **Match values:** final;FINAL;Final
- **Strings touched:** N2nn3pia3lan25LanMatchDestroySessionJobE;RenderPipeline;RESOLVE_SNAPSHOT_FILTERED;NODE_POST_EFFECT;snapshot_filter_VS;snapshot_filter_PS;dys_yoga03_l_03_set;snapshot_layer_default_VS;snapshot_layer_hatched_shadow_PS;UI_FG0;snapshot_layer_cinema_scope_VS;snapshot_layer_cinema_scope_PS;plate_side;snapshot_layer_iris_blur_VS;snapshot_layer_iris_blur_PS;snapshot_layer_default_PS;RenderPassSubstance;FinalSubstance;CELLOPHANE_EFFECT_PARAM;FINAL;MAIN_CLEAR_COLOR;3d_final_VS
- **Callers:** FUN_7103741f40
- **Callees:** FUN_71000001c0;FUN_710003a240;FUN_71002c51f0;FUN_71003cb050;FUN_71035404b0;FUN_7103540b10;FUN_7103550630;FUN_7103553af0;FUN_71035542c0;FUN_7103554e50;FUN_7103554ff0;FUN_7103556f50;FUN_7103569d80;FUN_710356a030;FUN_710356b9a0;FUN_71035746d0;...
- **Files:** [decomp](../decompiled/FUN_71035a46e0__71035a46e0.c)  [cfg](../decompiled/FUN_71035a46e0__71035a46e0.mmd)
- **Clone hash:** `11c7391148104d66`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71035a46e0(long param_1,byte *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   ulong param_6,undefined8 *param_7,ulong param_8)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  undefined7 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  void *pvVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined6 uVar17;
  int iVar18;
  long ***ppplVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong *puVar28;
  long *plVar29;
  undefined2 *puVar30;
  long *****ppppplVar31;
  long ********pppppppplVar32;
// ... (6166 more lines)
```

## 27. `FUN_710215e3b0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710215e3b0`  (offset `0x215e3b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710215e3b0(void)`
- **Size / BBs / Incoming:** 7016 bytes / 10 bb / 1 incoming refs
- **Match values:** FINAL
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

## 28. `FUN_7101f7c910`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f7c910`  (offset `0x1f7c910`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f7c910(long param_1)`
- **Size / BBs / Incoming:** 9552 bytes / 4 bb / 1 incoming refs
- **Match values:** final
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

## 29. `FUN_710214fdf0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710214fdf0`  (offset `0x214fdf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710214fdf0(void)`
- **Size / BBs / Incoming:** 7560 bytes / 13 bb / 1 incoming refs
- **Match values:** FINAL
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

## 30. `FUN_71020c9380`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020c9380`  (offset `0x20c9380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020c9380(long param_1)`
- **Size / BBs / Incoming:** 2520 bytes / 4 bb / 2 incoming refs
- **Match values:** final
- **Strings touched:** FighterUtil;set_damage_fly_angle;get_ground_correct_kind_air_trans;get_stick_x_rate;TRANS_A_JUMP_AERIAL;get_stick_y_rate;is_hammer_status;is_hammer_motion;tread_remove_constraint;get_air_ground_touch_info;set_cloud_through_check;check_cloud_through_out;set_ice_effect;set_ice_exit_effect;set_water_dive_effect;calc_water_surface_pos;get_water_area_info;get_team_color;is_miienemy_fighter_kind;adjust_butterflynet;end_butterflynet;gauge_parts_on;adjust_bitten_wario;get_bezier_pos;get_shield_type_of_guard;init_big_small;exec_big_small;exit_big_small;set_hit_data;reset_hit_data;get_effect_team_color;get_handi;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020c9380__71020c9380.c)  [cfg](../decompiled/FUN_71020c9380__71020c9380.mmd)
- **Clone hash:** `9a52585cec2ad2b0`

```c

void FUN_71020c9380(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterUtil",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_damage_fly_angle",(long ****)FUN_71020bcdc0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_ground_correct_kind_air_trans",(long ****)FUN_71020bd260,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_stick_x_rate",(long ****)FUN_71020bd400,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_stick_y_rate",(long ****)FUN_71020bd6a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hammer_status",(long ****)FUN_71020bd940,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hammer_motion",(long ****)FUN_71020bda00,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"tread_remove_constraint",(long ****)FUN_71020bdb00,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_air_ground_touch_info",(long ****)FUN_71020bdca0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_cloud_through_check",(long ****)FUN_71020be0d0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"check_cloud_through_out",(long ****)FUN_71020be220,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_ice_effect",(long ****)FUN_71020be310,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_ice_exit_effect",(long ****)FUN_71020be520,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_water_dive_effect",(long ****)FUN_71020be700,ppppbVar1,in_x4
// ... (185 more lines)
```

## 31. `FUN_7101d07780`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d07780`  (offset `0x1d07780`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d07780(long param_1, uint param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3468 bytes / 213 bb / 6 incoming refs
- **Match values:** final
- **Strings touched:** set_rep_player_%d;set_rep_finalimg_%d;set_txt_name_%d;player_fp;set_txt_tnmt_progress;mel_tournament_chart_round_final;mel_tournament_chart_round_title_semifinal;mode_empty_03;mel_tournament_chart_round_title;entry_on
- **Callers:** FUN_71018b67d0;FUN_71018bac70;FUN_7101d03110;FUN_7101d0b220;FUN_7101d0ba20
- **Callees:** FUN_71000001c0;FUN_7101d08510;FUN_7101d08850;FUN_7101d08bf0;FUN_7101d0d9c0;FUN_7101d0e590;FUN_71023976c0;FUN_7102398db0;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;...
- **Files:** [decomp](../decompiled/FUN_7101d07780__7101d07780.c)  [cfg](../decompiled/FUN_7101d07780__7101d07780.mmd)
- **Clone hash:** `772ebf71f72c4c2f`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101d07780(long param_1,uint param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ******pppppplVar1;
  long ******pppppplVar2;
  long ******pppppplVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  long *********ppppppppplVar11;
  byte ****ppppbVar12;
  uint uVar13;
  long lVar14;
  long *******ppppppplVar15;
  long *plVar16;
  long *******ppppppplVar17;
  long *****ppppplVar18;
  long **pplVar19;
  long ********pppppppplVar20;
  long ********pppppppplVar21;
  long ***ppplVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  long ********pppppppplVar26;
  ulong uVar27;
  long ********pppppppplVar28;
  long local_110;
  long *plStack_108;
  long ********local_100;
  long ********local_f8;
  long ********local_e8;
// ... (724 more lines)
```

## 32. `FUN_7101c3a700`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c3a700`  (offset `0x1c3a700`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c3a700(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2000 bytes / 127 bb / 1 incoming refs
- **Match values:** final
- **Strings touched:** set_parts_title;set_txt_rule;mel_tournament_chart_rule;set_txt_tnmt_progress;mel_tournament_chart_round_final;mel_tournament_chart_final_result;mel_tournament_chart_round;mel_tournament_chart_round_semifinal;set_parts_header
- **Callees:** FUN_7101af86a0;FUN_7101c321b0;FUN_7101c34420;FUN_7101eefe30;FUN_7103771be0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_71037a28a0;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101c3a700__7101c3a700.c)  [cfg](../decompiled/FUN_7101c3a700__7101c3a700.mmd)
- **Clone hash:** `930a5f95f708e973`

```c

void FUN_7101c3a700(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  byte bVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  code *pcVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  undefined4 uVar21;
  undefined **local_70;
  long *local_68;
  undefined **local_60;
  ulong local_58;
  
  lVar14 = DAT_7105329060;
  lVar20 = *(long *)(param_1 + 0x80);
  if (*(uint *)(lVar20 + 0x2018) < *(uint *)(*(long *)(DAT_7105329060 + 8) + 4)) {
    lVar10 = *(long *)(DAT_7105329060 + 8) + (ulong)*(uint *)(lVar20 + 0x2018) * 0x18;
    uVar5 = *(uint *)(lVar20 + 0x201c);
    lVar17 = *(long *)(lVar10 + 8);
    uVar18 = *(long *)(lVar10 + 0x10) - lVar17;
    if ((uint)(uVar18 >> 4) <= uVar5) goto LAB_7101c3a794;
    if ((ulong)((long)uVar18 >> 4) <= (ulong)uVar5) goto LAB_7101c3aec8;
// ... (352 more lines)
```

## 33. `FUN_7103959290`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103959290`  (offset `0x3959290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103959290(int * param_1)`
- **Size / BBs / Incoming:** 5888 bytes / 323 bb / 1 incoming refs
- **Match values:** final
- **Strings touched:** version;<jemalloc>: Failure in xmallctl("%s", ...)
;Version;config;Build-time option settings;config.cache_oblivious;cache_oblivious;config.debug;debug;config.fill;config.lazy_lock;lazy_lock;malloc_conf;config.malloc_conf;NODE_PRE_REFRACT_BLEND;config.prof;config.prof_libgcc;prof_libgcc;config.prof_libunwind;prof_libunwind;config.stats;stats;config.utrace;utrace;config.xmalloc;xmalloc;Run-time option settings;opt.abort;abort;opt.abort_conf;abort_conf;opt.retain;...
- **Callers:** FUN_7103958eb0
- **Callees:** FUN_710392ec40;FUN_710392ecf0;FUN_710392ed90;FUN_71039545b0;FUN_7103957550;FUN_7103959240;FUN_710395a990;FUN_710395ab20;FUN_710395ac50;FUN_710395aca0;FUN_710395ad30;FUN_710395ae40;FUN_710395aea0;FUN_710395af00;FUN_710395af50;FUN_710395afc0;...
- **Files:** [decomp](../decompiled/FUN_7103959290__7103959290.c)  [cfg](../decompiled/FUN_7103959290__7103959290.mmd)
- **Clone hash:** `75bb6240942dc29a`

```c

void FUN_7103959290(int *param_1)

{
  int iVar1;
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
  long ****pppplVar2;
  char *pcVar3;
  long ****pppplVar4;
  undefined8 uVar5;
  byte ****ppppbVar6;
  undefined8 uVar7;
  uint *puVar8;
  char *in_x5;
  undefined8 in_x6;
  uint *in_x7;
  byte ***local_260;
  long ***local_258;
  undefined1 auStack_250 [16];
  ulong local_240;
  uint local_214;
  long ***local_210;
  undefined1 local_204 [4];
  byte ***local_200;
  long ***local_1f8;
  undefined1 auStack_1f0 [16];
  ulong local_1e0;
  byte ***local_1b8;
  long ***local_1b0;
  undefined1 auStack_1a8 [16];
// ... (616 more lines)
```

## 34. `FUN_710219ad10`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710219ad10`  (offset `0x219ad10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710219ad10(void)`
- **Size / BBs / Incoming:** 11776 bytes / 28 bb / 1 incoming refs
- **Match values:** FINAL
- **Strings touched:** FIGHTER_BAYONETTA_COSTUME_KIND_DEFAULT;FIGHTER_BAYONETTA_COSTUME_KIND_JEANNE;FIGHTER_BAYONETTA_COSTUME_KIND_BAYONETTA_1;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_START;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_USED_COUNT;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_REUSE_FRAME;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_D_ENABLE_FRAME;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_DISABLE_JUMP_AFTER_FRAME;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_HI_USED_COUNT;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_FINAL_STEP;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_FINAL_TIME_LIMIT;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_FINAL_GAUGE_COUNT;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_FINAL_SE_HANDLE_FINAL02;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_BAT_WITH_IN_STATE;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_WITCH_TIME_XLU_FRAME;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SHOOTING_STEP;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SHOOTING_FRAME;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_LINE1;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_LINE2;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_ARC1;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_ARC2;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_ARC3;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_100A;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_100B;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_100END;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_STILETTO;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_AFTERBURNER_LINE;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_WITCHTWIST_WIND;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_WITCHTWIST_SPIRAL;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_11;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_12;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_13;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710219ad10__710219ad10.c)  [cfg](../decompiled/FUN_710219ad10__710219ad10.mmd)
- **Clone hash:** `c3eab079c8448a2c`

```c

void FUN_710219ad10(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BAYONETTA_COSTUME_KIND_DEFAULT",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BAYONETTA_COSTUME_KIND_JEANNE",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BAYONETTA_COSTUME_KIND_BAYONETTA_1",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = -3;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_USED_COUNT"
                 ,(undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_REUSE_FRAME",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_D_ENABLE_FRAME",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)
                 "FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_DISABLE_JUMP_AFTER_FRAME",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_HI_USED_COUNT",
// ... (1361 more lines)
```

## 35. `FUN_7101d05660`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d05660`  (offset `0x1d05660`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d05660(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1072 bytes / 48 bb / 1 incoming refs
- **Match values:** final
- **Strings touched:** inout_title_prog;progress_delay_in;set_txt_title_prog;mel_tournament_chart_round_title_final;mel_tournament_chart_round_title_semifinal;mode_empty_03;mel_tournament_chart_round_title;vc_narration_round%d
- **Callees:** FUN_71003a4ca0;FUN_71024076d0;FUN_7103313f20;FUN_71033145d0;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_71037964b0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101d05660__7101d05660.c)  [cfg](../decompiled/FUN_7101d05660__7101d05660.mmd)
- **Clone hash:** `24af244b58c9310b`

```c

void FUN_7101d05660(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  int *piVar9;
  uint uVar10;
  undefined ***pppuVar11;
  uint uVar13;
  long lVar14;
  undefined4 local_d8 [2];
  undefined **local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint local_98;
  uint local_94;
  undefined **local_90;
  long local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined **local_50;
  ulong local_48;
  undefined ***pppuVar12;
  
  if (*(int *)(param_1 + 0x2ac) != 0) goto LAB_7101d05a24;
// ... (137 more lines)
```

## 36. `FUN_7101b0bb20`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b0bb20`  (offset `0x1b0bb20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b0bb20(undefined8 * param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1116 bytes / 74 bb / 1 incoming refs
- **Match values:** final
- **Strings touched:** finalize
- **Callers:** FUN_7101b0bf80
- **Callees:** FUN_71032cbe10;FUN_7103377130;FUN_71033997f0;FUN_710339b480;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;FUN_710392eb40;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101b0bb20__7101b0bb20.c)  [cfg](../decompiled/FUN_7101b0bb20__7101b0bb20.mmd)
- **Clone hash:** `bf745d17b3428963`

```c

void FUN_7101b0bb20(undefined8 *param_1,undefined8 param_2,char *param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
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
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong *puVar17;
  
  plVar13 = (long *)param_1[8];
  *param_1 = &DAT_71050aa2e8;
  if (plVar13 != (long *)0x0) {
// ... (238 more lines)
```

## 37. `FUN_7101c3de80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c3de80`  (offset `0x1c3de80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c3de80(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3264 bytes / 144 bb / 1 incoming refs
- **Match values:** final
- **Strings touched:** 00_to_01;set_parts_btn2_%02d;set_pic_final_base;set_final_pos_p%d;type_number_%d
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101af53d0;FUN_7101af8900;FUN_7101af8c80;FUN_7101af8e90;FUN_7101af90b0;FUN_7101c3f510;FUN_7102350980;FUN_7102351c30;FUN_7103394f60;FUN_7103395260;FUN_7103771a80;FUN_7103776640;FUN_7103776910;FUN_71037780e0;...
- **Files:** [decomp](../decompiled/FUN_7101c3de80__7101c3de80.c)  [cfg](../decompiled/FUN_7101c3de80__7101c3de80.mmd)
- **Clone hash:** `92318ca149ef601a`

```c

void FUN_7101c3de80(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  void *__src;
  long ****pppplVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  void *pvVar10;
  long ****pppplVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long ***ppplVar14;
  long **pplVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  uint *puVar22;
  int *piVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  ulong uVar27;
  long *plVar28;
  void *__dest;
  long ****__n;
  long ****pppplVar29;
  size_t sVar30;
  void *pvVar31;
  float fVar32;
// ... (637 more lines)
```

## 38. `FUN_7101a1f7d0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1f7d0`  (offset `0x1a1f7d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1f7d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 604 bytes / 31 bb / 9 incoming refs
- **Match values:** final
- **Strings touched:** set_txt_all_gamenum_00;set_txt_all_gamenum_01;mel_chara_select_allbattle_match_final;mel_chara_select_allbattle_remaining
- **Callers:** FUN_710183be60;FUN_7101a12f60;FUN_7101a20200;FUN_7101a26b10;FUN_7101a2b570;FUN_7101a30bb0;FUN_7101a31020
- **Callees:** FUN_71019f0fb0;FUN_71019f1fa0;FUN_7101a0dd00;FUN_7101a19990;FUN_7103776910;FUN_710377a120;FUN_710377a280;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101a1f7d0__7101a1f7d0.c)  [cfg](../decompiled/FUN_7101a1f7d0__7101a1f7d0.mmd)
- **Clone hash:** `60e4e7aefbc66bf2`

```c

void FUN_7101a1f7d0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  iVar6 = *(int *)(param_1 + 0x16c);
  if (iVar6 != 5) goto LAB_7101a1f954;
  if (*(int *)(param_1 + 0x160) < 1) {
    iVar6 = 0;
    iVar5 = *(int *)(param_1 + 0xcb8);
    if (iVar5 == 0) goto LAB_7101a1f868;
LAB_7101a1f850:
    uVar9 = *(int *)(param_1 + 0x2b4) - iVar5;
  }
  else {
    uVar7 = 0;
    iVar6 = 0;
    plVar8 = (long *)(*(long *)(param_1 + 0x250) + 8);
    do {
      if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar7 = uVar7 + 1;
      if (*(int *)(*plVar8 + 0x1f8) != 3) {
        iVar6 = iVar6 + 1;
// ... (84 more lines)
```

## 39. `FUN_7101b08680`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b08680`  (offset `0x1b08680`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b08680(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 992 bytes / 45 bb / 1 incoming refs
- **Match values:** final
- **Strings touched:** finalize;btn_next_hide;btn_help_hide
- **Callees:** FUN_71032e5bf0;FUN_7103313da0;FUN_7103377130;FUN_7103775fa0;FUN_71037760f0;FUN_7103778300;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101b08680__7101b08680.c)  [cfg](../decompiled/FUN_7101b08680__7101b08680.mmd)
- **Clone hash:** `3ff80710b64b936f`

```c

void FUN_7101b08680(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_80;
  undefined4 local_78;
  ulong local_74;
  
  if (*(int *)(param_1 + 0x264) == 0) {
    if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
LAB_7101b08a58:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_71037760f0(*(long *)**(undefined8 **)**(undefined8 **)(param_1 + 0x10),0);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3d8),0x710439cfa5);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3d8),0x71043dfcdf);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3d8),0x710428ff7d);
// ... (114 more lines)
```

## 40. `FUN_7103612e50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103612e50`  (offset `0x3612e50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7103612e50(void)`
- **Size / BBs / Incoming:** 23636 bytes / 881 bb / 1 incoming refs
- **Match values:** Final
- **Strings touched:** MAIN_CLEAR_COLOR;per_frame;light_entry;light_area;chara/chara_4/chara_4_;per_pass;COLOR_CORRECTION;UI_FG_3D;RepParameter;nu::Debug2D;select_item;nu::Final;N2nn3pia3lan25LanMatchDestroySessionJobE;MIRROR_BLEND_EFFECT_MERGE;PassMainMotionBlur0;BLEND_BG_MERGE;BLEND4_MERGE;BLEND_EFFECT_GLR_MERGE;plate_side;GL_PS_NM_MERGE;BLEND16_RESOLVE;MB_PassTmp0;MB_PassTmp1;PassMainMotionBlur1;MO_PS_SUB_MERGE_0;BLEND_MERGE;SILHOUETTE_FAR_DRAW_QUAD;INVINCIBLE_PARTS_MODEL;RESOLVE_COLOR;MAIN_CLEAR_DEPTH;3D_OFFSCREEN;3D_0_OPAQUE;...
- **Callers:** FUN_71035a46e0
- **Callees:** FUN_71000001c0;nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance;FUN_71035404b0;FUN_7103540b10;FUN_71035465b0;FUN_710354d9b0;FUN_710354ea90;FUN_71035504c0;FUN_7103553740;FUN_7103553af0;FUN_71035542c0;FUN_7103554e50;FUN_7103554ff0;FUN_71035585c0;FUN_71035add90;FUN_710360f510;...
- **Files:** [cfg](../decompiled/FUN_7103612e50__7103612e50.mmd)


## 41. `FUN_7101c3eea0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c3eea0`  (offset `0x1c3eea0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c3eea0(long param_1, undefined8 param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1636 bytes / 75 bb / 3 incoming refs
- **Match values:** final
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

## 42. `FUN_7101ff53b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ff53b0`  (offset `0x1ff53b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ff53b0(long param_1)`
- **Size / BBs / Incoming:** 1056 bytes / 4 bb / 2 incoming refs
- **Match values:** final
- **Strings touched:** CameraModule;reset_all;update_force;set_enable_camera;set_whole;set_enable_update_pos;set_enable_interpolate_pos;reset_camera_range;set_camera_range_offset;add_camera_range_offset;add_camera_range_rect;un_regist_camera;zoom_in;zoom_out;set_status;set_priority;get_priority;set_player_no;get_player_no;set_damage_fly;exit_damage_fly;set_run;exit_run;set_being_carried;exit_being_carried;is_clip_in;is_clip_in_all;set_camera_range_global_rect;get_main_camera_target_pos;get_main_camera_range;get_internal_camera_target_pos;get_camera_type;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101ff53b0__7101ff53b0.c)  [cfg](../decompiled/FUN_7101ff53b0__7101ff53b0.mmd)
- **Clone hash:** `51a3421dd3f992ba`

```c

void FUN_7101ff53b0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"CameraModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"reset_all",(long ****)FUN_7101ff0b30,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"update_force",(long ****)FUN_7101ff0be0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_enable_camera",(long ****)FUN_7101ff1160,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_whole",(long ****)FUN_7101ff1330,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_enable_update_pos",(long ****)FUN_7101ff14a0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_enable_interpolate_pos",(long ****)FUN_7101ff1600,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"reset_camera_range",(long ****)FUN_7101ff17d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_camera_range_offset",(long ****)FUN_7101ff1900,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_camera_range_offset",(long ****)FUN_7101ff1c50,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_camera_range_rect",(long ****)FUN_7101ff1fa0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"un_regist_camera",(long ****)FUN_7101ff2690,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"zoom_in",(long ****)FUN_7101ff27c0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"zoom_out",(long ****)FUN_7101ff2c50,ppppbVar1,in_x4,in_x5,in_x6,
// ... (63 more lines)
```

## 43. `FUN_7101c3fbe0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c3fbe0`  (offset `0x1c3fbe0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c3fbe0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2940 bytes / 121 bb / 1 incoming refs
- **Match values:** final
- **Strings touched:** set_pic_final_base;hidden;set_final_pos_p%d;set_current_table;set_pic_panel;missed;participate;size_h1;size_h2
- **Callees:** FUN_7101c3f510;FUN_710234d8a0;FUN_7102350980;FUN_7102351c30;FUN_7102356460;FUN_7103776910;FUN_7103778300;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101c3fbe0__7101c3fbe0.c)  [cfg](../decompiled/FUN_7101c3fbe0__7101c3fbe0.mmd)
- **Clone hash:** `80b891e07ed815c1`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c3fbe0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long *plVar2;
  byte *pbVar3;
  undefined **ppuVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  undefined8 local_b8;
// ... (482 more lines)
```

## 44. `FUN_7101e88540`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e88540`  (offset `0x1e88540`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e88540(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3564 bytes / 202 bb / 2 incoming refs
- **Match values:** final
- **Strings touched:** fadeout_white;fade_white;fadeout_black;fade_black;battle_spirits_in;vs_spirits;battle_fighter_in;vs_fighter;battle_boss_in;vs_boss;battle_kiila_in ;mode_empty_03;vs_kiila ;battle_darz_in;vs_darz;battle_final_in;vs_final;facility_common_in;facility_cmn;map_main_in;map_sub_in
- **Callers:** FUN_71024dd520;FUN_71024e6d20
- **Callees:** FUN_7101e85dc0;FUN_71024d1440;FUN_7103775dc0;FUN_7103776910;FUN_71037780e0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101e88540__7101e88540.c)  [cfg](../decompiled/FUN_7101e88540__7101e88540.mmd)
- **Clone hash:** `cbe46c22ff93be84`

```c

void FUN_7101e88540(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  undefined **local_80;
  undefined **local_78;
  long local_70;
  int local_68;
  undefined1 local_60;
  
  if (*(int *)(param_1 + 0x9c) != 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x110);
  uVar4 = SUB84(param_3,0);
  FUN_7101e85dc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(param_1 + 0x98) = 2;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  switch(uVar4) {
  case 2:
    FUN_71037780e0(&local_80,**(long **)(param_1 + 8) + 8,(long ****)"fadeout_white",param_3,param_4
                   ,param_5,param_6,param_7,param_8);
    ppuVar5 = local_78;
    if ((undefined ***)(param_1 + 0x20) != &local_80) {
      local_78 = (undefined **)0x0;
      uVar6 = *(ulong *)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuVar5;
// ... (570 more lines)
```

## 45. `FUN_710041f880`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710041f880`  (offset `0x41f880`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710041f880(void)`
- **Size / BBs / Incoming:** 3608 bytes / 142 bb / 1 incoming refs
- **Match values:** Final
- **Strings touched:** BootSequenceScene;MenuSequenceScene;OptionSequenceScene;HelpSequenceScene;IngameCallSequenceScene;UnlockSequenceScene;LocalSequenceScene;MeleeNormalSequenceScene;MeleeAllBattleSequenceScene;MeleeTeamCompeSequenceScene;MeleeTournamentSequenceScene;SpiritsBoardSequenceScene;SpiritsCampaignSequenceScene;SpiritsCampaignFinalStageSequenceScene;SpiritsBoardSpecialSequenceScene;SpiritsOrganizationSequenceScene;StandardSequenceScene;TrainingSequenceScene;KumiteSequenceScene;HomeRunContestSequenceScene;CharaMakeSequenceScene;AmiiboSequenceScene;ChallengerRoomSequenceScene;OnlineMeleeAnySequenceScene;OnlineMeleeParallelSequenceScene;OnlineMeleeRoomSequenceScene;OnlineWatchSequenceScene;SoundTestSequenceScene;CollectionTipsSequenceScene;CollectionShopSequenceScene;CollectionFighterSequenceScene;CollectionCountSequenceScene;...
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_710041f880__710041f880.c)  [cfg](../decompiled/FUN_710041f880__710041f880.mmd)
- **Clone hash:** `d251c6a5b4e743fa`

```c

void FUN_710041f880(void)

{
  int iVar1;
  
  DAT_7105327cd8 = 0;
  DAT_7105327ce0 = "BootSequenceScene";
  if (((DAT_7105327fe0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105327fe0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105327fe0);
  }
  DAT_7105327ce8 = &PTR_PTR_71050b5910;
  DAT_7105327cf0 = "MenuSequenceScene";
  if (((DAT_7105327fe8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105327fe8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105327fe8);
  }
  DAT_7105327cf8 = &PTR_PTR_71050b5918;
  DAT_7105327d00 = "OptionSequenceScene";
  if (((DAT_7105327ff0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105327ff0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105327ff0);
  }
  DAT_7105327d08 = &PTR_PTR_71050b5920;
  DAT_7105327d10 = "HelpSequenceScene";
  if (((DAT_7105327ff8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105327ff8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105327ff8);
  }
  DAT_7105327d18 = &PTR_PTR_71050b5928;
  DAT_7105327d20 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105327d28 = &PTR_PTR_7104f76410;
  DAT_7105327d30 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_7105327d38 = &PTR_PTR_71050b5930;
  DAT_7105327d40 = "LocalSequenceScene";
  if (((DAT_7105328008 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328008), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328008);
// ... (207 more lines)
```

## 46. `FUN_71038c6a10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038c6a10`  (offset `0x38c6a10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71038c6a10(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, ulong param_7, undefined8 * param_8)`
- **Size / BBs / Incoming:** 22068 bytes / 1181 bb / 1 incoming refs
- **Match values:** Final
- **Strings touched:** SystemLambert;select_item;nu::Final;SystemLambertVS;SystemLambertPS;DiffuseMap;DiffuseSampler;BlendState0;Layer0UVTransform;RasterizerState0;SystemLambertTexture2DArray;SystemLambertTexture2DArrayPS;DiffuseMapArray;textureIndex;SystemLambertNonTexture;SystemLambertNonTextureVS;SystemLambertNonTexturePS;NODE_PRE_REFRACT_BLEND;SystemConstant;SystemConstantVS;SystemConstantPS;SystemConstantNonTexture
- **Callers:** FUN_71038b7390
- **Callees:** FUN_71037b2bc0;FUN_71037c3a70;FUN_71037cfe00;FUN_710385a990;FUN_71038b3640;FUN_71038b3960;FUN_71038b4c00;FUN_71038b5080;FUN_71038b51b0;FUN_71038b64a0;FUN_71038b69b0;FUN_71038cc050;FUN_71038cc2b0;FUN_710392e1f0;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_71038c6a10__71038c6a10.c)  [cfg](../decompiled/FUN_71038c6a10__71038c6a10.mmd)
- **Clone hash:** `83e1faf16187f532`

```c

/* WARNING: Removing unreachable block (ram,0x0071038c874c) */
/* WARNING: Removing unreachable block (ram,0x0071038c9cf4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_71038c6a10(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,byte ****param_6,ulong param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
// ... (4703 more lines)
```

## 47. `FUN_7103642880`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103642880`  (offset `0x3642880`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103642880(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, ulong param_8)`
- **Size / BBs / Incoming:** 2144 bytes / 135 bb / 1 incoming refs
- **Match values:** final
- **Strings touched:** 3d_final_VS
- **Callees:** FUN_71000001c0;FUN_71035b68c0;FUN_71035b6c50;FUN_71035b6df0;FUN_71035b71d0;FUN_710363dd00;FUN_71036423c0;FUN_710364f4b0;FUN_710392e1f0;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::nu::VirtualFreeHook;<EXTERNAL>::nu::VirtualAllocHook;...
- **Files:** [decomp](../decompiled/FUN_7103642880__7103642880.c)  [cfg](../decompiled/FUN_7103642880__7103642880.mmd)
- **Clone hash:** `74f303ed02a0f855`

```c

void FUN_7103642880(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,ulong param_7,ulong param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  int *piVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  void *__src;
  long ****pppplVar17;
  long ****local_98;
  ulong local_90;
  long *local_88;
  long local_80;
  byte local_78;
  undefined7 uStack_77;
  ulong local_70;
  void *local_68;
  ulong local_60;
  ulong local_58;
// ... (328 more lines)
```

## 48. `FUN_71021e8010`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021e8010`  (offset `0x21e8010`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021e8010(void)`
- **Size / BBs / Incoming:** 10856 bytes / 4 bb / 1 incoming refs
- **Match values:** FINAL
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

## 49. `FUN_71036e3d80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71036e3d80`  (offset `0x36e3d80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71036e3d80(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, char * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4396 bytes / 346 bb / 1 incoming refs
- **Match values:** FINAL
- **Strings touched:** MOVIE_PREPARE_FINALIZING;MOVIE_PLAYBACK;MOVIE_STOP
- **Callees:** FUN_710353d5b0;FUN_71036e3bd0;FUN_71036e3be0;FUN_71036e3c60;FUN_71036e4f60;FUN_71036e4f70;FUN_71036e5080;FUN_71036e5090;FUN_71036e7260;FUN_71036e7800;FUN_71036e7940;FUN_71036e7bd0;FUN_71036f26f0;FUN_71036f2ea0;FUN_71036f31b0;FUN_71036f32f0;...
- **Files:** [decomp](../decompiled/FUN_71036e3d80__71036e3d80.c)  [cfg](../decompiled/FUN_71036e3d80__71036e3d80.mmd)
- **Clone hash:** `015a3f010e0d25f1`

```c

/* WARNING: Removing unreachable block (ram,0x0071036e4b6c) */
/* WARNING: Removing unreachable block (ram,0x0071036e4b80) */
/* WARNING: Removing unreachable block (ram,0x0071036e4b84) */
/* WARNING: Removing unreachable block (ram,0x0071036e4b8c) */
/* WARNING: Removing unreachable block (ram,0x0071036e4b94) */
/* WARNING: Removing unreachable block (ram,0x0071036e4b98) */
/* WARNING: Removing unreachable block (ram,0x0071036e4bb0) */
/* WARNING: Removing unreachable block (ram,0x0071036e4bc0) */

void FUN_71036e3d80(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,char *param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  MultiWaitHolderType *pMVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar11;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
// ... (839 more lines)
```

## 50. `FUN_71036430f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71036430f0`  (offset `0x36430f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71036430f0(long * * * * * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 404 bytes / 13 bb / 1 incoming refs
- **Match values:** Final
- **Strings touched:** FinalSubstanceParameterUpdater
- **Callers:** FUN_71035a46e0
- **Callees:** FUN_710361f020;FUN_710392e1f0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::nu::VirtualFreeHook;<EXTERNAL>::nu::VirtualAllocHook
- **Files:** [decomp](../decompiled/FUN_71036430f0__71036430f0.c)  [cfg](../decompiled/FUN_71036430f0__71036430f0.mmd)
- **Clone hash:** `dbabc95acdf74755`

```c

void FUN_71036430f0(long *****param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  long ****pppplVar4;
  ulong uVar5;
  long *****ppppplVar6;
  long ****local_40;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  ppppplVar6 = &local_40;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = (long ****)0x0;
  param_1[3] = (long ****)0x0;
  param_1[4] = (long ****)0x0;
  *param_1 = (long ****)&PTR_FUN_7105238668;
  pppplVar4 = (long ****)FUN_710392e290(0x10,0x38,param_3,param_4,param_5,param_6,param_7,param_8);
  if (pppplVar4 == (long ****)0x0) {
    local_28 = 0;
    local_40 = (long ****)&DAT_00000038;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_28);
    pppplVar4 = (long ****)
                FUN_710392e290(0x10,0x38,(long ****)ppppplVar6,param_4,param_5,param_6,param_7,
                               param_8);
  }
  *(undefined2 *)(pppplVar4 + 6) = 0;
  *pppplVar4 = (long ***)0x0;
  pppplVar4[1] = (long ***)0xffffffffffffffff;
  pppplVar4[2] = (long ***)0xffffffffffffffff;
  pppplVar4[3] = (long ***)&DAT_3f80000000000000;
  pppplVar4[4] = (long ***)0x0;
  pppplVar4[5] = (long ***)0x0;
// ... (28 more lines)
```

