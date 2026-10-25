# scene (funcs=184, hits=664)

Top 50 functions by hit count

## 1. `FUN_710235d040`  (hits=80)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710235d040`  (offset `0x235d040`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710235d040(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 25696 bytes / 1747 bb / 1 incoming refs
- **Match values:** Scene
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

## 2. `FUN_710041f880`  (hits=46)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710041f880`  (offset `0x41f880`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710041f880(void)`
- **Size / BBs / Incoming:** 3608 bytes / 142 bb / 1 incoming refs
- **Match values:** Scene
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

## 3. `FUN_7101a23a80`  (hits=27)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a23a80`  (offset `0x1a23a80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a23a80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8756 bytes / 346 bb / 1 incoming refs
- **Match values:** scene
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

## 4. `FUN_7100427120`  (hits=22)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100427120`  (offset `0x427120`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100427120(void)`
- **Size / BBs / Incoming:** 1708 bytes / 67 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** IngameCallSequenceScene;CharaSelectScene;OptionButtonScene;SpiritsDirectoryScene;SpiritsItemViewScene;SpiritsRaiseScene;SpiritsReturnScene;SpiritsRecallScene;SpiritsBoardSetScene2;SpiritsCampaignMenuScene;set_assist_team_no;SpiritsCampaignOpeningMovieScene;SpiritsCampaignMapScene;SpiritsCampaignSetScene;SpiritsCampaignShopScene;SpiritsCampaignGymScene;SpiritsCampaignSchoolScene;SpiritsCampaignSearchScene;SpiritsCampaignSkillScene;SpiritsCampaignFinalStageSequenceScene;PrizeListScene;UnlockSequenceScene;SpiritsForceReturnScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100427120__7100427120.c)  [cfg](../decompiled/FUN_7100427120__7100427120.mmd)
- **Clone hash:** `1f3f24b59c070bb3`

```c

void FUN_7100427120(void)

{
  int iVar1;
  
  DAT_7105329958 = 0;
  DAT_7105329960 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105329968 = &PTR_PTR_7104f76410;
  DAT_7105329970 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329978 = &PTR_PTR_71050b6960;
  DAT_7105329980 = "OptionButtonScene";
  if (((DAT_71053292f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053292f0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053292f0);
  }
  DAT_7105329988 = &PTR_PTR_71050b8d98;
  DAT_7105329990 = "SpiritsDirectoryScene";
  if (((DAT_7105329ad0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329ad0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329ad0);
  }
  DAT_7105329998 = &PTR_PTR_71050b9ef8;
  DAT_71053299a0 = "SpiritsItemViewScene";
  if (((DAT_7105329ad8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329ad8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329ad8);
  }
  DAT_71053299a8 = &PTR_PTR_71050b9f00;
  DAT_71053299b0 = "SpiritsRaiseScene";
  if (((DAT_7105329858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329858), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329858);
  }
  DAT_71053299b8 = &PTR_PTR_71050b9b60;
  DAT_71053299c0 = "SpiritsReturnScene";
  if (((DAT_71053285e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053285e8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053285e8);
// ... (82 more lines)
```

## 5. `FUN_7100427a60`  (hits=19)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100427a60`  (offset `0x427a60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100427a60(void)`
- **Size / BBs / Incoming:** 1480 bytes / 58 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** SpiritsOrganizationMainScene;SpiritsRaiseScene;SpiritsReturnScene;SpiritsForceReturnScene;SpiritsRecallScene;SpiritsSetScene;SpiritsTestplayScene;CharaSelectScene;SpiritsDirectoryScene;SpiritsItemViewScene;SpiritsFacilityListScene;SpiritsShopListScene;SpiritsCampaignGymScene;SpiritsCampaignSchoolScene;SpiritsCampaignSearchScene;PrizeListScene;SpiritsCampaignShopScene;UnlockSequenceScene;SpiritsDirectoryBattleSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100427a60__7100427a60.c)  [cfg](../decompiled/FUN_7100427a60__7100427a60.mmd)
- **Clone hash:** `709569f4b352f080`

```c

void FUN_7100427a60(void)

{
  int iVar1;
  
  DAT_7105329bd0 = 0;
  DAT_7105329bd8 = "SpiritsOrganizationMainScene";
  if (((DAT_7105329d18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329d18), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329d18);
  }
  DAT_7105329be0 = &PTR_PTR_71050ba3d0;
  DAT_7105329be8 = "SpiritsRaiseScene";
  if (((DAT_7105329858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329858), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329858);
  }
  DAT_7105329bf0 = &PTR_PTR_71050b9b60;
  DAT_7105329bf8 = "SpiritsReturnScene";
  if (((DAT_71053285e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053285e8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053285e8);
  }
  DAT_7105329c00 = &PTR_PTR_71050b7370;
  DAT_7105329c08 = "SpiritsForceReturnScene";
  if (((DAT_71053282d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282d8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282d8);
  }
  DAT_7105329c10 = &PTR_PTR_71050b63e0;
  DAT_7105329c18 = "SpiritsRecallScene";
  if (((DAT_7105329ae0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329ae0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329ae0);
  }
  DAT_7105329c20 = &PTR_PTR_71050b9f08;
  DAT_7105329c28 = "SpiritsSetScene";
  if (((DAT_7105329d20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329d20), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329d20);
  }
  DAT_7105329c30 = &PTR_PTR_71050ba3d8;
  DAT_7105329c38 = "SpiritsTestplayScene";
  if (((DAT_7105329d28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329d28), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329d28);
// ... (67 more lines)
```

## 6. `FUN_71004206a0`  (hits=17)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004206a0`  (offset `0x4206a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004206a0(void)`
- **Size / BBs / Incoming:** 1328 bytes / 52 bb / 1 incoming refs
- **Match values:** Scene
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

## 7. `FUN_7101f45620`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** SCENE;scene
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

## 8. `FUN_71004262b0`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004262b0`  (offset `0x4262b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004262b0(void)`
- **Size / BBs / Incoming:** 948 bytes / 37 bb / 1 incoming refs
- **Match values:** Scene
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

## 9. `FUN_71004258f0`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004258f0`  (offset `0x4258f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004258f0(void)`
- **Size / BBs / Incoming:** 872 bytes / 34 bb / 0 incoming refs
- **Match values:** Scene
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

## 10. `FUN_7102366d30`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102366d30`  (offset `0x2366d30`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7102366d30(long param_1, uint * param_2)`
- **Size / BBs / Incoming:** 708 bytes / 39 bb / 2 incoming refs
- **Match values:** Scene
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

## 11. `FUN_71020fbb90`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** SCENE
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

## 12. `FUN_7100421ee0`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100421ee0`  (offset `0x421ee0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100421ee0(void)`
- **Size / BBs / Incoming:** 872 bytes / 34 bb / 1 incoming refs
- **Match values:** Scene
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

## 13. `FUN_7100425fe0`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100425fe0`  (offset `0x425fe0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100425fe0(void)`
- **Size / BBs / Incoming:** 720 bytes / 28 bb / 0 incoming refs
- **Match values:** Scene
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

## 14. `FUN_7100428200`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100428200`  (offset `0x428200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100428200(void)`
- **Size / BBs / Incoming:** 644 bytes / 25 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** CharaSelectScene;IngameCallSequenceScene;PrizeListScene;SpiritsForceReturnScene;StaffRollSequenceScene;StandardAdvanceScene;StandardDifficultyScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100428200__7100428200.c)  [cfg](../decompiled/FUN_7100428200__7100428200.mmd)
- **Clone hash:** `95bdf2ad81f04081`

```c

void FUN_7100428200(void)

{
  int iVar1;
  
  DAT_7105329df0 = 0;
  DAT_7105329df8 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329e00 = &PTR_PTR_71050b6960;
  DAT_7105329e08 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105329e10 = &PTR_PTR_7104f76410;
  DAT_7105329e18 = "PrizeListScene";
  if (((DAT_7105328318 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328318), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328318);
  }
  DAT_7105329e20 = &PTR_PTR_71050b6420;
  DAT_7105329e28 = "SpiritsForceReturnScene";
  if (((DAT_71053282d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282d8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282d8);
  }
  DAT_7105329e30 = &PTR_PTR_71050b63e0;
  DAT_7105329e38 = "StaffRollSequenceScene";
  if (((DAT_7105329e88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329e88), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329e88);
  }
  DAT_7105329e40 = &PTR_PTR_71050bac08;
  DAT_7105329e48 = "StandardAdvanceScene";
  if (((DAT_7105329e90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329e90), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329e90);
  }
  DAT_7105329e50 = &PTR_PTR_71050bac10;
  DAT_7105329e58 = "StandardDifficultyScene";
  if (((DAT_7105329e98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329e98), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329e98);
// ... (12 more lines)
```

## 15. `FUN_71004277d0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004277d0`  (offset `0x4277d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004277d0(void)`
- **Size / BBs / Incoming:** 644 bytes / 25 bb / 0 incoming refs
- **Match values:** Scene
- **Strings touched:** SpiritsDirectoryScene;SpiritsBoardDirectoryBattleRuleScene;SpiritsBoardSetScene2;CharaSelectScene;SpiritsRaiseScene;IngameCallSequenceScene;SpiritsForceReturnScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004277d0__71004277d0.c)  [cfg](../decompiled/FUN_71004277d0__71004277d0.mmd)
- **Clone hash:** `d5fd286d6751bdf8`

```c

void FUN_71004277d0(void)

{
  int iVar1;
  
  DAT_7105329b30 = 0;
  DAT_7105329b38 = "SpiritsDirectoryScene";
  if (((DAT_7105329ad0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329ad0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329ad0);
  }
  DAT_7105329b40 = &PTR_PTR_71050b9ef8;
  DAT_7105329b48 = "SpiritsBoardDirectoryBattleRuleScene";
  if (((DAT_7105329bc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329bc8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329bc8);
  }
  DAT_7105329b50 = &PTR_PTR_71050ba288;
  DAT_7105329b58 = "SpiritsBoardSetScene2";
  if (((DAT_7105329850 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329850), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329850);
  }
  DAT_7105329b60 = &PTR_PTR_71050b9b58;
  DAT_7105329b68 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329b70 = &PTR_PTR_71050b6960;
  DAT_7105329b78 = "SpiritsRaiseScene";
  if (((DAT_7105329858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329858), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329858);
  }
  DAT_7105329b80 = &PTR_PTR_71050b9b60;
  DAT_7105329b88 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105329b90 = &PTR_PTR_7104f76410;
  DAT_7105329b98 = "SpiritsForceReturnScene";
  if (((DAT_71053282d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282d8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282d8);
// ... (12 more lines)
```

## 16. `FUN_7100421920`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100421920`  (offset `0x421920`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100421920(void)`
- **Size / BBs / Incoming:** 644 bytes / 25 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** IngameCallSequenceScene;CharaSelectScene;ChallengerUnlockScene;ChallengerApproachScene;CollectionGetterSequenceScene;SpiritsForceReturnScene;ChallengerRoomSequenceScene;StageSelectScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100421920__7100421920.c)  [cfg](../decompiled/FUN_7100421920__7100421920.mmd)
- **Clone hash:** `243180d18c2fa2a1`

```c

void FUN_7100421920(void)

{
  int iVar1;
  
  DAT_71053287d8 = 0;
  DAT_71053287e0 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_71053287e8 = &PTR_PTR_7104f76410;
  DAT_71053287f0 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_71053287f8 = &PTR_PTR_71050b6960;
  DAT_7105328800 = "ChallengerUnlockScene";
  if (((DAT_7105328390 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328390), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328390);
  }
  DAT_7105328808 = &PTR_PTR_71050b6970;
  DAT_7105328810 = "ChallengerApproachScene";
  if (((DAT_7105328388 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328388), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328388);
  }
  DAT_7105328818 = &PTR_PTR_71050b6968;
  DAT_7105328820 = "CollectionGetterSequenceScene";
  if (((DAT_7105328100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328100), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328100);
  }
  DAT_7105328828 = &PTR_PTR_71050b5a30;
  DAT_7105328830 = "SpiritsForceReturnScene";
  if (((DAT_71053282d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282d8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282d8);
  }
  DAT_7105328838 = &PTR_PTR_71050b63e0;
  DAT_7105328840 = "ChallengerRoomSequenceScene";
  if (((DAT_7105328088 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328088), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328088);
// ... (12 more lines)
```

## 17. `FUN_71004227b0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004227b0`  (offset `0x4227b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004227b0(void)`
- **Size / BBs / Incoming:** 644 bytes / 25 bb / 1 incoming refs
- **Match values:** Scene
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

## 18. `FUN_7100426b40`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100426b40`  (offset `0x426b40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100426b40(void)`
- **Size / BBs / Incoming:** 568 bytes / 22 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** SpiritsBoardScene;SpiritsBoardSetScene2;CharaSelectScene;SpiritsRaiseScene;IngameCallSequenceScene;SpiritsForceReturnScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100426b40__7100426b40.c)  [cfg](../decompiled/FUN_7100426b40__7100426b40.mmd)
- **Clone hash:** `8dbdbfe371df33a5`

```c

void FUN_7100426b40(void)

{
  int iVar1;
  
  DAT_71053297c8 = 0;
  DAT_71053297d0 = "SpiritsBoardScene";
  if (((DAT_7105328a28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328a28), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328a28);
  }
  DAT_71053297d8 = &PTR_PTR_71050b7d28;
  DAT_71053297e0 = "SpiritsBoardSetScene2";
  if (((DAT_7105329850 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329850), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329850);
  }
  DAT_71053297e8 = &PTR_PTR_71050b9b58;
  DAT_71053297f0 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_71053297f8 = &PTR_PTR_71050b6960;
  DAT_7105329800 = "SpiritsRaiseScene";
  if (((DAT_7105329858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329858), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329858);
  }
  DAT_7105329808 = &PTR_PTR_71050b9b60;
  DAT_7105329810 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105329818 = &PTR_PTR_7104f76410;
  DAT_7105329820 = "SpiritsForceReturnScene";
  if (((DAT_71053282d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282d8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282d8);
  }
  DAT_7105329828 = &PTR_PTR_71050b63e0;
  DAT_7105329830 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
// ... (7 more lines)
```

## 19. `FUN_7100422c30`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100422c30`  (offset `0x422c30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100422c30(void)`
- **Size / BBs / Incoming:** 568 bytes / 22 bb / 0 incoming refs
- **Match values:** Scene
- **Strings touched:** CharaSelectScene;IngameCallSequenceScene;MeleeRuleScene;StageSelectScene;TournamentTableScene;TournamentTableSettingScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100422c30__7100422c30.c)  [cfg](../decompiled/FUN_7100422c30__7100422c30.mmd)
- **Clone hash:** `ff49b551fefc2675`

```c

void FUN_7100422c30(void)

{
  int iVar1;
  
  DAT_7105328cf0 = 0;
  DAT_7105328cf8 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328d00 = &PTR_PTR_71050b6960;
  DAT_7105328d08 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328d10 = &PTR_PTR_7104f76410;
  DAT_7105328d18 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105328d20 = &PTR_PTR_71050a42c0;
  DAT_7105328d28 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105328d30 = &PTR_PTR_71050b7478;
  DAT_7105328d38 = "TournamentTableScene";
  if (((DAT_7105328d78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328d78), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328d78);
  }
  DAT_7105328d40 = &PTR_PTR_71050b84e0;
  DAT_7105328d48 = "TournamentTableSettingScene";
  if (((DAT_7105328d80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328d80), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328d80);
  }
  DAT_7105328d50 = &PTR_PTR_71050b84e8;
  DAT_7105328d58 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
// ... (7 more lines)
```

## 20. `FUN_7100426d80`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100426d80`  (offset `0x426d80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100426d80(void)`
- **Size / BBs / Incoming:** 568 bytes / 22 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** SpiritsBoardSpecialScene;SpiritsBoardSetScene2;CharaSelectScene;SpiritsRaiseScene;IngameCallSequenceScene;SpiritsForceReturnScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100426d80__7100426d80.c)  [cfg](../decompiled/FUN_7100426d80__7100426d80.mmd)
- **Clone hash:** `3aeaf2cf8b00c0f6`

```c

void FUN_7100426d80(void)

{
  int iVar1;
  
  DAT_7105329860 = 0;
  DAT_7105329868 = "SpiritsBoardSpecialScene";
  if (((DAT_71053298e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053298e8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053298e8);
  }
  DAT_7105329870 = &PTR_PTR_71050b9d08;
  DAT_7105329878 = "SpiritsBoardSetScene2";
  if (((DAT_7105329850 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329850), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329850);
  }
  DAT_7105329880 = &PTR_PTR_71050b9b58;
  DAT_7105329888 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329890 = &PTR_PTR_71050b6960;
  DAT_7105329898 = "SpiritsRaiseScene";
  if (((DAT_7105329858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329858), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329858);
  }
  DAT_71053298a0 = &PTR_PTR_71050b9b60;
  DAT_71053298a8 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_71053298b0 = &PTR_PTR_7104f76410;
  DAT_71053298b8 = "SpiritsForceReturnScene";
  if (((DAT_71053282d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282d8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282d8);
  }
  DAT_71053298c0 = &PTR_PTR_71050b63e0;
  DAT_71053298c8 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
// ... (7 more lines)
```

## 21. `FUN_71023b7370`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71023b7370`  (offset `0x23b7370`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71023b7370(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2192 bytes / 115 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** SpiritsSetScene;SpiritsRaiseScene;SpiritsRecallScene;SpiritsReturnScene;SpiritsDirectoryScene;SpiritsItemViewScene;SpiritsDirectoryBattleSequenceScene
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101967700;FUN_71025acda0;FUN_710323b9e0;FUN_7103723a90;FUN_7103723e70;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strcmp;<EXTERNAL>::memset;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71023b7370__71023b7370.c)  [cfg](../decompiled/FUN_71023b7370__71023b7370.mmd)
- **Clone hash:** `f6d803b2222e13a8`

```c

void FUN_71023b7370(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar11;
  long *********ppppppppplVar12;
  undefined **ppuVar13;
  long *********ppppppppplVar14;
  long *********ppppppppplVar15;
  uint uVar16;
  undefined4 uVar17;
  long lVar18;
  short *psVar19;
  long lVar20;
  long *plVar21;
  undefined1 auVar22 [16];
  long ********local_40;
  undefined4 local_34;
  
  ppppppppplVar12 = &local_40;
  ppppppppplVar14 = &local_40;
  ppppppppplVar15 = &local_40;
  plVar5 = (long *)FUN_710392e290(0x10,0x2348,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar5 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
// ... (353 more lines)
```

## 22. `FUN_7100422250`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100422250`  (offset `0x422250`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100422250(void)`
- **Size / BBs / Incoming:** 568 bytes / 22 bb / 1 incoming refs
- **Match values:** Scene
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

## 23. `FUN_7100422e70`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100422e70`  (offset `0x422e70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100422e70(void)`
- **Size / BBs / Incoming:** 492 bytes / 19 bb / 0 incoming refs
- **Match values:** Scene
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

## 24. `FUN_71021c4020`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021c4020`  (offset `0x21c4020`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021c4020(void)`
- **Size / BBs / Incoming:** 14396 bytes / 28 bb / 1 incoming refs
- **Match values:** SCENE
- **Strings touched:** FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_START;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_LEG;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_2ND_PART_SET;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_BOTH_RESTRICT_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_STRANS_OFF_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_HOLD_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_NEXT_STATUS;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MAP_COLL_FRAME_L;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MAP_COLL_FRAME_R;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_SLOW_MAG;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_SLOW_MAG_PREV;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_SLOW_COUNT;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_SLOW_COUNT_PREV;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_PUNCH_KIND_R;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_MOTION_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_WAIT_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_DISABLE_PASS_COUNT;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPIRAL_OBJECT_ID;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REFLECTOR_ATTACK_HI4_HITSTOP_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REFLECTOR_ATTACK_HI4_HITSTOP_ID;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ARM_L_BIG_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_L;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_R;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_CATCH_START_COUNT;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021c4020__71021c4020.c)  [cfg](../decompiled/FUN_71021c4020__71021c4020.mmd)
- **Clone hash:** `b74f5de86553eaa1`

```c

void FUN_71021c4020(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = -3;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_LEG",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_2ND_PART_SET",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_BOTH_RESTRICT_FRAME",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_STRANS_OFF_FRAME",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_HOLD_FRAME",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_NEXT_STATUS",
                 (undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME",
// ... (1597 more lines)
```

## 25. `FUN_7100422a40`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100422a40`  (offset `0x422a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100422a40(void)`
- **Size / BBs / Incoming:** 492 bytes / 19 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** CharaSelectScene;IngameCallSequenceScene;MeleeRuleScene;StageSelectScene;TeamCompeMatchupScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100422a40__7100422a40.c)  [cfg](../decompiled/FUN_7100422a40__7100422a40.mmd)
- **Clone hash:** `3efb9efa1d2be2e9`

```c

void FUN_7100422a40(void)

{
  int iVar1;
  
  DAT_7105328c78 = 0;
  DAT_7105328c80 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328c88 = &PTR_PTR_71050b6960;
  DAT_7105328c90 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328c98 = &PTR_PTR_7104f76410;
  DAT_7105328ca0 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105328ca8 = &PTR_PTR_71050a42c0;
  DAT_7105328cb0 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105328cb8 = &PTR_PTR_71050b7478;
  DAT_7105328cc0 = "TeamCompeMatchupScene";
  if (((DAT_7105328b78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328b78), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328b78);
  }
  DAT_7105328cc8 = &PTR_PTR_71050b80c0;
  DAT_7105328cd0 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_7105328ce0 = 0;
  DAT_7105328ce8 = 0;
  DAT_7105328cd8 = &PTR_PTR_71050b5930;
  return;
// ... (2 more lines)
```

## 26. `FUN_7102336c90`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102336c90`  (offset `0x2336c90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102336c90(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1692 bytes / 73 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** AmiiboSequenceScene;MenuSequenceScene;MeleeRuleScene;SpecialVariousScene;StageSelectScene;CharaSelectScene
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_710178c070;FUN_710323b9e0;FUN_7103723a90;FUN_7103723e70;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strcmp;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7102336c90__7102336c90.c)  [cfg](../decompiled/FUN_7102336c90__7102336c90.mmd)
- **Clone hash:** `a4a3e470bd994e21`

```c

void FUN_7102336c90(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *__s1;
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x1;
  uint uVar7;
  undefined4 uVar8;
  long *plVar9;
  long ********local_68;
  undefined4 local_54;
  
  plVar3 = (long *)FUN_710392e290(0x10,0x140,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_68 = (long ********)&DAT_00000140;
      param_3 = (undefined **)&local_68;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0x140,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), plVar3 != (long *)0x0))
      goto LAB_7102336d18;
    }
    plVar3 = (long *)0x0;
  }
LAB_7102336d18:
  *plVar3 = param_1 + 0x50;
  plVar3[1] = (long)plVar3;
  *(undefined4 *)(plVar3 + 0x25) = 0xffffffff;
  plVar3[2] = 0;
  plVar3[3] = 0;
// ... (226 more lines)
```

## 27. `FUN_7100425700`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100425700`  (offset `0x425700`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100425700(void)`
- **Size / BBs / Incoming:** 492 bytes / 19 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** TitleScene;MainMenuScene;SpiritsOpeningScene;HowToPlayScene;IngameCallSequenceScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100425700__7100425700.c)  [cfg](../decompiled/FUN_7100425700__7100425700.mmd)
- **Clone hash:** `b5af86f3ba1a93f4`

```c

void FUN_7100425700(void)

{
  int iVar1;
  
  DAT_7105329188 = 0;
  DAT_7105329190 = "TitleScene";
  if (((DAT_7105329200 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329200), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329200);
  }
  DAT_7105329198 = &PTR_PTR_71050b8bf0;
  DAT_71053291a0 = "MainMenuScene";
  if (((DAT_7105329208 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329208), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329208);
  }
  DAT_71053291a8 = &PTR_PTR_71050b8bf8;
  DAT_71053291b0 = "SpiritsOpeningScene";
  if (((DAT_7105329210 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329210), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329210);
  }
  DAT_71053291b8 = &PTR_PTR_71050b8c00;
  DAT_71053291c0 = "HowToPlayScene";
  if (((DAT_7105329218 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329218), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329218);
  }
  DAT_71053291c8 = &PTR_PTR_71050b8c08;
  DAT_71053291d0 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_71053291d8 = &PTR_PTR_7104f76410;
  DAT_71053291e0 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_71053291f0 = 0;
  DAT_71053291f8 = 0;
  DAT_71053291e8 = &PTR_PTR_71050b5930;
  return;
// ... (2 more lines)
```

## 28. `FUN_7100422490`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100422490`  (offset `0x422490`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100422490(void)`
- **Size / BBs / Incoming:** 492 bytes / 19 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** CharaSelectScene;StageSelectScene;MeleeRuleScene;SpecialVariousScene;IngameCallSequenceScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100422490__7100422490.c)  [cfg](../decompiled/FUN_7100422490__7100422490.mmd)
- **Clone hash:** `c72751112cd7b9ec`

```c

void FUN_7100422490(void)

{
  int iVar1;
  
  DAT_7105328ac8 = 0;
  DAT_7105328ad0 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328ad8 = &PTR_PTR_71050b6960;
  DAT_7105328ae0 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105328ae8 = &PTR_PTR_71050b7478;
  DAT_7105328af0 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105328af8 = &PTR_PTR_71050a42c0;
  DAT_7105328b00 = "SpecialVariousScene";
  if (((DAT_7105328a20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328a20), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328a20);
  }
  DAT_7105328b08 = &PTR_PTR_71050b7d20;
  DAT_7105328b10 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328b18 = &PTR_PTR_7104f76410;
  DAT_7105328b20 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_7105328b30 = 0;
  DAT_7105328b38 = 0;
  DAT_7105328b28 = &PTR_PTR_71050b5930;
  return;
// ... (2 more lines)
```

## 29. `FUN_7100426670`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100426670`  (offset `0x426670`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100426670(void)`
- **Size / BBs / Incoming:** 416 bytes / 16 bb / 1 incoming refs
- **Match values:** Scene
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

## 30. `FUN_7100420d30`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100420d30`  (offset `0x420d30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100420d30(void)`
- **Size / BBs / Incoming:** 416 bytes / 16 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** CharaMakeSelectDataScene;CharaMakeSelectMiiScene;CharaMakeSelectTypeScene;CharaMakeEditMenuScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100420d30__7100420d30.c)  [cfg](../decompiled/FUN_7100420d30__7100420d30.mmd)
- **Clone hash:** `15a8845de2eab8f7`

```c

void FUN_7100420d30(void)

{
  int iVar1;
  
  DAT_710532839c = 0;
  DAT_71053283a0 = "CharaMakeSelectDataScene";
  if (((DAT_7105328400 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328400), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328400);
  }
  DAT_71053283a8 = &PTR_PTR_71050b6b08;
  DAT_71053283b0 = "CharaMakeSelectMiiScene";
  if (((DAT_7105328408 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328408), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328408);
  }
  DAT_71053283b8 = &PTR_PTR_71050b6b10;
  DAT_71053283c0 = "CharaMakeSelectTypeScene";
  if (((DAT_7105328410 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328410), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328410);
  }
  DAT_71053283c8 = &PTR_PTR_71050b6b18;
  DAT_71053283d0 = "CharaMakeEditMenuScene";
  if (((DAT_7105328418 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328418), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328418);
  }
  DAT_71053283d8 = &PTR_PTR_71050b6b20;
  DAT_71053283e0 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_71053283f0 = 0;
  DAT_71053283f8 = 0;
  DAT_71053283e8 = &PTR_PTR_71050b5930;
  return;
}


```

## 31. `FUN_710214fdf0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710214fdf0`  (offset `0x214fdf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710214fdf0(void)`
- **Size / BBs / Incoming:** 7560 bytes / 13 bb / 1 incoming refs
- **Match values:** SCENE
- **Strings touched:** FIGHTER_FOX_ARCHIVE_GROUP_BASE;FIGHTER_FOX_ARCHIVE_GROUP_WPN_BLASTER;FIGHTER_FOX_ARCHIVE_GROUP_WPN_ARWING;FIGHTER_FOX_ARCHIVE_GROUP_WPN_LANDMASTER;FIGHTER_KIRBY_FOX_ARCHIVE_GROUP_WPN_BLASTER;FIGHTER_FOX_ARCHIVE_TERM;FIGHTER_FOX_CLIFF_HANG_DATA_DEFAULT;FIGHTER_FOX_CLIFF_HANG_DATA_SPECIAL_S;FIGHTER_FOX_CLIFF_HANG_DATA_SPECIAL_HI;FIGHTER_FOX_CLIFF_HANG_DATA_TERM;FIGHTER_FOX_WIN_WPN_DATA_BLASTER;FIGHTER_FOX_WIN_WPN_DATA_TERM;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_START;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_0;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_1;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_2;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_3;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_START;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_0;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_1;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_2;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_3;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_START;FIGHTER_MARIO_STATUS_KIND_SPECIAL_LW_CHARGE;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_0;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_1;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_2;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_3;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_START;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_0;FIGHTER_FOX_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_1;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710214fdf0__710214fdf0.c)  [cfg](../decompiled/FUN_710214fdf0__710214fdf0.mmd)
- **Clone hash:** `63eff6ee9788de43`

```c

void FUN_710214fdf0(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_68 = 0xfffffffd;
  local_78 = 0;
  local_70 = 0;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_ARCHIVE_GROUP_BASE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_ARCHIVE_GROUP_WPN_BLASTER",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_ARCHIVE_GROUP_WPN_ARWING",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_ARCHIVE_GROUP_WPN_LANDMASTER",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KIRBY_FOX_ARCHIVE_GROUP_WPN_BLASTER",(undefined **)0x1,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_ARCHIVE_TERM",(undefined **)0x2,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_CLIFF_HANG_DATA_DEFAULT",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_CLIFF_HANG_DATA_SPECIAL_S",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_CLIFF_HANG_DATA_SPECIAL_HI",(undefined **)0x2,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FOX_CLIFF_HANG_DATA_TERM",(undefined **)0x3,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  local_78 = 0;
// ... (803 more lines)
```

## 32. `FUN_7100421340`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100421340`  (offset `0x421340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100421340(void)`
- **Size / BBs / Incoming:** 416 bytes / 16 bb / 0 incoming refs
- **Match values:** Scene
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

## 33. `FUN_7100428490`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100428490`  (offset `0x428490`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100428490(void)`
- **Size / BBs / Incoming:** 416 bytes / 16 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** StageSelectScene;CharaSelectScene;IngameCallSequenceScene;MeleeScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100428490__7100428490.c)  [cfg](../decompiled/FUN_7100428490__7100428490.mmd)
- **Clone hash:** `101d65e536c6f610`

```c

void FUN_7100428490(void)

{
  int iVar1;
  
  DAT_7105329ea0 = 0;
  DAT_7105329ea8 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105329eb0 = &PTR_PTR_71050b7478;
  DAT_7105329eb8 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329ec0 = &PTR_PTR_71050b6960;
  DAT_7105329ec8 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105329ed0 = &PTR_PTR_7104f76410;
  DAT_7105329ed8 = "MeleeScene";
  if (((DAT_71053287b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053287b0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053287b0);
  }
  DAT_7105329ee0 = &PTR_PTR_71050b7898;
  DAT_7105329ee8 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_7105329ef8 = 0;
  DAT_7105329f00 = 0;
  DAT_7105329ef0 = &PTR_PTR_71050b5930;
  return;
}


```

## 34. `FUN_710215e3b0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710215e3b0`  (offset `0x215e3b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710215e3b0(void)`
- **Size / BBs / Incoming:** 7016 bytes / 10 bb / 1 incoming refs
- **Match values:** SCENE
- **Strings touched:** FIGHTER_FALCO_ARCHIVE_GROUP_BASE;FIGHTER_FALCO_ARCHIVE_GROUP_WPN_BLASTER;FIGHTER_FALCO_ARCHIVE_GROUP_WPN_ARWING;FIGHTER_FALCO_ARCHIVE_GROUP_WPN_LANDMASTER;FIGHTER_FALCO_ARCHIVE_TERM;FIGHTER_FALCO_CLIFF_HANG_DATA_DEFAULT;FIGHTER_FALCO_CLIFF_HANG_DATA_SPECIAL_S;FIGHTER_FALCO_CLIFF_HANG_DATA_SPECIAL_HI;FIGHTER_FALCO_CLIFF_HANG_DATA_TERM;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_START;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_0;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_1;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_2;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_X_3;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_START;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_0;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_1;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_2;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Y_3;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_START;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_0;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_1;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_2;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_POS_Z_3;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_START;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_0;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_1;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_2;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_POSTURE_LOG_ROT_X_3;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_FIRE_DECIDE_STICK_X;FIGHTER_FALCO_INSTANCE_WORK_ID_FLOAT_FIRE_DECIDE_STICK_Y;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710215e3b0__710215e3b0.c)  [cfg](../decompiled/FUN_710215e3b0__710215e3b0.mmd)
- **Clone hash:** `9946bcf9866514bb`

```c

void FUN_710215e3b0(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_68 = 0xfffffffd;
  local_78 = 0;
  local_70 = 0;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_ARCHIVE_GROUP_BASE",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_ARCHIVE_GROUP_WPN_BLASTER",(undefined **)0x0,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_ARCHIVE_GROUP_WPN_ARWING",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_ARCHIVE_GROUP_WPN_LANDMASTER",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_ARCHIVE_TERM",(undefined **)0x3,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_CLIFF_HANG_DATA_DEFAULT",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_CLIFF_HANG_DATA_SPECIAL_S",(undefined **)0x1,in_x3
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_CLIFF_HANG_DATA_SPECIAL_HI",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_FALCO_CLIFF_HANG_DATA_TERM",(undefined **)0x3,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  local_68 = -3;
  local_78 = 0;
  local_70 = 0;
// ... (748 more lines)
```

## 35. `FUN_7102328bb0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102328bb0`  (offset `0x2328bb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102328bb0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1368 bytes / 67 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** IngameCallSequenceScene;StageSelectScene;UnlockSequenceScene;CharaSelectScene
- **Callees:** FUN_71000001c0;FUN_71014cff60;FUN_71014d00f0;FUN_7101764000;FUN_710178bb40;FUN_710179dd10;FUN_7101845ea0;FUN_7102329f10;FUN_710232a660;<EXTERNAL>::strcmp;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7102328bb0__7102328bb0.c)  [cfg](../decompiled/FUN_7102328bb0__7102328bb0.mmd)
- **Clone hash:** `d4ef20a8e30da5b1`

```c

void FUN_7102328bb0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *__s1;
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    FUN_71014cff60(*(uint **)(*(long *)(DAT_71052c36c8 + 8) + 8),param_2,param_3,param_4,param_5,
                   param_6,param_7,param_8);
    lVar4 = DAT_710532f870;
    if ((*(byte *)(*(long *)(DAT_710532f870 + 8) + 0x10) >> 1 & 1) == 0) {
      plVar3 = (long *)(*(long *)(DAT_710532f870 + 8) + 8);
      *(undefined8 *)(*plVar3 + 0x70) = 1;
      FUN_7101845ea0(plVar3);
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 0x70) = 0;
    }
    *(undefined1 **)(param_1 + 0x148) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x138) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x170) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x160) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x198) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x188) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x1c0) = &DAT_c1ffff0000000000;
    *(undefined1 **)(param_1 + 0x1b0) = &DAT_c1ffff0000000000;
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined2 *)(param_1 + 0x154) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined2 *)(param_1 + 0x144) = 0;
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
// ... (148 more lines)
```

## 36. `FUN_7102318650`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102318650`  (offset `0x2318650`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102318650(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2512 bytes / 114 bb / 1 incoming refs
- **Match values:** Scene
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

## 37. `FUN_7100421d80`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100421d80`  (offset `0x421d80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100421d80(void)`
- **Size / BBs / Incoming:** 340 bytes / 13 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** StageSelectScene;CharaSelectScene;IngameCallSequenceScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100421d80__7100421d80.c)  [cfg](../decompiled/FUN_7100421d80__7100421d80.mmd)
- **Clone hash:** `a92bc6e3551c9b9e`

```c

void FUN_7100421d80(void)

{
  int iVar1;
  
  DAT_71053288e8 = 0;
  DAT_71053288f0 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_71053288f8 = &PTR_PTR_71050b7478;
  DAT_7105328900 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328908 = &PTR_PTR_71050b6960;
  DAT_7105328910 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328918 = &PTR_PTR_7104f76410;
  DAT_7105328920 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_7105328930 = 0;
  DAT_7105328938 = 0;
  DAT_7105328928 = &PTR_PTR_71050b5930;
  return;
}


```

## 38. `FUN_71004268d0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004268d0`  (offset `0x4268d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004268d0(void)`
- **Size / BBs / Incoming:** 340 bytes / 13 bb / 0 incoming refs
- **Match values:** Scene
- **Strings touched:** OnlineWatchFullScene;OnlineWatchShopTopScene;SpiritsReturnScene;MeleeReplaySequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004268d0__71004268d0.c)  [cfg](../decompiled/FUN_71004268d0__71004268d0.mmd)
- **Clone hash:** `162fd5a6f45a76d2`

```c

void FUN_71004268d0(void)

{
  int iVar1;
  
  DAT_71053296a0 = 0;
  DAT_71053296a8 = "OnlineWatchFullScene";
  if (((DAT_71053296f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053296f8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053296f8);
  }
  DAT_71053296b0 = &PTR_PTR_71050b98b0;
  DAT_71053296b8 = "OnlineWatchShopTopScene";
  if (((DAT_7105329700 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329700), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329700);
  }
  DAT_71053296c0 = &PTR_PTR_71050b98b8;
  DAT_71053296c8 = "SpiritsReturnScene";
  if (((DAT_71053285e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053285e8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053285e8);
  }
  DAT_71053296d0 = &PTR_PTR_71050b7370;
  DAT_71053296d8 = "MeleeReplaySequenceScene";
  if (((DAT_7105328310 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328310), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328310);
  }
  DAT_71053296e8 = 0;
  DAT_71053296f0 = 0;
  DAT_71053296e0 = &PTR_PTR_71050b6418;
  return;
}


```

## 39. `FUN_71004255a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004255a0`  (offset `0x4255a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004255a0(void)`
- **Size / BBs / Incoming:** 340 bytes / 13 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** HelpTopScene;TechnicScene;SkillListScene;DlcStaffRollScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004255a0__71004255a0.c)  [cfg](../decompiled/FUN_71004255a0__71004255a0.mmd)
- **Clone hash:** `89d5392beb9717a5`

```c

void FUN_71004255a0(void)

{
  int iVar1;
  
  DAT_7105329110 = 0;
  DAT_7105329118 = "HelpTopScene";
  if (((DAT_7105329168 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329168), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329168);
  }
  DAT_7105329120 = &PTR_PTR_71050b8a88;
  DAT_7105329128 = "TechnicScene";
  if (((DAT_7105329170 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329170), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329170);
  }
  DAT_7105329130 = &PTR_PTR_71050b8a90;
  DAT_7105329138 = "SkillListScene";
  if (((DAT_7105329178 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329178), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329178);
  }
  DAT_7105329140 = &PTR_PTR_71050b8a98;
  DAT_7105329148 = "DlcStaffRollScene";
  if (((DAT_7105329180 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329180), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329180);
  }
  DAT_7105329158 = 0;
  DAT_7105329160 = 0;
  DAT_7105329150 = &PTR_PTR_71050b8aa0;
  return;
}


```

## 40. `FUN_7100425dc0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100425dc0`  (offset `0x425dc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100425dc0(void)`
- **Size / BBs / Incoming:** 340 bytes / 13 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** CharaSelectScene;IngameCallSequenceScene;UnlockSequenceScene;OnlineMeleeConventionTopScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100425dc0__7100425dc0.c)  [cfg](../decompiled/FUN_7100425dc0__7100425dc0.mmd)
- **Clone hash:** `6e0c6d04d77e3bb9`

```c

void FUN_7100425dc0(void)

{
  int iVar1;
  
  DAT_7105329380 = 0;
  DAT_7105329388 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329390 = &PTR_PTR_71050b6960;
  DAT_7105329398 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_71053293a0 = &PTR_PTR_7104f76410;
  DAT_71053293a8 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_71053293b0 = &PTR_PTR_71050b5930;
  DAT_71053293b8 = "OnlineMeleeConventionTopScene";
  if (((DAT_71053293d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053293d8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053293d8);
  }
  DAT_71053293c8 = 0;
  DAT_71053293d0 = 0;
  DAT_71053293c0 = &PTR_PTR_71050b9098;
  return;
}


```

## 41. `FUN_7102160190`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102160190`  (offset `0x2160190`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102160190(void)`
- **Size / BBs / Incoming:** 8224 bytes / 25 bb / 1 incoming refs
- **Match values:** SCENE
- **Strings touched:** FIGHTER_WARIO_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_SPECIAL_N_INTERVAL;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_COUNT;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_LEVEL;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_BIKE_TIME;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_BIKE_ORIGINAL_OWNER;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_TERM;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_FINAL_TIME;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_BIKE_HP;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_GAS_CHARGE_SPEED;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_STOMACH_MOTION_FRAME;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_CHANGE;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_FLASHING;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_CHARGE_MAX;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_CHARGE_STOP;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_REMOVE_BIKE;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_SPECIAL_N_AGAIN;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_FORBID_GENERATE_BIKE;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_WARIO_GASS_LEVEL_S;FIGHTER_WARIO_GASS_LEVEL_M;FIGHTER_WARIO_GASS_LEVEL_L;FIGHTER_WARIO_GASS_LEVEL_FLY;FIGHTER_WARIO_CHANGE_SUCCEED_WORK_ID_INT_GASS_COUNT;FIGHTER_WARIO_CHANGE_SUCCEED_WORK_ID_INT_GASS_LEVEL;FIGHTER_WARIO_WIN_WPN_DATA_BIKE;FIGHTER_WARIO_WIN_WPN_DATA_TERM;FIGHTER_WARIO_EAT_WEAPON_KIND_NORMAL;FIGHTER_WARIO_EAT_WEAPON_KIND_BOMB;FIGHTER_WARIO_EAT_WEAPON_KIND_NUM;FIGHTER_WARIO_FINAL_MODULE_START_INIT;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102160190__7102160190.c)  [cfg](../decompiled/FUN_7102160190__7102160190.mmd)
- **Clone hash:** `dd0509e172b95a16`

```c

void FUN_7102160190(void)

{
  byte ****in_x3;
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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_SPECIAL_N_INTERVAL",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_COUNT",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_LEVEL",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_BIKE_TIME",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_BIKE_ORIGINAL_OWNER",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_FINAL_TIME",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_BIKE_HP",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_GAS_CHARGE_SPEED",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_STOMACH_MOTION_FRAME",
// ... (867 more lines)
```

## 42. `FUN_71021ec200`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021ec200`  (offset `0x21ec200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021ec200(void)`
- **Size / BBs / Incoming:** 11060 bytes / 10 bb / 1 incoming refs
- **Match values:** SCENE
- **Strings touched:** FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_N_FRAMES_AFTER_LAST3PS;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_FRAME;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_RANDOM_TABLE;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_SHOOT_TIMER;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_DISABLE_SHOOT_CAN_FRAME;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_3SHOTS_INVALID_FRAMES;FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_FLOAT_MOVE_SPD_X;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TRIGGER_TIMER;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TERM;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOP;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_GUNMAN_OK;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_RELEASE_CAN;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_RELEASE_CLAY;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_RELEASE_GUNMAN;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_REQUEST_SPECIAL_HI_CANCEL;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_ENABLE_SPECIAL_HI_CANCEL;WEAPON_GANON_BEAST_INSTANCE_WORK_ID_FLAG_HITSTOP;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_CANCELED;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_SPECIAL_S_CLAY_HIT;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_THROW_N_OFFSET_X;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_THROW_N_OFFSET_Y;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_THROW_N_OFFSET_Z;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_SMASH_S_CHARGE_FRAME;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_SHOOT_POS_X;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_SHOOT_POS_Y;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_DUCKHUNT_TURN_NEUTRAL;FIGHTER_DUCKHUNT_TURN_FRONT;FIGHTER_DUCKHUNT_TURN_BACK;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021ec200__71021ec200.c)  [cfg](../decompiled/FUN_71021ec200__71021ec200.mmd)
- **Clone hash:** `e53f121443819b63`

```c

void FUN_71021ec200(void)

{
  byte ****in_x3;
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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_N_FRAMES_AFTER_LAST3PS",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_FRAME",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_RANDOM_TABLE",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_SHOOT_TIMER",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_DISABLE_SHOOT_CAN_FRAME",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_3SHOTS_INVALID_FRAMES",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TRIGGER_TIMER",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
// ... (1269 more lines)
```

## 43. `FUN_7100420bd0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100420bd0`  (offset `0x420bd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100420bd0(void)`
- **Size / BBs / Incoming:** 340 bytes / 13 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** IngameCallSequenceScene;CharaSelectScene;ChallengerApproachScene;ChallengerUnlockScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100420bd0__7100420bd0.c)  [cfg](../decompiled/FUN_7100420bd0__7100420bd0.mmd)
- **Clone hash:** `e67b9d98202d421b`

```c

void FUN_7100420bd0(void)

{
  int iVar1;
  
  DAT_7105328328 = 0;
  DAT_7105328330 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328338 = &PTR_PTR_7104f76410;
  DAT_7105328340 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328348 = &PTR_PTR_71050b6960;
  DAT_7105328350 = "ChallengerApproachScene";
  if (((DAT_7105328388 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328388), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328388);
  }
  DAT_7105328358 = &PTR_PTR_71050b6968;
  DAT_7105328360 = "ChallengerUnlockScene";
  if (((DAT_7105328390 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328390), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328390);
  }
  DAT_7105328370 = 0;
  DAT_7105328378 = 0;
  DAT_7105328368 = &PTR_PTR_71050b6970;
  return;
}


```

## 44. `FUN_7102192760`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102192760`  (offset `0x2192760`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102192760(void)`
- **Size / BBs / Incoming:** 8960 bytes / 13 bb / 1 incoming refs
- **Match values:** SCENE
- **Strings touched:** FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP_PREVIOUS;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT_MINI_JUMP_ATTACK;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ARM_MANAGER_POINTER;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_RUSHCOIL_WAIT_FRAME;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_HOLD_FRAME;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_TERM;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_LEAFSHIELD;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_ENABLE_SHOOT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_FALL;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_LOOP_ACCEPT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_LOOP;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_L_SHOULDER_FIX;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_GENERATE_TOP_N_OFFSET;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_SHOOT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_SHOOT_END;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_PREV_ESCAPE;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ATTACK_HI3_LANDING;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_ROCKMAN_MOTION_PART_SET_UDE;FIGHTER_ROCKMAN_MOTION_PART_SET_HAVE_FLIP;FIGHTER_ROCKMAN_MOTION_PART_SET_KIND_TERM;FIGHTER_ROCKMAN_ARM_LEFT;FIGHTER_ROCKMAN_ARM_RIGHT;FIGHTER_ROCKMAN_ARM_MAX;FIGHTER_ROCKMAN_ARMFORM_INVALID;FIGHTER_ROCKMAN_ARMFORM_HAND;FIGHTER_ROCKMAN_ARMFORM_ROCKBUSTER;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102192760__7102192760.c)  [cfg](../decompiled/FUN_7102192760__7102192760.mmd)
- **Clone hash:** `464ecc22f982b06b`

```c

void FUN_7102192760(void)

{
  byte ****in_x3;
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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP_PREVIOUS",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT_MINI_JUMP_ATTACK",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ARM_MANAGER_POINTER",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_RUSHCOIL_WAIT_FRAME",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_HOLD_FRAME",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (1050 more lines)
```

## 45. `FUN_7100421bb0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100421bb0`  (offset `0x421bb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100421bb0(void)`
- **Size / BBs / Incoming:** 340 bytes / 13 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** CharaSelectScene;IngameCallSequenceScene;SpiritsForceReturnScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100421bb0__7100421bb0.c)  [cfg](../decompiled/FUN_7100421bb0__7100421bb0.mmd)
- **Clone hash:** `8ae83ec77c67960e`

```c

void FUN_7100421bb0(void)

{
  int iVar1;
  
  DAT_7105328870 = 0;
  DAT_7105328878 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105328880 = &PTR_PTR_71050b6960;
  DAT_7105328888 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105328890 = &PTR_PTR_7104f76410;
  DAT_7105328898 = "SpiritsForceReturnScene";
  if (((DAT_71053282d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282d8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282d8);
  }
  DAT_71053288a0 = &PTR_PTR_71050b63e0;
  DAT_71053288a8 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_71053288b8 = 0;
  DAT_71053288c0 = 0;
  DAT_71053288b0 = &PTR_PTR_71050b5930;
  return;
}


```

## 46. `FUN_7100426fc0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100426fc0`  (offset `0x426fc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100426fc0(void)`
- **Size / BBs / Incoming:** 340 bytes / 13 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** CharaSelectScene;SpiritsBoardSetScene2;SpiritsRaiseScene;IngameCallSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100426fc0__7100426fc0.c)  [cfg](../decompiled/FUN_7100426fc0__7100426fc0.mmd)
- **Clone hash:** `233b60a42a29a6fb`

```c

void FUN_7100426fc0(void)

{
  int iVar1;
  
  DAT_71053298f0 = 0;
  DAT_71053298f8 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329900 = &PTR_PTR_71050b6960;
  DAT_7105329908 = "SpiritsBoardSetScene2";
  if (((DAT_7105329850 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329850), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329850);
  }
  DAT_7105329910 = &PTR_PTR_71050b9b58;
  DAT_7105329918 = "SpiritsRaiseScene";
  if (((DAT_7105329858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329858), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329858);
  }
  DAT_7105329920 = &PTR_PTR_71050b9b60;
  DAT_7105329928 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105329938 = 0;
  DAT_7105329940 = 0;
  DAT_7105329930 = &PTR_PTR_7104f76410;
  return;
}


```

## 47. `FUN_7100425c60`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100425c60`  (offset `0x425c60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100425c60(void)`
- **Size / BBs / Incoming:** 340 bytes / 13 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** OnlineMeleeAnyScene;CharaSelectScene;IngameCallSequenceScene;UnlockSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100425c60__7100425c60.c)  [cfg](../decompiled/FUN_7100425c60__7100425c60.mmd)
- **Clone hash:** `346bb4edefdddde6`

```c

void FUN_7100425c60(void)

{
  int iVar1;
  
  DAT_7105329320 = 0;
  DAT_7105329328 = "OnlineMeleeAnyScene";
  if (((DAT_7105329378 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329378), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329378);
  }
  DAT_7105329330 = &PTR_PTR_71050b8fc0;
  DAT_7105329338 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329340 = &PTR_PTR_71050b6960;
  DAT_7105329348 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105329350 = &PTR_PTR_7104f76410;
  DAT_7105329358 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_7105329368 = 0;
  DAT_7105329370 = 0;
  DAT_7105329360 = &PTR_PTR_71050b5930;
  return;
}


```

## 48. `FUN_71004280a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004280a0`  (offset `0x4280a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004280a0(void)`
- **Size / BBs / Incoming:** 340 bytes / 13 bb / 1 incoming refs
- **Match values:** Scene
- **Strings touched:** StageMakeTopMenuScene;StageMakeEditScene;CharaSelectScene;SoundTestScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004280a0__71004280a0.c)  [cfg](../decompiled/FUN_71004280a0__71004280a0.mmd)
- **Clone hash:** `0bd250a0249a2794`

```c

void FUN_71004280a0(void)

{
  int iVar1;
  
  DAT_7105329d80 = 0;
  DAT_7105329d88 = "StageMakeTopMenuScene";
  if (((DAT_7105329dd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329dd8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329dd8);
  }
  DAT_7105329d90 = &PTR_PTR_71050ba770;
  DAT_7105329d98 = "StageMakeEditScene";
  if (((DAT_7105329de0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329de0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329de0);
  }
  DAT_7105329da0 = &PTR_PTR_71050ba778;
  DAT_7105329da8 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329db0 = &PTR_PTR_71050b6960;
  DAT_7105329db8 = "SoundTestScene";
  if (((DAT_7105329310 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329310), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329310);
  }
  DAT_7105329dc8 = 0;
  DAT_7105329dd0 = 0;
  DAT_7105329dc0 = &PTR_PTR_71050b8db8;
  return;
}


```

## 49. `FUN_710219ad10`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710219ad10`  (offset `0x219ad10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710219ad10(void)`
- **Size / BBs / Incoming:** 11776 bytes / 28 bb / 1 incoming refs
- **Match values:** SCENE
- **Strings touched:** FIGHTER_BAYONETTA_COSTUME_KIND_DEFAULT;FIGHTER_BAYONETTA_COSTUME_KIND_JEANNE;FIGHTER_BAYONETTA_COSTUME_KIND_BAYONETTA_1;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_START;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_USED_COUNT;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_REUSE_FRAME;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_D_ENABLE_FRAME;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_DISABLE_JUMP_AFTER_FRAME;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_HI_USED_COUNT;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_FINAL_STEP;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_FINAL_TIME_LIMIT;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_FINAL_GAUGE_COUNT;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_FINAL_SE_HANDLE_FINAL02;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_BAT_WITH_IN_STATE;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_WITCH_TIME_XLU_FRAME;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SHOOTING_STEP;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SHOOTING_FRAME;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_LINE1;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_LINE2;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_ARC1;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_ARC2;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_ARC3;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_100A;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_100B;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_ATTACK_100END;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_STILETTO;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_AFTERBURNER_LINE;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_WITCHTWIST_WIND;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_BAYONETTA_WITCHTWIST_SPIRAL;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_11;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_12;FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_EFFECT_KIND_13;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710219ad10__710219ad10.c)  [cfg](../decompiled/FUN_710219ad10__710219ad10.mmd)
- **Clone hash:** `c3eab079c8448a2c`

```c

void FUN_710219ad10(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_68 = 0xfffffffd;
  local_78 = 0;
  local_70 = 0;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BAYONETTA_COSTUME_KIND_DEFAULT",(undefined **)0x0,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BAYONETTA_COSTUME_KIND_JEANNE",(undefined **)0x1,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BAYONETTA_COSTUME_KIND_BAYONETTA_1",(undefined **)0x2,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = -3;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_USED_COUNT"
                 ,(undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_REUSE_FRAME",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_D_ENABLE_FRAME",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)
                 "FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_AIR_S_DISABLE_JUMP_AFTER_FRAME",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_HI_USED_COUNT",
// ... (1361 more lines)
```

## 50. `FUN_71004217c0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004217c0`  (offset `0x4217c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004217c0(void)`
- **Size / BBs / Incoming:** 340 bytes / 13 bb / 0 incoming refs
- **Match values:** Scene
- **Strings touched:** set_assist_team_no;PracticeScene;MeleeScene;HomeRunContestScene;SyncParameterScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004217c0__71004217c0.c)  [cfg](../decompiled/FUN_71004217c0__71004217c0.mmd)
- **Clone hash:** `447f89cead8feb83`

```c

void FUN_71004217c0(void)

{
  int iVar1;
  
  DAT_7105328750 = 0;
  DAT_7105328758 = "PracticeScene";
  if (((DAT_71053287a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053287a8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053287a8);
  }
  DAT_7105328760 = &PTR_PTR_71050b7890;
  DAT_7105328768 = "MeleeScene";
  if (((DAT_71053287b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053287b0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053287b0);
  }
  DAT_7105328770 = &PTR_PTR_71050b7898;
  DAT_7105328778 = "HomeRunContestScene";
  if (((DAT_71053287b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053287b8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053287b8);
  }
  DAT_7105328780 = &PTR_PTR_71050b78a0;
  DAT_7105328788 = "SyncParameterScene";
  if (((DAT_71053287c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053287c0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053287c0);
  }
  DAT_7105328798 = 0;
  DAT_71053287a0 = 0;
  DAT_7105328790 = &PTR_PTR_71050b78a8;
  return;
}


```

