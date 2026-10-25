// addr:      7100238f30
// offset:    0x238f30
// name:      FUN_7100238f30
// mangled:   
// signature: undefined __cdecl FUN_7100238f30(undefined8 * param_1, long param_2)


/* WARNING: Removing unreachable block (ram,0x007100239194) */
/* WARNING: Removing unreachable block (ram,0x0071002390d8) */
/* WARNING: Removing unreachable block (ram,0x0071002390ec) */
/* WARNING: Removing unreachable block (ram,0x007100239180) */

void FUN_7100238f30(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  long *plVar17;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_34;
  
  plVar16 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100238fa4:
    if ((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0x10), lVar13 == 0)) goto LAB_7100238fd4;
    lVar13 = *(long *)(lVar13 + 0x10);
  }
  else {
    puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar9;
    if (uVar4 == 0) goto LAB_7100238fa4;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar16 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_7100238fa4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100238fd4:
    lVar13 = 0;
  }
  plVar16 = (long *)(lVar13 + 0x78);
  (**(code **)(*plVar16 + 0x10))(plVar16);
  if ((*(long *)(param_2 + 0x100) == 0) || (*(int *)(*(long *)(param_2 + 0x100) + 0x40) == 5)) {
    if ((*(long *)(param_2 + 0xf8) != 0) && (*(int *)(*(long *)(param_2 + 0xf8) + 0x40) == 5)) {
      lVar13 = *(long *)(param_2 + 0xc0);
      if (lVar13 == 0) {
LAB_71002391f8:
        uVar8 = 4;
      }
      else {
        if (((*(long *)(lVar13 + 0x78) != 0) &&
            (lVar14 = *(long *)(*(long *)(lVar13 + 0x78) + 0x20), lVar14 != 0)) &&
           (plVar17 = *(long **)(lVar14 + 0x50), plVar17 != (long *)0x0)) {
          (**(code **)(*plVar17 + 0x40))(plVar17,lVar13);
          plVar10 = (long *)plVar17[2];
          if (plVar10 != (long *)0x0) {
            plVar2 = plVar10 + 1;
            iVar15 = (int)*plVar2;
            iVar7 = (int)*plVar2 + -1;
            if (iVar15 != (int)*plVar2) {
              ClearExclusiveLocal();
              goto LAB_71002390b4;
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
            while (cVar5 != '\0') {
LAB_71002390b4:
              while( true ) {
                iVar1 = (int)*plVar2;
                iVar7 = iVar15 + -1;
                if (iVar1 == iVar15) break;
                ClearExclusiveLocal();
                iVar15 = iVar1;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              iVar15 = iVar1;
              if (bVar6) {
                *(int *)plVar2 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            }
            if ((iVar7 == 0) && (*(char *)((long)plVar10 + 0xc) == '\0')) {
              *(undefined1 *)((long)plVar10 + 0xc) = 1;
              (**(code **)(*plVar10 + 8))();
            }
            plVar17[2] = 0;
          }
          plVar17[2] = lVar13;
          piVar3 = (int *)(lVar13 + 8);
          iVar15 = *piVar3;
          if (iVar15 != *piVar3) {
            ClearExclusiveLocal();
            goto LAB_710023915c;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = *piVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          while (cVar5 != '\0') {
LAB_710023915c:
            while (iVar7 = *piVar3, iVar7 != iVar15) {
              ClearExclusiveLocal();
              iVar15 = iVar7;
            }
            iVar1 = iVar15 + 1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            iVar15 = iVar7;
            if (bVar6) {
              *piVar3 = iVar1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          }
          uVar11 = (**(code **)(*plVar17 + 0x28))(plVar17);
          if ((((uVar11 & 1) != 0) &&
              (uVar11 = (**(code **)(*plVar17 + 0x30))(plVar17), (uVar11 & 1) == 0)) &&
             (*(long *)(plVar17[2] + 0x10) != 0)) {
            local_44 = 0x10001;
            puVar12 = &local_44;
            goto LAB_710023909c;
          }
        }
        if (*(long *)(param_2 + 0xc0) == 0) goto LAB_71002391f8;
        uVar8 = *(undefined4 *)(*(long *)(param_2 + 0xc0) + 0x90);
      }
      FUN_71001e1830(param_1,uVar8);
      goto LAB_7100239204;
    }
    local_38 = 0x800300d2;
    puVar12 = &local_38;
  }
  else {
    puVar12 = &local_34;
    local_34 = 0x800300d2;
  }
LAB_710023909c:
  FUN_71001b4200((undefined4 *)param_1,puVar12);
LAB_7100239204:
  (**(code **)(*plVar16 + 0x20))(plVar16);
  return;
}

