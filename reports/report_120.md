# 120 (funcs=2, hits=6)

Top 50 functions by hit count

## 1. `FUN_7102791f50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102791f50`  (offset `0x2791f50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102791f50(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 468 bytes / 30 bb / 2 incoming refs
- **Match values:** 120
- **Strings touched:** E_chara_050;B_chara_050;E_chara_090;E_chara_120;E_chara_160;E_chara_190;E_chara_270;E_chara_320;E_chara_000
- **Callers:** FUN_71027909c0;FUN_71027910e0
- **Callees:** FUN_7102633a10
- **Files:** [decomp](../decompiled/FUN_7102791f50__7102791f50.c)  [cfg](../decompiled/FUN_7102791f50__7102791f50.mmd)
- **Clone hash:** `57af89471cf55b87`

```c

void FUN_7102791f50(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  
  fVar4 = *(float *)(*(long *)(param_1 + 0xa90) + 0x28);
  bVar2 = false;
  if ((0.0 <= fVar4) && (bVar2 = false, !NAN(fVar4))) {
    bVar2 = fVar4 < 25.0;
  }
  if (bVar2) {
    lVar3 = 0x71050df150;
  }
  else if ((fVar4 < 25.0) || (70.0 <= fVar4)) {
    if ((fVar4 < 70.0) || (105.0 <= fVar4)) {
      if ((fVar4 < 105.0) || (140.0 <= fVar4)) {
        if ((fVar4 < 140.0) || (175.0 <= fVar4)) {
          if ((fVar4 < 175.0) || (230.0 <= fVar4)) {
            if ((fVar4 < 230.0) || (295.0 <= fVar4)) {
              if ((fVar4 < 295.0) || (340.0 <= fVar4)) {
                if (fVar4 < 340.0) {
                  return;
                }
                if (360.0 <= fVar4) {
                  return;
                }
                lVar3 = 0x71050df250;
              }
              else {
                lVar3 = 0x71050df230;
              }
            }
            else {
              lVar3 = 0x71050df210;
            }
// ... (32 more lines)
```

## 2. `FUN_7102794980`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102794980`  (offset `0x2794980`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102794980(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 448 bytes / 30 bb / 2 incoming refs
- **Match values:** 120
- **Strings touched:** chara_050;chara_090;chara_120;chara_160;chara_190;chara_270;chara_320;chara_000
- **Callers:** FUN_7102792550;FUN_7102793570
- **Callees:** FUN_7102633a10
- **Files:** [decomp](../decompiled/FUN_7102794980__7102794980.c)  [cfg](../decompiled/FUN_7102794980__7102794980.mmd)
- **Clone hash:** `9ff3319bb4365f92`

```c

void FUN_7102794980(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = *(float *)(*(long *)(param_1 + 0xa78) + 0x28);
  bVar1 = false;
  if ((0.0 <= fVar3) && (bVar1 = false, !NAN(fVar3))) {
    bVar1 = fVar3 < 25.0;
  }
  if (bVar1) {
    lVar2 = 0x71050dfb18;
  }
  else if ((fVar3 < 25.0) || (70.0 <= fVar3)) {
    if ((fVar3 < 70.0) || (105.0 <= fVar3)) {
      if ((fVar3 < 105.0) || (140.0 <= fVar3)) {
        if ((fVar3 < 140.0) || (175.0 <= fVar3)) {
          if ((fVar3 < 175.0) || (230.0 <= fVar3)) {
            if ((fVar3 < 230.0) || (295.0 <= fVar3)) {
              if ((fVar3 < 295.0) || (340.0 <= fVar3)) {
                if (fVar3 < 340.0) {
                  return;
                }
                if (360.0 <= fVar3) {
                  return;
                }
                lVar2 = 0x71050dfbd8;
              }
              else {
                lVar2 = 0x71050dfbc0;
              }
            }
            else {
              lVar2 = 0x71050dfba8;
            }
          }
// ... (27 more lines)
```

