# stock (funcs=33, hits=101)

Top 50 functions by hit count

## 1. `FUN_7101ab9340`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ab9340`  (offset `0x1ab9340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ab9340(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * * * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5072 bytes / 230 bb / 1 incoming refs
- **Match values:** stock
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

## 2. `FUN_7101b3beb0`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b3beb0`  (offset `0x1b3beb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b3beb0(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4416 bytes / 221 bb / 1 incoming refs
- **Match values:** stock
- **Strings touched:** dig_1p;dig_2p;num_1p_1;num_1p_2;num_2p_1;num_2p_2;stock_1p;stock_2p;set_rep_stock_1p_00;set_rep_stock_1p_01;set_rep_stock_1p_02;set_rep_stock_1p_03;set_rep_stock_1p_04;set_txt_stock_1p_00;set_rep_stock_2p_00;set_rep_stock_2p_01;set_rep_stock_2p_02;set_rep_stock_2p_03;set_rep_stock_2p_04;set_txt_stock_2p_00
- **Callers:** FUN_710138d270
- **Callees:** FUN_7101414b10;FUN_71032cbf30;FUN_7103773200;FUN_7103776910;FUN_71037780e0;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101b3beb0__7101b3beb0.c)  [cfg](../decompiled/FUN_7101b3beb0__7101b3beb0.mmd)
- **Clone hash:** `a51361ebaa276063`

```c

void FUN_7101b3beb0(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
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
  
  *param_1 = &PTR_FUN_71050aac30;
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
  plVar1 = (long *)FUN_710392e290(0x10,0x170,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000170;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x170,param_3,param_4,param_5,param_6,param_7,param_8
// ... (865 more lines)
```

## 3. `FUN_7101b7a8f0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b7a8f0`  (offset `0x1b7a8f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b7a8f0(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 6696 bytes / 339 bb / 1 incoming refs
- **Match values:** stock
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

## 4. `FUN_7101ccd6f0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ccd6f0`  (offset `0x1ccd6f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ccd6f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 760 bytes / 33 bb / 1 incoming refs
- **Match values:** stock
- **Strings touched:** set_rep_stockicon_%02d;set_rep_mfshot;set_rep_pic_stage_l;set_rep_bgshot_l;fade_in_s
- **Callees:** FUN_7103775fa0;FUN_7103776910;FUN_7103778300;FUN_7103779650;FUN_71037964b0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101ccd6f0__7101ccd6f0.c)  [cfg](../decompiled/FUN_7101ccd6f0__7101ccd6f0.mmd)
- **Clone hash:** `e4deb174666a44d6`

```c

void FUN_7101ccd6f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0xdc) == 0) {
    lVar1 = **(long **)(param_1 + 0xf0) + 8;
    FUN_7103776910(&local_40,lVar1,(long ****)"set_rep_stockicon_%02d",0,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103779650(local_38);
    uVar2 = local_38;
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_7103776910(&local_40,lVar1,(long ****)"set_rep_stockicon_%02d",1,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103779650(local_38);
    uVar2 = local_38;
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_7103776910(&local_40,lVar1,(long ****)"set_rep_stockicon_%02d",2,param_4,param_5,param_6,
                   param_7,param_8);
// ... (107 more lines)
```

## 5. `FUN_7101b69480`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b69480`  (offset `0x1b69480`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b69480(void)`
- **Size / BBs / Incoming:** 40408 bytes / 2245 bb / 4 incoming refs
- **Match values:** stock
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

## 6. `FUN_7101c12580`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c12580`  (offset `0x1c12580`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c12580(long param_1, long param_2, long param_3, char * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2896 bytes / 101 bb / 3 incoming refs
- **Match values:** stock
- **Strings touched:** set_parts_det_00;set_txt_det_title_01;set_txt_det_title_00;set_txt_det_title_00_sd;mel_rule_edit_stock_em;mel_rule_edit_stamina_em;mel_rule_edit_time_stock_em;mel_rule_team_edit_time_stock_stamina;mel_rule_edit_time_inifinity_stock_em;mel_rule_team_edit_time_inifinity_stock_stamina
- **Callers:** FUN_710186c570;FUN_7101c0c4f0;FUN_7101c11360
- **Callees:** FUN_7103776640;FUN_7103776910;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c12580__7101c12580.c)  [cfg](../decompiled/FUN_7101c12580__7101c12580.mmd)
- **Clone hash:** `3f7f78675d2ff0db`

```c

void FUN_7101c12580(long param_1,long param_2,long param_3,char *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  byte *pbVar14;
  byte abStack_330 [64];
  undefined8 local_2f0;
  byte abStack_2e8 [64];
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined2 local_290;
  undefined8 local_28e;
  undefined1 local_286;
  undefined8 local_260;
  byte abStack_258 [64];
  undefined8 local_218;
  byte abStack_210 [64];
  undefined8 local_1d0;
  byte abStack_1c8 [64];
  undefined8 local_188;
  byte abStack_180 [64];
  undefined8 local_140;
  byte local_138 [64];
  undefined8 local_f8;
  byte abStack_f0 [64];
// ... (549 more lines)
```

## 7. `FUN_7101ac6fd0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac6fd0`  (offset `0x1ac6fd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac6fd0(long param_1, long param_2, long param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 528 bytes / 18 bb / 2 incoming refs
- **Match values:** stock
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

## 8. `FUN_7101ce5ab0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ce5ab0`  (offset `0x1ce5ab0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ce5ab0(long param_1, undefined8 * param_2, long param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5476 bytes / 241 bb / 2 incoming refs
- **Match values:** stock
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

## 9. `FUN_71020fbb90`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** STOCK
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

## 10. `FUN_7101cf2f80`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cf2f80`  (offset `0x1cf2f80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cf2f80(long * param_1, long param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1764 bytes / 64 bb / 1 incoming refs
- **Match values:** stock
- **Strings touched:** set_txt_modename;mnu_share_data_kind_team;set_txt_modename_00;mnu_share_data_kind_1on1;mnu_share_data_kind_melee;mnu_share_data_kind_other;set_txt_time;set_rep_stockicon_%02d_;set_rep_stockicon_%02d;stockicon%02d
- **Callers:** FUN_7101cbefe0
- **Callees:** FUN_710062dc20;FUN_7101cf3670;FUN_710323f330;FUN_71032631a0;FUN_71032632a0;FUN_71032648e0;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_710377a120;FUN_710377a310;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error
- **Files:** [decomp](../decompiled/FUN_7101cf2f80__7101cf2f80.c)  [cfg](../decompiled/FUN_7101cf2f80__7101cf2f80.mmd)
- **Clone hash:** `c9421520ffa51851`

```c

void FUN_7101cf2f80(long *param_1,long param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  long ****pppplVar12;
  long *********ppppppppplVar13;
  ulong uVar14;
  byte ****ppppbVar15;
  int *piVar16;
  long ***ppplVar17;
  long lVar18;
  ulong uVar19;
  char cVar20;
  long lVar21;
  undefined1 *puVar22;
  int *__dest;
  long lVar23;
  long ****pppplVar24;
  long ****pppplVar25;
  long lVar26;
  long ***local_108;
  ulong local_100 [8];
  undefined **local_c0;
  ulong local_b8;
  int *local_b0;
  int *local_a8;
  int *local_a0;
  undefined **local_98;
// ... (297 more lines)
```

## 11. `FUN_7101c9ed20`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c9ed20`  (offset `0x1c9ed20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c9ed20(long param_1, long param_2, undefined1 * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 488 bytes / 38 bb / 3 incoming refs
- **Match values:** stock
- **Strings touched:** set_txt_help;mnu_anyone_rule_edit_help_1on1;mnu_anyone_rule_edit_help_stamina;mnu_anyone_rule_edit_help_stamina_n;mnu_anyone_rule_edit_help_stock_n;mnu_anyone_rule_edit_help_time_end_n;mnu_anyone_rule_edit_help_stg_all;mnu_anyone_rule_edit_help_customize;mnu_anyone_rule_edit_help_charge_off;mnu_anyone_rule_edit_help_time_n;mnu_anyone_rule_edit_help_charge_on;mnu_anyone_rule_edit_help_mel;mnu_anyone_rule_edit_help_mel_team;mnu_anyone_rule_edit_help_time;mnu_anyone_rule_edit_help_stock;mnu_anyone_rule_edit_help_no_gimmick;mnu_anyone_rule_edit_help_battlefield;mnu_anyone_rule_edit_help_end;mnu_anyone_rule_edit_help_battlefield_s
- **Callers:** FUN_7101c9c5e0;FUN_7101c9def0
- **Callees:** FUN_7103776910;FUN_710377a120;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c9ed20__7101c9ed20.c)  [cfg](../decompiled/FUN_7101c9ed20__7101c9ed20.mmd)
- **Clone hash:** `f328c4e5f9a0ba85`

```c

void FUN_7101c9ed20(long param_1,long param_2,undefined1 *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined **local_38;
  ulong local_30;
  ushort local_24 [2];
  
  puVar4 = param_3;
  FUN_7103776910(&local_38,param_1 + 0x118,(long ****)"set_txt_help",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  switch(*param_3) {
  case 0:
    cVar1 = *(char *)(param_2 + 1);
    if (cVar1 == '\x01') {
      pcVar3 = "mnu_anyone_rule_edit_help_mel";
    }
    else if (cVar1 == '\x02') {
      pcVar3 = "mnu_anyone_rule_edit_help_mel_team";
    }
    else {
      if (cVar1 != '\x03') goto switchD_7101c9ed68_default;
      pcVar3 = "mnu_anyone_rule_edit_help_1on1";
    }
    break;
  case 1:
    cVar1 = *(char *)(param_2 + 2);
    if (cVar1 == '\x01') {
      pcVar3 = "mnu_anyone_rule_edit_help_time";
    }
    else if (cVar1 == '\x02') {
      pcVar3 = "mnu_anyone_rule_edit_help_stock";
    }
    else {
      if (cVar1 != '\x03') goto switchD_7101c9ed68_default;
// ... (69 more lines)
```

## 12. `FUN_7101ee9990`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ee9990`  (offset `0x1ee9990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ee9990(long * param_1)`
- **Size / BBs / Incoming:** 12376 bytes / 586 bb / 1 incoming refs
- **Match values:** stock
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

## 13. `FUN_7101f45620`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** STOCK;stock
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

## 14. `FUN_7101db8810`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101db8810`  (offset `0x1db8810`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101db8810(undefined1[16] param_1, long * * * * * * * * param_2, undefined8 * param_3, undefined8 param_4, undefined8 param_5, byte * * * * param_6, long * * * * param_7, undefined8 * param_8, long * * * param_9, long * * * param_10)`
- **Size / BBs / Incoming:** 13408 bytes / 669 bb / 1 incoming refs
- **Match values:** stock
- **Strings touched:** fighter_cp_boss;fighter_cp_default;fighter_cp_light;fighter_cp_dark;spi_%s;nam_chr1_%02d_%s;set_parts_hbg_00;spirit_null;set_parts_bg_00;set_txt_fighter_00;mode_empty_03;set_parts_spirit_name_00;set_txt_help;attacker;set_parts_hbg_01;set_parts_bg_01;campaign_boss;campaign_light;anim_in;anim_loop;set_txt_fighter_01;cam_info_piece_boss_unknown;set_txt_spirit_01;set_parts_spirit_name_02;supporter;mnu_spirits_challengeboard_detail_target_fighter;set_parts_spirit_name_01;set_parts_spirit_00;set_parts_spirit_01;spirit_cp_show;spirit_cp_hide;set_rep_fighter_00;...
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710175dfc0;FUN_7101764000;FUN_7101dbbf10;FUN_71024076d0;FUN_7102499260;FUN_71024999d0;FUN_7102510850;FUN_71025ae6d0;FUN_71025b12c0;FUN_71025b39a0;FUN_7103238a70;FUN_710323c4e0;FUN_710323f330;FUN_710323faf0;...
- **Files:** [decomp](../decompiled/FUN_7101db8810__7101db8810.c)  [cfg](../decompiled/FUN_7101db8810__7101db8810.mmd)
- **Clone hash:** `eb5aaa5112c257e3`

```c

void FUN_7101db8810(undefined1 param_1 [16],long ********param_2,undefined8 *param_3,
                   undefined8 param_4,undefined8 param_5,byte ****param_6,long ****param_7,
                   undefined8 *param_8,long ***param_9,long ***param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  long ***ppplVar8;
  byte ***pppbVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long ****pppplVar15;
  byte **ppbVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long **pplVar20;
  long lVar21;
  byte ***pppbVar22;
  long ***ppplVar23;
  undefined1 uVar24;
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
// ... (2275 more lines)
```

## 15. `FUN_7101c108f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c108f0`  (offset `0x1c108f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c108f0(long param_1, undefined1 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 652 bytes / 41 bb / 3 incoming refs
- **Match values:** stock
- **Strings touched:** bg_banner_rule_detail;bg_banner_rule_hp;bg_banner_team_com;bg_banner_time_limit;bg_banner_stock_num;bg_banner_hp_mode;bg_banner_victory_cond;bg_banner_spirit_icon;bg_banner_cp_level;bg_banner_handicap_damage;bg_banner_stage_select;bg_banner_item_switch;bg_banner_stage_switch;bg_banner_team_attack;bg_banner_def_reaction;bg_banner_charge_final;bg_banner_handicap_boost;bg_banner_stage_gimmick;bg_banner_stage_number;bg_banner_stage_change;bg_banner_pause;bg_banner_score_disp;bg_banner_battle_max_num;bg_banner_scaledown_stage;bg_banner_recovery_value;bg_banner_damage_disp;bg_banner_allbattle_unreversal;bg_banner_drop_bomb;bg_banner_rule_stock;bg_banner_rule_time
- **Callers:** FUN_7101c0cd40;FUN_7101c0e810;FUN_7101c10630
- **Callees:** FUN_7103776390;FUN_7103778300;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c108f0__7101c108f0.c)  [cfg](../decompiled/FUN_7101c108f0__7101c108f0.mmd)
- **Clone hash:** `b5c0bc5b38099e58`

```c

void FUN_7101c108f0(long param_1,undefined1 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined **local_30;
  ulong local_28;
  
  FUN_7103776390(&local_30,(undefined8 *)(**(long **)(param_1 + 0x6a8) + 8),param_3,param_4,param_5,
                 param_6,param_7,param_8);
  switch(param_2) {
  case 2:
    if (*(char *)(param_1 + 0x659) == '\x01') {
      pcVar3 = "bg_banner_rule_stock";
    }
    else if (*(char *)(param_1 + 0x659) == '\x02') {
      pcVar3 = "bg_banner_rule_hp";
    }
    else {
      pcVar3 = "bg_banner_rule_time";
    }
    break;
  case 3:
    pcVar3 = "bg_banner_team_com";
    break;
  case 4:
    pcVar3 = "bg_banner_time_limit";
    break;
  case 5:
    pcVar3 = "bg_banner_stock_num";
    break;
  case 6:
    pcVar3 = "bg_banner_hp_mode";
    break;
  case 7:
    pcVar3 = "bg_banner_victory_cond";
    break;
// ... (87 more lines)
```

## 16. `FUN_7101c8b340`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c8b340`  (offset `0x1c8b340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c8b340(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6720 bytes / 329 bb / 5 incoming refs
- **Match values:** stock
- **Strings touched:** set_txt_filter_00;set_txt_filter_00_old;set_txt_filter_01;rule_hp;set_Parts_rule_on_00;set_txt_help;set_Parts_rule_off_00;rule_stock;set_Parts_rule_on_01;set_Parts_rule_off_01;rule_time;set_Parts_rule_on_02;set_Parts_rule_off_02;color_08;color_09;txt_move_%s
- **Callers:** FUN_7101c84b00;FUN_7101c8aca0;FUN_7101c8af80
- **Callees:** FUN_7101704ba0;FUN_7101797350;FUN_71017ab0c0;FUN_7101c6ec50;FUN_7101c6ee80;FUN_7101c6f7f0;FUN_7101c83c40;FUN_7101c8d890;FUN_7101c8da70;FUN_7103771d60;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_710377a120;FUN_71037a2270;...
- **Files:** [decomp](../decompiled/FUN_7101c8b340__7101c8b340.c)  [cfg](../decompiled/FUN_7101c8b340__7101c8b340.mmd)
- **Clone hash:** `1ffd7a071f9dbe49`

```c

void FUN_7101c8b340(long param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  byte ****ppppbVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  char cVar20;
  uint uVar21;
  byte bVar22;
  long *plVar23;
  undefined8 *puVar24;
  byte *local_610;
  byte *local_608;
  byte *local_600;
  undefined8 *local_5f8;
  byte *local_5f0;
  byte *local_5e8;
  byte *local_5e0;
  undefined8 *local_5d8;
  undefined ***local_5d0;
  undefined **local_5c8;
  undefined8 local_5c0;
// ... (1221 more lines)
```

## 17. `FUN_7101b518d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b518d0`  (offset `0x1b518d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b518d0(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2524 bytes / 111 bb / 1 incoming refs
- **Match values:** stock
- **Strings touched:** set_icon_%02d;set_tex_stock
- **Callers:** FUN_71013a4690
- **Callees:** FUN_71003a4ca0;FUN_7101414b10;FUN_71032cbf30;FUN_7103773200;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_7101b518d0__7101b518d0.c)  [cfg](../decompiled/FUN_7101b518d0__7101b518d0.mmd)
- **Clone hash:** `858ddc2a3e45af63`

```c

void FUN_7101b518d0(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar5;
  byte ****ppppbVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_100 [32];
  undefined8 *local_e0;
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  long ***local_a8;
  byte ***apppbStack_a0 [8];
  
  *param_1 = &PTR_FUN_71050ab0f0;
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
  plVar1 = (long *)FUN_710392e290(0x10,0x1a0,param_3,param_4,param_5,param_6,param_7,param_8);
// ... (507 more lines)
```

## 18. `FUN_710215b8e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710215b8e0`  (offset `0x215b8e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710215b8e0(void)`
- **Size / BBs / Incoming:** 8640 bytes / 19 bb / 1 incoming refs
- **Match values:** Stock
- **Strings touched:** FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_START;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_NORMAL_WEAPON_KIND;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_N_KIND_0;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_N_KIND_1;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_N_FLYING_OBJECT_KIND;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_PREV_KIND;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_KIND;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_TABEMONO_COUNT;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_TABEMONO_FRAME;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_PANEL_7_INVALID_FRAME;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_STOCK_ICON_STATE;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_TERM;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_GAUGE;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_ATTACK;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_START;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_CHARGE_MAX;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HIT_TABEMONO;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_SPECIAL_HI;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_INHERIT_SPEED;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_FINAL_ATTACK;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_FINAL_WATER;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_REFLECTOR;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_REFLECTOR_BREAK;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_TERM;ftGameWatchStockIconState;FIGHTER_GAMEWATCH_ABSORBER_GROUP_SPECIAL_LW;FIGHTER_GAMEWATCH_ABSORBER_GROUP_NUM;FIGHTER_GAMEWATCH_ABSORBER_KIND_SPECIAL_LW;FIGHTER_GAMEWATCH_ABSORBER_KIND_NUM;FIGHTER_GAMEWATCH_REFLECTOR_GROUP_SPECIAL_LW;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710215b8e0__710215b8e0.c)  [cfg](../decompiled/FUN_710215b8e0__710215b8e0.mmd)
- **Clone hash:** `f0dba0b6d424dcc5`

```c

void FUN_710215b8e0(void)

{
  byte ****in_x3;
  byte ****ppppbVar1;
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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_NORMAL_WEAPON_KIND",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_N_KIND_0",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_N_KIND_1",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_N_FLYING_OBJECT_KIND",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_PREV_KIND",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_KIND",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_TABEMONO_COUNT"
                 ,(undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_TABEMONO_FRAME"
                 ,(undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_PANEL_7_INVALID_FRAME",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_STOCK_ICON_STATE",
// ... (967 more lines)
```

## 19. `FUN_7101744340`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101744340`  (offset `0x1744340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101744340(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6768 bytes / 29 bb / 2 incoming refs
- **Match values:** stock
- **Strings touched:** sum_record_count;common_boot_count;common_working_time;common_play_time;common_melee_total_count;common_melee_offline_count;common_melee_adhoc_count;common_vs_time_melee_count;common_vs_stock_melee_count;common_vs_life_melee_count;common_vs_melee_5_8_count;common_vs_melee_8_count;common_vs_melee_player_count;common_vs_melee_reset_count;common_damage_total_count;common_kill_total_count;common_suicide_total_count;common_gold_get_count;common_gold_used_count;common_sp_get_count;melee_time;melee_time_total;melee_normal_count;melee_team_compe_count;melee_sp_various_count;NODE_PRE_REFRACT_BLEND;melee_sp_suddendeath_count;melee_sp_all_battle_count;melee_tournament_count;spirits_have_count;spirits_get_count;spirits_summon_count;...
- **Callers:** FUN_71022d23e0
- **Callees:** FUN_71023078d0;FUN_7102309fc0;FUN_7103264270;FUN_71032a7800;FUN_71032b1e40;FUN_710375aa90;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save
- **Files:** [decomp](../decompiled/FUN_7101744340__7101744340.c)  [cfg](../decompiled/FUN_7101744340__7101744340.mmd)
- **Clone hash:** `a9cb12115ef58153`

```c

void FUN_7101744340(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  void *__s;
  long ****pppplVar5;
  long ****pppplVar6;
  long lVar7;
  long ***local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined1 local_ac;
  ulong local_68;
  undefined4 local_60;
  ulong local_58;
  ulong *local_50;
  ulong local_48;
  
  pppplVar5 = &local_c0;
  pppplVar6 = &local_c0;
  if (DAT_7105328748 != (long *)0x0) goto LAB_7101744508;
  plVar3 = (long *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_48 = local_48 & 0xffffffff00000000;
      local_c0 = (long ***)&DAT_00000010;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_48);
      param_3 = pppplVar5;
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0x10,pppplVar5,param_4,param_5,param_6,param_7,
                                          param_8), param_3 = pppplVar5, plVar3 != (long *)0x0))
      goto LAB_71017443c0;
    }
    plVar3 = (long *)0x0;
  }
// ... (522 more lines)
```

## 20. `FUN_7101c13400`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c13400`  (offset `0x1c13400`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c13400(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2096 bytes / 125 bb / 1 incoming refs
- **Match values:** stock
- **Strings touched:** rule_icon_off;rule_icon_on;rule_detail;indent_on;btntype_all;set_txt_title;set_txt_title_sel;set_icn_rule;set_icn_rule_sel;set_icn_rule_det_pl;rule_time;btntype_normal;set_txt_rule_00;set_txt_rule_01;rule_stamina;rule_stock
- **Callees:** FUN_71000001c0;FUN_710062dc20;FUN_7101764000;FUN_7101c043c0;FUN_7101c045a0;FUN_7101c08ff0;FUN_7101c09380;FUN_7101c0c470;FUN_710323f760;FUN_71032821b0;FUN_7103396910;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_710377a120;FUN_7103796f20;...
- **Files:** [decomp](../decompiled/FUN_7101c13400__7101c13400.c)  [cfg](../decompiled/FUN_7101c13400__7101c13400.mmd)
- **Clone hash:** `f283e18381b54dc2`

```c

void FUN_7101c13400(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  bool bVar11;
  char *pcVar12;
  undefined **ppuVar13;
  long *******ppppppplVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint uVar21;
  long ********pppppppplVar22;
  long *plVar23;
  long *********ppppppppplVar24;
  uint uVar25;
  uint uVar26;
  byte ****ppppbVar27;
  uint uVar28;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  long *local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
// ... (336 more lines)
```

## 21. `FUN_71018ee4a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018ee4a0`  (offset `0x18ee4a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018ee4a0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, byte * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 9388 bytes / 372 bb / 1 incoming refs
- **Match values:** stock
- **Strings touched:** %s.bntx;selector_0;set_parts_btn_%02d;selector_1;set_parts_btn_s_item;selector_2;set_parts_det_key_00;part_icon_txt;set_txt_help;mnu_spirits_challengeboard_list_item_btn;chara/chara_4/chara_4_;set_pic_icon;set_txt_spirits_num;mnu_spirits_challengeboard_list_stock_n;set_parts_btn_0%d;set_txt_time_limit;set_txt_time_wait
- **Callers:** FUN_71018f0a20
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_7101696040;FUN_7101a7ed70;FUN_7101d92d80;FUN_7101d92d90;FUN_7101d94d60;FUN_7101d962f0;FUN_7101d970a0;FUN_7101d97570;FUN_7101d99870;FUN_7101da17b0;FUN_7101da20e0;FUN_710248bf10;FUN_710248ed50;FUN_71024a71e0;...
- **Files:** [decomp](../decompiled/FUN_71018ee4a0__71018ee4a0.c)  [cfg](../decompiled/FUN_71018ee4a0__71018ee4a0.mmd)
- **Clone hash:** `373c55e92fbccf85`

```c

void FUN_71018ee4a0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   byte ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  short *psVar1;
  long *plVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  byte bVar6;
  short sVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  ushort uVar17;
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
  undefined8 uVar18;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
// ... (1707 more lines)
```

## 22. `FUN_7101c27fb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c27fb0`  (offset `0x1c27fb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101c27fb0(void)`
- **Size / BBs / Incoming:** 1836 bytes / 69 bb / 1 incoming refs
- **Match values:** stock
- **Strings touched:** rule_new;set_icn_preset;rule_preset;set_icn_etc;rule_etc;rule_make;set_icn_rule;set_icn_rule_sel;rule_stamina;rule_time;rule_stock;rule_icon_on;rule_icon_tourn;rule_icon_off;set_txt_title
- **Callees:** FUN_7101c0a210;FUN_710323f760;FUN_71032821b0;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_71037790a0;FUN_710377a120;FUN_7103796f20;FUN_71037a2270;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c27fb0__7101c27fb0.c)  [cfg](../decompiled/FUN_7101c27fb0__7101c27fb0.mmd)
- **Clone hash:** `e98e11155af4a26b`

```c

void FUN_7101c27fb0(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long ********pppppppplVar6;
  ulong uVar7;
  char *pcVar8;
  long *********ppppppppplVar9;
  ulong uVar10;
  long *******ppppppplVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined **ppuStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long ********pppppppplStack_70;
  ulong uStack_68;
  
  if (param_2 < 0) {
    return;
  }
  lVar12 = *(long *)(param_1 + 0x180);
  uVar10 = (*(long *)(param_1 + 0x188) - lVar12 >> 3) * 0x2fe592fe592fe593;
  uVar13 = (ulong)param_2;
  if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
    return;
  }
  piVar14 = (int *)(lVar12 + uVar13 * 0x4d8 + 8);
  iVar1 = *piVar14;
  ppppppppplVar9 = param_3;
  plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
// ... (247 more lines)
```

## 23. `FUN_710171ff00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710171ff00`  (offset `0x171ff00`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710171ff00(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8224 bytes / 444 bb / 2 incoming refs
- **Match values:** stock
- **Strings touched:** operation_id;amiibo;fighter_flags;competition_stage_flags;competition_stage_type;melee_kind;melee_rule;time_sec;stock;spirits;defence_reaction;charge;stage_gimmick;is_suddendeath;scaledown_stage;drop_bomb;speed;camera;body_size;head_option;body_option;state_option;weight;item_appear;item_flags;prize_type;prize_index;prize_value;prize_param0;prize_param1;tournament_entry_max_seconds;competition_aggregate_at;...
- **Callers:** FUN_71016c3e60;FUN_710170bda0
- **Callees:** FUN_71001b0960;FUN_71001b4910;FUN_7101684800;FUN_7101721f20;FUN_7101722330;FUN_71017224b0;FUN_7101722840;FUN_71017251e0;FUN_710172a290;FUN_7101762560;FUN_71032631a0;FUN_71032632a0;FUN_71032b30d0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;...
- **Files:** [decomp](../decompiled/FUN_710171ff00__710171ff00.c)  [cfg](../decompiled/FUN_710171ff00__710171ff00.mmd)
- **Clone hash:** `d9c66cf0b811c315`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_710171ff00(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint3 uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  int iVar15;
  long ***ppplVar16;
  long **pplVar17;
  long lVar18;
  long ****pppplVar19;
  size_t sVar20;
  undefined1 uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  byte *pbVar26;
  long ***ppplVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  int iVar31;
  long lVar32;
// ... (1501 more lines)
```

## 24. `FUN_7101b3d180`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b3d180`  (offset `0x1b3d180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b3d180(long * param_1, ulong param_2, uint param_3, uint param_4, uint param_5, uint param_6)`
- **Size / BBs / Incoming:** 284 bytes / 8 bb / 3 incoming refs
- **Match values:** stock
- **Strings touched:** mel_info_stock_over_6
- **Callers:** FUN_710138caf0
- **Callees:** FUN_710377a280;FUN_710377b010;FUN_71037a2270
- **Files:** [decomp](../decompiled/FUN_7101b3d180__7101b3d180.c)  [cfg](../decompiled/FUN_7101b3d180__7101b3d180.mmd)
- **Clone hash:** `bf189f620a051116`

```c

void FUN_7101b3d180(long *param_1,ulong param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ushort local_44 [2];
  
  lVar2 = *param_1;
  uVar4 = *(uint *)param_1[1];
  if ((int)uVar4 < 10) {
    uVar6 = 0;
    uVar7 = uVar6;
  }
  else {
    uVar5 = uVar4 / 10;
    uVar4 = uVar4 % 10;
    uVar6 = 0x3f800000;
    uVar7 = (ulong)(uint)(float)uVar5;
  }
  lVar1 = lVar2 + 0x20;
  FUN_710377b010(uVar6,lVar1 + (param_2 & 0xffffffff) * 0x10);
  FUN_710377b010(uVar7,lVar1 + (ulong)param_3 * 0x10);
  FUN_710377b010((ulong)(uint)(float)(int)uVar4,lVar1 + (ulong)param_4 * 0x10);
  lVar1 = lVar1 + (ulong)param_5 * 0x10;
  if (*(int *)param_1[1] < 6) {
    FUN_710377b010((ulong)(uint)(float)*(int *)param_1[1],lVar1);
    plVar3 = *(long **)(*(long *)(lVar2 + (ulong)param_6 * 0x10 + 0xb8) + 0x10);
    if (plVar3 != (long *)0x0) {
      local_44[0] = 0;
      local_44[1] = 0;
      FUN_71037a2270(plVar3,local_44,0,0);
    }
  }
  else {
// ... (6 more lines)
```

## 25. `FUN_7101ccdac0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ccdac0`  (offset `0x1ccdac0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ccdac0(long param_1, long * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1892 bytes / 83 bb / 1 incoming refs
- **Match values:** stock
- **Strings touched:** mstg_off;stockicon%02d;mstg_on;set_rep_bgshot_l;set_txt_version
- **Callers:** FUN_7101cceed0
- **Callees:** FUN_7101cce230;FUN_7101cedc80;FUN_7103238a70;FUN_7103238c50;FUN_710323c4e0;FUN_71032631a0;FUN_71032632a0;FUN_71032648e0;FUN_71032b23e0;FUN_71032b24e0;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_710377a310;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101ccdac0__7101ccdac0.c)  [cfg](../decompiled/FUN_7101ccdac0__7101ccdac0.mmd)
- **Clone hash:** `719257895b9ba458`

```c

void FUN_7101ccdac0(long param_1,long *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int *piVar2;
  ulong *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  byte ****ppppbVar10;
  ulong uVar11;
  void *__dest;
  int iVar12;
  ulong uVar13;
  long *********ppppppppplVar14;
  byte ****ppppbVar15;
  undefined4 *puVar16;
  long ********pppppppplVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  void *pvVar25;
  undefined1 *puVar26;
  long *********ppppppppplVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  long ********local_78;
  void *local_70;
  undefined4 local_64;
  
  lVar19 = **(long **)(param_1 + 0xf0);
// ... (308 more lines)
```

## 26. `FUN_7101c1fa30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c1fa30`  (offset `0x1c1fa30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c1fa30(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4868 bytes / 278 bb / 2 incoming refs
- **Match values:** stock
- **Strings touched:** set_parts_title_00;det_etc_on;det_etc_off;rule_icon_compe;rule_icon_tourn;rule_icon_in;rule_icon_out;set_rep_etc_00;icn_etc_on;icn_etc_off;set_rep_det_title_00;det_win_time;det_win_stock;det_win_stamina;det_win_%d
- **Callers:** FUN_7101c1b030;FUN_7101c1cac0
- **Callees:** FUN_71000001c0;FUN_710062dc20;FUN_7101764000;FUN_7101c1d0b0;FUN_7101c20d40;FUN_7101c20fa0;FUN_7101c21290;FUN_7101c213a0;FUN_710323f760;FUN_71032821b0;FUN_71032b1e40;FUN_71032b23e0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778300;...
- **Files:** [decomp](../decompiled/FUN_7101c1fa30__7101c1fa30.c)  [cfg](../decompiled/FUN_7101c1fa30__7101c1fa30.mmd)
- **Clone hash:** `72e2356dd114c305`

```c

void FUN_7101c1fa30(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 extraout_x1;
  char *pcVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  ulong uVar11;
  long ********pppppppplVar12;
  char cVar13;
  long lVar14;
  long *********ppppppppplVar15;
  size_t __n;
  long lVar16;
  undefined4 *puVar17;
  long ********local_5e8;
  undefined1 local_5e0 [64];
  undefined4 *local_5a0;
  undefined4 *local_598;
  undefined4 *local_590;
  undefined **local_588;
  ulong local_580;
  undefined **local_578;
  ulong local_570;
  long ********local_568;
  int local_560;
  undefined4 uStack_55c;
  undefined5 uStack_558;
  undefined8 local_514;
  undefined2 local_50c;
  undefined1 local_10c;
// ... (967 more lines)
```

## 27. `FUN_7101b31890`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b31890`  (offset `0x1b31890`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b31890(long param_1, char * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 376 bytes / 21 bb / 2 incoming refs
- **Match values:** stock
- **Strings touched:** set_parts_rule;set_txt_00;stock;on_gimmick;off_gimmick
- **Callers:** FUN_710184c400;FUN_7101b2a1f0
- **Callees:** FUN_7101c0a210;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101b31890__7101b31890.c)  [cfg](../decompiled/FUN_7101b31890__7101b31890.mmd)
- **Clone hash:** `a19ca1e5ef5e7c84`

```c

void FUN_7101b31890(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  if (*(undefined8 **)(param_1 + 0x18) != *(undefined8 **)(param_1 + 0x10)) {
    FUN_7103776640(&local_40,**(long **)**(undefined8 **)(param_1 + 0x10) + 8,
                   (byte ****)"set_parts_rule",param_3,param_4,param_5,param_6,param_7,param_8);
    uVar1 = local_38;
    bVar4 = *(byte *)(param_1 + 0x1f0);
    if ((*(long *)(local_38 + 8) != 0) &&
       (lVar5 = *(long *)(*(long *)(local_38 + 8) + 0x18), lVar5 != 0)) {
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | bVar4;
      bVar4 = *(byte *)(param_1 + 0x1f0);
    }
    if (bVar4 != 0) {
      FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_00",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7101c0a210((long)&local_50,*param_2,param_2[1],*(short *)(param_2 + 4),
                     (ulong)(byte)param_2[6],(ulong)(byte)param_2[7],param_2[2]);
      if (param_2[1] == '\x02') {
        pcVar3 = "hp";
      }
      else if (param_2[1] == '\x01') {
        pcVar3 = "stock";
      }
      else {
        pcVar3 = "time";
      }
      FUN_7103778300(0x3f800000,local_38,(long)pcVar3);
// ... (31 more lines)
```

## 28. `FUN_7101c12220`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c12220`  (offset `0x1c12220`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c12220(long param_1, char param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 856 bytes / 51 bb / 2 incoming refs
- **Match values:** stock
- **Strings touched:** set_parts_det_00;set_rep_det_title_00;det_win_stamina;det_win_time;det_win_stock
- **Callers:** FUN_710186c570;FUN_7101c11360
- **Callees:** FUN_710062dc20;FUN_710323f760;FUN_71032821b0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c12220__7101c12220.c)  [cfg](../decompiled/FUN_7101c12220__7101c12220.mmd)
- **Clone hash:** `65130adf93bee1e6`

```c

void FUN_7101c12220(long param_1,char param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  undefined8 local_b8;
  undefined1 local_b0 [64];
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  
  FUN_7103776640(&local_60,**(long **)(param_1 + 0x6a8) + 8,(byte ****)"set_parts_det_00",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_60,(long ****)"set_rep_det_title_00",param_3,param_4,param_5
                 ,param_6,param_7,param_8);
  local_b0[0] = 0;
  local_b8 = 0;
  if (param_2 == '\0') {
    FUN_710062dc20((uint *)&local_b8,"det_win_time");
    lVar4 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x198);
    uVar7 = 0x11a65e8b53;
// ... (110 more lines)
```

## 29. `FUN_7101bd7a40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bd7a40`  (offset `0x1bd7a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bd7a40(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9880 bytes / 588 bb / 2 incoming refs
- **Match values:** stock
- **Strings touched:** type_new;room_bg_name_hige;room_member_name_on;icon_type_new;balloon_off;balloon_on;room_status_info_ng;room_status_info_ok;type_lock;play_off;selected_on;set_parts_cursor_dec;select_on;type_any;type_melee;icon_type_any_lock;icon_type_melee_lock;type_spirits;icon_type_spirits_lock;icon_type_melee;set_txt_room_info_ng;mnu_local_status_01;mnu_local_status_%02d;mnu_local_rule_not_join;icon_type_any;icon_type_spirits;set_txt_room_info;mnu_local_rule_join_limit;set_txt_title_main;set_txt_title_sub;set_txt_title_sub_01;mnu_local_rule_bottom_03;...
- **Callers:** FUN_7101bd43a0;FUN_7101bdc040
- **Callees:** FUN_71000597e0;FUN_710062dc20;FUN_7101bda0e0;FUN_7101bda220;FUN_71024076d0;FUN_7103313f20;FUN_710337d450;FUN_7103771930;FUN_7103771a80;FUN_7103771d60;FUN_7103776290;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_71037790a0;...
- **Files:** [decomp](../decompiled/FUN_7101bd7a40__7101bd7a40.c)  [cfg](../decompiled/FUN_7101bd7a40__7101bd7a40.mmd)
- **Clone hash:** `34faf52be64378e6`

```c

void FUN_7101bd7a40(long param_1,ulong param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  ushort uVar5;
  bool bVar6;
  ulong uVar7;
  byte ***pppbVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  byte **ppbVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  byte ****ppppbVar16;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 uVar17;
  undefined8 extraout_x1_12;
  char *pcVar18;
  long ****pppplVar19;
  byte *pbVar20;
  long lVar21;
// ... (1651 more lines)
```

## 30. `FUN_7101c70620`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c70620`  (offset `0x1c70620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c70620(long param_1, byte * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 356 bytes / 21 bb / 2 incoming refs
- **Match values:** stock
- **Strings touched:** type_rule_contents;type_txt_italic;type_rule_warning;type_rule_stock;type_rule_stamina;type_txt_nomal;set_txt_nomal;type_rule_time;set_txt_italic
- **Callers:** FUN_7101c5dcd0;FUN_7101c73720
- **Callees:** FUN_7101c70500;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c70620__7101c70620.c)  [cfg](../decompiled/FUN_7101c70620__7101c70620.mmd)
- **Clone hash:** `4ae6d4a08d1c218b`

```c

void FUN_7101c70620(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined **local_30;
  ulong local_28;
  
  switch((uint)*param_2) {
  case 0x6a:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_warning";
    break;
  case 0x6b:
  case 0x6f:
  case 0x70:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_contents";
    break;
  case 0x6c:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_time";
    break;
  case 0x6d:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_stock";
    break;
  case 0x6e:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_stamina";
    break;
  default:
    if (2 < *param_2 - 1) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x7104280a9e);
      pcVar5 = "set_txt_nomal";
// ... (33 more lines)
```

## 31. `FUN_71020cb970`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020cb970`  (offset `0x20cb970`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020cb970(long param_1)`
- **Size / BBs / Incoming:** 720 bytes / 4 bb / 2 incoming refs
- **Match values:** stock
- **Strings touched:** FighterInformation;hit_point;hit_point_max;fighter_color;is_rabbit_cap;is_reflector;is_superleaf;is_rocketbelt;is_screw;is_backshield;is_operation_cpu;get_no_change_hp;TRANS_A_JUMP_AERIAL;dead_count;stock_count;suicide_count;gauge_parts_on;total_beat_count;is_last_dead_suicide;set_add_rebirth_wait_frame;is_on_rebirth;fighter_category;gravity;summon_boss_id;summon_bomb_ready_frame;summon_pre_bomb_effect_frame;summon_suicide_bomb_attack_mul;summon_suicide_bomb_reaction_mul;is_battle_event_stick_reverse;get_log_int
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020cb970__71020cb970.c)  [cfg](../decompiled/FUN_71020cb970__71020cb970.mmd)
- **Clone hash:** `b5802f748562e477`

```c

void FUN_71020cb970(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterInformation",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"hit_point",(long ****)FUN_71020c9fd0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"hit_point_max",(long ****)FUN_71020ca0e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"fighter_color",(long ****)FUN_71020ca250,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_rabbit_cap",(long ****)FUN_71020ca320,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_reflector",(long ****)FUN_71020ca3f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_superleaf",(long ****)FUN_71020ca4c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_rocketbelt",(long ****)FUN_71020ca590,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_screw",(long ****)FUN_71020ca660,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_backshield",(long ****)FUN_71020ca730,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_operation_cpu",(long ****)FUN_71020ca800,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_no_change_hp",(long ****)FUN_71020ca8d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"dead_count",(long ****)FUN_71020ca9a0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
// ... (36 more lines)
```

## 32. `FUN_7101c213a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c213a0`  (offset `0x1c213a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c213a0(long param_1, int param_2, uint param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3028 bytes / 142 bb / 2 incoming refs
- **Match values:** stock
- **Strings touched:** set_parts_det_%02d;det_win_time;det_win_stamina;det_win_stock;set_txt_det_title_00;set_txt_det_val_00;mel_rule_cond_%d
- **Callers:** FUN_7101c1fa30
- **Callees:** FUN_710062dc20;FUN_7101c09200;FUN_7101c1d0b0;FUN_71032b1e40;FUN_71032b23e0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_71037a2270;FUN_71037a28a0;FUN_71037ad940;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c213a0__7101c213a0.c)  [cfg](../decompiled/FUN_7101c213a0__7101c213a0.mmd)
- **Clone hash:** `c32a7e509b56a3d8`

```c

void FUN_7101c213a0(long param_1,int param_2,uint param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined **local_630;
  ulong local_628;
  uint local_620 [2];
  undefined8 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 local_5d8;
  byte local_5d0 [64];
  undefined **local_590;
  ulong local_588;
  undefined **local_580;
  ulong local_578;
  uint local_570 [2];
  undefined1 local_568 [64];
  undefined8 local_528;
  undefined5 uStack_520;
  undefined3 local_51b;
  undefined5 uStack_518;
// ... (504 more lines)
```

## 33. `FUN_7101ccd480`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ccd480`  (offset `0x1ccd480`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ccd480(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 608 bytes / 23 bb / 1 incoming refs
- **Match values:** stock
- **Strings touched:** set_rep_stockicon_%02d;set_rep_pic_stage_l
- **Callees:** FUN_710323b9e0;FUN_710323f330;FUN_710323f4a0;FUN_71032631a0;FUN_71032648e0;FUN_7103775dc0;FUN_7103776910;FUN_7103778b80;FUN_71037964b0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101ccd480__7101ccd480.c)  [cfg](../decompiled/FUN_7101ccd480__7101ccd480.mmd)
- **Clone hash:** `1bf36203f2614d15`

```c

void FUN_7101ccd480(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar5;
  long *********ppppppppplVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined **local_70;
  ulong local_68;
  
  if (*(int *)(param_1 + 0xdc) == 0) {
    ppppppppplVar6 = (long *********)0x33000;
    FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0xf0),1,(long ****)0x33000,param_4,param_5,
                   param_6,param_7,param_8);
    lVar4 = **(long **)(param_1 + 0xf0) + 8;
    lVar12 = *(long *)(param_1 + 0x110);
    uVar5 = extraout_x1;
    if (*(long *)(param_1 + 0x118) != lVar12) {
      lVar14 = 0;
      uVar9 = 0;
      do {
        FUN_7103776910(&local_70,lVar4,(long ****)"set_rep_stockicon_%02d",uVar9 & 0xffffffff,
                       param_4,param_5,param_6,param_7,param_8);
// ... (80 more lines)
```

