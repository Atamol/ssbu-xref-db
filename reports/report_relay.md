# relay (funcs=15, hits=31)

Top 50 functions by hit count

## 1. `FUN_71001a9ef0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a9ef0`  (offset `0x1a9ef0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001a9ef0(void)`
- **Size / BBs / Incoming:** 544 bytes / 30 bb / 3 incoming refs
- **Match values:** Relay
- **Strings touched:** RelayRouteManageJob::SendRelayRouteDirections
- **Callees:** FUN_710015e850;FUN_7100161fa0;FUN_7100190a90;FUN_7100193560;FUN_7100193a30;FUN_710019b8b0;FUN_71001ad100
- **Files:** [decomp](../decompiled/FUN_71001a9ef0__71001a9ef0.c)  [cfg](../decompiled/FUN_71001a9ef0__71001a9ef0.mmd)
- **Clone hash:** `75463f50c00178eb`

```c

undefined8 FUN_71001a9ef0(long param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  bVar5 = FUN_7100193560(DAT_71052adfc0);
  uVar7 = (uint)bVar5;
  if (0x1f < bVar5) {
    return 1;
  }
  if (*(short *)(param_1 + 0x58) != 0) {
    uVar15 = 0;
    bVar3 = true;
    do {
      if (uVar7 != uVar15) {
        bVar6 = FUN_7100190a90(DAT_71052adfc0,(byte)uVar15);
        bVar4 = *(int *)(*(long *)(param_1 + 0x70) + uVar15 * 4) == 0;
        if (bVar6) {
          bVar4 = !bVar4;
        }
        bVar3 = (bool)(bVar3 & bVar4);
      }
      uVar1 = *(ushort *)(param_1 + 0x58);
      uVar15 = uVar15 + 1;
// ... (62 more lines)
```

## 2. `FUN_7100033a40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** reLay
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

## 3. `FUN_71037f8180`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** reLay
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

## 4. `FUN_71001a9e30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a9e30`  (offset `0x1a9e30`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_71001a9e30(long * param_1, byte param_2, uint param_3, uint param_4)`
- **Size / BBs / Incoming:** 184 bytes / 9 bb / 1 incoming refs
- **Match values:** Relay
- **Strings touched:** chara/chara_4/chara_4_;RelayRouteManageJob::WaitAllDirectConnectionReport
- **Callers:** FUN_71001995b0
- **Callees:** FUN_71000b4990
- **Files:** [decomp](../decompiled/FUN_71001a9e30__71001a9e30.c)  [cfg](../decompiled/FUN_71001a9e30__71001a9e30.mmd)
- **Clone hash:** `aeeced36cb09c5fb`

```c

undefined4 FUN_71001a9e30(long *param_1,byte param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_71000b4990((long)param_1);
  uVar2 = 0;
  if ((((uVar1 & 1) == 0) && (param_3 != 0)) && (param_2 < *(byte *)(param_1 + 0xb))) {
    if ((param_3 < *(uint *)((long)param_1 + 0x5c)) ||
       ((*(uint *)((long)param_1 + 0x5c) == param_3 &&
        (param_4 <= *(uint *)(param_1[0xe] + (ulong)param_2 * 4))))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      (**(code **)(*param_1 + 0x10))(param_1,1);
      param_1[6] = (long)FUN_71001a9ef0;
      param_1[7] = 0;
      param_1[8] = (long)"RelayRouteManageJob::WaitAllDirectConnectionReport";
    }
  }
  return uVar2;
}


```

## 5. `FUN_71000f15d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f15d0`  (offset `0xf15d0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71000f15d0(long param_1)`
- **Size / BBs / Incoming:** 496 bytes / 12 bb / 2 incoming refs
- **Match values:** Relay
- **Strings touched:** select_item;NexConnectStationJob::WaitForNatTraversalCompletedByRelay;ConnectStationJob::ConnectionFailed
- **Callees:** FUN_71000b41f0;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000c5390;FUN_71000c5af0;FUN_7100160990;FUN_7100193a00;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f15d0__71000f15d0.c)  [cfg](../decompiled/FUN_71000f15d0__71000f15d0.mmd)
- **Clone hash:** `764e71f281626c10`

```c

ulong FUN_71000f15d0(long param_1)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  undefined4 *puVar8;
  ErrorResultVariant *this;
  int aiStack_80 [4];
  long local_70;
  undefined4 local_68;
  int aiStack_60 [4];
  ulong local_50;
  undefined4 local_48 [2];
  
  if (*(int *)(param_1 + 0x108) == 1) {
    iVar1 = *(int *)(DAT_71052acd90 + 0xb4);
    plVar3 = FUN_71000bb680();
    lVar7 = *plVar3;
    local_70 = 0;
    FUN_71000bb5d0(&local_70);
    *(code **)(param_1 + 0x30) = FUN_71000f17c0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(long *)(param_1 + 0x100) = local_70 + lVar7 * ((long)iVar1 + 5000);
LAB_71000f166c:
    pcVar6 = "NexConnectStationJob::WaitForNatTraversalCompletedByRelay";
  }
  else {
    if (*(int *)(param_1 + 0x108) - 2U < 3) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(code **)(param_1 + 0x30) = FUN_71000f17c0;
      goto LAB_71000f166c;
    }
    if ((*(char *)(*(long *)(param_1 + 0x70) + 0x38) != -2) &&
       (bVar2 = FUN_7100193a00(DAT_71052adfc0), (bVar2 & 1) == 0)) {
// ... (38 more lines)
```

## 6. `FUN_71000d3050`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d3050`  (offset `0xd3050`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71000d3050(long param_1)`
- **Size / BBs / Incoming:** 228 bytes / 10 bb / 2 incoming refs
- **Match values:** Relay
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

## 7. `FUN_7100187ff0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100187ff0`  (offset `0x187ff0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100187ff0(void)`
- **Size / BBs / Incoming:** 396 bytes / 12 bb / 2 incoming refs
- **Match values:** Relay
- **Strings touched:** DisconnectStationJob::SendDisconnectionRequest;DisconnectStationJob::CutRouteOfRelayConnection
- **Callees:** FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_7100161fa0;FUN_7100193a30;FUN_71001aca60;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100187ff0__7100187ff0.c)  [cfg](../decompiled/FUN_7100187ff0__7100187ff0.mmd)
- **Clone hash:** `ec34c86a39fd8a56`

```c

void FUN_7100187ff0(int *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  ulong auStack_50 [2];
  undefined4 auStack_38 [2];
  
  if (param_3 == 0) {
    uVar4 = 0x10c07;
  }
  else {
    if (*(int *)(param_3 + 0x48) == 5) {
      param_2[0xd] = param_3;
      *(undefined1 *)((long)param_2 + 0x7c) = 0;
      auStack_50[0] = 0;
      FUN_71000bb5d0(auStack_50);
      lVar2 = param_2[0xc];
      plVar1 = FUN_71000bb680();
      param_2[0xb] = auStack_50[0] + *plVar1 * (long)(int)lVar2;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[6] = (long)FUN_7100188180;
      param_2[7] = 0;
      param_2[8] = (long)"DisconnectStationJob::SendDisconnectionRequest";
      lVar2 = FUN_7100193a30(DAT_71052adfc0);
      if (lVar2 != 0) {
        lVar2 = FUN_7100161fa0(DAT_71052add68);
        if (*(long *)(lVar2 + 0x98) != 0) {
          lVar2 = FUN_7100193a30(DAT_71052adfc0);
          lVar3 = FUN_7100161fa0(DAT_71052add68);
          FUN_71001aca60((int *)auStack_50,lVar2,(uint)*(byte *)(*(long *)(lVar3 + 0x98) + 0x38),
                         (uint)*(byte *)(param_2[0xd] + 0x38),(undefined1 *)auStack_38);
          if (((int)auStack_50[0] == 0) && (auStack_38[0]._0_1_ != *(Result *)(param_2[0xd] + 0x38))
             ) {
            param_2[6] = (long)FUN_7100188240;
            param_2[7] = 0;
            param_2[8] = (long)"DisconnectStationJob::CutRouteOfRelayConnection";
// ... (18 more lines)
```

## 8. `FUN_71000d2dc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d2dc0`  (offset `0xd2dc0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d2dc0(void)`
- **Size / BBs / Incoming:** 248 bytes / 8 bb / 2 incoming refs
- **Match values:** Relay
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

## 9. `FUN_7100187200`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100187200`  (offset `0x187200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100187200(int * param_1, long * param_2)`
- **Size / BBs / Incoming:** 160 bytes / 4 bb / 2 incoming refs
- **Match values:** Relay
- **Strings touched:** ConnectStationJob::SendRelayConnectionRequest
- **Callers:** FUN_71001a0c30;FUN_71001a7330
- **Callees:** FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100187200__7100187200.c)  [cfg](../decompiled/FUN_7100187200__7100187200.mmd)
- **Clone hash:** `129c0bb53e47e50c`

```c

void FUN_7100187200(int *param_1,long *param_2)

{
  int *piVar1;
  undefined4 in_w5;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  *(undefined4 *)(param_2 + 0xc) = in_w5;
  (**(code **)(*param_2 + 0x30))(local_38);
  if (local_38[0] == 0) {
    *(undefined1 *)(param_2[0xe] + 0xb8) = 0;
    param_2[6] = (long)FUN_71001872a0;
    param_2[7] = 0;
    param_2[8] = (long)"ConnectStationJob::SendRelayConnectionRequest";
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar1 = local_48;
  }
  else {
    piVar1 = local_38;
  }
  FUN_71000bce50(param_1,piVar1);
  return;
}


```

## 10. `FUN_71000f0ae0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f0ae0`  (offset `0xf0ae0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71000f0ae0(long param_1)`
- **Size / BBs / Incoming:** 1396 bytes / 55 bb / 3 incoming refs
- **Match values:** Relay
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

## 11. `FUN_71000f1410`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f1410`  (offset `0xf1410`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f1410(void)`
- **Size / BBs / Incoming:** 448 bytes / 10 bb / 2 incoming refs
- **Match values:** Relay
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

## 12. `FUN_71000d2fb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d2fb0`  (offset `0xd2fb0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71000d2fb0(long param_1)`
- **Size / BBs / Incoming:** 160 bytes / 5 bb / 2 incoming refs
- **Match values:** Relay
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

## 13. `FUN_7100156720`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100156720`  (offset `0x156720`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_7100156720(undefined8 param_1)`
- **Size / BBs / Incoming:** 392 bytes / 33 bb / 2 incoming refs
- **Match values:** Relay
- **Strings touched:** KeepAlive;chara/chara_4/chara_4_;Station;(KickoutReason_Unknown PROTOCOL NAME);SyncClock;Local;Direct;BandwidthCheck;Unreliable;RoundrobinUnreliable;select_item;Clone;Atomic;Event;Clock;InterpolationClock;NODE_PRE_REFRACT_BLEND;Voice;Reliable;BroadcastReliable;StreamBroadcastReliable;ReliableBroadcast;Session;Lobby;Feedback;RelayService;WanNat
- **Callers:** FUN_7100154a40
- **Files:** [decomp](../decompiled/FUN_7100156720__7100156720.c)  [cfg](../decompiled/FUN_7100156720__7100156720.mmd)
- **Clone hash:** `7d2ee8f7c1fc3923`

```c

char * FUN_7100156720(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = "KeepAlive";
  switch((uint)((ulong)param_1 >> 0x18) & 0xff) {
  case 8:
    goto switchD_7100156748_caseD_8;
  default:
    pcVar1 = "(KickoutReason_Unknown PROTOCOL NAME)";
switchD_7100156748_caseD_8:
    return pcVar1;
  case 0x14:
    return "Station";
  case 0x18:
    return "Mesh";
  case 0x1c:
    return "SyncClock";
  case 0x24:
    return "Local";
  case 0x28:
    return "Direct";
  case 0x2c:
    return "Net";
  case 0x34:
    return "Nat";
  case 0x44:
    return "Lan";
  case 0x54:
    return "BandwidthCheck";
  case 0x58:
    return "Rtt";
  case 0x65:
    return "Sync";
  case 0x68:
    return "Unreliable";
  case 0x6c:
    return "RoundrobinUnreliable";
// ... (33 more lines)
```

## 14. `FUN_71001a71f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a71f0`  (offset `0x1a71f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001a71f0(void)`
- **Size / BBs / Incoming:** 312 bytes / 8 bb / 2 incoming refs
- **Match values:** Relay
- **Strings touched:** ProcessUpdateMeshJob::StartRelayConnection;ProcessUpdateMeshJob::UpdateFailed
- **Callees:** FUN_71000bcf30;FUN_7100193110;FUN_7100193560;FUN_7100193580;FUN_710019a6e0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001a71f0__71001a71f0.c)  [cfg](../decompiled/FUN_71001a71f0__71001a71f0.mmd)
- **Clone hash:** `41e7fd1706a7ec99`

```c

undefined8 FUN_71001a71f0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    bVar3 = FUN_7100193560(DAT_71052adfc0);
    bVar4 = FUN_7100193110(DAT_71052adfc0);
    if ((bVar4 | bVar3) < 0x20) {
      aiStack_50[0] = 0;
      uVar2 = *(undefined4 *)(param_1 + 0xf0);
      iVar1 = *(int *)(param_1 + 0xe8) + 1;
      lVar6 = FUN_7100193580(DAT_71052adfc0);
      bVar5 = FUN_710019a6e0(lVar6,(ulong)bVar4,uVar2,iVar1,aiStack_50,0);
      if (bVar5) {
        *(int *)(param_1 + 0xe8) = iVar1;
        *(code **)(param_1 + 0x30) = FUN_71001a7330;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "ProcessUpdateMeshJob::StartRelayConnection";
      }
      return 5;
    }
  }
  else {
    aiStack_50[0] = 0x6c0e;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
    FUN_71000bcf30((int *)(*(long *)(DAT_71052adfc0 + 8) + 0x9c),aiStack_50);
  }
  *(code **)(param_1 + 0x30) = FUN_71001a65f0;
// ... (5 more lines)
```

## 15. `FUN_71001aa200`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001aa200`  (offset `0x1aa200`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001aa200(long * param_1)`
- **Size / BBs / Incoming:** 296 bytes / 7 bb / 2 incoming refs
- **Match values:** Relay
- **Strings touched:** chara/chara_4/chara_4_;RelayRouteManageJob::WaitAllDirectConnectionReport
- **Callees:** FUN_7100193560;FUN_7100193580;FUN_7100193a30;FUN_710019aa90;FUN_71001abc50;FUN_71001ac5b0
- **Files:** [decomp](../decompiled/FUN_71001aa200__71001aa200.c)  [cfg](../decompiled/FUN_71001aa200__71001aa200.mmd)
- **Clone hash:** `3909f89391b5d91a`

```c

undefined8 FUN_71001aa200(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int local_50 [4];
  
  bVar1 = FUN_7100193560(DAT_71052adfc0);
  if (bVar1 < 0x20) {
    local_50[0] = 0;
    local_50[1] = 0x800;
    local_50[2] = 0;
    (**(code **)(*param_1 + 0x28))(param_1,local_50);
    plVar2 = (long *)FUN_7100193a30(DAT_71052adfc0);
    local_50[0] = 0;
    local_50[1] = 0x800;
    local_50[2] = 0;
    FUN_71001ac5b0();
    FUN_71001abc50(local_50,plVar2,param_1[0xd],
                   (uint)*(ushort *)(param_1 + 0xb) * (uint)*(ushort *)(param_1 + 0xb),
                   *(uint *)(param_1 + 0xf),(uint *)((long)param_1 + 0x7c),(uint)bVar1,param_1[0x10]
                  );
    if (local_50[0] == 0) {
      *(undefined4 *)(plVar2 + 7) = *(undefined4 *)((long)param_1 + 0x5c);
      *(int *)((long)plVar2 + 0x34) = (int)param_1[0xc];
      *(undefined4 *)(param_1 + 0xf) = 0;
      FUN_71001ac5b0();
      lVar3 = FUN_7100193580(DAT_71052adfc0);
      uVar4 = FUN_710019aa90(lVar3);
      if ((uVar4 & 1) == 0) {
        param_1[8] = (long)"RelayRouteManageJob::WaitAllDirectConnectionReport";
        param_1[6] = (long)FUN_71001a9ef0;
        param_1[7] = 0;
        return 5;
      }
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    }
// ... (4 more lines)
```

