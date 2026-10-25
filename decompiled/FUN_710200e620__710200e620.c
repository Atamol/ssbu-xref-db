// addr:      710200e620
// offset:    0x200e620
// name:      FUN_710200e620
// mangled:   
// signature: undefined __cdecl FUN_710200e620(undefined4 * param_1, long param_2, ulong param_3)


void FUN_710200e620(undefined4 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *plVar5;
  ulong *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_710200eff0;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *param_1;
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"reaction_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[1];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"level_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[2];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"height_");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"speed_vec_");
  }
  else {
    if (0 < *(long *)(*(long *)(param_2 + 0x18) + 0x18)) {
      FUN_71038fec40(param_2);
    }
    lVar2 = FUN_710391e050(param_2);
    plVar5 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar5 + 1) = 0x45;
    *plVar5 = lVar2;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar2,0,3);
  }
  uVar8 = param_1[4];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar8;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"x");
  uVar8 = param_1[5];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar8;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"y");
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_3 & 1) == 0) {
    *(long *)(param_2 + 0x10) = lVar2 + -0x10;
    FUN_71038f4d40(param_2,(long *)(lVar2 + -0x20),"attack_pos_");
  }
  else {
    FUN_71038f5390(param_2,(long *)(lVar2 + -0x20),"speed_vec_");
    if (0 < *(long *)(*(long *)(param_2 + 0x18) + 0x18)) {
      FUN_71038fec40(param_2);
    }
    lVar2 = FUN_710391e050(param_2);
    plVar5 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar5 + 1) = 0x45;
    *plVar5 = lVar2;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar2,0,4);
  }
  uVar8 = param_1[8];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar8;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"x");
  uVar8 = param_1[9];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar8;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"y");
  uVar8 = param_1[10];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar8;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"z");
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_3 & 1) == 0) {
    *(long *)(param_2 + 0x10) = lVar2 + -0x10;
    FUN_71038f4d40(param_2,(long *)(lVar2 + -0x20),"attack_speed_");
  }
  else {
    FUN_71038f5390(param_2,(long *)(lVar2 + -0x20),"attack_pos_");
    if (0 < *(long *)(*(long *)(param_2 + 0x18) + 0x18)) {
      FUN_71038fec40(param_2);
    }
    lVar2 = FUN_710391e050(param_2);
    plVar5 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar5 + 1) = 0x45;
    *plVar5 = lVar2;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar2,0,3);
  }
  uVar8 = param_1[0xc];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar8;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"x");
  uVar8 = param_1[0xd];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar8;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"y");
  if ((param_3 & 1) == 0) {
    puVar4 = (undefined4 *)(*(long *)(param_2 + 0x10) + -0x10);
    *(undefined4 **)(param_2 + 0x10) = puVar4;
  }
  else {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"attack_speed_");
    puVar4 = *(undefined4 **)(param_2 + 0x10);
  }
  uVar8 = param_1[0x10];
  puVar4[2] = 3;
  *puVar4 = uVar8;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"angle_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = param_1[0x11];
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"lr_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = param_1[0x12];
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"reaction_frame_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[0x13];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"hitstop_frame_");
  uVar3 = *(ulong *)(param_1 + 0x14);
  puVar6 = *(ulong **)(param_2 + 0x10);
  *(undefined4 *)(puVar6 + 1) = 0x13;
  *puVar6 = uVar3 & 0xffffffffff;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"attr_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = param_1[0x16];
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_add_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[0x17];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"team_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = param_1[0x18];
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"stop_delay_");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"ground_normal_");
  }
  else {
    if (0 < *(long *)(*(long *)(param_2 + 0x18) + 0x18)) {
      FUN_71038fec40(param_2);
    }
    lVar2 = FUN_710391e050(param_2);
    plVar5 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar5 + 1) = 0x45;
    *plVar5 = lVar2;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar2,0,3);
  }
  uVar8 = param_1[0x1c];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar8;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"x");
  uVar8 = param_1[0x1d];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar8;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"y");
  if ((param_3 & 1) == 0) {
    plVar5 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
    *(long **)(param_2 + 0x10) = plVar5;
  }
  else {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"ground_normal_");
    plVar5 = *(long **)(param_2 + 0x10);
  }
  *plVar5 = (long)(int)param_1[0x20];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"object_id_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[0x21];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"owner_object_id_");
  puVar6 = *(ulong **)(param_2 + 0x10);
  *puVar6 = (ulong)*(byte *)(param_1 + 0x22);
  *(undefined4 *)(puVar6 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"object_category_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)((long)param_1 + 0x89);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"status_air_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)((long)param_1 + 0x8a);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"prev_status_ground_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)((long)param_1 + 0x8b);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"ground_damage_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)(param_1 + 0x23);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"absolute_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)((long)param_1 + 0x8d);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"meteor_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)((long)param_1 + 0x8e);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"direct_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)((long)param_1 + 0x8f);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"sync_speed_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)(param_1 + 0x24);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"back_slash_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)((long)param_1 + 0x91);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"pull_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)((long)param_1 + 0x92);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"r_fix_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)((long)param_1 + 0x93);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"r_fix_damage_speed_up_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)(param_1 + 0x25);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"no_dead_damage_fly_effect_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[0x26];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"target_pos_speed_");
  puVar6 = *(ulong **)(param_2 + 0x10);
  *puVar6 = (ulong)*(byte *)(param_1 + 0x27);
  *(undefined4 *)(puVar6 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"fix_gravity_accel_");
  return;
}

