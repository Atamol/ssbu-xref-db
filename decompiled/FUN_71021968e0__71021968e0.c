// addr:      71021968e0
// offset:    0x21968e0
// name:      FUN_71021968e0
// mangled:   
// signature: undefined __cdecl FUN_71021968e0(long param_1, long param_2, uint param_3)


void FUN_71021968e0(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  
  FUN_71020b1a20(param_1,param_2,(ulong)(param_3 & 1));
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_7102196800;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 0x60);
  *(undefined4 *)(plVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"type_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 100);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"speed_");
  return;
}

