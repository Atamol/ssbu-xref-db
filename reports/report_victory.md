# victory (funcs=3, hits=3)

Top 50 functions by hit count

## 1. `FUN_71013930c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71013930c0`  (offset `0x13930c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71013930c0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4464 bytes / 208 bb / 1 incoming refs
- **Match values:** victory
- **Strings touched:** count_05;count_03;timeup;suddendeath;gameset;complete;success;failure;ready;txt_sudden;SUDDEN
DEATH;txt_complete_00;COMPLETE!;txt_success_00;SUCCESS!;txt_failure_00;FAILURE!;txt_ready_00;Ready!;set_txt_center;common;victory
- **Callees:** FUN_7101414d00;FUN_71032cad20;FUN_71032caea0;FUN_71032cbf30;FUN_7103773200;FUN_7103776910;FUN_71037780e0;FUN_71037a28a0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71013930c0__71013930c0.c)  [cfg](../decompiled/FUN_71013930c0__71013930c0.mmd)
- **Clone hash:** `4561aa1f02384c56`

```c

void FUN_71013930c0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 uVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  long lVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  long ***local_78;
  undefined8 *local_70;
  undefined4 local_64;
  
  lVar13 = *(long *)(param_1 + 0x50);
  plVar9 = (long *)(lVar13 + 0x10);
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000088;
// ... (819 more lines)
```

## 2. `FUN_7101c108f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c108f0`  (offset `0x1c108f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c108f0(long param_1, undefined1 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 652 bytes / 41 bb / 3 incoming refs
- **Match values:** victory
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

## 3. `FUN_71017ff180`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017ff180`  (offset `0x17ff180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71017ff180(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 7272 bytes / 287 bb / 1 incoming refs
- **Match values:** victory
- **Strings touched:** info_melee_lct_cursor_player_lvup;set_rep_fp_lvup;set_txt_atk_num;mnu_amiibo_attack_n;set_txt_def_num;mnu_amiibo_defense_n;set_pic_atk_bar;set_pic_atk_bar_shadow;set_pic_def_bar;set_pic_def_bar_shadow;set_txt_header_name;set_text_level_num;mnu_amiibo_level_n;attribute_throw;attribute_defense;attribute_attack;attribute_none;mnu_amiibo_personal_%02d;set_txt_personality_00;set_txt_personality_01;set_txt_win_count_num;mnu_amiibo_journey_victory_number_n;battle_count_%d;set_btn_round_%02d;set_parts_chara_%02d;all_show;set_rep_chara;mode_empty_03;rank_%d;team_blue;all_hide;team_red;...
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710062dc20;FUN_7101764000;FUN_7101767150;FUN_7101989a30;FUN_7103238a70;FUN_710323af70;FUN_710323b9e0;FUN_710323beb0;FUN_710323c1c0;FUN_710323c4e0;FUN_710323cb80;FUN_710323f330;FUN_7103240d30;FUN_710324bb60;...
- **Files:** [decomp](../decompiled/FUN_71017ff180__71017ff180.c)  [cfg](../decompiled/FUN_71017ff180__71017ff180.mmd)
- **Clone hash:** `730b7dc36f4eacfb`

```c

void FUN_71017ff180(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  byte ***pppbVar5;
  undefined8 *puVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  int *piVar20;
  undefined8 uVar21;
  byte *pbVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
// ... (1204 more lines)
```

