// addr:      7100239b00
// offset:    0x239b00
// name:      FUN_7100239b00
// mangled:   
// signature: undefined FUN_7100239b00(void)


/* WARNING: Removing unreachable block (ram,0x007100239c34) */
/* WARNING: Removing unreachable block (ram,0x007100239c48) */

void FUN_7100239b00(long param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = &DAT_71052af1a0;
  if (DAT_71052af1d8 == '\0') {
LAB_7100239b68:
    if (*plVar11 != 0) {
      lVar10 = *(long *)(*plVar11 + 0x10);
      goto LAB_7100239b94;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar8;
    if (uVar3 == 0) goto LAB_7100239b68;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x88);
      goto LAB_7100239b68;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar10 = 0;
LAB_7100239b94:
  plVar11 = (long *)(lVar10 + 0x30);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  lVar7 = *(long *)(lVar10 + 0x78) + -1;
  *(long *)(lVar10 + 0x78) = lVar7;
  if (lVar7 == 0) {
    FUN_7100246730(lVar10);
  }
  (**(code **)(*plVar11 + 0x20))(plVar11);
  plVar11 = *(long **)(param_1 + 0xc0);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    iVar9 = (int)*plVar1;
    iVar6 = (int)*plVar1 + -1;
    if (iVar9 != (int)*plVar1) {
      ClearExclusiveLocal();
      goto LAB_7100239c10;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    while (cVar4 != '\0') {
LAB_7100239c10:
      while( true ) {
        iVar2 = (int)*plVar1;
        iVar6 = iVar9 + -1;
        if (iVar2 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar2;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      iVar9 = iVar2;
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar6 == 0) && (*(char *)((long)plVar11 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar11 + 0xc) = 1;
      (**(code **)(*plVar11 + 8))();
    }
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  return;
}

