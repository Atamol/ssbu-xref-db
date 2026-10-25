# p2p (funcs=4, hits=5)

Top 50 functions by hit count

## 1. `FUN_71000c36e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000c36e0`  (offset `0xc36e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000c36e0(int * param_1, long param_2)`
- **Size / BBs / Incoming:** 548 bytes / 26 bb / 1 incoming refs
- **Match values:** p2p
- **Strings touched:** D:\home\ead-p2p\Env\Lib\NintendoSDK\NintendoSDK-NEX\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\NintendoSDK-NEX\Include\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71000ed7a0
- **Callees:** FUN_71000bce50;FUN_71000d3390;FUN_71001b1300;FUN_7100258800;FUN_7100258950;FUN_7101717960;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000c36e0__71000c36e0.c)  [cfg](../decompiled/FUN_71000c36e0__71000c36e0.mmd)
- **Clone hash:** `d865e773c2dce56e`

```c

void FUN_71000c36e0(int *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  int local_58 [4];
  undefined4 local_48 [2];
  
  plVar5 = *(long **)(param_2 + 0x50);
  if ((((plVar5 != (long *)0x0) && (*(int *)(param_2 + 8) != 0)) &&
      ((DAT_71052af0e0 & 0xfffffffe) == 2)) &&
     ((*(undefined4 *)(param_2 + 0x58) = 0, *(long *)(param_2 + 0x78) != 0 &&
      (*(long *)(param_2 + 0x60) != 0)))) {
    plVar6 = &DAT_71052af180;
    if (DAT_71052af1d8 != '\0') {
      puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar3;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          FUN_71001b1300("D:\\home\\ead-p2p\\Env\\Lib\\NintendoSDK\\NintendoSDK-NEX\\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\\NintendoSDK-NEX\\Include\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          goto LAB_71000c389c;
        }
        plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x68);
      }
    }
    if ((*plVar6 != 0) && (*(long *)(*plVar6 + 0x10) != 0)) {
      plVar6 = &DAT_71052af180;
      if (DAT_71052af1d8 != '\0') {
        puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar2 = *puVar3;
        if (uVar2 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
            FUN_71001b1300("D:\\home\\ead-p2p\\Env\\Lib\\NintendoSDK\\NintendoSDK-NEX\\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\\NintendoSDK-NEX\\Include\\OnlineCore/src/Core/InstanceTable.h"
                           ,0x47,0xe0000003,0);
// ... (41 more lines)
```

## 2. `FUN_71000c3d90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000c3d90`  (offset `0xc3d90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000c3d90(void)`
- **Size / BBs / Incoming:** 2524 bytes / 74 bb / 1 incoming refs
- **Match values:** p2p
- **Strings touched:** D:\home\ead-p2p\Env\Lib\NintendoSDK\NintendoSDK-NEX\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\NintendoSDK-NEX\Include\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71000c3d80
- **Callees:** FUN_71000b1c30;FUN_71000b1c60;FUN_71000b1cb0;FUN_71000b1cf0;FUN_71000b1da0;FUN_71000b2850;FUN_71000b3880;FUN_71000b4180;FUN_71000b41f0;FUN_71000b4260;FUN_71000b9f60;FUN_71000ba0c0;FUN_71000bce50;FUN_71000bcf30;FUN_71000bed60;FUN_71000bedd0;...
- **Files:** [decomp](../decompiled/FUN_71000c3d90__71000c3d90.c)  [cfg](../decompiled/FUN_71000c3d90__71000c3d90.mmd)
- **Clone hash:** `28c7078cc52dd322`

```c

void FUN_71000c3d90(long *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ushort uVar13;
  int *piVar14;
  int iVar15;
  ErrorResultVariant *this;
  long *plVar16;
  long lVar17;
  int aiStack_360 [4];
  undefined8 uStack_350;
  undefined4 uStack_348;
  ushort uStack_338;
  int aiStack_330 [4];
  int aiStack_320 [4];
  undefined **ppuStack_310;
  undefined4 auStack_308 [30];
  undefined8 auStack_290 [16];
  undefined8 auStack_210 [16];
  int aiStack_190 [32];
  int aiStack_110 [4];
  int aiStack_100 [4];
  int aiStack_f0 [4];
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  undefined8 auStack_c0 [3];
  ushort uStack_a8;
// ... (328 more lines)
```

## 3. `FUN_710014c3a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710014c3a0`  (offset `0x14c3a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710014c3a0(void)`
- **Size / BBs / Incoming:** 492 bytes / 18 bb / 2 incoming refs
- **Match values:** P2p
- **Strings touched:** select_item;CloseParticipationJob::WaitP2pStable
- **Callees:** FUN_71000b41f0;FUN_71000bb5d0;FUN_71000bce50;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710014c3a0__710014c3a0.c)  [cfg](../decompiled/FUN_710014c3a0__710014c3a0.mmd)
- **Clone hash:** `7ea10291fcc7170f`

```c

undefined8 FUN_710014c3a0(long param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
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
  case 7:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
// ... (43 more lines)
```

## 4. `FUN_71000c4770`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000c4770`  (offset `0xc4770`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000c4770(int * param_1, long param_2)`
- **Size / BBs / Incoming:** 1020 bytes / 39 bb / 1 incoming refs
- **Match values:** p2p
- **Strings touched:** D:\home\ead-p2p\Env\Lib\NintendoSDK\NintendoSDK-NEX\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\NintendoSDK-NEX\Include\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71000ed7a0
- **Callees:** FUN_71000b1c60;FUN_71000b1cf0;FUN_71000b2850;FUN_71000b2b10;FUN_71000b40e0;FUN_71000b4150;FUN_71000b4160;FUN_71000b4820;FUN_71000bce50;FUN_71000c2890;FUN_71000d2ca0;FUN_710015fd60;FUN_710015ff20;FUN_710015ffc0;FUN_7100160210;FUN_7100160220;...
- **Files:** [decomp](../decompiled/FUN_71000c4770__71000c4770.c)  [cfg](../decompiled/FUN_71000c4770__71000c4770.mmd)
- **Clone hash:** `e5d50cbc86220a97`

```c

void FUN_71000c4770(int *param_1,long param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_158;
  undefined4 local_150;
  int local_d8 [32];
  undefined4 local_58 [2];
  
  piVar11 = (int *)(param_2 + 0xd8);
  if ((*piVar11 == 1) || (*(char *)(param_2 + 0xb0) == '\0')) {
LAB_71000c4850:
    local_d8[0] = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_d8 | 4));
    local_158 = (ulong)local_158._4_4_ << 0x20;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_d8 | 4),(Result *)&local_158);
    FUN_71000bce50(param_1,local_d8);
    return;
  }
  lVar4 = FUN_7100162410(DAT_71052add68);
  lVar6 = 0;
  if (lVar4 != 0) {
    lVar6 = lVar4 + -0x18;
  }
  *(long *)(param_2 + 0xa0) = lVar6;
// ... (128 more lines)
```

