// addr:      71002ab750
// offset:    0x2ab750
// name:      FUN_71002ab750
// mangled:   
// signature: bool __cdecl FUN_71002ab750(undefined8 param_1, long * param_2, long param_3, long param_4, undefined8 param_5, long param_6, undefined4 param_7)


/* WARNING: Removing unreachable block (ram,0x0071002ab8cc) */
/* WARNING: Removing unreachable block (ram,0x0071002ab8e0) */

bool FUN_71002ab750(undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
                   long param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  code *pcVar10;
  int iVar11;
  long *plVar12;
  int local_68 [6];
  undefined4 local_44;
  
  bVar5 = FUN_71001ccd00(param_2);
  if (!bVar5) {
    local_44 = 0x8001000d;
    FUN_71001b4200(local_68,&local_44);
    pcVar10 = FUN_710170d030;
    if (local_68[0] < 0) {
      pcVar10 = (code *)0x0;
    }
    return pcVar10 != (code *)0x0;
  }
  plVar6 = FUN_71001af850(0x240);
  if (plVar6 != (long *)0x0) {
    FUN_710029f7b0(plVar6);
  }
  uVar7 = FUN_710029fc90((long)plVar6,(int)param_2[3],param_3,param_4,param_5,param_6,param_7);
  if ((uVar7 & 1) == 0) {
    plVar12 = plVar6 + 1;
    iVar11 = (int)*plVar12;
    iVar4 = (int)*plVar12 + -1;
    if (iVar11 != (int)*plVar12) {
      ClearExclusiveLocal();
      goto LAB_71002ab8a8;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *(int *)plVar12 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_71002ab8a8:
      while( true ) {
        iVar1 = (int)*plVar12;
        iVar4 = iVar11 + -1;
        if (iVar1 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar1;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      iVar11 = iVar1;
      if (bVar5) {
        *(int *)plVar12 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar4 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar6 + 0xc) = 1;
      (**(code **)(*plVar6 + 8))(plVar6);
      return false;
    }
    return false;
  }
  plVar12 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002ab820:
    if ((*plVar12 != 0) && (lVar9 = *(long *)(*plVar12 + 0x10), lVar9 != 0)) {
      lVar9 = *(long *)(lVar9 + 0x10);
      goto LAB_71002ab920;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar8;
    if (uVar2 == 0) goto LAB_71002ab820;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71002ab820;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar9 = 0;
LAB_71002ab920:
  FUN_71001ccdf0(lVar9,(long)plVar6,0);
  return true;
}

