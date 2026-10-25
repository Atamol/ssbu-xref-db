# digest (funcs=4, hits=5)

Top 50 functions by hit count

## 1. `FUN_710000f090`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000f090`  (offset `0xf090`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710000f090(long * param_1, uint param_2, byte * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 420 bytes / 22 bb / 2 incoming refs
- **Match values:** Digest;digest
- **Strings touched:** chara/chara_4/chara_4_;Digest;Basic;plate_side;Authentication problem. Ignoring this.
;Ignoring duplicate digest auth header.

- **Callers:** FUN_710000bdc0;FUN_710000fb30
- **Callees:** FUN_71000134b0;FUN_7100015de0;FUN_7100017490;FUN_7100024760
- **Files:** [decomp](../decompiled/FUN_710000f090__710000f090.c)  [cfg](../decompiled/FUN_710000f090__710000f090.mmd)
- **Clone hash:** `67315602af8abf1b`

```c

undefined8
FUN_710000f090(long *param_1,uint param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  
  lVar10 = *param_1;
  bVar4 = (param_2 & 1) == 0;
  lVar1 = lVar10 + 0x4ce0;
  if (bVar4) {
    lVar1 = lVar10 + 0x4cc0;
  }
  lVar2 = 0x5070;
  if (bVar4) {
    lVar2 = 0x5078;
  }
  if (*param_3 == 0) {
    return 0;
  }
  do {
    uVar7 = 6;
    bVar4 = FUN_7100017490((byte *)"Digest",param_3,6);
    if (bVar4) {
      if ((*(byte *)(lVar1 + 0x10) >> 1 & 1) == 0) {
        uVar6 = FUN_7100024760();
        if ((uVar6 & 1) == 0) goto LAB_710000f1d4;
        *(ulong *)(lVar10 + lVar2) = *(ulong *)(lVar10 + lVar2) | 2;
        *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 2;
        pbVar8 = param_3;
// ... (44 more lines)
```

## 2. `FUN_710000edf0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000edf0`  (offset `0xedf0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000edf0(long * param_1, long param_2, undefined8 param_3, char * param_4, uint param_5, ulong param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 668 bytes / 36 bb / 2 incoming refs
- **Match values:** Digest
- **Strings touched:** Digest;Authorization:;chara/chara_4/chara_4_;Proxy-authorization:;%s:%s;Proxy-;%sAuthorization: Basic %s
;Server;Proxy;%s auth using %s with user '%s'

- **Callers:** FUN_710000ec90
- **Callees:** FUN_7100007fd0;FUN_7100012750;FUN_7100013550;FUN_7100015de0;FUN_71000173b0;FUN_71000272a0;<EXTERNAL>::strlen
- **Files:** [decomp](../decompiled/FUN_710000edf0__710000edf0.c)  [cfg](../decompiled/FUN_710000edf0__710000edf0.mmd)
- **Clone hash:** `a8ac66bb1c0a749a`

```c

ulong FUN_710000edf0(long *param_1,long param_2,undefined8 param_3,char *param_4,uint param_5,
                    ulong param_6,ulong param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  ulong uVar4;
  char *pcVar5;
  size_t sVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long local_58;
  size_t local_48;
  
  lVar10 = *param_1;
  if (*(long *)(param_2 + 8) != 1) {
    if (*(long *)(param_2 + 8) == 2) {
      uVar4 = FUN_7100013550(param_1,(ulong)(param_5 & 1),param_3,param_4);
      if ((int)uVar4 != 0) {
        return uVar4 & 0xffffffff;
      }
      pcVar5 = "Digest";
      goto LAB_710000f014;
    }
    goto LAB_710000efe8;
  }
  if ((param_5 & 1) == 0) {
    if ((char)param_1[0x103] != '\0') {
      for (plVar12 = *(long **)(*param_1 + 0x408); plVar12 != (long *)0x0;
          plVar12 = (long *)plVar12[1]) {
        bVar3 = FUN_71000173b0((byte *)*plVar12,(byte *)"Authorization:",0xe);
        if (bVar3) {
          lVar9 = *plVar12;
          goto joined_r0x00710000eef4;
// ... (91 more lines)
```

## 3. `FUN_7100013550`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100013550`  (offset `0x13550`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7100013550(long * param_1, ulong param_2, undefined8 param_3, char * param_4)`
- **Size / BBs / Incoming:** 424 bytes / 12 bb / 1 incoming refs
- **Match values:** Digest
- **Strings touched:** Proxy-;%sAuthorization: Digest %s

- **Callers:** FUN_710000edf0
- **Callees:** FUN_7100007fd0;FUN_7100024b80;FUN_71000272a0;FUN_71000272c0;<EXTERNAL>::strchr
- **Files:** [decomp](../decompiled/FUN_7100013550__7100013550.c)  [cfg](../decompiled/FUN_7100013550__7100013550.mmd)
- **Clone hash:** `82d2f754cd8a9b44`

```c

ulong FUN_7100013550(long *param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  size_t sStack_70;
  undefined8 local_68;
  
  bVar5 = (param_2 & 1) != 0;
  lVar7 = *param_1;
  plVar1 = param_1 + 0x43;
  plVar4 = param_1 + 0x112;
  if (bVar5) {
    plVar1 = param_1 + 0x31;
    plVar4 = param_1 + 0x10f;
  }
  pcVar9 = (char *)*plVar1;
  plVar1 = param_1 + 0x42;
  if (bVar5) {
    plVar1 = param_1 + 0x30;
  }
  pcVar8 = (char *)*plVar1;
  lVar2 = lVar7 + 0x4cc0;
  plVar1 = (long *)(lVar7 + 0x4c40);
  if (bVar5) {
    lVar2 = lVar7 + 0x4ce0;
    plVar1 = (long *)(lVar7 + 0x4c80);
  }
  FUN_71000272a0();
  *plVar4 = 0;
  pcVar3 = "";
  if (pcVar8 != (char *)0x0) {
// ... (33 more lines)
```

## 4. `FUN_71000134b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000134b0`  (offset `0x134b0`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_71000134b0(long * param_1, ulong param_2, byte * param_3)`
- **Size / BBs / Incoming:** 148 bytes / 6 bb / 1 incoming refs
- **Match values:** Digest
- **Strings touched:** Digest
- **Callers:** FUN_710000f090
- **Callees:** FUN_7100017490;FUN_7100024770
- **Files:** [decomp](../decompiled/FUN_71000134b0__71000134b0.c)  [cfg](../decompiled/FUN_71000134b0__71000134b0.mmd)
- **Clone hash:** `eb34d65248a376ca`

```c

undefined4 FUN_71000134b0(long *param_1,ulong param_2,byte *param_3)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  
  plVar1 = (long *)(*param_1 + 0x4c80);
  if ((param_2 & 1) == 0) {
    plVar1 = (long *)(*param_1 + 0x4c40);
  }
  bVar3 = FUN_7100017490((byte *)"Digest",param_3,6);
  if (bVar3) {
    pbVar5 = param_3 + 6;
    bVar2 = *pbVar5;
    if (4 < bVar2 - 9) goto LAB_710001351c;
    do {
      do {
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar5;
      } while (bVar2 - 9 < 5);
LAB_710001351c:
    } while (bVar2 == 0x20);
    uVar4 = FUN_7100024770(pbVar5,plVar1);
    return uVar4;
  }
  return 0x3d;
}


```

