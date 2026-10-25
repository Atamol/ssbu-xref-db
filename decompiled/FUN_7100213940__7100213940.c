// addr:      7100213940
// offset:    0x213940
// name:      FUN_7100213940
// mangled:   
// signature: undefined __cdecl FUN_7100213940(long param_1, uint param_2)


/* WARNING: Type propagation algorithm not settling */

void FUN_7100213940(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  uint *puVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  plVar9 = (long *)(param_1 + 0x20);
  plVar10 = (long *)*plVar9;
  plVar5 = plVar9;
  plVar6 = plVar9;
  if (plVar10 == (long *)0x0) {
LAB_71002139cc:
    lVar8 = *plVar5;
    if (lVar8 != 0) goto LAB_71002139d4;
LAB_7100213a44:
    plVar3 = FUN_71001b1820(0x30);
    *(uint *)(plVar3 + 4) = param_2;
    plVar3[5] = 0;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = (long)plVar6;
    *plVar5 = (long)plVar3;
    plVar10 = plVar3;
    if (**(long **)(param_1 + 0x18) != 0) {
      *(long *)(param_1 + 0x18) = **(long **)(param_1 + 0x18);
      plVar10 = (long *)*plVar5;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(long **)(param_1 + 0x20),plVar10);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    lVar8 = plVar3[5];
  }
  else {
    plVar5 = (long *)(param_1 + 0x20);
    bVar2 = param_2 <= *(uint *)(plVar10 + 4);
    if (!bVar2 || *(uint *)(plVar10 + 4) == param_2) goto LAB_71002139a0;
    while (plVar5 = plVar10, plVar10 = (long *)*plVar5, plVar10 != (long *)0x0) {
      bVar2 = param_2 <= *(uint *)(plVar10 + 4);
      if (!bVar2 || *(uint *)(plVar10 + 4) == param_2) {
LAB_71002139a0:
        do {
          plVar6 = plVar10;
          if (bVar2) goto LAB_71002139cc;
          plVar5 = plVar10 + 1;
          plVar10 = (long *)*plVar5;
          if (plVar10 == (long *)0x0) goto LAB_71002139cc;
          bVar2 = param_2 <= *(uint *)(plVar10 + 4);
        } while (!bVar2 || *(uint *)(plVar10 + 4) == param_2);
      }
    }
    lVar8 = *plVar5;
    plVar6 = plVar5;
    if (lVar8 == 0) goto LAB_7100213a44;
LAB_71002139d4:
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  if (lVar8 != 0) {
    plVar5 = (long *)*plVar9;
    goto joined_r0x007100213d0c;
  }
  plVar5 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_7100213b04:
    lVar8 = 0;
    if (*plVar5 != 0) {
      lVar8 = *(long *)(*plVar5 + 0x10);
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_7100213b04;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      goto LAB_7100213b04;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    lVar8 = 0;
  }
  plVar5 = (long *)(lVar8 + 0x1b0);
  if (1 < param_2 - 1) {
    plVar5 = (long *)(lVar8 + 0x1a8);
  }
  lVar8 = *plVar5;
  plVar5 = FUN_71001af850(0x20);
  if (param_2 == 0) {
    if (plVar5 != (long *)0x0) {
      *(undefined4 *)(plVar5 + 1) = *(undefined4 *)(param_1 + 8);
      puVar7 = &DAT_7104f58018;
      goto LAB_7100213b84;
    }
  }
  else if (plVar5 != (long *)0x0) {
    *(undefined4 *)(plVar5 + 1) = *(undefined4 *)(param_1 + 8);
    puVar7 = &DAT_7104f580b0;
LAB_7100213b84:
    plVar5[2] = lVar8;
    *plVar5 = (long)(puVar7 + 0x10);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  plVar3 = (long *)*plVar9;
  plVar10 = plVar9;
  plVar6 = plVar9;
  if (plVar3 == (long *)0x0) {
LAB_7100213c14:
    lVar8 = *plVar10;
  }
  else {
    plVar10 = (long *)(param_1 + 0x20);
    bVar2 = param_2 <= *(uint *)(plVar3 + 4);
    if (!bVar2 || *(uint *)(plVar3 + 4) == param_2) goto LAB_7100213be8;
    while (plVar10 = plVar3, plVar3 = (long *)*plVar10, plVar3 != (long *)0x0) {
      bVar2 = param_2 <= *(uint *)(plVar3 + 4);
      if (!bVar2 || *(uint *)(plVar3 + 4) == param_2) {
LAB_7100213be8:
        do {
          plVar6 = plVar3;
          if (bVar2) goto LAB_7100213c14;
          plVar10 = plVar3 + 1;
          plVar3 = (long *)*plVar10;
          if (plVar3 == (long *)0x0) goto LAB_7100213c14;
          bVar2 = param_2 <= *(uint *)(plVar3 + 4);
        } while (!bVar2 || *(uint *)(plVar3 + 4) == param_2);
      }
    }
    lVar8 = *plVar10;
    plVar6 = plVar10;
  }
  if (lVar8 == 0) {
    plVar3 = FUN_71001b1820(0x30);
    *(uint *)(plVar3 + 4) = param_2;
    plVar3[5] = 0;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = (long)plVar6;
    *plVar10 = (long)plVar3;
    plVar6 = plVar3;
    if (**(long **)(param_1 + 0x18) != 0) {
      *(long *)(param_1 + 0x18) = **(long **)(param_1 + 0x18);
      plVar6 = (long *)*plVar10;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(long **)(param_1 + 0x20),plVar6);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    plVar3[5] = (long)plVar5;
    plVar5 = (long *)*plVar9;
  }
  else {
    *(long **)(lVar8 + 0x28) = plVar5;
    plVar5 = (long *)*plVar9;
  }
joined_r0x007100213d0c:
  if (plVar5 == (long *)0x0) {
    plVar10 = (long *)*plVar9;
    plVar5 = plVar9;
  }
  else {
    plVar9 = (long *)(param_1 + 0x20);
    bVar2 = param_2 <= *(uint *)(plVar5 + 4);
    if (!bVar2 || *(uint *)(plVar5 + 4) == param_2) goto LAB_7100213a18;
LAB_7100213a08:
    plVar10 = (long *)*plVar5;
    plVar9 = plVar5;
    if ((long *)*plVar5 != (long *)0x0) {
LAB_71002139f8:
      plVar5 = plVar10;
      bVar2 = param_2 <= *(uint *)(plVar5 + 4);
      if (!bVar2 || *(uint *)(plVar5 + 4) == param_2) {
LAB_7100213a18:
        if (!bVar2) goto code_r0x007100213a1c;
        goto LAB_7100213a28;
      }
      goto LAB_7100213a08;
    }
    plVar10 = (long *)*plVar5;
  }
joined_r0x007100213a30:
  if (plVar10 == (long *)0x0) {
    plVar10 = FUN_71001b1820(0x30);
    *(uint *)(plVar10 + 4) = param_2;
    plVar10[5] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[2] = (long)plVar5;
    *plVar9 = (long)plVar10;
    plVar5 = plVar10;
    if (**(long **)(param_1 + 0x18) != 0) {
      *(long *)(param_1 + 0x18) = **(long **)(param_1 + 0x18);
      plVar5 = (long *)*plVar9;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(long **)(param_1 + 0x20),plVar5);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  *(long *)(param_1 + 0x10) = plVar10[5];
  *(uint *)(param_1 + 0xc) = param_2;
  return;
code_r0x007100213a1c:
  plVar9 = plVar5 + 1;
  plVar10 = (long *)*plVar9;
  if ((long *)*plVar9 == (long *)0x0) {
LAB_7100213a28:
    plVar10 = (long *)*plVar9;
    goto joined_r0x007100213a30;
  }
  goto LAB_71002139f8;
}

