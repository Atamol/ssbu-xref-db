// addr:      71020d6be0
// offset:    0x20d6be0
// name:      FUN_71020d6be0
// mangled:   
// signature: undefined __cdecl FUN_71020d6be0(long param_1, long param_2)


void FUN_71020d6be0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  FUN_71020d4810(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71020d6b40;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 0x18);
  *(undefined4 *)(plVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"item_id_");
  return;
}

