// addr:      710023b9e0
// offset:    0x23b9e0
// name:      FUN_710023b9e0
// mangled:   
// signature: undefined8 __cdecl FUN_710023b9e0(long param_1, ushort param_2)


undefined8 FUN_710023b9e0(long param_1,ushort param_2)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710023ba4c:
    if ((*plVar8 != 0) && (lVar5 = *(long *)(*plVar8 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_710023ba80;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 == 0) goto LAB_710023ba4c;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_710023ba4c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_710023ba80:
  plVar9 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  plVar6 = (long *)(param_1 + 0x90);
  plVar4 = (long *)*plVar6;
  plVar7 = plVar4;
  plVar8 = plVar6;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(ushort *)(plVar7 + 4) >= param_2) {
        plVar8 = plVar7;
      }
      plVar1 = plVar7 + (*(ushort *)(plVar7 + 4) < param_2);
      plVar7 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
    if ((plVar8 != plVar6) && (*(ushort *)(plVar8 + 4) <= param_2)) {
      plVar7 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        plVar7 = plVar8 + 2;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar6 != plVar8) {
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
      if (*(long **)(param_1 + 0x88) == plVar8) {
        *(long **)(param_1 + 0x88) = plVar6;
      }
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(plVar4,plVar8);
      FUN_71001b1870((long)plVar8);
    }
  }
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return 1;
}

