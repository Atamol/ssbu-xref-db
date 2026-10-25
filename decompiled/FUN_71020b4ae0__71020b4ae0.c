// addr:      71020b4ae0
// offset:    0x20b4ae0
// name:      FUN_71020b4ae0
// mangled:   
// signature: undefined __cdecl FUN_71020b4ae0(long param_1, long param_2)


void FUN_71020b4ae0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  
  FUN_7101ff91a0(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71020b4c70;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *(undefined4 *)(param_1 + 0x2c);
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"pull_speed_");
  plVar4 = *(long **)(param_2 + 0x10);
  *plVar4 = (long)*(int *)(param_1 + 0x30);
  *(undefined4 *)(plVar4 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"capture_cut_frame_");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *(undefined4 *)(param_1 + 0x34);
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"capture_cut_frame_damage_");
  plVar4 = *(long **)(param_2 + 0x10);
  *plVar4 = (long)*(int *)(param_1 + 0x38);
  *(undefined4 *)(plVar4 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"capture_cut_frame_max_");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *(undefined4 *)(param_1 + 0x3c);
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"capture_recovery_");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *(undefined4 *)(param_1 + 0x40);
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"capture_clatter_frame_");
  return;
}

