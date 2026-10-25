# state (funcs=51, hits=378)

Top 50 functions by hit count

## 1. `FUN_71037f8180`  (hits=88)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** State
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

## 2. `FUN_7100033a40`  (hits=88)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** State
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

## 3. `FUN_71014d2130`  (hits=17)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014d2130`  (offset `0x14d2130`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014d2130(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3256 bytes / 92 bb / 2 incoming refs
- **Match values:** State
- **Strings touched:** StateWaitForSyncWhenBeginning;StateHowToPlayDescription;StateAppearanceProduction;StateEndProduction;StateSuddenDeathPreparations;StateSuddenDeathStartingProduction;StateSuddenDeath;StatePause;StateOperatorHUDDone;StateDisconnectSyncCommunication;StateResetTraining;StateRetryPreparations;StateContinuePreparations;StateSkipMelee;StateResult;StateApplyParameters;StateWaitForSyncWhenEnding
- **Callers:** FUN_7101850c80
- **Callees:** FUN_71000001c0;FUN_7101341d50;FUN_710135a0f0;FUN_710135ac80;FUN_710135bea0;FUN_7101764000;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71014d2130__71014d2130.c)  [cfg](../decompiled/FUN_71014d2130__71014d2130.mmd)
- **Clone hash:** `d28b3455d1051185`

```c

void FUN_71014d2130(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  undefined8 uVar2;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  code *pcVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong *puVar7;
// ... (548 more lines)
```

## 4. `FUN_71014aa930`  (hits=17)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014aa930`  (offset `0x14aa930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014aa930(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2452 bytes / 70 bb / 2 incoming refs
- **Match values:** State
- **Strings touched:** StateLoadAsyncForHomeRunContest;StateSetupBatterOrder;StateShowPlayerInformation;StateShowBatterOrder;NODE_PRE_REFRACT_BLEND;StateShowRemainingTimes;StateStartPauseUntilReady;StateEndPauseUntilReady;chara/chara_4/chara_4_;StateResetBatterFighter;StateFadeOut;StateShowReady;StateMeleeForHomeRunContest;StatePause;StateOperatorHUDDone;StateRetryPreparations;StateEndProduction;StateResult;StateResultNoContest;StateApplyParameters
- **Callers:** FUN_7101850830
- **Callees:** FUN_7101341d50;FUN_710135a0f0;FUN_710135ac80;FUN_710135bea0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_71014aa930__71014aa930.c)  [cfg](../decompiled/FUN_71014aa930__71014aa930.mmd)
- **Clone hash:** `b011ce5fe471cc6f`

```c

void FUN_71014aa930(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
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
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
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
  
  FUN_7101341d50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateLoadAsyncForHomeRunContest",(long ****)FUN_71014ab2d0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateSetupBatterOrder",(long ****)FUN_71014ab360,param_4,
// ... (423 more lines)
```

## 5. `FUN_71020fbb90`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** STATE
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

## 6. `FUN_710151e4b0`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710151e4b0`  (offset `0x151e4b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710151e4b0(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1784 bytes / 60 bb / 2 incoming refs
- **Match values:** State
- **Strings touched:** StateLoadAsyncForStaffRoll;StateWaitForSyncWhenBeginning;StateAppearanceProduction;StateMeleeForStaffRoll;StateEndProduction;StatePause;StateOperatorHUDDone;StateDisconnectSyncCommunication;StateResult;StateApplyParameters;StateFadeOutWhenEndingForStaffRoll;StateWaitForSyncWhenEnding
- **Callers:** FUN_7101853990
- **Callees:** FUN_7101341d50;FUN_710135a0f0;FUN_710135ac80;FUN_710135bea0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_710151e4b0__710151e4b0.c)  [cfg](../decompiled/FUN_710151e4b0__710151e4b0.mmd)
- **Clone hash:** `a57b0e3dbbb87bdf`

```c

void FUN_710151e4b0(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
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
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
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
  
  FUN_7101341d50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateLoadAsyncForStaffRoll",(long ****)FUN_710151ebb0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateWaitForSyncWhenBeginning",(long ****)FUN_710151ec40,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateAppearanceProduction",(long ****)FUN_710151ecd0,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateMeleeForStaffRoll",(long ****)FUN_710151ed50,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateEndProduction",(long ****)FUN_710151edd0,param_4,
// ... (302 more lines)
```

## 7. `FUN_71013444c0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71013444c0`  (offset `0x13444c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71013444c0(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 908 bytes / 49 bb / 2 incoming refs
- **Match values:** State
- **Strings touched:** StateSampleAsync;StateInitializeAsync;StateLoadAsync;StateSetupAsync;StateRightExpression;StateFadeOutWhenEnding;StateReset;StateExit
- **Callers:** FUN_7101341d50
- **Callees:** FUN_710135bea0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_71013444c0__71013444c0.c)  [cfg](../decompiled/FUN_71013444c0__71013444c0.mmd)
- **Clone hash:** `8c8105162cc0ce94`

```c

void FUN_71013444c0(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_1[5] != 0) {
    puVar4 = (ulong *)param_1[4];
    while (puVar4 != (ulong *)0x0) {
      uVar8 = *puVar4;
      plVar2 = (long *)puVar4[3];
      if ((plVar2 != (long *)0x0) &&
         (iVar1 = (int)plVar2[2] + -1, *(int *)(plVar2 + 2) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar2 + 8))();
      }
      FUN_710392eb40((ulong)puVar4);
      puVar4 = (ulong *)uVar8;
    }
    uVar8 = param_1[3];
    param_1[4] = 0;
    if (uVar8 != 0) {
      uVar3 = uVar8 & 3;
      if (uVar8 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar6 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(param_1[2] + lVar6) = 0;
          *(undefined8 *)(param_1[2] + lVar6 + 8) = 0;
// ... (117 more lines)
```

## 8. `FUN_71021723e0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021723e0`  (offset `0x21723e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021723e0(void)`
- **Size / BBs / Incoming:** 13744 bytes / 25 bb / 1 incoming refs
- **Match values:** STATE
- **Strings touched:** FIGHTER_PIKMIN_INSTANCE_WORK_INT_START;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PRE_PIKMIN_VARIATION;FIGHTER_PIKMIN_INSTANCE_WORK_INT_BEFORE_PRE_PIKMIN_VARIATION;FIGHTER_PIKMIN_INSTANCE_WORK_INT_ALLOCATE_COLLISION_GROUP;FIGHTER_PIKMIN_INSTANCE_WORK_INT_TROOPS_MANAGER_ADDRESS;FIGHTER_PIKMIN_INSTANCE_WORK_INT_WING_PIKMIN_END_EFFECT_HANDLE;FIGHTER_PIKMIN_INSTANCE_WORK_INT_WING_PIKMIN_END_FRAME_COUNT;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_CURSOR_HANDLE;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_ANTENNA_EFFECT_HANDLE;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_1;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_2;FIGHTER_PIKMIN_INSTANCE_WORK_INT_THROW_PIKMIN_VARIATION;FIGHTER_PIKMIN_INSTANCE_WORK_INT_TERM;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_FRAME;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_CATCH_MOTION_RATE;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_START;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOP;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_EX1;FIGHTER_PIKMIN_STATUS_ATTACK_AIR_WORK_FLAG_SYNC;FIGHTER_PIKMIN_STATUS_ATTACK_AIR_WORK_FLAG_DETACH;FIGHTER_PIKMIN_INSTANCE_ATTACK_AIR_WORK_FLAG_FALL_SPECIAL;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_CATCH_CUT;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_HOMERUN_CONTEST;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_CHANGE_CATCH_MOTION_RATE;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_PIKMIN_CATCH_DASH_STATUS;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021723e0__71021723e0.c)  [cfg](../decompiled/FUN_71021723e0__71021723e0.mmd)
- **Clone hash:** `8980d91ab7f317ab`

```c

void FUN_71021723e0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_START",(undefined **)0x100000bc
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PRE_PIKMIN_VARIATION",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_BEFORE_PRE_PIKMIN_VARIATION",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_ALLOCATE_COLLISION_GROUP",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_TROOPS_MANAGER_ADDRESS",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_WING_PIKMIN_END_EFFECT_HANDLE",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_WING_PIKMIN_END_FRAME_COUNT",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_CURSOR_HANDLE",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_ANTENNA_EFFECT_HANDLE",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0"
                 ,(undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_1"
                 ,(undefined **)0x100000c7,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (1571 more lines)
```

## 9. `FUN_7101bcd2c0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bcd2c0`  (offset `0x1bcd2c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bcd2c0(int * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 304 bytes / 25 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** mel_mockbattle_state_wait;mel_mockbattle_state_soon;mel_mockbattle_state_mel_start
- **Callees:** FUN_710377a120;FUN_710377aee0
- **Files:** [decomp](../decompiled/FUN_7101bcd2c0__7101bcd2c0.c)  [cfg](../decompiled/FUN_7101bcd2c0__7101bcd2c0.mmd)
- **Clone hash:** `5e448cf452672bf8`

```c

void FUN_7101bcd2c0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = param_1[0x45];
  if (iVar1 == 2) {
    pcVar2 = "mel_mockbattle_tournament_ok";
    if (*param_1 != 1) {
      pcVar2 = (char *)0x0;
    }
    if (*param_1 == 0) {
      pcVar2 = "mel_mockbattle_state_mel_start";
      goto LAB_7101bcd340;
    }
LAB_7101bcd324:
    if (pcVar2 != (char *)0x0) goto LAB_7101bcd340;
  }
  else {
    if (iVar1 == 1) {
      pcVar2 = "mel_mockbattle_state_soon";
    }
    else {
      if (iVar1 != 0) goto LAB_7101bcd348;
      pcVar2 = "mel_mockbattle_tournament_txt_search";
      if (*param_1 != 1) {
        pcVar2 = (char *)0x0;
      }
      if (*param_1 != 0) goto LAB_7101bcd324;
      pcVar2 = "mel_mockbattle_state_wait";
    }
LAB_7101bcd340:
    FUN_710377a120((long)(param_1 + 0x36),pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
LAB_7101bcd348:
  iVar1 = param_1[0x44];
  if (iVar1 == 2) {
// ... (34 more lines)
```

## 10. `FUN_710225b990`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** STATE
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

## 11. `FUN_7101e85360`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e85360`  (offset `0x1e85360`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e85360(undefined8 * param_1, long param_2, byte param_3)`
- **Size / BBs / Incoming:** 968 bytes / 62 bb / 6 incoming refs
- **Match values:** state
- **Strings touched:** states_enable_open;states_close;states_open_off;states_open_on
- **Callers:** FUN_710194e570;FUN_7101e7b7a0;FUN_7101e7bb40;FUN_7101e7c2e0;FUN_7101e7ec90
- **Callees:** FUN_7103778300
- **Files:** [decomp](../decompiled/FUN_7101e85360__7101e85360.c)  [cfg](../decompiled/FUN_7101e85360__7101e85360.mmd)
- **Clone hash:** `2d0784b9dcceead5`

```c

void FUN_7101e85360(undefined8 *param_1,long param_2,byte param_3)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  
  uVar6 = (ulong)param_3;
  plVar3 = *(long **)param_1[1];
  uVar4 = plVar3[1];
  uVar7 = uVar4 - 1;
  uVar12 = (uint)param_3;
  if ((uVar7 & uVar4) == 0) {
    lVar9 = *plVar3;
    plVar11 = *(long **)(lVar9 + (uVar7 & uVar6) * 8);
    do {
      do {
        plVar11 = (long *)*plVar11;
      } while (plVar11[1] != uVar6);
      pbVar8 = (byte *)(plVar11 + 2);
    } while (*pbVar8 != uVar12);
  }
  else {
    uVar10 = uVar6;
    if (uVar4 <= uVar6) {
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar10 = uVar6 / uVar4;
      }
      uVar10 = uVar6 - uVar10 * uVar4;
// ... (149 more lines)
```

## 12. `FUN_7101341d50`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101341d50`  (offset `0x1341d50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101341d50(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1312 bytes / 53 bb / 5 incoming refs
- **Match values:** State
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

## 13. `FUN_7101f13090`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f13090`  (offset `0x1f13090`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f13090(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2440 bytes / 124 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** selector_tlmenu_movie;set_tlmenu_movie_00;set_tlmenu_movie_01;set_tlmenu_movie_02;set_tlmenu_movie_03;set_tlmenu_movie_04;tlmenu_movie;selector_tlmenu_sound;set_tlmenu_sound_00;set_tlmenu_sound_01;set_tlmenu_sound_02;set_tlmenu_sound_03;mode_empty_03;tlmenu_sound;selector_tlmenu_tellop;set_tlmenu_tellop_00;set_tlmenu_tellop_01;set_tlmenu_tellop_02;tlmenu_tellop;selector_tlmenu_image;set_tlmenu_image_00;set_tlmenu_image_01;set_tlmenu_image_02;set_tlmenu_image_03;tlmenu_image;state_enable;state_disable;_sound;out%s
- **Callees:** FUN_7101f1cb60;FUN_71024076d0;FUN_7103313f20;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_7103771a80;FUN_7103776290;FUN_7103776640;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101f13090__7101f13090.c)  [cfg](../decompiled/FUN_7101f13090__7101f13090.mmd)
- **Clone hash:** `e3beab6ecbc87192`

```c

void FUN_7101f13090(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 extraout_x1;
  char *pcVar8;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  int iVar9;
  long *plVar10;
  code *pcVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int *piVar18;
  undefined **local_1b0;
  undefined **local_1a8;
  long local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  byte ***local_170;
  ulong local_168;
// ... (417 more lines)
```

## 14. `FUN_71018766e0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018766e0`  (offset `0x18766e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018766e0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8172 bytes / 350 bb / 1 incoming refs
- **Match values:** STATE
- **Strings touched:** layout_root;exit_code;BUTTON_ID_BODY_SIZE;BUTTON_ID_HEAD_OPTION;BUTTON_ID_BODY_OPTION;BUTTON_ID_STATE_OPTION;BUTTON_ID_WEIGHT;BUTTON_ID_SPEED;BUTTON_ID_CAMERA;BUTTON_ID_OK;BODY_SIZE_TITLE_MSG;HEAD_OPTION_TITLE_MSG;BODY_OPTION_TITLE_MSG;STATE_OPTION_TITLE_MSG;WEIGHT_TITLE_MSG;SPEED_TITLE_MSG;CAMERA_TITLE_MSG;BODY_SIZE_BUTTON_NUM;HEAD_OPTION_BUTTON_NUM;BODY_OPTION_BUTTON_NUM;STATE_OPTION_BUTTON_NUM;WEIGHT_BUTTON_NUM;SPEED_BUTTON_NUM;CAMERA_BUTTON_NUM;CAMERA_NORMAL;CAMERA_FIX;CAMERA_LOOK_DOWN;BUTTON_EX_LEFT;BUTTON_EX_RIGHT;get_sub_selector_item_text;set_rule_special;get_help_text;...
- **Callees:** FUN_71000001c0;FUN_7100653490;FUN_7101764000;FUN_710323b9e0;FUN_710323beb0;FUN_710323cb80;FUN_71032631a0;FUN_71032b23e0;FUN_71032cad20;FUN_71032caea0;FUN_71032cb040;FUN_71033743c0;FUN_7103375650;FUN_7103376af0;FUN_7103778630;FUN_710392e290;...
- **Files:** [decomp](../decompiled/FUN_71018766e0__71018766e0.c)  [cfg](../decompiled/FUN_71018766e0__71018766e0.mmd)
- **Clone hash:** `ffde119c5e675e8d`

```c

void FUN_71018766e0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  void *pvVar13;
  long ***ppplVar14;
  undefined1 *puVar15;
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
  undefined8 uVar16;
  long *********ppppppppplVar17;
  undefined **ppuVar18;
  long ****pppplVar19;
// ... (1390 more lines)
```

## 15. `FUN_7101bcd210`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bcd210`  (offset `0x1bcd210`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bcd210(int * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 172 bytes / 14 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** mel_mockbattle_state_wait;mel_mockbattle_state_soon;mel_mockbattle_state_mel_start
- **Callees:** FUN_710377a120
- **Files:** [decomp](../decompiled/FUN_7101bcd210__7101bcd210.c)  [cfg](../decompiled/FUN_7101bcd210__7101bcd210.mmd)
- **Clone hash:** `889895ff86c2bb15`

```c

void FUN_7101bcd210(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_1[0x44];
  if (iVar2 == 2) {
    pcVar1 = "mel_mockbattle_tournament_ok";
    if (*param_1 != 1) {
      pcVar1 = (char *)0x0;
    }
    if (*param_1 == 0) {
      pcVar1 = "mel_mockbattle_state_mel_start";
    }
    else {
LAB_7101bcd274:
      if (pcVar1 == (char *)0x0) goto LAB_7101bcd29c;
    }
  }
  else if (iVar2 == 1) {
    pcVar1 = "mel_mockbattle_state_soon";
  }
  else {
    if (iVar2 != 0) goto LAB_7101bcd29c;
    pcVar1 = "mel_mockbattle_tournament_txt_search";
    if (*param_1 != 1) {
      pcVar1 = (char *)0x0;
    }
    if (*param_1 != 0) goto LAB_7101bcd274;
    pcVar1 = "mel_mockbattle_state_wait";
  }
  FUN_710377a120((long)(param_1 + 0x36),pcVar1,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar2 = param_1[0x44];
LAB_7101bcd29c:
  param_1[0x45] = iVar2;
  if (0 < param_1[0x2f]) {
    param_1[0x2f] = param_1[0x2f] + -1;
// ... (4 more lines)
```

## 16. `FUN_71038c6a10`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038c6a10`  (offset `0x38c6a10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71038c6a10(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, ulong param_7, undefined8 * param_8)`
- **Size / BBs / Incoming:** 22068 bytes / 1181 bb / 1 incoming refs
- **Match values:** State
- **Strings touched:** SystemLambert;select_item;nu::Final;SystemLambertVS;SystemLambertPS;DiffuseMap;DiffuseSampler;BlendState0;Layer0UVTransform;RasterizerState0;SystemLambertTexture2DArray;SystemLambertTexture2DArrayPS;DiffuseMapArray;textureIndex;SystemLambertNonTexture;SystemLambertNonTextureVS;SystemLambertNonTexturePS;NODE_PRE_REFRACT_BLEND;SystemConstant;SystemConstantVS;SystemConstantPS;SystemConstantNonTexture
- **Callers:** FUN_71038b7390
- **Callees:** FUN_71037b2bc0;FUN_71037c3a70;FUN_71037cfe00;FUN_710385a990;FUN_71038b3640;FUN_71038b3960;FUN_71038b4c00;FUN_71038b5080;FUN_71038b51b0;FUN_71038b64a0;FUN_71038b69b0;FUN_71038cc050;FUN_71038cc2b0;FUN_710392e1f0;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_71038c6a10__71038c6a10.c)  [cfg](../decompiled/FUN_71038c6a10__71038c6a10.mmd)
- **Clone hash:** `83e1faf16187f532`

```c

/* WARNING: Removing unreachable block (ram,0x0071038c874c) */
/* WARNING: Removing unreachable block (ram,0x0071038c9cf4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_71038c6a10(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,byte ****param_6,ulong param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
// ... (4703 more lines)
```

## 17. `FUN_7101e7d350`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e7d350`  (offset `0x1e7d350`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e7d350(long param_1)`
- **Size / BBs / Incoming:** 1700 bytes / 105 bb / 4 incoming refs
- **Match values:** state
- **Strings touched:** states_open_on;hide_icon_caution;states_close;show_icon_caution
- **Callers:** FUN_710194e570;FUN_7101950180;FUN_7101e7c750
- **Callees:** FUN_710326a3e0;FUN_7103778300
- **Files:** [decomp](../decompiled/FUN_7101e7d350__7101e7d350.c)  [cfg](../decompiled/FUN_7101e7d350__7101e7d350.mmd)
- **Clone hash:** `9226132953d17008`

```c

void FUN_7101e7d350(long param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  char *pcVar15;
  byte *pbVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    local_80 = (char *)0x635f736574617473;
    uVar23 = 0x811c9dc5;
    local_78 = 0x65736f6c;
    uVar12 = 0x73;
    local_74 = 0;
    pbVar16 = (byte *)((long)&local_80 + 1);
    do {
// ... (316 more lines)
```

## 18. `FUN_71018b3d90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018b3d90`  (offset `0x18b3d90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018b3d90(long param_1, long param_2)`
- **Size / BBs / Incoming:** 7432 bytes / 295 bb / 1 incoming refs
- **Match values:** state
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

## 19. `FUN_71038582b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038582b0`  (offset `0x38582b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71038582b0(uint * param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, long * * * * param_7, allocator * param_8)`
- **Size / BBs / Incoming:** 9480 bytes / 400 bb / 1 incoming refs
- **Match values:** State
- **Strings touched:** nu4.0 Debug Font;__nuDebugFontVS_main__;__nuDebugFontPS_main__;nu::Builtin::DebugFont;nu::Debug;textColor;backColor;blendState;select_item;rasterizerState
- **Callers:** FUN_71038572f0
- **Callees:** nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance;FUN_710356bff0;FUN_7103590cf0;FUN_7103591e00;FUN_7103593520;FUN_7103598d60;FUN_710359b630;FUN_710359d620;FUN_71037b2bc0;FUN_71037c3a70;FUN_71037c9810;FUN_71037cfe00;FUN_71037cffc0;FUN_71037d4f00;FUN_71037d5a80;FUN_71037d8640;...
- **Files:** [decomp](../decompiled/FUN_71038582b0__71038582b0.c)  [cfg](../decompiled/FUN_71038582b0__71038582b0.mmd)
- **Clone hash:** `6257b5516dca5f35`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71038582b0(uint *param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   byte ****param_6,long ****param_7,allocator *param_8)

{
  long ****pppplVar1;
  long ****pppplVar2;
  byte ***pppbVar3;
  long ****pppplVar4;
  long **pplVar5;
  char cVar6;
  bool bVar7;
  ushort uVar8;
  ushort uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  byte *pbVar25;
  byte ****ppppbVar26;
  byte ****ppppbVar27;
  byte ****ppppbVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined6 uVar31;
  int iVar32;
// ... (2275 more lines)
```

## 20. `FUN_7101eacc60`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101eacc60`  (offset `0x1eacc60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101eacc60(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9288 bytes / 426 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** scroll;set_scr_sort;scroller_;sub_menu_;mode_empty_03;sort_window_;sort_window_facade_;state_in_manager;state_out_manager;is_full;is_max_num;is_error_input_device_kind;is_not_purchased_bgm_id;check_no_dlc_auth_process;is_no_dlc_auth_process_busy;is_no_dlc_auth_eshop_selected;set_preview;sort_list;backup_list_selected_id;gauge_parts_on;select_list_from_backup_id;is_favorite;switch_favorite;post_stage;is_finished_post;is_succeeded_post;delete_stage;setup_submenu;get_submenu_result;MAKE_PANEL_INDEX;LIST_ITEM_NUM;SORT_ID_CREATED;...
- **Callers:** FUN_710196dfc0
- **Callees:** std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_71019c1c50;FUN_7101ccc7b0;FUN_7101ccce30;FUN_7101eaa4a0;FUN_7101ebc290;FUN_71032cb040;FUN_71032cc410;FUN_71032ccb70;FUN_71032d6000;FUN_71032d6470;FUN_7103301380;FUN_71033744b0;FUN_71033745a0;FUN_7103374690;FUN_7103375650;...
- **Files:** [decomp](../decompiled/FUN_7101eacc60__7101eacc60.c)  [cfg](../decompiled/FUN_7101eacc60__7101eacc60.mmd)
- **Clone hash:** `26c67a891fe6650e`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101eacc60(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long **pplVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  bool bVar9;
  int iVar10;
  long **pplVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  byte ***pppbVar16;
  ulong uVar17;
  long ***ppplVar18;
  long ***ppplVar19;
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
// ... (1805 more lines)
```

## 21. `FUN_7103653080`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103653080`  (offset `0x3653080`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103653080(long * * * * * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1692 bytes / 70 bb / 1 incoming refs
- **Match values:** State
- **Strings touched:** GlareSubstance;dys_yoga03_l_03_set;GL_PS_NM_BASE;GL_PS_NM_COPY8;GL_PS_NM_COPY16;GL_PS_NM_COPY32;plate_side;GL_PS_NM_COPY64;GL_PS_NM_MERGE;nuBlendStatePlug0;nuBlendStatePlug1
- **Callers:** FUN_71035a46e0
- **Callees:** FUN_710361f020;FUN_7103653920;FUN_7103653a50;FUN_7103856830;FUN_7103864d90;FUN_710392e1f0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strlen;<EXTERNAL>::memcpy;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::nu::VirtualFreeHook;<EXTERNAL>::nu::VirtualAllocHook;<EXTERNAL>::std::__basic_string_common<true>::__throw_length_error;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7103653080__7103653080.c)  [cfg](../decompiled/FUN_7103653080__7103653080.mmd)
- **Clone hash:** `a40f31970b9d48cf`

```c

void FUN_7103653080(long *****param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  undefined8 *puVar2;
  int iVar3;
  size_t __n;
  long lVar4;
  long *****ppppplVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ***ppplVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  char *pcVar17;
  long lVar18;
  void *pvVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  byte local_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 local_100;
  undefined2 uStack_ff;
  undefined5 uStack_fd;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined1 local_e8;
  undefined2 uStack_e7;
  undefined5 uStack_e5;
// ... (323 more lines)
```

## 22. `FUN_7101fa11c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** state
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

## 23. `FUN_71001d1e40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d1e40`  (offset `0x1d1e40`)
- **Namespace:** `Global`
- **Signature:** `bool __cdecl FUN_71001d1e40(long param_1, int param_2)`
- **Size / BBs / Incoming:** 276 bytes / 10 bb / 4 incoming refs
- **Match values:** State
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/CallContext.cpp;GetState() == CallContext::CallInProgress
- **Callers:** thunk_FUN_71001d1e40;FUN_7100238810;FUN_7100247670;FUN_710370fc20
- **Callees:** FUN_71001b2e80;FUN_71001b2e90;FUN_71001b46a0;FUN_71001b4730;FUN_71001b4760;FUN_71001d1f60;FUN_71001d2110
- **Files:** [decomp](../decompiled/FUN_71001d1e40__71001d1e40.c)  [cfg](../decompiled/FUN_71001d1e40__71001d1e40.mmd)
- **Clone hash:** `bb6734b96c9a3457`

```c

bool FUN_71001d1e40(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 auStack_70 [7];
  byte local_34 [4];
  
  uVar4 = *(uint *)(param_1 + 0x14);
  if (uVar4 == 1) {
    local_34[0] = 0;
    uVar3 = FUN_71001d1f60((ulong)(param_2 != 0),param_2,0,thunk_FUN_71001d1e40,param_1,local_34);
    if ((uVar3 & 1) == 0) {
      FUN_71001b46a0(auStack_70,10,param_2);
      FUN_71001b2e80((long)auStack_70);
      do {
        uVar4 = *(uint *)(param_1 + 0x14);
        if (uVar4 != 1) goto LAB_71001d1f1c;
        iVar2 = FUN_71001b4760((long)auStack_70);
        FUN_71001d2110(iVar2);
        uVar3 = FUN_71001b2e90((long)auStack_70);
      } while ((uVar3 & 1) != 0);
      uVar4 = *(uint *)(param_1 + 0x14);
LAB_71001d1f1c:
      bVar1 = uVar4 == 4 || (uVar4 | 1) == 3;
      FUN_71001b4730();
    }
    else {
      bVar1 = local_34[0] != 0;
    }
  }
  else {
    bVar1 = uVar4 == 4 || (uVar4 | 1) == 3;
  }
  return bVar1;
}


```

## 24. `FUN_7100009d00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100009d00`  (offset `0x9d00`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100009d00(long param_1, byte * * param_2, size_t * * * * * * * param_3, size_t * * * * * * * param_4, size_t * * * * * * * param_5, byte * * param_6, size_t * * * * * * * param_7, size_t * * * * * * * param_8)`
- **Size / BBs / Incoming:** 5688 bytes / 367 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** Resolving timed out after %ld milliseconds;select_item;Internal error clearing splay node = %d
;Connection timed out after %ld milliseconds;Operation timed out after %ld milliseconds with %ld out of %ld bytes received;Re-used connection seems dead, get a new one
;Operation timed out after %ld milliseconds with %ld bytes received;Hostname '%s' was found in DNS cache
;dys_yoga03_l_03_set;Pipe broke: handle %p, url = %s
;In state %d with no easy_conn, bail out!

- **Callers:** FUN_7100009aa0
- **Callees:** FUN_7100002af0;FUN_7100002f80;FUN_7100004200;FUN_7100004910;FUN_7100004a10;FUN_7100005a10;FUN_7100005c60;FUN_71000067f0;FUN_7100006870;FUN_71000086c0;FUN_7100008d20;FUN_7100008fc0;FUN_710000c8f0;FUN_710000c920;FUN_710000c950;FUN_710000e660;...
- **Files:** [decomp](../decompiled/FUN_7100009d00__7100009d00.c)  [cfg](../decompiled/FUN_7100009d00__7100009d00.mmd)
- **Clone hash:** `8e0dba2c0a10b389`

```c

/* WARNING: Type propagation algorithm not settling */

int FUN_7100009d00(long param_1,byte **param_2,size_t *******param_3,size_t *******param_4,
                  size_t *******param_5,byte **param_6,size_t *******param_7,size_t *******param_8)

{
  size_t *******pppppppsVar1;
  size_t *******pppppppsVar2;
  long *plVar3;
  size_t *******pppppppsVar4;
  char cVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte **ppbVar16;
  size_t ******ppppppsVar17;
  byte **extraout_x1;
  byte **extraout_x1_00;
  byte **extraout_x1_01;
  byte **extraout_x1_02;
  byte **extraout_x1_03;
  byte **extraout_x1_04;
  byte **extraout_x1_05;
  byte **extraout_x1_06;
  byte **extraout_x1_07;
  byte **extraout_x1_08;
  byte **extraout_x1_09;
  byte **extraout_x1_10;
  byte **extraout_x1_11;
  byte **extraout_x1_12;
  byte **extraout_x1_13;
  byte **extraout_x1_14;
// ... (1163 more lines)
```

## 25. `FUN_7100219360`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100219360`  (offset `0x219360`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100219360(void)`
- **Size / BBs / Incoming:** 84 bytes / 3 bb / 1 incoming refs
- **Match values:** State
- **Strings touched:** ComponentState;SystemComponent
- **Callees:** <EXTERNAL>::strcmp
- **Files:** [decomp](../decompiled/FUN_7100219360__7100219360.c)  [cfg](../decompiled/FUN_7100219360__7100219360.mmd)
- **Clone hash:** `b2fe1327e15f0766`

```c

bool FUN_7100219360(undefined8 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp("ComponentState",param_2);
  if (iVar1 != 0) {
    iVar1 = strcmp("SystemComponent",param_2);
    return iVar1 == 0;
  }
  return true;
}


```

## 26. `FUN_7101e7b370`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e7b370`  (offset `0x1e7b370`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e7b370(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1068 bytes / 63 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** states_forget;cursor_visible_low;color_forget_on;linked_reset;anim_in_all
- **Callees:** FUN_7101e85c50;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101e7b370__7101e7b370.c)  [cfg](../decompiled/FUN_7101e7b370__7101e7b370.mmd)
- **Clone hash:** `7fae184c7874f2e2`

```c

void FUN_7101e7b370(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  long ****pppplVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  long ***ppplVar11;
  long *plVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  void *__src;
  byte *pbVar17;
  byte *pbVar18;
  long ***ppplVar19;
  void *__dest;
  long ***local_88;
  long ***local_80;
  long ***local_78;
  undefined4 local_64;
  
  lVar15 = *(long *)(param_1 + 0x168);
  lVar16 = *(long *)(param_1 + 0x420);
  lVar9 = *(long *)(lVar15 + 0x58);
  if (*(long *)(lVar15 + 0x60) != lVar9) {
    uVar14 = 0;
    do {
      pbVar13 = *(byte **)(lVar16 + 0x40);
      pbVar2 = *(byte **)(lVar16 + 0x48);
      if (pbVar13 != pbVar2) {
// ... (167 more lines)
```

## 27. `FUN_7101519c40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101519c40`  (offset `0x1519c40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101519c40(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1216 bytes / 53 bb / 2 incoming refs
- **Match values:** State
- **Strings touched:** StatePause
- **Callers:** FUN_7103302510
- **Callees:** FUN_7101341d50;FUN_710135a0f0;FUN_710135ac80;FUN_710135bea0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101519c40__7101519c40.c)  [cfg](../decompiled/FUN_7101519c40__7101519c40.mmd)
- **Clone hash:** `83fb13f471c291b8`

```c

void FUN_7101519c40(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
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
  
  FUN_7101341d50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  pcVar3 = FUN_710151a100;
  FUN_710135bea0((long)param_1,(byte *)"StatePause",(long ****)FUN_710151a100,param_4,param_5,
                 param_6,param_7,param_8);
  puVar5 = (ulong *)param_1[0x20];
  lVar4 = param_1[0x21];
  lVar8 = lVar4 - (long)puVar5;
  if (lVar8 != 0) {
    uVar11 = param_1[0x23];
    plVar9 = (long *)((long)puVar5 + (uVar11 >> 5 & 0x7fffffffffffff8));
    lVar10 = *plVar9 + (uVar11 & 0xff) * 0x10;
    while (*(long *)((long)puVar5 + (param_1[0x24] + uVar11 >> 5 & 0x7fffffffffffff8)) +
           (param_1[0x24] + uVar11 & 0xff) * 0x10 != lVar10) {
// ... (218 more lines)
```

## 28. `FUN_71001d5270`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d5270`  (offset `0x1d5270`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001d5270(undefined8 * param_1, long * param_2, int param_3)`
- **Size / BBs / Incoming:** 284 bytes / 10 bb / 2 incoming refs
- **Match values:** State
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/SystemComponent.cpp;TestState()!=Terminated
- **Callers:** FUN_71001d4de0;FUN_71001db690
- **Callees:** FUN_71001b2e80;FUN_71001b2e90;FUN_71001b41d0;FUN_71001b4200;FUN_71001b46a0;FUN_71001b4730;FUN_71001d5110;FUN_71001d7b90
- **Files:** [decomp](../decompiled/FUN_71001d5270__71001d5270.c)  [cfg](../decompiled/FUN_71001d5270__71001d5270.mmd)
- **Clone hash:** `39839c9e6b4a14f2`

```c

void FUN_71001d5270(undefined8 *param_1,long *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 auStack_90 [7];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_34;
  
  FUN_71001d5110(param_2);
  FUN_71001b41d0((undefined4 *)&local_58);
  uVar2 = FUN_71001d7b90((ulong)(param_3 != 0),param_3,FUN_71001db690,param_2,
                         (undefined4 *)&local_58);
  if ((uVar2 & 1) == 0) {
    FUN_71001b46a0(auStack_90,10,param_3);
    FUN_71001b2e80((long)auStack_90);
    do {
      iVar1 = (**(code **)(*param_2 + 0x70))(param_2);
      if (iVar1 == 0x40) break;
      uVar2 = FUN_71001b2e90((long)auStack_90);
    } while ((uVar2 & 1) != 0);
    iVar1 = (**(code **)(*param_2 + 0x70))(param_2);
    if (iVar1 == 0x40) {
      local_34 = 0x10001;
    }
    else {
      local_34 = 0x8001000b;
    }
    FUN_71001b4200((undefined4 *)param_1,&local_34);
    FUN_71001b4730();
  }
  else {
    param_1[2] = local_48;
    *param_1 = local_58;
    param_1[1] = uStack_50;
  }
  return;
// ... (2 more lines)
```

## 29. `FUN_71020a72d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020a72d0`  (offset `0x20a72d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020a72d0(long param_1)`
- **Size / BBs / Incoming:** 1632 bytes / 4 bb / 2 incoming refs
- **Match values:** state
- **Strings touched:** PhysicsModule;update_rope_matrix;reset_swing;gauge_parts_on;set_swing_only_anim;TRANS_A_JUMP_AERIAL;set_swing_joint_name;set_swing_wind;set_swing_rate;set_swing_rebirth;set_2nd_gravity;set_2nd_status;get_2nd_status;set_2nd_end_pos;get_2nd_line_length;set_2nd_line_length_all;get_2nd_node_num;get_2nd_active_node_num;get_2nd_active_length;set_2nd_active_node_num;is_2nd_precede;set_2nd_precede;is_2nd_flip;set_2nd_flip;set_2nd_back_speed;set_ik;set_ik_target_pos;set_ik_target_dir;get_ik_end_joint_id;stop_charge;set_2nd_air_resistance;set_2nd_air_resistance_2;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020a72d0__71020a72d0.c)  [cfg](../decompiled/FUN_71020a72d0__71020a72d0.mmd)
- **Clone hash:** `a748235c8dcaf75a`

```c

void FUN_71020a72d0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"PhysicsModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_28,(uint *)"update_rope_matrix",(long ****)FUN_710209fd00,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"reset_swing",(long ****)FUN_710209ff10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_only_anim",(long ****)FUN_710209ffc0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_joint_name",(long ****)FUN_71020a0130,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_wind",(long ****)FUN_71020a0390,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_rate",(long ****)FUN_71020a0500,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_rebirth",(long ****)FUN_71020a06d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_2nd_gravity",(long ****)FUN_71020a0840,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_2nd_status",(long ****)FUN_71020a0a10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_2nd_status",(long ****)FUN_71020a0b40,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_2nd_end_pos",(long ****)FUN_71020a0c20,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_2nd_line_length",(long ****)FUN_71020a1170,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
// ... (112 more lines)
```

## 30. `FUN_7101c58580`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c58580`  (offset `0x1c58580`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c58580(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3116 bytes / 216 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** balloon_off;state_catch_ng
- **Callees:** FUN_7101c591b0;FUN_7101c59330;FUN_7101c59660;FUN_7101c597c0;FUN_7101c76f30;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c58580__7101c58580.c)  [cfg](../decompiled/FUN_7101c58580__7101c58580.mmd)
- **Clone hash:** `6a7beceee513a834`

```c

void FUN_7101c58580(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool bVar17;
  bool bVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long *plVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined **local_40;
  ulong local_38;
  
  pcVar1 = (char *)(param_1 + 0x1b20);
// ... (645 more lines)
```

## 31. `FUN_710151aa00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710151aa00`  (offset `0x151aa00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710151aa00(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1216 bytes / 52 bb / 2 incoming refs
- **Match values:** State
- **Strings touched:** StatePractice
- **Callers:** FUN_7101851340
- **Callees:** FUN_7101341d50;FUN_710135a0f0;FUN_710135ac80;FUN_710135bea0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_710151aa00__710151aa00.c)  [cfg](../decompiled/FUN_710151aa00__710151aa00.mmd)
- **Clone hash:** `186ebc4c0c0cbe3e`

```c

void FUN_710151aa00(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
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
  
  FUN_7101341d50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  pcVar3 = FUN_710151aec0;
  FUN_710135bea0((long)param_1,(byte *)"StatePractice",(long ****)FUN_710151aec0,param_4,param_5,
                 param_6,param_7,param_8);
  puVar5 = (ulong *)param_1[0x20];
  lVar4 = param_1[0x21];
  lVar8 = lVar4 - (long)puVar5;
  if (lVar8 != 0) {
    uVar11 = param_1[0x23];
    plVar9 = (long *)((long)puVar5 + (uVar11 >> 5 & 0x7fffffffffffff8));
    lVar10 = *plVar9 + (uVar11 & 0xff) * 0x10;
    while (*(long *)((long)puVar5 + (param_1[0x24] + uVar11 >> 5 & 0x7fffffffffffff8)) +
           (param_1[0x24] + uVar11 & 0xff) * 0x10 != lVar10) {
// ... (218 more lines)
```

## 32. `FUN_7100219350`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100219350`  (offset `0x219350`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100219350(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** State
- **Strings touched:** ComponentState
- **Files:** [decomp](../decompiled/FUN_7100219350__7100219350.c)  [cfg](../decompiled/FUN_7100219350__7100219350.mmd)
- **Clone hash:** `e31ba5743adfffa1`

```c

char * FUN_7100219350(void)

{
  return "ComponentState";
}


```

## 33. `FUN_7101c56ec0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c56ec0`  (offset `0x1c56ec0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c56ec0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3392 bytes / 232 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** balloon_off;rank_off;mode_empty_03;rank_%d;state_catch_ok
- **Callees:** FUN_71003a4ca0;FUN_7101c591b0;FUN_7101c59330;FUN_7101c59930;FUN_7101c76f30;FUN_71024076d0;FUN_7103313f20;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c56ec0__7101c56ec0.c)  [cfg](../decompiled/FUN_7101c56ec0__7101c56ec0.mmd)
- **Clone hash:** `f7f3b18273246fe4`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101c56ec0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  undefined **ppuVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  long *plVar9;
  undefined8 uVar10;
  byte ****ppppbVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  int *piVar15;
  char cVar16;
  char *pcVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  byte ****unaff_x22;
  undefined **local_78;
  undefined **local_70;
  long local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(int *)(param_1 + 0x2c4) == 0xb4) {
    if (*(uint *)(param_1 + 700) < 0x13) {
// ... (585 more lines)
```

## 34. `FUN_7101c51ef0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c51ef0`  (offset `0x1c51ef0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c51ef0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5556 bytes / 351 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** txt_03;mnu_online_room_inside_time;balloon_off;state_catch_ok;figher_panel_in;ol_flag_icon_off
- **Callees:** FUN_710175dfc0;FUN_7101c591b0;FUN_7101c59330;FUN_7101c5a2d0;FUN_7101c5a440;FUN_7101c5a730;FUN_7101c5a900;FUN_7101c76f30;FUN_71024076d0;FUN_7103313f20;FUN_710373b540;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710377a280;FUN_710377aee0;...
- **Files:** [decomp](../decompiled/FUN_7101c51ef0__7101c51ef0.c)  [cfg](../decompiled/FUN_7101c51ef0__7101c51ef0.mmd)
- **Clone hash:** `25d6c94d0a9b4693`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101c51ef0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  long ********pppppppplVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar14;
  long ****pppplVar15;
  long *********ppppppppplVar16;
  byte ****ppppbVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined1 auVar21 [16];
  long ********local_88;
  long ********local_80;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
// ... (950 more lines)
```

## 35. `FUN_7100176560`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176560`  (offset `0x176560`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176560(void)`
- **Size / BBs / Incoming:** 448 bytes / 17 bb / 3 incoming refs
- **Match values:** State
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;LocalHostMigrationJob::ChangeAllowParticipatingState
- **Callees:** FUN_71000b1cf0;FUN_71000b28c0;FUN_71000b2b70;FUN_71000b4300;FUN_71000bb5d0;FUN_71000bb680;FUN_71000be920;FUN_71000be940;FUN_71000beb80;FUN_7100172880;FUN_710017f110;FUN_7100181120
- **Files:** [decomp](../decompiled/FUN_7100176560__7100176560.c)  [cfg](../decompiled/FUN_7100176560__7100176560.mmd)
- **Clone hash:** `edb2e6dc8ceaf7a4`

```c

undefined8 FUN_7100176560(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  undefined4 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined **appuStack_c0 [5];
  int aiStack_98 [4];
  undefined **ppuStack_88;
  undefined4 uStack_80;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar2 = FUN_7100181120(*(long *)(param_1 + 0x78),1);
    if ((uVar2 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x78);
      uVar6 = 1;
    }
    else {
      ppuStack_88 = (undefined **)0x0;
      FUN_71000bb5d0(&ppuStack_88);
      lVar8 = (long)ppuStack_88 - *(long *)(param_1 + 0x70);
      plVar3 = FUN_71000bb680();
      lVar4 = 0;
      if (*plVar3 != 0) {
        lVar4 = lVar8 / *plVar3;
      }
      if (lVar4 < 0x1b59) {
        return 5;
      }
      lVar4 = *(long *)(param_1 + 0x78);
      lVar8 = 0;
      do {
        lVar4 = lVar4 + lVar8;
// ... (41 more lines)
```

## 36. `FUN_7101c51160`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c51160`  (offset `0x1c51160`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c51160(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3472 bytes / 237 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** balloon_off;ring_fighter_%02d;state_catch_ok;anim_ready
- **Callees:** FUN_71003a4ca0;FUN_7101c59330;FUN_7101c59930;FUN_7101c5d460;FUN_7101c5d580;FUN_7101c76f30;FUN_71024076d0;FUN_7103313f20;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c51160__7101c51160.c)  [cfg](../decompiled/FUN_7101c51160__7101c51160.mmd)
- **Clone hash:** `d59474ce22cadf45`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101c51160(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  undefined **ppuVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar12;
  byte ****ppppbVar13;
  undefined4 uVar14;
  long *plVar15;
  byte *pbVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  byte *pbVar20;
  ulong uVar21;
  uint uVar22;
  long ****pppplVar23;
  long lVar24;
  byte ****unaff_x22;
  undefined4 local_110 [4];
  long local_100;
  int local_f8;
  undefined4 local_d0 [2];
  undefined **local_c8;
  long local_c0;
// ... (623 more lines)
```

## 37. `FUN_7101c54190`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c54190`  (offset `0x1c54190`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c54190(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4044 bytes / 267 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** balloon_off;state_catch_ok;anim_fight_set_%02d
- **Callees:** FUN_71003a4ca0;FUN_7101c591b0;FUN_7101c59330;FUN_7101c76f30;FUN_71037780e0;FUN_7103778300;FUN_7103778ab0;FUN_710377aee0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c54190__7101c54190.c)  [cfg](../decompiled/FUN_7101c54190__7101c54190.mmd)
- **Clone hash:** `378337babcccd66d`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c54190(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  long ***ppplVar9;
  ulong uVar10;
  undefined8 uVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  uint uVar14;
  long lVar15;
  long **pplVar16;
  byte *pbVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  byte *pbVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  byte local_cc;
  undefined **local_c8;
  long ***local_c0 [8];
// ... (730 more lines)
```

## 38. `FUN_71018907e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018907e0`  (offset `0x18907e0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71018907e0(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3860 bytes / 214 bb / 12 incoming refs
- **Match values:** state
- **Strings touched:** state_catch_ok
- **Callers:** FUN_7101889200;FUN_7101889980;FUN_7101889dc0;FUN_710188b110;FUN_7101892c60;FUN_7101899c20
- **Callees:** FUN_71016b6a10;FUN_71017abd00;FUN_7101891700;FUN_7101c60880;FUN_7101c6cb80;FUN_7103778300;FUN_710377aee0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memmove;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71018907e0__71018907e0.c)  [cfg](../decompiled/FUN_71018907e0__71018907e0.mmd)
- **Clone hash:** `30a5b9a5a2f90410`

```c

undefined8
FUN_71018907e0(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  ushort *puVar3;
  byte bVar4;
  size_t sVar5;
  undefined8 *puVar6;
  bool bVar7;
  long *plVar8;
  long ****pppplVar9;
  byte ****ppppbVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long ***ppplVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *__dest;
  long *plVar26;
  long *plVar27;
  long lVar28;
  undefined8 uVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  undefined8 *puVar33;
// ... (753 more lines)
```

## 39. `FUN_7100176720`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176720`  (offset `0x176720`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176720(void)`
- **Size / BBs / Incoming:** 216 bytes / 5 bb / 2 incoming refs
- **Match values:** State
- **Strings touched:** LocalHostMigrationJob::WaitChangeAllowParticipatingState
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_7100176130;FUN_7100181270;FUN_7100182610;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100176720__7100176720.c)  [cfg](../decompiled/FUN_7100176720__7100176720.mmd)
- **Clone hash:** `2ff31330c74fccb2`

```c

undefined8 FUN_7100176720(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int aiStack_58 [4];
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  uVar1 = FUN_7100181270(*(long *)(param_1 + 0x78));
  FUN_7100182610(aiStack_38,*(long *)(param_1 + 0x78),*(undefined4 **)(param_1 + 0x60),uVar1);
  if (aiStack_38[0] == 0) {
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitChangeAllowParticipatingState";
    *(code **)(param_1 + 0x30) = FUN_7100176800;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    aiStack_48[0] = 0x4c11;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
    if (aiStack_38[0] != aiStack_48[0]) {
      puVar2 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_58,aiStack_38);
      FUN_71000b41f0(puVar2,aiStack_58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      FUN_7100176130(param_1);
      return 1;
    }
  }
  return 5;
}


```

## 40. `FUN_7101c55160`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c55160`  (offset `0x1c55160`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c55160(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3236 bytes / 225 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** balloon_off;anim_fight_loop_%02d;state_catch_ok
- **Callees:** FUN_71003a4ca0;FUN_7101c591b0;FUN_7101c59330;FUN_7101c597c0;FUN_7101c76f30;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c55160__7101c55160.c)  [cfg](../decompiled/FUN_7101c55160__7101c55160.mmd)
- **Clone hash:** `063c15d3334422db`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101c55160(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long ***ppplVar4;
  undefined **ppuVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  undefined ***pppuVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  byte *pbVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined **local_b0;
  long ***local_a8 [8];
  undefined **local_68;
  undefined **local_60;
  long ***local_58;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x2c4) != 0) {
// ... (577 more lines)
```

## 41. `FUN_7101c57c00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c57c00`  (offset `0x1c57c00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c57c00(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2424 bytes / 181 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** balloon_off;state_catch_ng
- **Callees:** FUN_7101c591b0;FUN_7101c59330;FUN_7101c76f30;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c57c00__7101c57c00.c)  [cfg](../decompiled/FUN_7101c57c00__7101c57c00.mmd)
- **Clone hash:** `1fd372937831012a`

```c

void FUN_7101c57c00(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0x2c4) != 0) {
    return;
  }
  if ((((*(char *)(param_1 + 0xafe) == '\0') || ((*(byte *)(param_1 + 0xaf8) | 1) != 3)) ||
      (3 < *(int *)(param_1 + 0x2c0) - 5U)) || (*(int *)(param_1 + 0x2c0) - 7U < 5)) {
    bVar1 = false;
    if (*(char *)(param_1 + 0xafd) == '\0') goto LAB_7101c57c6c;
LAB_7101c57c88:
    if (*(char *)(param_1 + 0xaf8) == '\x04') {
      bVar2 = *(char *)(param_1 + 0xafa) == '\0';
      goto joined_r0x007101c57ca4;
    }
    bVar2 = false;
    if (!bVar1) goto LAB_7101c57ca8;
LAB_7101c57c74:
    param_3 = 3;
LAB_7101c57cb0:
    FUN_7101c76f30(param_1 + 0x448,0,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c57cbc:
    if (*(char *)(param_1 + 0xce6) == '\0') goto LAB_7101c57d2c;
LAB_7101c57cc4:
    if ((((*(byte *)(param_1 + 0xce0) | 1) != 3) || (3 < *(int *)(param_1 + 0x2c0) - 5U)) ||
// ... (411 more lines)
```

## 42. `FUN_710215b8e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710215b8e0`  (offset `0x215b8e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710215b8e0(void)`
- **Size / BBs / Incoming:** 8640 bytes / 19 bb / 1 incoming refs
- **Match values:** State
- **Strings touched:** FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_START;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_NORMAL_WEAPON_KIND;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_N_KIND_0;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_N_KIND_1;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_N_FLYING_OBJECT_KIND;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_PREV_KIND;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_KIND;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_TABEMONO_COUNT;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_TABEMONO_FRAME;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_PANEL_7_INVALID_FRAME;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_STOCK_ICON_STATE;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_TERM;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_GAUGE;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_ATTACK;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_START;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_CHARGE_MAX;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HIT_TABEMONO;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_SPECIAL_HI;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_INHERIT_SPEED;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_FINAL_ATTACK;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_FINAL_WATER;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_REFLECTOR;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_REFLECTOR_BREAK;FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_TERM;ftGameWatchStockIconState;FIGHTER_GAMEWATCH_ABSORBER_GROUP_SPECIAL_LW;FIGHTER_GAMEWATCH_ABSORBER_GROUP_NUM;FIGHTER_GAMEWATCH_ABSORBER_KIND_SPECIAL_LW;FIGHTER_GAMEWATCH_ABSORBER_KIND_NUM;FIGHTER_GAMEWATCH_REFLECTOR_GROUP_SPECIAL_LW;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710215b8e0__710215b8e0.c)  [cfg](../decompiled/FUN_710215b8e0__710215b8e0.mmd)
- **Clone hash:** `f0dba0b6d424dcc5`

```c

void FUN_710215b8e0(void)

{
  byte ****in_x3;
  byte ****ppppbVar1;
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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_NORMAL_WEAPON_KIND",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_N_KIND_0",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_N_KIND_1",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_N_FLYING_OBJECT_KIND",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_PREV_KIND",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_KIND",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_TABEMONO_COUNT"
                 ,(undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_TABEMONO_FRAME"
                 ,(undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_SPECIAL_S_PANEL_7_INVALID_FRAME",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_INT_STOCK_ICON_STATE",
// ... (967 more lines)
```

## 43. `FUN_7101c62870`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c62870`  (offset `0x1c62870`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c62870(undefined8 * param_1, long * * * * * * * * * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 23588 bytes / 1102 bb / 1 incoming refs
- **Match values:** state
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

## 44. `FUN_7101874680`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101874680`  (offset `0x1874680`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101874680(long param_1)`
- **Size / BBs / Incoming:** 3176 bytes / 148 bb / 1 incoming refs
- **Match values:** STATE
- **Strings touched:** fighter_scale_small;fighter_scale_big;set_txt_00;layout_root;exit_code;IS_READ_ONLY;IS_BACK;BUTTON_ID_INIT;BODY_SIZE_INIT;HEAD_OPTION_INIT;BODY_OPTION_INIT;STATE_OPTION_INIT;WEIGHT_INIT;SPEED_INIT;CAMERA_INIT;IS_HOST;IS_JOIN_ROOM
- **Callees:** FUN_71000001c0;FUN_71016f6340;FUN_7101764000;FUN_7101af73b0;FUN_7101af7560;FUN_7101af8570;FUN_71032ca050;FUN_7103307780;FUN_71033743c0;FUN_7103375650;FUN_7103375760;FUN_7103376980;FUN_710337edd0;FUN_710372d940;FUN_7103773770;FUN_7103776910;...
- **Files:** [decomp](../decompiled/FUN_7101874680__7101874680.c)  [cfg](../decompiled/FUN_7101874680__7101874680.mmd)
- **Clone hash:** `01362f2598a58bc6`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101874680(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  char *pcVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  long ****in_x4;
  ulong in_x5;
  long ***in_x6;
  long ***in_x7;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  byte bVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined **ppuVar26;
  undefined *puVar27;
// ... (501 more lines)
```

## 45. `FUN_710171ff00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710171ff00`  (offset `0x171ff00`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710171ff00(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8224 bytes / 444 bb / 2 incoming refs
- **Match values:** state
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

## 46. `FUN_7101c55ec0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c55ec0`  (offset `0x1c55ec0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c55ec0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4096 bytes / 268 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** balloon_off;anim_fight_finish_%02d;state_catch_ok
- **Callees:** FUN_71003a4ca0;FUN_7101c591b0;FUN_7101c59330;FUN_7101c597c0;FUN_7101c76f30;FUN_71037780e0;FUN_7103778300;FUN_7103778ab0;FUN_710377aee0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c55ec0__7101c55ec0.c)  [cfg](../decompiled/FUN_7101c55ec0__7101c55ec0.mmd)
- **Clone hash:** `fbecf0a8f299c9f7`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c55ec0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  long ***ppplVar8;
  ulong uVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  long *plVar17;
  long **pplVar18;
  uint uVar19;
  byte *pbVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  long *plVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined **local_c8;
  long ***local_c0 [8];
  long ***local_80;
// ... (734 more lines)
```

## 47. `FUN_7101c50320`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c50320`  (offset `0x1c50320`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c50320(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3640 bytes / 252 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** balloon_off;state_catch_ok
- **Callees:** FUN_7101c591b0;FUN_7101c59330;FUN_7101c59660;FUN_7101c597c0;FUN_7101c76f30;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c50320__7101c50320.c)  [cfg](../decompiled/FUN_7101c50320__7101c50320.mmd)
- **Clone hash:** `b9b1c39ee7b6d4fe`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101c50320(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  byte bVar9;
  undefined8 uVar10;
  char *pcVar11;
  char cVar12;
  ulong uVar13;
  ulong uVar14;
  char cVar15;
  char *pcVar16;
  long lVar17;
  char *pcVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0x2c4) == 0) {
    if ((((*(char *)(param_1 + 0xafe) == '\0') || ((*(byte *)(param_1 + 0xaf8) | 1) != 3)) ||
        (3 < *(int *)(param_1 + 0x2c0) - 5U)) || (*(int *)(param_1 + 0x2c0) - 7U < 5)) {
      bVar6 = false;
      if (*(char *)(param_1 + 0xafd) == '\0') goto LAB_7101c503c8;
LAB_7101c506bc:
      if (*(char *)(param_1 + 0xaf8) == '\x04') {
        bVar7 = *(char *)(param_1 + 0xafa) == '\0';
        goto joined_r0x007101c506d8;
// ... (572 more lines)
```

## 48. `FUN_7101c534b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c534b0`  (offset `0x1c534b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c534b0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3284 bytes / 218 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** balloon_off;state_catch_ok
- **Callees:** FUN_7101c591b0;FUN_7101c59330;FUN_7101c76f30;FUN_7101c9bc80;FUN_71024076d0;FUN_71033112b0;FUN_7103313f20;FUN_7103775dc0;FUN_71037760f0;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c534b0__7101c534b0.c)  [cfg](../decompiled/FUN_7101c534b0__7101c534b0.mmd)
- **Clone hash:** `1c301efaddc98a55`

```c

void FUN_7101c534b0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  char cVar2;
  undefined **ppuVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long ****pppplVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  int iVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  long ***local_a0;
  ulong local_98;
  undefined **local_90;
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  byte ***local_50;
// ... (571 more lines)
```

## 49. `FUN_7103908c40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103908c40`  (offset `0x3908c40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103908c40(uint * param_1)`
- **Size / BBs / Incoming:** 6936 bytes / 313 bb / 10 incoming refs
- **Match values:** state
- **Strings touched:** (for index);NODE_PRE_REFRACT_BLEND;(for limit);chara/chara_4/chara_4_;(for step);(for generator);(for state);(for control);labels/gotos;label '%s' already defined on line %d;C levels;'=' or 'in' expected;control structure too long;%s expected (to close %s at line %d);syntax error;function or expression needs too many registers
- **Callers:** FUN_71039086e0;FUN_7103908c40;FUN_710390b320;FUN_710390c400;FUN_710390ccd0
- **Callees:** FUN_71039059a0;FUN_7103908660;FUN_7103908c40;FUN_710390a760;FUN_710390ab60;FUN_710390b110;FUN_710390b290;FUN_710390b2a0;FUN_710390b320;FUN_710390b770;FUN_710390c280;FUN_710390c400;FUN_710390c8b0;FUN_710390ca30;FUN_710390cb70;FUN_710390ccd0;...
- **Files:** [decomp](../decompiled/FUN_7103908c40__7103908c40.c)  [cfg](../decompiled/FUN_7103908c40__7103908c40.mmd)
- **Clone hash:** `a0d28a51997a547f`

```c

void FUN_7103908c40(uint *param_1)

{
  ushort uVar1;
  uint *puVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  char cVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  long *plVar22;
  int iVar23;
  uint *puVar24;
  float *pfVar25;
  int iVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  byte local_a0;
  char local_9f;
  undefined1 local_9e;
// ... (1110 more lines)
```

## 50. `FUN_7101c5dcd0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c5dcd0`  (offset `0x1c5dcd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c5dcd0(long * * * * * * * * param_1, undefined8 param_2, long * * * * * * * * * param_3, long * * * * * * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11176 bytes / 647 bb / 1 incoming refs
- **Match values:** state
- **Strings touched:** sel_off;sel_on;set_txt_nomal;set_txt_italic;balloon_off;next_off;state_catch_ok;change_blink_off;newtext_in_close;newtext_in
- **Callers:** FUN_7101c6aaa0
- **Callees:** FUN_7101696040;FUN_7101c4ce90;FUN_7101c597c0;FUN_7101c59930;FUN_7101c5a2d0;FUN_7101c5d460;FUN_7101c60880;FUN_7101c61990;FUN_7101c61bd0;FUN_7101c624f0;FUN_7101c70620;FUN_7101c71530;FUN_7101c73720;FUN_7101c73860;FUN_7101c73b20;FUN_7101c75780;...
- **Files:** [decomp](../decompiled/FUN_7101c5dcd0__7101c5dcd0.c)  [cfg](../decompiled/FUN_7101c5dcd0__7101c5dcd0.mmd)
- **Clone hash:** `1e6978f7750b0418`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c5dcd0(long ********param_1,undefined8 param_2,long *********param_3,
                   long *********param_4,long ****param_5,ulong param_6,ulong param_7,
                   undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined **ppuVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  ulong uVar17;
  long *******ppppppplVar18;
  long ****pppplVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *******ppppppplVar24;
  char cVar25;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
// ... (2105 more lines)
```

