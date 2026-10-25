# matchmaking (funcs=8, hits=14)

Top 50 functions by hit count

## 1. `FUN_71001241f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001241f0`  (offset `0x1241f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001241f0(void)`
- **Size / BBs / Incoming:** 372 bytes / 11 bb / 2 incoming refs
- **Match values:** MatchMaking
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanWaitMatchMakingClientHost;LanProcessHostMigrationJob::LanCheckMatchMakingClientHost
- **Callees:** FUN_71000b40e0;FUN_710011b2f0;FUN_710011be40;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001241f0__71001241f0.c)  [cfg](../decompiled/FUN_71001241f0__71001241f0.mmd)
- **Clone hash:** `8bd2c10579161019`

```c

undefined8 FUN_71001241f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 4;
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    lVar4 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    FUN_71000b40e0((int *)(param_1 + 0x118));
    iVar1 = FUN_710011be40(lVar4);
    FUN_710011b2f0(aiStack_40,lVar4,(int *)(param_1 + 0x118),iVar1);
    if (aiStack_40[0] == 0) {
      if (*(char *)(param_1 + 0xc4) == '\0') {
        *(code **)(param_1 + 0x30) = FUN_71001246f0;
        pcVar3 = "LanProcessHostMigrationJob::LanCheckMatchMakingClientHost";
      }
      else {
        *(code **)(param_1 + 0x30) = FUN_7100124370;
        pcVar3 = "LanProcessHostMigrationJob::LanWaitMatchMakingClientHost";
      }
    }
// ... (17 more lines)
```

## 2. `FUN_7100110c30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100110c30`  (offset `0x110c30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100110c30(void)`
- **Size / BBs / Incoming:** 356 bytes / 13 bb / 2 incoming refs
- **Match values:** MatchMaking
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::NexWaitMatchMakingClientHost;NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti
- **Callees:** FUN_7100146e00;FUN_7100192e90;FUN_71001d0a10;FUN_71001d1590;FUN_710024bec0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100110c30__7100110c30.c)  [cfg](../decompiled/FUN_7100110c30__7100110c30.mmd)
- **Clone hash:** `fae1d930231cf7d2`

```c

undefined8 FUN_7100110c30(long param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  char *pcVar6;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 4;
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    uVar4 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar6 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (((*(char *)(param_1 + 0x1f8) == '\0') && (DAT_71052adb38 != 0)) &&
          (uVar2 = FUN_7100146e00(DAT_71052adb38), uVar2 < 3)) {
    uVar4 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100110da0;
    pcVar6 = "NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti";
  }
  else {
    iVar1 = *(int *)(DAT_71052acd90 + 0x58);
    if (iVar1 != 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (*(int *)((long)plVar5 + 0x14) == 1) {
        FUN_71001d0a10(plVar5);
        plVar5 = *(long **)(param_1 + 0x118);
      }
// ... (20 more lines)
```

## 3. `FUN_7100124fd0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100124fd0`  (offset `0x124fd0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100124fd0(long param_1)`
- **Size / BBs / Incoming:** 92 bytes / 1 bb / 1 incoming refs
- **Match values:** MatchMaking
- **Strings touched:** chara/chara_4/chara_4_;LanProcessHostMigrationJob::LanGetMatchMakingClientHostLastConfirmation
- **Callees:** FUN_71000bb680
- **Files:** [decomp](../decompiled/FUN_7100124fd0__7100124fd0.c)  [cfg](../decompiled/FUN_7100124fd0__7100124fd0.mmd)
- **Clone hash:** `c1bd75b6eca7e88c`

```c

undefined8 FUN_7100124fd0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = DAT_71052ac580;
  plVar1 = FUN_71000bb680();
  lVar2 = *(long *)(lVar2 + 0x30);
  lVar3 = *plVar1;
  *(code **)(param_1 + 0x30) = FUN_7100125030;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(long *)(param_1 + 0x1b0) = lVar2 + lVar3 * 2000;
  *(char **)(param_1 + 0x40) =
       "LanProcessHostMigrationJob::LanGetMatchMakingClientHostLastConfirmation";
  return 1;
}


```

## 4. `FUN_7100125030`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100125030`  (offset `0x125030`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100125030(void)`
- **Size / BBs / Incoming:** 312 bytes / 6 bb / 2 incoming refs
- **Match values:** MatchMaking
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

## 5. `FUN_7100124030`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100124030`  (offset `0x124030`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100124030(void)`
- **Size / BBs / Incoming:** 444 bytes / 25 bb / 2 incoming refs
- **Match values:** MatchMaking
- **Strings touched:** LanProcessHostMigrationJob::WaitNewHostGreeting;LanProcessHostMigrationJob::LanGetMatchMakingClientHost;LanProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100124030__7100124030.c)  [cfg](../decompiled/FUN_7100124030__7100124030.mmd)
- **Clone hash:** `504c54f9c288daa6`

```c

undefined8 FUN_7100124030(long param_1)

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
  if ((aiStack_38[0] == aiStack_48[0]) ||
     (*(ulong *)(param_1 + 0x58) <= *(ulong *)(DAT_71052ac580 + 0x30))) {
    pcVar1 = FUN_71001a1d80;
    pcVar2 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (((((((*(char *)(param_1 + 0xb3) == -3) && (*(char *)(param_1 + 0xf0) != '\x01')) &&
              (*(char *)(param_1 + 0xf1) != '\x01')) &&
             ((*(char *)(param_1 + 0xf2) != '\x01' && (*(char *)(param_1 + 0xf3) != '\x01')))) &&
            ((*(char *)(param_1 + 0xf4) != '\x01' &&
             ((*(char *)(param_1 + 0xf5) != '\x01' && (*(char *)(param_1 + 0xf6) != '\x01')))))) &&
           (*(char *)(param_1 + 0xf7) != '\x01')) &&
          ((((*(char *)(param_1 + 0xf8) != '\x01' && (*(char *)(param_1 + 0xf9) != '\x01')) &&
            (*(char *)(param_1 + 0xfa) != '\x01')) &&
           (((*(char *)(param_1 + 0xfb) != '\x01' && (*(char *)(param_1 + 0xfc) != '\x01')) &&
            ((*(char *)(param_1 + 0xfd) != '\x01' &&
             ((*(char *)(param_1 + 0xfe) != '\x01' && (*(char *)(param_1 + 0xff) != '\x01'))))))))))
  {
    if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x148)) {
      return 5;
    }
    pcVar1 = FUN_71001241f0;
    pcVar2 = "LanProcessHostMigrationJob::LanGetMatchMakingClientHost";
  }
  else {
// ... (9 more lines)
```

## 6. `FUN_71001122e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001122e0`  (offset `0x1122e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001122e0(void)`
- **Size / BBs / Incoming:** 52 bytes / 4 bb / 1 incoming refs
- **Match values:** MatchMaking
- **Strings touched:** chara/chara_4/chara_4_;NexProcessHostMigrationJob::NexCheckMatchMakingClientHostIsUpdated
- **Files:** [decomp](../decompiled/FUN_71001122e0__71001122e0.c)  [cfg](../decompiled/FUN_71001122e0__71001122e0.mmd)
- **Clone hash:** `ca694b7320e1484c`

```c

void FUN_71001122e0(long param_1,long param_2)

{
  if ((*(long *)(param_1 + 0xb8) != param_2) && (*(long *)(param_1 + 0x88) != param_2)) {
    *(code **)(param_1 + 0x30) = FUN_7100112320;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) =
         "NexProcessHostMigrationJob::NexCheckMatchMakingClientHostIsUpdated";
  }
  return;
}


```

## 7. `FUN_7100112320`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100112320`  (offset `0x112320`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100112320(void)`
- **Size / BBs / Incoming:** 280 bytes / 9 bb / 2 incoming refs
- **Match values:** MatchMaking
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::NexWaitMatchMakingClientHostIsUpdated;NexProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_7100192e90;FUN_71001d0a10;FUN_71001d1590;FUN_710024bec0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100112320__7100112320.c)  [cfg](../decompiled/FUN_7100112320__7100112320.mmd)
- **Clone hash:** `dff7e089b931d040`

```c

undefined8 FUN_7100112320(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  char *pcVar5;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    uVar3 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar5 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    iVar1 = *(int *)(DAT_71052acd90 + 0x58);
    if (iVar1 != 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (*(int *)((long)plVar4 + 0x14) == 1) {
        FUN_71001d0a10(plVar4);
        plVar4 = *(long **)(param_1 + 0x118);
      }
      FUN_71001d1590(plVar4);
      uVar2 = FUN_710024bec0(*(long *)(DAT_71052acd90 + 0x68),*(long **)(param_1 + 0x118),iVar1,
                             *(ulong *)(param_1 + 0x170));
      if ((uVar2 & 1) != 0) {
        *(code **)(param_1 + 0x30) = FUN_7100112440;
        pcVar5 = "NexProcessHostMigrationJob::NexWaitMatchMakingClientHostIsUpdated";
        uVar3 = 5;
        goto LAB_7100112420;
// ... (12 more lines)
```

## 8. `FUN_71001109a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001109a0`  (offset `0x1109a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001109a0(void)`
- **Size / BBs / Incoming:** 652 bytes / 42 bb / 2 incoming refs
- **Match values:** MatchMaking
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

