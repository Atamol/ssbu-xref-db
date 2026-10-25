# dead (funcs=51, hits=334)

Top 50 functions by hit count

## 1. `FUN_71020fbb90`  (hits=109)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** DEAD
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

## 2. `FUN_7102123d40`  (hits=55)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102123d40`  (offset `0x2123d40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102123d40(void)`
- **Size / BBs / Incoming:** 74688 bytes / 187 bb / 1 incoming refs
- **Match values:** DEAD
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

## 3. `FUN_710225b990`  (hits=34)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** DEAD
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

## 4. `FUN_7101fa11c0`  (hits=24)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** dead
- **Strings touched:** sv_system;battle_object;battle_object_module_accessor;gauge_parts_on;battle_object_category;TRANS_A_JUMP_AERIAL;battle_object_kind;owner_id;get_status_func;entry_child_thread_table;get_global_table;get_global_fighter_table;get_line_state_table;get_child_thread_table;mode_empty_03;get_child_thread_env_table;sv_module_access;motion;kinetic;slope;ground;camera;control;effect;sound;article;cancel;damage;combo;model;attack;search;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101fa11c0__7101fa11c0.c)  [cfg](../decompiled/FUN_7101fa11c0__7101fa11c0.mmd)
- **Clone hash:** `a31b4b26022e17c7`

```c

void FUN_7101fa11c0(long param_1)

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
  FUN_7103728630(&local_38,param_1,(undefined **)"sv_system",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object",(long ****)FUN_7101f95350,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object_module_accessor",(long ****)FUN_7101f95380,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object_category",(long ****)FUN_7101f953b0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object_kind",(long ****)FUN_7101f953e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"owner_id",(long ****)FUN_7101f95410,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_status_func",(long ****)FUN_7101f95440,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"entry_child_thread_table",(long ****)FUN_7101f95510,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_global_table",(long ****)FUN_7101f956d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_global_fighter_table",(long ****)FUN_7101f95710,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_line_state_table",(long ****)FUN_7101f95750,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_child_thread_table",(long ****)FUN_7101f95790,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_child_thread_env_table",(long ****)FUN_7101f95840,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
// ... (457 more lines)
```

## 5. `FUN_7101f45620`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** DEAD;Dead;dead
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

## 6. `FUN_71021723e0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021723e0`  (offset `0x21723e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021723e0(void)`
- **Size / BBs / Incoming:** 13744 bytes / 25 bb / 1 incoming refs
- **Match values:** DEAD
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

## 7. `FUN_7102177b50`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102177b50`  (offset `0x2177b50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102177b50(void)`
- **Size / BBs / Incoming:** 10936 bytes / 28 bb / 1 incoming refs
- **Match values:** DEAD
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

## 8. `FUN_7102182bb0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102182bb0`  (offset `0x2182bb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102182bb0(void)`
- **Size / BBs / Incoming:** 12184 bytes / 19 bb / 1 incoming refs
- **Match values:** DEAD
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

## 9. `FUN_7102219310`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102219310`  (offset `0x2219310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102219310(long param_1)`
- **Size / BBs / Incoming:** 10116 bytes / 52 bb / 2 incoming refs
- **Match values:** dead
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

## 10. `FUN_7102192760`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102192760`  (offset `0x2192760`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102192760(void)`
- **Size / BBs / Incoming:** 8960 bytes / 13 bb / 1 incoming refs
- **Match values:** DEAD
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

## 11. `FUN_7101f89310`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** DEAD
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

## 12. `FUN_7101f87300`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f87300`  (offset `0x1f87300`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f87300(long param_1)`
- **Size / BBs / Incoming:** 5008 bytes / 47 bb / 2 incoming refs
- **Match values:** dead
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

## 13. `FUN_7102137e70`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102137e70`  (offset `0x2137e70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102137e70(long param_1)`
- **Size / BBs / Incoming:** 9332 bytes / 208 bb / 1 incoming refs
- **Match values:** dead
- **Strings touched:** BattleObjectManager;is_active_find_battle_object;BattleObjectWorld;gravity_speed_coefficient;scale_z;gravity_pos;is_gravity_normal;is_move;move_speed;is_disable_reverse;BattleObjectSlow;rate_request;is_estimate;is_adjust;AreaContactLog;new_lua_table;store_lua_table;load_from_lua_table;LinkEventCapture;LinkEventThrow;ComboModule;reset;clear_setting;count;is_enable_combo_input;DamageTransactorImpl;calc_reaction_frame;GroundUtility;check_dead_area;check_dead_area2;get_degree_gravity;check_ignore_geometry_move_power_stage;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7101fa11c0;FUN_7101fa3990;FUN_7101fc7f30;FUN_7101fcfd60;FUN_7101fea810;FUN_7101ff0700;FUN_7101ff53b0;FUN_7101ff8910;FUN_7101ffcf40;FUN_7102000e80;FUN_710200a5a0;FUN_7102010f10;FUN_71020173c0;FUN_71020271a0;FUN_71020296f0;FUN_710203be10;...
- **Files:** [decomp](../decompiled/FUN_7102137e70__7102137e70.c)  [cfg](../decompiled/FUN_7102137e70__7102137e70.mmd)
- **Clone hash:** `c57706e054d53a86`

```c

void FUN_7102137e70(long param_1)

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
    FUN_7101fa11c0(0);
    FUN_7101fa3990(0);
    FUN_7101fc7f30(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"BattleObjectManager",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_active_find_battle_object",(long ****)FUN_7101fca100,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"BattleObjectWorld",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
    ;
    FUN_7103728bf0(&local_38,(uint *)"gravity_speed_coefficient",(long ****)FUN_7101fca300,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"scale_z",(long ****)FUN_7101fca340,ppppbVar5,in_x4,in_x5,in_x6
// ... (922 more lines)
```

## 14. `FUN_71021ec200`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021ec200`  (offset `0x21ec200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021ec200(void)`
- **Size / BBs / Incoming:** 11060 bytes / 10 bb / 1 incoming refs
- **Match values:** DEAD
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

## 15. `FUN_710224bda0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710224bda0`  (offset `0x224bda0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710224bda0(long param_1)`
- **Size / BBs / Incoming:** 552 bytes / 4 bb / 2 incoming refs
- **Match values:** dead
- **Strings touched:** shiokarazu;can_exist;get_warp_pos;invalid_bgm_handle;get_bgm_kind;start_bgm;end_bgm;get_shrink_finish_frame;set_change_fighter_restart_position;cancel_change_fighter_restart_position;get_camera_range;get_dead_range;get_shrinked_camera_range;get_shrinked_dead_range;set_camera_range;set_dead_range;start_zoom_out;revert_camera;get_slow_rate;set_assist_team_no;set_effect_rate;find_ptrainer
- **Callers:** FUN_710226f500
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710224bda0__710224bda0.c)  [cfg](../decompiled/FUN_710224bda0__710224bda0.mmd)
- **Clone hash:** `c9df2718338ea83e`

```c

void FUN_710224bda0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"shiokarazu",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"can_exist",(long ****)FUN_7102249b50,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_warp_pos",(long ****)FUN_7102249b90,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"invalid_bgm_handle",(long ****)FUN_7102249c00,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_bgm_kind",(long ****)FUN_7102249c30,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"start_bgm",(long ****)FUN_7102249cb0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"end_bgm",(long ****)FUN_7102249db0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_shrink_finish_frame",(long ****)FUN_7102249e90,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_change_fighter_restart_position",(long ****)FUN_710224a640,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"cancel_change_fighter_restart_position",
                 (long ****)FUN_710224a900,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_camera_range",(long ****)FUN_710224a940,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_dead_range",(long ****)FUN_710224a9c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_shrinked_camera_range",(long ****)FUN_710224aa40,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_shrinked_dead_range",(long ****)FUN_710224aac0,ppppbVar1,
// ... (21 more lines)
```

## 16. `FUN_7101fea810`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fea810`  (offset `0x1fea810`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fea810(long param_1)`
- **Size / BBs / Incoming:** 4752 bytes / 4 bb / 2 incoming refs
- **Match values:** dead
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

## 17. `FUN_71022513a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71022513a0`  (offset `0x22513a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71022513a0(long param_1)`
- **Size / BBs / Incoming:** 264 bytes / 4 bb / 2 incoming refs
- **Match values:** dead
- **Strings touched:** crazyhand;get_camera_range;get_dead_range;get_shrinked_camera_range;get_shrinked_dead_range;set_camera_range;set_dead_range;start_zoom_out;revert_camera
- **Callers:** FUN_710226f500
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71022513a0__71022513a0.c)  [cfg](../decompiled/FUN_71022513a0__71022513a0.mmd)
- **Clone hash:** `72210b9dd34b2a41`

```c

void FUN_71022513a0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"crazyhand",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_camera_range",(long ****)FUN_71022506e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_dead_range",(long ****)FUN_7102250760,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_shrinked_camera_range",(long ****)FUN_71022507e0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_shrinked_dead_range",(long ****)FUN_7102250860,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_camera_range",(long ****)FUN_71022508e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_dead_range",(long ****)FUN_7102250c40,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"start_zoom_out",(long ****)FUN_7102251000,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"revert_camera",(long ****)FUN_7102251380,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  if ((local_28 != 0) && (local_20 != 0)) {
    FUN_71038f55d0(local_28,local_18);
  }
  return;
}


```

## 18. `FUN_71020271a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020271a0`  (offset `0x20271a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020271a0(long param_1)`
- **Size / BBs / Incoming:** 2280 bytes / 4 bb / 2 incoming refs
- **Match values:** dead
- **Strings touched:** EffectModule;req_2d;gauge_parts_on;req_on_joint;req_attach_ground;req_follow;req_continual;remove_continual;remove_all_continual;req_time;req_time_follow;remove_time;remove_all_time;req_emit;remove;remove_all;kill_kind;kill_joint_id;kill_all;detach_all;detach_kind;detach;end_kind;req_after_image;req_after_image_no_parent;clear_all_after_image;remove_after_image;remove_all_after_image;get_local_matrix;set_pos;set_rot;set_scale;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020271a0__71020271a0.c)  [cfg](../decompiled/FUN_71020271a0__71020271a0.mmd)
- **Clone hash:** `a87e10ccfe004d51`

```c

void FUN_71020271a0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"EffectModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_71042d72e7,(long ****)FUN_7102017f00,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_2d",(long ****)FUN_71020185f0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_on_joint",(long ****)FUN_7102018b10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_attach_ground",(long ****)FUN_71020191e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_follow",(long ****)FUN_7102019980,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_continual",(long ****)FUN_710201a1a0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_continual",(long ****)FUN_710201a410,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_all_continual",(long ****)FUN_710201a540,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_time",(long ****)FUN_710201a5f0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_time_follow",(long ****)FUN_710201abd0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_time",(long ****)FUN_710201b140,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_all_time",(long ****)FUN_710201b270,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_emit",(long ****)FUN_710201b320,ppppbVar1,in_x4,in_x5,in_x6,
// ... (165 more lines)
```

## 19. `FUN_7101b69480`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b69480`  (offset `0x1b69480`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b69480(void)`
- **Size / BBs / Incoming:** 40408 bytes / 2245 bb / 4 incoming refs
- **Match values:** dead
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

## 20. `FUN_71019b20c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019b20c0`  (offset `0x19b20c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019b20c0(long * * * * * * * * param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8128 bytes / 315 bb / 1 incoming refs
- **Match values:** dead
- **Strings touched:** %dp_%02d;scr_item;set_parts_csr_t;set_parts_csr_b;ptn_02_for_duckhunt;set_rep_char_icn;set_rep_char_icn_sd;set_rep_series00;set_rep_series01;set_txt_p_num;mode_empty_03;rank_%d;set_txt_rank;set_fxui_rankflash;team_color_2;team_color_2_team;team_color_1;team_color_1_team;player_color_fp_team;my_amiibo_hide;my_amiibo_show;set_txt_atk_num;mnu_amiibo_attack_n;set_txt_def_num;mnu_amiibo_defense_n;set_pic_atk_bar;set_pic_atk_bar_shadow;set_pic_def_bar;set_pic_def_bar_shadow;set_txt_p_name;set_txt_p_name_break;set_txt_u_name;...
- **Callers:** FUN_71017fd8b0
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_7101767150;FUN_71019b1b60;FUN_71019b6ba0;FUN_71019b6cd0;FUN_710323f330;FUN_710323f600;FUN_71032626e0;FUN_71032631a0;FUN_71032632a0;FUN_7103263f80;FUN_7103265040;FUN_710326ad60;FUN_7103280ec0;FUN_71032a2c10;...
- **Files:** [decomp](../decompiled/FUN_71019b20c0__71019b20c0.c)  [cfg](../decompiled/FUN_71019b20c0__71019b20c0.mmd)
- **Clone hash:** `ab9b00ec9eb49610`

```c

void FUN_71019b20c0(long ********param_1,ulong param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long ********pppppppplVar4;
  uint *puVar5;
  byte *pbVar6;
  ulong *puVar7;
  ulong *puVar8;
  byte bVar9;
  char cVar10;
  short sVar11;
  short sVar12;
  long *******ppppppplVar13;
  undefined8 *puVar14;
  bool bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  long ******pppppplVar19;
  long *******ppppppplVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ushort *puVar24;
  undefined8 *puVar25;
  char *pcVar26;
  ulong uVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  undefined8 uVar30;
  undefined ***pppuVar31;
  byte ****ppppbVar32;
  long ****pppplVar33;
  byte *pbVar34;
  ushort uVar35;
// ... (1385 more lines)
```

## 21. `FUN_71020cb970`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020cb970`  (offset `0x20cb970`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020cb970(long param_1)`
- **Size / BBs / Incoming:** 720 bytes / 4 bb / 2 incoming refs
- **Match values:** dead
- **Strings touched:** FighterInformation;hit_point;hit_point_max;fighter_color;is_rabbit_cap;is_reflector;is_superleaf;is_rocketbelt;is_screw;is_backshield;is_operation_cpu;get_no_change_hp;TRANS_A_JUMP_AERIAL;dead_count;stock_count;suicide_count;gauge_parts_on;total_beat_count;is_last_dead_suicide;set_add_rebirth_wait_frame;is_on_rebirth;fighter_category;gravity;summon_boss_id;summon_bomb_ready_frame;summon_pre_bomb_effect_frame;summon_suicide_bomb_attack_mul;summon_suicide_bomb_reaction_mul;is_battle_event_stick_reverse;get_log_int
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020cb970__71020cb970.c)  [cfg](../decompiled/FUN_71020cb970__71020cb970.mmd)
- **Clone hash:** `b5802f748562e477`

```c

void FUN_71020cb970(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterInformation",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"hit_point",(long ****)FUN_71020c9fd0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"hit_point_max",(long ****)FUN_71020ca0e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"fighter_color",(long ****)FUN_71020ca250,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_rabbit_cap",(long ****)FUN_71020ca320,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_reflector",(long ****)FUN_71020ca3f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_superleaf",(long ****)FUN_71020ca4c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_rocketbelt",(long ****)FUN_71020ca590,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_screw",(long ****)FUN_71020ca660,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_backshield",(long ****)FUN_71020ca730,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_operation_cpu",(long ****)FUN_71020ca800,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_no_change_hp",(long ****)FUN_71020ca8d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"dead_count",(long ****)FUN_71020ca9a0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
// ... (36 more lines)
```

## 22. `FUN_7101d61c00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d61c00`  (offset `0x1d61c00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d61c00(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 16924 bytes / 862 bb / 1 incoming refs
- **Match values:** dead
- **Strings touched:** set_part_result_coin;ptn_02;player_number_%dp;ptn_00;%dp_%02d;score_title_onoff;txt_det_title_04;mel_result_item_%02d;set_rep_char_icn;set_rep_char_icn_sd;set_rep_series00;set_rep_series01;set_txt_p_num;cmn_%dp;rank_num_off;set_txt_rank;mode_empty_03;rank_%d;set_fxui_rankflash;set_txt_p_name;set_txt_p_name_break;set_txt_u_name;set_txt_u_name_fp;mel_result_player_n;mel_result_player_nam;mel_result_fp_nam;parts_fp_lv;set_txt_fp_level;mel_result_item_unit_35_00;set_parts_fp_type;spirit_attacker_%s;mel_result_computer_n;...
- **Callers:** FUN_7101490190
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710062dc20;FUN_7101465a30;FUN_71015435c0;FUN_7101764000;FUN_71017a7d70;FUN_7101d5aa30;FUN_7101d65e20;FUN_71024076d0;FUN_710323f330;FUN_710323f600;FUN_71032631a0;FUN_71032632a0;FUN_7103264990;FUN_7103264ab0;...
- **Files:** [decomp](../decompiled/FUN_7101d61c00__7101d61c00.c)  [cfg](../decompiled/FUN_7101d61c00__7101d61c00.mmd)
- **Clone hash:** `a8088be1cec3a294`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101d61c00(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,long *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong *puVar5;
  uint *puVar6;
  int iVar7;
  float *pfVar8;
  long *plVar9;
  uint uVar10;
  char cVar11;
  byte bVar12;
  char cVar13;
  bool bVar14;
  byte bVar15;
  undefined **ppuVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined2 *puVar23;
  char *pcVar24;
  ulong uVar25;
  char *pcVar26;
  ulong uVar27;
  long *plVar28;
  ushort *puVar29;
  undefined8 *puVar30;
  undefined2 *puVar31;
  long lVar32;
  short sVar33;
// ... (2557 more lines)
```

## 23. `FUN_7101f7c910`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f7c910`  (offset `0x1f7c910`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f7c910(long param_1)`
- **Size / BBs / Incoming:** 9552 bytes / 4 bb / 1 incoming refs
- **Match values:** dead
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

## 24. `FUN_710219ad10`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710219ad10`  (offset `0x219ad10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710219ad10(void)`
- **Size / BBs / Incoming:** 11776 bytes / 28 bb / 1 incoming refs
- **Match values:** DEAD
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

## 25. `FUN_710200e620`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710200e620`  (offset `0x200e620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710200e620(undefined4 * param_1, long param_2, ulong param_3)`
- **Size / BBs / Incoming:** 2500 bytes / 27 bb / 3 incoming refs
- **Match values:** dead
- **Strings touched:** new_instance_lua;reaction_;level_;height_;speed_vec_;attack_pos_;attack_speed_;angle_;reaction_frame_;hitstop_frame_;attr_;damage_add_;team_;stop_delay_;ground_normal_;object_id_;owner_object_id_;object_category_;status_air_;TRANS_A_JUMP_AERIAL;prev_status_ground_;ground_damage_;absolute_;meteor_;gauge_parts_on;direct_;sync_speed_;back_slash_;pull_;r_fix_;r_fix_damage_speed_up_;no_dead_damage_fly_effect_;...
- **Callers:** FUN_710200e510;FUN_7102015440;FUN_7102015590
- **Callees:** FUN_71038f4d40;FUN_71038f5390;FUN_71038fec40;FUN_710391d4c0;FUN_710391e050
- **Files:** [decomp](../decompiled/FUN_710200e620__710200e620.c)  [cfg](../decompiled/FUN_710200e620__710200e620.mmd)
- **Clone hash:** `7ee4597f185334e8`

```c

void FUN_710200e620(undefined4 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *plVar5;
  ulong *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_710200eff0;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *param_1;
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"reaction_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[1];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"level_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[2];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"height_");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"speed_vec_");
  }
// ... (291 more lines)
```

## 26. `FUN_7100009d00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100009d00`  (offset `0x9d00`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100009d00(long param_1, byte * * param_2, size_t * * * * * * * param_3, size_t * * * * * * * param_4, size_t * * * * * * * param_5, byte * * param_6, size_t * * * * * * * param_7, size_t * * * * * * * param_8)`
- **Size / BBs / Incoming:** 5688 bytes / 367 bb / 1 incoming refs
- **Match values:** dead
- **Strings touched:** Resolving timed out after %ld milliseconds;select_item;Internal error clearing splay node = %d
;Connection timed out after %ld milliseconds;Operation timed out after %ld milliseconds with %ld out of %ld bytes received;Re-used connection seems dead, get a new one
;Operation timed out after %ld milliseconds with %ld bytes received;Hostname '%s' was found in DNS cache
;dys_yoga03_l_03_set;Pipe broke: handle %p, url = %s
;In state %d with no easy_conn, bail out!

- **Callers:** FUN_7100009aa0
- **Callees:** FUN_7100002af0;FUN_7100002f80;FUN_7100004200;FUN_7100004910;FUN_7100004a10;FUN_7100005a10;FUN_7100005c60;FUN_71000067f0;FUN_7100006870;FUN_71000086c0;FUN_7100008d20;FUN_7100008fc0;FUN_710000c8f0;FUN_710000c920;FUN_710000c950;FUN_710000e660;...
- **Files:** [decomp](../decompiled/FUN_7100009d00__7100009d00.c)  [cfg](../decompiled/FUN_7100009d00__7100009d00.mmd)
- **Clone hash:** `8e0dba2c0a10b389`

```c

/* WARNING: Type propagation algorithm not settling */

int FUN_7100009d00(long param_1,byte **param_2,size_t *******param_3,size_t *******param_4,
                  size_t *******param_5,byte **param_6,size_t *******param_7,size_t *******param_8)

{
  size_t *******pppppppsVar1;
  size_t *******pppppppsVar2;
  long *plVar3;
  size_t *******pppppppsVar4;
  char cVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte **ppbVar16;
  size_t ******ppppppsVar17;
  byte **extraout_x1;
  byte **extraout_x1_00;
  byte **extraout_x1_01;
  byte **extraout_x1_02;
  byte **extraout_x1_03;
  byte **extraout_x1_04;
  byte **extraout_x1_05;
  byte **extraout_x1_06;
  byte **extraout_x1_07;
  byte **extraout_x1_08;
  byte **extraout_x1_09;
  byte **extraout_x1_10;
  byte **extraout_x1_11;
  byte **extraout_x1_12;
  byte **extraout_x1_13;
  byte **extraout_x1_14;
// ... (1163 more lines)
```

## 27. `FUN_7102195d30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102195d30`  (offset `0x2195d30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102195d30(long param_1, long param_2)`
- **Size / BBs / Incoming:** 144 bytes / 1 bb / 0 incoming refs
- **Match values:** dead
- **Strings touched:** new_instance_lua;is_dead_damage_
- **Callees:** FUN_7101ff91a0;FUN_71038f5390
- **Files:** [decomp](../decompiled/FUN_7102195d30__7102195d30.c)  [cfg](../decompiled/FUN_7102195d30__7102195d30.mmd)
- **Clone hash:** `68955c1e81ae15ab`

```c

void FUN_7102195d30(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  
  FUN_7101ff91a0(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_7102195c80;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar3 = *(uint **)(param_2 + 0x10);
  *puVar3 = (uint)*(byte *)(param_1 + 0x29);
  puVar3[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"is_dead_damage_");
  return;
}


```

## 28. `FUN_7102144140`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102144140`  (offset `0x2144140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102144140(long param_1)`
- **Size / BBs / Incoming:** 1248 bytes / 4 bb / 2 incoming refs
- **Match values:** dead
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

## 29. `FUN_7102151c30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102151c30`  (offset `0x2151c30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102151c30(void)`
- **Size / BBs / Incoming:** 6316 bytes / 10 bb / 1 incoming refs
- **Match values:** DEAD
- **Strings touched:** FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_START;FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_GROUND_MOT;FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_AIR_MOT;FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_UNIQ_ID;FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_KAMINARI_CLOUD_ADDRESS;FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_FIGHTER_CATEGORY;FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_TERM;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_START;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MOT_INHERIT;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_EX1;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_STRANS_0;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_STRANS_1;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_PAUSE;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_PIKACHU_FINAL_TARGET_NUM;FIGHTER_PIKACHU_LINK_NO_PRE_START;FIGHTER_PIKACHU_LINK_NO_FINAL;FIGHTER_PIKACHU_LINK_NO_TERM;FIGHTER_PICHU_CLIFF_HANG_DATA_DEFAULT;FIGHTER_PICHU_CLIFF_HANG_DATA_SPECIAL_S;FIGHTER_PICHU_CLIFF_HANG_DATA_TERM;FIGHTER_PIKACHU_KINETIC_ENERGY_ID_START;FIGHTER_PIKACHU_KINETIC_ENERGY_ID_TERM;FIGHTER_KINETIC_TYPE_PIKACHU_START;FIGHTER_KINETIC_TYPE_PIKACHU_CURSOR;FIGHTER_KINETIC_TYPE_PIKACHU_TERM;FIGHTER_PIKACHU_STATUS_TRANSITION_TERM_ID_SKULL_BASH_WAIT;FIGHTER_PIKACHU_STATUS_TRANSITION_TERM_ID_SKULL_BASH_FALL;FIGHTER_PIKACHU_STATUS_TRANSITION_TERM_ID_KAMINARI_WAIT;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102151c30__7102151c30.c)  [cfg](../decompiled/FUN_7102151c30__7102151c30.mmd)
- **Clone hash:** `5d8f08ec152ed8ea`

```c

void FUN_7102151c30(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_GROUND_MOT",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_AIR_MOT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_UNIQ_ID",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_KAMINARI_CLOUD_ADDRESS",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_FIGHTER_CATEGORY",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000df,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MOT_INHERIT",
                 (undefined **)0x200000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR",
                 (undefined **)0x200000e1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND",
// ... (690 more lines)
```

## 30. `FUN_7101aa3710`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101aa3710`  (offset `0x1aa3710`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101aa3710(long param_1, int param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 800 bytes / 30 bb / 1 incoming refs
- **Match values:** dead
- **Strings touched:** set_txt_day;set_txt_honbun;set_txt_receive;set_parts_new;mnu_present_deadline_date;present;received;expired
- **Callees:** FUN_71037419c0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_710377a310;FUN_71037a2270;FUN_710392eb40;<EXTERNAL>::nn::time::ToCalendarTime
- **Files:** [decomp](../decompiled/FUN_7101aa3710__7101aa3710.c)  [cfg](../decompiled/FUN_7101aa3710__7101aa3710.mmd)
- **Clone hash:** `534540288ac1ac31`

```c

void FUN_7101aa3710(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  PosixTime *pPVar6;
  long lVar7;
  long *plVar8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  ulong local_60;
  CalendarTime local_58 [8];
  PosixTime local_50 [8];
  ushort local_48 [4];
  
  if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5) <= (ulong)(long)param_2) {
    return;
  }
  lVar3 = *(long *)(param_1 + 8) + (long)param_2 * 0x20;
  plVar8 = (long *)(lVar3 + 0x10);
  lVar7 = *plVar8;
  if (lVar7 == 0) {
    uVar4 = 0;
    local_60 = 0;
  }
  else {
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x20) & 0xfff | ((ulong)*(byte *)(lVar7 + 0x22) & 0xf) << 0xc
            | ((ulong)*(byte *)(lVar7 + 0x23) & 0x1f) << 0x10;
    local_60 = (ulong)*(ushort *)(lVar7 + 0x28) & 0xfff |
// ... (92 more lines)
```

## 31. `FUN_71021f23b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021f23b0`  (offset `0x21f23b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021f23b0(void)`
- **Size / BBs / Incoming:** 8752 bytes / 22 bb / 1 incoming refs
- **Match values:** DEAD
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

## 32. `FUN_71020c9380`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020c9380`  (offset `0x20c9380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020c9380(long param_1)`
- **Size / BBs / Incoming:** 2520 bytes / 4 bb / 2 incoming refs
- **Match values:** dead
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

## 33. `FUN_710001f340`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710001f340`  (offset `0x1f340`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710001f340(long param_1, undefined8 * param_2, byte * * param_3, byte * * param_4, byte * * param_5, byte * * param_6, byte * * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12036 bytes / 695 bb / 1 incoming refs
- **Match values:** dead
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

## 34. `FUN_7102195dc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102195dc0`  (offset `0x2195dc0`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_7102195dc0(long param_1, long param_2, int param_3)`
- **Size / BBs / Incoming:** 352 bytes / 23 bb / 1 incoming refs
- **Match values:** dead
- **Strings touched:** is_dead_damage_
- **Callees:** FUN_7101ff9450;FUN_71038f4d40
- **Files:** [decomp](../decompiled/FUN_7102195dc0__7102195dc0.c)  [cfg](../decompiled/FUN_7102195dc0__7102195dc0.mmd)
- **Clone hash:** `104ac2104c177c10`

```c

uint FUN_7102195dc0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  
  FUN_7101ff9450(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar5 = *plVar6, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar5 + 10))) {
          plVar4 = (long *)(lVar5 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  uVar3 = FUN_71038f4d40(param_2,plVar4,"is_dead_damage_");
  lVar5 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
// ... (36 more lines)
```

## 35. `FUN_71020157a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020157a0`  (offset `0x20157a0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71020157a0(long param_1)`
- **Size / BBs / Incoming:** 7192 bytes / 474 bb / 1 incoming refs
- **Match values:** dead
- **Strings touched:** reaction_;level_;height_;speed_vec_;attack_pos_;attack_speed_;angle_;reaction_frame_;hitstop_frame_;attr_;damage_add_;team_;stop_delay_;ground_normal_;object_id_;owner_object_id_;object_category_;status_air_;TRANS_A_JUMP_AERIAL;prev_status_ground_;ground_damage_;absolute_;meteor_;gauge_parts_on;direct_;sync_speed_;back_slash_;pull_;r_fix_;r_fix_damage_speed_up_;no_dead_damage_fly_effect_;target_pos_speed_;...
- **Callees:** FUN_71038f4d40;FUN_7103907f00
- **Files:** [decomp](../decompiled/FUN_71020157a0__71020157a0.c)  [cfg](../decompiled/FUN_71020157a0__71020157a0.mmd)
- **Clone hash:** `6e88a6613ec13c91`

```c

undefined8 FUN_71020157a0(long param_1)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  byte *pbVar4;
  undefined1 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  long local_40;
  int local_38;
  
  lVar9 = **(long **)(param_1 + 0x20);
  plVar6 = *(long **)(param_1 + 0x10);
  plVar1 = (long *)(lVar9 + 0x10);
  if (((int)((ulong)((long)plVar6 - (long)plVar1) >> 4) != 2 || plVar6 <= (long *)(lVar9 + 0x20)) ||
      (long *)(lVar9 + 0x20) == &DAT_7104862960) {
    return 0;
  }
  if ((*(uint *)(lVar9 + 0x28) & 0xf) != 5) {
    return 0;
  }
  if (plVar6 <= plVar1) {
    plVar1 = &DAT_7104862960;
  }
  if ((*(uint *)(plVar1 + 1) & 0xf) == 2) {
    pfVar10 = (float *)*plVar1;
  }
  else if ((*(uint *)(plVar1 + 1) & 0xf) == 7) {
    pfVar10 = (float *)(*plVar1 + 0x28);
  }
  else {
    pfVar10 = (float *)0x0;
// ... (1346 more lines)
```

## 36. `FUN_71020126d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020126d0`  (offset `0x20126d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020126d0(undefined4 * param_1, long param_2, ulong param_3)`
- **Size / BBs / Incoming:** 1192 bytes / 14 bb / 2 incoming refs
- **Match values:** dead
- **Strings touched:** new_instance_lua;damage_;damage_add_;damage_add_reaction_;power_max_;reaction_max_;damage_lr_;attack_pos_;attack_speed_;damage_add_2nd_;owner_object_id_;shake_scale_;catch_absolute_;no_dead_damage_fly_effect_
- **Callers:** FUN_71020124f0;FUN_7102012b80
- **Callees:** FUN_71038f4d40;FUN_71038f5390;FUN_71038fec40;FUN_710391d4c0;FUN_710391e050
- **Files:** [decomp](../decompiled/FUN_71020126d0__71020126d0.c)  [cfg](../decompiled/FUN_71020126d0__71020126d0.mmd)
- **Clone hash:** `1f1cf7ae3f0cff52`

```c

void FUN_71020126d0(undefined4 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  uint *puVar5;
  long *plVar6;
  undefined4 uVar7;
  
  plVar6 = (long *)(param_2 + 0x10);
  puVar1 = (undefined8 *)*plVar6;
  *puVar1 = FUN_7102012330;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = *param_1;
  puVar4[2] = 3;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = param_1[1];
  puVar4[2] = 3;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_add_");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = param_1[2];
  puVar4[2] = 3;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_add_reaction_");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = param_1[3];
  puVar4[2] = 3;
// ... (122 more lines)
```

## 37. `FUN_710223d040`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710223d040`  (offset `0x223d040`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710223d040(long param_1)`
- **Size / BBs / Incoming:** 720 bytes / 4 bb / 2 incoming refs
- **Match values:** DEAD
- **Strings touched:** mechakoopa;MECHAKOOPA_BURST_FRAME;MECHAKOOPA_COUNT_DOWN_FRAME;MECHAKOOPA_HOP_BURST_FRAME;MECHAKOOPA_HOP_LOST_FRAME;MECHAKOOPA_HOP_SPEED_X;MECHAKOOPA_HOP_SPEED_Y;MECHAKOOPA_GRAVITY;MECHAKOOPA_BOUND_SPEED_THRESHOLD;MECHAKOOPA_HP;MECHAKOOPA_SPEED_X;MECHAKOOPA_LIMIT_SPEED_Y;MECHAKOOPA_DAMAGE_SPEED_MUL;MECHAKOOPA_SHOOT_SPEED_X;MECHAKOOPA_SHOOT_BRAKE;MECHAKOOPA_BOUND_SPEED_X;MECHAKOOPA_BOUND_SPEED_Y;MECHAKOOPA_BOUND_BRAKE;MECHAKOOPA_TURN_NUM;MECHAKOOPA_DEAD_BURST_FRAME;MECHAKOOPA_HIT_DATA_OFFSET_1;MECHAKOOPA_HIT_DATA_OFFSET_2;MECHAKOOPA_HIT_DATA_SIZE;MECHAKOOPA_HIT_DATA_JOINT;MECHAKOOPA_HIT_DATA_PART;MECHAKOOPA_HIT_DATA_HEIGHT;MECHAKOOPA_STOP_SPEED_MUL;MECHAKOOPA_STOP_BRAKE
- **Callers:** FUN_710226f500
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710223d040__710223d040.c)  [cfg](../decompiled/FUN_710223d040__710223d040.mmd)
- **Clone hash:** `a152be8526188ae6`

```c

void FUN_710223d040(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"mechakoopa",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_BURST_FRAME",(long ****)FUN_710223c920,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_COUNT_DOWN_FRAME",(long ****)FUN_710223c960,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HOP_BURST_FRAME",(long ****)FUN_710223c9a0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HOP_LOST_FRAME",(long ****)FUN_710223c9e0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HOP_SPEED_X",(long ****)FUN_710223ca20,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HOP_SPEED_Y",(long ****)FUN_710223ca60,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_GRAVITY",(long ****)FUN_710223caa0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_BOUND_SPEED_THRESHOLD",(long ****)FUN_710223cae0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_HP",(long ****)FUN_710223cb20,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_SPEED_X",(long ****)FUN_710223cb60,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_LIMIT_SPEED_Y",(long ****)FUN_710223cba0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_DAMAGE_SPEED_MUL",(long ****)FUN_710223cbe0,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"MECHAKOOPA_SHOOT_SPEED_X",(long ****)FUN_710223cc20,ppppbVar1,
// ... (35 more lines)
```

## 38. `FUN_71038fc6c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038fc6c0`  (offset `0x38fc6c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71038fc6c0(long param_1, uint * param_2)`
- **Size / BBs / Incoming:** 276 bytes / 16 bb / 1 incoming refs
- **Match values:** dead
- **Strings touched:** C stack overflow;cannot resume dead coroutine;select_item;cannot resume non-suspended coroutine
- **Callees:** FUN_71038fb8d0;FUN_71038fbfd0;FUN_71038fc7e0;FUN_71038fca40;FUN_7103924610
- **Files:** [decomp](../decompiled/FUN_71038fc6c0__71038fc6c0.c)  [cfg](../decompiled/FUN_71038fc6c0__71038fc6c0.mmd)
- **Clone hash:** `63b4024608d0e2e1`

```c

void FUN_71038fc6c0(long param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  uVar1 = *param_2;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * -0x10);
  if (199 < *(ushort *)(param_1 + 0xc6)) {
                    /* WARNING: Subroutine does not return */
    FUN_71038fca40(param_1,"C stack overflow",puVar3);
  }
  plVar4 = *(long **)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
    *plVar4 = *(long *)(param_1 + 0x38) + plVar4[7];
    if ((*(byte *)((long)plVar4 + 0x42) >> 1 & 1) == 0) {
      if ((code *)plVar4[4] != (code *)0x0) {
        uVar1 = (*(code *)plVar4[4])(param_1,1,plVar4[6]);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * -0x10);
      }
      FUN_71038fbfd0(param_1,plVar4,puVar3,uVar1);
    }
    else {
      FUN_7103924610(param_1);
    }
    FUN_71038fc7e0(param_1,(undefined4 *)0x0);
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71038fca40(param_1,"cannot resume dead coroutine",puVar3);
  }
  if (plVar4 == (long *)(param_1 + 0x60)) {
    uVar2 = FUN_71038fb8d0(param_1,puVar3 + -2,0xffff);
    if ((int)uVar2 != 0) {
      return;
// ... (8 more lines)
```

## 39. `FUN_710215e3b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710215e3b0`  (offset `0x215e3b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710215e3b0(void)`
- **Size / BBs / Incoming:** 7016 bytes / 10 bb / 1 incoming refs
- **Match values:** DEAD
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

## 40. `FUN_71021f45e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021f45e0`  (offset `0x21f45e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021f45e0(void)`
- **Size / BBs / Incoming:** 6308 bytes / 17 bb / 1 incoming refs
- **Match values:** DEAD
- **Strings touched:** FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_START;FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_BLADE_AURA_EFFECT_HANDLE;FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_TRANSFORM_WIND_EFFECT_HANDLE;FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_TRANSFORM_WIND_EFFECT_HANDLE_2;FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_TERM;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_START;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_N_BUOYANCY;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_N_BUOYANCY_BITE;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DISABLE;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DISABLE_FOR_JUMP;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_ATTACK_START;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_REQ_EFFECT_SWORD_AURA;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_OFF_EFFECT_SWORD_AURA;FIGHTER_WIIFIT_ARTICLE_TERM;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_REQ_EFEECT_TRANSFORM_WIND;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_OFF_EFEECT_TRANSFORM_WIND;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_FINAL_OTHER_VISIBLE;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_IS_KIRBY_DRAGONHAND;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_KAMUI_SHIELD_GROUP_KIND_START;FIGHTER_KAMUI_SHIELD_GROUP_KIND_SPECIAL_LW_GUARD;FIGHTER_KAMUI_SHIELD_GROUP_KIND_TERM;FIGHTER_ATTACK_ABSOLUTE_KIND_KAMUI_FINAL;FIGHTER_KAMUI_KINETIC_ENERGY_ID_START;FIGHTER_KAMUI_KINETIC_ENERGY_ID_TERM;FIGHTER_KINETIC_TYPE_KAMUI_START;FIGHTER_KINETIC_TYPE_KAMUI_SPECIAL_AIR_N_BITE;FIGHTER_KINETIC_TYPE_KAMUI_SPECIAL_S_JUMP;FIGHTER_KINETIC_TYPE_KAMUI_SPECIAL_AIR_S_JUMP;FIGHTER_KINETIC_TYPE_KAMUI_TERM;FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_START;FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_END_HOLD;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021f45e0__71021f45e0.c)  [cfg](../decompiled/FUN_71021f45e0__71021f45e0.mmd)
- **Clone hash:** `bce26a49a9ec098f`

```c

void FUN_71021f45e0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_BLADE_AURA_EFFECT_HANDLE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_TRANSFORM_WIND_EFFECT_HANDLE"
                 ,(undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_TRANSFORM_WIND_EFFECT_HANDLE_2",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000df,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_N_BUOYANCY",
                 (undefined **)0x200000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_N_BUOYANCY_BITE",
                 (undefined **)0x200000e1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DISABLE",
                 (undefined **)0x200000e2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DISABLE_FOR_JUMP",
                 (undefined **)0x200000e3,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (677 more lines)
```

## 41. `FUN_7103903710`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103903710`  (offset `0x3903710`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7103903710(long param_1, long param_2, uint param_3)`
- **Size / BBs / Incoming:** 1024 bytes / 50 bb / 2 incoming refs
- **Match values:** dead
- **Strings touched:** too many arguments to resume;cannot resume dead coroutine;too many results to resume
- **Callers:** FUN_7103902fe0;FUN_71039035a0
- **Callees:** FUN_71038f4b20;FUN_71038fb4b0;FUN_71038fc360
- **Files:** [decomp](../decompiled/FUN_7103903710__7103903710.c)  [cfg](../decompiled/FUN_7103903710__7103903710.mmd)
- **Clone hash:** `ab20175a8b3d61fa`

```c

/* WARNING: Removing unreachable block (ram,0x0071039037ec) */
/* WARNING: Removing unreachable block (ram,0x007103903a84) */

ulong FUN_7103903710(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint local_48;
  int local_44;
  
  puVar11 = (ulong *)(param_2 + 0x10);
  uVar6 = *puVar11;
  lVar14 = *(long *)(param_2 + 0x20);
  lVar12 = (long)(int)param_3;
  lVar10 = lVar12;
  local_48 = param_3;
  if (lVar12 < (long)(*(long *)(param_2 + 0x30) - uVar6) >> 4) {
LAB_7103903760:
    uVar6 = uVar6 + lVar10 * 0x10;
    if (*(ulong *)(lVar14 + 8) < uVar6) {
      *(ulong *)(lVar14 + 8) = uVar6;
    }
    if ((*(char *)(param_2 + 0xc) == '\0') &&
       ((int)((ulong)(*(long *)(param_2 + 0x10) - (**(long **)(param_2 + 0x20) + 0x10)) >> 4) == 0))
    {
      pcVar5 = "cannot resume dead coroutine";
// ... (155 more lines)
```

## 42. `FUN_7102195b50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102195b50`  (offset `0x2195b50`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7102195b50(long param_1)`
- **Size / BBs / Incoming:** 300 bytes / 3 bb / 1 incoming refs
- **Match values:** dead
- **Strings touched:** new_instance_lua;is_dead_damage_
- **Callees:** FUN_7101ff91a0;FUN_71038f5390;FUN_71038fec40;FUN_710391d4c0;FUN_710391e050
- **Files:** [decomp](../decompiled/FUN_7102195b50__7102195b50.c)  [cfg](../decompiled/FUN_7102195b50__7102195b50.mmd)
- **Clone hash:** `177477a7bef2760a`

```c

undefined8 FUN_7102195b50(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,2);
  local_58 = 10;
  local_50 = 0x1577592794;
  uStack_48 = 0;
  local_40 = 0xffffffff50000000;
  local_38 = 0;
  local_60 = &DAT_71050b5228;
  FUN_7101ff91a0((long)&local_60,param_1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_7102195c80;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  *puVar4 = 0;
  puVar4[2] = 1;
// ... (6 more lines)
```

## 43. `FUN_7103903230`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103903230`  (offset `0x3903230`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7103903230(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 244 bytes / 14 bb / 1 incoming refs
- **Match values:** dead
- **Strings touched:** thread expected;running;normal;suspended
- **Callees:** FUN_71038f4b20;FUN_71038f6d60
- **Files:** [decomp](../decompiled/FUN_7103903230__7103903230.c)  [cfg](../decompiled/FUN_7103903230__7103903230.mmd)
- **Clone hash:** `737bd6992df4d5b9`

```c

undefined8
FUN_7103903230(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  
  plVar1 = (long *)(**(long **)(param_1 + 0x20) + 0x10);
  if (*(long **)(param_1 + 0x10) <= plVar1) {
    plVar1 = &DAT_7104862960;
  }
  if (((int)plVar1[1] == 0x48) && (lVar4 = *plVar1, lVar4 != 0)) {
    bVar2 = lVar4 == param_1;
  }
  else {
    FUN_71038f6d60(param_1,1,"thread expected",param_4,param_5,param_6,param_7,param_8);
    lVar4 = 0;
    bVar2 = param_1 == 0;
  }
  if (bVar2) {
    pcVar3 = "running";
    goto LAB_710390330c;
  }
  if (*(char *)(lVar4 + 0xc) == '\0') {
    if (*(long **)(lVar4 + 0x20) != (long *)(lVar4 + 0x60)) {
      pcVar3 = "normal";
      goto LAB_710390330c;
    }
    if ((int)((ulong)(*(long *)(lVar4 + 0x10) - (**(long **)(lVar4 + 0x20) + 0x10)) >> 4) != 0)
    goto LAB_7103903304;
  }
  else if (*(char *)(lVar4 + 0xc) == '\x01') {
LAB_7103903304:
    pcVar3 = "suspended";
    goto LAB_710390330c;
  }
// ... (6 more lines)
```

## 44. `FUN_710218ff30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710218ff30`  (offset `0x218ff30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710218ff30(void)`
- **Size / BBs / Incoming:** 9940 bytes / 22 bb / 1 incoming refs
- **Match values:** DEAD
- **Strings touched:** PACMAN_SPECIAL_S_EFFECT_INVALID;FIGHTER_PACMAN_APPEAL_HI_A;FIGHTER_PACMAN_APPEAL_HI_B;FIGHTER_PACMAN_APPEAL_HI_C;FIGHTER_PACMAN_APPEAL_HI_D;FIGHTER_PACMAN_APPEAL_HI_E;FIGHTER_PACMAN_APPEAL_HI_F;FIGHTER_PACMAN_APPEAL_HI_G;FIGHTER_PACMAN_APPEAL_HI_H;FIGHTER_PACMAN_APPEAL_HI_I;FIGHTER_PACMAN_APPEAL_HI_J;FIGHTER_PACMAN_APPEAL_HI_K;FIGHTER_PACMAN_APPEAL_HI_L;FIGHTER_PACMAN_APPEAL_HI_M;FIGHTER_PACMAN_APPEAL_HI_N;FIGHTER_PACMAN_APPEAL_HI_O;FIGHTER_PACMAN_APPEAL_HI_P;FIGHTER_PACMAN_APPEAL_HI_Q;FIGHTER_PACMAN_APPEAL_HI_R;FIGHTER_PACMAN_APPEAL_HI_S;FIGHTER_PACMAN_APPEAL_HI_T;FIGHTER_PACMAN_APPEAL_HI_U;FIGHTER_PACMAN_APPEAL_HI_NUM;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_START;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SMASH_ANIMATION;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_CLIFF_COUNT;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_N_ITEM_ID;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE_RANK;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_HI_JUMP_NUM;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_S_ITEM_ID;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_WAIT_FRAME;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_APPEAL_HI_KIND;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710218ff30__710218ff30.c)  [cfg](../decompiled/FUN_710218ff30__710218ff30.mmd)
- **Clone hash:** `8c80f5b57aef35de`

```c

void FUN_710218ff30(void)

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
  FUN_71037289c0(&local_78,(uint *)"PACMAN_SPECIAL_S_EFFECT_INVALID",(undefined **)&DAT_ffffffff,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = -3;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_A",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_B",(undefined **)0x2,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_C",(undefined **)&DAT_00000004,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_D",(undefined **)&DAT_00000008,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_E",(undefined **)&DAT_00000010,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_F",(undefined **)&SUB_00000020,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_G",(undefined **)&DAT_00000040,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_H",(undefined **)&DAT_00000080,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_I",(undefined **)&DAT_00000100,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_J",(undefined **)&DAT_00000200,in_x3,
// ... (1082 more lines)
```

## 45. `FUN_71021368b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021368b0`  (offset `0x21368b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021368b0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5556 bytes / 7 bb / 2 incoming refs
- **Match values:** DEAD
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

## 46. `FUN_7100022b50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100022b50`  (offset `0x22b50`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100022b50(long * param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 152 bytes / 8 bb / 1 incoming refs
- **Match values:** dead
- **Strings touched:** Connection %ld seems to be dead!

- **Callees:** FUN_7100015800;FUN_7100015de0;FUN_710001e860
- **Files:** [decomp](../decompiled/FUN_7100022b50__7100022b50.c)  [cfg](../decompiled/FUN_7100022b50__7100022b50.mmd)
- **Clone hash:** `cf043572a13e9185`

```c

undefined8
FUN_7100022b50(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_1[0x11d] + param_1[0x121] == 0) && ((char)param_1[0xc] == '\0')) {
    if (*(code **)(param_1[0x10b] + 0x70) == (code *)0x0) {
      param_4 = 0;
      uVar1 = FUN_7100015800(*(uint *)(param_1 + 0x4b),0xffffffff,0xffffffff,0);
      if (uVar1 == 0) {
        return 0;
      }
    }
    else {
      uVar2 = (**(code **)(param_1[0x10b] + 0x70))(param_1,1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    lVar3 = param_1[0xd];
    *param_1 = param_2;
    FUN_7100015de0(param_2,(byte *)"Connection %ld seems to be dead!\n",lVar3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710001e860(param_1,1,lVar3,param_4,param_5,param_6,param_7,param_8);
  }
  return 0;
}


```

## 47. `FUN_710042c940`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710042c940`  (offset `0x42c940`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710042c940(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3596 bytes / 233 bb / 1 incoming refs
- **Match values:** Dead
- **Strings touched:** Brave_Mimic_Reserve1;Brave_Mimic_Reserve2;Brave_Mimic_Attack1;Brave_Mimic_Attack2;Brave_Mimic_Wait;Brave_Mimic_Move;Brave_Mimic_Exit;Brave_Mimic_Dead
- **Callees:** FUN_71000001c0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::std::string::string
- **Files:** [decomp](../decompiled/FUN_710042c940__710042c940.c)  [cfg](../decompiled/FUN_710042c940__710042c940.mmd)
- **Clone hash:** `c78a50e350afdc5e`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_710042c940(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long ****pppplVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  string local_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 local_148;
  undefined4 uStack_147;
  undefined1 uStack_143;
  undefined2 uStack_142;
  byte local_140;
  string local_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 local_128;
  undefined4 uStack_127;
  undefined1 uStack_123;
  undefined2 uStack_122;
  byte local_120;
  string local_118;
  undefined7 uStack_117;
  undefined1 local_110;
// ... (667 more lines)
```

## 48. `FUN_71021860a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021860a0`  (offset `0x21860a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021860a0(void)`
- **Size / BBs / Incoming:** 15404 bytes / 25 bb / 1 incoming refs
- **Match values:** DEAD
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

## 49. `FUN_71021d99a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021d99a0`  (offset `0x21d99a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021d99a0(void)`
- **Size / BBs / Incoming:** 7688 bytes / 13 bb / 1 incoming refs
- **Match values:** DEAD
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

## 50. `FUN_710214fdf0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710214fdf0`  (offset `0x214fdf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710214fdf0(void)`
- **Size / BBs / Incoming:** 7560 bytes / 13 bb / 1 incoming refs
- **Match values:** DEAD
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

