// addr:      71021718f0
// offset:    0x21718f0
// name:      FUN_71021718f0
// mangled:   
// signature: undefined8 __cdecl FUN_71021718f0(long param_1)


undefined8 FUN_71021718f0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,2);
  local_58 = 10;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0xffffffff50000000;
  local_38 = 0;
  local_60 = &DAT_71050b5138;
  local_34 = 0x3f800000;
  FUN_7101ff91a0((long)&local_60,param_1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_7102171a20;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  puVar4[2] = 3;
  *puVar4 = 0x3f800000;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"power_mul_status_");
  return 1;
}

