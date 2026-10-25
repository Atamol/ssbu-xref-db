// addr:      71002385b0
// offset:    0x2385b0
// name:      FUN_71002385b0
// mangled:   
// signature: undefined __cdecl FUN_71002385b0(void)


void FUN_71002385b0(void)

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
  
  (**(code **)(DAT_71052af1e0 + 0x10))(&DAT_71052af1e0);
  plVar10 = &DAT_71052af1a0;
  if (DAT_71052af1d8 == '\0') {
LAB_710023862c:
    if ((*plVar10 != 0) && (*(long *)(*plVar10 + 0x10) != 0)) {
      plVar10 = &DAT_71052af1a0;
      if (DAT_71052af1d8 == '\0') {
LAB_7100238680:
        lVar8 = 0;
        if (*plVar10 != 0) {
          lVar8 = *(long *)(*plVar10 + 0x10);
        }
      }
      else {
        puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar3 = *puVar6;
        if (uVar3 == 0) goto LAB_7100238680;
        if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x88);
          goto LAB_7100238680;
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
        if (cVar4 == '\0') goto LAB_71002387e8;
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
      goto LAB_71002387e8;
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar6;
    if (uVar3 == 0) goto LAB_710023862c;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x88);
      goto LAB_710023862c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  puVar7 = FUN_71001af850(0xe0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_710523be40;
    *(undefined4 *)(puVar7 + 1) = 1;
    *(undefined1 *)((long)puVar7 + 0xc) = 0;
    *puVar7 = &PTR_FUN_7104f5c2e8;
    FUN_71001d72e0(puVar7 + 2,0x10);
    FUN_71001b0350(puVar7 + 6,0x20000000,1);
    puVar7[0xf] = 0;
    *(undefined2 *)(puVar7 + 0x10) = 0;
    puVar7[0x11] = &PTR_FUN_710509cc08;
    *(undefined1 *)(puVar7 + 0x12) = 0;
    *(undefined2 *)(puVar7 + 0x16) = 0;
    puVar7[0x17] = &PTR_FUN_710509cc08;
    puVar7[0x14] = puVar7 + 0x12;
    puVar7[0x15] = 0x10;
    *(undefined1 *)(puVar7 + 0x18) = 0;
    puVar7[0x1a] = puVar7 + 0x18;
    puVar7[0x1b] = 0x10;
    FUN_71001d4cb0((long)(puVar7 + 2),puVar7);
    FUN_7100246730((long)puVar7);
  }
LAB_71002387e8:
                    /* WARNING: Could not recover jumptable at 0x007100238800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_71052af1e0 + 0x20))(&DAT_71052af1e0);
  return;
}

