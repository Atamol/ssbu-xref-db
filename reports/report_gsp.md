# gsp (funcs=5, hits=34)

Top 50 functions by hit count

## 1. `FUN_7101b52a70`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b52a70`  (offset `0x1b52a70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b52a70(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11628 bytes / 591 bb / 1 incoming refs
- **Match values:** gsp
- **Strings touched:** distance_in;distance_out;ff_off;ff_on;ff_on_stop;gsp_onoff;gsp_icon_onoff;player_onoff;player_in;player_out;player_loop;result_off;result_in;gsp_type;line_anim_1p;line_anim_2p;line_anim_3p;line_anim_4p;set_parts_gsp;set_txt_num;set_txt_distance_00;set_txt_distance_01;set_rep_chara_2;set_gsp;set_txt_gsp;set_txt_gsp_count;set_gsp_icon;bg_icon;set_parts_reticle_%02d;set_parts_line_num_%02d;set_keyhelp;set_txt_icon;...
- **Callers:** FUN_71013a83a0
- **Callees:** FUN_7101414b10;FUN_7101b525b0;FUN_71032cbf30;FUN_7103773200;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_710377a120;FUN_710377b140;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_7101b52a70__7101b52a70.c)  [cfg](../decompiled/FUN_7101b52a70__7101b52a70.mmd)
- **Clone hash:** `ee903cec363ed3f8`

```c

void FUN_7101b52a70(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  long ***local_70;
  ulong local_68;
  
  *param_1 = &PTR_FUN_71050ab128;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
// ... (2311 more lines)
```

## 2. `FUN_7101470dd0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101470dd0`  (offset `0x1470dd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101470dd0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 7312 bytes / 354 bb / 1 incoming refs
- **Match values:** gsp
- **Strings touched:** highscore;highscore_type;gsp_type;countstop_score;countup_score;countfinish_score;countstop_gsp;countup_gsp;countfinish_gsp;anim_key_help_in;set_txt_gsp;set_txt_score_00;set_txt_score_01;set_parts_playericon_%02d;set_rep_icon;set_fxui_title_flash;set_fxui_iconflash_00;set_fxui_high_in;set_fxui_score
- **Callees:** FUN_71000001c0;FUN_710175e350;FUN_7101b5e670;FUN_71032cad20;FUN_71032caea0;FUN_71032cbf30;FUN_710330a8f0;FUN_7103382c30;FUN_7103563a20;FUN_7103773200;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_710377aa20;FUN_710377aae0;FUN_710377abf0;...
- **Files:** [decomp](../decompiled/FUN_7101470dd0__7101470dd0.c)  [cfg](../decompiled/FUN_7101470dd0__7101470dd0.mmd)
- **Clone hash:** `a7b82c16e871295b`

```c

void FUN_7101470dd0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined **ppuVar12;
  long *********ppppppppplVar13;
  long ****pppplVar14;
  byte ****ppppbVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long *plVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined1 auVar28 [16];
  undefined **local_80;
// ... (1356 more lines)
```

## 3. `FUN_7101d5aa30`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d5aa30`  (offset `0x1d5aa30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d5aa30(int * param_1, uint param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2900 bytes / 150 bb / 39 incoming refs
- **Match values:** gsp
- **Strings touched:** ptn_01_back;ptn_01_back_for_duckhunt;ptn_%02d;ptn_%02d_for_duckhunt;ptn_01_back_for_banjokazooie;panel_move_00;ptn_%02d_for_banjokazooie;ready_eff;panel_move_01;set_parts_tag;set_fxui_card;set_parts_lct_competitio;set_txt_scr_%02d;set_txt_scr_02;gsp_type;type_%dp;gsp_up;gsp_down;scr_up;color_up;mode_empty_03;gsp_arrow;scr_down;color_down;select_item;color_none;set_fxui_rankflash
- **Callers:** FUN_7101d59540;FUN_7101d5b6c0;FUN_7101d5d640;FUN_7101d61c00
- **Callees:** FUN_71000001c0;FUN_710062dc20;FUN_7101465a30;FUN_7101764000;FUN_71017a6d60;FUN_71017d1480;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_7103778630;FUN_71037a2270;FUN_71037ad940;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;...
- **Files:** [decomp](../decompiled/FUN_7101d5aa30__7101d5aa30.c)  [cfg](../decompiled/FUN_7101d5aa30__7101d5aa30.mmd)
- **Clone hash:** `0ef069b453be3480`

```c

void FUN_7101d5aa30(int *param_1,uint param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int *piVar2;
  undefined ***pppuVar3;
  int iVar4;
  char cVar5;
  long ***ppplVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  undefined2 *puVar14;
  ulong uVar15;
  undefined **ppuVar16;
  int iVar17;
  long **pplVar18;
  char *pcVar19;
  byte *pbVar20;
  char *pcVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  long *plVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined **local_168;
  ulong local_160;
  undefined **local_158;
  long *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
// ... (507 more lines)
```

## 4. `FUN_7101b7a8f0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b7a8f0`  (offset `0x1b7a8f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b7a8f0(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 6696 bytes / 339 bb / 1 incoming refs
- **Match values:** gsp
- **Strings touched:** player;set_rep_time_pil_s;info_melee_timer_pil_s;time_onoff;time_num_00;time_num_01;time_num_02;time_num_03;time_num_04;time_num_05;set_parts_enemy_01;set_txt_enemy;enemy_1_off;enemy_1_on;mode_empty_03;set_txt_bgm;bgm_in;bgm_out;set_txt_title_special;title_special_in;title_special_out;set_parts_gsp;set_txt_gsp_count;gsp_onoff;gsp_type;set_rep_stock_%02d
- **Callers:** FUN_710139b550
- **Callees:** FUN_71000001c0;FUN_7101414b10;FUN_7101b635a0;FUN_7101b69480;FUN_7103240d30;FUN_71032cbf30;FUN_710330a8f0;FUN_7103563a20;FUN_7103773200;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778b80;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset;...
- **Files:** [decomp](../decompiled/FUN_7101b7a8f0__7101b7a8f0.c)  [cfg](../decompiled/FUN_7101b7a8f0__7101b7a8f0.mmd)
- **Clone hash:** `7523e6a19a6dcd19`

```c

void FUN_7101b7a8f0(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  long ****pppplVar10;
  undefined **ppuVar11;
  long *********ppppppppplVar12;
  byte ****ppppbVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined **local_80;
  ulong local_78;
  long ***local_70;
  ulong local_68;
  
  *param_1 = &PTR_FUN_71050ab468;
  param_1[1] = 0;
// ... (1332 more lines)
```

## 5. `FUN_7101479370`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101479370`  (offset `0x1479370`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101479370(long * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 10300 bytes / 494 bb / 1 incoming refs
- **Match values:** gsp
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

