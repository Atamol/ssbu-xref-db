// addr:      71020d8170
// offset:    0x20d8170
// name:      FUN_71020d8170
// mangled:   
// signature: undefined __cdecl FUN_71020d8170(long param_1, long param_2, ulong param_3)


void FUN_71020d8170(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  
  FUN_71020d4810(param_1,param_2);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *puVar2 = FUN_71020d8910;
  *(undefined4 *)(puVar2 + 1) = 2;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"new_instance_lua");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"pos_");
  }
  else {
    if (0 < *(long *)(*(long *)(param_2 + 0x18) + 0x18)) {
      FUN_71038fec40(param_2);
    }
    lVar3 = FUN_710391e050(param_2);
    plVar4 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar4 + 1) = 0x45;
    *plVar4 = lVar3;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar3,0,4);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  puVar5[2] = 3;
  *puVar5 = uVar7;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"x");
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  puVar5[2] = 3;
  *puVar5 = uVar7;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"y");
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  puVar5[2] = 3;
  *puVar5 = uVar7;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"z");
  if ((param_3 & 1) == 0) {
    plVar4 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
    *(long **)(param_2 + 0x10) = plVar4;
  }
  else {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"pos_");
    plVar4 = *(long **)(param_2 + 0x10);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(plVar4 + 1) = 0x13;
  *plVar4 = (long)iVar1;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"hit_stop_frame_");
  plVar4 = *(long **)(param_2 + 0x10);
  uVar7 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    *plVar4 = *(long *)(param_1 + 0x38);
    uVar7 = 2;
  }
  *(undefined4 *)(plVar4 + 1) = uVar7;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"attack_data_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0x40);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"speed_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0x44);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"angle_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0x48);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"brake_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0x4c);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"accel_y_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0x50);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"to_fall_speed_");
  puVar6 = *(uint **)(param_2 + 0x10);
  *puVar6 = (uint)*(byte *)(param_1 + 0x54);
  puVar6[2] = 1;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"shoot_3d_");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"speed_3d_");
  }
  else {
    if (0 < *(long *)(*(long *)(param_2 + 0x18) + 0x18)) {
      FUN_71038fec40(param_2);
    }
    lVar3 = FUN_710391e050(param_2);
    plVar4 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar4 + 1) = 0x45;
    *plVar4 = lVar3;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar3,0,4);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x60);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  puVar5[2] = 3;
  *puVar5 = uVar7;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"x");
  uVar7 = *(undefined4 *)(param_1 + 100);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  puVar5[2] = 3;
  *puVar5 = uVar7;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"y");
  uVar7 = *(undefined4 *)(param_1 + 0x68);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  puVar5[2] = 3;
  *puVar5 = uVar7;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"z");
  if ((param_3 & 1) == 0) {
    plVar4 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
    *(long **)(param_2 + 0x10) = plVar4;
  }
  else {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"speed_3d_");
    plVar4 = *(long **)(param_2 + 0x10);
  }
  *plVar4 = (long)*(int *)(param_1 + 0x70);
  *(undefined4 *)(plVar4 + 1) = 0x13;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"collision_layer_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0x74);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"arrival_z_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0x78);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"add_speed_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0x7c);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"soot_frame_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0x80);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"hit_z_");
  plVar4 = *(long **)(param_2 + 0x10);
  *plVar4 = (long)*(int *)(param_1 + 0x84);
  *(undefined4 *)(plVar4 + 1) = 0x13;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"hit_num_");
  plVar4 = *(long **)(param_2 + 0x10);
  uVar7 = 0;
  if (*(long *)(param_1 + 0x88) != 0) {
    *plVar4 = *(long *)(param_1 + 0x88);
    uVar7 = 2;
  }
  *(undefined4 *)(plVar4 + 1) = uVar7;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"hit_rect_");
  plVar4 = *(long **)(param_2 + 0x10);
  *plVar4 = (long)*(int *)(param_1 + 0x90);
  *(undefined4 *)(plVar4 + 1) = 0x13;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"hit_index_");
  plVar4 = *(long **)(param_2 + 0x10);
  *plVar4 = (long)*(int *)(param_1 + 0x94);
  *(undefined4 *)(plVar4 + 1) = 0x13;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"gimmick_collision_layer_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0x98);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"speed_stable_y_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0x9c);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"brake_y_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0xa0);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"brake_x_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0xa4);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"reaction_frame_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0xa8);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"damage_reaction_rate_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0xac);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"damage_reaction_min_");
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  *puVar5 = *(undefined4 *)(param_1 + 0xb0);
  puVar5[2] = 3;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"damage_reaction_max_");
  puVar6 = *(uint **)(param_2 + 0x10);
  *puVar6 = (uint)*(byte *)(param_1 + 0xb4);
  puVar6[2] = 1;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"can_enter_");
  return;
}

