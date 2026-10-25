# melee_rule (funcs=5, hits=7)

Top 50 functions by hit count

## 1. `FUN_7101fa11c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** melee_rule
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

## 2. `FUN_7101714c00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101714c00`  (offset `0x1714c00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101714c00(long param_1, long param_2, undefined2 * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6812 bytes / 251 bb / 2 incoming refs
- **Match values:** melee_rule
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

## 3. `FUN_71020c9380`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020c9380`  (offset `0x20c9380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020c9380(long param_1)`
- **Size / BBs / Incoming:** 2520 bytes / 4 bb / 2 incoming refs
- **Match values:** melee_rule
- **Strings touched:** FighterUtil;set_damage_fly_angle;get_ground_correct_kind_air_trans;get_stick_x_rate;TRANS_A_JUMP_AERIAL;get_stick_y_rate;is_hammer_status;is_hammer_motion;tread_remove_constraint;get_air_ground_touch_info;set_cloud_through_check;check_cloud_through_out;set_ice_effect;set_ice_exit_effect;set_water_dive_effect;calc_water_surface_pos;get_water_area_info;get_team_color;is_miienemy_fighter_kind;adjust_butterflynet;end_butterflynet;gauge_parts_on;adjust_bitten_wario;get_bezier_pos;get_shield_type_of_guard;init_big_small;exec_big_small;exit_big_small;set_hit_data;reset_hit_data;get_effect_team_color;get_handi;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020c9380__71020c9380.c)  [cfg](../decompiled/FUN_71020c9380__71020c9380.mmd)
- **Clone hash:** `9a52585cec2ad2b0`

```c

void FUN_71020c9380(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterUtil",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_damage_fly_angle",(long ****)FUN_71020bcdc0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_ground_correct_kind_air_trans",(long ****)FUN_71020bd260,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_stick_x_rate",(long ****)FUN_71020bd400,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_stick_y_rate",(long ****)FUN_71020bd6a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hammer_status",(long ****)FUN_71020bd940,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hammer_motion",(long ****)FUN_71020bda00,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"tread_remove_constraint",(long ****)FUN_71020bdb00,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_air_ground_touch_info",(long ****)FUN_71020bdca0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_cloud_through_check",(long ****)FUN_71020be0d0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"check_cloud_through_out",(long ****)FUN_71020be220,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_ice_effect",(long ****)FUN_71020be310,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_ice_exit_effect",(long ****)FUN_71020be520,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_water_dive_effect",(long ****)FUN_71020be700,ppppbVar1,in_x4
// ... (185 more lines)
```

## 4. `FUN_710171ff00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710171ff00`  (offset `0x171ff00`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710171ff00(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8224 bytes / 444 bb / 2 incoming refs
- **Match values:** melee_rule
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

## 5. `FUN_710170dfb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710170dfb0`  (offset `0x170dfb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710170dfb0(long param_1, long param_2, char * param_3)`
- **Size / BBs / Incoming:** 1588 bytes / 44 bb / 2 incoming refs
- **Match values:** melee_rule
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

