# battlefield (funcs=6, hits=14)

Top 50 functions by hit count

## 1. `FUN_71020fbb90`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** BattleField
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

## 2. `FUN_7101c9ed20`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c9ed20`  (offset `0x1c9ed20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c9ed20(long param_1, long param_2, undefined1 * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 488 bytes / 38 bb / 3 incoming refs
- **Match values:** battlefield
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

## 3. `FUN_7101d9d070`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d9d070`  (offset `0x1d9d070`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d9d070(long param_1, long param_2, ushort param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 17636 bytes / 890 bb / 1 incoming refs
- **Match values:** battlefield
- **Strings touched:** set_parts_bg_00;campaign_boss;campaign_dark;anim_in;anim_loop;set_rep_boss;set_rep_boss_sdw;rule_spirits_campaign_boss;boss_silhouette;rule_spirits_board;set_rep_fighter;set_rep_fighter_sdw;set_rep_fighter_fb;set_rep_fighter_fb_sdw;rule_spirits_campaign_fb_dark;set_rep_fighter_ld;rule_spirits_campaign_sb_dark;boss_art;redeye_%02d;redeye_00;set_parts_aw;set_rep_aura_00;set_rep_spirit_aw;set_parts_base;set_parts_class;off_empty;on_empty;set_txt_series;tit_series_%s;rule_spirits_campaign_sb_light;tit_append_%s;tit_%s;...
- **Callers:** FUN_7101da2510
- **Callees:** FUN_71003a4ca0;FUN_7101696040;FUN_7101da1560;FUN_7102499260;FUN_71024999d0;FUN_7102510850;FUN_710259c150;FUN_71025ad150;FUN_71025b12c0;FUN_71025b1bc0;FUN_71025b39a0;FUN_71025caab0;FUN_71025cad00;FUN_71025cae70;FUN_71025cb340;FUN_71025cb980;...
- **Files:** [decomp](../decompiled/FUN_7101d9d070__7101d9d070.c)  [cfg](../decompiled/FUN_7101d9d070__7101d9d070.mmd)
- **Clone hash:** `6639c5279f8ec4f3`

```c

void FUN_7101d9d070(long param_1,long param_2,ushort param_3,byte ****param_4,long ****param_5,
                   ulong param_6,ulong param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  long ***ppplVar6;
  float fVar7;
  undefined4 uVar8;
  long ********pppppppplVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *******ppppppplVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long ******pppppplVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  undefined1 uVar25;
  undefined8 extraout_x1;
  char *pcVar26;
  undefined8 extraout_x1_00;
  undefined *puVar27;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
// ... (3048 more lines)
```

## 4. `FUN_7101ce5ab0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ce5ab0`  (offset `0x1ce5ab0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ce5ab0(long param_1, undefined8 * param_2, long param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5476 bytes / 241 bb / 2 incoming refs
- **Match values:** battlefield
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

## 5. `FUN_7103233350`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103233350`  (offset `0x3233350`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103233350(long param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, uint * param_6, byte * * * param_7, ulong param_8)`
- **Size / BBs / Incoming:** 12176 bytes / 774 bb / 2 incoming refs
- **Match values:** BattleField
- **Strings touched:** UI_gear.nutexb;BG_BattleField
- **Callees:** FUN_710084f280;FUN_71032362e0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::memset;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::abort;<EXTERNAL>::std::string::assign
- **Files:** [decomp](../decompiled/FUN_7103233350__7103233350.c)  [cfg](../decompiled/FUN_7103233350__7103233350.mmd)
- **Clone hash:** `4a7bad22d6f92599`

```c

void FUN_7103233350(long param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   uint *param_6,byte ***param_7,ulong param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  long lVar10;
  uint uVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  int iVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  long ***ppplVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  uint uVar22;
  char *pcVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  undefined8 uVar30;
  ulong uVar31;
  byte *pbVar32;
  long lVar33;
  ulong uVar34;
  size_t __n;
// ... (2352 more lines)
```

## 6. `FUN_7101ac71e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac71e0`  (offset `0x1ac71e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac71e0(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 556 bytes / 19 bb / 2 incoming refs
- **Match values:** battlefield
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

