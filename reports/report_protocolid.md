# protocolid (funcs=1, hits=1)

Top 50 functions by hit count

## 1. `FUN_7100154a40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100154a40`  (offset `0x154a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100154a40(uint * param_1, ulong param_2)`
- **Size / BBs / Incoming:** 464 bytes / 23 bb / 4 incoming refs
- **Match values:** ProtocolId
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

