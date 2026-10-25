// addr:      71020b6200
// offset:    0x20b6200
// name:      FUN_71020b6200
// mangled:   
// signature: undefined __cdecl FUN_71020b6200(long param_1, long param_2, ulong param_3)


void FUN_71020b6200(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  uint *puVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  
  FUN_7101ff91a0(param_1,param_2);
  plVar9 = (long *)(param_2 + 0x10);
  puVar2 = (undefined8 *)*plVar9;
  *puVar2 = FUN_71020b65a0;
  *(undefined4 *)(puVar2 + 1) = 2;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"new_instance_lua");
  puVar5 = (undefined4 *)*plVar9;
  *puVar5 = *(undefined4 *)(param_1 + 0x2c);
  puVar5[2] = 3;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"lr_");
  uVar4 = *(ulong *)(param_1 + 0x30);
  puVar6 = (ulong *)*plVar9;
  *(undefined4 *)(puVar6 + 1) = 0x13;
  *puVar6 = uVar4 & 0xffffffffff;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"joint_id_");
  uVar4 = *(ulong *)(param_1 + 0x38);
  puVar6 = (ulong *)*plVar9;
  *(undefined4 *)(puVar6 + 1) = 0x13;
  *puVar6 = uVar4 & 0xffffffffff;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"motion_kind_");
  puVar5 = (undefined4 *)*plVar9;
  *puVar5 = *(undefined4 *)(param_1 + 0x40);
  puVar5[2] = 3;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"motion_rate_");
  puVar7 = (uint *)*plVar9;
  *puVar7 = (uint)*(byte *)(param_1 + 0x44);
  puVar7[2] = 1;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"is_motion_loop_");
  puVar7 = (uint *)*plVar9;
  *puVar7 = (uint)*(byte *)(param_1 + 0x45);
  puVar7[2] = 1;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"is_enable_capture_cut_");
  plVar8 = (long *)*plVar9;
  *plVar8 = (long)*(int *)(param_1 + 0x48);
  *(undefined4 *)(plVar8 + 1) = 0x13;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"capture_cut_frame_");
  puVar5 = (undefined4 *)*plVar9;
  *puVar5 = *(undefined4 *)(param_1 + 0x4c);
  puVar5[2] = 3;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"capture_cut_frame_damage_");
  puVar5 = (undefined4 *)*plVar9;
  *puVar5 = *(undefined4 *)(param_1 + 0x50);
  puVar5[2] = 3;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"capture_recovery_");
  puVar5 = (undefined4 *)*plVar9;
  *puVar5 = *(undefined4 *)(param_1 + 0x54);
  puVar5[2] = 3;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"capture_clatter_frame_");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"capture_cut_speed_");
  }
  else {
    if (0 < *(long *)(*(long *)(param_2 + 0x18) + 0x18)) {
      FUN_71038fec40(param_2);
    }
    lVar3 = FUN_710391e050(param_2);
    plVar8 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar8 + 1) = 0x45;
    *plVar8 = lVar3;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar3,0,3);
  }
  uVar10 = *(undefined4 *)(param_1 + 0x60);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  puVar5[2] = 3;
  *puVar5 = uVar10;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"x");
  uVar10 = *(undefined4 *)(param_1 + 100);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  puVar5[2] = 3;
  *puVar5 = uVar10;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"y");
  if ((param_3 & 1) == 0) {
    plVar8 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
    *plVar9 = (long)plVar8;
  }
  else {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"capture_cut_speed_");
    plVar8 = *(long **)(param_2 + 0x10);
  }
  iVar1 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(plVar8 + 1) = 0x13;
  *plVar8 = (long)iVar1;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"kinetic_type_");
  return;
}

