// addr:      71020d6a20
// offset:    0x20d6a20
// name:      FUN_71020d6a20
// mangled:   
// signature: undefined8 __cdecl FUN_71020d6a20(long param_1)


undefined8 FUN_71020d6a20(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,2);
  local_48 = 0x5000000000000000;
  uStack_40 = 0x5000000000000000;
  local_50 = &DAT_71050b4828;
  local_38 = 0x50000000;
  FUN_71020d4810((long)&local_50,param_1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_71020d6b40;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(puVar3 + 1) = 0x13;
  *puVar3 = &DAT_50000000;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"item_id_");
  return 1;
}

