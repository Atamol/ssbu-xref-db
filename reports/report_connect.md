# connect (funcs=125, hits=305)

Top 50 functions by hit count

## 1. `FUN_710000bdc0`  (hits=20)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000bdc0`  (offset `0xbdc0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000bdc0(size_t * param_1, uint param_2, size_t * param_3, size_t * param_4, size_t * param_5, size_t * param_6, size_t * param_7, size_t * param_8)`
- **Size / BBs / Incoming:** 2860 bytes / 144 bb / 1 incoming refs
- **Match values:** CONNECT;Connect;connect
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

## 2. `FUN_7100023290`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023290`  (offset `0x23290`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100023290(ulong param_1, char * param_2, byte * param_3, long * param_4, long * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2432 bytes / 134 bb / 1 incoming refs
- **Match values:** connect;Connect
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

## 3. `FUN_710001f340`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710001f340`  (offset `0x1f340`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710001f340(long param_1, undefined8 * param_2, byte * * param_3, byte * * param_4, byte * * param_5, byte * * param_6, byte * * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12036 bytes / 695 bb / 1 incoming refs
- **Match values:** Connect;connect
- **Strings touched:** Illegal characters found in URL;select_item;Bad URL, colon is first character;file:;%*15[^
/:]:%[^
];%[^
];localhost/;NODE_PRE_REFRACT_BLEND;127.0.0.1/;File drive letters are only accepted in MSDOS/Windows.;%15[^
/:]:%3[/]%[^
/?#]%[^
];Bad URL;%[^
/?#]%[^
];Unwillingly accepted illegal URL using %d slash%s!
;%s://%s%s;Invalid file://hostname/, expected localhost or 127.0.0.1 or none;dys_yoga03_l_03_set;DICT.;LDAP.;IMAP.;SMTP.;Rebuilt URL to: %s
;Protocol "%s" not supported or disabled in libcurl;<url> malformed;plate_side;Please URL encode %% as %%25, see RFC 6874.
;chara/chara_4/chara_4_;Invalid IPv6 address format
;%s://%s;Warning: CURLOPT_PROXYAUTOCONFIG is 1 (default), so options set via CURLOPT_PROXY* are ignored.
;memory shortage;no_proxy;...
- **Callers:** FUN_710001f290
- **Callees:** FUN_7100002af0;FUN_7100002bd0;FUN_7100004200;FUN_7100004360;FUN_7100004400;FUN_7100004690;FUN_71000060b0;FUN_71000067e0;FUN_71000068f0;FUN_7100007ef0;FUN_7100007fd0;FUN_7100008270;FUN_71000093f0;FUN_710000bbe0;FUN_710000bbf0;FUN_710000c980;...
- **Files:** [decomp](../decompiled/FUN_710001f340__710001f340.c)  [cfg](../decompiled/FUN_710001f340__710001f340.mmd)
- **Clone hash:** `49a38eb5ed8786c3`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710001f340(long param_1,undefined8 *param_2,byte **param_3,byte **param_4,byte **param_5,
                  byte **param_6,byte **param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  size_t sVar16;
  byte **ppbVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  long *plVar21;
  byte **ppbVar22;
  undefined8 uVar23;
  code *pcVar24;
  code *pcVar25;
  int *piVar26;
  byte bVar27;
  char cVar28;
  undefined1 uVar29;
  uint uVar30;
  undefined4 uVar31;
  char *pcVar32;
// ... (2158 more lines)
```

## 4. `FUN_7100022dc0`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100022dc0`  (offset `0x22dc0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100022dc0(char * param_1, long * * * * * * param_2, uint param_3, undefined8 param_4, long * * * * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1228 bytes / 57 bb / 1 incoming refs
- **Match values:** connect;Connect
- **Strings touched:** SOCKS4%s: connecting to HTTP proxy %s port %d
;SOCKS4 communication to %s:%d
;Too long SOCKS proxy name, can't use!
;Connection time-out;SOCKS4 connect to IPv4 %s (locally resolved)
;Failed to send SOCKS4 connect request.;select_item;SOCKS4 connection to %s not supported
;Failed to resolve "%s" for SOCKS4 connect.;SOCKS4 reply has wrong version, version should be 4.;Failed to receive SOCKS4 connect request ack.;SOCKS4%s request granted.
;Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.;chara/chara_4/chara_4_;Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed.;Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client.;Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids.
- **Callers:** FUN_710001edb0
- **Callees:** FUN_7100002af0;FUN_7100004910;FUN_7100005ba0;FUN_7100005f10;FUN_71000060d0;FUN_7100013730;FUN_7100015800;FUN_7100015de0;FUN_7100016040;FUN_71000162c0;FUN_7100016980;<EXTERNAL>::strlen;<EXTERNAL>::memcpy;<EXTERNAL>::strcpy
- **Files:** [decomp](../decompiled/FUN_7100022dc0__7100022dc0.c)  [cfg](../decompiled/FUN_7100022dc0__7100022dc0.mmd)
- **Clone hash:** `993701ac13500851`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_7100022dc0(char *param_1,long ******param_2,uint param_3,undefined8 param_4,long *******param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  size_t sVar7;
  size_t sVar8;
  long *************ppppppppppppplVar9;
  char *pcVar10;
  undefined8 uVar11;
  long ************pppppppppppplVar12;
  long *************ppppppppppppplVar13;
  ulong uVar14;
  long ******pppppplVar15;
  long *************ppppppppppppplVar16;
  long lVar17;
  long ************pppppppppppplVar18;
  long ***********local_1a8 [8];
  undefined2 local_168;
  undefined1 local_166;
  undefined1 local_165;
  undefined4 local_164;
  char local_160;
  char local_15f [255];
  long *************local_58;
  
  pppppplVar15 = *param_5;
  iVar2 = *(int *)(param_5 + 0x27);
  uVar3 = *(uint *)((long)param_5 + (long)(int)param_4 * 4 + 600);
  ppppppppppppplVar16 = (long *************)(ulong)param_3;
  uVar11 = 1;
// ... (180 more lines)
```

## 5. `FUN_710000fb30`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000fb30`  (offset `0xfb30`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000fb30(long param_1, uint * param_2, size_t * param_3, uint * param_4, uint * param_5, uint * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4824 bytes / 291 bb / 1 incoming refs
- **Match values:** Connect;connect
- **Strings touched:** dys_yoga03_l_03_set;HTTP/;Content-Length:;NODE_PRE_REFRACT_BLEND;no chunk, no close, no size. Assume close to signal end
; HTTP/%1d.%1d%c%3d; HTTP/2 %d;Lying server, not serving HTTP/2
;Keep sending data to get tossed away!
;chara/chara_4/chara_4_; RTSP/%d.%d %3d;HTTP error before end of send, keep sending
; HTTP %3d;HTTP 1.0, assume close after body
;Content-Type:;Server:;Proxy-Connection:;keep-alive;HTTP/1.0 proxy connection set to keep alive!
;Negative content-length: %ld, closing after transfer
;close;HTTP/1.1 proxy connection set close!
;Connection:;select_item;HTTP/1.0 connection set to keep alive!
;Transfer-Encoding:;chunked;identity;deflate;x-gzip;Content-Encoding:;Content-Range:;...
- **Callers:** FUN_7100017ae0
- **Callees:** FUN_71000012c0;FUN_7100004200;FUN_710000bba0;FUN_710000e840;FUN_710000e940;FUN_710000f090;FUN_710000f6f0;FUN_7100012920;FUN_7100013750;FUN_7100014250;FUN_7100014410;FUN_7100014fc0;FUN_7100015de0;FUN_7100015ed0;FUN_7100016040;FUN_71000167d0;...
- **Files:** [decomp](../decompiled/FUN_710000fb30__710000fb30.c)  [cfg](../decompiled/FUN_710000fb30__710000fb30.mmd)
- **Clone hash:** `137d2d0fd72772c7`

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_710000fb30(long param_1,uint *param_2,size_t *param_3,uint *param_4,uint *param_5,
                    uint *param_6,undefined8 param_7,undefined8 param_8)

{
  uint *param4;
  uint *param3;
  uint *param3_00;
  long *plVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  void *__dest;
  char *pcVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  size_t sVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  size_t sVar17;
  char *pcVar18;
  size_t __n;
  byte *pbVar19;
  uint *puVar20;
  long lVar21;
  char cVar22;
  long lVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  undefined1 auVar26 [16];
  undefined8 local_70;
// ... (801 more lines)
```

## 6. `FUN_7100186b50`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100186b50`  (offset `0x186b50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100186b50(void)`
- **Size / BBs / Incoming:** 884 bytes / 38 bb / 3 incoming refs
- **Match values:** Connect
- **Strings touched:** ConnectStationJob::ConnectionSucceeded;ConnectStationJob::ConnectionFailed;ConnectStationJob::WaitForConnection
- **Callees:** FUN_71000b41f0;FUN_71000b4260;FUN_71000bce50;FUN_7100193a40;FUN_71001adfc0;FUN_71001ae030;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100186b50__7100186b50.c)  [cfg](../decompiled/FUN_7100186b50__7100186b50.mmd)
- **Clone hash:** `833398189df648ca`

```c

undefined8 FUN_7100186b50(long *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int aiStack_a8 [4];
  int aiStack_98 [4];
  int aiStack_88 [4];
  int aiStack_78 [4];
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  lVar3 = FUN_7100193a40(DAT_71052adfc0);
  uVar4 = FUN_71001adfc0(lVar3,*(int *)((long)param_1 + 100));
  if ((uVar4 & 1) == 0) {
    param_1[6] = (long)FUN_7100187090;
    param_1[7] = 0;
    pcVar7 = "ConnectStationJob::WaitForConnection";
    *(undefined4 *)((long)param_1 + 100) = 0;
  }
  else {
    piVar8 = (int *)param_1[0xd];
    if ((piVar8 != (int *)0x0) && ((char)piVar8[10] != '\0')) {
      if (2 < *piVar8 - 2U) {
        FUN_71000b4260(piVar8);
      }
      param_1[0xd] = 0;
      plVar5 = (long *)FUN_7100193a40(DAT_71052adfc0);
      FUN_71001ae030(plVar5,*(int *)((long)param_1 + 100));
      lVar3 = param_1[0xe];
      *(undefined4 *)((long)param_1 + 100) = 0;
// ... (124 more lines)
```

## 7. `FUN_7101a2b570`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a2b570`  (offset `0x1a2b570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a2b570(undefined * * param_1, undefined8 param_2, undefined * * param_3, long * * * * * * * * * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 22080 bytes / 1202 bb / 1 incoming refs
- **Match values:** connect
- **Strings touched:** disconnect_off;indicator_%d;disconnect_on;mel_chara_select_lv_n;cp_level_%d;hand_catch;set_lct_controller_entry;btn_anim;set_txt_btn;set_parts_lct;set_txt_count;dys_yoga03_l_03_set;mnu_convention_session_time;controller_max;controller_fp;chara/chara_4/chara_4_;ready_in;ready_out
- **Callers:** FUN_7101a31860
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710137bc30;FUN_71016ea290;FUN_71016ea960;FUN_71016f6340;FUN_710175dfc0;FUN_7101764000;FUN_71019eb330;FUN_71019f08a0;FUN_71019f1410;FUN_7101a000c0;FUN_7101a029b0;FUN_7101a04c80;FUN_7101a06920;FUN_7101a06ef0;...
- **Files:** [decomp](../decompiled/FUN_7101a2b570__7101a2b570.c)  [cfg](../decompiled/FUN_7101a2b570__7101a2b570.mmd)
- **Clone hash:** `9f20780a0c7432be`

```c

/* WARNING: Removing unreachable block (ram,0x007101a2fb0c) */
/* WARNING: Removing unreachable block (ram,0x007101a2d6d8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a2b570(undefined **param_1,undefined8 param_2,undefined **param_3,
                   long ************param_4,long ****param_5,ulong param_6,undefined8 param_7,
                   undefined8 param_8)

{
  undefined **ppuVar1;
  float *pfVar2;
  byte bVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  long ***********ppppppppppplVar18;
  ulong uVar19;
  ulong uVar20;
  void *__dest;
  undefined1 *puVar21;
  long *********ppppppppplVar22;
  long **********pppppppppplVar23;
  undefined **ppuVar24;
  long *plVar25;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
// ... (4049 more lines)
```

## 8. `FUN_71000f0ae0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f0ae0`  (offset `0xf0ae0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71000f0ae0(long param_1)`
- **Size / BBs / Incoming:** 1396 bytes / 55 bb / 3 incoming refs
- **Match values:** Connect
- **Strings touched:** NexConnectStationJob::ResolveCurrentAddress;ConnectStationJob::ConnectionFailed;NexConnectStationJob::PrepareNatTraversal;NexConnectStationJob::PrepareNatTraversalByRelay
- **Callees:** FUN_71000b40e0;FUN_71000b41f0;FUN_71000b4260;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_71000c0860;FUN_71000c36d0;FUN_71000c4cd0;FUN_71000c5330;FUN_71000c5390;FUN_71000c5af0;FUN_71001602e0;FUN_7100160300;FUN_7100160320;...
- **Files:** [decomp](../decompiled/FUN_71000f0ae0__71000f0ae0.c)  [cfg](../decompiled/FUN_71000f0ae0__71000f0ae0.mmd)
- **Clone hash:** `edabe3619378abc7`

```c

ulong FUN_71000f0ae0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  ErrorResultVariant *this;
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  long local_80 [2];
  int local_70 [4];
  ulong local_60;
  undefined4 local_58 [2];
  
  plVar1 = DAT_71052acd90;
  plVar9 = (long *)(param_1 + 0x80);
  iVar6 = FUN_71001602e0((long)plVar9);
  uVar7 = FUN_71000c5330((long)plVar1,iVar6);
  if ((uVar7 & 1) == 0) {
    local_60 = 0;
    FUN_71000bb5d0(&local_60);
    if ((local_60 <= *(ulong *)(param_1 + 0x100)) && (*(int *)(param_1 + 0x108) == 1)) {
      uVar14 = 0x640000;
      uVar7 = 4;
      goto LAB_71000f0dfc;
    }
// ... (190 more lines)
```

## 9. `FUN_71021539b0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021539b0`  (offset `0x21539b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021539b0(void)`
- **Size / BBs / Incoming:** 6144 bytes / 7 bb / 1 incoming refs
- **Match values:** CONNECT
- **Strings touched:** FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_START;FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIT_FRAME;FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE;FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE;FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_OBAKYUMU_OBJECT_ID;FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_OBAKYUMU_CONNECTOR_OBJECT_ID;FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_TERM;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOP;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_CHARGE_MELEE_NO_RANDOM;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_BUOYANCY;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_FINAL_IS_ROCKET_BELT_ATTACHED;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_CRITICAL_HIT_CAMERA;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DEBUG_DISCHARGE;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_CATCH_SEARCH;FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_MARIO_STATUS_KIND_SPECIAL_LW_CHARGE;FIGHTER_LUIGI_LINK_NO_START;FIGHTER_LUIGI_LINK_NO_OBAKYUMU;FIGHTER_LUIGI_LINK_NO_PLUNGER;FIGHTER_LUIGI_LINK_NO_CRITICAL_HIT;FIGHTER_LUIGI_LINK_NO_TERM;FIGHTER_LUIGI_KINETIC_ENERGY_ID_START;FIGHTER_LUIGI_KINETIC_ENERGY_ID_TERM;FIGHTER_KINETIC_TYPE_LUIGI_START;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_S;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_AIR_S;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_S_RAM;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_S_END;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_AIR_S_END;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_LW;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_AIR_LW;FIGHTER_KINETIC_TYPE_LUIGI_SPECIAL_HI_FALL;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021539b0__71021539b0.c)  [cfg](../decompiled/FUN_71021539b0__71021539b0.mmd)
- **Clone hash:** `ddb0b6dd3546db66`

```c

void FUN_71021539b0(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIT_FRAME",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_OBAKYUMU_OBJECT_ID",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_OBAKYUMU_CONNECTOR_OBJECT_ID"
                 ,(undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOP",
                 (undefined **)0x200000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_CHARGE_MELEE_NO_RANDOM",
                 (undefined **)0x200000e1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUIGI_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_BUOYANCY",
                 (undefined **)0x200000e2,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (686 more lines)
```

## 10. `FUN_71000f0790`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f0790`  (offset `0xf0790`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f0790(void)`
- **Size / BBs / Incoming:** 600 bytes / 20 bb / 5 incoming refs
- **Match values:** Connect
- **Strings touched:** ConnectStationJob::ConnectionFailed;NexConnectStationJob::ResolveCurrentAddress;NexConnectStationJob::WaitForNatTraversalCompleted;NexConnectStationJob::WaitForNatTraversalStarted
- **Callees:** FUN_71000b41f0;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000c5390;FUN_71000c59b0;FUN_71000c5af0;FUN_7100160300;FUN_7100161fb0;FUN_7100193a00;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f0790__71000f0790.c)  [cfg](../decompiled/FUN_71000f0790__71000f0790.mmd)
- **Clone hash:** `10ab3b03bfa88c96`

```c

undefined8 FUN_71000f0790(long param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  ErrorResultVariant *this;
  char acStack_84 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  ulong uStack_50;
  undefined8 uStack_48;
  
  iVar6 = *(int *)(DAT_71052acd90 + 0xb4);
  if (*(char *)(param_1 + 0x78) != '\0') {
    lVar2 = FUN_7100161fb0(DAT_71052add68);
    bVar1 = FUN_7100160300(lVar2 + 8);
    if (bVar1) {
      iVar6 = *(int *)(DAT_71052acd90 + 0xb8) + iVar6;
    }
    bVar1 = FUN_7100160300(param_1 + 0x80);
    if (bVar1) {
      iVar6 = *(int *)(DAT_71052acd90 + 0xb8) + iVar6;
    }
  }
  uStack_50 = 0;
  FUN_71000bb5d0(&uStack_50);
  if (*(ulong *)(param_1 + 0x100) < uStack_50) {
    puVar7 = *(undefined4 **)(param_1 + 0x68);
    this = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
    aiStack_70[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    uStack_48._0_4_ = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)&uStack_48);
// ... (57 more lines)
```

## 11. `FUN_7100002f80`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100002f80`  (offset `0x2f80`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100002f80(long * * * * * * * param_1, uint param_2, undefined1 * param_3, undefined8 param_4, char * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1760 bytes / 111 bb / 1 incoming refs
- **Match values:** connect;Connect
- **Strings touched:** Connection time-out;Connection failed
;After %ldms connect time, move on!
;connect to %s port %ld failed: %s
;Failed to connect to %s port %ld: %s
- **Callers:** FUN_7100009d00
- **Callees:** FUN_7100002c90;FUN_7100003840;FUN_7100005ba0;FUN_710000b540;FUN_7100015020;FUN_7100015800;FUN_7100015de0;FUN_7100016040;FUN_71000175d0;FUN_7100017740;FUN_7100017750;FUN_710001edb0;FUN_710001eed0;<EXTERNAL>::nnsocketGetLastErrno;<EXTERNAL>::nnsocketClose;<EXTERNAL>::nnsocketGetSockOpt;...
- **Files:** [decomp](../decompiled/FUN_7100002f80__7100002f80.c)  [cfg](../decompiled/FUN_7100002f80__7100002f80.mmd)
- **Clone hash:** `9888bff88fea6960`

```c

/* WARNING: Type propagation algorithm not settling */

int FUN_7100002f80(long *******param_1,uint param_2,undefined1 *param_3,undefined8 param_4,
                  char *param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  int iVar13;
  long *****ppppplVar14;
  long ******pppppplVar15;
  undefined8 uVar16;
  long ******pppppplVar17;
  long *****ppppplVar18;
  long *******ppppppplVar19;
  long *****ppppplVar20;
  long ******pppppplVar21;
  long ******pppppplVar22;
  long ******pppppplVar23;
  long ******pppppplVar24;
  long ******pppppplVar25;
  long lVar26;
  ulong uVar27;
  undefined1 auVar28 [12];
  int local_dc;
  long *****local_9c [6];
  undefined4 local_6c [3];
  
  lVar26 = (long)(int)param_2;
// ... (298 more lines)
```

## 12. `FUN_7100187090`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100187090`  (offset `0x187090`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100187090(long * param_1)`
- **Size / BBs / Incoming:** 348 bytes / 20 bb / 2 incoming refs
- **Match values:** Connect
- **Strings touched:** ConnectStationJob::ConnectionSucceeded;ConnectStationJob::ConnectionFailed
- **Callees:** FUN_71000b41f0;FUN_71000b4260;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100187090__7100187090.c)  [cfg](../decompiled/FUN_7100187090__7100187090.mmd)
- **Clone hash:** `9d122a22638f7133`

```c

undefined8 FUN_7100187090(long *param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  int *piVar4;
  int local_50 [4];
  int aiStack_40 [4];
  undefined4 local_28 [2];
  
  lVar2 = param_1[0xe];
  if (*(int *)(lVar2 + 0x48) == 5) {
    param_1[6] = (long)FUN_7100186f80;
    param_1[7] = 0;
    pcVar3 = "ConnectStationJob::ConnectionSucceeded";
  }
  else {
    piVar4 = (int *)param_1[0xd];
    if ((piVar4 != (int *)0x0) && ((char)piVar4[10] != '\0')) {
      if (2 < *piVar4 - 2U) {
        FUN_71000b4260(piVar4);
        lVar2 = param_1[0xe];
      }
      param_1[0xd] = 0;
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x48) == 4)) {
        *(undefined4 *)(lVar2 + 0x48) = 6;
        return 1;
      }
      return 1;
    }
    if (*(ulong *)(DAT_71052ac580 + 0x30) < (ulong)param_1[0xb]) {
      uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
      if ((uVar1 & 1) == 0) {
        return 5;
      }
    }
    else if (piVar4 != (int *)0x0) {
      if (2 < *piVar4 - 2U) {
// ... (19 more lines)
```

## 13. `FUN_710000c9d0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000c9d0`  (offset `0xc9d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710000c9d0(void)`
- **Size / BBs / Incoming:** 7016 bytes / 461 bb / 2 incoming refs
- **Match values:** Connect
- **Strings touched:** User-Agent:;Referer:;Cookie:;Referer: %s
;select_item;Accept-Encoding:;Accept-Encoding: %s
;Connection:;%s, TE
TE: gzip
;Connection: TE
TE: gzip
;Transfer-Encoding:;chunked;Transfer-Encoding: chunked
;Host:;dys_yoga03_l_03_set;Host: %s%s%s
;Host: %s%s%s:%hu
;Content-Type:;Accept:;Accept: */*
;plate_side;File already completely uploaded;ftp://;;type=;Range:;Chunky upload is not supported by HTTP 1.0;Range: bytes=%s
;ftp://%s:%s@%s;Content-Range:;Content-Range: bytes %s%ld/%ld
;Content-Range: bytes 0-%ld/%ld
;Content-Range: bytes %s/%ld
;...
- **Callees:** FUN_7100002080;FUN_7100002540;FUN_7100007ef0;FUN_7100007fd0;FUN_710000bba0;FUN_710000e840;FUN_710000ec90;FUN_710000f280;FUN_710000f530;FUN_710000f600;FUN_710000f6f0;FUN_710000f7f0;FUN_710000fa20;FUN_7100011ba0;FUN_7100011c00;FUN_7100012300;...
- **Files:** [decomp](../decompiled/FUN_710000c9d0__710000c9d0.c)  [cfg](../decompiled/FUN_710000c9d0__710000c9d0.mmd)
- **Clone hash:** `30388a151ac3798e`

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_710000c9d0(long *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                    ulong *param_5,ulong param_6,ulong param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  size_t __n;
  size_t sVar11;
  char *pcVar12;
  size_t sVar13;
  long *plVar14;
  void *pvVar15;
  byte *pbVar16;
  char *pcVar17;
  char *pcVar18;
  FILE *pFVar19;
  undefined *puVar20;
  long *plVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 uVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
// ... (1114 more lines)
```

## 14. `FUN_7100188180`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100188180`  (offset `0x188180`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100188180(void)`
- **Size / BBs / Incoming:** 192 bytes / 7 bb / 2 incoming refs
- **Match values:** connect
- **Strings touched:** DisconnectStationJob::WaitForDisconnection;DisconnectStationJob::DisconnectionSucceeded
- **Callees:** FUN_71000bb680;FUN_71000beb20;FUN_710019ee10;FUN_710019eea0
- **Files:** [decomp](../decompiled/FUN_7100188180__7100188180.c)  [cfg](../decompiled/FUN_7100188180__7100188180.mmd)
- **Clone hash:** `f8e80722a933aca5`

```c

undefined8 FUN_7100188180(long param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  code *pcVar7;
  long lVar8;
  
  lVar5 = *(long *)(param_1 + 0x68);
  if (*(byte *)(lVar5 + 0x38) < 0x20) {
    FUN_710019ee10(*(long **)(lVar5 + 0x98),(uint)*(byte *)(lVar5 + 0x38),0);
  }
  else {
    bVar2 = FUN_71000beb20(lVar5 + 0x10);
    if (!bVar2) {
      pcVar7 = FUN_71001882c0;
      uVar4 = 0;
      pcVar6 = "DisconnectStationJob::DisconnectionSucceeded";
      goto LAB_7100188228;
    }
    FUN_710019eea0(*(long **)(*(long *)(param_1 + 0x68) + 0x98),*(long *)(param_1 + 0x68) + 0x10);
  }
  lVar5 = DAT_71052ac580;
  iVar1 = *(int *)(param_1 + 0x78);
  plVar3 = FUN_71000bb680();
  lVar5 = *(long *)(lVar5 + 0x30);
  lVar8 = *plVar3;
  uVar4 = 5;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(long *)(param_1 + 0x70) = lVar5 + lVar8 * iVar1;
  pcVar7 = FUN_71001883b0;
  pcVar6 = "DisconnectStationJob::WaitForDisconnection";
LAB_7100188228:
  *(code **)(param_1 + 0x30) = pcVar7;
  *(undefined8 *)(param_1 + 0x38) = 0;
// ... (4 more lines)
```

## 15. `FUN_7100187ff0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100187ff0`  (offset `0x187ff0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100187ff0(void)`
- **Size / BBs / Incoming:** 396 bytes / 12 bb / 2 incoming refs
- **Match values:** connect;Connect
- **Strings touched:** DisconnectStationJob::SendDisconnectionRequest;DisconnectStationJob::CutRouteOfRelayConnection
- **Callees:** FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_7100161fa0;FUN_7100193a30;FUN_71001aca60;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100187ff0__7100187ff0.c)  [cfg](../decompiled/FUN_7100187ff0__7100187ff0.mmd)
- **Clone hash:** `ec34c86a39fd8a56`

```c

void FUN_7100187ff0(int *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  ulong auStack_50 [2];
  undefined4 auStack_38 [2];
  
  if (param_3 == 0) {
    uVar4 = 0x10c07;
  }
  else {
    if (*(int *)(param_3 + 0x48) == 5) {
      param_2[0xd] = param_3;
      *(undefined1 *)((long)param_2 + 0x7c) = 0;
      auStack_50[0] = 0;
      FUN_71000bb5d0(auStack_50);
      lVar2 = param_2[0xc];
      plVar1 = FUN_71000bb680();
      param_2[0xb] = auStack_50[0] + *plVar1 * (long)(int)lVar2;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[6] = (long)FUN_7100188180;
      param_2[7] = 0;
      param_2[8] = (long)"DisconnectStationJob::SendDisconnectionRequest";
      lVar2 = FUN_7100193a30(DAT_71052adfc0);
      if (lVar2 != 0) {
        lVar2 = FUN_7100161fa0(DAT_71052add68);
        if (*(long *)(lVar2 + 0x98) != 0) {
          lVar2 = FUN_7100193a30(DAT_71052adfc0);
          lVar3 = FUN_7100161fa0(DAT_71052add68);
          FUN_71001aca60((int *)auStack_50,lVar2,(uint)*(byte *)(*(long *)(lVar3 + 0x98) + 0x38),
                         (uint)*(byte *)(param_2[0xd] + 0x38),(undefined1 *)auStack_38);
          if (((int)auStack_50[0] == 0) && (auStack_38[0]._0_1_ != *(Result *)(param_2[0xd] + 0x38))
             ) {
            param_2[6] = (long)FUN_7100188240;
            param_2[7] = 0;
            param_2[8] = (long)"DisconnectStationJob::CutRouteOfRelayConnection";
// ... (18 more lines)
```

## 16. `FUN_71000f1410`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f1410`  (offset `0xf1410`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f1410(void)`
- **Size / BBs / Incoming:** 448 bytes / 10 bb / 2 incoming refs
- **Match values:** Connect
- **Strings touched:** ConnectStationJob::ConnectionFailed;NexConnectStationJob::ResolveCurrentAddress;NexConnectStationJob::WaitForNatTraversalStartedByRelay
- **Callees:** FUN_71000b41f0;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000c5390;FUN_71000c59b0;FUN_71000c5af0;FUN_7100160500;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f1410__71000f1410.c)  [cfg](../decompiled/FUN_71000f1410__71000f1410.mmd)
- **Clone hash:** `0b36351b768e0fe0`

```c

undefined8 FUN_71000f1410(long param_1)

{
  long *plVar1;
  char *pcVar2;
  code *pcVar3;
  long lVar4;
  undefined4 *puVar5;
  ErrorResultVariant *this;
  char acStack_84 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  ulong uStack_50;
  undefined8 uStack_48;
  
  plVar1 = (long *)(param_1 + 0x80);
  FUN_7100160500((long)plVar1,0);
  uStack_50 = 0;
  FUN_71000bb5d0(&uStack_50);
  if (*(ulong *)(param_1 + 0x100) < uStack_50) {
    puVar5 = *(undefined4 **)(param_1 + 0x68);
    this = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
    aiStack_70[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    uStack_48._0_4_ = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)&uStack_48);
    FUN_71000bce50(aiStack_60,aiStack_70);
    FUN_71000b41f0(puVar5,aiStack_60);
    lVar4 = DAT_71052acd90;
    aiStack_70[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
    nn::err::ErrorResultVariant::operator=(this,(Result *)&uStack_48);
    FUN_71000bce50(aiStack_80,aiStack_70);
    FUN_71000c5af0(lVar4,plVar1,aiStack_80,(uint)(*(char *)(param_1 + 0x78) == '\0'));
    FUN_71000c5390(DAT_71052acd90,plVar1,1,1);
    *(code **)(param_1 + 0x30) = FUN_7100186ed0;
    *(undefined8 *)(param_1 + 0x38) = 0;
// ... (29 more lines)
```

## 17. `FUN_71000f1060`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f1060`  (offset `0xf1060`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f1060(void)`
- **Size / BBs / Incoming:** 936 bytes / 26 bb / 2 incoming refs
- **Match values:** Connect
- **Strings touched:** NexConnectStationJob::PrepareNatTraversal;NexConnectStationJob::WaitForNatTraversalCompleted;ConnectStationJob::ConnectionFailed
- **Callees:** FUN_71000b40e0;FUN_71000b41f0;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000c5390;FUN_71000c5af0;FUN_7100138620;FUN_7100160300;FUN_7100160990;FUN_7100161fb0;FUN_7100193a00;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f1060__71000f1060.c)  [cfg](../decompiled/FUN_71000f1060__71000f1060.mmd)
- **Clone hash:** `ac215ab973ea1997`

```c

uint FUN_71000f1060(long param_1)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  ErrorResultVariant *this;
  int aiStack_80 [4];
  int aiStack_70 [4];
  ulong uStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined4 auStack_48 [2];
  
  if (*(int *)(param_1 + 0x108) == 1) {
    iVar10 = *(int *)((long)DAT_71052acd90 + 0xb4);
    lVar5 = FUN_7100161fb0(DAT_71052add68);
    bVar2 = FUN_7100160300(lVar5 + 8);
    if (bVar2) {
      iVar10 = (int)DAT_71052acd90[0x17] + iVar10;
    }
    bVar2 = FUN_7100160300(param_1 + 0x80);
    if ((bVar2) || (*(char *)(*(long *)(param_1 + 0x70) + 0x38) == -2)) {
      iVar10 = (int)DAT_71052acd90[0x17] + iVar10;
    }
    plVar6 = FUN_71000bb680();
    lVar5 = *plVar6;
    lStack_58 = 0;
    FUN_71000bb5d0(&lStack_58);
    lStack_58 = lStack_58 + lVar5 * iVar10;
LAB_71000f12f8:
// ... (94 more lines)
```

## 18. `FUN_71000f17c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f17c0`  (offset `0xf17c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f17c0(void)`
- **Size / BBs / Incoming:** 1012 bytes / 45 bb / 3 incoming refs
- **Match values:** Connect
- **Strings touched:** NexConnectStationJob::ResolveCurrentAddress;ConnectStationJob::ConnectionFailed
- **Callees:** FUN_71000b41f0;FUN_71000bb5d0;FUN_71000bce50;FUN_71000bcf30;FUN_71000c0860;FUN_71000c4cd0;FUN_71000c5330;FUN_71000c5390;FUN_71000c5af0;FUN_71001602e0;FUN_7100160300;FUN_7100160320;FUN_7100160340;FUN_71001603a0;FUN_7100161fb0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;...
- **Files:** [decomp](../decompiled/FUN_71000f17c0__71000f17c0.c)  [cfg](../decompiled/FUN_71000f17c0__71000f17c0.mmd)
- **Clone hash:** `af6b9636d639fd93`

```c

ulong FUN_71000f17c0(long param_1)

{
  long *plVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  int *piVar9;
  ulong uVar10;
  char *pcVar11;
  ErrorResultVariant *this;
  int aiStack_a8 [4];
  int aiStack_98 [4];
  int aiStack_88 [4];
  int aiStack_78 [4];
  int aiStack_68 [4];
  ulong uStack_58;
  undefined4 auStack_48 [2];
  
  lVar7 = DAT_71052acd90;
  plVar1 = (long *)(param_1 + 0x80);
  iVar5 = FUN_71001602e0((long)plVar1);
  uVar6 = FUN_71000c5330(lVar7,iVar5);
  if ((uVar6 & 1) == 0) {
    uStack_58 = 0;
    FUN_71000bb5d0(&uStack_58);
    if ((uStack_58 <= *(ulong *)(param_1 + 0x100)) && (*(int *)(param_1 + 0x108) == 1)) {
      uVar6 = 0x640000;
      uVar10 = 4;
      goto LAB_71000f1afc;
    }
    lVar7 = FUN_7100161fb0(DAT_71052add68);
    bVar2 = FUN_71001603a0((long)plVar1,lVar7 + 8);
    FUN_71000bce50(aiStack_68,(int *)(param_1 + 0x10c));
    if (*(int *)(param_1 + 0x108) == 3) {
// ... (126 more lines)
```

## 19. `FUN_71018c2cb0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018c2cb0`  (offset `0x18c2cb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018c2cb0(int * param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1420 bytes / 82 bb / 1 incoming refs
- **Match values:** connect
- **Strings touched:** %s_is_connected;full_key_con;joy_con;gc_con;mode_empty_03;is_reset;exit_code;decided_button_id
- **Callees:** FUN_710062dc20;FUN_71018c8fa0;FUN_7101d2f860;FUN_7101d384c0;FUN_71032b23e0;FUN_71033149a0;FUN_7103375650;FUN_710372d940;FUN_71037aea50;FUN_71038f4d40;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71018c2cb0__71018c2cb0.c)  [cfg](../decompiled/FUN_71018c2cb0__71018c2cb0.mmd)
- **Clone hash:** `208b3771816dd550`

```c

void FUN_71018c2cb0(int *param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  ulong local_98;
  char local_90 [64];
  
  lVar15 = DAT_710532f8d0;
  if (param_1[0x55] == 0) {
    if ((char)param_1[0x3e70] == '\0') {
      uVar6 = FUN_71032b23e0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8),
                             0x116b904091);
      FUN_71033149a0(lVar15,uVar6,1,param_4,param_5,param_6,param_7,param_8);
    }
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x60) + 0x80) + 0x5c) != 3) {
      return;
    }
    local_90[0] = '\0';
    local_98 = 0;
    FUN_71018c8fa0(param_1[0x68],(byte *)&local_98);
    lVar15 = *(long *)(*(long *)(param_1 + 0x60) + 0x80);
    *(char *)(lVar15 + 0x51) = (char)(local_98 >> 8);
    *(char *)(lVar15 + 0x52) = (char)(local_98 >> 0x10);
// ... (233 more lines)
```

## 20. `FUN_7100184270`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100184270`  (offset `0x184270`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100184270(void)`
- **Size / BBs / Incoming:** 272 bytes / 10 bb / 2 incoming refs
- **Match values:** connect
- **Strings touched:** LocalDisconnectNetworkJob::WaitForCancel;LocalDisconnectNetworkJob::WaitDisconnectNetwork;NODE_PRE_REFRACT_BLEND
- **Callees:** FUN_71000b41f0;FUN_71000b4300;FUN_71000b4820;FUN_71000bce50;FUN_71000bcf30;FUN_7100172e00;FUN_7100172eb0
- **Files:** [decomp](../decompiled/FUN_7100184270__7100184270.c)  [cfg](../decompiled/FUN_7100184270__7100184270.mmd)
- **Clone hash:** `c3588256c0bc6df7`

```c

undefined8 FUN_7100184270(long param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int aiStack_50 [4];
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    FUN_7100172e00(aiStack_30,*(long **)(*(long *)(param_1 + 0x68) + 0x400));
    if (aiStack_30[0] != 0) {
      return 5;
    }
    FUN_7100172eb0(aiStack_40,*(long **)(*(long *)(param_1 + 0x68) + 0x400),
                   *(undefined4 **)(param_1 + 0x60));
    FUN_71000bcf30(aiStack_30,aiStack_40);
    if (aiStack_30[0] != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_50,(int *)(*(long *)(param_1 + 0x60) + 4));
      FUN_71000b41f0(puVar1,aiStack_50);
      *(undefined8 *)(param_1 + 0x58) = 0;
      return 1;
    }
    FUN_71000b4820(*(long *)(*(long *)(param_1 + 0x68) + 0x400),1);
    *(code **)(param_1 + 0x30) = FUN_7100184460;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LocalDisconnectNetworkJob::WaitDisconnectNetwork";
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    *(code **)(param_1 + 0x30) = FUN_7100184410;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LocalDisconnectNetworkJob::WaitForCancel";
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
// ... (2 more lines)
```

## 21. `FUN_71000f15d0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f15d0`  (offset `0xf15d0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71000f15d0(long param_1)`
- **Size / BBs / Incoming:** 496 bytes / 12 bb / 2 incoming refs
- **Match values:** Connect
- **Strings touched:** select_item;NexConnectStationJob::WaitForNatTraversalCompletedByRelay;ConnectStationJob::ConnectionFailed
- **Callees:** FUN_71000b41f0;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000c5390;FUN_71000c5af0;FUN_7100160990;FUN_7100193a00;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f15d0__71000f15d0.c)  [cfg](../decompiled/FUN_71000f15d0__71000f15d0.mmd)
- **Clone hash:** `764e71f281626c10`

```c

ulong FUN_71000f15d0(long param_1)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  undefined4 *puVar8;
  ErrorResultVariant *this;
  int aiStack_80 [4];
  long local_70;
  undefined4 local_68;
  int aiStack_60 [4];
  ulong local_50;
  undefined4 local_48 [2];
  
  if (*(int *)(param_1 + 0x108) == 1) {
    iVar1 = *(int *)(DAT_71052acd90 + 0xb4);
    plVar3 = FUN_71000bb680();
    lVar7 = *plVar3;
    local_70 = 0;
    FUN_71000bb5d0(&local_70);
    *(code **)(param_1 + 0x30) = FUN_71000f17c0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(long *)(param_1 + 0x100) = local_70 + lVar7 * ((long)iVar1 + 5000);
LAB_71000f166c:
    pcVar6 = "NexConnectStationJob::WaitForNatTraversalCompletedByRelay";
  }
  else {
    if (*(int *)(param_1 + 0x108) - 2U < 3) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(code **)(param_1 + 0x30) = FUN_71000f17c0;
      goto LAB_71000f166c;
    }
    if ((*(char *)(*(long *)(param_1 + 0x70) + 0x38) != -2) &&
       (bVar2 = FUN_7100193a00(DAT_71052adfc0), (bVar2 & 1) == 0)) {
// ... (38 more lines)
```

## 22. `FUN_7100175970`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100175970`  (offset `0x175970`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100175970(int * param_1, long param_2, undefined4 * param_3, int param_4)`
- **Size / BBs / Incoming:** 176 bytes / 6 bb / 2 incoming refs
- **Match values:** connect
- **Strings touched:** LocalForceDisconnectNetworkJob::WaitDisconnected;LocalForceDisconnectNetworkJob::WaitHostMigrationEnd
- **Callers:** FUN_71001804e0
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100175970__7100175970.c)  [cfg](../decompiled/FUN_7100175970__7100175970.mmd)
- **Clone hash:** `829babfcc8c2f00e`

```c

void FUN_7100175970(int *param_1,long param_2,undefined4 *param_3,int param_4)

{
  char *pcVar1;
  code *pcVar2;
  int local_40 [4];
  undefined4 local_28 [2];
  
  *(undefined4 **)(param_2 + 0x58) = param_3;
  FUN_71000b40e0(param_3);
  FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
  if (param_4 == 0) {
    pcVar2 = FUN_7100175a20;
    pcVar1 = "LocalForceDisconnectNetworkJob::WaitHostMigrationEnd";
  }
  else {
    if (param_4 != 1) goto LAB_71001759dc;
    pcVar2 = FUN_7100175b00;
    pcVar1 = "LocalForceDisconnectNetworkJob::WaitDisconnected";
  }
  *(code **)(param_2 + 0x30) = pcVar2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = pcVar1;
LAB_71001759dc:
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_40);
  return;
}


```

## 23. `FUN_71001867a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001867a0`  (offset `0x1867a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001867a0(void)`
- **Size / BBs / Incoming:** 420 bytes / 17 bb / 4 incoming refs
- **Match values:** Connect
- **Strings touched:** ConnectStationJob::WaitRequestAck;ConnectStationJob::ConnectionFailed
- **Callees:** FUN_71000b4260;FUN_71000bb5d0;FUN_71000bb680;FUN_7100186950
- **Files:** [decomp](../decompiled/FUN_71001867a0__71001867a0.c)  [cfg](../decompiled/FUN_71001867a0__71001867a0.mmd)
- **Clone hash:** `a90a5410bc6d9d9d`

```c

undefined8 FUN_71001867a0(long *param_1)

{
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uStack_28;
  
  piVar2 = (int *)param_1[0xd];
  if ((piVar2 == (int *)0x0) || ((char)piVar2[10] == '\0')) {
    if (*(char *)(param_1[0xe] + 0x78) == '\0') {
      uStack_28 = 0;
      FUN_71000bb5d0(&uStack_28);
      *(char *)(param_1[0xe] + 0x78) = (char)uStack_28 + (char)(uStack_28 / 0xfe) * '\x02' + '\x02';
    }
    uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    if (((uVar3 & 1) == 0) && (bVar1 = FUN_7100186950((long)param_1), bVar1)) {
      if (0x1f < *(byte *)(param_1[0xe] + 0x38)) {
        *(undefined8 *)(param_1[0xe] + 0x80) = *DAT_71052add68;
      }
      *(undefined1 *)((long)param_1 + 0x79) = 0;
      lVar6 = DAT_71052ac580;
      lVar5 = param_1[0xc];
      plVar4 = FUN_71000bb680();
      lVar6 = *(long *)(lVar6 + 0x30);
      lVar7 = *plVar4;
      param_1[6] = (long)FUN_7100186b50;
      param_1[7] = 0;
      param_1[0xb] = lVar6 + lVar7 * (int)lVar5;
      param_1[8] = (long)"ConnectStationJob::WaitRequestAck";
      return 5;
    }
    param_1[6] = (long)FUN_7100186ed0;
    param_1[7] = 0;
    param_1[8] = (long)"ConnectStationJob::ConnectionFailed";
// ... (17 more lines)
```

## 24. `FUN_71001a03a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a03a0`  (offset `0x1a03a0`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_71001a03a0(long * param_1, long * param_2, int param_3, ulong param_4)`
- **Size / BBs / Incoming:** 452 bytes / 12 bb / 1 incoming refs
- **Match values:** Connect
- **Strings touched:** ProcessConnectionRequestJob::ConnectToRequesterStation
- **Callers:** FUN_710019d240
- **Callees:** FUN_71000b4180;FUN_71000b4820;FUN_71000bb680;FUN_71000bce50;FUN_710015fd60;FUN_710015ff20;FUN_7100161fb0;FUN_7100186610;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001a03a0__71001a03a0.c)  [cfg](../decompiled/FUN_71001a03a0__71001a03a0.mmd)
- **Clone hash:** `080993e70257c946`

```c

undefined4 FUN_71001a03a0(long *param_1,long *param_2,int param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int local_f0;
  int local_e0 [4];
  ulong local_d0;
  undefined4 local_c8;
  int aiStack_50 [4];
  
  if (param_2 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    param_1[0xe] = (long)param_2;
    local_d0 = 0x80000000000;
    local_c8 = 0;
    (**(code **)(*param_2 + 0x18))(param_2,&local_d0);
    puVar6 = (undefined4 *)param_1[0xf];
    local_d0 = local_d0 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_d0 | 4));
    local_e0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&local_d0 | 4),(Result *)local_e0);
    FUN_71000bce50(aiStack_50,(int *)&local_d0);
    FUN_71000b4180(puVar6,aiStack_50);
    piVar3 = (int *)(param_1[0xe] + 0x48);
    if ((*piVar3 == 3) && ((param_4 & 1) == 0)) {
      plVar4 = *(long **)(param_1[0xe] + 0xa0);
      FUN_710015fd60(&local_d0);
      plVar2 = (long *)FUN_7100161fb0(DAT_71052add68);
      (**(code **)(*plVar2 + 0x28))(local_e0,plVar2,param_1[0xe],&local_d0);
      if ((local_e0[0] == 0) && (FUN_7100186610(plVar4), local_f0 == 0)) {
        FUN_71000b4820((long)plVar4,0);
// ... (28 more lines)
```

## 25. `FUN_71001a0590`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a0590`  (offset `0x1a0590`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001a0590(long param_1)`
- **Size / BBs / Incoming:** 208 bytes / 8 bb / 3 incoming refs
- **Match values:** Connect
- **Strings touched:** ProcessConnectionRequestJob::SendConnectionResponse
- **Callees:** FUN_71000bb680;FUN_71000bce50
- **Files:** [decomp](../decompiled/FUN_71001a0590__71001a0590.c)  [cfg](../decompiled/FUN_71001a0590__71001a0590.mmd)
- **Clone hash:** `5764aec6870e01e2`

```c

undefined8 FUN_71001a0590(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int local_30 [4];
  
  iVar1 = **(int **)(param_1 + 0x78);
  if (iVar1 == 1) {
    return 5;
  }
  if ((iVar1 - 2U < 3) && (FUN_71000bce50(local_30,*(int **)(param_1 + 0x78) + 1), local_30[0] != 0)
     ) {
    return 1;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x70) + 0xa0) + 0x58);
  lVar5 = *(long *)(param_1 + 0x58);
  plVar3 = FUN_71000bb680();
  lVar2 = 0;
  if (*plVar3 != 0) {
    lVar2 = (lVar4 - lVar5) / *plVar3;
  }
  if (0 < lVar2) {
    *(undefined8 *)(param_1 + 0x58) =
         *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0xa0) + 0x58);
  }
  *(code **)(param_1 + 0x30) = FUN_71001a0660;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "ProcessConnectionRequestJob::SendConnectionResponse";
  return 0;
}


```

## 26. `FUN_71001a4790`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a4790`  (offset `0x1a4790`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71001a4790(long * param_1, long param_2, undefined8 param_3, uint param_4)`
- **Size / BBs / Incoming:** 260 bytes / 11 bb / 1 incoming refs
- **Match values:** Connect
- **Strings touched:** select_item;ProcessUpdateMeshJob::WaitDirectConnection;ProcessUpdateMeshJob::CheckConnectionAll;ProcessUpdateMeshJob::UpdateFailed
- **Callers:** FUN_7100198e30
- **Callees:** FUN_7100193a00;FUN_71001a48a0;FUN_71001a4b30;FUN_71001a4c50;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_71001a4790__71001a4790.c)  [cfg](../decompiled/FUN_71001a4790__71001a4790.mmd)
- **Clone hash:** `a149cf7248a497ce`

```c

ulong FUN_71001a4790(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar3 = FUN_71001a48a0((long)param_1,param_2);
  if ((int)uVar3 == 4) {
    FUN_71001a4b30((long)param_1,param_4 & 1);
    if ((param_4 & 1) == 0) {
      param_1[0x1d] = 0;
    }
    else {
      *(int *)(param_1 + 0x1f) = (int)param_1[0x1f] + 1;
    }
    *(char *)((long)param_1 + 0xf5) = (char)(param_4 & 1);
    memset(param_1 + 0x10,0xff,0x20);
    *(undefined1 *)((long)param_1 + 0xf4) = 1;
    (**(code **)(*param_1 + 0x10))(param_1,1);
    uVar2 = FUN_71001a4c50((long)param_1);
    *(byte *)((long)param_1 + 0xfc) = (byte)uVar2 & 1;
    if ((uVar2 & 1) == 0) {
      param_1[6] = (long)FUN_71001a65f0;
      pcVar4 = "ProcessUpdateMeshJob::UpdateFailed";
    }
    else {
      bVar1 = FUN_7100193a00(DAT_71052adfc0);
      if ((bVar1 & 1) == 0) {
        param_1[6] = (long)FUN_71001a5e80;
        pcVar4 = "ProcessUpdateMeshJob::CheckConnectionAll";
      }
      else {
        param_1[6] = (long)FUN_71001a5780;
        pcVar4 = "ProcessUpdateMeshJob::WaitDirectConnection";
      }
    }
    param_1[7] = 0;
// ... (5 more lines)
```

## 27. `FUN_7100201e50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100201e50`  (offset `0x201e50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100201e50(void)`
- **Size / BBs / Incoming:** 1464 bytes / 82 bb / 1 incoming refs
- **Match values:** Connect
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

## 28. `FUN_71021bf990`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021bf990`  (offset `0x21bf990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021bf990(void)`
- **Size / BBs / Incoming:** 9652 bytes / 25 bb / 1 incoming refs
- **Match values:** CONNECT
- **Strings touched:** FIGHTER_MASTER_INSTANCE_WORK_ID_INT_START;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SWORD_AURA_EFFECT_HANDLE;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_GROUND_EFFECT_HANDLE;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_IMPACT_EFFECT_HANDLE;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_EFFECT_COUNT;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_TARGET_COLLISION_BUFFER_ID;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIT_WALL;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_HOP;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_DATA_ADDRESS;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_THROW_OBJECT_ID;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_THROW_OBJECT_ID_FRAME;FIGHTER_MASTER_INSTANCE_WORK_ID_INT_TERM;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_EFFECT_GROUND_LINE_POS_RATIO;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_ATTACH_PREV_POS_X;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_ATTACH_PREV_POS_Y;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_ATTACH_PREV_HIT_POS_X;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_ATTACH_PREV_HIT_POS_Y;FIGHTER_MASTER_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_START;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_CHANGE_SE;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_FLICK;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SPECIAL_N_HOP_DONE;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_EFFECT_LINE_LR;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SWORD_REQ_EFFECT_AURA;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SWORD_OFF_EFFECT_AURA;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_AIR_LASSO_IMMIDIATE;FIGHTER_MASTER_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_NONE;FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE;FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_F;FIGHTER_MASTER_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_B;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021bf990__71021bf990.c)  [cfg](../decompiled/FUN_71021bf990__71021bf990.mmd)
- **Clone hash:** `f69e7113b82d4bb8`

```c

void FUN_71021bf990(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SWORD_AURA_EFFECT_HANDLE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_GROUND_EFFECT_HANDLE",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_IMPACT_EFFECT_HANDLE",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_EFFECT_COUNT",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_LW_TARGET_COLLISION_BUFFER_ID"
                 ,(undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIT_WALL",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_HOP",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_SPECIAL_HI_DATA_ADDRESS",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_THROW_OBJECT_ID",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MASTER_INSTANCE_WORK_ID_INT_THROW_OBJECT_ID_FRAME",
// ... (1052 more lines)
```

## 29. `FUN_71001833f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001833f0`  (offset `0x1833f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001833f0(int * param_1, long param_2, undefined4 * param_3, long * param_4)`
- **Size / BBs / Incoming:** 328 bytes / 11 bb / 1 incoming refs
- **Match values:** Connect
- **Strings touched:** LocalConnectNetworkJob::WaitConnectNetwork
- **Callers:** FUN_7100181f40
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000b4820;FUN_71000bce50;FUN_71001815f0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001833f0__71001833f0.c)  [cfg](../decompiled/FUN_71001833f0__71001833f0.mmd)
- **Clone hash:** `8447264f122aecfb`

```c

void FUN_71001833f0(int *param_1,long param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  lVar1 = FUN_71001815f0(*(long **)(param_2 + 0x68),*param_4);
  if (*(byte *)(lVar1 + 8) < 7) {
    if (*(byte *)(lVar1 + 8) != 6) {
      local_48[0] = 0x641f;
      goto LAB_71001834f4;
    }
    if (*(int *)(lVar1 + 4) != (int)param_4[1]) {
      local_48[0] = 0x6c51;
      goto LAB_71001834f4;
    }
    plVar2 = *(long **)(*(long *)(param_2 + 0x68) + 0x400);
    (**(code **)(*plVar2 + 0x40))(local_48,plVar2,*(undefined8 *)(param_2 + 0x60),param_4);
    if (local_48[0] == 0) {
      *(undefined4 **)(param_2 + 0x58) = param_3;
      FUN_71000b40e0(param_3);
      FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
      FUN_71000b4820(*(long *)(*(long *)(param_2 + 0x68) + 0x400),1);
      lVar1 = *(long *)(param_2 + 0x68);
      *(undefined1 *)(lVar1 + 0x47d) = 0;
      *(undefined1 *)(lVar1 + 0x569) = 1;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) = "LocalConnectNetworkJob::WaitConnectNetwork";
      *(code **)(param_2 + 0x30) = FUN_7100183540;
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      piVar3 = local_58;
// ... (17 more lines)
```

## 30. `FUN_71000f06a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f06a0`  (offset `0xf06a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f06a0(void)`
- **Size / BBs / Incoming:** 228 bytes / 8 bb / 2 incoming refs
- **Match values:** Connect
- **Strings touched:** NexConnectStationJob::ResolveCurrentAddress;NexConnectStationJob::PrepareNatTraversal
- **Callees:** FUN_71000bb5d0;FUN_71000bb680;FUN_71000c5ad0;FUN_7100160340;FUN_7100160350
- **Files:** [decomp](../decompiled/FUN_71000f06a0__71000f06a0.c)  [cfg](../decompiled/FUN_71000f06a0__71000f06a0.mmd)
- **Clone hash:** `9f91bcc33fec9edd`

```c

undefined8 FUN_71000f06a0(long param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lStack_28;
  
  if (*(char *)(*(long *)(param_1 + 0x70) + 0x38) != -2) {
    plVar4 = (long *)(param_1 + 0x80);
    bVar3 = FUN_7100160340((long)plVar4);
    if ((((bVar3 & 1) == 0) && (*(char *)(param_1 + 0x78) != '\0')) ||
       ((bVar3 = FUN_7100160350((long)plVar4), (bVar3 & 1) == 0 &&
        (*(char *)(param_1 + 0x78) != '\0')))) {
      FUN_71000c5ad0(DAT_71052acd90,plVar4,1);
      *(code **)(param_1 + 0x30) = FUN_71000f09f0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexConnectStationJob::ResolveCurrentAddress";
      return 0;
    }
  }
  *(code **)(param_1 + 0x30) = FUN_71000f0790;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexConnectStationJob::PrepareNatTraversal";
  iVar1 = *(int *)(DAT_71052acd90 + 0xb4);
  iVar2 = *(int *)(DAT_71052acd90 + 0xb8);
  plVar4 = FUN_71000bb680();
  lVar5 = *plVar4;
  lStack_28 = 0;
  FUN_71000bb5d0(&lStack_28);
  *(long *)(param_1 + 0x100) = lStack_28 + lVar5 * ((long)iVar2 + (long)iVar1);
  return 0;
}


```

## 31. `FUN_7100188240`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100188240`  (offset `0x188240`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100188240(void)`
- **Size / BBs / Incoming:** 116 bytes / 3 bb / 2 incoming refs
- **Match values:** connect
- **Strings touched:** DisconnectStationJob::DisconnectionSucceeded
- **Callees:** FUN_710019ee10
- **Files:** [decomp](../decompiled/FUN_7100188240__7100188240.c)  [cfg](../decompiled/FUN_7100188240__7100188240.mmd)
- **Clone hash:** `b5242d1a74cb5bfe`

```c

undefined8 FUN_7100188240(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (*(byte *)(lVar1 + 0x38) < 0x20) {
    FUN_710019ee10(*(long **)(lVar1 + 0x98),(uint)*(byte *)(lVar1 + 0x38),1);
    FUN_710019ee10(*(long **)(*(long *)(param_1 + 0x68) + 0x98),
                   (uint)*(byte *)(*(long *)(param_1 + 0x68) + 0x38),1);
    lVar1 = *(long *)(param_1 + 0x68);
  }
  *(undefined4 *)(lVar1 + 0x48) = 6;
  *(code **)(param_1 + 0x30) = FUN_71001882c0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "DisconnectStationJob::DisconnectionSucceeded";
  return 5;
}


```

## 32. `FUN_7100202710`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100202710`  (offset `0x202710`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100202710(void)`
- **Size / BBs / Incoming:** 1688 bytes / 103 bb / 1 incoming refs
- **Match values:** connect
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

## 33. `FUN_71001a7ee0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a7ee0`  (offset `0x1a7ee0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001a7ee0(long * param_1, long param_2, undefined8 param_3, uint param_4)`
- **Size / BBs / Incoming:** 884 bytes / 49 bb / 1 incoming refs
- **Match values:** Connect
- **Strings touched:** select_item;ProcessUpdateMeshJob::WaitDirectConnection;ProcessUpdateMeshJob::CheckConnectionAll;ProcessUpdateMeshJob::UpdateFailed
- **Callers:** FUN_7100198e30
- **Callees:** FUN_71000bb9a0;FUN_7100193a00;FUN_71001a4b30;FUN_71001a4c50;FUN_71001a8260
- **Files:** [decomp](../decompiled/FUN_71001a7ee0__71001a7ee0.c)  [cfg](../decompiled/FUN_71001a7ee0__71001a7ee0.mmd)
- **Clone hash:** `dc7d8347de689d79`

```c

undefined8 FUN_71001a7ee0(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  char *pcVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 local_70;
  undefined4 local_68;
  
  bVar7 = *(byte *)(param_2 + 1);
  cVar3 = *(char *)(param_2 + 2);
  uVar8 = FUN_71000bb9a0((uint *)(param_2 + 4));
  if ((*(ushort *)(param_1 + 0x14) < (ushort)bVar7) ||
     ((uVar8 <= *(uint *)(param_1 + 0x1e) && ((param_4 & 1) == 0)))) {
    return 0;
  }
  if (*(char *)(param_2 + 8) == '\x02') {
    uVar15 = (ulong)*(byte *)(param_2 + 9);
    if (((char)param_1[0x19] == '\0') && (*(char *)((long)param_1 + 0xc9) == '\0')) {
      *(ushort *)((long)param_1 + 0xca) = (ushort)bVar7;
      *(char *)((long)param_1 + 0xcc) = cVar3;
      *(uint *)(param_1 + 0x1a) = uVar8;
      *(undefined1 *)((long)param_1 + 0xd4) = 2;
LAB_71001a81c0:
      bVar4 = *(byte *)(param_2 + 10);
      if (bVar4 != 0) {
// ... (131 more lines)
```

## 34. `FUN_7100186f80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100186f80`  (offset `0x186f80`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100186f80(void)`
- **Size / BBs / Incoming:** 272 bytes / 13 bb / 3 incoming refs
- **Match values:** Connect
- **Strings touched:** ConnectStationJob::ConnectionFailed
- **Callees:** FUN_71000b4180;FUN_71000b4260;FUN_71000bce50;FUN_710015e7d0;FUN_7100162430;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100186f80__7100186f80.c)  [cfg](../decompiled/FUN_7100186f80__7100186f80.mmd)
- **Clone hash:** `12124db48cc8e717`

```c

undefined8 FUN_7100186f80(long *param_1)

{
  int *piVar1;
  ulong uVar2;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar1 = (int *)param_1[0xd];
  if ((piVar1 == (int *)0x0) || ((char)piVar1[10] == '\0')) {
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((uVar2 & 1) != 0) {
      param_1[6] = (long)FUN_7100186ed0;
      param_1[7] = 0;
      param_1[8] = (long)"ConnectStationJob::ConnectionFailed";
      return 0;
    }
    if (*(byte *)(param_1[0xe] + 0x38) < 0x20) {
      FUN_7100162430(DAT_71052add68);
      FUN_710015e7d0(aiStack_40,param_1[0xe]);
    }
    piVar1 = (int *)param_1[0xd];
    if ((piVar1 != (int *)0x0) && (2 < *piVar1 - 2U)) {
      aiStack_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_50,aiStack_40);
      FUN_71000b4180(piVar1,aiStack_50);
    }
  }
  else if (2 < *piVar1 - 2U) {
    FUN_71000b4260(piVar1);
  }
  param_1[0xd] = 0;
  return 1;
// ... (2 more lines)
```

## 35. `FUN_71001a0570`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a0570`  (offset `0x1a0570`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001a0570(void)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 2 incoming refs
- **Match values:** Connect
- **Strings touched:** ProcessConnectionRequestJob::WaitInverseConnection
- **Files:** [decomp](../decompiled/FUN_71001a0570__71001a0570.c)  [cfg](../decompiled/FUN_71001a0570__71001a0570.mmd)
- **Clone hash:** `08126fbc15119952`

```c

undefined8 FUN_71001a0570(long param_1)

{
  *(char **)(param_1 + 0x40) = "ProcessConnectionRequestJob::WaitInverseConnection";
  *(code **)(param_1 + 0x30) = FUN_71001a0590;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 36. `FUN_7100009d00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100009d00`  (offset `0x9d00`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100009d00(long param_1, byte * * param_2, size_t * * * * * * * param_3, size_t * * * * * * * param_4, size_t * * * * * * * param_5, byte * * param_6, size_t * * * * * * * param_7, size_t * * * * * * * param_8)`
- **Size / BBs / Incoming:** 5688 bytes / 367 bb / 1 incoming refs
- **Match values:** Connect;connect
- **Strings touched:** Resolving timed out after %ld milliseconds;select_item;Internal error clearing splay node = %d
;Connection timed out after %ld milliseconds;Operation timed out after %ld milliseconds with %ld out of %ld bytes received;Re-used connection seems dead, get a new one
;Operation timed out after %ld milliseconds with %ld bytes received;Hostname '%s' was found in DNS cache
;dys_yoga03_l_03_set;Pipe broke: handle %p, url = %s
;In state %d with no easy_conn, bail out!

- **Callers:** FUN_7100009aa0
- **Callees:** FUN_7100002af0;FUN_7100002f80;FUN_7100004200;FUN_7100004910;FUN_7100004a10;FUN_7100005a10;FUN_7100005c60;FUN_71000067f0;FUN_7100006870;FUN_71000086c0;FUN_7100008d20;FUN_7100008fc0;FUN_710000c8f0;FUN_710000c920;FUN_710000c950;FUN_710000e660;...
- **Files:** [decomp](../decompiled/FUN_7100009d00__7100009d00.c)  [cfg](../decompiled/FUN_7100009d00__7100009d00.mmd)
- **Clone hash:** `8e0dba2c0a10b389`

```c

/* WARNING: Type propagation algorithm not settling */

int FUN_7100009d00(long param_1,byte **param_2,size_t *******param_3,size_t *******param_4,
                  size_t *******param_5,byte **param_6,size_t *******param_7,size_t *******param_8)

{
  size_t *******pppppppsVar1;
  size_t *******pppppppsVar2;
  long *plVar3;
  size_t *******pppppppsVar4;
  char cVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte **ppbVar16;
  size_t ******ppppppsVar17;
  byte **extraout_x1;
  byte **extraout_x1_00;
  byte **extraout_x1_01;
  byte **extraout_x1_02;
  byte **extraout_x1_03;
  byte **extraout_x1_04;
  byte **extraout_x1_05;
  byte **extraout_x1_06;
  byte **extraout_x1_07;
  byte **extraout_x1_08;
  byte **extraout_x1_09;
  byte **extraout_x1_10;
  byte **extraout_x1_11;
  byte **extraout_x1_12;
  byte **extraout_x1_13;
  byte **extraout_x1_14;
// ... (1163 more lines)
```

## 37. `FUN_7100187200`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100187200`  (offset `0x187200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100187200(int * param_1, long * param_2)`
- **Size / BBs / Incoming:** 160 bytes / 4 bb / 2 incoming refs
- **Match values:** Connect
- **Strings touched:** ConnectStationJob::SendRelayConnectionRequest
- **Callers:** FUN_71001a0c30;FUN_71001a7330
- **Callees:** FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100187200__7100187200.c)  [cfg](../decompiled/FUN_7100187200__7100187200.mmd)
- **Clone hash:** `129c0bb53e47e50c`

```c

void FUN_7100187200(int *param_1,long *param_2)

{
  int *piVar1;
  undefined4 in_w5;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  *(undefined4 *)(param_2 + 0xc) = in_w5;
  (**(code **)(*param_2 + 0x30))(local_38);
  if (local_38[0] == 0) {
    *(undefined1 *)(param_2[0xe] + 0xb8) = 0;
    param_2[6] = (long)FUN_71001872a0;
    param_2[7] = 0;
    param_2[8] = (long)"ConnectStationJob::SendRelayConnectionRequest";
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar1 = local_48;
  }
  else {
    piVar1 = local_38;
  }
  FUN_71000bce50(param_1,piVar1);
  return;
}


```

## 38. `FUN_7100186630`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100186630`  (offset `0x186630`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100186630(int * param_1, long * param_2, undefined4 * param_3, long param_4, long param_5, byte param_6)`
- **Size / BBs / Incoming:** 364 bytes / 8 bb / 3 incoming refs
- **Match values:** Connect
- **Strings touched:** ConnectStationJob::SendConnectionRequest
- **Callers:** FUN_71000f02e0;FUN_710011c3c0
- **Callees:** FUN_71000b1cf0;FUN_71000b4160;FUN_71000b4920;FUN_71000bce50;FUN_71000beb40;FUN_7100160230;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100186630__7100186630.c)  [cfg](../decompiled/FUN_7100186630__7100186630.mmd)
- **Clone hash:** `c3f0f84703a85a4d`

```c

void FUN_7100186630(int *param_1,long *param_2,undefined4 *param_3,long param_4,long param_5,
                   byte param_6)

{
  int iVar1;
  undefined **local_70;
  undefined4 local_68;
  undefined4 local_48 [2];
  
  if (param_4 != 0) {
    iVar1 = FUN_71000b4920((long)param_2);
    if ((iVar1 != 0) && (iVar1 = FUN_71000b4920((long)param_2), iVar1 != 5)) {
      local_70 = (undefined **)0x80000000000;
      local_68 = 0;
      (**(code **)(*param_2 + 0x28))(param_2,&local_70);
      local_70 = (undefined **)CONCAT44(local_70._4_4_,0x10c08);
      goto LAB_7100186760;
    }
    if (param_3 != (undefined4 *)0x0) {
      param_2[0xd] = (long)param_3;
      FUN_71000b4160(param_3);
      param_2[0xe] = param_4;
      FUN_7100160230(&local_70,param_5);
      FUN_71000beb40(param_4 + 0x10,(long)&local_70);
      local_70 = &PTR_FUN_7104f4a808;
      FUN_71000b1cf0();
      *(byte *)(param_2 + 0xf) = param_6 & 1;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      *(undefined1 *)(param_2[0xe] + 0xb8) = 1;
      param_2[6] = (long)FUN_71001867a0;
      param_2[7] = 0;
      param_2[8] = (long)"ConnectStationJob::SendConnectionRequest";
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      goto LAB_7100186760;
    }
  }
  local_70 = (undefined **)CONCAT44(local_70._4_4_,0x10c07);
LAB_7100186760:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_70 | 4));
// ... (7 more lines)
```

## 39. `FUN_7100008d20`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100008d20`  (offset `0x8d20`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_7100008d20(undefined8 * param_1, uint param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 660 bytes / 43 bb / 10 incoming refs
- **Match values:** Connect
- **Strings touched:** Connection cache is full, closing the oldest one.
;select_item;Connection #%ld to host %s left intact

- **Callers:** FUN_71000088e0;FUN_7100009d00
- **Callees:** FUN_71000047b0;FUN_71000060d0;FUN_7100014690;FUN_7100015de0;FUN_7100019930;FUN_710001e860;FUN_710001ec00;FUN_710001ecf0;FUN_71000272a0
- **Files:** [decomp](../decompiled/FUN_7100008d20__7100008d20.c)  [cfg](../decompiled/FUN_7100008d20__7100008d20.mmd)
- **Clone hash:** `d1ffd12931fc206a`

```c

uint FUN_7100008d20(undefined8 *param_1,uint param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  plVar6 = (long *)*param_1;
  lVar5 = *plVar6;
  if (*(char *)(lVar5 + 0x4fc8) != '\0') {
    return 0;
  }
  uVar9 = (uint)param_3;
  FUN_710001ec00(lVar5,(long)plVar6);
  FUN_71000272a0();
  *(undefined8 *)(lVar5 + 0x238) = 0;
  FUN_71000272a0();
  *(undefined8 *)(lVar5 + 0x230) = 0;
  if ((param_2 < 0x2b) && ((1L << ((ulong)param_2 & 0x3f) & 0x40004800000U) != 0)) {
    uVar9 = 1;
  }
  if (*(code **)(plVar6[0x10b] + 0x18) != (code *)0x0) {
    param_3 = (ulong)(uVar9 & 1);
    param_2 = (**(code **)(plVar6[0x10b] + 0x18))(plVar6,param_2);
  }
  uVar7 = 0x2a;
  if ((param_2 != 0x2a) && (iVar2 = FUN_7100014690(plVar6), iVar2 == 0 || param_2 != 0)) {
    uVar7 = param_2;
  }
  if (((plVar6[0x11d] + plVar6[0x121] != 0) && (*(char *)(lVar5 + 0x6ca) == '\0')) &&
     (*(char *)((long)plVar6 + 0x811) == '\0')) {
// ... (75 more lines)
```

## 40. `FUN_71000f1bc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f1bc0`  (offset `0xf1bc0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f1bc0(void)`
- **Size / BBs / Incoming:** 276 bytes / 1 bb / 2 incoming refs
- **Match values:** Connect
- **Strings touched:** ConnectStationJob::SendConnectionRequest
- **Callees:** FUN_71000b1cf0;FUN_71000bce50;FUN_71000beb40;FUN_71000c5ad0;FUN_71000c5af0;FUN_7100160230;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f1bc0__71000f1bc0.c)  [cfg](../decompiled/FUN_71000f1bc0__71000f1bc0.mmd)
- **Clone hash:** `5a026719ac9f01de`

```c

undefined8 FUN_71000f1bc0(long param_1)

{
  long *plVar1;
  long lVar2;
  int aiStack_78 [4];
  undefined **ppuStack_68;
  undefined4 uStack_60;
  undefined4 auStack_38 [2];
  
  lVar2 = *(long *)(param_1 + 0x70);
  plVar1 = (long *)(param_1 + 0x80);
  FUN_7100160230(&ppuStack_68,(long)plVar1);
  FUN_71000beb40(lVar2 + 0x10,(long)&ppuStack_68);
  ppuStack_68 = &PTR_FUN_7104f4a808;
  FUN_71000b1cf0();
  uStack_60 = 0;
  ppuStack_68 = (undefined **)0x20000;
  (**(code **)(**(long **)(param_1 + 0x70) + 0x18))(*(long **)(param_1 + 0x70),&ppuStack_68);
  lVar2 = DAT_71052acd90;
  ppuStack_68 = (undefined **)((ulong)ppuStack_68 & 0xffffffff00000000);
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&ppuStack_68 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&ppuStack_68 | 4),(Result *)auStack_38);
  FUN_71000bce50(aiStack_78,(int *)&ppuStack_68);
  FUN_71000c5af0(lVar2,plVar1,aiStack_78,(uint)(*(char *)(param_1 + 0x78) == '\0'));
  FUN_71000c5ad0(DAT_71052acd90,plVar1,(uint)*(byte *)(param_1 + 0x78));
  *(char **)(param_1 + 0x40) = "ConnectStationJob::SendConnectionRequest";
  *(code **)(param_1 + 0x30) = FUN_71001867a0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 41. `FUN_71001a0c30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a0c30`  (offset `0x1a0c30`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_71001a0c30(long * param_1, long * param_2, int param_3, ulong param_4)`
- **Size / BBs / Incoming:** 452 bytes / 12 bb / 1 incoming refs
- **Match values:** Connect
- **Strings touched:** ProcessConnectionRequestJob::WaitInverseConnection
- **Callers:** FUN_710019d240
- **Callees:** FUN_71000b4180;FUN_71000b4820;FUN_71000bb680;FUN_71000bce50;FUN_710015fd60;FUN_710015ff20;FUN_7100161fb0;FUN_7100187200;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001a0c30__71001a0c30.c)  [cfg](../decompiled/FUN_71001a0c30__71001a0c30.mmd)
- **Clone hash:** `be9a807729cd579b`

```c

undefined4 FUN_71001a0c30(long *param_1,long *param_2,int param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int local_f0 [4];
  int local_e0 [4];
  ulong local_d0;
  undefined4 local_c8;
  int aiStack_50 [4];
  
  if (param_2 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    param_1[0xe] = (long)param_2;
    local_d0 = 0x80000000000;
    local_c8 = 0;
    (**(code **)(*param_2 + 0x18))(param_2,&local_d0);
    puVar6 = (undefined4 *)param_1[0xf];
    local_d0 = local_d0 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_d0 | 4));
    local_e0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&local_d0 | 4),(Result *)local_e0);
    FUN_71000bce50(aiStack_50,(int *)&local_d0);
    FUN_71000b4180(puVar6,aiStack_50);
    piVar3 = (int *)(param_1[0xe] + 0x48);
    if ((*piVar3 == 3) && ((param_4 & 1) == 0)) {
      plVar4 = *(long **)(param_1[0xe] + 0xa0);
      FUN_710015fd60(&local_d0);
      plVar2 = (long *)FUN_7100161fb0(DAT_71052add68);
      (**(code **)(*plVar2 + 0x28))(local_e0,plVar2,param_1[0xe],&local_d0);
      if ((local_e0[0] == 0) && (FUN_7100187200(local_f0,plVar4), local_f0[0] == 0)) {
        FUN_71000b4820((long)plVar4,0);
// ... (28 more lines)
```

## 42. `FUN_71000194f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000194f0`  (offset `0x194f0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71000194f0(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 268 bytes / 13 bb / 2 incoming refs
- **Match values:** Connect;connect
- **Strings touched:** Connection died, retrying a fresh connect

- **Callers:** FUN_7100009d00
- **Callees:** FUN_7100004200;FUN_7100015de0;FUN_71000179b0;FUN_71000272c0
- **Files:** [decomp](../decompiled/FUN_71000194f0__71000194f0.c)  [cfg](../decompiled/FUN_71000194f0__71000194f0.mmd)
- **Clone hash:** `9cd6f41936a3a909`

```c

ulong FUN_71000194f0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  long lVar3;
  
  lVar3 = *param_1;
  *param_2 = 0;
  if (((((*(char *)(lVar3 + 0x6c1) == '\0') || ((*(uint *)(param_1[0x10b] + 0x80) & 0x40003) != 0))
       && (*(long *)(lVar3 + 0xe0) + *(long *)(lVar3 + 0xf0) == 0)) &&
      (*(char *)((long)param_1 + 0x812) != '\0')) &&
     (((*(char *)(lVar3 + 0x6c0) == '\0' || ((*(byte *)(param_1[0x10b] + 0x80) & 3) != 0)) &&
      (*(int *)(lVar3 + 0x8fc) != 0xb)))) {
    FUN_7100015de0(*param_1,(byte *)"Connection died, retrying a fresh connect\n",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    lVar1 = FUN_71000272c0();
    *param_2 = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
    FUN_7100004200((long)param_1,1);
    *(undefined1 *)(param_1 + 0x104) = 1;
    if (((*(byte *)(param_1[0x10b] + 0x80) & 3) != 0) &&
       (*(long *)(*(long *)(lVar3 + 600) + 0x30) != 0)) {
      uVar2 = FUN_71000179b0(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return 0;
}


```

## 43. `FUN_7100183540`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100183540`  (offset `0x183540`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100183540(void)`
- **Size / BBs / Incoming:** 280 bytes / 15 bb / 2 incoming refs
- **Match values:** Connect
- **Strings touched:** LocalConnectNetworkJob::WaitForCancel;N2nn3pia9transport11DispatchJobE;LocalConnectNetworkJob::ProcessSucceeded
- **Callees:** FUN_71000b41f0;FUN_71000b4300;FUN_71000b4990;FUN_71000bce50
- **Files:** [decomp](../decompiled/FUN_7100183540__7100183540.c)  [cfg](../decompiled/FUN_7100183540__7100183540.mmd)
- **Clone hash:** `1c2d675d49574710`

```c

undefined8 FUN_7100183540(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  piVar4 = aiStack_40;
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar2 == 1) {
      FUN_71000b4300((long)piVar2);
    }
    *(code **)(param_1 + 0x30) = FUN_71001836f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalConnectNetworkJob::WaitForCancel";
    return 0;
  }
  switch(*piVar2) {
  case 1:
    return 5;
  case 2:
    uVar3 = FUN_71000b4990(*(long *)(*(long *)(param_1 + 0x68) + 0x400));
    if ((uVar3 & 1) != 0) {
      return 5;
    }
    *(code **)(param_1 + 0x30) = FUN_7100183740;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalConnectNetworkJob::ProcessSucceeded";
    return 0;
  case 3:
    FUN_71000bce50(aiStack_30,piVar2 + 1);
    piVar4 = aiStack_30;
    break;
  case 4:
// ... (11 more lines)
```

## 44. `FUN_710011c5e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011c5e0`  (offset `0x11c5e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011c5e0(void)`
- **Size / BBs / Incoming:** 160 bytes / 1 bb / 2 incoming refs
- **Match values:** Connect
- **Strings touched:** ConnectStationJob::SendConnectionRequest
- **Callees:** FUN_71000b1cf0;FUN_71000beb40;FUN_7100160230
- **Files:** [decomp](../decompiled/FUN_710011c5e0__710011c5e0.c)  [cfg](../decompiled/FUN_710011c5e0__710011c5e0.mmd)
- **Clone hash:** `236425ffd5848892`

```c

undefined8 FUN_710011c5e0(long param_1)

{
  long lVar1;
  undefined **ppuStack_58;
  undefined4 uStack_50;
  
  lVar1 = *(long *)(param_1 + 0x70);
  FUN_7100160230(&ppuStack_58,param_1 + 0x80);
  FUN_71000beb40(lVar1 + 0x10,(long)&ppuStack_58);
  ppuStack_58 = &PTR_FUN_7104f4a808;
  FUN_71000b1cf0();
  uStack_50 = 0;
  ppuStack_58 = (undefined **)0x40000000;
  (**(code **)(**(long **)(param_1 + 0x70) + 0x18))(*(long **)(param_1 + 0x70),&ppuStack_58);
  *(char **)(param_1 + 0x40) = "ConnectStationJob::SendConnectionRequest";
  *(code **)(param_1 + 0x30) = FUN_71001867a0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 45. `FUN_71001883b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001883b0`  (offset `0x1883b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001883b0(void)`
- **Size / BBs / Incoming:** 272 bytes / 13 bb / 2 incoming refs
- **Match values:** connect
- **Strings touched:** DisconnectStationJob::DisconnectionSucceeded
- **Callees:** FUN_71000bb680;FUN_71000beb20;FUN_710019ee10;FUN_710019eea0
- **Files:** [decomp](../decompiled/FUN_71001883b0__71001883b0.c)  [cfg](../decompiled/FUN_71001883b0__71001883b0.mmd)
- **Clone hash:** `b764359a01a2c0db`

```c

undefined8 FUN_71001883b0(long param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    uVar4 = *(ulong *)(DAT_71052ac580 + 0x30);
    if (uVar4 < *(ulong *)(param_1 + 0x58)) {
      if (*(byte *)(*(long *)(param_1 + 0x68) + 0x38) < 0x20) {
LAB_710018840c:
        if (uVar4 < *(ulong *)(param_1 + 0x70)) {
          return 5;
        }
        lVar5 = *(long *)(param_1 + 0x68);
        if (*(byte *)(lVar5 + 0x38) < 0x20) {
          FUN_710019ee10(*(long **)(lVar5 + 0x98),(uint)*(byte *)(lVar5 + 0x38),0);
        }
        else {
          FUN_710019eea0(*(long **)(lVar5 + 0x98),lVar5 + 0x10);
        }
        lVar5 = DAT_71052ac580;
        iVar1 = *(int *)(param_1 + 0x78);
        plVar3 = FUN_71000bb680();
        *(long *)(param_1 + 0x70) = *(long *)(lVar5 + 0x30) + *plVar3 * (long)iVar1;
        return 5;
      }
      bVar2 = FUN_71000beb20(*(long *)(param_1 + 0x68) + 0x10);
      if (bVar2) {
        uVar4 = *(ulong *)(DAT_71052ac580 + 0x30);
        goto LAB_710018840c;
      }
    }
    *(undefined1 *)(param_1 + 0x7c) = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x48) = 6;
// ... (6 more lines)
```

## 46. `FUN_71001841c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001841c0`  (offset `0x1841c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001841c0(int * param_1, long param_2, undefined4 * param_3)`
- **Size / BBs / Incoming:** 164 bytes / 4 bb / 1 incoming refs
- **Match values:** connect
- **Strings touched:** select_item;LocalDisconnectNetworkJob::TryPrepareDisconnectNetwork
- **Callers:** FUN_71001804e0
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001841c0__71001841c0.c)  [cfg](../decompiled/FUN_71001841c0__71001841c0.mmd)
- **Clone hash:** `ddfc398289f8014f`

```c

void FUN_71001841c0(int *param_1,long param_2,undefined4 *param_3)

{
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(int *)(*(long *)(param_2 + 0x68) + 0x474) == 2) {
    *(undefined4 **)(param_2 + 0x58) = param_3;
    FUN_71000b40e0(param_3);
    FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LocalDisconnectNetworkJob::TryPrepareDisconnectNetwork";
    *(code **)(param_2 + 0x30) = FUN_7100184270;
    local_38[0] = 0;
  }
  else {
    local_38[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_38);
  return;
}


```

## 47. `FUN_71000acbc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000acbc0`  (offset `0xacbc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000acbc0(long * param_1, long param_2, undefined4 param_3)`
- **Size / BBs / Incoming:** 248 bytes / 5 bb / 1 incoming refs
- **Match values:** Connect
- **Strings touched:** ConnectionStripeSystem is already initialized.
;NODE_PRE_REFRACT_BLEND;[ConnectedStripe] Memory Allocate Error!! : %d

- **Callers:** FUN_71000a3e80
- **Callees:** FUN_7100093530;FUN_7100093660
- **Files:** [decomp](../decompiled/FUN_71000acbc0__71000acbc0.c)  [cfg](../decompiled/FUN_71000acbc0__71000acbc0.mmd)
- **Clone hash:** `a5a34ae7124153a7`

```c

void FUN_71000acbc0(long *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  if (DAT_71052ab980 != (undefined8 *)0x0) {
    FUN_7100093530();
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x30,0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 4) = param_3;
    puVar1[5] = 0;
    puVar1[2] = &DAT_3f8000003f800000;
    puVar1[3] = param_2;
    *puVar1 = &PTR_FUN_7104f4a1b8;
    puVar1[1] = &DAT_3f8000003f800000;
    *(undefined8 *)(param_2 + 0xeb8) = 0;
    *(code **)(param_2 + 0xec0) = FUN_71000ac910;
    *(undefined8 *)(param_2 + 0xed0) = 0;
    *(undefined8 *)(param_2 + 0xec8) = 0;
    *(code **)(param_2 + 0xed8) = FUN_71000aca90;
    *(code **)(param_2 + 0xee0) = FUN_71000acaf0;
    *(code **)(param_2 + 0xee8) = FUN_71000acb40;
    *(undefined8 *)(param_2 + 0xf00) = 0;
    *(undefined8 *)(param_2 + 0xef8) = 0;
    *(undefined8 *)(param_2 + 0xef0) = 0;
    *(code **)(param_2 + 0xf08) = FUN_710009d750;
    DAT_71052ab980 = puVar1;
    return;
  }
  FUN_7100093660();
  return;
}


```

## 48. `FUN_71000036e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000036e0`  (offset `0x36e0`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_71000036e0(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 340 bytes / 10 bb / 1 incoming refs
- **Match values:** Connect
- **Strings touched:** Connection time-out
- **Callers:** FUN_710001f100
- **Callees:** FUN_7100003840;FUN_7100005b80;FUN_71000086c0;FUN_7100016040;FUN_7100017740;FUN_7100017750
- **Files:** [decomp](../decompiled/FUN_71000036e0__71000036e0.c)  [cfg](../decompiled/FUN_71000036e0__71000036e0.mmd)
- **Clone hash:** `98c21b857d32e41f`

```c

int FUN_71000036e0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [12];
  
  lVar13 = *param_1;
  auVar14 = FUN_7100017740();
  lVar11 = *(long *)(lVar13 + 0x3a8);
  lVar12 = *(long *)(lVar13 + 0x3b0);
  lVar9 = *(long *)(lVar13 + 0xa68);
  bVar2 = 0 < lVar11 | 2;
  if (lVar12 < 1) {
    bVar2 = 0 < lVar11;
  }
  uVar10 = *(undefined8 *)(lVar13 + 0xa70);
  lVar4 = lVar11;
  if (lVar12 <= lVar11) {
    lVar4 = lVar12;
  }
  lVar3 = 300000;
  if (bVar2 == 2) {
    lVar3 = lVar12;
  }
  if (bVar2 != 3) {
    lVar4 = lVar3;
// ... (51 more lines)
```

## 49. `FUN_7100110e60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100110e60`  (offset `0x110e60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100110e60(void)`
- **Size / BBs / Incoming:** 1476 bytes / 128 bb / 2 incoming refs
- **Match values:** connect
- **Strings touched:** NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting;NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti;NexProcessHostMigrationJob::NexCheckOldHostDisconnection
- **Callees:** FUN_71000bb680;FUN_7100190a90;FUN_7100192e90;FUN_7100193560;FUN_7100193a30;FUN_71001a35c0;FUN_71001aca60;FUN_71001d0a10;FUN_71001f16c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100110e60__7100110e60.c)  [cfg](../decompiled/FUN_7100110e60__7100110e60.mmd)
- **Clone hash:** `8f794951245e5264`

```c

undefined8 FUN_7100110e60(long param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  code *pcVar10;
  uint auStack_58 [4];
  uint auStack_48 [4];
  undefined4 auStack_38 [2];
  
  FUN_7100192e90((int *)auStack_48,DAT_71052adfc0);
  auStack_58[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)auStack_58 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)auStack_58 | 4),(Result *)auStack_38);
  if (auStack_48[0] == auStack_58[0]) {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
LAB_7100110ed8:
    pcVar10 = FUN_71001a1d80;
    uVar6 = 0;
    pcVar9 = "NexProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100111284;
  }
  if (*(char *)(param_1 + 0xb3) != -3) goto LAB_710011125c;
  if (*(char *)(param_1 + 0xc1) != '\0') {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
    pcVar10 = FUN_71001a2450;
// ... (204 more lines)
```

## 50. `FUN_710151e4b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710151e4b0`  (offset `0x151e4b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710151e4b0(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1784 bytes / 60 bb / 2 incoming refs
- **Match values:** connect
- **Strings touched:** StateLoadAsyncForStaffRoll;StateWaitForSyncWhenBeginning;StateAppearanceProduction;StateMeleeForStaffRoll;StateEndProduction;StatePause;StateOperatorHUDDone;StateDisconnectSyncCommunication;StateResult;StateApplyParameters;StateFadeOutWhenEndingForStaffRoll;StateWaitForSyncWhenEnding
- **Callers:** FUN_7101853990
- **Callees:** FUN_7101341d50;FUN_710135a0f0;FUN_710135ac80;FUN_710135bea0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_710151e4b0__710151e4b0.c)  [cfg](../decompiled/FUN_710151e4b0__710151e4b0.mmd)
- **Clone hash:** `a57b0e3dbbb87bdf`

```c

void FUN_710151e4b0(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  ulong *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  FUN_7101341d50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateLoadAsyncForStaffRoll",(long ****)FUN_710151ebb0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateWaitForSyncWhenBeginning",(long ****)FUN_710151ec40,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateAppearanceProduction",(long ****)FUN_710151ecd0,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateMeleeForStaffRoll",(long ****)FUN_710151ed50,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateEndProduction",(long ****)FUN_710151edd0,param_4,
// ... (302 more lines)
```

