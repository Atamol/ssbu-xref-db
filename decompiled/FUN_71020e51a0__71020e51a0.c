// addr:      71020e51a0
// offset:    0x20e51a0
// name:      FUN_71020e51a0
// mangled:   
// signature: undefined __cdecl FUN_71020e51a0(long param_1, long param_2)


void FUN_71020e51a0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_71020d4810(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71020e5100;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  return;
}

