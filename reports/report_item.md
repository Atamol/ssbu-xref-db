# item (funcs=345, hits=6052)

Top 50 functions by hit count

## 1. `FUN_710225b990`  (hits=2538)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** ITEM
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

## 2. `FUN_71020fbb90`  (hits=2206)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** ITEM;Item
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

## 3. `FUN_7101f89310`  (hits=378)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** ITEM
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

## 4. `FUN_710209f330`  (hits=49)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710209f330`  (offset `0x209f330`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710209f330(long param_1)`
- **Size / BBs / Incoming:** 1368 bytes / 4 bb / 2 incoming refs
- **Match values:** Item;item
- **Strings touched:** ItemModule;have_item;have_item_instance;use_item_instance;use_item;pickup_item;is_success_pickup_item;success_auto_pickup_item;is_success_auto_pickup_item;is_have_item;get_have_item_size;get_have_item_kind;get_have_item_trait;get_have_item_hold_kind;get_have_item_status_param_int;TRANS_A_JUMP_AERIAL;get_have_item_status_param_float;get_have_item_status_param_bool;get_have_item_id;get_pickable_item_object_id;get_pickable_item_size;get_pickable_item_kind;get_pickable_item_trait;remove_item;remove_all;throw_item;drop_item;warp_item;warp_attach_item;born_item;shoot_item_bullet;shoot_item_bullet_blanks;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710209f330__710209f330.c)  [cfg](../decompiled/FUN_710209f330__710209f330.mmd)
- **Clone hash:** `680ab56bcc400506`

```c

void FUN_710209f330(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ItemModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"have_item",(long ****)FUN_7102099050,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"have_item_instance",(long ****)FUN_7102099350,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"use_item_instance",(long ****)FUN_71020997a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"use_item",(long ****)FUN_71020999a0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"pickup_item",(long ****)FUN_7102099b80,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_success_pickup_item",(long ****)FUN_7102099db0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"success_auto_pickup_item",(long ****)FUN_7102099e80,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_success_auto_pickup_item",(long ****)FUN_7102099f30,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_have_item",(long ****)FUN_710209a000,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_size",(long ****)FUN_710209a150,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_kind",(long ****)FUN_710209a2b0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_trait",(long ****)FUN_710209a410,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_hold_kind",(long ****)FUN_710209a570,ppppbVar1,
// ... (89 more lines)
```

## 5. `FUN_7101f45620`  (hits=29)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** Item;item
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

## 6. `FUN_71019c9340`  (hits=24)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019c9340`  (offset `0x19c9340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019c9340(undefined8 * param_1, long * param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2420 bytes / 88 bb / 2 incoming refs
- **Match values:** item
- **Strings touched:** 0qA_7;set_parts_stick;selector_0;set_color_item_%02d;color_%02d
- **Callers:** FUN_7101808940;FUN_710197fba0
- **Callees:** FUN_71019c9cc0;FUN_71019e0b00;FUN_71032cbf30;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_7103773200;FUN_7103776640;FUN_7103778430;FUN_7103778760;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_71019c9340__71019c9340.c)  [cfg](../decompiled/FUN_71019c9340__71019c9340.mmd)
- **Clone hash:** `6da0d8c10f0459bf`

```c

void FUN_71019c9340(undefined8 *param_1,long *param_2,byte ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined **local_1a0;
  ulong local_198;
  byte ***local_190;
  undefined2 local_188;
  undefined4 local_186;
  undefined2 local_182;
  undefined4 local_180;
  undefined2 local_17c;
  undefined1 local_17a;
  undefined1 *local_178;
  undefined4 local_170;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  undefined4 local_70;
  undefined **local_60;
  ulong local_58;
// ... (397 more lines)
```

## 7. `FUN_710226f500`  (hits=24)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226f500`  (offset `0x226f500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226f500(long param_1)`
- **Size / BBs / Incoming:** 23732 bytes / 622 bb / 1 incoming refs
- **Match values:** ITEM;item
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

## 8. `FUN_7102219310`  (hits=21)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102219310`  (offset `0x2219310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102219310(long param_1)`
- **Size / BBs / Incoming:** 10116 bytes / 52 bb / 2 incoming refs
- **Match values:** item
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

## 9. `FUN_7101fc7f30`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fc7f30`  (offset `0x1fc7f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fc7f30(long param_1)`
- **Size / BBs / Incoming:** 8568 bytes / 4 bb / 2 incoming refs
- **Match values:** ITEM
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

## 10. `FUN_7101bb4ae0`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bb4ae0`  (offset `0x1bb4ae0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bb4ae0(long * * * * param_1)`
- **Size / BBs / Incoming:** 15804 bytes / 861 bb / 1 incoming refs
- **Match values:** item
- **Strings touched:** set_current_main;set_current_others;set_current_items;in_menu;menu_main_to_others;menu_main_to_items;menu_others_to_main;menu_items_to_main;menu_item_out;menu_item_in;menu_itemset_default;menu_itemset_monsterball;menu_itemset_assist;menu_itemset_masterball;out_menu;in_numbers;out_numbers;in_speed;out_speed;help_off;help_items_default;help_items_finish;category_00;category_01;category_02;category_03;category_04;category_05;category_06;category_07;category_08;category_09;...
- **Callers:** FUN_7101bb15f0
- **Callees:** FUN_7101989a30;FUN_7101a7ed70;FUN_7101bb88a0;FUN_7101bb8df0;FUN_7101bb9290;FUN_7101bb9c00;FUN_7101bba3b0;FUN_7101bba3c0;FUN_7101bba4e0;FUN_7101bba4f0;FUN_7101bba5e0;FUN_7101bba5f0;FUN_7101bba6e0;FUN_7101bba6f0;FUN_7101bba7e0;FUN_7101bba7f0;...
- **Files:** [decomp](../decompiled/FUN_7101bb4ae0__7101bb4ae0.c)  [cfg](../decompiled/FUN_7101bb4ae0__7101bb4ae0.mmd)
- **Clone hash:** `dd5d217e5e799b73`

```c

void FUN_7101bb4ae0(long ****param_1)

{
  long ****pppplVar1;
  long ****pppplVar2;
  char cVar3;
  ulong uVar4;
  long ***ppplVar5;
  long ***ppplVar6;
  ulong uVar7;
  long *plVar8;
  long ****pppplVar9;
  long *********ppppppppplVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte ****ppppbVar14;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar15;
  long **pplVar16;
  code *pcVar17;
  long ***ppplVar18;
  byte **ppbVar19;
  long lVar20;
  long ***ppplVar21;
  long ***ppplVar22;
  long lVar23;
  long ***local_2e0;
  long ***local_2d8;
  long ***local_2d0;
  long ***local_2c8;
  long ***local_2c0;
  long ***local_2b8;
  long ***local_2b0;
  long ***local_2a8;
  long ***local_2a0;
// ... (2578 more lines)
```

## 11. `FUN_7101c17270`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c17270`  (offset `0x1c17270`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c17270(long param_1, int param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1136 bytes / 56 bb / 1 incoming refs
- **Match values:** item
- **Strings touched:** set_rep_item;set_rep_item_sdw;bg_category;set_txt_item_category;category_%02d;set_txt_item_name;mode_empty_03;set_txt_item_help;mel_rule_item_help_allbutton_on;nam_item_%s;nam_item_help_%s;txt_positoin_00;mel_rule_item_help_allbutton_off;txt_positoin_01
- **Callees:** FUN_71003a4ca0;FUN_710323f8d0;FUN_710327fc30;FUN_7103280000;FUN_71033980b0;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_7103778b80;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101c17270__7101c17270.c)  [cfg](../decompiled/FUN_7101c17270__7101c17270.mmd)
- **Clone hash:** `e67e5df7ffdb6053`

```c

void FUN_7101c17270(long param_1,int param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  long *********ppppppppplVar10;
  long ****pppplVar11;
  long lVar12;
  long lVar13;
  long ****pppplVar14;
  long lVar15;
  long lVar16;
  undefined **local_148;
  long *local_140;
  undefined **local_138;
  ulong local_130 [8];
  undefined **local_f0;
  long *local_e8;
  undefined **local_e0;
  long *local_d8;
  undefined **local_d0;
  long *local_c8;
  undefined **local_c0;
  long *local_b8;
  undefined **local_b0;
  long *local_a8 [9];
  
  if (-1 < param_2) {
    if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3))
    {
      if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
// ... (185 more lines)
```

## 12. `FUN_71037f8180`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** item
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

## 13. `FUN_7100033a40`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** item
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

## 14. `FUN_71019c9fe0`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019c9fe0`  (offset `0x19c9fe0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019c9fe0(long param_1, byte param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1436 bytes / 86 bb / 2 incoming refs
- **Match values:** item
- **Strings touched:** set_color_item_%02d;selectedoff;selectedon
- **Callers:** FUN_710180b630;FUN_7101987990
- **Callees:** FUN_7103771a80;FUN_7103776640;FUN_7103778300;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_71019c9fe0__71019c9fe0.c)  [cfg](../decompiled/FUN_71019c9fe0__71019c9fe0.mmd)
- **Clone hash:** `05a55a494026fb36`

```c

void FUN_71019c9fe0(long param_1,byte param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined **local_40;
  ulong local_38;
  
  FUN_7103771a80((long *)(param_1 + 0xd0),(uint)param_2,0);
  *(uint *)(param_1 + 0xd8) = (uint)param_2;
  *(uint *)(param_1 + 0xdc) = (uint)param_2;
  *(uint *)(param_1 + 0xe0) = (uint)param_2;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  lVar1 = **(long **)(param_1 + 200) + 8;
  FUN_7103776640(&local_40,lVar1,(byte ****)"set_color_item_%02d",0,param_4,param_5,param_6,param_7,
                 param_8);
  if (param_2 == 0) {
    pcVar4 = "selectedon";
  }
  else {
    pcVar4 = "selectedoff";
  }
  FUN_7103778300(0x3f800000,local_38,(long)pcVar4);
  uVar2 = local_38;
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_40,lVar1,(byte ****)"set_color_item_%02d",1,param_4,param_5,param_6,param_7,
// ... (233 more lines)
```

## 15. `FUN_7101f94540`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f94540`  (offset `0x1f94540`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f94540(long param_1)`
- **Size / BBs / Incoming:** 1752 bytes / 4 bb / 2 incoming refs
- **Match values:** item
- **Strings touched:** LuaAutomaticTest;print;set_fighter_num;gauge_parts_on;set_fighter_kind;get_fighter_kind;set_fighter_color;set_fighter_cp_flag;change_fighter;is_reloaded_fighter;is_fighter_status_wait;set_all_fighter_visibility;mode_empty_03;get_fighter_animcmd;set_stage;set_stage_visibility;set_waiting_frames;get_waiting_frames;begin_melee;is_melee_started;start_melee;end_melee;start_measuring_load;end_measuring_load;set_melee_pause;random;set_all_info_visibility;set_bool_of_debug_resident_menu;get_bool_of_debug_resident_menu;set_int_of_debug_resident_menu;get_int_of_debug_resident_menu;set_float_of_debug_resident_menu;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101f94540__7101f94540.c)  [cfg](../decompiled/FUN_7101f94540__7101f94540.mmd)
- **Clone hash:** `75eef1448bd6895c`

```c

void FUN_7101f94540(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"LuaAutomaticTest",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"print",(long ****)FUN_7101f8fa20,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_num",(long ****)FUN_7101f8fb10,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_kind",(long ****)FUN_7101f8fbb0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_kind",(long ****)FUN_7101f8fcf0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_color",(long ****)FUN_7101f8fdc0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_cp_flag",(long ****)FUN_7101f8fe80,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_fighter",(long ****)FUN_7101f8ffc0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_reloaded_fighter",(long ****)FUN_7101f900f0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_fighter_status_wait",(long ****)FUN_7101f901d0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_all_fighter_visibility",(long ****)FUN_7101f90320,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_animcmd",(long ****)FUN_7101f90500,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_stage",(long ****)FUN_7101f905a0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
// ... (122 more lines)
```

## 16. `FUN_7101b16690`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b16690`  (offset `0x1b16690`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b16690(long param_1, int * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 13100 bytes / 576 bb / 1 incoming refs
- **Match values:** item
- **Strings touched:** set_txt_item_name_00;set_txt_item_name_01;spi_%s;set_txt_item_caption;mnu_insert_popup_help_%s;data_spirit_01;data_release_00;data_spirit_00;layout_other;layout_shop;data_get_01;data_release_01;set_txt_header;set_txt_header_shadow;data_get_02;data_get_00;mnu_insert_popup_recall;mnu_insert_popup_grade_up;mnu_insert_popup_unlock;set_parts_new;set_parts_new_r;mnu_insert_popup_get;category_color_07;set_txt_category;set_parts_item;prize_popup;mode_empty_03;set_parts_spirit;set_rep_spirit_aw_sdw;set_parts_paramset;set_txt_item_music;set_parts_txt_gold;...
- **Callers:** FUN_71032ea290
- **Callees:** FUN_71003a4ca0;FUN_7101780fd0;FUN_7101b11160;FUN_7101b11bd0;FUN_7101b14960;FUN_7101b15150;FUN_7101b16520;FUN_7101b199c0;FUN_71025ae1b0;FUN_71025ae6d0;FUN_71025c9890;FUN_71032575c0;FUN_710325dd40;FUN_710327c2f0;FUN_710327cd40;FUN_710327d0d0;...
- **Files:** [decomp](../decompiled/FUN_7101b16690__7101b16690.c)  [cfg](../decompiled/FUN_7101b16690__7101b16690.mmd)
- **Clone hash:** `ac4ba44036773f6d`

```c

void FUN_7101b16690(long param_1,int *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  undefined6 uVar10;
  byte ***pppbVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  byte **ppbVar19;
  undefined1 uVar20;
  ushort uVar21;
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
// ... (2012 more lines)
```

## 17. `FUN_7102137e70`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102137e70`  (offset `0x2137e70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102137e70(long param_1)`
- **Size / BBs / Incoming:** 9332 bytes / 208 bb / 1 incoming refs
- **Match values:** Item;item
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

## 18. `FUN_7101daf1a0`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101daf1a0`  (offset `0x1daf1a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101daf1a0(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2728 bytes / 90 bb / 3 incoming refs
- **Match values:** item
- **Strings touched:** set_parts_item;set_txt_item;set_txt_help_item;set_parts_btn_s_item;show_icon_item;set_rep_item;hide_icon_item;item_off;%s.bntx;item_on
- **Callers:** FUN_71018f10d0;FUN_71018f30a0;FUN_7101dacc40
- **Callees:** FUN_71024076d0;FUN_7103239920;FUN_7103239d20;FUN_710323c4e0;FUN_7103240590;FUN_710327cd40;FUN_710327d930;FUN_7103313f20;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_7103778b80;FUN_710377a120;FUN_710377aee0;FUN_710377b140;...
- **Files:** [decomp](../decompiled/FUN_7101daf1a0__7101daf1a0.c)  [cfg](../decompiled/FUN_7101daf1a0__7101daf1a0.mmd)
- **Clone hash:** `29c48f960c8e2838`

```c

void FUN_7101daf1a0(long param_1,ulong param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  long ****pppplVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar12;
  bool bVar13;
  long lVar14;
  undefined4 local_218 [2];
  undefined **local_210;
  long local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined **local_1d8;
  ulong local_1d0;
  undefined **local_1c8;
  ulong local_1c0;
  undefined **local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined2 local_190;
  undefined8 local_18e;
  uint local_186;
  ushort local_182;
  uint local_98 [2];
// ... (413 more lines)
```

## 19. `FUN_7101d28100`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d28100`  (offset `0x1d28100`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d28100(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1640 bytes / 83 bb / 1 incoming refs
- **Match values:** item
- **Strings touched:** set_btn_item_%02d;anim_card_arrival
- **Callees:** FUN_710062dc20;FUN_7103776640;FUN_71037964b0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101d28100__7101d28100.c)  [cfg](../decompiled/FUN_7101d28100__7101d28100.mmd)
- **Clone hash:** `d51f6c954cc51cd4`

```c

void FUN_7101d28100(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined **local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [64];
  
  local_a0[0] = 0;
  uVar13 = 0;
  local_a8 = 0;
  FUN_710062dc20((uint *)&local_a8,"set_btn_item_%02d");
  FUN_7103776640(&local_b8,**(long **)(param_1 + 0x130) + 8,(byte ****)local_a0,uVar13,param_4,
                 param_5,param_6,param_7,param_8);
  uVar14 = local_b0;
  if ((*(long *)(local_b0 + 8) == 0) ||
     (plVar11 = (long *)FUN_71037964b0(*(long *)(local_b0 + 8),0x71044225ea), plVar11 == (long *)0x0
     )) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar11 + 0x130))();
    uVar14 = local_b0;
  }
// ... (269 more lines)
```

## 20. `FUN_71018bef50`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018bef50`  (offset `0x18bef50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018bef50(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, byte * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 9596 bytes / 403 bb / 1 incoming refs
- **Match values:** item
- **Strings touched:** selector_0;set_parts_btn_01;set_parts_btn_00;set_parts_gold_count;set_parts_gold;set_txt_num;mnu_shop_gold_n;anim_count;anim_stop;map_anim;set_btn_item_%02d
- **Callers:** FUN_71018c15b0
- **Callees:** FUN_71000001c0;FUN_710062dc20;FUN_7101764000;FUN_7101782120;FUN_71017abc20;FUN_7101989a30;FUN_7101d2aaf0;FUN_7101d2ad80;FUN_7101d2b290;FUN_710323beb0;FUN_710323c1c0;FUN_710323cb80;FUN_710329c430;FUN_710329eed0;FUN_71032a7800;FUN_71032cad20;...
- **Files:** [decomp](../decompiled/FUN_71018bef50__71018bef50.c)  [cfg](../decompiled/FUN_71018bef50__71018bef50.mmd)
- **Clone hash:** `11a2d26644bc5690`

```c

void FUN_71018bef50(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   byte ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  undefined2 *puVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined ***pppuVar24;
  ulong uVar25;
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
// ... (1775 more lines)
```

## 21. `FUN_7101ad6060`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ad6060`  (offset `0x1ad6060`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ad6060(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1884 bytes / 95 bb / 1 incoming refs
- **Match values:** item
- **Strings touched:** set_btn_item_%02d;anim_card_arrival
- **Callees:** FUN_710062dc20;FUN_7103776640;FUN_71037964b0;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101ad6060__7101ad6060.c)  [cfg](../decompiled/FUN_7101ad6060__7101ad6060.mmd)
- **Clone hash:** `ad4f4e48ebda84f5`

```c

void FUN_7101ad6060(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint local_c4;
  undefined **local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [64];
  
  uVar12 = 0;
  local_a0[0] = 0;
  local_a8 = 0;
  FUN_710062dc20((uint *)&local_a8,"set_btn_item_%02d");
  if (*(undefined8 **)(param_1 + 0x18) != *(undefined8 **)(param_1 + 0x10)) {
    FUN_7103776640(&local_b8,**(long **)**(undefined8 **)(param_1 + 0x10) + 8,(byte ****)local_a0,
                   uVar12,param_4,param_5,param_6,param_7,param_8);
    uVar13 = local_b0;
    if ((*(long *)(local_b0 + 8) == 0) ||
       (plVar10 = (long *)FUN_71037964b0(*(long *)(local_b0 + 8),0x71044225ea),
       plVar10 == (long *)0x0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*plVar10 + 0x130))();
      uVar13 = local_b0;
// ... (304 more lines)
```

## 22. `FUN_71019cb2e0`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019cb2e0`  (offset `0x19cb2e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019cb2e0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3880 bytes / 140 bb / 8 incoming refs
- **Match values:** item
- **Strings touched:** set_item_00;set_txt_val;set_item_01;set_item_02;set_txt_val_dis;set_item_03;color_%02d;set_item_04;set_txt_num_0%d;set_txt_num_0%d_dis;nam_special_%s_%02d_%s;normal;set_txt_name_0%d;set_txt_name_0%d_dis;chara/chara_4/chara_4_;upper;lower;set_item_05;set_txt_val2;set_txt_val2_dis;category_05;mnu_mmiif_setup_voice_type_none;category_04;mnu_mmiif_setup_voice_type_n;mnu_mmiif_setup_voice_02;favorite_on;favorite_off;unedit_on;maker_on;set_txt_makername;unedit_off;maker_off;...
- **Callers:** FUN_7101808940;FUN_710180a570;FUN_710180ab90;FUN_710180b180;FUN_710180b630;FUN_710180b9e0;FUN_710180bc20;FUN_71019cada0
- **Callees:** FUN_71003a4ca0;FUN_7103262310;FUN_7103284890;FUN_71032888e0;FUN_710328cb60;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_710377a120;FUN_710377a280;FUN_710377a310;FUN_71037a2270;FUN_71037ad940;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;...
- **Files:** [decomp](../decompiled/FUN_71019cb2e0__71019cb2e0.c)  [cfg](../decompiled/FUN_71019cb2e0__71019cb2e0.mmd)
- **Clone hash:** `2d89456addf794b7`

```c

void FUN_71019cb2e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  byte bVar16;
  byte *pbVar17;
  long lVar18;
  long *plVar19;
  undefined **local_158;
  long *local_150;
  undefined **local_148;
  long *local_140;
  undefined **local_138;
  long *local_130;
  undefined **local_128;
  ulong local_120;
  undefined **local_118;
  ulong local_110 [8];
  undefined **local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
// ... (692 more lines)
```

## 23. `FUN_7102841990`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102841990`  (offset `0x2841990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102841990(byte * * * * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, char * param_8)`
- **Size / BBs / Incoming:** 9920 bytes / 543 bb / 1 incoming refs
- **Match values:** Item
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

## 24. `FUN_7101fa11c0`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** item
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

## 25. `FUN_71018ebba0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018ebba0`  (offset `0x18ebba0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018ebba0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3352 bytes / 162 bb / 1 incoming refs
- **Match values:** item
- **Strings touched:** set_parts_use_item;set_txt_item;nam_goods_spirit_all_shuffle;nam_goods_spirit_all_attacker;nam_goods_spirit_all_supporter;nam_goods_spirit_reloaded;nam_goods_spirit_retry_ticket;set_rep_item
- **Callees:** FUN_710177a5c0;FUN_71018ed9a0;FUN_7101d94b00;FUN_7101d98f30;FUN_7101d9a010;FUN_71024076d0;FUN_71024a6430;FUN_7103240590;FUN_71032673c0;FUN_7103267960;FUN_7103267ce0;FUN_7103313f20;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;...
- **Files:** [decomp](../decompiled/FUN_71018ebba0__71018ebba0.c)  [cfg](../decompiled/FUN_71018ebba0__71018ebba0.mmd)
- **Clone hash:** `63a5f56056b49ea7`

```c

void FUN_71018ebba0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined **ppuVar8;
  bool bVar9;
  uint uVar10;
  long *plVar11;
  undefined *puVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  long *********ppppppppplVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  short *psVar18;
  uint uVar19;
  ulong uVar20;
  ushort uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined1 auVar25 [16];
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
// ... (516 more lines)
```

## 26. `FUN_7101a91d70`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a91d70`  (offset `0x1a91d70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a91d70(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6436 bytes / 353 bb / 3 incoming refs
- **Match values:** item
- **Strings touched:** set_part_footer;set_rep_pic_reward_00;set_rep_spirits;set_rep_spirits_shadow;set_txt_title;set_txt_mission;set_txt_item;mnu_clear_getter_title_lock;mnu_clear_getter_mission_lock;mnu_clear_getter_item_lock;txt_item_name_def;hammer_on;hammer_off;nam_item_%s;dammy;nam_chr1_%02d_%s;mnu_insert_popup_reward_g;txt_item_name_gold;mnu_insert_popup_reward_sp;txt_item_name_sp
- **Callers:** FUN_7101a8b9b0;FUN_7101a93f80
- **Callees:** FUN_71003a4ca0;FUN_7101780fd0;FUN_7101a939e0;FUN_7101a93c30;FUN_7101b11530;FUN_710259d0a0;FUN_71025ae1b0;FUN_71025c9890;FUN_7103262310;FUN_7103263540;FUN_7103267660;FUN_7103267960;FUN_7103267fe0;FUN_7103268360;FUN_7103269eb0;FUN_710326a3e0;...
- **Files:** [decomp](../decompiled/FUN_7101a91d70__7101a91d70.c)  [cfg](../decompiled/FUN_7101a91d70__7101a91d70.mmd)
- **Clone hash:** `cbca515a3a5c336b`

```c

void FUN_7101a91d70(long param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  undefined2 *puVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *********ppppppppplVar14;
  undefined1 *puVar15;
  long lVar16;
  byte *pbVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  char *pcVar27;
  long lVar28;
  uint uVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 *puVar32;
  long ********local_1e0;
  undefined8 local_1d8;
  ulong local_1d0;
// ... (1208 more lines)
```

## 27. `FUN_7101ca1830`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ca1830`  (offset `0x1ca1830`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ca1830(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1340 bytes / 46 bb / 4 incoming refs
- **Match values:** item
- **Strings touched:** itemselect_%02d;mode_empty_03;set_txt_item_help;mnu_anyone_rule_edit_item_help_on_all;mnu_anyone_rule_edit_item_help_on;mnu_anyone_rule_edit_item_help_off;mnu_anyone_rule_edit_item_help_mes_06;mnu_anyone_rule_edit_item_help_off_all;mnu_anyone_rule_edit_item_help_mes_07
- **Callers:** FUN_7101c9d490
- **Callees:** FUN_710062dc20;FUN_7103771d60;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101ca1830__7101ca1830.c)  [cfg](../decompiled/FUN_7101ca1830__7101ca1830.mmd)
- **Clone hash:** `060b1a257b855f89`

```c

void FUN_7101ca1830(long param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  long ****pppplVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined8 local_be;
  undefined4 local_b6;
  undefined2 local_b2;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined **local_90;
  ulong local_88;
  uint local_80 [2];
  undefined1 local_78 [68];
  ushort local_34 [2];
  
  if ((int)param_2 < 0) {
    return;
  }
  uVar8 = (ulong)(int)param_2;
  if ((ulong)(*(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228) >> 2) <= uVar8) {
    return;
  }
  local_78[0] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  FUN_710062dc20(local_80,"itemselect_%02d");
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x120),(long)local_78);
// ... (167 more lines)
```

## 28. `FUN_7101d61c00`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d61c00`  (offset `0x1d61c00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d61c00(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 16924 bytes / 862 bb / 1 incoming refs
- **Match values:** item
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

## 29. `FUN_71019b20c0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019b20c0`  (offset `0x19b20c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019b20c0(long * * * * * * * * param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8128 bytes / 315 bb / 1 incoming refs
- **Match values:** item
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

## 30. `FUN_7101b36660`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b36660`  (offset `0x1b36660`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b36660(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 792 bytes / 35 bb / 1 incoming refs
- **Match values:** item
- **Strings touched:** set_parts_scr_item_%02d;line_on
- **Callees:** FUN_7103776640;FUN_7103778300;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101b36660__7101b36660.c)  [cfg](../decompiled/FUN_7101b36660__7101b36660.mmd)
- **Clone hash:** `f55530c962254d43`

```c

void FUN_7101b36660(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined **local_50;
  ulong local_48;
  
  if (*(char *)(param_1 + 500) != '\0') {
    if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3) < 2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar3 = *(long *)**(undefined8 **)(*(long *)(param_1 + 0x10) + 8) + 8;
    FUN_7103776640(&local_50,lVar3,(byte ****)"set_parts_scr_item_%02d",0,param_4,param_5,param_6,
                   param_7,param_8);
    uVar1 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x71043be3fe);
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar1 != 0) {
      uVar2 = *(ulong *)(uVar1 + 0x18);
      *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar1 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar1);
    }
    FUN_7103776640(&local_50,lVar3,(byte ****)"set_parts_scr_item_%02d",1,param_4,param_5,param_6,
                   param_7,param_8);
    uVar1 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x71043be3fe);
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar1 != 0) {
      uVar2 = *(ulong *)(uVar1 + 0x18);
// ... (95 more lines)
```

## 31. `FUN_7101b36df0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b36df0`  (offset `0x1b36df0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b36df0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1244 bytes / 60 bb / 2 incoming refs
- **Match values:** item
- **Strings touched:** set_part_btn;set_parts_scr_item_%02d;line_off;mnu_opt_select_song_help_random_all
- **Callers:** FUN_7101b372d0
- **Callees:** FUN_7103776640;FUN_7103776ad0;FUN_7103778300;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101b36df0__7101b36df0.c)  [cfg](../decompiled/FUN_7101b36df0__7101b36df0.mmd)
- **Clone hash:** `5a4e10ae9bfef693`

```c

void FUN_7101b36df0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined **local_a8;
  undefined8 local_a0;
  undefined **local_60;
  long *local_58;
  
  if (*(char *)(param_1 + 500) == '\0') {
    return;
  }
  if (2 < *(uint *)(param_1 + 0x1fc)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar9 = *(ulong *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1fc) * 0x28 + 0xf8) & 0xffffffffff;
  if (uVar9 < 0x171954c00c) {
    if (uVar9 == 0xc40bf5050) {
      uVar8 = 3;
    }
    else {
      if (uVar9 != 0x154b5c4392) {
LAB_7101b36ea8:
        *(undefined1 *)(*(long *)(param_1 + 0x380) + 0x2c) = 0;
        return;
      }
      uVar8 = 0;
// ... (182 more lines)
```

## 32. `FUN_7102123d40`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102123d40`  (offset `0x2123d40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102123d40(void)`
- **Size / BBs / Incoming:** 74688 bytes / 187 bb / 1 incoming refs
- **Match values:** ITEM
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

## 33. `FUN_7101ca4730`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ca4730`  (offset `0x1ca4730`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ca4730(long param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3856 bytes / 168 bb / 2 incoming refs
- **Match values:** item
- **Strings touched:** set_itemstat_%02d;set_parts_items_%02d;type_others;type_item;selector_select;set_parts_mode_00;mode_empty_03;set_parts_mode_01;item_off;item_on;selector_edit;set_parts_category_%02d;mode_other;mode_item;set_btn_decide;selector_guide;btn_init
- **Callers:** FUN_71018821d0;FUN_71018861b0
- **Callees:** FUN_710062dc20;FUN_7101989a30;FUN_7101a7ed70;FUN_7101c9f4e0;FUN_7101ca10c0;FUN_7101ca2e30;FUN_7101ca2e40;FUN_710337dab0;FUN_710337dac0;FUN_710376b960;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103771d60;FUN_7103776640;FUN_7103778300;...
- **Files:** [decomp](../decompiled/FUN_7101ca4730__7101ca4730.c)  [cfg](../decompiled/FUN_7101ca4730__7101ca4730.mmd)
- **Clone hash:** `b8c17ff78b24d1a3`

```c

void FUN_7101ca4730(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  byte ***pppbVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  byte ****ppppbVar6;
  undefined8 uVar7;
  byte ****ppppbVar8;
  long *plVar9;
  byte **ppbVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  byte ***local_420;
  byte ***local_418;
  undefined8 local_410;
  undefined1 *local_408;
  byte ****local_400;
  long alStack_3f0 [4];
  long *local_3d0;
  long alStack_3c0 [4];
  long *local_3a0;
  long alStack_390 [4];
  long *local_370;
  long alStack_360 [4];
  long *local_340;
  long alStack_330 [4];
  long *local_310;
// ... (628 more lines)
```

## 34. `FUN_7101b11bd0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b11bd0`  (offset `0x1b11bd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b11bd0(long param_1, ulong * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10176 bytes / 411 bb / 7 incoming refs
- **Match values:** item
- **Strings touched:** music_pic_series;size_m;set_parts_text_scroll;prize_goods;set_parts_atr_class;hidden;bg_mii_item;set_txt_num;set_txt_num_sdw;bg_music;bgm_title_%s;nam_goods_%s;bg_spirits_item;bg_spirits_energy;num_hide;new_show;new_hide;set_parts_gold_sp;anim_00;prize_gold;bg_gold;bg_standard_ticket;prize_sp;bg_sp;volume_l;volume_s;bg_skill_ball;set_parts_%02d;mnu_reward_item_n;num_show;volume_m;prize_spirit;...
- **Callers:** FUN_7101b02410;FUN_7101b16690
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_7101b11920;FUN_7101b14390;FUN_71032570e0;FUN_71032575c0;FUN_710327cd40;FUN_710327d3b0;FUN_710327d930;FUN_71032817a0;FUN_7103284890;FUN_7103284fe0;FUN_71032853d0;FUN_71032888e0;FUN_7103289030;FUN_7103289420;...
- **Files:** [decomp](../decompiled/FUN_7101b11bd0__7101b11bd0.c)  [cfg](../decompiled/FUN_7101b11bd0__7101b11bd0.mmd)
- **Clone hash:** `6d89b1142cfaea01`

```c

void FUN_7101b11bd0(long param_1,ulong *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined2 *puVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  undefined6 uVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 uVar16;
  char *pcVar17;
  undefined8 uVar18;
  ulong *puVar19;
  long *********ppppppppplVar20;
  byte ****ppppbVar21;
  int iVar22;
  long *plVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long *plVar32;
  long *plVar33;
  int iVar34;
  long ********apppppppplStack_250 [9];
// ... (1680 more lines)
```

## 35. `FUN_7101e70e20`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e70e20`  (offset `0x1e70e20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e70e20(long param_1, ulong param_2, long * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1048 bytes / 44 bb / 5 incoming refs
- **Match values:** item
- **Strings touched:** mode_empty_03;item_support;item_enforce;item_skill;nam_goods_%s;set_txt_name;cam_shop_camp_skill_n;set_txt_num;cam_shop_item_possess_n;cam_shop_item_name
- **Callers:** FUN_7101e6ee70
- **Callees:** FUN_71003a4ca0;FUN_710327cd40;FUN_710327d3b0;FUN_710327d930;FUN_710327de70;FUN_7103776910;FUN_7103778300;FUN_710377a280;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101e70e20__7101e70e20.c)  [cfg](../decompiled/FUN_7101e70e20__7101e70e20.mmd)
- **Clone hash:** `bfcf768ff5164244`

```c

void FUN_7101e70e20(long param_1,ulong param_2,long *param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_e0;
  byte local_d8 [64];
  undefined **local_98;
  ulong local_90 [8];
  
  lVar12 = *(long *)(DAT_710532f730 + 8);
  plVar6 = param_3;
  uVar3 = FUN_710327d3b0(*(long *)(lVar12 + 0x318),param_2);
  uVar3 = uVar3 & 0xffffffffff;
  if (uVar3 < 0xdaaec3d9f) {
    if (uVar3 == 0x32eb55cc9) {
      lVar4 = *(long *)(param_1 + 8);
      pcVar5 = "item_skill";
    }
    else {
      if (uVar3 != 0x697117991) goto LAB_7101e70f04;
      lVar4 = *(long *)(param_1 + 8);
      pcVar5 = "item_enforce";
    }
LAB_7101e70efc:
    FUN_7103778300(0x3f800000,lVar4,(long)pcVar5);
// ... (111 more lines)
```

## 36. `FUN_7101c18c70`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c18c70`  (offset `0x1c18c70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c18c70(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2540 bytes / 101 bb / 1 incoming refs
- **Match values:** ITEM;item
- **Strings touched:** set_part_item_%02d;set_rep_00;set_parts_freq_crs_area;update_info_item_selector;update_info_appear_selector;get_global_parameter_appear;get_global_parameter_on_off;set_edit_parameter;out_com_frame;is_can_edit;ITEM_PANEL_MAX;ITEM_PANEL_LIST_NUM;ITEM_PANEL_ALL_ON_OFF;ITEM_APPEAR_NUM;create_data
- **Callers:** FUN_710186fcf0
- **Callees:** FUN_71000001c0;FUN_71013e71a0;FUN_7101764000;FUN_7101c18390;FUN_710323eba0;FUN_710323f8d0;FUN_71032cb040;FUN_7103375650;FUN_7103376af0;FUN_7103377130;FUN_7103776640;FUN_7103776910;FUN_7103776ad0;FUN_7103778b80;FUN_71038f4b20;FUN_71038f4d40;...
- **Files:** [decomp](../decompiled/FUN_7101c18c70__7101c18c70.c)  [cfg](../decompiled/FUN_7101c18c70__7101c18c70.mmd)
- **Clone hash:** `596f3baa0053c554`

```c

void FUN_7101c18c70(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long ***ppplVar8;
  long *plVar9;
  long *****ppppplVar10;
  long *********ppppppppplVar11;
  long ****pppplVar12;
  char *pcVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  long **pplVar21;
  long ****local_d0;
  long ****local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long ***local_88;
  ulong local_80;
  undefined8 local_78;
  ulong local_70;
  undefined4 local_64;
  
// ... (426 more lines)
```

## 37. `FUN_7101e3db10`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e3db10`  (offset `0x1e3db10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e3db10(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2000 bytes / 79 bb / 2 incoming refs
- **Match values:** item
- **Strings touched:** view_01;set_txt_facility;cam_searchfield_title;set_rep_facility_bg;data_text;set_txt_data;mode_empty_03;set_txt_searchtime;cam_fac_menu_accessible_sp;cam_searchfield_required_time_0;view_02;cam_school_title;view_00;cam_gym_title;data_updown;caption_up;item_up_1;item_down_0;set_txt_up_00;cam_fac_menu_exp_up;caption_largeup;cam_fac_menu_forget_school;item_up_%d;set_txt_up_%02d;caption_largedown;caption_down;item_down_%d;set_txt_down_%02d;cam_fac_menu_accessible_support_item;cam_searchfield_required_time_1;cam_fac_menu_accessible_energy;cam_searchfield_required_time_2;...
- **Callers:** FUN_7101e3d0c0;FUN_7101e43ee0
- **Callees:** FUN_71003a4ca0;FUN_7102512d40;FUN_71032a3bd0;FUN_71032a3d90;FUN_71032a3e90;FUN_71032a40d0;FUN_71032a50f0;FUN_71032a5210;FUN_71032a5330;FUN_71032a9470;FUN_71032a9540;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_7103778b80;...
- **Files:** [decomp](../decompiled/FUN_7101e3db10__7101e3db10.c)  [cfg](../decompiled/FUN_7101e3db10__7101e3db10.mmd)
- **Clone hash:** `7b15e99ffee519d1`

```c

void FUN_7101e3db10(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  bool bVar4;
  ushort uVar5;
  long ****pppplVar6;
  ulong uVar7;
  undefined **ppuVar8;
  char *pcVar9;
  long ****pppplVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined **local_118;
  ulong local_110;
  undefined **local_108;
  ulong local_100 [8];
  undefined **local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  
  uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0x2a4);
  uVar14 = (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 2) * -0x5555555555555555;
  if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar11 = *(long *)(param_1 + 0x50) + uVar12 * 0xc;
  cVar1 = *(char *)(lVar11 + 4);
  uVar16 = *(uint *)(lVar11 + 8);
  uVar12 = (ulong)uVar16;
  if (cVar1 == '\0') {
// ... (284 more lines)
```

## 38. `FUN_7101c176e0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c176e0`  (offset `0x1c176e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c176e0(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 420 bytes / 24 bb / 1 incoming refs
- **Match values:** item
- **Strings touched:** set_rep_item;set_rep_item_sdw;bg_category;set_txt_item_name;mode_empty_03;set_txt_item_help;mel_rule_item_help_freq_0%d;txt_positoin_01
- **Callees:** FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101c176e0__7101c176e0.c)  [cfg](../decompiled/FUN_7101c176e0__7101c176e0.mmd)
- **Clone hash:** `1fb4da9f73de94e5`

```c

void FUN_7101c176e0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **local_40;
  long *local_38;
  
  if (param_2 < 4) {
    if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar4 = **(long **)**(undefined8 **)(param_1 + 0x10);
    lVar3 = lVar4 + 8;
    FUN_7103776910(&local_40,lVar3,(long ****)"set_rep_item",param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    plVar1 = local_38;
    lVar2 = *local_38;
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    }
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar1);
    }
    FUN_7103776910(&local_40,lVar3,(long ****)"set_rep_item_sdw",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar1 = local_38;
    lVar2 = *local_38;
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    }
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = (long *)0x0;
// ... (46 more lines)
```

## 39. `FUN_710200a5a0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710200a5a0`  (offset `0x200a5a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710200a5a0(long param_1)`
- **Size / BBs / Incoming:** 3168 bytes / 5 bb / 2 incoming refs
- **Match values:** item
- **Strings touched:** ControlModule;get_stick_angle;get_stick_dir;is_stick_side;get_sub_stick_dir;is_sub_stickSide;gauge_parts_on;is_enable_flick_jump;start_clatter;set_dec_time;set_dec_time_recovery;set_clatter_time;add_clatter_time;get_clatter_time;set_clatter_stop;is_clatter_stop;start_clatter_motion_rate;end_clatter_motion_rate;end_clatter;is_input_clatter;set_clatter_shake_scale;TRANS_A_JUMP_AERIAL;reset_button;reset_trigger;reset_trigger_2;reset_main_stick_x;set_main_stick_x;reset_main_stick_y;set_main_stick_y;reset_main_stick;reset_sub_stick_x;reset_sub_stick_y;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710200a5a0__710200a5a0.c)  [cfg](../decompiled/FUN_710200a5a0__710200a5a0.mmd)
- **Clone hash:** `5c50430a0a5b5603`

```c

void FUN_710200a5a0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ControlModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_28,(uint *)"get_stick_angle",(long ****)FUN_7102001900,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_stick_dir",(long ****)FUN_71020019d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_stick_side",(long ****)FUN_7102001aa0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_sub_stick_dir",(long ****)FUN_7102001b70,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_sub_stickSide",(long ****)FUN_7102001c40,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_enable_flick_jump",(long ****)FUN_7102001d10,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"start_clatter",(long ****)FUN_7102001de0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_dec_time",(long ****)FUN_71020022d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_dec_time_recovery",(long ****)FUN_71020024d0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_clatter_time",(long ****)FUN_71020026d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_clatter_time",(long ****)FUN_71020028d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_clatter_time",(long ****)FUN_7102002ad0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
// ... (240 more lines)
```

## 40. `FUN_7102ccfe70`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102ccfe70`  (offset `0x2ccfe70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102ccfe70(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9600 bytes / 445 bb / 1 incoming refs
- **Match values:** item
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

## 41. `FUN_71024fccf0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71024fccf0`  (offset `0x24fccf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71024fccf0(long param_1, uint param_2)`
- **Size / BBs / Incoming:** 308 bytes / 20 bb / 1 incoming refs
- **Match values:** item
- **Strings touched:** mapitem_namazu;mapitem_out;mapitem_food;mapitem_bullet;mapitem_in
- **Callers:** FUN_71019260d0
- **Callees:** FUN_7103778300;FUN_710377a280
- **Files:** [decomp](../decompiled/FUN_71024fccf0__71024fccf0.c)  [cfg](../decompiled/FUN_71024fccf0__71024fccf0.mmd)
- **Clone hash:** `1d6b96c469f6f4bb`

```c

void FUN_71024fccf0(long param_1,uint param_2)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long lVar4;
  
  if (param_2 == 0xffff) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(uint *)(param_1 + (ulong)param_2 * 4 + 0x510);
  }
  if (*(uint *)(param_1 + 0x5c0) != uVar3) {
    *(uint *)(param_1 + 0x5c0) = uVar3;
    lVar4 = *(long *)(*(long *)(param_1 + 0x558) + 0x80);
    if ((uVar3 == 0xffffffff) || (2 < (int)uVar3)) {
      lVar4 = *(long *)(lVar4 + 0x38);
      pcVar2 = "mapitem_out";
    }
    else {
      if (uVar3 == 2) {
        lVar1 = *(long *)(lVar4 + 0x38);
        pcVar2 = "mapitem_food";
        *(long *)(lVar4 + 0x128) = lVar4 + 0x150;
      }
      else if (uVar3 == 1) {
        lVar1 = *(long *)(lVar4 + 0x38);
        *(long *)(lVar4 + 0x128) = lVar4 + 0x130;
        pcVar2 = "mapitem_bullet";
      }
      else {
        if (uVar3 != 0) goto LAB_71024fcdcc;
        lVar1 = *(long *)(lVar4 + 0x38);
        *(long *)(lVar4 + 0x128) = lVar4 + 0x140;
        pcVar2 = "mapitem_namazu";
      }
      FUN_7103778300(0x3f800000,lVar1,(long)pcVar2);
// ... (14 more lines)
```

## 42. `FUN_71029f6010`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71029f6010`  (offset `0x29f6010`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71029f6010(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 9208 bytes / 422 bb / 1 incoming refs
- **Match values:** Item
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

## 43. `FUN_7101c18760`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c18760`  (offset `0x1c18760`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c18760(long param_1, undefined1 * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1296 bytes / 57 bb / 1 incoming refs
- **Match values:** item
- **Strings touched:** footer_help_out;set_txt_item_name;mode_empty_03;set_txt_item_help;set_rep_item;set_rep_item_sdw;bg_category;set_txt_item_category
- **Callers:** FUN_710186c570
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101af4c80;FUN_7101af8e90;FUN_7101af90b0;FUN_7103376980;FUN_7103395260;FUN_710376b960;FUN_7103776910;FUN_71037780e0;FUN_71037790a0;FUN_710377b140;FUN_71037a2270;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;...
- **Files:** [decomp](../decompiled/FUN_7101c18760__7101c18760.c)  [cfg](../decompiled/FUN_7101c18760__7101c18760.mmd)
- **Clone hash:** `20432739dea644f8`

```c

void FUN_7101c18760(long param_1,undefined1 *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined **ppuVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  ushort local_44 [2];
  
  plVar13 = *(long **)(param_1 + 0x80);
  ppuVar7 = (undefined **)param_3;
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    ppuVar7 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar2 = *param_2;
  *(undefined1 *)(plVar13 + 0xd) = uVar2;
  uVar10 = *(undefined8 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((long)plVar13 + 0x74) = uVar1;
// ... (193 more lines)
```

## 44. `FUN_7101d9aeb0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d9aeb0`  (offset `0x1d9aeb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d9aeb0(short * param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2332 bytes / 84 bb / 2 incoming refs
- **Match values:** item
- **Strings touched:** player;player_sp_exp_p%d;set_parts_sp_00_p%d;set_txt_sp_level;mel_result_item_unit_35_00;level_line_anim;set_parts_sp_01_p%d;up_anim;parts_key;set_txt_icon;mel_info_next
- **Callers:** FUN_7101483f50;FUN_7101486510
- **Callees:** FUN_71003a4ca0;FUN_71032cbf30;FUN_710339ae90;FUN_710339b5e0;FUN_710339b6b0;FUN_710339ba00;FUN_710339bba0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778630;FUN_710377a120;FUN_710377a280;FUN_71037964b0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101d9aeb0__7101d9aeb0.c)  [cfg](../decompiled/FUN_7101d9aeb0__7101d9aeb0.mmd)
- **Clone hash:** `79d9d6a005f465d9`

```c

void FUN_7101d9aeb0(short *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short *psVar1;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
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
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  byte ****ppppbVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined **local_a8;
  ulong local_a0;
  undefined **local_98;
// ... (381 more lines)
```

## 45. `FUN_7101b0b340`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b0b340`  (offset `0x1b0b340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b0b340(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2004 bytes / 105 bb / 0 incoming refs
- **Match values:** item
- **Strings touched:** update;set_parts_aura;txt_up_anim;in_aura;aura_up_anim;select_item;out_aura
- **Callees:** FUN_7103377130;FUN_710339c1e0;FUN_7103763e50;FUN_7103776640;FUN_7103778300;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101b0b340__7101b0b340.c)  [cfg](../decompiled/FUN_7101b0b340__7101b0b340.mmd)
- **Clone hash:** `8990210f9acd8012`

```c

void FUN_7101b0b340(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar6;
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
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
// ... (304 more lines)
```

## 46. `FUN_71021a87e0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021a87e0`  (offset `0x21a87e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021a87e0(void)`
- **Size / BBs / Incoming:** 5960 bytes / 7 bb / 1 incoming refs
- **Match values:** ITEM
- **Strings touched:** FIGHTER_SHIZUE_INSTANCE_WORK_ID_INT_START;FIGHTER_SHIZUE_INSTANCE_WORK_ID_INT_TERM;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ADJUST_ANGLE_FRAME;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ANGLE;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ADD_ANGLE;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_START;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_POMPON_LEFT;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_POMPON_RIGHT;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_ADJUST_ANGLE;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_CLAYROCKET_IS_READY;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_SHIZUE_LINK_NO_START;FIGHTER_SHIZUE_LINK_NO_FISHINGROD;FIGHTER_SHIZUE_LINK_NO_BALLOON;FIGHTER_SHIZUE_LINK_NO_TERM;FIGHTER_ATTACK_ABSOLUTE_KIND_SHIZUE_SPECIAL_S;FIGHTER_SHIZUE_CLIFF_HANG_DATA_START;FIGHTER_SHIZUE_CLIFF_HANG_DATA_SPECIAL_S;FIGHTER_SHIZUE_CLIFF_HANG_DATA_AIR_LASSO_HANG;FIGHTER_SHIZUE_CLIFF_HANG_DATA_TERM;FIGHTER_SHIZUE_STATUS_SPECIAL_N_FLAG_START;FIGHTER_SHIZUE_STATUS_SPECIAL_N_TERM;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_START;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_AIR_LASSO_FAIL;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_FLICK;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_SHOOT;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_HIT;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_PICKUP;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_CAPTURE_CUT;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_TERM;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021a87e0__71021a87e0.c)  [cfg](../decompiled/FUN_71021a87e0__71021a87e0.mmd)
- **Clone hash:** `1bd72876b3d74e67`

```c

void FUN_71021a87e0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000d1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000d2,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_00000050,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ADJUST_ANGLE_FRAME",
                 (undefined **)&DAT_00000051,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ANGLE",
                 (undefined **)&DAT_00000052,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ADD_ANGLE",
                 (undefined **)0x53,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_TERM",
                 (undefined **)&DAT_00000054,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000ed,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_POMPON_LEFT",
                 (undefined **)0x200000ee,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (685 more lines)
```

## 47. `FUN_71019d0fb0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019d0fb0`  (offset `0x19d0fb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019d0fb0(long * * param_1, long * param_2)`
- **Size / BBs / Incoming:** 11700 bytes / 516 bb / 1 incoming refs
- **Match values:** ITEM;item
- **Strings touched:** scroll;scr_sort;plate_side;set_parts_submenu;submenu_item_01;set_det_column_0%d;category_0%d;value_txt;value_color;color_00;btn_keyhelp_00;set_txt_icon;mii_select_scroller;sub_menu;sort_window;sort_window_facade;set_detail;is_max_num;is_full;is_favorite_fighter;switch_favorite_fighter;post_fighter;is_finished_post;is_succeeded_post;delete_fighter;get_no_delete_popup_id;is_parallel_matching;reload_fighter;sort_data_id_list;backup_list_selected_id;gauge_parts_on;select_list_from_backup_id;...
- **Callers:** FUN_710180f330
- **Callees:** FUN_71000001c0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7101764000;FUN_71017bd310;FUN_71017bd3e0;FUN_71019c1c50;FUN_71019d6770;FUN_71019d6830;FUN_71019dc4e0;FUN_71019dc640;FUN_71019dc780;FUN_71019dc900;FUN_71019e0910;FUN_7101ccce30;FUN_71032cb040;FUN_71032ccb70;...
- **Files:** [decomp](../decompiled/FUN_71019d0fb0__71019d0fb0.c)  [cfg](../decompiled/FUN_71019d0fb0__71019d0fb0.mmd)
- **Clone hash:** `fb467ceec23953e7`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71019d0fb0(long **param_1,long *param_2)

{
  int *piVar1;
  long **pplVar2;
  undefined4 *puVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  long *****ppppplVar9;
  uint *puVar10;
  ushort *puVar11;
  uint *puVar12;
  long *****ppppplVar13;
  long **pplVar14;
  bool bVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  long ***ppplVar19;
  byte ***pppbVar20;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long ****pppplVar21;
  undefined **ppuVar22;
  char *pcVar23;
  byte ****ppppbVar24;
  byte ****ppppbVar25;
  long ****pppplVar26;
// ... (2174 more lines)
```

## 48. `FUN_7101c17940`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c17940`  (offset `0x1c17940`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c17940(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 832 bytes / 42 bb / 1 incoming refs
- **Match values:** item
- **Strings touched:** get_item_appear;get_item_on_off
- **Callees:** FUN_710327f590;FUN_7103377130;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101c17940__7101c17940.c)  [cfg](../decompiled/FUN_7101c17940__7101c17940.mmd)
- **Clone hash:** `876d38d2a48abba0`

```c

void FUN_7101c17940(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x88) != '\0') {
    plVar12 = *(long **)(param_1 + 0x40);
    plVar8 = (long *)*plVar12;
    lVar13 = *plVar8;
    *(undefined4 *)(plVar8 + 2) = 0;
    plVar8 = *(long **)(lVar13 + 0x10);
    *plVar8 = lVar13;
    *(undefined4 *)(plVar8 + 1) = 0x48;
    lVar10 = *(long *)(lVar13 + 0x10);
    *(long *)(lVar13 + 0x10) = lVar10 + 0x10;
    lVar11 = *(long *)(*(long *)(lVar13 + 0x18) + 200);
    *(long *)(lVar13 + 0x10) = lVar10;
    if (lVar11 == lVar13) {
      lVar10 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40);
      if (*(uint *)(lVar10 + 0xc) < 2) {
        plVar8 = (long *)(*(long *)(lVar10 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar10 + 0xb) & 0x3f)) & 2
                         ) * 0x20);
        do {
// ... (110 more lines)
```

## 49. `FUN_71019401b0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019401b0`  (offset `0x19401b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019401b0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10064 bytes / 382 bb / 1 incoming refs
- **Match values:** item
- **Strings touched:** %s_%02d.bntx;chara/chara_4/chara_4_;school;set_txt_schoolstyle;subwindow_narrow;subwindow_wide;item_up_%d;set_txt_up_item_%02d;item_down_%d;set_txt_down_item_%02d;caption_up;caption_largeup;caption_down;caption_largedown;subwindow_unlearn;set_txt_unlearn;cam_school_unlearn;selector_keyhelp;btn_keyhelp_skill;set_txt_icon;cam_school_detail_guide;set_txt_help;cam_school_detail;header_band;selector_slot;set_parts_cursor;set_parts_slot_%02d;set_parts_mastery_%02d;set_fxui_confetti;selector_menu;set_parts_menu_%02d;set_parts_talk;...
- **Callers:** FUN_71019429a0
- **Callees:** FUN_71003a4ca0;FUN_7101af86a0;FUN_7101d88b10;FUN_7101d8f690;FUN_7101deddf0;FUN_7101df3910;FUN_7101df74b0;FUN_7101dfb100;FUN_7101e04640;FUN_7101e5e730;FUN_7101e5e830;FUN_7101e94040;FUN_7101e941f0;FUN_7101e945c0;FUN_7101e95110;FUN_7101e95dd0;...
- **Files:** [decomp](../decompiled/FUN_71019401b0__71019401b0.c)  [cfg](../decompiled/FUN_71019401b0__71019401b0.mmd)
- **Clone hash:** `b1aa06e0aa020b5d`

```c

void FUN_71019401b0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  long ***ppplVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined *puVar18;
  long ********pppppppplVar19;
  long **pplVar20;
  long *******ppppppplVar21;
  long *plVar22;
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
// ... (1832 more lines)
```

## 50. `FUN_7103959290`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103959290`  (offset `0x3959290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103959290(int * param_1)`
- **Size / BBs / Incoming:** 5888 bytes / 323 bb / 1 incoming refs
- **Match values:** item
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

