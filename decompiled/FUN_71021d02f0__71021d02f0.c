// addr:      71021d02f0
// offset:    0x21d02f0
// name:      FUN_71021d02f0
// mangled:   
// signature: undefined8 __cdecl FUN_71021d02f0(long param_1)


undefined8 FUN_71021d02f0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined1 local_34;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,4);
  local_60 = 10;
  local_68 = &DAT_71050b56d8;
  local_58 = 0x30fcceaad8;
  uStack_50 = 0;
  local_48 = 0xffffffff50000000;
  local_40 = 0;
  local_3c = 0xffffffff50000000;
  local_34 = 0;
  FUN_7101ff91a0((long)&local_68,param_1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_71021d0490;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = &DAT_50000000;
  *(undefined4 *)(puVar3 + 1) = 0x13;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"from_");
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = 0xffffffffffffffff;
  *(undefined4 *)(puVar3 + 1) = 0x13;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"generation_");
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  *puVar4 = 0;
  puVar4[2] = 1;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"result_");
  return 1;
}

