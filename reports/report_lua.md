# lua (funcs=350, hits=770)

Top 50 functions by hit count

## 1. `FUN_7101f45620`  (hits=98)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** LUA;lua
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

## 2. `FUN_71020ef8c0`  (hits=60)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020ef8c0`  (offset `0x20ef8c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020ef8c0(long param_1)`
- **Size / BBs / Incoming:** 2436 bytes / 61 bb / 2 incoming refs
- **Match values:** lua
- **Strings touched:** GimmickEvent;new_lua_table;store_lua_table;load_from_lua_table;GimmickEventPos;GimmickEventNotify;GimmickEventWarp;GimmickEventBarrel;GimmickEventSpring;GimmickEventPipe;GimmickEventTornadoMoveInfo;GimmickEventTornadoShootInfo;GimmickEventTornadoEscape;GimmickEventLadder;GimmickEventCatch;GimmickEventDrumCheckNeedLock;GimmickEventDrumCheckNeedHide;GimmickEventDrumPos;GimmickEventDrumShake;GimmickEventDrumEscape;GimmickEventDrumRelease;GimmickEventSlashLockInfo;GimmickEventSlashEscape
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020ef8c0__71020ef8c0.c)  [cfg](../decompiled/FUN_71020ef8c0__71020ef8c0.mmd)
- **Clone hash:** `bb0ffa1806d3e748`

```c

void FUN_71020ef8c0(long param_1)

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
  FUN_7103728630(&local_38,param_1,(undefined **)"GimmickEvent",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020d4770,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020d5460,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020d5680,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"GimmickEventPos",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020d5880,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020d66e0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020d6900,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"GimmickEventNotify",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020d6a20,ppppbVar1,in_x4,in_x5,
// ... (215 more lines)
```

## 3. `FUN_7102137e70`  (hits=48)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102137e70`  (offset `0x2137e70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102137e70(long param_1)`
- **Size / BBs / Incoming:** 9332 bytes / 208 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** BattleObjectManager;is_active_find_battle_object;BattleObjectWorld;gravity_speed_coefficient;scale_z;gravity_pos;is_gravity_normal;is_move;move_speed;is_disable_reverse;BattleObjectSlow;rate_request;is_estimate;is_adjust;AreaContactLog;new_lua_table;store_lua_table;load_from_lua_table;LinkEventCapture;LinkEventThrow;ComboModule;reset;clear_setting;count;is_enable_combo_input;DamageTransactorImpl;calc_reaction_frame;GroundUtility;check_dead_area;check_dead_area2;get_degree_gravity;check_ignore_geometry_move_power_stage;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7101fa11c0;FUN_7101fa3990;FUN_7101fc7f30;FUN_7101fcfd60;FUN_7101fea810;FUN_7101ff0700;FUN_7101ff53b0;FUN_7101ff8910;FUN_7101ffcf40;FUN_7102000e80;FUN_710200a5a0;FUN_7102010f10;FUN_71020173c0;FUN_71020271a0;FUN_71020296f0;FUN_710203be10;...
- **Files:** [decomp](../decompiled/FUN_7102137e70__7102137e70.c)  [cfg](../decompiled/FUN_7102137e70__7102137e70.mmd)
- **Clone hash:** `c57706e054d53a86`

```c

void FUN_7102137e70(long param_1)

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
    FUN_7101fa11c0(0);
    FUN_7101fa3990(0);
    FUN_7101fc7f30(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"BattleObjectManager",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_active_find_battle_object",(long ****)FUN_7101fca100,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"BattleObjectWorld",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
    ;
    FUN_7103728bf0(&local_38,(uint *)"gravity_speed_coefficient",(long ****)FUN_7101fca300,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"scale_z",(long ****)FUN_7101fca340,ppppbVar5,in_x4,in_x5,in_x6
// ... (922 more lines)
```

## 4. `FUN_71020fbb90`  (hits=36)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** LUA
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

## 5. `FUN_71020bbbd0`  (hits=18)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020bbbd0`  (offset `0x20bbbd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020bbbd0(long param_1)`
- **Size / BBs / Incoming:** 756 bytes / 19 bb / 2 incoming refs
- **Match values:** lua
- **Strings touched:** LinkEventFinal;new_lua_table;store_lua_table;load_from_lua_table;LinkEventStarShot;LinkEventCapturePulled;LinkEventCaptureItem;LinkEventCaptureMimikkyu;LinkEventCaptureDriver
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020bbbd0__71020bbbd0.c)  [cfg](../decompiled/FUN_71020bbbd0__71020bbbd0.mmd)
- **Clone hash:** `4308ca730d0f76f1`

```c

void FUN_71020bbbd0(long param_1)

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
  FUN_7103728630(&local_38,param_1,(undefined **)"LinkEventFinal",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                );
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020b1950,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020b3480,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020b36a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"LinkEventStarShot",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020b38d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020b45d0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020b47f0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"LinkEventCapturePulled",0xfffffffd,in_x4,in_x5,
                 in_x6,in_x7);
// ... (48 more lines)
```

## 6. `FUN_7103905ad0`  (hits=17)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103905ad0`  (offset `0x3905ad0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7103905ad0(long param_1)`
- **Size / BBs / Incoming:** 2000 bytes / 45 bb / 1 incoming refs
- **Match values:** lua;LUA;Lua
- **Strings touched:** searchers;LUA_PATH_5_3;LUA_PATH;/usr/local/share/lua/5.3/?.lua;/usr/local/share/lua/5.3/?/init.lua;/usr/local/lib/lua/5.3/?.lua;/usr/local/lib/lua/5.3/?/init.lua;./?.lua;./?/init.lua;cpath;LUA_CPATH_5_3;plate_side;LUA_CPATH;/usr/local/lib/lua/5.3/?.so;/usr/local/lib/lua/5.3/loadall.so;./?.so;/
;
?
!
-
;config;_LOADED;loaded;_PRELOAD;preload;multiple Lua VMs detected
- **Callees:** FUN_71038f4b20;FUN_71038f5390;FUN_71038f5a50;FUN_71038f5c00;FUN_71038f6c50;FUN_71038f9510;FUN_71038f9a30;FUN_71038fb3c0;FUN_71038fec40;FUN_71039004f0;FUN_7103906d30;FUN_710391d4c0;FUN_710391d940;FUN_710391dde0;FUN_710391e050
- **Files:** [decomp](../decompiled/FUN_7103905ad0__7103905ad0.c)  [cfg](../decompiled/FUN_7103905ad0__7103905ad0.mmd)
- **Clone hash:** `9ec6950e9c4aa586`

```c

undefined8 FUN_7103905ad0(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  char *pcVar9;
  undefined8 in_x4;
  char *pcVar10;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *local_40;
  undefined4 local_38;
  
  ppuVar8 = &local_40;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar4 = FUN_710391e050(param_1);
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  *puVar11 = uVar4;
  *(undefined4 *)(puVar11 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar5 = FUN_710391e050(param_1);
  plVar12 = *(long **)(param_1 + 0x10);
  *plVar12 = lVar5;
// ... (246 more lines)
```

## 7. `FUN_71037f8180`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** lua
- **Strings touched:** nvnDeviceBuilderSetDefaults;nvnDeviceBuilderSetFlags;nvnDeviceBuilderGetFlags;nvnDeviceInitialize;nvnDeviceFinalize;nvnDeviceSetDebugLabel;nvnDeviceGetProcAddress;nvnDeviceGetInteger;nvnDeviceGetCurrentTimestampInNanoseconds;nvnDeviceSetIntermediateShaderCache;nvnDeviceGetTextureHandle;nvnDeviceGetTexelFetchHandle;nvnDeviceGetImageHandle;nvnDeviceInstallDebugCallback;nvnDeviceGenerateDebugDomainId;chara/chara_4/chara_4_;nvnDeviceSetWindowOriginMode;nvnDeviceSetDepthMode;nvnDeviceRegisterFastClearColor;nvnDeviceRegisterFastClearColori;nvnDeviceRegisterFastClearColorui;nvnDeviceRegisterFastClearDepth;nvnDeviceGetWindowOriginMode;nvnDeviceGetDepthMode;nvnDeviceGetTimestampInNanoseconds;nvnDeviceApplyDeferredFinalizes;nvnDeviceFinalizeCommandHandle;nvnDeviceWalkDebugDatabase;nvnDeviceGetSeparateTextureHandle;nvnDeviceGetSeparateSamplerHandle;nvnDeviceIsExternalDebuggerAttached;dys_yoga03_l_03_set;...
- **Callers:** FUN_71037fb770;FUN_71037fe8c0
- **Files:** [decomp](../decompiled/FUN_71037f8180__71037f8180.c)  [cfg](../decompiled/FUN_71037f8180__71037f8180.mmd)
- **Clone hash:** `5e5bcf3c984ab2cc`

```c

void FUN_71037f8180(undefined8 param_1,undefined *param_2)

{
  DAT_71059408e8 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetDefaults");
  DAT_71059408f0 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetFlags");
  DAT_71059408f8 = (*(code *)param_2)(param_1,"nvnDeviceBuilderGetFlags");
  DAT_7105940900 = (*(code *)param_2)(param_1,"nvnDeviceInitialize");
  DAT_7105940908 = (*(code *)param_2)(param_1,"nvnDeviceFinalize");
  DAT_7105940910 = (*(code *)param_2)(param_1,"nvnDeviceSetDebugLabel");
  DAT_7105940918 = (*(code *)param_2)(param_1,"nvnDeviceGetProcAddress");
  DAT_7105940920 = (*(code *)param_2)(param_1,"nvnDeviceGetInteger");
  DAT_7105940928 = (*(code *)param_2)(param_1,"nvnDeviceGetCurrentTimestampInNanoseconds");
  DAT_7105940930 = (*(code *)param_2)(param_1,"nvnDeviceSetIntermediateShaderCache");
  DAT_7105940938 = (*(code *)param_2)(param_1,"nvnDeviceGetTextureHandle");
  DAT_7105940940 = (*(code *)param_2)(param_1,"nvnDeviceGetTexelFetchHandle");
  DAT_7105940948 = (*(code *)param_2)(param_1,"nvnDeviceGetImageHandle");
  DAT_7105940950 = (*(code *)param_2)(param_1,"nvnDeviceInstallDebugCallback");
  DAT_7105940958 = (*(code *)param_2)(param_1,"nvnDeviceGenerateDebugDomainId");
  DAT_7105940960 = (*(code *)param_2)(param_1,"nvnDeviceSetWindowOriginMode");
  DAT_7105940968 = (*(code *)param_2)(param_1,"nvnDeviceSetDepthMode");
  DAT_7105940970 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColor");
  DAT_7105940978 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColori");
  DAT_7105940980 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColorui");
  DAT_7105940988 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearDepth");
  DAT_7105940990 = (*(code *)param_2)(param_1,"nvnDeviceGetWindowOriginMode");
  DAT_7105940998 = (*(code *)param_2)(param_1,"nvnDeviceGetDepthMode");
  DAT_71059409a0 = (*(code *)param_2)(param_1,"nvnDeviceGetTimestampInNanoseconds");
  DAT_71059409a8 = (*(code *)param_2)(param_1,"nvnDeviceApplyDeferredFinalizes");
  DAT_71059409b0 = (*(code *)param_2)(param_1,"nvnDeviceFinalizeCommandHandle");
  DAT_71059409b8 = (*(code *)param_2)(param_1,"nvnDeviceWalkDebugDatabase");
  DAT_71059409c0 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateTextureHandle");
  DAT_71059409c8 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateSamplerHandle");
  DAT_71059409d0 = (*(code *)param_2)(param_1,"nvnDeviceIsExternalDebuggerAttached");
  DAT_71059409d8 = (*(code *)param_2)(param_1,"nvnQueueGetError");
  DAT_71059409e0 = (*(code *)param_2)(param_1,"nvnQueueGetTotalCommandMemoryUsed");
  DAT_71059409e8 = (*(code *)param_2)(param_1,"nvnQueueGetTotalControlMemoryUsed");
  DAT_71059409f0 = (*(code *)param_2)(param_1,"nvnQueueGetTotalComputeMemoryUsed");
  DAT_71059409f8 = (*(code *)param_2)(param_1,"nvnQueueResetMemoryUsageCounts");
  DAT_7105940a00 = (*(code *)param_2)(param_1,"nvnQueueBuilderSetDevice");
// ... (483 more lines)
```

## 8. `FUN_7100033a40`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** lua
- **Strings touched:** nvnDeviceBuilderSetDefaults;nvnDeviceBuilderSetFlags;nvnDeviceBuilderGetFlags;nvnDeviceInitialize;nvnDeviceFinalize;nvnDeviceSetDebugLabel;nvnDeviceGetProcAddress;nvnDeviceGetInteger;nvnDeviceGetCurrentTimestampInNanoseconds;nvnDeviceSetIntermediateShaderCache;nvnDeviceGetTextureHandle;nvnDeviceGetTexelFetchHandle;nvnDeviceGetImageHandle;nvnDeviceInstallDebugCallback;nvnDeviceGenerateDebugDomainId;chara/chara_4/chara_4_;nvnDeviceSetWindowOriginMode;nvnDeviceSetDepthMode;nvnDeviceRegisterFastClearColor;nvnDeviceRegisterFastClearColori;nvnDeviceRegisterFastClearColorui;nvnDeviceRegisterFastClearDepth;nvnDeviceGetWindowOriginMode;nvnDeviceGetDepthMode;nvnDeviceGetTimestampInNanoseconds;nvnDeviceApplyDeferredFinalizes;nvnDeviceFinalizeCommandHandle;nvnDeviceWalkDebugDatabase;nvnDeviceGetSeparateTextureHandle;nvnDeviceGetSeparateSamplerHandle;nvnDeviceIsExternalDebuggerAttached;dys_yoga03_l_03_set;...
- **Callers:** FUN_71037fb770;FUN_71037fe8c0
- **Files:** [decomp](../decompiled/FUN_7100033a40__7100033a40.c)  [cfg](../decompiled/FUN_7100033a40__7100033a40.mmd)
- **Clone hash:** `f1d8c7f827926111`

```c

void FUN_7100033a40(undefined8 param_1,undefined *param_2)

{
  DAT_71052aa310 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetDefaults");
  DAT_71052aa318 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetFlags");
  DAT_71052aa320 = (*(code *)param_2)(param_1,"nvnDeviceBuilderGetFlags");
  DAT_71052aa328 = (*(code *)param_2)(param_1,"nvnDeviceInitialize");
  DAT_71052aa330 = (*(code *)param_2)(param_1,"nvnDeviceFinalize");
  DAT_71052aa338 = (*(code *)param_2)(param_1,"nvnDeviceSetDebugLabel");
  DAT_71052aa340 = (*(code *)param_2)(param_1,"nvnDeviceGetProcAddress");
  DAT_71052aa348 = (*(code *)param_2)(param_1,"nvnDeviceGetInteger");
  DAT_71052aa350 = (*(code *)param_2)(param_1,"nvnDeviceGetCurrentTimestampInNanoseconds");
  DAT_71052aa358 = (*(code *)param_2)(param_1,"nvnDeviceSetIntermediateShaderCache");
  DAT_71052aa360 = (*(code *)param_2)(param_1,"nvnDeviceGetTextureHandle");
  DAT_71052aa368 = (*(code *)param_2)(param_1,"nvnDeviceGetTexelFetchHandle");
  DAT_71052aa370 = (*(code *)param_2)(param_1,"nvnDeviceGetImageHandle");
  DAT_71052aa378 = (*(code *)param_2)(param_1,"nvnDeviceInstallDebugCallback");
  DAT_71052aa380 = (*(code *)param_2)(param_1,"nvnDeviceGenerateDebugDomainId");
  DAT_71052aa388 = (*(code *)param_2)(param_1,"nvnDeviceSetWindowOriginMode");
  DAT_71052aa390 = (*(code *)param_2)(param_1,"nvnDeviceSetDepthMode");
  DAT_71052aa398 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColor");
  DAT_71052aa3a0 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColori");
  DAT_71052aa3a8 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColorui");
  DAT_71052aa3b0 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearDepth");
  DAT_71052aa3b8 = (*(code *)param_2)(param_1,"nvnDeviceGetWindowOriginMode");
  DAT_71052aa3c0 = (*(code *)param_2)(param_1,"nvnDeviceGetDepthMode");
  DAT_71052aa3c8 = (*(code *)param_2)(param_1,"nvnDeviceGetTimestampInNanoseconds");
  DAT_71052aa3d0 = (*(code *)param_2)(param_1,"nvnDeviceApplyDeferredFinalizes");
  DAT_71052aa3d8 = (*(code *)param_2)(param_1,"nvnDeviceFinalizeCommandHandle");
  DAT_71052aa3e0 = (*(code *)param_2)(param_1,"nvnDeviceWalkDebugDatabase");
  DAT_71052aa3e8 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateTextureHandle");
  DAT_71052aa3f0 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateSamplerHandle");
  DAT_71052aa3f8 = (*(code *)param_2)(param_1,"nvnDeviceIsExternalDebuggerAttached");
  DAT_71052aa400 = (*(code *)param_2)(param_1,"nvnQueueGetError");
  DAT_71052aa408 = (*(code *)param_2)(param_1,"nvnQueueGetTotalCommandMemoryUsed");
  DAT_71052aa410 = (*(code *)param_2)(param_1,"nvnQueueGetTotalControlMemoryUsed");
  DAT_71052aa418 = (*(code *)param_2)(param_1,"nvnQueueGetTotalComputeMemoryUsed");
  DAT_71052aa420 = (*(code *)param_2)(param_1,"nvnQueueResetMemoryUsageCounts");
  DAT_71052aa428 = (*(code *)param_2)(param_1,"nvnQueueBuilderSetDevice");
// ... (483 more lines)
```

## 9. `FUN_7101b2a1f0`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b2a1f0`  (offset `0x1b2a1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b2a1f0(void)`
- **Size / BBs / Incoming:** 30364 bytes / 1105 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** preview_1_00;preview_2_00;preview_3_00;arrows;header_tips;btn_back;set_parts_txt_head_00;set_txt_mode;set_txt_scene;mnu_header_arrow;header_stage;set_hand_%02d;set_preview_st_0%d;set_txt_num_medal;mel_stage_select_art_n;un_decide;off_atteintion;anim_stage_select;set_parts_btn_stage;view_stage;icon_normal;color_able_shortcut;unable_shortcut;blink_on;set_parts_btn_music;view_music;icon_music;player_color_%dp;view_rep_stage;set_rep_stage;set_parts_n_stage_%03d;view_random;...
- **Callers:** FUN_7101b3b1d0
- **Callees:** FUN_71000001c0;FUN_7100058250;FUN_7100058290;FUN_71003a4ca0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7101748070;FUN_7101764000;FUN_7101b260a0;FUN_7101b2a000;FUN_7101b31890;FUN_7101b31a10;FUN_7101b323a0;FUN_7101b32b00;FUN_7101b37740;FUN_7101b38160;FUN_7101b38ac0;...
- **Files:** [cfg](../decompiled/FUN_7101b2a1f0__7101b2a1f0.mmd)


## 10. `FUN_7101744340`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101744340`  (offset `0x1744340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101744340(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6768 bytes / 29 bb / 2 incoming refs
- **Match values:** lua
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

## 11. `FUN_7102056920`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102056920`  (offset `0x2056920`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102056920(long param_1)`
- **Size / BBs / Incoming:** 396 bytes / 10 bb / 2 incoming refs
- **Match values:** lua
- **Strings touched:** LinkEvent;new_lua_table;store_lua_table;load_from_lua_table;gauge_parts_on;LinkEventPos;LinkEventMask
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102056920__7102056920.c)  [cfg](../decompiled/FUN_7102056920__7102056920.mmd)
- **Clone hash:** `4e10497f8d8d3652`

```c

void FUN_7102056920(long param_1)

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
  FUN_7103728630(&local_38,param_1,(undefined **)"LinkEvent",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020542d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7102054380,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020545a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"LinkEventPos",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020547b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7102055630,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7102055850,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"LinkEventMask",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_7102055a60,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
// ... (10 more lines)
```

## 12. `FUN_710134f5c0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710134f5c0`  (offset `0x134f5c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710134f5c0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 22424 bytes / 1006 bb / 6 incoming refs
- **Match values:** lua
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

## 13. `FUN_71020173c0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020173c0`  (offset `0x20173c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020173c0(long param_1)`
- **Size / BBs / Incoming:** 276 bytes / 7 bb / 2 incoming refs
- **Match values:** lua
- **Strings touched:** DamageInfo;new_lua_table;store_lua_table;load_from_lua_table;DamageLog
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020173c0__71020173c0.c)  [cfg](../decompiled/FUN_71020173c0__71020173c0.mmd)
- **Clone hash:** `b8cab22b15c8bf47`

```c

void FUN_71020173c0(long param_1)

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
  FUN_7103728630(&local_38,param_1,(undefined **)"DamageInfo",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020124f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7102012b80,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7102012d90,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"DamageLog",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_7102015440,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7102015590,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020157a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  return;
}


```

## 14. `FUN_7101a36120`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a36120`  (offset `0x1a36120`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a36120(long param_1, undefined8 param_2, long * * * * param_3, long * * * * * * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7900 bytes / 309 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** change;decide;mel_player_n;mel_chara_select_lv_n;cp_level_%d;subwindow_%dp_on;select_off;subwindow_on
- **Callers:** FUN_7101a32080
- **Callees:** FUN_71019e6570;FUN_71019f08a0;FUN_71019f11d0;FUN_7101a35300;FUN_7101a35900;FUN_7101a38000;FUN_7101a38310;FUN_7101a386c0;FUN_7101a38d80;FUN_7101a38fd0;FUN_7101a395f0;FUN_7101a397a0;FUN_7101a39930;FUN_7101a39c20;FUN_7101a42ba0;FUN_7101a48700;...
- **Files:** [decomp](../decompiled/FUN_7101a36120__7101a36120.c)  [cfg](../decompiled/FUN_7101a36120__7101a36120.mmd)
- **Clone hash:** `3fdbd91fc1544c6f`

```c

void FUN_7101a36120(long param_1,undefined8 param_2,long ****param_3,long *********param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  long ****pppplVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long ***ppplVar7;
  long *********ppppppppplVar8;
  undefined1 *puVar9;
  void *__dest;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar10;
  undefined8 extraout_x1_01;
  byte ****ppppbVar11;
  int iVar12;
  long **pplVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long **pplVar17;
  long ***ppplVar18;
  long lVar19;
  undefined4 *puVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long ****pppplVar24;
  uint uVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  ulong uVar29;
  long **pplVar30;
  long ****pppplVar31;
// ... (1008 more lines)
```

## 15. `FUN_71020f2800`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020f2800`  (offset `0x20f2800`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020f2800(long param_1)`
- **Size / BBs / Incoming:** 276 bytes / 7 bb / 2 incoming refs
- **Match values:** lua
- **Strings touched:** Rhombus2;new_lua_table;store_lua_table;load_from_lua_table;Circle
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020f2800__71020f2800.c)  [cfg](../decompiled/FUN_71020f2800__71020f2800.mmd)
- **Clone hash:** `61336d273ffd1ed7`

```c

void FUN_71020f2800(long param_1)

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
  FUN_7103728630(&local_38,param_1,(undefined **)"Rhombus2",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020f0ec0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020f0f50,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020f1160,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"Circle",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020f1f30,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020f20d0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020f24c0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  return;
}


```

## 16. `FUN_7101ff0700`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ff0700`  (offset `0x1ff0700`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ff0700(long param_1)`
- **Size / BBs / Incoming:** 276 bytes / 7 bb / 2 incoming refs
- **Match values:** lua
- **Strings touched:** AttackAbsoluteData;new_lua_table;store_lua_table;load_from_lua_table;AttackData
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101ff0700__7101ff0700.c)  [cfg](../decompiled/FUN_7101ff0700__7101ff0700.mmd)
- **Clone hash:** `08edbea40e49671c`

```c

void FUN_7101ff0700(long param_1)

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
  FUN_7103728630(&local_38,param_1,(undefined **)"AttackAbsoluteData",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_7101fec930,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7101fecd50,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7101fecf50,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"AttackData",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_7101ff0290,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_7101ff0410,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_7101ff0620,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  return;
}


```

## 17. `FUN_7101b11bd0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b11bd0`  (offset `0x1b11bd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b11bd0(long param_1, ulong * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10176 bytes / 411 bb / 7 incoming refs
- **Match values:** lua
- **Strings touched:** music_pic_series;size_m;set_parts_text_scroll;prize_goods;set_parts_atr_class;hidden;bg_mii_item;set_txt_num;set_txt_num_sdw;bg_music;bgm_title_%s;nam_goods_%s;bg_spirits_item;bg_spirits_energy;num_hide;new_show;new_hide;set_parts_gold_sp;anim_00;prize_gold;bg_gold;bg_standard_ticket;prize_sp;bg_sp;volume_l;volume_s;bg_skill_ball;set_parts_%02d;mnu_reward_item_n;num_show;volume_m;prize_spirit;...
- **Callers:** FUN_7101b02410;FUN_7101b16690
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_7101b11920;FUN_7101b14390;FUN_71032570e0;FUN_71032575c0;FUN_710327cd40;FUN_710327d3b0;FUN_710327d930;FUN_71032817a0;FUN_7103284890;FUN_7103284fe0;FUN_71032853d0;FUN_71032888e0;FUN_7103289030;FUN_7103289420;...
- **Files:** [decomp](../decompiled/FUN_7101b11bd0__7101b11bd0.c)  [cfg](../decompiled/FUN_7101b11bd0__7101b11bd0.mmd)
- **Clone hash:** `6d89b1142cfaea01`

```c

void FUN_7101b11bd0(long param_1,ulong *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined2 *puVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  undefined6 uVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 uVar16;
  char *pcVar17;
  undefined8 uVar18;
  ulong *puVar19;
  long *********ppppppppplVar20;
  byte ****ppppbVar21;
  int iVar22;
  long *plVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long *plVar32;
  long *plVar33;
  int iVar34;
  long ********apppppppplStack_250 [9];
// ... (1680 more lines)
```

## 18. `FUN_710183be60`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710183be60`  (offset `0x183be60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710183be60(void)`
- **Size / BBs / Incoming:** 41020 bytes / 1781 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** mode_empty_03;count_5vs5;controller_out;set_btn_01_back;set_txt_back_01;set_txt_back_00;mel_return_02;mel_over_return_02;mel_return_00;mel_over_return_00;set_btn_ready;set_parts_balloon_rule;selector_0;set_btn_03_rule;controller_in;bg_anime;chara_bg_color_01;chara_bg_color_00;selector;set_part_vs_3;set_part_vs_5;selector_1;set_btn_back;set_cursor_area;set_medal_area;back_btn_long;set_btn_02_title;txt_pos_normal;set_txt_title_00;title_on;headcount_off;day_off;...
- **Callers:** FUN_7101846880
- **Callees:** FUN_71000001c0;FUN_7101684280;FUN_7101686610;FUN_710168eb40;FUN_71016ea290;FUN_71016f6340;FUN_7101764000;FUN_7101797560;FUN_710179a080;FUN_710179ed00;FUN_7101838d70;FUN_710183bb20;FUN_71019e5610;FUN_71019e6eb0;FUN_71019e8720;FUN_71019e90c0;...
- **Files:** [cfg](../decompiled/FUN_710183be60__710183be60.mmd)


## 19. `FUN_71000db590`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000db590`  (offset `0xdb590`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000db590(int * param_1, long param_2, int * param_3)`
- **Size / BBs / Incoming:** 1220 bytes / 44 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** %016llx
- **Callees:** FUN_71000b4160;FUN_71000bce50;FUN_71000c36b0;FUN_71000eba40;FUN_7100148d80;FUN_7100148da0;FUN_71001b1820;FUN_71001b2f70;FUN_71001b47e0;FUN_71001b4910;FUN_710024e400;<EXTERNAL>::nn::util::SNPrintf;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000db590__71000db590.c)  [cfg](../decompiled/FUN_71000db590__71000db590.mmd)
- **Clone hash:** `0fab95e8a07fb5c7`

```c

void FUN_71000db590(int *param_1,long param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined **local_d0;
  undefined1 local_c8 [16];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    local_a8 = 0x10c07;
    goto LAB_71000db5f8;
  }
  if ((*(long *)(param_2 + 0x2c0) != 0) || (*(int *)(param_2 + 0x154) == 1)) {
    local_a8 = 0x10c08;
    goto LAB_71000db5f8;
  }
  *(int **)(param_2 + 0x2c0) = param_3;
  if (((DAT_71052adb38 != 0) && (uVar4 = FUN_7100148da0(DAT_71052adb38), 1 < ((uint)uVar4 & 0xff)))
     && (uVar5 = FUN_7100148d80(DAT_71052adb38), (uVar5 & 1) != 0)) {
    uVar4 = FUN_7100148da0(DAT_71052adb38);
    if (*(long **)(param_2 + 0x60) == (long *)0x0) {
LAB_71000db6b4:
      iVar1 = 0;
      plVar8 = *(long **)(param_2 + 0x68);
    }
    else {
      lVar6 = (**(code **)(**(long **)(param_2 + 0x60) + 0x18))();
      lVar7 = FUN_71000c36b0(DAT_71052acd90);
      if (lVar6 == lVar7) goto LAB_71000db6b4;
// ... (148 more lines)
```

## 20. `FUN_71000de710`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000de710`  (offset `0xde710`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000de710(int * param_1, long param_2, int * param_3, undefined4 param_4)`
- **Size / BBs / Incoming:** 1248 bytes / 44 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** %016llx
- **Callees:** FUN_71000b4160;FUN_71000bce50;FUN_71000c36b0;FUN_71000eba40;FUN_7100148d80;FUN_7100148da0;FUN_71001b1820;FUN_71001b2f70;FUN_71001b47e0;FUN_71001b4910;FUN_710024e600;<EXTERNAL>::nn::util::SNPrintf;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000de710__71000de710.c)  [cfg](../decompiled/FUN_71000de710__71000de710.mmd)
- **Clone hash:** `810c7e698e275df8`

```c

void FUN_71000de710(int *param_1,long param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined **local_d0;
  undefined1 local_c8 [16];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    local_a8 = 0x10c07;
    goto LAB_71000de77c;
  }
  if ((*(long *)(param_2 + 0x2c0) != 0) || (*(int *)(param_2 + 0x154) == 1)) {
    local_a8 = 0x10c08;
    goto LAB_71000de77c;
  }
  *(int **)(param_2 + 0x2c0) = param_3;
  *(undefined4 *)(*(long *)(param_2 + 200) + 0xc) = param_4;
  if (((DAT_71052adb38 != 0) && (uVar4 = FUN_7100148da0(DAT_71052adb38), 1 < ((uint)uVar4 & 0xff)))
     && (uVar5 = FUN_7100148d80(DAT_71052adb38), (uVar5 & 1) != 0)) {
    uVar4 = FUN_7100148da0(DAT_71052adb38);
    if (*(long **)(param_2 + 0x60) == (long *)0x0) {
LAB_71000de840:
      iVar1 = 0;
      plVar8 = *(long **)(param_2 + 0x68);
    }
    else {
      lVar6 = (**(code **)(**(long **)(param_2 + 0x60) + 0x18))();
      lVar7 = FUN_71000c36b0(DAT_71052acd90);
// ... (152 more lines)
```

## 21. `FUN_71000d7eb0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d7eb0`  (offset `0xd7eb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d7eb0(void)`
- **Size / BBs / Incoming:** 1248 bytes / 45 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** %016llx
- **Callees:** FUN_71000b4160;FUN_71000bce50;FUN_71000c36b0;FUN_71000eba40;FUN_7100148d80;FUN_7100148da0;FUN_71001b1820;FUN_71001b2f70;FUN_71001b47e0;FUN_71001b4910;FUN_710024e200;<EXTERNAL>::nn::util::SNPrintf;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000d7eb0__71000d7eb0.c)  [cfg](../decompiled/FUN_71000d7eb0__71000d7eb0.mmd)
- **Clone hash:** `d731a36a5f69a21d`

```c

void FUN_71000d7eb0(int *param_1,long param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    uStack_a8 = 0x10c07;
    goto LAB_71000d82ec;
  }
  if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
    if (DAT_71052adb38 != 0) {
      uVar4 = FUN_7100148da0(DAT_71052adb38);
      if ((1 < ((uint)uVar4 & 0xff)) && (uVar5 = FUN_7100148d80(DAT_71052adb38), (uVar5 & 1) != 0))
      {
        uVar4 = FUN_7100148da0(DAT_71052adb38);
        if (*(long **)(param_2 + 0x60) == (long *)0x0) {
LAB_71000d7f78:
          iVar1 = 0;
          plVar8 = *(long **)(param_2 + 0x68);
        }
        else {
          lVar6 = (**(code **)(**(long **)(param_2 + 0x60) + 0x18))();
          lVar7 = FUN_71000c36b0(DAT_71052acd90);
          if (lVar6 == lVar7) goto LAB_71000d7f78;
          plVar9 = *(long **)(param_2 + 0x128);
          plVar8 = FUN_71001b1820(0x18);
// ... (157 more lines)
```

## 22. `FUN_71038fcce0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038fcce0`  (offset `0x38fcce0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71038fcce0(long param_1, undefined8 * param_2)`
- **Size / BBs / Incoming:** 2368 bytes / 135 bb / 1 incoming refs
- **Match values:** Lua;lua
- **Strings touched:** binary string;select_item;truncated;not a;version mismatch in;format mismatch in;corrupted;%s size mismatch in;NODE_PRE_REFRACT_BLEND;size_t;Instruction;lua_Integer;dys_yoga03_l_03_set;lua_Number;endianness mismatch in;float format mismatch in;attempt to load a %s chunk (mode is '%s');chara/chara_4/chara_4_;binary
- **Callees:** FUN_71038fb3c0;FUN_71038fb6f0;FUN_71038fdf10;FUN_71038fe0c0;FUN_71039004f0;FUN_7103908660;FUN_71039086e0;FUN_71039204f0;FUN_7103920530;<EXTERNAL>::strchr;<EXTERNAL>::memcpy;<EXTERNAL>::memcmp;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_71038fcce0__71038fcce0.c)  [cfg](../decompiled/FUN_71038fcce0__71038fcce0.mmd)
- **Clone hash:** `d56284b59fc61300`

```c

void FUN_71038fcce0(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  float *pfVar9;
  size_t sVar10;
  uint uVar11;
  long *plVar12;
  char *pcVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long local_78;
  ulong *local_70;
  char *pcStack_68;
  ulong local_60 [2];
  float local_48;
  undefined4 uStack_44;
  
  lVar7 = *(long *)*param_2;
  *(long *)*param_2 = lVar7 + -1;
  plVar12 = (long *)*param_2;
  if (lVar7 == 0) {
    pbVar5 = (byte *)(*(code *)plVar12[2])(plVar12[4],plVar12[3],&local_78);
    if (pbVar5 == (byte *)0x0 || local_78 == 0) {
      uVar11 = 0xffffffff;
    }
    else {
      *plVar12 = local_78 + -1;
      plVar12[1] = (long)(pbVar5 + 1);
      uVar11 = (uint)*pbVar5;
    }
// ... (412 more lines)
```

## 23. `FUN_710225b990`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** LUA
- **Strings touched:** FIGHTER_WIIFIT_STATUS_KIND_PREV;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_HOLD;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_SHOOT;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_JUMP_CANCEL;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_END;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_JUMP;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_HEADING;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_JUMP;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_END;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_BREATH;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_SUCCESS;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_FAILURE;FIGHTER_WIIFIT_STATUS_KIND_FINAL_HOLD;FIGHTER_WIIFIT_STATUS_KIND_FINAL_END;FIGHTER_WIIFIT_STATUS_KIND_NUM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_START;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_THROW;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_TERM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_START;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_CHARGE_FRAME;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_TARGET_NUM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_MAX_HOLD_COUNT;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_NEXT_STATUS;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_TERM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLOAT_START;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLOAT_TERM;PACMAN_SPECIAL_N_ITEM_KIND_NUM;PACMAN_SPECIAL_N_ITEM_MAX_NUM;PACMAN_SPECIAL_N_RANK_MIN;PACMAN_SPECIAL_N_RANK_MAX;PACMAN_SPECIAL_N_RANK_NUM;...
- **Callers:** FUN_710226f500
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710225b990__710225b990.c)  [cfg](../decompiled/FUN_710225b990__710225b990.mmd)
- **Clone hash:** `32c74e885489c363`

```c

void FUN_710225b990(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long local_78;
  long local_70;
  int local_68;
  
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_PREV",(undefined **)&DAT_000001e0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_HOLD",(undefined **)0x1e1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_SHOOT",
                 (undefined **)&DAT_000001e2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL",(undefined **)0x1e3
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_JUMP_CANCEL",
                 (undefined **)0x1e4,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_END",(undefined **)0x1e5,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_JUMP",(undefined **)0x1e6,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_HEADING",
                 (undefined **)0x1e7,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_JUMP",
                 (undefined **)&DAT_000001e8,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_END",(undefined **)0x1e9,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_BREATH",
                 (undefined **)0x1ea,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_SUCCESS",
                 (undefined **)0x1eb,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_FAILURE",
                 (undefined **)0x1ec,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_FINAL_HOLD",
                 (undefined **)&DAT_000001ed,param_4,param_5,param_6,param_7,param_8);
// ... (7200 more lines)
```

## 24. `FUN_7101a26200`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a26200`  (offset `0x1a26200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a26200(long param_1, uint param_2, long * * * * * * * * * * * param_3, long * * * * * * * * * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2312 bytes / 108 bb / 5 incoming refs
- **Match values:** lua
- **Strings touched:** player_number_%dp;kumite_player_number_%dp;controller_entry_on;controller_entry_off;set_lct_controller_entry;btn_anim;headcount_on;headcount_off;window_l;set_%d;set_parts_controller_res;disconnect_off;standard_player_%dp
- **Callers:** FUN_7101a20200;FUN_7101a26b10;FUN_7101a2b570;FUN_7101a31020
- **Callees:** FUN_71003a4ca0;FUN_71019e90c0;FUN_71019ea0a0;FUN_71019eade0;FUN_71019f2980;FUN_71019fa350;FUN_71019fce50;FUN_7101a06380;FUN_7101a06ef0;FUN_7101a0f680;FUN_7101a1b4a0;FUN_7101a1e660;FUN_7101a1e860;FUN_7101a1e9b0;FUN_7101a1f0b0;FUN_7101a27570;...
- **Files:** [decomp](../decompiled/FUN_7101a26200__7101a26200.c)  [cfg](../decompiled/FUN_7101a26200__7101a26200.mmd)
- **Clone hash:** `b9fb1ee13a2c2e32`

```c

void FUN_7101a26200(long param_1,uint param_2,long ***********param_3,long ************param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar5;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  long ***********ppppppppppplVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  undefined *puVar20;
  ulong uVar21;
  long ***********local_118;
  undefined8 local_110;
// ... (414 more lines)
```

## 25. `FUN_7101a568e0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a568e0`  (offset `0x1a568e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a568e0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2840 bytes / 98 bb / 2 incoming refs
- **Match values:** lua
- **Strings touched:** fp_level_off;change;decide;mel_chara_select_lv_n;cp_level_%d;controller_off
- **Callers:** FUN_7101a4e880
- **Callees:** FUN_71017abd00;FUN_71019fc7a0;FUN_71019fd0b0;FUN_7101a000c0;FUN_7101a024c0;FUN_7101a028b0;FUN_7101a029b0;FUN_7101a02cb0;FUN_7101a06920;FUN_7101a07770;FUN_7101a54360;FUN_7101a54a30;FUN_7101a57400;FUN_7103263030;FUN_71032631a0;FUN_7103778300;...
- **Files:** [decomp](../decompiled/FUN_7101a568e0__7101a568e0.c)  [cfg](../decompiled/FUN_7101a568e0__7101a568e0.mmd)
- **Clone hash:** `b6cad397912f819d`

```c

void FUN_7101a568e0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar8;
  undefined8 extraout_x1_05;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *********ppppppppplVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68 [2];
  
  plVar16 = (long *)(param_2 + 8);
  lVar5 = *plVar16;
  uVar1 = *(uint *)(lVar5 + 0x1f8);
  uVar14 = (uint)param_3;
  if (*(int *)(lVar5 + 0x5d0) == 0) {
    if (uVar14 == 0) {
      uVar14 = 1;
    }
// ... (331 more lines)
```

## 26. `FUN_7101a41230`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a41230`  (offset `0x1a41230`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a41230(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2312 bytes / 96 bb / 2 incoming refs
- **Match values:** lua
- **Strings touched:** change;decide;mel_chara_select_lv_n;cp_level_%d;mel_chara_select_fp_lv_n;set_txt_chara_name
- **Callers:** FUN_7101837cf0;FUN_7101a41ce0
- **Callees:** FUN_71015547e0;FUN_71016b6a10;FUN_7101a0d0d0;FUN_7101a3a120;FUN_7101a42170;FUN_7101a42ba0;FUN_7101a44850;FUN_7101a452f0;FUN_7101a453d0;FUN_7101a489d0;FUN_7101a48ae0;FUN_7101a4a800;FUN_7101a4da60;FUN_71032632a0;FUN_7103263a30;FUN_7103265e70;...
- **Files:** [decomp](../decompiled/FUN_7101a41230__7101a41230.c)  [cfg](../decompiled/FUN_7101a41230__7101a41230.mmd)
- **Clone hash:** `d996283acf3544f4`

```c

void FUN_7101a41230(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long *********ppppppppplVar8;
  byte ****ppppbVar9;
  long ****pppplVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uStack_228;
  uint local_220;
  undefined1 *local_218;
  long *********local_210;
  byte local_208;
  byte local_207;
  byte local_138;
  byte local_a8;
  ushort auStack_9a [9];
  undefined **local_88;
  ulong local_80;
  
// ... (302 more lines)
```

## 27. `FUN_71017dfe10`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017dfe10`  (offset `0x17dfe10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71017dfe10(byte * param_1, uint param_2, undefined8 param_3, ulong param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2536 bytes / 150 bb / 9 incoming refs
- **Match values:** lua
- **Strings touched:** vc_mii_m01_boy_low;b_normalfighter_m/c00;b_normalfighter_m;b_normalgunner_m/c00;b_normalswordman_m/c00;b_normalgunner_m;b_normalswordman_m;miihat/%s/model/body/c%02d/model.numdlb;miihat/%s/motion/body/c00/motion_list.bin;fighter/%s/model/%s/model.numdlb;fighter/%s/motion/%s/c00/motion_list.bin;vc_mii_m01_boy_mid;vc_mii_m01_boy_high;vc_mii_m02_young_low;vc_mii_m02_young_mid;vc_mii_m02_young_high;vc_mii_m03_passionate_low;vc_mii_m03_passionate_mid;vc_mii_m03_passionate_high;vc_mii_m04_rough_low;vc_mii_m04_rough_mid;vc_mii_m04_rough_high;vc_mii_m05_cool_low;vc_mii_m05_cool_mid;vc_mii_m05_cool_high;vc_mii_m06_warrior_low;vc_mii_m06_warrior_mid;vc_mii_m06_warrior_high;vc_mii_f01_girl_low;vc_mii_f01_girl_mid;vc_mii_f01_girl_high;vc_mii_f02_young_low;...
- **Callers:** FUN_710060b6b0;FUN_71017e8890;FUN_71017e99c0;FUN_71023fee20;FUN_710344fc70
- **Callees:** FUN_710147f330;FUN_7103282890;FUN_7103282b70;FUN_71032830b0;FUN_71032836d0;FUN_71032870b0;FUN_7103287980
- **Files:** [decomp](../decompiled/FUN_71017dfe10__71017dfe10.c)  [cfg](../decompiled/FUN_71017dfe10__71017dfe10.mmd)
- **Clone hash:** `9fb75ba36a6c57cf`

```c

void FUN_71017dfe10(byte *param_1,uint param_2,undefined8 param_3,ulong param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  char *pcVar10;
  ulong *puVar11;
  ulong *puVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  uint local_260 [2];
  undefined1 auStack_258 [248];
  undefined2 local_160;
  uint local_158 [2];
  undefined1 auStack_150 [248];
  undefined2 local_58;
  
  iVar8 = (int)param_3;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  *param_1 = 0;
  if (7 < iVar8 - 0x13U) {
    return;
  }
// ... (456 more lines)
```

## 28. `FUN_71019927a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019927a0`  (offset `0x19927a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019927a0(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 13972 bytes / 584 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** selector_0;set_parts_pick_btn_00;set_parts_pick_btn_01;set_parts_pick_btn_02;set_parts_pick_btn_03;selector_1;set_parts_learn_btn_00;set_parts_learn_btn_01;set_parts_learn_btn_02;selector_2;set_parts_float_btn;selector_3;set_parts_decide_btn;set_parts_pick_btn_%02d;set_parts_learn_btn_%02d;set_btn_tab_00;set_btn_tab_01;selector_4;spirits_tab_l_btn;spirits_tab_r_btn;set_parts_btn_00;style_0;set_parts_btn_01;style_1;status_grp;set_parts_btn_open;set_parts_btn_close;set_parts_skill_%02d;set_parts_skill_alert;color_new;set_parts_icon_condition;set_fxui_raise;...
- **Callers:** FUN_71017f7800
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101989b70;FUN_71019b6ba0;FUN_7101df6680;FUN_7101df74b0;FUN_7101df9480;FUN_710323f330;FUN_71032631a0;FUN_71032632a0;FUN_71032633f0;FUN_71032cad20;FUN_71032caea0;FUN_71032cbf30;FUN_71032df050;FUN_710337df20;...
- **Files:** [decomp](../decompiled/FUN_71019927a0__71019927a0.c)  [cfg](../decompiled/FUN_71019927a0__71019927a0.mmd)
- **Clone hash:** `766386d968d3bc29`

```c

void FUN_71019927a0(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long **pplVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 *puVar14;
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
// ... (2327 more lines)
```

## 29. `FUN_7101837cf0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101837cf0`  (offset `0x1837cf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101837cf0(long param_1, byte * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3700 bytes / 185 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** change;decide
- **Callees:** FUN_71000001c0;FUN_71015547e0;FUN_7101686610;FUN_710168eb40;FUN_71016b6a10;FUN_7101764000;FUN_710179eb30;FUN_71019f08a0;FUN_71019f11d0;FUN_71019fff00;FUN_7101a00940;FUN_7101a028b0;FUN_7101a03a90;FUN_7101a06380;FUN_7101a06920;FUN_7101a06ef0;...
- **Files:** [decomp](../decompiled/FUN_7101837cf0__7101837cf0.c)  [cfg](../decompiled/FUN_7101837cf0__7101837cf0.mmd)
- **Clone hash:** `d8b8d37bc0fa254c`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101837cf0(long param_1,byte *param_2,undefined **param_3,byte ****param_4,long ****param_5
                   ,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long ****pppplVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined8 *puVar23;
  uint uVar24;
  long *********ppppppppplVar25;
  long ****pppplVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
// ... (510 more lines)
```

## 30. `FUN_710199def0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710199def0`  (offset `0x199def0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710199def0(long param_1, undefined8 param_2, undefined * * param_3, undefined8 param_4, long * * * * param_5, ulong param_6, long * * * * param_7, long * * param_8)`
- **Size / BBs / Incoming:** 9488 bytes / 410 bb / 4 incoming refs
- **Match values:** lua
- **Strings touched:** exp_up;exp_non;set_txt_level_num_00;mnu_amiibo_level_n;set_txt_level_num_01;effect_level_show;effect_level_hide;set_fxui_level;exp_bar_base;set_pic_exp_bar_01;set_pic_exp_bar_00;set_txt_atk_num;mnu_amiibo_growth_attack_n;set_txt_def_num;mnu_amiibo_growth_defense_n;status_atk_up;set_txt_atk_variable;mnu_amiibo_growth_rising_attack_n;status_def_none;status_atk_none;status_def_down;set_txt_def_variable;mnu_amiibo_growth_rising_defense_n;status_atk_down;status_def_up;effect_atk_show;effect_atk_hide;set_fxui_atk;effect_def_show;effect_def_hide;set_fxui_def;set_pic_atk_bar_00;...
- **Callers:** FUN_71017f5bf0;FUN_7101995e50;FUN_7101999be0
- **Callees:** FUN_71000001c0;FUN_7100325eb0;FUN_71003a4ca0;FUN_7101764000;FUN_7101766070;FUN_7101766e10;FUN_7101767150;FUN_7101767b10;FUN_710199c690;FUN_71019b6cd0;FUN_7103238e70;FUN_710323c4e0;FUN_710324bb60;FUN_710324c360;FUN_71032626e0;FUN_71032a0fd0;...
- **Files:** [decomp](../decompiled/FUN_710199def0__710199def0.c)  [cfg](../decompiled/FUN_710199def0__710199def0.mmd)
- **Clone hash:** `552b2bf42371ca13`

```c

void FUN_710199def0(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                   long ****param_5,ulong param_6,long ****param_7,long **param_8)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined2 uVar14;
  undefined2 uVar15;
  undefined8 *puVar16;
  int iVar17;
  bool bVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  long lVar24;
  long *plVar25;
  int *piVar26;
  long *plVar27;
  ushort uVar28;
  byte *pbVar29;
  undefined8 extraout_x1;
  undefined8 uVar30;
  undefined **ppuVar31;
  ulong uVar32;
  long ***ppplVar33;
  ulong uVar34;
// ... (1607 more lines)
```

## 31. `FUN_710000fb30`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000fb30`  (offset `0xfb30`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000fb30(long param_1, uint * param_2, size_t * param_3, uint * param_4, uint * param_5, uint * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4824 bytes / 291 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** dys_yoga03_l_03_set;HTTP/;Content-Length:;NODE_PRE_REFRACT_BLEND;no chunk, no close, no size. Assume close to signal end
; HTTP/%1d.%1d%c%3d; HTTP/2 %d;Lying server, not serving HTTP/2
;Keep sending data to get tossed away!
;chara/chara_4/chara_4_; RTSP/%d.%d %3d;HTTP error before end of send, keep sending
; HTTP %3d;HTTP 1.0, assume close after body
;Content-Type:;Server:;Proxy-Connection:;keep-alive;HTTP/1.0 proxy connection set to keep alive!
;Negative content-length: %ld, closing after transfer
;close;HTTP/1.1 proxy connection set close!
;Connection:;select_item;HTTP/1.0 connection set to keep alive!
;Transfer-Encoding:;chunked;identity;deflate;x-gzip;Content-Encoding:;Content-Range:;...
- **Callers:** FUN_7100017ae0
- **Callees:** FUN_71000012c0;FUN_7100004200;FUN_710000bba0;FUN_710000e840;FUN_710000e940;FUN_710000f090;FUN_710000f6f0;FUN_7100012920;FUN_7100013750;FUN_7100014250;FUN_7100014410;FUN_7100014fc0;FUN_7100015de0;FUN_7100015ed0;FUN_7100016040;FUN_71000167d0;...
- **Files:** [decomp](../decompiled/FUN_710000fb30__710000fb30.c)  [cfg](../decompiled/FUN_710000fb30__710000fb30.mmd)
- **Clone hash:** `137d2d0fd72772c7`

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_710000fb30(long param_1,uint *param_2,size_t *param_3,uint *param_4,uint *param_5,
                    uint *param_6,undefined8 param_7,undefined8 param_8)

{
  uint *param4;
  uint *param3;
  uint *param3_00;
  long *plVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  void *__dest;
  char *pcVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  size_t sVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  size_t sVar17;
  char *pcVar18;
  size_t __n;
  byte *pbVar19;
  uint *puVar20;
  long lVar21;
  char cVar22;
  long lVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  undefined1 auVar26 [16];
  undefined8 local_70;
// ... (801 more lines)
```

## 32. `FUN_7101a1dbf0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1dbf0`  (offset `0x1a1dbf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1dbf0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2112 bytes / 98 bb / 4 incoming refs
- **Match values:** lua
- **Strings touched:** change;decide
- **Callers:** FUN_710183be60;FUN_7101a12f60
- **Callees:** FUN_71019fd0b0;FUN_71019fd290;FUN_7101a024c0;FUN_7101a028b0;FUN_7101a029b0;FUN_7101a07580;FUN_7101a07770;FUN_7101a191b0;FUN_7101a19420;FUN_7101a1c300;FUN_7101a1c830;FUN_7101a1c9f0;FUN_7101a1cb30;FUN_7101a1d4d0;FUN_7101a1eb70;FUN_7101a1eee0;...
- **Files:** [decomp](../decompiled/FUN_7101a1dbf0__7101a1dbf0.c)  [cfg](../decompiled/FUN_7101a1dbf0__7101a1dbf0.mmd)
- **Clone hash:** `d7ccefb75d4a1921`

```c

void FUN_7101a1dbf0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar10;
  undefined8 extraout_x1_01;
  byte ****ppppbVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long *********ppppppppplVar21;
  uint local_58 [2];
  
  uVar19 = *(uint *)(*(long *)(param_2 + 8) + 0x1f8);
  uVar18 = (uint)param_3;
  if (*(int *)(*(long *)(param_2 + 8) + 0x5d0) == 0) {
    if (uVar18 == 0) {
      uVar18 = 1;
    }
    if (uVar18 == 2) {
      param_3 = (long *********)0x1;
      FUN_7101a1eee0(param_1,param_2,(long ****)0x1,param_4,param_5,param_6,param_7,param_8);
// ... (260 more lines)
```

## 33. `FUN_71019b20c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019b20c0`  (offset `0x19b20c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019b20c0(long * * * * * * * * param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8128 bytes / 315 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** %dp_%02d;scr_item;set_parts_csr_t;set_parts_csr_b;ptn_02_for_duckhunt;set_rep_char_icn;set_rep_char_icn_sd;set_rep_series00;set_rep_series01;set_txt_p_num;mode_empty_03;rank_%d;set_txt_rank;set_fxui_rankflash;team_color_2;team_color_2_team;team_color_1;team_color_1_team;player_color_fp_team;my_amiibo_hide;my_amiibo_show;set_txt_atk_num;mnu_amiibo_attack_n;set_txt_def_num;mnu_amiibo_defense_n;set_pic_atk_bar;set_pic_atk_bar_shadow;set_pic_def_bar;set_pic_def_bar_shadow;set_txt_p_name;set_txt_p_name_break;set_txt_u_name;...
- **Callers:** FUN_71017fd8b0
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_7101767150;FUN_71019b1b60;FUN_71019b6ba0;FUN_71019b6cd0;FUN_710323f330;FUN_710323f600;FUN_71032626e0;FUN_71032631a0;FUN_71032632a0;FUN_7103263f80;FUN_7103265040;FUN_710326ad60;FUN_7103280ec0;FUN_71032a2c10;...
- **Files:** [decomp](../decompiled/FUN_71019b20c0__71019b20c0.c)  [cfg](../decompiled/FUN_71019b20c0__71019b20c0.mmd)
- **Clone hash:** `ab9b00ec9eb49610`

```c

void FUN_71019b20c0(long ********param_1,ulong param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long ********pppppppplVar4;
  uint *puVar5;
  byte *pbVar6;
  ulong *puVar7;
  ulong *puVar8;
  byte bVar9;
  char cVar10;
  short sVar11;
  short sVar12;
  long *******ppppppplVar13;
  undefined8 *puVar14;
  bool bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  long ******pppppplVar19;
  long *******ppppppplVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ushort *puVar24;
  undefined8 *puVar25;
  char *pcVar26;
  ulong uVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  undefined8 uVar30;
  undefined ***pppuVar31;
  byte ****ppppbVar32;
  long ****pppplVar33;
  byte *pbVar34;
  ushort uVar35;
// ... (1385 more lines)
```

## 34. `FUN_71020f20d0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020f20d0`  (offset `0x20f20d0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71020f20d0(long param_1)`
- **Size / BBs / Incoming:** 1008 bytes / 29 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** new_instance_lua;center;select_item;radius
- **Callees:** FUN_71038f4d40;FUN_71038f5390;FUN_71038fec40;FUN_710391d4c0;FUN_710391e050
- **Files:** [decomp](../decompiled/FUN_71020f20d0__71020f20d0.c)  [cfg](../decompiled/FUN_71020f20d0__71020f20d0.mmd)
- **Clone hash:** `b6aab3bb593be4d9`

```c

undefined8 FUN_71020f20d0(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  
  lVar12 = **(long **)(param_1 + 0x20);
  plVar4 = *(long **)(param_1 + 0x10);
  plVar5 = (long *)(lVar12 + 0x10);
  uVar8 = (long)plVar4 - (long)plVar5;
  iVar9 = (int)(uVar8 >> 4);
  if (((iVar9 == 2 && (long *)(lVar12 + 0x20) < plVar4) &&
       (long *)(lVar12 + 0x20) != &DAT_7104862960) && ((*(uint *)(lVar12 + 0x28) & 0xf) == 5)) {
    if (plVar4 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
    if ((*(uint *)(plVar5 + 1) & 0xf) == 2) {
      puVar13 = (undefined4 *)*plVar5;
    }
    else if ((*(uint *)(plVar5 + 1) & 0xf) == 7) {
      puVar13 = (undefined4 *)(*plVar5 + 0x28);
    }
    else {
      puVar13 = (undefined4 *)0x0;
    }
    if (plVar5 + 2 < plVar4 + -2) {
      plVar11 = plVar4 + -4;
// ... (133 more lines)
```

## 35. `FUN_71020bc140`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020bc140`  (offset `0x20bc140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020bc140(long param_1, long param_2)`
- **Size / BBs / Incoming:** 196 bytes / 1 bb / 0 incoming refs
- **Match values:** lua
- **Strings touched:** new_instance_lua
- **Callees:** FUN_71038f5390
- **Files:** [decomp](../decompiled/FUN_71020bc140__71020bc140.c)  [cfg](../decompiled/FUN_71020bc140__71020bc140.mmd)
- **Clone hash:** `ef02bb8f14285c11`

```c

void FUN_71020bc140(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71020bc020;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 8);
  *(undefined4 *)(plVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"id_");
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71020bc0a0;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  return;
}


```

## 36. `FUN_710000bdc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000bdc0`  (offset `0xbdc0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000bdc0(size_t * param_1, uint param_2, size_t * param_3, size_t * param_4, size_t * param_5, size_t * param_6, size_t * param_7, size_t * param_8)`
- **Size / BBs / Incoming:** 2860 bytes / 144 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** select_item;allocate connect buffer!
;Establish HTTP proxy tunnel to %s:%hu
;%s:%hu;CONNECT;dys_yoga03_l_03_set;%s%s%s:%hu;Host:;Host: %s
;Proxy-Connection:;User-Agent:;CONNECT %s HTTP/%s
%s%s%s%s;WWW-Authenticate:;Proxy-authenticate:;chunk reading DONE
;Content-Length:;Ignoring Content-Length in CONNECT %03d response
;Ignore %ld bytes of response-body
;Connection:;close;Ignore chunked response-body
;Transfer-Encoding:;chara/chara_4/chara_4_;Ignoring Transfer-Encoding in CONNECT %03d response
;chunked;CONNECT responded chunked
;HTTP/1.%d %d;Proxy CONNECT connection closed
;Proxy CONNECT aborted;CONNECT response too large!;Received HTTP code %d from proxy after CONNECT;Failed sending CONNECT to proxy;...
- **Callers:** FUN_710000bc80
- **Callees:** FUN_7100002af0;FUN_7100003660;FUN_7100004200;FUN_7100004270;FUN_7100007fd0;FUN_710000e790;FUN_710000e840;FUN_710000e940;FUN_710000ec90;FUN_710000f090;FUN_710000f240;FUN_710000f250;FUN_710000f280;FUN_710000f530;FUN_710000f6f0;FUN_710000f7f0;...
- **Files:** [decomp](../decompiled/FUN_710000bdc0__710000bdc0.c)  [cfg](../decompiled/FUN_710000bdc0__710000bdc0.mmd)
- **Clone hash:** `a493736e9de6bf64`

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_710000bdc0(size_t *param_1,uint param_2,size_t *param_3,size_t *param_4,size_t *param_5,
                    size_t *param_6,size_t *param_7,size_t *param_8)

{
  int *piVar1;
  size_t *param3;
  size_t *psVar2;
  byte *pbVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  size_t *psVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 extraout_x1;
  byte *pbVar18;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  size_t *psVar19;
  size_t *psVar20;
  size_t sVar21;
  size_t *psVar22;
  byte *pbVar23;
  size_t *psVar24;
  ulong uVar25;
  size_t local_78;
  size_t local_70;
// ... (541 more lines)
```

## 37. `FUN_7101a34890`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a34890`  (offset `0x1a34890`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a34890(undefined1[16] param_1, float param_2, undefined8 param_3, float param_4, long param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)`
- **Size / BBs / Incoming:** 2464 bytes / 99 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** change;decide
- **Callees:** FUN_71019e66d0;FUN_71019e69d0;FUN_7101a35300;FUN_7101a35900;FUN_7101a48570;FUN_7101a48700;FUN_7101a4a800;FUN_7101a4d950;FUN_7101a4e2a0;FUN_7101a4e410;FUN_7103263030;FUN_71032631a0;FUN_71032d00d0;FUN_71032e5d80;FUN_7103775fa0;FUN_7103778300;...
- **Files:** [decomp](../decompiled/FUN_7101a34890__7101a34890.c)  [cfg](../decompiled/FUN_7101a34890__7101a34890.mmd)
- **Clone hash:** `ac166b4f0755746c`

```c

void FUN_7101a34890(undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,
                   long param_5,undefined8 param_6,long ****param_7,byte ****param_8,
                   long ****param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long ****pppplVar1;
  int iVar2;
  bool bVar3;
  undefined1 *puVar4;
  long *********ppppppppplVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  long ****pppplVar6;
  undefined4 uVar7;
  long **pplVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *********ppppppppplVar16;
  ulong uVar17;
  long ***ppplVar18;
  long lVar19;
  long ****pppplVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
// ... (342 more lines)
```

## 38. `FUN_71019eb840`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019eb840`  (offset `0x19eb840`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019eb840(ulong * param_1, long * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 19884 bytes / 1100 bb / 3 incoming refs
- **Match values:** lua
- **Strings touched:** row%02d_num;window_size_%02d;set_parts_chr_s_%02d;clear_off;select_hl;name_line1;black_off;set_lct_hd;bg_set_hd;bg_set_ch;compe_bg_hd_on;compe_bg_on;set_parts_chr_bg_s_%02d;compe_bg_off;set_txt_name_l;set_txt_name_s;set_chr_area;set_parts_chr_s_00;nam_chr3_%02d_%s;set_rep_chara;set_rep_chara_2;set_txt_all_l;set_txt_all_s;dash_off;dash_on;set_rep_dash_chara;name_on;name_all;name_off;hd_off
- **Callers:** FUN_710183be60;FUN_7101a20200
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_71019eb6b0;FUN_71019f05f0;FUN_71019f0630;FUN_710323f330;FUN_7103262310;FUN_7103262cc0;FUN_7103263030;FUN_71032631a0;FUN_7103263540;FUN_7103263a30;FUN_7103263f80;FUN_710326ad60;FUN_7103280ec0;...
- **Files:** [decomp](../decompiled/FUN_71019eb840__71019eb840.c)  [cfg](../decompiled/FUN_71019eb840__71019eb840.mmd)
- **Clone hash:** `c31db4e7d1adf629`

```c

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffffffffffe10 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71019eb840(ulong *param_1,long *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long ***ppplVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  long *******ppppppplVar26;
  ushort *puVar27;
  undefined8 *puVar28;
  undefined1 *puVar29;
  long *plVar30;
// ... (3701 more lines)
```

## 39. `FUN_710009c350`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710009c350`  (offset `0x9c350`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710009c350(long param_1)`
- **Size / BBs / Incoming:** 704 bytes / 1 bb / 2 incoming refs
- **Match values:** lua
- **Strings touched:** select_item;sysTextureSampler0;sysTextureSampler1;sysTextureSampler2;sysFrameBufferTexture;sysDepthBufferTexture;sysCurlNoiseTextureArray;sysCustomShaderTextureSampler0;sysCustomShaderTextureSampler1;sysCustomShaderTextureSampler2;sysCustomShaderTextureSampler3;sysCustomShaderTextureArraySampler0;sysCustomShaderTextureArraySampler1;sysCustomShaderTextureArraySampler2;sysCustomShaderTextureArraySampler3;sysCustomShaderTexture3DSampler0;sysCustomShaderTexture3DSampler1;sysCustomShaderTexture3DSampler2;sysCustomShaderTexture3DSampler3;sysCustomShaderCubeSampler0;sysCustomShaderCubeSampler1;sysCustomShaderCubeSampler2;sysCustomShaderCubeSampler3;sysCustomShaderCubeArraySampler0;sysCustomShaderCubeArraySampler1;sysCustomShaderCubeArraySampler2;sysCustomShaderCubeArraySampler3;chara/chara_4/chara_4_;sysCustomShaderShadowSampler0;sysCustomShaderShadowSampler1;sysCustomShaderShadowSampler2;sysCustomShaderShadowSampler3;...
- **Callers:** FUN_710009c9e0;FUN_710009ccf0
- **Callees:** FUN_71000af320
- **Files:** [decomp](../decompiled/FUN_710009c350__710009c350.c)  [cfg](../decompiled/FUN_710009c350__710009c350.mmd)
- **Clone hash:** `5c28653272c636e5`

```c

void FUN_710009c350(long param_1)

{
  FUN_71000af320((undefined4 *)(param_1 + 0xf4),*(long *)(param_1 + 8),"sysTextureSampler0");
  FUN_71000af320((undefined4 *)(param_1 + 0xfc),*(long *)(param_1 + 8),"sysTextureSampler1");
  FUN_71000af320((undefined4 *)(param_1 + 0x104),*(long *)(param_1 + 8),"sysTextureSampler2");
  FUN_71000af320((undefined4 *)(param_1 + 0x10c),*(long *)(param_1 + 8),"sysFrameBufferTexture");
  FUN_71000af320((undefined4 *)(param_1 + 0x114),*(long *)(param_1 + 8),"sysDepthBufferTexture");
  FUN_71000af320((undefined4 *)(param_1 + 0x11c),*(long *)(param_1 + 8),"sysCurlNoiseTextureArray");
  FUN_71000af320((undefined4 *)(param_1 + 0x14),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureSampler0");
  FUN_71000af320((undefined4 *)(param_1 + 0x1c),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureSampler1");
  FUN_71000af320((undefined4 *)(param_1 + 0x24),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureSampler2");
  FUN_71000af320((undefined4 *)(param_1 + 0x2c),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureSampler3");
  FUN_71000af320((undefined4 *)(param_1 + 0x34),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureArraySampler0");
  FUN_71000af320((undefined4 *)(param_1 + 0x3c),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureArraySampler1");
  FUN_71000af320((undefined4 *)(param_1 + 0x44),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureArraySampler2");
  FUN_71000af320((undefined4 *)(param_1 + 0x4c),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureArraySampler3");
  FUN_71000af320((undefined4 *)(param_1 + 0x54),*(long *)(param_1 + 8),
                 "sysCustomShaderTexture3DSampler0");
  FUN_71000af320((undefined4 *)(param_1 + 0x5c),*(long *)(param_1 + 8),
                 "sysCustomShaderTexture3DSampler1");
  FUN_71000af320((undefined4 *)(param_1 + 100),*(long *)(param_1 + 8),
                 "sysCustomShaderTexture3DSampler2");
  FUN_71000af320((undefined4 *)(param_1 + 0x6c),*(long *)(param_1 + 8),
                 "sysCustomShaderTexture3DSampler3");
  FUN_71000af320((undefined4 *)(param_1 + 0x74),*(long *)(param_1 + 8),"sysCustomShaderCubeSampler0"
                );
  FUN_71000af320((undefined4 *)(param_1 + 0x7c),*(long *)(param_1 + 8),"sysCustomShaderCubeSampler1"
                );
  FUN_71000af320((undefined4 *)(param_1 + 0x84),*(long *)(param_1 + 8),"sysCustomShaderCubeSampler2"
                );
// ... (29 more lines)
```

## 40. `FUN_71020bbf00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020bbf00`  (offset `0x20bbf00`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71020bbf00(long param_1)`
- **Size / BBs / Incoming:** 280 bytes / 4 bb / 2 incoming refs
- **Match values:** lua
- **Strings touched:** new_instance_lua
- **Callees:** FUN_71038f5390;FUN_71038fec40;FUN_710391d4c0;FUN_710391e050
- **Files:** [decomp](../decompiled/FUN_71020bbf00__71020bbf00.c)  [cfg](../decompiled/FUN_71020bbf00__71020bbf00.mmd)
- **Clone hash:** `5ef46925d5f7c97e`

```c

undefined8 FUN_71020bbf00(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_71020bc020;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = 0x31;
  *(undefined4 *)(puVar3 + 1) = 0x13;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"id_");
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_71020bc0a0;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  return 1;
}


```

## 41. `FUN_710186ba80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710186ba80`  (offset `0x186ba80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710186ba80(long param_1)`
- **Size / BBs / Incoming:** 1608 bytes / 91 bb / 1 incoming refs
- **Match values:** lua
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

## 42. `FUN_7100176e30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176e30`  (offset `0x176e30`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100176e30(long param_1)`
- **Size / BBs / Incoming:** 252 bytes / 8 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;LocalHostMigrationJob::WaitConnectNetwork
- **Callees:** FUN_71000b4300;FUN_7100181f40
- **Files:** [decomp](../decompiled/FUN_7100176e30__7100176e30.c)  [cfg](../decompiled/FUN_7100176e30__7100176e30.mmd)
- **Clone hash:** `75fc945762a59ae9`

```c

undefined8 FUN_7100176e30(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  int local_40 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0xd8))
                      (*(long **)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x6c));
    plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x78) + 0x168))
                               (*(long **)(param_1 + 0x78),uVar1);
    plVar3 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    (**(code **)(*plVar3 + 0x158))(plVar3,uVar1);
    FUN_7100181f40(local_40,*(long **)(param_1 + 0x78),*(undefined4 **)(param_1 + 0x60),plVar2);
    if (local_40[0] == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0x58;
      *(undefined8 *)(param_1 + 0x38) = 1;
      *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitConnectNetwork";
    }
    uVar1 = 5;
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    uVar1 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
  }
  return uVar1;
}


```

## 43. `FUN_7103907690`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103907690`  (offset `0x3907690`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103907690(long param_1, char * param_2, char * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 200 bytes / 5 bb / 2 incoming refs
- **Match values:** lua
- **Strings touched:** luaopen_%s
- **Callers:** FUN_7103906730;FUN_71039069e0
- **Callees:** FUN_71038f4a00;FUN_71038f4ca0;FUN_71038f9f30;FUN_7103907760;<EXTERNAL>::strchr
- **Files:** [decomp](../decompiled/FUN_7103907690__7103907690.c)  [cfg](../decompiled/FUN_7103907690__7103907690.mmd)
- **Clone hash:** `7b1b197fd2ddfa84`

```c

void FUN_7103907690(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)FUN_71038f9f30(param_1,param_3,".","_",param_5,param_6,param_7,param_8);
  pcVar2 = strchr(pcVar1,0x2d);
  if (pcVar2 != (char *)0x0) {
    FUN_71038f4a00(param_1,pcVar1,(long)pcVar2 - (long)pcVar1);
    pcVar1 = (char *)FUN_71038f4ca0(param_1,"luaopen_%s");
    uVar3 = FUN_7103907760(param_1,param_2,pcVar1);
    if ((int)uVar3 != 2) {
      return;
    }
  }
  pcVar1 = (char *)FUN_71038f4ca0(param_1,"luaopen_%s");
  FUN_7103907760(param_1,param_2,pcVar1);
  return;
}


```

## 44. `FUN_7100023290`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023290`  (offset `0x23290`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100023290(ulong param_1, char * param_2, byte * param_3, long * param_4, long * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2432 bytes / 134 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** SOCKS5: connecting to HTTP proxy %s port %d
;SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]
;SOCKS5: no connection here;Connection time-out;SOCKS5: connection timeout;warning: unsupported value passed to CURLOPT_SOCKS5_AUTH: %lu
;SOCKS5: error occurred during connection;SOCKS5 communication to %s:%d
;NODE_PRE_REFRACT_BLEND;SOCKS5 nothing to read;Unable to send initial SOCKS5 request.;SOCKS5 read timeout;SOCKS5 read error occurred;SOCKS5 GSSAPI per-message authentication is not supported.;Unable to receive initial SOCKS5 response.;Received invalid version in initial SOCKS5 response.;No authentication method was acceptable.;Undocumented SOCKS5 mode attempted to be used by server.;No authentication method was acceptable. (It is quite likely that the SOCKS5 server wanted a username/password, since none was supplied to the server on this connection.);Failed to send SOCKS5 sub-negotiation request.;User was rejected by the SOCKS5 server (%d %d).;SOCKS5 connect to IPv4 %s (locally resolved)
;Unable to receive SOCKS5 sub-negotiation response.;select_item;Failed to send SOCKS5 connect request.;SOCKS5 connection to %s not supported
;Failed to resolve "%s" for SOCKS5 connect.;SOCKS5 reply has wrong version, version should be 5.;Can't complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d);SOCKS5 request granted.
;Can't complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d);Can't complete SOCKS5 connection to %s:%d. (%d);...
- **Callers:** FUN_710001edb0
- **Callees:** FUN_7100002af0;FUN_7100004910;FUN_7100005ba0;FUN_7100005f10;FUN_71000060d0;FUN_7100013730;FUN_7100015800;FUN_7100015de0;FUN_7100016040;FUN_71000162c0;FUN_7100016980;<EXTERNAL>::strlen;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_7100023290__7100023290.c)  [cfg](../decompiled/FUN_7100023290__7100023290.mmd)
- **Clone hash:** `b3d3e348bc39a1b0`

```c

/* WARNING: Removing unreachable block (ram,0x00710002388c) */

int FUN_7100023290(ulong param_1,char *param_2,byte *param_3,long *param_4,long *param_5,
                  long *param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t __n;
  long *plVar6;
  size_t __n_00;
  size_t __n_01;
  char *pcVar7;
  byte *pbVar8;
  long *plVar9;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  long local_328;
  long local_318;
  long local_310 [8];
  long *local_2d0;
  undefined8 local_2c8;
  byte local_2c0 [7];
  byte local_2b9;
  byte local_2b8;
  byte local_2b7;
  
  lVar15 = param_6[0x27];
  lVar13 = *param_6;
  uVar1 = *(uint *)((long)param_6 + (long)(int)param_5 * 4 + 600);
// ... (381 more lines)
```

## 45. `FUN_71020d4810`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020d4810`  (offset `0x20d4810`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020d4810(long param_1, long param_2)`
- **Size / BBs / Incoming:** 348 bytes / 1 bb / 32 incoming refs
- **Match values:** lua
- **Strings touched:** new_instance_lua;object_id_;gauge_parts_on;event_kind_;sender_id_
- **Callers:** FUN_71020d4770;FUN_71020d5880;FUN_71020d5b10;FUN_71020d6a20;FUN_71020d6be0;FUN_71020d7550;FUN_71020d7710;FUN_71020d8170;FUN_71020dd0a0;FUN_71020df880;FUN_71020e1ca0;FUN_71020e3660;FUN_71020e5010;FUN_71020e51a0;FUN_71020e5a70;FUN_71020e7a00;...
- **Callees:** FUN_71038f5390
- **Files:** [decomp](../decompiled/FUN_71020d4810__71020d4810.c)  [cfg](../decompiled/FUN_71020d4810__71020d4810.mmd)
- **Clone hash:** `574e9da79e8a4607`

```c

void FUN_71020d4810(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71020bc020;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 8);
  *(undefined4 *)(plVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"id_");
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71020d4970;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 0xc);
  *(undefined4 *)(plVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"object_id_");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 0x10);
  *(undefined4 *)(plVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"event_kind_");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 0x14);
// ... (7 more lines)
```

## 46. `FUN_71023899c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71023899c0`  (offset `0x23899c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71023899c0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1404 bytes / 49 bb / 6 incoming refs
- **Match values:** lua
- **Strings touched:** share;time_seconds;num_test_stageedit;num_save_stageedit;num_like_stageedit;num_share_stageedit;num_test_miifighter;num_save_miifighter;num_like_miifighter;num_share_miifighter;num_watch_replay;num_like_replay;num_share_replay;num_watch_watching;num_like_watching;num_share_watching;num_watch_movie;NODE_PRE_REFRACT_BLEND;num_like_movie;num_share_movie;num_profile;num_follow;num_report
- **Callers:** FUN_71023883a0;FUN_7102390040;FUN_71023902d0;FUN_71023907b0;FUN_71023925c0
- **Callees:** FUN_7101cc4970;FUN_7101cc4b30;FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save;<EXTERNAL>::nn::oe::GetProgramTotalActiveTime
- **Files:** [decomp](../decompiled/FUN_71023899c0__71023899c0.c)  [cfg](../decompiled/FUN_71023899c0__71023899c0.mmd)
- **Clone hash:** `b37e48db2b824a44`

```c

void FUN_71023899c0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *local_40;
  ulong local_38;
  
  lVar7 = *(long *)(DAT_7105325cc8 + 8);
  if (*(int *)(lVar7 + 0xb8) != 0) {
    lVar4 = nn::oe::GetProgramTotalActiveTime();
    uVar6 = lVar4 - *(long *)(lVar7 + 0x26c8);
    uVar5 = ((long)uVar6 >> 0x20) * 0x26d694b3 + ((uVar6 & 0xffffffff) * 0x26d694b3 >> 0x20);
    *(int *)(lVar7 + 0x2674) =
         (int)(((long)uVar6 >> 0x20) * 0x112e0be8 + ((long)uVar5 >> 0x20) +
               ((uVar6 & 0xffffffff) * 0x112e0be8 + (uVar5 & 0xffffffff) >> 0x20) >> 0x1a) -
         (int)((long)uVar6 >> 0x3f);
    if ((((((*(int *)(lVar7 + 0x2678) != 0) || (*(int *)(lVar7 + 0x267c) != 0)) ||
          (*(int *)(lVar7 + 0x2680) != 0)) ||
         ((*(int *)(lVar7 + 0x2684) != 0 || (*(int *)(lVar7 + 0x2688) != 0)))) ||
        ((((*(int *)(lVar7 + 0x268c) != 0 ||
           ((*(int *)(lVar7 + 0x2690) != 0 || (*(int *)(lVar7 + 0x2694) != 0)))) ||
          (*(int *)(lVar7 + 0x2698) != 0)) ||
         ((((*(int *)(lVar7 + 0x269c) != 0 || (*(int *)(lVar7 + 0x26a0) != 0)) ||
           (*(int *)(lVar7 + 0x26a4) != 0)) ||
          (((*(int *)(lVar7 + 0x26a8) != 0 || (*(int *)(lVar7 + 0x26ac) != 0)) ||
           ((*(int *)(lVar7 + 0x26b0) != 0 ||
            ((*(int *)(lVar7 + 0x26b4) != 0 || (*(int *)(lVar7 + 0x26b8) != 0)))))))))))) ||
       ((*(int *)(lVar7 + 0x26bc) != 0 ||
        ((*(int *)(lVar7 + 0x26c0) != 0 || (*(int *)(lVar7 + 0x26c4) != 0)))))) {
      FUN_710375aa90((long *)&local_40,"share",param_3,param_4,param_5,param_6,param_7,param_8);
      puVar2 = local_40;
      local_38 = (ulong)*(uint *)(lVar7 + 0x2674);
// ... (96 more lines)
```

## 47. `FUN_7101a18170`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a18170`  (offset `0x1a18170`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a18170(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1720 bytes / 77 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** change;decide;winner
- **Callees:** FUN_71019fd290;FUN_71024076d0;FUN_71032631a0;FUN_71032632a0;FUN_7103313f20;FUN_7103778300;FUN_7103778630;FUN_7103778760;FUN_710377aee0;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101a18170__7101a18170.c)  [cfg](../decompiled/FUN_7101a18170__7101a18170.mmd)
- **Clone hash:** `709a2c469f7084bd`

```c

void FUN_7101a18170(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  long *********ppppppppplVar16;
  undefined1 *puVar17;
  int iVar18;
  int *piVar19;
  uint *puVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long *********ppppppppplVar26;
  long lVar27;
  undefined4 local_b8 [4];
  long local_a8;
  int local_a0;
  
  iVar18 = *(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x13c) == 0) {
    if (0 < iVar18) {
      puVar1 = (uint *)(param_1 + 0x484);
// ... (172 more lines)
```

## 48. `FUN_7103959290`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103959290`  (offset `0x3959290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103959290(int * param_1)`
- **Size / BBs / Incoming:** 5888 bytes / 323 bb / 1 incoming refs
- **Match values:** lua
- **Strings touched:** version;<jemalloc>: Failure in xmallctl("%s", ...)
;Version;config;Build-time option settings;config.cache_oblivious;cache_oblivious;config.debug;debug;config.fill;config.lazy_lock;lazy_lock;malloc_conf;config.malloc_conf;NODE_PRE_REFRACT_BLEND;config.prof;config.prof_libgcc;prof_libgcc;config.prof_libunwind;prof_libunwind;config.stats;stats;config.utrace;utrace;config.xmalloc;xmalloc;Run-time option settings;opt.abort;abort;opt.abort_conf;abort_conf;opt.retain;...
- **Callers:** FUN_7103958eb0
- **Callees:** FUN_710392ec40;FUN_710392ecf0;FUN_710392ed90;FUN_71039545b0;FUN_7103957550;FUN_7103959240;FUN_710395a990;FUN_710395ab20;FUN_710395ac50;FUN_710395aca0;FUN_710395ad30;FUN_710395ae40;FUN_710395aea0;FUN_710395af00;FUN_710395af50;FUN_710395afc0;...
- **Files:** [decomp](../decompiled/FUN_7103959290__7103959290.c)  [cfg](../decompiled/FUN_7103959290__7103959290.mmd)
- **Clone hash:** `75bb6240942dc29a`

```c

void FUN_7103959290(int *param_1)

{
  int iVar1;
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
  long ****pppplVar2;
  char *pcVar3;
  long ****pppplVar4;
  undefined8 uVar5;
  byte ****ppppbVar6;
  undefined8 uVar7;
  uint *puVar8;
  char *in_x5;
  undefined8 in_x6;
  uint *in_x7;
  byte ***local_260;
  long ***local_258;
  undefined1 auStack_250 [16];
  ulong local_240;
  uint local_214;
  long ***local_210;
  undefined1 local_204 [4];
  byte ***local_200;
  long ***local_1f8;
  undefined1 auStack_1f0 [16];
  ulong local_1e0;
  byte ***local_1b8;
  long ***local_1b0;
  undefined1 auStack_1a8 [16];
// ... (616 more lines)
```

## 49. `FUN_7101a86030`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a86030`  (offset `0x1a86030`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a86030(long param_1, undefined8 param_2, undefined8 param_3, ushort * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2396 bytes / 109 bb / 3 incoming refs
- **Match values:** lua
- **Strings touched:** set_parts_btn_toggle;mode_empty_03;spirits_on;spirits_off;disable;set_part_name;set_txt_name_nam;mnu_record_fighters_nam;name_nam;name_all;set_part_btn_num;set_txt_records_num;mnu_record_fighters_records_%02d;mnu_record_fighters_help_records_%02d;unit_count;unit_percent;unit_time;unit_meter
- **Callers:** FUN_7101a823b0;FUN_7101a82560;FUN_7101a85410
- **Callees:** FUN_710176bcc0;FUN_7101a89060;FUN_7101a89b20;FUN_7101af53d0;FUN_7103264270;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_710377cc80;FUN_7103783690;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;...
- **Files:** [decomp](../decompiled/FUN_7101a86030__7101a86030.c)  [cfg](../decompiled/FUN_7101a86030__7101a86030.mmd)
- **Clone hash:** `7763386f5a2ef541`

```c

void FUN_7101a86030(long param_1,undefined8 param_2,undefined8 param_3,ushort *param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  long ****pppplVar3;
  ushort uVar4;
  short sVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 extraout_x1;
  char *pcVar9;
  long lVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  ushort *puVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  undefined4 uVar16;
  ulong uVar17;
  long ***ppplVar18;
  undefined8 *puVar19;
  long ***ppplVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  ulong uVar28;
  uint *puVar29;
  int iVar30;
  int iVar31;
  long *plVar32;
  bool bVar33;
  uint uVar34;
// ... (429 more lines)
```

## 50. `FUN_71031a8530`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71031a8530`  (offset `0x31a8530`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71031a8530(undefined1[16] param_1, undefined1[16] param_2, undefined1[16] param_3, undefined1[16] param_4, long * param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, long * * * param_11, long * * * param_12)`
- **Size / BBs / Incoming:** 2260 bytes / 135 bb / 1 incoming refs
- **Match values:** LUA
- **Callees:** FUN_7102405040;FUN_7103192030;FUN_71031a20e0;FUN_71031a4d90;FUN_71031d0ce0;FUN_71031d71c0;FUN_71031dac60;FUN_7103736cf0;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_71031a8530__71031a8530.c)  [cfg](../decompiled/FUN_71031a8530__71031a8530.mmd)
- **Clone hash:** `90bc1ff7c54c78f3`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71031a8530(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   undefined1 param_4 [16],long *param_5,undefined8 param_6,long ****param_7,
                   byte ****param_8,long ****param_9,undefined8 param_10,long ***param_11,
                   long ***param_12)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long ****pppplVar15;
  byte ****ppppbVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  code *pcVar20;
  float *pfVar21;
  long lVar22;
  char *pcVar23;
  undefined8 *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 extraout_q0 [16];
  float fVar27;
  ulong uVar28;
// ... (398 more lines)
```

