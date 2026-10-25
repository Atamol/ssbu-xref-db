// addr:      7100217710
// offset:    0x217710
// name:      FUN_7100217710
// mangled:   
// signature: ulong __cdecl FUN_7100217710(long param_1, long param_2, ulong * param_3, ulong param_4, long param_5, uint param_6)


/* WARNING: Removing unreachable block (ram,0x007100218064) */
/* WARNING: Removing unreachable block (ram,0x007100217db0) */
/* WARNING: Removing unreachable block (ram,0x007100217908) */
/* WARNING: Removing unreachable block (ram,0x007100217840) */
/* WARNING: Removing unreachable block (ram,0x007100217854) */
/* WARNING: Removing unreachable block (ram,0x0071002178f4) */
/* WARNING: Removing unreachable block (ram,0x007100217dc4) */
/* WARNING: Removing unreachable block (ram,0x007100218050) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_7100217710(long param_1,long param_2,ulong *param_3,ulong param_4,long param_5,
                    uint param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  ulong local_68;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0;
  }
  plVar22 = *(long **)(param_1 + 8);
  plVar11 = *(long **)(param_1 + 0x18);
  if (plVar11 == plVar22) {
    return 0;
  }
  uVar17 = *(ulong *)(*(long *)(param_5 + 0x10) + 0x18);
  local_68 = uVar17;
  if (DAT_7104f577e0 == 0) {
    plVar19 = (long *)0x0;
    uVar18 = 0;
    if (plVar11 != plVar22) {
LAB_7100217cec:
      do {
        if ((ulong)plVar22[0x3c] < *param_3) {
          plVar11 = (long *)plVar22[6];
          lVar21 = plVar22[7];
          if (lVar21 != 0) {
            *(long **)(lVar21 + 0x30) = plVar11;
          }
          plVar22[7] = 0;
          if (plVar11 != (long *)0x0) {
            plVar11[7] = lVar21;
          }
          plVar22[6] = 0;
          if (*(long **)(param_1 + 8) == plVar22) {
            *(long **)(param_1 + 8) = plVar11;
            plVar14 = *(long **)(param_1 + 0x10);
          }
          else {
            plVar14 = *(long **)(param_1 + 0x10);
          }
          if (plVar14 == plVar22) {
            *(long *)(param_1 + 0x10) = lVar21;
          }
          *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
          plVar14 = plVar22 + 1;
          iVar15 = (int)*plVar14;
          iVar13 = (int)*plVar14 + -1;
          if (iVar15 != (int)*plVar14) {
            ClearExclusiveLocal();
            goto LAB_7100217d8c;
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *(int *)plVar14 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
          while (cVar6 != '\0') {
LAB_7100217d8c:
            while( true ) {
              iVar16 = (int)*plVar14;
              iVar13 = iVar15 + -1;
              if (iVar16 == iVar15) break;
              ClearExclusiveLocal();
              iVar15 = iVar16;
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            iVar15 = iVar16;
            if (bVar7) {
              *(int *)plVar14 = iVar13;
              cVar6 = ExclusiveMonitorsStatus();
            }
          }
          if ((iVar13 == 0) && (*(char *)((long)plVar22 + 0xc) == '\0')) {
            *(undefined1 *)((long)plVar22 + 0xc) = 1;
            (**(code **)(*plVar22 + 8))(plVar22);
            plVar14 = *(long **)(param_1 + 0x18);
          }
          else {
            plVar14 = *(long **)(param_1 + 0x18);
          }
          plVar22 = plVar11;
          if (plVar14 == plVar11) break;
          goto LAB_7100217cec;
        }
        plVar11 = plVar22 + 6;
        plVar22 = (long *)*plVar11;
      } while (*(long **)(param_1 + 0x18) != (long *)*plVar11);
    }
  }
  else {
    plVar19 = (long *)0x0;
    uVar18 = 0;
    do {
      if (*(ushort *)((long)plVar22 + 0x202) < DAT_7104f577e8) {
        if (*(char *)((long)plVar22 + 0x211) != '\0') {
          plVar14 = (long *)plVar22[6];
          lVar21 = plVar22[7];
          if (lVar21 != 0) {
            *(long **)(lVar21 + 0x30) = plVar14;
          }
          plVar22[7] = 0;
          if (plVar14 != (long *)0x0) {
            plVar14[7] = lVar21;
          }
          plVar22[6] = 0;
          if (*(long **)(param_1 + 8) == plVar22) {
            *(long **)(param_1 + 8) = plVar14;
            plVar11 = *(long **)(param_1 + 0x10);
          }
          else {
            plVar11 = *(long **)(param_1 + 0x10);
          }
          if (plVar11 == plVar22) {
            *(long *)(param_1 + 0x10) = lVar21;
          }
          *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
          plVar11 = plVar22 + 1;
          iVar15 = (int)*plVar11;
          iVar13 = (int)*plVar11 + -1;
          if (iVar15 == (int)*plVar11) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar7) {
              *(int *)plVar11 = iVar13;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_7100217ac0;
          }
          else {
            ClearExclusiveLocal();
          }
          do {
            while( true ) {
              iVar16 = (int)*plVar11;
              iVar13 = iVar15 + -1;
              if (iVar16 == iVar15) break;
              ClearExclusiveLocal();
              iVar15 = iVar16;
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar7) {
              *(int *)plVar11 = iVar13;
              cVar6 = ExclusiveMonitorsStatus();
            }
            iVar15 = iVar16;
          } while (cVar6 != '\0');
          goto LAB_7100217ac0;
        }
        plVar20 = plVar11;
        plVar14 = plVar22;
        if ((ulong)plVar22[0x3c] < *param_3) break;
        if ((((DAT_71052af481 == '\0') || (uVar5 = *(ushort *)(param_2 + 0x60), (uVar5 & 0xf) != 2))
            || (*(char *)(param_2 + 0x42) != '\x01')) ||
           (((uVar5 & 0x30) == 0 && (DAT_7104f577cd == '\0')))) {
LAB_7100217a94:
          plVar14 = (long *)plVar22[6];
          plVar11 = *(long **)(param_1 + 0x18);
          plVar20 = plVar14;
          if (plVar11 == plVar14) break;
        }
        else {
          if ((((uVar5 & 0x30) != 0) && ((uVar5 & 0x10) != 0 || DAT_7104f577cc == '\0')) ||
             (((*(char *)(param_2 + 0x211) != '\0' ||
               (*(char *)((long)plVar22 + 0xa2) != *(char *)(param_2 + 0xa2))) ||
              (*(short *)((long)plVar22 + 0xac) != *(short *)(param_2 + 0xac)))))
          goto LAB_7100217a94;
          if ((*(int *)(DAT_71052af448 + 8) != 1) ||
             (((uVar5 & *(ushort *)(plVar22 + 0xc)) >> 9 & 1) == 0)) {
            uVar8 = FUN_71001beb00((long)(plVar22 + 0x28));
            uVar9 = FUN_71001beb00(param_2 + 0x140);
            if ((uVar8 != uVar9) || ((int)plVar22[0x39] != *(int *)(param_2 + 0x1c8)))
            goto LAB_7100217a94;
          }
          uVar8 = plVar22[0x43] + local_68;
          if (param_4 < uVar8) {
            if (*(long **)(param_1 + 0x18) == plVar22) goto LAB_7100217e30;
            goto LAB_7100217cec;
          }
          if (plVar19 != (long *)0x0) {
            plVar22[4] = (long)plVar19;
            plVar19[5] = (long)plVar22;
          }
          uVar5 = *(short *)((long)plVar22 + 0x202) + 1;
          *(ushort *)((long)plVar22 + 0x202) = uVar5;
          uVar18 = uVar18 + 1;
          plVar19 = plVar22;
          local_68 = uVar8;
          if (uVar5 < DAT_7104f577e8) {
            plVar14 = (long *)plVar22[6];
            plVar11 = *(long **)(param_1 + 0x18);
            plVar20 = plVar14;
            if (plVar11 == plVar14) break;
          }
          else {
            plVar11 = plVar22 + 1;
            iVar15 = (int)*plVar11;
            if (iVar15 != (int)*plVar11) {
              ClearExclusiveLocal();
              iVar13 = iVar15;
              goto LAB_7100217b64;
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar7) {
              *(int *)plVar11 = (int)*plVar11 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            while (iVar13 = iVar15, cVar6 != '\0') {
LAB_7100217b64:
              while (iVar15 = (int)*plVar11, iVar15 != iVar13) {
                ClearExclusiveLocal();
                iVar13 = iVar15;
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar7) {
                *(int *)plVar11 = iVar13 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            }
            plVar14 = (long *)plVar22[6];
            lVar21 = plVar22[7];
            if (lVar21 != 0) {
              *(long **)(lVar21 + 0x30) = plVar14;
            }
            plVar22[7] = 0;
            if (plVar14 != (long *)0x0) {
              plVar14[7] = lVar21;
            }
            plVar22[6] = 0;
            if (*(long **)(param_1 + 8) == plVar22) {
              *(long **)(param_1 + 8) = plVar14;
            }
            if (*(long **)(param_1 + 0x10) == plVar22) {
              *(long *)(param_1 + 0x10) = lVar21;
            }
            *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
            iVar15 = (int)*plVar11;
            iVar13 = (int)*plVar11 + -1;
            if (iVar15 != (int)*plVar11) {
              ClearExclusiveLocal();
              iVar16 = iVar15;
              goto LAB_7100217c18;
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar7) {
              *(int *)plVar11 = iVar13;
              cVar6 = ExclusiveMonitorsStatus();
            }
            while (iVar16 = iVar15, cVar6 != '\0') {
LAB_7100217c18:
              while( true ) {
                iVar15 = (int)*plVar11;
                iVar13 = iVar16 + -1;
                if (iVar15 == iVar16) break;
                ClearExclusiveLocal();
                iVar16 = iVar15;
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar7) {
                *(int *)plVar11 = iVar13;
                cVar6 = ExclusiveMonitorsStatus();
              }
            }
            if ((iVar13 == 0) && (*(char *)((long)plVar22 + 0xc) == '\0')) {
              *(undefined1 *)((long)plVar22 + 0xc) = 1;
              (**(code **)(*plVar22 + 8))(plVar22);
              plVar11 = *(long **)(param_1 + 0x18);
            }
            else {
              plVar11 = *(long **)(param_1 + 0x18);
            }
            plVar20 = plVar14;
            if (plVar11 == plVar14) break;
          }
        }
      }
      else {
        plVar14 = (long *)plVar22[6];
        lVar21 = plVar22[7];
        if (lVar21 != 0) {
          *(long **)(lVar21 + 0x30) = plVar14;
        }
        plVar22[7] = 0;
        if (plVar14 != (long *)0x0) {
          plVar14[7] = lVar21;
        }
        plVar22[6] = 0;
        if (*(long **)(param_1 + 8) == plVar22) {
          *(long **)(param_1 + 8) = plVar14;
          plVar11 = *(long **)(param_1 + 0x10);
        }
        else {
          plVar11 = *(long **)(param_1 + 0x10);
        }
        if (plVar11 == plVar22) {
          *(long *)(param_1 + 0x10) = lVar21;
        }
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
        plVar11 = plVar22 + 1;
        iVar15 = (int)*plVar11;
        iVar13 = (int)*plVar11 + -1;
        if (iVar15 == (int)*plVar11) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *(int *)plVar11 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_7100217ac0;
        }
        else {
          ClearExclusiveLocal();
        }
        do {
          while( true ) {
            iVar16 = (int)*plVar11;
            iVar13 = iVar15 + -1;
            if (iVar16 == iVar15) break;
            ClearExclusiveLocal();
            iVar15 = iVar16;
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *(int *)plVar11 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
          iVar15 = iVar16;
        } while (cVar6 != '\0');
LAB_7100217ac0:
        if ((iVar13 == 0) && (*(char *)((long)plVar22 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar22 + 0xc) = 1;
          (**(code **)(*plVar22 + 8))(plVar22);
          plVar11 = *(long **)(param_1 + 0x18);
        }
        else {
          plVar11 = *(long **)(param_1 + 0x18);
        }
        plVar20 = plVar14;
        if (plVar11 == plVar14) break;
      }
      plVar20 = plVar11;
      plVar22 = plVar14;
    } while (uVar18 < DAT_7104f577e0);
    plVar22 = plVar14;
    if (plVar20 != plVar14) goto LAB_7100217cec;
  }
LAB_7100217e30:
  if (local_68 == uVar17) {
    uVar18 = 0;
    goto joined_r0x0071002180c8;
  }
  plVar11 = FUN_71001af850(0x20);
  if (plVar11 != (long *)0x0) {
    FUN_71001d0120(plVar11);
  }
  plVar22 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_7100217eb4:
    if (*plVar22 == 0) goto LAB_7100217eec;
    lVar21 = *(long *)(*plVar22 + 0x10);
    if (DAT_71052af1d8 != '\0') goto LAB_7100217f00;
LAB_7100217f38:
    lVar12 = (ulong)param_6 * 0x2e8 + 0x71052af4f0;
  }
  else {
    puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar10;
    if (uVar4 == 0) goto LAB_7100217eb4;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar22 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x10);
      goto LAB_7100217eb4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100217eec:
    lVar21 = 0;
    if (DAT_71052af1d8 == '\0') goto LAB_7100217f38;
LAB_7100217f00:
    puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar10 == 0) goto LAB_7100217f38;
    lVar12 = *(long *)(&DAT_71052af4e8 + (ulong)param_6 * 0x2e8) + (ulong)*puVar10 * 0x168;
  }
  lVar2 = 0x1b0;
  if (1 < *(int *)(lVar12 + 0x140) - 1U) {
    lVar2 = 0x1a8;
  }
  if (plVar19 == (long *)0x0) {
    if (plVar11 == (long *)0x0) {
      return uVar18;
    }
    plVar22 = (long *)0x0;
  }
  else {
    plVar20 = *(long **)(lVar21 + lVar2);
    plVar14 = plVar19;
    do {
      FUN_71001d0400((long)plVar11);
      (**(code **)(*plVar20 + 0x40))(plVar20,plVar19,plVar11);
      if ((int)plVar19[0x44] == 0) {
        *(undefined4 *)(plVar19 + 0x44) = 1;
        if (DAT_7104f577e8 <= *(ushort *)((long)plVar19 + 0x202)) goto LAB_7100217fd0;
LAB_7100217fb4:
        plVar22 = plVar14;
        plVar3 = (long *)plVar19[4];
      }
      else {
        if (*(ushort *)((long)plVar19 + 0x202) < DAT_7104f577e8) goto LAB_7100217fb4;
LAB_7100217fd0:
        plVar3 = (long *)plVar19[4];
        lVar21 = plVar19[5];
        if (lVar21 != 0) {
          *(long **)(lVar21 + 0x20) = plVar3;
        }
        plVar19[5] = 0;
        if (plVar3 != (long *)0x0) {
          plVar3[5] = lVar21;
        }
        plVar19[4] = 0;
        plVar1 = plVar19 + 1;
        iVar15 = (int)*plVar1;
        plVar22 = plVar3;
        if (plVar14 != plVar19) {
          plVar22 = plVar14;
        }
        iVar13 = (int)*plVar1 + -1;
        if (iVar15 != (int)*plVar1) {
          ClearExclusiveLocal();
          goto LAB_710021802c;
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
        while (cVar6 != '\0') {
LAB_710021802c:
          while( true ) {
            iVar16 = (int)*plVar1;
            iVar13 = iVar15 + -1;
            if (iVar16 == iVar15) break;
            ClearExclusiveLocal();
            iVar15 = iVar16;
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          iVar15 = iVar16;
          if (bVar7) {
            *(int *)plVar1 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        }
        if ((iVar13 == 0) && (*(char *)((long)plVar19 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar19 + 0xc) = 1;
          (**(code **)(*plVar19 + 8))(plVar19);
        }
      }
      plVar19 = plVar3;
      FUN_71001d05f0(param_5,plVar11[2]);
      plVar14 = plVar22;
    } while (plVar19 != (long *)0x0);
  }
  (**(code **)(*plVar11 + 8))(plVar11);
  plVar19 = plVar22;
joined_r0x0071002180c8:
  if (plVar19 != (long *)0x0) {
    while( true ) {
      plVar11 = (long *)plVar19[4];
      lVar21 = plVar19[5];
      if (lVar21 != 0) {
        *(long **)(lVar21 + 0x20) = plVar11;
      }
      plVar19[5] = 0;
      if (plVar11 == (long *)0x0) break;
      plVar11[5] = lVar21;
      plVar19[4] = 0;
      plVar19 = plVar11;
    }
    plVar19[4] = 0;
    return uVar18;
  }
  return uVar18;
}

