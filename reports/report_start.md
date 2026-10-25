# start (funcs=198, hits=395)

Top 50 functions by hit count

## 1. `FUN_7101f45620`  (hits=35)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** START;start
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

## 2. `FUN_71020fbb90`  (hits=16)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** START
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

## 3. `FUN_710226f500`  (hits=16)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226f500`  (offset `0x226f500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226f500(long param_1)`
- **Size / BBs / Incoming:** 23732 bytes / 622 bb / 1 incoming refs
- **Match values:** start
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

## 4. `FUN_7101fc7f30`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fc7f30`  (offset `0x1fc7f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fc7f30(long param_1)`
- **Size / BBs / Incoming:** 8568 bytes / 4 bb / 2 incoming refs
- **Match values:** START
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

## 5. `FUN_710271cd60`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710271cd60`  (offset `0x271cd60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710271cd60(long * param_1, long param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, float * param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 12608 bytes / 712 bb / 1 incoming refs
- **Match values:** start
- **Strings touched:** RestartOrdinary;RestartLeft;RestartRight;RestartBattle
- **Callers:** FUN_71027178d0
- **Callees:** FUN_71003ac560;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7102405040;FUN_7102624c20;FUN_710262cb10;FUN_7102717ad0;FUN_71027181b0;FUN_7102718840;FUN_7102719d20;FUN_710271ff60;FUN_710271ff70;FUN_7102720040;FUN_7102720060;FUN_7102720070;FUN_7102723c70;FUN_71027247d0;...
- **Files:** [decomp](../decompiled/FUN_710271cd60__710271cd60.c)  [cfg](../decompiled/FUN_710271cd60__710271cd60.mmd)
- **Clone hash:** `edaddbf5591f7c1e`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_710271cd60(long *param_1,long param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   float *param_6,long ***param_7,long ***param_8)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  void *__dest;
  long *plVar20;
  undefined8 extraout_x1;
  byte ****ppppbVar21;
  ulong uVar22;
  undefined4 *puVar23;
  byte **ppbVar24;
  byte ****ppppbVar25;
  undefined4 *puVar26;
  code *pcVar27;
  uint uVar28;
  undefined4 *puVar29;
  ulong *puVar30;
// ... (2591 more lines)
```

## 6. `FUN_7101ea7720`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ea7720`  (offset `0x1ea7720`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ea7720(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9864 bytes / 576 bb / 1 incoming refs
- **Match values:** start
- **Strings touched:** mode_empty_03;set_boundingbox;set_boundexingbox;set_boundingbox_icn_t;set_boundingbox_icn_b;set_boundingbox_icn_l;set_boundingbox_icn_r;set_select_point;select_point;set_null_startpoint;set_startpoint_start;set_startpoint_end;gauge_parts_on;set_startpoint_bar;set_null_endtpoint;set_endpoint_start;set_endpoint_end;set_endpoint_bar;set_null_handle;set_handle_start;set_handle_end;set_handle_bar;set_null_handle_touch;set_handle_touch_icn;handle_touch_point;set_null_handle_decide;set_handle_touch_icn_00;handle_touch_point_00;set_handle_icn;hit_00;set_propaty_info;hit_01;...
- **Callers:** FUN_71023b9770
- **Callees:** std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_71032cbf30;FUN_7103773200;FUN_7103776290;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101ea7720__7101ea7720.c)  [cfg](../decompiled/FUN_7101ea7720__7101ea7720.mmd)
- **Clone hash:** `55d0815116e9b808`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101ea7720(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar5;
  long ****pppplVar6;
  byte ****ppppbVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long ****pppplVar11;
  long *plVar12;
  long *plVar13;
  long ****pppplVar14;
  ulong uVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  long ***local_80;
  ulong local_78;
  long ***local_70;
  undefined4 local_64;
  
  *param_1 = &PTR_FUN_71050b2630;
  param_1[1] = 0;
  param_1[0xc] = 0;
// ... (1995 more lines)
```

## 7. `FUN_71000fec40`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fec40`  (offset `0xfec40`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fec40(void)`
- **Size / BBs / Incoming:** 1944 bytes / 77 bb / 7 incoming refs
- **Match values:** Start
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartCreateNextMesh;NexMatchJointSessionJob::StartGetNextMeshHostStationLocation;NexMatchJointSessionJob::WaitStartRetryJoinMesh;NexMatchJointSessionJob::StartLeaveMesh;dys_yoga03_l_03_set
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000c4cc0;FUN_71000d7ea0;FUN_71000d8f90;FUN_71000edff0;FUN_71000ee2e0;FUN_71001405b0;FUN_7100140e30;FUN_7100146ba0;FUN_7100150590;FUN_7100150840;FUN_7100150d50;FUN_71001902d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=;...
- **Files:** [decomp](../decompiled/FUN_71000fec40__71000fec40.c)  [cfg](../decompiled/FUN_71000fec40__71000fec40.mmd)
- **Clone hash:** `394ef12fcefe07d8`

```c

undefined8 FUN_71000fec40(long param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  char *pcVar9;
  code *pcVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uStack_70;
  undefined4 uStack_68;
  int aiStack_60 [4];
  undefined4 uStack_48;
  int iStack_44;
  
  piVar7 = (int *)&uStack_70;
  FUN_71001902d0(DAT_71052adfc0);
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar8 = DAT_71052adb38;
  if (iVar3 == 7) {
    aiStack_60[0] = 0xc420;
  }
  else if (iVar3 == 6) {
    aiStack_60[0] = 0xa471;
  }
  else if (iVar3 == 5) {
    aiStack_60[0] = 0xc406;
  }
  else {
    if (iVar3 != 8) {
      if (*(char *)(param_1 + 0xfb) != '\0') {
// ... (263 more lines)
```

## 8. `FUN_71032517b0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71032517b0`  (offset `0x32517b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71032517b0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12956 bytes / 796 bb / 1 incoming refs
- **Match values:** start
- **Strings touched:** data_name%d;stream:/sound/bgm/bgm_%s.nus3bank;stream:/sound/bgm/bgm_%s.nus3audio;start_point%d;info%d
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_7103251730;FUN_7103254a50;FUN_7103254c50;FUN_7103254d10;FUN_7103254f10;FUN_7103255110;FUN_7103255260;FUN_7103255500;FUN_71032557a0;FUN_710326a3e0;FUN_710353da30;FUN_7103540a00;FUN_7103540b10;FUN_7103541e10;...
- **Files:** [decomp](../decompiled/FUN_71032517b0__71032517b0.c)  [cfg](../decompiled/FUN_71032517b0__71032517b0.mmd)
- **Clone hash:** `6b42765d7afd2f15`

```c

/* WARNING: Removing unreachable block (ram,0x00710325366c) */
/* WARNING: Removing unreachable block (ram,0x007103253684) */
/* WARNING: Removing unreachable block (ram,0x0071032536a8) */
/* WARNING: Removing unreachable block (ram,0x0071032536b4) */
/* WARNING: Removing unreachable block (ram,0x0071032536c0) */
/* WARNING: Removing unreachable block (ram,0x007103253704) */
/* WARNING: Removing unreachable block (ram,0x00710325370c) */
/* WARNING: Removing unreachable block (ram,0x007103253714) */
/* WARNING: Removing unreachable block (ram,0x0071032537a8) */
/* WARNING: Removing unreachable block (ram,0x0071032537bc) */
/* WARNING: Removing unreachable block (ram,0x0071032537c0) */
/* WARNING: Removing unreachable block (ram,0x0071032537c8) */
/* WARNING: Removing unreachable block (ram,0x0071032537d0) */
/* WARNING: Removing unreachable block (ram,0x0071032537d4) */
/* WARNING: Removing unreachable block (ram,0x0071032537e0) */
/* WARNING: Removing unreachable block (ram,0x0071032537e4) */

void FUN_71032517b0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  ulong *puVar2;
  int iVar3;
  long **pplVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  byte bVar7;
  string *psVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  string *this;
  byte *pbVar12;
  size_t sVar13;
  long ****pppplVar14;
  char *pcVar15;
  ulong uVar16;
  byte *pbVar17;
// ... (2764 more lines)
```

## 9. `FUN_7101bc3210`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bc3210`  (offset `0x1bc3210`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bc3210(long * param_1, long param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 19188 bytes / 938 bb / 1 incoming refs
- **Match values:** start
- **Strings touched:** stat_change;layout_def;layout_pn2;layout_pn3;layout_pn4;layout_pn5;layout_pn6;layout_pn7;layout_pn8;in_menu;out_menu;in_layout_change;out_layout_change;in_battlestart;out_battlestart;game_start_ok;game_start_stop;tp_total_00;tp_total_01;tp_total_02;tp_total_03;leave_show;leave_hidden;score_set_out;score_set_in;score_off;score_on;set_parts_lct;count_on;count_off;set_main_00;set_main_01;...
- **Callers:** FUN_71013cdd00
- **Callees:** FUN_7101414b10;FUN_7101989a30;FUN_7101bc7d10;FUN_7101bc7fa0;FUN_7101bc7fb0;FUN_7101bc8060;FUN_7101bc8070;FUN_7101bc8120;FUN_7101bc8130;FUN_7101bc8210;FUN_7101bc8220;FUN_7101bc8380;FUN_7101bc8390;FUN_7101bcc0a0;FUN_7101bcc690;FUN_7101bcd660;...
- **Files:** [decomp](../decompiled/FUN_7101bc3210__7101bc3210.c)  [cfg](../decompiled/FUN_7101bc3210__7101bc3210.mmd)
- **Clone hash:** `5170893832615672`

```c

void FUN_7101bc3210(long *param_1,long param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  long *plVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  void *__dest;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 uVar14;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  byte ****ppppbVar15;
  long ****pppplVar16;
  byte ****ppppbVar17;
  long ****pppplVar18;
  byte **ppbVar19;
  code *pcVar20;
  long lVar21;
  byte ***pppbVar22;
  long lVar23;
// ... (3497 more lines)
```

## 10. `FUN_7101f7c910`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f7c910`  (offset `0x1f7c910`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f7c910(long param_1)`
- **Size / BBs / Incoming:** 9552 bytes / 4 bb / 1 incoming refs
- **Match values:** start
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

## 11. `FUN_7102068680`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102068680`  (offset `0x2068680`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102068680(long param_1)`
- **Size / BBs / Incoming:** 2496 bytes / 4 bb / 2 incoming refs
- **Match values:** start
- **Strings touched:** MotionModule;change_motion;change_motion_inherit_frame;change_motion_inherit_frame_keep_rate;change_motion_force_inherit_frame;change_motion_kind;add_motion_2nd;set_weight;get_weight;set_weight_rate;is_blend;is_changing;motion_kind;set_rate;rate_2nd;set_rate_2nd;frame;prev_frame;plate_side;set_frame;set_frame_sync_anim_cmd;end_frame;end_frame_from_hash;set_frame_2nd;frame_2nd;trans_tra;trans_tra_2nd;joint_local_tra;trans_tra_end_frame;is_end;is_looped;is_loop_flag;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102068680__7102068680.c)  [cfg](../decompiled/FUN_7102068680__7102068680.mmd)
- **Clone hash:** `19235d65e8d9bfe1`

```c

void FUN_7102068680(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"MotionModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion",(long ****)FUN_710205d3b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_inherit_frame",(long ****)FUN_710205d8f0,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_inherit_frame_keep_rate",(long ****)FUN_710205de00
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_force_inherit_frame",(long ****)FUN_710205e1c0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_kind",(long ****)FUN_710205e580,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_motion_2nd",(long ****)FUN_710205e6b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_weight",(long ****)FUN_710205eb20,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_weight",(long ****)FUN_710205ed90,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_weight_rate",(long ****)FUN_710205ee60,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_blend",(long ****)FUN_710205f030,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_changing",(long ****)FUN_710205f100,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"motion_kind",(long ****)FUN_710205f1d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_71043aea1b,(long ****)FUN_710205f2b0,ppppbVar1,in_x4,in_x5,
// ... (183 more lines)
```

## 12. `FUN_710300aa60`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710300aa60`  (offset `0x300aa60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710300aa60(undefined1[16] param_1, undefined1[16] param_2, undefined1[16] param_3, undefined1[16] param_4, byte * * param_5, undefined8 param_6, undefined * * param_7, undefined1[16] * param_8, undefined1[16] * param_9, undefined1[16] * param_10, long * * * * * * param_11, long * * * param_12)`
- **Size / BBs / Incoming:** 12212 bytes / 600 bb / 1 incoming refs
- **Match values:** Start;start
- **Strings touched:** 03_StopPoint;dyr_point04_cruiser_set;dyr_point05_StartGate_set;stc_point05_startgate_set
- **Callees:** FUN_71000001c0;FUN_71003ac560;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7100523f10;FUN_7100532bc0;FUN_7101764000;FUN_71025d9250;FUN_71025e8370;FUN_71025e9d50;FUN_710262beb0;FUN_710262fb80;FUN_71026533a0;FUN_710300df70;FUN_71030110b0;FUN_7103013910;FUN_7103013df0;...
- **Files:** [decomp](../decompiled/FUN_710300aa60__710300aa60.c)  [cfg](../decompiled/FUN_710300aa60__710300aa60.mmd)
- **Clone hash:** `a59c40389a74b764`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710300aa60(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   undefined1 param_4 [16],byte **param_5,undefined8 param_6,undefined **param_7,
                   undefined1 (*param_8) [16],undefined1 (*param_9) [16],undefined1 (*param_10) [16]
                   ,long ******param_11,long ***param_12)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  short sVar6;
  undefined1 auVar7 [16];
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  bool bVar23;
  undefined4 uVar24;
  int iVar25;
  long *plVar26;
  ulong uVar27;
  byte ***pppbVar28;
  undefined8 *puVar29;
  byte *pbVar30;
  long ***ppplVar31;
// ... (2500 more lines)
```

## 13. `FUN_7103371290`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103371290`  (offset `0x3371290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103371290(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12368 bytes / 333 bb / 3 incoming refs
- **Match values:** START;start
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

## 14. `FUN_7102123d40`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102123d40`  (offset `0x2123d40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102123d40(void)`
- **Size / BBs / Incoming:** 74688 bytes / 187 bb / 1 incoming refs
- **Match values:** START
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

## 15. `FUN_71001001a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001001a0`  (offset `0x1001a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001001a0(void)`
- **Size / BBs / Incoming:** 1176 bytes / 49 bb / 2 incoming refs
- **Match values:** start;Start
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartJoinNextMesh;NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::MeshRestart;NexMatchJointSessionJob::WaitStartRetryJoinMesh
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_71000d8f90;FUN_71000edff0;FUN_7100140910;FUN_7100140e30;FUN_7100146ba0;FUN_71001602c0;FUN_7100160990;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001001a0__71001001a0.c)  [cfg](../decompiled/FUN_71001001a0__71001001a0.mmd)
- **Clone hash:** `72a0072209950e3a`

```c

undefined8 FUN_71001001a0(long *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  int aiStack_68 [4];
  int aiStack_58 [4];
  undefined4 auStack_48 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar7 = DAT_71052adb38;
  if (iVar3 == 7) {
    uVar10 = 0xc420;
LAB_7100100228:
    *(undefined1 *)((long)param_1 + 0xfa) = 1;
    *(undefined1 *)(param_1 + 0x26) = 3;
    aiStack_58[0] = uVar10;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_58 | 4));
    aiStack_68[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)aiStack_68);
    FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_58);
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71000f70d0;
    param_1[7] = 0;
    param_1[8] = (long)"NexMatchJointSessionJob::ProcessFailure";
    return 0;
  }
  if (iVar3 == 6) {
// ... (153 more lines)
```

## 16. `FUN_71000fa1c0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fa1c0`  (offset `0xfa1c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fa1c0(void)`
- **Size / BBs / Incoming:** 1084 bytes / 43 bb / 3 incoming refs
- **Match values:** Start
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::ResendInvitationAsCompanion;NexMatchJointSessionJob::SendLeaveMeshCompanion;NexMatchJointSessionJob::StartCreateMatchmakeSession;NexMatchJointSessionJob::StartJoinMatchmakeSession;chara/chara_4/chara_4_;NexMatchJointSessionJob::StartRandomMatchmake
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140910;FUN_7100146ba0;FUN_7100150680;FUN_71001508c0;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fa1c0__71000fa1c0.c)  [cfg](../decompiled/FUN_71000fa1c0__71000fa1c0.mmd)
- **Clone hash:** `fe1ac3bccde37620`

```c

undefined8 FUN_71000fa1c0(long *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  ulong uVar12;
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    aiStack_78[0] = 0xc406;
    break;
  case 6:
    aiStack_78[0] = 0xa471;
    break;
  case 7:
    aiStack_78[0] = 0xc420;
    break;
  case 8:
    aiStack_78[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_78,DAT_71052adfc0);
    if ((aiStack_78[0] == 0) &&
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar7 = DAT_71052adb38, iVar3 != 4)) {
      if (*(char *)((long)param_1 + 0xfb) == '\0') {
        piVar4 = (int *)param_1[0xb];
        if ((piVar4 != (int *)0x0) && ((char)piVar4[10] != '\0')) {
// ... (127 more lines)
```

## 17. `FUN_710018f2c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018f2c0`  (offset `0x18f2c0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710018f2c0(long param_1)`
- **Size / BBs / Incoming:** 188 bytes / 8 bb / 2 incoming refs
- **Match values:** Start
- **Strings touched:** LeaveWithHostMigrationJob::StartDisconnectStations;LeaveWithHostMigrationJob::WaitHostMigrationProcess;LeaveWithHostMigrationJob::SendStartMultiMigrationMessage;LeaveWithHostMigrationJob::SendStartMigrationMessage
- **Callees:** FUN_71001a2880
- **Files:** [decomp](../decompiled/FUN_710018f2c0__710018f2c0.c)  [cfg](../decompiled/FUN_710018f2c0__710018f2c0.mmd)
- **Clone hash:** `8399b340e4daef63`

```c

undefined8 FUN_710018f2c0(long param_1)

{
  char *pcVar1;
  long *plVar2;
  
  plVar2 = *(long **)(DAT_71052adfc0 + 0x38);
  if (*(char *)((long)plVar2 + 0x84) == '\0') {
    if (*(int *)(DAT_71052adfc0 + 0xb8) == 2) {
      *(code **)(param_1 + 0x30) = FUN_710018f560;
      pcVar1 = "LeaveWithHostMigrationJob::SendStartMultiMigrationMessage";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_710018f5e0;
      pcVar1 = "LeaveWithHostMigrationJob::SendStartMigrationMessage";
    }
  }
  else if (*(int *)(DAT_71052adfc0 + 0xb8) == 2) {
    FUN_71001a2880(plVar2);
    *(undefined1 *)(plVar2 + 9) = 1;
    *(code **)(param_1 + 0x30) = FUN_710018f380;
    pcVar1 = "LeaveWithHostMigrationJob::StartDisconnectStations";
  }
  else {
    *(code **)(param_1 + 0x30) = FUN_710018f4e0;
    pcVar1 = "LeaveWithHostMigrationJob::WaitHostMigrationProcess";
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar1;
  return 0;
}


```

## 18. `FUN_71020c9380`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020c9380`  (offset `0x20c9380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020c9380(long param_1)`
- **Size / BBs / Incoming:** 2520 bytes / 4 bb / 2 incoming refs
- **Match values:** start
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

## 19. `FUN_71000ff3e0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000ff3e0`  (offset `0xff3e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000ff3e0(void)`
- **Size / BBs / Incoming:** 592 bytes / 32 bb / 5 incoming refs
- **Match values:** start;Start
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::MeshRestart;NexMatchJointSessionJob::StartLeaveMesh
- **Callees:** FUN_71000b4260;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140910;FUN_7100140e30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000ff3e0__71000ff3e0.c)  [cfg](../decompiled/FUN_71000ff3e0__71000ff3e0.mmd)
- **Clone hash:** `cbb972757af31331`

```c

undefined8 FUN_71000ff3e0(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  char *pcVar6;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052adb38;
  if (iVar3 == 7) {
    aiStack_40[0] = 0xc420;
  }
  else if (iVar3 == 6) {
    aiStack_40[0] = 0xa471;
  }
  else if (iVar3 == 5) {
    aiStack_40[0] = 0xc406;
  }
  else {
    if (iVar3 != 8) {
      if (*(char *)((long)param_1 + 0xfb) != '\0') {
        FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
        *(undefined1 *)(param_1 + 0x26) = 6;
        param_1[6] = (long)FUN_71000f7210;
        param_1[7] = 0;
        param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
        return 5;
      }
      piVar4 = (int *)param_1[0xb];
      if ((piVar4 != (int *)0x0) && ((char)piVar4[10] != '\0')) {
        if (2 < *piVar4 - 2U) {
          FUN_71000b4260(piVar4);
        }
        param_1[0xb] = 0;
// ... (58 more lines)
```

## 20. `FUN_7101fa11c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** start
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

## 21. `FUN_7102144140`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102144140`  (offset `0x2144140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102144140(long param_1)`
- **Size / BBs / Incoming:** 1248 bytes / 4 bb / 2 incoming refs
- **Match values:** start
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

## 22. `FUN_7100100820`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100100820`  (offset `0x100820`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100100820(void)`
- **Size / BBs / Incoming:** 2540 bytes / 89 bb / 2 incoming refs
- **Match values:** start;Start
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitCompanionStation;NexMatchJointSessionJob::WaitStartRetryJoinMesh;NexMatchJointSessionJob::MeshRestart;NexMatchJointSessionJob::StartLeaveMesh
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140060;FUN_7100140910;FUN_7100140e30;FUN_7100146ba0;FUN_71001507a0;FUN_71001902d0;FUN_71001929a0;FUN_71001929d0;FUN_7100192a60;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100100820__7100100820.c)  [cfg](../decompiled/FUN_7100100820__7100100820.mmd)
- **Clone hash:** `6443dc19d85972e5`

```c

undefined8 FUN_7100100820(long *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  ErrorResultVariant *pEVar14;
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  long alStack_60 [2];
  undefined4 auStack_48 [2];
  
  iVar5 = FUN_7100146ba0(DAT_71052adb38);
  lVar2 = DAT_71052adb38;
  if (iVar5 == 7) {
    alStack_60[0]._0_4_ = 0xc420;
LAB_71001008ac:
    *(undefined1 *)((long)param_1 + 0xfa) = 1;
    *(undefined1 *)(param_1 + 0x26) = 3;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)alStack_60 | 4));
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)alStack_60 | 4),(Result *)aiStack_70);
    FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_60);
// ... (350 more lines)
```

## 23. `FUN_7101c59330`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c59330`  (offset `0x1c59330`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c59330(long param_1, byte param_2, undefined8 param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 804 bytes / 46 bb / 12 incoming refs
- **Match values:** start
- **Strings touched:** txt_disp_loop;txt_disp_on;txt_disp_off;txt_next;txt_wait_start;txt_melee;mode_empty_03;set_parts_txt_start;anim_loop;txt_getready;txt_in_battle;txt_wait_other;txt_wait_rule
- **Callers:** FUN_7101c50320;FUN_7101c51160;FUN_7101c51ef0;FUN_7101c534b0;FUN_7101c54190;FUN_7101c55160;FUN_7101c55e10;FUN_7101c55ec0;FUN_7101c56ec0;FUN_7101c57c00;FUN_7101c58580
- **Callees:** FUN_7103776640;FUN_71037780e0;FUN_7103778300;FUN_7103778760;FUN_710377aee0;FUN_710377b140;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c59330__7101c59330.c)  [cfg](../decompiled/FUN_7101c59330__7101c59330.mmd)
- **Clone hash:** `046a46eb7eceb79a`

```c

void FUN_7101c59330(long param_1,byte param_2,ulong param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  char *pcVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  long *local_58;
  
  iVar5 = (int)param_3;
  pppuVar3 = &local_70;
  uVar10 = param_3 & 0xffffffff;
  if (*(byte *)(param_1 + 9) != (param_2 & 1)) {
    uVar6 = param_4;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),0x71042a30da);
    FUN_71037780e0(&local_60,param_1 + 0x10,(long ****)"txt_disp_on",param_3,uVar6,param_5,param_6,
                   param_7,param_8);
    FUN_71037780e0(&local_70,param_1 + 0x10,(long ****)"txt_disp_off",param_3,uVar6,param_5,param_6,
                   param_7,param_8);
    if ((param_2 & 1) == 0) {
      FUN_710377b140((long)&local_60);
      if ((param_4 & 1) == 0) goto LAB_7101c594d8;
      FUN_710377b140((long)&local_70);
    }
    else {
      FUN_710377b140((long)&local_70);
// ... (121 more lines)
```

## 24. `FUN_7101a8e1f0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a8e1f0`  (offset `0x1a8e1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a8e1f0(long param_1, undefined8 param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5848 bytes / 287 bb / 1 incoming refs
- **Match values:** start
- **Strings touched:** set_parts_cur_hammer;set_parts_in_%d%02d;set_parts_out_%d%02d;blink_c_01;pausequit_disp_on;hammer_swing;hammer_start;target_off;set_fxui_break;target_on;hammer_standby;set_parts_btn_hammer;set_txt_hammer_n;pausequit_disp_off;blink_c_00
- **Callees:** FUN_7101316520;FUN_710175dfc0;FUN_7101a8fdf0;FUN_7101a90280;FUN_7101a905b0;FUN_7101a90b10;FUN_71024076d0;FUN_710240a7a0;FUN_7103267660;FUN_7103268810;FUN_7103313f20;FUN_7103771a80;FUN_71037760f0;FUN_7103776640;FUN_7103776910;FUN_71037780e0;...
- **Files:** [decomp](../decompiled/FUN_7101a8e1f0__7101a8e1f0.c)  [cfg](../decompiled/FUN_7101a8e1f0__7101a8e1f0.mmd)
- **Clone hash:** `8d6f3c9f70be5358`

```c

void FUN_7101a8e1f0(long param_1,undefined8 param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  void *__dest;
  undefined8 uVar13;
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
  ulong uVar14;
  long ****pppplVar15;
  ulong uVar16;
  byte ****ppppbVar17;
  long *plVar18;
  int *piVar19;
  long ***ppplVar20;
// ... (1025 more lines)
```

## 25. `FUN_71000fe620`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fe620`  (offset `0xfe620`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fe620(void)`
- **Size / BBs / Incoming:** 392 bytes / 16 bb / 5 incoming refs
- **Match values:** start;Start
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::MeshRestart
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fe620__71000fe620.c)  [cfg](../decompiled/FUN_71000fe620__71000fe620.mmd)
- **Clone hash:** `3999ea7f1e1980bd`

```c

undefined8 FUN_71000fe620(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    if (*(char *)(param_1 + 0xfb) == '\0') {
      if (*(ulong *)(param_1 + 0x208) < *(ulong *)(DAT_71052ac580 + 0x30)) {
        *(code **)(param_1 + 0x30) = FUN_71000fec40;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::MeshRestart";
      }
      uVar2 = 5;
      if (*(char *)(param_1 + 0xf4) == '\0') {
        return 5;
      }
      pcVar3 = FUN_71000fec40;
      pcVar4 = "NexMatchJointSessionJob::MeshRestart";
    }
    else {
// ... (26 more lines)
```

## 26. `FUN_7101f94540`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f94540`  (offset `0x1f94540`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f94540(long param_1)`
- **Size / BBs / Incoming:** 1752 bytes / 4 bb / 2 incoming refs
- **Match values:** start
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

## 27. `FUN_71000fd6b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd6b0`  (offset `0xfd6b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd6b0(void)`
- **Size / BBs / Incoming:** 808 bytes / 27 bb / 3 incoming refs
- **Match values:** Start;start
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeavePreviousMatchmakeSession;NexMatchJointSessionJob::WaitMeshRestart;NexMatchJointSessionJob::WaitLeavePreviousMesh
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_7100140060;FUN_7100140e30;FUN_7100146ba0;FUN_7100146ed0;FUN_7100191ee0;FUN_71001921b0;FUN_7100192c30;FUN_7100192e90;FUN_71001931d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fd6b0__71000fd6b0.c)  [cfg](../decompiled/FUN_71000fd6b0__71000fd6b0.mmd)
- **Clone hash:** `ea65146691ff6e84`

```c

undefined8 FUN_71000fd6b0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  code *pcVar9;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  *(undefined4 *)(param_1 + 0x230) = 0xe;
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar4 == 7) {
    aiStack_50[0] = 0xc420;
  }
  else if (iVar4 == 6) {
    aiStack_50[0] = 0xa471;
  }
  else if (iVar4 == 5) {
    aiStack_50[0] = 0xc406;
  }
  else {
    if (iVar4 != 8) {
      *(undefined1 *)(DAT_71052adb38 + 0x15c) = 1;
      puVar2 = DAT_71052adfc0;
      FUN_7100192e90(aiStack_50,(long)DAT_71052adfc0);
      aiStack_60[0] = 0x6c50;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
      if (aiStack_50[0] == aiStack_60[0]) {
// ... (88 more lines)
```

## 28. `FUN_7102719250`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102719250`  (offset `0x2719250`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102719250(float param_1, int * param_2, undefined8 * param_3, long * * * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 1796 bytes / 89 bb / 1 incoming refs
- **Match values:** Start
- **Strings touched:** ChopStart
- **Callers:** FUN_7102720280
- **Callees:** FUN_71004b06e0;FUN_71025e9d50;FUN_71025ee080;FUN_710260fdd0;FUN_7102610070;FUN_7102627a90;FUN_71035707d0;FUN_7103736cf0;<EXTERNAL>::sqrtf;<EXTERNAL>::std::mutex::lock;<EXTERNAL>::std::mutex::unlock;<EXTERNAL>::atan2f
- **Files:** [decomp](../decompiled/FUN_7102719250__7102719250.c)  [cfg](../decompiled/FUN_7102719250__7102719250.mmd)
- **Clone hash:** `44b976a801c6566b`

```c

/* WARNING: Removing unreachable block (ram,0x007102719548) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102719250(float param_1,int *param_2,undefined8 *param_3,long ****param_4,byte ****param_5
                   ,long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long ***ppplVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar11;
  long ****pppplVar12;
  undefined4 uVar13;
  float *pfVar14;
  long **pplVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float __x;
  float fVar23;
  float fVar24;
  float fVar25;
  long **local_a0;
  long *plStack_98;
  long local_90;
// ... (301 more lines)
```

## 29. `FUN_710224bda0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710224bda0`  (offset `0x224bda0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710224bda0(long param_1)`
- **Size / BBs / Incoming:** 552 bytes / 4 bb / 2 incoming refs
- **Match values:** start
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

## 30. `FUN_7101c70500`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c70500`  (offset `0x1c70500`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_7101c70500(undefined1 param_1)`
- **Size / BBs / Incoming:** 284 bytes / 24 bb / 3 incoming refs
- **Match values:** start
- **Strings touched:** mnu_online_room_inside_sysmsg_enter;mnu_online_room_inside_sysmsg_rule_1;mnu_online_room_inside_sysmsg_leave;mnu_online_room_inside_sysmsg_10ko;mnu_online_room_inside_sysmsg_30ko;mnu_online_room_inside_sysmsg_50ko;mnu_online_room_inside_sysmsg_100ko;mnu_online_room_inside_sysmsg_battle_finish;mnu_online_room_inside_sysmsg_cannot_battle;mnu_online_room_inside_sysmsg_battle_start;mnu_online_room_inside_sysmsg_battle_start_c;mnu_online_room_inside_sysmsg_winning_streak;mnu_online_room_inside_chat_own;mnu_online_room_inside_chat_others;mnu_online_room_inside_sysmsg_rule_changing;mnu_online_room_inside_sysmsg_rule_change;mnu_online_room_inside_sysmsg_rule_0;mnu_online_room_inside_sysmsg_rule_2;mnu_online_room_inside_sysmsg_rule_3;mnu_online_room_inside_sysmsg_rule_no_change
- **Callers:** FUN_7101c70620;FUN_7101c73ca0;FUN_7101c74c10
- **Files:** [decomp](../decompiled/FUN_7101c70500__7101c70500.c)  [cfg](../decompiled/FUN_7101c70500__7101c70500.mmd)
- **Clone hash:** `b54599076d56a440`

```c

char * FUN_7101c70500(undefined1 param_1)

{
  char *pcVar1;
  
  pcVar1 = "mnu_online_room_inside_sysmsg_enter";
  switch(param_1) {
  case 1:
    goto switchD_7101c70528_caseD_1;
  case 2:
  case 3:
    return "mnu_online_room_inside_sysmsg_leave";
  case 4:
    return "mnu_online_room_inside_sysmsg_10ko";
  case 5:
    return "mnu_online_room_inside_sysmsg_30ko";
  case 6:
    return "mnu_online_room_inside_sysmsg_50ko";
  case 7:
    return "mnu_online_room_inside_sysmsg_100ko";
  default:
    pcVar1 = "";
switchD_7101c70528_caseD_1:
    return pcVar1;
  case 9:
    return "mnu_online_room_inside_sysmsg_battle_finish";
  case 10:
    return "mnu_online_room_inside_sysmsg_cannot_battle";
  case 100:
    return "mnu_online_room_inside_sysmsg_battle_start";
  case 0x65:
    return "mnu_online_room_inside_sysmsg_battle_start_c";
  case 0x66:
    return "mnu_online_room_inside_sysmsg_winning_streak";
  case 0x67:
    return "mnu_online_room_inside_chat_own";
  case 0x68:
    return "mnu_online_room_inside_chat_others";
  case 0x69:
// ... (18 more lines)
```

## 31. `FUN_710149e660`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710149e660`  (offset `0x149e660`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710149e660(undefined8 * param_1, long param_2)`
- **Size / BBs / Incoming:** 1372 bytes / 72 bb / 3 incoming refs
- **Match values:** start
- **Strings touched:** start_%s;end_%s;jack_color_grading_start_frame_%s
- **Callers:** FUN_7101473200;FUN_71014737c0;FUN_7101473cd0
- **Callees:** FUN_710062dc20;FUN_710149ebc0;FUN_710149eca0
- **Files:** [decomp](../decompiled/FUN_710149e660__710149e660.c)  [cfg](../decompiled/FUN_710149e660__710149e660.mmd)
- **Clone hash:** `b6b13ee6d43d5262`

```c

void FUN_710149e660(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  byte *pbVar11;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  long local_b8;
  char *pcStack_b0;
  long local_a8;
  char *pcStack_a0;
  uint local_98 [2];
  byte local_90 [64];
  byte *pbVar12;
  
  local_90[0] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  *param_1 = &DAT_3f8000003f800000;
  param_1[1] = &DAT_3f8000003f800000;
  param_1[2] = 0;
  param_1[3] = 0x3f80000000000000;
  param_1[4] = &DAT_3f8000003f800000;
  param_1[10] = &DAT_3f8000003f800000;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  FUN_710062dc20(local_98,"start_%s");
// ... (244 more lines)
```

## 32. `FUN_71037a4bc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037a4bc0`  (offset `0x37a4bc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037a4bc0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12292 bytes / 780 bb / 1 incoming refs
- **Match values:** start
- **Strings touched:** cmn_button_gc_a;cmn_button_gc_b;dys_yoga03_l_03_set;cmn_button_gc_x;cmn_button_gc_y;cmn_button_gc_l;cmn_button_gc_r;cmn_button_gc_z;cmn_button_gc_start;cmn_button_gc_stick_l;cmn_button_gc_stick_c
- **Callers:** FUN_7101977420
- **Callees:** FUN_71037a4450;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_71037a4bc0__71037a4bc0.c)  [cfg](../decompiled/FUN_71037a4bc0__71037a4bc0.mmd)
- **Clone hash:** `69362aa60180008a`

```c

void FUN_71037a4bc0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort *puVar1;
  ushort *puVar2;
  ulong uVar3;
  undefined2 *puVar4;
  long ****pppplVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  long ***ppplVar10;
  ulong uVar11;
  long ***local_48;
  undefined4 local_34;
  
  puVar1 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"cmn_button_gc_a");
  if (DAT_710593be88 != &DAT_710593be48 && DAT_710593be88 != (undefined2 *)0x0) {
    FUN_710392eb40((ulong)DAT_710593be88);
  }
  DAT_710593be48 = 0;
  DAT_710593be88 = &DAT_710593be48;
  DAT_710593be90 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar7 = *puVar1;
    puVar2 = DAT_710593be88;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593be90 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      puVar9 = puVar1;
      do {
        if ((uVar7 | 1) == 0xf) {
          if (uVar7 == 0xe) {
// ... (2644 more lines)
```

## 33. `FUN_7100102730`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100102730`  (offset `0x102730`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100102730(void)`
- **Size / BBs / Incoming:** 976 bytes / 33 bb / 2 incoming refs
- **Match values:** Start
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitHostStationId;NexMatchJointSessionJob::WaitCompanionStation
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_7100146ed0;FUN_710014f000;FUN_7100150680;FUN_7100192e90;FUN_71001939c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100102730__7100102730.c)  [cfg](../decompiled/FUN_7100102730__7100102730.mmd)
- **Clone hash:** `6aca059c9d7cba62`

```c

undefined8 FUN_7100102730(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_50,DAT_71052adfc0);
    if ((aiStack_50[0] == 0) &&
       (iVar2 = FUN_7100146ba0(DAT_71052adb38), lVar7 = DAT_71052adb38, iVar2 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar1 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
        if (!bVar1) {
          uVar4 = FUN_7100146ed0(lVar7);
          if ((uVar4 & 1) == 0) {
// ... (111 more lines)
```

## 34. `FUN_710193e300`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710193e300`  (offset `0x193e300`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710193e300(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1908 bytes / 81 bb / 1 incoming refs
- **Match values:** start
- **Strings touched:** cam_school%d_dialog_training_start;chara/chara_4/chara_4_;default;progress_finish_init;progress_lvmax_reset;up_possible_off;gauge_on;cam_school%d_dialog_training_start_again
- **Callees:** FUN_71003a4ca0;FUN_7101e94ba0;FUN_7101e9c150;FUN_71032a3d90;FUN_71032e5b10;FUN_7103775dc0;FUN_7103778300;FUN_710377a120;FUN_710377aa20;FUN_710377abf0;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_710193e300__710193e300.c)  [cfg](../decompiled/FUN_710193e300__710193e300.mmd)
- **Clone hash:** `7a6f4dea3b0840b4`

```c

void FUN_710193e300(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar2;
  long ****pppplVar3;
  int iVar4;
  long *plVar5;
  char cVar6;
  undefined4 uVar7;
  ushort *puVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ushort uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  ushort *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  uint auStack_98 [2];
  char acStack_90 [64];
  
  lVar18 = *(long *)(*(long *)(param_1 + 0x1c0) + 0x80);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar18 + 0x1f0),0,(long ****)&DAT_00001000,param_4,
                 param_5,param_6,param_7,param_8);
  uVar2 = 0x14fff;
  FUN_7103775dc0((long *)**(undefined8 **)(lVar18 + 0x328),1,(long ****)0x14fff,param_4,param_5,
                 param_6,param_7,param_8);
// ... (273 more lines)
```

## 35. `FUN_71000f74b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f74b0`  (offset `0xf74b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f74b0(void)`
- **Size / BBs / Incoming:** 744 bytes / 25 bb / 4 incoming refs
- **Match values:** Start
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::CloseJointSessionParticipation;NexMatchJointSessionJob::SendInvitationAsCompanion;dys_yoga03_l_03_set;NODE_PRE_REFRACT_BLEND
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140060;FUN_7100146ba0;FUN_7100148dc0;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f74b0__71000f74b0.c)  [cfg](../decompiled/FUN_71000f74b0__71000f74b0.mmd)
- **Clone hash:** `243ef268b35a11f4`

```c

undefined8 FUN_71000f74b0(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  undefined1 uVar8;
  code *pcVar9;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    if ((aiStack_40[0] != 0) ||
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar3 == 4)) {
      aiStack_40[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
// ... (76 more lines)
```

## 36. `FUN_71000fc7d0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fc7d0`  (offset `0xfc7d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fc7d0(void)`
- **Size / BBs / Incoming:** 1164 bytes / 32 bb / 6 incoming refs
- **Match values:** Start
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;chara/chara_4/chara_4_;NexMatchJointSessionJob::SendNextSessionId;NexMatchJointSessionJob::WaitUntilLeaderLeavesMesh;NexMatchJointSessionJob::WaitNextSessionId
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_71000f9670;FUN_7100146ba0;FUN_7100146ed0;FUN_7100149290;FUN_710014e050;FUN_7100150440;FUN_7100150680;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fc7d0__71000fc7d0.c)  [cfg](../decompiled/FUN_71000fc7d0__71000fc7d0.mmd)
- **Clone hash:** `d38cb28c7328b7fd`

```c

undefined8 FUN_71000fc7d0(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  piVar5 = aiStack_60;
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_50,DAT_71052adfc0);
    if ((aiStack_50[0] == 0) &&
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar3 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar2 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
        if (bVar2) {
          FUN_710014e050(aiStack_50,*(long *)(lVar1 + 200),(char)*(undefined4 *)(param_1 + 0x90),
                         *(long *)(param_1 + 0xa0),*(int *)(param_1 + 0xf0),1);
// ... (131 more lines)
```

## 37. `FUN_71000fd9e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd9e0`  (offset `0xfd9e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd9e0(void)`
- **Size / BBs / Incoming:** 1008 bytes / 35 bb / 3 incoming refs
- **Match values:** Start
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::SendPreparedForMigrateSession;NexMatchJointSessionJob::GetNextMatchmakeSessionInfo;chara/chara_4/chara_4_
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_71000edff0;FUN_7100146ba0;FUN_7100146ed0;FUN_7100149290;FUN_7100150680;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fd9e0__71000fd9e0.c)  [cfg](../decompiled/FUN_71000fd9e0__71000fd9e0.mmd)
- **Clone hash:** `79e58e309476dd51`

```c

undefined8 FUN_71000fd9e0(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_50,DAT_71052adfc0);
    if ((aiStack_50[0] == 0) &&
       (iVar2 = FUN_7100146ba0(DAT_71052adb38), lVar4 = DAT_71052adb38, iVar2 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar1 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
        if (bVar1) {
          iVar2 = *(int *)(param_1 + 0xf0);
joined_r0x0071000fddac:
          if ((iVar2 == 0) || (bVar1 = FUN_71000edff0(*(long *)(lVar4 + 8),iVar2), !bVar1)) {
            return 5;
// ... (113 more lines)
```

## 38. `FUN_710226e860`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226e860`  (offset `0x226e860`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226e860(long param_1)`
- **Size / BBs / Incoming:** 1152 bytes / 4 bb / 2 incoming refs
- **Match values:** start
- **Strings touched:** pickelobject;grid_size;grid_position;grid_status;is_grid_blank;regist_block_to_grid;set_assist_team_no;unregist_block_to_grid;get_battle_object_id_from_grid_pos;create_ground_collision;update_collision_work;set_material_visibility_mesh_all_invisible;get_base_material_visibility_mesh_id_hash;get_damaged_material_visibility_mesh_id_hash;get_born_effect_hash;get_damage_sound_hash;get_break_sound_hash;is_landing_fighter_rhombus_touch_ground;is_wall_left_fighter_rhombus_touch_ground;is_wall_right_fighter_rhombus_touch_ground;is_heading_fighter_rhombus_touch_ground;check_range_from_onwer;update_blink;damage_hit_fighter;crack_hp_percent;crack_max_hp_percent;flash_start_frame;auto_damage;crack_level;damage_hit_fighter_stop_frame;fighter_landing_damage_mul;fighter_landing_damage_mul_frame;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710226e860__710226e860.c)  [cfg](../decompiled/FUN_710226e860__710226e860.mmd)
- **Clone hash:** `399f0a1b88164d94`

```c

void FUN_710226e860(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"pickelobject",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"grid_size",(long ****)FUN_710226c300,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"grid_position",(long ****)FUN_710226c340,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"grid_status",(long ****)FUN_710226c5e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_grid_blank",(long ****)FUN_710226c870,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"regist_block_to_grid",(long ****)FUN_710226cb00,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"unregist_block_to_grid",(long ****)FUN_710226cda0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_battle_object_id_from_grid_pos",(long ****)FUN_710226cff0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"create_ground_collision",(long ****)FUN_710226d270,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"update_collision_work",(long ****)FUN_710226d360,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_material_visibility_mesh_all_invisible",
                 (long ****)FUN_710226d420,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_base_material_visibility_mesh_id_hash",
                 (long ****)FUN_710226d4e0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_damaged_material_visibility_mesh_id_hash",
                 (long ****)FUN_710226d650,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_born_effect_hash",(long ****)FUN_710226d740,ppppbVar1,in_x4,
// ... (71 more lines)
```

## 39. `FUN_71000f9e90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f9e90`  (offset `0xf9e90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f9e90(void)`
- **Size / BBs / Incoming:** 812 bytes / 23 bb / 3 incoming refs
- **Match values:** Start
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitUntilLeaderLeavesMesh;NexMatchJointSessionJob::WaitNextSessionId
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_7100140e30;FUN_7100146ba0;FUN_7100149240;FUN_710014e380;FUN_7100150440;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f9e90__71000f9e90.c)  [cfg](../decompiled/FUN_71000f9e90__71000f9e90.mmd)
- **Clone hash:** `5db5f9437ee35601`

```c

undefined8 FUN_71000f9e90(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined1 uVar6;
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
    aiStack_48[0] = 0xc406;
    break;
  case 6:
    aiStack_48[0] = 0xa471;
    break;
  case 7:
    aiStack_48[0] = 0xc420;
    break;
  case 8:
    aiStack_48[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_48,DAT_71052adfc0);
    if ((aiStack_48[0] == 0) &&
       (iVar4 = FUN_7100146ba0(DAT_71052adb38), lVar2 = DAT_71052adb38, iVar4 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        FUN_710014e380(aiStack_48,*(long *)(DAT_71052adb38 + 200),
                       (char)*(undefined4 *)(param_1 + 0x90),*(long *)(param_1 + 0xa0),1);
        aiStack_58[0] = 0x4c0d;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_58 | 4));
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
// ... (80 more lines)
```

## 40. `FUN_710278e1f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710278e1f0`  (offset `0x278e1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710278e1f0(long param_1, long * param_2, uint * param_3, byte * * * * param_4, uint * param_5, undefined8 param_6, ulong param_7, byte * param_8)`
- **Size / BBs / Incoming:** 7248 bytes / 486 bb / 2 incoming refs
- **Match values:** START
- **Strings touched:** STG_BRAVE_ALTAR_RAINBOW_START
- **Callees:** FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::memset;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::abort;<EXTERNAL>::std::string::assign
- **Files:** [decomp](../decompiled/FUN_710278e1f0__710278e1f0.c)  [cfg](../decompiled/FUN_710278e1f0__710278e1f0.mmd)
- **Clone hash:** `b79a71b35fdd97d7`

```c

void FUN_710278e1f0(long param_1,long *param_2,uint *param_3,byte ****param_4,uint *param_5,
                   undefined8 param_6,ulong param_7,byte *param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  long ****pppplVar10;
  byte *pbVar11;
  int iVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  long ***ppplVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  int iVar22;
  byte *pbVar23;
  undefined8 uVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 uVar27;
  size_t __n;
  long ****pppplVar28;
  void *pvVar29;
  long lVar30;
  byte *pbVar31;
  ulong uVar32;
  ulong uVar33;
  undefined4 uVar34;
// ... (1447 more lines)
```

## 41. `FUN_7101bcdd20`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bcdd20`  (offset `0x1bcdd20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bcdd20(undefined4 * param_1, undefined8 * param_2, long * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2800 bytes / 152 bb / 2 incoming refs
- **Match values:** start
- **Strings touched:** progress_gauge;linear;color_default;color_battlestart;loop_light;in_allready;mode_empty_03;loop_allready;set_txt_status;set_txt_status_next;stat_change
- **Callers:** FUN_7101bc3210;FUN_7101bcf940
- **Callees:** FUN_7101bc9fe0;FUN_7103776390;FUN_7103776640;FUN_71037780e0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101bcdd20__7101bcdd20.c)  [cfg](../decompiled/FUN_7101bcdd20__7101bcdd20.mmd)
- **Clone hash:** `60015a3e7f10c68c`

```c

void FUN_7101bcdd20(undefined4 *param_1,undefined8 *param_2,long *****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long ****pppplVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long ***ppplVar13;
  long ******pppppplVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  ulong uVar17;
  ulong uVar18;
  undefined **local_160;
  ulong local_158;
  long *****local_150;
  long ****local_148;
  long ****local_140;
  char *local_138;
  undefined4 local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
// ... (522 more lines)
```

## 42. `FUN_710284e490`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710284e490`  (offset `0x284e490`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710284e490(long * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, byte * param_7, ulong param_8, ulong param_9, ulong param_10, ulong param_11, ulong param_12, ulong param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16, undefined4 param_17, byte * param_18, ulong param_19, long param_20)`
- **Size / BBs / Incoming:** 1936 bytes / 101 bb / 5 incoming refs
- **Match values:** start
- **Strings touched:** %s_%s%s;start
- **Callers:** FUN_710284d340
- **Callees:** FUN_710062dc20;FUN_7102405040;FUN_71025e9d50;FUN_71025ee6c0;FUN_71025ef9a0;FUN_71025f4d80;FUN_710260fdd0;FUN_710262cd30;FUN_710314fbe0;FUN_7103151710;FUN_710367c160
- **Files:** [decomp](../decompiled/FUN_710284e490__710284e490.c)  [cfg](../decompiled/FUN_710284e490__710284e490.mmd)
- **Clone hash:** `7044ee248980c250`

```c

void FUN_710284e490(long *param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   ulong param_6,byte *param_7,ulong param_8,ulong param_9,ulong param_10,
                   ulong param_11,ulong param_12,ulong param_13,undefined4 param_14,
                   undefined4 param_15,undefined4 param_16,undefined4 param_17,byte *param_18,
                   ulong param_19,long param_20)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long ****pppplVar8;
  byte ****ppppbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *local_f0;
  uint local_b0 [2];
  byte local_a8 [64];
  undefined8 local_68;
  
  param_1[2] = 0x200000000;
  param_1[3] = 0;
  *param_1 = param_2;
  param_1[1] = (long)param_4;
  *(undefined2 *)(param_1 + 4) = 0;
// ... (294 more lines)
```

## 43. `FUN_71001020a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001020a0`  (offset `0x1020a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001020a0(void)`
- **Size / BBs / Incoming:** 884 bytes / 33 bb / 2 incoming refs
- **Match values:** Start
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140910;FUN_7100146ba0;FUN_710014e1f0;FUN_7100150680;FUN_7100150870;FUN_7100150900;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001020a0__71001020a0.c)  [cfg](../decompiled/FUN_71001020a0__71001020a0.mmd)
- **Clone hash:** `a33c73921267be76`

```c

undefined8 FUN_71001020a0(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 uVar7;
  ulong uVar8;
  code *pcVar9;
  ushort uVar10;
  long *plVar11;
  int aiStack_170 [4];
  int aiStack_160 [4];
  long alStack_150 [31];
  undefined4 auStack_58 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    alStack_150[0]._0_4_ = 0xc406;
    break;
  case 6:
    alStack_150[0]._0_4_ = 0xa471;
    break;
  case 7:
    alStack_150[0]._0_4_ = 0xc420;
    break;
  case 8:
    alStack_150[0]._0_4_ = 0xc421;
    break;
  default:
    FUN_7100192e90((int *)alStack_150,DAT_71052adfc0);
    if (((int)alStack_150[0] != 0) ||
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar3 == 4)) {
      alStack_150[0]._0_4_ = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant
// ... (97 more lines)
```

## 44. `FUN_71000f7a50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f7a50`  (offset `0xf7a50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f7a50(void)`
- **Size / BBs / Incoming:** 916 bytes / 35 bb / 3 incoming refs
- **Match values:** Start
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::SendDestroyInvitation;NexMatchJointSessionJob::GetMatchmakeSessionOwners;NexMatchJointSessionJob::SendInvitationAsCompanion;dys_yoga03_l_03_set;NODE_PRE_REFRACT_BLEND
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_7100146ed0;FUN_7100148e50;FUN_7100151000;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f7a50__71000f7a50.c)  [cfg](../decompiled/FUN_71000f7a50__71000f7a50.mmd)
- **Clone hash:** `6f51e51c34e8a508`

```c

undefined8 FUN_71000f7a50(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uVar8;
  code *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    if ((aiStack_40[0] != 0) ||
       (iVar1 = FUN_7100146ba0(DAT_71052adb38), lVar10 = DAT_71052adb38, iVar1 == 4)) {
      aiStack_40[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
// ... (112 more lines)
```

## 45. `FUN_7101bcd2c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bcd2c0`  (offset `0x1bcd2c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bcd2c0(int * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 304 bytes / 25 bb / 1 incoming refs
- **Match values:** start
- **Strings touched:** mel_mockbattle_state_wait;mel_mockbattle_state_soon;mel_mockbattle_state_mel_start
- **Callees:** FUN_710377a120;FUN_710377aee0
- **Files:** [decomp](../decompiled/FUN_7101bcd2c0__7101bcd2c0.c)  [cfg](../decompiled/FUN_7101bcd2c0__7101bcd2c0.mmd)
- **Clone hash:** `5e448cf452672bf8`

```c

void FUN_7101bcd2c0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = param_1[0x45];
  if (iVar1 == 2) {
    pcVar2 = "mel_mockbattle_tournament_ok";
    if (*param_1 != 1) {
      pcVar2 = (char *)0x0;
    }
    if (*param_1 == 0) {
      pcVar2 = "mel_mockbattle_state_mel_start";
      goto LAB_7101bcd340;
    }
LAB_7101bcd324:
    if (pcVar2 != (char *)0x0) goto LAB_7101bcd340;
  }
  else {
    if (iVar1 == 1) {
      pcVar2 = "mel_mockbattle_state_soon";
    }
    else {
      if (iVar1 != 0) goto LAB_7101bcd348;
      pcVar2 = "mel_mockbattle_tournament_txt_search";
      if (*param_1 != 1) {
        pcVar2 = (char *)0x0;
      }
      if (*param_1 != 0) goto LAB_7101bcd324;
      pcVar2 = "mel_mockbattle_state_wait";
    }
LAB_7101bcd340:
    FUN_710377a120((long)(param_1 + 0x36),pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
LAB_7101bcd348:
  iVar1 = param_1[0x44];
  if (iVar1 == 2) {
// ... (34 more lines)
```

## 46. `FUN_7100100640`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100100640`  (offset `0x100640`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100100640(void)`
- **Size / BBs / Incoming:** 472 bytes / 15 bb / 2 incoming refs
- **Match values:** Start
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;dys_yoga03_l_03_set;NexMatchJointSessionJob::WaitJoinNextMesh
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_71001928e0;FUN_7100193380;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100100640__7100100640.c)  [cfg](../decompiled/FUN_7100100640__7100100640.mmd)
- **Clone hash:** `09d9135b1169c1f0`

```c

undefined8 FUN_7100100640(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    if (*(char *)(param_1 + 0xfb) != '\0') {
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      *(undefined1 *)(param_1 + 0x130) = 6;
      *(code **)(param_1 + 0x30) = FUN_71000f7210;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
      return 5;
    }
    *(undefined1 *)(DAT_71052adb38 + 0x15c) = 0;
    FUN_71001928e0(aiStack_40,DAT_71052adfc0,param_1 + 0x138);
    if (aiStack_40[0] == 0) {
      FUN_7100193380(DAT_71052adfc0,1);
      pcVar3 = FUN_7100100820;
      uVar2 = 0;
// ... (30 more lines)
```

## 47. `FUN_710149f450`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710149f450`  (offset `0x149f450`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710149f450(undefined8 * param_1, long param_2)`
- **Size / BBs / Incoming:** 1392 bytes / 71 bb / 2 incoming refs
- **Match values:** start
- **Strings touched:** edge_start_%s;edge_end_%s;edge_color_grading_start_frame_%s
- **Callers:** FUN_710146bb20;FUN_710146c2f0
- **Callees:** FUN_710062dc20;FUN_710149ebc0;FUN_710149f9c0
- **Files:** [decomp](../decompiled/FUN_710149f450__710149f450.c)  [cfg](../decompiled/FUN_710149f450__710149f450.mmd)
- **Clone hash:** `6b3cbfbeecdb8fbc`

```c

void FUN_710149f450(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  byte *pbVar11;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  long local_b8;
  char *pcStack_b0;
  long local_a8;
  char *pcStack_a0;
  uint local_98 [2];
  byte local_90 [64];
  byte *pbVar12;
  
  local_90[0] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  *param_1 = &DAT_3f8000003f800000;
  param_1[1] = &DAT_3f8000003f800000;
  param_1[2] = 0;
  param_1[3] = 0x3f80000000000000;
  param_1[4] = &DAT_3f8000003f800000;
  param_1[10] = &DAT_3f8000003f800000;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  FUN_710062dc20(local_98,"edge_start_%s");
// ... (244 more lines)
```

## 48. `FUN_71000fe3b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fe3b0`  (offset `0xfe3b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fe3b0(void)`
- **Size / BBs / Incoming:** 616 bytes / 19 bb / 4 incoming refs
- **Match values:** Start
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitLeavePreviousMatchmakeSession
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_7100146ed0;FUN_71001902d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fe3b0__71000fe3b0.c)  [cfg](../decompiled/FUN_71000fe3b0__71000fe3b0.mmd)
- **Clone hash:** `dcf3b80a8e70ecad`

```c

undefined8 FUN_71000fe3b0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  char *pcVar6;
  long *plVar7;
  int aiStack_60 [4];
  int aiStack_50 [4];
  
  FUN_71001902d0(DAT_71052adfc0);
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    if (*(char *)(param_1 + 0xfb) != '\0') {
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      *(undefined1 *)(param_1 + 0x130) = 6;
      *(code **)(param_1 + 0x30) = FUN_71000f7210;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
      return 5;
    }
    uVar4 = (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0');
    plVar7 = *(long **)(DAT_71052adb38 + uVar4 * 8 + 0x168);
// ... (50 more lines)
```

## 49. `FUN_710200a5a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710200a5a0`  (offset `0x200a5a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710200a5a0(long param_1)`
- **Size / BBs / Incoming:** 3168 bytes / 5 bb / 2 incoming refs
- **Match values:** start
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

## 50. `FUN_7101bcb6b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bcb6b0`  (offset `0x1bcb6b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bcb6b0(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1420 bytes / 35 bb / 8 incoming refs
- **Match values:** start
- **Strings touched:** mode_empty_03;size_p4;size_p8;profile_show;in_wanted;in_progress;popin_newentry;popout_newentry;trans_readyok;in_statustxt;trans_bye;player_1p;player_3p;player_4p;player_6p;player_7p;player_cp;player_fp;frame_delete_p4;profile_hidden;frame_set_p8;in_readyok;trans_progress;out_statustxt;player_2p;player_5p;player_8p;frame_set_p4;in_closed;out_closed;game_start_stop;frame_delete_p8;...
- **Callers:** FUN_7101bcc690
- **Callees:** FUN_7101b80180;FUN_7101b85d60;FUN_7101b88fe0;FUN_7101b8b370;FUN_7103776390;FUN_7103776640;FUN_71037780e0;FUN_710377b010;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101bcb6b0__7101bcb6b0.c)  [cfg](../decompiled/FUN_7101bcb6b0__7101bcb6b0.mmd)
- **Clone hash:** `8104e09438cd5cfd`

```c

void FUN_7101bcb6b0(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char *pcVar2;
  long ***ppplVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  long ****pppplVar6;
  long ****pppplVar7;
  long lVar8;
  undefined **local_2a0;
  ulong local_298;
  undefined **local_290;
  ulong local_288;
  undefined **local_280;
  ulong local_278;
  undefined8 local_270;
  long ***local_268;
  undefined4 local_260;
  char *local_258;
  undefined4 local_250;
  char *local_248;
  undefined4 local_240;
  char *local_238;
  undefined4 local_230;
  char *local_228;
  undefined4 local_220;
  char *local_218;
  undefined4 local_210;
  char *local_208;
  undefined4 local_200;
  char *local_1f8;
  undefined4 local_1f0;
  char *local_1e8;
  undefined4 local_1e0;
  char *local_1d8;
// ... (264 more lines)
```

