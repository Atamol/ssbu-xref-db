# host (funcs=124, hits=365)

Top 50 functions by hit count

## 1. `FUN_7100110e60`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100110e60`  (offset `0x110e60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100110e60(void)`
- **Size / BBs / Incoming:** 1476 bytes / 128 bb / 2 incoming refs
- **Match values:** Host
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

## 2. `FUN_7100111430`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100111430`  (offset `0x111430`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100111430(void)`
- **Size / BBs / Incoming:** 1188 bytes / 113 bb / 3 incoming refs
- **Match values:** Host
- **Strings touched:** NODE_PRE_REFRACT_BLEND;NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting;NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti;NexProcessHostMigrationJob::NexWaitCheckOldHostDisconnection
- **Callees:** FUN_71000bb680;FUN_7100192e90;FUN_71001d0a10;FUN_71001d1590;FUN_710024bec0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100111430__7100111430.c)  [cfg](../decompiled/FUN_7100111430__7100111430.mmd)
- **Clone hash:** `5b50e2e5a4a4f5c0`

```c

undefined8 FUN_7100111430(long param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  char *pcVar8;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] != aiStack_50[0]) {
    if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x208)) {
      if (*(char *)(param_1 + 0xb3) == -3) {
        if (*(char *)(param_1 + 0xc1) != '\0') {
          pcVar7 = FUN_71001a2450;
          uVar5 = 0;
          pcVar8 = "NexProcessHostMigrationJob::WaitNewHostFinished";
          goto LAB_71001118b0;
        }
        cVar2 = *(char *)(param_1 + 0xf0);
        if (cVar2 != '\x01') {
          if (cVar2 != '\x02') {
            cVar3 = *(char *)(param_1 + 0xf1);
          }
          else {
            cVar3 = *(char *)(param_1 + 0xf1);
          }
          if (cVar3 != '\x01') {
// ... (149 more lines)
```

## 3. `FUN_7100111da0`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100111da0`  (offset `0x111da0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100111da0(void)`
- **Size / BBs / Incoming:** 1296 bytes / 124 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting;NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti;NexProcessHostMigrationJob::NexCheckOldHostDisconnection
- **Callees:** FUN_71000bb680;FUN_7100192e90;FUN_71001a35c0;FUN_71001d0a10;FUN_71001f16c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100111da0__7100111da0.c)  [cfg](../decompiled/FUN_7100111da0__7100111da0.mmd)
- **Clone hash:** `cc5ee9c8e0dc68aa`

```c

undefined8 FUN_7100111da0(long param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  char *pcVar8;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_38,DAT_71052adfc0);
  aiStack_48[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
  if (aiStack_38[0] == aiStack_48[0]) {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
LAB_7100111e14:
    pcVar7 = FUN_71001a1d80;
    pcVar8 = "NexProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_71001121ac;
  }
  if (*(char *)(param_1 + 0xb3) != -3) goto LAB_7100112188;
  if (*(char *)(param_1 + 0xc1) != '\0') {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
    pcVar7 = FUN_71001a2450;
    pcVar8 = "NexProcessHostMigrationJob::WaitNewHostFinished";
    goto LAB_71001121ac;
  }
// ... (201 more lines)
```

## 4. `FUN_710001f340`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710001f340`  (offset `0x1f340`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710001f340(long param_1, undefined8 * param_2, byte * * param_3, byte * * param_4, byte * * param_5, byte * * param_6, byte * * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12036 bytes / 695 bb / 1 incoming refs
- **Match values:** host
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

## 5. `FUN_71001109a0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001109a0`  (offset `0x1109a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001109a0(void)`
- **Size / BBs / Incoming:** 652 bytes / 42 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting;NexProcessHostMigrationJob::NexGetMatchMakingClientHost
- **Callees:** FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001109a0__71001109a0.c)  [cfg](../decompiled/FUN_71001109a0__71001109a0.mmd)
- **Clone hash:** `6a3c5f303c1401bc`

```c

undefined8 FUN_71001109a0(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_38,DAT_71052adfc0);
  aiStack_48[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
  if (aiStack_38[0] == aiStack_48[0]) {
    pcVar1 = FUN_71001a1d80;
    pcVar2 = "NexProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100110bcc;
  }
  if (*(char *)(param_1 + 0xb3) == -3) {
    if (*(char *)(param_1 + 0xc1) != '\0') {
      pcVar1 = FUN_71001a2450;
      pcVar2 = "NexProcessHostMigrationJob::WaitNewHostFinished";
      goto LAB_7100110bcc;
    }
    if ((((((((*(char *)(param_1 + 0xf0) != '\x01') && (*(char *)(param_1 + 0xf1) != '\x01')) &&
            (*(char *)(param_1 + 0xf2) != '\x01')) &&
           (((*(char *)(param_1 + 0xf3) != '\x01' && (*(char *)(param_1 + 0xf4) != '\x01')) &&
            ((*(char *)(param_1 + 0xf5) != '\x01' &&
             ((*(char *)(param_1 + 0xf6) != '\x01' && (*(char *)(param_1 + 0xf7) != '\x01'))))))))
          && (*(char *)(param_1 + 0xf8) != '\x01')) &&
         ((((((*(char *)(param_1 + 0xf9) != '\x01' && (*(char *)(param_1 + 0xfa) != '\x01')) &&
             (*(char *)(param_1 + 0xfb) != '\x01')) &&
            ((*(char *)(param_1 + 0xfc) != '\x01' && (*(char *)(param_1 + 0xfd) != '\x01')))) &&
           (*(char *)(param_1 + 0xfe) != '\x01')) &&
          (((*(char *)(param_1 + 0xff) != '\x01' && (*(char *)(param_1 + 0x100) != '\x01')) &&
           (((*(char *)(param_1 + 0x101) != '\x01' &&
             (((*(char *)(param_1 + 0x102) != '\x01' && (*(char *)(param_1 + 0x103) != '\x01')) &&
// ... (25 more lines)
```

## 6. `FUN_710017c7b0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017c7b0`  (offset `0x17c7b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017c7b0(void)`
- **Size / BBs / Incoming:** 672 bytes / 20 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** NODE_PRE_REFRACT_BLEND;LocalProcessHostMigrationJobNew::HostMigrationFailure;LocalProcessHostMigrationJobNew::WaitLocalHostMigrationClient;LocalProcessHostMigrationJobNew::LocalPrepareForBecomingHost
- **Callees:** FUN_71000b1cb0;FUN_71000b1cf0;FUN_71000b2850;FUN_71000b28c0;FUN_71000b2b70;FUN_71000bb680;FUN_71000be920;FUN_71000beb80;FUN_71000bec90;FUN_7100161fa0;FUN_71001809e0;FUN_7100193110;FUN_7100193560;FUN_71001a1780
- **Files:** [decomp](../decompiled/FUN_710017c7b0__710017c7b0.c)  [cfg](../decompiled/FUN_710017c7b0__710017c7b0.mmd)
- **Clone hash:** `f67291a5222cbb72`

```c

undefined8 FUN_710017c7b0(long param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  code *pcVar10;
  int aiStack_78 [4];
  undefined **ppuStack_68;
  undefined4 uStack_60;
  
  *(undefined4 *)(param_1 + 0x110) = 2;
  bVar1 = FUN_7100193110(DAT_71052adfc0);
  if (((0x1f < bVar1) || (bVar2 = FUN_7100193560(DAT_71052adfc0), 0x1f < bVar2)) ||
     (bVar2 = FUN_7100193560(DAT_71052adfc0), bVar1 == bVar2)) goto LAB_710017c9c0;
  lVar7 = param_1 + 0x118;
  FUN_71000b1cb0(lVar7,*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x2c0);
  uStack_60 = 0;
  ppuStack_68 = (undefined **)0x20;
  FUN_71000b2b70();
  FUN_71000be920(&ppuStack_68);
  FUN_71000beb80(aiStack_78,(long)&ppuStack_68,lVar7);
  plVar4 = (long *)FUN_7100161fa0(DAT_71052add68);
  lVar5 = (**(code **)(*plVar4 + 0x58))(plVar4,&ppuStack_68);
  if ((lVar5 == 0) || (*(byte *)(lVar5 + 0x38) == bVar1)) {
    aiStack_78[2] = 0;
    aiStack_78[0] = 0x20;
    aiStack_78[1] = 0;
    FUN_71000b2b70();
    lVar7 = param_1 + 0x138;
    uVar6 = FUN_71001809e0(*(long *)(*(long *)(param_1 + 0x158) + 0x18),lVar7);
    if ((uVar6 & 1) == 0) goto LAB_710017c8f8;
  }
// ... (60 more lines)
```

## 7. `FUN_7100110c30`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100110c30`  (offset `0x110c30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100110c30(void)`
- **Size / BBs / Incoming:** 356 bytes / 13 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::NexWaitMatchMakingClientHost;NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti
- **Callees:** FUN_7100146e00;FUN_7100192e90;FUN_71001d0a10;FUN_71001d1590;FUN_710024bec0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100110c30__7100110c30.c)  [cfg](../decompiled/FUN_7100110c30__7100110c30.mmd)
- **Clone hash:** `fae1d930231cf7d2`

```c

undefined8 FUN_7100110c30(long param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  char *pcVar6;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 4;
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    uVar4 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar6 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (((*(char *)(param_1 + 0x1f8) == '\0') && (DAT_71052adb38 != 0)) &&
          (uVar2 = FUN_7100146e00(DAT_71052adb38), uVar2 < 3)) {
    uVar4 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100110da0;
    pcVar6 = "NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti";
  }
  else {
    iVar1 = *(int *)(DAT_71052acd90 + 0x58);
    if (iVar1 != 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (*(int *)((long)plVar5 + 0x14) == 1) {
        FUN_71001d0a10(plVar5);
        plVar5 = *(long **)(param_1 + 0x118);
      }
// ... (20 more lines)
```

## 8. `FUN_7100124370`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100124370`  (offset `0x124370`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100124370(void)`
- **Size / BBs / Incoming:** 888 bytes / 66 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::WaitNewHostGreeting;LanProcessHostMigrationJob::LanPrepareForBecomingHostMulti;LanProcessHostMigrationJob::LanCheckOldHostDisconnection
- **Callees:** FUN_71000bb680;FUN_710011b3c0;FUN_710011b450;FUN_7100192e90;FUN_71001a35c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100124370__7100124370.c)  [cfg](../decompiled/FUN_7100124370__7100124370.mmd)
- **Clone hash:** `a04d6d66725f7d76`

```c

undefined8 FUN_7100124370(long param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  byte bVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  char *pcVar22;
  long *plVar23;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar23 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar18 = FUN_710011b3c0((long)plVar23);
  if (((uVar18 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
// ... (113 more lines)
```

## 9. `FUN_71001241f0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001241f0`  (offset `0x1241f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001241f0(void)`
- **Size / BBs / Incoming:** 372 bytes / 11 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanWaitMatchMakingClientHost;LanProcessHostMigrationJob::LanCheckMatchMakingClientHost
- **Callees:** FUN_71000b40e0;FUN_710011b2f0;FUN_710011be40;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001241f0__71001241f0.c)  [cfg](../decompiled/FUN_71001241f0__71001241f0.mmd)
- **Clone hash:** `8bd2c10579161019`

```c

undefined8 FUN_71001241f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 4;
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    lVar4 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    FUN_71000b40e0((int *)(param_1 + 0x118));
    iVar1 = FUN_710011be40(lVar4);
    FUN_710011b2f0(aiStack_40,lVar4,(int *)(param_1 + 0x118),iVar1);
    if (aiStack_40[0] == 0) {
      if (*(char *)(param_1 + 0xc4) == '\0') {
        *(code **)(param_1 + 0x30) = FUN_71001246f0;
        pcVar3 = "LanProcessHostMigrationJob::LanCheckMatchMakingClientHost";
      }
      else {
        *(code **)(param_1 + 0x30) = FUN_7100124370;
        pcVar3 = "LanProcessHostMigrationJob::LanWaitMatchMakingClientHost";
      }
    }
// ... (17 more lines)
```

## 10. `FUN_710017cbd0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017cbd0`  (offset `0x17cbd0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710017cbd0(long param_1)`
- **Size / BBs / Incoming:** 600 bytes / 19 bb / 3 incoming refs
- **Match values:** Host
- **Strings touched:** NODE_PRE_REFRACT_BLEND;LocalProcessHostMigrationJobNew::WaitNewHostGreeting;LocalProcessHostMigrationJobNew::HostMigrationFailure;LocalProcessHostMigrationJobNew::LocalPrepareForBecomingHost
- **Callees:** FUN_71000b1c60;FUN_71000b1cb0;FUN_71000b1cf0;FUN_71000b2850;FUN_71000b2b10;FUN_71000b2b70;FUN_7100161fa0;FUN_7100174cb0;FUN_710017f4a0
- **Files:** [decomp](../decompiled/FUN_710017cbd0__710017cbd0.c)  [cfg](../decompiled/FUN_710017cbd0__710017cbd0.mmd)
- **Clone hash:** `a952d1fffb46087e`

```c

undefined8 FUN_710017cbd0(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 auStack_50 [4];
  
  FUN_71000b1c60(auStack_50,*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x2c0);
  lVar1 = param_1 + 0x138;
  local_68 = 0;
  local_70 = 0x20;
  FUN_71000b2b70();
  local_68 = 0;
  local_70 = 0x20;
  FUN_71000b2b70();
  *(undefined4 *)(param_1 + 0x110) = 6;
  if ((*(char *)(param_1 + 0x160) == '\0') &&
     (uVar4 = FUN_710017f4a0(*(long *)(*(long *)(param_1 + 0x158) + 0x18),lVar1),
     (~uVar4 & 0xffff) == 0)) {
    *(undefined1 *)(param_1 + 0x160) = 1;
    uVar5 = FUN_71000b2b10((long)auStack_50,lVar1);
    if ((uVar5 & 1) != 0) goto LAB_710017cc68;
LAB_710017cca8:
    bVar3 = FUN_71000b2850(param_1 + 0x118);
    if ((((bVar3) && (bVar3 = FUN_71000b2850((long)auStack_50), bVar3)) &&
        (uVar5 = FUN_71000b2b10((long)auStack_50,param_1 + 0x118), (uVar5 & 1) == 0)) &&
       (uVar5 = FUN_71000b2b10((long)auStack_50,lVar1), (uVar5 & 1) == 0)) {
      local_68 = 0;
      local_70 = 0x20;
      FUN_71000b2b70();
// ... (55 more lines)
```

## 11. `FUN_7100111aa0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100111aa0`  (offset `0x111aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100111aa0(long param_1)`
- **Size / BBs / Incoming:** 340 bytes / 11 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitUpdateSessionOpenStatus;NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::HostMigrationSuccess
- **Callees:** FUN_7100192e90;FUN_71001d0a10;FUN_71001d1590;FUN_710024ff30;FUN_7100254520;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100111aa0__7100111aa0.c)  [cfg](../decompiled/FUN_7100111aa0__7100111aa0.mmd)
- **Clone hash:** `b5d9ec0eb2d6f84f`

```c

undefined8 FUN_7100111aa0(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 9;
  FUN_7100192e90(local_48,DAT_71052adfc0);
  local_58[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
  if (local_48[0] == local_58[0]) {
    uVar5 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar7 = "ProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100111bdc;
  }
  iVar3 = *(int *)(DAT_71052acd90 + 0x58);
  if (iVar3 != 0) {
    if (DAT_71052adb38 == 0) {
      uVar5 = 0;
      *(code **)(param_1 + 0x30) = FUN_71001a2190;
      pcVar7 = "NexProcessHostMigrationJob::HostMigrationSuccess";
      goto LAB_7100111bdc;
    }
    plVar6 = *(long **)(param_1 + 0x118);
    lVar1 = *(long *)(DAT_71052acd90 + 0x68);
    uVar2 = *(ulong *)(DAT_71052acd90 + 0x70);
    if (*(int *)((long)plVar6 + 0x14) == 1) {
// ... (22 more lines)
```

## 12. `FUN_7100125030`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100125030`  (offset `0x125030`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100125030(void)`
- **Size / BBs / Incoming:** 312 bytes / 6 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanWaitMatchMakingClientHostLastConfirmation
- **Callees:** FUN_71000b40e0;FUN_710011b2f0;FUN_710011be40;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100125030__7100125030.c)  [cfg](../decompiled/FUN_7100125030__7100125030.mmd)
- **Clone hash:** `c9ca13259b6ccc92`

```c

undefined8 FUN_7100125030(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 9;
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    uVar4 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    if (*(ulong *)(param_1 + 0x1b0) <= *(ulong *)(DAT_71052ac580 + 0x30)) {
      lVar5 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
      FUN_71000b40e0((int *)(param_1 + 0x118));
      iVar3 = FUN_710011be40(lVar5);
      FUN_710011b2f0(aiStack_40,lVar5,(int *)(param_1 + 0x118),iVar3);
      pcVar1 = "LanProcessHostMigrationJob::LanWaitMatchMakingClientHostLastConfirmation";
      pcVar2 = FUN_7100125170;
      if (aiStack_40[0] != 0) {
        pcVar1 = "LanProcessHostMigrationJob::HostMigrationFailure";
        pcVar2 = FUN_71001a1d80;
      }
      *(code **)(param_1 + 0x30) = pcVar2;
      *(undefined8 *)(param_1 + 0x38) = 0;
// ... (7 more lines)
```

## 13. `FUN_71001254c0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001254c0`  (offset `0x1254c0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71001254c0(long param_1)`
- **Size / BBs / Incoming:** 352 bytes / 12 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanPrepareForBecomingHostMulti;LanProcessHostMigrationJob::LanPrepareForBecomingHost
- **Callees:** FUN_710011b3c0;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001254c0__71001254c0.c)  [cfg](../decompiled/FUN_71001254c0__71001254c0.mmd)
- **Clone hash:** `457cc3fee5eec062`

```c

ulong FUN_71001254c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  ulong uVar5;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  FUN_7100192e90(local_40,DAT_71052adfc0);
  local_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  if ((local_40[0] == local_50[0]) ||
     (*(ulong *)(param_1 + 0x58) <= *(ulong *)(DAT_71052ac580 + 0x30))) {
LAB_7100125594:
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar3 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    plVar4 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar5 = 0x640000;
    uVar1 = FUN_710011b3c0((long)plVar4);
    if (((uVar1 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
      uVar1 = 4;
      goto LAB_71001255b8;
    }
    lVar2 = (**(code **)(*plVar4 + 0xf0))(plVar4);
    if (lVar2 != -1) goto LAB_7100125594;
    if (*(char *)(param_1 + 0xc4) == '\0') {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(code **)(param_1 + 0x30) = FUN_7100123b10;
      pcVar3 = "LanProcessHostMigrationJob::LanPrepareForBecomingHost";
// ... (14 more lines)
```

## 14. `FUN_710017c550`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017c550`  (offset `0x17c550`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017c550(void)`
- **Size / BBs / Incoming:** 604 bytes / 24 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** NODE_PRE_REFRACT_BLEND;LocalProcessHostMigrationJobNew::HostMigrationFailure;LocalProcessHostMigrationJobNew::WaitLocalHostMigrationClient;LocalProcessHostMigrationJobNew::LocalPrepareForBecomingHost
- **Callees:** FUN_71000b1c60;FUN_71000b1cb0;FUN_71000b1cf0;FUN_71000b2850;FUN_71000b28c0;FUN_71000b2b10;FUN_71000b2b70;FUN_71000bb680;FUN_7100161fa0;FUN_71001a1780
- **Files:** [decomp](../decompiled/FUN_710017c550__710017c550.c)  [cfg](../decompiled/FUN_710017c550__710017c550.mmd)
- **Clone hash:** `5afdfb78e935373a`

```c

undefined8 FUN_710017c550(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  code *pcVar9;
  undefined8 auStack_50 [4];
  
  *(undefined4 *)(param_1 + 0x22) = 1;
  plVar2 = (long *)FUN_7100161fa0(DAT_71052add68);
  lVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined1 *)((long)param_1 + 0x86));
  plVar2 = (long *)FUN_7100161fa0(DAT_71052add68);
  lVar4 = (**(code **)(*plVar2 + 0x48))(plVar2,(char)param_1[0x12]);
  if (lVar4 == 0) {
    *(undefined1 *)((long)param_1 + 0x161) = 1;
  }
  else {
    FUN_71000b1c60(auStack_50,*(long *)(param_1[0x2b] + 0x18) + 0x2c0);
    if (lVar3 == 0) {
      FUN_71000b28c0((long)(param_1 + 0x23));
      puVar7 = (undefined8 *)(lVar4 + 0x18);
LAB_710017c738:
      FUN_71000b1cb0((long)(param_1 + 0x27),(long)puVar7);
      bVar1 = FUN_71000b2850((long)(param_1 + 0x27));
    }
    else {
      FUN_71000b1cb0((long)(param_1 + 0x23),lVar3 + 0x18);
      FUN_71000b2b70();
      FUN_71000b2b70();
      FUN_71000b2b70();
      uVar5 = FUN_71000b2b10((long)(param_1 + 0x23),(long)auStack_50);
      if (((uVar5 & 1) == 0) && (bVar1 = FUN_71000b2850((long)auStack_50), bVar1)) {
        uVar5 = FUN_71000b2b10((long)auStack_50,lVar4 + 0x18);
// ... (47 more lines)
```

## 15. `FUN_7100123a30`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100123a30`  (offset `0x123a30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100123a30(void)`
- **Size / BBs / Incoming:** 212 bytes / 7 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::WaitNewHostGreeting;LanProcessHostMigrationJob::LanPrepareForBecomingHost;LanProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_7100190a90;FUN_7100193110;FUN_71001a1780
- **Files:** [decomp](../decompiled/FUN_7100123a30__7100123a30.c)  [cfg](../decompiled/FUN_7100123a30__7100123a30.mmd)
- **Clone hash:** `e9be8e6812c45d06`

```c

undefined8 FUN_7100123a30(long param_1)

{
  code *pcVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  
  *(undefined4 *)(param_1 + 0x110) = 2;
  *(undefined1 *)(param_1 + 0x90) = 0xfd;
  uVar9 = 0;
  do {
    bVar5 = FUN_7100193110(DAT_71052adfc0);
    if ((uint)bVar5 != (uVar9 & 0xff)) {
      bVar6 = FUN_7100190a90(DAT_71052adfc0,(byte)uVar9);
      if (bVar6) {
        *(byte *)(param_1 + 0x90) = (byte)uVar9;
        break;
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x20);
  uVar8 = FUN_71001a1780(param_1);
  iVar7 = (int)uVar8;
  pcVar1 = FUN_71001a1d80;
  pcVar4 = "LanProcessHostMigrationJob::HostMigrationFailure";
  if (iVar7 == 2) {
    pcVar1 = FUN_71001a2310;
    pcVar4 = "LanProcessHostMigrationJob::WaitNewHostGreeting";
  }
  pcVar2 = FUN_7100123b10;
  if (iVar7 != 1) {
    pcVar2 = pcVar1;
  }
// ... (10 more lines)
```

## 16. `FUN_7100112320`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100112320`  (offset `0x112320`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100112320(void)`
- **Size / BBs / Incoming:** 280 bytes / 9 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::NexWaitMatchMakingClientHostIsUpdated;NexProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_7100192e90;FUN_71001d0a10;FUN_71001d1590;FUN_710024bec0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100112320__7100112320.c)  [cfg](../decompiled/FUN_7100112320__7100112320.mmd)
- **Clone hash:** `dff7e089b931d040`

```c

undefined8 FUN_7100112320(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  char *pcVar5;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    uVar3 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar5 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    iVar1 = *(int *)(DAT_71052acd90 + 0x58);
    if (iVar1 != 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (*(int *)((long)plVar4 + 0x14) == 1) {
        FUN_71001d0a10(plVar4);
        plVar4 = *(long **)(param_1 + 0x118);
      }
      FUN_71001d1590(plVar4);
      uVar2 = FUN_710024bec0(*(long *)(DAT_71052acd90 + 0x68),*(long **)(param_1 + 0x118),iVar1,
                             *(ulong *)(param_1 + 0x170));
      if ((uVar2 & 1) != 0) {
        *(code **)(param_1 + 0x30) = FUN_7100112440;
        pcVar5 = "NexProcessHostMigrationJob::NexWaitMatchMakingClientHostIsUpdated";
        uVar3 = 5;
        goto LAB_7100112420;
// ... (12 more lines)
```

## 17. `FUN_7100112440`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100112440`  (offset `0x112440`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100112440(void)`
- **Size / BBs / Incoming:** 320 bytes / 17 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting
- **Callees:** FUN_7100192e90;FUN_71001d0a10;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100112440__7100112440.c)  [cfg](../decompiled/FUN_7100112440__7100112440.mmd)
- **Clone hash:** `c631fa30d7921cd0`

```c

undefined8 FUN_7100112440(long param_1)

{
  bool bVar1;
  long *plVar2;
  char *pcVar3;
  code *pcVar4;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_38,DAT_71052adfc0);
  aiStack_48[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
  if (aiStack_38[0] == aiStack_48[0]) {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
LAB_71001124b4:
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar3 = "NexProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    if (*(char *)(param_1 + 0xb3) == -3) {
      plVar2 = *(long **)(param_1 + 0x118);
      bVar1 = *(int *)((long)plVar2 + 0x14) == 1;
      if (*(char *)(param_1 + 0xc1) != '\0') {
        if (bVar1) {
          FUN_71001d0a10(plVar2);
        }
        *(code **)(param_1 + 0x30) = FUN_71001a2450;
        pcVar3 = "NexProcessHostMigrationJob::WaitNewHostFinished";
        goto LAB_7100112534;
      }
      if (bVar1) {
        return 5;
// ... (19 more lines)
```

## 18. `FUN_71001246f0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001246f0`  (offset `0x1246f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001246f0(void)`
- **Size / BBs / Incoming:** 336 bytes / 11 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanCheckOldHostDisconnection;LanProcessHostMigrationJob::LanPrepareForBecomingHost
- **Callees:** FUN_710011b3c0;FUN_710011b450;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001246f0__71001246f0.c)  [cfg](../decompiled/FUN_71001246f0__71001246f0.mmd)
- **Clone hash:** `db091ba577b9e604`

```c

ulong FUN_71001246f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  long *plVar5;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar1 = FUN_710011b3c0((long)plVar5);
  if (((uVar1 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    if ((aiStack_40[0] != aiStack_50[0]) &&
       (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      uVar4 = 0x640000;
      uVar1 = 4;
      goto LAB_7100124828;
    }
    FUN_710011b450(aiStack_40,(long)plVar5);
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar3 = "LanProcessHostMigrationJob::HostMigrationFailure";
    uVar1 = 5;
  }
  else {
    lVar2 = (**(code **)(*plVar5 + 0xf0))(plVar5);
    if (lVar2 == -1) {
      uVar1 = 0;
      *(code **)(param_1 + 0x30) = FUN_7100123b10;
      pcVar3 = "LanProcessHostMigrationJob::LanPrepareForBecomingHost";
    }
// ... (13 more lines)
```

## 19. `FUN_7100124840`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100124840`  (offset `0x124840`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7100124840(long param_1)`
- **Size / BBs / Incoming:** 872 bytes / 65 bb / 3 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::WaitNewHostGreeting;LanProcessHostMigrationJob::LanPrepareForBecomingHostMulti
- **Callees:** FUN_71000b40e0;FUN_71000bb680;FUN_710011b2f0;FUN_710011be40;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100124840__7100124840.c)  [cfg](../decompiled/FUN_7100124840__7100124840.mmd)
- **Clone hash:** `54d6fe78c0df9b43`

```c

ulong FUN_7100124840(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  char *pcVar8;
  long lVar9;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  FUN_7100192e90(local_40,DAT_71052adfc0);
  local_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  if (local_40[0] == local_50[0]) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar6 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar8 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x1a8)) {
    uVar5 = 0x640000;
    if (*(char *)(param_1 + 0xc4) == '\0') {
LAB_7100124ba0:
      uVar6 = 4;
      goto LAB_7100124b88;
    }
    if ((*(char *)(param_1 + 0xb3) == -3) && (cVar1 = *(char *)(param_1 + 0xf0), cVar1 != '\x01')) {
      if (cVar1 != '\x02') {
        cVar2 = *(char *)(param_1 + 0xf1);
      }
// ... (94 more lines)
```

## 20. `FUN_7100124030`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100124030`  (offset `0x124030`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100124030(void)`
- **Size / BBs / Incoming:** 444 bytes / 25 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::WaitNewHostGreeting;LanProcessHostMigrationJob::LanGetMatchMakingClientHost;LanProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100124030__7100124030.c)  [cfg](../decompiled/FUN_7100124030__7100124030.mmd)
- **Clone hash:** `504c54f9c288daa6`

```c

undefined8 FUN_7100124030(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_38,DAT_71052adfc0);
  aiStack_48[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
  if ((aiStack_38[0] == aiStack_48[0]) ||
     (*(ulong *)(param_1 + 0x58) <= *(ulong *)(DAT_71052ac580 + 0x30))) {
    pcVar1 = FUN_71001a1d80;
    pcVar2 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (((((((*(char *)(param_1 + 0xb3) == -3) && (*(char *)(param_1 + 0xf0) != '\x01')) &&
              (*(char *)(param_1 + 0xf1) != '\x01')) &&
             ((*(char *)(param_1 + 0xf2) != '\x01' && (*(char *)(param_1 + 0xf3) != '\x01')))) &&
            ((*(char *)(param_1 + 0xf4) != '\x01' &&
             ((*(char *)(param_1 + 0xf5) != '\x01' && (*(char *)(param_1 + 0xf6) != '\x01')))))) &&
           (*(char *)(param_1 + 0xf7) != '\x01')) &&
          ((((*(char *)(param_1 + 0xf8) != '\x01' && (*(char *)(param_1 + 0xf9) != '\x01')) &&
            (*(char *)(param_1 + 0xfa) != '\x01')) &&
           (((*(char *)(param_1 + 0xfb) != '\x01' && (*(char *)(param_1 + 0xfc) != '\x01')) &&
            ((*(char *)(param_1 + 0xfd) != '\x01' &&
             ((*(char *)(param_1 + 0xfe) != '\x01' && (*(char *)(param_1 + 0xff) != '\x01'))))))))))
  {
    if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x148)) {
      return 5;
    }
    pcVar1 = FUN_71001241f0;
    pcVar2 = "LanProcessHostMigrationJob::LanGetMatchMakingClientHost";
  }
  else {
// ... (9 more lines)
```

## 21. `FUN_710018f2c0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018f2c0`  (offset `0x18f2c0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710018f2c0(long param_1)`
- **Size / BBs / Incoming:** 188 bytes / 8 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** LeaveWithHostMigrationJob::StartDisconnectStations;LeaveWithHostMigrationJob::WaitHostMigrationProcess;LeaveWithHostMigrationJob::SendStartMultiMigrationMessage;LeaveWithHostMigrationJob::SendStartMigrationMessage
- **Callees:** FUN_71001a2880
- **Files:** [decomp](../decompiled/FUN_710018f2c0__710018f2c0.c)  [cfg](../decompiled/FUN_710018f2c0__710018f2c0.mmd)
- **Clone hash:** `8399b340e4daef63`

```c

undefined8 FUN_710018f2c0(long param_1)

{
  char *pcVar1;
  long *plVar2;
  
  plVar2 = *(long **)(DAT_71052adfc0 + 0x38);
  if (*(char *)((long)plVar2 + 0x84) == '\0') {
    if (*(int *)(DAT_71052adfc0 + 0xb8) == 2) {
      *(code **)(param_1 + 0x30) = FUN_710018f560;
      pcVar1 = "LeaveWithHostMigrationJob::SendStartMultiMigrationMessage";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_710018f5e0;
      pcVar1 = "LeaveWithHostMigrationJob::SendStartMigrationMessage";
    }
  }
  else if (*(int *)(DAT_71052adfc0 + 0xb8) == 2) {
    FUN_71001a2880(plVar2);
    *(undefined1 *)(plVar2 + 9) = 1;
    *(code **)(param_1 + 0x30) = FUN_710018f380;
    pcVar1 = "LeaveWithHostMigrationJob::StartDisconnectStations";
  }
  else {
    *(code **)(param_1 + 0x30) = FUN_710018f4e0;
    pcVar1 = "LeaveWithHostMigrationJob::WaitHostMigrationProcess";
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar1;
  return 0;
}


```

## 22. `FUN_710017ce30`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017ce30`  (offset `0x17ce30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017ce30(void)`
- **Size / BBs / Incoming:** 332 bytes / 14 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** NODE_PRE_REFRACT_BLEND;LocalProcessHostMigrationJobNew::HostMigrationFailure;LocalProcessHostMigrationJobNew::SendGreetingMessage
- **Callees:** FUN_71000b1c60;FUN_71000b1cf0;FUN_71000b2b10;FUN_71000b2b70;FUN_7100174cb0;FUN_7100174f00
- **Files:** [decomp](../decompiled/FUN_710017ce30__710017ce30.c)  [cfg](../decompiled/FUN_710017ce30__710017ce30.mmd)
- **Clone hash:** `8f9a2d56df077175`

```c

undefined8 FUN_710017ce30(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  undefined8 auStack_50 [4];
  
  if ((*(int *)(*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x418) == 2) &&
     (*(int *)(param_1 + 0x110) != 6)) {
    *(undefined4 *)(param_1 + 0x110) = 6;
  }
  uVar2 = FUN_7100174f00(*(long *)(param_1 + 0x158));
  if (((uVar2 & 1) == 0) || (bVar1 = FUN_7100174cb0(*(long *)(param_1 + 0x158)), bVar1)) {
    if ((*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) &&
       (*(int *)(*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x41c) != 4)) {
      uVar3 = 5;
    }
    else {
      uVar3 = 0;
      *(code **)(param_1 + 0x30) = FUN_71001a1d80;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
    }
  }
  else {
    FUN_71000b1c60(auStack_50,*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x2a0);
    uVar2 = FUN_71000b2b10((long)auStack_50,param_1 + 0x138);
    if ((uVar2 & 1) == 0) {
      FUN_71000b2b70();
      FUN_71000b2b70();
      pcVar5 = FUN_71001a1d80;
      pcVar4 = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
    }
    else {
      pcVar5 = FUN_71001a1a40;
      pcVar4 = "LocalProcessHostMigrationJobNew::SendGreetingMessage";
// ... (10 more lines)
```

## 23. `FUN_7100110480`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100110480`  (offset `0x110480`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100110480(void)`
- **Size / BBs / Incoming:** 1300 bytes / 21 bb / 3 incoming refs
- **Match values:** Host
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::NexWaitRankDecision;NexProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_71000bb680;FUN_7100190a90;FUN_7100192e90;FUN_7100193560;FUN_7100193580;FUN_710019ae30;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100110480__7100110480.c)  [cfg](../decompiled/FUN_7100110480__7100110480.mmd)
- **Clone hash:** `3b05e665a6d86958`

```c

undefined8 FUN_7100110480(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  bool bVar8;
  undefined8 uVar9;
  long *plVar10;
  char *pcVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  int aiStack_68 [4];
  int aiStack_58 [4];
  undefined4 auStack_48 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 3;
  lVar6 = DAT_71052adfc0;
  FUN_7100192e90(aiStack_58,DAT_71052adfc0);
  aiStack_68[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_68 | 4));
  auStack_48[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_48);
  if (aiStack_58[0] == aiStack_68[0]) {
    pcVar13 = FUN_71001a1d80;
    uVar9 = 0;
    pcVar11 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    bVar7 = FUN_7100193560(lVar6);
// ... (292 more lines)
```

## 24. `FUN_7100111c00`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100111c00`  (offset `0x111c00`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100111c00(void)`
- **Size / BBs / Incoming:** 404 bytes / 17 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** chara/chara_4/chara_4_;ProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::SendMigrationFinish;NexProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_7100149240;FUN_7100149250;FUN_7100192e90;FUN_71001d0a10;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100111c00__7100111c00.c)  [cfg](../decompiled/FUN_7100111c00__7100111c00.mmd)
- **Clone hash:** `3392cd0ac2a1e3a2`

```c

undefined8 FUN_7100111c00(long param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  long lVar4;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x118) + 0x14);
  if (iVar1 == 1) {
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    if ((aiStack_40[0] != aiStack_50[0]) &&
       (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      return 5;
    }
    FUN_71001d0a10(*(long **)(param_1 + 0x118));
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar2 = "ProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100111d78;
  }
  lVar4 = *(long *)(DAT_71052acd90 + 0x70);
  if (((lVar4 != 0) && (iVar1 == 2)) &&
     (iVar1 = *(int *)(lVar4 + 0xc), iVar1 == *(int *)(DAT_71052acd90 + 0x58))) {
    uVar3 = 1;
    if (*(char *)(lVar4 + 0x80) == '\0') {
      uVar3 = 2;
    }
    if (iVar1 == *(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180)) {
      FUN_7100149240(DAT_71052adb38,uVar3);
    }
    else {
// ... (19 more lines)
```

## 25. `FUN_7100123d30`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100123d30`  (offset `0x123d30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100123d30(void)`
- **Size / BBs / Incoming:** 764 bytes / 13 bb / 4 incoming refs
- **Match values:** Host
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanWaitRankDecision;LanProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_71000bb680;FUN_7100190a90;FUN_7100192e90;FUN_7100193560;FUN_7100193580;FUN_710019ae30;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100123d30__7100123d30.c)  [cfg](../decompiled/FUN_7100123d30__7100123d30.mmd)
- **Clone hash:** `e226f5ceb737f5a2`

```c

undefined8 FUN_7100123d30(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  long lVar19;
  byte bVar20;
  bool bVar21;
  uint uVar22;
  undefined8 uVar23;
  long *plVar24;
  code *pcVar25;
  char *pcVar26;
  long lVar27;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 3;
  lVar19 = DAT_71052adfc0;
  FUN_7100192e90(aiStack_78,DAT_71052adfc0);
  aiStack_88[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_88 | 4));
// ... (129 more lines)
```

## 26. `FUN_710017cab0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017cab0`  (offset `0x17cab0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710017cab0(long param_1)`
- **Size / BBs / Incoming:** 288 bytes / 10 bb / 4 incoming refs
- **Match values:** Host
- **Strings touched:** NODE_PRE_REFRACT_BLEND;LocalProcessHostMigrationJobNew::WaitLocalHostMigrationNewHost;LocalProcessHostMigrationJobNew::HostMigrationFailure
- **Callees:** FUN_71000b1c60;FUN_71000b1cf0;FUN_71000b2850;FUN_71000b2b10;FUN_71000b2b70;FUN_7100149240;FUN_7100175240;FUN_71001a1890;FUN_71001a1930
- **Files:** [decomp](../decompiled/FUN_710017cab0__710017cab0.c)  [cfg](../decompiled/FUN_710017cab0__710017cab0.mmd)
- **Clone hash:** `881d6b37733cfd6a`

```c

undefined8 FUN_710017cab0(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 auStack_50 [4];
  
  *(undefined4 *)(param_1 + 0x110) = 5;
  FUN_71000b1c60(auStack_50,*(long *)(*(long *)(param_1 + 0x158) + 0x18) + 0x2a0);
  bVar1 = FUN_71000b2850((long)auStack_50);
  if ((bVar1) && (uVar3 = FUN_71000b2b10((long)auStack_50,param_1 + 0x138), (uVar3 & 1) == 0)) {
    FUN_71000b2b70();
    FUN_71000b2b70();
  }
  else {
    uVar3 = FUN_71001a1890();
    if ((uVar3 & 1) != 0) {
      FUN_71001a1930(param_1);
      iVar2 = FUN_7100175240(*(long *)(param_1 + 0x158));
      if (iVar2 - 2U < 2) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
      FUN_7100149240(DAT_71052adb38,uVar4);
      pcVar6 = FUN_710017ce30;
      pcVar5 = "LocalProcessHostMigrationJobNew::WaitLocalHostMigrationNewHost";
      goto LAB_710017cba8;
    }
  }
  pcVar6 = FUN_71001a1d80;
  pcVar5 = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
LAB_710017cba8:
  *(code **)(param_1 + 0x30) = pcVar6;
// ... (6 more lines)
```

## 27. `FUN_71001a2310`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a2310`  (offset `0x1a2310`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001a2310(long * param_1)`
- **Size / BBs / Incoming:** 312 bytes / 12 bb / 13 incoming refs
- **Match values:** Host
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;ProcessHostMigrationJob::WaitNewHostFinished
- **Callees:** FUN_7100192e90;FUN_7100193580;FUN_710019a2d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001a2310__71001a2310.c)  [cfg](../decompiled/FUN_71001a2310__71001a2310.mmd)
- **Clone hash:** `c38e3b672bd589da`

```c

undefined8 FUN_71001a2310(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  *(undefined4 *)(param_1 + 0x22) = 0xb;
  FUN_7100192e90(local_40,DAT_71052adfc0);
  local_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  if (local_40[0] == local_50[0]) {
LAB_71001a237c:
    uVar2 = 0;
    param_1[6] = (long)FUN_71001a1d80;
    param_1[7] = 0;
    param_1[8] = (long)"ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0xb3);
    if (cVar1 == -3) {
      if ((ulong)param_1[0xb] <= *(ulong *)(DAT_71052ac580 + 0x30)) {
        uVar3 = (**(code **)(*param_1 + 0x80))(param_1);
        if ((uVar3 & 1) != 0) {
          return 0;
        }
        goto LAB_71001a237c;
      }
    }
    else {
      if (*(char *)((long)param_1 + 0xc4) == '\0') {
        if (cVar1 != (char)param_1[0x12]) goto LAB_71001a237c;
// ... (17 more lines)
```

## 28. `FUN_710000c9d0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000c9d0`  (offset `0xc9d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710000c9d0(void)`
- **Size / BBs / Incoming:** 7016 bytes / 461 bb / 2 incoming refs
- **Match values:** Host
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

## 29. `FUN_7100123910`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100123910`  (offset `0x123910`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100123910(long param_1, uint param_2, undefined1 param_3)`
- **Size / BBs / Incoming:** 108 bytes / 4 bb / 1 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::LanCleanupOldHostInfo;LanProcessHostMigrationJob::LanDecideNextHost
- **Callees:** FUN_7100193110
- **Files:** [decomp](../decompiled/FUN_7100123910__7100123910.c)  [cfg](../decompiled/FUN_7100123910__7100123910.mmd)
- **Clone hash:** `e2ddda5cb4bd97db`

```c

undefined8 FUN_7100123910(long param_1,uint param_2,undefined1 param_3)

{
  undefined1 uVar1;
  char *pcVar2;
  code *pcVar3;
  
  if ((param_2 & 1) == 0) {
    pcVar3 = FUN_7100123a30;
    pcVar2 = "LanProcessHostMigrationJob::LanDecideNextHost";
  }
  else {
    uVar1 = FUN_7100193110(DAT_71052adfc0);
    *(undefined1 *)(param_1 + 0x86) = uVar1;
    *(undefined1 *)(param_1 + 0x90) = param_3;
    pcVar3 = FUN_7100123980;
    pcVar2 = "LanProcessHostMigrationJob::LanCleanupOldHostInfo";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 1;
}


```

## 30. `FUN_710017c4e0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017c4e0`  (offset `0x17c4e0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710017c4e0(long param_1, uint param_2, undefined1 param_3)`
- **Size / BBs / Incoming:** 108 bytes / 4 bb / 1 incoming refs
- **Match values:** Host
- **Strings touched:** select_item;LocalProcessHostMigrationJobNew::LocalCleanupOldHostInfo;LocalProcessHostMigrationJobNew::LocalDecideNextHost
- **Callees:** FUN_7100193110
- **Files:** [decomp](../decompiled/FUN_710017c4e0__710017c4e0.c)  [cfg](../decompiled/FUN_710017c4e0__710017c4e0.mmd)
- **Clone hash:** `2446241e87fdb7f0`

```c

undefined8 FUN_710017c4e0(long param_1,uint param_2,undefined1 param_3)

{
  undefined1 uVar1;
  char *pcVar2;
  code *pcVar3;
  
  if ((param_2 & 1) == 0) {
    pcVar3 = FUN_710017c7b0;
    pcVar2 = "LocalProcessHostMigrationJobNew::LocalDecideNextHost";
  }
  else {
    uVar1 = FUN_7100193110(DAT_71052adfc0);
    *(undefined1 *)(param_1 + 0x86) = uVar1;
    *(undefined1 *)(param_1 + 0x90) = param_3;
    pcVar3 = FUN_710017c550;
    pcVar2 = "LocalProcessHostMigrationJobNew::LocalCleanupOldHostInfo";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 1;
}


```

## 31. `FUN_7100110080`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100110080`  (offset `0x110080`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100110080(void)`
- **Size / BBs / Incoming:** 280 bytes / 11 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** NexProcessHostMigrationJob::WaitAfterPrepareForBecomingHost;NexProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_71000bb680;FUN_7100146ba0;FUN_71001a1890;FUN_71001d0a10;FUN_71001d1590;FUN_710024bc70
- **Files:** [decomp](../decompiled/FUN_7100110080__7100110080.c)  [cfg](../decompiled/FUN_7100110080__7100110080.mmd)
- **Clone hash:** `f48e272a485b0df4`

```c

undefined8 FUN_7100110080(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  code *pcVar7;
  undefined1 auStack_40 [16];
  
  uVar4 = FUN_71001a1890();
  if ((uVar4 & 1) != 0) {
    iVar3 = *(int *)(DAT_71052acd90 + 0x58);
    if (iVar3 != 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (*(int *)((long)plVar5 + 0x14) == 1) {
        FUN_71001d0a10(plVar5);
        plVar5 = *(long **)(param_1 + 0x118);
      }
      FUN_71001d1590(plVar5);
      uVar2 = FUN_710024bc70(*(long *)(DAT_71052acd90 + 0x68),*(long **)(param_1 + 0x118),iVar3,1);
      lVar1 = DAT_71052adb38;
      if ((uVar2 & 1) != 0) {
        if ((DAT_71052adb38 != 0) && (iVar3 = FUN_7100146ba0(DAT_71052adb38), iVar3 == 3)) {
          plVar5 = *(long **)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 8 + 0x168);
          (**(code **)(*plVar5 + 0xd8))
                    (auStack_40,plVar5,
                     *(undefined4 *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 4 + 0x180));
        }
        lVar1 = DAT_71052ac580;
        plVar5 = FUN_71000bb680();
        pcVar6 = "NexProcessHostMigrationJob::WaitAfterPrepareForBecomingHost";
        *(long *)(param_1 + 0x218) = *(long *)(lVar1 + 0x30) + *plVar5 * 10000;
        pcVar7 = FUN_71001101a0;
        goto LAB_7100110178;
      }
    }
// ... (10 more lines)
```

## 32. `FUN_71001a20c0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a20c0`  (offset `0x1a20c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001a20c0(void)`
- **Size / BBs / Incoming:** 196 bytes / 4 bb / 4 incoming refs
- **Match values:** Host
- **Strings touched:** select_item;ProcessHostMigrationJob::HostMigrationFailure;ProcessHostMigrationJob::HostMigrationSuccess
- **Callees:** FUN_7100192e90;FUN_7100193580;FUN_710019a1a0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001a20c0__71001a20c0.c)  [cfg](../decompiled/FUN_71001a20c0__71001a20c0.mmd)
- **Clone hash:** `9abba29208ee791c`

```c

undefined8 FUN_71001a20c0(long param_1)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 10;
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    pcVar3 = FUN_71001a1d80;
    pcVar2 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    lVar1 = FUN_7100193580(DAT_71052adfc0);
    FUN_710019a1a0(lVar1,*(byte *)(param_1 + 0xc3));
    *(undefined1 *)(param_1 + 0xb1) = 0;
    pcVar3 = FUN_71001a2190;
    pcVar2 = "ProcessHostMigrationJob::HostMigrationSuccess";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
}


```

## 33. `FUN_71001a2450`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a2450`  (offset `0x1a2450`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001a2450(void)`
- **Size / BBs / Incoming:** 548 bytes / 19 bb / 7 incoming refs
- **Match values:** Host
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;ProcessHostMigrationJob::HostMigrationSuccess;select_item
- **Callees:** FUN_71000beb40;FUN_710015fd60;FUN_710015ff20;FUN_7100160b20;FUN_7100161fa0;FUN_7100161fb0;FUN_7100190a90;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001a2450__71001a2450.c)  [cfg](../decompiled/FUN_71001a2450__71001a2450.mmd)
- **Clone hash:** `d328169c6c794517`

```c

undefined8 FUN_71001a2450(long *param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  undefined4 auStack_c8 [2];
  int aiStack_c0 [4];
  int aiStack_b0 [32];
  
  *(undefined4 *)(param_1 + 0x22) = 0xc;
  FUN_7100192e90(aiStack_b0,DAT_71052adfc0);
  aiStack_c0[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_c0 | 4));
  auStack_c8[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_c0 | 4),(Result *)auStack_c8);
  if (aiStack_b0[0] != aiStack_c0[0]) {
    if (*(char *)((long)param_1 + 0xc1) == '\0') {
      if (*(char *)((long)param_1 + 0x85) == '\0') {
        if ((*(ulong *)(DAT_71052ac580 + 0x30) < (ulong)param_1[0xb]) &&
           (bVar1 = FUN_7100190a90(DAT_71052adfc0,*(byte *)(param_1 + 0x12)), bVar1)) {
          return 5;
        }
        uVar5 = (**(code **)(*param_1 + 0x80))(param_1);
        if ((uVar5 & 1) != 0) {
          return 0;
        }
      }
    }
    else {
      *(char *)(DAT_71052adfc0 + 0xab) = (char)param_1[0x12];
      lVar2 = FUN_7100161fa0(DAT_71052add68);
      *(char *)(lVar2 + 0xa0) = (char)param_1[0x12];
      plVar3 = (long *)FUN_7100161fa0(DAT_71052add68);
      plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,(char)param_1[0x12]);
// ... (37 more lines)
```

## 34. `FUN_7100123b90`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100123b90`  (offset `0x123b90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100123b90(void)`
- **Size / BBs / Incoming:** 188 bytes / 1 bb / 1 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::LanMakeHostCandidateRanking;LanProcessHostMigrationJob::LanCleanupOldHostInfoOnMultiCandidate
- **Callees:** FUN_71000bb680;FUN_7100193110
- **Files:** [decomp](../decompiled/FUN_7100123b90__7100123b90.c)  [cfg](../decompiled/FUN_7100123b90__7100123b90.mmd)
- **Clone hash:** `4b79ed544d745d91`

```c

undefined8 FUN_7100123b90(long param_1,byte param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  long lVar4;
  bool bVar5;
  undefined1 uVar6;
  long *plVar7;
  
  iVar1 = (param_3 & 0xffff) * 3000 + 0x9c4;
  *(int *)(param_1 + 0x60) = iVar1;
  lVar4 = DAT_71052ac580;
  plVar7 = FUN_71000bb680();
  *(ulong *)(param_1 + 0x158) = *(long *)(lVar4 + 0x30) + *plVar7 * (ulong)(uint)(iVar1 * 2);
  uVar6 = FUN_7100193110(DAT_71052adfc0);
  bVar5 = (param_2 & 1) == 0;
  pcVar2 = "LanProcessHostMigrationJob::LanCleanupOldHostInfoOnMultiCandidate";
  if (bVar5) {
    pcVar2 = "LanProcessHostMigrationJob::LanMakeHostCandidateRanking";
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  pcVar3 = FUN_7100123c50;
  if (bVar5) {
    pcVar3 = FUN_7100123cb0;
  }
  *(undefined1 *)(param_1 + 0x86) = uVar6;
  *(byte *)(param_1 + 0x1a0) = param_2 & 1;
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 1;
}


```

## 35. `FUN_7100123980`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100123980`  (offset `0x123980`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100123980(void)`
- **Size / BBs / Incoming:** 164 bytes / 4 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::WaitNewHostGreeting;LanProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_71001a1780
- **Files:** [decomp](../decompiled/FUN_7100123980__7100123980.c)  [cfg](../decompiled/FUN_7100123980__7100123980.mmd)
- **Clone hash:** `d8aa80b611c7c682`

```c

undefined8 FUN_7100123980(long *param_1)

{
  code *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  code *pcVar6;
  
  *(undefined4 *)(param_1 + 0x22) = 1;
  uVar3 = (**(code **)(*param_1 + 0x30))();
  if ((uVar3 & 1) == 0) {
    pcVar5 = "LanProcessHostMigrationJob::HostMigrationFailure";
    pcVar6 = FUN_71001a1d80;
  }
  else {
    uVar4 = FUN_71001a1780((long)param_1);
    pcVar1 = FUN_71001a1d80;
    pcVar2 = "LanProcessHostMigrationJob::HostMigrationFailure";
    if ((int)uVar4 == 2) {
      pcVar1 = FUN_71001a2310;
      pcVar2 = "LanProcessHostMigrationJob::WaitNewHostGreeting";
    }
    pcVar5 = "LanProcessHostMigrationJob::LanPrepareForBecomingHost";
    pcVar6 = FUN_7100123b10;
    if ((int)uVar4 != 1) {
      pcVar5 = pcVar2;
      pcVar6 = pcVar1;
    }
  }
  param_1[6] = (long)pcVar6;
  param_1[7] = 0;
  param_1[8] = (long)pcVar5;
  return 0;
}


```

## 36. `FUN_71001101a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001101a0`  (offset `0x1101a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001101a0(void)`
- **Size / BBs / Incoming:** 476 bytes / 21 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** NexProcessHostMigrationJob::SendGreetingMessage;NexProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_7100146ba0;FUN_71001a1930;FUN_71001d0a10;FUN_71001d1590
- **Files:** [decomp](../decompiled/FUN_71001101a0__71001101a0.c)  [cfg](../decompiled/FUN_71001101a0__71001101a0.mmd)
- **Clone hash:** `d26feb8b72dac765`

```c

undefined8 FUN_71001101a0(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  
  if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
    if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x218)) {
      return 5;
    }
    FUN_71001d0a10(*(long **)(param_1 + 0x118));
    FUN_71001d1590(*(long **)(param_1 + 0x118));
  }
  lVar2 = DAT_71052adb38;
  if ((*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x218)) &&
     (iVar1 = *(int *)(DAT_71052acd90 + 0x58), iVar1 != 0)) {
    if (DAT_71052adb38 != 0) {
      iVar3 = FUN_7100146ba0(DAT_71052adb38);
      if (iVar3 == 3) {
        if (iVar1 != *(int *)(lVar2 + (ulong)((ulong)*(byte *)(lVar2 + 0x162) == 0) * 4 + 0x180))
        goto LAB_7100110328;
        uVar4 = (**(code **)(**(long **)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 8 + 0x168) + 0xe0
                            ))();
        if ((uVar4 & 1) == 0) {
          return 5;
        }
        uVar4 = (**(code **)(**(long **)(lVar2 + (ulong)(*(char *)(lVar2 + 0x162) == '\0') * 8 +
                                        0x168) + 0xe0))();
        if ((uVar4 & 1) == 0) {
          return 5;
        }
      }
      else {
        iVar3 = FUN_7100146ba0(lVar2);
        if (iVar3 == 1) {
          if (iVar1 != *(int *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 4 + 0x180))
// ... (24 more lines)
```

## 37. `FUN_7100123c50`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100123c50`  (offset `0x123c50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100123c50(void)`
- **Size / BBs / Incoming:** 96 bytes / 1 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanSendRankDecision
- **Files:** [decomp](../decompiled/FUN_7100123c50__7100123c50.c)  [cfg](../decompiled/FUN_7100123c50__7100123c50.mmd)
- **Clone hash:** `97c1cabf0692c4fd`

```c

undefined8 FUN_7100123c50(long *param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar4 = (**(code **)(*param_1 + 0x30))();
  bVar3 = (uVar4 & 1) == 0;
  pcVar1 = "LanProcessHostMigrationJob::LanSendRankDecision";
  if (bVar3) {
    pcVar1 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  param_1[8] = (long)pcVar1;
  pcVar2 = FUN_7100123d30;
  if (bVar3) {
    pcVar2 = FUN_71001a1d80;
  }
  param_1[6] = (long)pcVar2;
  param_1[7] = 0;
  return 0;
}


```

## 38. `FUN_71001253a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001253a0`  (offset `0x1253a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001253a0(void)`
- **Size / BBs / Incoming:** 288 bytes / 12 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** ProcessHostMigrationJob::SendMigrationFinish;LanProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_7100116f40;FUN_7100117050;FUN_710011be50;FUN_7100128280;FUN_7100149240;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001253a0__71001253a0.c)  [cfg](../decompiled/FUN_71001253a0__71001253a0.mmd)
- **Clone hash:** `1a5eeafd8cb3a74b`

```c

undefined8 FUN_71001253a0(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  char *pcVar9;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  puVar2 = (undefined8 *)FUN_7100116f40();
  lVar3 = FUN_7100117050(puVar2);
  bVar1 = FUN_7100128280(lVar3);
  lVar3 = DAT_71052adb38;
  if (bVar1) {
    plVar4 = (long *)FUN_710011be50(*(long *)(DAT_71052adb38 +
                                              (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168))
    ;
    uVar5 = (**(code **)(*plVar4 + 0x38))();
    if ((uVar5 & 1) == 0) {
      uVar7 = 2;
    }
    else {
      uVar7 = 1;
    }
    FUN_7100149240(lVar3,uVar7);
    pcVar8 = FUN_71001a20c0;
    uVar6 = 0;
    pcVar9 = "ProcessHostMigrationJob::SendMigrationFinish";
  }
  else {
    FUN_7100192e90(aiStack_38,DAT_71052adfc0);
    aiStack_48[0] = 0x6c50;
// ... (18 more lines)
```

## 39. `FUN_7100125170`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100125170`  (offset `0x125170`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100125170(void)`
- **Size / BBs / Incoming:** 552 bytes / 18 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanWaitSendUpdateSessionMessage
- **Callees:** FUN_71000b40e0;FUN_7100116f40;FUN_7100117050;FUN_71001170c0;FUN_710011b3c0;FUN_710011b450;FUN_7100128230;FUN_7100161fb0;FUN_7100192e90;FUN_7100193560;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100125170__7100125170.c)  [cfg](../decompiled/FUN_7100125170__7100125170.mmd)
- **Clone hash:** `8779b550a8917592`

```c

undefined8 FUN_7100125170(long param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  char *pcVar10;
  long *plVar11;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar11 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar3 = FUN_710011b3c0((long)plVar11);
  if (((uVar3 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    if ((aiStack_40[0] != aiStack_50[0]) &&
       (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      return 5;
    }
    FUN_710011b450(aiStack_40,(long)plVar11);
    uVar4 = 5;
  }
  else {
    lVar5 = (**(code **)(*plVar11 + 0xf0))(plVar11);
    if (lVar5 == -1) {
LAB_7100125280:
      FUN_7100116f40();
// ... (38 more lines)
```

## 40. `FUN_7100176bf0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176bf0`  (offset `0x176bf0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176bf0(void)`
- **Size / BBs / Incoming:** 308 bytes / 13 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;N2nn3pia9transport11DispatchJobE;LocalHostMigrationJob::SearchNewHostNetwork
- **Callees:** FUN_71000b41f0;FUN_71000b4300;FUN_71000bce50;FUN_7100176130;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100176bf0__7100176bf0.c)  [cfg](../decompiled/FUN_7100176bf0__7100176bf0.mmd)
- **Clone hash:** `46e2b632cdcc3450`

```c

undefined8 FUN_7100176bf0(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar3 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar3 == 1) {
      FUN_71000b4300((long)piVar3);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar3) {
  case 1:
    goto switchD_7100176c68_caseD_1;
  case 2:
    *(undefined1 *)(*(long *)(param_1 + 0x78) + 0x47d) = 0;
    *(code **)(param_1 + 0x30) = FUN_7100176d30;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::SearchNewHostNetwork";
    return 0;
  case 3:
    FUN_71000bce50(aiStack_40,piVar3 + 1);
    piVar3 = aiStack_40;
    break;
  case 4:
    FUN_71000bce50(aiStack_50,piVar3 + 1);
// ... (19 more lines)
```

## 41. `FUN_7100123cb0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100123cb0`  (offset `0x123cb0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100123cb0(long param_1)`
- **Size / BBs / Incoming:** 124 bytes / 1 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanSendRankDecision
- **Callees:** FUN_71001a2c80
- **Files:** [decomp](../decompiled/FUN_7100123cb0__7100123cb0.c)  [cfg](../decompiled/FUN_7100123cb0__7100123cb0.mmd)
- **Clone hash:** `e54ea1e0785c93aa`

```c

undefined8 FUN_7100123cb0(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  int local_30 [4];
  
  FUN_71001a2c80(local_30,param_1,(uint)*(byte *)(param_1 + 0x86),param_1 + 0xc5,
                 (undefined4 *)(param_1 + 0xe8),(undefined4 *)(param_1 + 0xec),0);
  pcVar1 = "LanProcessHostMigrationJob::LanSendRankDecision";
  pcVar2 = FUN_7100123d30;
  if (local_30[0] != 0) {
    pcVar1 = "LanProcessHostMigrationJob::HostMigrationFailure";
    pcVar2 = FUN_71001a1d80;
  }
  *(code **)(param_1 + 0x30) = pcVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar1;
  return 0;
}


```

## 42. `FUN_71001a1a40`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a1a40`  (offset `0x1a1a40`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001a1a40(void)`
- **Size / BBs / Incoming:** 828 bytes / 25 bb / 4 incoming refs
- **Match values:** Host
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;ProcessHostMigrationJob::WaitGreetingResponse
- **Callees:** FUN_71000bb680;FUN_71000beb40;FUN_710015e730;FUN_710015fd60;FUN_710015ff20;FUN_7100160b20;FUN_7100161fa0;FUN_7100161fb0;FUN_7100162430;FUN_7100189910;FUN_7100190a90;FUN_7100190af0;FUN_7100190ca0;FUN_7100192e90;FUN_7100193560;FUN_7100193580;...
- **Files:** [decomp](../decompiled/FUN_71001a1a40__71001a1a40.c)  [cfg](../decompiled/FUN_71001a1a40__71001a1a40.mmd)
- **Clone hash:** `f0b50e5df58e9a9b`

```c

undefined8 FUN_71001a1a40(long *param_1)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  int aiStack_f0 [4];
  int aiStack_e0 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 auStack_58 [2];
  
  *(undefined4 *)(param_1 + 0x22) = 7;
  FUN_7100192e90(aiStack_e0,DAT_71052adfc0);
  aiStack_f0[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_f0 | 4));
  auStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_f0 | 4),(Result *)auStack_58);
  if (aiStack_e0[0] != aiStack_f0[0]) {
    bVar1 = FUN_7100193560(DAT_71052adfc0);
    lVar3 = FUN_7100161fa0(DAT_71052add68);
    plVar8 = *(long **)(lVar3 + 0x98);
    if (plVar8 != (long *)0x0) {
      plVar4 = (long *)FUN_7100161fb0(DAT_71052add68);
      FUN_710015fd60((undefined8 *)aiStack_e0);
      (**(code **)(*plVar4 + 0x28))(aiStack_f0,plVar4,plVar8,aiStack_e0);
      if (aiStack_f0[0] == 0) {
        FUN_7100160b20((long)plVar4,(long)aiStack_e0);
        FUN_71000beb40((long)(plVar4 + 0x21),(long)(plVar8 + 2));
// ... (94 more lines)
```

## 43. `FUN_7100176d30`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176d30`  (offset `0x176d30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176d30(void)`
- **Size / BBs / Incoming:** 256 bytes / 15 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;LocalHostMigrationJob::ConnectNetwork;LocalHostMigrationJob::ScanNetwork
- **Callees:** FUN_71000b4300
- **Files:** [decomp](../decompiled/FUN_7100176d30__7100176d30.c)  [cfg](../decompiled/FUN_7100176d30__7100176d30.mmd)
- **Clone hash:** `d17fd4a9e0629b0c`

```c

undefined8 FUN_7100176d30(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    plVar2 = *(long **)(param_1 + 0x78);
    if ((int)plVar2[0x90] != 0) {
      bVar1 = false;
      uVar7 = 0;
      do {
        lVar3 = (**(code **)(*plVar2 + 0xd8))(plVar2,uVar7);
        if (lVar3 == 0) break;
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x150))(*(long **)(param_1 + 0x78),lVar3)
        ;
        if ((uVar4 & 1) != 0) {
          bVar1 = true;
          *(uint *)(param_1 + 0x6c) = uVar7;
        }
        plVar2 = *(long **)(param_1 + 0x78);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(plVar2 + 0x90));
      if (bVar1) {
        *(undefined8 *)(param_1 + 0x30) = 0x50;
        pcVar6 = "LocalHostMigrationJob::ConnectNetwork";
        uVar5 = 1;
        goto LAB_7100176e18;
      }
    }
    uVar5 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100176a80;
    pcVar6 = "LocalHostMigrationJob::ScanNetwork";
  }
// ... (14 more lines)
```

## 44. `FUN_7100123b10`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100123b10`  (offset `0x123b10`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100123b10(void)`
- **Size / BBs / Incoming:** 120 bytes / 4 bb / 5 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::SendGreetingMessage;LanProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_71000b40e0;FUN_7100116f40;FUN_7100117050;FUN_7100127560;FUN_71001a1890;FUN_71001a1930
- **Files:** [decomp](../decompiled/FUN_7100123b10__7100123b10.c)  [cfg](../decompiled/FUN_7100123b10__7100123b10.mmd)
- **Clone hash:** `c71fba92a17c133b`

```c

undefined8 FUN_7100123b10(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  
  *(undefined4 *)(param_1 + 0x110) = 5;
  uVar1 = FUN_71001a1890();
  if ((uVar1 & 1) == 0) {
    pcVar5 = FUN_71001a1d80;
    pcVar4 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    FUN_71001a1930(param_1);
    FUN_71000b40e0((undefined4 *)(param_1 + 0x118));
    puVar2 = (undefined8 *)FUN_7100116f40();
    lVar3 = FUN_7100117050(puVar2);
    FUN_7100127560(lVar3);
    pcVar5 = FUN_71001a1a40;
    pcVar4 = "LanProcessHostMigrationJob::SendGreetingMessage";
  }
  *(code **)(param_1 + 0x30) = pcVar5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return 0;
}


```

## 45. `FUN_7100124bb0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100124bb0`  (offset `0x124bb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100124bb0(void)`
- **Size / BBs / Incoming:** 132 bytes / 1 bb / 4 incoming refs
- **Match values:** Host
- **Strings touched:** LanProcessHostMigrationJob::LanPrepareForBecomingHost
- **Callees:** FUN_71000bb680;FUN_7100124c40;FUN_7100193560
- **Files:** [decomp](../decompiled/FUN_7100124bb0__7100124bb0.c)  [cfg](../decompiled/FUN_7100124bb0__7100124bb0.mmd)
- **Clone hash:** `d827b75c181c61a3`

```c

undefined8 FUN_7100124bb0(long *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = FUN_7100193560(DAT_71052adfc0);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  *(undefined1 *)((long)param_1 + 0xb2) = 0;
  FUN_7100124c40((long)param_1);
  (**(code **)(*param_1 + 0x70))(param_1,*(undefined1 *)((long)param_1 + 0x86));
  plVar2 = FUN_71000bb680();
  lVar3 = *plVar2;
  param_1[6] = (long)FUN_7100123b10;
  param_1[7] = 0;
  param_1[0xb] = param_1[0xb] + lVar3 * -1000;
  param_1[8] = (long)"LanProcessHostMigrationJob::LanPrepareForBecomingHost";
  return 0;
}


```

## 46. `FUN_71001122e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001122e0`  (offset `0x1122e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001122e0(void)`
- **Size / BBs / Incoming:** 52 bytes / 4 bb / 1 incoming refs
- **Match values:** Host
- **Strings touched:** chara/chara_4/chara_4_;NexProcessHostMigrationJob::NexCheckMatchMakingClientHostIsUpdated
- **Files:** [decomp](../decompiled/FUN_71001122e0__71001122e0.c)  [cfg](../decompiled/FUN_71001122e0__71001122e0.mmd)
- **Clone hash:** `ca694b7320e1484c`

```c

void FUN_71001122e0(long param_1,long param_2)

{
  if ((*(long *)(param_1 + 0xb8) != param_2) && (*(long *)(param_1 + 0x88) != param_2)) {
    *(code **)(param_1 + 0x30) = FUN_7100112320;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) =
         "NexProcessHostMigrationJob::NexCheckMatchMakingClientHostIsUpdated";
  }
  return;
}


```

## 47. `FUN_7100176a80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176a80`  (offset `0x176a80`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176a80(void)`
- **Size / BBs / Incoming:** 360 bytes / 12 bb / 3 incoming refs
- **Match values:** Host
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;LocalHostMigrationJob::WaitScanNetwork
- **Callees:** FUN_71000b41f0;FUN_71000b4300;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_7100176130;FUN_7100182400;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100176a80__7100176a80.c)  [cfg](../decompiled/FUN_7100176a80__7100176a80.mmd)
- **Clone hash:** `a6a3b87542bffa13`

```c

undefined8 FUN_7100176a80(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long alStack_50 [2];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    alStack_50[0] = 0;
    FUN_71000bb5d0(alStack_50);
    lVar4 = alStack_50[0] - *(long *)(param_1 + 0x80);
    plVar2 = FUN_71000bb680();
    lVar3 = 0;
    if (*plVar2 != 0) {
      lVar3 = lVar4 / *plVar2;
    }
    if (lVar3 < 0x2711) {
      plVar2 = *(long **)(param_1 + 0x78);
      lVar4 = *(long *)(param_1 + 0x60);
      lVar3 = (**(code **)(*plVar2 + 0x160))(plVar2);
      FUN_7100182400((int *)alStack_50,(long)plVar2,lVar4,lVar3);
      if ((int)alStack_50[0] == 0) {
        *(code **)(param_1 + 0x30) = FUN_7100176bf0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitScanNetwork";
      }
      uVar1 = 5;
    }
    else {
      if (**(int **)(param_1 + 0x60) == 1) {
        FUN_71000b4300((long)*(int **)(param_1 + 0x60));
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x78) + 0x400) + 0x48) = 1;
      }
      FUN_7100176130(param_1);
// ... (25 more lines)
```

## 48. `FUN_710018f200`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018f200`  (offset `0x18f200`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_710018f200(long * param_1, undefined4 * param_2)`
- **Size / BBs / Incoming:** 184 bytes / 6 bb / 1 incoming refs
- **Match values:** Host
- **Strings touched:** LeaveWithHostMigrationJob::CheckHostMigrationProcess
- **Callers:** FUN_7100192050
- **Callees:** FUN_71000b4160;FUN_71000bb680;FUN_7100191ed0
- **Files:** [decomp](../decompiled/FUN_710018f200__710018f200.c)  [cfg](../decompiled/FUN_710018f200__710018f200.mmd)
- **Clone hash:** `8771bb147ff9cc5b`

```c

undefined4 FUN_710018f200(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  lVar2 = DAT_71052ac580;
  if (*(char *)((long)param_1 + 0x6c) == '\0') {
    lVar1 = param_1[0xd];
    plVar3 = FUN_71000bb680();
    param_1[0xc] = *(long *)(lVar2 + 0x30) + *plVar3 * (long)(int)lVar1;
    if (param_2 != (undefined4 *)0x0) {
      param_1[0xb] = (long)param_2;
      FUN_71000b4160(param_2);
    }
    uVar4 = 1;
    *(undefined1 *)((long)param_1 + 0x6c) = 1;
    FUN_7100191ed0(DAT_71052adfc0,2);
    (**(code **)(*param_1 + 0x10))(param_1,1);
    param_1[6] = (long)FUN_710018f2c0;
    param_1[7] = 0;
    param_1[8] = (long)"LeaveWithHostMigrationJob::CheckHostMigrationProcess";
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


```

## 49. `FUN_71020fbb90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** HOST
- **Strings touched:** GF_SCENE_ROOT_LAYER_GROUND;GF_SCENE_ROOT_LAYER_GROUND_AND_CHARA;TRANS_A_JUMP_AERIAL;GF_SCENE_ROOT_LAYER_CHARA;GF_SCENE_ROOT_LAYER_ALL;GF_SCENE_ROOT_LAYER_FIGHTER;GF_SCENE_ROOT_LAYER_STAGE_OBJECT;GF_SCENE_ROOT_LAYER_GROUND2;GF_SCENE_ROOT_LAYER_EFFECT;GF_SCENE_ROOT_LAYER_EFFECT_FIGHTER;GF_SCENE_ROOT_LAYER_SPECIAL_STAGE_OBJECT;GF_SCENE_ROOT_LAYER_EFFECT2D;GF_SCENE_ROOT_LAYER_INFO;GF_SCENE_ROOT_LAYER_MAX;EF_FLIP_NONE;EF_FLIP_AXIS_YZ;EF_FLIP_AXIS_ZX;EF_FLIP_AXIS_XY;EF_FLIP_1;EF_FLIP_2;EF_FLIP_TRANS_X;EF_FLIP_TRANS_Y;EF_FLIP_TRANS_Z;EF_FLIP_ROT_X;EF_FLIP_ROT_Y;EF_FLIP_ROT_Z;EF_FLIP_SCALE_X;EF_FLIP_SCALE_Y;EF_FLIP_SCALE_Z;EF_FLIP_PTCL_X;EF_FLIP_PTCL_Y;EF_FLIP_BITCTRL;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020fbb90__71020fbb90.c)  [cfg](../decompiled/FUN_71020fbb90__71020fbb90.mmd)
- **Clone hash:** `884095f7b78c7d69`

```c

void FUN_71020fbb90(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  long local_78;
  long local_70;
  int local_68;
  
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_GROUND",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_GROUND_AND_CHARA",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_CHARA",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_ALL",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_FIGHTER",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_STAGE_OBJECT",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_GROUND2",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_EFFECT",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_EFFECT_FIGHTER",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_SPECIAL_STAGE_OBJECT",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_EFFECT2D",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_INFO",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_MAX",(undefined **)&DAT_00000004,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
// ... (15385 more lines)
```

## 50. `FUN_710018f560`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018f560`  (offset `0x18f560`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018f560(void)`
- **Size / BBs / Incoming:** 116 bytes / 4 bb / 2 incoming refs
- **Match values:** Host
- **Strings touched:** LeaveWithHostMigrationJob::WaitMigrationResponse;LeaveWithHostMigrationJob::CleanupMesh
- **Callees:** FUN_7100193580;FUN_710019ac40
- **Files:** [decomp](../decompiled/FUN_710018f560__710018f560.c)  [cfg](../decompiled/FUN_710018f560__710018f560.mmd)
- **Clone hash:** `7d1655b07121d0c5`

```c

undefined8 FUN_710018f560(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  
  lVar1 = FUN_7100193580(DAT_71052adfc0);
  uVar2 = FUN_710019ac40(lVar1,param_1 + 0x6e);
  if ((uVar2 & 1) == 0) {
    pcVar4 = FUN_710018f700;
    uVar3 = 0;
    pcVar5 = "LeaveWithHostMigrationJob::CleanupMesh";
  }
  else {
    *(undefined1 *)(param_1 + 0x8e) = 1;
    pcVar4 = FUN_710018f800;
    uVar3 = 5;
    pcVar5 = "LeaveWithHostMigrationJob::WaitMigrationResponse";
  }
  *(code **)(param_1 + 0x30) = pcVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar3;
}


```

