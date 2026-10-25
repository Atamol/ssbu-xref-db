# band (funcs=16, hits=57)

Top 50 functions by hit count

## 1. `FUN_7101cf8af0`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cf8af0`  (offset `0x1cf8af0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cf8af0(undefined1[16] param_1, undefined4 param_2, float param_3, long param_4, int param_5, undefined8 param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 6096 bytes / 222 bb / 1 incoming refs
- **Match values:** band
- **Strings touched:** set_txt_rank;set_txt_day;nam_chr2_%02d_%s;fighter_name_l_1;set_txt_fighter_3;fighter_name_l_2;set_txt_fighter_4;set_txt_player_l;set_rep_fighter;set_rep_fighter_1;set_rep_fighter_2;set_rep_shadow;set_rep_shadow2;set_pic_band_champion_00;set_pic_band_champion_03;set_pic_band_champion_05;set_pic_band_champion_06;set_pic_band_champion_08;fighter_name_1;set_txt_fighter_1;fighter_name_2;set_txt_fighter_2;set_txt_player;set_rep_fighter_r;set_rep_fighter_3;set_rep_fighter_4;set_rep_shadow_r;set_rep_shadow2_r;set_pic_band_champion_01;set_pic_band_champion_02;set_pic_band_champion_04;set_pic_band_champion_07;...
- **Callers:** FUN_7101cfa720
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710175dfc0;FUN_7101764000;FUN_7102398db0;FUN_710239d920;FUN_710323f600;FUN_7103262310;FUN_71032631a0;FUN_7103263540;FUN_7103263f80;FUN_71032648e0;FUN_7103266830;FUN_7103741810;FUN_7103776390;FUN_7103776910;...
- **Files:** [decomp](../decompiled/FUN_7101cf8af0__7101cf8af0.c)  [cfg](../decompiled/FUN_7101cf8af0__7101cf8af0.mmd)
- **Clone hash:** `c8feedae23c9a991`

```c

void FUN_7101cf8af0(undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4,
                   int param_5,undefined8 param_6,byte ****param_7,long ****param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  int iVar19;
  uint uVar20;
  ushort *puVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  char *pcVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  long *********ppppppppplVar28;
  byte ****ppppbVar29;
  long ****pppplVar30;
  undefined8 uVar31;
  long lVar32;
  byte *pbVar33;
  uint uVar34;
// ... (1140 more lines)
```

## 2. `FUN_7100436e50`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100436e50`  (offset `0x436e50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100436e50(void)`
- **Size / BBs / Incoming:** 424 bytes / 1 bb / 1 incoming refs
- **Match values:** band
- **Strings touched:** bandman_g;bandman_t;bandman_b;pauline;bandman_d;PlayGuitar;WaitGuitar;PlayGuitarAction;PlayBass;WaitBass;PlayBassAction;PlayTrumpetActionA;PlayTrumpet;WaitTrumpet;PlayTrumpetActionB;PlayDrum
- **Callees:** FUN_71000001c0;FUN_71026af880
- **Files:** [decomp](../decompiled/FUN_7100436e50__7100436e50.c)  [cfg](../decompiled/FUN_7100436e50__7100436e50.mmd)
- **Clone hash:** `57988e661f99ac24`

```c

void FUN_7100436e50(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong local_80;
  char *local_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *local_38;
  
  local_80 = DAT_710511a0b0;
  local_78 = PTR_s_bandman_g_710511a0b8;
  local_60 = DAT_710511a0d0;
  puStack_58 = PTR_s_bandman_t_710511a0d8;
  local_70 = DAT_710511a0c0;
  puStack_68 = PTR_s_bandman_b_710511a0c8;
  local_40 = DAT_710511a0f0;
  local_38 = PTR_s_pauline_710511a0f8;
  local_50 = DAT_710511a0e0;
  puStack_48 = PTR_s_bandman_d_710511a0e8;
  FUN_71026af880(&DAT_710532deb8,&local_80,(long ****)0x5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71000001c0();
  local_80 = DAT_710511a100;
  local_78 = PTR_s_PlayGuitar_710511a108;
  local_60 = DAT_710511a120;
  puStack_58 = PTR_s_WaitGuitar_710511a128;
  local_70 = DAT_710511a110;
  puStack_68 = PTR_s_PlayGuitarAction_710511a118;
  FUN_71026af880(&DAT_710532dee0,&local_80,(long ****)0x3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71000001c0();
// ... (25 more lines)
```

## 3. `FUN_7101cfa720`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cfa720`  (offset `0x1cfa720`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cfa720(undefined1[16] param_1, float param_2, float param_3, long param_4, undefined8 param_5, long * * * * * * * * * param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 1840 bytes / 92 bb / 2 incoming refs
- **Match values:** band
- **Strings touched:** trophy_off;set_dummy;melee;set_pic_band_champion_00;set_pic_band_champion_01;set_pic_band_champion_03;set_pic_band_champion_04
- **Callees:** FUN_7101cf8af0;FUN_71033145d0;FUN_7103775fa0;FUN_7103776910;FUN_7103778300;FUN_7103778760;FUN_71037790a0;FUN_7103779480;FUN_7103779d90;FUN_710379e9c0;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101cfa720__7101cfa720.c)  [cfg](../decompiled/FUN_7101cfa720__7101cfa720.mmd)
- **Clone hash:** `1ce3abf544251530`

```c

void FUN_7101cfa720(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                   undefined8 param_5,long *********param_6,byte ****param_7,long ****param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined4 *puVar7;
  uint *puVar8;
  ulong uVar9;
  byte ****ppppbVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s0_12;
  float extraout_s0_13;
// ... (388 more lines)
```

## 4. `FUN_7101f31930`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f31930`  (offset `0x1f31930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f31930(undefined8 * param_1, long param_2, ulong * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7476 bytes / 419 bb / 1 incoming refs
- **Match values:** band
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

## 5. `FUN_7101bcf940`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bcf940`  (offset `0x1bcf940`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bcf940(long * param_1, long param_2, byte * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9548 bytes / 503 bb / 1 incoming refs
- **Match values:** band
- **Strings touched:** in_menu;out_menu;selector_option;set_main_00;set_main_01;option_csr_grp;set_parts_csr_l;set_parts_csr_r;btn_menu_cursor;set_parts_btn_edit_%02d;set_txt_timer;set_parts_header;set_txt_rule;set_txt_tnmt_title;set_band_color_00;set_band_color_01;btn_keyhelp_skill;set_txt_icon
- **Callers:** FUN_7101bd2320
- **Callees:** FUN_7101414b10;FUN_7101989a30;FUN_7101b85d60;FUN_7101b8b370;FUN_7101bc9cc0;FUN_7101bca4e0;FUN_7101bca4f0;FUN_7101bca5a0;FUN_7101bca5b0;FUN_7101bcc0a0;FUN_7101bcc690;FUN_7101bcd660;FUN_7101bcdd20;FUN_7101bce9f0;FUN_7101bcec20;FUN_7101bcf520;...
- **Files:** [decomp](../decompiled/FUN_7101bcf940__7101bcf940.c)  [cfg](../decompiled/FUN_7101bcf940__7101bcf940.mmd)
- **Clone hash:** `96e3aa88e644d904`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101bcf940(long *param_1,long param_2,byte ******param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  byte ****ppppbVar10;
  bool bVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  byte ***pppbVar18;
  byte ********ppppppppbVar19;
  byte ********ppppppppbVar20;
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
// ... (2046 more lines)
```

## 6. `FUN_7101cfbe40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cfbe40`  (offset `0x1cfbe40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cfbe40(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2704 bytes / 103 bb / 3 incoming refs
- **Match values:** band
- **Strings touched:** set_parts_winner_team;game_team;set_parts_winner_panel;game_single;set_parts_title;set_txt_tnmt_title;set_txt_rule;mel_tournament_chart_rule;progress_off;waiting_type_alive;waiting_type_lose;set_txt_title_prog;set_band_color_00;set_band_color_01
- **Callers:** FUN_71018b7a20;FUN_71018b9f90;FUN_71018bbed0
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_710323eba0;FUN_71032cbf30;FUN_7103397500;FUN_7103773200;FUN_7103776290;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103779d90;FUN_710377a280;FUN_71037a2270;FUN_71037ab600;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101cfbe40__7101cfbe40.c)  [cfg](../decompiled/FUN_7101cfbe40__7101cfbe40.mmd)
- **Clone hash:** `b2f63c6a4b3e6a51`

```c

void FUN_7101cfbe40(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long ***ppplVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long ****pppplVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  char *pcVar11;
  undefined *puVar12;
  byte *pbVar13;
  long *********ppppppppplVar14;
  undefined8 uVar15;
  byte ****ppppbVar16;
  long ****pppplVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint *puVar22;
  ushort uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined1 auVar28 [16];
  undefined **local_1188;
  undefined8 *local_1180;
  undefined **local_1178;
// ... (423 more lines)
```

## 7. `FUN_7102bb3290`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102bb3290`  (offset `0x2bb3290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102bb3290(long param_1, long * param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, byte * * * param_7, long * * * * param_8)`
- **Size / BBs / Incoming:** 44032 bytes / 2720 bb / 1 incoming refs
- **Match values:** band
- **Strings touched:** yak_lift_3fC_01_set;odyssey3f_c_floor;bandman_g;STG_ODYSSEY_GET;DemoCeremonyOpeningStartLoop;cityman;ExcitedMaxJump
- **Callees:** FUN_71003ca470;FUN_7100771690;FUN_7102bbde90;FUN_7102bbe0a0;FUN_7102bbe2b0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::memset;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::abort;<EXTERNAL>::std::string::assign
- **Files:** [decomp](../decompiled/FUN_7102bb3290__7102bb3290.c)  [cfg](../decompiled/FUN_7102bb3290__7102bb3290.mmd)
- **Clone hash:** `f2cd4a43b455b372`

```c

void FUN_7102bb3290(long param_1,long *param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   byte ****param_6,byte ***param_7,long ****param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  long *plVar9;
  long ****pppplVar10;
  int iVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  long ***ppplVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  char *pcVar22;
  int iVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  long lVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined4 *puVar31;
  byte *pbVar32;
  ulong uVar33;
  byte *pbVar34;
  byte *pbVar35;
// ... (8566 more lines)
```

## 8. `FUN_71000d53a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d53a0`  (offset `0xd53a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d53a0(void)`
- **Size / BBs / Incoming:** 392 bytes / 17 bb / 2 incoming refs
- **Match values:** Band
- **Strings touched:** NexJoinMeshJob::CompleteProcess;NexJoinMeshJob::WaitBandwidthCheck
- **Callees:** FUN_7100151ef0;FUN_7100151fe0;FUN_7100152020;FUN_7100161fb0;FUN_7100192f60;FUN_7100193560
- **Files:** [decomp](../decompiled/FUN_71000d53a0__71000d53a0.c)  [cfg](../decompiled/FUN_71000d53a0__71000d53a0.mmd)
- **Clone hash:** `929958c318dc8f0d`

```c

undefined8 FUN_71000d53a0(long param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ushort uVar7;
  int aiStack_60 [4];
  
  lVar4 = FUN_7100192f60(DAT_71052adfc0);
  if (*(char *)(lVar4 + 0x51) != '\0') {
    *(code **)(param_1 + 0x30) = FUN_710018cf30;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NexJoinMeshJob::CompleteProcess";
    return 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 3;
  if (*(ushort *)(param_1 + 0x6c) < 2) {
LAB_71000d54c4:
    *(char **)(param_1 + 0x40) = "NexJoinMeshJob::WaitBandwidthCheck";
    *(code **)(param_1 + 0x30) = FUN_71000d5530;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 5;
  }
  uVar3 = FUN_7100151fe0(lVar4);
  if ((uVar3 & 1) == 0) {
    FUN_7100152020(lVar4);
    return 5;
  }
  plVar5 = (long *)FUN_7100161fb0(DAT_71052add68);
  aiStack_60[0] = 0;
  aiStack_60[1] = 0x800;
  aiStack_60[2] = 0;
  (**(code **)(*plVar5 + 0x68))(plVar5,aiStack_60);
  if (1 < *(ushort *)(param_1 + 0x6c)) {
    uVar7 = 2;
// ... (21 more lines)
```

## 9. `FUN_71019401b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019401b0`  (offset `0x19401b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019401b0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10064 bytes / 382 bb / 1 incoming refs
- **Match values:** band
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

## 10. `FUN_71020fbb90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** BAND
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

## 11. `FUN_71000d5330`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d5330`  (offset `0xd5330`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d5330(void)`
- **Size / BBs / Incoming:** 100 bytes / 1 bb / 1 incoming refs
- **Match values:** Band
- **Strings touched:** NexJoinMeshJob::CompleteProcess;NexJoinMeshJob::StartBandwidthCheck
- **Callees:** FUN_71001936e0
- **Files:** [decomp](../decompiled/FUN_71000d5330__71000d5330.c)  [cfg](../decompiled/FUN_71000d5330__71000d5330.mmd)
- **Clone hash:** `f91636cd2f884574`

```c

undefined8 FUN_71000d5330(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  
  bVar4 = FUN_71001936e0(DAT_71052adfc0);
  bVar3 = (bVar4 & 1) == 0;
  pcVar1 = "NexJoinMeshJob::StartBandwidthCheck";
  if (bVar3) {
    pcVar1 = "NexJoinMeshJob::CompleteProcess";
  }
  *(char **)(param_1 + 0x40) = pcVar1;
  pcVar2 = FUN_71000d53a0;
  if (bVar3) {
    pcVar2 = FUN_710018cf30;
  }
  *(code **)(param_1 + 0x30) = pcVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 12. `FUN_7103979af0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103979af0`  (offset `0x3979af0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7103979af0(long param_1, int * param_2, int * param_3, int * param_4)`
- **Size / BBs / Incoming:** 1428 bytes / 70 bb / 2 incoming refs
- **Match values:** Band
- **Strings touched:** LightReverb;Compressor;Delay;Freeverb;Distortion;NUCompressor;chara/chara_4/chara_4_;Vita_Distortion;dys_yoga03_l_03_set;PitchShift;DownMix;SpeakerEmulator;Radio;Ambisonic;Binaural;EarlyReflection;SingleChannel_Freeverb;EQ_8Band
- **Callers:** FUN_7103979500
- **Callees:** FUN_7103986e80;FUN_71039873e0;<EXTERNAL>::strncmp;<EXTERNAL>::memset;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock
- **Files:** [decomp](../decompiled/FUN_7103979af0__7103979af0.c)  [cfg](../decompiled/FUN_7103979af0__7103979af0.mmd)
- **Clone hash:** `1055e3534512d198`

```c

undefined8 FUN_7103979af0(long param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *__s;
  undefined8 uVar7;
  long lVar8;
  int local_6c;
  int local_68;
  int local_64;
  
  iVar5 = strncmp((char *)param_2,"LightReverb",0x1f);
  if (iVar5 == 0) {
    iVar5 = 0x56524d49;
  }
  else {
    iVar5 = 0x4d4f4342;
    iVar6 = strncmp((char *)param_2,"Compressor",0x1f);
    if (iVar6 != 0) {
      iVar5 = 0x51454245;
      iVar6 = strncmp((char *)param_2,"EQ",0x1f);
      if (iVar6 == 0) {
        iVar5 = 0x5145504e;
      }
      else {
        iVar6 = strncmp((char *)param_2,"Delay",0x1f);
        if (iVar6 == 0) {
          iVar5 = 0x594c444e;
        }
        else {
          iVar6 = strncmp((char *)param_2,"Freeverb",0x1f);
          if (iVar6 == 0) {
            iVar5 = 0x42565246;
          }
// ... (188 more lines)
```

## 13. `FUN_710194b720`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710194b720`  (offset `0x194b720`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710194b720(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 8224 bytes / 424 bb / 1 incoming refs
- **Match values:** band
- **Strings touched:** %s_%02d.bntx;header_band;set_txt_title;cam_shop%d_shop_name;selector_menu;set_parts_menu_%02d;set_parts_talk;set_parts_sp;selector_return;set_btn_return;color_shop;selector_slot;set_parts_slot_%02d;set_parts_supportitem;set_parts_energy;set_parts_skillpiece;set_parts_excl;set_rep_spirit;set_rep_shadow;set_txt_category;set_txt_price_sp;chara/chara_4/chara_4_;set_parts_discount;set_txt_value;set_parts_new;set_parts_atr_bg;set_parts_class;shop_campaign;card_null;effect_rarity_hide;head_all_hide;mode_empty_03;...
- **Callers:** FUN_710194d810
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_7101989a30;FUN_7101af86a0;FUN_7101e6c410;FUN_7101e6fd70;FUN_7101e941f0;FUN_7101e945c0;FUN_7101e95110;FUN_7101e95dd0;FUN_7101e965f0;FUN_7101e99cb0;FUN_7101e9a160;FUN_7103238e70;FUN_7103239920;FUN_7103239d20;...
- **Files:** [decomp](../decompiled/FUN_710194b720__710194b720.c)  [cfg](../decompiled/FUN_710194b720__710194b720.mmd)
- **Clone hash:** `42d093a7ed55fbae`

```c

void FUN_710194b720(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  byte ***pppbVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte **ppbVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ushort uVar18;
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
// ... (1584 more lines)
```

## 14. `FUN_7100156720`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100156720`  (offset `0x156720`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_7100156720(undefined8 param_1)`
- **Size / BBs / Incoming:** 392 bytes / 33 bb / 2 incoming refs
- **Match values:** Band
- **Strings touched:** KeepAlive;chara/chara_4/chara_4_;Station;(KickoutReason_Unknown PROTOCOL NAME);SyncClock;Local;Direct;BandwidthCheck;Unreliable;RoundrobinUnreliable;select_item;Clone;Atomic;Event;Clock;InterpolationClock;NODE_PRE_REFRACT_BLEND;Voice;Reliable;BroadcastReliable;StreamBroadcastReliable;ReliableBroadcast;Session;Lobby;Feedback;RelayService;WanNat
- **Callers:** FUN_7100154a40
- **Files:** [decomp](../decompiled/FUN_7100156720__7100156720.c)  [cfg](../decompiled/FUN_7100156720__7100156720.mmd)
- **Clone hash:** `7d2ee8f7c1fc3923`

```c

char * FUN_7100156720(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = "KeepAlive";
  switch((uint)((ulong)param_1 >> 0x18) & 0xff) {
  case 8:
    goto switchD_7100156748_caseD_8;
  default:
    pcVar1 = "(KickoutReason_Unknown PROTOCOL NAME)";
switchD_7100156748_caseD_8:
    return pcVar1;
  case 0x14:
    return "Station";
  case 0x18:
    return "Mesh";
  case 0x1c:
    return "SyncClock";
  case 0x24:
    return "Local";
  case 0x28:
    return "Direct";
  case 0x2c:
    return "Net";
  case 0x34:
    return "Nat";
  case 0x44:
    return "Lan";
  case 0x54:
    return "BandwidthCheck";
  case 0x58:
    return "Rtt";
  case 0x65:
    return "Sync";
  case 0x68:
    return "Unreliable";
  case 0x6c:
    return "RoundrobinUnreliable";
// ... (33 more lines)
```

## 15. `FUN_7101e691f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e691f0`  (offset `0x1e691f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e691f0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 4260 bytes / 185 bb / 1 incoming refs
- **Match values:** band
- **Strings touched:** header_band;set_txt_title;cam_searchfield%d_field_name;selector_menu;set_parts_menu_%02d;set_parts_talk;selector_return;set_btn_return;color_search;gauge_in;gauge_out;gauge_loop;gauge_progress;set_txt_resttime;mode_empty_03;set_enemy_pos;/dev/urandom;set_parts_slot_%02d;set_rep_spirit;set_rep_spirit_shadow;set_parts_effect;move_%02d;anime_tresure_light;bg_inner_scene_%02d;bg_move;overlay_in_%02d;overlay_out_%02d;overlay_out_complete
- **Callers:** FUN_7101947560
- **Callees:** FUN_71003a4ca0;FUN_7101d71a30;FUN_7101e945c0;FUN_7101e95110;FUN_7101e95dd0;FUN_7101e965f0;FUN_7101e97110;FUN_71032a7800;FUN_71032cbf30;FUN_7103776290;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_7103778430;FUN_710377a120;...
- **Files:** [decomp](../decompiled/FUN_7101e691f0__7101e691f0.c)  [cfg](../decompiled/FUN_7101e691f0__7101e691f0.mmd)
- **Clone hash:** `6425bfda100cc003`

```c

void FUN_7101e691f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  long ***ppplVar6;
  byte ***pppbVar7;
  undefined **ppuVar8;
  uint uVar9;
  byte **ppbVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long **pplVar13;
  ushort uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined *puVar15;
  char *pcVar16;
  undefined8 uVar17;
  byte ****ppppbVar18;
  char *pcVar19;
  long ****in_x4;
  long ****pppplVar20;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar21;
  ulong uVar22;
  undefined ***pppuVar23;
  undefined8 *puVar24;
  long ****pppplVar25;
// ... (817 more lines)
```

## 16. `FUN_7101e62bd0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e62bd0`  (offset `0x1e62bd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e62bd0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 2316 bytes / 81 bb / 1 incoming refs
- **Match values:** band
- **Strings touched:** header_band;set_txt_title;cam_searchfield%d_field_name;selector_slot;set_parts_cursor;set_parts_slot_%02d;selector_menu;set_parts_menu_%02d;menu_btn_1;cam_searchfield_go;sp_off;plus_on;set_parts_talk;selector_return;set_btn_return;color_search;selector_keyhelp;btn_keyhelp_remove
- **Callers:** FUN_7101947560
- **Callees:** FUN_71003a4ca0;FUN_7101989a30;FUN_7101e945c0;FUN_7101e95110;FUN_7101e95dd0;FUN_7101e965f0;FUN_7101e96fc0;FUN_7101e9aa40;FUN_71032a7800;FUN_71032cbf30;FUN_710337d5b0;FUN_710337d5c0;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103772070;...
- **Files:** [decomp](../decompiled/FUN_7101e62bd0__7101e62bd0.c)  [cfg](../decompiled/FUN_7101e62bd0__7101e62bd0.mmd)
- **Clone hash:** `f0edc3d9b2381195`

```c

void FUN_7101e62bd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  int iVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  byte ****ppppbVar13;
  long ****in_x4;
  long ****pppplVar14;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  undefined **local_1c0;
  ulong local_1b8;
  byte ***local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined1 *local_198;
// ... (314 more lines)
```

