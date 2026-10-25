// addr:      71001ffb10
// offset:    0x1ffb10
// name:      FUN_71001ffb10
// mangled:   
// signature: undefined __cdecl FUN_71001ffb10(long param_1)


/* WARNING: Removing unreachable block (ram,0x0071001ffc30) */
/* WARNING: Removing unreachable block (ram,0x0071001ffc44) */

void FUN_71001ffb10(long param_1)

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
  long *plVar11;
  
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001ffb78:
    if ((*plVar11 != 0) && (lVar9 = *(long *)(*plVar11 + 0x10), lVar9 != 0)) {
      lVar9 = *(long *)(lVar9 + 0x10);
      goto LAB_71001ffbac;
    }
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_71001ffb78;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71001ffb78;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar9 = 0;
LAB_71001ffbac:
  plVar11 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  if (*(long **)(param_1 + 0xf8) != (long *)0x0) {
    FUN_7100201730(*(long *)(param_1 + 8) + 0x40,*(long **)(param_1 + 0xf8));
    plVar8 = *(long **)(param_1 + 0xf8);
    plVar1 = plVar8 + 1;
    iVar10 = (int)*plVar1;
    iVar6 = (int)*plVar1 + -1;
    if (iVar10 != (int)*plVar1) {
      ClearExclusiveLocal();
      goto LAB_71001ffc0c;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    while (cVar4 != '\0') {
LAB_71001ffc0c:
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
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0071001ffc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return;
}

