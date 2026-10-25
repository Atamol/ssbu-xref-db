# chara_select (funcs=50, hits=155)

Top 50 functions by hit count

## 1. `FUN_7101a23a80`  (hits=29)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a23a80`  (offset `0x1a23a80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a23a80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8756 bytes / 346 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** title_on;headcount_on;day_off;controller_entry_off;ready_out;controller_out;back_btn_short;back_btn_long;set_btn_01_back;set_btn_02_back;set_txt_back_01;set_txt_back_00;mel_return_02;mel_over_return_02;mel_return_00;mel_over_return_00;set_btn_02_title;txt_pos_normal;set_txt_title_00;set_txt_onoff;scene_title_btn;mel_chara_select_melee_normal;mel_chara_select_various_normal;mel_chara_select_suddendeath_normal;scene_title_txt_00;title_off;mel_chara_select_challengeboard;mel_chara_select_campaign;mel_chara_select_setorg;mel_chara_select_standard;training_combo_0;mel_chara_select_training;...
- **Callers:** FUN_7101a20200
- **Callees:** FUN_7103240d30;FUN_71032d6ce0;FUN_71033112b0;FUN_710337df20;FUN_7103764e60;FUN_7103770b30;FUN_71037717d0;FUN_7103771d60;FUN_7103772070;FUN_71037760f0;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_7103778760;FUN_7103778b80;...
- **Files:** [decomp](../decompiled/FUN_7101a23a80__7101a23a80.c)  [cfg](../decompiled/FUN_7101a23a80__7101a23a80.mmd)
- **Clone hash:** `d4786689279755fe`

```c

void FUN_7101a23a80(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  long ****pppplVar12;
  long *********ppppppppplVar13;
  int *piVar14;
  undefined8 uVar15;
  byte ****ppppbVar16;
  undefined4 uVar17;
  long lVar18;
  byte *pbVar19;
  code *pcVar20;
  undefined4 uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  long *plVar29;
  uint uVar30;
  float fVar31;
  undefined8 local_278;
  undefined **local_260;
  ulong local_258;
  undefined **local_250;
// ... (1398 more lines)
```

## 2. `FUN_71019f4420`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019f4420`  (offset `0x19f4420`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019f4420(long param_1)`
- **Size / BBs / Incoming:** 1000 bytes / 27 bb / 2 incoming refs
- **Match values:** chara_select
- **Strings touched:** hiragana;katakana;alphabet;european;russian;number;mel_chara_select_key_%s_%02d;set_txt;mel_chara_select_key_shift_%s;btn_txt;btn_icon_0;mel_chara_select_key_switching_%s
- **Callers:** FUN_71019f2e30;FUN_71019f6b40
- **Callees:** FUN_71019f4f00;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71019f4420__71019f4420.c)  [cfg](../decompiled/FUN_71019f4420__71019f4420.mmd)
- **Clone hash:** `23f8238b9bfd10e3`

```c

void FUN_71019f4420(long param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar6;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  char *local_90 [6];
  
  FUN_71019f4f00(param_1,*(uint *)(param_1 + 0x368));
  if (*(uint *)(param_1 + 0x370) < 3) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x1c8),
                   (long)(&PTR_s_btn_icon_0_71050a82e8)[*(uint *)(param_1 + 0x370)]);
    local_90[0] = "hiragana";
    local_90[1] = "katakana";
    local_90[2] = "alphabet";
    local_90[3] = "european";
    local_90[4] = "russian";
    local_90[5] = "number";
    if (*(uint *)(param_1 + 0x36c) < 6) {
      FUN_710377a120(param_1 + 0x210,"mel_chara_select_key_%s_%02d",
                     local_90[*(uint *)(param_1 + 0x36c)],0,in_x4,in_x5,in_x6,in_x7);
      local_90[0] = "hiragana";
      local_90[1] = "katakana";
      local_90[2] = "alphabet";
      local_90[3] = "european";
      local_90[4] = "russian";
      local_90[5] = "number";
      if (*(uint *)(param_1 + 0x36c) < 6) {
// ... (161 more lines)
```

## 3. `FUN_710183be60`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710183be60`  (offset `0x183be60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710183be60(void)`
- **Size / BBs / Incoming:** 41020 bytes / 1781 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** mode_empty_03;count_5vs5;controller_out;set_btn_01_back;set_txt_back_01;set_txt_back_00;mel_return_02;mel_over_return_02;mel_return_00;mel_over_return_00;set_btn_ready;set_parts_balloon_rule;selector_0;set_btn_03_rule;controller_in;bg_anime;chara_bg_color_01;chara_bg_color_00;selector;set_part_vs_3;set_part_vs_5;selector_1;set_btn_back;set_cursor_area;set_medal_area;back_btn_long;set_btn_02_title;txt_pos_normal;set_txt_title_00;title_on;headcount_off;day_off;...
- **Callers:** FUN_7101846880
- **Callees:** FUN_71000001c0;FUN_7101684280;FUN_7101686610;FUN_710168eb40;FUN_71016ea290;FUN_71016f6340;FUN_7101764000;FUN_7101797560;FUN_710179a080;FUN_710179ed00;FUN_7101838d70;FUN_710183bb20;FUN_71019e5610;FUN_71019e6eb0;FUN_71019e8720;FUN_71019e90c0;...
- **Files:** [cfg](../decompiled/FUN_710183be60__710183be60.mmd)


## 4. `FUN_7101a1be30`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1be30`  (offset `0x1a1be30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1be30(long param_1, int * param_2, ulong param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 568 bytes / 20 bb / 5 incoming refs
- **Match values:** chara_select
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

## 5. `FUN_7101ac4ba0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac4ba0`  (offset `0x1ac4ba0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac4ba0(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6728 bytes / 295 bb / 4 incoming refs
- **Match values:** chara_select
- **Strings touched:** set_txt_time;mnu_replay_detail_time_movie;set_txt_mode_00;mnu_replay_detail_melee_allbattle;mnu_replay_detail_melee_normal;mnu_replay_detail_online_tournament;mnu_replay_refinement_mode_homerun;mnu_replay_detail_melee_tournament;mnu_replay_detail_melee_team;mnu_replay_detail_anyone;mnu_replay_detail_room;mnu_replay_detail_anyone_vip;mel_chara_select_melee_team;mel_chara_select_suddendeath_team;mel_chara_select_various_team;set_txt_mode_01;set_parts_text_scroll;set_txt_main;mnu_replay_data_title_default;set_txt_mask;mode_empty_03;set_txt_date_num;mnu_replay_detail_creation_date;set_rep_bgshot;mstg_in_on;m_stg_txt_off;set_rep_movie_pic;mstg_in_off;turn_in_off;mstg_icn_in_on;m_stg_txt_on;turn_in_loop;...
- **Callers:** FUN_7101abdf80;FUN_7101ac0780;FUN_7101ac0850;FUN_7101acbbd0
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_710149ebc0;FUN_7101ac6fd0;FUN_7101ac71e0;FUN_7101ac7410;FUN_7101ad1f10;FUN_7101ad2060;FUN_7101af0cc0;FUN_7103238a70;FUN_710323c4e0;FUN_710323f330;FUN_7103262310;FUN_71032631a0;FUN_71032632a0;FUN_7103263540;...
- **Files:** [decomp](../decompiled/FUN_7101ac4ba0__7101ac4ba0.c)  [cfg](../decompiled/FUN_7101ac4ba0__7101ac4ba0.mmd)
- **Clone hash:** `bd88850886388e66`

```c

void FUN_7101ac4ba0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  long ********pppppppplVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte ****ppppbVar12;
  long *plVar13;
  long *******ppppppplVar14;
  undefined8 uVar15;
  long *********ppppppppplVar16;
  long ****pppplVar17;
  long *********ppppppppplVar18;
  ulong uVar19;
  byte ****ppppbVar20;
  long *********ppppppppplVar21;
  long *********ppppppppplVar22;
  byte bVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  long ********pppppppplVar28;
  long lVar29;
  byte *pbVar30;
  char cVar31;
  char *pcVar32;
  long *plVar33;
  char cVar34;
  ulong uVar35;
// ... (1178 more lines)
```

## 6. `FUN_7101ac65f0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac65f0`  (offset `0x1ac65f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac65f0(long param_1, uint * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2524 bytes / 133 bb / 3 incoming refs
- **Match values:** chara_select
- **Strings touched:** set_txt_time_00;mnu_replay_detail_time_movie;set_txt_mode_02;mnu_replay_detail_melee_allbattle;mnu_replay_detail_melee_normal;mnu_replay_detail_online_tournament;mnu_replay_refinement_mode_homerun;mnu_replay_detail_melee_tournament;mnu_replay_detail_anyone;mnu_replay_detail_melee_team;mnu_replay_detail_anyone_vip;mnu_replay_detail_room;mel_chara_select_melee_team;mel_chara_select_suddendeath_team;mel_chara_select_various_team;set_txt_mode_03;set_txt_header_rule_00;set_txt_rule_00;set_parts_tag_disp_00;set_parts_detail_pane_00;set_parts_text_scroll;set_txt_main;set_txt_mask;mode_empty_03;set_txt_date_num;mnu_replay_detail_creation_date;set_rep_bgshot_00;mstg_out_on;turn_out_loop;turn_out_on;set_rep_movie_pic_00;mstg_out_off;...
- **Callers:** FUN_7101abdf80;FUN_7101ac0780;FUN_7101ac0850
- **Callees:** FUN_7101ac6fd0;FUN_7101ac71e0;FUN_7101ad1f10;FUN_7101ad2060;FUN_7101af0cc0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778760;FUN_710377a120;FUN_710377a280;FUN_71037964b0;FUN_71037a2270;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101ac65f0__7101ac65f0.c)  [cfg](../decompiled/FUN_7101ac65f0__7101ac65f0.mmd)
- **Clone hash:** `0ecec1565a60a2d0`

```c

void FUN_7101ac65f0(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  byte bVar15;
  char *pcVar16;
  long lVar17;
  long ***ppplVar18;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  char cVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined **local_f0;
  ulong local_e8;
  undefined **local_e0;
  undefined8 *local_d8;
  undefined **local_d0;
  undefined8 *local_c8;
  undefined **local_c0;
  ulong local_b8;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
// ... (478 more lines)
```

## 7. `FUN_7101a1c140`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1c140`  (offset `0x1a1c140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1c140(long param_1, int * param_2, ulong param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 440 bytes / 18 bb / 5 incoming refs
- **Match values:** chara_select
- **Strings touched:** score_color_%d;score_color_1;set_txt_score_l;set_txt_score_m;mel_chara_select_homerun_high_score_n;mel_chara_select_high_score_none;set_txt_worldscore;mel_chara_select_world_pw_n
- **Callers:** FUN_7101a19990;FUN_7101a27570
- **Callees:** FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101a1c140__7101a1c140.c)  [cfg](../decompiled/FUN_7101a1c140__7101a1c140.mmd)
- **Clone hash:** `74a575273a6e6a6e`

```c

void FUN_7101a1c140(long param_1,int *param_2,ulong param_3,ulong param_4,long ****param_5,
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
  else {
    uVar1 = param_2[1];
    FUN_710377a280((long)&local_60,(byte *)"mel_chara_select_homerun_high_score_n",2);
    param_3 = 2;
    param_4 = (ulong)(uVar1 / 1000);
    param_5 = (long ****)(ulong)(uVar1 % 1000);
    FUN_710377a280((long)&local_70,(byte *)"mel_chara_select_homerun_high_score_n",2);
  }
// ... (34 more lines)
```

## 8. `FUN_7101a1ba90`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1ba90`  (offset `0x1a1ba90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1ba90(long param_1, int * param_2, ulong param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 396 bytes / 18 bb / 5 incoming refs
- **Match values:** chara_select
- **Strings touched:** score_color_%d;score_color_1;set_txt_score_l;set_txt_score_m;mel_chara_select_high_score_n;mel_chara_select_high_score_none;set_txt_worldscore;mel_chara_select_world_pw_n
- **Callers:** FUN_7101a19990;FUN_7101a27570
- **Callees:** FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101a1ba90__7101a1ba90.c)  [cfg](../decompiled/FUN_7101a1ba90__7101a1ba90.mmd)
- **Clone hash:** `d656cf2f7a1be67a`

```c

void FUN_7101a1ba90(long param_1,int *param_2,ulong param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  ushort local_24 [2];
  
  if (*param_2 == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x71042c47bc);
  }
  else {
    param_3 = (ulong)(param_2[3] + 2);
    FUN_7103778430(param_1,"score_color_%d",param_3,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7103776910(&local_50,param_1,(long ****)"set_txt_score_l",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_60,param_1,(long ****)"set_txt_score_m",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (*param_2 == 0) {
    FUN_710377a120((long)&local_50,"mel_chara_select_high_score_none",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_60,"mel_chara_select_high_score_none",param_3,param_4,param_5,
                   param_6,param_7,param_8);
  }
  else {
    FUN_710377a280((long)&local_50,(byte *)"mel_chara_select_high_score_n",1);
    param_4 = (ulong)(uint)param_2[1];
    param_3 = 1;
    FUN_710377a280((long)&local_60,(byte *)"mel_chara_select_high_score_n",1);
  }
  FUN_7103776910(&local_40,param_1,(long ****)"set_txt_worldscore",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if ((*param_2 == 0) || (param_2[3] != 1)) {
// ... (31 more lines)
```

## 9. `FUN_7101a03a90`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a03a90`  (offset `0x1a03a90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a03a90(long param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1312 bytes / 55 bb / 4 incoming refs
- **Match values:** chara_select
- **Strings touched:** mel_chara_select_lv_n;cp_level_%d;fp_level_on;mel_chara_select_fp_lv_n;fp_level_off;hd_off;hd_on;set_lct_hd;hd_non;set_txt_chara_name;set_txt_local_entry;mel_chara_select_local_setting;mel_chara_select_local_sele_fighter;mel_chara_select_local_sele_stage;mel_chara_select_local_check_rule
- **Callers:** FUN_7101837cf0;FUN_710183be60;FUN_7101a1cb30;FUN_7101a5fb40
- **Callees:** FUN_71016b6a10;FUN_71019e7fd0;FUN_71019fc090;FUN_71019fd290;FUN_7101a000c0;FUN_7101a00df0;FUN_7101a0d0d0;FUN_71032632a0;FUN_7103263a30;FUN_71032652a0;FUN_7103265e70;FUN_710327ac80;FUN_71033112b0;FUN_71033114a0;FUN_71033115f0;FUN_7103776640;...
- **Files:** [decomp](../decompiled/FUN_7101a03a90__7101a03a90.c)  [cfg](../decompiled/FUN_7101a03a90__7101a03a90.mmd)
- **Clone hash:** `d0613dbb63b2619c`

```c

void FUN_7101a03a90(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *********ppppppppplVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  undefined8 uVar12;
  uint uVar13;
  long *plVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  float fVar20;
  undefined **local_50;
  ulong local_48;
  ushort local_34 [2];
  
  FUN_71016b6a10((undefined8 *)(param_1 + 0x1f0),param_2);
  lVar17 = *(long *)(DAT_710532f730 + 8);
  bVar4 = FUN_71032652a0(lVar17 + 0x160,*(ulong *)(param_1 + 0x200));
  *(bool *)(param_1 + 0x6be) = bVar4;
  puVar15 = *(undefined1 **)(param_1 + 0x200);
  uVar5 = FUN_7103263a30(*(long *)(lVar17 + 0x168),(ulong)puVar15);
  uVar13 = *(uint *)(param_1 + 0x1f8);
  *(bool *)(param_1 + 0x6bf) = ((uVar5 ^ 0xffffffff) & 10) == 0;
  if (uVar13 == 2) {
    *(undefined1 *)(param_1 + 0x6be) = 0;
    uVar5 = FUN_71032632a0(*(long *)(lVar17 + 0x168),*(ulong *)(param_1 + 0x360));
// ... (191 more lines)
```

## 10. `FUN_7101a1b4a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1b4a0`  (offset `0x1a1b4a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1b4a0(long param_1, int param_2, ulong * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1108 bytes / 46 bb / 6 incoming refs
- **Match values:** chara_select
- **Strings touched:** set_parts_lct_score_%dp;set_rep_chara1;player_color_%dp;set_txt_highscoer;score_on;mel_chara_select_homerun_high_score_n;score_off;mel_chara_select_high_score_none;set_parts_worldscore_%dp;set_txt_worldscore;score_color_1;score_color_%d;mel_chara_select_world_pw_n
- **Callers:** FUN_7101a19990;FUN_7101a26200;FUN_7101a27570
- **Callees:** FUN_71003a4ca0;FUN_7103238a70;FUN_710323c4e0;FUN_71032631a0;FUN_71032648e0;FUN_710353da30;FUN_7103540b10;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_7103778c70;FUN_71037790a0;FUN_710377a120;FUN_710377a280;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101a1b4a0__7101a1b4a0.c)  [cfg](../decompiled/FUN_7101a1b4a0__7101a1b4a0.mmd)
- **Clone hash:** `ec3039289ca81f22`

```c

void FUN_7101a1b4a0(long param_1,int param_2,ulong *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long *********ppppppppplVar7;
  ulong uVar8;
  byte ****ppppbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined **local_80;
  long *local_78;
  undefined **local_70;
  ulong local_68;
  
  lVar2 = **(long **)(param_1 + 0x1a8) + 8;
  uVar1 = param_2 + 1;
  ppppppppplVar7 = (long *********)(ulong)uVar1;
  ppppbVar9 = param_4;
  FUN_7103776640(&local_70,lVar2,(byte ****)"set_parts_lct_score_%dp",ppppppppplVar7,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_80,(long)&local_70,(long ****)"set_rep_chara1",ppppppppplVar7,ppppbVar9,
// ... (152 more lines)
```

## 11. `FUN_7101a1f7d0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1f7d0`  (offset `0x1a1f7d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1f7d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 604 bytes / 31 bb / 9 incoming refs
- **Match values:** chara_select
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

## 12. `FUN_7101a44850`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a44850`  (offset `0x1a44850`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a44850(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1192 bytes / 42 bb / 2 incoming refs
- **Match values:** chara_select
- **Strings touched:** player_color_%dp;mel_chara_select_without;mel_chara_select_lv_n;cp_level_%d;mel_chara_select_fp_lv_n;cmn_%dp;mel_player_n
- **Callers:** FUN_7101a41230;FUN_7101a4a800
- **Callees:** FUN_71003a4ca0;FUN_7101a42860;FUN_7103778300;FUN_7103778430;FUN_7103778ab0;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101a44850__7101a44850.c)  [cfg](../decompiled/FUN_7101a44850__7101a44850.mmd)
- **Clone hash:** `8a1b1bfa82de7b02`

```c

void FUN_7101a44850(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ushort *puVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_34;
  
  *(int *)(param_1 + 0xd8) = param_2;
  if (param_2 == 1) {
    local_80 = 0x635f726579616c70;
    uVar9 = 0x811c9dc5;
    local_78 = 0x70635f726f6c6f;
    uVar6 = 0x70;
    pbVar4 = (byte *)((long)&local_80 + 1);
    uVar7 = uVar9;
    do {
      uVar7 = uVar7 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
    local_88 = (undefined **)CONCAT44(0xf,uVar7);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x40),(long)&local_80);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xa0),(long)&local_80);
    uVar7 = 99;
    local_80 = CONCAT17(local_80._7_1_,0x70635f6e6d63);
    pbVar4 = (byte *)((long)&local_80 + 1);
    do {
      uVar9 = uVar9 * 0x89 ^ uVar7;
// ... (130 more lines)
```

## 13. `FUN_71032d0830`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71032d0830`  (offset `0x32d0830`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71032d0830(long param_1, uint param_2, ulong param_3, undefined8 param_4, undefined8 param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 796 bytes / 39 bb / 20 incoming refs
- **Match values:** chara_select
- **Strings touched:** team_color_%d;set_txt_number;mel_team_chara_select_medal_n;compe_cp_color_%dp;mel_chara_select_tournament_medal_n;set_txt_tournament;mel_chara_select_campaign_medal_n;cmn_%dp;player_color_%dp
- **Callers:** FUN_7101837cf0;FUN_710183be60;FUN_7101a12f60;FUN_7101a1d4d0;FUN_7101a1f0b0;FUN_7101a20200;FUN_7101a2a270;FUN_7101a2b570;FUN_7101a35900;FUN_7101a36120;FUN_7101a39c20;FUN_7101a3c230;FUN_7101a4e880;FUN_7101a54360;FUN_7101a54a30;FUN_7101b2a1f0;...
- **Callees:** FUN_71003a4ca0;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_710377a120;FUN_710377a280;FUN_710377a310;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71032d0830__71032d0830.c)  [cfg](../decompiled/FUN_71032d0830__71032d0830.mmd)
- **Clone hash:** `0171fd1749cbfbdc`

```c

void FUN_71032d0830(long param_1,uint param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined **local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  
  if (9 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar13 = *(long *)(param_1 + 8);
  lVar6 = lVar13 + (long)(int)param_2 * 0x130;
  uVar5 = (uint)param_4;
  *(bool *)(lVar6 + 0x11a) = uVar5 < 2;
  uVar12 = param_6 & 0xffffffff;
  iVar2 = (int)param_3;
  lVar14 = (long)(int)param_2;
  *(uint *)(lVar6 + 0x10) = uVar5;
  bVar9 = 0;
  if (*(char *)(lVar6 + 0x118) != '\0') {
// ... (107 more lines)
```

## 14. `FUN_7101a000c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a000c0`  (offset `0x1a000c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a000c0(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2176 bytes / 80 bb / 17 incoming refs
- **Match values:** chara_select
- **Strings touched:** controller_entry_cut_off;controller_off;team_color_%d;mel_chara_select_without;mel_chara_select_lv_n;cp_level_%d;fp_level_on;mel_chara_select_fp_lv_n;player_color_%dp;fp_level_off;amiibo_on;NODE_PRE_REFRACT_BLEND;amiibo_off;cmn_%dp;controller_cut
- **Callers:** FUN_7101a02010;FUN_7101a028b0;FUN_7101a03a90;FUN_7101a07770;FUN_7101a12f60;FUN_7101a16e70;FUN_7101a1eb70;FUN_7101a1f530;FUN_7101a2a270;FUN_7101a2b570;FUN_7101a568e0
- **Callees:** FUN_71003a4ca0;FUN_71019fc7a0;FUN_71019fce50;FUN_71019fd0b0;FUN_7103778300;FUN_7103778430;FUN_710377a120;FUN_710377a280;FUN_71037a2270
- **Files:** [decomp](../decompiled/FUN_7101a000c0__7101a000c0.c)  [cfg](../decompiled/FUN_7101a000c0__7101a000c0.mmd)
- **Clone hash:** `89b36533d03af80c`

```c

void FUN_7101a000c0(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  
  iVar2 = *(int *)(param_1 + 0x21c);
  *(int *)(param_1 + 0x21c) = param_2;
  if (((ulong)param_4 & 1) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = SUB84(param_3,0);
    if (*(char *)(param_1 + 0x266) != '\0') {
      uVar5 = 0xffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x220) = uVar5;
  if ((**(long **)(param_1 + 0x178) == 0) || ((*(long **)(param_1 + 0x178))[1] == 0)) {
    if (param_2 == 3) {
      pcVar4 = "controller_entry_cut_off";
    }
    else {
// ... (254 more lines)
```

## 15. `FUN_7101f018b0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f018b0`  (offset `0x1f018b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f018b0(undefined1[16] param_1, undefined4 param_2, float param_3, uint * param_4, long * param_5, int param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 6472 bytes / 292 bb / 2 incoming refs
- **Match values:** chara_select
- **Strings touched:** set_part_%dp_subwindow;subwindow_b_sorting;subwindow_r;set_lct_controller_entry;set_lct_controller;btn_anim;controller_joy_dual;set_txt_btn;mel_chara_select_help_press_any_btn;cmn_%dp;set_txt_player;set_part_entry_%s%d_%02d;entry_up;entry_left;txt_btn_0;txt_btn_1;set_part_%s%d_%02d;txt_press_btn;set_part_%s%d_entry_%02d;set_part_result_help_l;set_txt_icon;set_part_result_help_c;set_part_result_help_r;set_%s%d_status_txt_%d;color_p;set_part_%s_help;set_5;set_3;help_00;set_txt_hp;mel_chara_select_hp;mel_chara_select_hc_percent;...
- **Callers:** FUN_710197b740
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_7101764000;FUN_7101ef8550;FUN_7101ef97d0;FUN_7101ef9b40;FUN_7101ef9f70;FUN_7101f00780;FUN_7101f00930;FUN_71033114a0;FUN_71033115f0;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710377a120;...
- **Files:** [decomp](../decompiled/FUN_7101f018b0__7101f018b0.c)  [cfg](../decompiled/FUN_7101f018b0__7101f018b0.mmd)
- **Clone hash:** `94ecce5c922de32c`

```c

void FUN_7101f018b0(undefined1 param_1 [16],undefined4 param_2,float param_3,uint *param_4,
                   long *param_5,int param_6,byte ****param_7,long ****param_8,undefined8 param_9,
                   undefined8 param_10,undefined8 param_11)

{
  long ***ppplVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  void *pvVar13;
  long *plVar14;
  ushort *puVar15;
  ulong uVar16;
  ulong uVar17;
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
  undefined8 uVar18;
  undefined8 extraout_x1_09;
  byte *pbVar19;
  char *pcVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  ulong uVar23;
// ... (1097 more lines)
```

## 16. `FUN_71019f6b40`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019f6b40`  (offset `0x19f6b40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019f6b40(long param_1, long * * * * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11676 bytes / 575 bb / 2 incoming refs
- **Match values:** chara_select
- **Strings touched:** NODE_PRE_REFRACT_BLEND;nam_name_preset_*;set_lct_name_select;set_part_help;set_txt_icon;scroll;player_color_%dp;set_lct_name_applet;set_txt_name;set_txt_number;selector_0;set_btn_0_%02d;set_txt;btn_color_00;btn_on;btn_txt;mel_chara_select_key_space;btn_color_01;btn_icon_0;btn_icon_delete;mel_chara_select_key_random_nam;btn_color_02;mel_chara_select_key_ok;txt_entry;txt_max
- **Callers:** FUN_7101a04050;FUN_7101a4b380
- **Callees:** FUN_7100000410;FUN_7100000570;FUN_71003a4ca0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_71019c1c50;FUN_71019f4120;FUN_71019f4420;FUN_71019f4970;FUN_71019f57d0;FUN_710337df20;FUN_710337e790;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103772070;FUN_7103776290;...
- **Files:** [decomp](../decompiled/FUN_71019f6b40__71019f6b40.c)  [cfg](../decompiled/FUN_71019f6b40__71019f6b40.mmd)
- **Clone hash:** `a7d6779a7c4d9a6a`

```c

void FUN_71019f6b40(long param_1,long ****param_2,long ****param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ***ppplVar1;
  long ***ppplVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined2 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  long ***ppplVar11;
  bool bVar12;
  int iVar13;
  long ****pppplVar14;
  long ***ppplVar15;
  ulong uVar16;
  long **pplVar17;
  long **__dest;
  byte ****ppppbVar18;
  ulong uVar19;
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
// ... (2106 more lines)
```

## 17. `FUN_710334a0d0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710334a0d0`  (offset `0x334a0d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710334a0d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3008 bytes / 160 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** mel_chara_select_kumite_cruel_brawl;mel_chara_select_kumite_allstar;mel_chara_select_kumite_hundred;chara/chara_4/chara_4_;pop_super_suddendeath_rule_size;pop_super_suddendeath_rule_on;pop_super_suddendeath_rule_off;pop_super_suddendeath_rule_bomb
- **Callees:** FUN_71016f6340;FUN_7101eefe30;FUN_7103291150;FUN_71032edf70;FUN_71032f1bb0;FUN_71032f29a0;FUN_71032fffb0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::nn::os::ConvertToTimeSpan;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_710334a0d0__710334a0d0.c)  [cfg](../decompiled/FUN_710334a0d0__710334a0d0.mmd)
- **Clone hash:** `d3e442e9fb91526d`

```c

void FUN_710334a0d0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long ***__dest;
  long lVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long ***ppplVar10;
  long lVar11;
  ulong uVar12;
  long ***ppplVar13;
  long ****pppplVar14;
  size_t __n;
  long ***ppplVar15;
  long ***local_78;
  long ***local_70;
  long ***local_68;
  long ***local_60;
  undefined4 local_54;
  
  lVar6 = DAT_710532f828;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    return;
  }
  lVar11 = *(long *)(DAT_710532f828 + 8);
  uVar4 = FUN_7101eefe30(*(long *)(*(long *)(lVar11 + 0x110) + 0x80));
  if ((*(int *)(lVar11 + 0xf8) != 0 || (((uint)uVar4 ^ 0xffffffff) & 1) != 0) ||
      *(char *)(lVar11 + 0x142) != '\0') {
    return;
  }
  lVar11 = *(long *)(DAT_710532f7c8 + 8);
  if (*(char *)(lVar11 + 0x6a) == '\0') {
// ... (560 more lines)
```

## 18. `FUN_7101a46aa0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a46aa0`  (offset `0x1a46aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a46aa0(long param_1, undefined8 param_2, ulong param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 952 bytes / 38 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** subwindow_off;mel_chara_select_lv_n;cp_level_%d;subwindow_%dp_on;select_off;subwindow_on
- **Callees:** FUN_71019e9460;FUN_7101a48570;FUN_7103778300;FUN_7103778430;FUN_710377a280;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101a46aa0__7101a46aa0.c)  [cfg](../decompiled/FUN_7101a46aa0__7101a46aa0.mmd)
- **Clone hash:** `d64472f558230bfd`

```c

void FUN_7101a46aa0(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar2;
  undefined8 extraout_x1_01;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (*(int *)(param_1 + 0x13c) == 0) {
    uVar7 = (*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f;
    uVar4 = (ulong)*(int *)(param_1 + 0x3d8);
    if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    *(uint *)(*(long *)(param_1 + 0x358) + 0x48) =
         (uint)*(byte *)(*(long *)(param_1 + 0x250) + uVar4 * 0x3f8 + 0x29);
    FUN_7103778430(param_1 + 0x278,"subwindow_%dp_on",(ulong)(*(int *)(param_1 + 0x150) + 1),param_4
                   ,param_5,param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x41d) = 1;
    iVar3 = *(int *)(param_1 + 0x3cc);
    if (iVar3 != -1) {
      if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) <=
          (ulong)(long)iVar3) goto LAB_7101a46e54;
      lVar6 = *(long *)(*(long *)(param_1 + 0x3b0) + (long)iVar3 * 0x10 + 8);
      FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x20),0x710435be3c);
      *(undefined1 *)(lVar6 + 0x10a) = 0;
    }
// ... (94 more lines)
```

## 19. `FUN_7101a2b570`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a2b570`  (offset `0x1a2b570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a2b570(undefined * * param_1, undefined8 param_2, undefined * * param_3, long * * * * * * * * * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 22080 bytes / 1202 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** disconnect_off;indicator_%d;disconnect_on;mel_chara_select_lv_n;cp_level_%d;hand_catch;set_lct_controller_entry;btn_anim;set_txt_btn;set_parts_lct;set_txt_count;dys_yoga03_l_03_set;mnu_convention_session_time;controller_max;controller_fp;chara/chara_4/chara_4_;ready_in;ready_out
- **Callers:** FUN_7101a31860
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710137bc30;FUN_71016ea290;FUN_71016ea960;FUN_71016f6340;FUN_710175dfc0;FUN_7101764000;FUN_71019eb330;FUN_71019f08a0;FUN_71019f1410;FUN_7101a000c0;FUN_7101a029b0;FUN_7101a04c80;FUN_7101a06920;FUN_7101a06ef0;...
- **Files:** [decomp](../decompiled/FUN_7101a2b570__7101a2b570.c)  [cfg](../decompiled/FUN_7101a2b570__7101a2b570.mmd)
- **Clone hash:** `9f20780a0c7432be`

```c

/* WARNING: Removing unreachable block (ram,0x007101a2fb0c) */
/* WARNING: Removing unreachable block (ram,0x007101a2d6d8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a2b570(undefined **param_1,undefined8 param_2,undefined **param_3,
                   long ************param_4,long ****param_5,ulong param_6,undefined8 param_7,
                   undefined8 param_8)

{
  undefined **ppuVar1;
  float *pfVar2;
  byte bVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  long ***********ppppppppppplVar18;
  ulong uVar19;
  ulong uVar20;
  void *__dest;
  undefined1 *puVar21;
  long *********ppppppppplVar22;
  long **********pppppppppplVar23;
  undefined **ppuVar24;
  long *plVar25;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
// ... (4049 more lines)
```

## 20. `FUN_7101a19990`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a19990`  (offset `0x1a19990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a19990(long param_1, int param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1300 bytes / 49 bb / 7 incoming refs
- **Match values:** chara_select
- **Strings touched:** set_parts_score_0;set_txt_lv;standard_pic;mel_chara_select_high_score_none;standard_pic_off;set_txt_count;training_combo;mel_chara_select_training_max_combo_n;training_combo_0
- **Callers:** FUN_710183be60;FUN_7101a19650;FUN_7101a197f0;FUN_7101a1c300;FUN_7101a1f7d0;FUN_7101a20200;FUN_7101a27570
- **Callees:** FUN_7101a1b4a0;FUN_7101a1b900;FUN_7101a1ba90;FUN_7101a1bc20;FUN_7101a1be30;FUN_7101a1c070;FUN_7101a1c140;FUN_7103264270;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778630;FUN_710377a120;FUN_710377a280;FUN_710377a310;...
- **Files:** [decomp](../decompiled/FUN_7101a19990__7101a19990.c)  [cfg](../decompiled/FUN_7101a19990__7101a19990.mmd)
- **Clone hash:** `218c67eae03a7cb4`

```c

void FUN_7101a19990(long param_1,int param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  byte ***pppbVar6;
  long ****pppplVar7;
  byte ****ppppbVar8;
  long lVar9;
  short sVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined **local_78;
  ulong local_70;
  byte ***local_68;
  ulong local_60;
  undefined4 local_58;
  byte **local_50;
  ulong local_48;
  
  if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x250) + (long)param_2 * 0x10 + 8);
  if (*(char *)(lVar9 + 0x6b9) == '\0') {
    return;
  }
  if (*(int *)(lVar9 + 0x1f8) != 0) {
    if (*(int *)(param_1 + 0x16c) != 0xf) {
      return;
    }
    local_50 = (byte **)&DAT_c1ffff0000000000;
    local_68 = (byte ***)&DAT_ffffffff00000000;
// ... (196 more lines)
```

## 21. `FUN_7101a1c070`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1c070`  (offset `0x1a1c070`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1c070(long param_1, int * param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 208 bytes / 11 bb / 4 incoming refs
- **Match values:** chara_select
- **Strings touched:** score_color_%d;score_color_1;set_txt_match;mel_chara_select_world_pw_n;mel_chara_select_world_pw_none
- **Callers:** FUN_7101a19990;FUN_7101a27570
- **Callees:** FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_710377a120;FUN_710377a280;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101a1c070__7101a1c070.c)  [cfg](../decompiled/FUN_7101a1c070__7101a1c070.mmd)
- **Clone hash:** `f9bd06515ac87c74`

```c

void FUN_7101a1c070(long param_1,int *param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined **local_30;
  ulong local_28;
  
  if (param_2[3] == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x71042c47bc);
  }
  else {
    param_3 = (ulong)(param_2[3] + 2);
    FUN_7103778430(param_1,"score_color_%d",param_3,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7103776910(&local_30,param_1,(long ****)"set_txt_match",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (((*param_2 == 0) || (param_2[3] != 1)) && (param_2[3] != 2)) {
    FUN_710377a120((long)&local_30,"mel_chara_select_world_pw_none",param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  else {
    FUN_710377a280((long)&local_30,(byte *)"mel_chara_select_world_pw_n",1);
  }
  uVar1 = local_28;
  local_30 = &PTR_FUN_710523d9a8;
  local_28 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  return;
}


```

## 22. `FUN_7101ee69b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ee69b0`  (offset `0x1ee69b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ee69b0(long param_1, undefined8 param_2, undefined * * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1132 bytes / 68 bb / 0 incoming refs
- **Match values:** chara_select
- **Strings touched:** btn_anim;controller_joy_l;mel_chara_select_help_press_any_side_btn;controller_joy_dual;mel_chara_select_help_press_any_btn;footer_btn_in;footer_btn_out
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101ee4220;FUN_710376b960;FUN_7103771a80;FUN_71037780e0;FUN_7103778300;FUN_710377a120;FUN_71037964b0;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::hid::StartLrAssignmentMode;<EXTERNAL>::nn::hid::StopLrAssignmentMode
- **Files:** [decomp](../decompiled/FUN_7101ee69b0__7101ee69b0.c)  [cfg](../decompiled/FUN_7101ee69b0__7101ee69b0.mmd)
- **Clone hash:** `60da8fb88a2800b9`

```c

void FUN_7101ee69b0(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined **local_40;
  ulong local_38;
  
  plVar12 = *(long **)(param_1 + 0x80);
  FUN_7101ee4220(plVar12);
  if (*plVar12 != 0) {
    pcVar8 = (code *)plVar12[1];
    uVar11 = plVar12[2] & 1;
    if (uVar11 != 0 || pcVar8 != (code *)0x0) {
      if (uVar11 != 0) {
        pcVar8 = *(code **)(pcVar8 + *(long *)(*plVar12 + (plVar12[2] >> 1)));
      }
      (*pcVar8)();
    }
  }
  *(int *)((long)plVar12 + 0xdc) = *(int *)((long)plVar12 + 0xdc) + 1;
  if (((*(long *)(plVar12[0x161] + 8) == 0) ||
      (plVar4 = (long *)FUN_71037964b0(*(long *)(plVar12[0x161] + 8),0x71043ae0c3),
      plVar4 == (long *)0x0)) || (uVar11 = (**(code **)(*plVar4 + 0x138))(), (uVar11 & 1) != 0)) {
    iVar3 = (int)plVar12[0x164];
    uVar1 = iVar3 + 2;
    if (-1 < iVar3 + 1) {
      uVar1 = iVar3 + 1;
// ... (130 more lines)
```

## 23. `FUN_7101839390`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101839390`  (offset `0x1839390`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101839390(long param_1, byte param_2)`
- **Size / BBs / Incoming:** 9004 bytes / 476 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** chara_select_btn3_05_ready_00
- **Callers:** FUN_7101846880
- **Callees:** FUN_71000001c0;FUN_71003cb050;FUN_7101684280;FUN_710172acb0;FUN_7101764000;FUN_7101797560;FUN_71017aacc0;FUN_71017c0f50;FUN_71017c6500;FUN_710183b6c0;FUN_710183b900;FUN_710183bb20;FUN_7101a0a3e0;FUN_7101a0ffd0;FUN_7101a11d30;FUN_710259f250;...
- **Files:** [decomp](../decompiled/FUN_7101839390__7101839390.c)  [cfg](../decompiled/FUN_7101839390__7101839390.mmd)
- **Clone hash:** `95098ab448477e92`

```c

/* WARNING: Removing unreachable block (ram,0x007101839ec8) */
/* WARNING: Removing unreachable block (ram,0x007101839e00) */
/* WARNING: Removing unreachable block (ram,0x007101839e64) */
/* WARNING: Removing unreachable block (ram,0x007101839f28) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101839390(long param_1,byte param_2)

{
  long ****pppplVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long **********__dest;
  long ****pppplVar14;
  long **********pppppppppplVar15;
  long **********pppppppppplVar16;
  long ***ppplVar17;
  void *__dest_00;
  ulong uVar18;
  int *piVar19;
  long ****pppplVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 extraout_x1;
// ... (1559 more lines)
```

## 24. `FUN_7101845ea0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101845ea0`  (offset `0x1845ea0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101845ea0(long * param_1)`
- **Size / BBs / Incoming:** 1608 bytes / 75 bb / 27 incoming refs
- **Match values:** chara_select
- **Strings touched:** chara_select_btn3_05_ready_00
- **Callers:** FUN_7101922970;FUN_71022f7670;FUN_71023014c0;FUN_7102304a90;FUN_7102328bb0;FUN_7102331130;FUN_71023341a0;FUN_710233c2c0;FUN_710233cea0;FUN_710233d0e0;FUN_710233d420;FUN_710233fb80;FUN_7102342310;FUN_71023444c0;FUN_7102364560;FUN_710236beb0;...
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101a0ffd0;FUN_7101a11d30;FUN_7103238a70;FUN_7103238d60;FUN_710323af70;FUN_710323beb0;FUN_710323c4e0;FUN_710326f6a0;FUN_710327b090;FUN_71032d1fd0;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7101845ea0__7101845ea0.c)  [cfg](../decompiled/FUN_7101845ea0__7101845ea0.mmd)
- **Clone hash:** `29f289e8098aeb9c`

```c

void FUN_7101845ea0(long *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong *puVar6;
  undefined8 extraout_x1_02;
  undefined8 uVar7;
  long *********ppppppppplVar8;
  byte ****ppppbVar9;
  long ****pppplVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_x7;
  ulong *puVar13;
  ulong *local_88;
  ulong *local_80;
  ulong *local_70;
  ulong *local_68;
  ulong *local_58;
  ulong *local_50;
  ulong local_38;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar4 = FUN_7101a0ffd0();
  uVar11 = 1;
  uVar12 = 0;
  FUN_710326f6a0(&local_88,0,(long ****)0x1,(byte ****)0x0,(long ****)0x0,(byte ****)0x1,0,in_x7);
  if (iVar4 == 2) {
// ... (252 more lines)
```

## 25. `FUN_7101a41230`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a41230`  (offset `0x1a41230`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a41230(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2312 bytes / 96 bb / 2 incoming refs
- **Match values:** chara_select
- **Strings touched:** change;decide;mel_chara_select_lv_n;cp_level_%d;mel_chara_select_fp_lv_n;set_txt_chara_name
- **Callers:** FUN_7101837cf0;FUN_7101a41ce0
- **Callees:** FUN_71015547e0;FUN_71016b6a10;FUN_7101a0d0d0;FUN_7101a3a120;FUN_7101a42170;FUN_7101a42ba0;FUN_7101a44850;FUN_7101a452f0;FUN_7101a453d0;FUN_7101a489d0;FUN_7101a48ae0;FUN_7101a4a800;FUN_7101a4da60;FUN_71032632a0;FUN_7103263a30;FUN_7103265e70;...
- **Files:** [decomp](../decompiled/FUN_7101a41230__7101a41230.c)  [cfg](../decompiled/FUN_7101a41230__7101a41230.mmd)
- **Clone hash:** `d996283acf3544f4`

```c

void FUN_7101a41230(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long *********ppppppppplVar8;
  byte ****ppppbVar9;
  long ****pppplVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uStack_228;
  uint local_220;
  undefined1 *local_218;
  long *********local_210;
  byte local_208;
  byte local_207;
  byte local_138;
  byte local_a8;
  ushort auStack_9a [9];
  undefined **local_88;
  ulong local_80;
  
// ... (302 more lines)
```

## 26. `FUN_7101a1eee0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1eee0`  (offset `0x1a1eee0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1eee0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 464 bytes / 10 bb / 3 incoming refs
- **Match values:** chara_select
- **Strings touched:** mel_chara_select_lv_n;cp_level_%d;change;decide;fp_level_off
- **Callers:** FUN_710183be60;FUN_7101a1dbf0
- **Callees:** FUN_71019fff00;FUN_7101a024c0;FUN_7101a028b0;FUN_7101a06920;FUN_7101a1f530;FUN_7103778300;FUN_7103778430;FUN_7103778760;FUN_710377a280;FUN_71037a2270
- **Files:** [decomp](../decompiled/FUN_7101a1eee0__7101a1eee0.c)  [cfg](../decompiled/FUN_7101a1eee0__7101a1eee0.mmd)
- **Clone hash:** `667410f33e1104bd`

```c

void FUN_7101a1eee0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ushort local_34 [2];
  
  uVar2 = (uint)param_3;
  FUN_7101a06920(*(long *)(param_2 + 8),0,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(*(long *)(param_2 + 8) + 500) = 3;
  *(int *)(*(long *)(param_2 + 8) + 0x1f0) = *(int *)(*(long *)(param_2 + 8) + 0x150) + 1;
  FUN_7101a028b0(*(long *)(param_2 + 8),2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
  *(undefined1 *)(*(long *)(param_2 + 8) + 0x211) = 0;
  *(undefined4 *)(lVar3 + 0x250) = 0;
  if (*(int *)(lVar3 + 0x21c) == 1) {
    param_4 = (byte ****)0x0;
    FUN_710377a280(lVar3 + 0x88,(byte *)"mel_chara_select_lv_n",1);
    param_3 = (long ****)(ulong)*(uint *)(lVar3 + 0x250);
    FUN_7103778430(lVar3 + 0x68,"cp_level_%d",param_3,param_4,param_5,param_6,param_7,param_8);
  }
  *(undefined1 *)(*(long *)(param_2 + 8) + 0x6bd) = 0;
  FUN_7103778760(*(long *)(*(long *)(*(long *)(param_2 + 8) + 0x5e8) + 0x10),0x710425ed91);
  lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
  FUN_7103778760(*(long *)(lVar3 + 0x10),0x710433a9c5);
  FUN_7103778760(*(long *)(lVar3 + 0xf0),0x710433a9c5);
  FUN_7103778760(*(long *)(lVar3 + 0x100),0x710433a9c5);
  FUN_7101a1f530(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101a024c0(*(long *)(param_2 + 8),-1,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
  *(undefined1 *)(*(long *)(param_2 + 8) + 0x2e0) = 0;
  *(undefined4 *)(lVar3 + 0x254) = 0;
  FUN_7103778300(0x3f800000,*(long *)(lVar3 + 0x40),0x7104349d11);
  plVar1 = *(long **)(*(long *)(lVar3 + 0xa0) + 0x10);
  if (plVar1 != (long *)0x0) {
    param_4 = (byte ****)0x0;
    local_34[0] = 0;
// ... (20 more lines)
```

## 27. `FUN_71019fe1e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019fe1e0`  (offset `0x19fe1e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019fe1e0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7444 bytes / 371 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** controller_entry_cut_off;gekitui_off;hd_off;dash_pokemon_off;subwindow_off;local_off;set_window;NODE_PRE_REFRACT_BLEND;set_cursor;set_btn_panel;set_btn_flag_team;set_btn_name;set_btn_hd;set_btn_sp;set_part_chara_pk;set_part_chara_element;set_parts_controller_res;set_lct_controller_entry;fp_level_off;set_txt_00;set_txt_fp_level;set_txt_level;set_txt_dmg;set_txt_hp;set_lct_hd;bg_set_ch;cmn_%dp;set_txt_player_off;controller_joy_dual;set_txt_btn;controller_off;btn_anim;...
- **Callers:** FUN_7101a04050
- **Callees:** FUN_71003a4ca0;FUN_71019fbbd0;FUN_71019fbf50;FUN_71019fc090;FUN_71019fc7a0;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_7103771d60;FUN_7103772070;FUN_7103776290;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_7103778630;...
- **Files:** [decomp](../decompiled/FUN_71019fe1e0__71019fe1e0.c)  [cfg](../decompiled/FUN_71019fe1e0__71019fe1e0.mmd)
- **Clone hash:** `52d7402733de411f`

```c

void FUN_71019fe1e0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long ****pppplVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
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
  undefined8 uVar13;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  long ****pppplVar14;
  byte ****ppppbVar15;
  long ****pppplVar16;
// ... (1414 more lines)
```

## 28. `FUN_7101a568e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a568e0`  (offset `0x1a568e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a568e0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2840 bytes / 98 bb / 2 incoming refs
- **Match values:** chara_select
- **Strings touched:** fp_level_off;change;decide;mel_chara_select_lv_n;cp_level_%d;controller_off
- **Callers:** FUN_7101a4e880
- **Callees:** FUN_71017abd00;FUN_71019fc7a0;FUN_71019fd0b0;FUN_7101a000c0;FUN_7101a024c0;FUN_7101a028b0;FUN_7101a029b0;FUN_7101a02cb0;FUN_7101a06920;FUN_7101a07770;FUN_7101a54360;FUN_7101a54a30;FUN_7101a57400;FUN_7103263030;FUN_71032631a0;FUN_7103778300;...
- **Files:** [decomp](../decompiled/FUN_7101a568e0__7101a568e0.c)  [cfg](../decompiled/FUN_7101a568e0__7101a568e0.mmd)
- **Clone hash:** `b6cad397912f819d`

```c

void FUN_7101a568e0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar8;
  undefined8 extraout_x1_05;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *********ppppppppplVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68 [2];
  
  plVar16 = (long *)(param_2 + 8);
  lVar5 = *plVar16;
  uVar1 = *(uint *)(lVar5 + 0x1f8);
  uVar14 = (uint)param_3;
  if (*(int *)(lVar5 + 0x5d0) == 0) {
    if (uVar14 == 0) {
      uVar14 = 1;
    }
// ... (331 more lines)
```

## 29. `FUN_7101a2a270`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a2a270`  (offset `0x1a2a270`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a2a270(long param_1, byte param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3032 bytes / 170 bb / 2 incoming refs
- **Match values:** chara_select
- **Strings touched:** mel_chara_select_various_normal;set_txt_title_00
- **Callers:** FUN_7101a26b10;FUN_7101a2b570
- **Callees:** FUN_71019f08a0;FUN_7101a000c0;FUN_7101a07580;FUN_71032d0830;FUN_71032d2e70;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_71037a2270;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101a2a270__7101a2a270.c)  [cfg](../decompiled/FUN_7101a2a270__7101a2a270.mmd)
- **Clone hash:** `bf462ecb260f4cb8`

```c

void FUN_7101a2a270(long param_1,byte param_2,long ****param_3,byte ****param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  bool bVar10;
  long *plVar11;
  ushort *puVar12;
  byte ****ppppbVar13;
  int iVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  char local_f8 [64];
  undefined **local_b8;
  ulong local_b0 [8];
  
  if ((*(char *)(param_1 + 0x169) == '\0') && ((param_2 & 1) != 0)) {
    lVar20 = *(long *)(param_1 + 0x250);
    lVar22 = *(long *)(param_1 + 600);
    if (lVar20 == lVar22) {
      iVar14 = 0;
    }
    else {
// ... (464 more lines)
```

## 30. `FUN_7101a58f40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a58f40`  (offset `0x1a58f40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a58f40(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3348 bytes / 175 bb / 2 incoming refs
- **Match values:** chara_select
- **Strings touched:** set_txt_early;disable_onoff;disable_size;player_color_%dp;amiibo_wait;entry_on;mel_tournament_guest_n;mel_chara_select_lv_n;cp_level_%d;mel_tournament_cp_n;entry_off
- **Callers:** FUN_7101a4e880;FUN_7101a5a480
- **Callees:** FUN_71003a4ca0;FUN_7101a587e0;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_7103778ab0;FUN_710377a280;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101a58f40__7101a58f40.c)  [cfg](../decompiled/FUN_7101a58f40__7101a58f40.mmd)
- **Clone hash:** `d5bca36ec9a1b2ed`

```c

/* WARNING: Removing unreachable block (ram,0x007101a590d8) */
/* WARNING: Removing unreachable block (ram,0x007101a591f8) */

void FUN_7101a58f40(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  bool bVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  long *plVar14;
  uint uVar15;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined **local_60;
  ulong local_58;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0xac) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xac) = param_2;
  if (param_2 != 3) {
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  FUN_7103776910(&local_60,param_1 + 0x10,(long ****)"set_txt_early",param_3,param_4,param_5,param_6
// ... (477 more lines)
```

## 31. `FUN_7101a3a120`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a3a120`  (offset `0x1a3a120`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a3a120(long param_1, int param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 792 bytes / 22 bb / 7 incoming refs
- **Match values:** chara_select
- **Strings touched:** mel_chara_select_lv_n;cp_level_%d;mel_player_n
- **Callers:** FUN_7101a38fd0;FUN_7101a3a440;FUN_7101a41230
- **Callees:** FUN_7101a48700;FUN_7101a4a800;FUN_7103263030;FUN_71032631a0;FUN_7103778430;FUN_7103778ab0;FUN_710377a280;FUN_71037a2270;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101a3a120__7101a3a120.c)  [cfg](../decompiled/FUN_7101a3a120__7101a3a120.mmd)
- **Clone hash:** `a1add8ce6608ddbf`

```c

void FUN_7101a3a120(long param_1,int param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long *********ppppppppplVar2;
  long *plVar3;
  long ****pppplVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *********ppppppppplVar9;
  long lVar10;
  undefined **local_40;
  ulong local_38;
  
  ppppppppplVar9 = (long *********)&DAT_c1ffff0000000000;
  FUN_7101a4a800(*(long *)(param_1 + 8),param_2,(long ****)0x3,param_4,param_5,param_6,param_7,
                 param_8);
  lVar10 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  puVar1 = FUN_71032631a0(lVar10,0x11b1ccb807);
  ppppppppplVar2 = ppppppppplVar9;
  if (((ulong)puVar1 & 0xff00000000000000) != 0xc100000000000000 ||
      ((ulong)puVar1 & 0xffffffffff) == 0) {
    ppppppppplVar2 = (long *********)FUN_7103263030(lVar10,0xc1ffff0000000000);
  }
  pppplVar4 = (long ****)0x0;
  FUN_7101a48700(*(long *)(param_1 + 8),param_2,&DAT_c1ffff0000000000,ppppppppplVar2,0,param_6,
                 param_7,param_8);
  lVar10 = *(long *)(param_1 + 8);
  uVar8 = (ulong)param_2;
  uVar6 = (*(long *)(lVar10 + 600) - *(long *)(lVar10 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f;
  if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
    *(undefined1 *)(*(long *)(lVar10 + 0x250) + uVar8 * 0x3f8 + 0x29) = 0;
    if ((ulong)(*(long *)(lVar10 + 0x3b8) - *(long *)(lVar10 + 0x3b0) >> 4) <= uVar8) {
LAB_7101a3a430:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
// ... (74 more lines)
```

## 32. `FUN_7101a024c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a024c0`  (offset `0x1a024c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a024c0(long param_1, int param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1004 bytes / 46 bb / 8 incoming refs
- **Match values:** chara_select
- **Strings touched:** fp_level_on;mel_chara_select_fp_lv_n;fp_level_off
- **Callers:** FUN_710183be60;FUN_7101a02010;FUN_7101a1dbf0;FUN_7101a1e660;FUN_7101a1eee0;FUN_7101a568e0
- **Callees:** FUN_7101a00df0;FUN_7101a029b0;FUN_710324bb60;FUN_71032631a0;FUN_71032632a0;FUN_71032633f0;FUN_71032df050;FUN_71032e1c20;FUN_71032e26a0;FUN_7103778300;FUN_710377a280;FUN_71037a2270
- **Files:** [decomp](../decompiled/FUN_7101a024c0__7101a024c0.c)  [cfg](../decompiled/FUN_7101a024c0__7101a024c0.mmd)
- **Clone hash:** `197ec0955dc63d6d`

```c

void FUN_7101a024c0(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  long *********ppppppppplVar10;
  long lVar11;
  long *plVar12;
  undefined1 local_74 [4];
  undefined4 local_70;
  uint uStack_6c;
  long *********local_68;
  
  if (*(int *)(param_1 + 0x1f8) != 2) {
    return;
  }
  *(int *)(param_1 + 0x3a0) = param_2;
  *(undefined1 *)(param_1 + 0x6ba) = 1;
  *(undefined1 *)(param_1 + 0x6c2) = 0;
  if (param_2 == -1) {
    FUN_7101a029b0(param_1,&DAT_c1ffff0000000000,(long *********)&DAT_c1ffff0000000000,0,param_5,
                   param_6,param_7,param_8);
    uVar8 = 0;
    goto LAB_7101a02888;
  }
  lVar9 = *(long *)(DAT_710532f7b0 + 8);
  piVar4 = FUN_71032df050(lVar9,param_2);
  FUN_71032e1c20(lVar9,param_2,(uint *)(param_1 + 0x2b8));
  ppppppppplVar10 = *(long **********)(piVar4 + 2);
  plVar12 = (long *)(DAT_710532f730 + 8);
  lVar9 = *plVar12;
// ... (115 more lines)
```

## 33. `FUN_7101a57400`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a57400`  (offset `0x1a57400`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a57400(long param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 496 bytes / 23 bb / 5 incoming refs
- **Match values:** chara_select
- **Strings touched:** mel_chara_select_lv_n;cp_level_%d
- **Callers:** FUN_710183be60;FUN_7101a4e880;FUN_7101a568e0
- **Callees:** FUN_71033112b0;FUN_71033115f0;FUN_7103778430;FUN_710377a280;FUN_710377a310;FUN_710377a5b0
- **Files:** [decomp](../decompiled/FUN_7101a57400__7101a57400.c)  [cfg](../decompiled/FUN_7101a57400__7101a57400.mmd)
- **Clone hash:** `70094ba773776192`

```c

void FUN_7101a57400(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  uint local_38 [2];
  
  lVar4 = *(long *)(param_2 + 8);
  if (*(short *)(lVar4 + 0x216) == 0) {
    iVar6 = 10;
    switch(*(undefined1 *)(param_1 + 0x2ba)) {
    case 0:
      break;
    case 1:
      iVar6 = 0x1e;
      break;
    case 2:
      iVar6 = 0x32;
      break;
    case 3:
      iVar6 = 0x50;
      break;
    case 4:
      iVar6 = 100;
      break;
    default:
      iVar6 = 0x96;
      break;
    case 6:
      iVar6 = 200;
      break;
    case 7:
// ... (57 more lines)
```

## 34. `FUN_7101a04c80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a04c80`  (offset `0x1a04c80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a04c80(long * param_1, undefined8 * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5876 bytes / 360 bb / 2 incoming refs
- **Match values:** chara_select
- **Strings touched:** indicator_%d;controller_joy_dual;set_txt_btn;controller_off;controller_entry_cut_off;local_off;local_on;NODE_PRE_REFRACT_BLEND;amiibo_off
- **Callers:** FUN_7101a2b570;FUN_7101a58390
- **Callees:** FUN_71003a4ca0;FUN_71019e6420;FUN_71019e66d0;FUN_71019e7c00;FUN_71019e8ff0;FUN_71019eace0;FUN_71019f9b50;FUN_71019fd290;FUN_7101a00c90;FUN_7101a023f0;FUN_7101a03490;FUN_7101a036e0;FUN_7101a0f290;FUN_7103263030;FUN_71032631a0;FUN_71032633f0;...
- **Files:** [decomp](../decompiled/FUN_7101a04c80__7101a04c80.c)  [cfg](../decompiled/FUN_7101a04c80__7101a04c80.mmd)
- **Clone hash:** `a66055e514ae4b1d`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a04c80(long *param_1,undefined8 *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined8 *extraout_x1_01;
  undefined8 *extraout_x1_02;
  undefined8 *extraout_x1_03;
  undefined8 *extraout_x1_04;
  undefined8 *extraout_x1_05;
  undefined8 *extraout_x1_06;
  undefined8 *extraout_x1_07;
  undefined8 *extraout_x1_08;
  undefined8 *extraout_x1_09;
  undefined8 *extraout_x1_10;
  undefined8 *extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
// ... (1115 more lines)
```

## 35. `FUN_7101a1f530`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1f530`  (offset `0x1a1f530`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1f530(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 664 bytes / 36 bb / 5 incoming refs
- **Match values:** chara_select
- **Strings touched:** mel_chara_select_lv_n;cp_level_%d
- **Callers:** FUN_710183be60;FUN_7101a1cf90;FUN_7101a1dbf0;FUN_7101a1eb70;FUN_7101a1eee0
- **Callees:** FUN_7101a000c0;FUN_71033112b0;FUN_71033115f0;FUN_7103778430;FUN_710377a280;FUN_710377a310;FUN_710377a5b0;FUN_71037a2270;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101a1f530__7101a1f530.c)  [cfg](../decompiled/FUN_7101a1f530__7101a1f530.mmd)
- **Clone hash:** `152edbe00fde2956`

```c

void FUN_7101a1f530(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  ushort *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  uint local_38 [2];
  
  lVar8 = *(long *)(param_2 + 8);
  if (*(short *)(lVar8 + 0x216) == 0) {
    iVar7 = 10;
    switch(*(undefined1 *)(param_1 + 0x159)) {
    case 0:
      break;
    case 1:
      iVar7 = 0x1e;
      break;
    case 2:
      iVar7 = 0x32;
      break;
    case 3:
      iVar7 = 0x50;
      break;
    case 4:
      iVar7 = 100;
      break;
    default:
      iVar7 = 0x96;
      break;
    case 6:
      iVar7 = 200;
// ... (85 more lines)
```

## 36. `FUN_7101a38d80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a38d80`  (offset `0x1a38d80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a38d80(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 580 bytes / 30 bb / 4 incoming refs
- **Match values:** chara_select
- **Strings touched:** mel_chara_select_lv_n;cp_level_%d
- **Callers:** FUN_7101a36120;FUN_7101a386c0;FUN_7101a39930
- **Callees:** FUN_7101a489d0;FUN_7103778430;FUN_710377a280;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101a38d80__7101a38d80.c)  [cfg](../decompiled/FUN_7101a38d80__7101a38d80.mmd)
- **Clone hash:** `206c4d3808065e8c`

```c

void FUN_7101a38d80(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = *(long *)(param_2 + 8);
  lVar5 = *(long *)(lVar1 + 0x250);
  uVar6 = (*(long *)(lVar1 + 600) - lVar5 >> 3) * 0x7efdfbf7efdfbf7f;
  uVar8 = (ulong)(int)param_3;
  if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
    if (*(short *)(lVar5 + uVar8 * 0x3f8 + 0x2e) == 0) {
      uVar2 = 10;
      switch(*(undefined1 *)(param_1 + 0x129)) {
      case 0:
        break;
      case 1:
        uVar2 = 0x1e;
        break;
      case 2:
        uVar2 = 0x32;
        break;
      case 3:
        uVar2 = 0x50;
        break;
      case 4:
        uVar2 = 100;
        break;
      default:
        uVar2 = 0x96;
        break;
      case 6:
// ... (67 more lines)
```

## 37. `FUN_7101896640`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101896640`  (offset `0x1896640`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101896640(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 10616 bytes / 510 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** chara_select_btn3_05_ready_00;set_txt_02;mnu_online_room_inside_ko_total_n;set_txt_03;mnu_online_room_inside_account_nam;set_rep_icn_fighter_00;set_icn_profile;set_icn_profile_bg;set_txt_00;mnu_online_room_inside_host_nam;set_rep_icn_fighter
- **Callers:** FUN_710189c530
- **Callees:** FUN_71000001c0;FUN_7101686610;FUN_710168eb40;FUN_71016b6a10;FUN_71016b7a00;FUN_71016e3710;FUN_71016ea290;FUN_71016eade0;FUN_71016f6340;FUN_7101764000;FUN_7101797cc0;FUN_71017abd00;FUN_71017c0f50;FUN_71017c6500;FUN_71018918d0;FUN_7101892ba0;...
- **Files:** [decomp](../decompiled/FUN_7101896640__7101896640.c)  [cfg](../decompiled/FUN_7101896640__7101896640.mmd)
- **Clone hash:** `aaac48bef96a5efb`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101896640(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  undefined4 uVar6;
  ushort uVar7;
  long ********pppppppplVar8;
  undefined8 *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
// ... (1748 more lines)
```

## 38. `FUN_71018852c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018852c0`  (offset `0x18852c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018852c0(long param_1, undefined8 param_2, char * param_3, char * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3212 bytes / 136 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** g_melee_type;TYPE_NONE;ANYONE_SINGLE;ANYONE_DOUBLE;ANYONE_VIP;TOURNAMENT;nam_chr1_%02d_%s;g_fighter_name_1p;mnu_while_wait_fighter_not_set;g_fighter_name_2p;g_is_vip_fighter;g_is_rule_priority;SCENE_EXIT_CODE_SELECT;g_is_chara_select_back;g_is_no_double_controller;is_guide_decided;open_sub_window;decided_sub_window;close_sub_window;open_priority_window;decided_priority_window;close_priority_window;open_popup_window;can_input;is_popup_result_yes;g_exit_code
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_7101764000;FUN_7101797560;FUN_7103262310;FUN_71032631a0;FUN_71032632a0;FUN_7103263540;FUN_7103375650;FUN_7103376af0;FUN_710372d940;FUN_7103775dc0;FUN_71037aea50;FUN_71038f4d40;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_71018852c0__71018852c0.c)  [cfg](../decompiled/FUN_71018852c0__71018852c0.mmd)
- **Clone hash:** `2124fb0db9dff0cf`

```c

void FUN_71018852c0(long param_1,undefined8 param_2,char *param_3,char *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long *plVar8;
  long ***ppplVar9;
  long *plVar10;
  long *plVar11;
  long ****pppplVar12;
  long lVar13;
  undefined8 *puVar14;
  byte ****ppppbVar15;
  long lVar16;
  long **pplVar17;
  long **pplVar18;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  byte ***apppbStack_f8 [8];
  long ***local_b8;
  long ***appplStack_b0 [8];
  undefined4 local_6c [3];
  
  if (*(int *)(param_1 + 0xbc) != 0) goto LAB_7101885da8;
  *(undefined1 *)(*(long *)(param_1 + 0xd8) + 0x70) = 0;
  pplVar18 = *(long ***)(*(long *)(param_1 + 0xd8) + 0x80);
// ... (557 more lines)
```

## 39. `FUN_7101a12f60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a12f60`  (offset `0x1a12f60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a12f60(long param_1, long * * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 16140 bytes / 871 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** decide;change;error_action;mel_chara_select_lv_n;cp_level_%d
- **Callees:** FUN_7101686610;FUN_7101695020;FUN_71016f4260;FUN_71016f6340;FUN_71016f6a40;FUN_710175dfc0;FUN_71019f08a0;FUN_71019f11d0;FUN_71019f1fa0;FUN_71019fd0b0;FUN_71019fd290;FUN_7101a000c0;FUN_7101a00c90;FUN_7101a029b0;FUN_7101a03490;FUN_7101a036e0;...
- **Files:** [decomp](../decompiled/FUN_7101a12f60__7101a12f60.c)  [cfg](../decompiled/FUN_7101a12f60__7101a12f60.mmd)
- **Clone hash:** `8ff067d4a9bc0f26`

```c

/* WARNING: Removing unreachable block (ram,0x007101a135c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a12f60(long param_1,long **param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  void *__dest;
  byte *pbVar23;
  long **extraout_x1;
  long **extraout_x1_00;
  long **extraout_x1_01;
  long **extraout_x1_02;
  long **extraout_x1_03;
  long **extraout_x1_04;
  long **extraout_x1_05;
  long **extraout_x1_06;
// ... (2689 more lines)
```

## 40. `FUN_7101f05f40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f05f40`  (offset `0x1f05f40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f05f40(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1328 bytes / 98 bb / 2 incoming refs
- **Match values:** chara_select
- **Strings touched:** set_txt_btn
- **Callers:** FUN_7101ef7400
- **Callees:** FUN_7101efac00;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101f05f40__7101f05f40.c)  [cfg](../decompiled/FUN_7101f05f40__7101f05f40.mmd)
- **Clone hash:** `ce08557541ae3237`

```c

void FUN_7101f05f40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined **local_40;
  ulong local_38;
  
  if (*(uint *)(param_1 + 500) < 0x13) {
    uVar3 = *(uint *)(param_1 + (long)(int)*(uint *)(param_1 + 500) * 4 + 0x1a8);
    if (*(uint *)(param_1 + 0x1f8) != uVar3) {
      *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x1f8);
      *(uint *)(param_1 + 0x1f8) = uVar3;
      if (0x16 < uVar3) goto LAB_7101f0646c;
      lVar8 = param_1 + (long)(int)uVar3 * 0x10;
      uVar2 = *(undefined8 *)(lVar8 + 0x40);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar8 + 0x38);
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      pcVar6 = *(code **)(param_1 + 0x28);
      uVar7 = *(ulong *)(param_1 + 0x30) & 1;
      if (uVar7 != 0 || pcVar6 != (code *)0x0) {
        if (uVar7 != 0) {
          pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(param_1 + 0x10) +
                                                ((long)*(ulong *)(param_1 + 0x30) >> 1)));
        }
        (*pcVar6)();
      }
      *(undefined4 *)(param_1 + 0x1fc) = 0;
    }
    if (*(char *)(param_1 + 0x204) != '\0') {
// ... (235 more lines)
```

## 41. `FUN_7101c62870`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c62870`  (offset `0x1c62870`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c62870(undefined8 * param_1, long * * * * * * * * * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 23588 bytes / 1102 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** area_medal;set_cursor_area;set_medal_balloon_pos_r;set_medal_balloon_pos_l;set_medal_%02d;set_medal_over_%02d;chara/chara_4/chara_4_;catch;anim_appear_in;anim_appear_other_in;anim_appear_stay;change_blink_on;anim_on;loop_off;balloon_off;medal_fp_off;next_off;state_catch_ok;change_blink_off;selector_0;sel_off;set_txt_back_00;mel_over_return_02;set_txt_back_01;mel_return_02;pic_stage;set_rep_stg;stage_other;stage_random;pic_fighter;set_rep_fig;fighter_other;...
- **Callers:** FUN_7101896640
- **Callees:** FUN_71003a4ca0;FUN_71016e3710;FUN_7101898fc0;FUN_7101899100;FUN_7101899240;FUN_7101899380;FUN_71018994c0;FUN_7101899600;FUN_7101989a30;FUN_7101a7ed70;FUN_7101c61990;FUN_7101c684a0;FUN_7101c68640;FUN_7101c689c0;FUN_7101c69330;FUN_7101c69720;...
- **Files:** [decomp](../decompiled/FUN_7101c62870__7101c62870.c)  [cfg](../decompiled/FUN_7101c62870__7101c62870.mmd)
- **Clone hash:** `e4dd96ce2a92ce22`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c62870(undefined8 *param_1,long *********param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte ***pppbVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  long *********ppppppppplVar14;
  long lVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  byte **ppbVar23;
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
// ... (4548 more lines)
```

## 42. `FUN_7101a27570`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a27570`  (offset `0x1a27570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a27570(long param_1, undefined8 param_2, long * * * * * * * * * * * param_3, long * * * * * * * * * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11516 bytes / 417 bb / 3 incoming refs
- **Match values:** chara_select
- **Strings touched:** training_combo_0;set_txt_count;set_parts_score_0;kumite_on;kumite_1_chara_score;set_parts_score_1;kumite_1_no1_score;set_parts_score_2;kumite_1_all_score;NODE_PRE_REFRACT_BLEND;record_on;kumite_2;standard_on;standard_2;standard_1_chara_score;standard_1_no1_score;standard_1_all_score;set_txt_lv;mel_chara_select_high_score_none;set_txt_standard_sub;set_txt_route;standard_pic_off;match_waiting_on;match_1_chara_score;match_1_no1_score;match_1_all_score;kumite_%d
- **Callers:** FUN_7101a26200;FUN_7101a26b10;FUN_7101a2b570
- **Callees:** FUN_7101798a80;FUN_71017994c0;FUN_71017c0da0;FUN_71017d1480;FUN_7101a0cae0;FUN_7101a0dde0;FUN_7101a0e010;FUN_7101a19420;FUN_7101a19990;FUN_7101a19eb0;FUN_7101a1b4a0;FUN_7101a1ba90;FUN_7101a1bc20;FUN_7101a1be30;FUN_7101a1c070;FUN_7101a1c140;...
- **Files:** [decomp](../decompiled/FUN_7101a27570__7101a27570.c)  [cfg](../decompiled/FUN_7101a27570__7101a27570.mmd)
- **Clone hash:** `9c01e60fc013597d`

```c

void FUN_7101a27570(long param_1,undefined8 param_2,long ***********param_3,long ************param_4
                   ,long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  ulong *puVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long **********pppppppppplVar14;
  undefined8 uVar15;
  long *********ppppppppplVar16;
  long *plVar17;
  long **********pppppppppplVar18;
  ulong uVar19;
  ulong uVar20;
  long ****pppplVar21;
  byte ****ppppbVar22;
  long lVar23;
  long ********pppppppplVar24;
  char cVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint *puVar32;
  char cVar33;
  undefined8 *puVar34;
  long ***********ppppppppppplVar35;
// ... (1985 more lines)
```

## 43. `FUN_7101a016d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a016d0`  (offset `0x1a016d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a016d0(long param_1)`
- **Size / BBs / Incoming:** 252 bytes / 11 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** subwindow_off;mel_chara_select_lv_n;cp_level_%d
- **Callees:** FUN_71019e9460;FUN_7103778300;FUN_7103778430;FUN_710377a280;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101a016d0__7101a016d0.c)  [cfg](../decompiled/FUN_7101a016d0__7101a016d0.mmd)
- **Clone hash:** `88b149d7ac9c402c`

```c

void FUN_7101a016d0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  
  if (*(int *)(param_1 + 0x13c) == 0) {
    *(uint *)(*(long *)(param_1 + 0x618) + 0x48) = (uint)*(byte *)(param_1 + 0x211);
    FUN_71019e9460(*(long *)(param_1 + 0x618));
    return;
  }
  lVar3 = *(long *)(param_1 + 0x618);
  if (*(char *)(lVar3 + 0x50) != '\0') {
    FUN_7103778300(0x3f800000,*(long *)(lVar3 + 0x10),0x7104421cea);
    (**(code **)(**(long **)(lVar3 + 0x40) + 0x60))(*(long **)(lVar3 + 0x40),0);
    *(undefined1 *)(lVar3 + 0x50) = 1;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x618) + 0x48);
    uVar2 = (ulong)uVar1;
    if (uVar1 != *(byte *)(param_1 + 0x211)) {
      lVar3 = *(long *)(param_1 + 0x5e8);
      *(char *)(param_1 + 0x211) = (char)uVar1;
      *(uint *)(lVar3 + 0x250) = uVar1;
      if (*(int *)(lVar3 + 0x21c) == 1) {
        FUN_710377a280(lVar3 + 0x88,(byte *)"mel_chara_select_lv_n",1);
        FUN_7103778430(lVar3 + 0x68,"cp_level_%d",(ulong)*(uint *)(lVar3 + 0x250),uVar2,in_x4,in_x5,
                       in_x6,in_x7);
      }
      *(undefined1 *)(param_1 + 0x6ba) = 1;
      *(undefined4 *)(param_1 + 0x698) = 0xd;
    }
    if (0x12 < *(uint *)(param_1 + 0x134)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
// ... (5 more lines)
```

## 44. `FUN_71019f67b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019f67b0`  (offset `0x19f67b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019f67b0(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 776 bytes / 43 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** set_txt;color_bg_new;mel_chara_select_key_input;color_bg_noname;mel_tournament_guest_n;color_bg_normal;mel_player_n
- **Callees:** FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_7103796f20;FUN_71037a2270;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71019f67b0__71019f67b0.c)  [cfg](../decompiled/FUN_71019f67b0__71019f67b0.mmd)
- **Clone hash:** `a6589dfda6aec39a`

```c

void FUN_71019f67b0(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  long ****pppplVar8;
  long **pplVar9;
  char *pcVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined **local_48;
  ulong local_40;
  long ***local_38;
  undefined4 local_24;
  
  pppplVar8 = param_3;
  FUN_7103776910(&local_48,(long)param_3,(long ****)"set_txt",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (param_2 == 1) {
    FUN_7103778300(0x3f800000,(long)param_3[1],0x710439cda9);
    if (*(int *)(param_1 + 0x94) == -1) {
      pcVar7 = "mel_player_n";
    }
    else {
      pcVar7 = "mel_tournament_guest_n";
    }
    FUN_710377a280((long)&local_48,(byte *)pcVar7,1);
    goto LAB_71019f6a88;
  }
  if (param_2 != 0) {
    FUN_7103778300(0x3f800000,(long)param_3[1],0x7104400dd2);
    if ((param_2 < 1) || ((int)*(ulong *)(param_1 + 0x30) < param_2)) {
      uVar3 = 0xffffffff;
// ... (95 more lines)
```

## 45. `FUN_7101a47b50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a47b50`  (offset `0x1a47b50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a47b50(long param_1, undefined8 param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined1 * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2376 bytes / 106 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** subwindow_%dp_on;select_off;subwindow_on;mel_chara_select_fp_lv_n;change;decide
- **Callees:** FUN_71019e66d0;FUN_71019e6830;FUN_71019e69d0;FUN_7101a453d0;FUN_7101a48570;FUN_7101a48700;FUN_71024076d0;FUN_710324bb60;FUN_71032631a0;FUN_71032632a0;FUN_71032633f0;FUN_71032df050;FUN_71032e1c20;FUN_71032e26a0;FUN_7103313f20;FUN_7103778300;...
- **Files:** [decomp](../decompiled/FUN_7101a47b50__7101a47b50.c)  [cfg](../decompiled/FUN_7101a47b50__7101a47b50.mmd)
- **Clone hash:** `d83259019e3b7fc2`

```c

void FUN_7101a47b50(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,undefined1 *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  byte ****ppppbVar11;
  long ****pppplVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined4 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long *********ppppppppplVar23;
  long lVar24;
  uint local_e4;
  undefined4 local_c0 [2];
  undefined **local_b8;
  long local_b0;
// ... (326 more lines)
```

## 46. `FUN_7101a36120`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a36120`  (offset `0x1a36120`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a36120(long param_1, undefined8 param_2, long * * * * param_3, long * * * * * * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7900 bytes / 309 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** change;decide;mel_player_n;mel_chara_select_lv_n;cp_level_%d;subwindow_%dp_on;select_off;subwindow_on
- **Callers:** FUN_7101a32080
- **Callees:** FUN_71019e6570;FUN_71019f08a0;FUN_71019f11d0;FUN_7101a35300;FUN_7101a35900;FUN_7101a38000;FUN_7101a38310;FUN_7101a386c0;FUN_7101a38d80;FUN_7101a38fd0;FUN_7101a395f0;FUN_7101a397a0;FUN_7101a39930;FUN_7101a39c20;FUN_7101a42ba0;FUN_7101a48700;...
- **Files:** [decomp](../decompiled/FUN_7101a36120__7101a36120.c)  [cfg](../decompiled/FUN_7101a36120__7101a36120.mmd)
- **Clone hash:** `3fdbd91fc1544c6f`

```c

void FUN_7101a36120(long param_1,undefined8 param_2,long ****param_3,long *********param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  long ****pppplVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long ***ppplVar7;
  long *********ppppppppplVar8;
  undefined1 *puVar9;
  void *__dest;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar10;
  undefined8 extraout_x1_01;
  byte ****ppppbVar11;
  int iVar12;
  long **pplVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long **pplVar17;
  long ***ppplVar18;
  long lVar19;
  undefined4 *puVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long ****pppplVar24;
  uint uVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  ulong uVar29;
  long **pplVar30;
  long ****pppplVar31;
// ... (1008 more lines)
```

## 47. `FUN_7101a1e660`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1e660`  (offset `0x1a1e660`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1e660(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 508 bytes / 7 bb / 9 incoming refs
- **Match values:** chara_select
- **Strings touched:** mel_chara_select_lv_n;cp_level_%d;fp_level_off;change;decide
- **Callers:** FUN_7101837cf0;FUN_710183be60;FUN_7101a12f60;FUN_7101a26200;FUN_7101a30bb0
- **Callees:** FUN_71019fd0b0;FUN_71019fff00;FUN_7101a024c0;FUN_7101a028b0;FUN_7101a029b0;FUN_7101a06920;FUN_7103263030;FUN_71032631a0;FUN_7103778300;FUN_7103778430;FUN_7103778630;FUN_710377a280;FUN_71037a2270
- **Files:** [decomp](../decompiled/FUN_7101a1e660__7101a1e660.c)  [cfg](../decompiled/FUN_7101a1e660__7101a1e660.mmd)
- **Clone hash:** `14260495de445324`

```c

void FUN_7101a1e660(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long *plVar2;
  byte ****ppppbVar3;
  long *********ppppppppplVar4;
  long lVar5;
  uint local_38;
  ushort local_34 [2];
  
  ppppppppplVar4 = (long *********)&DAT_c1ffff0000000000;
  FUN_7101a06920(*(long *)(param_1 + 8),0,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101a028b0(*(long *)(param_1 + 8),3,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar5 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  puVar1 = FUN_71032631a0(lVar5,0x11b1ccb807);
  if (((ulong)puVar1 & 0xff00000000000000) != 0xc100000000000000 ||
      ((ulong)puVar1 & 0xffffffffff) == 0) {
    ppppppppplVar4 = (long *********)FUN_7103263030(lVar5,0xc1ffff0000000000);
  }
  ppppbVar3 = (byte ****)0x0;
  FUN_7101a029b0(*(long *)(param_1 + 8),&DAT_c1ffff0000000000,ppppppppplVar4,0,param_5,param_6,
                 param_7,param_8);
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x5e8);
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x211) = 0;
  *(undefined4 *)(lVar5 + 0x250) = 0;
  if (*(int *)(lVar5 + 0x21c) == 1) {
    ppppbVar3 = (byte ****)0x0;
    FUN_710377a280(lVar5 + 0x88,(byte *)"mel_chara_select_lv_n",1);
    ppppppppplVar4 = (long *********)(ulong)*(uint *)(lVar5 + 0x250);
    FUN_7103778430(lVar5 + 0x68,"cp_level_%d",ppppppppplVar4,ppppbVar3,param_5,param_6,param_7,
                   param_8);
  }
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x5e8);
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x2e0) = 0;
  *(undefined4 *)(lVar5 + 0x254) = 0;
  FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x40),0x7104349d11);
  plVar2 = *(long **)(*(long *)(lVar5 + 0xa0) + 0x10);
// ... (29 more lines)
```

## 48. `FUN_7101a4b380`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a4b380`  (offset `0x1a4b380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a4b380(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9668 bytes / 350 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** set_part_%dp_subwindow;subwindow_%dp;entry_wait;set_txt_player;cmn_%dp;set_btn_%dp_hd;set_5;set_btn_%dp_help;help_00;set_lct_controller_entry;controller_joy_dual;set_txt_btn;btn_anim;set_lct_controller;controller_off;indicator_1;set_part_controller;selector_2;set_part_cp;selector_%d;set_panel_%dp_%02d;window_type_off;select_off;subwindow_%dp_on;subwindow_on
- **Callers:** FUN_710183be60
- **Callees:** FUN_71003a4ca0;FUN_71015547e0;FUN_7101696040;FUN_71017abd00;FUN_71019e5610;FUN_71019e5890;FUN_71019e5b80;FUN_71019e6eb0;FUN_71019e73b0;FUN_71019e8a70;FUN_71019e8c20;FUN_71019e90c0;FUN_71019e9c80;FUN_71019e9dc0;FUN_71019ea0a0;FUN_71019ea8a0;...
- **Files:** [decomp](../decompiled/FUN_7101a4b380__7101a4b380.c)  [cfg](../decompiled/FUN_7101a4b380__7101a4b380.mmd)
- **Clone hash:** `8780db13fbae1933`

```c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101a4b380(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined2 uVar5;
  int iVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  long ****pppplVar14;
  long *plVar15;
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
  long *********ppppppppplVar16;
  long ****pppplVar17;
  char *pcVar18;
// ... (1694 more lines)
```

## 49. `FUN_7101a5a480`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a5a480`  (offset `0x1a5a480`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a5a480(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4340 bytes / 149 bb / 19 incoming refs
- **Match values:** chara_select
- **Strings touched:** set_rep_chara;player_color_fp_entry;amiibo;amiibo_wait;entry_off;entry_on;mel_chara_select_lv_n;cp_level_%d;set_txt_01;set_parts_icon_s;set_rep_sp;set_rep_sp_sd;spirits_set;set_txt_hp_00;set_txt_hp_01;set_txt_dmg_00;set_txt_dmg_01;spirits_unset;spirit_attacker_non
- **Callers:** FUN_710183be60;FUN_7101a4e880;FUN_7101a53690;FUN_7101a53e60;FUN_7101a55b60;FUN_7101a55c80;FUN_7101a55da0;FUN_7101a55ec0;FUN_7101a563c0;FUN_7101a5ba50;FUN_7101a5f920;FUN_7101a5fdf0
- **Callees:** FUN_71016b6a10;FUN_7101a58f40;FUN_710259c150;FUN_7103239160;FUN_710323f330;FUN_710323faf0;FUN_71032631a0;FUN_7103264990;FUN_7103264ab0;FUN_710326ad60;FUN_7103280ec0;FUN_71032a9470;FUN_71032abaf0;FUN_71033112b0;FUN_71033114a0;FUN_71033115f0;...
- **Files:** [decomp](../decompiled/FUN_7101a5a480__7101a5a480.c)  [cfg](../decompiled/FUN_7101a5a480__7101a5a480.mmd)
- **Clone hash:** `3a4328a1cd3a52dd`

```c

void FUN_7101a5a480(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long *********ppppppppplVar11;
  ulong uVar12;
  ushort *puVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  char cVar17;
  long *********ppppppppplVar18;
  long ********pppppppplVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  byte ***local_108;
  float local_100;
  undefined **local_f8;
  undefined8 *local_f0;
// ... (692 more lines)
```

## 50. `FUN_7101a3c230`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a3c230`  (offset `0x1a3c230`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a3c230(undefined1[16] param_1, float param_2, long * * param_3, float param_4, long * param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, ulong param_10, undefined8 param_11, undefined8 param_12)`
- **Size / BBs / Incoming:** 16508 bytes / 942 bb / 1 incoming refs
- **Match values:** chara_select
- **Strings touched:** set_txt_btn;indicator_%d;hand_catch;chara/chara_4/chara_4_;ready_in;ready_out
- **Callers:** FUN_7101a41cc0
- **Callees:** FUN_71003a4ca0;FUN_710175dfc0;FUN_71019e6420;FUN_71019e66d0;FUN_71019e69d0;FUN_71019e7c00;FUN_71019e8ff0;FUN_71019eace0;FUN_71019f1410;FUN_71019f9b50;FUN_7101a0f290;FUN_7101a35230;FUN_7101a35900;FUN_7101a385b0;FUN_7101a386c0;FUN_7101a38fd0;...
- **Files:** [decomp](../decompiled/FUN_7101a3c230__7101a3c230.c)  [cfg](../decompiled/FUN_7101a3c230__7101a3c230.mmd)
- **Clone hash:** `0b6346c1cbcfac5f`

```c

/* WARNING: Removing unreachable block (ram,0x007101a3fdb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a3c230(undefined1 param_1 [16],float param_2,long **param_3,float param_4,long *param_5
                   ,undefined8 param_6,long ****param_7,byte ****param_8,long ****param_9,
                   ulong param_10,undefined8 param_11,undefined8 param_12)

{
  float *pfVar1;
  uint *puVar2;
  byte ****ppppbVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  long ***ppplVar16;
  ulong uVar17;
  long *plVar18;
  long **pplVar19;
  long *plVar20;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
// ... (2991 more lines)
```

