# joinmatchmakesession (funcs=10, hits=12)

Top 50 functions by hit count

## 1. `FUN_710011c730`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011c730`  (offset `0x11c730`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011c730(void)`
- **Size / BBs / Incoming:** 416 bytes / 14 bb / 1 incoming refs
- **Match values:** JoinMatchmakeSession
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

## 2. `FUN_710011dfc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011dfc0`  (offset `0x11dfc0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011dfc0(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 2 incoming refs
- **Match values:** JoinMatchmakeSession
- **Strings touched:** LanMatchJointSessionJob::WaitJoinMatchmakeSession
- **Files:** [decomp](../decompiled/FUN_710011dfc0__710011dfc0.c)  [cfg](../decompiled/FUN_710011dfc0__710011dfc0.mmd)
- **Clone hash:** `47abae08281683fa`

```c

undefined8 FUN_710011dfc0(long param_1)

{
  *(char **)(param_1 + 0x40) = "LanMatchJointSessionJob::WaitJoinMatchmakeSession";
  *(code **)(param_1 + 0x30) = FUN_710011e3b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 3. `FUN_710011ddb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011ddb0`  (offset `0x11ddb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011ddb0(void)`
- **Size / BBs / Incoming:** 232 bytes / 12 bb / 2 incoming refs
- **Match values:** JoinMatchmakeSession
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

## 4. `FUN_710011d3f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d3f0`  (offset `0x11d3f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011d3f0(void)`
- **Size / BBs / Incoming:** 428 bytes / 8 bb / 3 incoming refs
- **Match values:** JoinMatchmakeSession
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

## 5. `FUN_7100179df0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100179df0`  (offset `0x179df0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100179df0(void)`
- **Size / BBs / Incoming:** 460 bytes / 11 bb / 1 incoming refs
- **Match values:** JoinMatchmakeSession
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

## 6. `FUN_710011d1c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d1c0`  (offset `0x11d1c0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710011d1c0(long param_1, int * param_2)`
- **Size / BBs / Incoming:** 548 bytes / 10 bb / 1 incoming refs
- **Match values:** JoinMatchmakeSession
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

## 7. `FUN_710011d5a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d5a0`  (offset `0x11d5a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011d5a0(void)`
- **Size / BBs / Incoming:** 392 bytes / 10 bb / 1 incoming refs
- **Match values:** JoinMatchmakeSession
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

## 8. `FUN_71000fa1c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fa1c0`  (offset `0xfa1c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fa1c0(void)`
- **Size / BBs / Incoming:** 1084 bytes / 43 bb / 3 incoming refs
- **Match values:** JoinMatchmakeSession
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

## 9. `FUN_71000fad70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fad70`  (offset `0xfad70`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fad70(void)`
- **Size / BBs / Incoming:** 912 bytes / 32 bb / 2 incoming refs
- **Match values:** JoinMatchmakeSession
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitJoinMatchmakeSession
- **Callees:** FUN_71000b4260;FUN_71000bcf30;FUN_71000d8f90;FUN_71000df5d0;FUN_7100140910;FUN_7100146ba0;FUN_7100150680;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fad70__71000fad70.c)  [cfg](../decompiled/FUN_71000fad70__71000fad70.mmd)
- **Clone hash:** `45a9a17853503f22`

```c

undefined8 FUN_71000fad70(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  int aiStack_178 [4];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
// ... (156 more lines)
```

## 10. `FUN_71000f22b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f22b0`  (offset `0xf22b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f22b0(void)`
- **Size / BBs / Incoming:** 524 bytes / 20 bb / 3 incoming refs
- **Match values:** JoinMatchmakeSession
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

