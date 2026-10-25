# rating (funcs=10, hits=17)

Top 50 functions by hit count

## 1. `FUN_7101714c00`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101714c00`  (offset `0x1714c00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101714c00(long param_1, long param_2, undefined2 * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6812 bytes / 251 bb / 2 incoming refs
- **Match values:** rating;Rating
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

## 2. `FUN_710134f5c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710134f5c0`  (offset `0x134f5c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710134f5c0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 22424 bytes / 1006 bb / 6 incoming refs
- **Match values:** Rating
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

## 3. `FUN_7101746780`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101746780`  (offset `0x1746780`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101746780(undefined8 param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2160 bytes / 55 bb / 2 incoming refs
- **Match values:** rating
- **Strings touched:** hac_p_aaaba_match_end;Ver. %d.%d.%d;app_version;match_id_lo;match_id_hi;match_mode;match_submode;event_type;tournament_id;gathering_id;is_host;rating;is_provisional;start_rtt_max;rtt_min;rtt_max;rtt_ave;experience;game_time;rtt_raw;rtt_correct;loss_ratio_min;loss_ratio_max;loss_ratio_ave;loss_ratio_dirty
- **Callers:** FUN_71016ad9e0;FUN_71016b9340
- **Callees:** FUN_71000001c0;FUN_71016f6340;FUN_71017436d0;FUN_7101743910;FUN_7101764000;FUN_71017994c0;FUN_710179eec0;FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::sprintf;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save
- **Files:** [decomp](../decompiled/FUN_7101746780__7101746780.c)  [cfg](../decompiled/FUN_7101746780__7101746780.mmd)
- **Clone hash:** `e105e8441062ab05`

```c

void FUN_7101746780(undefined8 param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined **ppuVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  undefined *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  double dVar17;
  byte local_80 [4];
  uint local_7c;
  undefined1 *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong *local_50;
  undefined *local_48;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
// ... (201 more lines)
```

## 4. `FUN_710168c4d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710168c4d0`  (offset `0x168c4d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710168c4d0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1572 bytes / 55 bb / 1 incoming refs
- **Match values:** rating
- **Strings touched:** hac_p_aaaba_session_end;Ver. %d.%d.%d;app_version;gathering_id;gamemode;min_players;max_players;rating;country;scorebased_key;scorebased_value;cluster_id;rate_rank;is_vip;is_parallel;matching_retry;match_result;wait_interval
- **Callees:** FUN_71000001c0;FUN_710167fac0;FUN_710172b370;FUN_710172bb90;FUN_7101747490;FUN_7101764000;FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::sprintf;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::nn::os::ConvertToTimeSpan;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add
- **Files:** [decomp](../decompiled/FUN_710168c4d0__710168c4d0.c)  [cfg](../decompiled/FUN_710168c4d0__710168c4d0.mmd)
- **Clone hash:** `4a9e8d132a490049`

```c

void FUN_710168c4d0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  byte ****ppppbVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  ulong local_68;
  ulong local_60;
  ulong *local_48;
  
  iVar6 = (int)param_3;
  if (iVar6 != 1) {
    if (iVar6 == 2) {
      ppppbVar10 = param_4;
      if ((*(int *)(param_1 + 0x269c0) == 0xc) && (*(byte *)(param_4 + 1) < 3)) {
        lVar13 = *DAT_710593b580;
        lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x98);
        iVar3 = *(int *)(lVar13 + 0x7300);
        uVar2 = *(uint *)(lVar11 + 0xdcc);
        if (iVar3 == -1) {
          plVar7 = (long *)(lVar13 + 0x28);
        }
        else {
          if (*(ulong *)(lVar13 + 0x72c0) <= (ulong)(long)iVar3) goto LAB_710168caf0;
          plVar7 = (long *)(lVar13 + (long)iVar3 * 0xcc0 + 0xce8);
        }
        lVar11 = lVar11 + 0x540;
// ... (148 more lines)
```

## 5. `FUN_7101747230`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101747230`  (offset `0x1747230`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101747230(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 604 bytes / 14 bb / 2 incoming refs
- **Match values:** rating
- **Strings touched:** tournament_entry;Ver. %d.%d.%d;app_version;tournament_id;evend_id;rating;match_result;wait_interval
- **Callers:** FUN_71016c3c00;FUN_71016c5000
- **Callees:** FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::sprintf;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::nn::os::ConvertToTimeSpan;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save
- **Files:** [decomp](../decompiled/FUN_7101747230__7101747230.c)  [cfg](../decompiled/FUN_7101747230__7101747230.mmd)
- **Clone hash:** `aa0ca30678e8a079`

```c

void FUN_7101747230(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong *local_58;
  
  if (DAT_71074470e0 != 0) {
    FUN_710375aa90((long *)&local_58,"tournament_entry",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    puVar1 = local_58;
    if (((DAT_71052b92e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71052b92e0), iVar2 != 0)) {
      __cxa_guard_release(&DAT_71052b92e0);
    }
    sprintf(&DAT_71052b92f5,"Ver. %d.%d.%d",0xd,0,5);
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),"app_version");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"tournament_id");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"evend_id");
    puVar1 = local_58;
    nn::prepo::PlayReport::Add((char *)(*local_58 + 0x4020),(Any64BitId *)"rating");
    nn::prepo::PlayReport::Add((char *)(*local_58 + 0x4020),(Any64BitId *)"match_result");
    lVar3 = nn::os::GetSystemTick();
    nn::os::ConvertToTimeSpan(lVar3 - DAT_71074470e8);
    nn::prepo::PlayReport::Add((char *)(*local_58 + 0x4020),0x7104400b13);
    DAT_71074470e0 = 0;
    iVar2 = *(int *)(*DAT_710593b580 + 0x7300);
    if ((iVar2 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar2)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    nn::prepo::PlayReport::Save((Uid *)(*local_58 + 0x4020));
    local_58 = (ulong *)0x0;
    if (puVar1 != (ulong *)0x0) {
      uVar4 = *puVar1;
      *puVar1 = 0;
      if (uVar4 != 0) {
// ... (8 more lines)
```

## 6. `FUN_7101740140`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101740140`  (offset `0x1740140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101740140(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 13708 bytes / 606 bb / 2 incoming refs
- **Match values:** rating
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

## 7. `FUN_7101704460`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101704460`  (offset `0x1704460`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7101704460(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1164 bytes / 50 bb / 2 incoming refs
- **Match values:** Rating
- **Strings touched:** TaskRating
- **Callers:** FUN_71016aa370;FUN_71016ac1c0
- **Callees:** FUN_7101739120;FUN_7103264270;FUN_710392e290;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock;<EXTERNAL>::abort;<EXTERNAL>::std::recursive_mutex::recursive_mutex
- **Files:** [decomp](../decompiled/FUN_7101704460__7101704460.c)  [cfg](../decompiled/FUN_7101704460__7101704460.mmd)
- **Clone hash:** `d57b0f0246d0d82a`

```c

undefined8
FUN_7101704460(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  int iVar12;
  long *plVar13;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined7 uStack_70;
  undefined1 local_69;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined7 uStack_60;
  undefined4 local_54;
  
  pppplVar7 = (long ****)&local_80;
  pppplVar6 = param_3;
  uVar4 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),(undefined1 *)*param_2);
  uVar3 = (uint)uVar4;
  if ((int)uVar3 < 0) {
    return 0;
  }
  if ((~uVar3 & 0xff) == 0) {
    return 0;
  }
  if (((ulong)param_3 & 1) != 0) {
// ... (197 more lines)
```

## 8. `FUN_7101747490`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101747490`  (offset `0x1747490`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101747490(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 816 bytes / 18 bb / 4 incoming refs
- **Match values:** rating
- **Strings touched:** competition_entry;Ver. %d.%d.%d;app_version;gathering_id;gamemode;event_id;min_players;max_players;rating;country;match_result;wait_interval
- **Callers:** FUN_710168c4d0;FUN_710169bef0;FUN_710236cc20;FUN_710236dce0
- **Callees:** FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::sprintf;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::nn::os::ConvertToTimeSpan;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save
- **Files:** [decomp](../decompiled/FUN_7101747490__7101747490.c)  [cfg](../decompiled/FUN_7101747490__7101747490.mmd)
- **Clone hash:** `6e8a287adb6adb94`

```c

void FUN_7101747490(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong *local_48;
  
  if (DAT_710509e4a8 != 0) {
    FUN_710375aa90((long *)&local_48,"competition_entry",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    puVar1 = local_48;
    lVar4 = DAT_710533a0a0;
    if (((DAT_71052b92e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71052b92e0), iVar2 != 0)) {
      __cxa_guard_release(&DAT_71052b92e0);
    }
    sprintf(&DAT_71052b92f5,"Ver. %d.%d.%d",0xd,0,5);
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),"app_version");
    if (((*(long **)(lVar4 + 0x30) != (long *)0x0) &&
        (lVar4 = **(long **)(lVar4 + 0x30), lVar4 != 0)) && (*(long *)(lVar4 + 0x40) != 0)) {
      nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"gathering_id");
    }
    puVar1 = local_48;
    nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"gamemode");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"event_id");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"min_players");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"max_players");
    NEON_ucvtf(*(undefined4 *)(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0xa8) + 0x2984));
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"rating");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),"country");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"match_result");
    lVar4 = nn::os::GetSystemTick();
    nn::os::ConvertToTimeSpan(lVar4 - DAT_71074470e8);
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),0x7104400b13);
    DAT_710509e4a8 = 0;
    iVar2 = *(int *)(*DAT_710593b580 + 0x7300);
    if ((iVar2 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar2)) {
// ... (18 more lines)
```

## 9. `FUN_7101733aa0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101733aa0`  (offset `0x1733aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7101733aa0(long param_1, long param_2)`
- **Size / BBs / Incoming:** 3904 bytes / 174 bb / 1 incoming refs
- **Match values:** rating
- **Strings touched:** play_count;smash_power;rating
- **Callees:** FUN_71001b1820;FUN_71001b1870;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e80;FUN_71001b78a0;FUN_71001b7910;FUN_71001d1590;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_710170cea0;FUN_710170dcd0;FUN_710170df50;FUN_710170ecb0;FUN_7101716980;FUN_71017181b0;FUN_7101718a30;...
- **Files:** [decomp](../decompiled/FUN_7101733aa0__7101733aa0.c)  [cfg](../decompiled/FUN_7101733aa0__7101733aa0.mmd)
- **Clone hash:** `6488d4490cb43f8a`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_7101733aa0(long param_1,long param_2)

{
  uint uVar1;
  long ******pppppplVar2;
  ulong uVar3;
  long *******ppppppplVar4;
  long ******pppppplVar5;
  undefined8 **ppuVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long *******ppppppplVar15;
  undefined1 *puVar16;
  long *******ppppppplVar17;
  undefined8 **ppuVar18;
  long ******pppppplVar19;
  long *******local_170;
  long *******local_168;
  long local_160;
  undefined **local_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 **local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined1 uStack_12e;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined **local_110;
// ... (619 more lines)
```

## 10. `FUN_7101703b70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101703b70`  (offset `0x1703b70`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_7101703b70(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2288 bytes / 50 bb / 1 incoming refs
- **Match values:** Rating
- **Strings touched:** TaskRating
- **Callers:** FUN_7101682270
- **Callees:** FUN_7101739120;FUN_710392e290;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock;<EXTERNAL>::std::recursive_mutex::recursive_mutex
- **Files:** [decomp](../decompiled/FUN_7101703b70__7101703b70.c)  [cfg](../decompiled/FUN_7101703b70__7101703b70.mmd)
- **Clone hash:** `946c2ecee3f5f929`

```c

undefined4
FUN_7101703b70(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long ****pppplVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long ***local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined7 local_60;
  undefined1 uStack_59;
  undefined7 uStack_58;
  undefined4 local_44;
  
  lVar11 = DAT_710533a0a0;
  lVar12 = *(long *)(*(long *)(param_1 + 8) + 8);
  uVar5 = FUN_7101739120(*(long *)(lVar12 + 0xb0),1000);
  uVar10 = (undefined4)uVar5;
  uVar5 = FUN_7101739120(*(long *)(lVar12 + 0xb0),0x3e9);
  uVar4 = (undefined4)uVar5;
  *(undefined4 *)(param_1 + 200) = uVar10;
  *(undefined4 *)(param_1 + 0xcc) = uVar4;
  *(undefined4 *)(param_1 + 0xd0) = uVar10;
  *(undefined4 *)(param_1 + 0xe8) = uVar10;
  *(undefined4 *)(param_1 + 0xec) = uVar4;
  *(undefined4 *)(param_1 + 0xf0) = uVar10;
  *(undefined4 *)(param_1 + 0x108) = uVar10;
// ... (456 more lines)
```

