// addr:      710020aff0
// offset:    0x20aff0
// name:      FUN_710020aff0
// mangled:   
// signature: undefined FUN_710020aff0(void)


long * FUN_710020aff0(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020b064:
    if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 == 0)) goto LAB_710020b094;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar2;
    if (uVar4 == 0) goto LAB_710020b064;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_710020b064;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710020b094:
    lVar5 = 0;
  }
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  uVar4 = *(uint *)(param_1 + 8);
  if (DAT_71052af1d8 == '\0') {
LAB_710020b13c:
    uVar4 = *(uint *)(&DAT_71052af630 + (ulong)uVar4 * 0x2e8);
    plVar8 = *(long **)(param_1 + 0x30);
    if (plVar8 == (long *)0x0) goto LAB_710020b0f8;
LAB_710020b160:
    uVar1 = *(uint *)((long)plVar8 + 0x1c);
    plVar7 = (long *)(param_1 + 0x30);
    while( true ) {
      while (uVar4 < uVar1) {
        plVar3 = (long *)*plVar8;
        plVar7 = plVar8;
        if (plVar3 == (long *)0x0) goto LAB_710020b1b4;
        plVar8 = plVar3;
        uVar1 = *(uint *)((long)plVar3 + 0x1c);
      }
      if (uVar4 <= uVar1) break;
      plVar7 = plVar8 + 1;
      plVar3 = (long *)*plVar7;
      if (plVar3 == (long *)0x0) break;
      uVar1 = *(uint *)((long)plVar3 + 0x1c);
      plVar8 = plVar3;
    }
LAB_710020b1b4:
    lVar5 = *plVar7;
    if (lVar5 != 0) goto LAB_710020b1bc;
LAB_710020b104:
    plVar3 = FUN_71001b1820(0x28);
    *(uint *)((long)plVar3 + 0x1c) = uVar4;
    *(undefined2 *)(plVar3 + 4) = 0;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = (long)plVar8;
    *plVar7 = (long)plVar3;
    plVar8 = plVar3;
    if (**(long **)(param_1 + 0x28) != 0) {
      *(long *)(param_1 + 0x28) = **(long **)(param_1 + 0x28);
      plVar8 = (long *)*plVar7;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(long **)(param_1 + 0x30),plVar8);
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
    uVar4 = (uint)*(ushort *)(plVar3 + 4);
    if (uVar4 != 0) goto LAB_710020b1cc;
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar2 == 0) goto LAB_710020b13c;
    uVar4 = *(uint *)(*(long *)(&DAT_71052af4e8 + (ulong)uVar4 * 0x2e8) + (ulong)*puVar2 * 0x168 +
                     0x140);
    plVar8 = *(long **)(param_1 + 0x30);
    if (plVar8 != (long *)0x0) goto LAB_710020b160;
LAB_710020b0f8:
    plVar7 = (long *)(param_1 + 0x30);
    lVar5 = *plVar7;
    plVar8 = plVar7;
    if (lVar5 == 0) goto LAB_710020b104;
LAB_710020b1bc:
    uVar4 = (uint)*(ushort *)(lVar5 + 0x20);
    if (*(ushort *)(lVar5 + 0x20) != 0) goto LAB_710020b1cc;
  }
  uVar4 = (uint)*(ushort *)(*(long *)(param_1 + 0x18) + 0x128);
LAB_710020b1cc:
  plVar8 = FUN_710020abf0(param_1,param_2,uVar4,1);
  if (plVar8 != (long *)0x0) {
    *(int *)(plVar8 + 0x14) = (int)plVar8[0x14] + 1;
  }
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return plVar8;
}

