# nonce (funcs=2, hits=4)

Top 50 functions by hit count

## 1. `FUN_7100024b80`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100024b80`  (offset `0x24b80`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100024b80(long param_1, char * param_2, undefined8 param_3, undefined8 param_4, char * param_5, undefined8 * param_6, undefined8 * param_7, size_t * param_8)`
- **Size / BBs / Incoming:** 992 bytes / 43 bb / 1 incoming refs
- **Match values:** nonce
- **Strings touched:** %s:%s:%s;%s:%s;auth-int;d41d8cd98f00b204e9800998ecf8427e;%s:%s:%08x:%s:%s:%s;username="%s", realm="%s", nonce="%s", uri="%s", cnonce="%s", nc=%08x, qop=%s, response="%s";plate_side;%s, opaque="%s";%s, algorithm="%s";NODE_PRE_REFRACT_BLEND;username="%s", realm="%s", nonce="%s", uri="%s", response="%s"
- **Callers:** FUN_7100013550
- **Callees:** FUN_7100007fd0;FUN_7100012750;FUN_7100015680;FUN_7100017280;FUN_7100024f60;FUN_71000252c0;FUN_7100027290;FUN_71000272a0;<EXTERNAL>::strlen
- **Files:** [decomp](../decompiled/FUN_7100024b80__7100024b80.c)  [cfg](../decompiled/FUN_7100024b80__7100024b80.mmd)
- **Clone hash:** `48dd5932e59955fe`

```c

undefined8
FUN_7100024b80(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,char *param_5,
              undefined8 *param_6,undefined8 *param_7,size_t *param_8)

{
  bool bVar1;
  int *piVar2;
  undefined8 uVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 *puVar6;
  size_t *psVar7;
  undefined8 *puVar8;
  size_t *psVar9;
  long lVar10;
  char cVar11;
  size_t local_108;
  char acStack_100 [36];
  undefined8 auStack_dc [4];
  undefined1 auStack_b8 [36];
  undefined1 auStack_94 [36];
  byte abStack_70 [16];
  undefined8 local_58;
  
  local_58 = 0;
  local_108 = 0;
  if (*(int *)(param_6 + 7) == 0) {
    *(undefined4 *)(param_6 + 7) = 1;
    lVar10 = param_6[1];
  }
  else {
    lVar10 = param_6[1];
  }
  psVar7 = (size_t *)param_5;
  puVar6 = param_6;
  puVar8 = param_7;
  psVar9 = param_8;
  if (lVar10 == 0) {
    uVar3 = FUN_7100015680(param_1,acStack_100,0x21,param_4,param_5,param_6,param_7,param_8);
// ... (135 more lines)
```

## 2. `FUN_7100024770`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100024770`  (offset `0x24770`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_7100024770(byte * param_1, long * param_2)`
- **Size / BBs / Incoming:** 920 bytes / 49 bb / 1 incoming refs
- **Match values:** nonce
- **Strings touched:** nonce;stale;realm;NODE_PRE_REFRACT_BLEND;opaque;auth-int;algorithm;MD5-sess
- **Callers:** FUN_71000134b0
- **Callees:** FUN_7100017280;FUN_71000176a0;FUN_71000245b0;FUN_71000272a0;FUN_71000272c0
- **Files:** [decomp](../decompiled/FUN_7100024770__7100024770.c)  [cfg](../decompiled/FUN_7100024770__7100024770.mmd)
- **Clone hash:** `4d62c63062ae1adc`

```c

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_7100024770(byte *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  byte bVar7;
  long lVar8;
  long local_578;
  byte abStack_570 [1024];
  byte abStack_170 [256];
  byte *local_70 [2];
  
  lVar8 = *param_2;
  local_70[0] = param_1;
  FUN_71000272a0();
  *param_2 = 0;
  FUN_71000272a0();
  param_2[1] = 0;
  FUN_71000272a0();
  param_2[2] = 0;
  FUN_71000272a0();
  param_2[4] = 0;
  FUN_71000272a0();
  param_2[5] = 0;
  FUN_71000272a0();
  bVar2 = false;
  bVar7 = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined1 *)((long)param_2 + 0x1c) = 0;
  bVar1 = *param_1;
  local_70[0] = param_1;
// ... (120 more lines)
```

