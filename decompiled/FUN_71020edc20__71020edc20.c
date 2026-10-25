// addr:      71020edc20
// offset:    0x20edc20
// name:      FUN_71020edc20
// mangled:   
// signature: undefined8 __cdecl FUN_71020edc20(long param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71020edc20(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar2 = FUN_710391e050(param_1);
  plVar3 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar3 + 1) = 0x45;
  *plVar3 = lVar2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar2,0,3);
  uVar1 = _ConstantZero;
  uStack_48 = uRam0000007107459008;
  local_50 = _ConstantZero;
  local_68 = 0x5000000000000001;
  uStack_60 = 0x5000000000000044;
  local_70 = &DAT_71050b4d28;
  local_40 = 0x3f800000;
  FUN_71020d4810((long)&local_70,param_1);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  *puVar4 = FUN_71020ede20;
  *(undefined4 *)(puVar4 + 1) = 2;
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar2 + -0x10),"new_instance_lua");
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar2 = FUN_710391e050(param_1);
  plVar3 = *(long **)(param_1 + 0x10);
  *plVar3 = lVar2;
  *(undefined4 *)(plVar3 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar2,0,3);
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  puVar5[2] = 3;
  *puVar5 = (int)uVar1;
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar2 + -0x10),"x");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = (int)((ulong)uVar1 >> 0x20);
  puVar5[2] = 3;
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar2 + -0x10),"y");
  FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x20),"normal_");
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  *puVar5 = 0x3f800000;
  puVar5[2] = 3;
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar2 + -0x10),"scale_");
  return 1;
}

