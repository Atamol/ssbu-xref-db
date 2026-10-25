# melee (funcs=109, hits=343)

Top 50 functions by hit count

## 1. `FUN_7101744340`  (hits=19)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101744340`  (offset `0x1744340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101744340(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6768 bytes / 29 bb / 2 incoming refs
- **Match values:** melee
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

## 2. `FUN_7101bf02a0`  (hits=16)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bf02a0`  (offset `0x1bf02a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bf02a0(undefined8 * param_1, long * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10668 bytes / 435 bb / 1 incoming refs
- **Match values:** MELEE
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

## 3. `FUN_710139ae60`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710139ae60`  (offset `0x139ae60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710139ae60(long param_1)`
- **Size / BBs / Incoming:** 1740 bytes / 82 bb / 1 incoming refs
- **Match values:** melee
- **Strings touched:** info_melee_lct_ko_max_00;info_melee_lct_ko_max_01;info_melee_lct_limit_localize_bg_00;info_melee_localize_pil;info_melee_lct_monad_jump;info_melee_lct_monad_speed;info_melee_lct_monad_shield;mode_empty_03;info_melee_lct_monad_buster;info_melee_lct_monad_smash;info_melee_timer_pil_s;info_melee_num_p;info_melee_num_hp;p4_rep_info_melee_lct_brave_wind_00;p4_rep_info_melee_lct_brave_wind_01;p4_rep_info_melee_lct_brave_wind_02
- **Callees:** FUN_710323a4f0;FUN_710323af70;FUN_710323beb0;FUN_710323c1c0;FUN_710323c4e0;FUN_710328fed0
- **Files:** [decomp](../decompiled/FUN_710139ae60__710139ae60.c)  [cfg](../decompiled/FUN_710139ae60__710139ae60.mmd)
- **Clone hash:** `2e494d3d53da593e`

```c

void FUN_710139ae60(long param_1)

{
  uint *puVar1;
  int iVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long ****pppplVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar9;
  char cVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  ulong local_38;
  
  lVar16 = *(long *)(**(long **)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 8) + 0xcd0);
  lVar6 = *(long *)(lVar16 + 0x28);
  puVar3 = (ulong *)&DAT_7104544bc0;
  if (*(char *)(*(long *)(param_1 + 0x50) + 0x1918) != '\0') {
    puVar3 = (ulong *)&DAT_7104544bb8;
  }
  pppplVar8 = (long ****)0x0;
  FUN_710323beb0(lVar6,puVar3,(long)*(int *)(lVar6 + 0x70),(ulong)*(uint *)(lVar6 + 0x68),
                 (long ****)0x0,in_x5,in_x6,in_x7);
  lVar6 = *(long *)(lVar16 + 0x28);
  FUN_710323c1c0(lVar6,(ulong *)&DAT_7104544bc8,(long *********)(long)*(int *)(lVar6 + 0x70),
                 (byte ****)(ulong)*(uint *)(lVar6 + 0x68),pppplVar8,in_x5,in_x6,in_x7);
  local_38 = FUN_710323af70(0x71043dfdfc,0);
  if ((local_38 & 0xffffffffff) != 0) {
// ... (245 more lines)
```

## 4. `FUN_7101ac4ba0`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac4ba0`  (offset `0x1ac4ba0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac4ba0(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6728 bytes / 295 bb / 4 incoming refs
- **Match values:** melee
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

## 5. `FUN_7101ac65f0`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac65f0`  (offset `0x1ac65f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac65f0(long param_1, uint * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2524 bytes / 133 bb / 3 incoming refs
- **Match values:** melee
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

## 6. `FUN_710041f880`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710041f880`  (offset `0x41f880`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710041f880(void)`
- **Size / BBs / Incoming:** 3608 bytes / 142 bb / 1 incoming refs
- **Match values:** Melee
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

## 7. `FUN_710235d040`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710235d040`  (offset `0x235d040`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710235d040(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 25696 bytes / 1747 bb / 1 incoming refs
- **Match values:** Melee
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

## 8. `FUN_71013950f0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71013950f0`  (offset `0x13950f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71013950f0(long param_1)`
- **Size / BBs / Incoming:** 468 bytes / 17 bb / 1 incoming refs
- **Match values:** melee
- **Strings touched:** info_melee_num_p;info_melee_num_hp;info_melee_lct_cursor_player_fp_00;info_melee_lct_cursor_player_fp_r;info_melee_lct_cursor_player_fp_b;info_melee_lct_cursor_player_fp_y;info_melee_lct_cursor_player_fp_g;info_melee_lct_cursor_player_lvup
- **Callees:** FUN_710323af70;FUN_710323beb0;FUN_710323c4e0
- **Files:** [decomp](../decompiled/FUN_71013950f0__71013950f0.c)  [cfg](../decompiled/FUN_71013950f0__71013950f0.mmd)
- **Clone hash:** `68300200a9a5416e`

```c

void FUN_71013950f0(long param_1)

{
  long lVar1;
  long ****pppplVar2;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  ulong local_18;
  
  lVar3 = *(long *)(param_1 + 0x50);
  lVar1 = *(long *)(lVar3 + 8);
  FUN_710323beb0(lVar1,(ulong *)&DAT_7104544cb0,(long)*(int *)(lVar1 + 0x70),
                 (ulong)*(uint *)(lVar1 + 0x68),(long ****)0x0,in_x5,in_x6,in_x7);
  lVar1 = *(long *)(lVar3 + 8);
  pppplVar2 = (long ****)0x0;
  FUN_710323beb0(lVar1,(ulong *)&DAT_7104544cb8,(long)*(int *)(lVar1 + 0x70),
                 (ulong)*(uint *)(lVar1 + 0x68),(long ****)0x0,in_x5,in_x6,in_x7);
  local_18 = FUN_710323af70(0x7104433480,0);
  if ((local_18 & 0xffffffffff) != 0) {
    lVar1 = *(long *)(lVar3 + 8);
    FUN_710323c4e0(lVar1,&local_18,(long *********)(long)*(int *)(lVar1 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar1 + 0x68),pppplVar2,in_x5,in_x6,in_x7);
  }
  local_18 = FUN_710323af70(0x71042e6e4e,0);
  if ((local_18 & 0xffffffffff) != 0) {
    lVar1 = *(long *)(lVar3 + 8);
    FUN_710323c4e0(lVar1,&local_18,(long *********)(long)*(int *)(lVar1 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar1 + 0x68),pppplVar2,in_x5,in_x6,in_x7);
  }
  local_18 = FUN_710323af70(0x710425f124,0);
  if ((local_18 & 0xffffffffff) != 0) {
    lVar1 = *(long *)(lVar3 + 8);
    FUN_710323c4e0(lVar1,&local_18,(long *********)(long)*(int *)(lVar1 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar1 + 0x68),pppplVar2,in_x5,in_x6,in_x7);
  }
  local_18 = FUN_710323af70(0x710438c763,0);
  if ((local_18 & 0xffffffffff) != 0) {
// ... (31 more lines)
```

## 9. `FUN_7101f94540`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f94540`  (offset `0x1f94540`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f94540(long param_1)`
- **Size / BBs / Incoming:** 1752 bytes / 4 bb / 2 incoming refs
- **Match values:** melee
- **Strings touched:** LuaAutomaticTest;print;set_fighter_num;gauge_parts_on;set_fighter_kind;get_fighter_kind;set_fighter_color;set_fighter_cp_flag;change_fighter;is_reloaded_fighter;is_fighter_status_wait;set_all_fighter_visibility;mode_empty_03;get_fighter_animcmd;set_stage;set_stage_visibility;set_waiting_frames;get_waiting_frames;begin_melee;is_melee_started;start_melee;end_melee;start_measuring_load;end_measuring_load;set_melee_pause;random;set_all_info_visibility;set_bool_of_debug_resident_menu;get_bool_of_debug_resident_menu;set_int_of_debug_resident_menu;get_int_of_debug_resident_menu;set_float_of_debug_resident_menu;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101f94540__7101f94540.c)  [cfg](../decompiled/FUN_7101f94540__7101f94540.mmd)
- **Clone hash:** `75eef1448bd6895c`

```c

void FUN_7101f94540(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"LuaAutomaticTest",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"print",(long ****)FUN_7101f8fa20,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_num",(long ****)FUN_7101f8fb10,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_kind",(long ****)FUN_7101f8fbb0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_kind",(long ****)FUN_7101f8fcf0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_color",(long ****)FUN_7101f8fdc0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_cp_flag",(long ****)FUN_7101f8fe80,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_fighter",(long ****)FUN_7101f8ffc0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_reloaded_fighter",(long ****)FUN_7101f900f0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_fighter_status_wait",(long ****)FUN_7101f901d0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_all_fighter_visibility",(long ****)FUN_7101f90320,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_animcmd",(long ****)FUN_7101f90500,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_stage",(long ****)FUN_7101f905a0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
// ... (122 more lines)
```

## 10. `FUN_7101714c00`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101714c00`  (offset `0x1714c00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101714c00(long param_1, long param_2, undefined2 * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6812 bytes / 251 bb / 2 incoming refs
- **Match values:** melee
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

## 11. `FUN_7101bd7a40`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bd7a40`  (offset `0x1bd7a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bd7a40(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9880 bytes / 588 bb / 2 incoming refs
- **Match values:** melee
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

## 12. `FUN_7101b7e8f0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b7e8f0`  (offset `0x1b7e8f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b7e8f0(long param_1, uint param_2, undefined4 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 332 bytes / 11 bb / 2 incoming refs
- **Match values:** melee
- **Strings touched:** mode_empty_03;info_melee_lct_monad_smash;info_melee_lct_monad_buster;info_melee_lct_monad_shield;info_melee_lct_monad_speed;info_melee_lct_monad_jump
- **Callers:** FUN_7101422c20;FUN_7101b7ea40
- **Callees:** FUN_7103240d30;FUN_7103778b80;FUN_710377aee0;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101b7e8f0__7101b7e8f0.c)  [cfg](../decompiled/FUN_7101b7e8f0__7101b7e8f0.mmd)
- **Clone hash:** `d2ea357017d9970e`

```c

void FUN_7101b7e8f0(long param_1,uint param_2,undefined4 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *********ppppppppplVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  
  if (7 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(param_1 + 0x80);
  switch(param_3) {
  case 1:
    plVar1 = *(long **)(param_1 + 0x78);
    lVar3 = 0xd;
    if (((ulong)param_4 & 1) == 0) {
      lVar3 = 0x12;
    }
    pcVar4 = "info_melee_lct_monad_speed";
    break;
  case 2:
    plVar1 = *(long **)(param_1 + 0x78);
    lVar3 = 0xe;
    if (((ulong)param_4 & 1) == 0) {
      lVar3 = 0x13;
    }
    pcVar4 = "info_melee_lct_monad_shield";
    break;
  case 3:
    plVar1 = *(long **)(param_1 + 0x78);
    lVar3 = 0xf;
    if (((ulong)param_4 & 1) == 0) {
      lVar3 = 0x14;
    }
// ... (33 more lines)
```

## 13. `FUN_71023d4940`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71023d4940`  (offset `0x23d4940`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71023d4940(undefined8 param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 600 bytes / 22 bb / 5 incoming refs
- **Match values:** MELEE
- **Strings touched:** manager;__index;MELEE_TYPE_NORMAL;MELEE_TYPE_TEAM;MELEE_TYPE_BATTLE_ROYAL;MELEE_TYPE_ONE_TO_MANY;MELEE_TYPE_CORPS;MELEE_TYPE_BONUS;DIFFICULTY_MIN;DIFFICULTY_MAX
- **Callers:** FUN_710148ed10;FUN_7101970b60;FUN_7101971570;FUN_7101edbf20;FUN_7101eddd30
- **Callees:** FUN_7103375650;FUN_71038f4d40;FUN_71038f5390;FUN_71038f5c00;FUN_71038f6930;FUN_71038f7260;FUN_71038f9510
- **Files:** [decomp](../decompiled/FUN_71023d4940__71023d4940.c)  [cfg](../decompiled/FUN_71023d4940__71023d4940.mmd)
- **Clone hash:** `b517f53b1d3218df`

```c

void FUN_71023d4940(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  if ((long *)*param_2 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)*param_2;
  }
  FUN_71038f7260(lVar6,"manager");
  puVar4 = *(undefined8 **)(lVar6 + 0x10);
  *puVar4 = puVar4[-2];
  puVar4[1] = puVar4[-1];
  lVar5 = *(long *)(lVar6 + 0x10);
  *(long *)(lVar6 + 0x10) = lVar5 + 0x10;
  FUN_71038f5390(lVar6,(long *)(lVar5 + -0x10),"__index");
  FUN_71038f9510(lVar6,(long *)&DAT_71050ba898,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -0x10;
  puVar4 = FUN_71038f6930(lVar6,8);
  *puVar4 = param_1;
  FUN_71038f4d40(lVar6,(long *)(*(long *)(lVar6 + 0x18) + 0x40),"manager");
  FUN_71038f5c00(lVar6,-2);
  if (lVar6 != 0) {
    lVar5 = *(long *)(*(long *)(lVar6 + 0x18) + 0x40);
    if (*(uint *)(lVar5 + 0xc) < 2) {
      plVar2 = (long *)(*(long *)(lVar5 + 0x18) +
                       ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar5 + 0xb) & 0x3f)) & 2) *
                       0x20);
      do {
        if (((int)plVar2[3] == 0x13) && (plVar3 = plVar2, plVar2[2] == 2)) break;
        piVar1 = (int *)((long)plVar2 + 0x1c);
// ... (37 more lines)
```

## 14. `FUN_7101b97ec0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b97ec0`  (offset `0x1b97ec0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b97ec0(char * param_1, long * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 228 bytes / 4 bb / 30 incoming refs
- **Match values:** melee
- **Strings touched:** info_melee_lct_cursor_player_fp_00;info_melee_lct_cursor_player_lvup;info_melee_num_p;info_melee_num_hp
- **Callers:** FUN_7101b95c00
- **Callees:** FUN_7103240d30;FUN_7103778b80
- **Files:** [decomp](../decompiled/FUN_7101b97ec0__7101b97ec0.c)  [cfg](../decompiled/FUN_7101b97ec0__7101b97ec0.mmd)
- **Clone hash:** `a60302b5ec0a1f0a`

```c

void FUN_7101b97ec0(char *param_1,long *param_2,undefined8 param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long *********ppppppppplVar3;
  
  if (*param_1 == '\0') {
    ppppppppplVar3 = (long *********)0x0;
    plVar1 = FUN_7103240d30(param_2,0x7104433480,(long ****)0x0,param_4,param_5,param_6,param_7,
                            param_8);
    FUN_7103778b80(*(long *)(param_1 + 0x90),(long)plVar1,ppppppppplVar3,param_4,param_5,param_6,
                   param_7,param_8);
    ppppppppplVar3 = (long *********)0x0;
    plVar1 = FUN_7103240d30(param_2,0x71042e6e4e,(long ****)0x0,param_4,param_5,param_6,param_7,
                            param_8);
    FUN_7103778b80(*(long *)(param_1 + 0xa0),(long)plVar1,ppppppppplVar3,param_4,param_5,param_6,
                   param_7,param_8);
    ppppppppplVar3 = (long *********)0x0;
    plVar1 = FUN_7103240d30(param_2,0x710425f124,(long ****)0x0,param_4,param_5,param_6,param_7,
                            param_8);
    FUN_7103778b80(*(long *)(param_1 + 0xb0),(long)plVar1,ppppppppplVar3,param_4,param_5,param_6,
                   param_7,param_8);
    ppppppppplVar3 = (long *********)0x0;
    plVar1 = FUN_7103240d30(param_2,0x71043f0717,(long ****)0x0,param_4,param_5,param_6,param_7,
                            param_8);
    lVar2 = *(long *)(param_1 + 0xc0);
  }
  else {
    ppppppppplVar3 = (long *********)0x0;
    plVar1 = FUN_7103240d30(param_2,0x710425f124,(long ****)0x0,param_4,param_5,param_6,param_7,
                            param_8);
    FUN_7103778b80(*(long *)(param_1 + 0xd0),(long)plVar1,ppppppppplVar3,param_4,param_5,param_6,
                   param_7,param_8);
    ppppppppplVar3 = (long *********)0x0;
    plVar1 = FUN_7103240d30(param_2,0x71043f0717,(long ****)0x0,param_4,param_5,param_6,param_7,
                            param_8);
    lVar2 = *(long *)(param_1 + 0xe0);
// ... (5 more lines)
```

## 15. `FUN_7101b69480`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b69480`  (offset `0x1b69480`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b69480(void)`
- **Size / BBs / Incoming:** 40408 bytes / 2245 bb / 4 incoming refs
- **Match values:** melee
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

## 16. `FUN_71018dace0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018dace0`  (offset `0x18dace0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018dace0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6580 bytes / 245 bb / 1 incoming refs
- **Match values:** melee
- **Strings touched:** info_melee_localize_pil;info_melee_num_p;slider_00;set_bar_00;selector_00;slider_btn_00;selector_01;set_parts_btn_tab_0_00;set_parts_btn_tab_0_01;set_cursor_%02d;cursor;set_txt_num;cmn_%dp;set_txt_name;set_info_%02d;set_txt_00;set_rep_00;set_rep_01;mode_empty_03;face_bg;set_txt_score_00;set_dmg_num_p;num_dec_01;set_dmg_p;set_dmg_num_dec;num_%d;set_dmg_num_%d
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_71018d9d00;FUN_7101d55fd0;FUN_7103238a70;FUN_7103238d60;FUN_710323af70;FUN_710323b9e0;FUN_710323beb0;FUN_710323c4e0;FUN_710323cb80;FUN_710323f330;FUN_710323f600;FUN_7103240d30;FUN_7103263e20;FUN_7103263f80;...
- **Files:** [decomp](../decompiled/FUN_71018dace0__71018dace0.c)  [cfg](../decompiled/FUN_71018dace0__71018dace0.mmd)
- **Clone hash:** `39ddf8d1d1425c67`

```c

void FUN_71018dace0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  long ***ppplVar9;
  byte ***pppbVar10;
  long ***ppplVar11;
  undefined8 *puVar12;
  bool bVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  long lVar22;
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
// ... (1302 more lines)
```

## 17. `FUN_7101b7ea40`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b7ea40`  (offset `0x1b7ea40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b7ea40(long param_1, uint param_2, undefined4 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 356 bytes / 13 bb / 1 incoming refs
- **Match values:** melee
- **Strings touched:** info_melee_lct_monad_jump;info_melee_lct_monad_smash;info_melee_lct_monad_shield;info_melee_lct_monad_speed;mode_empty_03;info_melee_lct_monad_buster
- **Callers:** FUN_7101422c20
- **Callees:** FUN_7101b7e8f0;FUN_7103240d30;FUN_7103778b80;FUN_710377aee0;FUN_710377b010;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101b7ea40__7101b7ea40.c)  [cfg](../decompiled/FUN_7101b7ea40__7101b7ea40.mmd)
- **Clone hash:** `a9084c7eafd07fae`

```c

void FUN_7101b7ea40(long param_1,uint param_2,undefined4 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  char *pcVar4;
  long *********ppppppppplVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar6 = SUB84(param_5,0);
  if (7 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *(long *)(param_1 + 0x80);
  uVar2 = (uint)param_6;
  switch(param_3) {
  case 0:
    plVar3 = *(long **)(param_1 + 0x78);
    uVar1 = 0;
    if (((ulong)param_4 & 1) == 0) {
      uVar1 = 0x40a00000;
    }
    uVar8 = (ulong)uVar1;
    pcVar4 = "info_melee_lct_monad_jump";
    break;
  case 1:
    plVar3 = *(long **)(param_1 + 0x78);
    uVar1 = 0x3f800000;
    if (((ulong)param_4 & 1) == 0) {
      uVar1 = 0x40c00000;
    }
    uVar8 = (ulong)uVar1;
    pcVar4 = "info_melee_lct_monad_speed";
    break;
// ... (45 more lines)
```

## 18. `FUN_7101ab9340`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ab9340`  (offset `0x1ab9340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ab9340(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * * * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5072 bytes / 230 bb / 1 incoming refs
- **Match values:** melee
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

## 19. `FUN_7101fa11c0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** melee
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

## 20. `FUN_7101854680`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101854680`  (offset `0x1854680`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101854680(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2240 bytes / 97 bb / 1 incoming refs
- **Match values:** MELEE
- **Strings touched:** MELEE_NORMAL;MELEE_TEAM_COMPE;MELEE_SPECIAL_VARIOS;MELEE_SPECIAL_SUDDENDEATH;SPIRITS_CHALLENGE;OTHER_KUMITE_100;OTHER_KUMITE_ALLSTAR;OTHER_KUMITE_CRUEL;ROOT_TYPE;CANCELLED;set_mode
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_710323b9e0;FUN_710323beb0;FUN_710323cb80;FUN_71032cad20;FUN_71032caea0;FUN_71032cb040;FUN_7103375650;FUN_7103376af0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::os::SleepThread;<EXTERNAL>::abort;...
- **Files:** [decomp](../decompiled/FUN_7101854680__7101854680.c)  [cfg](../decompiled/FUN_7101854680__7101854680.mmd)
- **Clone hash:** `683b6fec24d47975`

```c

void FUN_7101854680(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  long ********pppppppplVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *******ppppppplVar13;
  long *****ppppplVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar15;
  long *********ppppppppplVar16;
  undefined **ppuVar17;
  byte ****ppppbVar18;
  long ****pppplVar19;
  byte ****ppppbVar20;
  long ******pppppplVar21;
  undefined1 auVar22 [16];
  long ********local_48;
  undefined4 local_34;
  
  lVar7 = FUN_710392e290(0x10,0xe0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar7 == 0) {
// ... (373 more lines)
```

## 21. `FUN_7100425fe0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100425fe0`  (offset `0x425fe0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100425fe0(void)`
- **Size / BBs / Incoming:** 720 bytes / 28 bb / 0 incoming refs
- **Match values:** Melee
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

## 22. `FUN_7101856ad0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101856ad0`  (offset `0x1856ad0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101856ad0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10044 bytes / 503 bb / 1 incoming refs
- **Match values:** melee
- **Strings touched:** selector;selector_01;set_txt_modecategory;mnu_local_new_rm_oth_btn_01;pic_100;mark_100;set_txt_mode;mnu_local_new_rm_mel_btn_02;pic_verious;mark_verious;mnu_local_new_rm_oth_btn_03;pic_nasake;mark_nasake;mnu_local_new_rm_mel_btn_00;pic_melee;mark_melee;mnu_local_new_rm_mel_btn_03;pic_ssdn;mark_ssdn;mnu_local_new_rm_mel_btn_top;mode_melee;mnu_local_new_rm_oth_btn_02;pic_all;mark_all;mode_standard;set_txt_mode_off;set_txt_mode_on;ly01_melee;ly02_standard
- **Callees:** FUN_71000001c0;FUN_7101696040;FUN_7101764000;FUN_71017a3910;FUN_71017ab0c0;FUN_71017dcc40;FUN_7101989a30;FUN_7101a7ed70;FUN_7101bdd9d0;FUN_7101bddb60;FUN_7101bddd60;FUN_7101bddd70;FUN_7101bddf10;FUN_7101bddf20;FUN_7101bde0e0;FUN_7101bde0f0;...
- **Files:** [decomp](../decompiled/FUN_7101856ad0__7101856ad0.c)  [cfg](../decompiled/FUN_7101856ad0__7101856ad0.mmd)
- **Clone hash:** `6b77f552b7a3c4ed`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101856ad0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  short sVar6;
  char cVar7;
  undefined8 uVar8;
  int iVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  char cVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined6 uVar17;
  undefined4 uVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 **ppuVar25;
  long *plVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ulong *puVar30;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
// ... (6550 more lines)
```

## 23. `FUN_710226f500`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226f500`  (offset `0x226f500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226f500(long param_1)`
- **Size / BBs / Incoming:** 23732 bytes / 622 bb / 1 incoming refs
- **Match values:** melee
- **Strings touched:** backshield;is_enable_backshield;is_visible_backshield;is_force_visible_backshield;set_reflector;beetle;is_enable_capture_beetle;set_grab;boomerang;send_event_catch;set_assist_team_no;is_catch_area_hit_check;bossgalaga;is_enable_capture_bossgalaga;chicken;is_behind_fighter;is_front_fighter;clubshot;check_roll_up_area;curryshot;init_log_attack_info;is_preview_mode;diddypeanuts;DIDDYPEANUTS_DIDDYPEANUTS_SCALE_MUL;dragoonset;calc_dragoonsight2;get_stage_dragoon_camera_rectangle;dragoonsight;set_dragoonsight_effect;get_rotation_with_calc_camera_direction;calc_dragoonsight;healball;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7102219310;FUN_7102235da0;FUN_7102239aa0;FUN_710223aa90;FUN_710223b0b0;FUN_710223c0c0;FUN_710223c740;FUN_710223d040;FUN_710223d940;FUN_710223ef10;FUN_710223ff20;FUN_7102242610;FUN_7102243740;FUN_71022490e0;FUN_710224bda0;FUN_71022505d0;...
- **Files:** [decomp](../decompiled/FUN_710226f500__710226f500.c)  [cfg](../decompiled/FUN_710226f500__710226f500.mmd)
- **Clone hash:** `355e9f5d7a84e54e`

```c

void FUN_710226f500(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar3;
  code *pcVar4;
  byte ****ppppbVar5;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  
  if (param_1 == 0) {
    FUN_7102219310(0);
    FUN_7102235da0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"backshield",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_backshield",(long ****)FUN_7102237fc0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_visible_backshield",(long ****)FUN_71022380c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_force_visible_backshield",(long ****)FUN_71022381c0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_71022382c0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"beetle",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
// ... (2227 more lines)
```

## 24. `FUN_7101bd7000`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bd7000`  (offset `0x1bd7000`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bd7000(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2612 bytes / 173 bb / 2 incoming refs
- **Match values:** melee
- **Strings touched:** set_txt_name;btn_new;icon_type_new;set_parts_profileicon_00;set_icn_profile;set_icn_profile_bg;type_00;set_icn_room_new;lock_off;friend_off;friend_on;btn_melee;btn_any;btn_spirits;icon_type_melee;icon_type_any;icon_type_any_lock;icon_type_spirits;lock_on_lock;btn_disable
- **Callers:** FUN_7101bd43a0;FUN_7101bdd4b0
- **Callees:** FUN_7101bda220;FUN_710323f760;FUN_710337d450;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778b80;FUN_710377aee0;FUN_71037a2270;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101bd7000__7101bd7000.c)  [cfg](../decompiled/FUN_7101bd7000__7101bd7000.mmd)
- **Clone hash:** `58bc90e8436936e2`

```c

void FUN_7101bd7000(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long ****pppplVar8;
  long *********ppppppppplVar9;
  long ******pppppplVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  undefined **local_b8;
  undefined8 *local_b0;
  undefined **local_a8;
  undefined8 *local_a0;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  long *local_80;
  undefined **local_78;
  long *local_70;
  long ********local_68;
  long *local_60;
  undefined4 local_54;
  
  if (param_3[1][1] == (long *******)0x0) {
// ... (472 more lines)
```

## 25. `FUN_7100422e70`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100422e70`  (offset `0x422e70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100422e70(void)`
- **Size / BBs / Incoming:** 492 bytes / 19 bb / 0 incoming refs
- **Match values:** Melee
- **Strings touched:** MeleeVrSetupScene;MeleeVrResetScene;CharaSelectScene;StageSelectScene;MeleeRuleScene;IngameCallSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100422e70__7100422e70.c)  [cfg](../decompiled/FUN_7100422e70__7100422e70.mmd)
- **Clone hash:** `1c43e0a448b6e23a`

```c

void FUN_7100422e70(void)

{
  int iVar1;
  
  DAT_7105328d90 = 0;
  DAT_7105328d98 = "MeleeVrSetupScene";
  if (((DAT_7105328e08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328e08), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328e08);
  }
  DAT_7105328da0 = &PTR_PTR_71050b8640;
  DAT_7105328da8 = "MeleeVrResetScene";
  if (((DAT_7105328e10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328e10), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328e10);
  }
  DAT_7105328db0 = &PTR_PTR_71050b8648;
  DAT_7105328db8 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328dc0 = &PTR_PTR_71050b6960;
  DAT_7105328dc8 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105328dd0 = &PTR_PTR_71050b7478;
  DAT_7105328dd8 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105328de0 = &PTR_PTR_71050a42c0;
  DAT_7105328de8 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328df8 = 0;
  DAT_7105328e00 = 0;
  DAT_7105328df0 = &PTR_PTR_7104f76410;
  return;
// ... (2 more lines)
```

## 26. `FUN_710170dfb0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710170dfb0`  (offset `0x170dfb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710170dfb0(long param_1, long param_2, char * param_3)`
- **Size / BBs / Incoming:** 1588 bytes / 44 bb / 2 incoming refs
- **Match values:** melee
- **Strings touched:** country;version;stage;stage_type;use_spirits;melee_mode;melee_kind;melee_rule;score;movie_time;fighter_%d
- **Callers:** FUN_710172d710;FUN_710172e680
- **Callees:** FUN_71001b1870;FUN_71001b2f70;FUN_71001b47e0;FUN_71001b4910;FUN_71002611f0;FUN_710062dc20;FUN_710170d6f0;FUN_710170dab0;FUN_710170dcd0;FUN_710170df50;FUN_710170e860;FUN_710170e9d0;FUN_710170eb40;FUN_710170ecb0;FUN_710170ee20;FUN_710170ef90;...
- **Files:** [decomp](../decompiled/FUN_710170dfb0__710170dfb0.c)  [cfg](../decompiled/FUN_710170dfb0__710170dfb0.mmd)
- **Clone hash:** `bf0b62e553b4012d`

```c

void FUN_710170dfb0(long param_1,long param_2,char *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *local_158;
  undefined8 **local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 **local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined2 local_11e;
  undefined1 local_11c;
  undefined8 local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined **local_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined **local_f0;
  undefined1 local_e8;
  undefined8 local_e4;
  long local_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined **local_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *local_90;
  long *local_88;
// ... (188 more lines)
```

## 27. `FUN_7101b80180`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b80180`  (offset `0x1b80180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b80180(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 16432 bytes / 805 bb / 2 incoming refs
- **Match values:** melee
- **Strings touched:** mode_empty_03;set_txt_mp;set_txt_cost_mp;set_parts_cmd_00;set_txt_00;set_parts_cmd_01;set_parts_cmd_02;set_parts_cmd_03;view_wnd_select;view_wnd_hold_00;view_wnd_hold_01;view_wnd_hold_02;view_wnd_hold_03;view_wnd_hide;select_00;select_01;select_02;select_03;stop_anim_arrow;loop_anim_arrow;show_arrow;hide_arrow;guage_00;guage_01;show_cost_mp;hide_cost_mp;wnd_color_default;wnd_color_gray_out;wnd_size_00;wnd_size_01;anim_unable_cmd;anim_decide;...
- **Callers:** FUN_7101b69480;FUN_7101bcb6b0
- **Callees:** FUN_7103240d30;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778b80;FUN_710377aee0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101b80180__7101b80180.c)  [cfg](../decompiled/FUN_7101b80180__7101b80180.mmd)
- **Clone hash:** `0c4aa9e39f905b46`

```c

void FUN_7101b80180(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
// ... (2857 more lines)
```

## 28. `FUN_71018b3d90`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018b3d90`  (offset `0x18b3d90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018b3d90(long param_1, long param_2)`
- **Size / BBs / Incoming:** 7432 bytes / 295 bb / 1 incoming refs
- **Match values:** melee
- **Strings touched:** {:D=-;mel_tournament_title_default;selector;set_btn_melee;set_btn_event;mode_single;mode_double;mode_empty_03;set_txt_period_sta_00;cmn_day_of_week_%d;set_txt_period_end_00;mode_melee;mode_1on1;set_rep_banner;set_pic_banner_bg;set_pic_halo;set_pic_banner_cap;set_txt_title_event_pre;set_txt_period_date;set_txt_title_event;state_open;state_prepare
- **Callees:** FUN_71016c9130;FUN_710176bcc0;FUN_7101989a30;FUN_7101af77d0;FUN_7101af8570;FUN_7101cf7160;FUN_7101cfb0f0;FUN_7101cfb660;FUN_7101cfb730;FUN_7101cfbac0;FUN_7101cfbad0;FUN_7102399340;FUN_710323beb0;FUN_710323cb80;FUN_710323eba0;FUN_71032cad20;...
- **Files:** [decomp](../decompiled/FUN_71018b3d90__71018b3d90.c)  [cfg](../decompiled/FUN_71018b3d90__71018b3d90.mmd)
- **Clone hash:** `69b5dd675af1e57c`

```c

/* WARNING: Removing unreachable block (ram,0x0071018b58a4) */
/* WARNING: Removing unreachable block (ram,0x0071018b59b0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71018b3d90(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  PosixTime PVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  char cVar8;
  uint *puVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
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
  long ***************ppppppppppppppplVar16;
  long ****pppplVar17;
// ... (1447 more lines)
```

## 29. `FUN_7101f95230`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f95230`  (offset `0x1f95230`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f95230(long param_1)`
- **Size / BBs / Incoming:** 288 bytes / 4 bb / 2 incoming refs
- **Match values:** melee
- **Strings touched:** LuaAutoTest;print;set_fighter_num;gauge_parts_on;set_fighter_kind;set_stage;begin_melee;is_melee_started;end_melee;screen_shot;random
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101f95230__7101f95230.c)  [cfg](../decompiled/FUN_7101f95230__7101f95230.mmd)
- **Clone hash:** `11b3e9ac50d9b5be`

```c

void FUN_7101f95230(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"LuaAutoTest",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"print",(long ****)FUN_7101f94c20,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_num",(long ****)FUN_7101f94d10,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_kind",(long ****)FUN_7101f94db0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_stage",(long ****)FUN_7101f94f70,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"begin_melee",(long ****)FUN_7101f95090,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_melee_started",(long ****)FUN_7101f950d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"end_melee",(long ****)FUN_7101f95100,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"screen_shot",(long ****)FUN_7101f95130,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"random",(long ****)FUN_7101f95140,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  if ((local_28 != 0) && (local_20 != 0)) {
    FUN_71038f55d0(local_28,local_18);
  }
  return;
}


```

## 30. `FUN_71013cdc00`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71013cdc00`  (offset `0x13cdc00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71013cdc00(long param_1)`
- **Size / BBs / Incoming:** 216 bytes / 7 bb / 1 incoming refs
- **Match values:** melee
- **Strings touched:** p4_rep_info_melee_lct_brave_wind_00;mode_empty_03;p4_rep_info_melee_lct_brave_wind_01;p4_rep_info_melee_lct_brave_wind_02
- **Callees:** FUN_710323af70;FUN_710323beb0;FUN_710323c4e0
- **Files:** [decomp](../decompiled/FUN_71013cdc00__71013cdc00.c)  [cfg](../decompiled/FUN_71013cdc00__71013cdc00.mmd)
- **Clone hash:** `0f612af542603fd8`

```c

void FUN_71013cdc00(long param_1)

{
  long lVar1;
  long ****pppplVar2;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  ulong local_18;
  
  lVar3 = *(long *)(**(long **)(**(long **)(param_1 + 0x50) + 8) + 0xcd0);
  lVar1 = *(long *)(lVar3 + 0x28);
  pppplVar2 = (long ****)0x0;
  FUN_710323beb0(lVar1,(ulong *)&DAT_7104544e08,(long)*(int *)(lVar1 + 0x70),
                 (ulong)*(uint *)(lVar1 + 0x68),(long ****)0x0,in_x5,in_x6,in_x7);
  local_18 = FUN_710323af70(0x71043ad508,1);
  if ((local_18 & 0xffffffffff) != 0) {
    lVar1 = *(long *)(lVar3 + 0x28);
    FUN_710323c4e0(lVar1,&local_18,(long *********)(long)*(int *)(lVar1 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar1 + 0x68),pppplVar2,in_x5,in_x6,in_x7);
  }
  local_18 = FUN_710323af70(0x71042d6046,1);
  if ((local_18 & 0xffffffffff) != 0) {
    lVar1 = *(long *)(lVar3 + 0x28);
    FUN_710323c4e0(lVar1,&local_18,(long *********)(long)*(int *)(lVar1 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar1 + 0x68),pppplVar2,in_x5,in_x6,in_x7);
  }
  local_18 = FUN_710323af70(0x7104329ce9,1);
  if ((local_18 & 0xffffffffff) != 0) {
    lVar1 = *(long *)(lVar3 + 0x28);
    FUN_710323c4e0(lVar1,&local_18,(long *********)(long)*(int *)(lVar1 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar1 + 0x68),pppplVar2,in_x5,in_x6,in_x7);
  }
  return;
}


```

## 31. `FUN_710134f5c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710134f5c0`  (offset `0x134f5c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710134f5c0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 22424 bytes / 1006 bb / 6 incoming refs
- **Match values:** Melee;melee
- **Strings touched:** ExecutableObjectManager::update_pause_by_category;MeleeManager::process;FighterManager::process_begin;CollisionLogManager::process_begin;CameraManager::update_frame;StageManager::pre_process;StageSwapManager::update;ItemManager::process_begin;EnemyManager::process;BossManager::process;GroundCollision::pre_process;FighterAIManager::process_begin;BattleObjectManager::process_begin;BattleObjectManager::process_ground;dys_yoga03_l_03_set;JostleManager::process_begin;CatchManager::process_begin;FighterCutInManager::process_begin;GroundCollision::process;FighterManager::process_begin_post;OperatorObjectManager::apply_visitor;ShamBattleManager::process;SpiritsBattleManager::process_melee;BattleObjectManager::process_map_collection;StageManager::process_fix_position;AreaManager::process_fix_position;BattleObjectManager::process_fix_position;ItemManager::process_fix_position_after;FighterManager::process_pre_collision;BattleObjectManager::process_pre_collision;CollisionLogManager::collide;BattleObjectManager::process_collision;...
- **Callers:** FUN_71014b3850;FUN_7101524770
- **Callees:** FUN_710137a600;FUN_710392e290;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_710134f5c0__710134f5c0.c)  [cfg](../decompiled/FUN_710134f5c0__710134f5c0.mmd)
- **Clone hash:** `c5d6928382f5097e`

```c

void FUN_710134f5c0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long ***local_78;
  long *local_70;
  undefined4 local_64;
  
  plVar1 = DAT_71052c33d8;
  lVar7 = DAT_71052b8800;
  lVar4 = DAT_71052b8620;
  lVar13 = DAT_71052b85f8;
  lVar14 = lib::Singleton<app::BattleObjectManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_710134f66c;
    }
    plVar8 = (long *)0x0;
// ... (4133 more lines)
```

## 32. `FUN_7100421ee0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100421ee0`  (offset `0x421ee0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100421ee0(void)`
- **Size / BBs / Incoming:** 872 bytes / 34 bb / 1 incoming refs
- **Match values:** Melee
- **Strings touched:** OptionOnlineScene;LocalTopScene;LocalModeSelectScene;MeleeRuleScene;SpecialVariousScene;SpiritsBoardScene;MeleeNormalSequenceScene;MeleeTeamCompeSequenceScene;SpiritsBoardSequenceScene;KumiteSequenceScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100421ee0__7100421ee0.c)  [cfg](../decompiled/FUN_7100421ee0__7100421ee0.mmd)
- **Clone hash:** `024517ae74c314e8`

```c

void FUN_7100421ee0(void)

{
  int iVar1;
  
  DAT_7105328940 = 0;
  DAT_7105328948 = "OptionOnlineScene";
  if (((DAT_7105328a08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328a08), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328a08);
  }
  DAT_7105328950 = &PTR_PTR_71050b7d08;
  DAT_7105328958 = "LocalTopScene";
  if (((DAT_7105328a10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328a10), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328a10);
  }
  DAT_7105328960 = &PTR_PTR_71050b7d10;
  DAT_7105328968 = "LocalModeSelectScene";
  if (((DAT_7105328a18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328a18), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328a18);
  }
  DAT_7105328970 = &PTR_PTR_71050b7d18;
  DAT_7105328978 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105328980 = &PTR_PTR_71050a42c0;
  DAT_7105328988 = "SpecialVariousScene";
  if (((DAT_7105328a20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328a20), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328a20);
  }
  DAT_7105328990 = &PTR_PTR_71050b7d20;
  DAT_7105328998 = "SpiritsBoardScene";
  if (((DAT_7105328a28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328a28), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328a28);
  }
  DAT_71053289a0 = &PTR_PTR_71050b7d28;
  DAT_71053289a8 = "MeleeNormalSequenceScene";
  if (((DAT_7105328010 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328010), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328010);
// ... (27 more lines)
```

## 33. `FUN_71013d0360`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71013d0360`  (offset `0x13d0360`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71013d0360(long param_1)`
- **Size / BBs / Incoming:** 216 bytes / 7 bb / 1 incoming refs
- **Match values:** melee
- **Strings touched:** p4_rep_info_melee_lct_brave_wind_00;mode_empty_03;p4_rep_info_melee_lct_brave_wind_01;p4_rep_info_melee_lct_brave_wind_02
- **Callees:** FUN_710323af70;FUN_710323beb0;FUN_710323c4e0
- **Files:** [decomp](../decompiled/FUN_71013d0360__71013d0360.c)  [cfg](../decompiled/FUN_71013d0360__71013d0360.mmd)
- **Clone hash:** `c6e3667b988066b3`

```c

void FUN_71013d0360(long param_1)

{
  long lVar1;
  long ****pppplVar2;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  ulong local_18;
  
  lVar3 = *(long *)(**(long **)(**(long **)(param_1 + 0x50) + 8) + 0xcd0);
  lVar1 = *(long *)(lVar3 + 0x28);
  pppplVar2 = (long ****)0x0;
  FUN_710323beb0(lVar1,(ulong *)&DAT_7104544e38,(long)*(int *)(lVar1 + 0x70),
                 (ulong)*(uint *)(lVar1 + 0x68),(long ****)0x0,in_x5,in_x6,in_x7);
  local_18 = FUN_710323af70(0x71043ad508,1);
  if ((local_18 & 0xffffffffff) != 0) {
    lVar1 = *(long *)(lVar3 + 0x28);
    FUN_710323c4e0(lVar1,&local_18,(long *********)(long)*(int *)(lVar1 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar1 + 0x68),pppplVar2,in_x5,in_x6,in_x7);
  }
  local_18 = FUN_710323af70(0x71042d6046,1);
  if ((local_18 & 0xffffffffff) != 0) {
    lVar1 = *(long *)(lVar3 + 0x28);
    FUN_710323c4e0(lVar1,&local_18,(long *********)(long)*(int *)(lVar1 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar1 + 0x68),pppplVar2,in_x5,in_x6,in_x7);
  }
  local_18 = FUN_710323af70(0x7104329ce9,1);
  if ((local_18 & 0xffffffffff) != 0) {
    lVar1 = *(long *)(lVar3 + 0x28);
    FUN_710323c4e0(lVar1,&local_18,(long *********)(long)*(int *)(lVar1 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar1 + 0x68),pppplVar2,in_x5,in_x6,in_x7);
  }
  return;
}


```

## 34. `FUN_7100422250`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100422250`  (offset `0x422250`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100422250(void)`
- **Size / BBs / Incoming:** 568 bytes / 22 bb / 1 incoming refs
- **Match values:** Melee
- **Strings touched:** CharaSelectScene;StageSelectScene;MeleeRuleScene;IngameCallSequenceScene;UnlockSequenceScene;MeleeAllBattleResultScene;MeleeAllBattleTieGameScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100422250__7100422250.c)  [cfg](../decompiled/FUN_7100422250__7100422250.mmd)
- **Clone hash:** `c11adab06107116f`

```c

void FUN_7100422250(void)

{
  int iVar1;
  
  DAT_7105328a30 = 0;
  DAT_7105328a38 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328a40 = &PTR_PTR_71050b6960;
  DAT_7105328a48 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105328a50 = &PTR_PTR_71050b7478;
  DAT_7105328a58 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105328a60 = &PTR_PTR_71050a42c0;
  DAT_7105328a68 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328a70 = &PTR_PTR_7104f76410;
  DAT_7105328a78 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_7105328a80 = &PTR_PTR_71050b5930;
  DAT_7105328a88 = "MeleeAllBattleResultScene";
  if (((DAT_7105328ab8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328ab8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328ab8);
  }
  DAT_7105328a90 = &PTR_PTR_71050b7f10;
  DAT_7105328a98 = "MeleeAllBattleTieGameScene";
  if (((DAT_7105328ac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328ac0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328ac0);
// ... (7 more lines)
```

## 35. `FUN_7101341d50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101341d50`  (offset `0x1341d50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101341d50(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1312 bytes / 53 bb / 5 incoming refs
- **Match values:** Melee
- **Strings touched:** StateSetupMiiFighter;StateWaitForMelee;StateSetupCamera;StateMelee;StateWaitForRuleToFinish
- **Callers:** FUN_71014aa930;FUN_71014d2130;FUN_7101519c40;FUN_710151aa00;FUN_710151e4b0
- **Callees:** FUN_71013444c0;FUN_710135a0f0;FUN_710135ac80;FUN_710135bea0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101341d50__7101341d50.c)  [cfg](../decompiled/FUN_7101341d50__7101341d50.mmd)
- **Clone hash:** `c4a8b5d43695acfe`

```c

void FUN_7101341d50(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
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
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  ulong *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  FUN_71013444c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateSetupMiiFighter",(long ****)FUN_7101342270,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateWaitForMelee",(long ****)FUN_71013422f0,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateSetupCamera",(long ****)FUN_7101342380,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateMelee",(long ****)FUN_7101342400,param_4,param_5,
                 param_6,param_7,param_8);
  pcVar3 = FUN_7101342480;
  FUN_710135bea0((long)param_1,(byte *)"StateWaitForRuleToFinish",(long ****)FUN_7101342480,param_4,
                 param_5,param_6,param_7,param_8);
  puVar5 = (ulong *)param_1[0x20];
// ... (226 more lines)
```

## 36. `FUN_7102144140`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102144140`  (offset `0x2144140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102144140(long param_1)`
- **Size / BBs / Incoming:** 1248 bytes / 4 bb / 2 incoming refs
- **Match values:** melee
- **Strings touched:** FighterManager;entry_count;total_fighter_num;get_entry_id;get_entry_no;get_fighter_entry;get_fighter_information;is_melee_mode_homerun;is_homerun_versus;is_melee_mode_online_tournament;one_on_one_ratio;is_discretion_final_enabled;get_top_rank_player_num;get_top_rank_player;is_ready_go;set_cursor_whole;get_fighter_pos;is_available_discretion_final;get_final_actor_entry_id;is_final;set_final;get_no_discretion_final_beat_count;get_beat_point_diff_from_top;set_final_fear_face;start_finalbg;exit_finalbg;show_finalbg;hide_finalbg;pause_finalbg;resume_finalbg;set_visible_finalbg;notify_log_event_collision_hit;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102144140__7102144140.c)  [cfg](../decompiled/FUN_7102144140__7102144140.mmd)
- **Clone hash:** `a3b0414249fe2eb2`

```c

void FUN_7102144140(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterManager",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                );
  FUN_7103728bf0(&local_28,(uint *)"entry_count",(long ****)FUN_7102141940,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"total_fighter_num",(long ****)FUN_7102141980,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_entry_id",(long ****)FUN_7102141a40,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_entry_no",(long ****)FUN_7102141bd0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_entry",(long ****)FUN_7102141d50,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_information",(long ****)FUN_7102141e40,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_melee_mode_homerun",(long ****)FUN_7102141f30,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_homerun_versus",(long ****)FUN_7102141f70,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_melee_mode_online_tournament",(long ****)FUN_7102142050,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"one_on_one_ratio",(long ****)FUN_7102142090,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_discretion_final_enabled",(long ****)FUN_71021420d0,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_top_rank_player_num",(long ****)FUN_7102142110,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
// ... (80 more lines)
```

## 37. `FUN_7101a23a80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a23a80`  (offset `0x1a23a80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a23a80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8756 bytes / 346 bb / 1 incoming refs
- **Match values:** melee
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

## 38. `FUN_71004258f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004258f0`  (offset `0x4258f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004258f0(void)`
- **Size / BBs / Incoming:** 872 bytes / 34 bb / 0 incoming refs
- **Match values:** Melee
- **Strings touched:** OptionTopScene;OptionButtonScene;OptionLanguageScene;OptionMeleeScene;MeleeRuleScene;CharaSelectScene;OptionSoundScene;StageSelectScene;SoundTestScene;OptionOnlineScene;OptionVideoScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004258f0__71004258f0.c)  [cfg](../decompiled/FUN_71004258f0__71004258f0.mmd)
- **Clone hash:** `f5257f3c74946ea4`

```c

void FUN_71004258f0(void)

{
  int iVar1;
  
  DAT_7105329220 = 0;
  DAT_7105329228 = "OptionTopScene";
  if (((DAT_71053292e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053292e8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053292e8);
  }
  DAT_7105329230 = &PTR_PTR_71050b8d90;
  DAT_7105329238 = "OptionButtonScene";
  if (((DAT_71053292f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053292f0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053292f0);
  }
  DAT_7105329240 = &PTR_PTR_71050b8d98;
  DAT_7105329248 = "OptionLanguageScene";
  if (((DAT_71053292f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053292f8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053292f8);
  }
  DAT_7105329250 = &PTR_PTR_71050b8da0;
  DAT_7105329258 = "OptionMeleeScene";
  if (((DAT_7105329300 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329300), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329300);
  }
  DAT_7105329260 = &PTR_PTR_71050b8da8;
  DAT_7105329268 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105329270 = &PTR_PTR_71050a42c0;
  DAT_7105329278 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329280 = &PTR_PTR_71050b6960;
  DAT_7105329288 = "OptionSoundScene";
  if (((DAT_7105329308 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329308), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329308);
// ... (27 more lines)
```

## 39. `FUN_7102366d30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102366d30`  (offset `0x2366d30`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7102366d30(long param_1, uint * param_2)`
- **Size / BBs / Incoming:** 708 bytes / 39 bb / 2 incoming refs
- **Match values:** Melee
- **Strings touched:** OptionTopScene;OptionButtonScene;OptionLanguageScene;OptionOnlineScene;OptionVideoScene;OptionSoundScene;SoundTestScene;StageSelectScene;OptionMeleeScene;MeleeRuleScene;CharaSelectScene
- **Callers:** FUN_7102367240;online_melee_event_handler
- **Callees:** <EXTERNAL>::strcmp
- **Files:** [decomp](../decompiled/FUN_7102366d30__7102366d30.c)  [cfg](../decompiled/FUN_7102366d30__7102366d30.mmd)
- **Clone hash:** `c1b33daacc43b0c1`

```c

undefined8 FUN_7102366d30(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *__s1;
  undefined4 uVar3;
  char *pcVar4;
  
  __s1 = param_2 + 2;
  uVar1 = *param_2;
  if (uVar1 < 0x4d1b6eab) {
    return 0;
  }
  if (uVar1 == 0xe6c44dfe) {
    iVar2 = strcmp((char *)__s1,"OptionButtonScene");
    if (iVar2 != 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
    uVar3 = 4;
    goto LAB_7102366de0;
  }
  if (uVar1 == 0x4d1b6eab) {
    iVar2 = strcmp((char *)__s1,"OptionTopScene");
    if (iVar2 != 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
    uVar3 = 3;
    goto LAB_7102366de0;
// ... (116 more lines)
```

## 40. `FUN_7101acce30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101acce30`  (offset `0x1acce30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101acce30(long param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1008 bytes / 50 bb / 1 incoming refs
- **Match values:** melee
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

## 41. `FUN_7102318650`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102318650`  (offset `0x2318650`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102318650(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2512 bytes / 114 bb / 1 incoming refs
- **Match values:** Melee
- **Strings touched:** MeleeScene;HomeRunContestScene
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_710323beb0;FUN_71032e3a80;FUN_7103723a90;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strcmp;<EXTERNAL>::memset;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7102318650__7102318650.c)  [cfg](../decompiled/FUN_7102318650__7102318650.mmd)
- **Clone hash:** `9dbca2d820e9820c`

```c

void FUN_7102318650(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long *********ppppppppplVar12;
  byte ****ppppbVar13;
  uint uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  long ***local_60;
  undefined4 local_54;
  
  pppplVar8 = &local_60;
  pppplVar9 = &local_60;
  pppplVar10 = &local_60;
  pppplVar11 = &local_60;
  lVar3 = FUN_710392e290(0x10,0x1b8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar3 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_60 = (long ***)&DAT_000001b8;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar4 & 1) != 0) &&
         (lVar3 = FUN_710392e290(0x10,0x1b8,pppplVar8,param_4,param_5,param_6,param_7,param_8),
// ... (349 more lines)
```

## 42. `FUN_710171ff00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710171ff00`  (offset `0x171ff00`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710171ff00(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8224 bytes / 444 bb / 2 incoming refs
- **Match values:** melee
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

## 43. `FUN_7101acdf00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101acdf00`  (offset `0x1acdf00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101acdf00(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 728 bytes / 44 bb / 1 incoming refs
- **Match values:** melee
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

## 44. `FUN_7103653cd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103653cd0`  (offset `0x3653cd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103653cd0(long param_1, undefined8 param_2, ulong * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4220 bytes / 236 bb / 1 incoming refs
- **Match values:** MELEE;Melee
- **Strings touched:** select_item;MELEE_RESULT_RANK;MeleeResultRank;_Viewport;dys_yoga03_l_03_set;DiffuseClear;NODE_MAIN_
- **Callees:** FUN_7103550630;FUN_7103558bd0;FUN_710355b6b0;FUN_7103652f40;FUN_7103856830;FUN_710392e1f0;FUN_710392eb40;<EXTERNAL>::strlen;<EXTERNAL>::memcpy;<EXTERNAL>::memcmp;<EXTERNAL>::nu::VirtualFreeHook;<EXTERNAL>::nu::VirtualAllocHook;<EXTERNAL>::std::__basic_string_common<true>::__throw_length_error;<EXTERNAL>::std::to_string;<EXTERNAL>::std::string::append;FUN_71039c6e60;...
- **Files:** [decomp](../decompiled/FUN_7103653cd0__7103653cd0.c)  [cfg](../decompiled/FUN_7103653cd0__7103653cd0.mmd)
- **Clone hash:** `6da365a0060a21f9`

```c

void FUN_7103653cd0(long param_1,undefined8 param_2,ulong *param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  void *pvVar9;
  bool bVar10;
  int iVar11;
  ulong *puVar12;
  ulong *__n;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  size_t *psVar23;
  void *pvVar24;
  long *plVar25;
  long ****pppplVar26;
  long lVar27;
  char *pcVar28;
  long local_188;
  ulong local_170;
  ulong local_138;
  ulong local_130;
  ulong *local_128;
  char *local_120;
// ... (753 more lines)
```

## 45. `FUN_7101b98c10`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b98c10`  (offset `0x1b98c10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b98c10(char * param_1, ushort * param_2, ushort * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 732 bytes / 52 bb / 2 incoming refs
- **Match values:** melee
- **Strings touched:** cmn_%dp;info_melee_lct_cursor_player_fp_00
- **Callers:** FUN_7101395460;FUN_7101b98ab0
- **Callees:** FUN_71003a4ca0;FUN_7103240d30;FUN_7103778b80;FUN_710377a120;FUN_710377b010;FUN_71037a2270
- **Files:** [decomp](../decompiled/FUN_7101b98c10__7101b98c10.c)  [cfg](../decompiled/FUN_7101b98c10__7101b98c10.mmd)
- **Clone hash:** `4c1ef5c32b339411`

```c

void FUN_7101b98c10(char *param_1,ushort *param_2,ushort *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  bool bVar5;
  char *pcVar6;
  long *********ppppppppplVar7;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  
  uVar2 = *param_2;
  if (uVar2 - 9 < 2) {
    if (uVar2 == 10) {
      lVar9 = **(long **)(param_1 + 0x20);
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
      }
      lVar9 = **(long **)(param_1 + 0x30);
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
      }
      if (*param_2 == 10) {
        if ((char)param_2[2] == '\0') {
          pcVar6 = "info_melee_lct_cursor_player_fp_00";
        }
        else {
          if (3 < param_2[1] - 0xb) goto LAB_7101b98e28;
// ... (115 more lines)
```

## 46. `FUN_7101cf2f80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cf2f80`  (offset `0x1cf2f80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cf2f80(long * param_1, long param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1764 bytes / 64 bb / 1 incoming refs
- **Match values:** melee
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

## 47. `FUN_71004227b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004227b0`  (offset `0x4227b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004227b0(void)`
- **Size / BBs / Incoming:** 644 bytes / 25 bb / 1 incoming refs
- **Match values:** Melee
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

## 48. `FUN_71017ff180`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017ff180`  (offset `0x17ff180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71017ff180(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 7272 bytes / 287 bb / 1 incoming refs
- **Match values:** melee
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

## 49. `FUN_7103371290`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103371290`  (offset `0x3371290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103371290(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12368 bytes / 333 bb / 3 incoming refs
- **Match values:** MELEE
- **Strings touched:** key_context;MetatableLayoutRoot;__index;MetatableLayoutView;MetatableLayoutPane;MetatableLayoutButton;plate_side;MetatableLayoutView_Animation;MetatableLayoutButtonSelector;MetatableLayoutButtonSelectorGlobal;LayoutButtonSelector;MetatableLayoutListScroller;MetatableLayoutRangeSlider;MetatableLayoutRangeSliderGlobal;LayoutRangeSlider;MetatableLayoutListWindow;deactivate;activate;close;is_busy;update;get_result;MetatableLayoutSubMenu;clear_result;MetatableLayoutButtonSelectorConfig;LayoutButtonSelectorConfig;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_DIRECTIONAL;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_SEQUENTIAL;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_GRID;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_POINTER;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_AABB;MetatableLayoutRangeSliderConfig;...
- **Callers:** FUN_7101af2070;FUN_71022f2b20;FUN_71032cb040
- **Callees:** FUN_7103375650;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;FUN_71038f5390;FUN_71038f5c00;FUN_71038f7260;FUN_71038f9510;FUN_71038fec40;FUN_710391e050;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_7103371290__7103371290.c)  [cfg](../decompiled/FUN_7103371290__7103371290.mmd)
- **Clone hash:** `acf8abf14fe11fb8`

```c

void FUN_7103371290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *local_370;
  undefined *puStack_368;
  undefined *local_360;
  undefined *puStack_358;
  undefined *local_350;
  undefined *puStack_348;
  undefined *local_340;
  undefined *puStack_338;
  undefined *local_330;
  undefined *puStack_328;
  undefined *local_320;
  undefined *puStack_318;
  undefined *local_310;
  undefined *puStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  
  FUN_71038f4b20(param_1,"key_context");
  FUN_71038f4fc0(param_1,-0xf4628);
  plVar5 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar2 == 2) {
    puVar8 = (undefined8 *)*plVar5;
  }
  else if (uVar2 == 7) {
    puVar8 = (undefined8 *)(*plVar5 + 0x28);
  }
// ... (1658 more lines)
```

## 50. `FUN_7100422740`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100422740`  (offset `0x422740`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100422740(void)`
- **Size / BBs / Incoming:** 112 bytes / 4 bb / 0 incoming refs
- **Match values:** Melee
- **Strings touched:** MeleeScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100422740__7100422740.c)  [cfg](../decompiled/FUN_7100422740__7100422740.mmd)
- **Clone hash:** `607e0e8f87a8afe1`

```c

void FUN_7100422740(void)

{
  int iVar1;
  
  DAT_7105328b80 = 0;
  DAT_7105328b88 = "MeleeScene";
  if (((DAT_71053287b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053287b0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053287b0);
  }
  DAT_7105328b98 = 0;
  DAT_7105328ba0 = 0;
  DAT_7105328b90 = &PTR_PTR_71050b7898;
  return;
}


```

