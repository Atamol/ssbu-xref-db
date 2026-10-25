// addr:      71020b9690
// offset:    0x20b9690
// name:      FUN_71020b9690
// mangled:   
// signature: undefined __cdecl FUN_71020b9690(long param_1, long param_2, uint param_3)


void FUN_71020b9690(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  FUN_71020b6200(param_1,param_2,(ulong)(param_3 & 1));
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71020b9a10;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"offset_");
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
  uVar5 = *(undefined4 *)(param_1 + 0x80);
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar5;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"x");
  uVar5 = *(undefined4 *)(param_1 + 0x84);
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar5;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"y");
  uVar5 = *(undefined4 *)(param_1 + 0x88);
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar5;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"z");
  if ((param_3 & 1) == 0) {
    puVar4 = (undefined4 *)(*(long *)(param_2 + 0x10) + -0x10);
    *(undefined4 **)(param_2 + 0x10) = puVar4;
  }
  else {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"offset_");
    puVar4 = *(undefined4 **)(param_2 + 0x10);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x90);
  puVar4[2] = 3;
  *puVar4 = uVar5;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"fly_degree_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 0x94);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"fly_distance_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 0x98);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"max_change_degree_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 0x9c);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"fly_speed_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 0xa0);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"fly_max_speed_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 0xa4);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"fly_accel_");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 0xa8);
  *(undefined4 *)(plVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"start_accel_frame_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 0xac);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"dest_meter_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 0xb0);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"rot_z_speed_");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 0xb4);
  *(undefined4 *)(plVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"clatter_end_xlu_frame_");
  return;
}

