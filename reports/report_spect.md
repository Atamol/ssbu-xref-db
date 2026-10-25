# spect (funcs=7, hits=12)

Top 50 functions by hit count

## 1. `FUN_7101d124b0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d124b0`  (offset `0x1d124b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d124b0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2688 bytes / 134 bb / 1 incoming refs
- **Match values:** spect
- **Strings touched:** set_lct_effect;anime_loop;effect_in;set_panel_%02d;result_rank_%d;result_rank_off;select_item;panel;set_txt_result_title;mnu_spectate_result_normal;panel_result_lose;panel_result_win;mnu_spectate_result_right_01;mnu_spectate_result_right_03;winning_in;mnu_spectate_result_right_02
- **Callees:** FUN_71000001c0;FUN_710062dc20;FUN_7101764000;FUN_7101d176e0;FUN_7101d1b3f0;FUN_7101d20930;FUN_7101d237d0;FUN_7101d239c0;FUN_7101d23c80;FUN_7101d24df0;FUN_7101d25d90;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778760;FUN_710377a120;...
- **Files:** [decomp](../decompiled/FUN_7101d124b0__7101d124b0.c)  [cfg](../decompiled/FUN_7101d124b0__7101d124b0.mmd)
- **Clone hash:** `ce11b3dc96a84cd6`

```c

void FUN_7101d124b0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar7;
  long *plVar8;
  long *plVar9;
  code *pcVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  long ****pppplVar19;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  ulong local_d0;
  long ***local_c8;
  ulong local_c0 [8];
  undefined **local_80;
  ulong local_78;
  
  if (*(int *)(param_1 + 0xfc) != 0) goto LAB_7101d12dc0;
  uVar13 = FUN_7101d25d90(*(long *)(DAT_7105325d88 + 8));
  if ((uVar13 & 0xff) != 0) {
    iVar2 = FUN_7101d239c0((int)(uVar13 >> 0x20));
    plVar15 = *(long **)(*DAT_7105314510 + 0x68);
// ... (387 more lines)
```

## 2. `FUN_7101d20930`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d20930`  (offset `0x1d20930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d20930(long param_1, byte param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8516 bytes / 480 bb / 2 incoming refs
- **Match values:** spect
- **Strings touched:** set_panel_%02d;result_rank_off;effect_in;boost_size;panel_%d;panel_team;set_panel_00;panel_team_l;set_panel_01;panel_team_r;set_panel_02;set_panel_03;cmn_%dp;set_txt_player;player_color_%dp;set_txt_name;mnu_spectate_nam;set_txt_pw;chara_size;set_rep_mark_m;set_rep_chara;set_rep_chara_sd;set_txt_chara_name;nam_chr1_%02d_%s;set_txt_win;mode_empty_03;arrow_color_%d;set_txt_arrow;mnu_spectate_vector_%d
- **Callers:** FUN_7101d124b0;FUN_7101d17b30
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_71017005f0;FUN_7101d11b60;FUN_7101d1b3f0;FUN_7103238a70;FUN_7103238d60;FUN_710323c4e0;FUN_710323f330;FUN_7103262310;FUN_71032631a0;FUN_7103263540;FUN_7103263f80;FUN_7103264590;FUN_71032648e0;FUN_710353da30;...
- **Files:** [decomp](../decompiled/FUN_7101d20930__7101d20930.c)  [cfg](../decompiled/FUN_7101d20930__7101d20930.mmd)
- **Clone hash:** `78f5e73c0333b1fd`

```c

void FUN_7101d20930(long param_1,byte param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  byte bVar3;
  ulong uVar4;
  long ********pppppppplVar5;
  bool bVar6;
  ulong uVar7;
  long *******ppppppplVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar11;
  long ****pppplVar12;
  long *********ppppppppplVar13;
  ulong uVar14;
  byte ****ppppbVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  byte *pbVar22;
  int iVar23;
  ulong uVar24;
  byte *pbVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  long *********ppppppppplVar29;
// ... (1493 more lines)
```

## 3. `FUN_7101d17b30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d17b30`  (offset `0x1d17b30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d17b30(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3600 bytes / 186 bb / 1 incoming refs
- **Match values:** spect
- **Strings touched:** nam_stg1_%s;set_stage;set_icon;set_txt_rule;mnu_spectate_rule;set_flag_%02d;set_medal_%02d;cmn_%dp;team_color_%d;player_color_%dp;set_txt_number;flag_%d
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_7101d20930;FUN_7103238c50;FUN_7103238e70;FUN_710323ac20;FUN_710323c4e0;FUN_710323f4a0;FUN_710323f760;FUN_7103240bd0;FUN_71032821b0;FUN_71032b1a60;FUN_71032b30d0;FUN_7103776640;FUN_7103776910;FUN_7103778300;...
- **Files:** [decomp](../decompiled/FUN_7101d17b30__7101d17b30.c)  [cfg](../decompiled/FUN_7101d17b30__7101d17b30.mmd)
- **Clone hash:** `c9240ce450bfad84`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101d17b30(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte ***pppbVar5;
  long *********ppppppppplVar6;
  long lVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long ****pppplVar13;
  undefined8 uVar14;
  long ****pppplVar15;
  byte ****ppppbVar16;
  uint uVar17;
  long *plVar18;
  byte *pbVar19;
  long *plVar20;
  uint uVar21;
  uint uVar22;
  char cVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  char *pcVar27;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined2 local_158;
  undefined8 local_156;
  long ********local_128;
// ... (661 more lines)
```

## 4. `FUN_71018bd5f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018bd5f0`  (offset `0x18bd5f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018bd5f0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4384 bytes / 157 bb / 1 incoming refs
- **Match values:** spect
- **Strings touched:** selector_01;set_btn_keyhelp;set_parts_gold_count;set_parts_gold;set_txt_num;mnu_spectate_point_n;anim_count;anim_stop;map_anim
- **Callees:** FUN_710172a900;FUN_71018bd2a0;FUN_7101989a30;FUN_7101d17560;FUN_7101d1fbb0;FUN_710323b9e0;FUN_710323beb0;FUN_710323cb80;FUN_71032cad20;FUN_71032caea0;FUN_71032cbf30;FUN_710337d5b0;FUN_710337d5c0;FUN_7103399a70;FUN_7103770b30;FUN_71037717d0;...
- **Files:** [decomp](../decompiled/FUN_71018bd5f0__71018bd5f0.c)  [cfg](../decompiled/FUN_71018bd5f0__71018bd5f0.mmd)
- **Clone hash:** `5bf479bcaf74e0c1`

```c

void FUN_71018bd5f0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined ***pppuVar16;
  long *plVar17;
  ulong uVar18;
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
  long *********ppppppppplVar19;
  long *********ppppppppplVar20;
  long *********ppppppppplVar21;
  long *********ppppppppplVar22;
  long *********ppppppppplVar23;
// ... (884 more lines)
```

## 5. `FUN_7101481900`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101481900`  (offset `0x1481900`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101481900(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1484 bytes / 73 bb / 1 incoming refs
- **Match values:** spect
- **Strings touched:** mnu_replay_play_title_spectate;set_txt_header_titlename;set_rep_pic_mov
- **Callees:** FUN_71000001c0;FUN_7101482020;FUN_710149e480;FUN_710149e570;FUN_71016bc6e0;FUN_7101764000;FUN_7101b8d640;FUN_71032cad20;FUN_71032caea0;FUN_710334c7d0;FUN_7103351810;FUN_7103776910;FUN_71037a2270;FUN_71037a4450;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101481900__7101481900.c)  [cfg](../decompiled/FUN_7101481900__7101481900.mmd)
- **Clone hash:** `829dce0e010f1cd7`

```c

void FUN_7101481900(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  undefined8 extraout_x1;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  ushort uVar18;
  int iVar19;
  ushort *puVar20;
  long *plVar21;
  ushort *puVar22;
  uint local_168;
  ushort local_164 [34];
  uint local_120 [2];
  ushort auStack_118 [44];
  long ***local_c0;
  long *local_b8;
  undefined2 local_b0;
  undefined4 local_ac;
  ushort local_a8 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined5 uStack_58;
// ... (229 more lines)
```

## 6. `FUN_7101d230f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d230f0`  (offset `0x1d230f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d230f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1172 bytes / 55 bb / 1 incoming refs
- **Match values:** spect
- **Strings touched:** set_txt_result_title;mnu_spectate_result_right_04;panel_result_bonus;set_txt_result_point;set_txt_result_point_hl;panel_result_lose;panel_result_win
- **Callees:** FUN_7101d20830;FUN_71024076d0;FUN_7103313f20;FUN_7103399f50;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710377a120;FUN_710377a310;FUN_71037964b0;FUN_710392eb40;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::nn::os::ConvertToTimeSpan;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101d230f0__7101d230f0.c)  [cfg](../decompiled/FUN_7101d230f0__7101d230f0.mmd)
- **Clone hash:** `3badff94d30be18b`

```c

void FUN_7101d230f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  float fVar13;
  undefined4 local_d0 [2];
  undefined **local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90 [2];
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  ulong local_48;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    plVar7 = (long *)(param_1 + 200);
    FUN_7103776910(&local_50,*plVar7,(long ****)"set_txt_result_title",param_3,param_4,param_5,
// ... (169 more lines)
```

## 7. `FUN_7101ce2ec0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ce2ec0`  (offset `0x1ce2ec0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ce2ec0(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, byte * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8832 bytes / 379 bb / 2 incoming refs
- **Match values:** spect
- **Strings touched:** set_txt_header;mode_%02d;set_parts_det_panel;con_off_mode_%02d;set_parts_btn_00;set_parts_btn_01;mode_01;mode_00;set_parts_btn_like;set_txt_subtitle;mnu_share_data_title;set_txt_time;set_txt_mov_ver;mnu_share_detail_movie_kind_edited;set_txt_world_pw_num;mnu_share_detail_spectate_highest_world_pw_n;mnu_share_detail_movie_kind_replay;set_rep_pic_stk;gray_off;mf_clr_in_%02d;mf_typ_icn_in_00;mf_typ_icn_in_02;stg4p_icn_on;stg4p_icn_off;mstg_l;mstg_s;mstg_m;set_txt_stage_00;mnu_share_detail_stage_music;bgm_title_%s;set_parts_text_scroll_00;set_txt_mask;...
- **Callers:** FUN_7101ce1a40
- **Callees:** FUN_71003a4ca0;FUN_71004f5770;FUN_710062dc20;FUN_710143c4d0;FUN_71016bc6e0;FUN_7101cdfdf0;FUN_7101ce1050;FUN_7101ce5290;FUN_7101ce5ab0;FUN_710323f330;FUN_71032570e0;FUN_7103262310;FUN_71032631a0;FUN_71032632a0;FUN_7103264590;FUN_71032648e0;...
- **Files:** [decomp](../decompiled/FUN_7101ce2ec0__7101ce2ec0.c)  [cfg](../decompiled/FUN_7101ce2ec0__7101ce2ec0.mmd)
- **Clone hash:** `1e0769d17abe3306`

```c

void FUN_7101ce2ec0(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   byte ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  uint6 uVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  bool bVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  char *pcVar24;
  long ****pppplVar25;
  undefined ***pppuVar26;
  long *********ppppppppplVar27;
  byte ****ppppbVar28;
  byte ****ppppbVar29;
  long *plVar30;
// ... (1796 more lines)
```

