// addr:      7100201730
// offset:    0x201730
// name:      FUN_7100201730
// mangled:   
// signature: undefined4 __cdecl FUN_7100201730(long param_1, long * param_2)


/* WARNING: Removing unreachable block (ram,0x007100201a84) */
/* WARNING: Removing unreachable block (ram,0x007100201a70) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_7100201730(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  undefined4 uVar15;
  long *plVar16;
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020179c:
    if ((*plVar9 != 0) && (lVar8 = *(long *)(*plVar9 + 0x10), lVar8 != 0)) {
      lVar8 = *(long *)(lVar8 + 0x10);
      goto LAB_71002017d0;
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_710020179c;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_710020179c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar8 = 0;
LAB_71002017d0:
  plVar14 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  uVar10 = *(ulong *)(param_2[0x3e] + 0x10);
  plVar9 = (long *)(param_1 + 0x28);
  plVar7 = (long *)*plVar9;
  plVar11 = plVar7;
joined_r0x0071002017f0:
  plVar16 = plVar9;
  if (plVar11 == (long *)0x0) goto LAB_7100201890;
  if (uVar10 < (ulong)plVar11[4]) {
    plVar9 = plVar11;
    plVar11 = (long *)*plVar11;
    goto joined_r0x0071002017f0;
  }
  if ((ulong)plVar11[4] < uVar10) {
    plVar11 = (long *)plVar11[1];
    goto joined_r0x0071002017f0;
  }
  plVar13 = (long *)*plVar11;
  plVar16 = plVar11;
  if (plVar13 == (long *)0x0) {
    plVar11 = (long *)plVar11[1];
  }
  else {
    do {
      if ((ulong)plVar13[4] >= uVar10) {
        plVar16 = plVar13;
      }
      plVar13 = (long *)plVar13[(ulong)plVar13[4] < uVar10];
    } while (plVar13 != (long *)0x0);
    plVar11 = (long *)plVar11[1];
  }
  for (; plVar11 != (long *)0x0; plVar11 = *(long **)((long)plVar11 + lVar8)) {
    lVar8 = 0;
    plVar13 = plVar11;
    if ((ulong)plVar11[4] <= uVar10) {
      lVar8 = 8;
      plVar13 = plVar9;
    }
    plVar9 = plVar13;
  }
LAB_7100201890:
  do {
    if (plVar16 == plVar9) {
      uVar15 = 0;
LAB_7100201ac0:
      (**(code **)(*plVar14 + 0x20))(plVar14);
      return uVar15;
    }
    if ((long *)plVar16[5] == param_2) {
      plVar9 = (long *)plVar16[1];
      if ((long *)plVar16[1] == (long *)0x0) {
        plVar9 = plVar16 + 2;
        plVar11 = (long *)*plVar9;
        if ((long *)*plVar11 != plVar16) {
          do {
            lVar8 = *plVar9;
            plVar9 = (long *)(lVar8 + 0x10);
            plVar11 = (long *)*plVar9;
          } while (*plVar11 != lVar8);
        }
      }
      else {
        do {
          plVar11 = plVar9;
          plVar9 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0x20) == plVar16) {
        *(long **)(param_1 + 0x20) = plVar11;
      }
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(plVar7,plVar16);
      FUN_71001b1870((long)plVar16);
      plVar16 = (long *)(param_1 + 0x10);
      plVar7 = (long *)*plVar16;
      plVar11 = plVar7;
      plVar9 = plVar16;
      if (plVar7 != (long *)0x0) {
        do {
          if ((long *)plVar11[4] >= param_2) {
            plVar9 = plVar11;
          }
          plVar13 = plVar11 + ((long *)plVar11[4] < param_2);
          plVar11 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
        if ((plVar9 != plVar16) && ((long *)plVar9[4] <= param_2)) {
          plVar11 = (long *)plVar9[1];
          if ((long *)plVar9[1] == (long *)0x0) {
            plVar11 = plVar9 + 2;
            plVar16 = (long *)*plVar11;
            if ((long *)*plVar16 != plVar9) {
              do {
                lVar8 = *plVar11;
                plVar11 = (long *)(lVar8 + 0x10);
                plVar16 = (long *)*plVar11;
              } while (*plVar16 != lVar8);
            }
          }
          else {
            do {
              plVar16 = plVar11;
              plVar11 = (long *)*plVar16;
            } while ((long *)*plVar16 != (long *)0x0);
          }
          if (*(long **)(param_1 + 8) == plVar9) {
            *(long **)(param_1 + 8) = plVar16;
          }
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
          std::__tree_remove<std::__tree_node_base<void*>*>(plVar7,plVar9);
          FUN_71001b1870((long)plVar9);
        }
      }
      plVar9 = param_2 + 1;
      iVar12 = (int)*plVar9;
      iVar4 = (int)*plVar9 + -1;
      if (iVar12 != (int)*plVar9) {
        ClearExclusiveLocal();
        goto LAB_7100201a4c;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
      while (cVar3 != '\0') {
LAB_7100201a4c:
        while( true ) {
          iVar1 = (int)*plVar9;
          iVar4 = iVar12 + -1;
          if (iVar1 == iVar12) break;
          ClearExclusiveLocal();
          iVar12 = iVar1;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        iVar12 = iVar1;
        if (bVar5) {
          *(int *)plVar9 = iVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      }
      if (iVar4 == 0) {
        uVar15 = 1;
        if (*(char *)((long)param_2 + 0xc) == '\0') {
          *(undefined1 *)((long)param_2 + 0xc) = 1;
          (**(code **)(*param_2 + 8))(param_2);
        }
      }
      else {
        uVar15 = 1;
      }
      goto LAB_7100201ac0;
    }
    plVar11 = (long *)plVar16[1];
    if ((long *)plVar16[1] == (long *)0x0) {
      plVar11 = plVar16 + 2;
      bVar5 = *(long **)*plVar11 != plVar16;
      plVar16 = (long *)*plVar11;
      if (bVar5) {
        do {
          lVar8 = *plVar11;
          plVar11 = (long *)(lVar8 + 0x10);
          plVar16 = (long *)*plVar11;
        } while (*plVar16 != lVar8);
      }
    }
    else {
      do {
        plVar16 = plVar11;
        plVar11 = (long *)*plVar16;
      } while ((long *)*plVar16 != (long *)0x0);
    }
  } while( true );
}

