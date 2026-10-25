// addr:      71001d9ef0
// offset:    0x1d9ef0
// name:      FUN_71001d9ef0
// mangled:   
// signature: undefined __cdecl FUN_71001d9ef0(void)


void FUN_71001d9ef0(void)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  ulong local_48 [3];
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((((*plVar9 != 0) && (lVar7 = *(long *)(*plVar9 + 0x10), lVar7 != 0)) &&
      (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)) &&
     (*(long *)(*(long *)(lVar7 + 0x18) + 0x60) == *(long *)(*(long *)(lVar7 + 0x18) + 0x58))) {
    local_48[1] = 0;
    if (DAT_7104f54e20 == '\0') {
      FUN_71001b6a50((long *)local_48);
    }
    else {
      FUN_71001b68a0(local_48,0);
    }
    DAT_71052aeba8 = local_48[0];
    plVar9 = (long *)(lVar7 + 0x78);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar10 = *(long **)(lVar7 + 0x178);
    if (plVar10 != *(long **)(lVar7 + 0x188)) {
      do {
        plVar1 = plVar10 + 1;
        iVar5 = (int)*plVar1;
        if (iVar5 != (int)*plVar1) {
          ClearExclusiveLocal();
          iVar8 = iVar5;
          goto LAB_71001da044;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        while (iVar8 = iVar5, cVar3 != '\0') {
LAB_71001da044:
          while (iVar5 = (int)*plVar1, iVar5 != iVar8) {
            ClearExclusiveLocal();
            iVar8 = iVar5;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        }
        *(undefined4 *)(plVar10 + 8) = 3;
        local_48[2] = local_48[0];
        FUN_71001d9b70(lVar7,plVar10,(long *)(local_48 + 1),(long *)(local_48 + 2));
        *(undefined4 *)(plVar10 + 8) = 0;
        plVar10 = (long *)plVar10[2];
      } while (plVar10 != *(long **)(lVar7 + 0x188));
    }
    *(undefined1 *)(lVar7 + 0x1d0) = 0;
    (**(code **)(*(long *)(lVar7 + 0x78) + 0x20))(plVar9);
  }
  return;
}

