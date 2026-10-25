// addr:      71002383f0
// offset:    0x2383f0
// name:      FUN_71002383f0
// mangled:   
// signature: undefined __cdecl FUN_71002383f0(void)


void FUN_71002383f0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  
  FUN_71001d5a90();
  (**(code **)(DAT_71052af1e0 + 0x10))(&DAT_71052af1e0);
  plVar10 = &DAT_71052af180;
  if (DAT_71052af1d8 == '\0') {
LAB_7100238470:
    if ((*plVar10 != 0) && (*(long *)(*plVar10 + 0x10) != 0)) {
      plVar10 = &DAT_71052af180;
      if (DAT_71052af1d8 == '\0') {
LAB_71002384c4:
        lVar8 = 0;
        if (*plVar10 != 0) {
          lVar8 = *(long *)(*plVar10 + 0x10);
        }
      }
      else {
        puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar3 = *puVar6;
        if (uVar3 == 0) goto LAB_71002384c4;
        if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x68);
          goto LAB_71002384c4;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        lVar8 = 0;
      }
      piVar1 = (int *)(lVar8 + 8);
      iVar9 = *piVar1;
      if (iVar9 == *piVar1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_710023858c;
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        while (iVar2 = *piVar1, iVar2 != iVar9) {
          ClearExclusiveLocal();
          iVar9 = iVar2;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar9 = iVar2;
      } while (cVar4 != '\0');
      goto LAB_710023858c;
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar6;
    if (uVar3 == 0) goto LAB_7100238470;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x68);
      goto LAB_7100238470;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  puVar7 = FUN_71001af850(0x70);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_71002425c0(puVar7);
  }
LAB_710023858c:
                    /* WARNING: Could not recover jumptable at 0x0071002385a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_71052af1e0 + 0x20))(&DAT_71052af1e0);
  return;
}

