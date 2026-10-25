# url (funcs=28, hits=68)

Top 50 functions by hit count

## 1. `FUN_710001f340`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710001f340`  (offset `0x1f340`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710001f340(long param_1, undefined8 * param_2, byte * * param_3, byte * * param_4, byte * * param_5, byte * * param_6, byte * * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12036 bytes / 695 bb / 1 incoming refs
- **Match values:** url;URL
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

## 2. `FUN_710171ff00`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710171ff00`  (offset `0x171ff00`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710171ff00(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8224 bytes / 444 bb / 2 incoming refs
- **Match values:** url
- **Strings touched:** operation_id;amiibo;fighter_flags;competition_stage_flags;competition_stage_type;melee_kind;melee_rule;time_sec;stock;spirits;defence_reaction;charge;stage_gimmick;is_suddendeath;scaledown_stage;drop_bomb;speed;camera;body_size;head_option;body_option;state_option;weight;item_appear;item_flags;prize_type;prize_index;prize_value;prize_param0;prize_param1;tournament_entry_max_seconds;competition_aggregate_at;...
- **Callers:** FUN_71016c3e60;FUN_710170bda0
- **Callees:** FUN_71001b0960;FUN_71001b4910;FUN_7101684800;FUN_7101721f20;FUN_7101722330;FUN_71017224b0;FUN_7101722840;FUN_71017251e0;FUN_710172a290;FUN_7101762560;FUN_71032631a0;FUN_71032632a0;FUN_71032b30d0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;...
- **Files:** [decomp](../decompiled/FUN_710171ff00__710171ff00.c)  [cfg](../decompiled/FUN_710171ff00__710171ff00.mmd)
- **Clone hash:** `d9c66cf0b811c315`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_710171ff00(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint3 uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  int iVar15;
  long ***ppplVar16;
  long **pplVar17;
  long lVar18;
  long ****pppplVar19;
  size_t sVar20;
  undefined1 uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  byte *pbVar26;
  long ***ppplVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  int iVar31;
  long lVar32;
// ... (1501 more lines)
```

## 3. `FUN_7100017ae0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100017ae0`  (offset `0x17ae0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7100017ae0(size_t * * * * * * * param_1, long param_2, char * param_3, size_t * * * * * * * param_4, size_t * * * * * * * param_5, uint * param_6, undefined8 param_7, size_t * * * * * * * param_8)`
- **Size / BBs / Incoming:** 3632 bytes / 232 bb / 1 incoming refs
- **Match values:** url
- **Strings touched:** select/poll returned error;We are completely uploaded and fine
;NODE_PRE_REFRACT_BLEND;Ignoring the response-body
;Rewinding stream by : %zu bytes on url %s (size = %ld, maxdownload = %ld, bytecount = %ld, nread = %zd)
;Leftovers after chunking: %zu bytes
;dys_yoga03_l_03_set;Rewinding %zu bytes
;Excess found in a non pipelined read: excess = %zu, size = %ld, maxdownload = %ld, bytecount = %ld
;The requested document is not new enough
;Operation timed out after %ld milliseconds with %ld out of %ld bytes received;Done waiting for 100-continue
;Rewinding stream by : %zd bytes on url %s (zero-length body)
;plate_side;Excess found in a non pipelined read: excess = %zd url = %s (zero-length body)
;we are done reading and this is set to close, stop send
;transfer closed with outstanding read data remaining;Operation timed out after %ld milliseconds with %ld bytes received;Failed writing data;select_item;%s in chunked-encoding;transfer closed with %ld bytes remaining to read;Failed to alloc scratch buffer!;Unrecognized content encoding type. libcurl understands `identity', `deflate' and `gzip' content encodings.;The entire document is already downloaded;HTTP server doesn't seem to support byte ranges. Cannot resume.;The requested document is not old enough
;Simulate a HTTP 304 response!

- **Callers:** FUN_7100009d00
- **Callees:** FUN_7100002af0;FUN_7100004200;FUN_71000086c0;FUN_71000093f0;FUN_710000bba0;FUN_710000fb30;FUN_7100012930;FUN_7100012dc0;FUN_7100012df0;FUN_71000130b0;FUN_7100014700;FUN_7100015020;FUN_71000151d0;FUN_7100015270;FUN_7100015800;FUN_7100015de0;...
- **Files:** [decomp](../decompiled/FUN_7100017ae0__7100017ae0.c)  [cfg](../decompiled/FUN_7100017ae0__7100017ae0.mmd)
- **Clone hash:** `05edffe8f78d3329`

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_7100017ae0(size_t *******param_1,long param_2,char *param_3,size_t *******param_4,
                    size_t *******param_5,uint *param_6,undefined8 param_7,size_t *******param_8)

{
  uint *puVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar10;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long extraout_x1_04;
  long extraout_x1_05;
  long extraout_x1_06;
  long extraout_x1_07;
  long extraout_x1_08;
  undefined8 extraout_x1_09;
  long extraout_x1_10;
  long extraout_x1_11;
  long extraout_x1_12;
  long extraout_x1_13;
  long extraout_x1_14;
  char *pcVar15;
  long extraout_x1_15;
  size_t ************ppppppppppppsVar16;
// ... (707 more lines)
```

## 4. `FUN_71000027a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000027a0`  (offset `0x27a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000027a0(long param_1, int param_2, undefined8 param_3, long param_4, char * param_5, undefined1 * param_6, char * param_7, long param_8)`
- **Size / BBs / Incoming:** 800 bytes / 44 bb / 2 incoming refs
- **Match values:** url
- **Strings touched:** # Netscape HTTP Cookie File
# https://curl.haxx.se/docs/http-cookies.html
# This file was generated by libcurl! Edit at your own risk.

;#HttpOnly_;FALSE;%s%s%s	%s	%s	%s	%ld	%s	%s;#
# Fatal libcurl error
;plate_side;WARNING: failed to save cookies in %s

- **Callers:** FUN_7100019730;FUN_7100019bf0
- **Callees:** FUN_7100000f70;FUN_7100002540;FUN_7100007fd0;FUN_7100015de0;FUN_7100016b40;FUN_7100016ba0;FUN_7100016c80;FUN_71000272a0;FUN_7100027620;FUN_71000277b0;FUN_7100027870;FUN_7100027950;FUN_7100027980;<EXTERNAL>::strcmp;<EXTERNAL>::fclose
- **Files:** [decomp](../decompiled/FUN_71000027a0__71000027a0.c)  [cfg](../decompiled/FUN_71000027a0__71000027a0.mmd)
- **Clone hash:** `75558b1a64dff8ab`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000027a0(long param_1,int param_2,undefined8 param_3,long param_4,char *param_5,
                   undefined1 *param_6,char *param_7,long param_8)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  FILE *__stream;
  undefined8 *puVar4;
  char *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(long *)(param_1 + 0x738) == 0) {
    if ((param_2 != 0) && (*(undefined8 **)(param_1 + 0x9b8) != (undefined8 *)0x0)) {
      FUN_7100016c80(*(undefined8 **)(param_1 + 0x9b8));
      *(undefined8 *)(param_1 + 0x9b8) = 0;
    }
    FUN_7100016b40(param_1,2);
  }
  else {
    if (*(long *)(param_1 + 0x9b8) != 0) {
      FUN_7100000f70(param_1);
    }
    FUN_7100016b40(param_1,2);
    plVar5 = *(long **)(param_1 + 0x9c8);
    if ((plVar5 != (long *)0x0) && (plVar5[3] != 0)) {
      __s2 = *(char **)(param_1 + 0x738);
      lVar3 = FUN_7100027620((long *)0x0);
      if ((long *)*plVar5 != (long *)0x0) {
        plVar7 = (long *)*plVar5;
        plVar8 = (long *)0x0;
        do {
          while (plVar6 = plVar7, plVar7 = (long *)*plVar6, plVar6[6] != 0 && plVar6[6] < lVar3) {
// ... (91 more lines)
```

## 5. `FUN_710000fb30`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000fb30`  (offset `0xfb30`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000fb30(long param_1, uint * param_2, size_t * param_3, uint * param_4, uint * param_5, uint * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4824 bytes / 291 bb / 1 incoming refs
- **Match values:** URL
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

## 6. `FUN_7100026170`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100026170`  (offset `0x26170`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100026170(long * param_1, int param_2, char * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 248 bytes / 14 bb / 3 incoming refs
- **Match values:** URL
- **Strings touched:** Unrecognized parameter value passed via CURLOPT_SSLVERSION;CURL_SSLVERSION_MAX incompatible with CURL_SSLVERSION
- **Callers:** FUN_710000bc80;FUN_710000e660;FUN_710000e730
- **Callees:** FUN_7100015020;FUN_7100016040;FUN_71000265b0
- **Files:** [decomp](../decompiled/FUN_7100026170__7100026170.c)  [cfg](../decompiled/FUN_7100026170__7100026170.mmd)
- **Clone hash:** `8d02989a1c77221a`

```c

int FUN_7100026170(long *param_1,int param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = (long)param_2;
  if (((*(char *)((long)param_1 + lVar4 + 0x831) != '\0') &&
      (*(int *)((long)param_1 + lVar4 * 0x120 + 0x294) == 2)) &&
     ((char)param_1[lVar4 * 0x24 + 0x9a] == '\0')) {
    return 4;
  }
  lVar2 = *param_1;
  if (*(ulong *)(lVar2 + 0x498) < 8) {
    if ((*(ulong *)(lVar2 + 0x4a0) | 0x10000) == 0x10000 ||
        (long)*(ulong *)(lVar2 + 0x498) <= (long)*(ulong *)(lVar2 + 0x4a0) >> 0x10) {
      *(undefined1 *)(param_1 + lVar4 * 0x24 + 0x52) = 1;
      iVar1 = FUN_71000265b0(param_1,param_2,param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (*param_3 != '\0') {
        FUN_7100015020(*param_1,5);
      }
      return 0;
    }
    pcVar3 = "CURL_SSLVERSION_MAX incompatible with CURL_SSLVERSION";
  }
  else {
    pcVar3 = "Unrecognized parameter value passed via CURLOPT_SSLVERSION";
  }
  FUN_7100016040(lVar2,(byte *)pcVar3,param_3,param_4,param_5,param_6,param_7,param_8);
  return 0x23;
}


```

## 7. `FUN_7100006210`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100006210`  (offset `0x6210`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100006210(long param_1)`
- **Size / BBs / Incoming:** 740 bytes / 43 bb / 1 incoming refs
- **Match values:** URL
- **Strings touched:** NODE_PRE_REFRACT_BLEND;%255[^:]:%d;%s:%d;%255[^:]:%d:%255s;Couldn't parse CURLOPT_RESOLVE removal entry '%s'!
;Couldn't parse CURLOPT_RESOLVE entry '%s'!
;chara/chara_4/chara_4_;Address in '%s' found illegal!
;Added %s:%d:%s to DNS cache

- **Callers:** FUN_71000189f0
- **Callees:** FUN_7100004f10;FUN_7100005160;FUN_7100005500;FUN_71000055b0;FUN_7100005df0;FUN_7100007fd0;FUN_7100015de0;FUN_7100016b40;FUN_7100016ba0;FUN_71000272a0;<EXTERNAL>::strlen;<EXTERNAL>::sscanf;<EXTERNAL>::tolower
- **Files:** [decomp](../decompiled/FUN_7100006210__7100006210.c)  [cfg](../decompiled/FUN_7100006210__7100006210.mmd)
- **Clone hash:** `76fe380ec3464b1e`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_7100006210(long param_1)

{
  int iVar1;
  uint uVar2;
  char *__s;
  byte *pbVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  byte *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint local_26c;
  byte abStack_268 [256];
  undefined1 auStack_168 [264];
  
  puVar9 = *(undefined8 **)(param_1 + 0x9c0);
joined_r0x007100006238:
  do {
    while( true ) {
      if (puVar9 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x9c0) = 0;
        return 0;
      }
      __s = (char *)*puVar9;
      if (__s != (char *)0x0) break;
LAB_7100006320:
      puVar9 = (undefined8 *)puVar9[1];
    }
    if (*__s == '-') {
      puVar7 = &local_26c;
// ... (95 more lines)
```

## 8. `FUN_7100022610`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100022610`  (offset `0x22610`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100022610(long param_1, long param_2, byte * * param_3, byte * * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1332 bytes / 82 bb / 2 incoming refs
- **Match values:** URL;url
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

## 9. `FUN_7100018bc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100018bc0`  (offset `0x18bc0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100018bc0(long param_1, byte * param_2, int param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2348 bytes / 162 bb / 3 incoming refs
- **Match values:** URL
- **Strings touched:** %15[^?&/:]://%c;%%%02x;Maximum (%ld) redirects followed;select_item;Issue another request to this URL: '%s'
;Switch from POST to GET
;dys_yoga03_l_03_set;Disables POST, goes with %s

- **Callers:** FUN_7100009d00
- **Callees:** FUN_7100007ef0;FUN_7100014f90;FUN_7100015020;FUN_7100015de0;FUN_7100016040;FUN_7100027290;FUN_71000272a0;FUN_71000272c0;<EXTERNAL>::strlen;<EXTERNAL>::strchr;<EXTERNAL>::sscanf;<EXTERNAL>::strrchr;<EXTERNAL>::memcpy;<EXTERNAL>::strstr
- **Files:** [decomp](../decompiled/FUN_7100018bc0__7100018bc0.c)  [cfg](../decompiled/FUN_7100018bc0__7100018bc0.mmd)
- **Clone hash:** `fffbda986a6c1bf5`

```c

undefined8
FUN_7100018bc0(long param_1,byte *param_2,int param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  size_t sVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  uint uVar17;
  byte bVar18;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [16];
  
  if (param_3 == 3) {
    bVar5 = true;
    if ((*(long *)(param_1 + 0x2d0) != -1) &&
       (*(long *)(param_1 + 0x2d0) <= *(long *)(param_1 + 0x2c8))) {
      param_3 = 1;
      goto LAB_7100018c78;
    }
    *(undefined1 *)(param_1 + 0x4bb0) = 1;
    *(long *)(param_1 + 0x2c8) = *(long *)(param_1 + 0x2c8) + 1;
    if (*(char *)(param_1 + 0x6bf) == '\0') {
LAB_7100018c74:
      bVar5 = false;
      param_3 = 3;
// ... (455 more lines)
```

## 10. `FUN_7100275400`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100275400`  (offset `0x275400`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100275400(long param_1, int * param_2)`
- **Size / BBs / Incoming:** 392 bytes / 15 bb / 7 incoming refs
- **Match values:** url
- **Strings touched:** N2nn3nex16ProtocolRegistryE;invalidurl;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_7100274fb0;FUN_7100275210;FUN_7100275590;FUN_7100275a50;FUN_7100275d90;FUN_7100275ee0
- **Callees:** FUN_71001b1300;FUN_71001b2f70;FUN_71001b3cb0;FUN_71001cd7d0;FUN_71001cd870;FUN_71001d0a10;FUN_71001d0f00;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_7100275400__7100275400.c)  [cfg](../decompiled/FUN_7100275400__7100275400.mmd)
- **Clone hash:** `599481263e68427e`

```c

void FUN_7100275400(long param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  int iVar4;
  code *pcVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  plVar3 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar3 + 0x10) + 0x18),
                                  *(uint *)(param_1 + 0xa8));
  if (plVar3 == (long *)0x0) {
    FUN_71001d0a10((long *)(param_1 + 0xf8));
  }
  else {
    pcVar5 = FUN_710170d030;
    if (*param_2 < 0) {
      pcVar5 = (code *)0x0;
    }
    if (pcVar5 == (code *)0x0) {
      local_48 = *(undefined8 *)param_2;
      local_40 = *(undefined8 *)(param_2 + 2);
      uStack_38 = *(undefined8 *)(param_2 + 4);
      iVar4 = 3;
// ... (23 more lines)
```

## 11. `FUN_7100009d00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100009d00`  (offset `0x9d00`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100009d00(long param_1, byte * * param_2, size_t * * * * * * * param_3, size_t * * * * * * * param_4, size_t * * * * * * * param_5, byte * * param_6, size_t * * * * * * * param_7, size_t * * * * * * * param_8)`
- **Size / BBs / Incoming:** 5688 bytes / 367 bb / 1 incoming refs
- **Match values:** url
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

## 12. `FUN_7100012930`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100012930`  (offset `0x12930`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100012930(long * param_1, byte * param_2, byte * param_3, byte * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1156 bytes / 83 bb / 3 incoming refs
- **Match values:** url
- **Strings touched:** Unrecognized content encoding type. libcurl understands `identity', `deflate' and `gzip' content encodings.
- **Callers:** FUN_710000bdc0;FUN_7100017ae0
- **Callees:** FUN_7100012df0;FUN_71000130b0;FUN_7100016040;FUN_71000167d0;FUN_7100027100;FUN_7100027290;FUN_71000272b0;FUN_71039c00b0;<EXTERNAL>::__errno_location
- **Files:** [decomp](../decompiled/FUN_7100012930__7100012930.c)  [cfg](../decompiled/FUN_7100012930__7100012930.mmd)
- **Clone hash:** `acc7045db0797e75`

```c

undefined8
FUN_7100012930(long *param_1,byte *param_2,byte *param_3,byte *param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  undefined1 auStack_68 [8];
  
  lVar11 = *param_1;
  param_4[0] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  pbVar9 = param_3;
  pbVar10 = param_4;
  if (((*(char *)(lVar11 + 0x6f0) == '\0') || (*(char *)(lVar11 + 0x229) != '\0')) ||
     (pbVar9 = param_2, pbVar10 = param_3,
     iVar4 = FUN_71000167d0(param_1,1,(char *)param_2,(size_t)param_3,param_5,param_6,param_7,
                            param_8), iVar4 == 0)) {
    if (param_3 != (byte *)0x0) {
      do {
        switch((int)param_1[7]) {
        case 0:
          bVar1 = *param_2;
          if ((bVar1 - 0x30 < 10) ||
// ... (190 more lines)
```

## 13. `FUN_7101bed960`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bed960`  (offset `0x1bed960`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bed960(long param_1, long * param_2)`
- **Size / BBs / Incoming:** 3384 bytes / 75 bb / 2 incoming refs
- **Match values:** url
- **Strings touched:** plate_side;texture;title;begin_date;begin_time;end_date;end_time;pos_x;pos_y;scale_x;scale_y;align_x;align_y;border;shadow;text_color;border_color;shadow_color;title_desc;period_desc
- **Callers:** FUN_7101bed740;FUN_7101bed7c0
- **Callees:** FUN_71038f4b20;FUN_71038f5390;FUN_71038f5730;FUN_71038fec40;FUN_710391e050;<EXTERNAL>::powf
- **Files:** [decomp](../decompiled/FUN_7101bed960__7101bed960.c)  [cfg](../decompiled/FUN_7101bed960__7101bed960.mmd)
- **Clone hash:** `9e1dc720b602f5f9`

```c

void FUN_7101bed960(long param_1,long *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined4 *puVar15;
  ulong *puVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar8 = FUN_710391e050(param_1);
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  *puVar10 = uVar8;
  *(undefined4 *)(puVar10 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  lVar12 = *param_2;
  if (param_2[1] != lVar12) {
    lVar19 = 0x50;
    uVar18 = 1;
    do {
// ... (415 more lines)
```

## 14. `FUN_7100220ca0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100220ca0`  (offset `0x220ca0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100220ca0(void)`
- **Size / BBs / Incoming:** 464 bytes / 14 bb / 1 incoming refs
- **Match values:** url
- **Strings touched:** CurlHttpConnection Thread
- **Callees:** FUN_71001af850;FUN_71001b1820;FUN_71001b2360;FUN_71001b27e0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71002206f0;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error
- **Files:** [decomp](../decompiled/FUN_7100220ca0__7100220ca0.c)  [cfg](../decompiled/FUN_7100220ca0__7100220ca0.mmd)
- **Clone hash:** `e3463f671e003052`

```c

void FUN_7100220ca0(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   long param_5,char *param_6,undefined1 *param_7,char *param_8,long param_9)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined **ppuStack_68;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  plVar1 = (long *)(param_2 + 0x1b8);
  (**(code **)(*(long *)(param_2 + 0x1b8) + 0x10))(plVar1);
  if (*(ulong *)(param_2 + 0x250) >> 0xe == 0) {
    uVar6 = 0x8001000a;
  }
  else {
    puVar2 = FUN_71001af850(0x40);
    uVar5 = extraout_x1;
    if (puVar2 != (undefined8 *)0x0) {
      uVar9 = *(ulong *)(param_2 + 0x250);
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      if (uVar9 != 0) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        puVar3 = FUN_71001b1820(uVar9);
// ... (58 more lines)
```

## 15. `FUN_710009c130`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710009c130`  (offset `0x9c130`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710009c130(long * param_1, long param_2)`
- **Size / BBs / Incoming:** 376 bytes / 1 bb / 1 incoming refs
- **Match values:** url
- **Strings touched:** sysEmitterDynamicUniformBlock;sysEmitterStaticUniformBlock;sysEmitterFieldUniformBlock;sysCurlNoiseTextureArray;sysPosBuff;sysVecBuff;sysPosDeltaBuff;sysScaleBuff;sysRandomBuff;dys_yoga03_l_03_set;sysEmtMat0Buff;sysEmtMat1Buff;sysEmtMat2Buff
- **Callers:** FUN_710009ce40
- **Callees:** FUN_7100038e90
- **Files:** [decomp](../decompiled/FUN_710009c130__710009c130.c)  [cfg](../decompiled/FUN_710009c130__710009c130.mmd)
- **Clone hash:** `677cc167260a58a0`

```c

undefined8 FUN_710009c130(long *param_1,long param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = FUN_7100038e90(param_2,5,3,"sysEmitterDynamicUniformBlock");
  *(int *)((long)param_1 + 0xc) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,3,"sysEmitterStaticUniformBlock");
  *(int *)(param_1 + 2) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,3,"sysEmitterFieldUniformBlock");
  *(int *)((long)param_1 + 0x14) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,2,"sysCurlNoiseTextureArray");
  *(int *)(param_1 + 3) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysPosBuff");
  *(int *)((long)param_1 + 0x1c) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysVecBuff");
  *(int *)(param_1 + 4) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysPosDeltaBuff");
  *(int *)((long)param_1 + 0x24) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysScaleBuff");
  *(int *)(param_1 + 5) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysRandomBuff");
  *(int *)((long)param_1 + 0x2c) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysEmtMat0Buff");
  *(int *)(param_1 + 6) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysEmtMat1Buff");
  *(int *)((long)param_1 + 0x34) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysEmtMat2Buff");
  *(int *)(param_1 + 7) = (int)uVar1;
  return 1;
}


```

## 16. `FUN_710009c350`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710009c350`  (offset `0x9c350`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710009c350(long param_1)`
- **Size / BBs / Incoming:** 704 bytes / 1 bb / 2 incoming refs
- **Match values:** url
- **Strings touched:** select_item;sysTextureSampler0;sysTextureSampler1;sysTextureSampler2;sysFrameBufferTexture;sysDepthBufferTexture;sysCurlNoiseTextureArray;sysCustomShaderTextureSampler0;sysCustomShaderTextureSampler1;sysCustomShaderTextureSampler2;sysCustomShaderTextureSampler3;sysCustomShaderTextureArraySampler0;sysCustomShaderTextureArraySampler1;sysCustomShaderTextureArraySampler2;sysCustomShaderTextureArraySampler3;sysCustomShaderTexture3DSampler0;sysCustomShaderTexture3DSampler1;sysCustomShaderTexture3DSampler2;sysCustomShaderTexture3DSampler3;sysCustomShaderCubeSampler0;sysCustomShaderCubeSampler1;sysCustomShaderCubeSampler2;sysCustomShaderCubeSampler3;sysCustomShaderCubeArraySampler0;sysCustomShaderCubeArraySampler1;sysCustomShaderCubeArraySampler2;sysCustomShaderCubeArraySampler3;chara/chara_4/chara_4_;sysCustomShaderShadowSampler0;sysCustomShaderShadowSampler1;sysCustomShaderShadowSampler2;sysCustomShaderShadowSampler3;...
- **Callers:** FUN_710009c9e0;FUN_710009ccf0
- **Callees:** FUN_71000af320
- **Files:** [decomp](../decompiled/FUN_710009c350__710009c350.c)  [cfg](../decompiled/FUN_710009c350__710009c350.mmd)
- **Clone hash:** `5c28653272c636e5`

```c

void FUN_710009c350(long param_1)

{
  FUN_71000af320((undefined4 *)(param_1 + 0xf4),*(long *)(param_1 + 8),"sysTextureSampler0");
  FUN_71000af320((undefined4 *)(param_1 + 0xfc),*(long *)(param_1 + 8),"sysTextureSampler1");
  FUN_71000af320((undefined4 *)(param_1 + 0x104),*(long *)(param_1 + 8),"sysTextureSampler2");
  FUN_71000af320((undefined4 *)(param_1 + 0x10c),*(long *)(param_1 + 8),"sysFrameBufferTexture");
  FUN_71000af320((undefined4 *)(param_1 + 0x114),*(long *)(param_1 + 8),"sysDepthBufferTexture");
  FUN_71000af320((undefined4 *)(param_1 + 0x11c),*(long *)(param_1 + 8),"sysCurlNoiseTextureArray");
  FUN_71000af320((undefined4 *)(param_1 + 0x14),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureSampler0");
  FUN_71000af320((undefined4 *)(param_1 + 0x1c),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureSampler1");
  FUN_71000af320((undefined4 *)(param_1 + 0x24),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureSampler2");
  FUN_71000af320((undefined4 *)(param_1 + 0x2c),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureSampler3");
  FUN_71000af320((undefined4 *)(param_1 + 0x34),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureArraySampler0");
  FUN_71000af320((undefined4 *)(param_1 + 0x3c),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureArraySampler1");
  FUN_71000af320((undefined4 *)(param_1 + 0x44),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureArraySampler2");
  FUN_71000af320((undefined4 *)(param_1 + 0x4c),*(long *)(param_1 + 8),
                 "sysCustomShaderTextureArraySampler3");
  FUN_71000af320((undefined4 *)(param_1 + 0x54),*(long *)(param_1 + 8),
                 "sysCustomShaderTexture3DSampler0");
  FUN_71000af320((undefined4 *)(param_1 + 0x5c),*(long *)(param_1 + 8),
                 "sysCustomShaderTexture3DSampler1");
  FUN_71000af320((undefined4 *)(param_1 + 100),*(long *)(param_1 + 8),
                 "sysCustomShaderTexture3DSampler2");
  FUN_71000af320((undefined4 *)(param_1 + 0x6c),*(long *)(param_1 + 8),
                 "sysCustomShaderTexture3DSampler3");
  FUN_71000af320((undefined4 *)(param_1 + 0x74),*(long *)(param_1 + 8),"sysCustomShaderCubeSampler0"
                );
  FUN_71000af320((undefined4 *)(param_1 + 0x7c),*(long *)(param_1 + 8),"sysCustomShaderCubeSampler1"
                );
  FUN_71000af320((undefined4 *)(param_1 + 0x84),*(long *)(param_1 + 8),"sysCustomShaderCubeSampler2"
                );
// ... (29 more lines)
```

## 17. `FUN_7100019bf0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100019bf0`  (offset `0x19bf0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7100019bf0(long param_1, int param_2, long * param_3, long param_4, char * param_5, undefined1 * param_6, char * param_7, long param_8)`
- **Size / BBs / Incoming:** 19336 bytes / 1392 bb / 1 incoming refs
- **Match values:** URL
- **Strings touched:** CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!;deflate, gzip;%15[^
:]://%[^
/?:]%[^
];%[^
/?:]%[^
];%s://;FLUSH;RELOAD;Set-Cookie:
- **Callers:** FUN_7100000a00
- **Callees:** FUN_7100000f70;FUN_7100001020;FUN_71000012c0;FUN_7100002040;FUN_7100002690;FUN_71000026c0;FUN_71000027a0;FUN_7100004dc0;FUN_7100004dd0;FUN_7100004de0;FUN_7100004df0;FUN_7100007ef0;FUN_7100016040;FUN_7100016b40;FUN_7100016ba0;FUN_7100016c00;...
- **Files:** [decomp](../decompiled/FUN_7100019bf0__7100019bf0.c)  [cfg](../decompiled/FUN_7100019bf0__7100019bf0.mmd)
- **Clone hash:** `a3b301535f28dc50`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100019bf0(long param_1,int param_2,long *param_3,long param_4,char *param_5,
                    undefined1 *param_6,char *param_7,long param_8)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  bool bVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  void *__dest;
  ulong uVar10;
  size_t sVar11;
  char *__dest_00;
  char *__src;
  char *__src_00;
  size_t sVar12;
  char *pcVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  ulong *puVar19;
  long lVar20;
  undefined8 uVar21;
  char *pcVar22;
  byte *pbVar23;
  void *__src_01;
  char *local_58;
  ulong local_50 [2];
  
  uVar6 = 4;
// ... (4189 more lines)
```

## 18. `FUN_7100023290`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023290`  (offset `0x23290`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100023290(ulong param_1, char * param_2, byte * param_3, long * param_4, long * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2432 bytes / 134 bb / 1 incoming refs
- **Match values:** URL
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

## 19. `FUN_710027cb70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710027cb70`  (offset `0x27cb70`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710027cb70(void)`
- **Size / BBs / Incoming:** 1172 bytes / 34 bb / 2 incoming refs
- **Match values:** url
- **Strings touched:** N2nn3nex16ProtocolRegistryE;invalidurl;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b2b10;FUN_71001b2bf0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e00;FUN_71001cb860;FUN_71001cd7d0;FUN_71001cde10;FUN_71001d3d60;FUN_710027ca30;FUN_710170d200;FUN_7101717960;<EXTERNAL>::memset;<EXTERNAL>::strncpy;...
- **Files:** [decomp](../decompiled/FUN_710027cb70__710027cb70.c)  [cfg](../decompiled/FUN_710027cb70__710027cb70.mmd)
- **Clone hash:** `e9cfb1079800d4dd`

```c

void FUN_710027cb70(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  code **ppcStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar8;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar9 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar10 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar9 == 0) {
    uVar7 = 0x80010004;
  }
  else {
// ... (122 more lines)
```

## 20. `FUN_71000189f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000189f0`  (offset `0x189f0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71000189f0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 448 bytes / 25 bb / 1 incoming refs
- **Match values:** URL
- **Strings touched:** No URL set!
- **Callers:** FUN_7100009d00
- **Callees:** FUN_7100000f70;FUN_7100005220;FUN_7100006210;FUN_71000086c0;FUN_7100014f90;FUN_7100015110;FUN_7100016040;FUN_71000263c0;FUN_7100027110;FUN_71000272a0;<EXTERNAL>::strlen
- **Files:** [decomp](../decompiled/FUN_71000189f0__71000189f0.c)  [cfg](../decompiled/FUN_71000189f0__71000189f0.mmd)
- **Clone hash:** `ce2d0ec327922644`

```c

undefined8
FUN_71000189f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  size_t sVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x998) == 0) {
    FUN_7100016040(param_1,(byte *)"No URL set!",param_3,param_4,param_5,param_6,param_7,param_8);
    return 3;
  }
  if (*(char *)(param_1 + 0x9a0) != '\0') {
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x998) = 0;
    *(undefined1 *)(param_1 + 0x9a0) = 0;
  }
  *(undefined8 *)(param_1 + 0x998) = *(undefined8 *)(param_1 + 0x7d8);
  uVar1 = FUN_71000263c0(param_1,*(undefined8 *)(param_1 + 0x658));
  if ((int)uVar1 == 0) {
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined1 *)(param_1 + 0x4bb0) = 0;
    *(undefined1 *)(param_1 + 0x4c30) = 0;
    *(undefined4 *)(param_1 + 0x4f64) = 0;
    *(undefined1 *)(param_1 + 0x4d00) = 0;
    *(undefined8 *)(param_1 + 0x4cc0) = *(undefined8 *)(param_1 + 0x2a8);
    *(undefined8 *)(param_1 + 0x4ce0) = *(undefined8 *)(param_1 + 0x2b0);
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x5090) = 0;
    if (*(int *)(param_1 + 0x480) == 4) {
      *(undefined8 *)(param_1 + 0x4fb8) = *(undefined8 *)(param_1 + 0x3d8);
      lVar3 = *(long *)(param_1 + 0x9b8);
    }
    else {
      *(long *)(param_1 + 0x4fb8) = *(long *)(param_1 + 0x2f0);
      if ((*(long *)(param_1 + 0x2f0) == -1) && (*(char **)(param_1 + 0x2e0) != (char *)0x0)) {
        sVar2 = strlen(*(char **)(param_1 + 0x2e0));
        *(size_t *)(param_1 + 0x4fb8) = sVar2;
// ... (31 more lines)
```

## 21. `FUN_710027eb90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710027eb90`  (offset `0x27eb90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710027eb90(void)`
- **Size / BBs / Incoming:** 1172 bytes / 34 bb / 2 incoming refs
- **Match values:** url
- **Strings touched:** N2nn3nex16ProtocolRegistryE;invalidurl;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b2b10;FUN_71001b2bf0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e00;FUN_71001cb860;FUN_71001cd7d0;FUN_71001cde10;FUN_71001d3d60;FUN_710027ea50;FUN_710170d200;FUN_7101717960;<EXTERNAL>::memset;<EXTERNAL>::strncpy;...
- **Files:** [decomp](../decompiled/FUN_710027eb90__710027eb90.c)  [cfg](../decompiled/FUN_710027eb90__710027eb90.mmd)
- **Clone hash:** `0f4f1928320872d7`

```c

void FUN_710027eb90(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  code **ppcStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar8;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar9 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar10 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar9 == 0) {
    uVar7 = 0x80010004;
  }
  else {
// ... (122 more lines)
```

## 22. `FUN_710000c9d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000c9d0`  (offset `0xc9d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710000c9d0(void)`
- **Size / BBs / Incoming:** 7016 bytes / 461 bb / 2 incoming refs
- **Match values:** url
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

## 23. `FUN_710354f7b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710354f7b0`  (offset `0x354f7b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710354f7b0(long param_1)`
- **Size / BBs / Incoming:** 376 bytes / 27 bb / 1 incoming refs
- **Match values:** uRL
- **Callers:** FUN_710354ea90
- **Callees:** FUN_710392eb40;<EXTERNAL>::nu::VirtualFreeHook
- **Files:** [decomp](../decompiled/FUN_710354f7b0__710354f7b0.c)  [cfg](../decompiled/FUN_710354f7b0__710354f7b0.mmd)
- **Clone hash:** `98b21f82177ab071`

```c

void FUN_710354f7b0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulong uVar11;
  
  lVar6 = *(long *)(param_1 + 200);
  for (lVar8 = *(long *)(param_1 + 0xc0); lVar8 != lVar6; lVar8 = lVar8 + 0x20) {
    plVar1 = *(long **)(lVar8 + 8);
    plVar3 = *(long **)(lVar8 + 0x10);
    lVar7 = *(long *)(lVar8 + 0x18);
    *(undefined8 *)(lVar8 + 8) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    if (((plVar3 != (long *)0x0) && (plVar1 != (long *)0x0)) && (*plVar3 == lVar7)) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    puVar4 = (ulong *)*(ulong *)(param_1 + 0xa8);
    while (puVar4 != (ulong *)0x0) {
      uVar11 = *puVar4;
      if ((*(byte *)(puVar4 + 2) & 1) != 0) {
        pvVar10 = (void *)puVar4[4];
        nu::VirtualFreeHook(pvVar10);
        FUN_710392eb40((ulong)pvVar10);
      }
      FUN_710392eb40((ulong)puVar4);
      puVar4 = (ulong *)uVar11;
    }
// ... (40 more lines)
```

## 24. `FUN_7100274cd0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100274cd0`  (offset `0x274cd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100274cd0(undefined4 * param_1, long param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5, undefined4 param_6, long param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined4 param_11, undefined8 param_12, undefined8 param_13, undefined1 * param_14, byte param_15)`
- **Size / BBs / Incoming:** 732 bytes / 24 bb / 2 incoming refs
- **Match values:** url
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;N2nn3nex16ProtocolRegistryE;invalidurl
- **Callers:** FUN_71002636b0
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b2f70;FUN_71001b4220;FUN_71001b4e00;FUN_71001cd7d0;FUN_71001d3d60;FUN_710022e7e0;FUN_710023c460;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_7100274cd0__7100274cd0.c)  [cfg](../decompiled/FUN_7100274cd0__7100274cd0.mmd)
- **Clone hash:** `7611918119dda959`

```c

void FUN_7100274cd0(undefined4 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6,long param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
                   undefined8 param_13,undefined1 *param_14,byte param_15)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined **local_80;
  code *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100274d84:
    if ((*plVar7 != 0) && (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_7100274dc8;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_7100274d84;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100274d84;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_7100274dc8:
  plVar7 = (long *)(lVar5 + 0x78);
// ... (53 more lines)
```

## 25. `FUN_710000e940`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000e940`  (offset `0xe940`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000e940(long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 848 bytes / 78 bb / 2 incoming refs
- **Match values:** URL
- **Strings touched:** The requested URL returned error: %d
- **Callers:** FUN_710000bdc0;FUN_710000fb30
- **Callees:** FUN_7100004200;FUN_7100016040;FUN_71000179b0;FUN_71000272a0;FUN_71000272c0
- **Files:** [decomp](../decompiled/FUN_710000e940__710000e940.c)  [cfg](../decompiled/FUN_710000e940__710000e940.mmd)
- **Clone hash:** `136e967bf74e425d`

```c

ulong FUN_710000e940(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 extraout_x1;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  lVar8 = *param_1;
  iVar1 = *(int *)(lVar8 + 0x170);
  if (iVar1 - 100U < 100) {
    return 0;
  }
  if (*(char *)(lVar8 + 0x4d00) != '\0') {
    uVar5 = 0;
    if (*(char *)(lVar8 + 0x6b8) != '\0') {
      uVar5 = 0x16;
    }
    return (ulong)uVar5;
  }
  bVar3 = false;
  if (((char)param_1[0x103] == '\0') ||
     ((iVar1 != 0x191 &&
      ((bVar3 = false, 299 < iVar1 || (*(char *)((long)param_1 + 0x822) == '\0')))))) {
LAB_710000ea44:
    if (*(char *)((long)param_1 + 0x819) == '\0') goto LAB_710000ea98;
LAB_710000ea4c:
    if ((iVar1 != 0x197) && ((299 < iVar1 || (*(char *)((long)param_1 + 0x822) == '\0'))))
    goto LAB_710000ea98;
    uVar7 = *(ulong *)(lVar8 + 0x4ce0) & *(ulong *)(lVar8 + 0x4cf0);
// ... (146 more lines)
```

## 26. `FUN_7100027380`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100027380`  (offset `0x27380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100027380(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 2 incoming refs
- **Match values:** url
- **Strings touched:** SDK MW+Nintendo+NintendoSDK_libcurl-8_2_1-Release
- **Callers:** FUN_71000007f0;FUN_7100000960
- **Callees:** <EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_7100027380__7100027380.c)  [cfg](../decompiled/FUN_7100027380__7100027380.mmd)
- **Clone hash:** `e0fa850d74298cae`

```c

void FUN_7100027380(void)

{
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoSDK_libcurl-8_2_1-Release");
  return;
}


```

## 27. `FUN_7100027a70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100027a70`  (offset `0x27a70`)
- **Namespace:** `Global`
- **Signature:** `void * __cdecl FUN_7100027a70(long param_1, undefined8 param_2, undefined8 param_3)`
- **Size / BBs / Incoming:** 380 bytes / 15 bb / 2 incoming refs
- **Match values:** url
- **Strings touched:** LibcurlResolver
- **Callers:** FUN_7100027c40;FUN_71000280a0
- **Callees:** FUN_7100027290;FUN_71000272a0;FUN_71000272e0;FUN_7100027340;<EXTERNAL>::memset;<EXTERNAL>::nnResultIsFailure;<EXTERNAL>::nnosGetCurrentThread;<EXTERNAL>::nnosGetThreadPriority;<EXTERNAL>::nnosCreateThread;<EXTERNAL>::nnosDestroyThread;<EXTERNAL>::nnosGetThreadCoreMask;<EXTERNAL>::nnosSetThreadCoreMask;<EXTERNAL>::nnosSetThreadNamePointer
- **Files:** [decomp](../decompiled/FUN_7100027a70__7100027a70.c)  [cfg](../decompiled/FUN_7100027a70__7100027a70.mmd)
- **Clone hash:** `d35f01eb8675beb3`

```c

void * FUN_7100027a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  void *__s;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_50;
  undefined4 local_44;
  
  __s = (void *)FUN_7100027290();
  if (__s == (void *)0x0) {
    uVar2 = nnResultIsFailure(0xffffffff);
  }
  else {
    memset(__s,0,0x1f0);
    uVar2 = FUN_71000272e0(0x1000,param_1);
    *(ulong *)((long)__s + 0x1d0) = uVar2;
    if (uVar2 == 0) {
      FUN_71000272a0();
      uVar2 = nnResultIsFailure(0xffffffff);
      __s = (void *)0x0;
    }
    else {
      nnosGetCurrentThread();
      uVar1 = nnosGetThreadPriority();
      uVar1 = nnosCreateThread(__s,FUN_7100027bf0,__s,uVar2,param_1,uVar1);
      uVar2 = nnResultIsFailure(uVar1);
      if ((uVar2 & 1) == 0) {
        local_44 = 0xffffffff;
        local_50 = 0;
        uVar3 = nnosGetCurrentThread();
        nnosGetThreadCoreMask(&local_44,&local_50,uVar3);
        nnosSetThreadCoreMask(__s,local_44,local_50);
        nnosSetThreadNamePointer(__s,"LibcurlResolver");
        *(undefined8 *)((long)__s + 0x1c0) = param_2;
        *(undefined8 *)((long)__s + 0x1c8) = param_3;
        uVar2 = nnResultIsFailure(uVar1);
// ... (21 more lines)
```

## 28. `FUN_710023abc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710023abc0`  (offset `0x23abc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710023abc0(long * param_1, long param_2, long * param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 936 bytes / 30 bb / 1 incoming refs
- **Match values:** URL
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;ClientProtocolRequestBroker: Error processing message. pBuffer=; Protocol ID=; CntSize=; Size=;chara/chara_4/chara_4_;  EndPoint: CID=; PID=; URL=;dys_yoga03_l_03_set;  <EndPoint is NULL>
- **Callers:** FUN_710023ab90
- **Callees:** FUN_71001afae0;FUN_71001afd40;FUN_71001b0ab0;FUN_71001b1300;FUN_71001b3300;FUN_71001b6080;FUN_71001b60c0;FUN_71001b6320;FUN_71001b6470;FUN_71001b6610;FUN_71001d6ba0;FUN_71001d6c40;FUN_71001e6720;FUN_71001e6870;FUN_71001e6910;FUN_71001e69b0;...
- **Files:** [decomp](../decompiled/FUN_710023abc0__710023abc0.c)  [cfg](../decompiled/FUN_710023abc0__710023abc0.mmd)
- **Clone hash:** `f05e2e693bcc067f`

```c

void FUN_710023abc0(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 auStack_218 [37];
  undefined1 auStack_f0 [28];
  char local_d4 [4];
  undefined8 uStack_d0;
  char local_c8;
  ushort local_58 [2];
  uint local_54;
  
  lVar3 = param_4;
  FUN_71001e6870(&uStack_d0,param_4);
  puVar5 = local_58;
  FUN_710022a760((long)&uStack_d0,&local_54,puVar5);
  uVar11 = *(ulong *)(param_4 + 0x18);
  puVar2 = FUN_71001afd40((long)(param_1 + 1),(uint)local_58[0],puVar5,lVar3,param_5,param_6,param_7
                          ,param_8);
  FUN_71001afae0((long)(puVar2 + 1),uVar11);
  if (local_54 == 1) {
    FUN_710022a4b0(param_2);
    FUN_71001d6ba0((long)(param_1 + 10),param_2);
    FUN_71001e6720(auStack_218);
    local_d4[0] = '\0';
    FUN_710022bf40();
    (**(code **)(*param_1 + 0x18))(param_1,local_58[0],&uStack_d0,auStack_218,local_d4,param_3);
// ... (90 more lines)
```

