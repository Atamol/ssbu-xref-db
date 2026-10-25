// addr:      71001fd1d0
// offset:    0x1fd1d0
// name:      FUN_71001fd1d0
// mangled:   
// signature: long __cdecl FUN_71001fd1d0(long param_1, long * param_2, long param_3, uint param_4)


/* WARNING: Removing unreachable block (ram,0x0071001fde94) */
/* WARNING: Removing unreachable block (ram,0x0071001fd59c) */
/* WARNING: Removing unreachable block (ram,0x0071001fd588) */
/* WARNING: Removing unreachable block (ram,0x0071001fd4ec) */
/* WARNING: Removing unreachable block (ram,0x0071001fd4d8) */
/* WARNING: Removing unreachable block (ram,0x0071001fd748) */
/* WARNING: Removing unreachable block (ram,0x0071001fdbb8) */
/* WARNING: Removing unreachable block (ram,0x0071001fdba4) */
/* WARNING: Removing unreachable block (ram,0x0071001fde80) */
/* WARNING: Removing unreachable block (ram,0x0071001fd75c) */
/* WARNING: Type propagation algorithm not settling */

long FUN_71001fd1d0(long param_1,long *param_2,long param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  byte bVar8;
  undefined1 uVar9;
  byte bVar10;
  ushort uVar11;
  char cVar12;
  bool bVar13;
  uint *puVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  long *local_118;
  long *local_100;
  ulong local_c8;
  long *local_c0;
  undefined8 auStack_b8 [2];
  long local_a8;
  undefined8 auStack_98 [2];
  long local_88;
  long *local_78;
  long *local_70 [2];
  
  plVar24 = (long *)param_2[2];
  if (plVar24 == (long *)0x0) {
    return 0;
  }
  uVar27 = (ulong)param_4;
  bVar13 = FUN_7100216760((long)plVar24);
  if (!bVar13) {
    return 0;
  }
  bVar8 = *(byte *)((long)plVar24 + 0x42);
  if (DAT_71052af1d8 == '\0') {
LAB_71001fd268:
    lVar26 = (ulong)bVar8 * 0x2e8 + 0x71052af4f0;
  }
  else {
    puVar14 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar14 == 0) goto LAB_71001fd268;
    lVar26 = *(long *)(&DAT_71052af4e8 + (ulong)bVar8 * 0x2e8) + (ulong)*puVar14 * 0x168;
  }
  uVar5 = *(ulong *)(lVar26 + 0x50);
  uVar6 = *(ulong *)(lVar26 + 0x58);
  uVar9 = *(undefined1 *)((long)plVar24 + 0xa2);
  uVar3 = uVar5;
  if (uVar5 <= uVar6) {
    uVar3 = uVar6;
  }
  if (((*(ushort *)(plVar24 + 0xc) & 0xf) == 4) || (plVar24[0x27] == 0)) {
    if (*(char *)(param_1 + 0x1e8) != '\0') goto LAB_71001fd2cc;
LAB_71001fd3d0:
    plVar15 = FUN_71001af850(0x38);
    if (plVar15 != (long *)0x0) {
      *plVar15 = (long)&PTR_FUN_710523be40;
      *(undefined4 *)(plVar15 + 1) = 1;
      *(undefined1 *)((long)plVar15 + 0xc) = 0;
      *plVar15 = (long)&PTR_FUN_7104f56018;
      FUN_71001cf760((long)plVar15,uVar27,0);
    }
    plVar16 = FUN_71001af850(0x38);
    if (plVar16 != (long *)0x0) {
      *plVar16 = (long)&PTR_FUN_710523be40;
      *(undefined4 *)(plVar16 + 1) = 1;
      *(undefined1 *)((long)plVar16 + 0xc) = 0;
      *plVar16 = (long)&PTR_FUN_7104f56018;
      FUN_71001cf760((long)plVar16,uVar27,0);
    }
  }
  else {
    if ((*(char *)(param_1 + 0x1e8) == '\0') || ((*(byte *)(plVar24[0x27] + 0x30) >> 2 & 1) == 0))
    goto LAB_71001fd3d0;
LAB_71001fd2cc:
    plVar15 = FUN_71001b4580(0x38,0);
    if (plVar15 != (long *)0x0) {
      *plVar15 = (long)&PTR_FUN_710523be40;
      *(undefined4 *)(plVar15 + 1) = 1;
      *(undefined1 *)((long)plVar15 + 0xc) = 0;
      *plVar15 = (long)&PTR_FUN_7104f56018;
      FUN_71001cf760((long)plVar15,uVar27,4);
      *plVar15 = (long)&PTR_FUN_7104f59008;
    }
    plVar16 = FUN_71001b4580(0x38,0);
    if (plVar16 != (long *)0x0) {
      *plVar16 = (long)&PTR_FUN_710523be40;
      *(undefined4 *)(plVar16 + 1) = 1;
      *(undefined1 *)((long)plVar16 + 0xc) = 0;
      *plVar16 = (long)&PTR_FUN_7104f56018;
      FUN_71001cf760((long)plVar16,uVar27,4);
      *plVar16 = (long)&PTR_FUN_7104f59008;
    }
    if (plVar15 == (long *)0x0) {
LAB_71001fd3bc:
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
      goto LAB_71001fd3d0;
    }
    if (((plVar16 == (long *)0x0) || (plVar15[2] == 0)) || (plVar16[2] == 0)) {
      (**(code **)(*plVar15 + 8))(plVar15);
      goto LAB_71001fd3bc;
    }
  }
  FUN_71001d01c0(auStack_98,(long)plVar15);
  plVar25 = plVar15 + 1;
  iVar21 = (int)*plVar25;
  iVar20 = (int)*plVar25 + -1;
  if (iVar21 != (int)*plVar25) {
    ClearExclusiveLocal();
    goto LAB_71001fd4b4;
  }
  cVar12 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar25,0x10);
  if (bVar13) {
    *(int *)plVar25 = iVar20;
    cVar12 = ExclusiveMonitorsStatus();
  }
  while (cVar12 != '\0') {
LAB_71001fd4b4:
    while( true ) {
      iVar1 = (int)*plVar25;
      iVar20 = iVar21 + -1;
      if (iVar1 == iVar21) break;
      ClearExclusiveLocal();
      iVar21 = iVar1;
    }
    cVar12 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    iVar21 = iVar1;
    if (bVar13) {
      *(int *)plVar25 = iVar20;
      cVar12 = ExclusiveMonitorsStatus();
    }
  }
  if ((iVar20 == 0) && (*(char *)((long)plVar15 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar15 + 0xc) = 1;
    (**(code **)(*plVar15 + 8))(plVar15);
  }
  FUN_71001d01c0(auStack_b8,(long)plVar16);
  plVar15 = plVar16 + 1;
  iVar21 = (int)*plVar15;
  iVar20 = (int)*plVar15 + -1;
  if (iVar21 != (int)*plVar15) {
    ClearExclusiveLocal();
    goto LAB_71001fd564;
  }
  cVar12 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar13) {
    *(int *)plVar15 = iVar20;
    cVar12 = ExclusiveMonitorsStatus();
  }
  while (cVar12 != '\0') {
LAB_71001fd564:
    while( true ) {
      iVar1 = (int)*plVar15;
      iVar20 = iVar21 + -1;
      if (iVar1 == iVar21) break;
      ClearExclusiveLocal();
      iVar21 = iVar1;
    }
    cVar12 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    iVar21 = iVar1;
    if (bVar13) {
      *(int *)plVar15 = iVar20;
      cVar12 = ExclusiveMonitorsStatus();
    }
  }
  if ((iVar20 == 0) && (*(char *)((long)plVar16 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar16 + 0xc) = 1;
    (**(code **)(*plVar16 + 8))(plVar16);
  }
  plVar15 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fd624:
    lVar19 = 0;
    if (*plVar15 != 0) {
      lVar19 = *(long *)(*plVar15 + 0x10);
    }
  }
  else {
    puVar14 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar7 = *puVar14;
    if (uVar7 == 0) goto LAB_71001fd624;
    if ((ulong)uVar7 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar15 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar7 * 8) + 0x10);
      goto LAB_71001fd624;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    lVar19 = 0;
  }
  lVar4 = 0x1b0;
  if (1 < (int)plVar24[0x3d] - 1U) {
    lVar4 = 0x1a8;
  }
  plVar15 = &DAT_71052af488;
  if ((long *)param_2[4] == plVar24) {
    puVar23 = auStack_b8;
LAB_71001fddf0:
    *plVar15 = *plVar15 + 1;
    lVar26 = puVar23[2];
  }
  else {
    local_118 = (long *)0x0;
    plVar15 = *(long **)(lVar19 + lVar4);
    local_100 = (long *)0x0;
    uVar22 = 0;
LAB_71001fd6a4:
    do {
      FUN_71001d0400((long)auStack_98);
      (**(code **)(*plVar15 + 0x40))(plVar15,plVar24,auStack_98);
      if (uVar27 < (ulong)(*(long *)(local_88 + 0x18) + *(long *)(local_a8 + 0x18))) break;
      FUN_71001d05f0((long)auStack_b8,local_88);
      plVar16 = plVar24 + 1;
      iVar21 = (int)*plVar16;
      if (iVar21 != (int)*plVar16) {
        ClearExclusiveLocal();
        goto LAB_71001fd724;
      }
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar13) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
      while (cVar12 != '\0') {
LAB_71001fd724:
        while (iVar20 = (int)*plVar16, iVar20 != iVar21) {
          ClearExclusiveLocal();
          iVar21 = iVar20;
        }
        iVar1 = iVar21 + 1;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        iVar21 = iVar20;
        if (bVar13) {
          *(int *)plVar16 = iVar1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      }
      local_c0 = plVar24;
      (**(code **)(*param_2 + 0x28))(local_70,param_2,&local_c0);
      if (((((plVar24[0x43] != 0) && (DAT_71052af481 != '\0')) &&
           (uVar11 = *(ushort *)(plVar24 + 0xc), (uVar11 & 0xf) == 2)) &&
          (*(char *)((long)plVar24 + 0x42) == '\x01')) &&
         (((uVar11 & 0x30) != 0 || (DAT_7104f577cd != '\0')))) {
        if (((((uVar11 & 0x30) == 0) || ((uVar11 & 0x10) == 0 && DAT_7104f577cc != '\0')) &&
            (((*(char *)((long)plVar24 + 0x211) == '\0' &&
              (local_118 = plVar24, local_100 = plVar24, plVar24[3] == 0)) && (plVar24[2] == 0))))
           && (*(long **)(param_1 + 0x1c8) != plVar24)) {
          plVar25 = plVar24 + 1;
          iVar21 = (int)*plVar25;
          if (iVar21 != (int)*plVar25) {
            ClearExclusiveLocal();
            iVar20 = iVar21;
            goto LAB_71001fd860;
          }
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar13) {
            *(int *)plVar25 = (int)*plVar25 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
          while (iVar20 = iVar21, cVar12 != '\0') {
LAB_71001fd860:
            while (iVar21 = (int)*plVar25, iVar21 != iVar20) {
              ClearExclusiveLocal();
              iVar20 = iVar21;
            }
            cVar12 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar13) {
              *(int *)plVar25 = iVar20 + 1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          }
          if (*(long *)(param_1 + 0x1c8) == *(long *)(param_1 + 0x1d8)) {
            *(long **)(param_1 + 0x1c8) = plVar24;
          }
          else {
            *(long **)(*(long *)(param_1 + 0x1d0) + 0x10) = plVar24;
            plVar24[3] = *(long *)(param_1 + 0x1d0);
          }
          *(long **)(param_1 + 0x1d0) = plVar24;
          *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1e0) + 1;
        }
      }
      uVar22 = uVar22 + 1;
      if ((uVar3 < uVar22) || (*(char *)(lVar26 + 0x40) == '\0')) {
        plVar25 = (long *)param_2[4];
      }
      else {
        plVar25 = local_70[0];
        if ((long *)param_2[4] != local_70[0]) {
          if (uVar6 < uVar22) {
            do {
              if ((*(ushort *)(plVar24 + 0xc) & 0xf | 4) != 7) {
                bVar10 = *(byte *)((long)plVar24 + 0x42);
                if (DAT_71052af1d8 == '\0') {
LAB_71001fd9fc:
                  cVar12 = (&DAT_71052af530)[(ulong)bVar10 * 0x2e8];
                }
                else {
                  puVar14 = (uint *)FUN_7101717960(DAT_71052af1d0);
                  if (*puVar14 == 0) goto LAB_71001fd9fc;
                  cVar12 = *(char *)(*(long *)(&DAT_71052af4e8 + (ulong)bVar10 * 0x2e8) +
                                     (ulong)*puVar14 * 0x168 + 0x40);
                }
                if (((cVar12 != '\0') &&
                    (*(char *)((long)plVar25 + 0xa2) == *(char *)((long)plVar24 + 0xa2))) &&
                   (*(short *)((long)plVar25 + 0xac) == *(short *)((long)plVar24 + 0xac))) {
                  if (((*(int *)(DAT_71052af448 + 8) != 1) ||
                      ((*(byte *)((long)plVar25 + 0x61) >> 1 & 1) == 0)) ||
                     ((*(byte *)((long)plVar24 + 0x61) >> 1 & 1) == 0)) {
                    uVar17 = FUN_71001beb00((long)(plVar25 + 0x28));
                    uVar18 = FUN_71001beb00((long)(plVar24 + 0x28));
                    if ((uVar17 != uVar18) || ((int)plVar25[0x39] != (int)plVar24[0x39]))
                    goto LAB_71001fda24;
                  }
                  if (((*(byte *)(plVar25 + 0xc) & 0x30) == 0) && (uVar22 <= uVar5)) break;
                }
              }
LAB_71001fda24:
              plVar25 = (long *)plVar25[2];
            } while ((long *)param_2[4] != plVar25);
          }
          else {
            do {
              if ((*(ushort *)(plVar24 + 0xc) & 0xf | 4) != 7) {
                bVar10 = *(byte *)((long)plVar24 + 0x42);
                if (DAT_71052af1d8 == '\0') {
LAB_71001fdb0c:
                  cVar12 = (&DAT_71052af530)[(ulong)bVar10 * 0x2e8];
                }
                else {
                  puVar14 = (uint *)FUN_7101717960(DAT_71052af1d0);
                  if (*puVar14 == 0) goto LAB_71001fdb0c;
                  cVar12 = *(char *)(*(long *)(&DAT_71052af4e8 + (ulong)bVar10 * 0x2e8) +
                                     (ulong)*puVar14 * 0x168 + 0x40);
                }
                if (((cVar12 != '\0') &&
                    (*(char *)((long)plVar25 + 0xa2) == *(char *)((long)plVar24 + 0xa2))) &&
                   (*(short *)((long)plVar25 + 0xac) == *(short *)((long)plVar24 + 0xac))) {
                  if (((*(int *)(DAT_71052af448 + 8) != 1) ||
                      ((*(byte *)((long)plVar25 + 0x61) >> 1 & 1) == 0)) ||
                     ((*(byte *)((long)plVar24 + 0x61) >> 1 & 1) == 0)) {
                    uVar17 = FUN_71001beb00((long)(plVar25 + 0x28));
                    uVar18 = FUN_71001beb00((long)(plVar24 + 0x28));
                    if ((uVar17 != uVar18) || ((int)plVar25[0x39] != (int)plVar24[0x39]))
                    goto LAB_71001fdb34;
                  }
                  if ((*(byte *)(plVar25 + 0xc) & 0x30) != 0 || uVar22 <= uVar5) break;
                }
              }
LAB_71001fdb34:
              plVar25 = (long *)plVar25[2];
            } while ((long *)param_2[4] != plVar25);
          }
        }
      }
      iVar21 = (int)*plVar16;
      iVar20 = (int)*plVar16 + -1;
      if (iVar21 != (int)*plVar16) {
        ClearExclusiveLocal();
        goto LAB_71001fdb80;
      }
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar13) {
        *(int *)plVar16 = iVar20;
        cVar12 = ExclusiveMonitorsStatus();
      }
      while (cVar12 != '\0') {
LAB_71001fdb80:
        while( true ) {
          iVar1 = (int)*plVar16;
          iVar20 = iVar21 + -1;
          if (iVar1 == iVar21) break;
          ClearExclusiveLocal();
          iVar21 = iVar1;
        }
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        iVar21 = iVar1;
        if (bVar13) {
          *(int *)plVar16 = iVar20;
          cVar12 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar20 != 0) || (*(char *)((long)plVar24 + 0xc) != '\0')) {
        plVar24 = plVar25;
        if ((long *)param_2[4] == plVar25) break;
        goto LAB_71001fd6a4;
      }
      *(undefined1 *)((long)plVar24 + 0xc) = 1;
      (**(code **)(*plVar24 + 8))(plVar24);
      plVar24 = plVar25;
    } while ((long *)param_2[4] != plVar25);
    plVar15 = &DAT_71052af488;
    puVar23 = auStack_b8;
    if ((local_100 == (long *)0x0) || (DAT_71052af481 == '\0')) goto LAB_71001fddf0;
    if (DAT_7104f577f8 <= uVar27) {
      uVar27 = DAT_7104f577f8;
    }
    uVar27 = uVar27 - *(long *)(local_a8 + 0x18);
    if (uVar27 == 0) {
      uVar27 = 0;
LAB_71001fdd08:
      puVar23 = auStack_b8;
    }
    else {
      FUN_71001d0400((long)auStack_98);
      FUN_71001b12a0((ulong *)local_70);
      local_c8 = (long)local_70[0] - (long)DAT_7104f577d0;
      if (local_70[0] < (long *)(long)DAT_7104f577d0 || local_c8 == 0) {
        local_c8 = 0;
      }
      else if (DAT_7104f577d0 < 1) {
        local_c8 = (long)local_70[0] + (long)-DAT_7104f577d0;
      }
      uVar27 = FUN_7100217710(param_3,(long)local_100,&local_c8,uVar27,(long)auStack_98,(uint)bVar8)
      ;
      if (*(long *)(local_88 + 0x18) == 0) goto LAB_71001fdd08;
      puVar23 = auStack_98;
      FUN_71001cb870(local_88,(void *)(*(long *)(local_a8 + 0x10) + *(long *)(local_a8 + 0x28)),
                     *(size_t *)(local_a8 + 0x18),0xffffffffffffffff);
    }
    FUN_7100218130(param_3,(long *)(param_1 + 0x1b8));
    if (((int)local_100[0x44] != 2) &&
       ((param_2[2] == 0 || (bVar13 = FUN_7100216760(param_2[2]), !bVar13)))) {
      FUN_71001fcd90(param_2,param_3,*(short *)((long)local_118 + 0xac));
    }
    plVar24 = *(long **)(param_1 + 0x1c8);
    if (*(long **)(param_1 + 0x1d8) != *(long **)(param_1 + 0x1c8)) {
      do {
        local_78 = plVar24;
        (**(code **)(*(long *)(param_1 + 0x1b8) + 0x28))
                  (local_70,(long *)(param_1 + 0x1b8),&local_78);
        plVar24 = local_70[0];
      } while (*(long **)(param_1 + 0x1d8) != local_70[0]);
    }
    lVar26 = 8;
    plVar24 = &DAT_71052af490;
    if (uVar27 != 0) {
      lVar26 = 0x10;
      plVar24 = &DAT_71052af498;
    }
    *(long *)((long)&DAT_71052af488 + lVar26) = *plVar24 + 1;
    if (DAT_7104f577d8 >> 1 <= uVar27) {
      DAT_71052af4a0 = DAT_71052af4a0 + 1;
    }
    if (DAT_7104f577d8 <= uVar27) {
      plVar15 = &DAT_71052af4a8;
      goto LAB_71001fddf0;
    }
    lVar26 = puVar23[2];
  }
  if (lVar26 != 0) {
    DAT_71052af4b0 = DAT_71052af4b0 + 1;
    *(undefined1 *)(lVar26 + 0x31) = uVar9;
    piVar2 = (int *)(lVar26 + 8);
    iVar21 = *piVar2;
    if (iVar21 == *piVar2) {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar13) {
        *piVar2 = *piVar2 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
      if (cVar12 == '\0') goto LAB_71001fdea4;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      while (iVar20 = *piVar2, iVar20 != iVar21) {
        ClearExclusiveLocal();
        iVar21 = iVar20;
      }
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar13) {
        *piVar2 = iVar21 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
      iVar21 = iVar20;
    } while (cVar12 != '\0');
  }
LAB_71001fdea4:
  FUN_71001d0250(auStack_b8);
  FUN_71001d0250(auStack_98);
  return lVar26;
}

