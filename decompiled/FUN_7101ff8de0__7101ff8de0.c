// addr:      7101ff8de0
// offset:    0x1ff8de0
// name:      FUN_7101ff8de0
// mangled:   
// signature: undefined __cdecl FUN_7101ff8de0(long param_1, long param_2, ulong param_3)


void FUN_7101ff8de0(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  uint *puVar8;
  long *plVar9;
  undefined4 uVar10;
  
  FUN_7101ff91a0(param_1,param_2);
  plVar9 = (long *)(param_2 + 0x10);
  puVar2 = (undefined8 *)*plVar9;
  *puVar2 = FUN_7101ff92d0;
  *(undefined4 *)(puVar2 + 1) = 2;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"new_instance_lua");
  uVar4 = *(ulong *)(param_1 + 0x30);
  puVar5 = (ulong *)*plVar9;
  *(undefined4 *)(puVar5 + 1) = 0x13;
  *puVar5 = uVar4 & 0xffffffffff;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"node_");
  plVar6 = (long *)*plVar9;
  *plVar6 = (long)*(int *)(param_1 + 0x38);
  *(undefined4 *)(plVar6 + 1) = 0x13;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"status_");
  puVar7 = (undefined4 *)*plVar9;
  *puVar7 = *(undefined4 *)(param_1 + 0x3c);
  puVar7[2] = 3;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"stick_x_");
  puVar7 = (undefined4 *)*plVar9;
  *puVar7 = *(undefined4 *)(param_1 + 0x40);
  puVar7[2] = 3;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"stick_y_");
  plVar6 = (long *)*plVar9;
  *plVar6 = (long)*(int *)(param_1 + 0x44);
  *(undefined4 *)(plVar6 + 1) = 0x13;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"motion_offset_");
  plVar6 = (long *)*plVar9;
  *plVar6 = (long)*(int *)(param_1 + 0x48);
  *(undefined4 *)(plVar6 + 1) = 0x13;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"motion_offset_lw_");
  puVar8 = (uint *)*plVar9;
  *puVar8 = (uint)*(byte *)(param_1 + 0x4c);
  puVar8[2] = 1;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"is_motion_hi_lw_");
  puVar8 = (uint *)*plVar9;
  *puVar8 = (uint)*(byte *)(param_1 + 0x4d);
  puVar8[2] = 1;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"is_butterflynet_");
  puVar8 = (uint *)*plVar9;
  *puVar8 = (uint)*(byte *)(param_1 + 0x4e);
  puVar8[2] = 1;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"ignore_distance_");
  puVar8 = (uint *)*plVar9;
  *puVar8 = (uint)*(byte *)(param_1 + 0x4f);
  puVar8[2] = 1;
  lVar3 = *plVar9;
  *plVar9 = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"constraint_");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"constraint_offset_");
  }
  else {
    if (0 < *(long *)(*(long *)(param_2 + 0x18) + 0x18)) {
      FUN_71038fec40(param_2);
    }
    lVar3 = FUN_710391e050(param_2);
    plVar6 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar6 + 1) = 0x45;
    *plVar6 = lVar3;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar3,0,4);
  }
  uVar10 = *(undefined4 *)(param_1 + 0x50);
  puVar7 = *(undefined4 **)(param_2 + 0x10);
  puVar7[2] = 3;
  *puVar7 = uVar10;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"x");
  uVar10 = *(undefined4 *)(param_1 + 0x54);
  puVar7 = *(undefined4 **)(param_2 + 0x10);
  puVar7[2] = 3;
  *puVar7 = uVar10;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"y");
  uVar10 = *(undefined4 *)(param_1 + 0x58);
  puVar7 = *(undefined4 **)(param_2 + 0x10);
  puVar7[2] = 3;
  *puVar7 = uVar10;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"z");
  if ((param_3 & 1) == 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
    *plVar9 = (long)plVar6;
  }
  else {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"constraint_offset_");
    plVar6 = *(long **)(param_2 + 0x10);
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(undefined4 *)(plVar6 + 1) = 0x13;
  *plVar6 = (long)iVar1;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"hit_no_");
  return;
}

