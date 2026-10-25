# encrypt (funcs=1, hits=4)

Top 50 functions by hit count

## 1. `FUN_71001ce780`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001ce780`  (offset `0x1ce780`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001ce780(undefined8 param_1, undefined8 param_2, char * param_3, ulong param_4)`
- **Size / BBs / Incoming:** 88 bytes / 3 bb / 2 incoming refs
- **Match values:** Encrypt
- **Strings touched:** Encryption Error
- **Callees:** <EXTERNAL>::strlen;<EXTERNAL>::strcpy
- **Files:** [decomp](../decompiled/FUN_71001ce780__71001ce780.c)  [cfg](../decompiled/FUN_71001ce780__71001ce780.mmd)
- **Clone hash:** `ea096a2a08387f7e`

```c

undefined8 FUN_71001ce780(undefined8 param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  size_t sVar1;
  
  sVar1 = strlen("Encryption Error");
  if (sVar1 < param_4) {
    strcpy(param_3,"Encryption Error");
    return 1;
  }
  return 0;
}


```

