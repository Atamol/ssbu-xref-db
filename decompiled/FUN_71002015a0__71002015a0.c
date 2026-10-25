// addr:      71002015a0
// offset:    0x2015a0
// name:      FUN_71002015a0
// mangled:   
// signature: undefined __cdecl FUN_71002015a0(long param_1)


/* WARNING: Removing unreachable block (ram,0x0071002016cc) */
/* WARNING: Removing unreachable block (ram,0x0071002016e0) */

void FUN_71002015a0(long param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100201608:
    if ((*plVar8 != 0) && (lVar9 = *(long *)(*plVar8 + 0x10), lVar9 != 0)) {
      lVar9 = *(long *)(lVar9 + 0x10);
      goto LAB_710020163c;
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_7100201608;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_7100201608;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar9 = 0;
LAB_710020163c:
  plVar11 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  plVar8 = *(long **)(param_1 + 0x4e8);
  if (plVar8 != (long *)0x0) {
    *(short *)(param_1 + 0x500) = (short)plVar8[0xe] + 1;
    FUN_7100201730(*(long *)(param_1 + 8) + 0x40,plVar8);
    plVar7 = *(long **)(param_1 + 0x4e8);
    plVar8 = plVar7 + 1;
    iVar10 = (int)*plVar8;
    iVar5 = (int)*plVar8 + -1;
    if (iVar10 != (int)*plVar8) {
      ClearExclusiveLocal();
      goto LAB_71002016a8;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *(int *)plVar8 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_71002016a8:
      while( true ) {
        iVar1 = (int)*plVar8;
        iVar5 = iVar10 + -1;
        if (iVar1 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar1;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      iVar10 = iVar1;
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar5 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar7 + 0xc) = 1;
      (**(code **)(*plVar7 + 8))();
    }
    *(undefined8 *)(param_1 + 0x4e8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00710020172c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return;
}

