// addr:      7100208e10
// offset:    0x208e10
// name:      FUN_7100208e10
// mangled:   
// signature: undefined __cdecl FUN_7100208e10(long param_1, long param_2, undefined8 * param_3)


/* WARNING: Removing unreachable block (ram,0x007100209328) */
/* WARNING: Removing unreachable block (ram,0x00710020933c) */

void FUN_7100208e10(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  short sVar7;
  bool bVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  uint *puVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  ulong uVar23;
  uint *puVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long lVar29;
  
  plVar17 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100208e90:
    if ((*plVar17 == 0) || (lVar12 = *(long *)(*plVar17 + 0x10), lVar12 == 0)) goto LAB_7100208ec0;
    lVar12 = *(long *)(lVar12 + 0x10);
  }
  else {
    puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar9;
    if (uVar3 == 0) goto LAB_7100208e90;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar17 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_7100208e90;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100208ec0:
    lVar12 = 0;
  }
  plVar25 = (long *)(lVar12 + 0x78);
  (**(code **)(*plVar25 + 0x10))(plVar25);
  plVar28 = (long *)(param_1 + 0x10);
  plVar17 = (long *)*plVar28;
  if (plVar17 == (long *)0x0) goto LAB_7100209370;
  plVar26 = plVar28;
  do {
    sVar7 = *(short *)(param_2 + 8) - (short)plVar17[5];
    if (sVar7 < 1) {
      plVar26 = plVar17;
    }
    plVar17 = (long *)plVar17[0 < sVar7];
  } while (plVar17 != (long *)0x0);
  if ((plVar26 == plVar28) || (0 < (short)((short)plVar26[5] - *(short *)(param_2 + 8))))
  goto LAB_7100209370;
  plVar17 = (long *)plVar26[6];
  uVar3 = *(uint *)(plVar17 + 0x46);
  if (uVar3 == 0) {
LAB_7100208f7c:
    *(undefined1 *)((long)plVar17 + 0x211) = 1;
    plVar13 = (long *)plVar26[1];
    plVar18 = plVar13;
    if (plVar13 != (long *)0x0) goto LAB_7100208f90;
LAB_71002091f0:
    plVar18 = plVar26 + 2;
    plVar27 = (long *)*plVar18;
    if ((long *)*plVar27 != plVar26) {
      do {
        lVar12 = *plVar18;
        plVar18 = (long *)(lVar12 + 0x10);
        plVar27 = (long *)*plVar18;
      } while (*plVar27 != lVar12);
      goto LAB_710020921c;
    }
LAB_7100209230:
    plVar13 = plVar26 + 2;
    plVar18 = (long *)*plVar13;
    if ((long *)*plVar18 != plVar26) {
      do {
        lVar12 = *plVar13;
        plVar13 = (long *)(lVar12 + 0x10);
        plVar18 = (long *)*plVar13;
      } while (*plVar18 != lVar12);
    }
  }
  else {
    plVar27 = param_3 + 1;
    plVar18 = (long *)*plVar27;
    plVar13 = plVar27;
    if (plVar18 == (long *)0x0) goto LAB_7100208f7c;
    do {
      bVar8 = *(uint *)((long)plVar18 + 0x1c) < uVar3;
      if (!bVar8) {
        plVar13 = plVar18;
      }
      plVar18 = (long *)plVar18[bVar8];
    } while (plVar18 != (long *)0x0);
    if (((plVar13 == plVar27) || (uVar3 < *(uint *)((long)plVar13 + 0x1c))) ||
       (iVar20 = (int)plVar13[4] + -1, *(int *)(plVar13 + 4) = iVar20, iVar20 != 0))
    goto LAB_7100208f7c;
    plVar13 = &DAT_71052af128;
    if (DAT_71052af1d8 != '\0') {
      puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar4 = *puVar9;
      if (uVar4 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar4) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x10);
      }
    }
    lVar12 = *(long *)(*plVar13 + 0x10);
    puVar9 = *(uint **)(lVar12 + 0x498);
    if (puVar9 == *(uint **)(lVar12 + 0x4a0)) {
      puVar10 = *(uint **)(lVar12 + 0x490);
      lVar29 = (long)puVar9 - (long)puVar10 >> 2;
      uVar23 = lVar29 + 1;
      if (uVar23 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar14 = (long)*(uint **)(lVar12 + 0x4a0) - (long)puVar10;
      if ((ulong)(lVar14 >> 2) < 0x1fffffffffffffff) {
        uVar15 = lVar14 >> 1;
        if (uVar23 <= uVar15) {
          uVar23 = uVar15;
        }
        if (uVar23 != 0) goto LAB_7100209064;
        uVar23 = 0;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        uVar23 = 0x3fffffffffffffff;
LAB_7100209064:
        puVar11 = FUN_71001b1820(uVar23 << 2);
        puVar10 = *(uint **)(lVar12 + 0x490);
        puVar9 = *(uint **)(lVar12 + 0x498);
      }
      puVar21 = (uint *)((long)puVar11 + lVar29 * 4);
      puVar22 = puVar21 + 1;
      *puVar21 = uVar3;
      if (puVar9 != puVar10) {
        uVar15 = (long)puVar9 + (-4 - (long)puVar10);
        uVar4 = ((uint)(uVar15 >> 2) & 0x3fffffff) + 1;
        puVar19 = puVar9;
        puVar24 = puVar21;
        if ((uVar4 & 3) != 0) {
          lVar29 = -((ulong)uVar4 & 3);
          do {
            puVar19 = puVar19 + -1;
            lVar29 = lVar29 + 1;
            puVar24 = puVar24 + -1;
            *puVar24 = *puVar19;
          } while (lVar29 != 0);
        }
        if (0xb < uVar15) {
          puVar24 = puVar24 + -2;
          do {
            puVar24[1] = puVar19[-1];
            *puVar24 = puVar19[-2];
            puVar24[-1] = puVar19[-3];
            puVar19 = puVar19 + -4;
            puVar24[-2] = *puVar19;
            puVar24 = puVar24 + -4;
          } while (puVar10 != puVar19);
        }
        puVar21 = (uint *)((long)puVar21 +
                          (~((long)puVar9 + (-4 - (long)puVar10)) & 0xfffffffffffffffcU));
      }
      *(uint **)(lVar12 + 0x490) = puVar21;
      *(uint **)(lVar12 + 0x498) = puVar22;
      *(ulong *)(lVar12 + 0x4a0) = (long)puVar11 + uVar23 * 4;
      if (puVar10 != (uint *)0x0) {
        FUN_71001b1870((long)puVar10);
      }
      plVar13 = (long *)*plVar27;
    }
    else {
      *puVar9 = uVar3;
      *(uint **)(lVar12 + 0x498) = puVar9 + 1;
      plVar13 = (long *)*plVar27;
    }
    plVar16 = plVar13;
    plVar18 = plVar27;
    if (plVar13 == (long *)0x0) goto LAB_7100208f7c;
    do {
      bVar8 = *(uint *)((long)plVar16 + 0x1c) < uVar3;
      if (!bVar8) {
        plVar18 = plVar16;
      }
      plVar1 = plVar16 + bVar8;
      plVar16 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
    if ((plVar18 == plVar27) || (uVar3 < *(uint *)((long)plVar18 + 0x1c))) goto LAB_7100208f7c;
    plVar27 = (long *)plVar18[1];
    if ((long *)plVar18[1] == (long *)0x0) {
      plVar27 = plVar18 + 2;
      plVar16 = (long *)*plVar27;
      if ((long *)*plVar16 != plVar18) {
        do {
          lVar12 = *plVar27;
          plVar27 = (long *)(lVar12 + 0x10);
          plVar16 = (long *)*plVar27;
        } while (*plVar16 != lVar12);
      }
    }
    else {
      do {
        plVar16 = plVar27;
        plVar27 = (long *)*plVar16;
      } while ((long *)*plVar16 != (long *)0x0);
    }
    if ((long *)*param_3 == plVar18) {
      *param_3 = plVar16;
    }
    param_3[2] = param_3[2] + -1;
    std::__tree_remove<std::__tree_node_base<void*>*>(plVar13,plVar18);
    FUN_71001b1870((long)plVar18);
    *(undefined1 *)((long)plVar17 + 0x211) = 1;
    plVar13 = (long *)plVar26[1];
    plVar18 = plVar13;
    if (plVar13 == (long *)0x0) goto LAB_71002091f0;
LAB_7100208f90:
    do {
      plVar27 = plVar18;
      plVar18 = (long *)*plVar27;
    } while ((long *)*plVar27 != (long *)0x0);
LAB_710020921c:
    if (plVar13 == (long *)0x0) goto LAB_7100209230;
    do {
      plVar18 = plVar13;
      plVar13 = (long *)*plVar18;
    } while ((long *)*plVar18 != (long *)0x0);
  }
  if (*(long **)(param_1 + 8) == plVar26) {
    *(long **)(param_1 + 8) = plVar18;
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>(*(long **)(param_1 + 0x10),plVar26);
  FUN_71001b1870((long)plVar26);
  if (*(short *)(param_2 + 8) == *(short *)(param_1 + 0x50)) {
    plVar26 = (long *)(param_1 + 0x30);
    if (plVar27 != plVar28) {
      plVar26 = plVar27 + 5;
    }
    *(short *)(param_1 + 0x50) = (short)*plVar26;
  }
  if ((*(ushort *)(plVar17 + 0xc) & 0xf) == 2) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
  }
  plVar28 = plVar17 + 1;
  iVar20 = (int)*plVar28;
  iVar6 = (int)*plVar28 + -1;
  if (iVar20 != (int)*plVar28) {
    ClearExclusiveLocal();
    goto LAB_7100209304;
  }
  cVar5 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar8) {
    *(int *)plVar28 = iVar6;
    cVar5 = ExclusiveMonitorsStatus();
  }
  while (cVar5 != '\0') {
LAB_7100209304:
    while( true ) {
      iVar2 = (int)*plVar28;
      iVar6 = iVar20 + -1;
      if (iVar2 == iVar20) break;
      ClearExclusiveLocal();
      iVar20 = iVar2;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    iVar20 = iVar2;
    if (bVar8) {
      *(int *)plVar28 = iVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
  }
  if ((iVar6 == 0) && (*(char *)((long)plVar17 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar17 + 0xc) = 1;
    (**(code **)(*plVar17 + 8))(plVar17);
  }
LAB_7100209370:
                    /* WARNING: Could not recover jumptable at 0x007100209398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar25 + 0x20))(plVar25);
  return;
}

