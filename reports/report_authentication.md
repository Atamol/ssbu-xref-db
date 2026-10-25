# authentication (funcs=5, hits=18)

Top 50 functions by hit count

## 1. `FUN_7100023290`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023290`  (offset `0x23290`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100023290(ulong param_1, char * param_2, byte * param_3, long * param_4, long * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2432 bytes / 134 bb / 1 incoming refs
- **Match values:** authentication
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

## 2. `FUN_710024a590`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024a590`  (offset `0x24a590`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710024a590(void)`
- **Size / BBs / Incoming:** 52 bytes / 1 bb / 2 incoming refs
- **Match values:** Authentication
- **Strings touched:** NODE_PRE_REFRACT_BLEND;AuthenticationInfo
- **Callees:** FUN_71001b47e0
- **Files:** [decomp](../decompiled/FUN_710024a590__710024a590.c)  [cfg](../decompiled/FUN_710024a590__710024a590.mmd)
- **Clone hash:** `b47dbccc54073589`

```c

void FUN_710024a590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_710509cc08;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  FUN_71001b47e0((long)param_1,"AuthenticationInfo",-1);
  return;
}


```

## 3. `FUN_710024a610`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024a610`  (offset `0x24a610`)
- **Namespace:** `Global`
- **Signature:** `bool __cdecl FUN_710024a610(undefined8 param_1, long param_2)`
- **Size / BBs / Incoming:** 76 bytes / 3 bb / 2 incoming refs
- **Match values:** Authentication
- **Strings touched:** NODE_PRE_REFRACT_BLEND;AuthenticationInfo
- **Callees:** FUN_71001b4e00;FUN_710022b360
- **Files:** [decomp](../decompiled/FUN_710024a610__710024a610.c)  [cfg](../decompiled/FUN_710024a610__710024a610.mmd)
- **Clone hash:** `0e7b977521a3af71`

```c

bool FUN_710024a610(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"AuthenticationInfo");
  if (bVar1) {
    return true;
  }
  bVar1 = FUN_710022b360(param_1,param_2);
  return bVar1;
}


```

## 4. `FUN_710000f090`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000f090`  (offset `0xf090`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710000f090(long * param_1, uint param_2, byte * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 420 bytes / 22 bb / 2 incoming refs
- **Match values:** Authentication
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

## 5. `FUN_710024a5d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024a5d0`  (offset `0x24a5d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710024a5d0(void)`
- **Size / BBs / Incoming:** 20 bytes / 1 bb / 2 incoming refs
- **Match values:** Authentication
- **Strings touched:** NODE_PRE_REFRACT_BLEND;AuthenticationInfo
- **Callees:** FUN_71001b4e00
- **Files:** [decomp](../decompiled/FUN_710024a5d0__710024a5d0.c)  [cfg](../decompiled/FUN_710024a5d0__710024a5d0.mmd)
- **Clone hash:** `7e79737c53aea7c3`

```c

bool FUN_710024a5d0(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"AuthenticationInfo");
  return bVar1;
}


```

