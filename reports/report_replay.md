# replay (funcs=74, hits=313)

Top 50 functions by hit count

## 1. `FUN_7101ab6100`  (hits=41)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ab6100`  (offset `0x1ab6100`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ab6100(short * param_1)`
- **Size / BBs / Incoming:** 1044 bytes / 3 bb / 22 incoming refs
- **Match values:** replay
- **Strings touched:** mnu_replay_data_title_default
- **Callers:** FUN_7101ab4670;FUN_7101ab47c0;FUN_7101ab4a20;FUN_7101ab51f0;FUN_7101ab58b0;FUN_7101ab5d60;FUN_7101ab5f30
- **Callees:** FUN_71037a4450
- **Files:** [decomp](../decompiled/FUN_7101ab6100__7101ab6100.c)  [cfg](../decompiled/FUN_7101ab6100__7101ab6100.mmd)
- **Clone hash:** `9e869f2dea651087`

```c

void FUN_7101ab6100(short *param_1)

{
  short *psVar1;
  undefined *puVar2;
  
  if (*param_1 != 0) {
    return;
  }
  psVar1 = (short *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  *param_1 = *psVar1;
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[1] = *(short *)(puVar2 + 2);
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[2] = *(short *)(puVar2 + 4);
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[3] = *(short *)(puVar2 + 6);
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[4] = *(short *)(puVar2 + 8);
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[5] = *(short *)(puVar2 + 10);
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[6] = *(short *)(puVar2 + 0xc);
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[7] = *(short *)(puVar2 + 0xe);
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[8] = *(short *)(puVar2 + 0x10);
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[9] = *(short *)(puVar2 + 0x12);
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[10] = *(short *)(puVar2 + 0x14);
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[0xb] = *(short *)(puVar2 + 0x16);
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[0xc] = *(short *)(puVar2 + 0x18);
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[0xd] = *(short *)(puVar2 + 0x1a);
  puVar2 = FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  param_1[0xe] = *(short *)(puVar2 + 0x1c);
// ... (55 more lines)
```

## 2. `FUN_71018b7a20`  (hits=32)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018b7a20`  (offset `0x18b7a20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018b7a20(undefined1[16] param_1, undefined8 param_2, float param_3, long param_4, long param_5)`
- **Size / BBs / Incoming:** 7924 bytes / 379 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** anim_loop;mode_plate;mode_corner;set_replaybtn_%d_%02d;selector
- **Callees:** std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7100813660;FUN_7101989a30;FUN_71019f0670;FUN_7101a7ed70;FUN_7101cf7160;FUN_7101cf77b0;FUN_7101cf8a30;FUN_7101cfbe40;FUN_7101cfe670;FUN_7101cfff90;FUN_7101d01f90;FUN_7101d01fa0;FUN_7101d03110;FUN_7101d09d10;FUN_7101d0f900;...
- **Files:** [decomp](../decompiled/FUN_71018b7a20__71018b7a20.c)  [cfg](../decompiled/FUN_71018b7a20__71018b7a20.mmd)
- **Clone hash:** `3aa9ca6a3cf19fec`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_71018b7a20(undefined1 param_1 [16],undefined8 param_2,float param_3,long param_4,
                   long param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
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
  long *********ppppppppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  char *pcVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  undefined8 in_x5;
  undefined8 in_x6;
// ... (1596 more lines)
```

## 3. `FUN_7101ac4ba0`  (hits=26)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac4ba0`  (offset `0x1ac4ba0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac4ba0(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6728 bytes / 295 bb / 4 incoming refs
- **Match values:** replay
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

## 4. `FUN_7101ac65f0`  (hits=22)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac65f0`  (offset `0x1ac65f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac65f0(long param_1, uint * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2524 bytes / 133 bb / 3 incoming refs
- **Match values:** replay
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

## 5. `FUN_7101ab9340`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ab9340`  (offset `0x1ab9340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ab9340(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * * * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5072 bytes / 230 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** set_rep_bgshot;mnu_replay_detail_melee_normal;mnu_replay_refinement_mode_homerun;mnu_replay_detail_online_tournament;mnu_replay_detail_anyone_vip;mnu_replay_detail_room;mnu_replay_detail_anyone;mnu_replay_detail_melee_tournament;mnu_replay_detail_melee_team;mnu_replay_detail_melee_suddendeath;mnu_replay_detail_melee_various;mstg_on;set_rep_pic_stage;mstg_off;turn_on;turn_off;turn_loop;set_rep_stockicon_%02d;set_rep_stockicon_%02d_;stockicon_5vs5;stockicon%02d;stockicon_3vs3;set_parts_text_scroll;set_txt_mask;mnu_replay_data_title_default;set_txt_main;set_txt_modename;set_txt_modename_00;set_txt_time;mnu_replay_detail_time_movie;mstg_icn_on
- **Callees:** FUN_71003a4ca0;FUN_7101aba710;FUN_7101ad1f10;FUN_7101ad2060;FUN_7101af0cc0;FUN_710323f330;FUN_71032631a0;FUN_71032632a0;FUN_71032648e0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_7103778760;FUN_7103778b80;...
- **Files:** [decomp](../decompiled/FUN_7101ab9340__7101ab9340.c)  [cfg](../decompiled/FUN_7101ab9340__7101ab9340.mmd)
- **Clone hash:** `6920c7a990859cc7`

```c

void FUN_7101ab9340(long param_1,int param_2,long *********param_3,byte ****param_4,
                   long *********param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  ushort *puVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  byte ****ppppbVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  char *pcVar17;
  long *********ppppppppplVar18;
  ulong uVar19;
  long lVar20;
  undefined4 *puVar21;
  long ********pppppppplVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  undefined **ppuVar27;
  ulong uVar28;
  long *plVar29;
  undefined **__dest;
  long lVar30;
  long *********ppppppppplVar31;
  uint *puVar32;
  undefined1 *puVar33;
  long *********ppppppppplVar34;
// ... (892 more lines)
```

## 6. `FUN_7101d0a1c0`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d0a1c0`  (offset `0x1d0a1c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d0a1c0(long param_1, ulong param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3188 bytes / 135 bb / 3 incoming refs
- **Match values:** replay
- **Strings touched:** replay_icon_anim_%d;icon_reset_%d;mode_replay_on;replay_on;replay_selected;replay_winner_%d
- **Callers:** FUN_71018b5d60;FUN_71018b68a0;FUN_71018b6ed0
- **Callees:** FUN_71000001c0;FUN_7101d09580;FUN_7101d0ae40;FUN_71023976c0;FUN_7102397840;FUN_710239d150;FUN_7103778300;FUN_7103778430;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101d0a1c0__7101d0a1c0.c)  [cfg](../decompiled/FUN_7101d0a1c0__7101d0a1c0.mmd)
- **Clone hash:** `ce03f674b4b454b5`

```c

void FUN_7101d0a1c0(long param_1,ulong param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  long *plVar9;
  long *******ppppppplVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long ******pppppplVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long *******ppppppplVar22;
  long *unaff_x21;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  long ****pppplVar27;
  ulong uVar28;
  long *plVar29;
  ulong uVar30;
  long ******local_b8;
  long ******local_b0;
  long local_a8;
  long local_a0;
// ... (564 more lines)
```

## 7. `FUN_7101ac8680`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac8680`  (offset `0x1ac8680`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac8680(long * param_1, undefined8 * param_2, long * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8316 bytes / 472 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** set_parts_btn_decide;selector_02;set_parts_btn_playbtn;selector_00;set_parts_btn_00;set_parts_btn_01;set_parts_btn_02;set_parts_btn_03;selector_01;set_parts_detail_btn;selector_03;set_parts_arrow_l;set_parts_arrow_r;selector_04;selector_05;set_parts_btn_08;set_parts_btn_09;set_parts_btn_10;set_parts_btn_11;set_parts_sub_btns_00;set_parts_sub_btns_01;set_parts_sub_btns_02;set_parts_sub_btns_03;set_txt_settingtitle;mnu_replay_detail_rec_info;mnu_replay_detail_rec_info_on;mnu_replay_detail_rec_info_off;mnu_replay_detail_rec_music;mnu_replay_detail_rec_yes;mnu_replay_detail_rec_no;mnu_replay_detail_rec_se;mnu_replay_detail_rec_quality;...
- **Callers:** FUN_7101abb980
- **Callees:** FUN_7101989a30;FUN_7101989b70;FUN_7101a7ed70;FUN_7101aca700;FUN_7101aca940;FUN_7101aca950;FUN_7101acab10;FUN_7101acab20;FUN_7101acad50;FUN_7101acad60;FUN_7101acae80;FUN_7101acae90;FUN_7101acb070;FUN_7101acb080;FUN_7101ad0e40;FUN_7101ccce30;...
- **Files:** [decomp](../decompiled/FUN_7101ac8680__7101ac8680.c)  [cfg](../decompiled/FUN_7101ac8680__7101ac8680.mmd)
- **Clone hash:** `9030781b1bf42cd0`

```c

void FUN_7101ac8680(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long *********ppppppppplVar10;
  undefined8 uVar11;
  char *pcVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  char *pcVar15;
  long ****pppplVar16;
  uint uVar17;
  byte **ppbVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  undefined8 *puVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  undefined **local_5a0;
  ulong local_598;
// ... (1472 more lines)
```

## 8. `FUN_7101ce5ab0`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ce5ab0`  (offset `0x1ce5ab0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ce5ab0(long param_1, undefined8 * param_2, long param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5476 bytes / 241 bb / 2 incoming refs
- **Match values:** replay
- **Strings touched:** set_parts_det_panel;set_txt_version;set_parts_tag_disp;tag_on;btl_field_on;set_txt_tag;mnu_replay_detail_battlefield;tag_off;endpoint_on;mnu_replay_detail_end;set_txt_header_rule;set_txt_rule;mnu_replay_detail_rule_time;mel_rule_select_time;mnu_replay_detail_rule_stock;mode_empty_03;mel_rule_select_time_inifinity;mnu_replay_detail_rule_stamina;mel_rule_select_time_inifinity_stock;mnu_replay_detail_homerun_single;mnu_replay_detail_homerun_coop;rule_txt_off;mel_rule_select_time_stock;rule_txt_on;set_txt_mode_00;set_txt_mode_01;mnu_share_detail_data_kind_homerun;mnu_share_data_kind_team;mnu_share_detail_data_kind_sp_suddendeath;mnu_share_detail_data_kind_various;set_txt_time;set_txt_bar_title_%d%d;...
- **Callers:** FUN_7101ce2ec0
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_7101ce7020;FUN_7103238a70;FUN_710323c4e0;FUN_710323f330;FUN_7103262310;FUN_71032631a0;FUN_71032632a0;FUN_7103263540;FUN_71032648e0;FUN_710326ad60;FUN_7103280ec0;FUN_71032b1a60;FUN_71032b24e0;FUN_7103776390;...
- **Files:** [decomp](../decompiled/FUN_7101ce5ab0__7101ce5ab0.c)  [cfg](../decompiled/FUN_7101ce5ab0__7101ce5ab0.mmd)
- **Clone hash:** `aa7b16582585de65`

```c

void FUN_7101ce5ab0(long param_1,undefined8 *param_2,long param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  byte ****ppppbVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  int iVar17;
  long ****pppplVar18;
  long *********ppppppppplVar19;
  byte ****ppppbVar20;
  long ****pppplVar21;
  uint uVar22;
  int *piVar23;
  long ***ppplVar24;
  byte *pbVar25;
  ulong uVar26;
  char cVar27;
  uint uVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  long *plVar31;
  undefined1 *puVar32;
  undefined **__dest;
  long lVar33;
  char *pcVar34;
// ... (958 more lines)
```

## 9. `FUN_7101ac1590`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac1590`  (offset `0x1ac1590`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac1590(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, long * * param_7, byte * param_8)`
- **Size / BBs / Incoming:** 4616 bytes / 211 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** set_parts_arrow_l;set_parts_arrow_r;mnu_replay_detail_help_rec_info_on;mnu_replay_detail_help_rec_se_yes;mnu_replay_detail_help_rec_quality_high;mnu_replay_detail_help_rec_music_yes;mnu_replay_detail_help_rec_info_off;mnu_replay_detail_help_rec_se_no;mnu_replay_detail_help_rec_quality_normal;mnu_replay_detail_help_rec_music_no
- **Callees:** FUN_71004f5770;FUN_7101ac4180;FUN_71024076d0;FUN_7103313f20;FUN_71036eb020;FUN_7103771a80;FUN_7103771be0;FUN_7103776910;FUN_710377a120;FUN_7103796f20;FUN_71037a2270;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset;<EXTERNAL>::abort;<EXTERNAL>::nn::err::ShowError;...
- **Files:** [decomp](../decompiled/FUN_7101ac1590__7101ac1590.c)  [cfg](../decompiled/FUN_7101ac1590__7101ac1590.mmd)
- **Clone hash:** `7fce509a8b2313d1`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101ac1590(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   byte ****param_6,long **param_7,byte *param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  char *pcVar21;
  long ****pppplVar22;
  int *piVar23;
  undefined *puVar24;
  long lVar25;
  undefined4 local_330 [2];
  undefined **local_328;
  long local_320;
  undefined8 local_318;
  undefined1 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
// ... (786 more lines)
```

## 10. `FUN_7101ac6fd0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac6fd0`  (offset `0x1ac6fd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac6fd0(long param_1, long param_2, long param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 528 bytes / 18 bb / 2 incoming refs
- **Match values:** replay
- **Strings touched:** mnu_replay_detail_rule_time;mel_rule_select_time;mnu_replay_detail_rule_stock;mode_empty_03;mel_rule_select_time_inifinity;mnu_replay_detail_rule_stamina;mel_rule_select_time_inifinity_stock;mnu_replay_detail_homerun_single;mnu_replay_detail_homerun_coop;mel_rule_select_time_stock
- **Callers:** FUN_7101ac4ba0;FUN_7101ac65f0
- **Callees:** FUN_710377a120;FUN_710377a280
- **Files:** [decomp](../decompiled/FUN_7101ac6fd0__7101ac6fd0.c)  [cfg](../decompiled/FUN_7101ac6fd0__7101ac6fd0.mmd)
- **Clone hash:** `7d0f10f459a90aef`

```c

void FUN_7101ac6fd0(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  
  if (*(char *)(param_3 + 100) == '\x12') {
    cVar1 = *(char *)(param_3 + 0x88) == '\x01';
    cVar4 = '\x02';
    if (!(bool)cVar1) {
      cVar4 = '\x01';
    }
    if (*(char *)(param_3 + 0xd8) == '\x01') {
      cVar1 = cVar4;
    }
    if (*(char *)(param_3 + 0x128) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x178) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x1c8) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x218) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x268) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x2b8) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    bVar3 = 0x10;
    if (cVar1 != '\x02') {
      bVar3 = 8;
// ... (47 more lines)
```

## 11. `FUN_7101acdf00`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101acdf00`  (offset `0x1acdf00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101acdf00(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 728 bytes / 44 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** txt_move_l;txt_move_r;mnu_replay_refinement_all
- **Callers:** FUN_7101acc4e0
- **Callees:** FUN_71024076d0;FUN_7103313f20;FUN_7103778300;FUN_7103778ab0;FUN_710377a120;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101acdf00__7101acdf00.c)  [cfg](../decompiled/FUN_7101acdf00__7101acdf00.mmd)
- **Clone hash:** `57be5e04b429f75c`

```c

void FUN_7101acdf00(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  char *pcVar6;
  long ****pppplVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  undefined4 local_80 [2];
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  iVar8 = 1;
  if (param_2 != 1) {
    if (param_2 != 0) {
      return;
    }
    iVar8 = -1;
  }
  if (*(int *)(param_3 + 6) == 3) {
    uVar11 = *(uint *)(*(long *)(param_1 + 0x110) + 0x18);
    uVar10 = uVar11 + iVar8;
    if ((int)uVar10 < 0) {
// ... (133 more lines)
```

## 12. `FUN_7101acd260`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101acd260`  (offset `0x1acd260`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101acd260(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1584 bytes / 87 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** in_r_01;header_txt_in;mnu_replay_refinement_spirits;set_parts_btn_09;set_selected_icon;set_parts_btn_10;set_parts_btn_11;out_r_01;in_l_00;header_txt_out;mnu_replay_refinement_spirits_help_all;mnu_replay_refinement_spirits_help_on;mnu_replay_refinement_spirits_help_off
- **Callees:** FUN_710323f760;FUN_71032821b0;FUN_7103771a80;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_710377a120;FUN_71037964b0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::abort;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101acd260__7101acd260.c)  [cfg](../decompiled/FUN_7101acd260__7101acd260.mmd)
- **Clone hash:** `e7649b7de1631524`

```c

void FUN_7101acd260(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined **local_88;
  undefined8 *local_80;
  undefined **local_78;
  long *local_70;
  undefined **local_68;
  long *local_60;
  undefined **local_58;
  long *local_50;
  long ********local_48;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0xfc) != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x128) + 8);
    if (((lVar8 != 0) &&
        (plVar9 = (long *)FUN_71037964b0(lVar8,0x710426fafb), plVar9 != (long *)0x0)) &&
       (uVar10 = (**(code **)(*plVar9 + 0x138))(), (uVar10 & 1) == 0)) {
      return;
    }
    uVar10 = (**(code **)(**(long **)(param_1 + 0x140) + 0x68))();
    if ((uVar10 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x140) + 0x60))(*(long **)(param_1 + 0x140),1);
    }
// ... (279 more lines)
```

## 13. `FUN_71004227b0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004227b0`  (offset `0x4227b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004227b0(void)`
- **Size / BBs / Incoming:** 644 bytes / 25 bb / 1 incoming refs
- **Match values:** Replay
- **Strings touched:** ReplaySetupScene;MeleeReplayNormalSequenceScene;MeleeReplayCompetitionContinuationSequenceScene;ReplayExitScene;ReplayLoadScene;ReplayDownloadScene;HomeRunReplaySequenceScene;IngameCallSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004227b0__71004227b0.c)  [cfg](../decompiled/FUN_71004227b0__71004227b0.mmd)
- **Clone hash:** `d11670fa631b8641`

```c

void FUN_71004227b0(void)

{
  int iVar1;
  
  DAT_7105328ba8 = 0;
  DAT_7105328bb0 = "ReplaySetupScene";
  if (((DAT_7105328c40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c40), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c40);
  }
  DAT_7105328bb8 = &PTR_PTR_71050b8240;
  DAT_7105328bc0 = "MeleeReplayNormalSequenceScene";
  if (((DAT_7105328c48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c48), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c48);
  }
  DAT_7105328bc8 = &PTR_PTR_71050b8248;
  DAT_7105328bd0 = "MeleeReplayCompetitionContinuationSequenceScene";
  if (((DAT_7105328c50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c50), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c50);
  }
  DAT_7105328bd8 = &PTR_PTR_71050b8250;
  DAT_7105328be0 = "ReplayExitScene";
  if (((DAT_7105328c58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c58), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c58);
  }
  DAT_7105328be8 = &PTR_PTR_71050b8258;
  DAT_7105328bf0 = "ReplayLoadScene";
  if (((DAT_7105328c60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c60), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c60);
  }
  DAT_7105328bf8 = &PTR_PTR_71050b8260;
  DAT_7105328c00 = "ReplayDownloadScene";
  if (((DAT_7105328c68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c68), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c68);
  }
  DAT_7105328c08 = &PTR_PTR_71050b8268;
  DAT_7105328c10 = "HomeRunReplaySequenceScene";
  if (((DAT_7105328c70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c70), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c70);
// ... (12 more lines)
```

## 14. `FUN_7101acdb20`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101acdb20`  (offset `0x1acdb20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101acdb20(long param_1, undefined8 param_2, undefined8 param_3, undefined1 * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 688 bytes / 28 bb / 2 incoming refs
- **Match values:** replay
- **Strings touched:** mnu_replay_refinement_all;nam_chr1_%02d_%s;mnu_replay_refinement_fighter_name;nam_stg1_%s;mnu_replay_refinement_stage_name
- **Callers:** FUN_7101acc4e0
- **Callees:** FUN_71003a4ca0;FUN_7103262310;FUN_71032631a0;FUN_71032632a0;FUN_7103263540;FUN_71032648e0;FUN_71032b1a60;FUN_71032b23e0;FUN_710377a120;FUN_710377a280
- **Files:** [decomp](../decompiled/FUN_7101acdb20__7101acdb20.c)  [cfg](../decompiled/FUN_7101acdb20__7101acdb20.mmd)
- **Clone hash:** `9bcf14982f845630`

```c

void FUN_7101acdb20(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  undefined1 *puVar9;
  int *piVar10;
  long lVar11;
  uint auStack_f0 [2];
  undefined1 auStack_e8 [64];
  uint auStack_a8 [2];
  undefined1 auStack_a0 [64];
  
  piVar10 = *(int **)(param_1 + 0x110);
  pcVar7 = "mnu_replay_refinement_all";
  if (*piVar10 - 1U < 3) {
    pcVar7 = (&PTR_s_mnu_replay_refinement_mode_melee_71050a99e0)[(int)(*piVar10 - 1U)];
  }
  puVar9 = *(undefined1 **)(piVar10 + 2);
  pcVar1 = "mnu_replay_refinement_spirits_no";
  if (piVar10[6] != 1) {
    pcVar1 = "mnu_replay_refinement_all";
  }
  pcVar2 = "mnu_replay_refinement_spirits_yes";
  if (piVar10[6] != 2) {
    pcVar2 = pcVar1;
  }
  lVar11 = *(long *)(DAT_710532f730 + 8);
  lVar8 = *(long *)(lVar11 + 0x168);
  uVar4 = FUN_71032632a0(lVar8,(ulong)puVar9);
  if ((uVar4 & 1) == 0) {
    bVar3 = FUN_71032648e0(lVar11 + 0x160,(ulong)puVar9);
// ... (58 more lines)
```

## 15. `FUN_7101acce30`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101acce30`  (offset `0x1acce30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101acce30(long param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1008 bytes / 50 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** in_r_00;header_txt_in;mnu_replay_refinement_mode;out_r_00;in_l_00;header_txt_out;mnu_replay_refinement_mode_help_all
- **Callees:** FUN_710323f760;FUN_71032821b0;FUN_7103771a80;FUN_7103778300;FUN_7103778b80;FUN_710377a120;FUN_71037964b0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::abort;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101acce30__7101acce30.c)  [cfg](../decompiled/FUN_7101acce30__7101acce30.mmd)
- **Clone hash:** `c51ce6225031a4f8`

```c

void FUN_7101acce30(long param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  char *pcVar11;
  long *********ppppppppplVar12;
  undefined **local_50;
  undefined8 *local_48;
  long ********local_40;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0xfc) == 0) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x70))(*(long **)(param_1 + 0x138),1);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710437c100);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710425ee3e);
    iVar3 = **(int **)(param_1 + 0x110);
    if (2 < iVar3 - 1U) {
      iVar3 = 0;
    }
    ppppppppplVar12 = (long *********)0x1;
    FUN_7103771a80((long *)(param_1 + 0x138),iVar3,1);
    FUN_710377a120(param_1 + 600,"mnu_replay_refinement_mode",ppppppppplVar12,param_4,param_5,
                   param_6,param_7,param_8);
    uVar10 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x13834df56d);
    plVar9 = FUN_710323f760(*(long **)(param_1 + 0x108),uVar10,(long ****)ppppppppplVar12,param_4,
                            param_5,param_6,param_7,param_8);
    local_50 = &PTR_FUN_710523da08;
    local_48 = (undefined8 *)
               FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar12,param_4,param_5,param_6,param_7,
// ... (155 more lines)
```

## 16. `FUN_7101bf02a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bf02a0`  (offset `0x1bf02a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bf02a0(undefined8 * param_1, long * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10668 bytes / 435 bb / 1 incoming refs
- **Match values:** REPLAY
- **Strings touched:** SEQUENCE_NONE;SEQUENCE_TITLE;SEQUENCE_TITLE_DEMO;SEQUENCE_MELEE;SEQUENCE_MELEE_NORMAL;SEQUENCE_MELEE_TEAM_COMPE;SEQUENCE_MELEE_SPECIAL;SEQUENCE_MELEE_SPECIAL_VARIOUS;SEQUENCE_MELEE_SPECIAL_SUDDENDEATH;SEQUENCE_MELEE_SPECIAL_ALL_BATTLE;SEQUENCE_MELEE_TOURNAMENT;SEQUENCE_SPIRITS;mode_empty_03;SEQUENCE_SPIRITS_CHALLENGE;SEQUENCE_SPIRITS_CANPAIGN;SEQUENCE_SPIRITS_FORMATION;SEQUENCE_SPIRITS_CHALLENGE_SPECIAL;SEQUENCE_OTHER;SEQUENCE_OTHER_STANDARD;SEQUENCE_OTHER_KUMITE;SEQUENCE_OTHER_KUMITE_100;SEQUENCE_OTHER_KUMITE_ALLSTAR;SEQUENCE_OTHER_KUMITE_CRUEL;SEQUENCE_OTHER_HOMERUN;SEQUENCE_OTHER_HOMERUN_SINGLE;SEQUENCE_OTHER_HOMERUN_COOP;SEQUENCE_OTHER_HOMERUN_EVERYONE;SEQUENCE_OTHER_TRAINING;SEQUENCE_OTHER_CHARA_MAKE;SEQUENCE_OTHER_STAGE_MAKE;SEQUENCE_OTHER_AMIIBO;SEQUENCE_OTHER_CHALLENGER;...
- **Callers:** FUN_710185e890
- **Callees:** FUN_71000001c0;FUN_710075f050;FUN_710172a350;FUN_7101761580;FUN_7101761830;FUN_7101762400;FUN_7101763880;FUN_7101763970;FUN_7101763b40;FUN_7101764000;FUN_7101be16e0;FUN_7101be1cf0;FUN_7101be1ef0;FUN_7101be3dc0;FUN_7101be4200;FUN_71025d2a00;...
- **Files:** [decomp](../decompiled/FUN_7101bf02a0__7101bf02a0.c)  [cfg](../decompiled/FUN_7101bf02a0__7101bf02a0.mmd)
- **Clone hash:** `5467e28c510ce846`

```c

/* WARNING: Removing unreachable block (ram,0x007101bf28e4) */
/* WARNING: Removing unreachable block (ram,0x007101bf28e8) */
/* WARNING: Removing unreachable block (ram,0x007101bf28f0) */
/* WARNING: Removing unreachable block (ram,0x007101bf28f8) */
/* WARNING: Removing unreachable block (ram,0x007101bf28fc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101bf02a0(undefined8 *param_1,long *param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  ulong *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  PosixTime *pPVar12;
  void *__dest;
  PosixTime *pPVar13;
  undefined8 extraout_x1;
  long *plVar14;
  PosixTime **ppPVar15;
  long ****pppplVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  long lVar22;
  PosixTime *pPVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  long lVar26;
// ... (1797 more lines)
```

## 17. `FUN_7101a23a80`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a23a80`  (offset `0x1a23a80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a23a80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8756 bytes / 346 bb / 1 incoming refs
- **Match values:** replay
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

## 18. `FUN_7101d0e4a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d0e4a0`  (offset `0x1d0e4a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d0e4a0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 236 bytes / 9 bb / 5 incoming refs
- **Match values:** replay
- **Strings touched:** replay_off;replay_icon_stop_%d;icon_down_%d;icon_reset_%d
- **Callers:** FUN_7101d0ae40
- **Callees:** FUN_7103778300;FUN_7103778430;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101d0e4a0__7101d0e4a0.c)  [cfg](../decompiled/FUN_7101d0e4a0__7101d0e4a0.mmd)
- **Clone hash:** `95e4c67afc966a76`

```c

void FUN_7101d0e4a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0xf8) + 0x10),0x7104308701);
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x100) + 0x10),0x7104308701);
  if (0 < *(int *)(param_1 + 0x108)) {
    uVar4 = 0;
    do {
      FUN_7103778430(*(long *)(param_1 + 0x100) + 8,"replay_icon_stop_%d",uVar4 & 0xffffffff,param_4
                     ,param_5,param_6,param_7,param_8);
      if (3 < uVar4) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = *(long *)(param_1 + 0x100);
      lVar1 = lVar3 + uVar4;
      *(undefined1 *)(lVar1 + 0x4c) = 0;
      pcVar2 = "icon_reset_%d";
      if (*(char *)(lVar1 + 0x48) != '\0') {
        pcVar2 = "icon_down_%d";
      }
      FUN_7103778430(lVar3 + 8,pcVar2,uVar4 & 0xffffffff,param_4,param_5,param_6,param_7,param_8);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)*(int *)(param_1 + 0x108));
  }
  return;
}


```

## 19. `FUN_7101ac71e0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac71e0`  (offset `0x1ac71e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac71e0(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 556 bytes / 19 bb / 2 incoming refs
- **Match values:** replay
- **Strings touched:** set_txt_stagename;nam_stg1_%s;mnu_replay_detail_stage_name;tag_on;btl_field_on;set_txt_tag;mnu_replay_detail_battlefield;tag_off;endpoint_on;mnu_replay_detail_end
- **Callers:** FUN_7101ac4ba0;FUN_7101ac65f0
- **Callees:** FUN_71003a4ca0;FUN_71032b1a60;FUN_71032b24e0;FUN_7103776390;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101ac71e0__7101ac71e0.c)  [cfg](../decompiled/FUN_7101ac71e0__7101ac71e0.mmd)
- **Clone hash:** `39ba91906cfdbf49`

```c

void FUN_7101ac71e0(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  uint auStack_f0 [2];
  undefined1 auStack_e8 [64];
  undefined **local_a8;
  ulong local_a0;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  ulong local_80 [8];
  
  FUN_7103776390(&local_98,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = *(uint *)(**(long **)(param_1 + 0x300) + (long)*(int *)(param_1 + 0x2f8) * 0x3c0 + 0x300);
  if (uVar1 == 0xffffffff) goto LAB_7101ac73c0;
  lVar8 = *(long *)(DAT_710532f730 + 8);
  FUN_7103776910(&local_a8,param_1 + 0x2e0,(long ****)"set_txt_stagename",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (uVar1 < 0x16c) {
    iVar4 = (&DAT_710454a7ec)[(long)(int)uVar1 * 0x12];
  }
  else {
    iVar4 = -1;
  }
  uVar2 = FUN_71032b24e0(lVar8 + 0x170,iVar4);
  FUN_71032b1a60((uint *)&local_88,*(long *)(lVar8 + 0x178),uVar2);
  FUN_71003a4ca0(auStack_f0,"nam_stg1_%s",local_80,uVar2,param_4,param_5,param_6,param_7,param_8);
  puVar7 = auStack_e8;
  uVar6 = 1;
  FUN_710377a280((long)&local_a8,(byte *)"mnu_replay_detail_stage_name",1);
// ... (50 more lines)
```

## 20. `FUN_71023899c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71023899c0`  (offset `0x23899c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71023899c0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1404 bytes / 49 bb / 6 incoming refs
- **Match values:** replay
- **Strings touched:** share;time_seconds;num_test_stageedit;num_save_stageedit;num_like_stageedit;num_share_stageedit;num_test_miifighter;num_save_miifighter;num_like_miifighter;num_share_miifighter;num_watch_replay;num_like_replay;num_share_replay;num_watch_watching;num_like_watching;num_share_watching;num_watch_movie;NODE_PRE_REFRACT_BLEND;num_like_movie;num_share_movie;num_profile;num_follow;num_report
- **Callers:** FUN_71023883a0;FUN_7102390040;FUN_71023902d0;FUN_71023907b0;FUN_71023925c0
- **Callees:** FUN_7101cc4970;FUN_7101cc4b30;FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save;<EXTERNAL>::nn::oe::GetProgramTotalActiveTime
- **Files:** [decomp](../decompiled/FUN_71023899c0__71023899c0.c)  [cfg](../decompiled/FUN_71023899c0__71023899c0.mmd)
- **Clone hash:** `b37e48db2b824a44`

```c

void FUN_71023899c0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *local_40;
  ulong local_38;
  
  lVar7 = *(long *)(DAT_7105325cc8 + 8);
  if (*(int *)(lVar7 + 0xb8) != 0) {
    lVar4 = nn::oe::GetProgramTotalActiveTime();
    uVar6 = lVar4 - *(long *)(lVar7 + 0x26c8);
    uVar5 = ((long)uVar6 >> 0x20) * 0x26d694b3 + ((uVar6 & 0xffffffff) * 0x26d694b3 >> 0x20);
    *(int *)(lVar7 + 0x2674) =
         (int)(((long)uVar6 >> 0x20) * 0x112e0be8 + ((long)uVar5 >> 0x20) +
               ((uVar6 & 0xffffffff) * 0x112e0be8 + (uVar5 & 0xffffffff) >> 0x20) >> 0x1a) -
         (int)((long)uVar6 >> 0x3f);
    if ((((((*(int *)(lVar7 + 0x2678) != 0) || (*(int *)(lVar7 + 0x267c) != 0)) ||
          (*(int *)(lVar7 + 0x2680) != 0)) ||
         ((*(int *)(lVar7 + 0x2684) != 0 || (*(int *)(lVar7 + 0x2688) != 0)))) ||
        ((((*(int *)(lVar7 + 0x268c) != 0 ||
           ((*(int *)(lVar7 + 0x2690) != 0 || (*(int *)(lVar7 + 0x2694) != 0)))) ||
          (*(int *)(lVar7 + 0x2698) != 0)) ||
         ((((*(int *)(lVar7 + 0x269c) != 0 || (*(int *)(lVar7 + 0x26a0) != 0)) ||
           (*(int *)(lVar7 + 0x26a4) != 0)) ||
          (((*(int *)(lVar7 + 0x26a8) != 0 || (*(int *)(lVar7 + 0x26ac) != 0)) ||
           ((*(int *)(lVar7 + 0x26b0) != 0 ||
            ((*(int *)(lVar7 + 0x26b4) != 0 || (*(int *)(lVar7 + 0x26b8) != 0)))))))))))) ||
       ((*(int *)(lVar7 + 0x26bc) != 0 ||
        ((*(int *)(lVar7 + 0x26c0) != 0 || (*(int *)(lVar7 + 0x26c4) != 0)))))) {
      FUN_710375aa90((long *)&local_40,"share",param_3,param_4,param_5,param_6,param_7,param_8);
      puVar2 = local_40;
      local_38 = (ulong)*(uint *)(lVar7 + 0x2674);
// ... (96 more lines)
```

## 21. `FUN_71004206a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004206a0`  (offset `0x4206a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004206a0(void)`
- **Size / BBs / Incoming:** 1328 bytes / 52 bb / 1 incoming refs
- **Match values:** Replay
- **Strings touched:** AmiiboReadFigureScene;AmiiboSelectColorScene;AmiiboEditScene;AmiiboWriteFigureScene;AmiiboTransitionEditScene;CharaMakeSequenceScene;IngameCallSequenceScene;SpiritsForceReturnScene;AmiiboStartJourneyScene;AmiiboPseudoSleepScene;set_assist_team_no;AmiiboReturnJourneyScene;AmiiboResultListScene;AmiiboResultDetailScene;AmiiboJourneyReplayScene;MeleeReplaySequenceScene;PrizeListScene;LoginScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004206a0__71004206a0.c)  [cfg](../decompiled/FUN_71004206a0__71004206a0.mmd)
- **Clone hash:** `767ea7d4ffe1a8d0`

```c

void FUN_71004206a0(void)

{
  int iVar1;
  
  DAT_7105328188 = 0;
  DAT_7105328190 = "AmiiboReadFigureScene";
  if (((DAT_71053282b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282b0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282b0);
  }
  DAT_7105328198 = &PTR_PTR_71050b63b8;
  DAT_71053281a0 = "AmiiboSelectColorScene";
  if (((DAT_71053282b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282b8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282b8);
  }
  DAT_71053281a8 = &PTR_PTR_71050b63c0;
  DAT_71053281b0 = "AmiiboEditScene";
  if (((DAT_71053282c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282c0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282c0);
  }
  DAT_71053281b8 = &PTR_PTR_71050b63c8;
  DAT_71053281c0 = "AmiiboWriteFigureScene";
  if (((DAT_71053282c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282c8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282c8);
  }
  DAT_71053281c8 = &PTR_PTR_71050b63d0;
  DAT_71053281d0 = "AmiiboTransitionEditScene";
  if (((DAT_71053282d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282d0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282d0);
  }
  DAT_71053281d8 = &PTR_PTR_71050b63d8;
  DAT_71053281e0 = "CharaMakeSequenceScene";
  if (((DAT_7105328078 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328078), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328078);
  }
  DAT_71053281e8 = &PTR_PTR_71050b59a8;
  DAT_71053281f0 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
// ... (57 more lines)
```

## 22. `FUN_7100421340`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100421340`  (offset `0x421340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100421340(void)`
- **Size / BBs / Incoming:** 416 bytes / 16 bb / 0 incoming refs
- **Match values:** Replay
- **Strings touched:** CollectionReplayScene;MeleeReplaySequenceScene;CharaSelectScene;StageSelectScene;IngameCallSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100421340__7100421340.c)  [cfg](../decompiled/FUN_7100421340__7100421340.mmd)
- **Clone hash:** `ee5e4cc0ab53b9dc`

```c

void FUN_7100421340(void)

{
  int iVar1;
  
  DAT_71053285f0 = 0;
  DAT_71053285f8 = "CollectionReplayScene";
  if (((DAT_7105328658 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328658), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328658);
  }
  DAT_7105328600 = &PTR_PTR_71050b7470;
  DAT_7105328608 = "MeleeReplaySequenceScene";
  if (((DAT_7105328310 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328310), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328310);
  }
  DAT_7105328610 = &PTR_PTR_71050b6418;
  DAT_7105328618 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328620 = &PTR_PTR_71050b6960;
  DAT_7105328628 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105328630 = &PTR_PTR_71050b7478;
  DAT_7105328638 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328648 = 0;
  DAT_7105328650 = 0;
  DAT_7105328640 = &PTR_PTR_7104f76410;
  return;
}


```

## 23. `FUN_7100426670`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100426670`  (offset `0x426670`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100426670(void)`
- **Size / BBs / Incoming:** 416 bytes / 16 bb / 1 incoming refs
- **Match values:** Replay;rePlay
- **Strings touched:** OnlineShareScene;CharaSelectScene;MeleeReplaySequenceScene;OnlineShareTestPlayStageSequenceScene;OnlineSharePlayMovieScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100426670__7100426670.c)  [cfg](../decompiled/FUN_7100426670__7100426670.mmd)
- **Clone hash:** `18256bcdf27da432`

```c

void FUN_7100426670(void)

{
  int iVar1;
  
  DAT_71053295e0 = 0;
  DAT_71053295e8 = "OnlineShareScene";
  if (((DAT_7105329648 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329648), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329648);
  }
  DAT_71053295f0 = &PTR_PTR_71050b9668;
  DAT_71053295f8 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329600 = &PTR_PTR_71050b6960;
  DAT_7105329608 = "MeleeReplaySequenceScene";
  if (((DAT_7105328310 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328310), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328310);
  }
  DAT_7105329610 = &PTR_PTR_71050b6418;
  DAT_7105329618 = "OnlineShareTestPlayStageSequenceScene";
  if (((DAT_7105329650 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329650), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329650);
  }
  DAT_7105329620 = &PTR_PTR_71050b9670;
  DAT_7105329628 = "OnlineSharePlayMovieScene";
  if (((DAT_7105329658 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329658), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329658);
  }
  DAT_7105329638 = 0;
  DAT_7105329640 = 0;
  DAT_7105329630 = &PTR_PTR_71050b9678;
  return;
}


```

## 24. `FUN_7101ae9600`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ae9600`  (offset `0x1ae9600`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ae9600(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1604 bytes / 79 bb / 6 incoming refs
- **Match values:** replay
- **Strings touched:** turn_loop;turn_off;turn_on;set_txt_mask;set_txt_main;mnu_replay_detail_time_movie;mnu_replay_detail_creation_date
- **Callers:** FUN_7101adf770;FUN_7101ae6540;FUN_7101ae9c50;FUN_7101aea280
- **Callees:** FUN_7103776910;FUN_7103778300;FUN_7103778760;FUN_7103779480;FUN_7103779650;FUN_710377a280;FUN_71037964b0;FUN_71037a2270;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101ae9600__7101ae9600.c)  [cfg](../decompiled/FUN_7101ae9600__7101ae9600.mmd)
- **Clone hash:** `f08bd9505f476ff2`

```c

void FUN_7101ae9600(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte **ppbVar1;
  long *plVar2;
  byte **ppbVar3;
  byte **ppbVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *********ppppppppplVar11;
  byte ****ppppbVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined **local_68;
  ulong local_60;
  undefined4 local_54;
  
  ppppppppplVar11 = param_3;
  ppppbVar12 = param_4;
  if ((((((**(long **)(param_2 + 8) == **(long **)(param_1 + 0x208)) &&
         (**(long **)(param_2 + 0x18) == **(long **)(param_1 + 0x218))) &&
        (**(long **)(param_2 + 0x28) == **(long **)(param_1 + 0x228))) &&
       ((**(long **)(param_2 + 0x38) == **(long **)(param_1 + 0x238) &&
        (**(long **)(param_2 + 0x48) == **(long **)(param_1 + 0x248))))) &&
      ((**(long **)(param_2 + 0x58) == **(long **)(param_1 + 600) &&
       ((**(long **)(param_2 + 0x68) == **(long **)(param_1 + 0x268) &&
        (**(long **)(param_2 + 0x78) == **(long **)(param_1 + 0x278))))))) &&
     ((byte ****)(param_1 + 0x1f0) != param_4)) {
    puVar13 = *(undefined8 **)(param_1 + 0x1f8);
    ppbVar3 = *param_4[1];
    ppbVar4 = param_4[1][1];
    if (ppbVar4 != (byte **)0x0) {
      ppbVar1 = ppbVar4 + 1;
      do {
// ... (197 more lines)
```

## 25. `FUN_71018b68a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018b68a0`  (offset `0x18b68a0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71018b68a0(undefined1[16] param_1, float param_2, float param_3, float param_4, undefined8 * param_5, undefined8 param_6, long * * * * * * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)`
- **Size / BBs / Incoming:** 1184 bytes / 67 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** waiting;replay_%s
- **Callees:** FUN_71003a4ca0;FUN_7101cfe670;FUN_7101cfff90;FUN_7101d02530;FUN_7101d029a0;FUN_7101d0a1c0;FUN_7101d0ba20;FUN_7101d0fc10;FUN_710239acc0;FUN_710239df10;FUN_710323cb80;FUN_71037760f0;FUN_7103776910;FUN_7103778300;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;...
- **Files:** [decomp](../decompiled/FUN_71018b68a0__71018b68a0.c)  [cfg](../decompiled/FUN_71018b68a0__71018b68a0.mmd)
- **Clone hash:** `c2022bda129ff281`

```c

ulong FUN_71018b68a0(undefined1 param_1 [16],float param_2,float param_3,float param_4,
                    undefined8 *param_5,undefined8 param_6,long *********param_7,byte ****param_8,
                    long ****param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long *********ppppppppplVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar20 [16];
  undefined **local_78;
  long *local_70 [8];
  
  puVar8 = param_5;
  if (*(int *)((long)param_5 + 0x11c) == 0) {
    if ((*(uint *)(param_5 + 0x24) & 0xfffffffe) == 8) {
      lVar18 = param_5[0x2c];
      param_7 = (long *********)0x1;
      FUN_7101d029a0(lVar18,*(int *)(lVar18 + 0x1b0),1,param_8,param_9,param_10,param_11,param_12);
      lVar7 = *(long *)**(undefined8 **)(lVar18 + 0x188);
    }
// ... (211 more lines)
```

## 26. `FUN_71004f0aa0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004f0aa0`  (offset `0x4f0aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004f0aa0(undefined8 * param_1, undefined8 param_2, undefined * * param_3, undefined * * * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4092 bytes / 227 bb / 2 incoming refs
- **Match values:** replay
- **Strings touched:** mnu_replay_movie_camera_fighter;mnu_replay_movie_camera_melee;mnu_replay_movie_camera_free
- **Callers:** FUN_7101358530;FUN_710155a000
- **Callees:** FUN_71000001c0;FUN_71004ee480;FUN_71004eeaf0;FUN_71004eeb00;FUN_7100515e10;FUN_7100519ee0;FUN_71013be5c0;FUN_71013be6e0;FUN_71013be800;FUN_7101764000;FUN_7101b958e0;FUN_7101b95a70;FUN_7101eefe30;FUN_710377a120;FUN_710377b140;FUN_71037a2270;...
- **Files:** [decomp](../decompiled/FUN_71004f0aa0__71004f0aa0.c)  [cfg](../decompiled/FUN_71004f0aa0__71004f0aa0.mmd)
- **Clone hash:** `f32c6a513d4b3494`

```c

void FUN_71004f0aa0(undefined8 *param_1,undefined8 param_2,undefined **param_3,undefined ***param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  byte bVar17;
  uint uVar18;
  long *plVar19;
  undefined8 uVar20;
  char *pcVar21;
  long lVar22;
  code *pcVar23;
  uint *puVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *puVar27;
  uint uVar28;
  int *piVar29;
  int *piVar30;
  bool bVar31;
  undefined4 uVar32;
  long *plVar33;
  float fVar34;
  int iVar35;
// ... (690 more lines)
```

## 27. `FUN_710181ead0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710181ead0`  (offset `0x181ead0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710181ead0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8504 bytes / 355 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** spirits_campaign_top_maintitle;spirits_campaign_top_subtitle;set_moive_player;set_parts_lct_playbtn;set_txt_05;mnu_replay_movie_play_previous_next;mnu_movie_change;set_txt_movie_title
- **Callees:** FUN_710181e860;FUN_7101a999a0;FUN_7101a9ba20;FUN_7101a9bcf0;FUN_7101adeaa0;FUN_7101bdf8d0;FUN_7101bf3a10;FUN_7101bf4570;FUN_7101e9f890;FUN_7101e9fb20;FUN_710323af70;FUN_710323beb0;FUN_710323c4e0;FUN_710323cb80;FUN_710328de50;FUN_71032cad20;...
- **Files:** [decomp](../decompiled/FUN_710181ead0__710181ead0.c)  [cfg](../decompiled/FUN_710181ead0__710181ead0.mmd)
- **Clone hash:** `a54e24c921ea6e6b`

```c

void FUN_710181ead0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long **pplVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  long **pplVar17;
  long ***ppplVar18;
  undefined **ppuVar19;
  void *__dest;
  long *plVar20;
  undefined8 *puVar21;
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
// ... (1417 more lines)
```

## 28. `FUN_7101ad0e40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ad0e40`  (offset `0x1ad0e40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ad0e40(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2884 bytes / 141 bb / 2 incoming refs
- **Match values:** replay
- **Strings touched:** set_parts_stage;set_rep_pic_cap;set_rep_bgshot;set_txt_00;set_parts_btn_01;set_parts_btn_00;pop_replay_movie_detail_delete;pop_replay_detail_delete;pop_btn_yes;pop_btn_no;selector
- **Callers:** FUN_7101ac8680;FUN_7101aeb140
- **Callees:** FUN_7101989a30;FUN_7101ad0b80;FUN_7101ad0b90;FUN_71032cbf30;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_7103773200;FUN_7103775dc0;FUN_71037760f0;FUN_7103776290;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778760;FUN_710377a120;...
- **Files:** [decomp](../decompiled/FUN_7101ad0e40__7101ad0e40.c)  [cfg](../decompiled/FUN_7101ad0e40__7101ad0e40.mmd)
- **Clone hash:** `6c8854438e019a87`

```c

void FUN_7101ad0e40(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar9;
  byte ****ppppbVar10;
  byte ****ppppbVar11;
  byte ****ppppbVar12;
  byte ****ppppbVar13;
  byte ****ppppbVar14;
  byte ****ppppbVar15;
  byte ****ppppbVar16;
  byte ****ppppbVar17;
  long ****pppplVar18;
  byte ****ppppbVar19;
  byte ****ppppbVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  byte ***local_1e0;
  ulong local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
// ... (617 more lines)
```

## 29. `FUN_7101d0ef00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d0ef00`  (offset `0x1d0ef00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d0ef00(undefined8 * param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1204 bytes / 63 bb / 4 incoming refs
- **Match values:** replay
- **Strings touched:** set_getpos_camera_top_%d;set_getpos_camera_btm_%d;set_getpos_replay;set_size_replay_cursor;icon_scale_%d;eff_size_h%d;mode_icon;mode_line;mode_empty_03;anim_loop_battle;past_loser_off
- **Callers:** FUN_7101d0bdc0
- **Callees:** FUN_71000598d0;FUN_7103776390;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101d0ef00__7101d0ef00.c)  [cfg](../decompiled/FUN_7101d0ef00__7101d0ef00.mmd)
- **Clone hash:** `1daba5a703a9a4ab`

```c

void FUN_7101d0ef00(undefined8 *param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  uint uVar14;
  undefined8 *puVar15;
  long ***local_80;
  ulong local_78;
  undefined4 local_64;
  
  pppplVar9 = &local_80;
  pppplVar10 = &local_80;
  pppplVar11 = &local_80;
  pppplVar12 = &local_80;
  puVar15 = param_1 + 1;
  *param_1 = &PTR_FUN_71050aea78;
  iVar1 = (int)param_5;
  pppplVar8 = param_3;
  ppppbVar13 = param_4;
  FUN_7103776390(puVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[10] = &PTR_FUN_710523d9a8;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
// ... (207 more lines)
```

## 30. `FUN_7101d03110`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d03110`  (offset `0x1d03110`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d03110(undefined1[16] param_1, undefined4 param_2, float param_3, undefined8 * param_4, long * param_5, long * * * * param_6, byte * * * * param_7, long * * * * param_8, ulong param_9, undefined8 param_10, undefined8 param_11, byte param_12)`
- **Size / BBs / Incoming:** 7484 bytes / 320 bb / 3 incoming refs
- **Match values:** replay
- **Strings touched:** set_camera_entry;set_pos_starter_00;set_pos_starter_01;set_pos_panel_%02d;set_panel_%02d;set_panel_my;side_l;side_r;size_h3;size_h1;size_h2;size_h4;set_txt_name_%02d;set_txt_name_replay_%02d;set_rep_fighter_%02d;player_fp;player_num_fp;set_txt_player_id;cmn_%dp;set_txt_fp_id;mode_replay_off;entry_off;set_match_%d_%02d
- **Callers:** FUN_71018b7a20;FUN_71018b9f90;FUN_71018bbed0
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_7101d076b0;FUN_7101d07780;FUN_7101d08e60;FUN_7101d08e80;FUN_7101d08e90;FUN_7101d08fe0;FUN_7101d0bdc0;FUN_7101d0d900;FUN_7102398db0;FUN_710239d920;FUN_710323eba0;FUN_71032cbf30;FUN_7103772da0;FUN_7103773200;...
- **Files:** [decomp](../decompiled/FUN_7101d03110__7101d03110.c)  [cfg](../decompiled/FUN_7101d03110__7101d03110.mmd)
- **Clone hash:** `05e390a6d71d6d30`

```c

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffffffffffef8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101d03110(undefined1 param_1 [16],undefined4 param_2,float param_3,undefined8 *param_4,
                   long *param_5,long ****param_6,byte ****param_7,long ****param_8,ulong param_9,
                   undefined8 param_10,undefined8 param_11,byte param_12)

{
  undefined8 *puVar1;
  long ********pppppppplVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  char cVar6;
  undefined2 uVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long ********pppppppplVar15;
  ulong uVar16;
  long ********pppppppplVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  char *pcVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  long ****pppplVar21;
  byte ****ppppbVar22;
  long ****pppplVar23;
  uint uVar24;
// ... (1376 more lines)
```

## 31. `online_scene_state_handler`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cc6370`  (offset `0x1cc6370`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl online_scene_state_handler(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, ulong param_8)`
- **Size / BBs / Incoming:** 2412 bytes / 113 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** disp_mf;mf_share_up;mf_clr_%02d;set_rep_mfshot;disp_edit;set_rep_edit;disp_replay;set_rep_replay;set_rep_mfshot_sd;type_check
- **Callees:** FUN_71017bd0b0;FUN_7101ad2060;FUN_7101af0cc0;FUN_7101cd0bc0;FUN_7101cd16d0;FUN_7101cd2220;FUN_7103775dc0;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_71037790a0;FUN_7103779480;FUN_710377c0d0;FUN_710379e9c0;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/online_scene_state_handler__7101cc6370.c)  [cfg](../decompiled/online_scene_state_handler__7101cc6370.mmd)
- **Clone hash:** `5032d85f6f77da07`

```c

void online_scene_state_handler
               (long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
               long ****param_5,ulong param_6,ulong param_7,ulong param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *__dest;
  undefined8 *puVar5;
  ulong uVar6;
  long *********ppppppppplVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  byte ****ppppbVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined **local_98;
  undefined8 *local_90;
  undefined **local_88;
  undefined8 *local_80;
  long ********local_78;
  undefined8 *local_70;
  long ********local_68;
  undefined4 local_54;
  
  if (*(int *)(param_1 + 0x19c) != 0) {
    lVar12 = *(long *)(param_1 + 0x1b0);
    lVar4 = *(long *)(lVar12 + 0x80);
    if ((*(uint *)(lVar4 + 0xe8) | 4) != 5) {
      if (*(char *)(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x80) + 0x244) != '\0') {
        return;
      }
      if (*(uint *)(lVar4 + 0xe8) != 1) {
        *(undefined1 *)(lVar4 + 0x131) = 1;
        *(undefined1 *)(lVar4 + 0x133) = 1;
// ... (431 more lines)
```

## 32. `FUN_71004262b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004262b0`  (offset `0x4262b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004262b0(void)`
- **Size / BBs / Incoming:** 948 bytes / 37 bb / 1 incoming refs
- **Match values:** Replay
- **Strings touched:** OnlineTournamentEntranceScene;CharaSelectScene;OnlineTournamentAmiiboReadScene;set_assist_team_no;PracticeScene;OnlineTournamentTableScene;OnlineTournamentShowRankScene;IngameCallSequenceScene;PrizeListScene;SpiritsForceReturnScene;OnlineTournamentReplaySelectScene;MeleeReplaySequenceScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004262b0__71004262b0.c)  [cfg](../decompiled/FUN_71004262b0__71004262b0.mmd)
- **Clone hash:** `32e3fa1e1cd484e1`

```c

void FUN_71004262b0(void)

{
  int iVar1;
  
  DAT_71053294e0 = 0;
  DAT_71053294e8 = "OnlineTournamentEntranceScene";
  if (((DAT_71053295b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053295b8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053295b8);
  }
  DAT_71053294f0 = &PTR_PTR_71050b93b8;
  DAT_71053294f8 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329500 = &PTR_PTR_71050b6960;
  DAT_7105329508 = "OnlineTournamentAmiiboReadScene";
  if (((DAT_71053295c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053295c0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053295c0);
  }
  DAT_7105329510 = &PTR_PTR_71050b93c0;
  DAT_7105329518 = "PracticeScene";
  if (((DAT_71053287a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053287a8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053287a8);
  }
  DAT_7105329520 = &PTR_PTR_71050b7890;
  DAT_7105329528 = "OnlineTournamentTableScene";
  if (((DAT_71053295c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053295c8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053295c8);
  }
  DAT_7105329530 = &PTR_PTR_71050b93c8;
  DAT_7105329538 = "OnlineTournamentShowRankScene";
  if (((DAT_71053295d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053295d0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053295d0);
  }
  DAT_7105329540 = &PTR_PTR_71050b93d0;
  DAT_7105329548 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
// ... (32 more lines)
```

## 33. `FUN_710041f880`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710041f880`  (offset `0x41f880`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710041f880(void)`
- **Size / BBs / Incoming:** 3608 bytes / 142 bb / 1 incoming refs
- **Match values:** Replay
- **Strings touched:** BootSequenceScene;MenuSequenceScene;OptionSequenceScene;HelpSequenceScene;IngameCallSequenceScene;UnlockSequenceScene;LocalSequenceScene;MeleeNormalSequenceScene;MeleeAllBattleSequenceScene;MeleeTeamCompeSequenceScene;MeleeTournamentSequenceScene;SpiritsBoardSequenceScene;SpiritsCampaignSequenceScene;SpiritsCampaignFinalStageSequenceScene;SpiritsBoardSpecialSequenceScene;SpiritsOrganizationSequenceScene;StandardSequenceScene;TrainingSequenceScene;KumiteSequenceScene;HomeRunContestSequenceScene;CharaMakeSequenceScene;AmiiboSequenceScene;ChallengerRoomSequenceScene;OnlineMeleeAnySequenceScene;OnlineMeleeParallelSequenceScene;OnlineMeleeRoomSequenceScene;OnlineWatchSequenceScene;SoundTestSequenceScene;CollectionTipsSequenceScene;CollectionShopSequenceScene;CollectionFighterSequenceScene;CollectionCountSequenceScene;...
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_710041f880__710041f880.c)  [cfg](../decompiled/FUN_710041f880__710041f880.mmd)
- **Clone hash:** `d251c6a5b4e743fa`

```c

void FUN_710041f880(void)

{
  int iVar1;
  
  DAT_7105327cd8 = 0;
  DAT_7105327ce0 = "BootSequenceScene";
  if (((DAT_7105327fe0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105327fe0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105327fe0);
  }
  DAT_7105327ce8 = &PTR_PTR_71050b5910;
  DAT_7105327cf0 = "MenuSequenceScene";
  if (((DAT_7105327fe8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105327fe8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105327fe8);
  }
  DAT_7105327cf8 = &PTR_PTR_71050b5918;
  DAT_7105327d00 = "OptionSequenceScene";
  if (((DAT_7105327ff0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105327ff0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105327ff0);
  }
  DAT_7105327d08 = &PTR_PTR_71050b5920;
  DAT_7105327d10 = "HelpSequenceScene";
  if (((DAT_7105327ff8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105327ff8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105327ff8);
  }
  DAT_7105327d18 = &PTR_PTR_71050b5928;
  DAT_7105327d20 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105327d28 = &PTR_PTR_7104f76410;
  DAT_7105327d30 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_7105327d38 = &PTR_PTR_71050b5930;
  DAT_7105327d40 = "LocalSequenceScene";
  if (((DAT_7105328008 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328008), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328008);
// ... (207 more lines)
```

## 34. `FUN_7101b8eb50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b8eb50`  (offset `0x1b8eb50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b8eb50(long * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 21428 bytes / 1014 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** view_pause_camera;view_pause_replay;view_pause_record_edit;view_play;view_off;mode_empty_03;view_pause_camera_get;mode_gc;mode_joycon_single;view_pause_record;view_play_edit;view_pause_camera_vr;mode_other;camera_disable;mode_other_vr;frame_disable;capture_disable;set_btn1_00;set_txt_name;set_btn1_01;set_txt_num;set_btn1_02;set_btn1_04;txt_btn_end_bg;txt_btn_end;txt_btn_capture;txt_btn_scale;txt_btn_scale_gc;txt_btn_turn;txt_btn_turn_gc;txt_btn_shift;txt_btn_shift_gc;...
- **Callers:** FUN_7101b95680
- **Callees:** FUN_7101414b10;FUN_7101b93f10;FUN_71032cbf30;FUN_7103773200;FUN_71037760f0;FUN_7103776290;FUN_7103776640;FUN_7103776910;FUN_7103776ad0;FUN_71037780e0;FUN_710377a750;FUN_710377b140;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset;<EXTERNAL>::abort;...
- **Files:** [decomp](../decompiled/FUN_7101b8eb50__7101b8eb50.c)  [cfg](../decompiled/FUN_7101b8eb50__7101b8eb50.mmd)
- **Clone hash:** `51fdbad6380f2cf4`

```c

void FUN_7101b8eb50(long *param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
// ... (4271 more lines)
```

## 35. `FUN_7101f307c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f307c0`  (offset `0x1f307c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f307c0(long param_1, long param_2, long * * * * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1840 bytes / 100 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** set_parts_text_scroll;set_txt_main;set_txt_mask;mode_empty_03;set_txt_date_num;set_rep_movie;set_pic_thumbnail;set_parts_preview;selector_00;set_parts_btn_00;set_parts_btn_01;set_parts_btn_02;mnu_replay_movie_edit_keyboard_title_sample
- **Callers:** FUN_7101f09580
- **Callees:** FUN_7101f3e4e0;FUN_71032cbf30;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_71037760f0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778760;FUN_71037ab600;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7101f307c0__7101f307c0.c)  [cfg](../decompiled/FUN_7101f307c0__7101f307c0.mmd)
- **Clone hash:** `dc61e4920924f0ea`

```c

void FUN_7101f307c0(long param_1,long param_2,long ****param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined1 *puVar2;
  short *psVar3;
  int iVar4;
  undefined8 *puVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  long lVar8;
  ushort *puVar9;
  code *pcVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  byte ***local_180;
  ulong local_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined1 local_16a;
  undefined1 *local_168;
  undefined4 local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
// ... (310 more lines)
```

## 36. `FUN_710143c590`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710143c590`  (offset `0x143c590`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710143c590(long param_1)`
- **Size / BBs / Incoming:** 332 bytes / 19 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** save:/save_data/replay
- **Callees:** FUN_710143c6e0;FUN_710143c890;FUN_710143cb00;FUN_710143cb10;FUN_71037222b0;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_710143c590__710143c590.c)  [cfg](../decompiled/FUN_710143c590__710143c590.mmd)
- **Clone hash:** `aa9961826f9c50e8`

```c

void FUN_710143c590(long param_1)

{
  uint uVar1;
  long *plVar2;
  long ****pppplVar3;
  byte ****ppppbVar4;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  code *pcVar5;
  undefined4 uVar6;
  undefined **local_1f0;
  long lStack_1e8;
  long *local_1d0;
  long ***local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  code *pcStack_1a0;
  code *local_198;
  undefined **local_190;
  long lStack_188;
  undefined ***local_170;
  
  plVar2 = DAT_710593b218;
  local_1d0 = (long *)&local_1f0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    if (*(int *)(param_1 + 0x11c) != 1) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0xf4);
    if (*(long *)(param_1 + 0x150) == 0) {
      if (0x12 < uVar1) goto LAB_710143c6d8;
      uVar6 = 2;
    }
    else {
      if (0x12 < uVar1) {
LAB_710143c6d8:
// ... (41 more lines)
```

## 37. `FUN_7102302710`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102302710`  (offset `0x2302710`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_7102302710(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Replay
- **Strings touched:** CollectionReplaySceneParameter
- **Files:** [decomp](../decompiled/FUN_7102302710__7102302710.c)  [cfg](../decompiled/FUN_7102302710__7102302710.mmd)
- **Clone hash:** `6518a2496e0013c5`

```c

char * FUN_7102302710(void)

{
  return "CollectionReplaySceneParameter";
}


```

## 38. `FUN_710143d5d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710143d5d0`  (offset `0x143d5d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710143d5d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2064 bytes / 111 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** save:/save_data/replay
- **Callees:** FUN_710143c6e0;std::operator+;FUN_710143df30;FUN_710143e190;FUN_710143e1a0;FUN_710143e270;FUN_710143e280;FUN_71037222b0;FUN_7103741810;FUN_710392eb40;<EXTERNAL>::nn::time::StandardUserSystemClock::GetCurrentTime;<EXTERNAL>::abort;<EXTERNAL>::std::to_string;<EXTERNAL>::std::string::append
- **Files:** [decomp](../decompiled/FUN_710143d5d0__710143d5d0.c)  [cfg](../decompiled/FUN_710143d5d0__710143d5d0.mmd)
- **Clone hash:** `45e58fc5a135acba`

```c

void FUN_710143d5d0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  undefined1 uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long ****pppplVar9;
  byte ****ppppbVar10;
  undefined8 uVar11;
  code *pcVar12;
  uint uVar13;
  long lVar14;
  undefined **local_350;
  ulong local_348;
  ulong local_340;
  long *local_330;
  long ***local_318;
  ulong local_310;
  ulong local_308;
  code *pcStack_300;
  code *local_2f8;
  undefined **local_2f0;
  ulong local_2e8;
  ulong local_2e0;
  undefined ***local_2d0;
  byte local_188 [8];
  long ****local_180;
  ulong local_178;
  byte local_170 [16];
  ulong local_160;
  byte local_158 [16];
  ulong local_148;
  byte local_140 [16];
// ... (419 more lines)
```

## 39. `FUN_7101f35b00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f35b00`  (offset `0x1f35b00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f35b00(long param_1, long param_2, ulong * param_3, long * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5972 bytes / 325 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** gauge_parts_on;set_parts_btn_edit_00;set_parts_btn_edit_01;cursor_lr_00;set_parts_csr_l;set_parts_csr_r;set_scr_txt_footer_00;mnu_replay_movie_edit_cap_help;set_scr_txt_footer_01;selector_0;set_parts_btn_edit_%02d;set_parts_btn_edit_02;set_parts_btn_edit_03;selector_2;set_parts_btn_color_%02d;set_color_list_01;set_color_list_00;selector_3;arrow_csr;selector_4;set_parts_btn_decide;set_parts_preview;set_parts_tellop_text;set_parts_tellop_screen
- **Callers:** FUN_7101f09580
- **Callees:** FUN_7101f3e4e0;FUN_7101f3fe20;FUN_7101f41070;FUN_71032cbf30;FUN_710337df20;FUN_710376e070;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103771d60;FUN_71037760f0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778760;FUN_7103779d90;...
- **Files:** [decomp](../decompiled/FUN_7101f35b00__7101f35b00.c)  [cfg](../decompiled/FUN_7101f35b00__7101f35b00.mmd)
- **Clone hash:** `d32446fb2fb8b11b`

```c

void FUN_7101f35b00(long param_1,long param_2,ulong *param_3,long *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long ****pppplVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte ****ppppbVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  undefined **local_1d0;
  ulong local_1c8;
  undefined **local_1c0;
  long *local_1b8;
  undefined **local_1b0;
  long *local_1a8;
  byte ***local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
// ... (1014 more lines)
```

## 40. `FUN_7101b8ce10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b8ce10`  (offset `0x1b8ce10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b8ce10(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 392 bytes / 21 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** next_mov_fade_in;turn_loop;set_rep_pic_mov;mnu_replay_play_next
- **Callees:** FUN_7103776910;FUN_71037780e0;FUN_710377a280;FUN_710377aee0;FUN_71037964b0;FUN_710379e9c0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101b8ce10__7101b8ce10.c)  [cfg](../decompiled/FUN_7101b8ce10__7101b8ce10.mmd)
- **Clone hash:** `98e66b1780a7b7f3`

```c

void FUN_7101b8ce10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0x114) == 0) {
    if (*(char *)(param_1 + 0x128) != '\0') {
      FUN_7103776910(&local_40,param_1 + 8,(long ****)"set_rep_pic_mov",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar3 = local_38;
      if (((*(long **)(local_38 + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
         (lVar1 = *(long *)(*(long *)(DAT_710593bc38 + 8) + 0x78), lVar1 != 0)) {
        param_3 = 0;
        FUN_710379e9c0(*(long **)(local_38 + 8),lVar1,0);
      }
      local_40 = &PTR_FUN_710523d9a8;
      local_38 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    FUN_71037780e0(&local_40,param_1 + 8,(long ****)"next_mov_fade_in",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_40);
    uVar3 = local_38;
    local_40 = &PTR_FUN_710523d9e8;
    local_38 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710377a280(param_1 + 0x28,(byte *)"mnu_replay_play_next",1);
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
// ... (22 more lines)
```

## 41. `FUN_7101ce2ec0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ce2ec0`  (offset `0x1ce2ec0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ce2ec0(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, byte * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8832 bytes / 379 bb / 2 incoming refs
- **Match values:** replay
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

## 42. `FUN_710233b710`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710233b710`  (offset `0x233b710`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710233b710(long * param_1)`
- **Size / BBs / Incoming:** 592 bytes / 39 bb / 1 incoming refs
- **Match values:** Replay
- **Strings touched:** ReplayLoadScene
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_71037266d0;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_710233b710__710233b710.c)  [cfg](../decompiled/FUN_710233b710__710233b710.mmd)
- **Clone hash:** `5d0cff92e6de505a`

```c

void FUN_710233b710(long *param_1)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 local_b0;
  byte local_a8 [64];
  undefined8 local_68;
  byte local_60 [64];
  
  lVar11 = *param_1;
  if (*(int *)((long)param_1 + 0xf4) == 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar8 = 0;
    pcVar1 = "ReplayDownloadScene";
    if (DAT_71053050f0 != 0x7070000) {
      pcVar1 = "ReplayLoadScene";
    }
    while( true ) {
      bVar2 = pcVar1[uVar8];
      if (bVar2 == 0) break;
      local_a8[uVar8] = bVar2;
// ... (89 more lines)
```

## 43. `FUN_7101f302b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f302b0`  (offset `0x1f302b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f302b0(long param_1)`
- **Size / BBs / Incoming:** 952 bytes / 37 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** mnu_replay_movie_edit_keyboard_title_sample
- **Callees:** FUN_7103392360;FUN_7103778950;FUN_710377a310;FUN_71037ab600;<EXTERNAL>::memset;<EXTERNAL>::abort;<EXTERNAL>::nn::swkbd::SetInitialText
- **Files:** [decomp](../decompiled/FUN_7101f302b0__7101f302b0.c)  [cfg](../decompiled/FUN_7101f302b0__7101f302b0.mmd)
- **Clone hash:** `1720a43117ffcdec`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101f302b0(long param_1)

{
  short *psVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  
  if (*(int *)(param_1 + 0xac) == 0) {
    if (*(short *)(param_1 + 0x148) != 0) {
      nn::swkbd::SetInitialText
                ((ShowKeyboardArg *)**(undefined8 **)(param_1 + 0x138),(wchar16 *)(param_1 + 0x148))
      ;
    }
    lVar11 = *(long *)(DAT_710532f850 + 8);
    if (*(char *)(lVar11 + 0xd8) == '\0') {
      plVar2 = (long *)((long *)*DAT_710593ba90)[1];
      for (plVar9 = *(long **)*DAT_710593ba90; plVar9 != plVar2; plVar9 = plVar9 + 1) {
        lVar12 = *plVar9;
        lVar14 = *(long *)(lVar12 + 0x600);
        memset((void *)(lVar14 + 0x198),0,0x264);
        *(undefined8 *)(lVar14 + 0x40c) = 0;
        *(undefined8 *)(lVar14 + 0x424) = 0;
        *(undefined4 *)(lVar14 + 0x480) = 0;
        uVar4 = uRam0000007107459008;
// ... (129 more lines)
```

## 44. `FUN_7101d0ae40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d0ae40`  (offset `0x1d0ae40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d0ae40(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 256 bytes / 14 bb / 4 incoming refs
- **Match values:** replay
- **Strings touched:** mode_replay_off
- **Callers:** FUN_71018b5d60;FUN_71018b67d0;FUN_71018b6d40;FUN_7101d0a1c0
- **Callees:** FUN_7101d0e4a0;FUN_7103778300
- **Files:** [decomp](../decompiled/FUN_7101d0ae40__7101d0ae40.c)  [cfg](../decompiled/FUN_7101d0ae40__7101d0ae40.mmd)
- **Clone hash:** `ac348d98f62ba9e0`

```c

void FUN_7101d0ae40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  
  lVar2 = *(long *)(param_1 + 200);
  for (lVar1 = *(long *)(param_1 + 0xc0); lVar1 != lVar2; lVar1 = lVar1 + 0x1a0) {
    FUN_7101d0e4a0(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = extraout_x1;
  }
  lVar2 = *(long *)(param_1 + 0xe0);
  for (lVar1 = *(long *)(param_1 + 0xd8); lVar1 != lVar2; lVar1 = lVar1 + 0x1a0) {
    FUN_7101d0e4a0(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = extraout_x1_00;
  }
  lVar2 = *(long *)(param_1 + 0xf8);
  for (lVar1 = *(long *)(param_1 + 0xf0); lVar1 != lVar2; lVar1 = lVar1 + 0x1a0) {
    FUN_7101d0e4a0(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = extraout_x1_01;
  }
  lVar2 = *(long *)(param_1 + 0x110);
  for (lVar1 = *(long *)(param_1 + 0x108); lVar1 != lVar2; lVar1 = lVar1 + 0x1a0) {
    FUN_7101d0e4a0(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = extraout_x1_02;
  }
  lVar2 = *(long *)(param_1 + 0x128);
  for (lVar1 = *(long *)(param_1 + 0x120); lVar1 != lVar2; lVar1 = lVar1 + 0x1a0) {
    FUN_7101d0e4a0(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = extraout_x1_03;
  }
  lVar2 = *(long *)(param_1 + 0xb0);
  for (lVar1 = *(long *)(param_1 + 0xa8); lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
// ... (5 more lines)
```

## 45. `FUN_7102384610`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102384610`  (offset `0x2384610`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102384610(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1520 bytes / 70 bb / 1 incoming refs
- **Match values:** replay
- **Strings touched:** online_tournament;tournament_id;event_id;fighter_%d;num_passed_round;num_wins;num_watch_replay
- **Callees:** FUN_710062dc20;FUN_710239d150;FUN_7103264270;FUN_71037266d0;FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort;<EXTERNAL>::std::__shared_weak_count::__release_weak;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save
- **Files:** [decomp](../decompiled/FUN_7102384610__7102384610.c)  [cfg](../decompiled/FUN_7102384610__7102384610.mmd)
- **Clone hash:** `fa8dc39a3675d91f`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7102384610(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  Any64BitId AVar4;
  char cVar5;
  bool bVar6;
  byte ***pppbVar7;
  undefined4 uVar8;
  byte **ppbVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  Any64BitId *pAVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  byte ***local_100;
  byte local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d6;
  undefined8 local_ce;
  undefined8 local_a8;
  Any64BitId local_a0 [64];
  
  lVar14 = DAT_7105329740;
  if (*(int *)((long)param_1 + 0x21c) == 0) {
// ... (245 more lines)
```

## 46. `FUN_7101cc3a00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cc3a00`  (offset `0x1cc3a00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cc3a00(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1688 bytes / 50 bb / 1 incoming refs
- **Match values:** replay
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

## 47. `FUN_7101706100`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101706100`  (offset `0x1706100`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7101706100(long param_1, undefined8 * param_2, long * * * * param_3, undefined8 param_4, long * * * * param_5, undefined8 * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1384 bytes / 49 bb / 1 incoming refs
- **Match values:** Replay
- **Strings touched:** TaskReplay
- **Callers:** FUN_71016acff0
- **Callees:** FUN_710143c4d0;FUN_71017005f0;FUN_710172a900;FUN_710392e290;<EXTERNAL>::memcpy;<EXTERNAL>::memset;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock;<EXTERNAL>::std::recursive_mutex::recursive_mutex
- **Files:** [decomp](../decompiled/FUN_7101706100__7101706100.c)  [cfg](../decompiled/FUN_7101706100__7101706100.mmd)
- **Clone hash:** `9de59aaf2fde9fe2`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_7101706100(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  undefined8 *puVar10;
  long lVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long ***local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined6 uStack_7b8;
  undefined2 local_7b2;
  undefined6 uStack_7b0;
  undefined1 auStack_7a8 [704];
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
// ... (258 more lines)
```

## 48. `FUN_7101cd74e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cd74e0`  (offset `0x1cd74e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cd74e0(long param_1, int param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11372 bytes / 670 bb / 2 incoming refs
- **Match values:** replay
- **Strings touched:** selector_01;set_parts_btn_req_00;set_parts_btn_req_01;set_parts_btn_req_02;set_parts_btn_req_03;set_parts_btn_req_04;set_parts_btn_req_05;set_parts_btn_req_06;mode_empty_03;set_parts_btn_req_07;set_parts_btn_req_08;set_parts_btn_req_09;set_ok_dummy;category_movie;category_replay;category_watch;category_mii;category_stage;category_owner;category_like;selector_03;set_parts_csr_l;set_parts_csr_r;selector_02;set_parts_btn_decide;selector_04;set_parts_reset
- **Callers:** FUN_71018a82a0;FUN_7101cd6190
- **Callees:** FUN_7101989a30;FUN_710337dab0;FUN_710337dac0;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103771a80;FUN_7103771d60;FUN_7103778300;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101cd74e0__7101cd74e0.c)  [cfg](../decompiled/FUN_7101cd74e0__7101cd74e0.mmd)
- **Clone hash:** `f1861f8f759c66e1`

```c

void FUN_7101cd74e0(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  char *pcVar2;
  byte ****ppppbVar3;
  byte ****ppppbVar4;
  byte ****ppppbVar5;
  byte ****ppppbVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  byte ***local_1a0;
  undefined2 local_198;
  undefined4 local_196;
  undefined2 local_192;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined4 local_80;
  undefined **local_70;
  long *local_68;
// ... (1692 more lines)
```

## 49. `FUN_7101cd6f50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cd6f50`  (offset `0x1cd6f50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cd6f50(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 440 bytes / 23 bb / 4 incoming refs
- **Match values:** replay
- **Strings touched:** set_txt_help;category_icon_movie;category_icon_replay;category_icon_watch;category_icon_mii;category_icon_stage;category_icon_owner;category_icon_like
- **Callers:** FUN_7101cd6190
- **Callees:** FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101cd6f50__7101cd6f50.c)  [cfg](../decompiled/FUN_7101cd6f50__7101cd6f50.mmd)
- **Clone hash:** `699e46c4dff8d255`

```c

void FUN_7101cd6f50(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined **local_68;
  undefined8 *local_60;
  undefined **local_58;
  undefined8 *local_50;
  long ***local_48;
  undefined4 local_34;
  
  FUN_7103776910(&local_68,param_2,(long ****)"set_txt_help",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  local_58 = &PTR_FUN_710523d9a8;
  puVar2 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ***)&SUB_00000020;
      param_3 = &local_48;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar2 != (undefined8 *)0x0)) goto LAB_7101cd6fe4;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_7101cd6fe4:
  puVar1 = local_60;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
// ... (57 more lines)
```

## 50. `FUN_710235d040`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710235d040`  (offset `0x235d040`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710235d040(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 25696 bytes / 1747 bb / 1 incoming refs
- **Match values:** Replay
- **Strings touched:** OnlineMeleeConventionSequenceScene;CollectionReplaySequenceScene;CollectionShopSequenceScene;SpiritsCampaignSequenceScene;TrainingSequenceScene;CollectionMovieSequenceScene;OnlineMeleeTournamentSequenceScene;MeleeAllBattleSequenceScene;MeleeNormalSequenceScene;HomeRunContestSequenceScene;KumiteSequenceScene;OptionSequenceScene;StandardSequenceScene;AmiiboSequenceScene;CollectionGetterSequenceScene;CollectionFighterSequenceScene;OnlineShareSequenceScene;OnlineMeleeParallelSequenceScene;MeleeTeamCompeSequenceScene;ChallengerRoomSequenceScene;MeleeVrSequenceScene;CollectionCardSequenceScene;CollectionPlayingSequenceScene;MeleeTournamentSequenceScene;SpiritsBoardSequenceScene;SoundTestSequenceScene;CollectionTipsSequenceScene;OnlineMeleeAnySequenceScene;OnlineMeleeRoomSequenceScene;CollectionPresentSequenceScene;SpiritsOrganizationSequenceScene;SpiritsBoardSpecialSequenceScene;...
- **Callers:** FUN_710235cb00
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_710323b9e0;FUN_7103726240;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_710235d040__710235d040.c)  [cfg](../decompiled/FUN_710235d040__710235d040.mmd)
- **Clone hash:** `05702ea7b548ecbb`

```c

void FUN_710235d040(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined2 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  byte local_c8 [64];
  undefined8 local_88;
  byte local_80 [64];
  
  plVar15 = (long *)(param_1 + 8);
  plVar18 = *(long **)(*plVar15 + 0x20);
// ... (5027 more lines)
```

