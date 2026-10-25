// addr:      71002aac90
// offset:    0x2aac90
// name:      FUN_71002aac90
// mangled:   
// signature: undefined4 __cdecl FUN_71002aac90(long param_1)


/* WARNING: Removing unreachable block (ram,0x0071002aadc0) */
/* WARNING: Removing unreachable block (ram,0x0071002aadd4) */

undefined4 FUN_71002aac90(long param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  long *plVar12;
  
  plVar12 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002aacf8:
    if ((*plVar12 != 0) && (lVar9 = *(long *)(*plVar12 + 0x10), lVar9 != 0)) {
      lVar9 = *(long *)(lVar9 + 0x10);
      goto LAB_71002aad2c;
    }
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_71002aacf8;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71002aacf8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar9 = 0;
LAB_71002aad2c:
  plVar12 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  lVar9 = *(long *)(param_1 + 0x38);
  if (lVar9 == 0) {
    uVar11 = 0;
  }
  else {
    FUN_71001d0a10((long *)(lVar9 + 0x100));
    FUN_71001d6410(lVar9,5);
    plVar8 = *(long **)(param_1 + 0x38);
    plVar1 = plVar8 + 1;
    iVar10 = (int)*plVar1;
    iVar6 = (int)*plVar1 + -1;
    if (iVar10 != (int)*plVar1) {
      ClearExclusiveLocal();
      goto LAB_71002aad9c;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    while (cVar4 != '\0') {
LAB_71002aad9c:
      while( true ) {
        iVar2 = (int)*plVar1;
        iVar6 = iVar10 + -1;
        if (iVar2 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar2;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      iVar10 = iVar2;
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar6 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar8 + 0xc) = 1;
      (**(code **)(*plVar8 + 8))();
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar11 = 1;
  }
  (**(code **)(*plVar12 + 0x20))(plVar12);
  return uVar11;
}

