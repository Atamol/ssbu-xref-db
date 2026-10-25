// addr:      71021a31f0
// offset:    0x21a31f0
// name:      FUN_71021a31f0
// mangled:   
// signature: undefined __cdecl FUN_71021a31f0(long param_1, long param_2)


void FUN_71021a31f0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  
  FUN_7101ff91a0(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71021a3140;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar3 = *(uint **)(param_2 + 0x10);
  *puVar3 = (uint)*(byte *)(param_1 + 0x29);
  puVar3[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"found_");
  return;
}

