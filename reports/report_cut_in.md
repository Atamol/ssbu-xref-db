# cut_in (funcs=10, hits=39)

Top 50 functions by hit count

## 1. `FUN_71020fbb90`  (hits=19)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** CUT_IN
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

## 2. `FUN_7102219310`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102219310`  (offset `0x2219310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102219310(long param_1)`
- **Size / BBs / Incoming:** 10116 bytes / 52 bb / 2 incoming refs
- **Match values:** cut_in
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

## 3. `FUN_7101f45620`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** cut_in
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

## 4. `FUN_71021b3d60`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021b3d60`  (offset `0x21b3d60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021b3d60(void)`
- **Size / BBs / Incoming:** 8316 bytes / 19 bb / 1 incoming refs
- **Match values:** CUT_IN
- **Strings touched:** FIGHTER_JACK_INSTANCE_WORK_ID_INT_START;FIGHTER_JACK_INSTANCE_WORK_ID_INT_DOYLE_SUMMON_DISPATCH_WAIT_FRAME;FIGHTER_JACK_INSTANCE_WORK_ID_INT_DOYLE_SUSPEND_LIFE;FIGHTER_JACK_INSTANCE_WORK_ID_INT_CUSTOMIZE_TO;FIGHTER_JACK_INSTANCE_WORK_ID_INT_SPECIAL_KIND_CUSTOMIZE;FIGHTER_JACK_INSTANCE_WORK_ID_INT_TERM;FIGHTER_JACK_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_JACK_INSTANCE_WORK_ID_FLOAT_REBEL_GAUGE;FIGHTER_JACK_INSTANCE_WORK_ID_FLOAT_RESULT_EFFECT_R;FIGHTER_JACK_INSTANCE_WORK_ID_FLOAT_RESULT_EFFECT_G;FIGHTER_JACK_INSTANCE_WORK_ID_FLOAT_RESULT_EFFECT_B;FIGHTER_JACK_INSTANCE_WORK_ID_FLOAT_RESULT_DROP_SHADOW_R;FIGHTER_JACK_INSTANCE_WORK_ID_FLOAT_RESULT_DROP_SHADOW_G;FIGHTER_JACK_INSTANCE_WORK_ID_FLOAT_RESULT_DROP_SHADOW_B;FIGHTER_JACK_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_START;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_DOYLE;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_DOYLE_EXIST;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_DOYLE_SUMMON;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_DOYLE_END;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_DOYLE_CUT_IN;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_HI_HOP;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_DOYLE_SUSPEND;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_FIXED_MOVIE;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_ADD_REBEL_GAUGE;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_RESERVE_SUMMON_DISPATCH;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_LOW_MODE;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_MASK_APPEAR_EFFECT;FIGHTER_JACK_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_JACK_SHIELD_GROUP_KIND_START;FIGHTER_JACK_SHIELD_GROUP_KIND_SPECIAL_LW;FIGHTER_JACK_SHIELD_GROUP_KIND_TERM;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021b3d60__71021b3d60.c)  [cfg](../decompiled/FUN_71021b3d60__71021b3d60.mmd)
- **Clone hash:** `09dddde457a03dd1`

```c

void FUN_71021b3d60(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_JACK_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_JACK_INSTANCE_WORK_ID_INT_DOYLE_SUMMON_DISPATCH_WAIT_FRAME",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_JACK_INSTANCE_WORK_ID_INT_DOYLE_SUSPEND_LIFE",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_JACK_INSTANCE_WORK_ID_INT_CUSTOMIZE_TO",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_JACK_INSTANCE_WORK_ID_INT_SPECIAL_KIND_CUSTOMIZE",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_JACK_INSTANCE_WORK_ID_INT_TERM",(undefined **)0x100000c2
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_JACK_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_JACK_INSTANCE_WORK_ID_FLOAT_REBEL_GAUGE",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_JACK_INSTANCE_WORK_ID_FLOAT_RESULT_EFFECT_R",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_JACK_INSTANCE_WORK_ID_FLOAT_RESULT_EFFECT_G",
                 (undefined **)0x4f,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (901 more lines)
```

## 5. `FUN_71020c9380`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020c9380`  (offset `0x20c9380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020c9380(long param_1)`
- **Size / BBs / Incoming:** 2520 bytes / 4 bb / 2 incoming refs
- **Match values:** cut_in
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

## 6. `FUN_7101fc7f30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fc7f30`  (offset `0x1fc7f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fc7f30(long param_1)`
- **Size / BBs / Incoming:** 8568 bytes / 4 bb / 2 incoming refs
- **Match values:** CUT_IN
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

## 7. `FUN_7101fea810`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fea810`  (offset `0x1fea810`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fea810(long param_1)`
- **Size / BBs / Incoming:** 4752 bytes / 4 bb / 2 incoming refs
- **Match values:** cut_in
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

## 8. `FUN_7101b50040`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b50040`  (offset `0x1b50040`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b50040(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1728 bytes / 81 bb / 1 incoming refs
- **Match values:** cut_in
- **Strings touched:** pos_ptn;reverse;cut_in_pib;set_rep_cutin_00;set_pic_bg_line;set_pic_bg_center
- **Callers:** FUN_71013974f0
- **Callees:** FUN_7101414b10;FUN_71032cbf30;FUN_7103773200;FUN_7103776910;FUN_71037780e0;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101b50040__7101b50040.c)  [cfg](../decompiled/FUN_7101b50040__7101b50040.mmd)
- **Clone hash:** `ca896cb9f6fe72d5`

```c

void FUN_7101b50040(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long ***local_78;
  ulong local_70;
  undefined4 local_64;
  
  *param_1 = &PTR_FUN_71050ab048;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  plVar1 = (long *)FUN_710392e290(0x10,0x90,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000090;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x90,param_3,param_4,param_5,param_6,param_7,param_8)
// ... (310 more lines)
```

## 9. `FUN_71021677c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021677c0`  (offset `0x21677c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021677c0(void)`
- **Size / BBs / Incoming:** 5720 bytes / 1 bb / 1 incoming refs
- **Match values:** CUT_IN
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

## 10. `FUN_7102144140`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102144140`  (offset `0x2144140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102144140(long param_1)`
- **Size / BBs / Incoming:** 1248 bytes / 4 bb / 2 incoming refs
- **Match values:** cut_in
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

