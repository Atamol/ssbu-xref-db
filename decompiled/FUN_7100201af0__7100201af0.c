// addr:      7100201af0
// offset:    0x201af0
// name:      FUN_7100201af0
// mangled:   
// signature: undefined __cdecl FUN_7100201af0(long param_1)


/* WARNING: Removing unreachable block (ram,0x007100201c28) */
/* WARNING: Removing unreachable block (ram,0x007100201c14) */

void FUN_7100201af0(long param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  
  plVar12 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100201b5c:
    if ((*plVar12 != 0) && (lVar8 = *(long *)(*plVar12 + 0x10), lVar8 != 0)) {
      lVar8 = *(long *)(lVar8 + 0x10);
      goto LAB_7100201b90;
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_7100201b5c;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_7100201b5c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar8 = 0;
LAB_7100201b90:
  plVar13 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  plVar12 = *(long **)(param_1 + 8);
  do {
    if ((long *)(param_1 + 0x10) == plVar12) {
      *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_1 + 0x30);
      *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x007100201d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x20))(plVar13);
      return;
    }
    plVar7 = (long *)plVar12[6];
    plVar10 = plVar7 + 1;
    iVar11 = (int)*plVar10;
    iVar5 = (int)*plVar10 + -1;
    if (iVar11 != (int)*plVar10) {
      ClearExclusiveLocal();
      goto LAB_7100201bf0;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *(int *)plVar10 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_7100201bf0:
      while( true ) {
        iVar1 = (int)*plVar10;
        iVar5 = iVar11 + -1;
        if (iVar1 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar1;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      iVar11 = iVar1;
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar5 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar7 + 0xc) = 1;
      (**(code **)(*plVar7 + 8))();
      plVar10 = (long *)plVar12[1];
      if ((long *)plVar12[1] != (long *)0x0) goto LAB_7100201c4c;
LAB_7100201c74:
      plVar10 = plVar12 + 2;
      plVar7 = (long *)*plVar10;
      if ((long *)*plVar7 != plVar12) {
        do {
          lVar8 = *plVar10;
          plVar10 = (long *)(lVar8 + 0x10);
          plVar7 = (long *)*plVar10;
        } while (*plVar7 != lVar8);
      }
    }
    else {
      plVar10 = (long *)plVar12[1];
      if ((long *)plVar12[1] == (long *)0x0) goto LAB_7100201c74;
LAB_7100201c4c:
      do {
        plVar7 = plVar10;
        plVar10 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
    plVar10 = (long *)plVar12[1];
    if ((long *)plVar12[1] == (long *)0x0) {
      plVar10 = plVar12 + 2;
      plVar9 = (long *)*plVar10;
      if ((long *)*plVar9 != plVar12) {
        do {
          lVar8 = *plVar10;
          plVar10 = (long *)(lVar8 + 0x10);
          plVar9 = (long *)*plVar10;
        } while (*plVar9 != lVar8);
      }
    }
    else {
      do {
        plVar9 = plVar10;
        plVar10 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
    if (*(long **)(param_1 + 8) == plVar12) {
      *(long **)(param_1 + 8) = plVar9;
    }
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
    std::__tree_remove<std::__tree_node_base<void*>*>(*(long **)(param_1 + 0x10),plVar12);
    FUN_71001b1870((long)plVar12);
    plVar12 = plVar7;
  } while( true );
}

