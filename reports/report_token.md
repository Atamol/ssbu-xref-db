# token (funcs=5, hits=25)

Top 50 functions by hit count

## 1. `FUN_71002a2f90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002a2f90`  (offset `0x2a2f90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71002a2f90(long param_1)`
- **Size / BBs / Incoming:** 1788 bytes / 40 bb / 2 incoming refs
- **Match values:** Token
- **Strings touched:** Bearer ;Authorization;User-Agent;Content-Type;application/json;api-%%.znc.srv.nintendo.net;https://;/v1/NX/;getToken;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001af850;FUN_71001b0ab0;FUN_71001b1300;FUN_71001b1820;FUN_71001b1870;FUN_71001b2b10;FUN_71001b2bf0;FUN_71001b3cb0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b5080;FUN_71001b52a0;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;...
- **Files:** [decomp](../decompiled/FUN_71002a2f90__71002a2f90.c)  [cfg](../decompiled/FUN_71002a2f90__71002a2f90.mmd)
- **Clone hash:** `66a80ab0c9049b1f`

```c

void FUN_71002a2f90(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  uint *puVar18;
  long lVar19;
  size_t sVar20;
  undefined8 *puVar21;
  ulong uVar22;
  code *pcVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  int local_358 [6];
  char *local_340;
  undefined **local_338;
  undefined1 local_330 [4];
  undefined1 local_32c;
  undefined1 local_32b;
  undefined1 local_32a;
// ... (284 more lines)
```

## 2. `FUN_71002add70`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002add70`  (offset `0x2add70`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_71002add70(long param_1, undefined8 * param_2)`
- **Size / BBs / Incoming:** 1212 bytes / 68 bb / 1 incoming refs
- **Match values:** token
- **Strings touched:** status;result;token
- **Callers:** FUN_71002a40c0
- **Callees:** FUN_71001b1870;FUN_71001b3cb0;FUN_71001ba380;FUN_71002ac940;operator.delete;<EXTERNAL>::memcmp
- **Files:** [decomp](../decompiled/FUN_71002add70__71002add70.c)  [cfg](../decompiled/FUN_71002add70__71002add70.mmd)
- **Clone hash:** `f1d97a24bab5effa`

```c

/* WARNING: Type propagation algorithm not settling */

uint FUN_71002add70(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *******pppppppuVar2;
  uint *******__s2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint *******pppppppuVar7;
  uint *******pppppppuVar8;
  uint ******ppppppuVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint *******pppppppuVar14;
  undefined8 local_508;
  uint *******local_500;
  undefined8 uStack_4f8;
  undefined8 **local_4f0;
  long *local_4e8;
  undefined8 local_4e0;
  long local_4d8;
  long local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  int local_4b0;
  undefined8 local_4a8;
  undefined8 *local_4a0;
  undefined8 local_498;
  undefined8 *local_490;
  undefined8 uStack_488;
  long local_480;
  undefined8 uStack_478;
// ... (234 more lines)
```

## 3. `FUN_71037c6060`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037c6060`  (offset `0x37c6060`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037c6060(long * param_1, long * param_2, uint param_3)`
- **Size / BBs / Incoming:** 148 bytes / 11 bb / 7 incoming refs
- **Match values:** token
- **Strings touched:** N5boost9algorithm6detail13token_finderFIN2nu15isPathDelimiterIcEEEE
- **Callers:** FUN_71037c52e0
- **Callees:** <EXTERNAL>::strcmp
- **Files:** [decomp](../decompiled/FUN_71037c6060__71037c6060.c)  [cfg](../decompiled/FUN_71037c6060__71037c6060.mmd)
- **Clone hash:** `329e897daf5c9fd4`

```c

void FUN_71037c6060(long *param_1,long *param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 != 4) {
    if (param_3 < 2) {
      *param_2 = *param_1;
      return;
    }
    if (param_3 == 2) {
      return;
    }
    if (param_3 == 3) {
      if ((*(char **)(*param_2 + 8) !=
           "N5boost9algorithm6detail13token_finderFIN2nu15isPathDelimiterIcEEEE") &&
         (iVar1 = strcmp(*(char **)(*param_2 + 8),
                         "N5boost9algorithm6detail13token_finderFIN2nu15isPathDelimiterIcEEEE"),
         iVar1 != 0)) {
        *param_2 = 0;
        return;
      }
      *param_2 = (long)param_1;
      return;
    }
  }
  *param_2 = (long)&PTR_DAT_7105241d08;
  *(undefined2 *)(param_2 + 1) = 0;
  return;
}


```

## 4. `FUN_7103869e50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103869e50`  (offset `0x3869e50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103869e50(undefined2 * param_1, long * param_2, uint param_3)`
- **Size / BBs / Incoming:** 216 bytes / 14 bb / 31 incoming refs
- **Match values:** token
- **Strings touched:** N5boost9algorithm6detail13token_finderFINS1_14is_classifiedFEEE
- **Callers:** FUN_7103867550
- **Callees:** <EXTERNAL>::strcmp;<EXTERNAL>::std::locale::~locale;<EXTERNAL>::std::locale::locale
- **Files:** [decomp](../decompiled/FUN_7103869e50__7103869e50.c)  [cfg](../decompiled/FUN_7103869e50__7103869e50.mmd)
- **Clone hash:** `44b1212f79ade33d`

```c

void FUN_7103869e50(undefined2 *param_1,long *param_2,uint param_3)

{
  int iVar1;
  locale *this;
  
  if (param_3 == 4) {
LAB_7103869e6c:
    *param_2 = (long)&PTR_DAT_710526f068;
    *(undefined2 *)(param_2 + 1) = 0;
    return;
  }
  if (param_3 < 2) {
    this = (locale *)(param_1 + 4);
    *(undefined2 *)param_2 = *param_1;
    std::locale::locale((locale *)(param_2 + 1),this);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 8);
    if (param_3 != 1) {
      return;
    }
  }
  else {
    if (param_3 == 3) {
      if ((*(char **)(*param_2 + 8) !=
           "N5boost9algorithm6detail13token_finderFINS1_14is_classifiedFEEE") &&
         (iVar1 = strcmp(*(char **)(*param_2 + 8),
                         "N5boost9algorithm6detail13token_finderFINS1_14is_classifiedFEEE"),
         iVar1 != 0)) {
        *param_2 = 0;
        return;
      }
      *param_2 = (long)param_1;
      return;
    }
    if (param_3 != 2) goto LAB_7103869e6c;
    this = (locale *)(param_2 + 1);
  }
  std::locale::~locale(this);
  return;
// ... (2 more lines)
```

## 5. `FUN_71002a37c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002a37c0`  (offset `0x2a37c0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71002a37c0(long param_1, long param_2)`
- **Size / BBs / Incoming:** 1932 bytes / 79 bb / 1 incoming refs
- **Match values:** Token
- **Strings touched:** requestId;parameter;nsaIdToken;0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu
- **Callers:** FUN_71002a2f90
- **Callees:** FUN_71001b1870;FUN_71001b3160;FUN_71001b34a0;FUN_71001b3cb0;FUN_71001b9fe0;FUN_71002ac3d0;FUN_71002ad5d0;FUN_71002ad6c0
- **Files:** [decomp](../decompiled/FUN_71002a37c0__71002a37c0.c)  [cfg](../decompiled/FUN_71002a37c0__71002a37c0.mmd)
- **Clone hash:** `a6d28cb884f8a1f4`

```c

undefined8 FUN_71002a37c0(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined1 uVar6;
  char *pcVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  long *local_d0;
  undefined1 *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 local_94;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [4];
  char acStack_5c [12];
  
  local_70 = 0;
  uStack_68 = 0x100;
  local_d0 = &local_90;
  local_c8 = auStack_60;
  local_90 = 0;
// ... (330 more lines)
```

