// addr:      71001d3a20
// offset:    0x1d3a20
// name:      FUN_71001d3a20
// mangled:   
// signature: undefined4 __cdecl FUN_71001d3a20(long param_1)


undefined4 FUN_71001d3a20(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong local_48;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d3a90:
    if ((*plVar10 == 0) || (lVar6 = *(long *)(*plVar10 + 0x10), lVar6 == 0)) goto LAB_71001d3ac0;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_71001d3a90;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001d3a90;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001d3ac0:
    lVar6 = 0;
  }
  plVar10 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  bVar2 = FUN_71001ccd00(*(long **)(param_1 + 0xa8));
  if (!bVar2) {
    uVar3 = 0;
    goto LAB_71001d3d10;
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x18);
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d3b30:
    if ((*plVar8 == 0) || (lVar6 = *(long *)(*plVar8 + 0x10), lVar6 == 0)) goto LAB_71001d3b94;
    lVar6 = *(long *)(lVar6 + 0x10);
    if (DAT_7104f561d1 == '\0') goto LAB_71001d3b54;
LAB_71001d3ba8:
    plVar8 = (long *)(lVar6 + 0xc0);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    plVar7 = (long *)(lVar6 + 0x30);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_71001d8820(lVar6,param_1,0);
    (**(code **)(*plVar7 + 0x20))(plVar7);
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_71001d3b30;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001d3b30;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001d3b94:
    lVar6 = 0;
    if (DAT_7104f561d1 != '\0') goto LAB_71001d3ba8;
LAB_71001d3b54:
    FUN_71001d8820(lVar6,param_1,0);
  }
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    plVar8 = &DAT_71052af138;
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        uVar3 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
        return uVar3;
      }
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar6 = *(long *)(*(long *)(*plVar8 + 0x10) + 0x18);
  uVar1 = *(uint *)(param_1 + 0xa0);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x18);
  plVar5 = FUN_71001b1820(0x28);
  *(uint *)((long)plVar5 + 0x1c) = uVar1;
  *(undefined4 *)(plVar5 + 4) = uVar3;
  plVar8 = (long *)(lVar6 + 0x68);
  plVar7 = (long *)*plVar8;
  while (plVar9 = plVar8, plVar7 != (long *)0x0) {
    while (plVar8 = plVar7, *(uint *)((long)plVar8 + 0x1c) <= uVar1) {
      plVar7 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        plVar9 = plVar8 + 1;
        goto LAB_71001d3cb0;
      }
    }
    plVar7 = (long *)*plVar8;
  }
LAB_71001d3cb0:
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = (long)plVar8;
  *plVar9 = (long)plVar5;
  if (**(long **)(lVar6 + 0x60) != 0) {
    *(long *)(lVar6 + 0x60) = **(long **)(lVar6 + 0x60);
    plVar5 = (long *)*plVar9;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(*(long **)(lVar6 + 0x68),plVar5);
  *(long *)(lVar6 + 0x70) = *(long *)(lVar6 + 0x70) + 1;
  FUN_71001b12a0(&local_48);
  *(ulong *)(param_1 + 0x68) = local_48;
  *(code **)(param_1 + 0x80) = FUN_71001d3db0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined1 **)(param_1 + 0x90) = &DAT_71044114cc;
  uVar3 = 1;
LAB_71001d3d10:
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return uVar3;
}

