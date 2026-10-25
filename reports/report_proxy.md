# proxy (funcs=13, hits=41)

Top 50 functions by hit count

## 1. `FUN_710000bdc0`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000bdc0`  (offset `0xbdc0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000bdc0(size_t * param_1, uint param_2, size_t * param_3, size_t * param_4, size_t * param_5, size_t * param_6, size_t * param_7, size_t * param_8)`
- **Size / BBs / Incoming:** 2860 bytes / 144 bb / 1 incoming refs
- **Match values:** proxy;Proxy
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

## 2. `FUN_710001f340`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710001f340`  (offset `0x1f340`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710001f340(long param_1, undefined8 * param_2, byte * * param_3, byte * * param_4, byte * * param_5, byte * * param_6, byte * * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12036 bytes / 695 bb / 1 incoming refs
- **Match values:** proxy;PROXY
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

## 3. `FUN_710000fb30`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000fb30`  (offset `0xfb30`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000fb30(long param_1, uint * param_2, size_t * param_3, uint * param_4, uint * param_5, uint * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4824 bytes / 291 bb / 1 incoming refs
- **Match values:** proxy;Proxy
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

## 4. `FUN_7100022610`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100022610`  (offset `0x22610`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100022610(long param_1, long param_2, byte * * param_3, byte * * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1332 bytes / 82 bb / 2 incoming refs
- **Match values:** proxy
- **Strings touched:** https;select_item;Unsupported proxy '%s', libcurl is built without the HTTPS-proxy support.;socks5h;socks5;socks4a;socks4;socks;http:;chara/chara_4/chara_4_;Invalid IPv6 address format
;No valid port number in proxy string (%s)
;plate_side;Please URL encode %% as %%25, see RFC 6874.
;Unsupported proxy scheme for '%s'
- **Callers:** FUN_710001f340
- **Callees:** FUN_7100015de0;FUN_7100016040;FUN_7100017490;FUN_7100022250;FUN_7100024310;FUN_71000272a0;FUN_71000272c0;<EXTERNAL>::strlen;<EXTERNAL>::strchr;FUN_71039c00b0;<EXTERNAL>::strncmp;<EXTERNAL>::strstr;<EXTERNAL>::isxdigit
- **Files:** [decomp](../decompiled/FUN_7100022610__7100022610.c)  [cfg](../decompiled/FUN_7100022610__7100022610.mmd)
- **Clone hash:** `07ca499bd7ac8eaa`

```c

int FUN_7100022610(long param_1,long param_2,byte **param_3,byte **param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  byte **ppbVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  size_t sVar12;
  byte **ppbVar13;
  byte **__s;
  byte **ppbVar14;
  byte **__s_00;
  uint uVar15;
  char *local_68;
  byte *local_60;
  byte *local_58;
  
  iVar7 = (int)param_4;
  local_60 = (byte *)0x0;
  local_58 = (byte *)0x0;
  ppbVar13 = param_3;
  pcVar9 = strstr((char *)param_3,"://");
  __s_00 = param_3;
  if (pcVar9 == (char *)0x0) {
LAB_7100022794:
    if (iVar7 - 4U < 4) {
      pcVar9 = strchr((char *)__s_00,0x40);
joined_r0x0071000227b0:
      bVar6 = true;
      iVar8 = iVar7;
    }
// ... (223 more lines)
```

## 5. `FUN_710000edf0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000edf0`  (offset `0xedf0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000edf0(long * param_1, long param_2, undefined8 param_3, char * param_4, uint param_5, ulong param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 668 bytes / 36 bb / 2 incoming refs
- **Match values:** Proxy
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

## 6. `FUN_710000c9d0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000c9d0`  (offset `0xc9d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710000c9d0(void)`
- **Size / BBs / Incoming:** 7016 bytes / 461 bb / 2 incoming refs
- **Match values:** Proxy
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

## 7. `FUN_7100022dc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100022dc0`  (offset `0x22dc0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100022dc0(char * param_1, long * * * * * * param_2, uint param_3, undefined8 param_4, long * * * * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1228 bytes / 57 bb / 1 incoming refs
- **Match values:** proxy
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

## 8. `FUN_710001edb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710001edb0`  (offset `0x1edb0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710001edb0(long * * * * * * * param_1, uint param_2)`
- **Size / BBs / Incoming:** 276 bytes / 19 bb / 1 incoming refs
- **Match values:** proxy
- **Strings touched:** chara/chara_4/chara_4_;unknown proxytype option given
- **Callers:** FUN_7100002f80
- **Callees:** FUN_7100016040;FUN_7100022dc0;FUN_7100023290
- **Files:** [decomp](../decompiled/FUN_710001edb0__710001edb0.c)  [cfg](../decompiled/FUN_710001edb0__710001edb0.mmd)
- **Clone hash:** `795288f2da558a8e`

```c

ulong FUN_710001edb0(long *******param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long ******pppppplVar3;
  long *plVar4;
  long *plVar5;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  
  if (*(char *)((long)param_1 + 0x817) == '\0') {
    return 0;
  }
  plVar5 = (long *)(ulong)param_2;
  if (*(char *)((long)param_1 + 0x816) == '\0') {
    if (*(char *)((long)param_1 + 0x813) == '\0') {
      if (param_2 == 1) {
        pppppplVar3 = param_1[0x1d];
        plVar4 = (long *)(ulong)*(ushort *)(param_1 + 0x34);
        goto LAB_710001eddc;
      }
      pppppplVar3 = param_1[0x1b];
    }
    else {
      pppppplVar3 = param_1[0x20];
      if (param_2 == 1) {
        plVar4 = (long *)(ulong)*(ushort *)(param_1 + 0x34);
        goto LAB_710001eddc;
      }
    }
    if (*(char *)((long)param_1 + 0x814) == '\0') {
      plVar4 = (long *)(ulong)*(uint *)(param_1 + 0x33);
    }
    else {
      plVar4 = (long *)(ulong)*(uint *)((long)param_1 + 0x19c);
    }
  }
// ... (27 more lines)
```

## 9. `FUN_7100004a10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100004a10`  (offset `0x4a10`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_7100004a10(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 344 bytes / 12 bb / 2 incoming refs
- **Match values:** proxy
- **Strings touched:** Could not resolve %s: %s;proxy
- **Callers:** FUN_7100005f10;FUN_7100009d00
- **Callees:** FUN_7100004840;FUN_7100005940;FUN_71000086c0;FUN_7100016040;FUN_7100017740;FUN_7100017750;<EXTERNAL>::nnosLockMutex;<EXTERNAL>::nnosUnlockMutex
- **Files:** [decomp](../decompiled/FUN_7100004a10__7100004a10.c)  [cfg](../decompiled/FUN_7100004a10__7100004a10.mmd)
- **Clone hash:** `e64f1fed004671aa`

```c

undefined4
FUN_7100004a10(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [12];
  
  lVar10 = *param_1;
  lVar9 = param_1[0x14b];
  *param_2 = 0;
  if (lVar9 == 0) {
    uVar7 = 6;
  }
  else {
    nnosLockMutex(*(undefined8 *)(lVar9 + 0x18));
    iVar2 = *(int *)(lVar9 + 0x20);
    nnosUnlockMutex(*(undefined8 *)(lVar9 + 0x18));
    if (iVar2 == 0) {
      auVar11 = FUN_7100017740();
      uVar6 = *(undefined8 *)(lVar10 + 0xa70);
      uVar5 = FUN_7100017750(auVar11._0_8_,auVar11._8_4_,*(long *)(lVar10 + 0xa68),(int)uVar6);
      uVar5 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
      if (*(int *)(lVar9 + 8) == 0) {
        uVar8 = 1;
        *(undefined4 *)(lVar9 + 8) = 1;
      }
      else {
        uVar3 = *(int *)(lVar9 + 8) << (*(long *)(lVar9 + 0x10) <= (long)uVar5);
        uVar8 = 0xfa;
// ... (39 more lines)
```

## 10. `FUN_7100013550`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100013550`  (offset `0x13550`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7100013550(long * param_1, ulong param_2, undefined8 param_3, char * param_4)`
- **Size / BBs / Incoming:** 424 bytes / 12 bb / 1 incoming refs
- **Match values:** Proxy
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

## 11. `FUN_7100004910`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100004910`  (offset `0x4910`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_7100004910(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 244 bytes / 10 bb / 4 incoming refs
- **Match values:** proxy
- **Strings touched:** Could not resolve %s: %s;proxy
- **Callers:** FUN_7100003840;FUN_7100009d00;FUN_7100022dc0;FUN_7100023290
- **Callees:** FUN_7100004200;FUN_7100004840;FUN_7100005940;FUN_7100016040;FUN_71000281b0
- **Files:** [decomp](../decompiled/FUN_7100004910__7100004910.c)  [cfg](../decompiled/FUN_7100004910__7100004910.mmd)
- **Clone hash:** `bc92e83457dcde9f`

```c

undefined4
FUN_7100004910(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  iVar3 = FUN_71000281b0((long *)param_1[0x14b]);
  if (iVar3 == 0) {
    uVar4 = 0;
    *(undefined1 *)(param_1 + 0x14a) = 1;
  }
  else {
    lVar5 = param_1[0x14b];
    uVar4 = FUN_7100005940(param_1,*(int *)(lVar5 + 0x34),*(long *)(lVar5 + 0x38));
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x14a) = 1;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = param_1[0x149];
  }
  if (param_1[0x149] == 0) {
    bVar2 = *(char *)((long)param_1 + 0x816) != '\0';
    pcVar1 = "host";
    if (bVar2) {
      pcVar1 = "proxy";
    }
    uVar4 = 5;
    if (!bVar2) {
      uVar4 = 6;
    }
    FUN_7100016040(*param_1,(byte *)"Could not resolve %s: %s",pcVar1,param_1[0x147],param_5,param_6
                   ,param_7,param_8);
    FUN_7100004840(param_1 + 0x147);
    lVar5 = param_1[0x149];
// ... (11 more lines)
```

## 12. `FUN_7100023290`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023290`  (offset `0x23290`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100023290(ulong param_1, char * param_2, byte * param_3, long * param_4, long * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2432 bytes / 134 bb / 1 incoming refs
- **Match values:** proxy
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

## 13. `FUN_7100027520`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100027520`  (offset `0x27520`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_7100027520(long param_1)`
- **Size / BBs / Incoming:** 244 bytes / 7 bb / 1 incoming refs
- **Match values:** Proxy
- **Strings touched:** 
Error: nn::nifm::GetCurrentProxySetting() failed. Err Desc: %d


- **Callers:** FUN_710001f340
- **Callees:** FUN_7100008270;<EXTERNAL>::strncpy;<EXTERNAL>::nn::nifm::GetCurrentProxySetting
- **Files:** [decomp](../decompiled/FUN_7100027520__7100027520.c)  [cfg](../decompiled/FUN_7100027520__7100027520.mmd)
- **Clone hash:** `c774bb4ddd50bc59`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_7100027520(long param_1)

{
  uint uVar1;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_d0 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
// ... (37 more lines)
```

