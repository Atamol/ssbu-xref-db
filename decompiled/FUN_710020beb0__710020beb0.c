// addr:      710020beb0
// offset:    0x20beb0
// name:      FUN_710020beb0
// mangled:   
// signature: undefined FUN_710020beb0(void)


void FUN_710020beb0(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  long *plVar15;
  ulong uVar16;
  
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020bf24:
    if ((*plVar3 == 0) || (lVar5 = *(long *)(*plVar3 + 0x10), lVar5 == 0)) goto LAB_710020bf54;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710020bf24;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710020bf24;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710020bf54:
    lVar5 = 0;
  }
  plVar15 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar15 + 0x10))(plVar15);
  plVar3 = FUN_71001b1820(0x30);
  *(uint *)(plVar3 + 4) = param_2;
  plVar3[5] = param_3;
  puVar9 = *(undefined8 **)(param_1 + 0x128);
  if (*(undefined8 **)(param_1 + 0x128) == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)(param_1 + 0x128);
    puVar10 = puVar6;
  }
  else {
    do {
      while (puVar6 = puVar9, param_2 < *(uint *)(puVar6 + 4)) {
        puVar9 = (undefined8 *)*puVar6;
        puVar10 = puVar6;
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) goto LAB_710020bfbc;
      }
      puVar9 = (undefined8 *)puVar6[1];
    } while ((undefined8 *)puVar6[1] != (undefined8 *)0x0);
    puVar10 = puVar6 + 1;
  }
LAB_710020bfbc:
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)puVar6;
  *puVar10 = plVar3;
  if (**(long **)(param_1 + 0x120) != 0) {
    *(long *)(param_1 + 0x120) = **(long **)(param_1 + 0x120);
    plVar3 = (long *)*puVar10;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            (*(long **)(param_1 + 0x128),plVar3);
  puVar2 = *(uint **)(param_1 + 0x140);
  *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + 1;
  if (puVar2 != *(uint **)(param_1 + 0x148)) {
    *puVar2 = param_2;
    *(uint **)(param_1 + 0x140) = puVar2 + 1;
    goto LAB_710020c114;
  }
  puVar4 = *(uint **)(param_1 + 0x138);
  lVar5 = (long)puVar2 - (long)puVar4 >> 2;
  uVar16 = lVar5 + 1;
  if (uVar16 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = (long)*(uint **)(param_1 + 0x148) - (long)puVar4;
  if ((ulong)(lVar7 >> 2) < 0x1fffffffffffffff) {
    uVar8 = lVar7 >> 1;
    if (uVar16 <= uVar8) {
      uVar16 = uVar8;
    }
    if (uVar16 != 0) goto LAB_710020c054;
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uVar16 = 0x3fffffffffffffff;
LAB_710020c054:
    puVar9 = FUN_71001b1820(uVar16 << 2);
    puVar4 = *(uint **)(param_1 + 0x138);
    puVar2 = *(uint **)(param_1 + 0x140);
  }
  puVar12 = (uint *)((long)puVar9 + lVar5 * 4);
  puVar13 = puVar12 + 1;
  *puVar12 = param_2;
  if (puVar2 != puVar4) {
    uVar8 = (long)puVar2 + (-4 - (long)puVar4);
    uVar1 = ((uint)(uVar8 >> 2) & 0x3fffffff) + 1;
    puVar14 = puVar12;
    puVar11 = puVar2;
    if ((uVar1 & 3) != 0) {
      lVar5 = -((ulong)uVar1 & 3);
      do {
        puVar11 = puVar11 + -1;
        lVar5 = lVar5 + 1;
        puVar14 = puVar14 + -1;
        *puVar14 = *puVar11;
      } while (lVar5 != 0);
    }
    if (0xb < uVar8) {
      puVar14 = puVar14 + -2;
      do {
        puVar14[1] = puVar11[-1];
        *puVar14 = puVar11[-2];
        puVar14[-1] = puVar11[-3];
        puVar11 = puVar11 + -4;
        puVar14[-2] = *puVar11;
        puVar14 = puVar14 + -4;
      } while (puVar4 != puVar11);
    }
    puVar12 = (uint *)((long)puVar12 + (~((long)puVar2 + (-4 - (long)puVar4)) & 0xfffffffffffffffcU)
                      );
  }
  *(uint **)(param_1 + 0x138) = puVar12;
  *(uint **)(param_1 + 0x140) = puVar13;
  *(ulong *)(param_1 + 0x148) = (long)puVar9 + uVar16 * 4;
  if (puVar4 != (uint *)0x0) {
    FUN_71001b1870((long)puVar4);
  }
LAB_710020c114:
                    /* WARNING: Could not recover jumptable at 0x00710020c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar15 + 0x20))(plVar15);
  return;
}

