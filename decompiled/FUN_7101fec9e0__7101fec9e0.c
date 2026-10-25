// addr:      7101fec9e0
// offset:    0x1fec9e0
// name:      FUN_7101fec9e0
// mangled:   
// signature: undefined __cdecl FUN_7101fec9e0(undefined4 * param_1, long param_2)


void FUN_7101fec9e0(undefined4 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *plVar5;
  ulong *puVar6;
  uint *puVar7;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_7101fec890;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *param_1;
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"power_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[1];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"vector_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[2];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"r_eff_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[3];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"r_fix_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[4];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"r_add_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = param_1[5];
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"slip_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = param_1[6];
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"stop_frame_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = param_1[7];
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"stop_delay_");
  uVar3 = *(ulong *)(param_1 + 8);
  puVar6 = *(ulong **)(param_2 + 0x10);
  *(undefined4 *)(puVar6 + 1) = 0x13;
  *puVar6 = uVar3 & 0xffffffffff;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"attr_");
  puVar6 = *(ulong **)(param_2 + 0x10);
  *puVar6 = (ulong)*(byte *)(param_1 + 10);
  *(undefined4 *)(puVar6 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"sound_level_");
  puVar6 = *(ulong **)(param_2 + 0x10);
  *puVar6 = (ulong)*(byte *)((long)param_1 + 0x29);
  *(undefined4 *)(puVar6 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"sound_attr_");
  puVar6 = *(ulong **)(param_2 + 0x10);
  *puVar6 = (ulong)*(byte *)((long)param_1 + 0x2a);
  *(undefined4 *)(puVar6 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"lr_check_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)((long)param_1 + 0x2b);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"no_stop_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)(param_1 + 0xb);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"no_effect_");
  puVar6 = *(ulong **)(param_2 + 0x10);
  *puVar6 = (ulong)*(byte *)((long)param_1 + 0x2e);
  *(undefined4 *)(puVar6 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"region_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)((long)param_1 + 0x2f);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"catch_");
  return;
}

