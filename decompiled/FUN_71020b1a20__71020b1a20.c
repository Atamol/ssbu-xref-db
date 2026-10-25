// addr:      71020b1a20
// offset:    0x20b1a20
// name:      FUN_71020b1a20
// mangled:   
// signature: undefined __cdecl FUN_71020b1a20(long param_1, long param_2, ulong param_3)


void FUN_71020b1a20(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  
  FUN_7101ff91a0(param_1,param_2);
  plVar7 = (long *)(param_2 + 0x10);
  puVar1 = (undefined8 *)*plVar7;
  *puVar1 = FUN_71020b1d00;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *plVar7;
  *plVar7 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  uVar3 = *(ulong *)(param_1 + 0x30);
  puVar4 = (ulong *)*plVar7;
  *(undefined4 *)(puVar4 + 1) = 0x13;
  *puVar4 = uVar3 & 0xffffffffff;
  lVar2 = *plVar7;
  *plVar7 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_motionKind");
  plVar5 = (long *)*plVar7;
  *plVar5 = (long)*(int *)(param_1 + 0x38);
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *plVar7;
  *plVar7 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_motionCompFrame");
  plVar5 = (long *)*plVar7;
  *plVar5 = (long)*(int *)(param_1 + 0x3c);
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *plVar7;
  *plVar7 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_reqStatus");
  plVar5 = (long *)*plVar7;
  *plVar5 = (long)*(int *)(param_1 + 0x40);
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *plVar7;
  *plVar7 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_taskId");
  puVar6 = (undefined4 *)*plVar7;
  *puVar6 = *(undefined4 *)(param_1 + 0x44);
  puVar6[2] = 3;
  lVar2 = *plVar7;
  *plVar7 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_offsetX");
  puVar6 = (undefined4 *)*plVar7;
  *puVar6 = *(undefined4 *)(param_1 + 0x48);
  puVar6[2] = 3;
  lVar2 = *plVar7;
  *plVar7 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_offsetY");
  puVar6 = (undefined4 *)*plVar7;
  *puVar6 = *(undefined4 *)(param_1 + 0x4c);
  puVar6[2] = 3;
  lVar2 = *plVar7;
  *plVar7 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_frame");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"_targetPos");
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
  uVar8 = *(undefined4 *)(param_1 + 0x50);
  puVar6 = *(undefined4 **)(param_2 + 0x10);
  puVar6[2] = 3;
  *puVar6 = uVar8;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"x");
  uVar8 = *(undefined4 *)(param_1 + 0x54);
  puVar6 = *(undefined4 **)(param_2 + 0x10);
  puVar6[2] = 3;
  *puVar6 = uVar8;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"y");
  if ((param_3 & 1) != 0) {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"_targetPos");
    return;
  }
  *plVar7 = *(long *)(param_2 + 0x10) + -0x10;
  return;
}

