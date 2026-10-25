# wait (funcs=265, hits=351)

Top 50 functions by hit count

## 1. `FUN_7101afe7c0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101afe7c0`  (offset `0x1afe7c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101afe7c0(long param_1, undefined4 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1340 bytes / 56 bb / 3 incoming refs
- **Match values:** wait
- **Strings touched:** battlewait;all_on;battlewait_cancel;all_off;battlewait_ready;battlewait_pause
- **Callers:** FUN_71032ebe80;FUN_7103347d90;FUN_7103349170
- **Callees:** FUN_71024076d0;FUN_7103313f20;FUN_71037760f0;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101afe7c0__7101afe7c0.c)  [cfg](../decompiled/FUN_7101afe7c0__7101afe7c0.mmd)
- **Clone hash:** `5e9b584e3b52313d`

```c

void FUN_7101afe7c0(long param_1,undefined4 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 local_110 [2];
  undefined **local_108;
  long local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined **local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
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
  
// ... (179 more lines)
```

## 2. `FUN_7100111430`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100111430`  (offset `0x111430`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100111430(void)`
- **Size / BBs / Incoming:** 1188 bytes / 113 bb / 3 incoming refs
- **Match values:** Wait
- **Strings touched:** NODE_PRE_REFRACT_BLEND;NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting;NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti;NexProcessHostMigrationJob::NexWaitCheckOldHostDisconnection
- **Callees:** FUN_71000bb680;FUN_7100192e90;FUN_71001d0a10;FUN_71001d1590;FUN_710024bec0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100111430__7100111430.c)  [cfg](../decompiled/FUN_7100111430__7100111430.mmd)
- **Clone hash:** `5b50e2e5a4a4f5c0`

```c

undefined8 FUN_7100111430(long param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  char *pcVar8;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] != aiStack_50[0]) {
    if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x208)) {
      if (*(char *)(param_1 + 0xb3) == -3) {
        if (*(char *)(param_1 + 0xc1) != '\0') {
          pcVar7 = FUN_71001a2450;
          uVar5 = 0;
          pcVar8 = "NexProcessHostMigrationJob::WaitNewHostFinished";
          goto LAB_71001118b0;
        }
        cVar2 = *(char *)(param_1 + 0xf0);
        if (cVar2 != '\x01') {
          if (cVar2 != '\x02') {
            cVar3 = *(char *)(param_1 + 0xf1);
          }
          else {
            cVar3 = *(char *)(param_1 + 0xf1);
          }
          if (cVar3 != '\x01') {
// ... (149 more lines)
```

## 3. `FUN_71000f2880`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f2880`  (offset `0xf2880`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f2880(void)`
- **Size / BBs / Incoming:** 1996 bytes / 90 bb / 16 incoming refs
- **Match values:** Wait
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;select_item;NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::WaitLeaveCurrentMatchmakeSession;NexMatchJoinSessionJob::WaitLeaveBufferMatchmakeSession;NexMatchJoinSessionJob::WaitLeaveMatchmakeSessionCompanions
- **Callees:** FUN_71000b40e0;FUN_71000bcf30;FUN_71000c36b0;FUN_71000e08e0;FUN_71000ecfb0;FUN_71000ee050;FUN_71000ee290;FUN_71000ee2c0;FUN_71000ee730;FUN_71000ee7f0;FUN_7100146ba0;FUN_7100149270;FUN_7100149290;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f2880__71000f2880.c)  [cfg](../decompiled/FUN_71000f2880__71000f2880.mmd)
- **Clone hash:** `6c61e61087bae516`

```c

undefined8 FUN_71000f2880(long param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *plVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    aiStack_78[0] = 0xc406;
    break;
  case 6:
    aiStack_78[0] = 0xa471;
    break;
  case 7:
    aiStack_78[0] = 0xc420;
    break;
  case 8:
    aiStack_78[0] = 0xc421;
    break;
  default:
    aiStack_78[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
    aiStack_88[0] = 0;
    nn::err::ErrorResultVariant::operator=
// ... (250 more lines)
```

## 4. `FUN_7101a27570`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a27570`  (offset `0x1a27570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a27570(long param_1, undefined8 param_2, long * * * * * * * * * * * param_3, long * * * * * * * * * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11516 bytes / 417 bb / 3 incoming refs
- **Match values:** wait
- **Strings touched:** training_combo_0;set_txt_count;set_parts_score_0;kumite_on;kumite_1_chara_score;set_parts_score_1;kumite_1_no1_score;set_parts_score_2;kumite_1_all_score;NODE_PRE_REFRACT_BLEND;record_on;kumite_2;standard_on;standard_2;standard_1_chara_score;standard_1_no1_score;standard_1_all_score;set_txt_lv;mel_chara_select_high_score_none;set_txt_standard_sub;set_txt_route;standard_pic_off;match_waiting_on;match_1_chara_score;match_1_no1_score;match_1_all_score;kumite_%d
- **Callers:** FUN_7101a26200;FUN_7101a26b10;FUN_7101a2b570
- **Callees:** FUN_7101798a80;FUN_71017994c0;FUN_71017c0da0;FUN_71017d1480;FUN_7101a0cae0;FUN_7101a0dde0;FUN_7101a0e010;FUN_7101a19420;FUN_7101a19990;FUN_7101a19eb0;FUN_7101a1b4a0;FUN_7101a1ba90;FUN_7101a1bc20;FUN_7101a1be30;FUN_7101a1c070;FUN_7101a1c140;...
- **Files:** [decomp](../decompiled/FUN_7101a27570__7101a27570.c)  [cfg](../decompiled/FUN_7101a27570__7101a27570.mmd)
- **Clone hash:** `9c01e60fc013597d`

```c

void FUN_7101a27570(long param_1,undefined8 param_2,long ***********param_3,long ************param_4
                   ,long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  ulong *puVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long **********pppppppppplVar14;
  undefined8 uVar15;
  long *********ppppppppplVar16;
  long *plVar17;
  long **********pppppppppplVar18;
  ulong uVar19;
  ulong uVar20;
  long ****pppplVar21;
  byte ****ppppbVar22;
  long lVar23;
  long ********pppppppplVar24;
  char cVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint *puVar32;
  char cVar33;
  undefined8 *puVar34;
  long ***********ppppppppppplVar35;
// ... (1985 more lines)
```

## 5. `FUN_71001068d0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001068d0`  (offset `0x1068d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001068d0(void)`
- **Size / BBs / Incoming:** 600 bytes / 19 bb / 1 incoming refs
- **Match values:** Wait
- **Strings touched:** NexMatchBrowseMatchmakeJob::WaitFindSessionByOwner;NexMatchBrowseMatchmakeJob::WaitFindSessionByParticipant;NexMatchBrowseMatchmakeJob::WaitFindSessionBySessionId;NexMatchBrowseMatchmakeJob::BrowseMatchmake
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_71000e4650;FUN_71000e9cd0;FUN_71000ea3e0;FUN_71000ead70;FUN_710014f120;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001068d0__71001068d0.c)  [cfg](../decompiled/FUN_71001068d0__71001068d0.mmd)
- **Clone hash:** `4a40316e37ce44cc`

```c

void FUN_71001068d0(int *param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char *pcVar4;
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  *(undefined8 *)(param_2 + 0x90) = param_3;
  iVar1 = FUN_710014f120(param_4);
  if (iVar1 == 1) {
    FUN_71000e9cd0(aiStack_48,*(long *)(param_2 + 0x90),(int *)(param_2 + 0x60),param_4);
    FUN_71000bcf30((int *)(param_2 + 0x98),aiStack_48);
    if (*(int *)(param_2 + 0x98) != 0) {
      aiStack_48[0] = 0xac5a;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
      if (*(int *)(param_2 + 0x98) != aiStack_48[0]) {
LAB_7100106a8c:
        piVar2 = (int *)(param_2 + 0x98);
        goto LAB_7100106b10;
      }
    }
    pcVar3 = FUN_7100106b30;
    pcVar4 = "NexMatchBrowseMatchmakeJob::WaitFindSessionByOwner";
LAB_7100106adc:
    *(code **)(param_2 + 0x30) = pcVar3;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = pcVar4;
    aiStack_48[0] = 0;
  }
  else {
    iVar1 = FUN_710014f120(param_4);
    if (iVar1 == 2) {
// ... (50 more lines)
```

## 6. `FUN_71001082f0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001082f0`  (offset `0x1082f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001082f0(void)`
- **Size / BBs / Incoming:** 2020 bytes / 92 bb / 17 incoming refs
- **Match values:** Wait
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;dys_yoga03_l_03_set;NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::WaitLeaveCurrentMatchmakeSession;NexMatchRandomMatchmakeJob::WaitLeaveBufferMatchmakeSession;NexMatchRandomMatchmakeJob::WaitLeaveMatchmakeSessionCompanions
- **Callees:** FUN_71000b40e0;FUN_71000bcf30;FUN_71000c36b0;FUN_71000e08e0;FUN_71000ecfb0;FUN_71000ee050;FUN_71000ee290;FUN_71000ee2c0;FUN_71000ee730;FUN_71000ee7f0;FUN_7100146ba0;FUN_7100149270;FUN_7100149290;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001082f0__71001082f0.c)  [cfg](../decompiled/FUN_71001082f0__71001082f0.mmd)
- **Clone hash:** `b3fdc75f3d178828`

```c

undefined8 FUN_71001082f0(long param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
    aiStack_78[0] = 0xc406;
    break;
  case 6:
    aiStack_78[0] = 0xa471;
    break;
  case 7:
    aiStack_78[0] = 0xc420;
    break;
  case 8:
    aiStack_78[0] = 0xc421;
    break;
  default:
    aiStack_78[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
// ... (259 more lines)
```

## 7. `FUN_71037f8180`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** Wait
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

## 8. `FUN_710013f090`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710013f090`  (offset `0x13f090`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710013f090(void)`
- **Size / BBs / Incoming:** 328 bytes / 9 bb / 6 incoming refs
- **Match values:** Wait
- **Strings touched:** JoinSessionJob::WaitLeaveMeshWithHostMigration;JoinSessionJob::WaitLeaveMesh;NODE_PRE_REFRACT_BLEND;JoinSessionJob::WaitDestroyMesh
- **Callees:** FUN_71000bcf30;FUN_7100191ee0;FUN_71001921a0;FUN_71001921b0;FUN_7100192c30;FUN_71001931d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710013f090__710013f090.c)  [cfg](../decompiled/FUN_710013f090__710013f090.mmd)
- **Clone hash:** `8f7ffe00f10f8ab9`

```c

ulong FUN_710013f090(long *param_1)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  aiStack_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4));
  aiStack_40[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
  bVar1 = FUN_71001931d0((long)DAT_71052adfc0);
  if (bVar1) {
    bVar2 = FUN_71001921a0((long)DAT_71052adfc0);
    if ((bVar2 & 1) == 0) {
      FUN_7100191ee0(aiStack_40,DAT_71052adfc0);
      FUN_71000bcf30(aiStack_30,aiStack_40);
      param_1[6] = (long)FUN_710013f1e0;
      param_1[7] = 0;
      param_1[8] = (long)"JoinSessionJob::WaitDestroyMesh";
    }
    else {
      FUN_71001921b0(aiStack_40,DAT_71052adfc0);
      FUN_71000bcf30(aiStack_30,aiStack_40);
      param_1[6] = (long)FUN_710013f260;
      param_1[7] = 0;
      param_1[8] = (long)"JoinSessionJob::WaitLeaveMeshWithHostMigration";
    }
  }
  else {
    FUN_7100192c30(aiStack_40,(long)DAT_71052adfc0);
    FUN_71000bcf30(aiStack_30,aiStack_40);
    param_1[6] = (long)FUN_710013f2e0;
    param_1[7] = 0;
// ... (16 more lines)
```

## 9. `FUN_7100033a40`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** Wait
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

## 10. `FUN_7100110e60`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100110e60`  (offset `0x110e60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100110e60(void)`
- **Size / BBs / Incoming:** 1476 bytes / 128 bb / 2 incoming refs
- **Match values:** Wait
- **Strings touched:** NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting;NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti;NexProcessHostMigrationJob::NexCheckOldHostDisconnection
- **Callees:** FUN_71000bb680;FUN_7100190a90;FUN_7100192e90;FUN_7100193560;FUN_7100193a30;FUN_71001a35c0;FUN_71001aca60;FUN_71001d0a10;FUN_71001f16c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100110e60__7100110e60.c)  [cfg](../decompiled/FUN_7100110e60__7100110e60.mmd)
- **Clone hash:** `8f794951245e5264`

```c

undefined8 FUN_7100110e60(long param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  code *pcVar10;
  uint auStack_58 [4];
  uint auStack_48 [4];
  undefined4 auStack_38 [2];
  
  FUN_7100192e90((int *)auStack_48,DAT_71052adfc0);
  auStack_58[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)auStack_58 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)auStack_58 | 4),(Result *)auStack_38);
  if (auStack_48[0] == auStack_58[0]) {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
LAB_7100110ed8:
    pcVar10 = FUN_71001a1d80;
    uVar6 = 0;
    pcVar9 = "NexProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100111284;
  }
  if (*(char *)(param_1 + 0xb3) != -3) goto LAB_710011125c;
  if (*(char *)(param_1 + 0xc1) != '\0') {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
    pcVar10 = FUN_71001a2450;
// ... (204 more lines)
```

## 11. `FUN_71000fd6b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd6b0`  (offset `0xfd6b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd6b0(void)`
- **Size / BBs / Incoming:** 808 bytes / 27 bb / 3 incoming refs
- **Match values:** Wait
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeavePreviousMatchmakeSession;NexMatchJointSessionJob::WaitMeshRestart;NexMatchJointSessionJob::WaitLeavePreviousMesh
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_7100140060;FUN_7100140e30;FUN_7100146ba0;FUN_7100146ed0;FUN_7100191ee0;FUN_71001921b0;FUN_7100192c30;FUN_7100192e90;FUN_71001931d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fd6b0__71000fd6b0.c)  [cfg](../decompiled/FUN_71000fd6b0__71000fd6b0.mmd)
- **Clone hash:** `ea65146691ff6e84`

```c

undefined8 FUN_71000fd6b0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  code *pcVar9;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  *(undefined4 *)(param_1 + 0x230) = 0xe;
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar4 == 7) {
    aiStack_50[0] = 0xc420;
  }
  else if (iVar4 == 6) {
    aiStack_50[0] = 0xa471;
  }
  else if (iVar4 == 5) {
    aiStack_50[0] = 0xc406;
  }
  else {
    if (iVar4 != 8) {
      *(undefined1 *)(DAT_71052adb38 + 0x15c) = 1;
      puVar2 = DAT_71052adfc0;
      FUN_7100192e90(aiStack_50,(long)DAT_71052adfc0);
      aiStack_60[0] = 0x6c50;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
      if (aiStack_50[0] == aiStack_60[0]) {
// ... (88 more lines)
```

## 12. `FUN_71001109a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001109a0`  (offset `0x1109a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001109a0(void)`
- **Size / BBs / Incoming:** 652 bytes / 42 bb / 2 incoming refs
- **Match values:** Wait
- **Strings touched:** NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting;NexProcessHostMigrationJob::NexGetMatchMakingClientHost
- **Callees:** FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001109a0__71001109a0.c)  [cfg](../decompiled/FUN_71001109a0__71001109a0.mmd)
- **Clone hash:** `6a3c5f303c1401bc`

```c

undefined8 FUN_71001109a0(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_38,DAT_71052adfc0);
  aiStack_48[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
  if (aiStack_38[0] == aiStack_48[0]) {
    pcVar1 = FUN_71001a1d80;
    pcVar2 = "NexProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100110bcc;
  }
  if (*(char *)(param_1 + 0xb3) == -3) {
    if (*(char *)(param_1 + 0xc1) != '\0') {
      pcVar1 = FUN_71001a2450;
      pcVar2 = "NexProcessHostMigrationJob::WaitNewHostFinished";
      goto LAB_7100110bcc;
    }
    if ((((((((*(char *)(param_1 + 0xf0) != '\x01') && (*(char *)(param_1 + 0xf1) != '\x01')) &&
            (*(char *)(param_1 + 0xf2) != '\x01')) &&
           (((*(char *)(param_1 + 0xf3) != '\x01' && (*(char *)(param_1 + 0xf4) != '\x01')) &&
            ((*(char *)(param_1 + 0xf5) != '\x01' &&
             ((*(char *)(param_1 + 0xf6) != '\x01' && (*(char *)(param_1 + 0xf7) != '\x01'))))))))
          && (*(char *)(param_1 + 0xf8) != '\x01')) &&
         ((((((*(char *)(param_1 + 0xf9) != '\x01' && (*(char *)(param_1 + 0xfa) != '\x01')) &&
             (*(char *)(param_1 + 0xfb) != '\x01')) &&
            ((*(char *)(param_1 + 0xfc) != '\x01' && (*(char *)(param_1 + 0xfd) != '\x01')))) &&
           (*(char *)(param_1 + 0xfe) != '\x01')) &&
          (((*(char *)(param_1 + 0xff) != '\x01' && (*(char *)(param_1 + 0x100) != '\x01')) &&
           (((*(char *)(param_1 + 0x101) != '\x01' &&
             (((*(char *)(param_1 + 0x102) != '\x01' && (*(char *)(param_1 + 0x103) != '\x01')) &&
// ... (25 more lines)
```

## 13. `FUN_7101a23a80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a23a80`  (offset `0x1a23a80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a23a80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8756 bytes / 346 bb / 1 incoming refs
- **Match values:** wait
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

## 14. `FUN_7100176a80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176a80`  (offset `0x176a80`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176a80(void)`
- **Size / BBs / Incoming:** 360 bytes / 12 bb / 3 incoming refs
- **Match values:** Wait
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;LocalHostMigrationJob::WaitScanNetwork
- **Callees:** FUN_71000b41f0;FUN_71000b4300;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_7100176130;FUN_7100182400;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100176a80__7100176a80.c)  [cfg](../decompiled/FUN_7100176a80__7100176a80.mmd)
- **Clone hash:** `a6a3b87542bffa13`

```c

undefined8 FUN_7100176a80(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long alStack_50 [2];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    alStack_50[0] = 0;
    FUN_71000bb5d0(alStack_50);
    lVar4 = alStack_50[0] - *(long *)(param_1 + 0x80);
    plVar2 = FUN_71000bb680();
    lVar3 = 0;
    if (*plVar2 != 0) {
      lVar3 = lVar4 / *plVar2;
    }
    if (lVar3 < 0x2711) {
      plVar2 = *(long **)(param_1 + 0x78);
      lVar4 = *(long *)(param_1 + 0x60);
      lVar3 = (**(code **)(*plVar2 + 0x160))(plVar2);
      FUN_7100182400((int *)alStack_50,(long)plVar2,lVar4,lVar3);
      if ((int)alStack_50[0] == 0) {
        *(code **)(param_1 + 0x30) = FUN_7100176bf0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitScanNetwork";
      }
      uVar1 = 5;
    }
    else {
      if (**(int **)(param_1 + 0x60) == 1) {
        FUN_71000b4300((long)*(int **)(param_1 + 0x60));
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x78) + 0x400) + 0x48) = 1;
      }
      FUN_7100176130(param_1);
// ... (25 more lines)
```

## 15. `FUN_7100102730`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100102730`  (offset `0x102730`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100102730(void)`
- **Size / BBs / Incoming:** 976 bytes / 33 bb / 2 incoming refs
- **Match values:** Wait
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitHostStationId;NexMatchJointSessionJob::WaitCompanionStation
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_7100146ed0;FUN_710014f000;FUN_7100150680;FUN_7100192e90;FUN_71001939c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100102730__7100102730.c)  [cfg](../decompiled/FUN_7100102730__7100102730.mmd)
- **Clone hash:** `6aca059c9d7cba62`

```c

undefined8 FUN_7100102730(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_50,DAT_71052adfc0);
    if ((aiStack_50[0] == 0) &&
       (iVar2 = FUN_7100146ba0(DAT_71052adb38), lVar7 = DAT_71052adb38, iVar2 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar1 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
        if (!bVar1) {
          uVar4 = FUN_7100146ed0(lVar7);
          if ((uVar4 & 1) == 0) {
// ... (111 more lines)
```

## 16. `FUN_7102c6cc00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102c6cc00`  (offset `0x2c6cc00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102c6cc00(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 604 bytes / 39 bb / 1 incoming refs
- **Match values:** wait
- **Strings touched:** queen_set_wait;BottomJaw_1_end
- **Callers:** FUN_7102c6bf10
- **Callees:** FUN_7102405040;FUN_71025ee080;FUN_710260fdd0;FUN_7102610070;FUN_710392e290
- **Files:** [decomp](../decompiled/FUN_7102c6cc00__7102c6cc00.c)  [cfg](../decompiled/FUN_7102c6cc00__7102c6cc00.mmd)
- **Clone hash:** `be9af2fdcebb1444`

```c

void FUN_7102c6cc00(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long ****pppplVar5;
  byte ****ppppbVar6;
  long ****pppplVar7;
  long lVar8;
  undefined4 local_4c;
  long ***local_48;
  
  ppppbVar6 = param_4;
  pppplVar7 = param_5;
  plVar2 = (long *)FUN_710392e290(0x10,0x50,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4c = 0;
      local_48 = (long ***)&DAT_00000050;
      pppplVar5 = &local_48;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4c);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0x50,pppplVar5,ppppbVar6,pppplVar7,param_6,param_7,
                                          param_8), plVar2 != (long *)0x0)) goto LAB_7102c6cc88;
    }
    plVar2 = (long *)0x0;
  }
LAB_7102c6cc88:
  *plVar2 = param_2;
  plVar2[1] = 0;
  plVar2[2] = -0x100000000;
  plVar2[5] = (long)param_4[1];
  plVar2[4] = (long)*param_4;
  plVar2[7] = (long)param_5[1];
  plVar2[8] = 0;
  plVar2[6] = (long)*param_5;
// ... (70 more lines)
```

## 17. `FUN_71000fec40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fec40`  (offset `0xfec40`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fec40(void)`
- **Size / BBs / Incoming:** 1944 bytes / 77 bb / 7 incoming refs
- **Match values:** Wait
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartCreateNextMesh;NexMatchJointSessionJob::StartGetNextMeshHostStationLocation;NexMatchJointSessionJob::WaitStartRetryJoinMesh;NexMatchJointSessionJob::StartLeaveMesh;dys_yoga03_l_03_set
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000c4cc0;FUN_71000d7ea0;FUN_71000d8f90;FUN_71000edff0;FUN_71000ee2e0;FUN_71001405b0;FUN_7100140e30;FUN_7100146ba0;FUN_7100150590;FUN_7100150840;FUN_7100150d50;FUN_71001902d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=;...
- **Files:** [decomp](../decompiled/FUN_71000fec40__71000fec40.c)  [cfg](../decompiled/FUN_71000fec40__71000fec40.mmd)
- **Clone hash:** `394ef12fcefe07d8`

```c

undefined8 FUN_71000fec40(long param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  char *pcVar9;
  code *pcVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uStack_70;
  undefined4 uStack_68;
  int aiStack_60 [4];
  undefined4 uStack_48;
  int iStack_44;
  
  piVar7 = (int *)&uStack_70;
  FUN_71001902d0(DAT_71052adfc0);
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar8 = DAT_71052adb38;
  if (iVar3 == 7) {
    aiStack_60[0] = 0xc420;
  }
  else if (iVar3 == 6) {
    aiStack_60[0] = 0xa471;
  }
  else if (iVar3 == 5) {
    aiStack_60[0] = 0xc406;
  }
  else {
    if (iVar3 != 8) {
      if (*(char *)(param_1 + 0xfb) != '\0') {
// ... (263 more lines)
```

## 18. `FUN_7100184270`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100184270`  (offset `0x184270`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100184270(void)`
- **Size / BBs / Incoming:** 272 bytes / 10 bb / 2 incoming refs
- **Match values:** Wait
- **Strings touched:** LocalDisconnectNetworkJob::WaitForCancel;LocalDisconnectNetworkJob::WaitDisconnectNetwork;NODE_PRE_REFRACT_BLEND
- **Callees:** FUN_71000b41f0;FUN_71000b4300;FUN_71000b4820;FUN_71000bce50;FUN_71000bcf30;FUN_7100172e00;FUN_7100172eb0
- **Files:** [decomp](../decompiled/FUN_7100184270__7100184270.c)  [cfg](../decompiled/FUN_7100184270__7100184270.mmd)
- **Clone hash:** `c3588256c0bc6df7`

```c

undefined8 FUN_7100184270(long param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int aiStack_50 [4];
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    FUN_7100172e00(aiStack_30,*(long **)(*(long *)(param_1 + 0x68) + 0x400));
    if (aiStack_30[0] != 0) {
      return 5;
    }
    FUN_7100172eb0(aiStack_40,*(long **)(*(long *)(param_1 + 0x68) + 0x400),
                   *(undefined4 **)(param_1 + 0x60));
    FUN_71000bcf30(aiStack_30,aiStack_40);
    if (aiStack_30[0] != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_50,(int *)(*(long *)(param_1 + 0x60) + 4));
      FUN_71000b41f0(puVar1,aiStack_50);
      *(undefined8 *)(param_1 + 0x58) = 0;
      return 1;
    }
    FUN_71000b4820(*(long *)(*(long *)(param_1 + 0x68) + 0x400),1);
    *(code **)(param_1 + 0x30) = FUN_7100184460;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LocalDisconnectNetworkJob::WaitDisconnectNetwork";
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    *(code **)(param_1 + 0x30) = FUN_7100184410;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LocalDisconnectNetworkJob::WaitForCancel";
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
// ... (2 more lines)
```

## 19. `FUN_7100170610`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100170610`  (offset `0x170610`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100170610(long param_1)`
- **Size / BBs / Incoming:** 336 bytes / 13 bb / 1 incoming refs
- **Match values:** Wait
- **Strings touched:** LdnHostMigrationJob::WaitForCancel;N2nn3pia9transport11DispatchJobE;LocalHostMigrationJob::WaitUntilAllClientsConnection
- **Callees:** FUN_71000b2b70;FUN_71000b41f0;FUN_71000b4300;FUN_71000bb5d0;FUN_71000bce50;FUN_7100176130;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100170610__7100170610.c)  [cfg](../decompiled/FUN_7100170610__7100170610.mmd)
- **Clone hash:** `2b8760c812f48ba9`

```c

undefined8 FUN_7100170610(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int local_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 local_28 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar3 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar3 == 1) {
      FUN_71000b4300((long)piVar3);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar3) {
  case 1:
    goto switchD_7100170688_caseD_1;
  case 2:
    local_70[2] = 0;
    local_70[0] = 0x10;
    local_70[1] = 0;
    FUN_71000b2b70();
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitUntilAllClientsConnection";
    *(code **)(param_1 + 0x30) = FUN_7100176560;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_71000bb5d0((undefined8 *)(param_1 + 0x70));
    return 0;
  case 3:
    FUN_71000bce50(aiStack_40,piVar3 + 1);
// ... (23 more lines)
```

## 20. `FUN_71000fc7d0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fc7d0`  (offset `0xfc7d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fc7d0(void)`
- **Size / BBs / Incoming:** 1164 bytes / 32 bb / 6 incoming refs
- **Match values:** Wait
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;chara/chara_4/chara_4_;NexMatchJointSessionJob::SendNextSessionId;NexMatchJointSessionJob::WaitUntilLeaderLeavesMesh;NexMatchJointSessionJob::WaitNextSessionId
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_71000f9670;FUN_7100146ba0;FUN_7100146ed0;FUN_7100149290;FUN_710014e050;FUN_7100150440;FUN_7100150680;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fc7d0__71000fc7d0.c)  [cfg](../decompiled/FUN_71000fc7d0__71000fc7d0.mmd)
- **Clone hash:** `d38cb28c7328b7fd`

```c

undefined8 FUN_71000fc7d0(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  piVar5 = aiStack_60;
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_50,DAT_71052adfc0);
    if ((aiStack_50[0] == 0) &&
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar3 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar2 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
        if (bVar2) {
          FUN_710014e050(aiStack_50,*(long *)(lVar1 + 200),(char)*(undefined4 *)(param_1 + 0x90),
                         *(long *)(param_1 + 0xa0),*(int *)(param_1 + 0xf0),1);
// ... (131 more lines)
```

## 21. `FUN_71000ffca0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000ffca0`  (offset `0xffca0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000ffca0(void)`
- **Size / BBs / Incoming:** 1272 bytes / 51 bb / 5 incoming refs
- **Match values:** Wait
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitHostStationId;NexMatchJointSessionJob::WaitUntilCompanionCompletion;NexMatchJointSessionJob::SendCompletionForMigrateSession
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_71000edff0;FUN_7100140910;FUN_7100140e30;FUN_7100146ba0;FUN_7100150600;FUN_7100192e90;FUN_71001939c0;FUN_7100193a50;FUN_71001ae940;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000ffca0__71000ffca0.c)  [cfg](../decompiled/FUN_71000ffca0__71000ffca0.mmd)
- **Clone hash:** `1158104db63da09f`

```c

undefined8 FUN_71000ffca0(long *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  ushort uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  long lVar13;
  int aiStack_160 [4];
  undefined8 uStack_150;
  undefined4 auStack_58 [2];
  
  piVar7 = aiStack_160;
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    uStack_150._0_4_ = 0xc406;
    break;
  case 6:
    uStack_150._0_4_ = 0xa471;
    break;
  case 7:
    uStack_150._0_4_ = 0xc420;
    break;
  case 8:
    uStack_150._0_4_ = 0xc421;
    break;
  default:
    FUN_7100192e90((int *)&uStack_150,DAT_71052adfc0);
    if (((int)uStack_150 == 0) &&
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar11 = DAT_71052adb38, iVar3 != 4)) {
// ... (153 more lines)
```

## 22. `FUN_7100176e30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176e30`  (offset `0x176e30`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100176e30(long param_1)`
- **Size / BBs / Incoming:** 252 bytes / 8 bb / 1 incoming refs
- **Match values:** Wait
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

## 23. `FUN_71000f0790`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f0790`  (offset `0xf0790`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f0790(void)`
- **Size / BBs / Incoming:** 600 bytes / 20 bb / 5 incoming refs
- **Match values:** Wait
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

## 24. `FUN_71000f9e90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f9e90`  (offset `0xf9e90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f9e90(void)`
- **Size / BBs / Incoming:** 812 bytes / 23 bb / 3 incoming refs
- **Match values:** Wait
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitUntilLeaderLeavesMesh;NexMatchJointSessionJob::WaitNextSessionId
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_7100140e30;FUN_7100146ba0;FUN_7100149240;FUN_710014e380;FUN_7100150440;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f9e90__71000f9e90.c)  [cfg](../decompiled/FUN_71000f9e90__71000f9e90.mmd)
- **Clone hash:** `5db5f9437ee35601`

```c

undefined8 FUN_71000f9e90(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined1 uVar6;
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
    aiStack_48[0] = 0xc406;
    break;
  case 6:
    aiStack_48[0] = 0xa471;
    break;
  case 7:
    aiStack_48[0] = 0xc420;
    break;
  case 8:
    aiStack_48[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_48,DAT_71052adfc0);
    if ((aiStack_48[0] == 0) &&
       (iVar4 = FUN_7100146ba0(DAT_71052adb38), lVar2 = DAT_71052adb38, iVar4 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        FUN_710014e380(aiStack_48,*(long *)(DAT_71052adb38 + 200),
                       (char)*(undefined4 *)(param_1 + 0x90),*(long *)(param_1 + 0xa0),1);
        aiStack_58[0] = 0x4c0d;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_58 | 4));
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
// ... (80 more lines)
```

## 25. `FUN_7100170830`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100170830`  (offset `0x170830`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100170830(void)`
- **Size / BBs / Incoming:** 200 bytes / 8 bb / 1 incoming refs
- **Match values:** Wait
- **Strings touched:** LdnHostMigrationJob::WaitForCancel;LdnHostMigrationJob::WaitConnectNetwork
- **Callees:** FUN_71000b4300;FUN_71000b4820;FUN_710016ffa0;FUN_710017dcc0
- **Files:** [decomp](../decompiled/FUN_7100170830__7100170830.c)  [cfg](../decompiled/FUN_7100170830__7100170830.mmd)
- **Clone hash:** `af62d497f55dea19`

```c

undefined8 FUN_7100170830(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int aiStack_40 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    plVar3 = *(long **)(*(long *)(param_1 + 0x78) + 0x400);
    FUN_710016ffa0(aiStack_40,plVar3,*(undefined4 **)(param_1 + 0x60));
    if (aiStack_40[0] == 0) {
      FUN_710017dcc0(*(long *)(param_1 + 0x78));
      lVar2 = *(long *)(param_1 + 0x78);
      *(undefined1 *)(lVar2 + 0x47d) = 0;
      *(undefined1 *)(lVar2 + 0x569) = 1;
      FUN_71000b4820((long)plVar3,1);
      *(undefined8 *)(param_1 + 0x30) = 0x58;
      *(undefined8 *)(param_1 + 0x38) = 1;
      *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitConnectNetwork";
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
    *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitForCancel";
  }
  return uVar1;
}


```

## 26. `FUN_7100176310`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176310`  (offset `0x176310`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100176310(long param_1)`
- **Size / BBs / Incoming:** 188 bytes / 8 bb / 1 incoming refs
- **Match values:** Wait
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;dys_yoga03_l_03_set;LocalHostMigrationJob::WaitCreateNetwork
- **Callees:** FUN_71000b4300;FUN_71001819f0
- **Files:** [decomp](../decompiled/FUN_7100176310__7100176310.c)  [cfg](../decompiled/FUN_7100176310__7100176310.mmd)
- **Clone hash:** `2a0edf4e5cba8637`

```c

undefined8 FUN_7100176310(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int local_40 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    plVar3 = *(long **)(param_1 + 0x78);
    lVar4 = *(long *)(param_1 + 0x60);
    lVar2 = (**(code **)(*plVar3 + 0x158))(plVar3);
    FUN_71001819f0(local_40,plVar3,lVar4,lVar2);
    if (local_40[0] == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0x40;
      *(undefined8 *)(param_1 + 0x38) = 1;
      *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitCreateNetwork";
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

## 27. `FUN_71001763d0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001763d0`  (offset `0x1763d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001763d0(void)`
- **Size / BBs / Incoming:** 396 bytes / 13 bb / 1 incoming refs
- **Match values:** Wait
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;N2nn3pia9transport11DispatchJobE;LocalHostMigrationJob::WaitUntilAllClientsConnection
- **Callees:** FUN_71000b2b70;FUN_71000b41f0;FUN_71000b4300;FUN_71000bb5d0;FUN_71000bce50;FUN_7100176130;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001763d0__71001763d0.c)  [cfg](../decompiled/FUN_71001763d0__71001763d0.mmd)
- **Clone hash:** `649aea3060b1bb65`

```c

undefined8 FUN_71001763d0(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  long *plVar4;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar3 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar3 == 1) {
      FUN_71000b4300((long)piVar3);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar3) {
  case 1:
    goto switchD_7100176448_caseD_1;
  case 2:
    plVar4 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x158))();
    (**(code **)(*plVar4 + 0x148))(plVar4,uVar2);
    aiStack_70[2] = 0;
    aiStack_70[0] = 0x10;
    aiStack_70[1] = 0;
    FUN_71000b2b70();
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitUntilAllClientsConnection";
    *(code **)(param_1 + 0x30) = FUN_7100176560;
    *(undefined8 *)(param_1 + 0x38) = 0;
// ... (27 more lines)
```

## 28. `FUN_7101bcd2c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bcd2c0`  (offset `0x1bcd2c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bcd2c0(int * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 304 bytes / 25 bb / 1 incoming refs
- **Match values:** wait
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

## 29. `FUN_7100111da0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100111da0`  (offset `0x111da0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100111da0(void)`
- **Size / BBs / Incoming:** 1296 bytes / 124 bb / 2 incoming refs
- **Match values:** Wait
- **Strings touched:** NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting;NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti;NexProcessHostMigrationJob::NexCheckOldHostDisconnection
- **Callees:** FUN_71000bb680;FUN_7100192e90;FUN_71001a35c0;FUN_71001d0a10;FUN_71001f16c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100111da0__7100111da0.c)  [cfg](../decompiled/FUN_7100111da0__7100111da0.mmd)
- **Clone hash:** `cc5ee9c8e0dc68aa`

```c

undefined8 FUN_7100111da0(long param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  char *pcVar8;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_38,DAT_71052adfc0);
  aiStack_48[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
  if (aiStack_38[0] == aiStack_48[0]) {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
LAB_7100111e14:
    pcVar7 = FUN_71001a1d80;
    pcVar8 = "NexProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_71001121ac;
  }
  if (*(char *)(param_1 + 0xb3) != -3) goto LAB_7100112188;
  if (*(char *)(param_1 + 0xc1) != '\0') {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
    pcVar7 = FUN_71001a2450;
    pcVar8 = "NexProcessHostMigrationJob::WaitNewHostFinished";
    goto LAB_71001121ac;
  }
// ... (201 more lines)
```

## 30. `FUN_71014d2130`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014d2130`  (offset `0x14d2130`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014d2130(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3256 bytes / 92 bb / 2 incoming refs
- **Match values:** Wait
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

## 31. `FUN_710151e4b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710151e4b0`  (offset `0x151e4b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710151e4b0(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1784 bytes / 60 bb / 2 incoming refs
- **Match values:** Wait
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

## 32. `FUN_7102c75460`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102c75460`  (offset `0x2c75460`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102c75460(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 544 bytes / 39 bb / 1 incoming refs
- **Match values:** wait
- **Strings touched:** queen_set_wait;BottomJaw_1_end
- **Callers:** FUN_7102c6cff0
- **Callees:** FUN_7102405040;FUN_71025ee080;FUN_710260fdd0;FUN_7102610070;FUN_710392e290
- **Files:** [decomp](../decompiled/FUN_7102c75460__7102c75460.c)  [cfg](../decompiled/FUN_7102c75460__7102c75460.mmd)
- **Clone hash:** `6f315b3c134b0eaf`

```c

void FUN_7102c75460(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long ****pppplVar5;
  long lVar6;
  undefined4 local_34;
  long ***local_28;
  
  plVar2 = (long *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_28 = (long ***)&SUB_00000020;
      pppplVar5 = &local_28;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0x20,pppplVar5,param_4,param_5,param_6,param_7,
                                          param_8), plVar2 != (long *)0x0)) goto LAB_7102c754d8;
    }
    plVar2 = (long *)0x0;
  }
LAB_7102c754d8:
  *plVar2 = param_2;
  plVar2[1] = 0;
  *(undefined4 *)(plVar2 + 2) = 0;
  *(undefined8 *)((long)plVar2 + 0x14) = 0xffffffff;
  *(undefined1 *)((long)plVar2 + 0x1c) = 0;
  plVar4 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
  do {
    if (plVar4 == *(long **)(*(long *)(param_2 + 0x310) + 0xd8)) {
      plVar2[1] = 0;
LAB_7102c75534:
      uVar1 = 0xffffffff;
LAB_7102c75538:
// ... (61 more lines)
```

## 33. `FUN_7101341d50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101341d50`  (offset `0x1341d50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101341d50(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1312 bytes / 53 bb / 5 incoming refs
- **Match values:** Wait
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

## 34. `FUN_7100100820`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100100820`  (offset `0x100820`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100100820(void)`
- **Size / BBs / Incoming:** 2540 bytes / 89 bb / 2 incoming refs
- **Match values:** Wait
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitCompanionStation;NexMatchJointSessionJob::WaitStartRetryJoinMesh;NexMatchJointSessionJob::MeshRestart;NexMatchJointSessionJob::StartLeaveMesh
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140060;FUN_7100140910;FUN_7100140e30;FUN_7100146ba0;FUN_71001507a0;FUN_71001902d0;FUN_71001929a0;FUN_71001929d0;FUN_7100192a60;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100100820__7100100820.c)  [cfg](../decompiled/FUN_7100100820__7100100820.mmd)
- **Clone hash:** `6443dc19d85972e5`

```c

undefined8 FUN_7100100820(long *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  ErrorResultVariant *pEVar14;
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  long alStack_60 [2];
  undefined4 auStack_48 [2];
  
  iVar5 = FUN_7100146ba0(DAT_71052adb38);
  lVar2 = DAT_71052adb38;
  if (iVar5 == 7) {
    alStack_60[0]._0_4_ = 0xc420;
LAB_71001008ac:
    *(undefined1 *)((long)param_1 + 0xfa) = 1;
    *(undefined1 *)(param_1 + 0x26) = 3;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)alStack_60 | 4));
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)alStack_60 | 4),(Result *)aiStack_70);
    FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_60);
// ... (350 more lines)
```

## 35. `FUN_710001f340`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710001f340`  (offset `0x1f340`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710001f340(long param_1, undefined8 * param_2, byte * * param_3, byte * * param_4, byte * * param_5, byte * * param_6, byte * * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12036 bytes / 695 bb / 1 incoming refs
- **Match values:** WAIT;wait
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

## 36. `FUN_7100183cc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100183cc0`  (offset `0x183cc0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100183cc0(void)`
- **Size / BBs / Incoming:** 200 bytes / 13 bb / 4 incoming refs
- **Match values:** Wait
- **Strings touched:** LocalDestroyNetworkJob::WaitForCancel;LocalDestroyNetworkJob::WaitUntilAllClientsDisconnection;LocalDestroyNetworkJob::StartDestroyNetwork
- **Callees:** FUN_71000b4300;FUN_71000bb5d0;FUN_710017fc00;FUN_710017fce0;FUN_71001800a0
- **Files:** [decomp](../decompiled/FUN_7100183cc0__7100183cc0.c)  [cfg](../decompiled/FUN_7100183cc0__7100183cc0.mmd)
- **Clone hash:** `ca91784e7f7364d8`

```c

undefined8 FUN_7100183cc0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar2 = FUN_71001800a0(*(long *)(param_1 + 0x88));
    if ((uVar2 & 1) == 0) {
      pcVar5 = FUN_7100183d90;
      uVar1 = 0;
      pcVar4 = "LocalDestroyNetworkJob::StartDestroyNetwork";
    }
    else {
      lVar3 = *(long *)(param_1 + 0x88);
      if (*(char *)(param_1 + 0x80) == '\0') {
        FUN_710017fc00(lVar3);
      }
      else {
        *(undefined1 *)(lVar3 + 0x468) = 0;
        FUN_710017fce0(lVar3);
      }
      FUN_71000bb5d0((undefined8 *)(param_1 + 0x68));
      pcVar5 = FUN_7100183e60;
      uVar1 = 5;
      pcVar4 = "LocalDestroyNetworkJob::WaitUntilAllClientsDisconnection";
    }
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x418) = 0;
    }
    pcVar5 = FUN_7100183b90;
// ... (9 more lines)
```

## 37. `FUN_7100170900`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100170900`  (offset `0x170900`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100170900(void)`
- **Size / BBs / Incoming:** 684 bytes / 22 bb / 1 incoming refs
- **Match values:** Wait
- **Strings touched:** LdnHostMigrationJob::WaitForCancel;N2nn3pia9transport11DispatchJobE;LdnHostMigrationJob::WaitRetry
- **Callees:** FUN_71000b2b70;FUN_71000b4180;FUN_71000b41f0;FUN_71000b4300;FUN_71000bb5d0;FUN_71000bce50;FUN_710016c090;FUN_7100176130;FUN_710017ddf0;FUN_710017f1c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100170900__7100170900.c)  [cfg](../decompiled/FUN_7100170900__7100170900.mmd)
- **Clone hash:** `68777c10b3b9ce71`

```c

undefined8 FUN_7100170900(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  ErrorResultVariant *this;
  undefined4 *puVar4;
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  undefined8 uStack_50;
  undefined4 uStack_48;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar3 = aiStack_b0;
  puVar4 = *(undefined4 **)(param_1 + 0x58);
  piVar1 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar4 + 10) != '\0') {
    if (*piVar1 == 1) {
      FUN_71000b4300((long)piVar1);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar1) {
  case 1:
    goto switchD_7100170978_caseD_1;
  case 2:
    uStack_50 = (ulong)uStack_50._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_50 | 4));
    aiStack_60[0] = 0;
// ... (77 more lines)
```

## 38. `FUN_7100176800`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176800`  (offset `0x176800`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176800(void)`
- **Size / BBs / Incoming:** 300 bytes / 13 bb / 2 incoming refs
- **Match values:** Wait
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;N2nn3pia9transport11DispatchJobE;LocalHostMigrationJob::WaitAllClientsAck
- **Callees:** FUN_71000b41f0;FUN_71000b4300;FUN_71000bce50;FUN_7100176130;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100176800__7100176800.c)  [cfg](../decompiled/FUN_7100176800__7100176800.mmd)
- **Clone hash:** `01fed77466b32a7d`

```c

undefined8 FUN_7100176800(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar3 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar3 == 1) {
      FUN_71000b4300((long)piVar3);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar3) {
  case 1:
    goto switchD_7100176878_caseD_1;
  case 2:
    *(code **)(param_1 + 0x30) = FUN_7100176930;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitAllClientsAck";
    return 0;
  case 3:
    FUN_71000bce50(aiStack_40,piVar3 + 1);
    piVar3 = aiStack_40;
    break;
  case 4:
    FUN_71000bce50(aiStack_50,piVar3 + 1);
    piVar3 = aiStack_50;
// ... (18 more lines)
```

## 39. `FUN_7100141230`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100141230`  (offset `0x141230`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100141230(long * param_1)`
- **Size / BBs / Incoming:** 344 bytes / 15 bb / 9 incoming refs
- **Match values:** Wait
- **Strings touched:** nn::pia::session::LeaveSessionJob::SendMonitoringData;LeaveSessionJob::WaitLeaveMeshWithHostMigration;LeaveSessionJob::WaitLeaveMesh
- **Callees:** FUN_7100146ba0;FUN_7100146be0;FUN_7100146ed0;FUN_7100192050;FUN_7100192af0;FUN_71001931d0;FUN_7100193380
- **Files:** [decomp](../decompiled/FUN_7100141230__7100141230.c)  [cfg](../decompiled/FUN_7100141230__7100141230.mmd)
- **Clone hash:** `9bf3ea3af5122142`

```c

undefined8 FUN_7100141230(long *param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  char *pcVar5;
  int local_40 [4];
  
  uVar2 = FUN_7100146ba0(DAT_71052adb38);
  if (uVar2 < 10 && (1 << (ulong)(uVar2 & 0x1f) & 0x3a0U) != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
    return 0;
  }
  FUN_7100193380((long)DAT_71052adfc0,1);
  bVar1 = FUN_71001931d0((long)DAT_71052adfc0);
  if ((bVar1) && (uVar3 = FUN_7100146ed0(DAT_71052adb38), (uVar3 & 1) != 0)) {
    uVar2 = FUN_7100146be0(DAT_71052adb38);
    if ((uVar2 & 0xffff) == 1) {
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
    FUN_7100192050(local_40,DAT_71052adfc0,(int *)(param_1 + 0xc));
    if (local_40[0] != 0) {
LAB_7100141350:
      (**(code **)(*param_1 + 0x38))(param_1);
      return 0;
    }
    pcVar4 = FUN_71001413b0;
    pcVar5 = "LeaveSessionJob::WaitLeaveMeshWithHostMigration";
  }
  else {
    FUN_7100192af0(local_40,(long)DAT_71052adfc0,(int *)(param_1 + 0xc));
    if (*(char *)(DAT_71052adb38 + 0x15d) != '\0') {
      *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
    }
// ... (10 more lines)
```

## 40. `FUN_7100175970`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100175970`  (offset `0x175970`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100175970(int * param_1, long param_2, undefined4 * param_3, int param_4)`
- **Size / BBs / Incoming:** 176 bytes / 6 bb / 2 incoming refs
- **Match values:** Wait
- **Strings touched:** LocalForceDisconnectNetworkJob::WaitDisconnected;LocalForceDisconnectNetworkJob::WaitHostMigrationEnd
- **Callers:** FUN_71001804e0
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100175970__7100175970.c)  [cfg](../decompiled/FUN_7100175970__7100175970.mmd)
- **Clone hash:** `829babfcc8c2f00e`

```c

void FUN_7100175970(int *param_1,long param_2,undefined4 *param_3,int param_4)

{
  char *pcVar1;
  code *pcVar2;
  int local_40 [4];
  undefined4 local_28 [2];
  
  *(undefined4 **)(param_2 + 0x58) = param_3;
  FUN_71000b40e0(param_3);
  FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
  if (param_4 == 0) {
    pcVar2 = FUN_7100175a20;
    pcVar1 = "LocalForceDisconnectNetworkJob::WaitHostMigrationEnd";
  }
  else {
    if (param_4 != 1) goto LAB_71001759dc;
    pcVar2 = FUN_7100175b00;
    pcVar1 = "LocalForceDisconnectNetworkJob::WaitDisconnected";
  }
  *(code **)(param_2 + 0x30) = pcVar2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = pcVar1;
LAB_71001759dc:
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_40);
  return;
}


```

## 41. `FUN_7100112440`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100112440`  (offset `0x112440`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100112440(void)`
- **Size / BBs / Incoming:** 320 bytes / 17 bb / 2 incoming refs
- **Match values:** Wait
- **Strings touched:** NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting
- **Callees:** FUN_7100192e90;FUN_71001d0a10;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100112440__7100112440.c)  [cfg](../decompiled/FUN_7100112440__7100112440.mmd)
- **Clone hash:** `c631fa30d7921cd0`

```c

undefined8 FUN_7100112440(long param_1)

{
  bool bVar1;
  long *plVar2;
  char *pcVar3;
  code *pcVar4;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_38,DAT_71052adfc0);
  aiStack_48[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
  if (aiStack_38[0] == aiStack_48[0]) {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
LAB_71001124b4:
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar3 = "NexProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    if (*(char *)(param_1 + 0xb3) == -3) {
      plVar2 = *(long **)(param_1 + 0x118);
      bVar1 = *(int *)((long)plVar2 + 0x14) == 1;
      if (*(char *)(param_1 + 0xc1) != '\0') {
        if (bVar1) {
          FUN_71001d0a10(plVar2);
        }
        *(code **)(param_1 + 0x30) = FUN_71001a2450;
        pcVar3 = "NexProcessHostMigrationJob::WaitNewHostFinished";
        goto LAB_7100112534;
      }
      if (bVar1) {
        return 5;
// ... (19 more lines)
```

## 42. `FUN_71032ebcc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71032ebcc0`  (offset `0x32ebcc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71032ebcc0(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 436 bytes / 13 bb / 1 incoming refs
- **Match values:** wait
- **Strings touched:** waitingplayer_1;waitingplayer_2
- **Callers:** FUN_7103349a50
- **Callees:** FUN_7103238a70;FUN_710353da30;FUN_7103540b10;FUN_7103778300;FUN_7103778c70;FUN_71037790a0
- **Files:** [decomp](../decompiled/FUN_71032ebcc0__71032ebcc0.c)  [cfg](../decompiled/FUN_71032ebcc0__71032ebcc0.mmd)
- **Clone hash:** `0c9f86253640bf8a`

```c

void FUN_71032ebcc0(long param_1,ulong param_2,long *********param_3,byte ****param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long *********ppppppppplVar6;
  byte ****ppppbVar7;
  long ****pppplVar8;
  long lVar9;
  uint local_68 [2];
  uint local_58 [2];
  
  lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x80);
  bVar3 = ((ulong)param_4 & 0xffffffffff) == 0;
  bVar4 = (ulong)param_4 >> 0x38 != 0xc1;
  pcVar1 = "waitingplayer_2";
  if (bVar4 || bVar3) {
    pcVar1 = "waitingplayer_1";
  }
  ppppppppplVar6 = param_3;
  ppppbVar7 = param_4;
  pppplVar8 = (long ****)param_5;
  FUN_7103778300(0x3f800000,*(long *)(lVar9 + 0x168),(long)pcVar1);
  FUN_71037790a0(*(long *)(lVar9 + 0x198),1,ppppppppplVar6,ppppbVar7,pppplVar8,param_6,param_7,
                 param_8);
  FUN_71037790a0(*(long *)(lVar9 + 0x1a8),1,ppppppppplVar6,ppppbVar7,pppplVar8,param_6,param_7,
                 param_8);
  if ((param_2 >> 0x38 == 0xc1) && ((param_2 & 0xffffffffff) != 0)) {
    ppppppppplVar6 = (long *********)0x2;
    uVar5 = FUN_7103238a70(param_2,(ulong)param_3 & 0xffffffff,2);
    if ((uVar5 & 0xffffffffff) == 0) {
      local_58[0] = 0xffffff;
      FUN_7103778c70(*(long *)(lVar9 + 0x198),local_58,ppppppppplVar6,ppppbVar7,pppplVar8,param_6,
                     param_7,param_8);
    }
// ... (37 more lines)
```

## 43. `FUN_71000d5530`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d5530`  (offset `0xd5530`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d5530(void)`
- **Size / BBs / Incoming:** 324 bytes / 16 bb / 3 incoming refs
- **Match values:** Wait
- **Strings touched:** NexJoinMeshJob::LeaveMeshWithHostMigration;NexJoinMeshJob::LeaveMesh;NexJoinMeshJob::WaitCheckHostConnection;NexJoinMeshJob::WaitCheckKickoutJob
- **Callees:** FUN_7100152020;FUN_7100152040;FUN_710018b370;FUN_710018b870;FUN_71001921a0;FUN_7100192f60;FUN_71001931d0
- **Files:** [decomp](../decompiled/FUN_71000d5530__71000d5530.c)  [cfg](../decompiled/FUN_71000d5530__71000d5530.mmd)
- **Clone hash:** `f8cb40dd8874177c`

```c

undefined8 FUN_71000d5530(long param_1)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  
  lVar3 = FUN_7100192f60(DAT_71052adfc0);
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    uVar4 = FUN_710018b370(param_1);
    if (((uVar4 & 1) != 0) ||
       ((bVar1 = FUN_71001921a0(DAT_71052adfc0), (bVar1 & 1) == 0 &&
        (uVar4 = FUN_710018b870(param_1), (uVar4 & 1) != 0)))) {
      FUN_7100152020(lVar3);
      return 1;
    }
    bVar2 = FUN_7100152040(lVar3);
    if (!bVar2) {
      return 5;
    }
    bVar1 = FUN_71001921a0(DAT_71052adfc0);
    if ((bVar1 & 1) == 0) {
      *(code **)(param_1 + 0x30) = FUN_71000d5800;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar5 = "NexJoinMeshJob::WaitCheckKickoutJob";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_71000d5680;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar5 = "NexJoinMeshJob::WaitCheckHostConnection";
    }
  }
  else {
    FUN_7100152020(lVar3);
    bVar1 = FUN_71001921a0(DAT_71052adfc0);
    if (((bVar1 & 1) == 0) || (bVar2 = FUN_71001931d0(DAT_71052adfc0), !bVar2)) {
      *(code **)(param_1 + 0x30) = FUN_710018d6e0;
// ... (13 more lines)
```

## 44. `FUN_7100170530`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100170530`  (offset `0x170530`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100170530(void)`
- **Size / BBs / Incoming:** 224 bytes / 8 bb / 1 incoming refs
- **Match values:** Wait
- **Strings touched:** LdnHostMigrationJob::WaitForCancel;LdnHostMigrationJob::WaitCreateNetwork
- **Callees:** FUN_71000b4300;FUN_71000b4820;FUN_710016f650;FUN_710017dcc0
- **Files:** [decomp](../decompiled/FUN_7100170530__7100170530.c)  [cfg](../decompiled/FUN_7100170530__7100170530.mmd)
- **Clone hash:** `c9feb0d320759884`

```c

undefined8 FUN_7100170530(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  int aiStack_40 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    plVar3 = (long *)(*(long **)(param_1 + 0x78))[0x80];
    puVar4 = *(undefined4 **)(param_1 + 0x60);
    lVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x158))();
    FUN_710016f650(aiStack_40,plVar3,puVar4,lVar2,0);
    if (aiStack_40[0] == 0) {
      FUN_710017dcc0(*(long *)(param_1 + 0x78));
      lVar2 = *(long *)(param_1 + 0x78);
      *(undefined1 *)(lVar2 + 0x47d) = 0;
      *(undefined1 *)(lVar2 + 0x569) = 1;
      FUN_71000b4820((long)plVar3,1);
      *(undefined8 *)(param_1 + 0x30) = 0x40;
      *(undefined8 *)(param_1 + 0x38) = 1;
      *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitCreateNetwork";
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
    *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitForCancel";
  }
  return uVar1;
}


```

## 45. `FUN_71000d53a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d53a0`  (offset `0xd53a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d53a0(void)`
- **Size / BBs / Incoming:** 392 bytes / 17 bb / 2 incoming refs
- **Match values:** Wait
- **Strings touched:** NexJoinMeshJob::CompleteProcess;NexJoinMeshJob::WaitBandwidthCheck
- **Callees:** FUN_7100151ef0;FUN_7100151fe0;FUN_7100152020;FUN_7100161fb0;FUN_7100192f60;FUN_7100193560
- **Files:** [decomp](../decompiled/FUN_71000d53a0__71000d53a0.c)  [cfg](../decompiled/FUN_71000d53a0__71000d53a0.mmd)
- **Clone hash:** `929958c318dc8f0d`

```c

undefined8 FUN_71000d53a0(long param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ushort uVar7;
  int aiStack_60 [4];
  
  lVar4 = FUN_7100192f60(DAT_71052adfc0);
  if (*(char *)(lVar4 + 0x51) != '\0') {
    *(code **)(param_1 + 0x30) = FUN_710018cf30;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NexJoinMeshJob::CompleteProcess";
    return 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 3;
  if (*(ushort *)(param_1 + 0x6c) < 2) {
LAB_71000d54c4:
    *(char **)(param_1 + 0x40) = "NexJoinMeshJob::WaitBandwidthCheck";
    *(code **)(param_1 + 0x30) = FUN_71000d5530;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 5;
  }
  uVar3 = FUN_7100151fe0(lVar4);
  if ((uVar3 & 1) == 0) {
    FUN_7100152020(lVar4);
    return 5;
  }
  plVar5 = (long *)FUN_7100161fb0(DAT_71052add68);
  aiStack_60[0] = 0;
  aiStack_60[1] = 0x800;
  aiStack_60[2] = 0;
  (**(code **)(*plVar5 + 0x68))(plVar5,aiStack_60);
  if (1 < *(ushort *)(param_1 + 0x6c)) {
    uVar7 = 2;
// ... (21 more lines)
```

## 46. `FUN_7100175e10`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100175e10`  (offset `0x175e10`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100175e10(void)`
- **Size / BBs / Incoming:** 188 bytes / 9 bb / 2 incoming refs
- **Match values:** Wait
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;LocalHostMigrationJob::WaitDisconnectNetwork
- **Callees:** FUN_71000b4300;FUN_71001804d0;FUN_71001804e0
- **Files:** [decomp](../decompiled/FUN_7100175e10__7100175e10.c)  [cfg](../decompiled/FUN_7100175e10__7100175e10.mmd)
- **Clone hash:** `d9d6b1607e1b1b96`

```c

undefined8 FUN_7100175e10(long param_1)

{
  bool bVar1;
  int aiStack_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    if (*(char *)(*(long *)(param_1 + 0x78) + 0x470) == '\0') {
      bVar1 = FUN_71001804d0(*(long *)(param_1 + 0x78));
      if ((!bVar1) &&
         (FUN_71001804e0(aiStack_30,*(long *)(param_1 + 0x78),*(undefined4 **)(param_1 + 0x60)),
         aiStack_30[0] == 0)) {
        *(code **)(param_1 + 0x30) = FUN_7100175fc0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitDisconnectNetwork";
      }
      return 5;
    }
  }
  else if (**(int **)(param_1 + 0x60) == 1) {
    FUN_71000b4300((long)*(int **)(param_1 + 0x60));
  }
  *(code **)(param_1 + 0x30) = FUN_7100175f70;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
  return 0;
}


```

## 47. `FUN_710017cbd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017cbd0`  (offset `0x17cbd0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710017cbd0(long param_1)`
- **Size / BBs / Incoming:** 600 bytes / 19 bb / 3 incoming refs
- **Match values:** Wait
- **Strings touched:** NODE_PRE_REFRACT_BLEND;LocalProcessHostMigrationJobNew::WaitNewHostGreeting;LocalProcessHostMigrationJobNew::HostMigrationFailure;LocalProcessHostMigrationJobNew::LocalPrepareForBecomingHost
- **Callees:** FUN_71000b1c60;FUN_71000b1cb0;FUN_71000b1cf0;FUN_71000b2850;FUN_71000b2b10;FUN_71000b2b70;FUN_7100161fa0;FUN_7100174cb0;FUN_710017f4a0
- **Files:** [decomp](../decompiled/FUN_710017cbd0__710017cbd0.c)  [cfg](../decompiled/FUN_710017cbd0__710017cbd0.mmd)
- **Clone hash:** `a952d1fffb46087e`

```c

undefined8 FUN_710017cbd0(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 auStack_50 [4];
  
  FUN_71000b1c60(auStack_50,*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x2c0);
  lVar1 = param_1 + 0x138;
  local_68 = 0;
  local_70 = 0x20;
  FUN_71000b2b70();
  local_68 = 0;
  local_70 = 0x20;
  FUN_71000b2b70();
  *(undefined4 *)(param_1 + 0x110) = 6;
  if ((*(char *)(param_1 + 0x160) == '\0') &&
     (uVar4 = FUN_710017f4a0(*(long *)(*(long *)(param_1 + 0x158) + 0x18),lVar1),
     (~uVar4 & 0xffff) == 0)) {
    *(undefined1 *)(param_1 + 0x160) = 1;
    uVar5 = FUN_71000b2b10((long)auStack_50,lVar1);
    if ((uVar5 & 1) != 0) goto LAB_710017cc68;
LAB_710017cca8:
    bVar3 = FUN_71000b2850(param_1 + 0x118);
    if ((((bVar3) && (bVar3 = FUN_71000b2850((long)auStack_50), bVar3)) &&
        (uVar5 = FUN_71000b2b10((long)auStack_50,param_1 + 0x118), (uVar5 & 1) == 0)) &&
       (uVar5 = FUN_71000b2b10((long)auStack_50,lVar1), (uVar5 & 1) == 0)) {
      local_68 = 0;
      local_70 = 0x20;
      FUN_71000b2b70();
// ... (55 more lines)
```

## 48. `FUN_71001839f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001839f0`  (offset `0x1839f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001839f0(void)`
- **Size / BBs / Incoming:** 236 bytes / 13 bb / 2 incoming refs
- **Match values:** Wait
- **Strings touched:** LocalDestroyNetworkJob::WaitForCancel;LocalDestroyNetworkJob::WaitUntilAllClientsReceiveUpdateSessionMessage
- **Callees:** FUN_71000b4300;FUN_71000bb5d0;FUN_7100172bb0;FUN_710017eae0
- **Files:** [decomp](../decompiled/FUN_71001839f0__71001839f0.c)  [cfg](../decompiled/FUN_71001839f0__71001839f0.mmd)
- **Clone hash:** `5b4056a7e6f49eb7`

```c

undefined8 FUN_71001839f0(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  int aiStack_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    FUN_7100172bb0(aiStack_30,*(long **)(*(long *)(param_1 + 0x88) + 0x400));
    if (aiStack_30[0] != 0) {
      return 5;
    }
    if (*(char *)(param_1 + 0x80) == '\0') {
      FUN_71000bb5d0((undefined8 *)(param_1 + 0x70));
      pcVar2 = FUN_7100183cc0;
      pcVar1 = "LocalDestroyNetworkJob::SendDestroyNetworkMessage";
    }
    else {
      FUN_710017eae0(*(long **)(param_1 + 0x88));
      FUN_71000bb5d0((undefined8 *)(param_1 + 0x78));
      pcVar2 = FUN_7100183be0;
      pcVar1 = "LocalDestroyNetworkJob::WaitUntilAllClientsReceiveUpdateSessionMessage";
    }
    *(code **)(param_1 + 0x30) = pcVar2;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x418) = 0;
    }
    *(code **)(param_1 + 0x30) = FUN_7100183b90;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar1 = "LocalDestroyNetworkJob::WaitForCancel";
  }
  *(char **)(param_1 + 0x40) = pcVar1;
  return 0;
// ... (2 more lines)
```

## 49. `FUN_71001a2310`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a2310`  (offset `0x1a2310`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001a2310(long * param_1)`
- **Size / BBs / Incoming:** 312 bytes / 12 bb / 13 incoming refs
- **Match values:** Wait
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;ProcessHostMigrationJob::WaitNewHostFinished
- **Callees:** FUN_7100192e90;FUN_7100193580;FUN_710019a2d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001a2310__71001a2310.c)  [cfg](../decompiled/FUN_71001a2310__71001a2310.mmd)
- **Clone hash:** `c38e3b672bd589da`

```c

undefined8 FUN_71001a2310(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  *(undefined4 *)(param_1 + 0x22) = 0xb;
  FUN_7100192e90(local_40,DAT_71052adfc0);
  local_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  if (local_40[0] == local_50[0]) {
LAB_71001a237c:
    uVar2 = 0;
    param_1[6] = (long)FUN_71001a1d80;
    param_1[7] = 0;
    param_1[8] = (long)"ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0xb3);
    if (cVar1 == -3) {
      if ((ulong)param_1[0xb] <= *(ulong *)(DAT_71052ac580 + 0x30)) {
        uVar3 = (**(code **)(*param_1 + 0x80))(param_1);
        if ((uVar3 & 1) != 0) {
          return 0;
        }
        goto LAB_71001a237c;
      }
    }
    else {
      if (*(char *)((long)param_1 + 0xc4) == '\0') {
        if (cVar1 != (char)param_1[0x12]) goto LAB_71001a237c;
// ... (17 more lines)
```

## 50. `FUN_7100125030`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100125030`  (offset `0x125030`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100125030(void)`
- **Size / BBs / Incoming:** 312 bytes / 6 bb / 2 incoming refs
- **Match values:** Wait
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanWaitMatchMakingClientHostLastConfirmation
- **Callees:** FUN_71000b40e0;FUN_710011b2f0;FUN_710011be40;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100125030__7100125030.c)  [cfg](../decompiled/FUN_7100125030__7100125030.mmd)
- **Clone hash:** `c9ca13259b6ccc92`

```c

undefined8 FUN_7100125030(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 9;
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    uVar4 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    if (*(ulong *)(param_1 + 0x1b0) <= *(ulong *)(DAT_71052ac580 + 0x30)) {
      lVar5 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
      FUN_71000b40e0((int *)(param_1 + 0x118));
      iVar3 = FUN_710011be40(lVar5);
      FUN_710011b2f0(aiStack_40,lVar5,(int *)(param_1 + 0x118),iVar3);
      pcVar1 = "LanProcessHostMigrationJob::LanWaitMatchMakingClientHostLastConfirmation";
      pcVar2 = FUN_7100125170;
      if (aiStack_40[0] != 0) {
        pcVar1 = "LanProcessHostMigrationJob::HostMigrationFailure";
        pcVar2 = FUN_71001a1d80;
      }
      *(code **)(param_1 + 0x30) = pcVar2;
      *(undefined8 *)(param_1 + 0x38) = 0;
// ... (7 more lines)
```

