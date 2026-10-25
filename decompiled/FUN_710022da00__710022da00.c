// addr:      710022da00
// offset:    0x22da00
// name:      FUN_710022da00
// mangled:   
// signature: undefined4 __cdecl FUN_710022da00(long param_1, ulong param_2)


undefined4 FUN_710022da00(long param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710022da70:
    if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) goto LAB_710022daa0;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 == 0) goto LAB_710022da70;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_710022da70;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710022daa0:
    lVar5 = 0;
  }
  plVar10 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  plVar11 = (long *)(param_1 + 0x90);
  plVar6 = (long *)*plVar11;
  plVar7 = plVar11;
  plVar4 = plVar6;
  if (plVar6 != (long *)0x0) {
    do {
      if ((ulong)plVar4[4] >= param_2) {
        plVar7 = plVar4;
      }
      plVar1 = plVar4 + ((ulong)plVar4[4] < param_2);
      plVar4 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
    if ((plVar7 == plVar11) || (param_2 < (ulong)plVar7[4])) {
      uVar8 = plVar6[4];
      plVar7 = (long *)(param_1 + 0x90);
joined_r0x00710022db00:
      do {
        plVar11 = plVar6;
        if (uVar8 <= param_2) {
          if (uVar8 < param_2) {
            plVar7 = plVar11 + 1;
            plVar6 = (long *)*plVar7;
            if (plVar6 != (long *)0x0) {
              uVar8 = plVar6[4];
              goto joined_r0x00710022db00;
            }
          }
          lVar5 = *plVar7;
          goto joined_r0x00710022db78;
        }
        plVar6 = (long *)*plVar11;
        plVar7 = plVar11;
        if (plVar6 == (long *)0x0) goto LAB_710022db6c;
        uVar8 = plVar6[4];
      } while( true );
    }
    uVar9 = 0;
    goto LAB_710022dbc8;
  }
  lVar5 = *plVar11;
  goto joined_r0x00710022db78;
LAB_710022db6c:
  lVar5 = *plVar11;
joined_r0x00710022db78:
  if (lVar5 == 0) {
    plVar4 = FUN_71001b1820(0x28);
    plVar4[4] = param_2;
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = (long)plVar11;
    *plVar7 = (long)plVar4;
    if (**(long **)(param_1 + 0x88) != 0) {
      *(long *)(param_1 + 0x88) = **(long **)(param_1 + 0x88);
      plVar4 = (long *)*plVar7;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(long **)(param_1 + 0x90),plVar4);
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
  }
  uVar9 = 1;
LAB_710022dbc8:
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return uVar9;
}

