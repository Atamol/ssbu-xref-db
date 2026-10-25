# matchmakesession (funcs=100, hits=137)

Top 50 functions by hit count

## 1. `FUN_7100106350`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100106350`  (offset `0x106350`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100106350(void)`
- **Size / BBs / Incoming:** 272 bytes / 9 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** nex::NexMatchDestroySessionJob::SendMonitoringData;NexMatchDestroySessionJob::UnregisterCurrentMatchmakeSession;NexMatchDestroySessionJob::WaitUnregisterBufferMatchmakeSession
- **Callees:** FUN_7100146ba0
- **Files:** [decomp](../decompiled/FUN_7100106350__7100106350.c)  [cfg](../decompiled/FUN_7100106350__7100106350.mmd)
- **Clone hash:** `b96628cc6badf2af`

```c

undefined8 FUN_7100106350(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  ulong uVar5;
  int aiStack_30 [4];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
  case 6:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_710013e030;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar4 = "nex::NexMatchDestroySessionJob::SendMonitoringData";
    break;
  default:
    uVar5 = (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0');
    if (*(int *)(DAT_71052adb38 + uVar5 * 4 + 0x180) != 0) {
      plVar3 = *(long **)(DAT_71052adb38 + uVar5 * 8 + 0x168);
      (**(code **)(*plVar3 + 0x70))(aiStack_30,plVar3,param_1 + 0x60);
      pcVar1 = FUN_7100106590;
      if (aiStack_30[0] != 0) {
        pcVar1 = FUN_7100106460;
      }
      pcVar4 = "NexMatchDestroySessionJob::WaitUnregisterBufferMatchmakeSession";
      if (aiStack_30[0] != 0) {
        pcVar4 = "NexMatchDestroySessionJob::UnregisterCurrentMatchmakeSession";
      }
      *(code **)(param_1 + 0x30) = pcVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = pcVar4;
      return 0;
    }
// ... (8 more lines)
```

## 2. `FUN_71000f2880`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f2880`  (offset `0xf2880`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f2880(void)`
- **Size / BBs / Incoming:** 1996 bytes / 90 bb / 16 incoming refs
- **Match values:** MatchmakeSession
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

## 3. `FUN_71001082f0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001082f0`  (offset `0x1082f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001082f0(void)`
- **Size / BBs / Incoming:** 2020 bytes / 92 bb / 17 incoming refs
- **Match values:** MatchmakeSession
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

## 4. `FUN_71000f3580`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3580`  (offset `0xf3580`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3580(void)`
- **Size / BBs / Incoming:** 564 bytes / 11 bb / 4 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchJoinSessionJob::LeaveMatchmakeSession;chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::WaitGetStationLocation
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_710015fd60;FUN_710015fea0;FUN_710015ff20;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f3580__71000f3580.c)  [cfg](../decompiled/FUN_71000f3580__71000f3580.mmd)
- **Clone hash:** `cb6f5aeb9c95993a`

```c

undefined8 FUN_71000f3580(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  code *pcVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  int aiStack_f0 [4];
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  int aiStack_b0 [32];
  undefined4 auStack_28 [2];
  
  uVar2 = (**(code **)(*param_1 + 0x48))();
  if ((uVar2 & 1) != 0) {
    aiStack_b0[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_b0 | 4));
    aiStack_c0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_b0 | 4),(Result *)aiStack_c0);
    FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_b0);
    param_1[8] = (long)"NexMatchJoinSessionJob::LeaveMatchmakeSession";
    param_1[6] = (long)FUN_71000f2880;
    param_1[7] = 0;
    return 5;
  }
  plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar1 = *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180);
  FUN_710015fd60((undefined8 *)aiStack_b0);
  FUN_710015fea0((long)(param_1 + 0x12),(long)aiStack_b0);
  (**(code **)(*plVar5 + 0xa0))(aiStack_c0,plVar5,param_1 + 0xc,uVar1);
  if (aiStack_c0[0] == 0) {
    pcVar3 = FUN_71000f37c0;
    uVar6 = 5;
    pcVar4 = "NexMatchJoinSessionJob::WaitGetStationLocation";
  }
// ... (48 more lines)
```

## 5. `FUN_7100104180`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104180`  (offset `0x104180`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104180(void)`
- **Size / BBs / Incoming:** 324 bytes / 12 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchLeaveSessionJob::GetMatchmakeSessionOwners;chara/chara_4/chara_4_;nex::NexMatchLeaveSessionJob::LeaveMesh;nex::NexMatchLeaveSessionJob::SendMonitoringData
- **Callees:** FUN_71000bce50;FUN_71000da970;FUN_7100146ba0;FUN_7100150e30
- **Files:** [decomp](../decompiled/FUN_7100104180__7100104180.c)  [cfg](../decompiled/FUN_7100104180__7100104180.mmd)
- **Clone hash:** `3c7c59da76798bd8`

```c

undefined8 FUN_7100104180(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  int aiStack_40 [4];
  
  lVar1 = DAT_71052adb38;
  plVar6 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_71001411a0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar5 = "nex::NexMatchLeaveSessionJob::SendMonitoringData";
    break;
  case 6:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_7100141230;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar5 = "nex::NexMatchLeaveSessionJob::LeaveMesh";
    break;
  default:
    uVar3 = FUN_71000da970((long)plVar6);
    if ((uVar3 & 1) != 0) {
      FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
      if (aiStack_40[0] != 0) {
        *(code **)(param_1 + 0x30) = FUN_7100104000;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NexMatchLeaveSessionJob::GetMatchmakeSessionOwners";
      }
      lVar4 = (**(code **)(*plVar6 + 0xf0))(plVar6);
// ... (11 more lines)
```

## 6. `FUN_71000f8d40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f8d40`  (offset `0xf8d40`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f8d40(void)`
- **Size / BBs / Incoming:** 400 bytes / 14 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchJointSessionJob::GetMatchmakeSessionOwners;NexMatchJointSessionJob::ProcessFailure
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_71000da970;FUN_7100146ba0;FUN_7100150e30;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f8d40__71000f8d40.c)  [cfg](../decompiled/FUN_71000f8d40__71000f8d40.mmd)
- **Clone hash:** `50e83220c41f2876`

```c

undefined8 FUN_71000f8d40(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  lVar1 = DAT_71052adb38;
  plVar5 = *(long **)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                     0x168);
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
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
    uVar3 = FUN_71000da970((long)plVar5);
    if ((uVar3 & 1) != 0) {
      FUN_71000bce50(aiStack_48,(int *)(param_1 + 100));
      if (aiStack_48[0] != 0) {
        *(code **)(param_1 + 0x30) = FUN_71000f8aa0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::GetMatchmakeSessionOwners";
      }
      lVar4 = (**(code **)(*plVar5 + 0xf0))(plVar5);
      FUN_7100150e30(*(long *)(lVar1 + 0xb8),lVar4,1);
// ... (20 more lines)
```

## 7. `FUN_710011cbb0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011cbb0`  (offset `0x11cbb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011cbb0(void)`
- **Size / BBs / Incoming:** 372 bytes / 10 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** LanMatchJoinSessionJob::LeaveMatchmakeSession;nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::WaitGetStationLocation
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011cbb0__710011cbb0.c)  [cfg](../decompiled/FUN_710011cbb0__710011cbb0.mmd)
- **Clone hash:** `f8ca07f2e20fa266`

```c

undefined8 FUN_710011cbb0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  code *pcVar4;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_30[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4));
    aiStack_40[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_30);
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0')) {
      aiStack_30[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4))
      ;
      aiStack_40[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
      FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_30);
      *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::LeaveMatchmakeSession";
      *(code **)(param_1 + 0x30) = FUN_710011cd30;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    (**(code **)(**(long **)(param_1 + 0x138) + 0xa0))
              (aiStack_30,*(long **)(param_1 + 0x138),param_1 + 0x60,
// ... (20 more lines)
```

## 8. `FUN_7100102fc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100102fc0`  (offset `0x102fc0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100102fc0(long param_1)`
- **Size / BBs / Incoming:** 560 bytes / 20 bb / 5 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** chara/chara_4/chara_4_;dys_yoga03_l_03_set;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeaveBufferMatchmakeSession;NexMatchJointSessionJob::WaitLeaveCurrentMatchmakeSession
- **Callees:** FUN_71000b40e0;FUN_71000bcf30;FUN_7100146ba0;FUN_7100146ed0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100102fc0__7100102fc0.c)  [cfg](../decompiled/FUN_7100102fc0__7100102fc0.mmd)
- **Clone hash:** `238cae7411822cfd`

```c

undefined8 FUN_7100102fc0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  long *plVar6;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    local_50[0] = 0xc406;
    break;
  case 6:
    local_50[0] = 0xa471;
    break;
  case 7:
    local_50[0] = 0xc420;
    break;
  case 8:
    local_50[0] = 0xc421;
    break;
  default:
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
    local_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    iVar1 = *(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180);
    if (iVar1 == 0) {
LAB_71001031a8:
      pcVar5 = FUN_71001035f0;
      pcVar4 = "NexMatchJointSessionJob::StartLeaveBufferMatchmakeSession";
    }
// ... (51 more lines)
```

## 9. `FUN_7100104f30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104f30`  (offset `0x104f30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104f30(void)`
- **Size / BBs / Incoming:** 516 bytes / 20 bb / 3 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** nex::NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::CreateMatchmakeSession;NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::WaitLeaveJoinedMatchmakeSession
- **Callees:** FUN_71000b40e0;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100104f30__7100104f30.c)  [cfg](../decompiled/FUN_7100104f30__7100104f30.mmd)
- **Clone hash:** `a15aeea6093de7e3`

```c

undefined8 FUN_7100104f30(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  long *plVar5;
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
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
    if (*(int *)(param_1 + 0xb8) != 0) {
      uVar1 = *(undefined4 *)(param_1 + (ulong)(*(int *)(param_1 + 0xb8) - 1) * 4 + 0xa8);
      plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
      FUN_71000b40e0((undefined4 *)(param_1 + 0x60));
      (**(code **)(*plVar5 + 0x60))(aiStack_60,plVar5,(undefined4 *)(param_1 + 0x60),uVar1);
      FUN_71000bcf30(aiStack_50,aiStack_60);
      if (aiStack_50[0] == 0) {
// ... (44 more lines)
```

## 10. `FUN_7100104540`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104540`  (offset `0x104540`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104540(void)`
- **Size / BBs / Incoming:** 896 bytes / 36 bb / 3 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** LeaveSessionJob::LeaveCurrentMatchmakeSession;chara/chara_4/chara_4_;nex::NexMatchLeaveSessionJob::LeaveMesh;nex::NexMatchLeaveSessionJob::SendMonitoringData;dys_yoga03_l_03_set;NexMatchLeaveSessionJob::WaitLeaveMatchmakeSessionCompanions
- **Callees:** FUN_71000e08e0;FUN_71000ecfb0;FUN_71000ee290;FUN_71000ee2c0;FUN_71000ee730;FUN_71000ee7f0;FUN_71001049c0;FUN_7100146ba0
- **Files:** [decomp](../decompiled/FUN_7100104540__7100104540.c)  [cfg](../decompiled/FUN_7100104540__7100104540.mmd)
- **Clone hash:** `6fb79808e67fb1ad`

```c

undefined8 FUN_7100104540(long param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long *plVar10;
  uint uVar11;
  undefined **ppuStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  
  lVar2 = DAT_71052adb38;
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_71001411a0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar9 = "nex::NexMatchLeaveSessionJob::SendMonitoringData";
    break;
  case 6:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_7100141230;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar9 = "nex::NexMatchLeaveSessionJob::LeaveMesh";
    break;
  default:
    plVar10 = *(long **)(DAT_71052adb38 + 8);
    if (plVar10 != (long *)0x0) {
// ... (91 more lines)
```

## 11. `FUN_71000f7210`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f7210`  (offset `0xf7210`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f7210(void)`
- **Size / BBs / Incoming:** 660 bytes / 21 bb / 74 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeaveCurrentMatchmakeSession;NexMatchJointSessionJob::WaitLeaveMesh
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;FUN_7100146ed0;FUN_7100191ee0;FUN_71001921b0;FUN_7100192c30;FUN_7100192e90;FUN_71001931d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f7210__71000f7210.c)  [cfg](../decompiled/FUN_71000f7210__71000f7210.mmd)
- **Clone hash:** `b285a5172d29fb61`

```c

undefined8 FUN_71000f7210(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  code *pcVar8;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  *(undefined1 *)(param_1 + 0xfa) = 1;
  lVar1 = DAT_71052adb38;
  *(undefined1 *)(DAT_71052adb38 + 0x15c) = 1;
  iVar4 = FUN_7100146ba0(lVar1);
  puVar2 = DAT_71052adfc0;
  switch(iVar4) {
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
    FUN_7100192e90(aiStack_50,(long)DAT_71052adfc0);
    aiStack_60[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
// ... (65 more lines)
```

## 12. `FUN_71000f22b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f22b0`  (offset `0xf22b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f22b0(void)`
- **Size / BBs / Incoming:** 524 bytes / 20 bb / 3 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::JoinMatchmakeSession;NexMatchJoinSessionJob::MeshCleanup;NexMatchJoinSessionJob::WaitLeaveJoinedMatchmakeSession
- **Callees:** FUN_71000b40e0;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f22b0__71000f22b0.c)  [cfg](../decompiled/FUN_71000f22b0__71000f22b0.mmd)
- **Clone hash:** `86b87dd4969e56f8`

```c

undefined8 FUN_71000f22b0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  long *plVar5;
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
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
    *(undefined4 *)(param_1 + 0x110) = 1;
    if (*(int *)(param_1 + 0x168) != 0) {
      uVar1 = *(undefined4 *)(param_1 + (ulong)(*(int *)(param_1 + 0x168) - 1) * 4 + 0x158);
      plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
      FUN_71000b40e0((undefined4 *)(param_1 + 0x60));
      (**(code **)(*plVar5 + 0x60))(aiStack_60,plVar5,(undefined4 *)(param_1 + 0x60),uVar1);
      FUN_71000bcf30(aiStack_50,aiStack_60);
// ... (45 more lines)
```

## 13. `FUN_71000fa1c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fa1c0`  (offset `0xfa1c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fa1c0(void)`
- **Size / BBs / Incoming:** 1084 bytes / 43 bb / 3 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::ResendInvitationAsCompanion;NexMatchJointSessionJob::SendLeaveMeshCompanion;NexMatchJointSessionJob::StartCreateMatchmakeSession;NexMatchJointSessionJob::StartJoinMatchmakeSession;chara/chara_4/chara_4_;NexMatchJointSessionJob::StartRandomMatchmake
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140910;FUN_7100146ba0;FUN_7100150680;FUN_71001508c0;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fa1c0__71000fa1c0.c)  [cfg](../decompiled/FUN_71000fa1c0__71000fa1c0.mmd)
- **Clone hash:** `fe1ac3bccde37620`

```c

undefined8 FUN_71000fa1c0(long *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  ulong uVar12;
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
    FUN_7100192e90(aiStack_78,DAT_71052adfc0);
    if ((aiStack_78[0] == 0) &&
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar7 = DAT_71052adb38, iVar3 != 4)) {
      if (*(char *)((long)param_1 + 0xfb) == '\0') {
        piVar4 = (int *)param_1[0xb];
        if ((piVar4 != (int *)0x0) && ((char)piVar4[10] != '\0')) {
// ... (127 more lines)
```

## 14. `FUN_710010a210`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010a210`  (offset `0x10a210`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010a210(void)`
- **Size / BBs / Incoming:** 476 bytes / 19 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchRandomMatchmakeJob::LeaveMatchmakeSession;nex::NexMatchRandomMatchmakeJob::CompleteFailure
- **Callees:** FUN_71000bcf30;FUN_7100143730;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010a210__710010a210.c)  [cfg](../decompiled/FUN_710010a210__710010a210.mmd)
- **Clone hash:** `040b213af19ffff4`

```c

undefined8 FUN_710010a210(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  code *pcVar7;
  int aiStack_50 [4];
  int aiStack_40 [4];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    uVar3 = FUN_7100143730(param_1);
    if ((uVar3 & 1) != 0) {
      aiStack_40[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      aiStack_50[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_40);
      *(char **)(param_1 + 0x40) = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
      *(code **)(param_1 + 0x30) = FUN_71001082f0;
// ... (47 more lines)
```

## 15. `FUN_71000fd6b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd6b0`  (offset `0xfd6b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd6b0(void)`
- **Size / BBs / Incoming:** 808 bytes / 27 bb / 3 incoming refs
- **Match values:** MatchmakeSession
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

## 16. `FUN_71000f8aa0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f8aa0`  (offset `0xf8aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f8aa0(void)`
- **Size / BBs / Incoming:** 672 bytes / 26 bb / 5 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::WaitGetMatchmakeSessionOwners;NexMatchJointSessionJob::ProcessFailure;NODE_PRE_REFRACT_BLEND;NexMatchJointSessionJob::SendInvitationAsCompanion
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000da870;FUN_7100146ba0;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f8aa0__71000f8aa0.c)  [cfg](../decompiled/FUN_71000f8aa0__71000f8aa0.mmd)
- **Clone hash:** `426111b13184eb00`

```c

undefined8 FUN_71000f8aa0(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  byte bVar6;
  code *pcVar7;
  undefined1 uVar8;
  char *pcVar9;
  ulong uVar10;
  int aiStack_58 [4];
  undefined4 auStack_48 [2];
  
  lVar3 = DAT_71052adb38;
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
    aiStack_58[0] = 0xc406;
    break;
  case 6:
    aiStack_58[0] = 0xa471;
    break;
  case 7:
    aiStack_58[0] = 0xc420;
    break;
  case 8:
    aiStack_58[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_58,DAT_71052adfc0);
    if ((aiStack_58[0] == 0) && (iVar4 = FUN_7100146ba0(DAT_71052adb38), iVar4 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar6 = *(byte *)(param_1 + 0x2e8);
        if (bVar6 != 0) {
          uVar10 = 0;
          lVar1 = param_1 + 0x2e9;
// ... (67 more lines)
```

## 17. `FUN_7100109350`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100109350`  (offset `0x109350`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100109350(void)`
- **Size / BBs / Incoming:** 64 bytes / 1 bb / 1 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bcf30
- **Files:** [decomp](../decompiled/FUN_7100109350__7100109350.c)  [cfg](../decompiled/FUN_7100109350__7100109350.mmd)
- **Clone hash:** `6798e643450b3150`

```c

undefined8 FUN_7100109350(long param_1,int *param_2)

{
  FUN_71000bcf30((int *)(param_1 + 0x6c),param_2);
  *(char **)(param_1 + 0x40) = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
  *(code **)(param_1 + 0x30) = FUN_71001082f0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}


```

## 18. `FUN_7100106590`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100106590`  (offset `0x106590`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100106590(long param_1)`
- **Size / BBs / Incoming:** 288 bytes / 10 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** nex::NexMatchDestroySessionJob::SendMonitoringData;NexMatchDestroySessionJob::UnregisterCurrentMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_7100146ba0;FUN_7100149290;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100106590__7100106590.c)  [cfg](../decompiled/FUN_7100106590__7100106590.mmd)
- **Clone hash:** `62ecf616efdf73ee`

```c

undefined8 FUN_7100106590(long param_1)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  char *pcVar4;
  undefined4 local_48 [4];
  int aiStack_38 [4];
  undefined4 local_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
  case 6:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    pcVar3 = FUN_710013e030;
    pcVar4 = "nex::NexMatchDestroySessionJob::SendMonitoringData";
    break;
  default:
    uVar2 = (**(code **)(**(long **)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                        + 0x78))();
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    FUN_7100149290(DAT_71052adb38,0);
    if (*(int *)(param_1 + 0x60) == 3) {
      FUN_71000bce50(aiStack_38,(int *)(param_1 + 100));
      local_48[0] = 0x6c4b;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    }
    pcVar3 = FUN_7100106460;
    pcVar4 = "NexMatchDestroySessionJob::UnregisterCurrentMatchmakeSession";
// ... (7 more lines)
```

## 19. `FUN_7100179df0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100179df0`  (offset `0x179df0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100179df0(void)`
- **Size / BBs / Incoming:** 460 bytes / 11 bb / 1 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** LocalMatchJoinSessionJob::JoinMatchmakeSession
- **Callees:** FUN_71000bae40;FUN_71000bae50;FUN_71000bae70;FUN_71000bce50;FUN_710013c780;FUN_71001492c0;FUN_7100177440;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100179df0__7100179df0.c)  [cfg](../decompiled/FUN_7100179df0__7100179df0.mmd)
- **Clone hash:** `f1806857d15737c0`

```c

void FUN_7100179df0(int *param_1,long param_2,long *param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Result *pRVar7;
  int *piVar8;
  long lVar9;
  ErrorResultVariant *this;
  long lVar10;
  long *plVar11;
  int aiStack_70 [4];
  int aiStack_60 [4];
  undefined4 auStack_48 [2];
  
  piVar8 = aiStack_70;
  pRVar7 = (Result *)aiStack_70;
  lVar9 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  *(long *)(param_2 + 0x138) = lVar9;
  if (lVar9 == 0) {
    aiStack_60[0] = 0x10c08;
LAB_7100179ef0:
    this = (ErrorResultVariant *)((ulong)aiStack_60 | 4);
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    aiStack_70[0] = 0;
  }
  else {
    if ((param_3 == (long *)0x0) || (lVar9 = (**(code **)(*param_3 + 0x10))(param_3), lVar9 == 0)) {
      aiStack_60[0] = 0x10c07;
      goto LAB_7100179ef0;
    }
    lVar9 = FUN_7100177440((long)param_3);
    pbVar4 = (byte *)FUN_71000bae40(lVar9);
    lVar9 = FUN_7100177440((long)param_3);
    iVar2 = FUN_71000bae50(lVar9);
// ... (29 more lines)
```

## 20. `FUN_71000f24c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f24c0`  (offset `0xf24c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f24c0(void)`
- **Size / BBs / Incoming:** 460 bytes / 15 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchJoinSessionJob::MeshCleanup;chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bcf30;FUN_71000ede30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f24c0__71000f24c0.c)  [cfg](../decompiled/FUN_71000f24c0__71000f24c0.mmd)
- **Clone hash:** `160905fa3e1fd533`

```c

undefined8 FUN_71000f24c0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  code *pcVar6;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_38[0] = 0xc406;
    break;
  case 6:
    aiStack_38[0] = 0xa471;
    break;
  case 7:
    aiStack_38[0] = 0xc420;
    break;
  case 8:
    aiStack_38[0] = 0xc421;
    break;
  default:
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar2 & 1) != 0) {
      aiStack_38[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_38);
      param_1[8] = (long)"NexMatchJoinSessionJob::MeshCleanup";
      param_1[6] = (long)FUN_710013f360;
      param_1[7] = 0;
// ... (38 more lines)
```

## 21. `FUN_710011f990`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011f990`  (offset `0x11f990`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011f990(void)`
- **Size / BBs / Incoming:** 152 bytes / 1 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** DestroySessionJob::SendMonitoringData;LanMatchDestroySessionJob::WaitUnregisterCurrentMatchmakeSession
- **Files:** [decomp](../decompiled/FUN_710011f990__710011f990.c)  [cfg](../decompiled/FUN_710011f990__710011f990.mmd)
- **Clone hash:** `5922025c94d144fb`

```c

undefined8 FUN_710011f990(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  long *plVar5;
  int aiStack_30 [4];
  
  plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  (**(code **)(*plVar5 + 0x70))
            (aiStack_30,plVar5,param_1 + 0x60,
             *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180))
  ;
  bVar4 = aiStack_30[0] != 0;
  pcVar1 = FUN_710011fa30;
  if (bVar4) {
    pcVar1 = FUN_710013e030;
  }
  pcVar2 = "LanMatchDestroySessionJob::WaitUnregisterCurrentMatchmakeSession";
  if (bVar4) {
    pcVar2 = "DestroySessionJob::SendMonitoringData";
  }
  *(code **)(param_1 + 0x30) = pcVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  uVar3 = 5;
  if (bVar4) {
    uVar3 = 0;
  }
  return uVar3;
}


```

## 22. `FUN_710011d730`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d730`  (offset `0x11d730`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011d730(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 1 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** LanMatchJoinSessionJob::LeaveMatchmakeSession
- **Files:** [decomp](../decompiled/FUN_710011d730__710011d730.c)  [cfg](../decompiled/FUN_710011d730__710011d730.mmd)
- **Clone hash:** `94e7696cdbc659b6`

```c

undefined8 FUN_710011d730(long param_1)

{
  *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::LeaveMatchmakeSession";
  *(code **)(param_1 + 0x30) = FUN_710011cd30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 23. `FUN_71001099a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001099a0`  (offset `0x1099a0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001099a0(long param_1)`
- **Size / BBs / Incoming:** 268 bytes / 12 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_71000e0b40;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001099a0__71001099a0.c)  [cfg](../decompiled/FUN_71001099a0__71001099a0.mmd)
- **Clone hash:** `a3e7207406b2041d`

```c

undefined8 FUN_71001099a0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  long lVar6;
  int local_38 [4];
  undefined4 local_28 [2];
  
  lVar6 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    local_38[0] = 0xc406;
    break;
  case 6:
    local_38[0] = 0xa471;
    break;
  case 7:
    local_38[0] = 0xc420;
    break;
  case 8:
    local_38[0] = 0xc421;
    break;
  default:
    uVar2 = FUN_71000e0b40(lVar6);
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    FUN_71000bce50(local_38,(int *)(param_1 + 0x114));
    pcVar4 = FUN_71001082f0;
    uVar3 = 5;
    pcVar5 = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
    goto LAB_7100109a50;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
// ... (14 more lines)
```

## 24. `FUN_7100108090`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100108090`  (offset `0x108090`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100108090(void)`
- **Size / BBs / Incoming:** 604 bytes / 28 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::WaitNotification;NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_71000d8f90;FUN_71000eb6b0;FUN_71000eb6c0;FUN_71000ecfb0;FUN_7100143c60;FUN_7100146ba0;FUN_7100149240;FUN_7100149270;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100108090__7100108090.c)  [cfg](../decompiled/FUN_7100108090__7100108090.mmd)
- **Clone hash:** `9e859812e6fb2b8f`

```c

undefined8 FUN_7100108090(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
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
    uVar4 = (**(code **)(**(long **)(param_1 + 0x148) + 0x20))
                      (*(long **)(param_1 + 0x148),(int *)(param_1 + 100),(char *)(param_1 + 0x68));
    if ((uVar4 & 1) == 0) {
      return 5;
    }
    FUN_71000d8f90(*(long *)(param_1 + 0x148));
    if (*(int *)(param_1 + 0x110) != 2) {
      if (*(int *)(param_1 + 0x110) != 3) {
        return 5;
// ... (66 more lines)
```

## 25. `FUN_71000f3050`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3050`  (offset `0xf3050`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3050(void)`
- **Size / BBs / Incoming:** 544 bytes / 24 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchJoinSessionJob::LeaveMatchmakeSession;chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::WaitNotification;select_item
- **Callees:** FUN_71000b40e0;FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_71000ecfb0;FUN_710013f6f0;FUN_7100146ba0;FUN_7100149270;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f3050__71000f3050.c)  [cfg](../decompiled/FUN_71000f3050__71000f3050.mmd)
- **Clone hash:** `ff4e3ee324ecff03`

```c

undefined8 FUN_71000f3050(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
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
    plVar6 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar2 = (**(code **)(*plVar6 + 0x58))(plVar6);
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 5;
      }
      FUN_71000bce50(aiStack_50,(int *)(param_1 + 100));
// ... (49 more lines)
```

## 26. `FUN_71000f4300`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4300`  (offset `0xf4300`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4300(void)`
- **Size / BBs / Incoming:** 468 bytes / 14 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchJoinSessionJob::WaitForRetryJoinMesh;NODE_PRE_REFRACT_BLEND;NexMatchJoinSessionJob::GetStationLocation;NexMatchJoinSessionJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bb680;FUN_7100150b70;FUN_710015fd60;FUN_710015fea0;FUN_710015ff20
- **Files:** [decomp](../decompiled/FUN_71000f4300__71000f4300.c)  [cfg](../decompiled/FUN_71000f4300__71000f4300.mmd)
- **Clone hash:** `a26e48a4038ecebb`

```c

undefined8 FUN_71000f4300(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_b0 [16];
  
  uVar4 = (**(code **)(*DAT_71052acd90 + 0x58))();
  lVar7 = DAT_71052adb38;
  cVar3 = DAT_71052ac6d9;
  if (((uVar4 & 1) != 0) && (cVar3 = '\x01', DAT_71052ac6d9 != -1)) {
    cVar3 = DAT_71052ac6d9 + '\x01';
  }
  DAT_71052ac6d9 = cVar3;
  puVar1 = (undefined8 *)(DAT_71052adb38 + 0xb8);
  *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
  FUN_7100150b70((long *)*puVar1);
  (**(code **)(**(long **)(lVar7 + 8) + 0x28))();
  lVar7 = DAT_71052ac580;
  if (*(char *)(param_1 + 0x11a) == '\0') {
    if (((*(char *)(param_1 + 0x11b) == '\0') && (*(char *)(param_1 + 0x11e) == '\0')) &&
       (*(char *)(param_1 + 0x11d) == '\0')) {
      if (*(char *)(param_1 + 0x119) == '\0') {
        *(char **)(param_1 + 0x40) = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
        *(code **)(param_1 + 0x30) = FUN_71000f2880;
        *(undefined8 *)(param_1 + 0x38) = 0;
        return 5;
      }
      FUN_710015fd60(auStack_b0);
      FUN_710015fea0(param_1 + 0x90,(long)auStack_b0);
      *(code **)(param_1 + 0x30) = FUN_71000f3580;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchJoinSessionJob::GetStationLocation";
      FUN_710015ff20(auStack_b0);
// ... (31 more lines)
```

## 27. `FUN_71000f3970`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3970`  (offset `0xf3970`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3970(void)`
- **Size / BBs / Incoming:** 228 bytes / 7 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchJoinSessionJob::LeaveMatchmakeSession;NexMatchJoinSessionJob::WaitStartNatSession
- **Callees:** FUN_71000bcf30;FUN_71000ed7a0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f3970__71000f3970.c)  [cfg](../decompiled/FUN_71000f3970__71000f3970.mmd)
- **Clone hash:** `e80905609a40ebba`

```c

undefined8 FUN_71000f3970(long *param_1)

{
  ulong uVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if ((uVar1 & 1) == 0) {
    FUN_71000ed7a0(aiStack_38);
    if (aiStack_38[0] == 0) {
      *(undefined4 *)(param_1 + 0x22) = 3;
      pcVar3 = FUN_71000f3a60;
      pcVar2 = "NexMatchJoinSessionJob::WaitStartNatSession";
    }
    else {
      FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_38);
      pcVar3 = FUN_71000f2880;
      pcVar2 = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
    }
    param_1[6] = (long)pcVar3;
    param_1[7] = 0;
  }
  else {
    aiStack_38[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_38);
    param_1[6] = (long)FUN_71000f2880;
    param_1[7] = 0;
    pcVar2 = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
  }
  param_1[8] = (long)pcVar2;
  return 5;
}
// ... (1 more lines)
```

## 28. `FUN_71000f4820`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4820`  (offset `0xf4820`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4820(void)`
- **Size / BBs / Incoming:** 480 bytes / 19 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;FUN_7100149270;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f4820__71000f4820.c)  [cfg](../decompiled/FUN_71000f4820__71000f4820.mmd)
- **Clone hash:** `1d0dd85ca3ff234f`

```c

undefined8 FUN_71000f4820(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  ErrorResultVariant *this;
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
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
    uVar3 = (**(code **)(**(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                    0x168) + 0x68))();
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    FUN_7100149270(DAT_71052adb38,0);
    if (*(int *)(param_1 + 0x60) == 3) {
      piVar1 = (int *)(param_1 + 100);
      FUN_71000bce50(aiStack_48,piVar1);
      aiStack_58[0] = 0xc406;
// ... (44 more lines)
```

## 29. `FUN_7100120d70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100120d70`  (offset `0x120d70`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100120d70(void)`
- **Size / BBs / Incoming:** 312 bytes / 9 bb / 3 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::LeaveMatchmakeSession;LanMatchRandomMatchmakeJob::RandomMatchmake
- **Callees:** FUN_71000bcf30;FUN_710011bb20;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100120d70__7100120d70.c)  [cfg](../decompiled/FUN_7100120d70__7100120d70.mmd)
- **Clone hash:** `209567f7f38c390e`

```c

undefined8 FUN_7100120d70(long param_1)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
    pcVar3 = FUN_71001429b0;
    pcVar2 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 8;
    if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) <= *(ulong *)(param_1 + 0x180)) {
        return 5;
      }
      pcVar3 = FUN_7100120290;
      pcVar2 = "LanMatchRandomMatchmakeJob::RandomMatchmake";
    }
    else {
      aiStack_38[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
      FUN_710011bb20(*(long *)(param_1 + 0x178));
      pcVar3 = FUN_7100120eb0;
// ... (9 more lines)
```

## 30. `FUN_7100109980`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100109980`  (offset `0x109980`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100109980(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 1 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
- **Files:** [decomp](../decompiled/FUN_7100109980__7100109980.c)  [cfg](../decompiled/FUN_7100109980__7100109980.mmd)
- **Clone hash:** `e02ab777e7ae7fa2`

```c

undefined8 FUN_7100109980(long param_1)

{
  *(char **)(param_1 + 0x40) = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
  *(code **)(param_1 + 0x30) = FUN_71001082f0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}


```

## 31. `FUN_7100108ec0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100108ec0`  (offset `0x108ec0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100108ec0(void)`
- **Size / BBs / Incoming:** 1132 bytes / 32 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::LeaveMatchmakeSession;NexMatchRandomMatchmakeJob::CompleteFailure;RandomMatchmakeJob::MeshStartup;dys_yoga03_l_03_set
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_71000ed820;FUN_71000ed8e0;FUN_7100143730;FUN_7100143c80;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100108ec0__7100108ec0.c)  [cfg](../decompiled/FUN_7100108ec0__7100108ec0.mmd)
- **Clone hash:** `5aa6e66647554e0b`

```c

uint FUN_7100108ec0(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  char *pcVar5;
  ErrorResultVariant *pEVar6;
  undefined8 uVar7;
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
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
    uVar7 = *(undefined8 *)(DAT_71052adb38 + 8);
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
// ... (139 more lines)
```

## 32. `FUN_710011e7b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011e7b0`  (offset `0x11e7b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011e7b0(void)`
- **Size / BBs / Incoming:** 188 bytes / 6 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** LanMatchJointSessionJob::StartLeavePreviousMatchmakeSession
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_7100140490;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011e7b0__710011e7b0.c)  [cfg](../decompiled/FUN_710011e7b0__710011e7b0.mmd)
- **Clone hash:** `96f013d0feea4bd0`

```c

undefined8 FUN_710011e7b0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    FUN_7100140490(param_1);
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    if (puVar3 != (undefined4 *)0x0) {
      aiStack_50[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_40,aiStack_50);
      FUN_71000b41f0(puVar3,aiStack_40);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_710011e870;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LanMatchJointSessionJob::StartLeavePreviousMatchmakeSession";
  }
  return uVar2;
}


```

## 33. `FUN_710011d5a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d5a0`  (offset `0x11d5a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011d5a0(void)`
- **Size / BBs / Incoming:** 392 bytes / 10 bb / 1 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::WaitForRetryJoinMatchmakeSession;LanMatchJoinSessionJob::MeshCleanup
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_7100146ba0;FUN_7100150b70;FUN_7100193580;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011d5a0__710011d5a0.c)  [cfg](../decompiled/FUN_710011d5a0__710011d5a0.mmd)
- **Clone hash:** `14e5bc55996e55b2`

```c

undefined8 FUN_710011d5a0(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  char *pcVar9;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar4 == 5) {
    aiStack_40[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_40);
    pcVar8 = FUN_710013e970;
    uVar5 = 0;
    pcVar9 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    aiStack_40[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    if (((*(int *)(param_1 + 0x120) == aiStack_40[0]) ||
        (((*(char *)(param_1 + 0x11a) == '\0' && (*(char *)(param_1 + 0x11b) == '\0')) &&
         (*(char *)(param_1 + 0x11d) == '\0')))) ||
       (bVar2 = *(char *)(param_1 + 0x11f) + 1, *(byte *)(param_1 + 0x11f) = bVar2,
       lVar3 = DAT_71052adb38, 1 < bVar2)) {
      pcVar8 = FUN_710013f360;
// ... (24 more lines)
```

## 34. `FUN_71000f3a60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3a60`  (offset `0xf3a60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3a60(void)`
- **Size / BBs / Incoming:** 1088 bytes / 30 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::LeaveMatchmakeSession;NexMatchJoinSessionJob::CompleteFailure;JoinSessionJob::MeshStartup
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_71000ed820;FUN_71000ed8e0;FUN_710013f710;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f3a60__71000f3a60.c)  [cfg](../decompiled/FUN_71000f3a60__71000f3a60.mmd)
- **Clone hash:** `4821a3a021404ac4`

```c

uint FUN_71000f3a60(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  ErrorResultVariant *pEVar7;
  int aiStack_c8 [4];
  int aiStack_b8 [4];
  int aiStack_a8 [4];
  int aiStack_98 [4];
  int aiStack_88 [4];
  int aiStack_78 [4];
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
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
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar3 & 1) != 0) {
      FUN_71000ed8e0(aiStack_48);
// ... (130 more lines)
```

## 35. `FUN_71000f37c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f37c0`  (offset `0xf37c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f37c0(void)`
- **Size / BBs / Incoming:** 428 bytes / 18 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::StartNatSession;NexMatchJoinSessionJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f37c0__71000f37c0.c)  [cfg](../decompiled/FUN_71000f37c0__71000f37c0.mmd)
- **Clone hash:** `40b4e408dc43a395`

```c

undefined8 FUN_71000f37c0(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_38[0] = 0xc406;
    break;
  case 6:
    aiStack_38[0] = 0xa471;
    break;
  case 7:
    aiStack_38[0] = 0xc420;
    break;
  case 8:
    aiStack_38[0] = 0xc421;
    break;
  default:
    plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_1 + 0x12);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*param_1 + 0x48))(param_1);
    }
    else {
      iVar1 = (int)param_1[0xc];
      if (iVar1 == 2) {
        param_1[6] = (long)FUN_71000f3970;
        param_1[7] = 0;
        param_1[8] = (long)"NexMatchJoinSessionJob::StartNatSession";
        return 0;
      }
      if (iVar1 == 4) {
        aiStack_38[0] = 0x6c05;
// ... (30 more lines)
```

## 36. `FUN_710011e870`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011e870`  (offset `0x11e870`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011e870(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** LanMatchJointSessionJob::WaitLeavePreviousMatchmakeSession
- **Files:** [decomp](../decompiled/FUN_710011e870__710011e870.c)  [cfg](../decompiled/FUN_710011e870__710011e870.mmd)
- **Clone hash:** `75f0183422ce70e8`

```c

undefined8 FUN_710011e870(long param_1)

{
  *(char **)(param_1 + 0x40) = "LanMatchJointSessionJob::WaitLeavePreviousMatchmakeSession";
  *(code **)(param_1 + 0x30) = FUN_710011e890;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 37. `FUN_710011c730`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011c730`  (offset `0x11c730`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011c730(void)`
- **Size / BBs / Incoming:** 416 bytes / 14 bb / 1 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** LanMatchJoinSessionJob::JoinMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100116f40;FUN_71001170b0;FUN_710011b830;FUN_710012d1f0;FUN_710012d210;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011c730__710011c730.c)  [cfg](../decompiled/FUN_710011c730__710011c730.mmd)
- **Clone hash:** `c0038d5b2685e03b`

```c

void FUN_710011c730(int *param_1,long param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  lVar5 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  *(long *)(param_2 + 0x138) = lVar5;
  if (lVar5 == 0) {
    aiStack_50[0] = 0x10c08;
    goto LAB_710011c884;
  }
  if (param_3 == (long *)0x0) {
    aiStack_50[0] = 0x10c07;
    goto LAB_710011c884;
  }
  lVar5 = (**(code **)(*param_3 + 0x10))(param_3);
  bVar1 = FUN_710012d1f0(lVar5);
  if (bVar1 < 8) {
LAB_710011c7cc:
    aiStack_50[0] = 0x6470;
  }
  else {
    bVar1 = FUN_710012d1f0(lVar5);
    if (bVar1 < 9) {
      bVar1 = FUN_710012d210(lVar5);
      plVar4 = (long *)FUN_7100116f40();
      bVar2 = FUN_71001170b0(plVar4);
      if (bVar1 < bVar2) goto LAB_710011c7cc;
      bVar1 = FUN_710012d210(lVar5);
      plVar4 = (long *)FUN_7100116f40();
      bVar2 = FUN_71001170b0(plVar4);
      if (bVar2 < bVar1) goto LAB_710011c814;
      aiStack_50[0] = 0;
// ... (27 more lines)
```

## 38. `FUN_710017a5e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017a5e0`  (offset `0x17a5e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017a5e0(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 1 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** LocalMatchJoinSessionJob::LeaveMatchmakeSession
- **Files:** [decomp](../decompiled/FUN_710017a5e0__710017a5e0.c)  [cfg](../decompiled/FUN_710017a5e0__710017a5e0.mmd)
- **Clone hash:** `8dba195377902726`

```c

undefined8 FUN_710017a5e0(long param_1)

{
  *(char **)(param_1 + 0x40) = "LocalMatchJoinSessionJob::LeaveMatchmakeSession";
  *(code **)(param_1 + 0x30) = FUN_710017a330;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 39. `FUN_710011ddb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011ddb0`  (offset `0x11ddb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011ddb0(void)`
- **Size / BBs / Incoming:** 232 bytes / 12 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** LanMatchJointSessionJob::WaitNextSessionId;LanMatchJointSessionJob::StartJoinMatchmakeSession;LanMatchJointSessionJob::StartRandomMatchmake;LanMatchJointSessionJob::SendInvitationAsCompanion;LanMatchJointSessionJob::SendAnswerToInvitation
- **Callees:** FUN_710013fd20
- **Files:** [decomp](../decompiled/FUN_710011ddb0__710011ddb0.c)  [cfg](../decompiled/FUN_710011ddb0__710011ddb0.mmd)
- **Clone hash:** `ca0aaf8d02543330`

```c

undefined8 FUN_710011ddb0(long param_1)

{
  int iVar1;
  char *pcVar2;
  
  FUN_710013fd20(param_1);
  *(undefined1 *)(DAT_71052adb38 + 0x15d) = 1;
  *(code **)(param_1 + 0x30) = FUN_710011df00;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LanMatchJointSessionJob::WaitNextSessionId";
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 - 9U < 2) {
    if (*(char *)(param_1 + 0xf4) == '\0') {
      *(code **)(param_1 + 0x30) = FUN_710011e0c0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar2 = "LanMatchJointSessionJob::SendAnswerToInvitation";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_710011e000;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar2 = "LanMatchJointSessionJob::SendInvitationAsCompanion";
    }
  }
  else if (iVar1 == 8) {
    if (*(char *)(param_1 + 0xf4) == '\0') {
      return 0;
    }
    *(code **)(param_1 + 0x30) = FUN_710011dfe0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LanMatchJointSessionJob::StartRandomMatchmake";
  }
  else {
    if (iVar1 != 7) {
      return 0;
    }
    if (*(char *)(param_1 + 0xf4) == '\0') {
      return 0;
    }
// ... (8 more lines)
```

## 40. `FUN_7100255670`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100255670`  (offset `0x255670`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100255670(void)`
- **Size / BBs / Incoming:** 20 bytes / 1 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** MatchmakeSession
- **Callees:** FUN_71001b4e00
- **Files:** [decomp](../decompiled/FUN_7100255670__7100255670.c)  [cfg](../decompiled/FUN_7100255670__7100255670.mmd)
- **Clone hash:** `b4c856c54eb2400b`

```c

bool FUN_7100255670(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"MatchmakeSession");
  return bVar1;
}


```

## 41. `FUN_7100107aa0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100107aa0`  (offset `0x107aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100107aa0(void)`
- **Size / BBs / Incoming:** 524 bytes / 20 bb / 3 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** dys_yoga03_l_03_set;nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::RandomMatchmake;NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::WaitLeaveJoinedMatchmakeSession
- **Callees:** FUN_71000b40e0;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100107aa0__7100107aa0.c)  [cfg](../decompiled/FUN_7100107aa0__7100107aa0.mmd)
- **Clone hash:** `114d998585a7a2f2`

```c

undefined8 FUN_7100107aa0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  long *plVar5;
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
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
    *(undefined4 *)(param_1 + 0x60) = 1;
    if (*(int *)(param_1 + 0x180) != 0) {
      uVar1 = *(undefined4 *)(param_1 + (ulong)(*(int *)(param_1 + 0x180) - 1) * 4 + 0x170);
      plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
      FUN_71000b40e0((undefined4 *)(param_1 + 0x110));
      (**(code **)(*plVar5 + 0x60))(aiStack_60,plVar5,(undefined4 *)(param_1 + 0x110),uVar1);
      FUN_71000bcf30(aiStack_50,aiStack_60);
// ... (45 more lines)
```

## 42. `FUN_710010a020`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010a020`  (offset `0x10a020`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010a020(void)`
- **Size / BBs / Incoming:** 492 bytes / 24 bb / 3 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::LeaveMatchmakeSession;NexMatchRandomMatchmakeJob::StartNatSession;NexMatchRandomMatchmakeJob::ChangeParticipation
- **Callees:** FUN_71000bcf30;FUN_71000c36b0;FUN_7100146ba0;FUN_7100146e00;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010a020__710010a020.c)  [cfg](../decompiled/FUN_710010a020__710010a020.mmd)
- **Clone hash:** `59a6d31b7936e1da`

```c

undefined8 FUN_710010a020(long param_1)

{
  short sVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    *(undefined4 *)(param_1 + 0x60) = 8;
    if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
      if (*(ulong *)(param_1 + 0x160) < *(ulong *)(DAT_71052ac580 + 0x30)) {
        *(undefined1 *)(param_1 + 0x184) = 0;
        *(code **)(param_1 + 0x30) = FUN_7100108de0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        pcVar4 = "NexMatchRandomMatchmakeJob::StartNatSession";
        goto LAB_710010a11c;
      }
      if (*(ulong *)(param_1 + 0x158) < *(ulong *)(DAT_71052ac580 + 0x30)) goto LAB_710010a17c;
      lVar5 = *(long *)(param_1 + 0x150);
      if ((lVar5 == 0) || (lVar3 = FUN_71000c36b0(DAT_71052acd90), lVar5 != lVar3)) {
        return 5;
// ... (40 more lines)
```

## 43. `FUN_7100103f40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100103f40`  (offset `0x103f40`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100103f40(void)`
- **Size / BBs / Incoming:** 180 bytes / 10 bb / 1 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchLeaveSessionJob::GetMatchmakeSessionOwners
- **Callees:** FUN_7100151000
- **Files:** [decomp](../decompiled/FUN_7100103f40__7100103f40.c)  [cfg](../decompiled/FUN_7100103f40__7100103f40.mmd)
- **Clone hash:** `f5df4281ee34042c`

```c

void FUN_7100103f40(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  
  uVar1 = FUN_7100151000(*(long *)(DAT_71052adb38 + 0xb8),param_1 + 0xa8);
  *(char *)(param_1 + 0x128) = (char)uVar1;
  if ((uVar1 & 0xff) != 0) {
    uVar2 = uVar1 & 3;
    if ((uVar1 & 0xff) - 1 < 3) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      do {
        lVar3 = param_1 + lVar4;
        lVar4 = lVar4 + 4;
        *(undefined4 *)(lVar3 + 0x129) = 0;
      } while ((uVar1 & 0xff) - uVar2 != lVar4);
    }
    if (uVar2 != 0) {
      lVar3 = -uVar2;
      puVar5 = (undefined1 *)(param_1 + lVar4 + 0x129);
      do {
        lVar3 = lVar3 + 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
  }
  *(code **)(param_1 + 0x30) = FUN_7100104000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchLeaveSessionJob::GetMatchmakeSessionOwners";
  return;
}
// ... (1 more lines)
```

## 44. `FUN_7100107ea0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100107ea0`  (offset `0x107ea0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100107ea0(void)`
- **Size / BBs / Incoming:** 484 bytes / 21 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::LeaveJoinedMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100107ea0__7100107ea0.c)  [cfg](../decompiled/FUN_7100107ea0__7100107ea0.mmd)
- **Clone hash:** `731c57763485b1a0`

```c

undefined8 FUN_7100107ea0(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  ErrorResultVariant *this;
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
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
    uVar3 = (**(code **)(**(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                    0x168) + 0x68))();
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x110) == 3) {
      piVar1 = (int *)(param_1 + 0x114);
      FUN_71000bce50(aiStack_48,piVar1);
      aiStack_58[0] = 0xc406;
      this = (ErrorResultVariant *)((ulong)aiStack_58 | 4);
// ... (46 more lines)
```

## 45. `FUN_7100104b10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104b10`  (offset `0x104b10`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104b10(void)`
- **Size / BBs / Incoming:** 28 bytes / 1 bb / 1 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchLeaveSessionJob::LeaveMatchmakeSessionCompanions
- **Files:** [decomp](../decompiled/FUN_7100104b10__7100104b10.c)  [cfg](../decompiled/FUN_7100104b10__7100104b10.mmd)
- **Clone hash:** `ac9f7f1e93d62910`

```c

void FUN_7100104b10(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_7100104540;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchLeaveSessionJob::LeaveMatchmakeSessionCompanions";
  return;
}


```

## 46. `FUN_71001042d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001042d0`  (offset `0x1042d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001042d0(void)`
- **Size / BBs / Incoming:** 344 bytes / 14 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchLeaveSessionJob::WaitMigrateMatchmakeSessionOwner
- **Callees:** FUN_71000e2210;FUN_7100150d50;FUN_7100193a50
- **Files:** [decomp](../decompiled/FUN_71001042d0__71001042d0.c)  [cfg](../decompiled/FUN_71001042d0__71001042d0.mmd)
- **Clone hash:** `0249c2d87fd75468`

```c

undefined8 FUN_71001042d0(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  int aiStack_158 [4];
  long alStack_148 [31];
  
  lVar1 = DAT_71052adb38;
  if ((*(int *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 4 + 0x180) !=
       0) && (*(int *)(DAT_71052adb38 + 0xd4) - 3U < 2)) {
    lVar2 = FUN_7100193a50(DAT_71052adfc0);
    lVar6 = *(long *)(lVar2 + 8);
    if (lVar6 == lVar2) {
      uVar4 = 0;
    }
    else {
      lVar5 = *(long *)(lVar1 + 0xb8);
      uVar4 = 0;
      do {
        uVar3 = FUN_7100150d50(lVar5,*(long *)(lVar6 + 0x10),aiStack_158);
        if (((uVar3 & 1) != 0) &&
           (aiStack_158[0] == *(int *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 4 + 0x180))) {
          uVar3 = (ulong)uVar4;
          uVar4 = uVar4 + 1;
          alStack_148[uVar3] = *(long *)(lVar6 + 0x10);
        }
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != lVar2);
    }
    uVar3 = (ulong)(*(char *)(lVar1 + 0x162) == '\0');
    FUN_71000e2210(aiStack_158,*(long *)(lVar1 + uVar3 * 8 + 0x168),(int *)(param_1 + 0xc),
                   *(int *)(lVar1 + uVar3 * 4 + 0x180),alStack_148,uVar4);
    if (aiStack_158[0] == 0) {
      param_1[8] = (long)"NexMatchLeaveSessionJob::WaitMigrateMatchmakeSessionOwner";
// ... (9 more lines)
```

## 47. `FUN_7100121000`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100121000`  (offset `0x121000`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100121000(void)`
- **Size / BBs / Incoming:** 460 bytes / 12 bb / 1 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::WaitForRetryRandomMatchmake;LanMatchRandomMatchmakeJob::RandomMatchmake;LanMatchRandomMatchmakeJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_710011bb20;FUN_710011beb0;FUN_710011bec0;FUN_7100146ba0;FUN_7100150b70;FUN_7100193580;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100121000__7100121000.c)  [cfg](../decompiled/FUN_7100121000__7100121000.mmd)
- **Clone hash:** `9b892226a80e3997`

```c

undefined8 FUN_7100121000(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  char *pcVar9;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar4 == 5) {
    aiStack_40[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_40);
    pcVar8 = FUN_71001429b0;
    uVar5 = 0;
    pcVar9 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    aiStack_40[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    if (((*(int *)(param_1 + 0x6c) == aiStack_40[0]) ||
        (((*(char *)(param_1 + 0x7d) == '\0' && (*(char *)(param_1 + 0x7e) == '\0')) &&
         (*(char *)(param_1 + 0x80) == '\0')))) ||
       (bVar2 = *(char *)(param_1 + 0x82) + 1, *(byte *)(param_1 + 0x82) = bVar2,
       lVar3 = DAT_71052adb38, 2 < bVar2)) {
      FUN_710011bb20(*(long *)(param_1 + 0x178));
// ... (34 more lines)
```

## 48. `FUN_710011f970`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011f970`  (offset `0x11f970`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011f970(void)`
- **Size / BBs / Incoming:** 28 bytes / 1 bb / 1 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** LanMatchDestroySessionJob::UnregisterCurrentMatchmakeSession
- **Files:** [decomp](../decompiled/FUN_710011f970__710011f970.c)  [cfg](../decompiled/FUN_710011f970__710011f970.mmd)
- **Clone hash:** `2e3f831d686af652`

```c

void FUN_710011f970(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_710011f990;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LanMatchDestroySessionJob::UnregisterCurrentMatchmakeSession";
  return;
}


```

## 49. `FUN_71000fd9e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd9e0`  (offset `0xfd9e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd9e0(void)`
- **Size / BBs / Incoming:** 1008 bytes / 35 bb / 3 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::SendPreparedForMigrateSession;NexMatchJointSessionJob::GetNextMatchmakeSessionInfo;chara/chara_4/chara_4_
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_71000edff0;FUN_7100146ba0;FUN_7100146ed0;FUN_7100149290;FUN_7100150680;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fd9e0__71000fd9e0.c)  [cfg](../decompiled/FUN_71000fd9e0__71000fd9e0.mmd)
- **Clone hash:** `79e58e309476dd51`

```c

undefined8 FUN_71000fd9e0(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined8 uVar7;
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
       (iVar2 = FUN_7100146ba0(DAT_71052adb38), lVar4 = DAT_71052adb38, iVar2 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar1 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
        if (bVar1) {
          iVar2 = *(int *)(param_1 + 0xf0);
joined_r0x0071000fddac:
          if ((iVar2 == 0) || (bVar1 = FUN_71000edff0(*(long *)(lVar4 + 8),iVar2), !bVar1)) {
            return 5;
// ... (113 more lines)
```

## 50. `FUN_71000f3270`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3270`  (offset `0xf3270`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3270(void)`
- **Size / BBs / Incoming:** 772 bytes / 27 bb / 2 incoming refs
- **Match values:** MatchmakeSession
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::LeaveMatchmakeSession;NODE_PRE_REFRACT_BLEND;NexMatchJoinSessionJob::GetStationLocation
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000ecfb0;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f3270__71000f3270.c)  [cfg](../decompiled/FUN_71000f3270__71000f3270.mmd)
- **Clone hash:** `8e8fead75e32fe07`

```c

undefined8 FUN_71000f3270(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
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
    uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar5 & 1) == 0) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) <= (ulong)param_1[0x2a]) {
        plVar9 = *(long **)(DAT_71052adb38 + 8);
        plVar6 = (long *)FUN_71000ecfb0((long)plVar9,0);
        if (plVar6 == (long *)0x0) {
          uVar3 = 1;
// ... (78 more lines)
```

