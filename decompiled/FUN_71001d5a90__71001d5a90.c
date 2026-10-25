// addr:      71001d5a90
// offset:    0x1d5a90
// name:      FUN_71001d5a90
// mangled:   
// signature: undefined __cdecl FUN_71001d5a90(void)


void FUN_71001d5a90(void)

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
  
  nn::os::LockMutex((MutexType *)&DAT_71052af1f0);
  FUN_71001b87f0();
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d5b08:
    if ((*plVar10 != 0) && (*(long *)(*plVar10 + 0x10) != 0)) {
      plVar10 = &DAT_71052af138;
      if (DAT_71052af1d8 == '\0') {
LAB_71001d5b5c:
        lVar8 = 0;
        if (*plVar10 != 0) {
          lVar8 = *(long *)(*plVar10 + 0x10);
        }
      }
      else {
        puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar3 = *puVar6;
        if (uVar3 == 0) goto LAB_71001d5b5c;
        if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
          goto LAB_71001d5b5c;
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
        if (cVar4 == '\0') goto LAB_71001d5c24;
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
      goto LAB_71001d5c24;
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar6;
    if (uVar3 == 0) goto LAB_71001d5b08;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71001d5b08;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  puVar7 = FUN_71001af850(0xc0);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_71001d46c0(puVar7);
  }
LAB_71001d5c24:
  nn::os::UnlockMutex((MutexType *)&DAT_71052af1f0);
  return;
}

