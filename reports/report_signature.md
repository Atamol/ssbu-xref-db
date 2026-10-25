# signature (funcs=2, hits=2)

Top 50 functions by hit count

## 1. `FUN_710007b6e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710007b6e0`  (offset `0x7b6e0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710007b6e0(long * param_1, undefined8 * param_2, uint * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6)`
- **Size / BBs / Incoming:** 488 bytes / 25 bb / 2 incoming refs
- **Match values:** Signature
- **Strings touched:** select_item;Signature check failed ('%c%c%c%c' must be '%c%c%c%c').
- **Callers:** FUN_7100041b90;FUN_7100060820
- **Callees:** FUN_710007bba0;FUN_710007c310;FUN_710007c410;<EXTERNAL>::nn::util::SNPrintf
- **Files:** [decomp](../decompiled/FUN_710007b6e0__710007b6e0.c)  [cfg](../decompiled/FUN_710007b6e0__710007b6e0.mmd)
- **Clone hash:** `cc6b5d7ebc4aff86`

```c

undefined8
FUN_710007b6e0(long *param_1,undefined8 *param_2,uint *param_3,undefined8 param_4,undefined8 param_5
              ,undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  char acStack_150 [256];
  
  if (param_1[2] == 0) {
    uVar3 = *param_3;
    if (uVar3 == 0x544e4646) {
      if ((short)param_3[1] == -0x101) {
        if ((param_3[2] ^ 0x4000000) >> 0x18 != 0) {
          return 0;
        }
        if ((param_3[2] & 0xfe0000) != 0) {
          return 0;
        }
        if ((0x23 < param_3[3]) && (1 < (ushort)param_3[4])) {
          piVar4 = (int *)0x0;
          uVar3 = 0;
          piVar2 = (int *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + 6));
          do {
            iVar1 = *piVar2;
            if (iVar1 < 0x50414d43) {
              if (iVar1 == 0x464e4946) {
                piVar4 = piVar2 + 2;
              }
              else if ((iVar1 != 0x474e524b) && (iVar1 != 0x48445743)) goto LAB_710007b8bc;
            }
            else if (((iVar1 != 0x50414d43) && (iVar1 != 0x504c4754)) && (iVar1 != 0x52474c47)) {
LAB_710007b8bc:
              param_1[3] = (long)param_3;
              return 0;
            }
            uVar3 = uVar3 + 1;
// ... (22 more lines)
```

## 2. `FUN_71000407b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000407b0`  (offset `0x407b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000407b0(undefined8 * param_1, uint * param_2)`
- **Size / BBs / Incoming:** 276 bytes / 13 bb / 4 incoming refs
- **Match values:** Signature
- **Strings touched:** select_item;Signature check failed ('%c%c%c%c' must be '%c%c%c%c').
- **Callers:** FUN_710004af10;FUN_710004fc50;FUN_7103778880;FUN_7103796720
- **Callees:** <EXTERNAL>::nn::util::SNPrintf
- **Files:** [decomp](../decompiled/FUN_71000407b0__71000407b0.c)  [cfg](../decompiled/FUN_71000407b0__71000407b0.mmd)
- **Clone hash:** `e4eaa2ec92f6b6f5`

```c

void FUN_71000407b0(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 *puVar4;
  char acStack_130 [256];
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = *param_2;
  if (uVar2 != 0x4e414c46) {
    nn::util::SNPrintf(acStack_130,0x100,
                       "Signature check failed (\'%c%c%c%c\' must be \'%c%c%c%c\').",
                       (ulong)(uVar2 >> 0x18),(ulong)(uVar2 >> 0x10 & 0xff),
                       (ulong)(uVar2 >> 8 & 0xff),(ulong)(uVar2 & 0xff),0x4e,0x41,0x4c,0x46);
  }
  *param_1 = param_2;
  if ((short)param_2[4] != 0) {
    uVar2 = 0;
    piVar3 = (int *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + 6));
    do {
      iVar1 = *piVar3;
      puVar4 = param_1 + 2;
      if (((iVar1 == 0x31746170) || (puVar4 = param_1 + 1, iVar1 == 0x31696170)) ||
         (puVar4 = param_1 + 3, iVar1 == 0x31686170)) {
        *puVar4 = piVar3;
      }
      piVar3 = (int *)((long)piVar3 + (ulong)(uint)piVar3[1]);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ushort)param_2[4]);
  }
  return;
}


```

