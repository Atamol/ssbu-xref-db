# rmc (funcs=1, hits=6)

Top 50 functions by hit count

## 1. `FUN_71029ec220`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71029ec220`  (offset `0x29ec220`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71029ec220(undefined8 * param_1, ulong param_2, undefined8 param_3, byte param_4, undefined1 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1344 bytes / 9 bb / 9 incoming refs
- **Match values:** rmC
- **Strings touched:** 00_DestroyPlatformC01aR;00_DestroyPlatformC02bL;00_DestroyPlatformC02cR;00_DestroyPlatformC03aL;00_DestroyPlatformC03cR;plate_side;00_DestroyPlatformC04aL
- **Callers:** FUN_71029e7910
- **Callees:** FUN_710318bf30;<EXTERNAL>::memset;<EXTERNAL>::std::string::assign
- **Files:** [decomp](../decompiled/FUN_71029ec220__71029ec220.c)  [cfg](../decompiled/FUN_71029ec220__71029ec220.mmd)
- **Clone hash:** `6bad6edf35ee5359`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71029ec220(undefined8 *param_1,ulong param_2,undefined8 param_3,byte param_4,
                   undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long ***local_50;
  undefined8 uStack_48;
  
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_71051016f8;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((long)param_1 + 0x43) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
// ... (208 more lines)
```

