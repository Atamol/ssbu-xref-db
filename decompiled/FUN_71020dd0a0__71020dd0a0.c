// addr:      71020dd0a0
// offset:    0x20dd0a0
// name:      FUN_71020dd0a0
// mangled:   
// signature: undefined __cdecl FUN_71020dd0a0(long param_1, long param_2, ulong param_3)


void FUN_71020dd0a0(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulong *puVar6;
  undefined4 uVar7;
  
  FUN_71020d4810(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71020dd4d0;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"pos_");
  }
  else {
    if (0 < *(long *)(*(long *)(param_2 + 0x18) + 0x18)) {
      FUN_71038fec40(param_2);
    }
    lVar2 = FUN_710391e050(param_2);
    plVar3 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar3 + 1) = 0x45;
    *plVar3 = lVar2;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar2,0,4);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar7;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"x");
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar7;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"y");
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar7;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"z");
  if ((param_3 & 1) == 0) {
    puVar5 = (uint *)(*(long *)(param_2 + 0x10) + -0x10);
    *(uint **)(param_2 + 0x10) = puVar5;
  }
  else {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"pos_");
    puVar5 = *(uint **)(param_2 + 0x10);
  }
  *puVar5 = (uint)*(byte *)(param_1 + 0x30);
  puVar5[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"use_safe_pos_");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"safe_pos_");
  }
  else {
    if (0 < *(long *)(*(long *)(param_2 + 0x18) + 0x18)) {
      FUN_71038fec40(param_2);
    }
    lVar2 = FUN_710391e050(param_2);
    plVar3 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar3 + 1) = 0x45;
    *plVar3 = lVar2;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar2,0,3);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x40);
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar7;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"x");
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar7;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"y");
  if ((param_3 & 1) == 0) {
    puVar4 = (undefined4 *)(*(long *)(param_2 + 0x10) + -0x10);
    *(undefined4 **)(param_2 + 0x10) = puVar4;
  }
  else {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"safe_pos_");
    puVar4 = *(undefined4 **)(param_2 + 0x10);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x50);
  puVar4[2] = 3;
  *puVar4 = uVar7;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"speed_y_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 0x54);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"rot_z_");
  puVar6 = *(ulong **)(param_2 + 0x10);
  *puVar6 = *(ulong *)(param_1 + 0x58) & 0xffffffffff;
  *(undefined4 *)(puVar6 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"squat_motion_kind_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 0x60);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"squat_motion_rate_");
  puVar5 = *(uint **)(param_2 + 0x10);
  *puVar5 = (uint)*(byte *)(param_1 + 100);
  puVar5[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"ignore_x_");
  puVar5 = *(uint **)(param_2 + 0x10);
  *puVar5 = (uint)*(byte *)(param_1 + 0x65);
  puVar5[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"punch_out_stage_flag_");
  puVar5 = *(uint **)(param_2 + 0x10);
  *puVar5 = (uint)*(byte *)(param_1 + 0x66);
  puVar5[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"is_special_spring_");
  return;
}

