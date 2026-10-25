// addr:      71020d5880
// offset:    0x20d5880
// name:      FUN_71020d5880
// mangled:   
// signature: undefined8 __cdecl FUN_71020d5880(long param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71020d5880(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar3 = FUN_710391e050(param_1);
  plVar4 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar4 + 1) = 0x45;
  *plVar4 = lVar3;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar3,0,2);
  uVar2 = _DAT_7107521008;
  uVar1 = _ConstantZero;
  local_58 = 0x5000000000000000;
  uStack_50 = 0x5000000000000000;
  local_60 = &DAT_71050b47d8;
  uStack_38 = _DAT_7107521008;
  local_40 = _ConstantZero;
  FUN_71020d4810((long)&local_60,param_1);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  *puVar5 = FUN_71020d5a70;
  *(undefined4 *)(puVar5 + 1) = 2;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"new_instance_lua");
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar3 = FUN_710391e050(param_1);
  plVar4 = *(long **)(param_1 + 0x10);
  *plVar4 = lVar3;
  *(undefined4 *)(plVar4 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar3,0,4);
  puVar6 = *(undefined4 **)(param_1 + 0x10);
  puVar6[2] = 3;
  *puVar6 = (int)uVar1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"x");
  puVar6 = *(undefined4 **)(param_1 + 0x10);
  *puVar6 = (int)((ulong)uVar1 >> 0x20);
  puVar6[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"y");
  puVar6 = *(undefined4 **)(param_1 + 0x10);
  *puVar6 = (int)uVar2;
  puVar6[2] = 3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar3 + -0x10),"z");
  FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x20),"pos_");
  return 1;
}

