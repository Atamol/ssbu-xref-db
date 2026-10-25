// addr:      7100203410
// offset:    0x203410
// name:      FUN_7100203410
// mangled:   
// signature: undefined __cdecl FUN_7100203410(long param_1, long * param_2)


/* WARNING: Removing unreachable block (ram,0x007100203800) */
/* WARNING: Removing unreachable block (ram,0x0071002035b0) */
/* WARNING: Removing unreachable block (ram,0x00710020359c) */
/* WARNING: Removing unreachable block (ram,0x0071002037ec) */
/* WARNING: Type propagation algorithm not settling */

void FUN_7100203410(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong local_48;
  
  plVar17 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100203484:
    if ((*plVar17 == 0) || (lVar8 = *(long *)(*plVar17 + 0x10), lVar8 == 0)) goto LAB_71002034b4;
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_7100203484;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar17 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_7100203484;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002034b4:
    lVar8 = 0;
  }
  plVar17 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar17 + 0x10))(plVar17);
  if (((*(char *)(param_1 + 0x38) != '\0') && ((*(ushort *)(param_2 + 0xc) & 0xf) < 4)) &&
     ((*(ushort *)(param_2 + 0xc) & 0xf) != 2)) {
    lVar8 = param_2[0x3e];
    *(undefined4 *)(lVar8 + 8) = 1;
    *(undefined8 *)(lVar8 + 0x18) = 1;
  }
  lVar8 = param_2[0x3e];
  if (DAT_7104f54e20 == '\0') {
    FUN_71001b6a50((long *)&local_48);
  }
  else {
    FUN_71001b68a0(&local_48,0);
  }
  DAT_71052aeba8 = local_48;
  *(ulong *)(lVar8 + 0x10) = local_48 + (long)*(int *)(lVar8 + 8);
  plVar11 = param_2 + 1;
  iVar7 = (int)*plVar11;
  if (iVar7 != (int)*plVar11) {
    ClearExclusiveLocal();
    goto LAB_7100203578;
  }
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar4) {
    *(int *)plVar11 = (int)*plVar11 + 1;
    cVar3 = ExclusiveMonitorsStatus();
  }
  while (cVar3 != '\0') {
LAB_7100203578:
    while (iVar5 = (int)*plVar11, iVar5 != iVar7) {
      ClearExclusiveLocal();
      iVar7 = iVar5;
    }
    iVar1 = iVar7 + 1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    iVar7 = iVar5;
    if (bVar4) {
      *(int *)plVar11 = iVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  }
  plVar19 = (long *)(param_1 + 0x10);
  plVar9 = (long *)*plVar19;
  plVar13 = plVar19;
  if (plVar9 != (long *)0x0) {
    do {
      if ((long *)plVar9[4] >= param_2) {
        plVar13 = plVar9;
      }
      plVar9 = (long *)plVar9[(long *)plVar9[4] < param_2];
    } while (plVar9 != (long *)0x0);
    if ((plVar13 != plVar19) && ((long *)plVar13[4] <= param_2)) {
      plVar13 = *(long **)(param_1 + 0x20);
      while ((long *)(param_1 + 0x28) != plVar13) {
LAB_7100203610:
        if ((long *)plVar13[5] == param_2) {
          plVar9 = (long *)plVar13[1];
          if ((long *)plVar13[1] == (long *)0x0) {
            plVar9 = plVar13 + 2;
            plVar16 = (long *)*plVar9;
            if ((long *)*plVar16 != plVar13) {
              do {
                lVar8 = *plVar9;
                plVar9 = (long *)(lVar8 + 0x10);
                plVar16 = (long *)*plVar9;
              } while (*plVar16 != lVar8);
            }
          }
          else {
            do {
              plVar16 = plVar9;
              plVar9 = (long *)*plVar16;
            } while ((long *)*plVar16 != (long *)0x0);
          }
          if (plVar13 == *(long **)(param_1 + 0x20)) {
            *(long **)(param_1 + 0x20) = plVar16;
          }
          *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
          std::__tree_remove<std::__tree_node_base<void*>*>(*(long **)(param_1 + 0x28),plVar13);
          FUN_71001b1870((long)plVar13);
          plVar16 = *(long **)(param_1 + 0x10);
          plVar9 = plVar16;
          plVar13 = plVar19;
          if (plVar16 != (long *)0x0) {
            do {
              if ((long *)plVar9[4] >= param_2) {
                plVar13 = plVar9;
              }
              plVar10 = plVar9 + ((long *)plVar9[4] < param_2);
              plVar9 = (long *)*plVar10;
            } while ((long *)*plVar10 != (long *)0x0);
            if ((plVar13 != plVar19) && ((long *)plVar13[4] <= param_2)) {
              plVar9 = (long *)plVar13[1];
              if ((long *)plVar13[1] == (long *)0x0) {
                plVar9 = plVar13 + 2;
                plVar10 = (long *)*plVar9;
                if ((long *)*plVar10 != plVar13) {
                  do {
                    lVar8 = *plVar9;
                    plVar9 = (long *)(lVar8 + 0x10);
                    plVar10 = (long *)*plVar9;
                  } while (*plVar10 != lVar8);
                }
              }
              else {
                do {
                  plVar10 = plVar9;
                  plVar9 = (long *)*plVar10;
                } while ((long *)*plVar10 != (long *)0x0);
              }
              if (*(long **)(param_1 + 8) == plVar13) {
                *(long **)(param_1 + 8) = plVar10;
              }
              *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
              std::__tree_remove<std::__tree_node_base<void*>*>(plVar16,plVar13);
              FUN_71001b1870((long)plVar13);
            }
          }
          iVar7 = (int)*plVar11;
          iVar5 = (int)*plVar11 + -1;
          if (iVar7 != (int)*plVar11) {
            ClearExclusiveLocal();
            goto LAB_71002037c8;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          while (cVar3 != '\0') {
LAB_71002037c8:
            while( true ) {
              iVar1 = (int)*plVar11;
              iVar5 = iVar7 + -1;
              if (iVar1 == iVar7) break;
              ClearExclusiveLocal();
              iVar7 = iVar1;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            iVar7 = iVar1;
            if (bVar4) {
              *(int *)plVar11 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          }
          if ((iVar5 == 0) && (*(char *)((long)param_2 + 0xc) == '\0')) {
            *(undefined1 *)((long)param_2 + 0xc) = 1;
            (**(code **)(*param_2 + 8))(param_2);
          }
          break;
        }
        plVar9 = (long *)plVar13[1];
        if ((long *)plVar13[1] == (long *)0x0) {
          plVar9 = plVar13 + 2;
          plVar16 = (long *)*plVar9;
          if ((long *)*plVar16 == plVar13) goto LAB_710020366c;
          do {
            lVar8 = *plVar9;
            plVar9 = (long *)(lVar8 + 0x10);
            plVar13 = (long *)*plVar9;
          } while (*plVar13 != lVar8);
        }
        else {
          do {
            plVar13 = plVar9;
            plVar9 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
        }
      }
    }
LAB_7100203834:
    plVar11 = (long *)*plVar19;
    if (plVar11 != (long *)0x0) {
      plVar13 = (long *)plVar11[4];
      plVar19 = (long *)(param_1 + 0x10);
joined_r0x007100203848:
      do {
        plVar9 = plVar11;
        if (plVar13 <= param_2) {
          if (plVar13 < param_2) {
            plVar19 = plVar9 + 1;
            plVar11 = (long *)*plVar19;
            if (plVar11 != (long *)0x0) {
              plVar13 = (long *)plVar11[4];
              goto joined_r0x007100203848;
            }
          }
          lVar8 = *plVar19;
          goto joined_r0x0071002039b4;
        }
        plVar11 = (long *)*plVar9;
        plVar19 = plVar9;
        if (plVar11 == (long *)0x0) goto LAB_71002039a8;
        plVar13 = (long *)plVar11[4];
      } while( true );
    }
  }
  lVar8 = *plVar19;
  plVar9 = plVar19;
joined_r0x0071002039b4:
  if (lVar8 == 0) {
    plVar11 = FUN_71001b1820(0x28);
    plVar11[4] = (long)param_2;
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = (long)plVar9;
    *plVar19 = (long)plVar11;
    if (**(long **)(param_1 + 8) != 0) {
      *(long *)(param_1 + 8) = **(long **)(param_1 + 8);
      plVar11 = (long *)*plVar19;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(long **)(param_1 + 0x10),plVar11);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  }
  uVar18 = *(ulong *)(param_2[0x3e] + 0x10);
  plVar11 = FUN_71001b1820(0x30);
  plVar11[4] = uVar18;
  plVar11[5] = (long)param_2;
  puVar14 = (undefined8 *)(param_1 + 0x28);
  puVar12 = (undefined8 *)*puVar14;
  do {
    puVar15 = puVar14;
    if (puVar12 == (undefined8 *)0x0) {
LAB_710020394c:
      *plVar11 = 0;
      plVar11[1] = 0;
      plVar11[2] = (long)puVar14;
      *puVar15 = plVar11;
      if (**(long **)(param_1 + 0x20) != 0) {
        *(long *)(param_1 + 0x20) = **(long **)(param_1 + 0x20);
        plVar11 = (long *)*puVar15;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                (*(long **)(param_1 + 0x28),plVar11);
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
      (**(code **)(*plVar17 + 0x20))(plVar17);
      return;
    }
    while (puVar14 = puVar12, (ulong)puVar14[4] <= uVar18) {
      puVar12 = (undefined8 *)puVar14[1];
      if ((undefined8 *)puVar14[1] == (undefined8 *)0x0) {
        puVar15 = puVar14 + 1;
        goto LAB_710020394c;
      }
    }
    puVar12 = (undefined8 *)*puVar14;
  } while( true );
LAB_710020366c:
  plVar13 = plVar16;
  if ((long *)(param_1 + 0x28) == plVar16) goto LAB_7100203834;
  goto LAB_7100203610;
LAB_71002039a8:
  lVar8 = *plVar9;
  goto joined_r0x0071002039b4;
}

