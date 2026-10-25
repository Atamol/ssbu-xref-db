// addr:      7101eda450
// offset:    0x1eda450
// name:      FUN_7101eda450
// mangled:   
// signature: undefined4 __cdecl FUN_7101eda450(long param_1)


undefined4 FUN_7101eda450(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_71032cbb00(*(long *)(param_1 + 0x80),(byte *)"standard_result_final");
  if (puVar1 != (undefined8 *)0x0) {
    return *(undefined4 *)(*(long *)(**(long **)*puVar1 + 0x600) + 0x48c);
  }
  return 0xffffffff;
}

