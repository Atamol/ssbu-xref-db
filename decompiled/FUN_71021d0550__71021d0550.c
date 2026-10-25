// addr:      71021d0550
// offset:    0x21d0550
// name:      FUN_71021d0550
// mangled:   
// signature: undefined __cdecl FUN_71021d0550(long param_1, long param_2)


void FUN_71021d0550(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  uint *puVar4;
  
  FUN_7101ff91a0(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71021d0490;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 0x2c);
  *(undefined4 *)(plVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"from_");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 0x30);
  *(undefined4 *)(plVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"generation_");
  puVar4 = *(uint **)(param_2 + 0x10);
  *puVar4 = (uint)*(byte *)(param_1 + 0x34);
  puVar4[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"result_");
  return;
}

