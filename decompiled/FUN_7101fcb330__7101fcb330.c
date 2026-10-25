// addr:      7101fcb330
// offset:    0x1fcb330
// name:      FUN_7101fcb330
// mangled:   
// signature: undefined __cdecl FUN_7101fcb330(int * param_1, long param_2, ulong param_3)


void FUN_7101fcb330(int *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  ulong *puVar5;
  long *plVar6;
  int iVar7;
  
  plVar6 = (long *)(param_2 + 0x10);
  puVar1 = (undefined8 *)*plVar6;
  *puVar1 = FUN_7101fcb200;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  plVar4 = (long *)*plVar6;
  *plVar4 = (long)*param_1;
  *(undefined4 *)(plVar4 + 1) = 0x13;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"self_index_");
  plVar4 = (long *)*plVar6;
  *plVar4 = (long)param_1[1];
  *(undefined4 *)(plVar4 + 1) = 0x13;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"target_id_");
  plVar4 = (long *)*plVar6;
  *plVar4 = (long)param_1[2];
  *(undefined4 *)(plVar4 + 1) = 0x13;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"target_task_id_");
  puVar5 = (ulong *)*plVar6;
  *puVar5 = (ulong)*(byte *)(param_1 + 3);
  *(undefined4 *)(puVar5 + 1) = 0x13;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"target_category_");
  puVar5 = (ulong *)*plVar6;
  *puVar5 = (ulong)*(byte *)((long)param_1 + 0xd);
  *(undefined4 *)(puVar5 + 1) = 0x13;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"target_group_");
  plVar4 = (long *)*plVar6;
  *plVar4 = (long)*(char *)((long)param_1 + 0xe);
  *(undefined4 *)(plVar4 + 1) = 0x13;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"distance_bottom_y_");
  puVar5 = (ulong *)*plVar6;
  *puVar5 = (ulong)*(byte *)((long)param_1 + 0xf);
  *(undefined4 *)(puVar5 + 1) = 0x13;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"target_unique_id_");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"distance_");
  }
  else {
    if (0 < *(long *)(*(long *)(param_2 + 0x18) + 0x18)) {
      FUN_71038fec40(param_2);
    }
    lVar2 = FUN_710391e050(param_2);
    plVar4 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar4 + 1) = 0x45;
    *plVar4 = lVar2;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar2,0,3);
  }
  iVar7 = param_1[4];
  piVar3 = *(int **)(param_2 + 0x10);
  piVar3[2] = 3;
  *piVar3 = iVar7;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"x");
  iVar7 = param_1[5];
  piVar3 = *(int **)(param_2 + 0x10);
  piVar3[2] = 3;
  *piVar3 = iVar7;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"y");
  if ((param_3 & 1) != 0) {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"distance_");
    return;
  }
  *plVar6 = *(long *)(param_2 + 0x10) + -0x10;
  return;
}

