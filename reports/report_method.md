# method (funcs=8, hits=13)

Top 50 functions by hit count

## 1. `FUN_7100023290`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023290`  (offset `0x23290`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100023290(ulong param_1, char * param_2, byte * param_3, long * param_4, long * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2432 bytes / 134 bb / 1 incoming refs
- **Match values:** method
- **Strings touched:** SOCKS5: connecting to HTTP proxy %s port %d
;SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]
;SOCKS5: no connection here;Connection time-out;SOCKS5: connection timeout;warning: unsupported value passed to CURLOPT_SOCKS5_AUTH: %lu
;SOCKS5: error occurred during connection;SOCKS5 communication to %s:%d
;NODE_PRE_REFRACT_BLEND;SOCKS5 nothing to read;Unable to send initial SOCKS5 request.;SOCKS5 read timeout;SOCKS5 read error occurred;SOCKS5 GSSAPI per-message authentication is not supported.;Unable to receive initial SOCKS5 response.;Received invalid version in initial SOCKS5 response.;No authentication method was acceptable.;Undocumented SOCKS5 mode attempted to be used by server.;No authentication method was acceptable. (It is quite likely that the SOCKS5 server wanted a username/password, since none was supplied to the server on this connection.);Failed to send SOCKS5 sub-negotiation request.;User was rejected by the SOCKS5 server (%d %d).;SOCKS5 connect to IPv4 %s (locally resolved)
;Unable to receive SOCKS5 sub-negotiation response.;select_item;Failed to send SOCKS5 connect request.;SOCKS5 connection to %s not supported
;Failed to resolve "%s" for SOCKS5 connect.;SOCKS5 reply has wrong version, version should be 5.;Can't complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d);SOCKS5 request granted.
;Can't complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d);Can't complete SOCKS5 connection to %s:%d. (%d);...
- **Callers:** FUN_710001edb0
- **Callees:** FUN_7100002af0;FUN_7100004910;FUN_7100005ba0;FUN_7100005f10;FUN_71000060d0;FUN_7100013730;FUN_7100015800;FUN_7100015de0;FUN_7100016040;FUN_71000162c0;FUN_7100016980;<EXTERNAL>::strlen;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_7100023290__7100023290.c)  [cfg](../decompiled/FUN_7100023290__7100023290.mmd)
- **Clone hash:** `b3d3e348bc39a1b0`

```c

/* WARNING: Removing unreachable block (ram,0x00710002388c) */

int FUN_7100023290(ulong param_1,char *param_2,byte *param_3,long *param_4,long *param_5,
                  long *param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t __n;
  long *plVar6;
  size_t __n_00;
  size_t __n_01;
  char *pcVar7;
  byte *pbVar8;
  long *plVar9;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  long local_328;
  long local_318;
  long local_310 [8];
  long *local_2d0;
  undefined8 local_2c8;
  byte local_2c0 [7];
  byte local_2b9;
  byte local_2b8;
  byte local_2b7;
  
  lVar15 = param_6[0x27];
  lVar13 = *param_6;
  uVar1 = *(uint *)((long)param_6 + (long)(int)param_5 * 4 + 600);
// ... (381 more lines)
```

## 2. `FUN_71038fe990`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038fe990`  (offset `0x38fe990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71038fe990(long param_1, int param_2)`
- **Size / BBs / Incoming:** 500 bytes / 25 bb / 3 incoming refs
- **Match values:** method
- **Strings touched:** no message;error in __gc metamethod (%s)
- **Callers:** FUN_71038fec40;FUN_71038fedf0;FUN_7103917230
- **Callees:** FUN_71038fb3c0;FUN_71038fca90;FUN_7103908660
- **Files:** [decomp](../decompiled/FUN_71038fe990__71038fe990.c)  [cfg](../decompiled/FUN_71038fe990__71038fe990.mmd)
- **Clone hash:** `2d6814587230e9e0`

```c

void FUN_71038fe990(long param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_1 + 0x18);
  puVar7 = *(undefined8 **)(lVar12 + 0x98);
  *(undefined8 *)(lVar12 + 0x98) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar12 + 0x58);
  *(undefined8 **)(lVar12 + 0x58) = puVar7;
  bVar3 = *(byte *)((long)puVar7 + 9);
  *(byte *)((long)puVar7 + 9) = bVar3 & 0xf7;
  if (*(byte *)(lVar12 + 0x55) - 2 < 4) {
    *(byte *)((long)puVar7 + 9) = bVar3 & 0xf0 | *(byte *)(lVar12 + 0x54) & 3;
  }
  bVar3 = *(byte *)(puVar7 + 1);
  if ((bVar3 & 0xf) == 7) {
    lVar8 = puVar7[2];
  }
  else if ((bVar3 & 0xf) == 5) {
    lVar8 = puVar7[5];
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x18) + ((ulong)bVar3 & 0xf) * 8 + 0x1a0);
  }
  if (lVar8 == 0) {
    puVar9 = &DAT_7104862960;
  }
// ... (42 more lines)
```

## 3. `FUN_71038fa260`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038fa260`  (offset `0x38fa260`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71038fa260(long param_1, char * param_2, long param_3)`
- **Size / BBs / Incoming:** 1740 bytes / 91 bb / 5 incoming refs
- **Match values:** method
- **Strings touched:** dys_yoga03_l_03_set;[string ";for iterator;metamethod
- **Callers:** FUN_71038f6c50;FUN_71038f6d60;FUN_7103900d60;FUN_71039035a0
- **Callees:** FUN_71038fa930;FUN_710391d940;FUN_710391e050;<EXTERNAL>::strlen;<EXTERNAL>::strchr;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_71038fa260__71038fa260.c)  [cfg](../decompiled/FUN_71038fa260__71038fa260.mmd)
- **Clone hash:** `58824c569e0220da`

```c

undefined8 FUN_71038fa260(long param_1,char *param_2,long param_3)

{
  int *piVar1;
  void *__dest;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  size_t __n;
  char *pcVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined *puVar12;
  undefined2 *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  char *pcVar19;
  undefined8 uVar20;
  char *pcVar21;
  char *pcVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  
  if (*(char *)(param_1 + 0xc) == '\x01') {
    plVar11 = *(long **)(param_1 + 0x20);
    lVar16 = *plVar11;
    *plVar11 = *(long *)(param_1 + 0x38) + plVar11[7];
    plVar11[7] = lVar16 - *(long *)(param_1 + 0x38);
// ... (356 more lines)
```

## 4. `FUN_71038f6d60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038f6d60`  (offset `0x38f6d60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71038f6d60(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 684 bytes / 33 bb / 92 incoming refs
- **Match values:** method
- **Strings touched:** method;_LOADED;dys_yoga03_l_03_set;bad argument #%d to '%s' (%s);bad argument #%d (%s);calling '%s' on bad self (%s)
- **Callers:** FUN_71038f7350;FUN_71038f74d0;FUN_7103900780;FUN_7103900940;FUN_7103900d60;FUN_7103900fb0;FUN_71039010c0;FUN_7103901a90;FUN_7103901c20;FUN_7103901d10;FUN_7103901e10;FUN_7103901f10;FUN_7103902020;FUN_7103902220;FUN_7103902330;FUN_7103902770;...
- **Callees:** FUN_71038f4000;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f6c50;FUN_71038f7010;FUN_71038fa260;FUN_71038fec40;FUN_71039080b0;<EXTERNAL>::strcmp;<EXTERNAL>::strncmp
- **Files:** [decomp](../decompiled/FUN_71038f6d60__71038f6d60.c)  [cfg](../decompiled/FUN_71038f6d60__71038f6d60.mmd)
- **Clone hash:** `e96f9f8d234859b2`

```c

void FUN_71038f6d60(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  char *__s1;
  undefined1 auStack_d0 [8];
  undefined *local_c8;
  char *local_c0;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_58 = *(long *)(param_1 + 0x20);
  uVar10 = (ulong)param_2;
  if (local_58 == param_1 + 0x60) {
                    /* WARNING: Subroutine does not return */
    FUN_71038f6c50(param_1,"bad argument #%d (%s)",uVar10,param_3,param_5,param_6,param_7,param_8);
  }
  FUN_71038fa260(param_1,"n",(long)auStack_d0);
  iVar3 = strcmp(local_c0,"method");
  if ((iVar3 == 0) && (uVar10 = (ulong)(param_2 - 1), param_2 - 1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_71038f6c50(param_1,"calling \'%s\' on bad self (%s)",local_c8,param_3,param_5,param_6,
                   param_7,param_8);
  }
  if (local_c8 != (undefined *)0x0) goto LAB_71038f6fac;
  uVar11 = *(long *)(param_1 + 0x10) - (**(long **)(param_1 + 0x20) + 0x10);
// ... (82 more lines)
```

## 5. `FUN_71038fa930`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038fa930`  (offset `0x38fa930`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_71038fa930(long param_1, uint param_2, uint param_3, long * param_4)`
- **Size / BBs / Incoming:** 968 bytes / 61 bb / 4 incoming refs
- **Match values:** method
- **Strings touched:** local;method;field;upvalue;constant
- **Callers:** FUN_71038fa260;FUN_71038fa930;FUN_71038fad50
- **Callees:** FUN_71038fa930;<EXTERNAL>::strcmp
- **Files:** [decomp](../decompiled/FUN_71038fa930__71038fa930.c)  [cfg](../decompiled/FUN_71038fa930__71038fa930.mmd)
- **Clone hash:** `483c095cd0e4cf68`

```c

char * FUN_71038fa930(long param_1,uint param_2,uint param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined *puVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  
  do {
    if (0 < *(int *)(param_1 + 0x24)) {
      lVar9 = 0;
      iVar2 = param_3 + 1;
      piVar7 = (int *)(*(long *)(param_1 + 0x50) + 0xc);
      do {
        if ((int)param_2 < piVar7[-1]) break;
        if (((int)param_2 < *piVar7) && (iVar2 = iVar2 + -1, iVar2 == 0)) {
          *param_4 = *(long *)(piVar7 + -3) + 0x18;
          return "local";
        }
        lVar9 = lVar9 + 1;
        piVar7 = piVar7 + 4;
      } while (lVar9 < *(int *)(param_1 + 0x24));
    }
    *param_4 = 0;
    if ((int)param_2 < 1) {
      return (char *)0x0;
    }
    lVar9 = *(long *)(param_1 + 0x38);
    uVar10 = 0;
    iVar2 = 0;
    uVar5 = 0xffffffff;
// ... (149 more lines)
```

## 6. `FUN_7100028420`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100028420`  (offset `0x28420`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100028420(long * param_1, int param_2)`
- **Size / BBs / Incoming:** 7628 bytes / 452 bb / 2 incoming refs
- **Match values:** method
- **Strings touched:** plate_side;invalid block type;invalid code lengths set;invalid literal/lengths set;NODE_PRE_REFRACT_BLEND;invalid distances set;incorrect data check;incorrect length check;invalid distance too far back;invalid distance code;invalid literal/length code;invalid code -- missing end-of-block;invalid bit length repeat;too many length or distance symbols;invalid stored block lengths;header crc mismatch;unknown header flags set;unknown compression method;incorrect header check;invalid window size
- **Callers:** FUN_7100012ef0;FUN_71000c04e0
- **Callees:** Libz_SigloMiddlewareInfo;FUN_710002a6c0;FUN_710002a9c0;FUN_710002a9d0;FUN_710002b180;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_7100028420__7100028420.c)  [cfg](../decompiled/FUN_7100028420__7100028420.mmd)
- **Clone hash:** `ce1835ef9754c84e`

```c

int FUN_7100028420(long *param_1,int param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  void *__dest;
  undefined4 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  undefined1 *puVar19;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  ulong uVar27;
  undefined2 uVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  uint *puVar32;
  long lVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
// ... (1612 more lines)
```

## 7. `FUN_7100099da0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100099da0`  (offset `0x99da0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100099da0(long param_1, long param_2)`
- **Size / BBs / Incoming:** 748 bytes / 38 bb / 5 incoming refs
- **Match values:** method
- **Strings touched:** Heap is not set in the argument of the resource destruction method.
- **Callers:** FUN_7100099d40;FUN_710009a090;FUN_71000a4aa0;FUN_71000a4d10;FUN_71000a4d90
- **Callees:** FUN_71000339b0;FUN_71000380b0;FUN_710003a200;FUN_710003a3b0;FUN_710008a740;FUN_710008b320;FUN_7100093660;FUN_710009cc10;FUN_710009d030;FUN_71000afa50;FUN_71000afe20;<EXTERNAL>::nn::util::BinaryFileHeader::GetFirstBlock
- **Files:** [decomp](../decompiled/FUN_7100099da0__7100099da0.c)  [cfg](../decompiled/FUN_7100099da0__7100099da0.mmd)
- **Clone hash:** `d8adc3baddf6e9e5`

```c

void FUN_7100099da0(long param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  if (param_2 == 0) {
    FUN_7100093660();
    lVar3 = *(long *)(param_1 + 0x538);
  }
  else {
    *(long *)(param_1 + 0x458) = param_2;
    lVar3 = *(long *)(param_1 + 0x538);
  }
  if (lVar3 != 0) {
    *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
    (**(code **)(**(long **)(param_1 + 0x458) + 0x18))();
  }
  if (*(long *)(param_1 + 0x4b0) != 0) {
    lVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
    FUN_71000380b0(lVar3);
    *(undefined8 *)(param_1 + 0x4b0) = 0;
  }
  if (*(long *)(param_1 + 0x4f8) != 0) {
    lVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
    FUN_71000380b0(lVar3);
    *(undefined8 *)(param_1 + 0x4f8) = 0;
  }
  plVar1 = (long *)(param_1 + 0x450);
  FUN_710009cc10(param_1 + 0x4c0,*(undefined8 *)(param_1 + 0x10),plVar1);
  FUN_710009d030(param_1 + 0x508,*(undefined8 *)(param_1 + 0x10),plVar1);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
// ... (73 more lines)
```

## 8. `FUN_7100232a70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100232a70`  (offset `0x232a70`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100232a70(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Method
- **Strings touched:** CallProtocolMethod
- **Files:** [decomp](../decompiled/FUN_7100232a70__7100232a70.c)  [cfg](../decompiled/FUN_7100232a70__7100232a70.mmd)
- **Clone hash:** `1d06627b961a4b5c`

```c

char * FUN_7100232a70(void)

{
  return "CallProtocolMethod";
}


```

