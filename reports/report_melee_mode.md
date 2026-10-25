# melee_mode (funcs=3, hits=5)

Top 50 functions by hit count

## 1. `FUN_7101714c00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101714c00`  (offset `0x1714c00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101714c00(long param_1, long param_2, undefined2 * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6812 bytes / 251 bb / 2 incoming refs
- **Match values:** melee_mode
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

## 2. `FUN_7102144140`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102144140`  (offset `0x2144140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102144140(long param_1)`
- **Size / BBs / Incoming:** 1248 bytes / 4 bb / 2 incoming refs
- **Match values:** melee_mode
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

## 3. `FUN_710170dfb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710170dfb0`  (offset `0x170dfb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710170dfb0(long param_1, long param_2, char * param_3)`
- **Size / BBs / Incoming:** 1588 bytes / 44 bb / 2 incoming refs
- **Match values:** melee_mode
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

