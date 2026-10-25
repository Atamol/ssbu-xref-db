# address (funcs=28, hits=65)

Top 50 functions by hit count

## 1. `FUN_7102151c30`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102151c30`  (offset `0x2151c30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102151c30(void)`
- **Size / BBs / Incoming:** 6316 bytes / 10 bb / 1 incoming refs
- **Match values:** ADDRESS
- **Strings touched:** FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_START;FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_GROUND_MOT;FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_AIR_MOT;FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_UNIQ_ID;FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_KAMINARI_CLOUD_ADDRESS;FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_FIGHTER_CATEGORY;FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_TERM;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_START;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MOT_INHERIT;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_EX1;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_STRANS_0;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_STRANS_1;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_PAUSE;FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_PIKACHU_FINAL_TARGET_NUM;FIGHTER_PIKACHU_LINK_NO_PRE_START;FIGHTER_PIKACHU_LINK_NO_FINAL;FIGHTER_PIKACHU_LINK_NO_TERM;FIGHTER_PICHU_CLIFF_HANG_DATA_DEFAULT;FIGHTER_PICHU_CLIFF_HANG_DATA_SPECIAL_S;FIGHTER_PICHU_CLIFF_HANG_DATA_TERM;FIGHTER_PIKACHU_KINETIC_ENERGY_ID_START;FIGHTER_PIKACHU_KINETIC_ENERGY_ID_TERM;FIGHTER_KINETIC_TYPE_PIKACHU_START;FIGHTER_KINETIC_TYPE_PIKACHU_CURSOR;FIGHTER_KINETIC_TYPE_PIKACHU_TERM;FIGHTER_PIKACHU_STATUS_TRANSITION_TERM_ID_SKULL_BASH_WAIT;FIGHTER_PIKACHU_STATUS_TRANSITION_TERM_ID_SKULL_BASH_FALL;FIGHTER_PIKACHU_STATUS_TRANSITION_TERM_ID_KAMINARI_WAIT;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102151c30__7102151c30.c)  [cfg](../decompiled/FUN_7102151c30__7102151c30.mmd)
- **Clone hash:** `5d8f08ec152ed8ea`

```c

void FUN_7102151c30(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_GROUND_MOT",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_AIR_MOT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_UNIQ_ID",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_KAMINARI_CLOUD_ADDRESS",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_FIGHTER_CATEGORY",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000df,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MOT_INHERIT",
                 (undefined **)0x200000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR",
                 (undefined **)0x200000e1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKACHU_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND",
// ... (690 more lines)
```

## 2. `FUN_71037f8180`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** Address
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

## 3. `FUN_7100033a40`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** Address
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

## 4. `FUN_7100133ee0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100133ee0`  (offset `0x133ee0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100133ee0(long * param_1, long param_2, uint param_3)`
- **Size / BBs / Incoming:** 3124 bytes / 168 bb / 2 incoming refs
- **Match values:** address
- **Strings touched:** N2nn3pia3lan25LanMatchDestroySessionJobE;FB_BLEND_256;- name: "%s"
;  start_address: 0x%016llX
;  end_address: 0x%016llX
;  parent: %s
;  direction: %s
;Reverse;Forward;  size: %llu
;  free_size: %llu
;dys_yoga03_l_03_set;  max_allocatable_size: %llu

- **Callers:** FUN_7100132be0
- **Callees:** FUN_71000b18f0;FUN_7100135780;FUN_7100135880;FUN_71001386a0;FUN_710013ba30;FUN_710013ba40;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_7100133ee0__7100133ee0.c)  [cfg](../decompiled/FUN_7100133ee0__7100133ee0.mmd)
- **Clone hash:** `2a4ebe7f5c58f83d`

```c

void FUN_7100133ee0(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined1 *__dest;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined **local_108;
  undefined1 *local_100;
  undefined *local_f8;
  undefined1 *local_f0;
  int local_e8;
  undefined1 local_e4 [132];
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = param_1 + 0x12;
    FUN_710013ba30((long)plVar8);
  }
  local_f0 = local_e4;
  local_108 = &PTR_FUN_7104f4a288;
  local_100 = &DAT_7104497848;
  local_f8 = &DAT_7104f4ea38;
  local_e8 = 0x80;
  FUN_7100135780((long)&local_f8);
  __dest = local_f0;
  local_f8 = &DAT_7104f4ea08;
  (*(code *)local_108[3])(&local_108);
  puVar3 = local_100;
  if (__dest != local_100) {
    (*(code *)local_108[3])(&local_108);
    lVar2 = 0;
// ... (459 more lines)
```

## 5. `FUN_71000d3050`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d3050`  (offset `0xd3050`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71000d3050(long param_1)`
- **Size / BBs / Incoming:** 228 bytes / 10 bb / 2 incoming refs
- **Match values:** Address
- **Strings touched:** NexNatServerAddressResolveJob::StepComplete;NexNatServerAddressResolveJob::StepResolveRelayServerSetting
- **Callees:** FUN_71000c36d0
- **Files:** [decomp](../decompiled/FUN_71000d3050__71000d3050.c)  [cfg](../decompiled/FUN_71000d3050__71000d3050.mmd)
- **Clone hash:** `7c11e4703b13a01b`

```c

undefined8 FUN_71000d3050(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  int local_30 [4];
  
  bVar1 = FUN_71000c36d0(DAT_71052acd90);
  if (((bVar1 & 1) != 0) && (*(ulong *)(DAT_71052ac580 + 0x30) <= *(ulong *)(param_1 + 0x60))) {
    uVar2 = (**(code **)(**(long **)(DAT_71052acd90 + 0x88) + 0x40))();
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    (**(code **)(**(long **)(DAT_71052acd90 + 0x88) + 0x48))(local_30);
    if (((local_30[0] == 0) && (*(long *)(param_1 + 0x58) != 0)) &&
       (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
      pcVar4 = FUN_71000d3140;
      uVar3 = 7;
      pcVar5 = "NexNatServerAddressResolveJob::StepResolveRelayServerSetting";
      goto LAB_71000d30e0;
    }
  }
  pcVar4 = FUN_71000d2f00;
  uVar3 = 5;
  pcVar5 = "NexNatServerAddressResolveJob::StepComplete";
LAB_71000d30e0:
  *(code **)(param_1 + 0x30) = pcVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar3;
}


```

## 6. `FUN_71037fe8c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037fe8c0`  (offset `0x37fe8c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037fe8c0(long param_1)`
- **Size / BBs / Incoming:** 148 bytes / 1 bb / 2 incoming refs
- **Match values:** Address
- **Strings touched:** nvnDeviceInitialize;nvnDeviceGetProcAddress;nvnSetExternalDebuggerEnabledNVX
- **Callers:** FUN_71037fb770
- **Callees:** FUN_7100033a40;FUN_71037f8180;<EXTERNAL>::nvnBootstrapLoader
- **Files:** [decomp](../decompiled/FUN_71037fe8c0__71037fe8c0.c)  [cfg](../decompiled/FUN_71037fe8c0__71037fe8c0.mmd)
- **Clone hash:** `eaf721e359eb645d`

```c

void FUN_71037fe8c0(long param_1)

{
  code *pcVar1;
  
  DAT_7105940900 = nvnBootstrapLoader("nvnDeviceInitialize");
  DAT_7105940918 = (undefined *)nvnBootstrapLoader("nvnDeviceGetProcAddress");
  DAT_71052aa340 = (code *)nvnBootstrapLoader("nvnDeviceGetProcAddress");
  pcVar1 = (code *)(*DAT_71052aa340)(0,"nvnSetExternalDebuggerEnabledNVX");
  (*pcVar1)(*(undefined1 *)(param_1 + 8));
  FUN_71037f8180(0,DAT_7105940918);
  FUN_7100033a40(0,DAT_71052aa340);
  return;
}


```

## 7. `FUN_71000d2fb0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d2fb0`  (offset `0xd2fb0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71000d2fb0(long param_1)`
- **Size / BBs / Incoming:** 160 bytes / 5 bb / 2 incoming refs
- **Match values:** Address
- **Strings touched:** chara/chara_4/chara_4_;NexNatServerAddressResolveJob::StepComplete;NexNatServerAddressResolveJob::StepWaitRequestRelayServerSetting
- **Callees:** FUN_71000bb680
- **Files:** [decomp](../decompiled/FUN_71000d2fb0__71000d2fb0.c)  [cfg](../decompiled/FUN_71000d2fb0__71000d2fb0.mmd)
- **Clone hash:** `7b9a1ffd453bbba8`

```c

undefined8 FUN_71000d2fb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  char *pcVar5;
  
  lVar1 = DAT_71052ac580;
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    plVar3 = FUN_71000bb680();
    *(long *)(param_1 + 0x60) = *(long *)(lVar1 + 0x30) + *plVar3 * 10000;
    (**(code **)(**(long **)(DAT_71052acd90 + 0x88) + 0x38))();
    pcVar4 = FUN_71000d3050;
    uVar2 = 5;
    pcVar5 = "NexNatServerAddressResolveJob::StepWaitRequestRelayServerSetting";
  }
  else {
    pcVar4 = FUN_71000d2f00;
    uVar2 = 0;
    pcVar5 = "NexNatServerAddressResolveJob::StepComplete";
  }
  *(code **)(param_1 + 0x30) = pcVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar2;
}


```

## 8. `FUN_71000d2ca0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d2ca0`  (offset `0xd2ca0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000d2ca0(int * param_1, long param_2, undefined4 * param_3)`
- **Size / BBs / Incoming:** 276 bytes / 7 bb / 1 incoming refs
- **Match values:** Address
- **Strings touched:** NexNatServerAddressResolveJob::StepResolveNatServerAddress
- **Callers:** FUN_71000c4770
- **Callees:** FUN_71000b4160;FUN_71000baac0;FUN_71000bce50;FUN_71000bcf30;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000d2ca0__71000d2ca0.c)  [cfg](../decompiled/FUN_71000d2ca0__71000d2ca0.mmd)
- **Clone hash:** `7cb3551cb5edaf10`

```c

void FUN_71000d2ca0(int *param_1,long param_2,undefined4 *param_3)

{
  ulong uVar1;
  ErrorResultVariant *this;
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (param_3 == (undefined4 *)0x0) {
    local_40[0] = 0x10c07;
  }
  else {
    uVar1 = FUN_71000b4160(param_3);
    if ((uVar1 & 1) != 0) {
      *(undefined4 **)(param_2 + 0x58) = param_3;
      *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(DAT_71052ac580 + 0x30);
      this = (ErrorResultVariant *)((ulong)local_40 | 4);
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)local_28);
      FUN_71000bcf30((int *)(param_2 + 0x68),local_40);
      *(code **)(param_2 + 0x30) = FUN_71000d2dc0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) = "NexNatServerAddressResolveJob::StepResolveNatServerAddress";
      FUN_71000baac0(param_2);
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      goto LAB_71000d2d90;
    }
    local_40[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
LAB_71000d2d90:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_40);
  return;
// ... (2 more lines)
```

## 9. `FUN_710001f340`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710001f340`  (offset `0x1f340`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710001f340(long param_1, undefined8 * param_2, byte * * param_3, byte * * param_4, byte * * param_5, byte * * param_6, byte * * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12036 bytes / 695 bb / 1 incoming refs
- **Match values:** address
- **Strings touched:** Illegal characters found in URL;select_item;Bad URL, colon is first character;file:;%*15[^
/:]:%[^
];%[^
];localhost/;NODE_PRE_REFRACT_BLEND;127.0.0.1/;File drive letters are only accepted in MSDOS/Windows.;%15[^
/:]:%3[/]%[^
/?#]%[^
];Bad URL;%[^
/?#]%[^
];Unwillingly accepted illegal URL using %d slash%s!
;%s://%s%s;Invalid file://hostname/, expected localhost or 127.0.0.1 or none;dys_yoga03_l_03_set;DICT.;LDAP.;IMAP.;SMTP.;Rebuilt URL to: %s
;Protocol "%s" not supported or disabled in libcurl;<url> malformed;plate_side;Please URL encode %% as %%25, see RFC 6874.
;chara/chara_4/chara_4_;Invalid IPv6 address format
;%s://%s;Warning: CURLOPT_PROXYAUTOCONFIG is 1 (default), so options set via CURLOPT_PROXY* are ignored.
;memory shortage;no_proxy;...
- **Callers:** FUN_710001f290
- **Callees:** FUN_7100002af0;FUN_7100002bd0;FUN_7100004200;FUN_7100004360;FUN_7100004400;FUN_7100004690;FUN_71000060b0;FUN_71000067e0;FUN_71000068f0;FUN_7100007ef0;FUN_7100007fd0;FUN_7100008270;FUN_71000093f0;FUN_710000bbe0;FUN_710000bbf0;FUN_710000c980;...
- **Files:** [decomp](../decompiled/FUN_710001f340__710001f340.c)  [cfg](../decompiled/FUN_710001f340__710001f340.mmd)
- **Clone hash:** `49a38eb5ed8786c3`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710001f340(long param_1,undefined8 *param_2,byte **param_3,byte **param_4,byte **param_5,
                  byte **param_6,byte **param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  size_t sVar16;
  byte **ppbVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  long *plVar21;
  byte **ppbVar22;
  undefined8 uVar23;
  code *pcVar24;
  code *pcVar25;
  int *piVar26;
  byte bVar27;
  char cVar28;
  undefined1 uVar29;
  uint uVar30;
  undefined4 uVar31;
  char *pcVar32;
// ... (2158 more lines)
```

## 10. `FUN_71000d2dc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d2dc0`  (offset `0xd2dc0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d2dc0(void)`
- **Size / BBs / Incoming:** 248 bytes / 8 bb / 2 incoming refs
- **Match values:** Address
- **Strings touched:** NexNatServerAddressResolveJob::StepComplete;NexNatServerAddressResolveJob::StepRequestRelayServerSetting
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000c0860;FUN_71000c4e70;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000d2dc0__71000d2dc0.c)  [cfg](../decompiled/FUN_71000d2dc0__71000d2dc0.mmd)
- **Clone hash:** `530804db0d2ee431`

```c

undefined8 FUN_71000d2dc0(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  char *pcVar4;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    puVar2 = FUN_71000c0860();
    lVar1 = DAT_71052ac580;
    if (*(char *)((long)puVar2 + 3) == '\0') {
      plVar3 = FUN_71000bb680();
      *(long *)(param_1 + 0x60) = *(long *)(lVar1 + 0x30) + *plVar3 * 30000;
      FUN_71000c4e70(aiStack_38,DAT_71052acd90);
      FUN_71000bcf30((int *)(param_1 + 0x68),aiStack_38);
      if (*(int *)(param_1 + 0x68) == 0) {
        *(code **)(param_1 + 0x30) = FUN_71000d2fb0;
        pcVar4 = "NexNatServerAddressResolveJob::StepRequestRelayServerSetting";
        goto LAB_71000d2e88;
      }
    }
    else {
      aiStack_38[0] = 0x6436;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x68),aiStack_38);
    }
  }
  *(code **)(param_1 + 0x30) = FUN_71000d2f00;
  pcVar4 = "NexNatServerAddressResolveJob::StepComplete";
LAB_71000d2e88:
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
// ... (3 more lines)
```

## 11. `FUN_71000f17c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f17c0`  (offset `0xf17c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f17c0(void)`
- **Size / BBs / Incoming:** 1012 bytes / 45 bb / 3 incoming refs
- **Match values:** Address
- **Strings touched:** NexConnectStationJob::ResolveCurrentAddress;ConnectStationJob::ConnectionFailed
- **Callees:** FUN_71000b41f0;FUN_71000bb5d0;FUN_71000bce50;FUN_71000bcf30;FUN_71000c0860;FUN_71000c4cd0;FUN_71000c5330;FUN_71000c5390;FUN_71000c5af0;FUN_71001602e0;FUN_7100160300;FUN_7100160320;FUN_7100160340;FUN_71001603a0;FUN_7100161fb0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;...
- **Files:** [decomp](../decompiled/FUN_71000f17c0__71000f17c0.c)  [cfg](../decompiled/FUN_71000f17c0__71000f17c0.mmd)
- **Clone hash:** `af6b9636d639fd93`

```c

ulong FUN_71000f17c0(long param_1)

{
  long *plVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  int *piVar9;
  ulong uVar10;
  char *pcVar11;
  ErrorResultVariant *this;
  int aiStack_a8 [4];
  int aiStack_98 [4];
  int aiStack_88 [4];
  int aiStack_78 [4];
  int aiStack_68 [4];
  ulong uStack_58;
  undefined4 auStack_48 [2];
  
  lVar7 = DAT_71052acd90;
  plVar1 = (long *)(param_1 + 0x80);
  iVar5 = FUN_71001602e0((long)plVar1);
  uVar6 = FUN_71000c5330(lVar7,iVar5);
  if ((uVar6 & 1) == 0) {
    uStack_58 = 0;
    FUN_71000bb5d0(&uStack_58);
    if ((uStack_58 <= *(ulong *)(param_1 + 0x100)) && (*(int *)(param_1 + 0x108) == 1)) {
      uVar6 = 0x640000;
      uVar10 = 4;
      goto LAB_71000f1afc;
    }
    lVar7 = FUN_7100161fb0(DAT_71052add68);
    bVar2 = FUN_71001603a0((long)plVar1,lVar7 + 8);
    FUN_71000bce50(aiStack_68,(int *)(param_1 + 0x10c));
    if (*(int *)(param_1 + 0x108) == 3) {
// ... (126 more lines)
```

## 12. `FUN_71000f09f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f09f0`  (offset `0xf09f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f09f0(void)`
- **Size / BBs / Incoming:** 240 bytes / 4 bb / 6 incoming refs
- **Match values:** Address
- **Strings touched:** NexConnectStationJob::TryCurrentAddress
- **Callees:** FUN_71000b1cf0;FUN_71000beb40;FUN_71000c5ac0;FUN_7100160230;FUN_7100161fb0
- **Files:** [decomp](../decompiled/FUN_71000f09f0__71000f09f0.c)  [cfg](../decompiled/FUN_71000f09f0__71000f09f0.mmd)
- **Clone hash:** `adeec23f6c50ab31`

```c

undefined8 FUN_71000f09f0(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined **ppuStack_68;
  undefined4 uStack_60;
  
  bVar1 = FUN_71000c5ac0(DAT_71052acd90,(long *)(param_1 + 0x80));
  if ((bVar1) && (*(char *)(*(long *)(param_1 + 0x70) + 0x38) == -2)) {
    lVar2 = FUN_7100161fb0(DAT_71052add68);
    FUN_7100160230(&ppuStack_68,param_1 + 0x80);
    FUN_71000beb40(lVar2 + 0x108,(long)&ppuStack_68);
    ppuStack_68 = &PTR_FUN_7104f4a808;
    FUN_71000b1cf0();
    lVar2 = FUN_7100161fb0(DAT_71052add68);
    uStack_60 = 0;
    ppuStack_68 = (undefined **)0x20000;
    (**(code **)(*(long *)(lVar2 + 0x108) + 0x28))(lVar2 + 0x108,&ppuStack_68);
  }
  *(char **)(param_1 + 0x40) = "NexConnectStationJob::TryCurrentAddress";
  *(code **)(param_1 + 0x30) = FUN_71000f1bc0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 13. `FUN_71000d5fe0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d5fe0`  (offset `0xd5fe0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d5fe0(void)`
- **Size / BBs / Incoming:** 28 bytes / 1 bb / 1 incoming refs
- **Match values:** Address
- **Strings touched:** NexCreateMeshJob::StartMonitoringServerAddressResolution
- **Files:** [decomp](../decompiled/FUN_71000d5fe0__71000d5fe0.c)  [cfg](../decompiled/FUN_71000d5fe0__71000d5fe0.mmd)
- **Clone hash:** `159c16dcf29316f9`

```c

void FUN_71000d5fe0(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_71000d6000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexCreateMeshJob::StartMonitoringServerAddressResolution";
  return;
}


```

## 14. `FUN_71000f0ae0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f0ae0`  (offset `0xf0ae0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71000f0ae0(long param_1)`
- **Size / BBs / Incoming:** 1396 bytes / 55 bb / 3 incoming refs
- **Match values:** Address
- **Strings touched:** NexConnectStationJob::ResolveCurrentAddress;ConnectStationJob::ConnectionFailed;NexConnectStationJob::PrepareNatTraversal;NexConnectStationJob::PrepareNatTraversalByRelay
- **Callees:** FUN_71000b40e0;FUN_71000b41f0;FUN_71000b4260;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_71000c0860;FUN_71000c36d0;FUN_71000c4cd0;FUN_71000c5330;FUN_71000c5390;FUN_71000c5af0;FUN_71001602e0;FUN_7100160300;FUN_7100160320;...
- **Files:** [decomp](../decompiled/FUN_71000f0ae0__71000f0ae0.c)  [cfg](../decompiled/FUN_71000f0ae0__71000f0ae0.mmd)
- **Clone hash:** `edabe3619378abc7`

```c

ulong FUN_71000f0ae0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  ErrorResultVariant *this;
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  long local_80 [2];
  int local_70 [4];
  ulong local_60;
  undefined4 local_58 [2];
  
  plVar1 = DAT_71052acd90;
  plVar9 = (long *)(param_1 + 0x80);
  iVar6 = FUN_71001602e0((long)plVar9);
  uVar7 = FUN_71000c5330((long)plVar1,iVar6);
  if ((uVar7 & 1) == 0) {
    local_60 = 0;
    FUN_71000bb5d0(&local_60);
    if ((local_60 <= *(ulong *)(param_1 + 0x100)) && (*(int *)(param_1 + 0x108) == 1)) {
      uVar14 = 0x640000;
      uVar7 = 4;
      goto LAB_71000f0dfc;
    }
// ... (190 more lines)
```

## 15. `FUN_71000f0790`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f0790`  (offset `0xf0790`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f0790(void)`
- **Size / BBs / Incoming:** 600 bytes / 20 bb / 5 incoming refs
- **Match values:** Address
- **Strings touched:** ConnectStationJob::ConnectionFailed;NexConnectStationJob::ResolveCurrentAddress;NexConnectStationJob::WaitForNatTraversalCompleted;NexConnectStationJob::WaitForNatTraversalStarted
- **Callees:** FUN_71000b41f0;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000c5390;FUN_71000c59b0;FUN_71000c5af0;FUN_7100160300;FUN_7100161fb0;FUN_7100193a00;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f0790__71000f0790.c)  [cfg](../decompiled/FUN_71000f0790__71000f0790.mmd)
- **Clone hash:** `10ab3b03bfa88c96`

```c

undefined8 FUN_71000f0790(long param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  ErrorResultVariant *this;
  char acStack_84 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  ulong uStack_50;
  undefined8 uStack_48;
  
  iVar6 = *(int *)(DAT_71052acd90 + 0xb4);
  if (*(char *)(param_1 + 0x78) != '\0') {
    lVar2 = FUN_7100161fb0(DAT_71052add68);
    bVar1 = FUN_7100160300(lVar2 + 8);
    if (bVar1) {
      iVar6 = *(int *)(DAT_71052acd90 + 0xb8) + iVar6;
    }
    bVar1 = FUN_7100160300(param_1 + 0x80);
    if (bVar1) {
      iVar6 = *(int *)(DAT_71052acd90 + 0xb8) + iVar6;
    }
  }
  uStack_50 = 0;
  FUN_71000bb5d0(&uStack_50);
  if (*(ulong *)(param_1 + 0x100) < uStack_50) {
    puVar7 = *(undefined4 **)(param_1 + 0x68);
    this = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
    aiStack_70[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    uStack_48._0_4_ = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)&uStack_48);
// ... (57 more lines)
```

## 16. `FUN_7100003840`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100003840`  (offset `0x3840`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100003840(long * param_1, long param_2, uint * param_3, undefined8 param_4, undefined8 param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2320 bytes / 101 bb / 3 incoming refs
- **Match values:** address
- **Strings touched:**   Trying %s...
;select_item;Could not set SO_NOSIGPIPE: %s
;Failed to set SO_KEEPALIVE on fd %d
;sa_addr inet_ntop() failed with errno %d: %s;host!;dys_yoga03_l_03_set;Bind to local port %hu failed, trying next
;Local port: %hu
;getsockname() failed with errno %d: %s;Immediate connect fail for %s: %s
;bind failed with errno %d: %s;plate_side;Couldn't bind to interface '%s';chara/chara_4/chara_4_;Local Interface %s is ip %s using address family %i
;Name '%s' family %i resolved to '%s' family %i
;Couldn't bind to '%s'
- **Callers:** FUN_7100002f80;FUN_71000036e0
- **Callees:** FUN_7100004910;FUN_7100005ba0;FUN_7100005f10;FUN_71000060d0;FUN_71000065d0;FUN_71000065e0;FUN_71000065f0;FUN_7100006690;FUN_71000086c0;FUN_710000b540;FUN_7100013730;FUN_7100015de0;FUN_7100016040;FUN_71000175d0;FUN_7100017740;<EXTERNAL>::strlen;...
- **Files:** [decomp](../decompiled/FUN_7100003840__7100003840.c)  [cfg](../decompiled/FUN_7100003840__7100003840.mmd)
- **Clone hash:** `dcf451474578fccb`

```c

/* WARNING: Type propagation algorithm not settling */

int FUN_7100003840(long *param_1,long param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int *piVar11;
  uint *puVar12;
  size_t sVar13;
  undefined8 uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  long **pplVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  code *pcVar21;
  char *pcVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long **__s;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 local_3b8 [48];
  int local_388;
  int local_384;
  uint local_380;
  uint local_37c;
// ... (489 more lines)
```

## 17. `FUN_710023dbc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710023dbc0`  (offset `0x23dbc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710023dbc0(long param_1)`
- **Size / BBs / Incoming:** 1572 bytes / 70 bb / 3 incoming refs
- **Match values:** address
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

## 18. `FUN_710011c3c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011c3c0`  (offset `0x11c3c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011c3c0(void)`
- **Size / BBs / Incoming:** 536 bytes / 6 bb / 1 incoming refs
- **Match values:** Address
- **Strings touched:** LanConnectStationJob::TryCurrentAddress
- **Callees:** FUN_71000b1cf0;FUN_71000bce50;FUN_71000bcf30;FUN_71000beb40;FUN_710015ffc0;FUN_7100160230;FUN_7100160990;FUN_7100160b20;FUN_7100161fb0;FUN_7100186630;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011c3c0__710011c3c0.c)  [cfg](../decompiled/FUN_710011c3c0__710011c3c0.mmd)
- **Clone hash:** `6c4f5fa05bcce5a4`

```c

void FUN_710011c3c0(int *param_1,long *param_2,undefined4 *param_3,long param_4,long *param_5,
                   byte param_6)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  piVar3 = (int *)&uStack_a0;
  aiStack_78[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
  uStack_a0 = (undefined **)((ulong)uStack_a0._4_4_ << 0x20);
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)&uStack_a0);
  param_2[0xe] = param_4;
  *(byte *)(param_2 + 0xf) = param_6 & 1;
  uStack_98 = 0;
  uStack_a0 = (undefined **)0x40000000;
  (**(code **)(*param_5 + 0x20))(param_5,&uStack_a0);
  plVar1 = param_2 + 0x10;
  FUN_710015ffc0((long)plVar1,(long)param_5);
  uStack_98 = 0;
  uStack_a0 = (undefined **)0x40000000;
  FUN_7100160990();
  uStack_98 = 0;
  uStack_a0 = (undefined **)0x40000000;
  (**(code **)(*(long *)(param_4 + 0x10) + 0x28))((long *)(param_4 + 0x10),&uStack_a0);
  if (*(char *)(param_4 + 0x38) == -2) {
    lVar2 = FUN_7100161fb0(DAT_71052add68);
    FUN_7100160b20(lVar2,(long)plVar1);
    lVar2 = FUN_7100161fb0(DAT_71052add68);
    uStack_98 = 0;
    uStack_a0 = (undefined **)0x40000000;
    (**(code **)(*(long *)(lVar2 + 0x88) + 0x20))((long *)(lVar2 + 0x88),&uStack_a0);
    lVar2 = FUN_7100161fb0(DAT_71052add68);
// ... (28 more lines)
```

## 19. `FUN_71001f3220`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f3220`  (offset `0x1f3220`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_71001f3220(long param_1, char * param_2, ulong param_3)`
- **Size / BBs / Incoming:** 660 bytes / 26 bb / 3 incoming refs
- **Match values:** address
- **Strings touched:** N2nn3nex15EmulationDeviceE;address
- **Callers:** FUN_71001f2180
- **Callees:** FUN_71001b2f70;FUN_71001b47e0;FUN_71001b4910;FUN_71001bec60;FUN_71001becd0;FUN_71001bee30;FUN_71001bef00;FUN_71001bef20;FUN_71001f2180;FUN_7101711530;<EXTERNAL>::strcmp;<EXTERNAL>::strstr;<EXTERNAL>::atoi
- **Files:** [decomp](../decompiled/FUN_71001f3220__71001f3220.c)  [cfg](../decompiled/FUN_71001f3220__71001f3220.mmd)
- **Clone hash:** `3634f73755c44920`

```c

uint FUN_71001f3220(long param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  char *__haystack;
  undefined1 auVar9 [16];
  undefined **local_120;
  undefined1 local_118 [16];
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined **local_f8;
  undefined1 local_f0 [16];
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined ***local_58;
  
  pcVar4 = strstr(param_2,"=");
  uVar1 = 0;
  if ((pcVar4 == (char *)0x0) || (pcVar4 == param_2)) goto LAB_71001f3360;
  __haystack = pcVar4 + 1;
  if ((*__haystack == '\0') || (pcVar5 = strstr(__haystack,"="), pcVar5 != (char *)0x0)) {
    uVar1 = 0;
    goto LAB_71001f3360;
  }
  *pcVar4 = '\0';
  if ((param_3 & 1) == 0) {
    iVar2 = strcmp(param_2,"address");
    if (iVar2 != 0) {
      iVar2 = strcmp(param_2,"port");
      if (iVar2 == 0) {
        iVar2 = atoi(__haystack);
        if (*(char *)(param_1 + 0x68) == '\0') {
// ... (71 more lines)
```

## 20. `FUN_71000f02e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f02e0`  (offset `0xf02e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f02e0(void)`
- **Size / BBs / Incoming:** 948 bytes / 30 bb / 1 incoming refs
- **Match values:** Address
- **Strings touched:** NexConnectStationJob::TestCurrentAddress
- **Callees:** FUN_71000b1cf0;FUN_71000b28f0;FUN_71000bce50;FUN_71000bcf30;FUN_71000beb40;FUN_7100138520;FUN_710015ffc0;FUN_7100160230;FUN_7100160300;FUN_7100160320;FUN_7100160360;FUN_71001603a0;FUN_7100160440;FUN_7100160450;FUN_7100160500;FUN_7100160990;...
- **Files:** [decomp](../decompiled/FUN_71000f02e0__71000f02e0.c)  [cfg](../decompiled/FUN_71000f02e0__71000f02e0.mmd)
- **Clone hash:** `ddb659eaa9fd2948`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000f02e0(int *param_1,long *param_2,undefined4 *param_3,long param_4,long param_5,
                   byte param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ErrorResultVariant *this;
  long *plVar7;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  aiStack_78[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
  uStack_a0 = (undefined **)((ulong)uStack_a0._4_4_ << 0x20);
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)&uStack_a0);
  param_2[0xe] = param_4;
  plVar1 = param_2 + 0x10;
  *(byte *)(param_2 + 0xf) = param_6 & 1;
  FUN_710015ffc0((long)plVar1,param_5);
  FUN_7100138520((uint *)&DAT_71052acf18);
  uStack_98 = 0;
  uStack_a0 = (undefined **)0x20000;
  FUN_7100160990();
  uStack_98 = 0;
  uStack_a0 = (undefined **)0x20000;
  (**(code **)(*(long *)(param_2[0xe] + 0x10) + 0x28))((long *)(param_2[0xe] + 0x10),&uStack_a0);
  if (*(char *)((long)DAT_71052acd90 + 0xb1) == '\0') {
    uStack_a0 = (undefined **)CONCAT44(uStack_a0._4_4_,0x10c08);
    this = (ErrorResultVariant *)((ulong)&uStack_a0 | 4);
  }
// ... (94 more lines)
```

## 21. `FUN_7100006210`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100006210`  (offset `0x6210`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100006210(long param_1)`
- **Size / BBs / Incoming:** 740 bytes / 43 bb / 1 incoming refs
- **Match values:** Address
- **Strings touched:** NODE_PRE_REFRACT_BLEND;%255[^:]:%d;%s:%d;%255[^:]:%d:%255s;Couldn't parse CURLOPT_RESOLVE removal entry '%s'!
;Couldn't parse CURLOPT_RESOLVE entry '%s'!
;chara/chara_4/chara_4_;Address in '%s' found illegal!
;Added %s:%d:%s to DNS cache

- **Callers:** FUN_71000189f0
- **Callees:** FUN_7100004f10;FUN_7100005160;FUN_7100005500;FUN_71000055b0;FUN_7100005df0;FUN_7100007fd0;FUN_7100015de0;FUN_7100016b40;FUN_7100016ba0;FUN_71000272a0;<EXTERNAL>::strlen;<EXTERNAL>::sscanf;<EXTERNAL>::tolower
- **Files:** [decomp](../decompiled/FUN_7100006210__7100006210.c)  [cfg](../decompiled/FUN_7100006210__7100006210.mmd)
- **Clone hash:** `76fe380ec3464b1e`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_7100006210(long param_1)

{
  int iVar1;
  uint uVar2;
  char *__s;
  byte *pbVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  byte *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint local_26c;
  byte abStack_268 [256];
  undefined1 auStack_168 [264];
  
  puVar9 = *(undefined8 **)(param_1 + 0x9c0);
joined_r0x007100006238:
  do {
    while( true ) {
      if (puVar9 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x9c0) = 0;
        return 0;
      }
      __s = (char *)*puVar9;
      if (__s != (char *)0x0) break;
LAB_7100006320:
      puVar9 = (undefined8 *)puVar9[1];
    }
    if (*__s == '-') {
      puVar7 = &local_26c;
// ... (95 more lines)
```

## 22. `FUN_71021723e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021723e0`  (offset `0x21723e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021723e0(void)`
- **Size / BBs / Incoming:** 13744 bytes / 25 bb / 1 incoming refs
- **Match values:** ADDRESS
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

## 23. `FUN_71000f06a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f06a0`  (offset `0xf06a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f06a0(void)`
- **Size / BBs / Incoming:** 228 bytes / 8 bb / 2 incoming refs
- **Match values:** Address
- **Strings touched:** NexConnectStationJob::ResolveCurrentAddress;NexConnectStationJob::PrepareNatTraversal
- **Callees:** FUN_71000bb5d0;FUN_71000bb680;FUN_71000c5ad0;FUN_7100160340;FUN_7100160350
- **Files:** [decomp](../decompiled/FUN_71000f06a0__71000f06a0.c)  [cfg](../decompiled/FUN_71000f06a0__71000f06a0.mmd)
- **Clone hash:** `9f91bcc33fec9edd`

```c

undefined8 FUN_71000f06a0(long param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lStack_28;
  
  if (*(char *)(*(long *)(param_1 + 0x70) + 0x38) != -2) {
    plVar4 = (long *)(param_1 + 0x80);
    bVar3 = FUN_7100160340((long)plVar4);
    if ((((bVar3 & 1) == 0) && (*(char *)(param_1 + 0x78) != '\0')) ||
       ((bVar3 = FUN_7100160350((long)plVar4), (bVar3 & 1) == 0 &&
        (*(char *)(param_1 + 0x78) != '\0')))) {
      FUN_71000c5ad0(DAT_71052acd90,plVar4,1);
      *(code **)(param_1 + 0x30) = FUN_71000f09f0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexConnectStationJob::ResolveCurrentAddress";
      return 0;
    }
  }
  *(code **)(param_1 + 0x30) = FUN_71000f0790;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexConnectStationJob::PrepareNatTraversal";
  iVar1 = *(int *)(DAT_71052acd90 + 0xb4);
  iVar2 = *(int *)(DAT_71052acd90 + 0xb8);
  plVar4 = FUN_71000bb680();
  lVar5 = *plVar4;
  lStack_28 = 0;
  FUN_71000bb5d0(&lStack_28);
  *(long *)(param_1 + 0x100) = lStack_28 + lVar5 * ((long)iVar2 + (long)iVar1);
  return 0;
}


```

## 24. `FUN_71000d3140`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d3140`  (offset `0xd3140`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71000d3140(long param_1)`
- **Size / BBs / Incoming:** 132 bytes / 5 bb / 2 incoming refs
- **Match values:** Address
- **Strings touched:** NexNatServerAddressResolveJob::StepComplete
- **Callees:** FUN_71000c36d0
- **Files:** [decomp](../decompiled/FUN_71000d3140__71000d3140.c)  [cfg](../decompiled/FUN_71000d3140__71000d3140.mmd)
- **Clone hash:** `5bb71117f6bcb0cf`

```c

undefined8 FUN_71000d3140(long param_1)

{
  byte bVar1;
  
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    bVar1 = FUN_71000c36d0(DAT_71052acd90);
    if ((bVar1 & 1) != 0) {
      (**(code **)(**(long **)(DAT_71052acd90 + 0x88) + 0x50))();
      (**(code **)(**(long **)(DAT_71052acd90 + 0x88) + 0x60))();
    }
  }
  *(char **)(param_1 + 0x40) = "NexNatServerAddressResolveJob::StepComplete";
  *(code **)(param_1 + 0x30) = FUN_71000d2f00;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 6;
}


```

## 25. `FUN_71000f1410`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f1410`  (offset `0xf1410`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f1410(void)`
- **Size / BBs / Incoming:** 448 bytes / 10 bb / 2 incoming refs
- **Match values:** Address
- **Strings touched:** ConnectStationJob::ConnectionFailed;NexConnectStationJob::ResolveCurrentAddress;NexConnectStationJob::WaitForNatTraversalStartedByRelay
- **Callees:** FUN_71000b41f0;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000c5390;FUN_71000c59b0;FUN_71000c5af0;FUN_7100160500;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f1410__71000f1410.c)  [cfg](../decompiled/FUN_71000f1410__71000f1410.mmd)
- **Clone hash:** `0b36351b768e0fe0`

```c

undefined8 FUN_71000f1410(long param_1)

{
  long *plVar1;
  char *pcVar2;
  code *pcVar3;
  long lVar4;
  undefined4 *puVar5;
  ErrorResultVariant *this;
  char acStack_84 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  ulong uStack_50;
  undefined8 uStack_48;
  
  plVar1 = (long *)(param_1 + 0x80);
  FUN_7100160500((long)plVar1,0);
  uStack_50 = 0;
  FUN_71000bb5d0(&uStack_50);
  if (*(ulong *)(param_1 + 0x100) < uStack_50) {
    puVar5 = *(undefined4 **)(param_1 + 0x68);
    this = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
    aiStack_70[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    uStack_48._0_4_ = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)&uStack_48);
    FUN_71000bce50(aiStack_60,aiStack_70);
    FUN_71000b41f0(puVar5,aiStack_60);
    lVar4 = DAT_71052acd90;
    aiStack_70[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
    nn::err::ErrorResultVariant::operator=(this,(Result *)&uStack_48);
    FUN_71000bce50(aiStack_80,aiStack_70);
    FUN_71000c5af0(lVar4,plVar1,aiStack_80,(uint)(*(char *)(param_1 + 0x78) == '\0'));
    FUN_71000c5390(DAT_71052acd90,plVar1,1,1);
    *(code **)(param_1 + 0x30) = FUN_7100186ed0;
    *(undefined8 *)(param_1 + 0x38) = 0;
// ... (29 more lines)
```

## 26. `FUN_71000d52f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d52f0`  (offset `0xd52f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d52f0(void)`
- **Size / BBs / Incoming:** 28 bytes / 1 bb / 1 incoming refs
- **Match values:** Address
- **Strings touched:** chara/chara_4/chara_4_;NexJoinMeshJob::StartMonitoringServerAddressResolution
- **Files:** [decomp](../decompiled/FUN_71000d52f0__71000d52f0.c)  [cfg](../decompiled/FUN_71000d52f0__71000d52f0.mmd)
- **Clone hash:** `fb42378c9d91f2fc`

```c

void FUN_71000d52f0(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_71000d5310;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexJoinMeshJob::StartMonitoringServerAddressResolution";
  return;
}


```

## 27. `FUN_71001f24a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f24a0`  (offset `0x1f24a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001f24a0(long param_1)`
- **Size / BBs / Incoming:** 1372 bytes / 73 bb / 2 incoming refs
- **Match values:** address
- **Strings touched:** address;%s%s%u;%s%s%s;%s%s%lu;dys_yoga03_l_03_set
- **Callers:** FUN_71001f30d0;FUN_71001f3690
- **Callees:** FUN_71001b1820;FUN_71001b1870;FUN_71001b4910;FUN_71001b4e80;FUN_71001beb30;FUN_71001bee60;FUN_71001bef00;FUN_71001bef20;FUN_71001bef30;FUN_71001befa0;<EXTERNAL>::strlen;<EXTERNAL>::strncpy;<EXTERNAL>::snprintf
- **Files:** [decomp](../decompiled/FUN_71001f24a0__71001f24a0.c)  [cfg](../decompiled/FUN_71001f24a0__71001f24a0.mmd)
- **Clone hash:** `ebbd567d4174c92e`

```c

void FUN_71001f24a0(long param_1)

{
  long *plVar1;
  char *pcVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined **local_520 [3];
  char *local_508;
  undefined8 auStack_4f8 [18];
  char acStack_468 [1032];
  
  uVar7 = *(int *)(param_1 + 0x10) - 1;
  if (uVar7 < 3) {
    iVar5 = snprintf(acStack_468,0x400,(&PTR_s_prudp___7104f599f0)[(int)uVar7]);
    lVar17 = (long)iVar5;
    iVar5 = FUN_71001bef20(*(long *)(param_1 + 8));
  }
  else {
    lVar17 = 0;
    iVar5 = FUN_71001bef20(*(long *)(param_1 + 8));
  }
  if (iVar5 == 0) {
    sVar4 = FUN_71001beb30(*(long *)(param_1 + 8));
// ... (211 more lines)
```

## 28. `FUN_7100022610`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100022610`  (offset `0x22610`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100022610(long param_1, long param_2, byte * * param_3, byte * * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1332 bytes / 82 bb / 2 incoming refs
- **Match values:** address
- **Strings touched:** https;select_item;Unsupported proxy '%s', libcurl is built without the HTTPS-proxy support.;socks5h;socks5;socks4a;socks4;socks;http:;chara/chara_4/chara_4_;Invalid IPv6 address format
;No valid port number in proxy string (%s)
;plate_side;Please URL encode %% as %%25, see RFC 6874.
;Unsupported proxy scheme for '%s'
- **Callers:** FUN_710001f340
- **Callees:** FUN_7100015de0;FUN_7100016040;FUN_7100017490;FUN_7100022250;FUN_7100024310;FUN_71000272a0;FUN_71000272c0;<EXTERNAL>::strlen;<EXTERNAL>::strchr;FUN_71039c00b0;<EXTERNAL>::strncmp;<EXTERNAL>::strstr;<EXTERNAL>::isxdigit
- **Files:** [decomp](../decompiled/FUN_7100022610__7100022610.c)  [cfg](../decompiled/FUN_7100022610__7100022610.mmd)
- **Clone hash:** `07ca499bd7ac8eaa`

```c

int FUN_7100022610(long param_1,long param_2,byte **param_3,byte **param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  byte **ppbVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  size_t sVar12;
  byte **ppbVar13;
  byte **__s;
  byte **ppbVar14;
  byte **__s_00;
  uint uVar15;
  char *local_68;
  byte *local_60;
  byte *local_58;
  
  iVar7 = (int)param_4;
  local_60 = (byte *)0x0;
  local_58 = (byte *)0x0;
  ppbVar13 = param_3;
  pcVar9 = strstr((char *)param_3,"://");
  __s_00 = param_3;
  if (pcVar9 == (char *)0x0) {
LAB_7100022794:
    if (iVar7 - 4U < 4) {
      pcVar9 = strchr((char *)__s_00,0x40);
joined_r0x0071000227b0:
      bVar6 = true;
      iVar8 = iVar7;
    }
// ... (223 more lines)
```

