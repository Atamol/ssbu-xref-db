// addr:      71038f7260
// offset:    0x38f7260
// name:      FUN_71038f7260
// mangled:   
// signature: undefined8 __cdecl FUN_71038f7260(long param_1, char * param_2)


undefined8 FUN_71038f7260(long param_1,char *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  uVar1 = FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),param_2);
  if (uVar1 == 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_71038fec40(param_1);
    }
    lVar3 = FUN_710391e050(param_1);
    plVar4 = *(long **)(param_1 + 0x10);
    *(undefined4 *)(plVar4 + 1) = 0x45;
    *plVar4 = lVar3;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    FUN_710391d4c0(param_1,lVar3,0,2);
    FUN_71038f4b20(param_1,param_2);
    FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x20),"__name");
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = puVar5[-2];
    puVar5[1] = puVar5[-1];
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),param_2);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

