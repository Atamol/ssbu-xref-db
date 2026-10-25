// addr:      71020e5a70
// offset:    0x20e5a70
// name:      FUN_71020e5a70
// mangled:   
// signature: undefined __cdecl FUN_71020e5a70(long param_1, long param_2, ulong param_3)


void FUN_71020e5a70(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  
  FUN_71020d4810(param_1,param_2);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *puVar2 = FUN_71020e5dc0;
  *(undefined4 *)(puVar2 + 1) = 2;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"new_instance_lua");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"upper_");
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
  lVar3 = *(long *)(param_2 + 0x10);
  if ((param_3 & 1) == 0) {
    *(long *)(param_2 + 0x10) = lVar3 + -0x10;
    FUN_71038f4d40(param_2,(long *)(lVar3 + -0x20),"under_");
  }
  else {
    FUN_71038f5390(param_2,(long *)(lVar3 + -0x20),"upper_");
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
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  puVar5[2] = 3;
  *puVar5 = uVar7;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"x");
  uVar7 = *(undefined4 *)(param_1 + 0x34);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  puVar5[2] = 3;
  *puVar5 = uVar7;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"y");
  uVar7 = *(undefined4 *)(param_1 + 0x38);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  puVar5[2] = 3;
  *puVar5 = uVar7;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"z");
  if ((param_3 & 1) == 0) {
    puVar6 = (uint *)(*(long *)(param_2 + 0x10) + -0x10);
    *(uint **)(param_2 + 0x10) = puVar6;
  }
  else {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"under_");
    puVar6 = *(uint **)(param_2 + 0x10);
  }
  bVar1 = *(byte *)(param_1 + 0x40);
  puVar6[2] = 1;
  *puVar6 = (uint)bVar1;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"is_exist_upper_");
  puVar6 = *(uint **)(param_2 + 0x10);
  *puVar6 = (uint)*(byte *)(param_1 + 0x41);
  puVar6[2] = 1;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"is_exist_under_");
  puVar6 = *(uint **)(param_2 + 0x10);
  *puVar6 = (uint)*(byte *)(param_1 + 0x42);
  puVar6[2] = 1;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"is_disabled_");
  return;
}

