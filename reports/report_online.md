# online (funcs=725, hits=1044)

Top 50 functions by hit count

## 1. `FUN_7101c70500`  (hits=20)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c70500`  (offset `0x1c70500`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_7101c70500(undefined1 param_1)`
- **Size / BBs / Incoming:** 284 bytes / 24 bb / 3 incoming refs
- **Match values:** online
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

## 2. `FUN_7101744340`  (hits=16)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101744340`  (offset `0x1744340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101744340(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6768 bytes / 29 bb / 2 incoming refs
- **Match values:** online
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

## 3. `FUN_7101c7d8e0`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c7d8e0`  (offset `0x1c7d8e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c7d8e0(long param_1, undefined8 * param_2, undefined * * param_3, undefined2 * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3848 bytes / 150 bb / 1 incoming refs
- **Match values:** online
- **Strings touched:** on_plt_menu_lyt_00;btn_disp_off_00;btn_disp_off_01;btn_disp_2_on;btn_disp_off;baln_clr_r;baln_tit_fri;baln_clr_b;baln_tit_any;set_txt_00;mnu_online_room_create_password;mnu_online_room_search_password_not;mnu_online_room_search_password;set_txt_hd_title;set_parts_header_btn;set_Parts_hd_u_cont_00;rule_btn_disp_off;set_txt_hd_b_cont_00;txt_sub_hd_00;mnu_online_room_setting_stage;set_txt_sub_hd_00;txt_sub_hd_%02d;mnu_online_room_setting_amiibo;mnu_online_room_amiibo_on;set_txt_sub_hd_%02d;mode_empty_03;mnu_online_room_setting_spirits;mnu_online_room_spirits_on;mnu_online_room_setting_stgcreate;mnu_online_room_stgcreate_on;detail_disp_%02d;vc_disp_off;...
- **Callees:** FUN_71000001c0;FUN_7101704ba0;FUN_7101764000;FUN_7101797350;FUN_71017ab0c0;FUN_7101c6f7f0;FUN_7101c6fec0;FUN_7101c7ebd0;FUN_71032b1e40;FUN_71032b23e0;FUN_7103771a80;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_710377a120;...
- **Files:** [decomp](../decompiled/FUN_7101c7d8e0__7101c7d8e0.c)  [cfg](../decompiled/FUN_7101c7d8e0__7101c7d8e0.mmd)
- **Clone hash:** `8a155c7741ecda2b`

```c

void FUN_7101c7d8e0(long param_1,undefined8 *param_2,undefined **param_3,undefined2 *param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  long *********ppppppppplVar11;
  byte ****ppppbVar12;
  long ****pppplVar13;
  undefined8 uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  undefined **local_968;
  ulong local_960;
  long ********local_958;
  ulong local_950;
  undefined8 local_550;
  byte local_548;
  undefined4 uStack_547;
  undefined3 uStack_543;
  undefined5 local_540;
  undefined3 uStack_53b;
  undefined2 local_538;
  undefined8 local_536;
  undefined4 local_52e;
  undefined2 local_52a;
  ulong local_528;
// ... (634 more lines)
```

## 4. `FUN_7101bf02a0`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bf02a0`  (offset `0x1bf02a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bf02a0(undefined8 * param_1, long * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10668 bytes / 435 bb / 1 incoming refs
- **Match values:** ONLINE
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

## 5. `FUN_710041f880`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710041f880`  (offset `0x41f880`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710041f880(void)`
- **Size / BBs / Incoming:** 3608 bytes / 142 bb / 1 incoming refs
- **Match values:** Online
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

## 6. `FUN_7101c62870`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c62870`  (offset `0x1c62870`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c62870(undefined8 * param_1, long * * * * * * * * * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 23588 bytes / 1102 bb / 1 incoming refs
- **Match values:** online
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

## 7. `FUN_7101c689c0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c689c0`  (offset `0x1c689c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c689c0(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2412 bytes / 73 bb / 2 incoming refs
- **Match values:** online
- **Strings touched:** set_Parts_hd_u_cont_00;set_txt_hd_b_cont_00;txt_sub_hd_%02d;mnu_online_room_setting_stage;set_txt_sub_hd_%02d;mnu_online_room_setting_amiibo;mnu_online_room_spirits_on;mode_empty_03;mnu_online_room_setting_spirits;mnu_online_room_setting_stgcreate;mnu_online_room_stgcreate_on;detail_disp_%02d
- **Callers:** FUN_710188ce20;FUN_7101c62870
- **Callees:** FUN_71003a4ca0;FUN_71017ab0c0;FUN_7101c6f7f0;FUN_7101c6fec0;FUN_71032b1e40;FUN_71032b23e0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c689c0__7101c689c0.c)  [cfg](../decompiled/FUN_7101c689c0__7101c689c0.mmd)
- **Clone hash:** `ab3d1242f4101508`

```c

void FUN_7101c689c0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *********ppppppppplVar6;
  byte ****ppppbVar7;
  uint uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined2 local_940;
  undefined8 local_93e;
  undefined4 local_936;
  undefined2 local_932;
  ulong local_930;
  uint local_928;
  undefined1 local_924;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined5 uStack_540;
  undefined8 local_4fc;
  undefined2 local_4f4;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined1 local_b0;
// ... (373 more lines)
```

## 8. `FUN_710235d040`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710235d040`  (offset `0x235d040`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710235d040(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 25696 bytes / 1747 bb / 1 incoming refs
- **Match values:** Online
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

## 9. `FUN_7101caa0b0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101caa0b0`  (offset `0x1caa0b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101caa0b0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3212 bytes / 185 bb / 1 incoming refs
- **Match values:** online
- **Strings touched:** select_after;set_txt_00;mnu_online_report_private_info;select_before;mnu_online_report_violence;mnu_online_report_indecency;mnu_online_report_harassment_abuse;mnu_online_report_against_moral;mnu_online_report_commercially;mnu_online_report_another_inappropriate
- **Callees:** FUN_7101cabeb0;FUN_71024076d0;FUN_7103313f20;FUN_710376b960;FUN_7103771a80;FUN_7103771be0;FUN_7103771d60;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101caa0b0__7101caa0b0.c)  [cfg](../decompiled/FUN_7101caa0b0__7101caa0b0.mmd)
- **Clone hash:** `fc848e825a5a2ed9`

```c

void FUN_7101caa0b0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  byte ****ppppbVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar8;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar9;
  long ****pppplVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined4 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  undefined4 local_f0 [2];
  undefined **local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0 [2];
  undefined **local_a8;
  long local_a0;
// ... (543 more lines)
```

## 10. `FUN_71001ea210`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001ea210`  (offset `0x1ea210`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001ea210(long param_1)`
- **Size / BBs / Incoming:** 6988 bytes / 213 bb / 1 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;probeinit;RVCID;Ntrpa;N2nn3nex15EmulationDeviceE;Ntrpp
- **Callers:** FUN_71001ec790
- **Callees:** FUN_71001af850;FUN_71001b12a0;FUN_71001b1300;FUN_71001b1820;FUN_71001b1870;FUN_71001b2f70;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e00;FUN_71001beb30;FUN_71001beb40;FUN_71001bebd0;FUN_71001becd0;FUN_71001bee30;FUN_71001bef00;FUN_71001bef20;...
- **Files:** [decomp](../decompiled/FUN_71001ea210__71001ea210.c)  [cfg](../decompiled/FUN_71001ea210__71001ea210.mmd)
- **Clone hash:** `c2da52331f3e6e0f`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_71001ea210(long param_1)

{
  long *******ppppppplVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  long *plVar12;
  undefined ********ppppppppuVar13;
  long ******pppppplVar14;
  ulong uVar15;
  undefined *******pppppppuVar16;
  undefined ******ppppppuVar17;
  long **pplVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  uint uVar24;
  long *******ppppppplVar25;
  long *******ppppppplVar26;
  undefined ********ppppppppuVar27;
  undefined1 auVar28 [16];
  undefined ******local_268;
  long **local_260;
  long *local_258;
  long ***local_250;
  long **local_248;
  long *local_240;
// ... (953 more lines)
```

## 11. `FUN_71001e6be0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001e6be0`  (offset `0x1e6be0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001e6be0(long param_1, long param_2, void * param_3, size_t param_4)`
- **Size / BBs / Incoming:** 2692 bytes / 103 bb / 1 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;RVCID;probeinit
- **Callers:** FUN_71001ee820
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b1400;FUN_71001b17c0;FUN_71001b1870;FUN_71001b2f70;FUN_71001b3130;FUN_71001b3140;FUN_71001b47e0;FUN_71001b4910;FUN_71001beb40;FUN_71001cb870;FUN_71001cf750;FUN_71001cf760;FUN_71001cfad0;FUN_71001d01c0;...
- **Files:** [decomp](../decompiled/FUN_71001e6be0__71001e6be0.c)  [cfg](../decompiled/FUN_71001e6be0__71001e6be0.mmd)
- **Clone hash:** `ee89270d539b5ffd`

```c

/* WARNING: Removing unreachable block (ram,0x0071001e6de4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71001e6be0(long param_1,long param_2,void *param_3,size_t param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  ulonglong uVar7;
  long *plVar8;
  long *plVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  long local_1c8;
  undefined **local_1c0;
  undefined **local_1b8;
  undefined1 local_1b0 [16];
  undefined1 *local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined **local_188;
  undefined1 local_180 [16];
  undefined1 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  long local_148;
  long local_140;
  undefined **local_138;
  long *local_130;
  undefined8 **local_120;
  undefined8 *local_118;
  undefined8 uStack_110;
// ... (348 more lines)
```

## 12. `FUN_7101c93960`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c93960`  (offset `0x1c93960`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c93960(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1860 bytes / 78 bb / 2 incoming refs
- **Match values:** online
- **Strings touched:** set_txt_help;mnu_online_room_help_setting_player_number;mnu_online_room_help_spirits_off;mnu_online_room_help_stgcreate_off;mnu_online_room_help_amiibo_off;mnu_online_room_help_voicechat_off;mnu_online_room_help_setting_roombgm
- **Callers:** FUN_7101c8df10;FUN_7101c8e7d0
- **Callees:** FUN_7103776910;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c93960__7101c93960.c)  [cfg](../decompiled/FUN_7101c93960__7101c93960.mmd)
- **Clone hash:** `429b82de6960371c`

```c

void FUN_7101c93960(long param_1,long param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined6 uStack_5e;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 uStack_43;
  undefined4 local_42;
  undefined **local_30;
  ulong local_28;
  
  uVar3 = param_3 & 0xffffffff;
  FUN_7103776910(&local_30,param_2,(long ****)"set_txt_help",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  switch(uVar3) {
  case 0:
    pcVar2 = "mnu_online_room_help_setting_player_number";
    goto LAB_7101c93d8c;
  case 1:
    if (4 < (ulong)(long)*(char *)(param_1 + 0x111)) {
LAB_7101c940a0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
// ... (250 more lines)
```

## 13. `FUN_7101c91cb0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c91cb0`  (offset `0x1c91cb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c91cb0(long param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7336 bytes / 349 bb / 4 incoming refs
- **Match values:** online
- **Strings touched:** set_txt_filter_00;set_txt_filter_00_old;set_txt_filter;mnu_online_room_player_number_n;txt_move_%s;mode_empty_03;mnu_online_room_stgcreate_on;mnu_online_room_voicechat_on;gray_off;icon_gray_01_ami;icon_gray_00_edit;gray_on
- **Callers:** FUN_7101c8df10;FUN_7101c8e7d0;FUN_7101c952b0
- **Callees:** FUN_7101704ba0;FUN_7101797350;FUN_7101c83c40;FUN_7101c91730;FUN_7101c919f0;FUN_7103771d60;FUN_7103776910;FUN_7103778430;FUN_7103778760;FUN_710377a120;FUN_710377a280;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c91cb0__7101c91cb0.c)  [cfg](../decompiled/FUN_7101c91cb0__7101c91cb0.mmd)
- **Clone hash:** `ec2bf5a4e2030ac3`

```c

void FUN_7101c91cb0(long param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  ulong uVar13;
  uint uVar14;
  char *pcVar15;
  ulong uVar16;
  byte *pbVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  uint uVar24;
  undefined8 *puVar25;
  char cVar26;
  uint local_268;
  undefined4 local_264;
  byte local_260 [64];
  uint local_220;
  undefined4 local_21c;
  byte local_218 [64];
  undefined8 local_1d8;
  byte local_1d0 [64];
  undefined8 local_190;
// ... (1212 more lines)
```

## 14. `FUN_71001d5f20`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d5f20`  (offset `0x1d5f20`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001d5f20(long param_1, long param_2, uint param_3, uint param_4)`
- **Size / BBs / Incoming:** 244 bytes / 17 bb / 2 incoming refs
- **Match values:** Online
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp;C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstanceTable.cpp
- **Callers:** FUN_71001d46c0;FUN_71001d72e0
- **Callees:** FUN_71001b1300
- **Files:** [decomp](../decompiled/FUN_71001d5f20__71001d5f20.c)  [cfg](../decompiled/FUN_71001d5f20__71001d5f20.mmd)
- **Clone hash:** `2079672eaddf3075`

```c

undefined8 FUN_71001d5f20(long param_1,long param_2,uint param_3,uint param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  if (param_4 == 0) {
    if (param_3 < 0x11) {
      plVar5 = (long *)(param_1 + (ulong)param_3 * 8 + 0x10);
      if (*plVar5 == 0) {
LAB_71001d6004:
        *plVar5 = param_2;
        return 1;
      }
      pcVar1 = "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp";
      uVar2 = 0x44;
      uVar3 = 0xe000000f;
      goto LAB_71001d5ff0;
    }
    pcVar1 = "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp";
    uVar2 = 0x3e;
  }
  else {
    lVar4 = **(long **)(param_1 + 0xa0);
    if ((ulong)param_4 < (ulong)((*(long **)(param_1 + 0xa0))[1] - lVar4 >> 3)) {
      lVar4 = *(long *)(lVar4 + (ulong)param_4 * 8);
      if (lVar4 == 0) {
        pcVar1 = "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstanceTable.cpp";
        uVar2 = 0x9f;
        uVar3 = 0xe0000008;
        goto LAB_71001d5ff0;
      }
      if (param_3 < 0x11) {
        plVar5 = (long *)(lVar4 + (ulong)param_3 * 8 + 8);
        if (*plVar5 == 0) goto LAB_71001d6004;
        uVar2 = 0x44;
// ... (18 more lines)
```

## 15. `FUN_7101896640`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101896640`  (offset `0x1896640`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101896640(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 10616 bytes / 510 bb / 1 incoming refs
- **Match values:** online
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

## 16. `FUN_7101c7ebd0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c7ebd0`  (offset `0x1c7ebd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c7ebd0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2400 bytes / 93 bb / 2 incoming refs
- **Match values:** online
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

## 17. `FUN_7101c79160`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c79160`  (offset `0x1c79160`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c79160(uint * param_1, undefined8 * param_2, ulong param_3)`
- **Size / BBs / Incoming:** 1456 bytes / 96 bb / 2 incoming refs
- **Match values:** online
- **Strings touched:** mnu_online_room_inside_chat_greet_%02d;mnu_online_room_inside_chat_prepare_%02d;mnu_online_room_inside_chat_melee_%02d;mnu_online_room_inside_chat_impression_%02d;mnu_online_room_inside_chat_farewell_%02d
- **Callers:** FUN_710188ce20;FUN_7101c7aa70
- **Callees:** FUN_710062dc20
- **Files:** [decomp](../decompiled/FUN_7101c79160__7101c79160.c)  [cfg](../decompiled/FUN_7101c79160__7101c79160.mmd)
- **Clone hash:** `f9f303fd778909ef`

```c

void FUN_7101c79160(uint *param_1,undefined8 *param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint local_68 [2];
  char local_60 [64];
  
  plVar5 = (long *)param_2[2];
  plVar11 = param_2 + 2;
  if (plVar5 != (long *)0x0) {
    plVar11 = param_2 + 2;
    do {
      while (plVar6 = plVar5, (param_3 & 0xffffffffff) < (plVar6[4] & 0xffffffffffU)) {
        plVar5 = (long *)*plVar6;
        plVar11 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_7101c791c8;
      }
      if ((param_3 & 0xffffffffff) <= (plVar6[4] & 0xffffffffffU)) break;
      plVar11 = plVar6 + 1;
      plVar5 = (long *)*plVar11;
    } while ((long *)*plVar11 != (long *)0x0);
// ... (257 more lines)
```

## 18. `FUN_710023dbc0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710023dbc0`  (offset `0x23dbc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710023dbc0(long param_1)`
- **Size / BBs / Incoming:** 1572 bytes / 70 bb / 3 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;NODE_PRE_REFRACT_BLEND;prudp:/address=;;port=;;stream=;chara/chara_4/chara_4_;;sid=;;type=;;Uri=
- **Callees:** FUN_71001af850;FUN_71001b0ab0;FUN_71001b1300;FUN_71001b2f70;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e00;FUN_71001b52a0;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;FUN_71001b6470;FUN_71001b7590;FUN_71001d1590;FUN_71001d4200;...
- **Files:** [decomp](../decompiled/FUN_710023dbc0__710023dbc0.c)  [cfg](../decompiled/FUN_710023dbc0__710023dbc0.mmd)
- **Clone hash:** `60fb88c2f895b9c8`

```c

/* WARNING: Removing unreachable block (ram,0x00710023e14c) */
/* WARNING: Removing unreachable block (ram,0x00710023e138) */

void FUN_710023dbc0(long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined4 auStack_250 [6];
  ulong local_238;
  undefined **local_230;
  undefined1 local_228 [16];
  undefined1 *local_218;
  undefined8 local_210;
  undefined4 local_204;
  undefined4 auStack_200 [6];
  undefined8 auStack_1e8 [14];
  undefined8 uStack_178;
  char *local_170;
  
  puVar13 = auStack_250;
  plVar11 = &DAT_71052af1a0;
  if (DAT_71052af1d8 == '\0') {
LAB_710023dc34:
// ... (215 more lines)
```

## 19. `FUN_71004262b0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004262b0`  (offset `0x4262b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004262b0(void)`
- **Size / BBs / Incoming:** 948 bytes / 37 bb / 1 incoming refs
- **Match values:** Online
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

## 20. `FUN_71001d1f60`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d1f60`  (offset `0x1d1f60`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001d1f60(ulong param_1, undefined4 param_2, byte param_3, undefined * param_4, undefined8 param_5, byte * param_6)`
- **Size / BBs / Incoming:** 432 bytes / 17 bb / 2 incoming refs
- **Match values:** Online
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp;(vResult = cbCallback(object, 0)) == bErrorValue;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001d1e40;FUN_71001d6330
- **Callees:** FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b46a0;FUN_71001b4730;FUN_71001b4760;FUN_71001d2110;FUN_71001d7a70;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001d1f60__71001d1f60.c)  [cfg](../decompiled/FUN_71001d1f60__71001d1f60.mmd)
- **Clone hash:** `dbb1750fd549f81d`

```c

undefined8
FUN_71001d1f60(ulong param_1,undefined4 param_2,byte param_3,undefined *param_4,undefined8 param_5,
              byte *param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 auStack_88 [7];
  
  if (((param_1 & 1) == 0) || (uVar2 = FUN_71001d7a70(), (uVar2 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    plVar7 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar5;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          uVar4 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
          return uVar4;
        }
        plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    uVar6 = (**(code **)(**(long **)(*(long *)(*(long *)(*plVar7 + 0x10) + 0x10) + 0x1b8) + 0x18))()
    ;
    if ((uVar6 & 1) == 0) {
      FUN_71001b46a0(auStack_88,10,param_2);
      FUN_71001b2e80((long)auStack_88);
      do {
        bVar1 = (*(code *)param_4)(param_5,0);
        if (((bVar1 ^ param_3) & 1) != 0) goto LAB_71001d20c8;
// ... (20 more lines)
```

## 21. `FUN_71001e0c80`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001e0c80`  (offset `0x1e0c80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001e0c80(long param_1)`
- **Size / BBs / Incoming:** 904 bytes / 44 bb / 4 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001f79c0;FUN_71001f7a40;FUN_71001f8fc0;FUN_71001f9360
- **Callees:** FUN_71001b1300;FUN_71001b2f70;FUN_71001b47e0;FUN_71001b4910;FUN_710021b310;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001e0c80__71001e0c80.c)  [cfg](../decompiled/FUN_71001e0c80__71001e0c80.mmd)
- **Clone hash:** `b85c2c6df226cf02`

```c

void FUN_71001e0c80(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 local_48;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e0cf0:
    if ((*plVar5 == 0) || (lVar3 = *(long *)(*plVar5 + 0x10), lVar3 == 0)) goto LAB_71001e0d20;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001e0cf0;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001e0cf0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001e0d20:
    lVar3 = 0;
  }
  plVar6 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  lVar3 = *(long *)(param_1 + 8);
  puVar7 = (undefined8 *)(lVar3 + 0x28);
  FUN_710021b310(lVar3 + 0x20,(undefined8 *)*puVar7);
  *puVar7 = 0;
// ... (90 more lines)
```

## 22. `FUN_71001d7b90`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d7b90`  (offset `0x1d7b90`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001d7b90(ulong param_1, undefined4 param_2, undefined * param_3, undefined8 param_4, undefined4 * param_5)`
- **Size / BBs / Incoming:** 576 bytes / 22 bb / 1 incoming refs
- **Match values:** Online
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp;PreventRegularBlockCall;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001d5270
- **Callees:** FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b4200;FUN_71001b42a0;FUN_71001b4300;FUN_71001b46a0;FUN_71001b4730;FUN_71001b4760;FUN_71001d2110;FUN_71001d7a70;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001d7b90__71001d7b90.c)  [cfg](../decompiled/FUN_71001d7b90__71001d7b90.mmd)
- **Clone hash:** `b2488e3986c707fa`

```c

undefined8
FUN_71001d7b90(ulong param_1,undefined4 param_2,undefined *param_3,undefined8 param_4,
              undefined4 *param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  byte *pbVar7;
  long *plVar8;
  code *pcVar9;
  undefined4 uStack_bc;
  byte local_b8 [24];
  undefined8 local_a0 [7];
  int local_68 [6];
  
  if (((param_1 & 1) == 0) || (uVar2 = FUN_71001d7a70(), (uVar2 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    plVar8 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar5;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          uVar4 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
          return uVar4;
        }
        plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    uVar6 = (**(code **)(**(long **)(*(long *)(*(long *)(*plVar8 + 0x10) + 0x10) + 0x1b8) + 0x18))()
    ;
    if ((uVar6 & 1) == 0) {
// ... (50 more lines)
```

## 23. `FUN_71001ee050`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001ee050`  (offset `0x1ee050`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001ee050(void)`
- **Size / BBs / Incoming:** 1232 bytes / 47 bb / 2 incoming refs
- **Match values:** Online
- **Strings touched:** RVCID;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;probeinit
- **Callees:** FUN_71001b12a0;FUN_71001b1300;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001bee30;FUN_71001cd7d0;FUN_71001cd870;FUN_71001d0f00;FUN_71001d3d60;FUN_71001e7a40;FUN_71001e85d0;FUN_71001f2180;FUN_71001f2ba0;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001ee050__71001ee050.c)  [cfg](../decompiled/FUN_71001ee050__71001ee050.mmd)
- **Clone hash:** `b84448d35e560f83`

```c

void FUN_71001ee050(long param_1)

{
  uint uVar1;
  short sVar2;
  ulong uVar3;
  int iVar4;
  uint *puVar5;
  long *plVar6;
  ulonglong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  ulong uStack_d0;
  undefined1 *puStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined **ppuStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  plVar6 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar5;
    if (uVar1 == 0) goto LAB_71001ee0c8;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
// ... (131 more lines)
```

## 24. `FUN_71018cede0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018cede0`  (offset `0x18cede0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018cede0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9052 bytes / 373 bb / 1 incoming refs
- **Match values:** online
- **Strings touched:** selector_00;set_parts_btn_00;set_parts_btn_01;set_footer_area;set_parts_btn_00_sub;selector_0;set_parts_sub_btn_00;set_parts_sub_btn_01;set_txt_00;mnu_opt_online_receive;mnu_opt_online_not_receive;set_parts_btn_01_sub;mnu_opt_online_recommend_use;mnu_opt_online_recommend_not_use;selector_01;set_parts_btn_02;size3_message;on_plt_menu_lyt_00;off_plt_menu_lyt_00
- **Callees:** FUN_71000001c0;FUN_7101739120;FUN_7101764000;FUN_71017980f0;FUN_71017d2010;FUN_7101989a30;FUN_7101af2070;FUN_7101af8570;FUN_7101af90b0;FUN_7101af9320;FUN_7101d43940;FUN_7101d47990;FUN_7101d4b6b0;FUN_7103293b70;FUN_7103293f90;FUN_71032a0350;...
- **Files:** [decomp](../decompiled/FUN_71018cede0__71018cede0.c)  [cfg](../decompiled/FUN_71018cede0__71018cede0.mmd)
- **Clone hash:** `f74a17329689a327`

```c

void FUN_71018cede0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  byte ***pppbVar3;
  byte ***pppbVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  byte ***pppbVar13;
  byte **ppbVar14;
  byte ***pppbVar15;
  ulong uVar16;
  long ****pppplVar17;
  long ***ppplVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
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
// ... (1759 more lines)
```

## 25. `FUN_710020f2b0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710020f2b0`  (offset `0x20f2b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710020f2b0(undefined8 param_1, long param_2, undefined4 param_3, long param_4, uint param_5, long param_6, undefined1 * param_7)`
- **Size / BBs / Incoming:** 1452 bytes / 56 bb / 3 incoming refs
- **Match values:** Online
- **Strings touched:** chara/chara_4/chara_4_;..\..\..\..\.\OnlineCore/src/Core/LiteBuffer.h
- **Callers:** FUN_710020f860;FUN_710020f880;FUN_710020f9e0
- **Callees:** FUN_71001b1300;FUN_71001beb30;FUN_71001bef20;FUN_71001cb870;FUN_71001cbc40;FUN_71001cf760;FUN_71001cfad0;FUN_71001d6920;FUN_7101717960;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_710020f2b0__710020f2b0.c)  [cfg](../decompiled/FUN_710020f2b0__710020f2b0.mmd)
- **Clone hash:** `9880cc5fe0df06cf`

```c

void FUN_710020f2b0(undefined8 param_1,long param_2,int param_3,long param_4,uint param_5,
                   long param_6,undefined1 *param_7)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  size_t sVar5;
  long *plVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  byte local_a4 [4];
  undefined8 local_a0;
  ulong local_98;
  long local_90;
  long lStack_88;
  long local_78;
  byte local_68 [4];
  undefined2 local_64 [2];
  long local_60;
  long local_58;
  ulong local_50;
  long lStack_48;
  
  *(undefined8 *)(param_7 + 0x10) = 4;
  uVar2 = 0;
  if (5 < param_3 - 1U) goto switchD_710020f2fc_caseD_4;
  uVar11 = (ulong)param_5;
  switch(param_3) {
  case 1:
    if (param_6 == 0) {
      uVar2 = 0;
      goto switchD_710020f2fc_caseD_4;
    }
    uVar2 = FUN_71001bef20(param_2 + 0x140);
// ... (170 more lines)
```

## 26. `FUN_71001d6d70`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d6d70`  (offset `0x1d6d70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001d6d70(long param_1)`
- **Size / BBs / Incoming:** 852 bytes / 43 bb / 2 incoming refs
- **Match values:** Online
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp
- **Callers:** FUN_71001dd180
- **Callees:** FUN_71001b1300;FUN_71001b43b0;FUN_71001b68a0;FUN_71001b6a50
- **Files:** [decomp](../decompiled/FUN_71001d6d70__71001d6d70.c)  [cfg](../decompiled/FUN_71001d6d70__71001d6d70.mmd)
- **Clone hash:** `f36d789fffedcb4e`

```c

void FUN_71001d6d70(long param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong local_38;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    iVar3 = *(int *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x40) = 0;
    if (iVar3 != 2) {
      FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp",0x2f,
                     0xe000000e,0);
      return;
    }
    goto LAB_71001d6fcc;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    if (DAT_7104f54e20 == '\0') {
      FUN_71001b6a50((long *)&local_38);
    }
    else {
      FUN_71001b68a0(&local_38,0);
    }
    DAT_71052aeba8 = local_38;
    lVar7 = ((local_38 - *(long *)(param_1 + 0x20)) - *(long *)(param_1 + 0x28)) +
            *(long *)(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0xa0);
    if (-1 < lVar7) goto LAB_71001d6de0;
LAB_71001d6e78:
    if (*(char *)(param_1 + 0xcc) == '\0') goto LAB_71001d6f1c;
LAB_71001d6e88:
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + lVar4;
// ... (102 more lines)
```

## 27. `FUN_71001fb120`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001fb120`  (offset `0x1fb120`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001fb120(void)`
- **Size / BBs / Incoming:** 1360 bytes / 72 bb / 2 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b1870;FUN_71001bee30;FUN_71001c0150;FUN_71001ef7e0;FUN_71001f2180;FUN_71001f2a80;FUN_71001fa660;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001fb120__71001fb120.c)  [cfg](../decompiled/FUN_71001fb120__71001fb120.mmd)
- **Clone hash:** `e68a73a49f7d0f81`

```c

undefined4 FUN_71001fb120(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  long *plVar17;
  undefined1 *puStack_90;
  long *plStack_88;
  long lStack_80;
  uint uStack_78;
  ushort uStack_74;
  
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fb1a0:
    if ((*plVar8 == 0) || (lVar10 = *(long *)(*plVar8 + 0x10), lVar10 == 0)) goto LAB_71001fb1d0;
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_71001fb1a0;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71001fb1a0;
// ... (199 more lines)
```

## 28. `FUN_7101c76f30`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c76f30`  (offset `0x1c76f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c76f30(long param_1, byte param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 560 bytes / 19 bb / 83 incoming refs
- **Match values:** online
- **Strings touched:** balloon_on;balloon_off;baloon_type_00;set_txt_balloon_00;mnu_online_room_inside_entry;baloon_type_01;set_txt_balloon_01;mnu_online_room_inside_watching;mnu_online_room_inside_watch;set_txt_guide;baloon_type_02;mnu_online_room_inside_selected
- **Callers:** FUN_7101c50320;FUN_7101c51160;FUN_7101c51ef0;FUN_7101c534b0;FUN_7101c54190;FUN_7101c55160;FUN_7101c55ec0;FUN_7101c56ec0;FUN_7101c57c00;FUN_7101c58580;FUN_7101c5dcd0;FUN_7101c61830
- **Callees:** FUN_710337cef0;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710377a120;FUN_710377aee0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c76f30__7101c76f30.c)  [cfg](../decompiled/FUN_7101c76f30__7101c76f30.mmd)
- **Clone hash:** `53231bc12783de67`

```c

void FUN_7101c76f30(long param_1,byte param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long ****pppplVar2;
  ulong uVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  iVar5 = (int)param_3;
  uVar3 = (ulong)param_2;
  if (7 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *(long *)(param_1 + 8);
  lVar6 = lVar7 + uVar3 * 0x1e0;
  if (*(int *)(lVar6 + 0x1a0) == iVar5) {
    return;
  }
  lVar1 = lVar7 + uVar3 * 0x1e0 + 0x28;
  pppplVar2 = (long ****)"balloon_off";
  if (iVar5 != 0) {
    pppplVar2 = (long ****)"balloon_on";
  }
  FUN_71037780e0(&local_50,lVar1,pppplVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710377aee0(0x3f800000,(long)&local_50);
  switch(iVar5) {
  case 1:
    FUN_7103778300(0x3f800000,*(long *)(lVar7 + uVar3 * 0x1e0 + 0x30),0x710433a1e8);
    FUN_7103776910(&local_60,lVar1,(long ****)"set_txt_balloon_00",param_3,param_4,param_5,param_6,
                   param_7,param_8);
// ... (53 more lines)
```

## 29. `FUN_71002393d0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002393d0`  (offset `0x2393d0`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_71002393d0(long param_1, long * param_2, undefined8 param_3, char * param_4, char * param_5, char * param_6, undefined2 param_7, char * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 1804 bytes / 118 bb / 2 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_7100242a90;FUN_7100242b30
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b47e0;FUN_71001b4910;FUN_71001ccd00;FUN_71001ccdf0;FUN_71001d5dd0;FUN_710023cca0;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71002393d0__71002393d0.c)  [cfg](../decompiled/FUN_71002393d0__71002393d0.mmd)
- **Clone hash:** `4c41cda990c6a7f9`

```c

/* WARNING: Removing unreachable block (ram,0x007100239a40) */
/* WARNING: Removing unreachable block (ram,0x007100239648) */
/* WARNING: Removing unreachable block (ram,0x0071002395a4) */
/* WARNING: Removing unreachable block (ram,0x007100239590) */
/* WARNING: Removing unreachable block (ram,0x00710023965c) */
/* WARNING: Removing unreachable block (ram,0x007100239700) */
/* WARNING: Removing unreachable block (ram,0x007100239714) */
/* WARNING: Removing unreachable block (ram,0x007100239a2c) */

undefined4
FUN_71002393d0(long param_1,long *param_2,undefined8 param_3,char *param_4,char *param_5,
              char *param_6,undefined2 param_7,char *param_8,undefined8 param_9,undefined8 param_10,
              undefined8 param_11)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 uVar13;
  long *plVar14;
  undefined **local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined8 local_68;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100239464:
    if (*plVar10 == 0) goto LAB_710023948c;
    lVar9 = *(long *)(*plVar10 + 0x10);
// ... (290 more lines)
```

## 30. `FUN_7100201e50`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100201e50`  (offset `0x201e50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100201e50(void)`
- **Size / BBs / Incoming:** 1464 bytes / 82 bb / 1 incoming refs
- **Match values:** Online
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp;IsConnecting();(IsConnecting() && !Core::GetInstance()->GetTerminateImmediately());..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b4200;FUN_71001b46a0;FUN_71001b4730;FUN_71001b68a0;FUN_71001b6a50;FUN_71001bec20;FUN_71001da0e0;FUN_71001f2180;FUN_7100202410;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_7100201e50__7100201e50.c)  [cfg](../decompiled/FUN_7100201e50__7100201e50.mmd)
- **Clone hash:** `f2aaf80b617f8060`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7100201e50(undefined4 *param_1,long *param_2,long param_3,long param_4,long param_5,
                   long *param_6,int param_7)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  ulong uVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 uStack_98;
  
  iVar4 = 10000000;
  if (param_7 != -1) {
    iVar4 = param_7;
  }
  uVar9 = (**(code **)(*param_2 + 0x60))();
  if (((((uVar9 & 1) == 0) && (*(int *)((long)param_2 + 0x114) != 0)) ||
      (uVar9 = (**(code **)(*param_2 + 0x40))(param_2), (uVar9 & 1) != 0)) ||
     (uVar9 = (**(code **)(*param_2 + 0x58))(param_2), (uVar9 & 1) != 0)) {
    uStack_98._0_4_ = 0x80050002;
    goto LAB_7100201ee0;
  }
  *(undefined1 *)(param_2 + 0x21) = 0;
  (**(code **)(*param_2 + 0xb0))(param_2,1);
  if (param_3 != 0) {
    piVar1 = (int *)(param_3 + 8);
// ... (200 more lines)
```

## 31. `FUN_71001ed2a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001ed2a0`  (offset `0x1ed2a0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001ed2a0(undefined8 param_1, undefined8 param_2)`
- **Size / BBs / Incoming:** 448 bytes / 22 bb / 1 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001ed2a0__71001ed2a0.c)  [cfg](../decompiled/FUN_71001ed2a0__71001ed2a0.mmd)
- **Clone hash:** `eb5f62b9b59fe083`

```c

undefined8 FUN_71001ed2a0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return 0;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  if (*plVar6 == 0) {
    return 0;
  }
  if (*(long *)(*plVar6 + 0x10) == 0) {
    return 0;
  }
  if (DAT_71052af1d8 == '\0') {
    lVar4 = *(long *)(DAT_71052af128 + 0x10);
    lVar5 = *(long *)(lVar4 + 0x180);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if ((*puVar2 != 0) && ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)*puVar2)) {
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    }
    plVar6 = &DAT_71052af128;
    if (DAT_71052af1d8 != '\0') {
// ... (21 more lines)
```

## 32. `FUN_7100425fe0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100425fe0`  (offset `0x425fe0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100425fe0(void)`
- **Size / BBs / Incoming:** 720 bytes / 28 bb / 0 incoming refs
- **Match values:** Online
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

## 33. `FUN_71002071d0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002071d0`  (offset `0x2071d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71002071d0(long * param_1, long param_2)`
- **Size / BBs / Incoming:** 4020 bytes / 246 bb / 1 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_710020d220
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b1400;FUN_71001b1820;FUN_71001b2170;FUN_71001b34a0;FUN_71001b68a0;FUN_71001b6a50;FUN_71001cbc40;FUN_71001cc790;FUN_71001d6480;FUN_71001d6880;FUN_71001ff490;FUN_71001ff680;FUN_71001ffb10;FUN_71001ffca0;...
- **Files:** [decomp](../decompiled/FUN_71002071d0__71002071d0.c)  [cfg](../decompiled/FUN_71002071d0__71002071d0.mmd)
- **Clone hash:** `a057bc7746d504b7`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_71002071d0(long *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  undefined **ppuVar9;
  size_t sVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  uint uVar16;
  undefined2 uVar17;
  size_t *psVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  size_t sVar26;
  undefined8 auStack_c0 [3];
  long local_a8 [5];
  undefined **local_80;
  ulong local_78;
  size_t local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
// ... (635 more lines)
```

## 34. `FUN_7100204590`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100204590`  (offset `0x204590`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100204590(uint * param_1, long * param_2, long param_3, uint param_4, ulong param_5, undefined1 param_6, uint param_7)`
- **Size / BBs / Incoming:** 1688 bytes / 113 bb / 1 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b1820;FUN_71001b2170;FUN_71001b4200;FUN_71001b4280;FUN_71001b4580;FUN_71001e2270;FUN_71002039c0;FUN_7100203e30;FUN_7100204c30;FUN_7100204de0;FUN_7100216320;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_7100204590__7100204590.c)  [cfg](../decompiled/FUN_7100204590__7100204590.mmd)
- **Clone hash:** `8851224e87dabc14`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7100204590(uint *param_1,long *param_2,long param_3,uint param_4,ulong param_5,
                   undefined1 param_6,uint param_7)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  uint *puVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  byte local_7c [4];
  uint local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar7 = (**(code **)(*param_2 + 0x58))();
  if (((uVar7 & 1) == 0) && (uVar7 = (**(code **)(*param_2 + 0x60))(param_2), (uVar7 & 1) == 0)) {
    local_78 = 0x80050002;
    goto LAB_7100204be0;
  }
  if ((*(byte *)(param_3 + 0x30) >> 2 & 1) == 0) {
LAB_710020475c:
    plVar9 = &DAT_71052af128;
    if (DAT_71052af1d8 != '\0') {
      puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar12 = *puVar8;
      if (uVar12 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar12) {
// ... (259 more lines)
```

## 35. `FUN_71001d0730`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d0730`  (offset `0x1d0730`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001d0730(long * param_1)`
- **Size / BBs / Incoming:** 736 bytes / 48 bb / 40 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001d0c50;FUN_71001e2cd0;FUN_71001e7670;FUN_71001eda30;FUN_710022e920;FUN_71002371d0;FUN_7100238810;FUN_710023d580;FUN_7100240620;FUN_7100240660;FUN_7100240f10;FUN_7100240f50;FUN_7100241360;FUN_71002413e0;FUN_7100241470;FUN_7100243630;...
- **Callees:** FUN_71001af8a0;FUN_71001b1300;FUN_71001b1870;FUN_71001d0a10;FUN_71001d1390;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001d0730__71001d0730.c)  [cfg](../decompiled/FUN_71001d0730__71001d0730.mmd)
- **Clone hash:** `474bf0a31a627d73`

```c

void FUN_71001d0730(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = (long)&PTR_FUN_7104f56058;
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d07a8:
    if (((*plVar5 == 0) || (lVar3 = *(long *)(*plVar5 + 0x10), lVar3 == 0)) ||
       (*(long *)(lVar3 + 0x10) == 0)) goto LAB_71001d0834;
    plVar5 = &DAT_71052af138;
    if (DAT_71052af1d8 == '\0') {
LAB_71001d0804:
      if ((*plVar5 == 0) || (lVar3 = *(long *)(*plVar5 + 0x10), lVar3 == 0)) goto LAB_71001d0950;
      lVar3 = *(long *)(lVar3 + 0x10);
    }
    else {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 == 0) goto LAB_71001d0804;
      if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        goto LAB_71001d0804;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001d0950:
      lVar3 = 0;
    }
    plVar5 = (long *)(lVar3 + 0x78);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (*(int *)((long)param_1 + 0x14) == 1) {
      FUN_71001d0a10(param_1);
    }
// ... (87 more lines)
```

## 36. `FUN_71001edc60`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001edc60`  (offset `0x1edc60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001edc60(void)`
- **Size / BBs / Incoming:** 996 bytes / 37 bb / 2 incoming refs
- **Match values:** Online
- **Strings touched:** RVCID;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b12a0;FUN_71001b1300;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001cd7d0;FUN_71001cd870;FUN_71001d0f00;FUN_71001d3d60;FUN_71001d6410;FUN_71001e85d0;FUN_71001f2ba0;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001edc60__71001edc60.c)  [cfg](../decompiled/FUN_71001edc60__71001edc60.mmd)
- **Clone hash:** `46d6018ff8d5381e`

```c

void FUN_71001edc60(long param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long *plVar4;
  ulonglong uVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_98 [16];
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  plVar4 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        goto LAB_71001ede18;
      }
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
// ... (109 more lines)
```

## 37. `FUN_7100205e10`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100205e10`  (offset `0x205e10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100205e10(long param_1, undefined8 param_2, long param_3)`
- **Size / BBs / Incoming:** 576 bytes / 31 bb / 2 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_7100206050
- **Callees:** FUN_71001b1300;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_7100205e10__7100205e10.c)  [cfg](../decompiled/FUN_7100205e10__7100205e10.mmd)
- **Clone hash:** `1bc2091c49b4b7aa`

```c

void FUN_7100205e10(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if ((*(byte *)(param_3 + 0x61) >> 3 & 1) != 0) {
    plVar3 = &DAT_71052af138;
    if (DAT_71052af1d8 == '\0') {
LAB_7100205f00:
      if ((*plVar3 == 0) || (lVar4 = *(long *)(*plVar3 + 0x10), lVar4 == 0)) goto LAB_7100205f44;
      lVar4 = *(long *)(lVar4 + 0x10);
    }
    else {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 == 0) goto LAB_7100205f00;
      if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        goto LAB_7100205f00;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100205f44:
      lVar4 = 0;
    }
    plVar5 = (long *)(lVar4 + 0x78);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    plVar3 = &DAT_71052af188;
    if (DAT_71052af1d8 != '\0') {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          goto LAB_7100206030;
// ... (43 more lines)
```

## 38. `FUN_71001e8b20`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001e8b20`  (offset `0x1e8b20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001e8b20(long param_1)`
- **Size / BBs / Incoming:** 3896 bytes / 116 bb / 1 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;N2nn3nex15EmulationDeviceE;RVCID;probeinit
- **Callers:** FUN_71001ec790
- **Callees:** FUN_71001af850;FUN_71001b12a0;FUN_71001b1300;FUN_71001b1400;FUN_71001b17c0;FUN_71001b1820;FUN_71001b1870;FUN_71001b2f70;FUN_71001b3130;FUN_71001b3140;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e00;FUN_71001beb40;FUN_71001e9a60;FUN_71001f1f40;...
- **Files:** [decomp](../decompiled/FUN_71001e8b20__71001e8b20.c)  [cfg](../decompiled/FUN_71001e8b20__71001e8b20.mmd)
- **Clone hash:** `2257f2acc8c054f6`

```c

void FUN_71001e8b20(long param_1)

{
  long *plVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  uint *puVar5;
  long *plVar6;
  ulong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  ulong local_100;
  undefined **local_f8;
  undefined **local_f0;
  undefined1 local_e8 [8];
  undefined ***local_e0;
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  undefined **local_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined8 uStack_a0;
  int iStack_94;
  undefined8 uStack_90;
  undefined1 local_88;
// ... (548 more lines)
```

## 39. `FUN_71001ed460`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001ed460`  (offset `0x1ed460`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001ed460(void)`
- **Size / BBs / Incoming:** 444 bytes / 22 bb / 1 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001ed460__71001ed460.c)  [cfg](../decompiled/FUN_71001ed460__71001ed460.mmd)
- **Clone hash:** `286d44fa5f449200`

```c

undefined8 FUN_71001ed460(void)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return 0;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  if (*plVar6 == 0) {
    return 0;
  }
  if (*(long *)(*plVar6 + 0x10) == 0) {
    return 0;
  }
  if (DAT_71052af1d8 == '\0') {
    lVar4 = *(long *)(DAT_71052af128 + 0x10);
    lVar5 = *(long *)(lVar4 + 0x180);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if ((*puVar2 != 0) && ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)*puVar2)) {
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    }
    plVar6 = &DAT_71052af128;
    if (DAT_71052af1d8 != '\0') {
// ... (21 more lines)
```

## 40. `FUN_71002406a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002406a0`  (offset `0x2406a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71002406a0(void)`
- **Size / BBs / Incoming:** 828 bytes / 41 bb / 3 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b1870;FUN_71001d3d60;FUN_71001e32f0;FUN_71001ef600;FUN_71001fb670;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71002406a0__71002406a0.c)  [cfg](../decompiled/FUN_71002406a0__71002406a0.mmd)
- **Clone hash:** `1c9f356f73c3de4a`

```c

void FUN_71002406a0(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long ****pppplVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long ***ppplVar10;
  long *plVar11;
  long ****pppplVar12;
  long *plVar13;
  undefined **ppuStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  long ***ppplStack_68;
  long ***ppplStack_60;
  long lStack_58;
  
  ppplStack_68 = (long ***)&ppplStack_68;
  lStack_58 = 0;
  plVar13 = &DAT_71052af128;
  ppplStack_60 = ppplStack_68;
  if (DAT_71052af1d8 == '\0') {
LAB_7100240720:
    if ((*plVar13 == 0) || (lVar7 = *(long *)(*plVar13 + 0x10), lVar7 == 0)) goto LAB_7100240750;
    lVar7 = *(long *)(lVar7 + 0xe8);
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar6;
    if (uVar1 == 0) goto LAB_7100240720;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
// ... (104 more lines)
```

## 41. `FUN_7100426670`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100426670`  (offset `0x426670`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100426670(void)`
- **Size / BBs / Incoming:** 416 bytes / 16 bb / 1 incoming refs
- **Match values:** Online
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

## 42. `FUN_7101c5acf0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c5acf0`  (offset `0x1c5acf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c5acf0(long * param_1, uint param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7940 bytes / 328 bb / 1 incoming refs
- **Match values:** online
- **Strings touched:** nam_chr1_%02d_%s;set_txt_chara_name;set_txt_chara_name_00;chara_size;set_rep_chara_pk_sd;set_rep_chara_pk;set_rep_silhouette;ol_pokemon_on;ol_pokemon_off;set_rep_mark_m;set_rep_chara;set_rep_chara_sd;set_rep_chara_decide;set_txt_00;mnu_online_room_inside_account_nam;set_rep_icn_fighter_01;set_icn_profile;set_icn_profile_bg;ol_flag_icon_off;set_txt_pl_num;cmn_%dp;set_parts_icon_s;set_rep_sp;set_rep_sp_sd;set_rep_sp_mini;set_rep_sp_sd_mini;spirits_set;spirits_unset;spirit_attacker_non;txt_04;mnu_online_room_inside_fp_lv_n;set_txt_fp;...
- **Callers:** FUN_7101c5a2d0
- **Callees:** FUN_71003a4ca0;FUN_7101c5a440;FUN_7101c5cc00;FUN_7101c5ce50;FUN_7101c5d270;FUN_710323f330;FUN_710323f600;FUN_710323faf0;FUN_7103240430;FUN_7103262310;FUN_71032631a0;FUN_71032632a0;FUN_7103263540;FUN_7103263f80;FUN_7103265e70;FUN_71032a9470;...
- **Files:** [decomp](../decompiled/FUN_7101c5acf0__7101c5acf0.c)  [cfg](../decompiled/FUN_7101c5acf0__7101c5acf0.mmd)
- **Clone hash:** `fc7a1b60ec811da0`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101c5acf0(long *param_1,uint param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *********ppppppppplVar1;
  ushort *puVar2;
  undefined *puVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  undefined1 uVar9;
  char cVar10;
  undefined8 *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined8 *puVar23;
  byte bVar24;
  ulong uVar25;
  char *pcVar26;
  byte *pbVar27;
  long *********ppppppppplVar28;
  undefined8 uVar29;
  long ****pppplVar30;
  byte ****ppppbVar31;
  uint uVar32;
  long lVar33;
// ... (1547 more lines)
```

## 43. `FUN_71001e0970`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001e0970`  (offset `0x1e0970`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001e0970(undefined8 * param_1)`
- **Size / BBs / Incoming:** 580 bytes / 28 bb / 3 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001e0bc0;FUN_71001ef180
- **Callees:** FUN_71001b1300;FUN_71001b2090;FUN_71001b4200;FUN_71001cd7d0;FUN_71001d0f00;FUN_71001d6020;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001e0970__71001e0970.c)  [cfg](../decompiled/FUN_71001e0970__71001e0970.mmd)
- **Clone hash:** `b0486dae968b252c`

```c

void FUN_71001e0970(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_7104f57270;
  if (*(int *)(param_1 + 5) == 0) goto LAB_71001e0af0;
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e09f4:
    if ((*plVar3 == 0) || (lVar4 = *(long *)(*plVar3 + 0x10), lVar4 == 0)) goto LAB_71001e0a24;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001e09f4;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001e09f4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001e0a24:
    lVar4 = 0;
  }
  plVar5 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  plVar3 = &DAT_71052af138;
// ... (47 more lines)
```

## 44. `FUN_71001fa8c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001fa8c0`  (offset `0x1fa8c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001fa8c0(void)`
- **Size / BBs / Incoming:** 1188 bytes / 65 bb / 2 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b1870;FUN_71001beb30;FUN_71001bee30;FUN_71001c38c0;FUN_71001ef610;FUN_71001f2180;FUN_71001f2a80;FUN_71001f9fb0;FUN_71001fa660;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001fa8c0__71001fa8c0.c)  [cfg](../decompiled/FUN_71001fa8c0__71001fa8c0.mmd)
- **Clone hash:** `03bccbbf5acb9af1`

```c

undefined4
FUN_71001fa8c0(long param_1,ushort param_2,ushort *param_3,ulong param_4,uint param_5,byte param_6,
              uint param_7,uint param_8,byte param_9)

{
  long ****pppplVar1;
  long ***ppplVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long ***ppplVar9;
  long *plVar10;
  undefined4 uVar11;
  long ****pppplVar12;
  long *plVar13;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long lStack_88;
  ushort auStack_7c [2];
  uint uStack_78;
  ushort uStack_74;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fa954:
    if ((*plVar10 == 0) || (lVar6 = *(long *)(*plVar10 + 0x10), lVar6 == 0)) goto LAB_71001fa984;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar5;
    if (uVar4 == 0) goto LAB_71001fa954;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_71001fa954;
    }
// ... (143 more lines)
```

## 45. `FUN_710023d030`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710023d030`  (offset `0x23d030`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710023d030(long param_1)`
- **Size / BBs / Incoming:** 1360 bytes / 56 bb / 2 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;https
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b2f70;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e00;FUN_71001b52a0;FUN_71001d1590;FUN_71001d3d60;FUN_71001d4200;FUN_71001d6410;FUN_71001de2c0;FUN_71001de8c0;FUN_71001dec00;FUN_71001dec10;...
- **Files:** [decomp](../decompiled/FUN_710023d030__710023d030.c)  [cfg](../decompiled/FUN_710023d030__710023d030.mmd)
- **Clone hash:** `63b3a839ef802762`

```c

void FUN_710023d030(long param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined2 uVar10;
  undefined8 local_280;
  undefined1 local_278 [16];
  undefined1 *local_268;
  undefined8 local_260;
  undefined4 auStack_258 [6];
  undefined **local_240;
  char local_238 [16];
  char *local_228;
  undefined8 local_220;
  undefined **local_218;
  code *local_210;
  undefined8 uStack_208;
  undefined1 *local_200;
  undefined4 auStack_c8 [6];
  undefined4 auStack_b0 [6];
  undefined4 auStack_98 [6];
  undefined4 auStack_80 [6];
  undefined4 auStack_68 [6];
  
  lVar4 = FUN_71001b52a0(param_1 + 0xa8);
  if (lVar4 == 0) {
    local_218 = (undefined **)CONCAT44(local_218._4_4_,0x8001000a);
    FUN_71001b4200(auStack_68,(undefined4 *)&local_218);
    puVar8 = auStack_68;
    goto LAB_710023d0f4;
  }
// ... (165 more lines)
```

## 46. `FUN_7100202710`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100202710`  (offset `0x202710`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100202710(void)`
- **Size / BBs / Incoming:** 1688 bytes / 103 bb / 1 incoming refs
- **Match values:** Online
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp;IsDisconnecting();chara/chara_4/chara_4_;(IsDisconnecting() && !Core::GetInstance()->GetTerminateImmediately());..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b4200;FUN_71001b4280;FUN_71001b46a0;FUN_71001b4730;FUN_71001b68a0;FUN_71001b6a50;FUN_71001da0e0;FUN_7100202db0;FUN_7100203410;FUN_71002039c0;FUN_7100216320;FUN_7101717960;...
- **Files:** [decomp](../decompiled/FUN_7100202710__7100202710.c)  [cfg](../decompiled/FUN_7100202710__7100202710.mmd)
- **Clone hash:** `04b862fbacc43879`

```c

void FUN_7100202710(undefined8 *param_1,long *param_2,long param_3,long *param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 uStack_b0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (((int)param_2[0x14] == 0) || (uVar7 = (**(code **)(*param_2 + 0x58))(), (uVar7 & 1) == 0)) {
    uStack_b0._0_4_ = 0x80050002;
    goto LAB_71002028e4;
  }
  FUN_7100202db0(param_2);
  (**(code **)(*param_2 + 0xb0))(param_2,3);
  param_2[0x60] = 0;
  param_2[0x5f] = 0;
  param_2[0x61] = param_3;
  param_2[0x62] = *param_4;
  plVar8 = FUN_71001af850(0x238);
  if (plVar8 != (long *)0x0) {
    FUN_7100216320(plVar8,param_2,3,0x60,0,0);
  }
  *(undefined1 *)(plVar8 + 8) = *(undefined1 *)((long)param_2 + 0x1eb);
  uVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
// ... (244 more lines)
```

## 47. `FUN_71001d3a20`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d3a20`  (offset `0x1d3a20`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_71001d3a20(long param_1)`
- **Size / BBs / Incoming:** 820 bytes / 40 bb / 2 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71002ab1d0;FUN_71002abef0
- **Callees:** FUN_71001b12a0;FUN_71001b1300;FUN_71001b1820;FUN_71001ccd00;FUN_71001d8820;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001d3a20__71001d3a20.c)  [cfg](../decompiled/FUN_71001d3a20__71001d3a20.mmd)
- **Clone hash:** `8574d79fa2a11720`

```c

undefined4 FUN_71001d3a20(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong local_48;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d3a90:
    if ((*plVar10 == 0) || (lVar6 = *(long *)(*plVar10 + 0x10), lVar6 == 0)) goto LAB_71001d3ac0;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_71001d3a90;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001d3a90;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001d3ac0:
    lVar6 = 0;
  }
  plVar10 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  bVar2 = FUN_71001ccd00(*(long **)(param_1 + 0xa8));
  if (!bVar2) {
    uVar3 = 0;
    goto LAB_71001d3d10;
// ... (86 more lines)
```

## 48. `FUN_71001cf7a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001cf7a0`  (offset `0x1cf7a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001cf7a0(long param_1, ulong param_2)`
- **Size / BBs / Incoming:** 480 bytes / 25 bb / 35 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001cb870;FUN_71001cbfb0;FUN_71001cc150;FUN_71001cc3a0;FUN_71001cc510;FUN_71001cc790;FUN_71001cc8a0;FUN_71001cc980;FUN_71001cceb0;FUN_71001cd060;FUN_71001cd3b0;FUN_71001cd890;FUN_71001cda90;FUN_71001ce440;FUN_71001ce5e0;FUN_71001ce6b0;...
- **Callees:** FUN_71001b1300;FUN_71001b1820;FUN_71001b20e0;FUN_71001b2280;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001cf7a0__71001cf7a0.c)  [cfg](../decompiled/FUN_71001cf7a0__71001cf7a0.mmd)
- **Clone hash:** `2e255444af57cb37`

```c

/* WARNING: Removing unreachable block (ram,0x0071001cf8a4) */

void FUN_71001cf7a0(long param_1,ulong param_2)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = &DAT_71052af190;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb;
        goto LAB_71001cf8e0;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x78);
    }
  }
  if (*plVar5 != 0) {
    if (DAT_71052af1d8 == '\0') {
LAB_71001cf868:
      uVar3 = FUN_71001b20e0(DAT_71052af190);
    }
    else {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 == 0) goto LAB_71001cf868;
      if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        uVar3 = FUN_71001b20e0(*(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x78));
      }
      else {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        uVar3 = FUN_71001b20e0(0);
// ... (32 more lines)
```

## 49. `FUN_7101a23a80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a23a80`  (offset `0x1a23a80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a23a80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8756 bytes / 346 bb / 1 incoming refs
- **Match values:** online
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

## 50. `FUN_71001e4400`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001e4400`  (offset `0x1e4400`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_71001e4400(long param_1, long param_2)`
- **Size / BBs / Incoming:** 1196 bytes / 40 bb / 1 incoming refs
- **Match values:** Online
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;RVCID;N2nn3nex15EmulationDeviceE
- **Callers:** FUN_71001e3bc0
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b1400;FUN_71001b17c0;FUN_71001b1820;FUN_71001b2f70;FUN_71001b3130;FUN_71001b3140;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e00;FUN_71001beb40;FUN_71001f1f40;FUN_71001f2a80;FUN_71001f2ba0;FUN_710021bff0;...
- **Files:** [decomp](../decompiled/FUN_71001e4400__71001e4400.c)  [cfg](../decompiled/FUN_71001e4400__71001e4400.mmd)
- **Clone hash:** `48439404a7f63217`

```c

undefined4 FUN_71001e4400(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined **local_98;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined ***local_68;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e447c:
    if ((*plVar10 != 0) && (lVar9 = *(long *)(*plVar10 + 0x10), lVar9 != 0)) {
      lVar9 = *(long *)(lVar9 + 0x10);
      goto LAB_71001e44b0;
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_71001e447c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001e447c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
// ... (117 more lines)
```

