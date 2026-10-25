// addr:      71001e33f0
// offset:    0x1e33f0
// name:      FUN_71001e33f0
// mangled:   
// signature: undefined __cdecl FUN_71001e33f0(undefined8 param_1, undefined8 * param_2, undefined8 * param_3)


/* WARNING: Removing unreachable block (ram,0x0071001e354c) */
/* WARNING: Removing unreachable block (ram,0x0071001e3560) */

void FUN_71001e33f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e3460:
    if ((*plVar10 != 0) && (lVar8 = *(long *)(*plVar10 + 0x10), lVar8 != 0)) {
      lVar8 = *(long *)(lVar8 + 0x10);
      goto LAB_71001e3494;
    }
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_71001e3460;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71001e3460;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar8 = 0;
LAB_71001e3494:
  plVar10 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  plVar11 = (long *)*param_3;
  if ((int)plVar11[8] == 2) {
    local_48 = *param_2;
    local_40 = param_2[1];
    uStack_38 = param_2[2];
    (**(code **)(*plVar11 + 0x68))(plVar11,plVar11[0x13]);
    FUN_71001b4300((undefined4 *)(plVar11 + 0x19),(undefined4 *)&local_48);
    FUN_71001d6410((long)plVar11,3);
    plVar1 = plVar11 + 1;
    iVar9 = (int)*plVar1;
    iVar6 = (int)*plVar1 + -1;
    if (iVar9 != (int)*plVar1) {
      ClearExclusiveLocal();
      goto LAB_71001e3528;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    while (cVar4 != '\0') {
LAB_71001e3528:
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
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return;
}

