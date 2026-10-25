// addr:      71020eac20
// offset:    0x20eac20
// name:      FUN_71020eac20
// mangled:   
// signature: undefined8 __cdecl FUN_71020eac20(long param_1)


undefined8 FUN_71020eac20(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,2);
  local_58 = 0x5000000000000000;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0x500000000000003f;
  local_60 = &DAT_71050b4be8;
  FUN_71020d4810((long)&local_60,param_1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_71020eae00;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *plVar2 = lVar1;
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,4);
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  puVar4[2] = 3;
  *puVar4 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"x");
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  *puVar4 = 0;
  puVar4[2] = 3;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"y");
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  *puVar4 = 0;
  puVar4[2] = 3;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"z");
  FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x20),"pos_");
  return 1;
}

