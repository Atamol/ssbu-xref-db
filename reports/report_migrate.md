# migrate (funcs=11, hits=11)

Top 50 functions by hit count

## 1. `FUN_710011e570`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011e570`  (offset `0x11e570`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710011e570(long param_1)`
- **Size / BBs / Incoming:** 188 bytes / 6 bb / 2 incoming refs
- **Match values:** Migrate
- **Strings touched:** LanMatchJointSessionJob::SendPreparedForMigrateSession
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_7100140490;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011e570__710011e570.c)  [cfg](../decompiled/FUN_710011e570__710011e570.mmd)
- **Clone hash:** `d1c11a9621f6fd15`

```c

undefined8 FUN_710011e570(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int local_50 [4];
  int aiStack_40 [4];
  undefined4 local_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    FUN_7100140490(param_1);
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    if (puVar3 != (undefined4 *)0x0) {
      local_50[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      FUN_71000bce50(aiStack_40,local_50);
      FUN_71000b41f0(puVar3,aiStack_40);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_710011e630;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LanMatchJointSessionJob::SendPreparedForMigrateSession";
  }
  return uVar2;
}


```

## 2. `FUN_71000ffca0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000ffca0`  (offset `0xffca0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000ffca0(void)`
- **Size / BBs / Incoming:** 1272 bytes / 51 bb / 5 incoming refs
- **Match values:** Migrate
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

## 3. `FUN_71000fcff0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fcff0`  (offset `0xfcff0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fcff0(void)`
- **Size / BBs / Incoming:** 1092 bytes / 41 bb / 2 incoming refs
- **Match values:** Migrate
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitCompanionStationPrepared;NexMatchJointSessionJob::SendPreparedForMigrateSession
- **Callees:** FUN_71000b4260;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140910;FUN_7100146ba0;FUN_710014e550;FUN_7100150550;FUN_7100150680;FUN_7100150720;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fcff0__71000fcff0.c)  [cfg](../decompiled/FUN_71000fcff0__71000fcff0.mmd)
- **Clone hash:** `f21e2a327a636dca`

```c

undefined8 FUN_71000fcff0(long *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ErrorResultVariant *this;
  long *plVar8;
  long lVar9;
  uint uVar10;
  int aiStack_178 [4];
  int aiStack_168 [4];
  long alStack_158 [31];
  undefined4 auStack_58 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
    alStack_158[0]._0_4_ = 0xc406;
    break;
  case 6:
    alStack_158[0]._0_4_ = 0xa471;
    break;
  case 7:
    alStack_158[0]._0_4_ = 0xc420;
    break;
  case 8:
    alStack_158[0]._0_4_ = 0xc421;
    break;
  default:
    FUN_7100192e90((int *)alStack_158,DAT_71052adfc0);
    if (((int)alStack_158[0] == 0) &&
       (iVar4 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar4 != 4)) {
      if (*(char *)((long)param_1 + 0xfb) == '\0') {
        piVar5 = (int *)param_1[0xb];
// ... (111 more lines)
```

## 4. `FUN_71000fd9e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd9e0`  (offset `0xfd9e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd9e0(void)`
- **Size / BBs / Incoming:** 1008 bytes / 35 bb / 3 incoming refs
- **Match values:** Migrate
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

## 5. `FUN_7100104af0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104af0`  (offset `0x104af0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104af0(void)`
- **Size / BBs / Incoming:** 28 bytes / 1 bb / 1 incoming refs
- **Match values:** Migrate
- **Strings touched:** NexMatchLeaveSessionJob::MigrateMatchmakeSessionOwner
- **Files:** [decomp](../decompiled/FUN_7100104af0__7100104af0.c)  [cfg](../decompiled/FUN_7100104af0__7100104af0.mmd)
- **Clone hash:** `a1e44790659d2905`

```c

void FUN_7100104af0(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_71001042d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchLeaveSessionJob::MigrateMatchmakeSessionOwner";
  return;
}


```

## 6. `FUN_71000fcc60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fcc60`  (offset `0xfcc60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fcc60(void)`
- **Size / BBs / Incoming:** 912 bytes / 39 bb / 3 incoming refs
- **Match values:** Migrate
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::ResendNextSessionId;NexMatchJointSessionJob::SendLeaveMeshCompanion;NexMatchJointSessionJob::SendPreparedForMigrateSession
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140910;FUN_7100146ba0;FUN_7100150480;FUN_7100150550;FUN_7100150680;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fcc60__71000fcc60.c)  [cfg](../decompiled/FUN_71000fcc60__71000fcc60.mmd)
- **Clone hash:** `7eb595f619339050`

```c

undefined8 FUN_71000fcc60(long *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  ushort uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long alStack_168 [31];
  undefined4 auStack_70 [4];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    alStack_168[0]._0_4_ = 0xc406;
    break;
  case 6:
    alStack_168[0]._0_4_ = 0xa471;
    break;
  case 7:
    alStack_168[0]._0_4_ = 0xc420;
    break;
  case 8:
    alStack_168[0]._0_4_ = 0xc421;
    break;
  default:
    FUN_7100192e90((int *)alStack_168,DAT_71052adfc0);
    if (((int)alStack_168[0] != 0) ||
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar7 = DAT_71052adb38, iVar3 == 4)) {
      alStack_168[0]._0_4_ = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant
// ... (97 more lines)
```

## 7. `FUN_71000fe1b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fe1b0`  (offset `0xfe1b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fe1b0(void)`
- **Size / BBs / Incoming:** 504 bytes / 15 bb / 2 incoming refs
- **Match values:** Migrate
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::SendPreparedForMigrateSession
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_71001492f0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fe1b0__71000fe1b0.c)  [cfg](../decompiled/FUN_71000fe1b0__71000fe1b0.mmd)
- **Clone hash:** `612b58406e6204e7`

```c

undefined8 FUN_71000fe1b0(long param_1)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  long *plVar7;
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
    plVar7 = *(long **)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                       0x168);
    uVar3 = (**(code **)(*plVar7 + 0xb8))(plVar7);
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    FUN_71000bce50(aiStack_48,(int *)(param_1 + 100));
    if (aiStack_48[0] == 0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x120))(plVar7);
      uVar1 = (**(code **)(*plVar7 + 0x30))();
      FUN_71001492f0(DAT_71052adb38,uVar1 & 0xff);
// ... (39 more lines)
```

## 8. `FUN_71001413b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001413b0`  (offset `0x1413b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001413b0(void)`
- **Size / BBs / Incoming:** 296 bytes / 8 bb / 2 incoming refs
- **Match values:** Migrate
- **Strings touched:** nn::pia::session::LeaveSessionJob::SendMonitoringData;LeaveSessionJob::WaitHostMigrated
- **Callees:** FUN_71000bb680;FUN_7100146ba0
- **Files:** [decomp](../decompiled/FUN_71001413b0__71001413b0.c)  [cfg](../decompiled/FUN_71001413b0__71001413b0.mmd)
- **Clone hash:** `4ad059ee51996f03`

```c

undefined8 FUN_71001413b0(long *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  
  uVar2 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052ac580;
  if (uVar2 < 10 && (1 << (ulong)(uVar2 & 0x1f) & 0x3a0U) != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    pcVar5 = "nn::pia::session::LeaveSessionJob::SendMonitoringData";
  }
  else {
    if (2 < (int)param_1[0xc] - 2U) {
      return 5;
    }
    if ((char)param_1[0x13] != '\0') {
      (**(code **)(*param_1 + 0x38))(param_1);
      return 0;
    }
    iVar3 = (**(code **)(*param_1 + 0x70))(param_1);
    plVar4 = FUN_71000bb680();
    param_1[0x12] = *(long *)(lVar1 + 0x30) + *plVar4 * (long)iVar3;
    pcVar5 = "LeaveSessionJob::WaitHostMigrated";
    param_1[6] = (long)FUN_71001415a0;
    param_1[7] = 0;
  }
  param_1[8] = (long)pcVar5;
  return 0;
}


```

## 9. `FUN_71001031f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001031f0`  (offset `0x1031f0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001031f0(long param_1)`
- **Size / BBs / Incoming:** 616 bytes / 25 bb / 2 incoming refs
- **Match values:** Migrate
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitHostMigrated;NexMatchJointSessionJob::StartLeaveCurrentMatchmakeSession;NODE_PRE_REFRACT_BLEND
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_7100146ba0;FUN_7100191f90;FUN_7100191fc0;FUN_7100192260;FUN_7100192290;FUN_7100192ce0;FUN_7100192d10;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001031f0__71001031f0.c)  [cfg](../decompiled/FUN_71001031f0__71001031f0.mmd)
- **Clone hash:** `8eecf0a1091508ce`

```c

undefined8 FUN_71001031f0(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052adfc0;
  switch(iVar3) {
  case 5:
    local_48[0] = 0xc406;
    break;
  case 6:
    local_48[0] = 0xa471;
    break;
  case 7:
    local_48[0] = 0xc420;
    break;
  case 8:
    local_48[0] = 0xc421;
    break;
  default:
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_58[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
    iVar3 = *(int *)(param_1 + 0x94);
    if (iVar3 == 3) {
      bVar2 = FUN_7100191f90(lVar1);
      if (!bVar2) {
        return 5;
      }
// ... (56 more lines)
```

## 10. `FUN_71001042d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001042d0`  (offset `0x1042d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001042d0(void)`
- **Size / BBs / Incoming:** 344 bytes / 14 bb / 2 incoming refs
- **Match values:** Migrate
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

## 11. `FUN_71000fc2f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fc2f0`  (offset `0xfc2f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fc2f0(void)`
- **Size / BBs / Incoming:** 1248 bytes / 46 bb / 3 incoming refs
- **Match values:** Migrate
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitCompanionStationPrepared;NexMatchJointSessionJob::SendPreparedForMigrateSession
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140910;FUN_7100146ba0;FUN_710014e550;FUN_7100150410;FUN_7100150440;FUN_7100150680;FUN_71001506d0;FUN_7100150770;FUN_7100192e90;FUN_71001939c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=;...
- **Files:** [decomp](../decompiled/FUN_71000fc2f0__71000fc2f0.c)  [cfg](../decompiled/FUN_71000fc2f0__71000fc2f0.mmd)
- **Clone hash:** `643d886f25a4a7fe`

```c

undefined8 FUN_71000fc2f0(long *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 uVar9;
  ulong uVar10;
  short sVar11;
  ErrorResultVariant *this;
  long *plVar12;
  long lVar13;
  ushort uVar14;
  int aiStack_188 [4];
  int aiStack_178 [4];
  long alStack_168 [31];
  undefined4 auStack_70 [4];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
    alStack_168[0]._0_4_ = 0xc406;
    break;
  case 6:
    alStack_168[0]._0_4_ = 0xa471;
    break;
  case 7:
    alStack_168[0]._0_4_ = 0xc420;
    break;
  case 8:
    alStack_168[0]._0_4_ = 0xc421;
    break;
  default:
    FUN_7100192e90((int *)alStack_168,DAT_71052adfc0);
// ... (146 more lines)
```

