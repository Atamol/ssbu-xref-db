// addr:      71020edee0
// offset:    0x20edee0
// name:      FUN_71020edee0
// mangled:   
// signature: undefined __cdecl FUN_71020edee0(long param_1, long param_2, ulong param_3)


void FUN_71020edee0(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  FUN_71020d4810(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71020ede20;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"normal_");
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
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar5;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"x");
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar5;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"y");
  if ((param_3 & 1) == 0) {
    puVar4 = (undefined4 *)(*(long *)(param_2 + 0x10) + -0x10);
    *(undefined4 **)(param_2 + 0x10) = puVar4;
  }
  else {
    FUN_71038f5390(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x20),"normal_");
    puVar4 = *(undefined4 **)(param_2 + 0x10);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  puVar4[2] = 3;
  *puVar4 = uVar5;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"scale_");
  return;
}

