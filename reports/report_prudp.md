# prudp (funcs=9, hits=38)

Top 50 functions by hit count

## 1. `FUN_71001f4700`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f4700`  (offset `0x1f4700`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001f4700(void)`
- **Size / BBs / Incoming:** 1300 bytes / 36 bb / 1 incoming refs
- **Match values:** prudp
- **Strings touched:** prudp:/
- **Callees:** FUN_71001af850;FUN_71001b1820;FUN_71001b1870;FUN_71001beb40;FUN_71001bec20;FUN_71001bef00;FUN_71001bef90;FUN_71001bf250;FUN_71001bf270;FUN_71001bf280;FUN_71001bf290;FUN_71001bf310;FUN_71001bf440;FUN_71001bf450;FUN_71001f1f40;FUN_71001f2180;...
- **Files:** [decomp](../decompiled/FUN_71001f4700__71001f4700.c)  [cfg](../decompiled/FUN_71001f4700__71001f4700.mmd)
- **Clone hash:** `c45c271a5b2e2478`

```c

undefined4 FUN_71001f4700(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  size_t sVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 auStack_178 [18];
  undefined **ppuStack_e8;
  long *plStack_e0;
  undefined8 **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  char *pcStack_88;
  ushort uStack_80;
  undefined1 uStack_7e;
  undefined4 auStack_78 [6];
  
  FUN_71001bf280(auStack_78);
  FUN_71001bf310(auStack_78);
  FUN_71001bf440(auStack_78);
  iVar1 = FUN_71001bf440(auStack_78);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_71001bf440(auStack_78);
    if (iVar1 != 0) {
// ... (182 more lines)
```

## 2. `FUN_7100202710`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100202710`  (offset `0x202710`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100202710(void)`
- **Size / BBs / Incoming:** 1688 bytes / 103 bb / 1 incoming refs
- **Match values:** PRUDP
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp;IsDisconnecting();chara/chara_4/chara_4_;(IsDisconnecting() && !Core::GetInstance()->GetTerminateImmediately());..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b4200;FUN_71001b4280;FUN_71001b46a0;FUN_71001b4730;FUN_71001b68a0;FUN_71001b6a50;FUN_71001da0e0;FUN_7100202db0;FUN_7100203410;FUN_71002039c0;FUN_7100216320;FUN_7101717960;...
- **Files:** [decomp](../decompiled/FUN_7100202710__7100202710.c)  [cfg](../decompiled/FUN_7100202710__7100202710.mmd)
- **Clone hash:** `04b862fbacc43879`

```c

void FUN_7100202710(undefined8 *param_1,long *param_2,long param_3,long *param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 uStack_b0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (((int)param_2[0x14] == 0) || (uVar7 = (**(code **)(*param_2 + 0x58))(), (uVar7 & 1) == 0)) {
    uStack_b0._0_4_ = 0x80050002;
    goto LAB_71002028e4;
  }
  FUN_7100202db0(param_2);
  (**(code **)(*param_2 + 0xb0))(param_2,3);
  param_2[0x60] = 0;
  param_2[0x5f] = 0;
  param_2[0x61] = param_3;
  param_2[0x62] = *param_4;
  plVar8 = FUN_71001af850(0x238);
  if (plVar8 != (long *)0x0) {
    FUN_7100216320(plVar8,param_2,3,0x60,0,0);
  }
  *(undefined1 *)(plVar8 + 8) = *(undefined1 *)((long)param_2 + 0x1eb);
  uVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
// ... (244 more lines)
```

## 3. `FUN_7100201e50`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100201e50`  (offset `0x201e50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100201e50(void)`
- **Size / BBs / Incoming:** 1464 bytes / 82 bb / 1 incoming refs
- **Match values:** PRUDP
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp;IsConnecting();(IsConnecting() && !Core::GetInstance()->GetTerminateImmediately());..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b4200;FUN_71001b46a0;FUN_71001b4730;FUN_71001b68a0;FUN_71001b6a50;FUN_71001bec20;FUN_71001da0e0;FUN_71001f2180;FUN_7100202410;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_7100201e50__7100201e50.c)  [cfg](../decompiled/FUN_7100201e50__7100201e50.mmd)
- **Clone hash:** `f2aaf80b617f8060`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7100201e50(undefined4 *param_1,long *param_2,long param_3,long param_4,long param_5,
                   long *param_6,int param_7)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  ulong uVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 uStack_98;
  
  iVar4 = 10000000;
  if (param_7 != -1) {
    iVar4 = param_7;
  }
  uVar9 = (**(code **)(*param_2 + 0x60))();
  if (((((uVar9 & 1) == 0) && (*(int *)((long)param_2 + 0x114) != 0)) ||
      (uVar9 = (**(code **)(*param_2 + 0x40))(param_2), (uVar9 & 1) != 0)) ||
     (uVar9 = (**(code **)(*param_2 + 0x58))(param_2), (uVar9 & 1) != 0)) {
    uStack_98._0_4_ = 0x80050002;
    goto LAB_7100201ee0;
  }
  *(undefined1 *)(param_2 + 0x21) = 0;
  (**(code **)(*param_2 + 0xb0))(param_2,1);
  if (param_3 != 0) {
    piVar1 = (int *)(param_3 + 8);
// ... (200 more lines)
```

## 4. `FUN_71001f2180`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f2180`  (offset `0x1f2180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001f2180(long param_1)`
- **Size / BBs / Incoming:** 792 bytes / 45 bb / 129 incoming refs
- **Match values:** prudp
- **Strings touched:** prudp;prudps;dys_yoga03_l_03_set
- **Callers:** FUN_71001df750;FUN_71001df870;FUN_71001e0070;FUN_71001e3a10;FUN_71001e3bc0;FUN_71001e4000;FUN_71001e4b40;FUN_71001e4f10;FUN_71001e5030;FUN_71001e54f0;FUN_71001e5700;FUN_71001e59e0;FUN_71001e5d60;FUN_71001e7a40;FUN_71001e8190;FUN_71001e8390;...
- **Callees:** FUN_71001b4280;FUN_71001beb90;FUN_71001f3110;FUN_71001f3220;FUN_7100219ca0;FUN_7101711670;<EXTERNAL>::strcmp;<EXTERNAL>::strlen;<EXTERNAL>::strstr
- **Files:** [decomp](../decompiled/FUN_71001f2180__71001f2180.c)  [cfg](../decompiled/FUN_71001f2180__71001f2180.mmd)
- **Clone hash:** `3871b706747a3491`

```c

/* WARNING: Removing unreachable block (ram,0x0071001f2294) */
/* WARNING: Removing unreachable block (ram,0x0071001f2284) */

void FUN_71001f2180(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *__haystack;
  byte local_ac [4];
  uint auStack_a8 [6];
  char acStack_90 [64];
  
  *(undefined1 *)(param_1 + 0x68) = 1;
  FUN_71001beb90(*(long *)(param_1 + 8));
  puVar8 = (undefined8 *)(param_1 + 0x20);
  FUN_7100219ca0(param_1 + 0x18,(undefined8 *)*puVar8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 **)(param_1 + 0x18) = puVar8;
  *puVar8 = 0;
  puVar8 = (undefined8 *)(param_1 + 0x38);
  FUN_7101711670(param_1 + 0x30,(undefined8 *)*puVar8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 **)(param_1 + 0x30) = puVar8;
  *puVar8 = 0;
  puVar8 = (undefined8 *)(param_1 + 0x50);
  FUN_7101711670(param_1 + 0x48,(undefined8 *)*puVar8);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 **)(param_1 + 0x48) = puVar8;
  *puVar8 = 0;
  FUN_71001f3110(auStack_a8,param_1,acStack_90,0x40);
  local_ac[0] = 1;
  bVar1 = FUN_71001b4280(auStack_a8,local_ac);
// ... (116 more lines)
```

## 5. `FUN_7100242e50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100242e50`  (offset `0x242e50`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7100242e50(long param_1, long * * * * param_2)`
- **Size / BBs / Incoming:** 672 bytes / 28 bb / 1 incoming refs
- **Match values:** prudp
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;prudp
- **Callers:** FUN_710023fdf0
- **Callees:** FUN_71001b1300;FUN_71001b1870;FUN_71001e1010;FUN_71001e32f0;FUN_71001eea00;FUN_71001ef910;FUN_71001f2d60;FUN_71001f2db0;FUN_71001f2e00;FUN_71001f2e30;FUN_71001f3090;FUN_71001f45d0;FUN_7100246b20;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_7100242e50__7100242e50.c)  [cfg](../decompiled/FUN_7100242e50__7100242e50.mmd)
- **Clone hash:** `f98134db6944624a`

```c

ulong FUN_7100242e50(long param_1,long ****param_2)

{
  long *********ppppppppplVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long ********pppppppplVar8;
  long *plVar9;
  long *********ppppppppplVar10;
  long *********ppppppppplVar11;
  long ********local_78;
  long ********local_70;
  long local_68;
  
  local_78 = (long ********)&local_78;
  local_68 = 0;
  plVar9 = &DAT_71052af128;
  local_70 = local_78;
  if (DAT_71052af1d8 == '\0') {
LAB_7100242ed8:
    if (*plVar9 != 0) {
      lVar5 = *(long *)(*plVar9 + 0x10);
      goto LAB_7100242f04;
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar4;
    if (uVar3 == 0) goto LAB_7100242ed8;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
      goto LAB_7100242ed8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
// ... (70 more lines)
```

## 6. `FUN_710020abe0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710020abe0`  (offset `0x20abe0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710020abe0(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** prudp
- **Strings touched:** prudp
- **Files:** [decomp](../decompiled/FUN_710020abe0__710020abe0.c)  [cfg](../decompiled/FUN_710020abe0__710020abe0.mmd)
- **Clone hash:** `a827898beec8b6ed`

```c

char * FUN_710020abe0(void)

{
  return "prudp";
}


```

## 7. `FUN_7100245a70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100245a70`  (offset `0x245a70`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100245a70(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** prudp
- **Strings touched:** prudps
- **Files:** [decomp](../decompiled/FUN_7100245a70__7100245a70.c)  [cfg](../decompiled/FUN_7100245a70__7100245a70.mmd)
- **Clone hash:** `a03ba55636ed9d15`

```c

char * FUN_7100245a70(void)

{
  return "prudps";
}


```

## 8. `FUN_710023dbc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710023dbc0`  (offset `0x23dbc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710023dbc0(long param_1)`
- **Size / BBs / Incoming:** 1572 bytes / 70 bb / 3 incoming refs
- **Match values:** prudp
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;NODE_PRE_REFRACT_BLEND;prudp:/address=;;port=;;stream=;chara/chara_4/chara_4_;;sid=;;type=;;Uri=
- **Callees:** FUN_71001af850;FUN_71001b0ab0;FUN_71001b1300;FUN_71001b2f70;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e00;FUN_71001b52a0;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;FUN_71001b6470;FUN_71001b7590;FUN_71001d1590;FUN_71001d4200;...
- **Files:** [decomp](../decompiled/FUN_710023dbc0__710023dbc0.c)  [cfg](../decompiled/FUN_710023dbc0__710023dbc0.mmd)
- **Clone hash:** `60fb88c2f895b9c8`

```c

/* WARNING: Removing unreachable block (ram,0x00710023e14c) */
/* WARNING: Removing unreachable block (ram,0x00710023e138) */

void FUN_710023dbc0(long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined4 auStack_250 [6];
  ulong local_238;
  undefined **local_230;
  undefined1 local_228 [16];
  undefined1 *local_218;
  undefined8 local_210;
  undefined4 local_204;
  undefined4 auStack_200 [6];
  undefined8 auStack_1e8 [14];
  undefined8 uStack_178;
  char *local_170;
  
  puVar13 = auStack_250;
  plVar11 = &DAT_71052af1a0;
  if (DAT_71052af1d8 == '\0') {
LAB_710023dc34:
// ... (215 more lines)
```

## 9. `FUN_71001f24a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f24a0`  (offset `0x1f24a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001f24a0(long param_1)`
- **Size / BBs / Incoming:** 1372 bytes / 73 bb / 2 incoming refs
- **Match values:** prudp
- **Strings touched:** address;%s%s%u;%s%s%s;%s%s%lu;dys_yoga03_l_03_set
- **Callers:** FUN_71001f30d0;FUN_71001f3690
- **Callees:** FUN_71001b1820;FUN_71001b1870;FUN_71001b4910;FUN_71001b4e80;FUN_71001beb30;FUN_71001bee60;FUN_71001bef00;FUN_71001bef20;FUN_71001bef30;FUN_71001befa0;<EXTERNAL>::strlen;<EXTERNAL>::strncpy;<EXTERNAL>::snprintf
- **Files:** [decomp](../decompiled/FUN_71001f24a0__71001f24a0.c)  [cfg](../decompiled/FUN_71001f24a0__71001f24a0.mmd)
- **Clone hash:** `ebbd567d4174c92e`

```c

void FUN_71001f24a0(long param_1)

{
  long *plVar1;
  char *pcVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined **local_520 [3];
  char *local_508;
  undefined8 auStack_4f8 [18];
  char acStack_468 [1032];
  
  uVar7 = *(int *)(param_1 + 0x10) - 1;
  if (uVar7 < 3) {
    iVar5 = snprintf(acStack_468,0x400,(&PTR_s_prudp___7104f599f0)[(int)uVar7]);
    lVar17 = (long)iVar5;
    iVar5 = FUN_71001bef20(*(long *)(param_1 + 8));
  }
  else {
    lVar17 = 0;
    iVar5 = FUN_71001bef20(*(long *)(param_1 + 8));
  }
  if (iVar5 == 0) {
    sVar4 = FUN_71001beb30(*(long *)(param_1 + 8));
// ... (211 more lines)
```

