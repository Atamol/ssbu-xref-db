// addr:      71001e35c0
// offset:    0x1e35c0
// name:      FUN_71001e35c0
// mangled:   
// signature: undefined FUN_71001e35c0(void)


/* WARNING: Removing unreachable block (ram,0x0071001e36d8) */
/* WARNING: Removing unreachable block (ram,0x0071001e36ec) */

void FUN_71001e35c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e3628:
    if ((*plVar9 == 0) || (lVar6 = *(long *)(*plVar9 + 0x10), lVar6 == 0)) goto LAB_71001e3658;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar5;
    if (uVar2 == 0) goto LAB_71001e3628;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71001e3628;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001e3658:
    lVar6 = 0;
  }
  plVar10 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  plVar11 = (long *)*param_3;
  FUN_71001d6410((long)plVar11,3);
  plVar9 = plVar11 + 1;
  iVar8 = (int)*plVar9;
  iVar7 = (int)*plVar9 + -1;
  if (iVar8 == (int)*plVar9) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *(int *)plVar9 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_71001e36fc;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    while( true ) {
      iVar1 = (int)*plVar9;
      iVar7 = iVar8 + -1;
      if (iVar1 == iVar8) break;
      ClearExclusiveLocal();
      iVar8 = iVar1;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *(int *)plVar9 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    iVar8 = iVar1;
  } while (cVar3 != '\0');
LAB_71001e36fc:
  if ((iVar7 == 0) && (*(char *)((long)plVar11 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar11 + 0xc) = 1;
    (**(code **)(*plVar11 + 8))(plVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x0071001e3738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return;
}

