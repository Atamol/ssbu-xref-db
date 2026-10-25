// addr:      71020b8c00
// offset:    0x20b8c00
// name:      FUN_71020b8c00
// mangled:   
// signature: undefined __cdecl FUN_71020b8c00(long param_1, long param_2, uint param_3)


void FUN_71020b8c00(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  FUN_71020b6200(param_1,param_2,(ulong)(param_3 & 1));
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71020b8b10;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *(undefined4 *)(param_1 + 0x74);
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_mul_");
  return;
}

