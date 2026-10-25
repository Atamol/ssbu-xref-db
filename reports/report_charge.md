# charge (funcs=34, hits=161)

Top 50 functions by hit count

## 1. `FUN_71021e8010`  (hits=31)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021e8010`  (offset `0x21e8010`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021e8010(void)`
- **Size / BBs / Incoming:** 10856 bytes / 4 bb / 1 incoming refs
- **Match values:** CHARGE
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

## 2. `FUN_710225b990`  (hits=27)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** CHARGE
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

## 3. `FUN_7101f45620`  (hits=20)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** CHARGE;charge
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

## 4. `FUN_71020fbb90`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** CHARGE
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

## 5. `FUN_7102192760`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102192760`  (offset `0x2192760`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102192760(void)`
- **Size / BBs / Incoming:** 8960 bytes / 13 bb / 1 incoming refs
- **Match values:** CHARGE
- **Strings touched:** FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP_PREVIOUS;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT_MINI_JUMP_ATTACK;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ARM_MANAGER_POINTER;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_RUSHCOIL_WAIT_FRAME;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_HOLD_FRAME;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_TERM;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_LEAFSHIELD;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_ENABLE_SHOOT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_FALL;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_LOOP_ACCEPT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_LOOP;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_L_SHOULDER_FIX;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_GENERATE_TOP_N_OFFSET;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_SHOOT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_SHOOT_END;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_PREV_ESCAPE;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ATTACK_HI3_LANDING;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_ROCKMAN_MOTION_PART_SET_UDE;FIGHTER_ROCKMAN_MOTION_PART_SET_HAVE_FLIP;FIGHTER_ROCKMAN_MOTION_PART_SET_KIND_TERM;FIGHTER_ROCKMAN_ARM_LEFT;FIGHTER_ROCKMAN_ARM_RIGHT;FIGHTER_ROCKMAN_ARM_MAX;FIGHTER_ROCKMAN_ARMFORM_INVALID;FIGHTER_ROCKMAN_ARMFORM_HAND;FIGHTER_ROCKMAN_ARMFORM_ROCKBUSTER;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102192760__7102192760.c)  [cfg](../decompiled/FUN_7102192760__7102192760.mmd)
- **Clone hash:** `464ecc22f982b06b`

```c

void FUN_7102192760(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP_PREVIOUS",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT_MINI_JUMP_ATTACK",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ARM_MANAGER_POINTER",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_RUSHCOIL_WAIT_FRAME",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_HOLD_FRAME",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (1050 more lines)
```

## 6. `FUN_7101b69480`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b69480`  (offset `0x1b69480`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b69480(void)`
- **Size / BBs / Incoming:** 40408 bytes / 2245 bb / 4 incoming refs
- **Match values:** charge
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

## 7. `FUN_71021eaa80`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021eaa80`  (offset `0x21eaa80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021eaa80(void)`
- **Size / BBs / Incoming:** 6012 bytes / 4 bb / 1 incoming refs
- **Match values:** CHARGE
- **Strings touched:** FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_START;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_LW_BODY;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_LASER_C;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_GUN_ID;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_MOT2ND;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_TERM;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_CATCH_JOINT_LENGTH;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_BOMBJUMP_ANG;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_FINAL_LASER_ANG;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_GBEAM_MAP_COLL_OFFSET_X;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_GBEAM_MAP_COLL_OFFSET_Y;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_GBEAM_MAP_COLL_OFFSET_Z;WEAPON_MIIGUNNER_FULLTHROTTLE_STATUS_KIND_SHOOT;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_START;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_FINAL_EXEC;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_ST_INIT;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_IS_CHANGE_STATUS_BOMBJUMP;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_SET_MAP_COLL_OFFSET;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_OFF_MAP_COLL_OFFSET;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_ARTICLE_MOTION_RATE_SYNC;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_WIN_VISOR_MOTION;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_SAMUS_CLIFF_HANG_DATA_START;FIGHTER_SAMUS_CLIFF_HANG_DATA_AIR_LASSO;FIGHTER_SAMUS_CLIFF_HANG_DATA_AIR_LASSO_HANG;FIGHTER_SAMUS_CLIFF_HANG_DATA_TERM;FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_NONE;FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021eaa80__71021eaa80.c)  [cfg](../decompiled/FUN_71021eaa80__71021eaa80.mmd)
- **Clone hash:** `e7586ba83e86bbcb`

```c

void FUN_71021eaa80(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_LW_BODY",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_LASER_C",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_GUN_ID",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_MOT2ND",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_START",(undefined **)0x4b,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_CATCH_JOINT_LENGTH",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_BOMBJUMP_ANG",
// ... (689 more lines)
```

## 8. `FUN_710217dfa0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710217dfa0`  (offset `0x217dfa0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710217dfa0(void)`
- **Size / BBs / Incoming:** 7628 bytes / 10 bb / 1 incoming refs
- **Match values:** CHARGE
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

## 9. `FUN_710218dcf0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710218dcf0`  (offset `0x218dcf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710218dcf0(void)`
- **Size / BBs / Incoming:** 8048 bytes / 22 bb / 1 incoming refs
- **Match values:** CHARGE
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

## 10. `FUN_7101fc7f30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fc7f30`  (offset `0x1fc7f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fc7f30(long param_1)`
- **Size / BBs / Incoming:** 8568 bytes / 4 bb / 2 incoming refs
- **Match values:** CHARGE
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

## 11. `FUN_7101c9ed20`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c9ed20`  (offset `0x1c9ed20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c9ed20(long param_1, long param_2, undefined1 * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 488 bytes / 38 bb / 3 incoming refs
- **Match values:** charge
- **Strings touched:** set_txt_help;mnu_anyone_rule_edit_help_1on1;mnu_anyone_rule_edit_help_stamina;mnu_anyone_rule_edit_help_stamina_n;mnu_anyone_rule_edit_help_stock_n;mnu_anyone_rule_edit_help_time_end_n;mnu_anyone_rule_edit_help_stg_all;mnu_anyone_rule_edit_help_customize;mnu_anyone_rule_edit_help_charge_off;mnu_anyone_rule_edit_help_time_n;mnu_anyone_rule_edit_help_charge_on;mnu_anyone_rule_edit_help_mel;mnu_anyone_rule_edit_help_mel_team;mnu_anyone_rule_edit_help_time;mnu_anyone_rule_edit_help_stock;mnu_anyone_rule_edit_help_no_gimmick;mnu_anyone_rule_edit_help_battlefield;mnu_anyone_rule_edit_help_end;mnu_anyone_rule_edit_help_battlefield_s
- **Callers:** FUN_7101c9c5e0;FUN_7101c9def0
- **Callees:** FUN_7103776910;FUN_710377a120;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c9ed20__7101c9ed20.c)  [cfg](../decompiled/FUN_7101c9ed20__7101c9ed20.mmd)
- **Clone hash:** `f328c4e5f9a0ba85`

```c

void FUN_7101c9ed20(long param_1,long param_2,undefined1 *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined **local_38;
  ulong local_30;
  ushort local_24 [2];
  
  puVar4 = param_3;
  FUN_7103776910(&local_38,param_1 + 0x118,(long ****)"set_txt_help",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  switch(*param_3) {
  case 0:
    cVar1 = *(char *)(param_2 + 1);
    if (cVar1 == '\x01') {
      pcVar3 = "mnu_anyone_rule_edit_help_mel";
    }
    else if (cVar1 == '\x02') {
      pcVar3 = "mnu_anyone_rule_edit_help_mel_team";
    }
    else {
      if (cVar1 != '\x03') goto switchD_7101c9ed68_default;
      pcVar3 = "mnu_anyone_rule_edit_help_1on1";
    }
    break;
  case 1:
    cVar1 = *(char *)(param_2 + 2);
    if (cVar1 == '\x01') {
      pcVar3 = "mnu_anyone_rule_edit_help_time";
    }
    else if (cVar1 == '\x02') {
      pcVar3 = "mnu_anyone_rule_edit_help_stock";
    }
    else {
      if (cVar1 != '\x03') goto switchD_7101c9ed68_default;
// ... (69 more lines)
```

## 12. `FUN_7101c09380`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c09380`  (offset `0x1c09380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c09380(long param_1, undefined1 param_2, ulong param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3724 bytes / 173 bb / 7 incoming refs
- **Match values:** charge
- **Strings touched:** mel_rule_team_attack_with;mel_rule_launch_launch_rate_unit;mel_rule_recovery_percent;mode_empty_03;mel_rule_pause_with;mel_rule_damage_with;mel_rule_edit_allbattle_unreversal_with;mel_rule_edit_suddendeath_shrink_with;mel_rule_cond_%d;mel_rule_spirit_with;mel_rule_charge_with;mel_rule_stage_gimmick_with;mel_rule_stage_change_without;mel_rule_score_with;mel_rule_edit_suddendeath_bomb_with;mel_rule_team_attack_without;mel_rule_pause_without;mel_rule_damage_without;mel_rule_edit_allbattle_unreversal_without;mel_rule_edit_suddendeath_shrink_without;mel_rule_spirit_without;mel_rule_charge_without;mel_rule_stage_gimmick_without;mel_rule_score_without;mel_rule_edit_suddendeath_bomb_without;mel_rule_edit_tournament_random;mel_rule_stage_change_any;mel_rule_stage_change_time
- **Callers:** FUN_7101c0cd40;FUN_7101c13400;FUN_7101c16090
- **Callees:** FUN_7101c09200;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_71037ad940
- **Files:** [decomp](../decompiled/FUN_7101c09380__7101c09380.c)  [cfg](../decompiled/FUN_7101c09380__7101c09380.mmd)
- **Clone hash:** `a553415fa347770c`

```c

void FUN_7101c09380(long param_1,undefined1 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  char *pcVar4;
  long *plVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 uStack_54;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined2 uStack_48;
  undefined1 local_46;
  undefined1 uStack_45;
  int local_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar5 = *(long **)(param_1 + 8);
  uVar2 = (uint)param_3;
  if (((int)uVar2 < 0) || (*plVar5 == 0)) {
switchD_7101c093c0_caseD_c:
    plVar5 = (long *)plVar5[2];
    if (plVar5 == (long *)0x0) {
// ... (698 more lines)
```

## 13. `FUN_71021677c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021677c0`  (offset `0x21677c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021677c0(void)`
- **Size / BBs / Incoming:** 5720 bytes / 1 bb / 1 incoming refs
- **Match values:** CHARGE
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

## 14. `FUN_71025bb610`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71025bb610`  (offset `0x25bb610`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71025bb610(uint * param_1, undefined1 param_2, ulong param_3)`
- **Size / BBs / Incoming:** 26016 bytes / 1275 bb / 1 incoming refs
- **Match values:** charge
- **Strings touched:** nam_spirits_hint_rule_reflect_damage_up_enemy;nam_spirits_hint_rule_energy_charge_enemy;nam_spirits_hint_rule_weapon_offense_up_enemy;nam_spirits_hint_rule_curry_enemy;nam_spirits_hint_rule_invincible_enemy;nam_spirits_hint_rule_charge_max_enemy;nam_spirits_hint_rule_metal_enemy;nam_spirits_hint_rule_magic_up_enemy
- **Callers:** FUN_71025b39a0
- **Callees:** <EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_71025bb610__71025bb610.c)  [cfg](../decompiled/FUN_71025bb610__71025bb610.mmd)
- **Clone hash:** `c6e396991ab5e609`

```c

void FUN_71025bb610(uint *param_1,undefined1 param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  char cVar13;
  ulong uVar14;
  uint uVar15;
  uint local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined2 uStack_e0;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 local_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
// ... (6127 more lines)
```

## 15. `FUN_7102146bf0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102146bf0`  (offset `0x2146bf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102146bf0(void)`
- **Size / BBs / Incoming:** 7328 bytes / 5 bb / 1 incoming refs
- **Match values:** CHARGE
- **Strings touched:** FIGHTER_LINK_INSTANCE_WORK_ID_INT_START;FIGHTER_LINK_INSTANCE_WORK_ID_INT_ATTACK_AIR_LW_HIT_COUNT;FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOOMERANG_ARTICLE_ID;FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOW_ARTICLE_ID;FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOWARROW_ARTICLE_ID;FIGHTER_LINK_INSTANCE_WORK_ID_INT_LANDING_PREV_MOTION_KIND;FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOMB_OBJECT_ID;FIGHTER_LINK_INSTANCE_WORK_ID_INT_WAIT_OPPONENT_OBJECT_ID;FIGHTER_MARIO_STATUS_KIND_SPECIAL_LW_CHARGE;FIGHTER_LINK_INSTANCE_WORK_ID_INT_TERM;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_BOOMERANG;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_BOUND;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_CLEAR;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_SET_ATTACK;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_WAIT_SHIELD;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_SHIELD;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_IS_SHIELD_GUARD_REQUESTED;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_SET_MAP_COLL_OFFSET;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_OFF_MAP_COLL_OFFSET;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_FINAL_DX;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_FINAL_DY;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_ATTACK_AIR_LW2_BLANK_TIME;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_WAIT_SHIELD_DAMAGE;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_WAIT_SHIELD_LR;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_WAIT_SHIELD_HIT_STOP_FRAME;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_LANDING_PREV_MOTION_FRAME;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_HOOKSHOT_MAP_COLL_OFFSET_X;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_HOOKSHOT_MAP_COLL_OFFSET_Y;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_HOOKSHOT_MAP_COLL_OFFSET_Z;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_DELAY_MUL;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102146bf0__7102146bf0.c)  [cfg](../decompiled/FUN_7102146bf0__7102146bf0.mmd)
- **Clone hash:** `57900f9040ec14f5`

```c

void FUN_7102146bf0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_ATTACK_AIR_LW_HIT_COUNT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOOMERANG_ARTICLE_ID",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOW_ARTICLE_ID",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOWARROW_ARTICLE_ID",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_LANDING_PREV_MOTION_KIND",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOMB_OBJECT_ID",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_WAIT_OPPONENT_OBJECT_ID",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_TERM",(undefined **)0x100000c5
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_BOOMERANG",
                 (undefined **)0x200000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_BOUND",
// ... (820 more lines)
```

## 16. `FUN_7102182bb0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102182bb0`  (offset `0x2182bb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102182bb0(void)`
- **Size / BBs / Incoming:** 12184 bytes / 19 bb / 1 incoming refs
- **Match values:** CHARGE
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

## 17. `FUN_710214a020`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710214a020`  (offset `0x214a020`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710214a020(void)`
- **Size / BBs / Incoming:** 21684 bytes / 28 bb / 1 incoming refs
- **Match values:** CHARGE
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

## 18. `FUN_7101c9f4e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c9f4e0`  (offset `0x1c9f4e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c9f4e0(long param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6372 bytes / 275 bb / 9 incoming refs
- **Match values:** charge
- **Strings touched:** set_parts_sub_btns_%02d;view_%d;set_parts_btn_sub_%02d;set_parts_items_%02d;view_all_switch_base;view_one_switch_base;mnu_anyone_rule_edit_charge_off;mode_empty_03;mnu_anyone_rule_edit_charge_on
- **Callers:** FUN_7101c9e110;FUN_7101ca4730
- **Callees:** FUN_710062dc20;FUN_7101ca0dd0;FUN_7101ca0f60;FUN_7103770b30;FUN_71037717d0;FUN_7103771d60;FUN_7103776390;FUN_7103776640;FUN_7103778300;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101c9f4e0__7101c9f4e0.c)  [cfg](../decompiled/FUN_7101c9f4e0__7101c9f4e0.mmd)
- **Clone hash:** `ef4c5b812b740fcf`

```c

void FUN_7101c9f4e0(long param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined ***pppuVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte ****ppppbVar7;
  char *pcVar8;
  undefined8 uVar9;
  long ****pppplVar10;
  byte ****ppppbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  long *plVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined8 local_380;
  byte local_378 [64];
  undefined **local_338;
  ulong local_330;
  undefined **local_328;
  long *local_320 [8];
  uint local_2e0 [2];
  char local_2d8 [64];
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined2 local_284;
// ... (1014 more lines)
```

## 19. `FUN_71025b32d0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71025b32d0`  (offset `0x25b32d0`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_71025b32d0(undefined1 param_1, ulong param_2)`
- **Size / BBs / Incoming:** 1636 bytes / 115 bb / 3 incoming refs
- **Match values:** charge
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

## 20. `FUN_7101d97570`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d97570`  (offset `0x1d97570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d97570(long param_1, undefined8 * param_2)`
- **Size / BBs / Incoming:** 6580 bytes / 412 bb / 3 incoming refs
- **Match values:** charge
- **Strings touched:** set_parts_btn_05;nam_goods_spirit_charge_jamming;nam_goods_help_spirit_charge_jamming;set_parts_btn_00;nam_goods_spirit_all_shuffle;nam_goods_help_spirit_all_shuffle;set_parts_btn_06;nam_goods_spirit_apply_flower;nam_goods_help_spirit_apply_flower;set_parts_btn_07;nam_goods_spirit_escort_weaken;nam_goods_help_spirit_escort_weaken;set_parts_btn_08;nam_goods_spirit_item_lock;nam_goods_help_spirit_item_lock;set_parts_btn_09;nam_goods_spirit_damage_50;nam_goods_help_spirit_damage_50;set_parts_btn_01;nam_goods_spirit_all_attacker;nam_goods_help_spirit_all_attacker;set_parts_btn_02;nam_goods_spirit_all_supporter;nam_goods_help_spirit_all_supporter;set_parts_btn_03;nam_goods_spirit_reloaded;nam_goods_help_spirit_reloaded;set_parts_btn_04;nam_goods_spirit_retry_ticket;nam_goods_help_spirit_retry_ticket;selector_01;selector_00;...
- **Callers:** FUN_71018ee4a0;FUN_71018f7620;FUN_7101d99da0
- **Callees:** FUN_7101d98f30;FUN_7101d99160;FUN_7101d99320;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_7103776910;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101d97570__7101d97570.c)  [cfg](../decompiled/FUN_7101d97570__7101d97570.mmd)
- **Clone hash:** `964ad64eddf75a27`

```c

void FUN_7101d97570(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  char *pcVar6;
  char *pcVar7;
  byte ****ppppbVar8;
  byte ****ppppbVar9;
  char *pcVar10;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined2 *puVar11;
  ulong uVar12;
  code *pcVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  char cVar22;
  ushort uVar23;
  ulong uVar24;
  long *plVar25;
  uint uVar26;
  undefined8 local_180;
// ... (1208 more lines)
```

## 21. `FUN_7102123d40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102123d40`  (offset `0x2123d40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102123d40(void)`
- **Size / BBs / Incoming:** 74688 bytes / 187 bb / 1 incoming refs
- **Match values:** CHARGE
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

## 22. `FUN_7101740140`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101740140`  (offset `0x1740140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101740140(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 13708 bytes / 606 bb / 2 incoming refs
- **Match values:** charge
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

## 23. `FUN_710060b6b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710060b6b0`  (offset `0x60b6b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710060b6b0(long * param_1)`
- **Size / BBs / Incoming:** 10412 bytes / 380 bb / 1 incoming refs
- **Match values:** charge
- **Strings touched:** append/effect/fighter/;metamon_model.numatb;light_model.numatb;dark_model.numatb;fighter/%s/motion/%s/c%02d;scharge.prc;fighter/%s/finalsmash/shared
- **Callees:** FUN_7100646800;FUN_710064b730;FUN_710065dd70;FUN_710069b6c0;FUN_710147f330;FUN_71014cdf90;FUN_71017dd5b0;FUN_71017dd770;FUN_71017ddb00;FUN_71017df420;FUN_71017dfe10;FUN_71017e8610;FUN_71017e8890;FUN_71017e99c0;FUN_7102608cc0;FUN_710353d580;...
- **Files:** [decomp](../decompiled/FUN_710060b6b0__710060b6b0.c)  [cfg](../decompiled/FUN_710060b6b0__710060b6b0.mmd)
- **Clone hash:** `dfd0e9302198f4c8`

```c

/* WARNING: Removing unreachable block (ram,0x00710060bc84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710060b6b0(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  float *pfVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  uint *puVar16;
  void *__dest;
  long *extraout_x1;
  undefined8 extraout_x1_00;
  ulong *extraout_x1_01;
  long *extraout_x1_02;
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
// ... (1848 more lines)
```

## 24. `FUN_7101f89310`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** CHARGE
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

## 25. `FUN_710171ff00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710171ff00`  (offset `0x171ff00`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710171ff00(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8224 bytes / 444 bb / 2 incoming refs
- **Match values:** charge
- **Strings touched:** operation_id;amiibo;fighter_flags;competition_stage_flags;competition_stage_type;melee_kind;melee_rule;time_sec;stock;spirits;defence_reaction;charge;stage_gimmick;is_suddendeath;scaledown_stage;drop_bomb;speed;camera;body_size;head_option;body_option;state_option;weight;item_appear;item_flags;prize_type;prize_index;prize_value;prize_param0;prize_param1;tournament_entry_max_seconds;competition_aggregate_at;...
- **Callers:** FUN_71016c3e60;FUN_710170bda0
- **Callees:** FUN_71001b0960;FUN_71001b4910;FUN_7101684800;FUN_7101721f20;FUN_7101722330;FUN_71017224b0;FUN_7101722840;FUN_71017251e0;FUN_710172a290;FUN_7101762560;FUN_71032631a0;FUN_71032632a0;FUN_71032b30d0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;...
- **Files:** [decomp](../decompiled/FUN_710171ff00__710171ff00.c)  [cfg](../decompiled/FUN_710171ff00__710171ff00.mmd)
- **Clone hash:** `d9c66cf0b811c315`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_710171ff00(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint3 uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  int iVar15;
  long ***ppplVar16;
  long **pplVar17;
  long lVar18;
  long ****pppplVar19;
  size_t sVar20;
  undefined1 uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  byte *pbVar26;
  long ***ppplVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  int iVar31;
  long lVar32;
// ... (1501 more lines)
```

## 26. `FUN_7102175bf0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102175bf0`  (offset `0x2175bf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102175bf0(void)`
- **Size / BBs / Incoming:** 7592 bytes / 16 bb / 1 incoming refs
- **Match values:** CHARGE
- **Strings touched:** FIGHTER_DIDDY_ARCHIVE_GROUP_BASE;FIGHTER_DIDDY_ARCHIVE_GROUP_WPN_GUN;FIGHTER_DIDDY_ARCHIVE_GROUP_WPN_BARREL;FIGHTER_DIDDY_ARCHIVE_GROUP_WPN_PEANUTS;FUGHTER_DIDDY_ARCHIVE_TERM;FIGHTER_DIDDY_INSTANCE_WORK_ID_INT_START;FIGHTER_DIDDY_INSTANCE_WORK_ID_INT_SPECIAL_HI_INPUT_UNABLE_COUNT;FIGHTER_DIDDY_INSTANCE_WORK_ID_INT_SPECIAL_HI_BARRELJET_ID;FIGHTER_DIDDY_INSTANCE_WORK_ID_INT_SPECIAL_LW_INTERVAL_FRAME;FIGHTER_DIDDY_INSTANCE_WORK_ID_INT_TERM;FIGHTER_DIDDY_INSTANCE_WORK_ID_FLAG_START;FIGHTER_DIDDY_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_INPUT_UNABLE;FIGHTER_DIDDY_INSTANCE_WORK_ID_FLAG_SPECIAL_S_INPUT_UNABLE;FIGHTER_DIDDY_INSTANCE_WORK_ID_FLAG_SPECIAL_INPUT_UNABLE;FIGHTER_DIDDY_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_DIDDY_WIN_WPN_DATA_GUN_L;FIGHTER_DIDDY_WIN_WPN_DATA_GUN_R;FIGHTER_DIDDY_WIN_WPN_DATA_BARRELJET;FIGHTER_DIDDY_WIN_WPN_DATA_TERM;FIGHTER_DIDDY_FINAL_DIR_NONE;FIGHTER_DIDDY_FINAL_DIR_UP;FIGHTER_DIDDY_FINAL_DIR_DOWN;FIGHTER_DIDDY_FINAL_DIR_RIGHT;FIGHTER_DIDDY_FINAL_DIR_LEFT;FIGHTER_DIDDY_FINAL_DIR_TERM;FIGHTER_DIDDY_CLIFF_HANG_DATA_START;FIGHTER_DIDDY_CLIFF_HANG_DATA_SPECIAL_HI;FIGHTER_DIDDY_CLIFF_HANG_DATA_TERM;FIGHTER_DIDDY_KINETIC_ENERGY_ID_START;FIGHTER_DIDDY_KINETIC_ENERGY_ID_TERM;FIGHTER_KINETIC_TYPE_DIDDY_START;FIGHTER_KINETIC_TYPE_DIDDY_TERM;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102175bf0__7102175bf0.c)  [cfg](../decompiled/FUN_7102175bf0__7102175bf0.mmd)
- **Clone hash:** `947f4c0e3050f090`

```c

void FUN_7102175bf0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DIDDY_ARCHIVE_GROUP_BASE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DIDDY_ARCHIVE_GROUP_WPN_GUN",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DIDDY_ARCHIVE_GROUP_WPN_BARREL",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DIDDY_ARCHIVE_GROUP_WPN_PEANUTS",(undefined **)0x3,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FUGHTER_DIDDY_ARCHIVE_TERM",(undefined **)&DAT_00000004,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DIDDY_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_DIDDY_INSTANCE_WORK_ID_INT_SPECIAL_HI_INPUT_UNABLE_COUNT",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DIDDY_INSTANCE_WORK_ID_INT_SPECIAL_HI_BARRELJET_ID",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DIDDY_INSTANCE_WORK_ID_INT_SPECIAL_LW_INTERVAL_FRAME",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DIDDY_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (820 more lines)
```

## 27. `FUN_71021a07b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021a07b0`  (offset `0x21a07b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021a07b0(void)`
- **Size / BBs / Incoming:** 7268 bytes / 7 bb / 1 incoming refs
- **Match values:** CHARGE
- **Strings touched:** FIGHTER_INKLING_INSTANCE_WORK_ID_INT_START;FIGHTER_INKLING_INSTANCE_WORK_ID_INT_BOMB_ID_THROW_LW;FIGHTER_INKLING_INSTANCE_WORK_ID_INT_WATER_FRAME;FIGHTER_INKLING_INSTANCE_WORK_ID_INT_LAMP_EFFECT_HANDLE;FIGHTER_INKLING_INSTANCE_WORK_ID_INT_READY_FINAL_EFFECT_HANDLE;FIGHTER_INKLING_INSTANCE_WORK_ID_INT_READY_FINAL_LINE_EFFECT_HANDLE;FIGHTER_INKLING_INSTANCE_WORK_ID_INT_TERM;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_HEIGHT;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_RADIUS;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_R;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_G;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_B;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_START;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_CAN_SPECIAL_LW_BOMB;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_EXIST_SQUID;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_NO_FLIP_SQUID;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_NO_DAMAGE_MOTION_INTP;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_DISABLE_SPECIAL_S;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_AFTER_SPECIAL_HI;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_INK_SUCCESS;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_PRE_WHOLE_VISIBLITY;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_LANDING_HEAVY;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_BOY;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_INKLING_MOTION_PART_SET_KIND_TANK;FIGHTER_INKLING_MOTION_PART_SET_KIND_TERM;FIGHTER_INKLING_STATUS_SPECIAL_N_FLAG_START;FIGHTER_INKLING_STATUS_SPECIAL_N_FLAG_CAN_CHANGE_ANGLE;FIGHTER_INKLING_STATUS_SPECIAL_N_WORK_INT_START;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021a07b0__71021a07b0.c)  [cfg](../decompiled/FUN_71021a07b0__71021a07b0.mmd)
- **Clone hash:** `53f7d64166402b53`

```c

void FUN_71021a07b0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_BOMB_ID_THROW_LW",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_WATER_FRAME",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_LAMP_EFFECT_HANDLE",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_READY_FINAL_EFFECT_HANDLE",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_READY_FINAL_LINE_EFFECT_HANDLE",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_HEIGHT",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_RADIUS",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (822 more lines)
```

## 28. `FUN_71020a72d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020a72d0`  (offset `0x20a72d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020a72d0(long param_1)`
- **Size / BBs / Incoming:** 1632 bytes / 4 bb / 2 incoming refs
- **Match values:** charge
- **Strings touched:** PhysicsModule;update_rope_matrix;reset_swing;gauge_parts_on;set_swing_only_anim;TRANS_A_JUMP_AERIAL;set_swing_joint_name;set_swing_wind;set_swing_rate;set_swing_rebirth;set_2nd_gravity;set_2nd_status;get_2nd_status;set_2nd_end_pos;get_2nd_line_length;set_2nd_line_length_all;get_2nd_node_num;get_2nd_active_node_num;get_2nd_active_length;set_2nd_active_node_num;is_2nd_precede;set_2nd_precede;is_2nd_flip;set_2nd_flip;set_2nd_back_speed;set_ik;set_ik_target_pos;set_ik_target_dir;get_ik_end_joint_id;stop_charge;set_2nd_air_resistance;set_2nd_air_resistance_2;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020a72d0__71020a72d0.c)  [cfg](../decompiled/FUN_71020a72d0__71020a72d0.mmd)
- **Clone hash:** `a748235c8dcaf75a`

```c

void FUN_71020a72d0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"PhysicsModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_28,(uint *)"update_rope_matrix",(long ****)FUN_710209fd00,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"reset_swing",(long ****)FUN_710209ff10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_only_anim",(long ****)FUN_710209ffc0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_joint_name",(long ****)FUN_71020a0130,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_wind",(long ****)FUN_71020a0390,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_rate",(long ****)FUN_71020a0500,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_rebirth",(long ****)FUN_71020a06d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_2nd_gravity",(long ****)FUN_71020a0840,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_2nd_status",(long ****)FUN_71020a0a10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_2nd_status",(long ****)FUN_71020a0b40,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_2nd_end_pos",(long ****)FUN_71020a0c20,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_2nd_line_length",(long ****)FUN_71020a1170,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
// ... (112 more lines)
```

## 29. `FUN_71019b98c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019b98c0`  (offset `0x19b98c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019b98c0(long param_1, undefined8 param_2, long * * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4068 bytes / 139 bb / 1 incoming refs
- **Match values:** charge
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

## 30. `FUN_71021eed40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021eed40`  (offset `0x21eed40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021eed40(void)`
- **Size / BBs / Incoming:** 5784 bytes / 10 bb / 1 incoming refs
- **Match values:** CHARGE
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

## 31. `FUN_710218bb20`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710218bb20`  (offset `0x218bb20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710218bb20(void)`
- **Size / BBs / Incoming:** 7184 bytes / 13 bb / 1 incoming refs
- **Match values:** CHARGE
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

## 32. `FUN_71021b12f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021b12f0`  (offset `0x21b12f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021b12f0(void)`
- **Size / BBs / Incoming:** 8180 bytes / 13 bb / 1 incoming refs
- **Match values:** CHARGE
- **Strings touched:** FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_START;FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_SPECIAL_S_COUNT;FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_SPECIAL_S_CHARGE_MAX_EFFECT_HANDLE;FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_TERM;FIGHTER_PACKUN_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_PACKUN_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_START;FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_SPECIAL_N_WAIT_END;FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_SPECIAL_S_LANDING;FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_PACKUN_HIT_DATA_JOINT_NECK;FIGHTER_PACKUN_HIT_DATA_JOINT_NECK_3;FIGHTER_PACKUN_HIT_DATA_JOINT_NECK_6;FIGHTER_PACKUN_HIT_DATA_JOINT_NECK_8;FIGHTER_PACKUN_HIT_DATA_JOINT_HEAD;FIGHTER_PACKUN_HIT_DATA_JOINT_SHOULDER_R2;FIGHTER_PACKUN_HIT_DATA_JOINT_SHOULDER_L2;FIGHTER_PACKUN_HIT_DATA_JOINT_ARM_R2;FIGHTER_PACKUN_HIT_DATA_JOINT_ARM_L2;FIGHTER_PACKUN_HIT_DATA_JOINT_WAIST;FIGHTER_PACKUN_HIT_DATA_JOINT_NUM;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_NONE;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_ESCAPE;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_ESCAPE_F;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_ESCAPE_B;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_GUARD;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_JUMP;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_AIR_ESCAPE_AIR;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_AIR_JUMP_AERIAL;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_TERM;FIGHTER_PACKUN_CLIFF_HANG_DATA_START;FIGHTER_PACKUN_CLIFF_HANG_DATA_SPECIAL_HI;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021b12f0__71021b12f0.c)  [cfg](../decompiled/FUN_71021b12f0__71021b12f0.mmd)
- **Clone hash:** `4c2064954563d8eb`

```c

void FUN_71021b12f0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_SPECIAL_S_COUNT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_SPECIAL_S_CHARGE_MAX_EFFECT_HANDLE",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_68 = 0xfffffffd;
  local_78 = 0;
  local_70 = 0;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_FLOAT_TERM",(undefined **)0x4d,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_SPECIAL_N_WAIT_END",
                 (undefined **)0x200000e1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_SPECIAL_S_LANDING",
// ... (893 more lines)
```

## 33. `FUN_710219ad10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710219ad10`  (offset `0x219ad10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710219ad10(void)`
- **Size / BBs / Incoming:** 11776 bytes / 28 bb / 1 incoming refs
- **Match values:** CHARGE
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

## 34. `FUN_7101c108f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c108f0`  (offset `0x1c108f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c108f0(long param_1, undefined1 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 652 bytes / 41 bb / 3 incoming refs
- **Match values:** charge
- **Strings touched:** bg_banner_rule_detail;bg_banner_rule_hp;bg_banner_team_com;bg_banner_time_limit;bg_banner_stock_num;bg_banner_hp_mode;bg_banner_victory_cond;bg_banner_spirit_icon;bg_banner_cp_level;bg_banner_handicap_damage;bg_banner_stage_select;bg_banner_item_switch;bg_banner_stage_switch;bg_banner_team_attack;bg_banner_def_reaction;bg_banner_charge_final;bg_banner_handicap_boost;bg_banner_stage_gimmick;bg_banner_stage_number;bg_banner_stage_change;bg_banner_pause;bg_banner_score_disp;bg_banner_battle_max_num;bg_banner_scaledown_stage;bg_banner_recovery_value;bg_banner_damage_disp;bg_banner_allbattle_unreversal;bg_banner_drop_bomb;bg_banner_rule_stock;bg_banner_rule_time
- **Callers:** FUN_7101c0cd40;FUN_7101c0e810;FUN_7101c10630
- **Callees:** FUN_7103776390;FUN_7103778300;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c108f0__7101c108f0.c)  [cfg](../decompiled/FUN_7101c108f0__7101c108f0.mmd)
- **Clone hash:** `b5c0bc5b38099e58`

```c

void FUN_7101c108f0(long param_1,undefined1 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined **local_30;
  ulong local_28;
  
  FUN_7103776390(&local_30,(undefined8 *)(**(long **)(param_1 + 0x6a8) + 8),param_3,param_4,param_5,
                 param_6,param_7,param_8);
  switch(param_2) {
  case 2:
    if (*(char *)(param_1 + 0x659) == '\x01') {
      pcVar3 = "bg_banner_rule_stock";
    }
    else if (*(char *)(param_1 + 0x659) == '\x02') {
      pcVar3 = "bg_banner_rule_hp";
    }
    else {
      pcVar3 = "bg_banner_rule_time";
    }
    break;
  case 3:
    pcVar3 = "bg_banner_team_com";
    break;
  case 4:
    pcVar3 = "bg_banner_time_limit";
    break;
  case 5:
    pcVar3 = "bg_banner_stock_num";
    break;
  case 6:
    pcVar3 = "bg_banner_hp_mode";
    break;
  case 7:
    pcVar3 = "bg_banner_victory_cond";
    break;
// ... (87 more lines)
```

