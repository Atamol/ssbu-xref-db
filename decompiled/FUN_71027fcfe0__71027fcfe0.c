// addr:      71027fcfe0
// offset:    0x27fcfe0
// name:      FUN_71027fcfe0
// mangled:   
// signature: undefined __cdecl FUN_71027fcfe0(undefined8 * param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


void FUN_71027fcfe0(undefined8 *param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  int iVar1;
  long lVar2;
  long ****pppplVar3;
  long *plVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[6] = 0;
  lVar2 = *(long *)(param_2 + 0x310);
  for (plVar4 = *(long **)(lVar2 + 0xd0); plVar4 != *(long **)(lVar2 + 0xd8); plVar4 = plVar4 + 2) {
    if ((*(uint *)(plVar4 + 1) < 2) && (*(long *)(*plVar4 + 0x68) == 0x943620093)) {
      pppplVar3 = FUN_710262fb80(lVar2,plVar4,param_3,param_4,param_5,param_6,param_7,param_8);
      if (pppplVar3 != (long ****)0x0) {
        if ((*(char *)(pppplVar3 + 0x1c) != '\0') && (pppplVar3[0x19] != (long ***)0x0)) {
          *(undefined2 *)(pppplVar3[0x19] + 6) = 0x101;
        }
        if (pppplVar3[0x1b] != (long ***)0x0) {
          *(undefined1 *)((long)pppplVar3[0x1b] + 0x21) = 1;
        }
        if (*(char *)(pppplVar3 + 0x1c) != '\0') {
          *(undefined1 *)(pppplVar3[0x16] + 2) = 0;
        }
        if ((*(char *)(pppplVar3 + 0x1c) != '\0') && (pppplVar3[0x19] != (long ***)0x0)) {
          *(undefined2 *)((long)pppplVar3[0x19] + 0x32) = 0;
        }
        if (pppplVar3[0x1b] != (long ***)0x0) {
          *(undefined1 *)((long)pppplVar3[0x1b] + 0x22) = 0;
        }
        *(undefined1 *)(pppplVar3 + 0x22) = 0;
        FUN_71025e9d50((long *)(pppplVar3 + 0x21),extraout_x1,(long ****)param_3,param_4,param_5,
                       param_6,param_7,param_8);
        if ((pppplVar3[0x1b] != (long ***)0x0) &&
           (plVar4 = pppplVar3[0x1b][1][1], iVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,"WoodN"),
           iVar1 != -1)) {
          *param_1 = pppplVar3;
          *(int *)(param_1 + 1) = iVar1;
        }
      }
      break;
    }
  }
  lVar2 = *(long *)(param_2 + 0x310);
  plVar4 = *(long **)(lVar2 + 0xd0);
  do {
    if (plVar4 == *(long **)(lVar2 + 0xd8)) {
LAB_71027fd0a0:
      lVar2 = *(long *)(param_2 + 0x310);
      plVar4 = *(long **)(lVar2 + 0xd0);
      while( true ) {
        if (plVar4 == *(long **)(lVar2 + 0xd8)) {
          return;
        }
        if ((*(uint *)(plVar4 + 1) < 2) && (*(long *)(*plVar4 + 0x68) == 0x99cb22970)) break;
        plVar4 = plVar4 + 2;
      }
      pppplVar3 = FUN_710262fb80(lVar2,plVar4,param_3,param_4,param_5,param_6,param_7,param_8);
      if (pppplVar3 == (long ****)0x0) {
        return;
      }
      if ((*(char *)(pppplVar3 + 0x1c) != '\0') && (pppplVar3[0x19] != (long ***)0x0)) {
        *(undefined2 *)(pppplVar3[0x19] + 6) = 0x101;
      }
      if (pppplVar3[0x1b] != (long ***)0x0) {
        *(undefined1 *)((long)pppplVar3[0x1b] + 0x21) = 1;
      }
      if (*(char *)(pppplVar3 + 0x1c) != '\0') {
        *(undefined1 *)(pppplVar3[0x16] + 2) = 0;
      }
      if ((*(char *)(pppplVar3 + 0x1c) != '\0') && (pppplVar3[0x19] != (long ***)0x0)) {
        *(undefined2 *)((long)pppplVar3[0x19] + 0x32) = 0;
      }
      if (pppplVar3[0x1b] != (long ***)0x0) {
        *(undefined1 *)((long)pppplVar3[0x1b] + 0x22) = 0;
      }
      *(undefined1 *)(pppplVar3 + 0x22) = 0;
      FUN_71025e9d50((long *)(pppplVar3 + 0x21),extraout_x1_01,(long ****)param_3,param_4,param_5,
                     param_6,param_7,param_8);
      if (pppplVar3[0x1b] == (long ***)0x0) {
        return;
      }
      plVar4 = pppplVar3[0x1b][1][1];
      iVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,"WoodModel");
      if (iVar1 == -1) {
        return;
      }
      param_1[4] = pppplVar3;
      *(int *)(param_1 + 5) = iVar1;
      return;
    }
    if ((*(uint *)(plVar4 + 1) < 2) && (*(long *)(*plVar4 + 0x68) == 0x97e022923)) {
      pppplVar3 = FUN_710262fb80(lVar2,plVar4,param_3,param_4,param_5,param_6,param_7,param_8);
      if (pppplVar3 != (long ****)0x0) {
        if ((*(char *)(pppplVar3 + 0x1c) != '\0') && (pppplVar3[0x19] != (long ***)0x0)) {
          *(undefined2 *)(pppplVar3[0x19] + 6) = 0x101;
        }
        if (pppplVar3[0x1b] != (long ***)0x0) {
          *(undefined1 *)((long)pppplVar3[0x1b] + 0x21) = 1;
        }
        if (*(char *)(pppplVar3 + 0x1c) != '\0') {
          *(undefined1 *)(pppplVar3[0x16] + 2) = 0;
        }
        if ((*(char *)(pppplVar3 + 0x1c) != '\0') && (pppplVar3[0x19] != (long ***)0x0)) {
          *(undefined2 *)((long)pppplVar3[0x19] + 0x32) = 0;
        }
        if (pppplVar3[0x1b] != (long ***)0x0) {
          *(undefined1 *)((long)pppplVar3[0x1b] + 0x22) = 0;
        }
        *(undefined1 *)(pppplVar3 + 0x22) = 0;
        FUN_71025e9d50((long *)(pppplVar3 + 0x21),extraout_x1_00,(long ****)param_3,param_4,param_5,
                       param_6,param_7,param_8);
        if ((pppplVar3[0x1b] != (long ***)0x0) &&
           (plVar4 = pppplVar3[0x1b][1][1],
           iVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,"WoodModel"), iVar1 != -1)) {
          param_1[2] = pppplVar3;
          *(int *)(param_1 + 3) = iVar1;
        }
      }
      goto LAB_71027fd0a0;
    }
    plVar4 = plVar4 + 2;
  } while( true );
}

