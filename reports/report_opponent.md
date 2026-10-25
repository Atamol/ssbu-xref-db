# opponent (funcs=20, hits=32)

Top 50 functions by hit count

## 1. `FUN_71021bf990`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021bf990`  (offset `0x21bf990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021bf990(void)`
- **Size / BBs / Incoming:** 9652 bytes / 25 bb / 1 incoming refs
- **Match values:** OPPONENT
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

## 2. `FUN_71021ec200`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021ec200`  (offset `0x21ec200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021ec200(void)`
- **Size / BBs / Incoming:** 11060 bytes / 10 bb / 1 incoming refs
- **Match values:** OPPONENT
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

## 3. `FUN_7101fea810`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fea810`  (offset `0x1fea810`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fea810(long param_1)`
- **Size / BBs / Incoming:** 4752 bytes / 4 bb / 2 incoming refs
- **Match values:** opponent
- **Strings touched:** AttackModule;clear_all;clear;sleep_partialy;set_attack;set_attack_2;set_absolute;hit_absolute;hit_absolute_joint;set_absolute_lr;set_whole;sleep;active_part_num;is_attack;set_invalid_invincible;is_invalid_invincible;set_invalid_xlu;is_invalid_xlu;is_hit_abs;set_power;add_power;set_vector;set_size;set_target_category;off_target_kind;set_offset;set_offset2;get_offset2;set_node;set_serial_hit_frame;TRANS_A_JUMP_AERIAL;get_power;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101fea810__7101fea810.c)  [cfg](../decompiled/FUN_7101fea810__7101fea810.mmd)
- **Clone hash:** `f5933f559ea092c5`

```c

void FUN_7101fea810(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"AttackModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear_all",(long ****)FUN_7101fd11c0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear",(long ****)FUN_7101fd1270,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"sleep_partialy",(long ****)FUN_7101fd1440,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_attack",(long ****)FUN_7101fd1610,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_attack_2",(long ****)FUN_7101fd59c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_absolute",(long ****)FUN_7101fd5b10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"hit_absolute",(long ****)FUN_7101fd7150,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"hit_absolute_joint",(long ****)FUN_7101fd7510,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_absolute_lr",(long ****)FUN_7101fd76d0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_whole",(long ****)FUN_7101fd7800,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"sleep",(long ****)FUN_7101fd79a0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"active_part_num",(long ****)FUN_7101fd7b10,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_attack",(long ****)FUN_7101fd7bf0,ppppbVar1,in_x4,in_x5,in_x6
// ... (371 more lines)
```

## 4. `FUN_7102219310`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102219310`  (offset `0x2219310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102219310(long param_1)`
- **Size / BBs / Incoming:** 10116 bytes / 52 bb / 2 incoming refs
- **Match values:** opponent
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

## 5. `FUN_7101f45620`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** opponent
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

## 6. `FUN_71020fbb90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** OPPONENT
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

## 7. `FUN_710218bb20`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710218bb20`  (offset `0x218bb20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710218bb20(void)`
- **Size / BBs / Incoming:** 7184 bytes / 13 bb / 1 incoming refs
- **Match values:** OPPONENT
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

## 8. `FUN_710141bed0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710141bed0`  (offset `0x141bed0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710141bed0(long param_1)`
- **Size / BBs / Incoming:** 132 bytes / 6 bb / 1 incoming refs
- **Match values:** opponent
- **Strings touched:** mel_kumite_opponent
- **Callees:** FUN_710377a280;FUN_710377aee0
- **Files:** [decomp](../decompiled/FUN_710141bed0__710141bed0.c)  [cfg](../decompiled/FUN_710141bed0__710141bed0.mmd)
- **Clone hash:** `5e2b2129c53d846d`

```c

void FUN_710141bed0(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  cVar1 = *(char *)(lVar3 + 0x48);
  *(char *)(lVar3 + 0x22) = cVar1;
  *(char *)(lVar3 + 0x23) = cVar1;
  *(undefined2 *)(lVar3 + 0x20) = 0;
  lVar2 = *(long *)(*(long *)(lVar3 + 8) + 0x80);
  if (cVar1 == '\0') {
    lVar2 = lVar2 + 0xa0;
  }
  else {
    lVar2 = lVar2 + 0xb0;
  }
  FUN_710377aee0(0x3f800000,lVar2);
  if (*(char *)(lVar3 + 0x48) != '\0') {
    *(undefined4 *)(lVar3 + 0x3c) = *(undefined4 *)(lVar3 + 0x4c);
    *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(lVar3 + 0x4c);
    *(undefined2 *)(lVar3 + 0x38) = 0;
    FUN_710377a280(*(long *)(*(long *)(lVar3 + 8) + 0x80) + 0x90,(byte *)"mel_kumite_opponent",1);
    return;
  }
  return;
}


```

## 9. `FUN_7101fc7f30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fc7f30`  (offset `0x1fc7f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fc7f30(long param_1)`
- **Size / BBs / Incoming:** 8568 bytes / 4 bb / 2 incoming refs
- **Match values:** OPPONENT
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

## 10. `FUN_71021723e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021723e0`  (offset `0x21723e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021723e0(void)`
- **Size / BBs / Incoming:** 13744 bytes / 25 bb / 1 incoming refs
- **Match values:** OPPONENT
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

## 11. `FUN_7101740140`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101740140`  (offset `0x1740140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101740140(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 13708 bytes / 606 bb / 2 incoming refs
- **Match values:** opponent
- **Strings touched:** ev_match_data;match_id_lo;match_id_hi;Ver. %d.%d.%d;rom_version;has_battle_log;is_battle_team;is_suddendeath;rule_spirits;rule_charge_final;rule_team_attach;rule_handi_boost;rule_stage_gimmick;rule_can_pause;rule_visible_score;rule_visible_damage;stage_1_type;stage_1_form;stage_2_type;stage_2_form;event_type;tournament_id;player_%d_;attacker;supporter1;supporter2;supporter3;node_num;ev_match_player;rating;fighter_id;fighter_random;...
- **Callers:** FUN_7101515630;FUN_7101518820
- **Callees:** FUN_71000001c0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_710062dc20;FUN_710066cd40;FUN_71006dae20;FUN_71015922f0;FUN_71016f6340;FUN_710172a1e0;FUN_71017436d0;FUN_7101743910;FUN_7101743bb0;FUN_7101764000;FUN_710179eec0;FUN_71017ac030;FUN_71017ac100;FUN_71032631a0;...
- **Files:** [decomp](../decompiled/FUN_7101740140__7101740140.c)  [cfg](../decompiled/FUN_7101740140__7101740140.mmd)
- **Clone hash:** `81d2d7b98a09c684`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101740140(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,byte ****param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  Any64BitId *pAVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  Any64BitId AVar8;
  byte bVar9;
  short sVar10;
  undefined1 auVar11 [16];
  Any64BitId *pAVar12;
  long ***ppplVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined **ppuVar25;
  long ****pppplVar26;
  byte ****ppppbVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
// ... (1930 more lines)
```

## 12. `FUN_7101a7c9b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a7c9b0`  (offset `0x1a7c9b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a7c9b0(long * * * * param_1)`
- **Size / BBs / Incoming:** 9144 bytes / 464 bb / 1 incoming refs
- **Match values:** opponent
- **Strings touched:** scroll_list;scr_sort;blinder;set_pic_sell;txt_guide;set_txt_sell_gold;set_txt_sell_count;set_parts_total_gold;set_txt_num;mnu_opponents_sell_gold_n;anim_count;anim_stop;set_parts_key_help_favorite;set_txt_icon;selector;selector_01;selector_00;set_parts_key_help_sell;set_parts_key_help_favor;set_parts_key_help_check;set_parts_key_help_cance;check_color_off
- **Callers:** FUN_71018182a0
- **Callees:** FUN_71003cb050;FUN_71019c1c50;FUN_7101a7ed70;FUN_7101a7ef70;FUN_7101a7ef80;FUN_7101a7f320;FUN_7101a7f330;FUN_7101a7f3e0;FUN_7101a7f3f0;FUN_7101a7f4c0;FUN_7101a7f4d0;FUN_7103239360;FUN_710323c4e0;FUN_7103293b70;FUN_71032cbf30;FUN_71032ccb70;...
- **Files:** [decomp](../decompiled/FUN_7101a7c9b0__7101a7c9b0.c)  [cfg](../decompiled/FUN_7101a7c9b0__7101a7c9b0.mmd)
- **Clone hash:** `2bf270d25ea5acae`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a7c9b0(long ****param_1)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long ***ppplVar11;
  ulong uVar12;
  long ***ppplVar13;
  byte ***pppbVar14;
  byte **ppbVar15;
  byte ***pppbVar16;
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
  undefined8 uVar17;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
// ... (1737 more lines)
```

## 13. `FUN_71021c4020`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021c4020`  (offset `0x21c4020`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021c4020(void)`
- **Size / BBs / Incoming:** 14396 bytes / 28 bb / 1 incoming refs
- **Match values:** OPPONENT
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

## 14. `FUN_71018232d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018232d0`  (offset `0x18232d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018232d0(long param_1, undefined8 param_2, undefined * * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2060 bytes / 89 bb / 1 incoming refs
- **Match values:** opponent
- **Strings touched:** footer_help_out;mnu_playing_together_past_opponents_profile
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101af53d0;FUN_7101af8570;FUN_7103394f60;FUN_7103395260;FUN_710376b960;FUN_7103771a80;FUN_7103771be0;FUN_71037780e0;FUN_710377aee0;FUN_710377b140;FUN_710392eb40;<EXTERNAL>::memset;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;...
- **Files:** [decomp](../decompiled/FUN_71018232d0__71018232d0.c)  [cfg](../decompiled/FUN_71018232d0__71018232d0.mmd)
- **Clone hash:** `59be2fc062275480`

```c

void FUN_71018232d0(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 local_2218;
  undefined8 local_2210;
  undefined8 local_2208;
  undefined2 local_2200;
  undefined8 local_21fe;
  undefined1 local_21f6;
  undefined8 local_21d0;
  byte local_21c8 [12];
  undefined8 local_21bc;
  byte local_21b4 [64];
  undefined8 local_2174;
  byte local_216c [64];
  undefined8 local_212c;
  byte local_2124 [64];
  undefined1 auStack_20e4 [4096];
  undefined1 uStack_10e4;
  undefined4 local_10e0;
  undefined1 uStack_10dc;
  undefined8 local_10d8;
  undefined1 uStack_10d0;
  undefined4 local_1090;
// ... (328 more lines)
```

## 15. `FUN_710141bd50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710141bd50`  (offset `0x141bd50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710141bd50(long param_1, long param_2)`
- **Size / BBs / Incoming:** 176 bytes / 8 bb / 1 incoming refs
- **Match values:** opponent
- **Strings touched:** mel_kumite_opponent
- **Callees:** FUN_710377a280;FUN_710377aee0
- **Files:** [decomp](../decompiled/FUN_710141bd50__710141bd50.c)  [cfg](../decompiled/FUN_710141bd50__710141bd50.mmd)
- **Clone hash:** `96c0d1e86c28f7f4`

```c

void FUN_710141bd50(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x28);
  bVar1 = false;
  if (*(char *)(param_2 + 0x14) != '\0') {
    bVar1 = (~*(uint *)(*(long *)(*(long *)(*plVar3 + 0x10) + 8) + 0x50) & 3) == 0;
  }
  *(bool *)(plVar3 + 9) = bVar1;
  *(undefined4 *)((long)plVar3 + 0x4c) = *(undefined4 *)(param_2 + 0x18);
  *(bool *)((long)plVar3 + 0x23) = bVar1;
  *(bool *)((long)plVar3 + 0x22) = bVar1;
  *(undefined2 *)(plVar3 + 4) = 0;
  if (bVar1 == false) {
    lVar2 = *(long *)(plVar3[1] + 0x80) + 0xa0;
  }
  else {
    lVar2 = *(long *)(plVar3[1] + 0x80) + 0xb0;
  }
  FUN_710377aee0(0x3f800000,lVar2);
  if ((char)plVar3[9] != '\0') {
    *(undefined4 *)((long)plVar3 + 0x3c) = *(undefined4 *)((long)plVar3 + 0x4c);
    *(undefined4 *)(plVar3 + 8) = *(undefined4 *)((long)plVar3 + 0x4c);
    *(undefined2 *)(plVar3 + 7) = 0;
    FUN_710377a280(*(long *)(plVar3[1] + 0x80) + 0x90,(byte *)"mel_kumite_opponent",1);
    return;
  }
  return;
}


```

## 16. `FUN_7102043650`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102043650`  (offset `0x2043650`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102043650(long param_1)`
- **Size / BBs / Incoming:** 792 bytes / 4 bb / 2 incoming refs
- **Match values:** opponent
- **Strings touched:** JostleModule;set_status;set_layer;set_fix;set_ignore_speed_x;sleep;is_sleep;jostle_speed_x;speed_attenuation_rate;target_weight;pos_z;TRANS_A_JUMP_AERIAL;set_refer;set_push_speed_x;set_push_speed_x_2;set_priority;priority;set_force_gap;gauge_parts_on;set_ignore_owner_id;ignore_owner_id;reset_area;overlap_x;set_ignore_pri;set_push_speed_x_overlap_rate;set_push_speed_x_overlap_rate_status;area_kind;weight;set_weight;set_influence_opponent_weight;set_propagate_push_speed;set_overlap_rate_mul;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102043650__7102043650.c)  [cfg](../decompiled/FUN_7102043650__7102043650.mmd)
- **Clone hash:** `448bea9da3d6de20`

```c

void FUN_7102043650(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"JostleModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status",(long ****)FUN_7102040fc0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_layer",(long ****)FUN_7102041130,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fix",(long ****)FUN_7102041260,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_ignore_speed_x",(long ****)FUN_71020413d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"sleep",(long ****)FUN_7102041540,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_sleep",(long ****)FUN_71020416b0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"jostle_speed_x",(long ****)FUN_7102041780,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"speed_attenuation_rate",(long ****)FUN_7102041850,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"target_weight",(long ****)FUN_7102041920,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"pos_z",(long ****)FUN_71020419f0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_refer",(long ****)FUN_7102041ac0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_push_speed_x",(long ****)FUN_7102041c30,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_push_speed_x_2",(long ****)FUN_7102041ea0,ppppbVar1,in_x4,
// ... (41 more lines)
```

## 17. `FUN_7102072870`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102072870`  (offset `0x2072870`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102072870(long param_1)`
- **Size / BBs / Incoming:** 600 bytes / 4 bb / 2 incoming refs
- **Match values:** opponent
- **Strings touched:** SearchModule;clear_all;clear;set_offset;set_offset2;active_part_num;is_search;get_size;set_size;set_target_opponent;gauge_parts_on;set_pos;is_inflict;set_check_interval;set_remove_log_attack;remove_log_attack;sleep;relocate;invalid_attack_mask;set_invalid_attack_mask;set_sync_situation;set_sync_lr;situation;enable_safe_pos
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102072870__7102072870.c)  [cfg](../decompiled/FUN_7102072870__7102072870.mmd)
- **Clone hash:** `45bdf66bb376a415`

```c

void FUN_7102072870(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"SearchModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear_all",(long ****)FUN_7102070450,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear",(long ****)FUN_7102070500,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_offset",(long ****)FUN_7102070630,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_offset2",(long ****)FUN_71020709b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"active_part_num",(long ****)FUN_7102070d30,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_search",(long ****)FUN_7102070e10,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_size",(long ****)FUN_7102070f60,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_size",(long ****)FUN_71020710b0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_target_opponent",(long ****)FUN_71020712b0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_pos",(long ****)FUN_7102071430,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_inflict",(long ****)FUN_71020719b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_check_interval",(long ****)FUN_7102071a90,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_remove_log_attack",(long ****)FUN_7102071bc0,ppppbVar1,in_x4
// ... (25 more lines)
```

## 18. `FUN_7101825170`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101825170`  (offset `0x1825170`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101825170(long param_1)`
- **Size / BBs / Incoming:** 7960 bytes / 371 bb / 1 incoming refs
- **Match values:** opponent
- **Strings touched:** submenu_pos;plate_side;set_parts_submenu;selector_0;submenu_item_00;submenu_item_01;set2_right;set_txt_title;mnu_playing_together_past_opponents_profile;mnu_playing_together_report;submenu;btn_cursor;scroll;set_part_btn_00;set_part_btn_01;set_footer_area;selector;set_btn_00;set_btn_01;set_btn_02;set_btn_03;set_btn_04;set_btn_05;color_01;set_txt_text_count;set_txt_report_count
- **Callees:** FUN_71003cb050;FUN_7101989a30;FUN_7101989b70;FUN_7101a9e2d0;FUN_7101a9e2e0;FUN_7101a9e390;FUN_7101a9e3a0;FUN_7101a9e3c0;FUN_7101aa04c0;FUN_7101aa04d0;FUN_7101aa3160;FUN_7103239360;FUN_710323beb0;FUN_710323c4e0;FUN_710323cb80;FUN_7103263d20;...
- **Files:** [decomp](../decompiled/FUN_7101825170__7101825170.c)  [cfg](../decompiled/FUN_7101825170__7101825170.mmd)
- **Clone hash:** `ad81ef401e7844b3`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101825170(long param_1)

{
  uint *puVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long ****pppplVar13;
  long ***ppplVar14;
  undefined8 *puVar15;
  long ***ppplVar16;
  ulong uVar17;
  long ********pppppppplVar18;
  long *******ppppppplVar19;
  long ********pppppppplVar20;
  long **pplVar21;
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
// ... (1545 more lines)
```

## 19. `FUN_7101a7b780`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a7b780`  (offset `0x1a7b780`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a7b780(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3256 bytes / 162 bb / 1 incoming refs
- **Match values:** opponent
- **Strings touched:** grayout;tagcolor_%02d;set_txt_name;mnu_opt_online_nickname;set_txt_win_count;mnu_opponents_card_win_n;new_on;new_off;favorite_on;favorite_off;friend_on;friend_off;uncheck_on;uncheck_off;check_on;check_off
- **Callees:** FUN_7101aeec40;FUN_7101aeeea0;FUN_7103776390;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_7103778430;FUN_710377a280;FUN_710377b140;FUN_7103796f20;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101a7b780__7101a7b780.c)  [cfg](../decompiled/FUN_7101a7b780__7101a7b780.mmd)
- **Clone hash:** `1942c793d6aa4137`

```c

void FUN_7101a7b780(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *********ppppppppplVar6;
  long ****pppplVar7;
  byte ****ppppbVar8;
  ulong uVar9;
  long ******pppppplVar10;
  long *plVar11;
  long *******ppppppplVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  undefined **local_140;
  ulong local_138;
  undefined **local_130;
  ulong local_128;
  undefined **local_120;
  ulong local_118;
  undefined **local_110;
  ulong local_108;
  undefined **local_100;
  ulong local_f8;
  undefined **local_f0;
  ulong local_e8;
  undefined **local_e0;
  ulong local_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
// ... (568 more lines)
```

## 20. `FUN_710141be10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710141be10`  (offset `0x141be10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710141be10(long param_1)`
- **Size / BBs / Incoming:** 172 bytes / 11 bb / 1 incoming refs
- **Match values:** opponent
- **Strings touched:** mel_kumite_opponent
- **Callees:** FUN_710377a280;FUN_710377aee0
- **Files:** [decomp](../decompiled/FUN_710141be10__710141be10.c)  [cfg](../decompiled/FUN_710141be10__710141be10.mmd)
- **Clone hash:** `1eb5c441c741549d`

```c

void FUN_710141be10(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if ((*(char *)((long)plVar2 + 0x21) == '\0') &&
     (*(char *)(*(long *)(*(long *)(*plVar2 + 0x10) + 8) + 0x49) == '\0')) goto LAB_710141be80;
  if (*(char *)((long)plVar2 + 0x23) == '\0') {
    lVar1 = *(long *)(plVar2[1] + 0x80);
LAB_710141be74:
    lVar1 = lVar1 + 0xa0;
  }
  else {
    lVar1 = *(long *)(plVar2[1] + 0x80);
    if ((~*(uint *)(*(long *)(*(long *)(*plVar2 + 0x10) + 8) + 0x50) & 3) != 0) goto LAB_710141be74;
    lVar1 = lVar1 + 0xb0;
  }
  FUN_710377aee0(0x3f800000,lVar1);
LAB_710141be80:
  if (*(char *)((long)plVar2 + 0x39) != '\0') {
    FUN_710377a280(*(long *)(plVar2[1] + 0x80) + 0x90,(byte *)"mel_kumite_opponent",1);
    return;
  }
  return;
}


```

