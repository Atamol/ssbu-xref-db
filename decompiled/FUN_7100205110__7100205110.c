// addr:      7100205110
// offset:    0x205110
// name:      FUN_7100205110
// mangled:   
// signature: undefined4 __cdecl FUN_7100205110(long param_1, long param_2)


/* WARNING: Removing unreachable block (ram,0x0071002052a0) */
/* WARNING: Removing unreachable block (ram,0x00710020528c) */

undefined4 FUN_7100205110(long param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined4 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  short *psVar16;
  
  plVar15 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100205184:
    if ((*plVar15 == 0) || (lVar9 = *(long *)(*plVar15 + 0x10), lVar9 == 0)) goto LAB_71002051b4;
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar8;
    if (uVar4 == 0) goto LAB_7100205184;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar15 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_7100205184;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002051b4:
    lVar9 = 0;
  }
  plVar13 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  plVar15 = (long *)(param_1 + 0x10);
  plVar11 = (long *)*plVar15;
  if (plVar11 == (long *)0x0) {
LAB_7100205218:
    if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x60)) {
      piVar2 = (int *)(param_2 + 8);
      iVar10 = *piVar2;
      if (iVar10 != *piVar2) {
        ClearExclusiveLocal();
        goto LAB_7100205268;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      while (cVar5 != '\0') {
LAB_7100205268:
        while (iVar3 = *piVar2, iVar3 != iVar10) {
          ClearExclusiveLocal();
          iVar10 = iVar3;
        }
        iVar1 = iVar10 + 1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        iVar10 = iVar3;
        if (bVar6) {
          *piVar2 = iVar1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      }
      if ((*(ushort *)(param_2 + 0x60) & 0xf) == 2) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      }
      if ((long *)*plVar15 == (long *)0x0) {
        plVar14 = (long *)*plVar15;
        plVar11 = plVar15;
      }
      else {
        plVar14 = (long *)*plVar15;
        plVar11 = (long *)(param_1 + 0x10);
        do {
          while (plVar15 = plVar14, 0 < (short)((short)plVar15[5] - *(short *)(param_1 + 0x30))) {
            plVar14 = (long *)*plVar15;
            plVar11 = plVar15;
            if ((long *)*plVar15 == (long *)0x0) {
              plVar14 = (long *)*plVar15;
              goto joined_r0x0071002053a0;
            }
          }
          if ((short)(*(short *)(param_1 + 0x30) - (short)plVar15[5]) < 1) break;
          plVar11 = plVar15 + 1;
          plVar14 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
        plVar14 = (long *)*plVar11;
      }
joined_r0x0071002053a0:
      if (plVar14 == (long *)0x0) {
        plVar14 = FUN_71001b1820(0x38);
        plVar14[4] = (long)&PTR_FUN_7104f59348;
        *(undefined2 *)(plVar14 + 5) = *(undefined2 *)(param_1 + 0x30);
        plVar14[6] = 0;
        *plVar14 = 0;
        plVar14[1] = 0;
        plVar14[2] = (long)plVar15;
        *plVar11 = (long)plVar14;
        plVar15 = plVar14;
        if (**(long **)(param_1 + 8) != 0) {
          *(long *)(param_1 + 8) = **(long **)(param_1 + 8);
          plVar15 = (long *)*plVar11;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  (*(long **)(param_1 + 0x10),plVar15);
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      }
      psVar16 = (short *)(param_1 + 0x30);
      plVar14[6] = param_2;
      *(short *)(param_2 + 0x70) = *psVar16;
      uVar12 = 1;
      *psVar16 = *psVar16 + 1;
      goto LAB_71002053dc;
    }
  }
  else {
    plVar14 = plVar15;
    do {
      sVar7 = *(short *)(param_1 + 0x30) - (short)plVar11[5];
      if (sVar7 < 1) {
        plVar14 = plVar11;
      }
      plVar11 = (long *)plVar11[0 < sVar7];
    } while (plVar11 != (long *)0x0);
    if ((plVar14 == plVar15) || (0 < (short)((short)plVar14[5] - *(short *)(param_1 + 0x30))))
    goto LAB_7100205218;
  }
  uVar12 = 0;
LAB_71002053dc:
  (**(code **)(*plVar13 + 0x20))(plVar13);
  return uVar12;
}

