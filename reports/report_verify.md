# verify (funcs=2, hits=2)

Top 50 functions by hit count

## 1. `FUN_7103729070`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103729070`  (offset `0x3729070`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103729070(void)`
- **Size / BBs / Incoming:** 236 bytes / 13 bb / 12 incoming refs
- **Match values:** verify
- **Strings touched:** --noluaopt;NODE_PRE_REFRACT_BLEND;--lua_verify
- **Callers:** FUN_7101f45620;FUN_7103728630;FUN_71037289c0;FUN_7103728bf0;lib::lua_bind_get_value<int>;FUN_710372d730
- **Callees:** <EXTERNAL>::strcmp;<EXTERNAL>::nn::os::GetHostArgc;<EXTERNAL>::nn::os::GetHostArgv
- **Files:** [decomp](../decompiled/FUN_7103729070__7103729070.c)  [cfg](../decompiled/FUN_7103729070__7103729070.mmd)
- **Clone hash:** `12a1eddde05add16`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7103729070(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  
  _DAT_710593b2e0 = 0;
  DAT_710593b2f8 = 0;
  DAT_710593b300 = 0;
  DAT_710593b2e8 = 0;
  DAT_710593b2f0 = 0;
  DAT_710593b308 = 0x3f800000;
  DAT_710593b330 = 0x3f800000;
  DAT_710593b320 = 0;
  DAT_710593b328 = 0;
  DAT_710593b310 = 0;
  DAT_710593b318 = 0;
  iVar1 = nn::os::GetHostArgc();
  if (0 < iVar1) {
    lVar5 = 0;
    do {
      lVar3 = nn::os::GetHostArgv();
      iVar2 = strcmp("--noluaopt",*(char **)(lVar3 + lVar5 * 8));
      if (iVar2 == 0) {
        _DAT_710593b2e0 = _DAT_710593b2e0 & 0xff00;
        return;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  _DAT_710593b2e0 = CONCAT11(DAT_710593b2e1,1);
  iVar1 = nn::os::GetHostArgc();
  if (0 < iVar1) {
    lVar5 = 0;
// ... (16 more lines)
```

## 2. `FUN_7100019bf0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100019bf0`  (offset `0x19bf0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7100019bf0(long param_1, int param_2, long * param_3, long param_4, char * param_5, undefined1 * param_6, char * param_7, long param_8)`
- **Size / BBs / Incoming:** 19336 bytes / 1392 bb / 1 incoming refs
- **Match values:** VERIFY
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

