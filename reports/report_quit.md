# quit (funcs=3, hits=6)

Top 50 functions by hit count

## 1. `FUN_7101a8e1f0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a8e1f0`  (offset `0x1a8e1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a8e1f0(long param_1, undefined8 param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5848 bytes / 287 bb / 1 incoming refs
- **Match values:** quit
- **Strings touched:** set_parts_cur_hammer;set_parts_in_%d%02d;set_parts_out_%d%02d;blink_c_01;pausequit_disp_on;hammer_swing;hammer_start;target_off;set_fxui_break;target_on;hammer_standby;set_parts_btn_hammer;set_txt_hammer_n;pausequit_disp_off;blink_c_00
- **Callees:** FUN_7101316520;FUN_710175dfc0;FUN_7101a8fdf0;FUN_7101a90280;FUN_7101a905b0;FUN_7101a90b10;FUN_71024076d0;FUN_710240a7a0;FUN_7103267660;FUN_7103268810;FUN_7103313f20;FUN_7103771a80;FUN_71037760f0;FUN_7103776640;FUN_7103776910;FUN_71037780e0;...
- **Files:** [decomp](../decompiled/FUN_7101a8e1f0__7101a8e1f0.c)  [cfg](../decompiled/FUN_7101a8e1f0__7101a8e1f0.mmd)
- **Clone hash:** `8d6f3c9f70be5358`

```c

void FUN_7101a8e1f0(long param_1,undefined8 param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  void *__dest;
  undefined8 uVar13;
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
  undefined8 extraout_x1_12;
  ulong uVar14;
  long ****pppplVar15;
  ulong uVar16;
  byte ****ppppbVar17;
  long *plVar18;
  int *piVar19;
  long ***ppplVar20;
// ... (1025 more lines)
```

## 2. `FUN_7100023290`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023290`  (offset `0x23290`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100023290(ulong param_1, char * param_2, byte * param_3, long * param_4, long * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2432 bytes / 134 bb / 1 incoming refs
- **Match values:** quit
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

## 3. `FUN_7101cd16d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cd16d0`  (offset `0x1cd16d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cd16d0(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 340 bytes / 9 bb / 4 incoming refs
- **Match values:** quit
- **Strings touched:** set_txt_00;mnu_share_upload_confirm;set_txt_progress;mnu_share_pop_uploading;cancel_off;pop_btn_quit;pop_btn_upload
- **Callers:** online_scene_state_handler;FUN_7101cd2220
- **Callees:** FUN_7103771a80;FUN_7103771e50;FUN_7103776910;FUN_7103778760;FUN_710377a120;FUN_710377a280;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101cd16d0__7101cd16d0.c)  [cfg](../decompiled/FUN_7101cd16d0__7101cd16d0.mmd)
- **Clone hash:** `b694a3505813cc99`

```c

void FUN_7101cd16d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **local_50;
  ulong local_48;
  
  lVar7 = **(long **)(param_1 + 0x100);
  lVar1 = lVar7 + 8;
  FUN_7103776910(&local_50,lVar1,(long ****)"set_txt_00",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  lVar6 = param_2 + 8;
  uVar4 = 1;
  lVar5 = lVar6;
  FUN_710377a280((long)&local_50,(byte *)"mnu_share_upload_confirm",1);
  uVar3 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_50,lVar1,(long ****)"set_txt_progress",uVar4,lVar5,param_5,param_6,param_7,
                 param_8);
  uVar4 = 1;
  FUN_710377a280((long)&local_50,(byte *)"mnu_share_pop_uploading",1);
  uVar3 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103778760(*(long *)(lVar7 + 0x10),0x710438cbd1);
// ... (22 more lines)
```

