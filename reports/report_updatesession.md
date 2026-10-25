# updatesession (funcs=21, hits=40)

Top 50 functions by hit count

## 1. `FUN_710010d570`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010d570`  (offset `0x10d570`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010d570(void)`
- **Size / BBs / Incoming:** 836 bytes / 26 bb / 1 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** NODE_PRE_REFRACT_BLEND;NexMatchUpdateSessionSettingJob::ModifyAttribute;NexMatchUpdateSessionSettingJob::UpdateSessionSetting;NexMatchUpdateSessionSettingJob::UpdateAttributes;NexMatchUpdateSessionSettingJob::UpdateApplicationData
- **Callees:** FUN_71000bce50;FUN_71000e4ac0;FUN_71001159e0;FUN_71001159f0;FUN_7100116180;FUN_71001161c0;FUN_7100116250;FUN_71001162a0;FUN_7100146ba0;<EXTERNAL>::memset;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010d570__710010d570.c)  [cfg](../decompiled/FUN_710010d570__710010d570.mmd)
- **Clone hash:** `f30cc0db0a568340`

```c

void FUN_710010d570(int *param_1,long param_2,int param_3,long param_4,long *param_5,byte param_6)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  code *pcVar8;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != (long *)0x0)) {
    *(long *)(param_2 + 0x98) = param_4;
    *(byte *)(param_2 + 0x2c4) = param_6 & 1;
    uVar6 = FUN_71001162a0(param_5);
    if (((uVar6 & 1) != 0) || (*(char *)(param_2 + 0x2c4) != '\0')) {
      uVar3 = FUN_7100116180(param_5);
      if (((uVar3 & 1) == 0) || (*(char *)(param_2 + 0x2c4) != '\0')) {
        uVar3 = FUN_7100116250(param_5);
        if (((uVar3 & 1) == 0) || (*(char *)(param_2 + 0x2c4) != '\0')) {
          bVar1 = FUN_71001161c0(param_5);
          if (bVar1) {
            if (*(char *)(param_2 + 0x2c4) == '\0') {
              uVar4 = FUN_71001159f0((long)param_5,0);
              *(undefined4 *)(param_2 + 0xa0) = uVar4;
              bVar2 = FUN_71001159e0((long)param_5,0);
              *(byte *)(param_2 + 0xb8) = bVar2 & 1;
              uVar4 = FUN_71001159f0((long)param_5,1);
              *(undefined4 *)(param_2 + 0xa4) = uVar4;
              bVar2 = FUN_71001159e0((long)param_5,1);
              *(byte *)(param_2 + 0xb9) = bVar2 & 1;
              uVar4 = FUN_71001159f0((long)param_5,2);
              *(undefined4 *)(param_2 + 0xa8) = uVar4;
              bVar2 = FUN_71001159e0((long)param_5,2);
              *(byte *)(param_2 + 0xba) = bVar2 & 1;
              uVar4 = FUN_71001159f0((long)param_5,3);
// ... (82 more lines)
```

## 2. `FUN_710010df90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010df90`  (offset `0x10df90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010df90(void)`
- **Size / BBs / Incoming:** 520 bytes / 15 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** NexMatchUpdateSessionSettingJob::WaitUpdateSessionSetting
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000e63c0;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010df90__710010df90.c)  [cfg](../decompiled/FUN_710010df90__710010df90.mmd)
- **Clone hash:** `43b3170d803b9c9a`

```c

undefined8 FUN_710010df90(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar2 = aiStack_a0;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar2 = aiStack_40;
    break;
  case 6:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar2 = aiStack_60;
    break;
  case 7:
// ... (49 more lines)
```

## 3. `FUN_7100122370`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100122370`  (offset `0x122370`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100122370(void)`
- **Size / BBs / Incoming:** 328 bytes / 11 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** LanMatchUpdateSessionSettingJob::WaitUpdateSessionSetting
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_710011aec0;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100122370__7100122370.c)  [cfg](../decompiled/FUN_7100122370__7100122370.mmd)
- **Clone hash:** `74e4091089078ea4`

```c

undefined8 FUN_7100122370(long *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar2 = aiStack_70;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  puVar3 = (undefined4 *)param_1[0xb];
  if (iVar1 == 5) {
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar2 = aiStack_40;
  }
  else {
    if ((puVar3 != (undefined4 *)0x0) && (*(char *)(puVar3 + 10) != '\0')) {
      aiStack_50[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_60,aiStack_50);
      FUN_71000b41f0(puVar3,aiStack_60);
      param_1[0xb] = 0;
      (**(code **)(*param_1 + 0x30))(param_1);
      return 1;
    }
    FUN_710011aec0(aiStack_50,param_1[0x13],(int *)(param_1 + 0xc));
// ... (14 more lines)
```

## 4. `FUN_71001222a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001222a0`  (offset `0x1222a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001222a0(void)`
- **Size / BBs / Incoming:** 196 bytes / 4 bb / 1 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** LanMatchUpdateSessionSettingJob::UpdateSessionSetting
- **Callees:** FUN_71000bce50;FUN_710011b8b0;FUN_710011be40;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001222a0__71001222a0.c)  [cfg](../decompiled/FUN_71001222a0__71001222a0.mmd)
- **Clone hash:** `4b3cb0884836bd54`

```c

void FUN_71001222a0(int *param_1,long param_2,int param_3,long param_4,long *param_5,uint param_6)

{
  int iVar1;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  *(long *)(param_2 + 0x98) = param_4;
  iVar1 = FUN_710011be40(param_4);
  if (iVar1 == param_3) {
    *(char *)(param_2 + 0xa0) = (char)(param_6 & 1);
    FUN_710011b8b0(*(long *)(param_2 + 0x98),param_5,(ulong)(param_6 & 1));
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LanMatchUpdateSessionSettingJob::UpdateSessionSetting";
    *(code **)(param_2 + 0x30) = FUN_7100122370;
    aiStack_50[0] = 0;
  }
  else {
    aiStack_50[0] = 0x10c07;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  FUN_71000bce50(param_1,aiStack_50);
  return;
}


```

## 5. `FUN_710010dce0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010dce0`  (offset `0x10dce0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010dce0(void)`
- **Size / BBs / Incoming:** 680 bytes / 28 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** dys_yoga03_l_03_set;NexMatchUpdateSessionSettingJob::WaitModifyAttribute;UpdateSessionSettingJob::CompleteProcess
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000e1750;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010dce0__710010dce0.c)  [cfg](../decompiled/FUN_710010dce0__710010dce0.mmd)
- **Clone hash:** `b29be24b13c85f9c`

```c

undefined8 FUN_710010dce0(long param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar2 = aiStack_a0;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar5 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar2 = aiStack_40;
    break;
  case 6:
    puVar5 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar2 = aiStack_60;
// ... (91 more lines)
```

## 6. `FUN_710017bbd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017bbd0`  (offset `0x17bbd0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017bbd0(void)`
- **Size / BBs / Incoming:** 612 bytes / 18 bb / 1 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** LocalMatchUpdateSessionSettingJob::CompleteFailure;LocalMatchUpdateSessionSettingJob::SignalProcess
- **Callees:** FUN_71000b40e0;FUN_71000bce50;FUN_71000bcf30;FUN_71001792f0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710017bbd0__710017bbd0.c)  [cfg](../decompiled/FUN_710017bbd0__710017bbd0.mmd)
- **Clone hash:** `710df4e9a4ebfd14`

```c

void FUN_710017bbd0(int *param_1,long param_2,undefined4 param_3,long *param_4,long *param_5,
                   uint param_6)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  int *piVar4;
  code *pcVar5;
  char *pcVar6;
  long lVar7;
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  undefined4 auStack_48 [2];
  
  if ((param_5 == (long *)0x0) || (param_4 == (long *)0x0)) {
    aiStack_60[0] = 0x10c07;
LAB_710017bc38:
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4));
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)aiStack_70);
  }
  else {
    *(long **)(param_2 + 0x98) = param_4;
    uVar2 = (**(code **)(*param_4 + 0x138))(param_4);
    if ((uVar2 & 1) != 0) {
      aiStack_60[0] = 0x10c08;
      goto LAB_710017bc38;
    }
    *(undefined4 *)(param_2 + 0xa0) = 0;
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4));
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)aiStack_70);
    uVar2 = (**(code **)(*param_5 + 0x38))(param_5,1);
    if ((uVar2 & 1) == 0) {
// ... (56 more lines)
```

## 7. `FUN_710017bea0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017bea0`  (offset `0x17bea0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017bea0(void)`
- **Size / BBs / Incoming:** 612 bytes / 28 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** UpdateSessionSettingJob::CompleteProcess
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710017bea0__710017bea0.c)  [cfg](../decompiled/FUN_710017bea0__710017bea0.mmd)
- **Clone hash:** `c6bb99d03f7bc946`

```c

undefined8 FUN_710017bea0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar3 = aiStack_90;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 8) {
    puVar6 = (undefined4 *)param_1[0xb];
    aiStack_50[0] = 0xc421;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_70,aiStack_50);
    piVar3 = aiStack_70;
LAB_710017bf9c:
    FUN_71000b41f0(puVar6,piVar3);
    param_1[0xb] = 0;
    return 1;
  }
  if (iVar1 == 7) {
    puVar6 = (undefined4 *)param_1[0xb];
    aiStack_50[0] = 0xc420;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
// ... (70 more lines)
```

## 8. `FUN_710011e550`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011e550`  (offset `0x11e550`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011e550(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** LanMatchJointSessionJob::WaitUpdateSessionKey
- **Files:** [decomp](../decompiled/FUN_710011e550__710011e550.c)  [cfg](../decompiled/FUN_710011e550__710011e550.mmd)
- **Clone hash:** `8bd482154f6b7dfb`

```c

undefined8 FUN_710011e550(long param_1)

{
  *(char **)(param_1 + 0x40) = "LanMatchJointSessionJob::WaitUpdateSessionKey";
  *(code **)(param_1 + 0x30) = FUN_710011e570;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}


```

## 9. `FUN_7100125170`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100125170`  (offset `0x125170`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100125170(void)`
- **Size / BBs / Incoming:** 552 bytes / 18 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanWaitSendUpdateSessionMessage
- **Callees:** FUN_71000b40e0;FUN_7100116f40;FUN_7100117050;FUN_71001170c0;FUN_710011b3c0;FUN_710011b450;FUN_7100128230;FUN_7100161fb0;FUN_7100192e90;FUN_7100193560;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100125170__7100125170.c)  [cfg](../decompiled/FUN_7100125170__7100125170.mmd)
- **Clone hash:** `8779b550a8917592`

```c

undefined8 FUN_7100125170(long param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  char *pcVar10;
  long *plVar11;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar11 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar3 = FUN_710011b3c0((long)plVar11);
  if (((uVar3 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    if ((aiStack_40[0] != aiStack_50[0]) &&
       (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      return 5;
    }
    FUN_710011b450(aiStack_40,(long)plVar11);
    uVar4 = 5;
  }
  else {
    lVar5 = (**(code **)(*plVar11 + 0xf0))(plVar11);
    if (lVar5 == -1) {
LAB_7100125280:
      FUN_7100116f40();
// ... (38 more lines)
```

## 10. `FUN_710010d8c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010d8c0`  (offset `0x10d8c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010d8c0(void)`
- **Size / BBs / Incoming:** 528 bytes / 15 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** NexMatchUpdateSessionSettingJob::WaitUpdateApplicationData
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000e29e0;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010d8c0__710010d8c0.c)  [cfg](../decompiled/FUN_710010d8c0__710010d8c0.mmd)
- **Clone hash:** `faf46b2c971bb21f`

```c

undefined8 FUN_710010d8c0(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar2 = aiStack_a0;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar2 = aiStack_40;
    break;
  case 6:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar2 = aiStack_60;
    break;
  case 7:
// ... (49 more lines)
```

## 11. `FUN_7100111a50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100111a50`  (offset `0x111a50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100111a50(void)`
- **Size / BBs / Incoming:** 80 bytes / 1 bb / 1 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** NexProcessHostMigrationJob::UpdateSessionOpenStatus
- **Callees:** FUN_71000bb680
- **Files:** [decomp](../decompiled/FUN_7100111a50__7100111a50.c)  [cfg](../decompiled/FUN_7100111a50__7100111a50.mmd)
- **Clone hash:** `76d8025e1dece9ea`

```c

undefined8 FUN_7100111a50(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = FUN_71000bb680();
  lVar2 = *plVar1;
  *(code **)(param_1 + 0x30) = FUN_7100111aa0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + lVar2 * 2000;
  *(char **)(param_1 + 0x40) = "NexProcessHostMigrationJob::UpdateSessionOpenStatus";
  return 1;
}


```

## 12. `FUN_710010e8a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010e8a0`  (offset `0x10e8a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010e8a0(void)`
- **Size / BBs / Incoming:** 532 bytes / 18 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** UpdateSessionSettingJob::CompleteProcess
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000e2cb0;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010e8a0__710010e8a0.c)  [cfg](../decompiled/FUN_710010e8a0__710010e8a0.mmd)
- **Clone hash:** `92ce42858ba4cf30`

```c

undefined8 FUN_710010e8a0(long param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar3 = aiStack_a0;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar3 = aiStack_40;
    break;
  case 6:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar3 = aiStack_60;
    break;
// ... (52 more lines)
```

## 13. `FUN_7100111aa0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100111aa0`  (offset `0x111aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100111aa0(long param_1)`
- **Size / BBs / Incoming:** 340 bytes / 11 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitUpdateSessionOpenStatus;NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::HostMigrationSuccess
- **Callees:** FUN_7100192e90;FUN_71001d0a10;FUN_71001d1590;FUN_710024ff30;FUN_7100254520;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100111aa0__7100111aa0.c)  [cfg](../decompiled/FUN_7100111aa0__7100111aa0.mmd)
- **Clone hash:** `b5d9ec0eb2d6f84f`

```c

undefined8 FUN_7100111aa0(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 9;
  FUN_7100192e90(local_48,DAT_71052adfc0);
  local_58[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
  if (local_48[0] == local_58[0]) {
    uVar5 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar7 = "ProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100111bdc;
  }
  iVar3 = *(int *)(DAT_71052acd90 + 0x58);
  if (iVar3 != 0) {
    if (DAT_71052adb38 == 0) {
      uVar5 = 0;
      *(code **)(param_1 + 0x30) = FUN_71001a2190;
      pcVar7 = "NexProcessHostMigrationJob::HostMigrationSuccess";
      goto LAB_7100111bdc;
    }
    plVar6 = *(long **)(param_1 + 0x118);
    lVar1 = *(long *)(DAT_71052acd90 + 0x68);
    uVar2 = *(ulong *)(DAT_71052acd90 + 0x70);
    if (*(int *)((long)plVar6 + 0x14) == 1) {
// ... (22 more lines)
```

## 14. `FUN_710017b6c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017b6c0`  (offset `0x17b6c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017b6c0(void)`
- **Size / BBs / Incoming:** 416 bytes / 13 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** N2nn3pia9transport11DispatchJobE;chara/chara_4/chara_4_;LocalMatchBrowseMatchmakeJob::UpdateSessionInfo
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_7100146ba0;FUN_7100175790;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710017b6c0__710017b6c0.c)  [cfg](../decompiled/FUN_710017b6c0__710017b6c0.mmd)
- **Clone hash:** `39a0821b60537145`

```c

undefined8 FUN_710017b6c0(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar4 = aiStack_80;
  if (DAT_71052adb38 == 0) {
switchD_710017b708_caseD_6:
    bVar1 = FUN_7100175790(*(long *)(param_1 + 0x60));
    if ((bVar1 & 1) == 0) {
      uVar3 = 0;
      *(code **)(param_1 + 0x30) = FUN_710017b860;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "LocalMatchBrowseMatchmakeJob::UpdateSessionInfo";
    }
    else {
      uVar3 = 5;
    }
  }
  else {
    iVar2 = FUN_7100146ba0(DAT_71052adb38);
    switch(iVar2) {
    case 4:
      puVar5 = *(undefined4 **)(param_1 + 0x58);
      aiStack_50[0] = 0x8c56;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
// ... (45 more lines)
```

## 15. `FUN_710010dad0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010dad0`  (offset `0x10dad0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010dad0(void)`
- **Size / BBs / Incoming:** 524 bytes / 15 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** NexMatchUpdateSessionSettingJob::WaitUpdateAttributes
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000e1cb0;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010dad0__710010dad0.c)  [cfg](../decompiled/FUN_710010dad0__710010dad0.mmd)
- **Clone hash:** `b7d44a73207da4de`

```c

undefined8 FUN_710010dad0(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar2 = aiStack_a0;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar2 = aiStack_40;
    break;
  case 6:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar2 = aiStack_60;
    break;
  case 7:
// ... (49 more lines)
```

## 16. `FUN_710010e460`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010e460`  (offset `0x10e460`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010e460(void)`
- **Size / BBs / Incoming:** 532 bytes / 18 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** UpdateSessionSettingJob::CompleteProcess
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000e1820;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010e460__710010e460.c)  [cfg](../decompiled/FUN_710010e460__710010e460.mmd)
- **Clone hash:** `cafeac51dfb58d16`

```c

undefined8 FUN_710010e460(long param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar3 = aiStack_a0;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar3 = aiStack_40;
    break;
  case 6:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar3 = aiStack_60;
    break;
// ... (52 more lines)
```

## 17. `FUN_710010e680`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010e680`  (offset `0x10e680`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010e680(void)`
- **Size / BBs / Incoming:** 532 bytes / 18 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** UpdateSessionSettingJob::CompleteProcess
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000e1d80;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010e680__710010e680.c)  [cfg](../decompiled/FUN_710010e680__710010e680.mmd)
- **Clone hash:** `813d2f96fd0d1aa6`

```c

undefined8 FUN_710010e680(long param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar3 = aiStack_a0;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar3 = aiStack_40;
    break;
  case 6:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar3 = aiStack_60;
    break;
// ... (52 more lines)
```

## 18. `FUN_710010e1f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010e1f0`  (offset `0x10e1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010e1f0(void)`
- **Size / BBs / Incoming:** 624 bytes / 24 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** UpdateSessionSettingJob::CompleteProcess
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000e64a0;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010e1f0__710010e1f0.c)  [cfg](../decompiled/FUN_710010e1f0__710010e1f0.mmd)
- **Clone hash:** `84f2f43fb41c8aeb`

```c

undefined8 FUN_710010e1f0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar3 = aiStack_a0;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar5 = (undefined4 *)param_1[0xb];
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar3 = aiStack_40;
    break;
  case 6:
    puVar5 = (undefined4 *)param_1[0xb];
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar3 = aiStack_60;
// ... (67 more lines)
```

## 19. `FUN_71001224f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001224f0`  (offset `0x1224f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001224f0(void)`
- **Size / BBs / Incoming:** 404 bytes / 16 bb / 2 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** UpdateSessionSettingJob::CompleteProcess
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_710011af80;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001224f0__71001224f0.c)  [cfg](../decompiled/FUN_71001224f0__71001224f0.mmd)
- **Clone hash:** `6b8333e7add282ca`

```c

undefined8 FUN_71001224f0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar4 = aiStack_70;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    puVar5 = (undefined4 *)param_1[0xb];
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar4 = aiStack_40;
LAB_710012255c:
    FUN_71000b41f0(puVar5,piVar4);
    param_1[0xb] = 0;
    uVar2 = 1;
  }
  else {
    puVar5 = (undefined4 *)param_1[0xb];
    if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 10) != '\0')) {
      aiStack_50[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
// ... (30 more lines)
```

## 20. `FUN_710011df00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011df00`  (offset `0x11df00`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011df00(void)`
- **Size / BBs / Incoming:** 188 bytes / 6 bb / 3 incoming refs
- **Match values:** UpdateSession
- **Strings touched:** dys_yoga03_l_03_set;LanMatchJointSessionJob::StartUpdateSessionKey
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_7100140490;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011df00__710011df00.c)  [cfg](../decompiled/FUN_710011df00__710011df00.mmd)
- **Clone hash:** `8fcee08fc033d687`

```c

undefined8 FUN_710011df00(long param_1)

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
    *(code **)(param_1 + 0x30) = FUN_710011e550;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LanMatchJointSessionJob::StartUpdateSessionKey";
  }
  return uVar2;
}


```

## 21. `FUN_71001839f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001839f0`  (offset `0x1839f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001839f0(void)`
- **Size / BBs / Incoming:** 236 bytes / 13 bb / 2 incoming refs
- **Match values:** UpdateSession
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

