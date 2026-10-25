// addr:      710020e330
// offset:    0x20e330
// name:      FUN_710020e330
// mangled:   
// signature: undefined __cdecl FUN_710020e330(long * param_1, long * param_2)


void FUN_710020e330(long *param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  long *plVar6;
  short sVar7;
  long lVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  long *plVar14;
  long *plVar15;
  undefined8 **local_58;
  undefined8 *local_50 [2];
  
  lVar8 = *param_2;
  if (param_1[0x19] == 0) {
    param_1[0x19] = lVar8;
    return;
  }
  if (lVar8 - param_1[0x19] < 0xc9) {
    return;
  }
  param_1[0x19] = lVar8;
  uVar1 = *(uint *)(param_1 + 1);
  if (DAT_71052af1d8 != '\0') {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar5 != 0) {
      lVar8 = *(long *)(&DAT_71052af4e8 + (ulong)uVar1 * 0x2e8) + (ulong)*puVar5 * 0x168;
      goto LAB_710020e3d0;
    }
  }
  lVar8 = (ulong)uVar1 * 0x2e8 + 0x71052af4f0;
LAB_710020e3d0:
  uVar1 = *(uint *)(lVar8 + 0x140);
  plVar14 = param_1 + 6;
  plVar15 = (long *)*plVar14;
  plVar12 = (long *)param_1[3];
  plVar6 = plVar14;
  if (plVar15 == (long *)0x0) {
LAB_710020e440:
    lVar8 = *plVar14;
  }
  else {
    plVar14 = param_1 + 6;
    bVar3 = uVar1 <= *(uint *)((long)plVar15 + 0x1c);
    if (!bVar3 || *(uint *)((long)plVar15 + 0x1c) == uVar1) goto LAB_710020e418;
    while (plVar14 = plVar15, plVar15 = (long *)*plVar14, plVar15 != (long *)0x0) {
      bVar3 = uVar1 <= *(uint *)((long)plVar15 + 0x1c);
      if (!bVar3 || *(uint *)((long)plVar15 + 0x1c) == uVar1) {
LAB_710020e418:
        do {
          plVar6 = plVar15;
          if (bVar3) goto LAB_710020e440;
          plVar14 = plVar15 + 1;
          plVar15 = (long *)*plVar14;
          if (plVar15 == (long *)0x0) goto LAB_710020e440;
          bVar3 = uVar1 <= *(uint *)((long)plVar15 + 0x1c);
        } while (!bVar3 || *(uint *)((long)plVar15 + 0x1c) == uVar1);
      }
    }
    lVar8 = *plVar14;
    plVar6 = plVar14;
  }
  if (lVar8 == 0) {
    plVar15 = FUN_71001b1820(0x28);
    *(uint *)((long)plVar15 + 0x1c) = uVar1;
    *(undefined2 *)(plVar15 + 4) = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    plVar15[2] = (long)plVar6;
    *plVar14 = (long)plVar15;
    plVar6 = plVar15;
    if (*(long *)param_1[5] != 0) {
      param_1[5] = *(long *)param_1[5];
      plVar6 = (long *)*plVar14;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)param_1[6],plVar6);
    param_1[7] = param_1[7] + 1;
    sVar7 = (short)plVar15[4];
  }
  else {
    sVar7 = *(short *)(lVar8 + 0x20);
  }
  if (sVar7 == 0) {
    sVar7 = *(short *)(param_1[3] + 0x128);
  }
  iVar4 = (**(code **)(*plVar12 + 0x60))(plVar12,uVar1,sVar7);
  if (iVar4 - 1U < 6) {
    (**(code **)(*param_1 + 0x88))(param_1);
    FUN_710021a710((long *)&local_58,param_1 + 0x13);
    if (local_58 != local_50) {
      uVar2 = *(undefined4 *)(&DAT_710449df80 + (long)(int)(iVar4 - 1U) * 4);
      ppuVar13 = local_58;
      do {
        while( true ) {
          (**(code **)(*ppuVar13[0x17] + 0x110))(ppuVar13[0x17],uVar2,1);
          ppuVar9 = (undefined8 **)ppuVar13[1];
          if ((undefined8 **)ppuVar13[1] == (undefined8 **)0x0) break;
          do {
            ppuVar13 = ppuVar9;
            ppuVar9 = (undefined8 **)*ppuVar13;
          } while ((undefined8 **)*ppuVar13 != (undefined8 **)0x0);
LAB_710020e514:
          if (ppuVar13 == local_50) goto LAB_710020e52c;
        }
        ppuVar9 = ppuVar13 + 2;
        ppuVar10 = (undefined8 **)*ppuVar9;
        if ((undefined8 **)*ppuVar10 != ppuVar13) {
          do {
            puVar11 = *ppuVar9;
            ppuVar9 = (undefined8 **)(puVar11 + 2);
            ppuVar13 = (undefined8 **)*ppuVar9;
          } while (*ppuVar13 != puVar11);
          goto LAB_710020e514;
        }
        ppuVar13 = ppuVar10;
      } while (ppuVar10 != local_50);
    }
LAB_710020e52c:
    (**(code **)(*param_1 + 0x90))(param_1);
    FUN_710021a4a0(&local_58,local_50[0]);
  }
  return;
}

