// addr:      710020bb80
// offset:    0x20bb80
// name:      FUN_710020bb80
// mangled:   
// signature: undefined FUN_710020bb80(void)


undefined4 FUN_710020bb80(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020bbf4:
    if ((*plVar3 != 0) && (lVar4 = *(long *)(*plVar3 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_710020bc28;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710020bbf4;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710020bbf4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_710020bc28:
  plVar9 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  plVar3 = *(long **)(param_1 + 0x110);
  if (plVar3 != (long *)0x0) {
    plVar5 = (long *)(param_1 + 0x110);
    plVar6 = plVar3;
    plVar10 = plVar5;
    do {
      if ((ulong)plVar6[4] >= param_2) {
        plVar10 = plVar6;
      }
      plVar6 = (long *)plVar6[(ulong)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar10 != plVar5) && ((ulong)plVar10[4] <= param_2 && plVar10 != plVar5)) {
      do {
        while( true ) {
          if (plVar10[4] != param_2) goto LAB_710020bcf0;
          plVar6 = (long *)plVar10[1];
          if (plVar10[5] == param_3) {
            if (plVar6 == (long *)0x0) {
              plVar6 = plVar10 + 2;
              plVar5 = (long *)*plVar6;
              if ((long *)*plVar5 != plVar10) {
                do {
                  lVar4 = *plVar6;
                  plVar6 = (long *)(lVar4 + 0x10);
                  plVar5 = (long *)*plVar6;
                } while (*plVar5 != lVar4);
              }
            }
            else {
              do {
                plVar5 = plVar6;
                plVar6 = (long *)*plVar5;
              } while ((long *)*plVar5 != (long *)0x0);
            }
            if (*(long **)(param_1 + 0x108) == plVar10) {
              *(long **)(param_1 + 0x108) = plVar5;
            }
            *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + -1;
            std::__tree_remove<std::__tree_node_base<void*>*>(plVar3,plVar10);
            FUN_71001b1870((long)plVar10);
            uVar8 = 1;
            goto LAB_710020bcf4;
          }
          if (plVar6 == (long *)0x0) break;
          do {
            plVar10 = plVar6;
            plVar6 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
LAB_710020bcd8:
          if (plVar10 == plVar5) goto LAB_710020bcf0;
        }
        plVar6 = plVar10 + 2;
        plVar7 = (long *)*plVar6;
        if ((long *)*plVar7 != plVar10) {
          do {
            lVar4 = *plVar6;
            plVar6 = (long *)(lVar4 + 0x10);
            plVar10 = (long *)*plVar6;
          } while (*plVar10 != lVar4);
          goto LAB_710020bcd8;
        }
        plVar10 = plVar7;
      } while (plVar7 != plVar5);
    }
  }
LAB_710020bcf0:
  uVar8 = 0;
LAB_710020bcf4:
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return uVar8;
}

