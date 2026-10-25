# leavematchmakesession (funcs=41, hits=44)

Top 50 functions by hit count

## 1. `FUN_71000f3580`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3580`  (offset `0xf3580`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3580(void)`
- **Size / BBs / Incoming:** 564 bytes / 11 bb / 4 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 2. `FUN_710011cbb0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011cbb0`  (offset `0x11cbb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011cbb0(void)`
- **Size / BBs / Incoming:** 372 bytes / 10 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 3. `FUN_710010a210`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010a210`  (offset `0x10a210`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010a210(void)`
- **Size / BBs / Incoming:** 476 bytes / 19 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 4. `FUN_71000f37c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f37c0`  (offset `0xf37c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f37c0(void)`
- **Size / BBs / Incoming:** 428 bytes / 18 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 5. `FUN_71001097d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001097d0`  (offset `0x1097d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001097d0(void)`
- **Size / BBs / Incoming:** 420 bytes / 15 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
- **Strings touched:** NexMatchRandomMatchmakeJob::StartNatSession;NexMatchRandomMatchmakeJob::WaitForRetryJoinMesh;NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bb680;FUN_7100150b70
- **Files:** [decomp](../decompiled/FUN_71001097d0__71001097d0.c)  [cfg](../decompiled/FUN_71001097d0__71001097d0.mmd)
- **Clone hash:** `785f3e6f3a8e6025`

```c

undefined8 FUN_71001097d0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = (**(code **)(*DAT_71052acd90 + 0x58))();
  cVar3 = DAT_71052ac6d9;
  if (((uVar4 & 1) != 0) && (cVar3 = '\x01', DAT_71052ac6d9 != -1)) {
    cVar3 = DAT_71052ac6d9 + '\x01';
  }
  DAT_71052ac6d9 = cVar3;
  puVar1 = (undefined8 *)(DAT_71052adb38 + 0xb8);
  *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
  FUN_7100150b70((long *)*puVar1);
  lVar9 = DAT_71052ac580;
  if (*(char *)(param_1 + 0x68) != '\0') {
LAB_7100109840:
    uVar5 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100108de0;
    pcVar7 = "NexMatchRandomMatchmakeJob::StartNatSession";
    goto LAB_7100109940;
  }
  if (*(char *)(param_1 + 0x7d) == '\0') {
    if (((*(char *)(param_1 + 0x7e) != '\0') || (*(char *)(param_1 + 0x81) != '\0')) ||
       (*(char *)(param_1 + 0x80) != '\0')) {
      plVar6 = FUN_71000bb680();
      *(long *)(param_1 + 0x158) = *(long *)(lVar9 + 0x30) + *plVar6 * 30000;
      lVar9 = DAT_71052ac580;
      plVar6 = FUN_71000bb680();
      lVar9 = *(long *)(lVar9 + 0x30) + *plVar6 * 10000;
      *(undefined1 *)(param_1 + 0x184) = 1;
// ... (33 more lines)
```

## 6. `FUN_7100120eb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100120eb0`  (offset `0x120eb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100120eb0(void)`
- **Size / BBs / Incoming:** 324 bytes / 5 bb / 4 incoming refs
- **Match values:** LeaveMatchmakeSession
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::WaitLeaveMatchmakeSession
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100120eb0__7100120eb0.c)  [cfg](../decompiled/FUN_7100120eb0__7100120eb0.mmd)
- **Clone hash:** `8430bb048b772513`

```c

undefined8 FUN_7100120eb0(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 *puVar3;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)((long)param_1 + 0x6c),aiStack_38);
    param_1[6] = (long)FUN_71001429b0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
    return 0;
  }
  plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  (**(code **)(*plVar2 + 0x60))
            (aiStack_38,plVar2,param_1 + 0x22,
             *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180))
  ;
  if (aiStack_38[0] != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    puVar3 = (undefined4 *)param_1[0xb];
    FUN_71000bce50(aiStack_48,(int *)((long)param_1 + 0x6c));
    FUN_71000b41f0(puVar3,aiStack_48);
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  param_1[8] = (long)"LanMatchRandomMatchmakeJob::WaitLeaveMatchmakeSession";
  param_1[6] = (long)FUN_71001212c0;
// ... (4 more lines)
```

## 7. `FUN_710010a3f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010a3f0`  (offset `0x10a3f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010a3f0(void)`
- **Size / BBs / Incoming:** 512 bytes / 21 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::StartNatSession;NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;FUN_7100149240;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010a3f0__710010a3f0.c)  [cfg](../decompiled/FUN_710010a3f0__710010a3f0.mmd)
- **Clone hash:** `09d56cf660871dde`

```c

undefined8 FUN_710010a3f0(long param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  long *plVar4;
  int aiStack_50 [4];
  int aiStack_40 [4];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
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
    aiStack_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
    plVar4 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    if (*(char *)(param_1 + 0x185) == '\0') {
      uVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
      if ((uVar2 & 1) == 0) {
        return 5;
      }
      iVar1 = *(int *)(param_1 + 0x110);
      if (iVar1 == 2) {
        FUN_7100149240(DAT_71052adb38,2);
// ... (46 more lines)
```

## 8. `FUN_710017a5e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017a5e0`  (offset `0x17a5e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017a5e0(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 1 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 9. `FUN_71000f4630`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4630`  (offset `0xf4630`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4630(void)`
- **Size / BBs / Incoming:** 488 bytes / 19 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 10. `FUN_7100109350`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100109350`  (offset `0x109350`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100109350(void)`
- **Size / BBs / Incoming:** 64 bytes / 1 bb / 1 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 11. `FUN_7100109430`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100109430`  (offset `0x109430`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100109430(void)`
- **Size / BBs / Incoming:** 916 bytes / 26 bb / 1 incoming refs
- **Match values:** LeaveMatchmakeSession
- **Strings touched:** NexMatchRandomMatchmakeJob::LeaveMatchmakeSession;NexMatchRandomMatchmakeJob::CleanupForRetryJoinMesh
- **Callees:** FUN_71000bcf30;FUN_7100150b70;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100109430__7100109430.c)  [cfg](../decompiled/FUN_7100109430__7100109430.mmd)
- **Clone hash:** `2733c46c2080bdf6`

```c

undefined8 FUN_7100109430(long param_1,int *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  code *pcVar6;
  char cVar7;
  int aiStack_78 [4];
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  FUN_71000bcf30((int *)(param_1 + 0x6c),param_2);
  if (*(char *)(param_1 + 0x7f) == '\0') {
    if (*(char *)(param_1 + 0x68) == '\0') {
      bVar2 = *(char *)(param_1 + 0x82) + 1;
      *(byte *)(param_1 + 0x82) = bVar2;
      if (1 < bVar2) goto LAB_710010945c;
      if (*(char *)(param_1 + 0x80) == '\0') {
        if (*(char *)(param_1 + 0x7d) == '\0') {
          if (*(char *)(param_1 + 0x7e) == '\0') {
            if (*(char *)(param_1 + 0x81) == '\0') {
              if (*(char *)(param_1 + 0x7c) == '\0') {
                aiStack_48[0] = 0x643f;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
                aiStack_58[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
                if (*param_2 != aiStack_48[0]) {
                  aiStack_58[0] = 0x6445;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)((ulong)aiStack_58 | 4));
                  aiStack_68[0] = 0;
                  nn::err::ErrorResultVariant::operator=
// ... (125 more lines)
```

## 12. `FUN_7100120b00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100120b00`  (offset `0x120b00`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100120b00(void)`
- **Size / BBs / Incoming:** 624 bytes / 12 bb / 1 incoming refs
- **Match values:** LeaveMatchmakeSession
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::LeaveMatchmakeSession;LanMatchRandomMatchmakeJob::WaitForRetryRandomMatchmake;LanMatchRandomMatchmakeJob::RandomMatchmake
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_710011bb20;FUN_710011beb0;FUN_710011bec0;FUN_7100146ba0;FUN_7100150b70;FUN_7100193580;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100120b00__7100120b00.c)  [cfg](../decompiled/FUN_7100120b00__7100120b00.mmd)
- **Clone hash:** `49f2d19b7f2f65c7`

```c

undefined8 FUN_7100120b00(long param_1,int *param_2)

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
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar5 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar5 == 5) {
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_50);
    pcVar9 = FUN_71001429b0;
    uVar6 = 0;
    pcVar10 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    piVar3 = (int *)(param_1 + 0x6c);
    FUN_71000bcf30(piVar3,param_2);
    aiStack_50[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
    if (*(int *)(param_1 + 0x6c) != aiStack_50[0]) {
      bVar2 = *(char *)(param_1 + 0x82) + 1;
// ... (57 more lines)
```

## 13. `FUN_710010a020`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010a020`  (offset `0x10a020`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010a020(void)`
- **Size / BBs / Incoming:** 492 bytes / 24 bb / 3 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 14. `FUN_7100104b10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104b10`  (offset `0x104b10`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104b10(void)`
- **Size / BBs / Incoming:** 28 bytes / 1 bb / 1 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 15. `FUN_71001082f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001082f0`  (offset `0x1082f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001082f0(void)`
- **Size / BBs / Incoming:** 2020 bytes / 92 bb / 17 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 16. `FUN_71000f24c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f24c0`  (offset `0xf24c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f24c0(void)`
- **Size / BBs / Incoming:** 460 bytes / 15 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 17. `FUN_7100121000`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100121000`  (offset `0x121000`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100121000(void)`
- **Size / BBs / Incoming:** 460 bytes / 12 bb / 1 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 18. `FUN_710011d730`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d730`  (offset `0x11d730`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011d730(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 1 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 19. `FUN_7100104540`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104540`  (offset `0x104540`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104540(void)`
- **Size / BBs / Incoming:** 896 bytes / 36 bb / 3 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 20. `FUN_71001099a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001099a0`  (offset `0x1099a0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001099a0(long param_1)`
- **Size / BBs / Incoming:** 268 bytes / 12 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 21. `FUN_7100108090`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100108090`  (offset `0x108090`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100108090(void)`
- **Size / BBs / Incoming:** 604 bytes / 28 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 22. `FUN_71000f3050`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3050`  (offset `0xf3050`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3050(void)`
- **Size / BBs / Incoming:** 544 bytes / 24 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 23. `FUN_71000f3270`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3270`  (offset `0xf3270`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3270(void)`
- **Size / BBs / Incoming:** 772 bytes / 27 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 24. `FUN_71000f3970`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3970`  (offset `0xf3970`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3970(void)`
- **Size / BBs / Incoming:** 228 bytes / 7 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 25. `FUN_71000f4300`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4300`  (offset `0xf4300`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4300(void)`
- **Size / BBs / Incoming:** 468 bytes / 14 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 26. `FUN_71000f4520`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4520`  (offset `0xf4520`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71000f4520(long param_1)`
- **Size / BBs / Incoming:** 268 bytes / 12 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 27. `NexMatchRandomMatchmakeJob_WaitNotification_step`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100108ae0`  (offset `0x108ae0`)
- **Namespace:** `Global`
- **Signature:** `undefined NexMatchRandomMatchmakeJob_WaitNotification_step(void)`
- **Size / BBs / Incoming:** 764 bytes / 27 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::LeaveMatchmakeSession;NexMatchRandomMatchmakeJob::StartNatSession
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000ecfb0;FUN_7100143730;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/NexMatchRandomMatchmakeJob_WaitNotification_step__7100108ae0.c)  [cfg](../decompiled/NexMatchRandomMatchmakeJob_WaitNotification_step__7100108ae0.mmd)
- **Clone hash:** `7206443d194512e1`

```c

undefined8 NexMatchRandomMatchmakeJob_WaitNotification_step(long param_1)

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
    uVar5 = FUN_7100143730(param_1);
    if ((uVar5 & 1) == 0) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) <= *(ulong *)(param_1 + 0x168)) {
        plVar9 = *(long **)(DAT_71052adb38 + 8);
        plVar6 = (long *)FUN_71000ecfb0((long)plVar9,0);
        if (plVar6 == (long *)0x0) {
          uVar3 = 1;
// ... (78 more lines)
```

## 28. `FUN_7100109ab0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100109ab0`  (offset `0x109ab0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100109ab0(void)`
- **Size / BBs / Incoming:** 508 bytes / 19 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;FUN_7100149290;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100109ab0__7100109ab0.c)  [cfg](../decompiled/FUN_7100109ab0__7100109ab0.mmd)
- **Clone hash:** `fb720a87e59f1cfa`

```c

undefined8 FUN_7100109ab0(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  ErrorResultVariant *this;
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
    uVar3 = (**(code **)(**(long **)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                        + 0x68))();
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x110) == 3) {
      piVar1 = (int *)(param_1 + 0x114);
      FUN_71000bce50(aiStack_50,piVar1);
      FUN_71000bce50(aiStack_50,piVar1);
// ... (46 more lines)
```

## 29. `FUN_71000f2880`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f2880`  (offset `0xf2880`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f2880(void)`
- **Size / BBs / Incoming:** 1996 bytes / 90 bb / 16 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 30. `FUN_71000f4820`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4820`  (offset `0xf4820`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4820(void)`
- **Size / BBs / Incoming:** 480 bytes / 19 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 31. `FUN_7100108de0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100108de0`  (offset `0x108de0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100108de0(void)`
- **Size / BBs / Incoming:** 220 bytes / 7 bb / 6 incoming refs
- **Match values:** LeaveMatchmakeSession
- **Strings touched:** NexMatchRandomMatchmakeJob::LeaveMatchmakeSession;NexMatchRandomMatchmakeJob::WaitStartNatSession
- **Callees:** FUN_71000bcf30;FUN_71000ed7a0;FUN_7100143730;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100108de0__7100108de0.c)  [cfg](../decompiled/FUN_7100108de0__7100108de0.mmd)
- **Clone hash:** `7684b7dafb497c05`

```c

undefined8 FUN_7100108de0(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  uVar1 = FUN_7100143730(param_1);
  if ((uVar1 & 1) == 0) {
    FUN_71000ed7a0(aiStack_38);
    if (aiStack_38[0] == 0) {
      *(undefined4 *)(param_1 + 0x60) = 3;
      pcVar3 = FUN_7100108ec0;
      pcVar2 = "NexMatchRandomMatchmakeJob::WaitStartNatSession";
    }
    else {
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
      pcVar3 = FUN_71001082f0;
      pcVar2 = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
    }
    *(code **)(param_1 + 0x30) = pcVar3;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    aiStack_38[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
    *(code **)(param_1 + 0x30) = FUN_71001082f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  return 5;
}
// ... (1 more lines)
```

## 32. `FUN_7100109cb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100109cb0`  (offset `0x109cb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100109cb0(void)`
- **Size / BBs / Incoming:** 516 bytes / 21 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;FUN_7100149270;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100109cb0__7100109cb0.c)  [cfg](../decompiled/FUN_7100109cb0__7100109cb0.mmd)
- **Clone hash:** `59ddef629e96fe5f`

```c

undefined8 FUN_7100109cb0(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ErrorResultVariant *this;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar2 = DAT_71052adb38;
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
    plVar4 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    if (*(char *)(param_1 + 0x68) == '\0') {
      uVar5 = (**(code **)(*plVar4 + 0x68))();
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x78))();
    }
    if ((uVar5 & 1) == 0) {
      return 5;
    }
// ... (45 more lines)
```

## 33. `FUN_7100120d70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100120d70`  (offset `0x120d70`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100120d70(void)`
- **Size / BBs / Incoming:** 312 bytes / 9 bb / 3 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 34. `FUN_7100109980`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100109980`  (offset `0x109980`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100109980(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 1 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 35. `FUN_71000f4500`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4500`  (offset `0xf4500`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4500(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 1 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 36. `FUN_7100108ec0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100108ec0`  (offset `0x108ec0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100108ec0(void)`
- **Size / BBs / Incoming:** 1132 bytes / 32 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 37. `FUN_71001048c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001048c0`  (offset `0x1048c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001048c0(void)`
- **Size / BBs / Incoming:** 252 bytes / 10 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchLeaveSessionJob::LeaveMesh;nex::NexMatchLeaveSessionJob::SendMonitoringData;NexMatchLeaveSessionJob::LeaveMatchmakeSessionCompanions
- **Callees:** FUN_71000bce50;FUN_71000e0b40;FUN_7100146ba0
- **Files:** [decomp](../decompiled/FUN_71001048c0__71001048c0.c)  [cfg](../decompiled/FUN_71001048c0__71001048c0.mmd)
- **Clone hash:** `ffc00ae1552c0e79`

```c

undefined8 FUN_71001048c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  long lVar6;
  int aiStack_40 [4];
  
  lVar6 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    pcVar4 = FUN_71001411a0;
    uVar3 = 0;
    pcVar5 = "nex::NexMatchLeaveSessionJob::SendMonitoringData";
    break;
  case 6:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    pcVar4 = FUN_7100141230;
    uVar3 = 0;
    pcVar5 = "nex::NexMatchLeaveSessionJob::LeaveMesh";
    break;
  default:
    uVar2 = FUN_71000e0b40(lVar6);
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
    pcVar4 = FUN_7100104540;
    uVar3 = 5;
    pcVar5 = "NexMatchLeaveSessionJob::LeaveMatchmakeSessionCompanions";
  }
  *(code **)(param_1 + 0x30) = pcVar4;
// ... (5 more lines)
```

## 38. `FUN_710011cd30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011cd30`  (offset `0x11cd30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011cd30(void)`
- **Size / BBs / Incoming:** 248 bytes / 7 bb / 5 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 39. `FUN_71000f3a60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3a60`  (offset `0xf3a60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3a60(void)`
- **Size / BBs / Incoming:** 1088 bytes / 30 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 40. `FUN_710011ce30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011ce30`  (offset `0x11ce30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011ce30(void)`
- **Size / BBs / Incoming:** 276 bytes / 11 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

## 41. `FUN_71000f4b10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4b10`  (offset `0xf4b10`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4b10(void)`
- **Size / BBs / Incoming:** 484 bytes / 17 bb / 2 incoming refs
- **Match values:** LeaveMatchmakeSession
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

