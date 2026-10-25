// addr:      71020126d0
// offset:    0x20126d0
// name:      FUN_71020126d0
// mangled:   
// signature: undefined __cdecl FUN_71020126d0(undefined4 * param_1, long param_2, ulong param_3)


void FUN_71020126d0(undefined4 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  uint *puVar5;
  long *plVar6;
  undefined4 uVar7;
  
  plVar6 = (long *)(param_2 + 0x10);
  puVar1 = (undefined8 *)*plVar6;
  *puVar1 = FUN_7102012330;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = *param_1;
  puVar4[2] = 3;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = param_1[1];
  puVar4[2] = 3;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_add_");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = param_1[2];
  puVar4[2] = 3;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_add_reaction_");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = param_1[3];
  puVar4[2] = 3;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"power_max_");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = param_1[4];
  puVar4[2] = 3;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"reaction_max_");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = param_1[0x58];
  puVar4[2] = 3;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_lr_");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"attack_pos_");
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
  uVar7 = param_1[0x5c];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar7;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"x");
  uVar7 = param_1[0x5d];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar7;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"y");
  uVar7 = param_1[0x5e];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar7;
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
    plVar3 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar3 + 1) = 0x45;
    *plVar3 = lVar2;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar2,0,3);
  }
  uVar7 = param_1[0x60];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar7;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"x");
  uVar7 = param_1[0x61];
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar7;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"y");
  if ((param_3 & 1) == 0) {
    puVar4 = (undefined4 *)(*(long *)(param_2 + 0x10) + -0x10);
    *plVar6 = (long)puVar4;
  }
  else {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"attack_speed_");
    puVar4 = *(undefined4 **)(param_2 + 0x10);
  }
  uVar7 = param_1[100];
  puVar4[2] = 3;
  *puVar4 = uVar7;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_add_2nd_");
  plVar6 = *(long **)(param_2 + 0x10);
  *plVar6 = (long)(int)param_1[0x65];
  *(undefined4 *)(plVar6 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"owner_object_id_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = param_1[0x66];
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"shake_scale_");
  puVar5 = *(uint **)(param_2 + 0x10);
  *puVar5 = (uint)*(byte *)(param_1 + 0x67);
  puVar5[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"catch_absolute_");
  puVar5 = *(uint **)(param_2 + 0x10);
  *puVar5 = (uint)*(byte *)((long)param_1 + 0x19d);
  puVar5[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"no_dead_damage_fly_effect_");
  return;
}

