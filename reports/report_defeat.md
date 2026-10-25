# defeat (funcs=6, hits=25)

Top 50 functions by hit count

## 1. `FUN_71024cb8c0`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71024cb8c0`  (offset `0x24cb8c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71024cb8c0(uint param_1, uint param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1960 bytes / 43 bb / 2 incoming refs
- **Match values:** defeat
- **Strings touched:** adventure;adv_slot;adv_loop_count;adv_difficulty;adv_skill_count;spots_count_cleared_light;spots_count_cleared_dark;spots_count_cleared_final;first_branch;spots_count_fighter;boss_defeat_masterhand;boss_defeat_crazyhand;boss_defeat_galleom;boss_defeat_koopag;boss_defeat_lioleus;boss_defeat_ganon;boss_defeat_marx;boss_defeat_dracula;boss_defeat_kiila;boss_defeat_darz;boss_defeat_kiila_darz
- **Callers:** FUN_7101934c50;FUN_71019366f0
- **Callees:** FUN_71024cc070;FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::nn::os::ConvertToTimeSpan;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save
- **Files:** [decomp](../decompiled/FUN_71024cb8c0__71024cb8c0.c)  [cfg](../decompiled/FUN_71024cb8c0__71024cb8c0.mmd)
- **Clone hash:** `cda21c614579d99d`

```c

void FUN_71024cb8c0(uint param_1,uint param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  byte ****ppppbVar16;
  long lVar17;
  byte ***pppbVar18;
  int *piVar19;
  byte ****ppppbVar20;
  byte ****ppppbVar21;
  int iVar22;
  long lVar23;
  uint uVar24;
  byte ****ppppbVar25;
  byte ****ppppbVar26;
  byte ****ppppbVar27;
  long ****local_d0;
  byte ****local_c8;
  byte ****local_c0;
  byte ****local_b8;
  byte ****local_b0;
  byte ****local_a8;
  byte ****local_98;
  byte ****local_90;
// ... (262 more lines)
```

## 2. `FUN_7101b4afe0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b4afe0`  (offset `0x1b4afe0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b4afe0(long param_1, undefined4 param_2)`
- **Size / BBs / Incoming:** 368 bytes / 26 bb / 1 incoming refs
- **Match values:** defeat
- **Strings touched:** mel_info_stage_poke_stadium_defeated
- **Callers:** FUN_7101416170
- **Callees:** FUN_710377a280;FUN_710377aee0
- **Files:** [decomp](../decompiled/FUN_7101b4afe0__7101b4afe0.c)  [cfg](../decompiled/FUN_7101b4afe0__7101b4afe0.mmd)
- **Clone hash:** `00df72006929347b`

```c

void FUN_7101b4afe0(long param_1,undefined4 param_2)

{
  long lVar1;
  
  switch(param_2) {
  case 0:
    lVar1 = param_1 + 0x1d8;
    break;
  case 1:
    lVar1 = param_1 + 0x1e8;
    break;
  case 2:
    lVar1 = param_1 + 0x1f8;
    break;
  case 3:
    lVar1 = param_1 + 0x208;
    break;
  case 4:
    lVar1 = param_1 + 0x218;
    break;
  case 5:
    lVar1 = param_1 + 0x228;
    break;
  case 6:
    lVar1 = param_1 + 0x278;
    break;
  case 7:
    lVar1 = param_1 + 0x238;
    break;
  case 8:
    lVar1 = param_1 + 0x288;
    break;
  case 9:
    lVar1 = param_1 + 0x298;
    break;
  case 10:
    lVar1 = param_1 + 600;
    break;
// ... (28 more lines)
```

## 3. `FUN_7101f45620`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** defeat
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

## 4. `FUN_7101a1be30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1be30`  (offset `0x1a1be30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1be30(long param_1, int * param_2, ulong param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 568 bytes / 20 bb / 5 incoming refs
- **Match values:** defeat
- **Strings touched:** score_color_%d;score_color_1;set_txt_score_l;set_txt_score_m;mel_chara_select_kumite_clear_time;mel_chara_select_high_score_none;mel_chara_select_kumite_defeated_score;set_txt_worldscore;mel_chara_select_world_pw_n
- **Callers:** FUN_7101a19990;FUN_7101a27570
- **Callees:** FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101a1be30__7101a1be30.c)  [cfg](../decompiled/FUN_7101a1be30__7101a1be30.mmd)
- **Clone hash:** `2f0b8ff1ce4a5ee0`

```c

void FUN_7101a1be30(long param_1,int *param_2,ulong param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  ushort local_34 [2];
  
  if (*param_2 == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x71042c47bc);
  }
  else {
    param_3 = (ulong)(param_2[3] + 2);
    FUN_7103778430(param_1,"score_color_%d",param_3,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7103776910(&local_60,param_1,(long ****)"set_txt_score_l",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_70,param_1,(long ****)"set_txt_score_m",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (*param_2 == 0) {
    FUN_710377a120((long)&local_60,"mel_chara_select_high_score_none",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_70,"mel_chara_select_high_score_none",param_3,param_4,param_5,
                   param_6,param_7,param_8);
  }
  else if (*param_2 == 2) {
    uVar1 = param_2[2];
    uVar2 = (ulong)uVar1 / 0xe10;
    if (0x3e6 < uVar1 / 0xe10) {
      uVar2 = 999;
    }
    param_4 = (ulong)(uVar1 / 0x3c + (uVar1 / 0xe10) * -0x3c) + uVar2 * 1000;
    param_5 = (long ****)((ulong)((uVar1 % 0x3c) * 100) / 0x3c);
// ... (44 more lines)
```

## 5. `FUN_7102219310`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102219310`  (offset `0x2219310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102219310(long param_1)`
- **Size / BBs / Incoming:** 10116 bytes / 52 bb / 2 incoming refs
- **Match values:** defeat
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

## 6. `FUN_7101479370`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101479370`  (offset `0x1479370`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101479370(long * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 10300 bytes / 494 bb / 1 incoming refs
- **Match values:** defeat
- **Strings touched:** result_type;highscore_type;palyer_count;gsp_type;highscore;clear;clear_off;key_help;set_txt_time;set_txt_enemycount;set_txt_gsp_count;set_txt_gold;set_parts_playericon_%02d;set_rep_icon;set_key_help_02;set_txt_icon;set_txt_help;set_fxui_iconflash_00;set_fxui_score;set_fxui_iconflash_01;mel_kumite_back_btn;mel_kumite_back_chr;mel_kumite_back_stg;mel_kumite_defeated_score;mel_kumite_clear_time;mel_kumite_world_pw_score
- **Callees:** FUN_71000001c0;FUN_71015435c0;FUN_7101764000;FUN_71017d1480;FUN_7103238a70;FUN_710323beb0;FUN_710323c1c0;FUN_710323c4e0;FUN_710323cb80;FUN_710323f330;FUN_71032631a0;FUN_71032632a0;FUN_71032648e0;FUN_71032cad20;FUN_71032caea0;FUN_71032cbf30;...
- **Files:** [decomp](../decompiled/FUN_7101479370__7101479370.c)  [cfg](../decompiled/FUN_7101479370__7101479370.mmd)
- **Clone hash:** `5fb64a64fe4e999f`

```c

void FUN_7101479370(long *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  char *pcVar12;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined **ppuVar13;
  undefined8 uVar14;
  long ****pppplVar15;
  long *********ppppppppplVar16;
  byte ****ppppbVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined1 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
// ... (1813 more lines)
```

