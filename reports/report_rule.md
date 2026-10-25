# rule (funcs=98, hits=401)

Top 50 functions by hit count

## 1. `FUN_71025b32d0`  (hits=55)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71025b32d0`  (offset `0x25b32d0`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_71025b32d0(undefined1 param_1, ulong param_2)`
- **Size / BBs / Incoming:** 1636 bytes / 115 bb / 3 incoming refs
- **Match values:** rule
- **Strings touched:** nam_spirits_rule_pokemon_fix;nam_spirits_rule_attack_down;nam_spirits_rule_jump_up;nam_spirits_rule_jump_down;nam_spirits_rule_mov_up;nam_spirits_rule_smash_attack_up;nam_spirits_rule_sleep;nam_spirits_rule_advantage_double;nam_spirits_rule_electric_up;nam_spirits_rule_jump_seal;nam_spirits_rule_normal_seal;nam_spirits_rule_bomb;nam_spirits_rule_charge_max;nam_spirits_rule_metal;nam_spirits_rule_type_attack_up;nam_spirits_rule_shield_down;nam_spirits_rule_magic_up;nam_spirits_rule_weapon_offense_up;nam_spirits_rule_advantage_reverse;nam_spirits_rule_horizontal_controller_flip;nam_spirits_rule_no_hold;nam_spirits_rule_sp_move_seal;nam_spirits_rule_damage;nam_spirits_rule_suddendeath;nam_spirits_rule_invincible;nam_spirits_rule_heal;nam_spirits_rule_dark;nam_spirits_rule_wind_suddenly;nam_spirits_rule_earthquake;nam_spirits_rule_flower;nam_spirits_rule_energy_charge;nam_spirits_rule_drown_up;...
- **Callers:** FUN_7101da9e30;FUN_710249f370;FUN_71025b1bc0
- **Callees:** <EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_71025b32d0__71025b32d0.c)  [cfg](../decompiled/FUN_71025b32d0__71025b32d0.mmd)
- **Clone hash:** `eefcf17479043109`

```c

char * FUN_71025b32d0(undefined1 param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  
  pcVar4 = "nam_spirits_rule_pokemon_fix";
  switch(param_1) {
  case 1:
    lVar5 = *(long *)(*DAT_7105329fa0 + 0x2f8);
    uVar7 = *(long *)(*DAT_7105329fa0 + 0x300) - lVar5 >> 4;
    uVar6 = (uint)uVar7;
    if (uVar6 != 0) {
      uVar3 = 0;
      do {
        uVar9 = (ulong)uVar3;
        if (uVar7 <= uVar9) goto LAB_71025b3930;
        if (((*(ulong *)(lVar5 + uVar9 * 0x10) ^ param_2) & 0xffffffffff) == 0) {
          lVar1 = lVar5 + uVar9 * 0x10;
          if (*(int *)(lVar1 + 0xc) < 1) {
            if (*(int *)(lVar1 + 0xc) < 0) {
              pcVar4 = "nam_spirits_rule_attack_down";
              pcVar8 = "nam_spirits_rule_defense_down";
              pcVar10 = "nam_spirits_rule_mov_down";
              switch(*(undefined1 *)(lVar1 + 10)) {
              case 0:
                goto switchD_71025b33ec_caseD_0;
              case 1:
                return "nam_spirits_rule_jump_down";
              case 2:
                goto switchD_71025b33ec_caseD_2;
// ... (287 more lines)
```

## 2. `FUN_7101c09380`  (hits=27)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c09380`  (offset `0x1c09380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c09380(long param_1, undefined1 param_2, ulong param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3724 bytes / 173 bb / 7 incoming refs
- **Match values:** rule
- **Strings touched:** mel_rule_team_attack_with;mel_rule_launch_launch_rate_unit;mel_rule_recovery_percent;mode_empty_03;mel_rule_pause_with;mel_rule_damage_with;mel_rule_edit_allbattle_unreversal_with;mel_rule_edit_suddendeath_shrink_with;mel_rule_cond_%d;mel_rule_spirit_with;mel_rule_charge_with;mel_rule_stage_gimmick_with;mel_rule_stage_change_without;mel_rule_score_with;mel_rule_edit_suddendeath_bomb_with;mel_rule_team_attack_without;mel_rule_pause_without;mel_rule_damage_without;mel_rule_edit_allbattle_unreversal_without;mel_rule_edit_suddendeath_shrink_without;mel_rule_spirit_without;mel_rule_charge_without;mel_rule_stage_gimmick_without;mel_rule_score_without;mel_rule_edit_suddendeath_bomb_without;mel_rule_edit_tournament_random;mel_rule_stage_change_any;mel_rule_stage_change_time
- **Callers:** FUN_7101c0cd40;FUN_7101c13400;FUN_7101c16090
- **Callees:** FUN_7101c09200;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_71037ad940
- **Files:** [decomp](../decompiled/FUN_7101c09380__7101c09380.c)  [cfg](../decompiled/FUN_7101c09380__7101c09380.mmd)
- **Clone hash:** `a553415fa347770c`

```c

void FUN_7101c09380(long param_1,undefined1 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  char *pcVar4;
  long *plVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 uStack_54;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined2 uStack_48;
  undefined1 local_46;
  undefined1 uStack_45;
  int local_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar5 = *(long **)(param_1 + 8);
  uVar2 = (uint)param_3;
  if (((int)uVar2 < 0) || (*plVar5 == 0)) {
switchD_7101c093c0_caseD_c:
    plVar5 = (long *)plVar5[2];
    if (plVar5 == (long *)0x0) {
// ... (698 more lines)
```

## 3. `FUN_7101c9ed20`  (hits=18)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c9ed20`  (offset `0x1c9ed20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c9ed20(long param_1, long param_2, undefined1 * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 488 bytes / 38 bb / 3 incoming refs
- **Match values:** rule
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

## 4. `FUN_7101d9d070`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d9d070`  (offset `0x1d9d070`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d9d070(long param_1, long param_2, ushort param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 17636 bytes / 890 bb / 1 incoming refs
- **Match values:** rule
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

## 5. `FUN_7101ce5ab0`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ce5ab0`  (offset `0x1ce5ab0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ce5ab0(long param_1, undefined8 * param_2, long param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5476 bytes / 241 bb / 2 incoming refs
- **Match values:** rule
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

## 6. `FUN_7101c27fb0`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c27fb0`  (offset `0x1c27fb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101c27fb0(void)`
- **Size / BBs / Incoming:** 1836 bytes / 69 bb / 1 incoming refs
- **Match values:** rule
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

## 7. `FUN_710334a0d0`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710334a0d0`  (offset `0x334a0d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710334a0d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3008 bytes / 160 bb / 1 incoming refs
- **Match values:** rule
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

## 8. `FUN_7101bd7a40`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bd7a40`  (offset `0x1bd7a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bd7a40(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9880 bytes / 588 bb / 2 incoming refs
- **Match values:** rule
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

## 9. `FUN_7101c13400`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c13400`  (offset `0x1c13400`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c13400(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2096 bytes / 125 bb / 1 incoming refs
- **Match values:** rule
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

## 10. `FUN_7101ac6fd0`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac6fd0`  (offset `0x1ac6fd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac6fd0(long param_1, long param_2, long param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 528 bytes / 18 bb / 2 incoming refs
- **Match values:** rule
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

## 11. `FUN_7101c8b340`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c8b340`  (offset `0x1c8b340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c8b340(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6720 bytes / 329 bb / 5 incoming refs
- **Match values:** rule
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

## 12. `FUN_7101ba9a40`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ba9a40`  (offset `0x1ba9a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ba9a40(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3252 bytes / 176 bb / 1 incoming refs
- **Match values:** rule
- **Strings touched:** set_txt_rule_00;set_txt_rule_01;set_txt_rule_02;in_00;in_01;in_02;out_00;out_01;out_02;on_00;on_01;on_02;off_00;off_01;off_02;time_00;time_01;time_02;icon_on_stagegimmic_00;icon_on_stagegimmic_01;icon_on_stagegimmic_02;icon_on_specialrule_00;icon_on_specialrule_01;icon_on_specialrule_02;icon_blink_stagegimmic_00;icon_blink_stagegimmic_01;icon_blink_stagegimmic_02;icon_blink_specialrule_00;icon_blink_specialrule_01;icon_blink_specialrule_02
- **Callers:** FUN_71013dfd20
- **Callees:** FUN_7101414b10;FUN_7101b42450;FUN_71032cbf30;FUN_7103773200;FUN_7103776910;FUN_71037780e0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_7101ba9a40__7101ba9a40.c)  [cfg](../decompiled/FUN_7101ba9a40__7101ba9a40.mmd)
- **Clone hash:** `4ba029e5658fe63e`

```c

void FUN_7101ba9a40(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *__s;
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long ****pppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  long ***local_70;
  ulong local_68;
  undefined4 local_54;
  
  pppplVar9 = &local_70;
  pppplVar5 = &local_70;
  pppplVar6 = &local_70;
  pppplVar7 = &local_70;
  pppplVar8 = &local_70;
  *param_1 = &PTR_FUN_71050ab8d8;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
// ... (632 more lines)
```

## 13. `FUN_7101c12580`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c12580`  (offset `0x1c12580`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c12580(long param_1, long param_2, long param_3, char * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2896 bytes / 101 bb / 3 incoming refs
- **Match values:** rule
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

## 14. `FUN_7101740140`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101740140`  (offset `0x1740140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101740140(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 13708 bytes / 606 bb / 2 incoming refs
- **Match values:** rule
- **Strings touched:** ev_match_data;match_id_lo;match_id_hi;Ver. %d.%d.%d;rom_version;has_battle_log;is_battle_team;is_suddendeath;rule_spirits;rule_charge_final;rule_team_attach;rule_handi_boost;rule_stage_gimmick;rule_can_pause;rule_visible_score;rule_visible_damage;stage_1_type;stage_1_form;stage_2_type;stage_2_form;event_type;tournament_id;player_%d_;attacker;supporter1;supporter2;supporter3;node_num;ev_match_player;rating;fighter_id;fighter_random;...
- **Callers:** FUN_7101515630;FUN_7101518820
- **Callees:** FUN_71000001c0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_710062dc20;FUN_710066cd40;FUN_71006dae20;FUN_71015922f0;FUN_71016f6340;FUN_710172a1e0;FUN_71017436d0;FUN_7101743910;FUN_7101743bb0;FUN_7101764000;FUN_710179eec0;FUN_71017ac030;FUN_71017ac100;FUN_71032631a0;...
- **Files:** [decomp](../decompiled/FUN_7101740140__7101740140.c)  [cfg](../decompiled/FUN_7101740140__7101740140.mmd)
- **Clone hash:** `81d2d7b98a09c684`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101740140(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,byte ****param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  Any64BitId *pAVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  Any64BitId AVar8;
  byte bVar9;
  short sVar10;
  undefined1 auVar11 [16];
  Any64BitId *pAVar12;
  long ***ppplVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined **ppuVar25;
  long ****pppplVar26;
  byte ****ppppbVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
// ... (1930 more lines)
```

## 15. `FUN_71025bb610`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71025bb610`  (offset `0x25bb610`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71025bb610(uint * param_1, undefined1 param_2, ulong param_3)`
- **Size / BBs / Incoming:** 26016 bytes / 1275 bb / 1 incoming refs
- **Match values:** rule
- **Strings touched:** nam_spirits_hint_rule_reflect_damage_up_enemy;nam_spirits_hint_rule_energy_charge_enemy;nam_spirits_hint_rule_weapon_offense_up_enemy;nam_spirits_hint_rule_curry_enemy;nam_spirits_hint_rule_invincible_enemy;nam_spirits_hint_rule_charge_max_enemy;nam_spirits_hint_rule_metal_enemy;nam_spirits_hint_rule_magic_up_enemy
- **Callers:** FUN_71025b39a0
- **Callees:** <EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_71025bb610__71025bb610.c)  [cfg](../decompiled/FUN_71025bb610__71025bb610.mmd)
- **Clone hash:** `c6e396991ab5e609`

```c

void FUN_71025bb610(uint *param_1,undefined1 param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  char cVar13;
  ulong uVar14;
  uint uVar15;
  uint local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined2 uStack_e0;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 local_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
// ... (6127 more lines)
```

## 16. `FUN_7101c70500`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c70500`  (offset `0x1c70500`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_7101c70500(undefined1 param_1)`
- **Size / BBs / Incoming:** 284 bytes / 24 bb / 3 incoming refs
- **Match values:** rule
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

## 17. `FUN_7101da2510`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101da2510`  (offset `0x1da2510`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101da2510(long param_1, long * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 884 bytes / 41 bb / 5 incoming refs
- **Match values:** rule
- **Strings touched:** set_rep_screen;anim_rule_in_out;on_limit
- **Callers:** FUN_71018ee0c0;FUN_71018f10d0;FUN_71018faa00;FUN_7101952260;FUN_71024f4b60
- **Callees:** FUN_7101d9d070;FUN_71024076d0;FUN_7103313f20;FUN_7103775dc0;FUN_71037760f0;FUN_7103776910;FUN_7103778300;FUN_7103778760;FUN_71037964b0;FUN_710379e9c0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101da2510__7101da2510.c)  [cfg](../decompiled/FUN_7101da2510__7101da2510.mmd)
- **Clone hash:** `4774fddbf1568ed3`

```c

void FUN_7101da2510(long param_1,long *param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,ulong param_7,undefined8 param_8)

{
  char cVar1;
  undefined **ppuVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined **local_80;
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar12 = *(long *)(param_1 + 0x80);
  FUN_7103776910(&local_80,lVar12 + 0x160,(long ****)"set_rep_screen",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  ppuVar2 = local_78;
  if (((*(long **)((long)local_78 + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
     (lVar6 = *(long *)(*(long *)(DAT_710593bc38 + 8) + 0x78), lVar6 != 0)) {
    FUN_710379e9c0(*(long **)((long)local_78 + 8),lVar6,0);
  }
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar2);
  }
  *(char *)(lVar12 + 0x1c2) = (char)param_2[3];
// ... (107 more lines)
```

## 18. `FUN_7101ca1830`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ca1830`  (offset `0x1ca1830`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ca1830(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1340 bytes / 46 bb / 4 incoming refs
- **Match values:** rule
- **Strings touched:** itemselect_%02d;mode_empty_03;set_txt_item_help;mnu_anyone_rule_edit_item_help_on_all;mnu_anyone_rule_edit_item_help_on;mnu_anyone_rule_edit_item_help_off;mnu_anyone_rule_edit_item_help_mes_06;mnu_anyone_rule_edit_item_help_off_all;mnu_anyone_rule_edit_item_help_mes_07
- **Callers:** FUN_7101c9d490
- **Callees:** FUN_710062dc20;FUN_7103771d60;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101ca1830__7101ca1830.c)  [cfg](../decompiled/FUN_7101ca1830__7101ca1830.mmd)
- **Clone hash:** `060b1a257b855f89`

```c

void FUN_7101ca1830(long param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  long ****pppplVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined8 local_be;
  undefined4 local_b6;
  undefined2 local_b2;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined **local_90;
  ulong local_88;
  uint local_80 [2];
  undefined1 local_78 [68];
  ushort local_34 [2];
  
  if ((int)param_2 < 0) {
    return;
  }
  uVar8 = (ulong)(int)param_2;
  if ((ulong)(*(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228) >> 2) <= uVar8) {
    return;
  }
  local_78[0] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  FUN_710062dc20(local_80,"itemselect_%02d");
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x120),(long)local_78);
// ... (167 more lines)
```

## 19. `FUN_7101c70620`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c70620`  (offset `0x1c70620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c70620(long param_1, byte * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 356 bytes / 21 bb / 2 incoming refs
- **Match values:** rule
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

## 20. `FUN_7101d9ba10`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d9ba10`  (offset `0x1d9ba10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d9ba10(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1248 bytes / 84 bb / 1 incoming refs
- **Match values:** rule
- **Strings touched:** anim_rule_in_out;set_parts_rule_01;set_parts_rule_02;set_parts_rule_03;show_icon_check;hide_icon_check
- **Callees:** FUN_71025b1740;FUN_710376b960;FUN_7103771a80;FUN_7103776290;FUN_7103776640;FUN_7103778300;FUN_71037964b0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101d9ba10__7101d9ba10.c)  [cfg](../decompiled/FUN_7101d9ba10__7101d9ba10.mmd)
- **Clone hash:** `881eb1dded5e2343`

```c

void FUN_7101d9ba10(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar11;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  char *pcVar12;
  char cVar13;
  long lVar14;
  undefined4 uVar15;
  long *plVar16;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  if (*(int *)(param_1 + 0x11c) == 0) {
    plVar5 = (long *)(param_1 + 0x1b0);
    (**(code **)(**(long **)(param_1 + 0x1b0) + 0x60))(*(long **)(param_1 + 0x1b0),1);
    cVar13 = *(char *)(param_1 + 0x1c5);
// ... (216 more lines)
```

## 21. `FUN_71020fbb90`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** rule;Rule
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

## 22. `FUN_7101c108f0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c108f0`  (offset `0x1c108f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c108f0(long param_1, undefined1 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 652 bytes / 41 bb / 3 incoming refs
- **Match values:** rule
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

## 23. `FUN_7101c1fa30`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c1fa30`  (offset `0x1c1fa30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c1fa30(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4868 bytes / 278 bb / 2 incoming refs
- **Match values:** rule
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

## 24. `FUN_710183be60`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710183be60`  (offset `0x183be60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710183be60(void)`
- **Size / BBs / Incoming:** 41020 bytes / 1781 bb / 1 incoming refs
- **Match values:** rule
- **Strings touched:** mode_empty_03;count_5vs5;controller_out;set_btn_01_back;set_txt_back_01;set_txt_back_00;mel_return_02;mel_over_return_02;mel_return_00;mel_over_return_00;set_btn_ready;set_parts_balloon_rule;selector_0;set_btn_03_rule;controller_in;bg_anime;chara_bg_color_01;chara_bg_color_00;selector;set_part_vs_3;set_part_vs_5;selector_1;set_btn_back;set_cursor_area;set_medal_area;back_btn_long;set_btn_02_title;txt_pos_normal;set_txt_title_00;title_on;headcount_off;day_off;...
- **Callers:** FUN_7101846880
- **Callees:** FUN_71000001c0;FUN_7101684280;FUN_7101686610;FUN_710168eb40;FUN_71016ea290;FUN_71016f6340;FUN_7101764000;FUN_7101797560;FUN_710179a080;FUN_710179ed00;FUN_7101838d70;FUN_710183bb20;FUN_71019e5610;FUN_71019e6eb0;FUN_71019e8720;FUN_71019e90c0;...
- **Files:** [cfg](../decompiled/FUN_710183be60__710183be60.mmd)


## 25. `FUN_7101ac4ba0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac4ba0`  (offset `0x1ac4ba0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac4ba0(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6728 bytes / 295 bb / 4 incoming refs
- **Match values:** rule
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

## 26. `FUN_710186ba80`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710186ba80`  (offset `0x186ba80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710186ba80(long param_1)`
- **Size / BBs / Incoming:** 1608 bytes / 91 bb / 1 incoming refs
- **Match values:** rule
- **Strings touched:** pop_local_mel_rule_stg_select;pop_local_mel_rule_stg_punctuation;pop_local_mel_rule_stg_change
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101c04250;FUN_7101c046c0;FUN_7101eefe30;FUN_71032f29a0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_710186ba80__710186ba80.c)  [cfg](../decompiled/FUN_710186ba80__710186ba80.mmd)
- **Clone hash:** `aeac96df99e6adff`

```c

void FUN_710186ba80(long param_1)

{
  long lVar1;
  char *pcVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  void *__src;
  int iVar7;
  undefined8 uVar8;
  char *__dest;
  ulong uVar9;
  long ****__dest_00;
  ulong uVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long *****ppppplVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  byte ****ppppbVar16;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar17;
  long ***ppplVar18;
  long lVar19;
  long ****pppplVar20;
  size_t __n;
  ulong uVar21;
  long ****local_b0;
  long ****local_a8;
  long ****local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  void *local_78;
  void *local_70;
  long ***local_60;
// ... (286 more lines)
```

## 27. `FUN_7101ac65f0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac65f0`  (offset `0x1ac65f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac65f0(long param_1, uint * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2524 bytes / 133 bb / 3 incoming refs
- **Match values:** rule
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

## 28. `FUN_7101c9e110`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c9e110`  (offset `0x1c9e110`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c9e110(long param_1, char param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2688 bytes / 146 bb / 6 incoming refs
- **Match values:** rule
- **Strings touched:** limit_rule_00;limit_rule_02;limit_rule_01
- **Callers:** FUN_7101c9c5e0;FUN_7101c9def0;FUN_7101ca24d0;FUN_7101ca3c60
- **Callees:** FUN_7101c9f4e0;FUN_7103778300;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memmove
- **Files:** [decomp](../decompiled/FUN_7101c9e110__7101c9e110.c)  [cfg](../decompiled/FUN_7101c9e110__7101c9e110.mmd)
- **Clone hash:** `6a8c9ec78da150d1`

```c

void FUN_7101c9e110(long param_1,char param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****__n;
  size_t sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  char *pcVar8;
  long ****pppplVar9;
  ulong uVar10;
  long ***ppplVar11;
  undefined1 *puVar12;
  void *pvVar13;
  undefined1 *puVar14;
  long ****pppplVar15;
  undefined1 *puVar16;
  undefined1 local_68 [2];
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  long ***local_60;
  undefined4 local_54;
  
  uVar2 = _local_68;
  if (param_2 == '\x03') {
    _local_68 = 0x607050403020100;
    uVar10 = *(ulong *)(param_1 + 400);
    pvVar13 = *(void **)(param_1 + 0x180);
    if (uVar10 - (long)pvVar13 < 8) {
      if (pvVar13 == (void *)0x0) {
        if (uVar10 < 0x3fffffffffffffff) goto LAB_7101c9e5dc;
// ... (541 more lines)
```

## 29. `FUN_7101ee9990`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ee9990`  (offset `0x1ee9990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ee9990(long * param_1)`
- **Size / BBs / Incoming:** 12376 bytes / 586 bb / 1 incoming refs
- **Match values:** rule
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

## 30. `FUN_7101fa11c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** rule
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

## 31. `FUN_7101d17b30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d17b30`  (offset `0x1d17b30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d17b30(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3600 bytes / 186 bb / 1 incoming refs
- **Match values:** rule
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

## 32. `FUN_7101ca24d0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ca24d0`  (offset `0x1ca24d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ca24d0(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 308 bytes / 9 bb / 2 incoming refs
- **Match values:** rule
- **Strings touched:** mode_select_off;set_txt_help;mnu_anyone_rule_set_help_off;mode_select_on;mnu_anyone_rule_set_help_on
- **Callers:** FUN_7101c9c0a0;FUN_7101c9c5e0
- **Callees:** FUN_7101c9e110;FUN_7101ca10c0;FUN_7101ca1ee0;FUN_710376b960;FUN_7103776910;FUN_710377a120;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101ca24d0__7101ca24d0.c)  [cfg](../decompiled/FUN_7101ca24d0__7101ca24d0.mmd)
- **Clone hash:** `9940262f54d4a11b`

```c

void FUN_7101ca24d0(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined **local_30;
  ulong local_28;
  
  if (param_2 == 1) {
    FUN_7101ca1ee0(param_1,0x71042e72ce,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_30,param_1 + 0x118,(long ****)"set_txt_help",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_30,"mnu_anyone_rule_set_help_on",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar1 = local_28;
    local_30 = &PTR_FUN_710523d9a8;
    local_28 = 0;
    if (uVar1 != 0) {
      FUN_710392eb40(uVar1);
    }
    FUN_7101c9e110(param_1,*(char *)(param_1 + 0x24e),param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7101ca10c0(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710376b960(*(long *)(param_1 + 0x130));
    (**(code **)(**(long **)(param_1 + 0x130) + 0x60))(*(long **)(param_1 + 0x130),1);
  }
  else if (param_2 == 0) {
    FUN_7101ca1ee0(param_1,0x7104454b34,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_30,param_1 + 0x118,(long ****)"set_txt_help",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_30,"mnu_anyone_rule_set_help_off",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar1 = local_28;
    local_30 = &PTR_FUN_710523d9a8;
    local_28 = 0;
    if (uVar1 != 0) {
      FUN_710392eb40(uVar1);
    }
    (**(code **)(**(long **)(param_1 + 0x130) + 0x60))(*(long **)(param_1 + 0x130),0);
// ... (6 more lines)
```

## 33. `FUN_7101cfbe40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cfbe40`  (offset `0x1cfbe40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cfbe40(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2704 bytes / 103 bb / 3 incoming refs
- **Match values:** rule
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

## 34. `FUN_7101a23a80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a23a80`  (offset `0x1a23a80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a23a80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8756 bytes / 346 bb / 1 incoming refs
- **Match values:** rule
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

## 35. `FUN_7101c21290`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c21290`  (offset `0x1c21290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c21290(long param_1, byte param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 272 bytes / 14 bb / 4 incoming refs
- **Match values:** rule
- **Strings touched:** det_win_off;det_etc_off;rule_icon_out;det_win_on;rule_icon_in
- **Callers:** FUN_7101c1bf90;FUN_7101c1fa30;FUN_7101c272b0
- **Callees:** FUN_7103776390;FUN_7103778300;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c21290__7101c21290.c)  [cfg](../decompiled/FUN_7101c21290__7101c21290.mmd)
- **Clone hash:** `bc1592e9028b416b`

```c

void FUN_7101c21290(long param_1,byte param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined **local_40;
  ulong local_38;
  
  if (*(byte *)(param_1 + 0x218) == (param_2 & 1)) {
    return;
  }
  FUN_7103776390(&local_40,(undefined8 *)(**(long **)(param_1 + 0x170) + 8),param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (*(char *)(param_1 + 0x218) == '\0') {
    FUN_7103778300(0x3f800000,local_38,0x71043cf3f5);
    if ((*(char *)(param_1 + 0x719) == '\0') || (*(char *)(param_1 + 0x219) == '\0'))
    goto LAB_7101c21354;
    pcVar3 = "rule_icon_in";
  }
  else {
    FUN_7103778300(0x3f800000,local_38,0x710434a26a);
    FUN_7103778300(0x3f800000,local_38,0x7104443665);
    if ((*(char *)(param_1 + 0x719) == '\0') || (*(char *)(param_1 + 0x219) == '\0'))
    goto LAB_7101c21354;
    pcVar3 = "rule_icon_out";
  }
  FUN_7103778300(0x3f800000,local_38,(long)pcVar3);
LAB_7101c21354:
  uVar1 = local_38;
  *(byte *)(param_1 + 0x218) = param_2 & 1;
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar2 != 0) {
// ... (7 more lines)
```

## 36. `FUN_7101714c00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101714c00`  (offset `0x1714c00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101714c00(long param_1, long param_2, undefined2 * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6812 bytes / 251 bb / 2 incoming refs
- **Match values:** rule
- **Strings touched:** lang:%s;DataStorePreparePostParam: (;size=;, name=;, dataType=;, accessPermission=;DataStorePermission: (permission=;, targetIds=(;, updatePermission=;, dataFlag=;, period=;, referDataId=;, persistenceInitParam=;DataStorePersistenceInitParam: (;NODE_PRE_REFRACT_BLEND;persistenceSlotId=;, deleteLastObject=;, ratingInitParams=(;slot=;, ratingInitParam=;DataStoreRatingInitParam: (;flag=;, internalFlag=;, lockType=;, initialValue=;, rangeMin=;, rangeMax=;, periodHour=;, periodDuration=;, tags=(;, metaBinary=;country;...
- **Callers:** FUN_71017320d0;FUN_7101732d10
- **Callees:** FUN_71001aff70;FUN_71001b0ab0;FUN_71001b1820;FUN_71001b1870;FUN_71001b2f70;FUN_71001b3300;FUN_71001b4390;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4b40;FUN_71001b4e80;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;FUN_71001b61d0;FUN_71001b6320;...
- **Files:** [decomp](../decompiled/FUN_7101714c00__7101714c00.c)  [cfg](../decompiled/FUN_7101714c00__7101714c00.mmd)
- **Clone hash:** `b2151cc381e6a915`

```c

void FUN_7101714c00(long param_1,long param_2,undefined2 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long ****pppplVar9;
  undefined1 *puVar10;
  long lVar11;
  long *****ppppplVar12;
  long ****pppplVar13;
  long lVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long ****pppplVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  char *pcVar23;
  long ****pppplVar24;
  long ****pppplVar25;
  byte *pbVar26;
  int iVar27;
  long *****ppppplVar28;
  long *****ppppplVar29;
  long ****local_1b0;
  long ****local_1a8;
  undefined8 *local_1a0;
  undefined **local_198;
  undefined **local_190;
  undefined **local_188;
// ... (897 more lines)
```

## 37. `FUN_710186c570`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710186c570`  (offset `0x186c570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710186c570(long param_1, undefined4 * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11036 bytes / 517 bb / 2 incoming refs
- **Match values:** rule
- **Strings touched:** footer_help_in;footer_help_out;rule_icon_out;rule_icon_off;selector_1;set_parts_csr_l;set_parts_csr_r
- **Callers:** FUN_710186a410;FUN_710186b410
- **Callees:** FUN_71000001c0;FUN_7101696040;FUN_7101764000;FUN_71017ab440;FUN_71017dc700;FUN_71017dcc40;FUN_710186f090;FUN_710186f2c0;FUN_71019bb740;FUN_71019bb8f0;FUN_7101af4610;FUN_7101af4c80;FUN_7101af5880;FUN_7101af6200;FUN_7101af8570;FUN_7101af90b0;...
- **Files:** [decomp](../decompiled/FUN_710186c570__710186c570.c)  [cfg](../decompiled/FUN_710186c570__710186c570.mmd)
- **Clone hash:** `836e67fe987bd671`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_710186c570(long param_1,undefined4 *param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  long **pplVar5;
  long **pplVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  char cVar9;
  byte bVar10;
  short sVar11;
  undefined2 uVar12;
  ushort uVar13;
  byte ***pppbVar14;
  undefined2 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  long *plVar30;
  long ***ppplVar31;
// ... (2204 more lines)
```

## 38. `FUN_7101c62870`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c62870`  (offset `0x1c62870`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c62870(undefined8 * param_1, long * * * * * * * * * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 23588 bytes / 1102 bb / 1 incoming refs
- **Match values:** rule
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

## 39. `FUN_7101ca3c60`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ca3c60`  (offset `0x1ca3c60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ca3c60(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1224 bytes / 52 bb / 3 incoming refs
- **Match values:** rule
- **Strings touched:** selected;not_selected;mode_select_on;set_txt_help;mnu_anyone_rule_set_help_on;mode_select_off;mnu_anyone_rule_set_help_off;set_btn_decide
- **Callers:** FUN_7101c43600;FUN_7101c46d90
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101c9e110;FUN_7101c9eb90;FUN_7101c9f350;FUN_7101ca10c0;FUN_7101ca1ee0;FUN_71032d6810;FUN_710337d360;FUN_710376b960;FUN_7103771a80;FUN_7103771d60;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778300;...
- **Files:** [decomp](../decompiled/FUN_7101ca3c60__7101ca3c60.c)  [cfg](../decompiled/FUN_7101ca3c60__7101ca3c60.mmd)
- **Clone hash:** `4542ec61c9df21fe`

```c

void FUN_7101ca3c60(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  undefined2 uVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 extraout_x1;
  undefined8 uVar11;
  long ****pppplVar12;
  long lVar13;
  byte ****ppppbVar14;
  byte ****ppppbVar15;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  long *local_58;
  
  FUN_71032d6810(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar13 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(lVar13 + 0x268) = 0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar11 = DAT_7105306970;
  pcVar1 = (char *)(lVar13 + 0x242);
  *(undefined2 *)(lVar13 + 0x24a) = (undefined2)DAT_7105306978;
  *(undefined8 *)pcVar1 = uVar11;
  uVar5 = (undefined2)DAT_7105306978;
  *(undefined8 *)(lVar13 + 0x24c) = DAT_7105306970;
// ... (176 more lines)
```

## 40. `FUN_7100425fe0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100425fe0`  (offset `0x425fe0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100425fe0(void)`
- **Size / BBs / Incoming:** 720 bytes / 28 bb / 0 incoming refs
- **Match values:** Rule
- **Strings touched:** OnlineMeleeRoomTopScene;OnlineMeleeRoomScene;MeleeRuleScene;SoundTestScene;StageSelectScene;CharaSelectScene;IngameCallSequenceScene;UnlockSequenceScene;OnlineMeleeRoomChangeRuleScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100425fe0__7100425fe0.c)  [cfg](../decompiled/FUN_7100425fe0__7100425fe0.mmd)
- **Clone hash:** `9ecb72819a94ee11`

```c

void FUN_7100425fe0(void)

{
  int iVar1;
  
  DAT_7105329420 = 0;
  DAT_7105329428 = "OnlineMeleeRoomTopScene";
  if (((DAT_71053294c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053294c8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053294c8);
  }
  DAT_7105329430 = &PTR_PTR_71050b9248;
  DAT_7105329438 = "OnlineMeleeRoomScene";
  if (((DAT_71053294d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053294d0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053294d0);
  }
  DAT_7105329440 = &PTR_PTR_71050b9250;
  DAT_7105329448 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105329450 = &PTR_PTR_71050a42c0;
  DAT_7105329458 = "SoundTestScene";
  if (((DAT_7105329310 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329310), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329310);
  }
  DAT_7105329460 = &PTR_PTR_71050b8db8;
  DAT_7105329468 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105329470 = &PTR_PTR_71050b7478;
  DAT_7105329478 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329480 = &PTR_PTR_71050b6960;
  DAT_7105329488 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
// ... (17 more lines)
```

## 41. `FUN_7101c20fa0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c20fa0`  (offset `0x1c20fa0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c20fa0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 752 bytes / 48 bb / 3 incoming refs
- **Match values:** rule
- **Strings touched:** set_parts_det_key_00;set_txt_help;mel_rule_select_edit;mel_rule_select_guide1
- **Callers:** FUN_7101c1bf90;FUN_7101c1fa30;FUN_7101c272b0
- **Callees:** FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_710377a120;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c20fa0__7101c20fa0.c)  [cfg](../decompiled/FUN_7101c20fa0__7101c20fa0.mmd)
- **Clone hash:** `36cdd5e1a58f5e68`

```c

void FUN_7101c20fa0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  undefined **local_30;
  ulong local_28;
  
  FUN_7103776390(&local_30,(undefined8 *)(**(long **)(param_1 + 0x170) + 8),param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_40,(long)&local_30,(byte ****)"set_parts_det_key_00",param_3,param_4,param_5
                 ,param_6,param_7,param_8);
  if (((*(char *)(param_1 + 0x20c) == '\0') && (*(char *)(param_1 + 0x20d) == '\0')) &&
     (*(char *)(param_1 + 0x20e) == '\0')) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x1b8);
    if (lVar6 != 0) {
      lVar7 = *(long *)(param_1 + 0x1b0) + 0x1b8;
      lVar5 = lVar7;
      do {
        bVar2 = *(int *)(lVar6 + 0x20) < 0;
        if (!bVar2) {
          lVar5 = lVar6;
        }
        lVar6 = *(long *)(lVar6 + (ulong)bVar2 * 8);
      } while (lVar6 != 0);
      if (((lVar5 != lVar7) && (*(int *)(lVar5 + 0x20) < 1)) &&
         (plVar8 = *(long **)(lVar5 + 0x28), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x1f8))(plVar8,0);
// ... (103 more lines)
```

## 42. `FUN_7101c7f7c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c7f7c0`  (offset `0x1c7f7c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c7f7c0(long * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 17528 bytes / 998 bb / 1 incoming refs
- **Match values:** rule
- **Strings touched:** selector_00;set_parts_btn_00;color_00;set_parts_btn_01;color_01;selector_04;set_parts_csr_l;set_parts_csr_r;selector_01;selector_02;size_l;size_s;rule_off;rule_on;set_parts_header_btn;set_rep_icn_fighter_00;set_icn_profile_bg;scroll_00;selector_06;set_parts_reset;selector_05;set_parts_csr_l_00;set_parts_csr_r_00;scroll
- **Callers:** FUN_7101c95eb0
- **Callees:** FUN_71000001c0;FUN_71003cb050;FUN_7101696040;FUN_7101704ba0;FUN_7101764000;FUN_7101797350;FUN_71017ab440;FUN_7101989a30;FUN_7101a7ed70;FUN_7101c83c40;FUN_7101c83d40;FUN_7101c94160;FUN_7101c94170;FUN_7101c94480;FUN_7101c94490;FUN_7101c94790;...
- **Files:** [decomp](../decompiled/FUN_7101c7f7c0__7101c7f7c0.c)  [cfg](../decompiled/FUN_7101c7f7c0__7101c7f7c0.mmd)
- **Clone hash:** `e0a2e0acde5b87c2`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c7f7c0(long *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong *__dest;
  long *plVar9;
  byte ****ppppbVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar11;
  undefined8 uVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  undefined8 uVar15;
  char cVar16;
  char *pcVar17;
  undefined1 *puVar18;
  ulong uVar19;
  byte **ppbVar20;
  code *pcVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  byte *pbVar26;
  undefined1 *puVar27;
  ushort *puVar28;
  char cVar29;
  int iVar30;
// ... (2989 more lines)
```

## 43. `FUN_7101dacc40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101dacc40`  (offset `0x1dacc40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101dacc40(undefined8 * param_1, long * * * * * * * * * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9564 bytes / 455 bb / 2 incoming refs
- **Match values:** rule
- **Strings touched:** selector_0;set_parts_btn_fighter;set_parts_btn_spirit;set_parts_btn_attacker;set_parts_btn_s_item;selector_1;set_parts_btn_load_set;set_parts_btn_save_set;set_parts_slot;set_parts_btn_spter_00;set_parts_btn_spter_01;set_parts_btn_spter_02;selector_2;set_parts_btn_rule;select_fighter;anim_set_select_fighter;position_edit;set_parts_border_00;anim_loop;set_parts_border_01;single;multi;mode_empty_03;num_player_%02d;set_rep_fighter_sdw;set_rep_fighter;set_rep_p_01;bg_fighter_name_00;set_rep_series_sdw;set_rep_series;set_txt_fighter_name_sdw;set_txt_fighter_name;...
- **Callers:** FUN_71018f7620;FUN_71024f52a0
- **Callees:** FUN_71003a4ca0;FUN_71003cb050;FUN_7101696040;FUN_7101da6780;FUN_7101da73b0;FUN_7101da8880;FUN_7101da9e30;FUN_7101dac850;FUN_7101daf1a0;FUN_7102497520;FUN_71024976d0;FUN_7102499b60;FUN_71025298e0;FUN_710259f250;FUN_710259f260;FUN_71025cae70;...
- **Files:** [decomp](../decompiled/FUN_7101dacc40__7101dacc40.c)  [cfg](../decompiled/FUN_7101dacc40__7101dacc40.mmd)
- **Clone hash:** `73bf7e4fa1e4283b`

```c

void FUN_7101dacc40(undefined8 *param_1,long *********param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long **pplVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 uVar14;
  char *pcVar15;
  undefined8 extraout_x1;
  long ***ppplVar16;
  char *pcVar17;
  long *********ppppppppplVar18;
  long ****pppplVar19;
  long *****ppppplVar20;
  ulong uVar21;
  long *********ppppppppplVar22;
  byte ****ppppbVar23;
  long ********pppppppplVar24;
  code *pcVar25;
  long lVar26;
  byte bVar27;
  undefined8 uVar28;
  long ********pppppppplVar29;
  long ********pppppppplVar30;
  undefined8 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  long lVar34;
// ... (1746 more lines)
```

## 44. `FUN_7101c1b840`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c1b840`  (offset `0x1c1b840`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c1b840(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1860 bytes / 105 bb / 1 incoming refs
- **Match values:** rule
- **Strings touched:** sub_on;mel_rule_select_guide2
- **Callees:** FUN_71019c1c50;FUN_71032d6470;FUN_7103771a80;FUN_7103771d60;FUN_7103776640;FUN_7103778300;FUN_71037814c0;FUN_7103783c10;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strcmp;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c1b840__7101c1b840.c)  [cfg](../decompiled/FUN_7101c1b840__7101c1b840.mmd)
- **Clone hash:** `ac1c83dd9d8aa0d1`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101c1b840(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  long ***ppplVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  byte ***pppbVar11;
  long *plVar12;
  byte ****ppppbVar13;
  undefined8 uVar14;
  long ****pppplVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  byte ***local_d0;
  byte ***local_c8;
  byte ***local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined4 local_9e;
  undefined1 local_9a;
// ... (316 more lines)
```

## 45. `FUN_7101c9f4e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c9f4e0`  (offset `0x1c9f4e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c9f4e0(long param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6372 bytes / 275 bb / 9 incoming refs
- **Match values:** rule
- **Strings touched:** set_parts_sub_btns_%02d;view_%d;set_parts_btn_sub_%02d;set_parts_items_%02d;view_all_switch_base;view_one_switch_base;mnu_anyone_rule_edit_charge_off;mode_empty_03;mnu_anyone_rule_edit_charge_on
- **Callers:** FUN_7101c9e110;FUN_7101ca4730
- **Callees:** FUN_710062dc20;FUN_7101ca0dd0;FUN_7101ca0f60;FUN_7103770b30;FUN_71037717d0;FUN_7103771d60;FUN_7103776390;FUN_7103776640;FUN_7103778300;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101c9f4e0__7101c9f4e0.c)  [cfg](../decompiled/FUN_7101c9f4e0__7101c9f4e0.mmd)
- **Clone hash:** `ef4c5b812b740fcf`

```c

void FUN_7101c9f4e0(long param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined ***pppuVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte ****ppppbVar7;
  char *pcVar8;
  undefined8 uVar9;
  long ****pppplVar10;
  byte ****ppppbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  long *plVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined8 local_380;
  byte local_378 [64];
  undefined **local_338;
  ulong local_330;
  undefined **local_328;
  long *local_320 [8];
  uint local_2e0 [2];
  char local_2d8 [64];
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined2 local_284;
// ... (1014 more lines)
```

## 46. `FUN_7101c7ebd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c7ebd0`  (offset `0x1c7ebd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c7ebd0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2400 bytes / 93 bb / 2 incoming refs
- **Match values:** rule
- **Strings touched:** set_rep_icn_fighter_00;set_icn_profile;set_icn_profile_bg;set_txt_name;mnu_online_room_create_host_account;set_txt_name_00;set_txt_cate;set_txt_cate_00;set_txt_rule;set_txt_rule_00;set_txt_center;mnu_online_room_player_number_n;num_disp_center;key_off;mode_empty_03;num_on;gray_off;set_txt_now;mnu_online_room_search_participants_n;set_txt_max;mnu_online_room_search_participants_max;set_txt_slash;num_disp_max;gray_on;num_max;key_on
- **Callers:** FUN_7101c7d8e0;FUN_7101c958e0
- **Callees:** FUN_7101704ba0;FUN_7101797350;FUN_7101c6ec50;FUN_7101c6ee80;FUN_7103240430;FUN_710337d450;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_71037790a0;FUN_710377a120;FUN_710377a280;FUN_71037a2660;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101c7ebd0__7101c7ebd0.c)  [cfg](../decompiled/FUN_7101c7ebd0__7101c7ebd0.mmd)
- **Clone hash:** `15a6d56c40b4cde1`

```c

void FUN_7101c7ebd0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  byte ****ppppbVar12;
  long ****pppplVar13;
  uint uVar14;
  byte *pbVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  undefined **local_120;
  undefined8 *local_118 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  long ********local_c8;
  undefined2 local_c0;
  undefined8 local_be;
  ushort local_b6;
  undefined1 local_b4;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  undefined8 *local_78;
  long ********local_70;
  undefined4 local_64;
  
// ... (364 more lines)
```

## 47. `FUN_7101deddf0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101deddf0`  (offset `0x1deddf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101deddf0(undefined8 * param_1, int * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10828 bytes / 470 bb / 9 incoming refs
- **Match values:** rule
- **Strings touched:** set_txt_name_spirit;set_rep_spirit;set_rep_spirit_shadow;set_parts_it_indiv;set_txt_help;chara/chara_4/chara_4_;set_pic_icon;set_txt_help_individual;set_parts_it_super;set_txt_help_super;set_txt_nowstyle;set_txt_up_%02d;set_txt_down_%02d;view_school_on_01;view_school_off;view_school_on_00;on_plt_menu_lyt_00;off_plt_menu_lyt_00;selector_01;selector_02;selector_00;set_btn_decide;selector_03;set_part_help;show_rule;hide_rule
- **Callers:** FUN_71018f7620;FUN_710190e210;FUN_7101920610;FUN_71019401b0;FUN_7101947560;FUN_7101958350;FUN_710195e630;FUN_7101962010;FUN_71024f63a0
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101989a30;FUN_7101bb9cd0;FUN_7101df0840;FUN_7101df0960;FUN_7101df1a60;FUN_7101df2720;FUN_7101df2d40;FUN_7101df9480;FUN_7101e03c80;FUN_7101e03e40;FUN_710323cb80;FUN_71032a3bd0;FUN_71032a5750;FUN_71032cad20;...
- **Files:** [decomp](../decompiled/FUN_7101deddf0__7101deddf0.c)  [cfg](../decompiled/FUN_7101deddf0__7101deddf0.mmd)
- **Clone hash:** `29dd85c79b85e4d4`

```c

void FUN_7101deddf0(undefined8 *param_1,int *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  byte ****ppppbVar2;
  long *plVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
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
// ... (2173 more lines)
```

## 48. `FUN_7101db1910`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101db1910`  (offset `0x1db1910`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7101db1910(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 440 bytes / 21 bb / 2 incoming refs
- **Match values:** rule
- **Strings touched:** set_parts_btn_rule
- **Callers:** FUN_71018f10d0;FUN_71024efae0
- **Callees:** FUN_7103776ad0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101db1910__7101db1910.c)  [cfg](../decompiled/FUN_7101db1910__7101db1910.mmd)
- **Clone hash:** `6778a2bbc2c8f7f1`

```c

undefined8
FUN_7101db1910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined **local_40;
  long *local_38;
  
  if ((*(uint *)(param_1 + 0x428) | 1) != 3) {
    if (*(char *)(param_1 + 0x44d) == '\0') {
      if (*(int *)(*(long *)(param_1 + 0x88) + 0x25c) != 0x1e) {
        lVar3 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600);
        if (*(char *)(lVar3 + 0x4aa) == '\0') {
          return 0;
        }
        if ((*(byte *)(lVar3 + 0x1c4) >> 1 & 1) == 0) {
          return 0;
        }
        FUN_7103776ad0(&local_40,param_1 + 0x50,(long ****)"set_parts_btn_rule",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        plVar1 = local_38;
        plVar4 = (long *)*local_38;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x238))(plVar4,0);
          (**(code **)(*plVar4 + 0x228))(plVar4,0);
          uVar2 = (**(code **)(*plVar4 + 0x200))(plVar4);
          if (((uVar2 & 1) != 0) &&
             (uVar2 = (**(code **)(*plVar4 + 0x210))(plVar4), (uVar2 & 1) != 0)) {
            (**(code **)(*plVar4 + 0x238))(plVar4,1);
            (**(code **)(*plVar4 + 0x3c8))(plVar4);
            (**(code **)(*plVar4 + 0x10))(plVar4);
            (**(code **)(*plVar4 + 0x18))(plVar4);
          }
        }
        local_40 = &PTR_FUN_710523d9c8;
// ... (31 more lines)
```

## 49. `FUN_7101c3aed0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c3aed0`  (offset `0x1c3aed0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c3aed0(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7708 bytes / 262 bb / 2 incoming refs
- **Match values:** rule
- **Strings touched:** set_rep_logo;spirits_campaign_top_maintitle;mel_tournament_title_default;set_parts_title;set_txt_tnmt_title;mode_empty_03;mel_tournament_confirm_title;set_parts_header;set_txt_title;set_txt_rule;mel_tournament_confirm_rule;set_panel_%02d;set_icon_%02d;gauge_parts_on;set_pos;set_rep_00;set_panel_00;set_size_00;set_size_01;set_pic_final_base;selector_0;set_parts_btn_00;set_parts_btn_01;set_parts_btn_02;set_parts_btn_decide;set_parts_btn_start
- **Callers:** FUN_710187d820
- **Callees:** FUN_7101af86a0;FUN_7101c2e760;FUN_7101c2e980;FUN_7101c321b0;FUN_7101c32670;FUN_7101c33d10;FUN_7101c34000;FUN_710323eba0;FUN_7103240d30;FUN_71032cbf30;FUN_710337df20;FUN_7103391610;FUN_7103391970;FUN_7103391a80;FUN_7103391f40;FUN_7103770b30;...
- **Files:** [decomp](../decompiled/FUN_7101c3aed0__7101c3aed0.c)  [cfg](../decompiled/FUN_7101c3aed0__7101c3aed0.mmd)
- **Clone hash:** `9654ee144f238591`

```c

void FUN_7101c3aed0(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
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
// ... (1307 more lines)
```

## 50. `FUN_71018cde70`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018cde70`  (offset `0x18cde70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018cde70(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3424 bytes / 116 bb / 1 incoming refs
- **Match values:** RULE
- **Strings touched:** set_parts_btn_02;set_rep_peach;set_rep_daisy;layout_root;SCENE_EXIT_CODE_RULE;SCENE_EXIT_CODE_HANDI;BUTTON_EX_LEFT;BUTTON_EX_RIGHT;BUTTON_ID_RULE;BUTTON_ID_HANDICAP;BUTTON_ID_RADAR;BUTTON_ID_DASH_FIGHTER;BUTTON_ID_INVISIBLE;BUTTON_ID_SAVE;RADAR_NONE;RADAR_SMALL;RADAR_BIG;RADAR_NUM;DASH_CLOSE;DASH_OPEN;DASH_NUM;RADAR_INIT;DASH_INIT;INVISIBLE_INIT
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7103238a70;FUN_710323b9e0;FUN_710323beb0;FUN_710323c4e0;FUN_710323cb80;FUN_710323f330;FUN_7103264270;FUN_710326f6a0;FUN_71032cad20;FUN_71032caea0;FUN_71032cb040;FUN_71033743c0;FUN_7103375650;FUN_7103776640;...
- **Files:** [decomp](../decompiled/FUN_71018cde70__71018cde70.c)  [cfg](../decompiled/FUN_71018cde70__71018cde70.mmd)
- **Clone hash:** `8dc5d759c4b81ec9`

```c

void FUN_71018cde70(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ********pppppppplVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long ********pppppppplVar6;
  long ********pppppppplVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  long *********ppppppppplVar15;
  undefined **ppuVar16;
  byte ****ppppbVar17;
  long ****pppplVar18;
  uint uVar19;
  undefined8 uVar20;
  long lVar21;
  long *******ppppppplVar22;
  long lVar23;
  undefined1 auVar24 [16];
  long ********local_88;
  long ********local_80;
// ... (544 more lines)
```

