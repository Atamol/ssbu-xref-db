# timeout (funcs=2, hits=5)

Top 50 functions by hit count

## 1. `FUN_7100023290`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023290`  (offset `0x23290`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100023290(ulong param_1, char * param_2, byte * param_3, long * param_4, long * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2432 bytes / 134 bb / 1 incoming refs
- **Match values:** timeout
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

## 2. `FUN_710000bdc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000bdc0`  (offset `0xbdc0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000bdc0(size_t * param_1, uint param_2, size_t * param_3, size_t * param_4, size_t * param_5, size_t * param_6, size_t * param_7, size_t * param_8)`
- **Size / BBs / Incoming:** 2860 bytes / 144 bb / 1 incoming refs
- **Match values:** timeout
- **Strings touched:** select_item;allocate connect buffer!
;Establish HTTP proxy tunnel to %s:%hu
;%s:%hu;CONNECT;dys_yoga03_l_03_set;%s%s%s:%hu;Host:;Host: %s
;Proxy-Connection:;User-Agent:;CONNECT %s HTTP/%s
%s%s%s%s;WWW-Authenticate:;Proxy-authenticate:;chunk reading DONE
;Content-Length:;Ignoring Content-Length in CONNECT %03d response
;Ignore %ld bytes of response-body
;Connection:;close;Ignore chunked response-body
;Transfer-Encoding:;chara/chara_4/chara_4_;Ignoring Transfer-Encoding in CONNECT %03d response
;chunked;CONNECT responded chunked
;HTTP/1.%d %d;Proxy CONNECT connection closed
;Proxy CONNECT aborted;CONNECT response too large!;Received HTTP code %d from proxy after CONNECT;Failed sending CONNECT to proxy;...
- **Callers:** FUN_710000bc80
- **Callees:** FUN_7100002af0;FUN_7100003660;FUN_7100004200;FUN_7100004270;FUN_7100007fd0;FUN_710000e790;FUN_710000e840;FUN_710000e940;FUN_710000ec90;FUN_710000f090;FUN_710000f240;FUN_710000f250;FUN_710000f280;FUN_710000f530;FUN_710000f6f0;FUN_710000f7f0;...
- **Files:** [decomp](../decompiled/FUN_710000bdc0__710000bdc0.c)  [cfg](../decompiled/FUN_710000bdc0__710000bdc0.mmd)
- **Clone hash:** `a493736e9de6bf64`

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_710000bdc0(size_t *param_1,uint param_2,size_t *param_3,size_t *param_4,size_t *param_5,
                    size_t *param_6,size_t *param_7,size_t *param_8)

{
  int *piVar1;
  size_t *param3;
  size_t *psVar2;
  byte *pbVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  size_t *psVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 extraout_x1;
  byte *pbVar18;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  size_t *psVar19;
  size_t *psVar20;
  size_t sVar21;
  size_t *psVar22;
  byte *pbVar23;
  size_t *psVar24;
  ulong uVar25;
  size_t local_78;
  size_t local_70;
// ... (541 more lines)
```

