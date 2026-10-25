// addr:      71020547b0
// offset:    0x20547b0
// name:      FUN_71020547b0
// mangled:   
// signature: undefined8 __cdecl FUN_71020547b0(long param_1)


undefined8 FUN_71020547b0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
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
  local_68 = 10;
  local_60 = 0;
  uStack_58 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0xffffffff50000000;
  local_48 = 0;
  local_70 = &DAT_71050b4468;
  FUN_7101ff91a0((long)&local_70,param_1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_7102054990;
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

