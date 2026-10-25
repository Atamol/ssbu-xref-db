# notification (funcs=8, hits=32)

Top 50 functions by hit count

## 1. `FUN_7100108090`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100108090`  (offset `0x108090`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100108090(void)`
- **Size / BBs / Incoming:** 604 bytes / 28 bb / 2 incoming refs
- **Match values:** Notification
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

## 2. `FUN_71000f3050`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3050`  (offset `0xf3050`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3050(void)`
- **Size / BBs / Incoming:** 544 bytes / 24 bb / 2 incoming refs
- **Match values:** Notification
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

## 3. `FUN_710022d600`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710022d600`  (offset `0x22d600`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710022d600(undefined8 * param_1, undefined8 param_2)`
- **Size / BBs / Incoming:** 276 bytes / 1 bb / 2 incoming refs
- **Match values:** Notification
- **Strings touched:** <unknown>;NotificationEventManager
- **Callers:** FUN_7100238270;FUN_71002425c0
- **Callees:** FUN_71001b47e0;FUN_71001b4910;FUN_71001d22e0;FUN_71001db340
- **Files:** [decomp](../decompiled/FUN_710022d600__710022d600.c)  [cfg](../decompiled/FUN_710022d600__710022d600.mmd)
- **Clone hash:** `ac71402af689ccdb`

```c

void FUN_710022d600(undefined8 *param_1,undefined8 param_2)

{
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 uStack_48;
  
  local_60[0] = 0;
  uStack_48 = 0x10;
  local_68 = &PTR_FUN_710509cc08;
  local_50 = local_60;
  FUN_71001b47e0((long)&local_68,"<unknown>",-1);
  FUN_71001d22e0(param_1,(long)&local_68);
  local_68 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_68);
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = &PTR_FUN_7104f5a630;
  param_1[0x12] = 0;
  param_1[0x11] = param_1 + 0x12;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_2;
  param_1[0x15] = param_1 + 0x15;
  param_1[0x16] = param_1 + 0x15;
  *(undefined4 *)(param_1 + 0xc) = 9;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  local_60[0] = 0;
  uStack_48 = 0x10;
  local_68 = &PTR_FUN_710509cc08;
  local_50 = local_60;
  FUN_71001b47e0((long)&local_68,"NotificationEventManager",-1);
// ... (6 more lines)
```

## 4. `FUN_71000fc110`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fc110`  (offset `0xfc110`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fc110(void)`
- **Size / BBs / Incoming:** 480 bytes / 15 bb / 2 incoming refs
- **Match values:** Notification
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::WaitNotification
- **Callees:** FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_71000d8f90;FUN_71000df790;FUN_7100146ba0;FUN_7100149290;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fc110__71000fc110.c)  [cfg](../decompiled/FUN_71000fc110__71000fc110.mmd)
- **Clone hash:** `e9b9683ce915b49b`

```c

undefined8 FUN_71000fc110(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  char *pcVar6;
  code *pcVar7;
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
    uVar3 = FUN_71000df790(*(long *)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                          );
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
    if (aiStack_40[0] == 0) {
      FUN_7100149290(DAT_71052adb38,*(int *)(param_1 + 0xf0));
      lVar1 = DAT_71052ac580;
      plVar5 = FUN_71000bb680();
// ... (35 more lines)
```

## 5. `FUN_710022cc40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710022cc40`  (offset `0x22cc40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710022cc40(undefined8 * param_1, undefined8 param_2)`
- **Size / BBs / Incoming:** 260 bytes / 1 bb / 1 incoming refs
- **Match values:** Notification
- **Strings touched:** <unknown>;dys_yoga03_l_03_set;NintendoNotificationEventManager
- **Callers:** FUN_7100238270
- **Callees:** FUN_71001b47e0;FUN_71001b4910;FUN_71001d22e0;FUN_71001db340
- **Files:** [decomp](../decompiled/FUN_710022cc40__710022cc40.c)  [cfg](../decompiled/FUN_710022cc40__710022cc40.mmd)
- **Clone hash:** `4f1407daa6270a49`

```c

void FUN_710022cc40(undefined8 *param_1,undefined8 param_2)

{
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 uStack_48;
  
  local_60[0] = 0;
  uStack_48 = 0x10;
  local_68 = &PTR_FUN_710509cc08;
  local_50 = local_60;
  FUN_71001b47e0((long)&local_68,"<unknown>",-1);
  FUN_71001d22e0(param_1,(long)&local_68);
  local_68 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_68);
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = &DAT_7104f5a558;
  param_1[0x12] = 0;
  param_1[0x11] = param_1 + 0x12;
  *(undefined4 *)(param_1 + 0xc) = 9;
  param_1[0x13] = 0;
  param_1[0x14] = param_2;
  local_60[0] = 0;
  uStack_48 = 0x10;
  local_68 = &PTR_FUN_710509cc08;
  local_50 = local_60;
  FUN_71001b47e0((long)&local_68,"NintendoNotificationEventManager",-1);
  FUN_71001db340((long)param_1,(long)&local_68);
  local_68 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_68);
  return;
}
// ... (1 more lines)
```

## 6. `FUN_71001054b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001054b0`  (offset `0x1054b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001054b0(void)`
- **Size / BBs / Incoming:** 424 bytes / 16 bb / 2 incoming refs
- **Match values:** Notification
- **Strings touched:** NexMatchCreateSessionJob::UnregisterGathering;nex::NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::WaitNotification
- **Callees:** FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_710013dac0;FUN_7100146ba0;FUN_7100149240;FUN_7100149270;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001054b0__71001054b0.c)  [cfg](../decompiled/FUN_71001054b0__71001054b0.mmd)
- **Clone hash:** `97bdff533222fedd`

```c

undefined8 FUN_71001054b0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  int aiStack_40 [4];
  int aiStack_28 [2];
  
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
    aiStack_28[0] = 0;
    uVar3 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x48))(*(long **)(param_1 + 0xa0),aiStack_28)
    ;
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x60) != 2) {
      if (*(int *)(param_1 + 0x60) != 3) {
        return 5;
      }
      FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
      FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_40);
// ... (33 more lines)
```

## 7. `FUN_710022ce20`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710022ce20`  (offset `0x22ce20`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710022ce20(void)`
- **Size / BBs / Incoming:** 276 bytes / 3 bb / 1 incoming refs
- **Match values:** Notification
- **Strings touched:** <unknown>;dys_yoga03_l_03_set;NintendoNotificationEventManager
- **Callees:** FUN_71001af850;FUN_71001b47e0;FUN_71001b4910;FUN_71001d22e0;FUN_71001db340
- **Files:** [decomp](../decompiled/FUN_710022ce20__710022ce20.c)  [cfg](../decompiled/FUN_710022ce20__710022ce20.mmd)
- **Clone hash:** `425173a57eae4abf`

```c

undefined8 * FUN_710022ce20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_68;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = FUN_71001af850(0xa8);
  if (puVar1 != (undefined8 *)0x0) {
    auStack_60[0] = 0;
    uStack_48 = 0x10;
    ppuStack_68 = &PTR_FUN_710509cc08;
    puStack_50 = auStack_60;
    FUN_71001b47e0((long)&ppuStack_68,"<unknown>",-1);
    FUN_71001d22e0(puVar1,(long)&ppuStack_68);
    ppuStack_68 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_68);
    *(undefined2 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xd] = 0;
    *(undefined1 *)(puVar1 + 0xe) = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *puVar1 = &DAT_7104f5a558;
    puVar1[0x12] = 0;
    puVar1[0x11] = puVar1 + 0x12;
    *(undefined4 *)(puVar1 + 0xc) = 9;
    puVar1[0x13] = 0;
    puVar1[0x14] = param_1;
    auStack_60[0] = 0;
    uStack_48 = 0x10;
    ppuStack_68 = &PTR_FUN_710509cc08;
    puStack_50 = auStack_60;
    FUN_71001b47e0((long)&ppuStack_68,"NintendoNotificationEventManager",-1);
    FUN_71001db340((long)puVar1,(long)&ppuStack_68);
    ppuStack_68 = &PTR_FUN_710509cc08;
// ... (5 more lines)
```

## 8. `FUN_710022d8d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710022d8d0`  (offset `0x22d8d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710022d8d0(void)`
- **Size / BBs / Incoming:** 292 bytes / 3 bb / 2 incoming refs
- **Match values:** Notification
- **Strings touched:** <unknown>;NotificationEventManager
- **Callees:** FUN_71001af850;FUN_71001b47e0;FUN_71001b4910;FUN_71001d22e0;FUN_71001db340
- **Files:** [decomp](../decompiled/FUN_710022d8d0__710022d8d0.c)  [cfg](../decompiled/FUN_710022d8d0__710022d8d0.mmd)
- **Clone hash:** `2bfa3b44792868d0`

```c

undefined8 * FUN_710022d8d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_68;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = FUN_71001af850(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    auStack_60[0] = 0;
    uStack_48 = 0x10;
    ppuStack_68 = &PTR_FUN_710509cc08;
    puStack_50 = auStack_60;
    FUN_71001b47e0((long)&ppuStack_68,"<unknown>",-1);
    FUN_71001d22e0(puVar1,(long)&ppuStack_68);
    ppuStack_68 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_68);
    *(undefined2 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xd] = 0;
    *(undefined1 *)(puVar1 + 0xe) = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *puVar1 = &PTR_FUN_7104f5a630;
    puVar1[0x12] = 0;
    puVar1[0x11] = puVar1 + 0x12;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = param_1;
    puVar1[0x15] = puVar1 + 0x15;
    puVar1[0x16] = puVar1 + 0x15;
    *(undefined4 *)(puVar1 + 0xc) = 9;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    auStack_60[0] = 0;
    uStack_48 = 0x10;
// ... (10 more lines)
```

