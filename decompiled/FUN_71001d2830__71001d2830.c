// addr:      71001d2830
// offset:    0x1d2830
// name:      FUN_71001d2830
// mangled:   
// signature: undefined __cdecl FUN_71001d2830(long param_1)


/* WARNING: Removing unreachable block (ram,0x0071001d2960) */
/* WARNING: Removing unreachable block (ram,0x0071001d2974) */

void FUN_71001d2830(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d2898:
    if ((*plVar10 == 0) || (lVar7 = *(long *)(*plVar10 + 0x10), lVar7 == 0)) goto LAB_71001d28d4;
    uVar4 = FUN_71001d3150(*(long *)(lVar7 + 0x10),*(long **)(param_1 + 0x80));
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar5;
    if (uVar4 == 0) goto LAB_71001d2898;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_71001d2898;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001d28d4:
    uVar4 = FUN_71001d3150(0,*(long **)(param_1 + 0x80));
  }
  if ((uVar4 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x80);
    *(undefined4 *)(lVar7 + 0x40) = 5;
    if (*(code **)(lVar7 + 0x28) != (code *)0x0) {
      (**(code **)(lVar7 + 0x28))(lVar7,lVar7 + 0x30);
    }
  }
  plVar6 = *(long **)(param_1 + 0x80);
  plVar10 = plVar6 + 1;
  iVar9 = (int)*plVar10;
  iVar8 = (int)*plVar10 + -1;
  if (iVar9 == (int)*plVar10) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *(int *)plVar10 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_71001d2984;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    while( true ) {
      iVar1 = (int)*plVar10;
      iVar8 = iVar9 + -1;
      if (iVar1 == iVar9) break;
      ClearExclusiveLocal();
      iVar9 = iVar1;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *(int *)plVar10 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
    iVar9 = iVar1;
  } while (cVar2 != '\0');
LAB_71001d2984:
  if ((iVar8 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar6 + 0xc) = 1;
    (**(code **)(*plVar6 + 8))();
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}

