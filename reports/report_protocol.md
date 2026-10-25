# protocol (funcs=22, hits=83)

Top 50 functions by hit count

## 1. `FUN_7100196770`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100196770`  (offset `0x196770`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100196770(undefined8 * param_1)`
- **Size / BBs / Incoming:** 180 bytes / 4 bb / 1 incoming refs
- **Match values:** Protocol
- **Strings touched:** MeshProtocolReliable send buffer num;MeshProtocolReliable receive buffer num
- **Callers:** FUN_710018fcc0
- **Callees:** FUN_71000bc710;FUN_71000bc730;FUN_7100156390
- **Files:** [decomp](../decompiled/FUN_7100196770__7100196770.c)  [cfg](../decompiled/FUN_7100196770__7100196770.mmd)
- **Clone hash:** `4d6fcaaf5013cd3b`

```c

void FUN_7100196770(undefined8 *param_1)

{
  long lVar1;
  
  FUN_7100156390(param_1);
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_thunk_FUN_71001563d0_7104f54248;
  param_1[0xd] = 0x3e800000000;
  param_1[0xe] = 0;
  *(undefined2 *)((long)param_1 + 0x7a) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((long)param_1 + 0xaa) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  if (DAT_71052accf8 != 0) {
    lVar1 = FUN_71000bc710(DAT_71052accf8,9);
    FUN_71000bc730(lVar1,"MeshProtocolReliable send buffer num");
    if (DAT_71052accf8 != 0) {
      lVar1 = FUN_71000bc710(DAT_71052accf8,10);
      FUN_71000bc730(lVar1,"MeshProtocolReliable receive buffer num");
      return;
    }
  }
  return;
}


```

## 2. `FUN_7100154a40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100154a40`  (offset `0x154a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100154a40(uint * param_1, ulong param_2)`
- **Size / BBs / Incoming:** 464 bytes / 23 bb / 4 incoming refs
- **Match values:** Protocol
- **Strings touched:** [Analysis] ------ BEGIN(%s, %d.%03d sec. passed) ------;NODE_PRE_REFRACT_BLEND;[Analysis]     ProtocolId, TotalNum, TotalSize, AverageSize, Protocol(port);[Analysis]     0xffffffff, %8d,  %8d,    %8d, Packet;[Analysis]     0x%08x, %8d,  %8d,    %8d, %s(%u);[Analysis] ---------------------------- END ----------------------------
- **Callers:** FUN_7100163ff0
- **Callees:** FUN_7100154ca0;FUN_7100156720
- **Files:** [decomp](../decompiled/FUN_7100154a40__7100154a40.c)  [cfg](../decompiled/FUN_7100154a40__7100154a40.mmd)
- **Clone hash:** `0002e310eb7dd5c6`

```c

void FUN_7100154a40(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  
  FUN_7100154ca0("[Analysis] ------ BEGIN(%s, %d.%03d sec. passed) ------");
  FUN_7100154ca0("[Analysis]     ProtocolId, TotalNum, TotalSize, AverageSize, Protocol(port)");
  FUN_7100154ca0("[Analysis]     0xffffffff, %8d,  %8d,    %8d, Packet");
  uVar2 = param_1[0xc0];
  if (0 < (int)uVar2) {
    if ((param_2 & 1) == 0) {
      lVar3 = 0;
      puVar4 = param_1;
      do {
        uVar1 = *puVar4 >> 0x18;
        switch(uVar1) {
        case 8:
        case 0x14:
        case 0x18:
        case 0x1c:
        case 0x24:
        case 0x28:
        case 0x2c:
        case 0x34:
        case 0x44:
        case 0x54:
        case 0x58:
          break;
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
// ... (90 more lines)
```

## 3. `FUN_7100232aa0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100232aa0`  (offset `0x232aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100232aa0(void)`
- **Size / BBs / Incoming:** 120 bytes / 5 bb / 13 incoming refs
- **Match values:** Protocol
- **Strings touched:** ClientProtocol;Protocol;SystemComponent
- **Callees:** <EXTERNAL>::strcmp
- **Files:** [decomp](../decompiled/FUN_7100232aa0__7100232aa0.c)  [cfg](../decompiled/FUN_7100232aa0__7100232aa0.mmd)
- **Clone hash:** `3d1da3fbcc8a1f00`

```c

bool FUN_7100232aa0(undefined8 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp("ClientProtocol",param_2);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = strcmp("Protocol",param_2);
  if (iVar1 != 0) {
    iVar1 = strcmp("SystemComponent",param_2);
    return iVar1 == 0;
  }
  return true;
}


```

## 4. `FUN_710001f340`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710001f340`  (offset `0x1f340`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710001f340(long param_1, undefined8 * param_2, byte * * param_3, byte * * param_4, byte * * param_5, byte * * param_6, byte * * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12036 bytes / 695 bb / 1 incoming refs
- **Match values:** protocol;Protocol
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

## 5. `FUN_7100158790`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100158790`  (offset `0x158790`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100158790(undefined8 * param_1)`
- **Size / BBs / Incoming:** 140 bytes / 4 bb / 1 incoming refs
- **Match values:** Protocol
- **Strings touched:** ReliableProtocol send buffer num;ReliableProtocol receive buffer num
- **Callers:** FUN_7103704c60
- **Callees:** FUN_71000bc710;FUN_71000bc730;FUN_7100159ae0
- **Files:** [decomp](../decompiled/FUN_7100158790__7100158790.c)  [cfg](../decompiled/FUN_7100158790__7100158790.mmd)
- **Clone hash:** `f878f7a27b0058d9`

```c

void FUN_7100158790(undefined8 *param_1)

{
  long lVar1;
  
  FUN_7100159ae0(param_1);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *param_1 = &PTR_FUN_7104f50758;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  if (DAT_71052accf8 != 0) {
    lVar1 = FUN_71000bc710(DAT_71052accf8,3);
    FUN_71000bc730(lVar1,"ReliableProtocol send buffer num");
    if (DAT_71052accf8 != 0) {
      lVar1 = FUN_71000bc710(DAT_71052accf8,4);
      FUN_71000bc730(lVar1,"ReliableProtocol receive buffer num");
      return;
    }
  }
  return;
}


```

## 6. `FUN_710023abc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710023abc0`  (offset `0x23abc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710023abc0(long * param_1, long param_2, long * param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 936 bytes / 30 bb / 1 incoming refs
- **Match values:** Protocol
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

## 7. `FUN_7100232b90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100232b90`  (offset `0x232b90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100232b90(void)`
- **Size / BBs / Incoming:** 120 bytes / 5 bb / 6 incoming refs
- **Match values:** Protocol
- **Strings touched:** ServerProtocol;Protocol;SystemComponent
- **Callees:** <EXTERNAL>::strcmp
- **Files:** [decomp](../decompiled/FUN_7100232b90__7100232b90.c)  [cfg](../decompiled/FUN_7100232b90__7100232b90.mmd)
- **Clone hash:** `193c7f999bb6b771`

```c

bool FUN_7100232b90(undefined8 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp("ServerProtocol",param_2);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = strcmp("Protocol",param_2);
  if (iVar1 != 0) {
    iVar1 = strcmp("SystemComponent",param_2);
    return iVar1 == 0;
  }
  return true;
}


```

## 8. `FUN_710025db30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710025db30`  (offset `0x25db30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710025db30(long param_1, long * param_2)`
- **Size / BBs / Incoming:** 440 bytes / 20 bb / 2 incoming refs
- **Match values:** Protocol
- **Strings touched:** N2nn3nex16ProtocolRegistryE
- **Callers:** FUN_710025d780;FUN_710025e070
- **Callees:** FUN_71001b1870;FUN_71001b4910;FUN_71001b78a0;FUN_7100228650;FUN_710025ef50;FUN_710025eff0;FUN_71002607b0;FUN_7100260b60
- **Files:** [decomp](../decompiled/FUN_710025db30__710025db30.c)  [cfg](../decompiled/FUN_710025db30__710025db30.mmd)
- **Clone hash:** `ee254fd928747260`

```c

void FUN_710025db30(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined ***local_68;
  
  plVar6 = param_2 + 1;
  FUN_710025ef50(param_2,(undefined8 *)*plVar6);
  param_2[2] = 0;
  *param_2 = (long)plVar6;
  *plVar6 = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(lVar2 + 0x18);
  if ((ulong)(lVar5 - lVar3) < 4) {
    uVar7 = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    uVar7 = *(uint *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + lVar3);
    *(long *)(param_1 + 0x18) = lVar3 + 4;
    if ((ulong)(lVar5 - (lVar3 + 4)) < (ulong)uVar7) {
      *(undefined1 *)(param_1 + 8) = 1;
      goto LAB_710025dbd8;
// ... (44 more lines)
```

## 9. `FUN_7100275400`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100275400`  (offset `0x275400`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100275400(long param_1, int * param_2)`
- **Size / BBs / Incoming:** 392 bytes / 15 bb / 7 incoming refs
- **Match values:** Protocol
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

## 10. `FUN_7100254060`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100254060`  (offset `0x254060`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100254060(long param_1, long param_2)`
- **Size / BBs / Incoming:** 252 bytes / 6 bb / 3 incoming refs
- **Match values:** Protocol
- **Strings touched:** N2nn3nex16ProtocolRegistryE
- **Callers:** FUN_71000e3360;FUN_71000e4ac0;FUN_7100113d70
- **Callees:** FUN_71000ebb80;FUN_71001b47e0;FUN_71001b4910;FUN_71001b52a0;FUN_71001b76e0;FUN_71001b78a0;FUN_71001b7960
- **Files:** [decomp](../decompiled/FUN_7100254060__7100254060.c)  [cfg](../decompiled/FUN_7100254060__7100254060.mmd)
- **Clone hash:** `1fe49e4f30a76821`

```c

undefined8 FUN_7100254060(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long alStack_78 [2];
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 local_48;
  undefined ***local_38;
  
  lVar1 = FUN_71001b52a0(param_2);
  if (((lVar1 == 2) && (**(byte **)(param_2 + 0x18) - 0x41 < 0x1a)) &&
     ((*(byte **)(param_2 + 0x18))[1] - 0x41 < 0x1a)) {
    local_50 = local_60;
    local_60[0] = 0;
    local_48 = 0x10;
    local_68 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_68,PTR_DAT_7104f5d1b0,-1);
    FUN_71001b7960(alStack_78,param_2);
    local_38 = &local_68;
    auVar3 = FUN_71000ebb80((long *)(param_1 + 0x10),(long)&local_68,"",(long *)&local_38);
    FUN_71001b76e0((long *)(auVar3._0_8_ + 0x48),alStack_78);
    FUN_71001b78a0(alStack_78);
    local_68 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_68);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


```

## 11. `FUN_7100274cd0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100274cd0`  (offset `0x274cd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100274cd0(undefined4 * param_1, long param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5, undefined4 param_6, long param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined4 param_11, undefined8 param_12, undefined8 param_13, undefined1 * param_14, byte param_15)`
- **Size / BBs / Incoming:** 732 bytes / 24 bb / 2 incoming refs
- **Match values:** Protocol
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

## 12. `FUN_710022ec10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710022ec10`  (offset `0x22ec10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710022ec10(undefined8 * param_1)`
- **Size / BBs / Incoming:** 220 bytes / 3 bb / 1 incoming refs
- **Match values:** Protocol
- **Strings touched:** Protocol
- **Callers:** FUN_710023bd70
- **Callees:** FUN_71001afb30;FUN_71001b47e0;FUN_71001b4910;FUN_71001d69d0
- **Files:** [decomp](../decompiled/FUN_710022ec10__710022ec10.c)  [cfg](../decompiled/FUN_710022ec10__710022ec10.mmd)
- **Clone hash:** `ba29aa09c1c8bfa8`

```c

void FUN_710022ec10(undefined8 *param_1)

{
  undefined **local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_7104f5a748;
  local_40 = local_50;
  local_50[0] = 0;
  local_38 = 0x10;
  local_58 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_58,"Protocol",-1);
  FUN_71001afb30(param_1 + 1,(long)&local_58);
  local_58 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_58);
  FUN_71001d69d0(param_1 + 10);
  if (DAT_71052b5708 == '\0') {
    DAT_71052ae118 = FUN_71001dabb0;
    DAT_71052ae120 = FUN_71001daaa0;
    DAT_71052b5708 = '\x01';
  }
  return;
}


```

## 13. `FUN_7100224e50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100224e50`  (offset `0x224e50`)
- **Namespace:** `Global`
- **Signature:** `bool __cdecl FUN_7100224e50(long param_1, char * param_2, ulong param_3, long param_4, long param_5)`
- **Size / BBs / Incoming:** 380 bytes / 8 bb / 1 incoming refs
- **Match values:** Protocol
- **Strings touched:** GET %s HTTP/1.1
Host: %s
Upgrade: websocket
Connection: upgrade
Sec-WebSocket-Key: %s
Sec-WebSocket-Version: 13
Sec-WebSocket-Protocol: %s


- **Callers:** FUN_7100224a60
- **Callees:** FUN_71001b5de0;FUN_71001dc540;<EXTERNAL>::memset;<EXTERNAL>::snprintf
- **Files:** [decomp](../decompiled/FUN_7100224e50__7100224e50.c)  [cfg](../decompiled/FUN_7100224e50__7100224e50.mmd)
- **Clone hash:** `a36de598c9c6d733`

```c

bool FUN_7100224e50(long param_1,char *param_2,ulong param_3,long param_4,long param_5)

{
  bool bVar1;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  char *local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  char *local_958;
  char local_950 [1279];
  undefined1 local_451;
  char acStack_450 [1024];
  
  if (param_3 < 0x400) {
    return false;
  }
  memset(acStack_450,0,0x400);
  memset(local_950 + 0x100,0,0x400);
  local_950[0xf0] = '\0';
  local_950[0xf1] = '\0';
  local_950[0xf2] = '\0';
  local_950[0xf3] = '\0';
  local_950[0xf4] = '\0';
  local_950[0xf5] = '\0';
  local_950[0xf6] = '\0';
  local_950[0xf7] = '\0';
  local_950[0xf8] = '\0';
  local_950[0xf9] = '\0';
  local_950[0xfa] = '\0';
  local_950[0xfb] = '\0';
  local_950[0xfc] = '\0';
  local_950[0xfd] = '\0';
  local_950[0xfe] = '\0';
// ... (267 more lines)
```

## 14. `FUN_7100156720`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100156720`  (offset `0x156720`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_7100156720(undefined8 param_1)`
- **Size / BBs / Incoming:** 392 bytes / 33 bb / 2 incoming refs
- **Match values:** PROTOCOL
- **Strings touched:** KeepAlive;chara/chara_4/chara_4_;Station;(KickoutReason_Unknown PROTOCOL NAME);SyncClock;Local;Direct;BandwidthCheck;Unreliable;RoundrobinUnreliable;select_item;Clone;Atomic;Event;Clock;InterpolationClock;NODE_PRE_REFRACT_BLEND;Voice;Reliable;BroadcastReliable;StreamBroadcastReliable;ReliableBroadcast;Session;Lobby;Feedback;RelayService;WanNat
- **Callers:** FUN_7100154a40
- **Files:** [decomp](../decompiled/FUN_7100156720__7100156720.c)  [cfg](../decompiled/FUN_7100156720__7100156720.mmd)
- **Clone hash:** `7d2ee8f7c1fc3923`

```c

char * FUN_7100156720(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = "KeepAlive";
  switch((uint)((ulong)param_1 >> 0x18) & 0xff) {
  case 8:
    goto switchD_7100156748_caseD_8;
  default:
    pcVar1 = "(KickoutReason_Unknown PROTOCOL NAME)";
switchD_7100156748_caseD_8:
    return pcVar1;
  case 0x14:
    return "Station";
  case 0x18:
    return "Mesh";
  case 0x1c:
    return "SyncClock";
  case 0x24:
    return "Local";
  case 0x28:
    return "Direct";
  case 0x2c:
    return "Net";
  case 0x34:
    return "Nat";
  case 0x44:
    return "Lan";
  case 0x54:
    return "BandwidthCheck";
  case 0x58:
    return "Rtt";
  case 0x65:
    return "Sync";
  case 0x68:
    return "Unreliable";
  case 0x6c:
    return "RoundrobinUnreliable";
// ... (33 more lines)
```

## 15. `FUN_7100283370`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100283370`  (offset `0x283370`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100283370(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Protocol
- **Strings touched:** N2nn3nex16ProtocolRegistryE;filename
- **Files:** [decomp](../decompiled/FUN_7100283370__7100283370.c)  [cfg](../decompiled/FUN_7100283370__7100283370.mmd)
- **Clone hash:** `6064d2309a77f74c`

```c

char * FUN_7100283370(void)

{
  return "filename";
}


```

## 16. `FUN_7100232a90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100232a90`  (offset `0x232a90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100232a90(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 13 incoming refs
- **Match values:** Protocol
- **Strings touched:** ClientProtocol
- **Files:** [decomp](../decompiled/FUN_7100232a90__7100232a90.c)  [cfg](../decompiled/FUN_7100232a90__7100232a90.mmd)
- **Clone hash:** `caf9656c85ec759d`

```c

char * FUN_7100232a90(void)

{
  return "ClientProtocol";
}


```

## 17. `FUN_710027cb70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710027cb70`  (offset `0x27cb70`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710027cb70(void)`
- **Size / BBs / Incoming:** 1172 bytes / 34 bb / 2 incoming refs
- **Match values:** Protocol
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

## 18. `FUN_7100259a40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100259a40`  (offset `0x259a40`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100259a40(void)`
- **Size / BBs / Incoming:** 472 bytes / 19 bb / 2 incoming refs
- **Match values:** Protocol
- **Strings touched:** N2nn3nex16ProtocolRegistryE
- **Callees:** FUN_71001b1870;FUN_71001b4200;FUN_71001f1c90;FUN_71001f2080;FUN_7100228bf0;FUN_710022b400;FUN_710022b510;FUN_710022b560;FUN_7100259c20;FUN_7100259d10;FUN_7100259e10;FUN_7100259f50;FUN_710025a060;FUN_710025a580
- **Files:** [decomp](../decompiled/FUN_7100259a40__7100259a40.c)  [cfg](../decompiled/FUN_7100259a40__7100259a40.mmd)
- **Clone hash:** `fb60cc3249d34eb0`

```c

void FUN_7100259a40(long *param_1,long param_2,long param_3,undefined1 *param_4)

{
  long ****pppplVar1;
  uint uVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  undefined8 auStack_b8 [3];
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long lStack_90;
  
  uVar2 = FUN_710022b510(param_2);
  switch(uVar2 & 0xffff) {
  case 1:
    ppplStack_a0 = (long ***)&ppplStack_a0;
    lStack_90 = 0;
    ppplStack_98 = ppplStack_a0;
    FUN_710025a580(param_2,(long *)&ppplStack_a0);
    if (*(char *)(param_2 + 8) == '\0') {
      (**(code **)(*param_1 + 0xc0))(param_1,&ppplStack_a0);
      FUN_710022b400(param_3,0x8001);
    }
    if (lStack_90 != 0) {
      ppplVar3 = (long ***)*ppplStack_98;
      ppplVar3[1] = ppplStack_a0[1];
      *ppplStack_a0[1] = (long *)ppplVar3;
      lStack_90 = 0;
      pppplVar1 = (long ****)ppplStack_98;
      while (pppplVar1 != &ppplStack_a0) {
        pppplVar4 = (long ****)pppplVar1[1];
        (*(code *)*pppplVar1[2])();
        FUN_71001b1870((long)pppplVar1);
        pppplVar1 = pppplVar4;
      }
    }
    break;
  case 2:
    FUN_71001f1c90(&ppplStack_a0);
// ... (31 more lines)
```

## 19. `FUN_71001656b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001656b0`  (offset `0x1656b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001656b0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 108 bytes / 3 bb / 1 incoming refs
- **Match values:** Protocol
- **Strings touched:** UnreliableProtocol receive buffer num
- **Callers:** FUN_7103704c60
- **Callees:** FUN_71000bc710;FUN_71000bc730;FUN_7100159ae0
- **Files:** [decomp](../decompiled/FUN_71001656b0__71001656b0.c)  [cfg](../decompiled/FUN_71001656b0__71001656b0.mmd)
- **Clone hash:** `b0e85c1e77ad650f`

```c

void FUN_71001656b0(undefined8 *param_1)

{
  long lVar1;
  
  FUN_7100159ae0(param_1);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_7104f50ed8;
  *(undefined1 *)((long)param_1 + 0x5c) = 1;
  if (DAT_71052accf8 != 0) {
    lVar1 = FUN_71000bc710(DAT_71052accf8,0xb);
    FUN_71000bc730(lVar1,"UnreliableProtocol receive buffer num");
    return;
  }
  return;
}


```

## 20. `FUN_7100232a70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100232a70`  (offset `0x232a70`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100232a70(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Protocol
- **Strings touched:** CallProtocolMethod
- **Files:** [decomp](../decompiled/FUN_7100232a70__7100232a70.c)  [cfg](../decompiled/FUN_7100232a70__7100232a70.mmd)
- **Clone hash:** `1d06627b961a4b5c`

```c

char * FUN_7100232a70(void)

{
  return "CallProtocolMethod";
}


```

## 21. `FUN_7100232b80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100232b80`  (offset `0x232b80`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100232b80(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 6 incoming refs
- **Match values:** Protocol
- **Strings touched:** ServerProtocol
- **Files:** [decomp](../decompiled/FUN_7100232b80__7100232b80.c)  [cfg](../decompiled/FUN_7100232b80__7100232b80.mmd)
- **Clone hash:** `a4db87aae2be8337`

```c

char * FUN_7100232b80(void)

{
  return "ServerProtocol";
}


```

## 22. `FUN_710027eb90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710027eb90`  (offset `0x27eb90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710027eb90(void)`
- **Size / BBs / Incoming:** 1172 bytes / 34 bb / 2 incoming refs
- **Match values:** Protocol
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

