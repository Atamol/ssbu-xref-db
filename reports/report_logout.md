# logout (funcs=2, hits=4)

Top 50 functions by hit count

## 1. `FUN_71016818c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71016818c0`  (offset `0x16818c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71016818c0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 916 bytes / 54 bb / 1 incoming refs
- **Match values:** Logout
- **Strings touched:** plate_side;Logout
- **Callees:** FUN_7101680ef0;FUN_710392e290;<EXTERNAL>::memmove;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock;<EXTERNAL>::std::recursive_mutex::recursive_mutex
- **Files:** [decomp](../decompiled/FUN_71016818c0__71016818c0.c)  [cfg](../decompiled/FUN_71016818c0__71016818c0.mmd)
- **Clone hash:** `d499595487104bde`

```c

void FUN_71016818c0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long ****pppplVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar7 = &local_50;
  if (*(int *)(param_1 + 0x21c) != 0) {
    if (*(int *)(param_1 + 0x228) != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x244) = 0;
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 8);
    if (*(int *)(*(long *)(lVar4 + 0x88) + 0x74) == 0) {
      FUN_7101680ef0(lVar4);
    }
    if (*(int *)(param_1 + 0x214) < 1) {
      return;
    }
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + -1;
    return;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 8);
  if (*(char *)(lVar4 + 0x70) == '\0') {
    plVar5 = *(long **)(lVar4 + 0x10);
    plVar8 = *(long **)(lVar4 + 0x18);
    if (plVar5 != plVar8) {
      lVar9 = *plVar5;
// ... (135 more lines)
```

## 2. `FUN_7100246470`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100246470`  (offset `0x246470`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100246470(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Logout
- **Strings touched:** RendezVousLogout
- **Files:** [decomp](../decompiled/FUN_7100246470__7100246470.c)  [cfg](../decompiled/FUN_7100246470__7100246470.mmd)
- **Clone hash:** `a7937f3acc0676d6`

```c

char * FUN_7100246470(void)

{
  return "RendezVousLogout";
}


```

