# front (funcs=36, hits=96)

Top 50 functions by hit count

## 1. `FUN_7101ee9990`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ee9990`  (offset `0x1ee9990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ee9990(long * param_1)`
- **Size / BBs / Incoming:** 12376 bytes / 586 bb / 1 incoming refs
- **Match values:** front
- **Strings touched:** anime_seq_01_00;set_fxui_smash;player_number_%dp;team_color_%d;set_panel_bg_%02d;side_right;side_left;set_panel_fighter_%02d;fighter_seq_02_03_f%02d;team_fp_on;team_fp_off;set_txt_player_name;mode_empty_03;player_name_all_off;player_name_all_on;icon_off_%dp;icon_on_%dp;set_rep_icon;set_bg_icon;player_color_%dp;mel_player_n;set_txt_level_n;cmn_%dp;set_txt_player_number;set_rep_series;set_rep_fighter;set_rep_fighter_shadow;gauge_parts_on;figter_name_1;set_txt_fighter_1;nam_chr2_%02d_%s;figter_name_2;...
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710062dc20;FUN_710175dfc0;FUN_7101764000;FUN_71017a7d70;FUN_7101b09e60;FUN_7101c09200;FUN_7101eedbe0;FUN_71024076d0;FUN_710323f330;FUN_710323f600;FUN_710323faf0;FUN_7103240430;FUN_71032575c0;FUN_7103262310;...
- **Files:** [decomp](../decompiled/FUN_7101ee9990__7101ee9990.c)  [cfg](../decompiled/FUN_7101ee9990__7101ee9990.mmd)
- **Clone hash:** `d25ae304d71940fd`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101ee9990(long *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  ushort *puVar17;
  long lVar18;
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
// ... (2704 more lines)
```

## 2. `FUN_71020fbb90`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** FRONT
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

## 3. `FUN_710225b990`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** FRONT
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

## 4. `FUN_710226f500`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226f500`  (offset `0x226f500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226f500(long param_1)`
- **Size / BBs / Incoming:** 23732 bytes / 622 bb / 1 incoming refs
- **Match values:** front
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

## 5. `FUN_7101f45620`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** FRONT
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

## 6. `FUN_71021860a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021860a0`  (offset `0x21860a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021860a0(void)`
- **Size / BBs / Incoming:** 15404 bytes / 25 bb / 1 incoming refs
- **Match values:** FRONT
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

## 7. `FUN_710218dcf0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710218dcf0`  (offset `0x218dcf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710218dcf0(void)`
- **Size / BBs / Incoming:** 8048 bytes / 22 bb / 1 incoming refs
- **Match values:** FRONT
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

## 8. `FUN_7101f3c990`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f3c990`  (offset `0x1f3c990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f3c990(undefined8 * param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2216 bytes / 107 bb / 5 incoming refs
- **Match values:** front
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

## 9. `FUN_7101fea810`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fea810`  (offset `0x1fea810`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fea810(long param_1)`
- **Size / BBs / Incoming:** 4752 bytes / 4 bb / 2 incoming refs
- **Match values:** front
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

## 10. `FUN_71021d37a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021d37a0`  (offset `0x21d37a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021d37a0(void)`
- **Size / BBs / Incoming:** 17364 bytes / 31 bb / 1 incoming refs
- **Match values:** FRONT
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

## 11. `FUN_7102123d40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102123d40`  (offset `0x2123d40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102123d40(void)`
- **Size / BBs / Incoming:** 74688 bytes / 187 bb / 1 incoming refs
- **Match values:** FRONT
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

## 12. `FUN_71021bf990`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021bf990`  (offset `0x21bf990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021bf990(void)`
- **Size / BBs / Incoming:** 9652 bytes / 25 bb / 1 incoming refs
- **Match values:** FRONT
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

## 13. `FUN_71037f8180`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** Front
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

## 14. `FUN_71021f23b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021f23b0`  (offset `0x21f23b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021f23b0(void)`
- **Size / BBs / Incoming:** 8752 bytes / 22 bb / 1 incoming refs
- **Match values:** FRONT
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

## 15. `FUN_7101cc3a00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cc3a00`  (offset `0x1cc3a00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cc3a00(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1688 bytes / 50 bb / 1 incoming refs
- **Match values:** front
- **Strings touched:** front_black_out;bg_black_out;mode_empty_03;bg_black_in;set_txt_header_txt;mnu_replay_play_next_txt_movie;set_txt_header_titlename;loading
- **Callees:** FUN_71004f5770;FUN_7101cd2890;FUN_7101cd3060;FUN_7101cedc80;FUN_71032e5f40;FUN_710334e6a0;FUN_7103350ae0;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710377a120;FUN_710377a310;FUN_710377b140;FUN_710392eb40;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::nn::os::ConvertToTimeSpan;...
- **Files:** [decomp](../decompiled/FUN_7101cc3a00__7101cc3a00.c)  [cfg](../decompiled/FUN_7101cc3a00__7101cc3a00.mmd)
- **Clone hash:** `7d79bdf516888eba`

```c

void FUN_7101cc3a00(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  undefined ***pppuVar9;
  long ****pppplVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  undefined **local_b28;
  ulong local_b20;
  undefined **local_b18;
  long *local_b10;
  undefined2 local_b08;
  undefined4 local_b04;
  undefined2 local_b00;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined5 uStack_ab0;
  undefined3 local_aab;
  undefined5 uStack_aa8;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
// ... (343 more lines)
```

## 16. `FUN_710207c4f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710207c4f0`  (offset `0x207c4f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710207c4f0(long param_1)`
- **Size / BBs / Incoming:** 960 bytes / 4 bb / 2 incoming refs
- **Match values:** front
- **Strings touched:** AbsorberModule;clean;is_shield;set_size;set_status;set_status_all;is_turn;is_front;is_hop;get_hop_angle;is_no_hop;set_turn;set_front;set_hop;set_attack_mul;get_attack_mul;set_speed_mul;get_speed_mul;set_life_mul;get_life_mul;set_attack_limit;get_attack_limit;set_hit_stop_mul;is_no_m_ball;get_part_size;get_team_no;set_no_team;set_shield_type;clear_all;clear_all_2;get_center_pos;get_lr;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710207c4f0__710207c4f0.c)  [cfg](../decompiled/FUN_710207c4f0__710207c4f0.mmd)
- **Clone hash:** `6fdc832e0eebbb78`

```c

void FUN_710207c4f0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"AbsorberModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                );
  FUN_7103728bf0(&local_28,(uint *)"clean",(long ****)FUN_7102078f60,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_shield",(long ****)FUN_7102079010,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_size",(long ****)FUN_7102079190,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status",(long ****)FUN_71020793c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status_all",(long ****)FUN_7102079530,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_turn",(long ****)FUN_7102079690,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_front",(long ****)FUN_71020797e0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hop",(long ****)FUN_7102079930,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_hop_angle",(long ****)FUN_7102079a80,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_no_hop",(long ****)FUN_7102079bd0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_turn",(long ****)FUN_7102079d20,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_front",(long ****)FUN_7102079ef0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
// ... (56 more lines)
```

## 17. `FUN_7100033a40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** Front
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

## 18. `FUN_7101f31930`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f31930`  (offset `0x1f31930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f31930(undefined8 * param_1, long param_2, ulong * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7476 bytes / 419 bb / 1 incoming refs
- **Match values:** front
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

## 19. `FUN_71020800c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020800c0`  (offset `0x20800c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020800c0(long param_1)`
- **Size / BBs / Incoming:** 960 bytes / 4 bb / 2 incoming refs
- **Match values:** front
- **Strings touched:** ReflectorModule;clean;is_shield;set_size;set_status;set_status_all;is_turn;is_front;is_hop;get_hop_angle;is_no_hop;set_turn;set_front;set_hop;set_attack_mul;get_attack_mul;set_speed_mul;get_speed_mul;set_life_mul;get_life_mul;set_attack_limit;get_attack_limit;set_hit_stop_mul;is_no_m_ball;get_part_size;get_team_no;set_no_team;set_shield_type;clear_all;clear_all_2;get_center_pos;get_lr;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020800c0__71020800c0.c)  [cfg](../decompiled/FUN_71020800c0__71020800c0.mmd)
- **Clone hash:** `175432b9ad9b169f`

```c

void FUN_71020800c0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ReflectorModule",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clean",(long ****)FUN_710207cb30,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_shield",(long ****)FUN_710207cbe0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_size",(long ****)FUN_710207cd60,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status",(long ****)FUN_710207cf90,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status_all",(long ****)FUN_710207d100,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_turn",(long ****)FUN_710207d260,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_front",(long ****)FUN_710207d3b0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hop",(long ****)FUN_710207d500,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_hop_angle",(long ****)FUN_710207d650,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_no_hop",(long ****)FUN_710207d7a0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_turn",(long ****)FUN_710207d8f0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_front",(long ****)FUN_710207dac0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
// ... (56 more lines)
```

## 20. `FUN_710359f860`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710359f860`  (offset `0x359f860`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710359f860(ulong param_1, undefined4 param_2, undefined4 param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 * param_7, ulong param_8)`
- **Size / BBs / Incoming:** 1612 bytes / 73 bb / 1 incoming refs
- **Match values:** Front
- **Strings touched:** chara/chara_4/chara_4_;lib::Renderer::create_mii_mask_texture (Front);lib::Renderer::create_mii_mask_texture (Back)
- **Callers:** FUN_710067ead0
- **Callees:** FUN_710357c970;FUN_710363dde0;FUN_71037c3a70;FUN_71037d5a80;FUN_71037dbdc0;FUN_71037dbe00;FUN_710392e1f0;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::nu::VirtualFreeHook;<EXTERNAL>::std::mutex::lock;<EXTERNAL>::std::mutex::unlock;<EXTERNAL>::nu::VirtualAllocHook;<EXTERNAL>::std::__shared_weak_count::__release_weak;<EXTERNAL>::std::future<void>::~future
- **Files:** [decomp](../decompiled/FUN_710359f860__710359f860.c)  [cfg](../decompiled/FUN_710359f860__710359f860.mmd)
- **Clone hash:** `4d08777cb9400e96`

```c

ulong FUN_710359f860(ulong param_1,undefined4 param_2,undefined4 param_3,byte ****param_4,
                    long ****param_5,ulong param_6,undefined8 *param_7,ulong param_8)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  void *pvVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  byte ****ppppbVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  byte bVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long local_380;
  undefined **local_370;
  long *local_368;
  long *local_360;
  long local_358;
  undefined **local_350;
  long *local_348;
  long *local_340;
  long local_338;
  int aiStack_330 [2];
  undefined **local_328;
// ... (280 more lines)
```

## 21. `FUN_7102078920`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102078920`  (offset `0x2078920`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102078920(long param_1)`
- **Size / BBs / Incoming:** 960 bytes / 4 bb / 2 incoming refs
- **Match values:** front
- **Strings touched:** ShieldModule;clean;is_shield;set_size;set_status;set_status_all;is_turn;is_front;is_hop;get_hop_angle;is_no_hop;set_turn;set_front;set_hop;set_attack_mul;get_attack_mul;set_speed_mul;get_speed_mul;set_life_mul;get_life_mul;set_attack_limit;get_attack_limit;set_hit_stop_mul;is_no_m_ball;get_part_size;get_team_no;set_no_team;set_shield_type;clear_all;clear_all_2;get_center_pos;get_lr;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102078920__7102078920.c)  [cfg](../decompiled/FUN_7102078920__7102078920.mmd)
- **Clone hash:** `84b51e66f4707e69`

```c

void FUN_7102078920(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ShieldModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clean",(long ****)FUN_7102075390,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_shield",(long ****)FUN_7102075440,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_size",(long ****)FUN_71020755c0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status",(long ****)FUN_71020757f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status_all",(long ****)FUN_7102075960,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_turn",(long ****)FUN_7102075ac0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_front",(long ****)FUN_7102075c10,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hop",(long ****)FUN_7102075d60,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_hop_angle",(long ****)FUN_7102075eb0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_no_hop",(long ****)FUN_7102076000,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_turn",(long ****)FUN_7102076150,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_front",(long ****)FUN_7102076320,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_hop",(long ****)FUN_7102076480,ppppbVar1,in_x4,in_x5,in_x6,
// ... (55 more lines)
```

## 22. `FUN_7101b69480`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b69480`  (offset `0x1b69480`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b69480(void)`
- **Size / BBs / Incoming:** 40408 bytes / 2245 bb / 4 incoming refs
- **Match values:** front
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

## 23. `FUN_7101fa11c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** front
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

## 24. `FUN_710335ea80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710335ea80`  (offset `0x335ea80`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710335ea80(long param_1)`
- **Size / BBs / Incoming:** 1588 bytes / 28 bb / 2 incoming refs
- **Match values:** front
- **Strings touched:** input_index;dys_yoga03_l_03_set;selection_type;use_cursor_looping;cancel_outside_window;use_only_shortcut;use_only_touch_control;use_only_pointer_input;input_direction_only_x;input_direction_only_y;bring_front_on_select;plate_side;cursor_adjust_size;cursor_interpolation;ignore_side_input;decide_only_shortcut;select_same_button;detect_outside_at_same;use_button_history;size_use_button_id;directional_degree;multiple_operator_num;is_unique_se;decide_se_label_code;cancel_se_label_code;cursor_se_label_code;error_se_label_code
- **Callees:** FUN_71038f5390;FUN_71038fec40;FUN_710391e050
- **Files:** [decomp](../decompiled/FUN_710335ea80__710335ea80.c)  [cfg](../decompiled/FUN_710335ea80__710335ea80.mmd)
- **Clone hash:** `f7dd20fd7bb6aaea`

```c

undefined8 FUN_710335ea80(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined4 *puVar5;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long alStack_70 [4];
  long *local_50;
  undefined4 local_40;
  
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_80 = (long *)0x0;
  local_50 = (long *)0x0;
  local_40 = 0;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar1 = FUN_710391e050(param_1);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(puVar2 + 1) = 0x45;
  *puVar2 = uVar1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  *(undefined4 *)(lVar3 + 0x18) = 0x13;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
// ... (186 more lines)
```

## 25. `FUN_71028a7560`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71028a7560`  (offset `0x28a7560`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71028a7560(float param_1, int * param_2, undefined8 param_3, undefined8 param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 3960 bytes / 103 bb / 3 incoming refs
- **Match values:** FRONT
- **Strings touched:** STG_EMBLEM_ISHI_FRONT
- **Callers:** FUN_71028a2f50
- **Callees:** FUN_7102405040;FUN_7102627430;FUN_71035707d0;FUN_7103736cf0;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::mutex::lock;<EXTERNAL>::std::mutex::unlock
- **Files:** [decomp](../decompiled/FUN_71028a7560__71028a7560.c)  [cfg](../decompiled/FUN_71028a7560__71028a7560.mmd)
- **Clone hash:** `59484b1f862251c8`

```c

/* WARNING: Removing unreachable block (ram,0x0071028a833c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71028a7560(float param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   byte ****param_5,long ****param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined5 uVar7;
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
  int iVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
// ... (1216 more lines)
```

## 26. `FUN_71021677c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021677c0`  (offset `0x21677c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021677c0(void)`
- **Size / BBs / Incoming:** 5720 bytes / 1 bb / 1 incoming refs
- **Match values:** FRONT
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

## 27. `FUN_71020296f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020296f0`  (offset `0x20296f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020296f0(long param_1)`
- **Size / BBs / Incoming:** 528 bytes / 4 bb / 2 incoming refs
- **Match values:** front
- **Strings touched:** GrabModule;clear_all;clear;TRANS_A_JUMP_AERIAL;set_constraint;is_grab;set_size;pos_x;center_pos;set_power_up;set_size_mul;set_scale_2nd;sleep;relocate;set_check_front;set_rebound;is_rebound;check_rebound;disable_sub_fighter
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020296f0__71020296f0.c)  [cfg](../decompiled/FUN_71020296f0__71020296f0.mmd)
- **Clone hash:** `0217c27a30d6b350`

```c

void FUN_71020296f0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"GrabModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear_all",(long ****)FUN_7102027c00,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear",(long ****)FUN_7102027cb0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_constraint",(long ****)FUN_7102027de0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_grab",(long ****)FUN_7102027fb0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_7104348ff8,(long ****)FUN_7102028100,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_size",(long ****)FUN_7102028250,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"pos_x",(long ****)FUN_7102028450,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"center_pos",(long ****)FUN_7102028520,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_710433b19b,(long ****)FUN_7102028690,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_power_up",(long ****)FUN_71020287e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_size_mul",(long ****)FUN_71020289b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_scale_2nd",(long ****)FUN_7102028b80,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"sleep",(long ****)FUN_7102028d50,ppppbVar1,in_x4,in_x5,in_x6,
// ... (19 more lines)
```

## 28. `FUN_71021b7f40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021b7f40`  (offset `0x21b7f40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021b7f40(void)`
- **Size / BBs / Incoming:** 10056 bytes / 25 bb / 1 incoming refs
- **Match values:** FRONT
- **Strings touched:** FIGHTER_BRAVE_SPECIAL_N_S;FIGHTER_BRAVE_SPECIAL_N_M;FIGHTER_BRAVE_SPECIAL_N_L;FIGHTER_BRAVE_SPECIAL_LW_COMMAND_NONE;FIGHTER_BRAVE_SPECIAL_LW_COMMAND01_CURE;FIGHTER_BRAVE_SPECIAL_LW_COMMAND02_FLASH1;FIGHTER_BRAVE_SPECIAL_LW_COMMAND03_FLASH2;FIGHTER_BRAVE_SPECIAL_LW_COMMAND04_EXPLOSION1;FIGHTER_BRAVE_SPECIAL_LW_COMMAND05_EXPLOSION2;FIGHTER_BRAVE_SPECIAL_LW_COMMAND06_DEATHBALL1;FIGHTER_BRAVE_SPECIAL_LW_COMMAND07_DEATHBALL2;FIGHTER_BRAVE_SPECIAL_LW_COMMAND08_FULLBURST;FIGHTER_BRAVE_SPECIAL_LW_COMMAND09_CRASH;FIGHTER_BRAVE_SPECIAL_LW_COMMAND10_STEEL;FIGHTER_BRAVE_SPECIAL_LW_COMMAND11_SPEED_UP;FIGHTER_BRAVE_SPECIAL_LW_COMMAND12_ATTACK_UP;FIGHTER_BRAVE_SPECIAL_LW_COMMAND13_REFLECT;FIGHTER_BRAVE_SPECIAL_LW_COMMAND14_SLEEP;FIGHTER_BRAVE_SPECIAL_LW_COMMAND15_VARIOUS;FIGHTER_BRAVE_SPECIAL_LW_COMMAND16_FLYING;FIGHTER_BRAVE_SPECIAL_LW_COMMAND17_FIRESWORD;FIGHTER_BRAVE_SPECIAL_LW_COMMAND18_ICESWORD;FIGHTER_BRAVE_SPECIAL_LW_COMMAND19_IRONSWORD;FIGHTER_BRAVE_SPECIAL_LW_COMMAND20_DEVILSWORD;FIGHTER_BRAVE_SPECIAL_LW_COMMAND21_CHARGE;FIGHTER_BRAVE_SPECIAL_LW_COMMAND_NUM;FIGHTER_BRAVE_SPECIAL_LW_COMMAND_LIST_MAX;FIGHTER_BRAVE_SPECIAL_LW_VARIOUS_KIND_NONE;FIGHTER_BRAVE_SPECIAL_LW_VARIOUS_KIND_SLEEP;FIGHTER_BRAVE_SPECIAL_LW_VARIOUS_KIND_SPYCLOAK;FIGHTER_BRAVE_SPECIAL_LW_VARIOUS_KIND_FLOWER;FIGHTER_BRAVE_SPECIAL_LW_VARIOUS_KIND_POISON;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021b7f40__71021b7f40.c)  [cfg](../decompiled/FUN_71021b7f40__71021b7f40.mmd)
- **Clone hash:** `064b50b002898586`

```c

void FUN_71021b7f40(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BRAVE_SPECIAL_N_S",(undefined **)0x0,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BRAVE_SPECIAL_N_M",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BRAVE_SPECIAL_N_L",(undefined **)0x2,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = -3;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BRAVE_SPECIAL_LW_COMMAND_NONE",
                 (undefined **)&DAT_ffffffff,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BRAVE_SPECIAL_LW_COMMAND01_CURE",(undefined **)0x0,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BRAVE_SPECIAL_LW_COMMAND02_FLASH1",(undefined **)0x1,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BRAVE_SPECIAL_LW_COMMAND03_FLASH2",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BRAVE_SPECIAL_LW_COMMAND04_EXPLOSION1",(undefined **)0x3
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BRAVE_SPECIAL_LW_COMMAND05_EXPLOSION2",
                 (undefined **)&DAT_00000004,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BRAVE_SPECIAL_LW_COMMAND06_DEATHBALL1",(undefined **)0x5
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BRAVE_SPECIAL_LW_COMMAND07_DEATHBALL2",(undefined **)0x6
// ... (1086 more lines)
```

## 29. `FUN_7101d8dc90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d8dc90`  (offset `0x1d8dc90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d8dc90(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1068 bytes / 40 bb / 11 incoming refs
- **Match values:** front
- **Strings touched:** set_parts_aw;set_rep_spirit_aw;set_rep_aura_00;set_rep_fighter_front;set_rep_fighter_back;fighter_back;fighter_none;position_set
- **Callers:** FUN_71018f3640;FUN_71018f3fd0;FUN_710191eb50;FUN_710193d370;FUN_7101944b60;FUN_7101960620;FUN_7101d89d00;FUN_7101d8fed0;FUN_7101d91320;FUN_71024f11f0;FUN_71024f1ba0
- **Callees:** FUN_7101d8e0c0;FUN_7101d8e310;FUN_71025ae390;FUN_71025c9890;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778760;FUN_71037790a0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101d8dc90__7101d8dc90.c)  [cfg](../decompiled/FUN_7101d8dc90__7101d8dc90.mmd)
- **Clone hash:** `492144bbb1ff8e37`

```c

void FUN_7101d8dc90(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong *puVar2;
  undefined2 *puVar3;
  bool bVar4;
  ushort uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined ***pppuVar7;
  byte ****ppppbVar8;
  long ****pppplVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  
  lVar1 = param_1 + 0x120;
  FUN_7103776640(&local_60,lVar1,(byte ****)"set_parts_aw",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar5 = *(ushort *)(param_1 + 0x15c);
// ... (160 more lines)
```

## 30. `FUN_71021a07b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021a07b0`  (offset `0x21a07b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021a07b0(void)`
- **Size / BBs / Incoming:** 7268 bytes / 7 bb / 1 incoming refs
- **Match values:** FRONT
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

## 31. `FUN_71021973e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021973e0`  (offset `0x21973e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021973e0(void)`
- **Size / BBs / Incoming:** 6192 bytes / 13 bb / 1 incoming refs
- **Match values:** FRONT
- **Strings touched:** FIGHTER_RYU_INSTANCE_WORK_ID_INT_START;FIGHTER_RYU_INSTANCE_WORK_ID_INT_TERM;FIGHTER_RYU_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_RYU_INSTANCE_WORK_ID_FLOAT_LADDER_CATCH_BOTTOM_CANCEL_FRAME;FIGHTER_RYU_INSTANCE_WORK_ID_FLOAT_OPPONENT_LR_1ON1;FIGHTER_RYU_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_START;FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_N;FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_LW;FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_N_HOP;FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_DISABLE_AIR_SPECIAL_S;FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_NEAR_OPPONENT;FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_SKIP_CHECK;FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_FINAL_STANDBY_ATTACK_STOP;FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_FINAL_HIT_CANCEL;FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_RYU_LINK_NO_PRE_START;FIGHTER_RYU_LINK_NO_FINAL;FIGHTER_RYU_LINK_NO_TERM;FIGHTER_RYU_STRENGTH_S;FIGHTER_RYU_STRENGTH_M;FIGHTER_RYU_STRENGTH_W;FIGHTER_RYU_STRENGTH_TERM;FIGHTER_RYU_SAVING_LV_1;FIGHTER_RYU_SAVING_LV_2;FIGHTER_RYU_SAVING_LV_3;FIGHTER_RYU_SAVING_LV_TERM;FIGHTER_RYU_FINAL_CAMERA_OFFSET_1;FIGHTER_RYU_FINAL_CAMERA_OFFSET_2;FIGHTER_RYU_FINAL_CAMERA_OFFSET_3;FIGHTER_RYU_FINAL_CAMERA_OFFSET_4;FIGHTER_RYU_FINAL_CAMERA_OFFSET_5;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021973e0__71021973e0.c)  [cfg](../decompiled/FUN_71021973e0__71021973e0.mmd)
- **Clone hash:** `f0fc38ef39a69a95`

```c

void FUN_71021973e0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_RYU_INSTANCE_WORK_ID_INT_START",(undefined **)0x100000c8
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_RYU_INSTANCE_WORK_ID_INT_TERM",(undefined **)0x100000c9,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_RYU_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_RYU_INSTANCE_WORK_ID_FLOAT_LADDER_CATCH_BOTTOM_CANCEL_FRAME",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_RYU_INSTANCE_WORK_ID_FLOAT_OPPONENT_LR_1ON1",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_RYU_INSTANCE_WORK_ID_FLOAT_TERM",(undefined **)0x4f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000e2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_N",
                 (undefined **)0x200000e3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_RYU_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_LW",
// ... (642 more lines)
```

## 32. `FUN_710335f0c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710335f0c0`  (offset `0x335f0c0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710335f0c0(long param_1, undefined4 * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5208 bytes / 369 bb / 3 incoming refs
- **Match values:** front
- **Strings touched:** input_index;dys_yoga03_l_03_set;selection_type;use_cursor_looping;cancel_outside_window;use_only_shortcut;use_only_touch_control;use_only_pointer_input;input_direction_only_x;input_direction_only_y;bring_front_on_select;plate_side;cursor_adjust_size;cursor_interpolation;ignore_side_input;decide_only_shortcut;select_same_button;detect_outside_at_same;use_button_history;size_use_button_id;directional_degree;multiple_operator_num;is_unique_se;decide_se_label_code;cancel_se_label_code;cursor_se_label_code;error_se_label_code;key_context
- **Callers:** FUN_7101ad8e40;FUN_7101d2dec0;FUN_7103360570
- **Callees:** FUN_7101989a30;FUN_7103375ed0;FUN_7103375ee0;FUN_7103376160;FUN_7103376170;FUN_71033763f0;FUN_7103376400;FUN_7103376680;FUN_7103376690;FUN_710337df20;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;FUN_71038fec40;FUN_7103907f00;FUN_71039080b0;...
- **Files:** [decomp](../decompiled/FUN_710335f0c0__710335f0c0.c)  [cfg](../decompiled/FUN_710335f0c0__710335f0c0.mmd)
- **Clone hash:** `570b3bfe269cd299`

```c

ulong FUN_710335f0c0(long param_1,undefined4 *param_2,undefined8 param_3,byte ****param_4,
                    long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  void *__dest;
  char *pcVar5;
  undefined4 uVar6;
  long lVar7;
  float *pfVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long ***ppplVar16;
  long **pplVar17;
  uint uVar18;
  float *pfVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  long ****pppplVar25;
  void *__src;
  size_t __n;
  ulong *puVar26;
  long *plVar27;
  float fVar28;
  long ***local_a0;
  long *local_98;
  long ****local_80;
  undefined4 local_64;
// ... (1080 more lines)
```

## 33. `FUN_71021723e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021723e0`  (offset `0x21723e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021723e0(void)`
- **Size / BBs / Incoming:** 13744 bytes / 25 bb / 1 incoming refs
- **Match values:** FRONT
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

## 34. `FUN_7101d8ede0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d8ede0`  (offset `0x1d8ede0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d8ede0(long param_1, ushort param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2220 bytes / 99 bb / 2 incoming refs
- **Match values:** front
- **Strings touched:** set_parts_aw;set_rep_spirit_aw_in;set_rep_fighter_front;set_rep_fighter_back;anim_out_left;anim_out_right;fighter_none
- **Callers:** FUN_71018fdc40
- **Callees:** FUN_7101d8e0c0;FUN_7101d8e310;FUN_7101d8e430;FUN_7101d8eab0;FUN_71025ae390;FUN_71025c9890;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101d8ede0__7101d8ede0.c)  [cfg](../decompiled/FUN_7101d8ede0__7101d8ede0.mmd)
- **Clone hash:** `94fe28ee49276820`

```c

void FUN_7101d8ede0(long param_1,ushort param_2,long ****param_3,byte ****param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  undefined2 *puVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  undefined8 *puVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined ***pppuVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  byte ****ppppbVar27;
  undefined **local_120;
  ulong local_118;
  undefined **local_110;
  undefined8 *local_108;
  long ***local_100;
  ulong local_f8;
// ... (379 more lines)
```

## 35. `FUN_71021b12f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021b12f0`  (offset `0x21b12f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021b12f0(void)`
- **Size / BBs / Incoming:** 8180 bytes / 13 bb / 1 incoming refs
- **Match values:** FRONT
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

## 36. `FUN_71021ec200`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021ec200`  (offset `0x21ec200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021ec200(void)`
- **Size / BBs / Incoming:** 11060 bytes / 10 bb / 1 incoming refs
- **Match values:** FRONT
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

