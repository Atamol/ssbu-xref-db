// addr:      710023b7d0
// offset:    0x23b7d0
// name:      FUN_710023b7d0
// mangled:   
// signature: undefined FUN_710023b7d0(void)


undefined4 FUN_710023b7d0(long param_1,ushort param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710023b848:
    if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) goto LAB_710023b878;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar4;
    if (uVar2 == 0) goto LAB_710023b848;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_710023b848;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710023b878:
    lVar5 = 0;
  }
  plVar9 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  plVar11 = (long *)(param_1 + 0x90);
  plVar6 = (long *)*plVar11;
  plVar7 = plVar11;
  plVar10 = plVar6;
  if (plVar6 != (long *)0x0) {
    do {
      if (*(ushort *)(plVar10 + 4) >= param_2) {
        plVar7 = plVar10;
      }
      plVar1 = plVar10 + (*(ushort *)(plVar10 + 4) < param_2);
      plVar10 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
    if ((plVar7 == plVar11) || (param_2 < *(ushort *)(plVar7 + 4))) {
      uVar3 = *(ushort *)(plVar6 + 4);
      plVar7 = (long *)(param_1 + 0x90);
joined_r0x00710023b8d8:
      do {
        plVar11 = plVar6;
        if (uVar3 <= param_2) {
          if (uVar3 < param_2) {
            plVar7 = plVar11 + 1;
            plVar6 = (long *)*plVar7;
            if (plVar6 != (long *)0x0) {
              uVar3 = *(ushort *)(plVar6 + 4);
              goto joined_r0x00710023b8d8;
            }
          }
          plVar10 = (long *)*plVar7;
          goto joined_r0x00710023b950;
        }
        plVar6 = (long *)*plVar11;
        plVar7 = plVar11;
        if (plVar6 == (long *)0x0) goto LAB_710023b944;
        uVar3 = *(ushort *)(plVar6 + 4);
      } while( true );
    }
    uVar8 = 0;
    goto LAB_710023b9ac;
  }
  plVar10 = (long *)*plVar11;
  goto joined_r0x00710023b950;
LAB_710023b944:
  plVar10 = (long *)*plVar11;
joined_r0x00710023b950:
  if (plVar10 == (long *)0x0) {
    plVar10 = FUN_71001b1820(0x30);
    *(ushort *)(plVar10 + 4) = param_2;
    plVar10[5] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[2] = (long)plVar11;
    *plVar7 = (long)plVar10;
    plVar11 = plVar10;
    if (**(long **)(param_1 + 0x88) != 0) {
      *(long *)(param_1 + 0x88) = **(long **)(param_1 + 0x88);
      plVar11 = (long *)*plVar7;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(long **)(param_1 + 0x90),plVar11);
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
  }
  plVar10[5] = param_3;
  uVar8 = 1;
LAB_710023b9ac:
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return uVar8;
}

