# joinsession (funcs=48, hits=110)

Top 50 functions by hit count

## 1. `FUN_71000f2880`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f2880`  (offset `0xf2880`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f2880(void)`
- **Size / BBs / Incoming:** 1996 bytes / 90 bb / 16 incoming refs
- **Match values:** JoinSession
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

## 2. `FUN_71000f3580`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3580`  (offset `0xf3580`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3580(void)`
- **Size / BBs / Incoming:** 564 bytes / 11 bb / 4 incoming refs
- **Match values:** JoinSession
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

## 3. `FUN_71000f3a60`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3a60`  (offset `0xf3a60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3a60(void)`
- **Size / BBs / Incoming:** 1088 bytes / 30 bb / 2 incoming refs
- **Match values:** JoinSession
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

## 4. `FUN_71000f22b0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f22b0`  (offset `0xf22b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f22b0(void)`
- **Size / BBs / Incoming:** 524 bytes / 20 bb / 3 incoming refs
- **Match values:** JoinSession
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

## 5. `FUN_710011cbb0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011cbb0`  (offset `0x11cbb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011cbb0(void)`
- **Size / BBs / Incoming:** 372 bytes / 10 bb / 2 incoming refs
- **Match values:** JoinSession
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

## 6. `FUN_71000f24c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f24c0`  (offset `0xf24c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f24c0(void)`
- **Size / BBs / Incoming:** 460 bytes / 15 bb / 2 incoming refs
- **Match values:** JoinSession
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

## 7. `FUN_71000f3050`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3050`  (offset `0xf3050`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3050(void)`
- **Size / BBs / Incoming:** 544 bytes / 24 bb / 2 incoming refs
- **Match values:** JoinSession
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

## 8. `FUN_71000f4300`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4300`  (offset `0xf4300`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4300(void)`
- **Size / BBs / Incoming:** 468 bytes / 14 bb / 2 incoming refs
- **Match values:** JoinSession
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

## 9. `FUN_710011d5a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d5a0`  (offset `0x11d5a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011d5a0(void)`
- **Size / BBs / Incoming:** 392 bytes / 10 bb / 1 incoming refs
- **Match values:** JoinSession
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

## 10. `FUN_710011cd30`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011cd30`  (offset `0x11cd30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011cd30(void)`
- **Size / BBs / Incoming:** 248 bytes / 7 bb / 5 incoming refs
- **Match values:** JoinSession
- **Strings touched:** nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::WaitLeaveMatchmakeSession
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;FUN_7100149270;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011cd30__710011cd30.c)  [cfg](../decompiled/FUN_710011cd30__710011cd30.mmd)
- **Clone hash:** `1e9e7b61a8666ed5`

```c

undefined8 FUN_710011cd30(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  code *pcVar4;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_38);
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x60))
              (aiStack_38,*(long **)(param_1 + 0x138),param_1 + 0x60,
               *(undefined4 *)
                (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180));
    if (aiStack_38[0] == 0) {
      pcVar4 = FUN_710011d750;
      pcVar3 = "LanMatchJoinSessionJob::WaitLeaveMatchmakeSession";
    }
    else {
      FUN_7100149270(DAT_71052adb38,0);
      pcVar4 = FUN_710013e970;
      pcVar3 = "LanMatchJoinSessionJob::CompleteFailure";
    }
    uVar2 = 5;
    *(code **)(param_1 + 0x30) = pcVar4;
// ... (6 more lines)
```

## 11. `FUN_71000f4b10`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4b10`  (offset `0xf4b10`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4b10(void)`
- **Size / BBs / Incoming:** 484 bytes / 17 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** NexMatchJoinSessionJob::LeaveMatchmakeSession;chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NODE_PRE_REFRACT_BLEND;NexMatchJoinSessionJob::GetStationLocation
- **Callees:** FUN_71000bcf30;FUN_71000c36b0;FUN_7100146ba0;FUN_710015fd60;FUN_710015fea0;FUN_710015ff20;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f4b10__71000f4b10.c)  [cfg](../decompiled/FUN_71000f4b10__71000f4b10.mmd)
- **Clone hash:** `26b0b2da5a354d8d`

```c

undefined8 FUN_71000f4b10(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int aiStack_a8 [32];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_a8[0] = 0xc406;
    break;
  case 6:
    aiStack_a8[0] = 0xa471;
    break;
  case 7:
    aiStack_a8[0] = 0xc420;
    break;
  case 8:
    aiStack_a8[0] = 0xc421;
    break;
  default:
    *(undefined4 *)(param_1 + 0x22) = 8;
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar2 & 1) == 0) {
      if ((ulong)param_1[0x29] < *(ulong *)(DAT_71052ac580 + 0x30)) {
        FUN_710015fd60((undefined8 *)aiStack_a8);
        FUN_710015fea0((long)(param_1 + 0x12),(long)aiStack_a8);
        param_1[6] = (long)FUN_71000f3580;
        param_1[7] = 0;
        *(undefined1 *)((long)param_1 + 0x16c) = 0;
        param_1[8] = (long)"NexMatchJoinSessionJob::GetStationLocation";
        FUN_710015ff20((undefined8 *)aiStack_a8);
        return 0;
      }
      if ((*(ulong *)(DAT_71052ac580 + 0x30) <= (ulong)param_1[0x28]) &&
// ... (31 more lines)
```

## 12. `FUN_710013f090`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710013f090`  (offset `0x13f090`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710013f090(void)`
- **Size / BBs / Incoming:** 328 bytes / 9 bb / 6 incoming refs
- **Match values:** JoinSession
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

## 13. `FUN_71000f37c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f37c0`  (offset `0xf37c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f37c0(void)`
- **Size / BBs / Incoming:** 428 bytes / 18 bb / 2 incoming refs
- **Match values:** JoinSession
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

## 14. `FUN_710011d3f0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d3f0`  (offset `0x11d3f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011d3f0(void)`
- **Size / BBs / Incoming:** 428 bytes / 8 bb / 3 incoming refs
- **Match values:** JoinSession
- **Strings touched:** nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::MeshCleanup;LanMatchJoinSessionJob::JoinMatchmakeSession
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;FUN_710015fd60;FUN_710015fea0;FUN_710015ff20;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011d3f0__710011d3f0.c)  [cfg](../decompiled/FUN_710011d3f0__710011d3f0.mmd)
- **Clone hash:** `69fce2f742ec4897`

```c

undefined8 FUN_710011d3f0(long param_1)

{
  int iVar1;
  int aiStack_b8 [4];
  int aiStack_a8 [32];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_a8[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_a8 | 4));
    aiStack_b8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_a8 | 4),(Result *)aiStack_b8);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_a8);
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
    return 0;
  }
  *(undefined4 *)(param_1 + 0x110) = 8;
  if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0')) {
    aiStack_a8[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_a8 | 4));
    aiStack_b8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_a8 | 4),(Result *)aiStack_b8);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_a8);
    *(code **)(param_1 + 0x30) = FUN_710013f360;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::MeshCleanup";
    return 0;
  }
  if (*(ulong *)(param_1 + 0x140) < *(ulong *)(DAT_71052ac580 + 0x30)) {
    FUN_710015fd60((undefined8 *)aiStack_a8);
    FUN_710015fea0(param_1 + 0x90,(long)aiStack_a8);
    aiStack_b8[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_b8 | 4));
// ... (13 more lines)
```

## 15. `FUN_71000f3270`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3270`  (offset `0xf3270`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3270(void)`
- **Size / BBs / Incoming:** 772 bytes / 27 bb / 2 incoming refs
- **Match values:** JoinSession
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

## 16. `FUN_710011d1c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d1c0`  (offset `0x11d1c0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710011d1c0(long param_1, int * param_2)`
- **Size / BBs / Incoming:** 548 bytes / 10 bb / 1 incoming refs
- **Match values:** JoinSession
- **Strings touched:** nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::MeshCleanup;LanMatchJoinSessionJob::WaitForRetryJoinMatchmakeSession
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_7100146ba0;FUN_7100150b70;FUN_7100193580;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011d1c0__710011d1c0.c)  [cfg](../decompiled/FUN_710011d1c0__710011d1c0.mmd)
- **Clone hash:** `9ee4f8b2e06d4c6d`

```c

undefined8 FUN_710011d1c0(long param_1,int *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  char *pcVar10;
  ErrorResultVariant *this;
  int local_48 [4];
  undefined4 local_38 [2];
  
  iVar5 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar5 == 5) {
    local_48[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
    FUN_71000bcf30((int *)(param_1 + 0x120),local_48);
    pcVar9 = FUN_710013e970;
    uVar6 = 0;
    pcVar10 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    piVar3 = (int *)(param_1 + 0x120);
    FUN_71000bcf30(piVar3,param_2);
    local_48[0] = 0x6838;
    this = (ErrorResultVariant *)((ulong)local_48 | 4);
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    local_38[0] = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
    if (*(int *)(param_1 + 0x120) != local_48[0]) {
      local_48[0] = 0x6c3d;
// ... (49 more lines)
```

## 17. `FUN_710011cf50`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011cf50`  (offset `0x11cf50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011cf50(void)`
- **Size / BBs / Incoming:** 388 bytes / 9 bb / 1 incoming refs
- **Match values:** JoinSession
- **Strings touched:** select_item;LanMatchJoinSessionJob::LeaveMesh;lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::WaitRequestSessionInfo
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011cf50__710011cf50.c)  [cfg](../decompiled/FUN_710011cf50__710011cf50.mmd)
- **Clone hash:** `99cc8f442106f6e6`

```c

void FUN_710011cf50(long param_1)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  if (*(int *)(param_1 + 0x60) == 1) {
    aiStack_40[0] = 0x6439;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_40);
    *(code **)(param_1 + 0x30) = FUN_710013f090;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LanMatchJoinSessionJob::LeaveMesh";
  }
  else {
    iVar1 = FUN_7100146ba0(DAT_71052adb38);
    if (iVar1 == 5) {
      aiStack_40[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      aiStack_50[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
      FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_40);
      (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
      *(code **)(param_1 + 0x30) = FUN_710013e970;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar2 = "lan::LanMatchJoinSessionJob::CompleteFailure";
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x138) + 0xb0))
                (aiStack_40,*(long **)(param_1 + 0x138),(int *)(param_1 + 0x60),
// ... (24 more lines)
```

## 18. `FUN_710013f3b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710013f3b0`  (offset `0x13f3b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710013f3b0(void)`
- **Size / BBs / Incoming:** 832 bytes / 18 bb / 5 incoming refs
- **Match values:** JoinSession
- **Strings touched:** JoinSessionJob::LeaveMesh
- **Callees:** FUN_71000b4180;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_7100146fd0;FUN_7100147420;FUN_7100147ce0;FUN_71001509c0;FUN_7100150b70;FUN_71001921a0;FUN_7100193320;FUN_7100193330;FUN_7100193380;FUN_7100193740;FUN_7100193770;...
- **Files:** [decomp](../decompiled/FUN_710013f3b0__710013f3b0.c)  [cfg](../decompiled/FUN_710013f3b0__710013f3b0.mmd)
- **Clone hash:** `a9a753ac1ebf2589`

```c

ulong FUN_710013f3b0(long *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ErrorResultVariant *this;
  undefined4 *puVar11;
  long lVar12;
  int aiStack_70 [4];
  int aiStack_60 [4];
  undefined8 uStack_50;
  undefined4 auStack_38 [2];
  
  uVar6 = (**(code **)(*param_1 + 0x48))();
  if ((uVar6 & 1) == 0) {
    if (((*(char *)((long)param_1 + 0x11c) == '\0') && (*(char *)((long)param_1 + 0x11d) == '\0'))
       && (*(char *)((long)param_1 + 0x11a) == '\0')) {
      bVar1 = FUN_71001921a0(DAT_71052adfc0);
      if (((bVar1 & 1) == 0) ||
         ((bVar1 = FUN_7100193320(DAT_71052adfc0), (bVar1 & 1) == 0 &&
          (bVar2 = FUN_7100193740(DAT_71052adfc0), !bVar2)))) {
        iVar3 = FUN_7100193770(DAT_71052adfc0);
        if (iVar3 == 0) {
          uStack_50 = CONCAT44(uStack_50._4_4_,0x6439);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)&uStack_50 | 4));
          auStack_38[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)&uStack_50 | 4),(Result *)auStack_38);
          FUN_71000bcf30((int *)(param_1 + 0x24),(int *)&uStack_50);
          uVar6 = (**(code **)(*param_1 + 0x80))(param_1);
// ... (98 more lines)
```

## 19. `FUN_71000f2690`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f2690`  (offset `0xf2690`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f2690(void)`
- **Size / BBs / Incoming:** 484 bytes / 21 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::LeaveJoinedMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f2690__71000f2690.c)  [cfg](../decompiled/FUN_71000f2690__71000f2690.mmd)
- **Clone hash:** `6f7e76cc63e51850`

```c

undefined8 FUN_71000f2690(long param_1)

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
    if (*(int *)(param_1 + 0x60) == 3) {
      piVar1 = (int *)(param_1 + 100);
      FUN_71000bce50(aiStack_48,piVar1);
      aiStack_58[0] = 0xc406;
      this = (ErrorResultVariant *)((ulong)aiStack_58 | 4);
// ... (46 more lines)
```

## 20. `FUN_710017a0a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017a0a0`  (offset `0x17a0a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017a0a0(void)`
- **Size / BBs / Incoming:** 520 bytes / 22 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** LocalMatchJoinSessionJob::WaitForCancel;JoinSessionJob::MeshStartup
- **Callees:** FUN_71000b40e0;FUN_71000b41f0;FUN_71000b4260;FUN_71000bce50;FUN_71000bcf30;FUN_710013f6f0;FUN_7100149270;FUN_71001749f0;FUN_7100174a80;FUN_7100174f00;FUN_7100174f20;FUN_7100175430;FUN_7100175610;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710017a0a0__710017a0a0.c)  [cfg](../decompiled/FUN_710017a0a0__710017a0a0.mmd)
- **Clone hash:** `eac1a084e044b8c7`

```c

undefined8 FUN_710017a0a0(long *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  
  piVar5 = aiStack_90;
  uVar4 = (**(code **)(*param_1 + 0x48))();
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(**(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                    0x168) + 0x58))();
    if ((uVar4 & 1) == 0) {
      return 5;
    }
    iVar1 = (int)param_1[0xc];
    if (iVar1 == 2) {
      FUN_7100149270(DAT_71052adb38,*(int *)((long)param_1 + 0x114));
      FUN_710013f6f0(param_1,1);
      FUN_71000b40e0((undefined4 *)(param_1 + 0xc));
      lVar8 = param_1[0x28];
      uVar4 = FUN_7100174f00(lVar8);
      if (((uVar4 & 1) == 0) && (uVar3 = FUN_7100174f20(lVar8), (uVar3 & 1) == 0)) {
        puVar7 = (undefined4 *)param_1[0xb];
        aiStack_40[0] = 0xc406;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
        aiStack_80[0] = 0;
// ... (54 more lines)
```

## 21. `FUN_71000f4630`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4630`  (offset `0xf4630`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4630(void)`
- **Size / BBs / Incoming:** 488 bytes / 19 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;FUN_7100149290;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f4630__71000f4630.c)  [cfg](../decompiled/FUN_71000f4630__71000f4630.mmd)
- **Clone hash:** `8e8560381fa9ef4f`

```c

undefined8 FUN_71000f4630(long param_1)

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
    uVar3 = (**(code **)(**(long **)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                        + 0x68))();
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    FUN_7100149290(DAT_71052adb38,0);
    if (*(int *)(param_1 + 0x60) == 3) {
      piVar1 = (int *)(param_1 + 100);
      FUN_71000bce50(aiStack_48,piVar1);
// ... (45 more lines)
```

## 22. `FUN_71000f3970`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3970`  (offset `0xf3970`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3970(void)`
- **Size / BBs / Incoming:** 228 bytes / 7 bb / 2 incoming refs
- **Match values:** JoinSession
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

## 23. `FUN_71000f4820`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4820`  (offset `0xf4820`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4820(void)`
- **Size / BBs / Incoming:** 480 bytes / 19 bb / 2 incoming refs
- **Match values:** JoinSession
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

## 24. `FUN_71000f3f40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3f40`  (offset `0xf3f40`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3f40(void)`
- **Size / BBs / Incoming:** 956 bytes / 28 bb / 1 incoming refs
- **Match values:** JoinSession
- **Strings touched:** NexMatchJoinSessionJob::MeshCleanup;NexMatchJoinSessionJob::CleanupForRetryJoinMesh
- **Callees:** FUN_71000bcf30;FUN_7100150b70;FUN_7100151fe0;FUN_7100152020;FUN_7100192f60;FUN_71001936e0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f3f40__71000f3f40.c)  [cfg](../decompiled/FUN_71000f3f40__71000f3f40.mmd)
- **Clone hash:** `1e6cefc99ab52a2e`

```c

undefined8 FUN_71000f3f40(long param_1,int *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  code *pcVar8;
  char cVar9;
  int aiStack_78 [4];
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  FUN_71000bcf30((int *)(param_1 + 0x120),param_2);
  bVar2 = FUN_71001936e0(DAT_71052adfc0);
  if ((bVar2 & 1) != 0) {
    lVar4 = FUN_7100192f60(DAT_71052adfc0);
    uVar3 = FUN_7100151fe0(lVar4);
    if ((uVar3 & 1) != 0) {
      FUN_7100152020(lVar4);
    }
  }
  bVar2 = *(char *)(param_1 + 0x11f) + 1;
  *(byte *)(param_1 + 0x11f) = bVar2;
  if ((1 < bVar2) || (*(char *)(param_1 + 0x11c) != '\0')) goto LAB_71000f3fb4;
  if (*(char *)(param_1 + 0x11d) == '\0') {
    if (*(char *)(param_1 + 0x11a) == '\0') {
      if (*(char *)(param_1 + 0x11b) == '\0') {
        if (*(char *)(param_1 + 0x11e) == '\0') {
          if (*(char *)(param_1 + 0x119) == '\0') {
            aiStack_48[0] = 0x643f;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
            aiStack_58[0] = 0;
// ... (128 more lines)
```

## 25. `FUN_710013e7c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710013e7c0`  (offset `0x13e7c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710013e7c0(void)`
- **Size / BBs / Incoming:** 432 bytes / 16 bb / 4 incoming refs
- **Match values:** JoinSession
- **Strings touched:** N2nn3pia3lan25LanMatchDestroySessionJobE;nn::pia::session::JoinSessionJob::CompleteFailure;JoinSessionJob::JoinMesh
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710013e7c0__710013e7c0.c)  [cfg](../decompiled/FUN_710013e7c0__710013e7c0.mmd)
- **Clone hash:** `e3c1a8433af7c7db`

```c

ulong FUN_710013e7c0(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  int aiStack_58 [4];
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052adb38;
  switch(iVar2) {
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
    if (*(char *)((long)param_1 + 0x11c) != '\0') {
      aiStack_38[0] = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
// ... (43 more lines)
```

## 26. `FUN_710017a330`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017a330`  (offset `0x17a330`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017a330(void)`
- **Size / BBs / Incoming:** 148 bytes / 1 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** chara/chara_4/chara_4_;LocalMatchJoinSessionJob::CompleteFailure;LocalMatchJoinSessionJob::WaitLeaveMatchmake
- **Files:** [decomp](../decompiled/FUN_710017a330__710017a330.c)  [cfg](../decompiled/FUN_710017a330__710017a330.mmd)
- **Clone hash:** `944d3ebd0e95874e`

```c

undefined8 FUN_710017a330(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  long *plVar5;
  int aiStack_30 [4];
  
  plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  (**(code **)(*plVar5 + 0x60))(aiStack_30,plVar5,param_1 + 0x60,*(undefined4 *)(param_1 + 0x114));
  bVar4 = aiStack_30[0] != 0;
  pcVar1 = FUN_710017a3d0;
  if (bVar4) {
    pcVar1 = FUN_710013e970;
  }
  pcVar2 = "LocalMatchJoinSessionJob::WaitLeaveMatchmake";
  if (bVar4) {
    pcVar2 = "LocalMatchJoinSessionJob::CompleteFailure";
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

## 27. `FUN_71000f4520`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4520`  (offset `0xf4520`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71000f4520(long param_1)`
- **Size / BBs / Incoming:** 268 bytes / 12 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_71000e0b40;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f4520__71000f4520.c)  [cfg](../decompiled/FUN_71000f4520__71000f4520.mmd)
- **Clone hash:** `65a709c16511f5b1`

```c

undefined8 FUN_71000f4520(long param_1)

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
    FUN_71000bce50(local_38,(int *)(param_1 + 100));
    pcVar4 = FUN_71000f2880;
    uVar3 = 5;
    pcVar5 = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
    goto LAB_71000f45d0;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
// ... (14 more lines)
```

## 28. `FUN_710011d0e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d0e0`  (offset `0x11d0e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011d0e0(void)`
- **Size / BBs / Incoming:** 224 bytes / 8 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** select_item;LanMatchJoinSessionJob::LeaveMesh;LanMatchJoinSessionJob::CompleteProcess
- **Callees:** FUN_71000bcf30;FUN_7100191bb0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011d0e0__710011d0e0.c)  [cfg](../decompiled/FUN_710011d0e0__710011d0e0.mmd)
- **Clone hash:** `87b29e80bc1e5135`

```c

undefined8 FUN_710011d0e0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  code *pcVar4;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x138) + 0xb8))();
  if ((uVar2 & 1) != 0) {
    if (*(int *)(param_1 + 0x60) == 3) {
      aiStack_38[0] = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_38);
      uVar1 = FUN_7100191bb0(DAT_71052adfc0);
      if (2 < (uVar1 & 0xffff)) {
        *(undefined1 *)(param_1 + 0x11a) = 1;
      }
      pcVar4 = FUN_710013f090;
      pcVar3 = "LanMatchJoinSessionJob::LeaveMesh";
    }
    else {
      pcVar4 = FUN_710013f3b0;
      pcVar3 = "LanMatchJoinSessionJob::CompleteProcess";
    }
    *(code **)(param_1 + 0x30) = pcVar4;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar3;
    return 0;
  }
  return 5;
}


```

## 29. `FUN_710011c8d0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011c8d0`  (offset `0x11c8d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011c8d0(void)`
- **Size / BBs / Incoming:** 432 bytes / 12 bb / 3 incoming refs
- **Match values:** JoinSession
- **Strings touched:** nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::WaitJoinMatchmake
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011c8d0__710011c8d0.c)  [cfg](../decompiled/FUN_710011c8d0__710011c8d0.mmd)
- **Clone hash:** `ec1c156c409f7dcd`

```c

undefined8 FUN_710011c8d0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  
  piVar3 = aiStack_80;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_40[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_70);
    FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_40);
    uVar2 = 0;
    param_1[6] = (long)FUN_710013e970;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    puVar4 = (undefined4 *)param_1[0xb];
    if ((puVar4 == (undefined4 *)0x0) || (*(char *)(puVar4 + 10) == '\0')) {
      if ((int)param_1[0x29] == 0) {
        aiStack_40[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
        aiStack_70[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_70);
        (**(code **)(*(long *)param_1[0x27] + 0x50))
                  (aiStack_70,(long *)param_1[0x27],param_1 + 0xc,
// ... (35 more lines)
```

## 30. `FUN_710011ce30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011ce30`  (offset `0x11ce30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011ce30(void)`
- **Size / BBs / Incoming:** 276 bytes / 11 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** LanMatchJoinSessionJob::LeaveMatchmakeSession;JoinSessionJob::MeshStartup
- **Callees:** FUN_71000bce50;FUN_71000bcf30;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011ce30__710011ce30.c)  [cfg](../decompiled/FUN_710011ce30__710011ce30.mmd)
- **Clone hash:** `43d79c99841d2051`

```c

undefined8 FUN_710011ce30(long param_1)

{
  ulong uVar1;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x138) + 0xa8))
                      (*(long **)(param_1 + 0x138),param_1 + 0x90);
    if ((uVar1 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x60) == 2) {
      *(code **)(param_1 + 0x30) = FUN_710013e7c0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "JoinSessionJob::MeshStartup";
      return 0;
    }
    if (*(int *)(param_1 + 0x60) != 3) {
      return 5;
    }
    FUN_71000bce50(aiStack_38,(int *)(param_1 + 100));
  }
  else {
    aiStack_38[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  }
  FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_38);
  *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::LeaveMatchmakeSession";
  *(code **)(param_1 + 0x30) = FUN_710011cd30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}


```

## 31. `FUN_71000f2170`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f2170`  (offset `0xf2170`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f2170(void)`
- **Size / BBs / Incoming:** 312 bytes / 9 bb / 1 incoming refs
- **Match values:** JoinSession
- **Strings touched:** NexMatchJoinSessionJob::LeaveJoinedMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_71000e4820;FUN_71000ee290;FUN_71000ee2c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f2170__71000f2170.c)  [cfg](../decompiled/FUN_71000f2170__71000f2170.mmd)
- **Clone hash:** `85e43d6d8082f86d`

```c

void FUN_71000f2170(int *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  lVar4 = DAT_71052adb38;
  iVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (iVar1 == 0) {
    aiStack_50[0] = 0x10c07;
  }
  else {
    FUN_71000e4820(aiStack_50,*(long *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x162) * 8 + 0x168),
                   (long)param_3);
    *(undefined1 *)(param_2 + 0x16c) = 0;
    lVar4 = *(long *)(lVar4 + 8);
    *(undefined4 *)(param_2 + 0x168) = 0;
    iVar1 = FUN_71000ee2c0(lVar4);
    if (iVar1 != 0) {
      uVar5 = 0;
      do {
        iVar1 = FUN_71000ee290(lVar4,uVar5);
        if (iVar1 != 0) {
          uVar2 = FUN_71000ee290(lVar4,uVar5);
          *(undefined4 *)(param_2 + (ulong)*(uint *)(param_2 + 0x168) * 4 + 0x158) = uVar2;
          *(int *)(param_2 + 0x168) = *(int *)(param_2 + 0x168) + 1;
        }
        uVar5 = uVar5 + 1;
        uVar3 = FUN_71000ee2c0(lVar4);
      } while (uVar5 < uVar3);
    }
    *(char **)(param_2 + 0x40) = "NexMatchJoinSessionJob::LeaveJoinedMatchmakeSession";
    *(code **)(param_2 + 0x30) = FUN_71000f22b0;
    *(undefined8 *)(param_2 + 0x38) = 0;
// ... (10 more lines)
```

## 32. `FUN_7100179df0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100179df0`  (offset `0x179df0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100179df0(void)`
- **Size / BBs / Incoming:** 460 bytes / 11 bb / 1 incoming refs
- **Match values:** JoinSession
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

## 33. `FUN_710011ca80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011ca80`  (offset `0x11ca80`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011ca80(void)`
- **Size / BBs / Incoming:** 296 bytes / 11 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** NODE_PRE_REFRACT_BLEND;LanMatchJoinSessionJob::GetStationLocation
- **Callees:** FUN_71000b40e0;FUN_71000b41f0;FUN_71000bce50;FUN_710013f6f0;FUN_7100149270;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011ca80__710011ca80.c)  [cfg](../decompiled/FUN_710011ca80__710011ca80.mmd)
- **Clone hash:** `c5d03b460bd3e03e`

```c

undefined8 FUN_710011ca80(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar4 = aiStack_60;
  puVar5 = (undefined4 *)param_1[0xb];
  if ((puVar5 == (undefined4 *)0x0) || (*(char *)(puVar5 + 10) == '\0')) {
    uVar2 = (**(code **)(*(long *)param_1[0x27] + 0x58))();
    if ((uVar2 & 1) != 0) {
      iVar1 = (int)param_1[0xc];
      if (iVar1 == 2) {
        FUN_7100149270(DAT_71052adb38,*(int *)((long)param_1 + 0x114));
        FUN_710013f6f0(param_1,1);
        FUN_71000b40e0((undefined4 *)(param_1 + 0xc));
        param_1[6] = (long)FUN_710011cbb0;
        param_1[7] = 0;
        param_1[8] = (long)"LanMatchJoinSessionJob::GetStationLocation";
        return 0;
      }
      if (iVar1 == 3) {
        puVar5 = (undefined4 *)param_1[0xb];
        FUN_71000bce50(aiStack_60,(int *)((long)param_1 + 100));
        goto LAB_710011cb24;
      }
    }
    uVar3 = 5;
  }
  else {
    aiStack_50[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
// ... (14 more lines)
```

## 34. `FUN_71000f44e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f44e0`  (offset `0xf44e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f44e0(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 1 incoming refs
- **Match values:** JoinSession
- **Strings touched:** NexMatchJoinSessionJob::MeshCleanup
- **Files:** [decomp](../decompiled/FUN_71000f44e0__71000f44e0.c)  [cfg](../decompiled/FUN_71000f44e0__71000f44e0.mmd)
- **Clone hash:** `d38f992dd30d92b7`

```c

undefined8 FUN_71000f44e0(long param_1)

{
  *(char **)(param_1 + 0x40) = "NexMatchJoinSessionJob::MeshCleanup";
  *(code **)(param_1 + 0x30) = FUN_710013f360;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 35. `FUN_710011d730`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d730`  (offset `0x11d730`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011d730(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 1 incoming refs
- **Match values:** JoinSession
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

## 36. `FUN_710017a3d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017a3d0`  (offset `0x17a3d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017a3d0(void)`
- **Size / BBs / Incoming:** 120 bytes / 3 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** chara/chara_4/chara_4_;LocalMatchJoinSessionJob::CompleteFailure
- **Callees:** FUN_71000b40e0
- **Files:** [decomp](../decompiled/FUN_710017a3d0__710017a3d0.c)  [cfg](../decompiled/FUN_710017a3d0__710017a3d0.mmd)
- **Clone hash:** `d714ce8efe69b1a6`

```c

undefined8 FUN_710017a3d0(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                  0x168) + 0x68))();
  if ((uVar1 & 1) != 0) {
    FUN_71000b40e0((undefined4 *)(param_1 + 0x60));
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalMatchJoinSessionJob::CompleteFailure";
    return 0;
  }
  return 5;
}


```

## 37. `FUN_71000f4500`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4500`  (offset `0xf4500`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4500(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 1 incoming refs
- **Match values:** JoinSession
- **Strings touched:** NexMatchJoinSessionJob::LeaveMatchmakeSession
- **Files:** [decomp](../decompiled/FUN_71000f4500__71000f4500.c)  [cfg](../decompiled/FUN_71000f4500__71000f4500.mmd)
- **Clone hash:** `c2c2812c40dbbf37`

```c

undefined8 FUN_71000f4500(long param_1)

{
  *(char **)(param_1 + 0x40) = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
  *(code **)(param_1 + 0x30) = FUN_71000f2880;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}


```

## 38. `FUN_710017a5c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017a5c0`  (offset `0x17a5c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017a5c0(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 1 incoming refs
- **Match values:** JoinSession
- **Strings touched:** LocalMatchJoinSessionJob::MeshCleanup
- **Files:** [decomp](../decompiled/FUN_710017a5c0__710017a5c0.c)  [cfg](../decompiled/FUN_710017a5c0__710017a5c0.mmd)
- **Clone hash:** `3f3d8b2622f1802d`

```c

undefined8 FUN_710017a5c0(long param_1)

{
  *(char **)(param_1 + 0x40) = "LocalMatchJoinSessionJob::MeshCleanup";
  *(code **)(param_1 + 0x30) = FUN_710013f360;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 39. `FUN_710013edb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710013edb0`  (offset `0x13edb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710013edb0(void)`
- **Size / BBs / Incoming:** 732 bytes / 36 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** N2nn3pia3lan25LanMatchDestroySessionJobE;nn::pia::session::JoinSessionJob::CompleteFailure
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;FUN_71001921a0;FUN_71001929a0;FUN_71001929d0;FUN_7100192a60;FUN_7100192e90;FUN_7100193320;FUN_71001936d0;FUN_7100193740;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710013edb0__710013edb0.c)  [cfg](../decompiled/FUN_710013edb0__710013edb0.mmd)
- **Clone hash:** `8b454d777a1d93ac`

```c

ulong FUN_710013edb0(long *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
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
    bVar1 = FUN_71001929a0(DAT_71052adfc0);
    if (bVar1) {
      FUN_71001929d0(aiStack_38,DAT_71052adfc0);
      if (aiStack_38[0] == 0) {
        FUN_7100192e90(aiStack_48,DAT_71052adfc0);
        if (aiStack_48[0] == 0) {
          (**(code **)(*param_1 + 0x70))(param_1);
// ... (83 more lines)
```

## 40. `FUN_710017a4a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017a4a0`  (offset `0x17a4a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017a4a0(void)`
- **Size / BBs / Incoming:** 276 bytes / 7 bb / 1 incoming refs
- **Match values:** JoinSession
- **Strings touched:** LocalMatchJoinSessionJob::MeshCleanup
- **Callees:** FUN_71000bcf30;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710017a4a0__710017a4a0.c)  [cfg](../decompiled/FUN_710017a4a0__710017a4a0.mmd)
- **Clone hash:** `75a790fd55aad85a`

```c

undefined8 FUN_710017a4a0(long param_1,int *param_2)

{
  ErrorResultVariant *this;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  aiStack_40[0] = 0x646f;
  this = (ErrorResultVariant *)((ulong)aiStack_40 | 4);
  nn::err::ErrorResultVariant::ErrorResultVariant(this);
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_28);
  if (*param_2 == aiStack_40[0]) {
    aiStack_40[0] = 0x641e;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
  }
  else {
    aiStack_40[0] = 0x6470;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_28);
    if (*param_2 != aiStack_40[0]) goto LAB_710017a580;
    aiStack_40[0] = 0x641f;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  }
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  param_2 = aiStack_40;
LAB_710017a580:
  FUN_71000bcf30((int *)(param_1 + 0x120),param_2);
  *(char **)(param_1 + 0x40) = "LocalMatchJoinSessionJob::MeshCleanup";
  *(code **)(param_1 + 0x30) = FUN_710013f360;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 41. `FUN_7100179fc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100179fc0`  (offset `0x179fc0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100179fc0(void)`
- **Size / BBs / Incoming:** 216 bytes / 6 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** LocalMatchJoinSessionJob::WaitJoinMatchmake
- **Callees:** FUN_71000b41f0;FUN_71000b4260;FUN_71000bce50
- **Files:** [decomp](../decompiled/FUN_7100179fc0__7100179fc0.c)  [cfg](../decompiled/FUN_7100179fc0__7100179fc0.mmd)
- **Clone hash:** `1dbb63512b3d8d91`

```c

undefined8 FUN_7100179fc0(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined4 *puVar3;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if ((uVar1 & 1) == 0) {
    plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    (**(code **)(*plVar2 + 0x50))
              (aiStack_30,plVar2,param_1 + 0xc,*(undefined4 *)((long)param_1 + 0x114));
    if (aiStack_30[0] == 0) {
      param_1[8] = (long)"LocalMatchJoinSessionJob::WaitJoinMatchmake";
      param_1[6] = (long)FUN_710017a0a0;
      param_1[7] = 0;
      return 5;
    }
    puVar3 = (undefined4 *)param_1[0xb];
    FUN_71000bce50(aiStack_40,aiStack_30);
    FUN_71000b41f0(puVar3,aiStack_40);
  }
  else {
    FUN_71000b4260((undefined4 *)param_1[0xb]);
  }
  param_1[0xb] = 0;
  (**(code **)(*param_1 + 0x50))(param_1);
  return 1;
}


```

## 42. `FUN_710017a5e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017a5e0`  (offset `0x17a5e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017a5e0(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 1 incoming refs
- **Match values:** JoinSession
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

## 43. `FUN_710011c730`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011c730`  (offset `0x11c730`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011c730(void)`
- **Size / BBs / Incoming:** 416 bytes / 14 bb / 1 incoming refs
- **Match values:** JoinSession
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

## 44. `FUN_710017a450`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017a450`  (offset `0x17a450`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017a450(void)`
- **Size / BBs / Incoming:** 68 bytes / 1 bb / 1 incoming refs
- **Match values:** JoinSession
- **Strings touched:** JoinSessionJob::CompleteProcess
- **Files:** [decomp](../decompiled/FUN_710017a450__710017a450.c)  [cfg](../decompiled/FUN_710017a450__710017a450.mmd)
- **Clone hash:** `19c8031607292264`

```c

void FUN_710017a450(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x138) + 0x170))();
  *(code **)(param_1 + 0x30) = FUN_710013f3b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "JoinSessionJob::CompleteProcess";
  return;
}


```

## 45. `FUN_710011d750`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d750`  (offset `0x11d750`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710011d750(long param_1)`
- **Size / BBs / Incoming:** 192 bytes / 5 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** LanMatchJoinSessionJob::CompleteFailure
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;FUN_7100149270;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011d750__710011d750.c)  [cfg](../decompiled/FUN_710011d750__710011d750.mmd)
- **Clone hash:** `3ff1fae74fa2aa6b`

```c

undefined8 FUN_710011d750(long param_1)

{
  int iVar1;
  ulong uVar2;
  int local_38 [4];
  undefined4 local_28 [2];
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x138) + 0x68))();
  if ((uVar2 & 1) != 0) {
    FUN_7100149270(DAT_71052adb38,0);
    iVar1 = FUN_7100146ba0(DAT_71052adb38);
    if (iVar1 == 5) {
      local_38[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
      FUN_71000bcf30((int *)(param_1 + 0x120),local_38);
    }
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::CompleteFailure";
    return 0;
  }
  return 5;
}


```

## 46. `FUN_710013ec50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710013ec50`  (offset `0x13ec50`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710013ec50(long * param_1)`
- **Size / BBs / Incoming:** 340 bytes / 6 bb / 2 incoming refs
- **Match values:** JoinSession
- **Strings touched:** JoinSessionJob::WaitJoinMesh
- **Callees:** FUN_71000bce50;FUN_7100146fd0;FUN_71001928e0;FUN_7100193380;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710013ec50__710013ec50.c)  [cfg](../decompiled/FUN_710013ec50__710013ec50.mmd)
- **Clone hash:** `72e4aba8acc12eb5`

```c

ulong FUN_710013ec50(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int aiStack_58 [4];
  int local_48 [4];
  int aiStack_38 [4];
  undefined4 local_28 [2];
  
  uVar2 = (**(code **)(*param_1 + 0x48))();
  if ((uVar2 & 1) == 0) {
    FUN_71001928e0(local_48,DAT_71052adfc0,(long)(param_1 + 0x12));
    if (local_48[0] == 0) {
      *(undefined4 *)(param_1 + 0x22) = 4;
      FUN_7100193380(DAT_71052adfc0,1);
      param_1[7] = 0;
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 5;
      param_1[8] = (long)"JoinSessionJob::WaitJoinMesh";
      param_1[6] = (long)FUN_710013edb0;
    }
    else {
      uVar1 = FUN_7100146fd0();
      DAT_71052ac6d7 = (undefined1)uVar1;
      (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
      FUN_71000bce50(aiStack_58,local_48);
      uVar2 = (**(code **)(*param_1 + 0x78))(param_1,aiStack_58);
      uVar4 = uVar2 & 0xffffff00;
      uVar3 = uVar2 & 0xffff0000;
    }
  }
  else {
    local_48[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_28[0] = 0;
// ... (11 more lines)
```

## 47. `FUN_71000f3ea0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3ea0`  (offset `0xf3ea0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000f3ea0(long param_1)`
- **Size / BBs / Incoming:** 152 bytes / 1 bb / 1 incoming refs
- **Match values:** JoinSession
- **Strings touched:** JoinSessionJob::CompleteProcess
- **Callees:** FUN_71001129d0;FUN_7100112c10;FUN_7100146c10
- **Files:** [decomp](../decompiled/FUN_71000f3ea0__71000f3ea0.c)  [cfg](../decompiled/FUN_71000f3ea0__71000f3ea0.mmd)
- **Clone hash:** `2ebb905cad46b975`

```c

void FUN_71000f3ea0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = DAT_71052adb38;
  lVar1 = DAT_71052adb38 + 0x168;
  lVar4 = (**(code **)(**(long **)(lVar1 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8) + 0x120))()
  ;
  uVar5 = (**(code **)(**(long **)(lVar1 + (ulong)*(byte *)(lVar2 + 0x162) * 8) + 0xf0))();
  FUN_7100112c10(lVar4,uVar5);
  uVar3 = FUN_7100146c10(lVar2);
  FUN_71001129d0(lVar4,uVar3);
  *(code **)(param_1 + 0x30) = FUN_710013f3b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "JoinSessionJob::CompleteProcess";
  return;
}


```

## 48. `FUN_710013f770`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710013f770`  (offset `0x13f770`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710013f770(void)`
- **Size / BBs / Incoming:** 28 bytes / 1 bb / 1 incoming refs
- **Match values:** JoinSession
- **Strings touched:** JoinSessionJob::CompleteProcess
- **Files:** [decomp](../decompiled/FUN_710013f770__710013f770.c)  [cfg](../decompiled/FUN_710013f770__710013f770.mmd)
- **Clone hash:** `4a83482573dc3161`

```c

void FUN_710013f770(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_710013f3b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "JoinSessionJob::CompleteProcess";
  return;
}


```

