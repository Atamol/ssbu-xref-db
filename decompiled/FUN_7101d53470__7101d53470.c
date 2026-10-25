// addr:      7101d53470
// offset:    0x1d53470
// name:      FUN_7101d53470
// mangled:   
// signature: undefined __cdecl FUN_7101d53470(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d53470(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  iVar2 = DAT_710593b534;
  plVar12 = *(long **)(param_1 + 0x40);
  lVar13 = *(long *)*plVar12;
  *(undefined4 *)((long *)*plVar12 + 2) = 0;
  plVar5 = *(long **)(lVar13 + 0x10);
  *plVar5 = lVar13;
  *(undefined4 *)(plVar5 + 1) = 0x48;
  lVar8 = *(long *)(lVar13 + 0x10);
  *(long *)(lVar13 + 0x10) = lVar8 + 0x10;
  lVar9 = *(long *)(*(long *)(lVar13 + 0x18) + 200);
  *(long *)(lVar13 + 0x10) = lVar8;
  if (lVar9 == lVar13) {
    lVar8 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40);
    if (*(uint *)(lVar8 + 0xc) < 2) {
      plVar5 = (long *)(*(long *)(lVar8 + 0x18) +
                       ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar8 + 0xb) & 0x3f)) & 2) *
                       0x20);
      do {
        if (((int)plVar5[3] == 0x13) && (plVar3 = plVar5, plVar5[2] == 2)) break;
        piVar1 = (int *)((long)plVar5 + 0x1c);
        plVar5 = plVar5 + (long)*piVar1 * 4;
        plVar3 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar3 = (long *)(*(long *)(lVar8 + 0x10) + 0x10);
    }
    param_3 = "update_operation_mode";
    FUN_71038f4d40(lVar13,plVar3,"update_operation_mode");
  }
  else {
    FUN_71038f4b20(lVar13,"update_operation_mode");
    FUN_71038f4fc0(lVar13,-2);
  }
  puVar6 = (undefined8 *)(*(long *)(lVar13 + 0x10) + -0x10);
  if ((puVar6 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar13 + 0x10) + -8) & 0xf) != 6)) {
    *(undefined8 **)(lVar13 + 0x10) = puVar6;
  }
  else {
    lVar8 = *(long *)*plVar12;
    puVar10 = *(ulong **)(lVar8 + 0x10);
    *puVar10 = (ulong)(iVar2 == 0);
    *(undefined4 *)(puVar10 + 1) = 0x13;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 0x10;
    *(int *)(*plVar12 + 0x10) = *(int *)(*plVar12 + 0x10) + 1;
    FUN_7103377130(plVar12,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7101d533a0((long *)(param_1 + 0x48));
  uVar4 = extraout_x1;
  if (*(long *)(param_1 + 0x48) != 0) {
    pcVar7 = *(code **)(param_1 + 0x50);
    uVar11 = *(ulong *)(param_1 + 0x58) & 1;
    if (uVar11 != 0 || pcVar7 != (code *)0x0) {
      if (uVar11 != 0) {
        pcVar7 = *(code **)(pcVar7 + *(long *)(*(long *)(param_1 + 0x48) +
                                              ((long)*(ulong *)(param_1 + 0x58) >> 1)));
      }
      (*pcVar7)();
      uVar4 = extraout_x1_00;
    }
  }
  *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
  if (*(long **)(param_1 + 0x40) == (long *)0x0) {
    return;
  }
  FUN_7103376860(**(long **)(param_1 + 0x40),uVar4,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

