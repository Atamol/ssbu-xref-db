// addr:      710022dbf0
// offset:    0x22dbf0
// name:      FUN_710022dbf0
// mangled:   
// signature: undefined4 __cdecl FUN_710022dbf0(long param_1, ulong param_2)


undefined4 FUN_710022dbf0(long param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710022dc5c:
    if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0x10), lVar5 == 0)) goto LAB_710022dc8c;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 == 0) goto LAB_710022dc5c;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_710022dc5c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710022dc8c:
    lVar5 = 0;
  }
  plVar10 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  plVar6 = (long *)(param_1 + 0x90);
  plVar4 = (long *)*plVar6;
  plVar7 = plVar4;
  plVar9 = plVar6;
  if (plVar4 != (long *)0x0) {
    do {
      if ((ulong)plVar7[4] >= param_2) {
        plVar9 = plVar7;
      }
      plVar1 = plVar7 + ((ulong)plVar7[4] < param_2);
      plVar7 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
    if ((plVar9 != plVar6) && ((ulong)plVar9[4] <= param_2)) {
      plVar7 = (long *)plVar9[1];
      if ((long *)plVar9[1] == (long *)0x0) {
        plVar7 = plVar9 + 2;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar6 != plVar9) {
          do {
            lVar5 = *plVar7;
            plVar7 = (long *)(lVar5 + 0x10);
            plVar6 = (long *)*plVar7;
          } while (*plVar6 != lVar5);
        }
      }
      else {
        do {
          plVar6 = plVar7;
          plVar7 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0x88) == plVar9) {
        *(long **)(param_1 + 0x88) = plVar6;
      }
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(plVar4,plVar9);
      FUN_71001b1870((long)plVar9);
      uVar8 = 1;
      goto LAB_710022dce4;
    }
  }
  uVar8 = 0;
LAB_710022dce4:
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return uVar8;
}

