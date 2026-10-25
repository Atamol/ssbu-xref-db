// addr:      710029cb20
// offset:    0x29cb20
// name:      FUN_710029cb20
// mangled:   
// signature: bool __cdecl FUN_710029cb20(undefined8 param_1, long * param_2, long param_3, long param_4, undefined8 param_5, undefined4 param_6)


/* WARNING: Removing unreachable block (ram,0x00710029cd68) */
/* WARNING: Removing unreachable block (ram,0x00710029cd7c) */

bool FUN_710029cb20(undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
                   undefined4 param_6)

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
  undefined4 local_5c;
  int local_58 [6];
  
  bVar5 = FUN_71001ccd00(param_2);
  if (!bVar5) {
    local_5c = 0x8001000d;
    FUN_71001b4200(local_58,&local_5c);
    pcVar10 = FUN_710170d030;
    if (local_58[0] < 0) {
      pcVar10 = (code *)0x0;
    }
    return pcVar10 != (code *)0x0;
  }
  plVar6 = FUN_71001af850(0x1a0);
  if (plVar6 != (long *)0x0) {
    FUN_71001d38d0(plVar6,2);
    plVar6[0x16] = 0;
    plVar6[0x17] = 0;
    *plVar6 = (long)&PTR_FUN_7104f60e28;
    plVar6[0x14] = 0x1000000000;
    plVar6[0x15] = 0;
    plVar6[0x18] = (long)&PTR_FUN_710523be40;
    *(undefined4 *)(plVar6 + 0x19) = 1;
    *(undefined1 *)((long)plVar6 + 0xcc) = 0;
    plVar6[0x1a] = 0;
    *(undefined4 *)(plVar6 + 0x1b) = 0;
    plVar6[0x1e] = 0;
    plVar6[0x1f] = 0;
    plVar6[0x20] = 0;
    plVar6[0x21] = 0;
    plVar6[0x22] = 0;
    plVar6[0x18] = (long)&PTR_FUN_7104f56058;
    plVar6[0x1c] = (long)(plVar6 + 0x1c);
    plVar6[0x1d] = (long)(plVar6 + 0x1c);
    local_58[0] = -0x7ffeffff;
    FUN_71001b4200((undefined4 *)(plVar6 + 0x23),local_58);
    plVar6[0x26] = 0;
    *(undefined4 *)(plVar6 + 0x27) = 0;
    plVar6[0x28] = 0;
    plVar6[0x29] = 0;
    *(undefined4 *)(plVar6 + 0x2a) = 0;
    *(undefined1 *)(plVar6 + 0x2c) = 0;
    plVar6[0x2e] = (long)(plVar6 + 0x2c);
    plVar6[0x2f] = 0x10;
    plVar6[0x2b] = (long)&PTR_FUN_710509cc08;
    FUN_71002216e0(plVar6 + 0x30);
    plVar6[0x33] = 0;
    plVar6[0x31] = (long)&PTR_FUN_7104f61598;
    plVar6[0x32] = 0;
  }
  uVar7 = FUN_710029ce10((long)plVar6,(int)param_2[3],param_3,param_4,param_5,param_6);
  if ((uVar7 & 1) == 0) {
    plVar12 = plVar6 + 1;
    iVar11 = (int)*plVar12;
    iVar4 = (int)*plVar12 + -1;
    if (iVar11 != (int)*plVar12) {
      ClearExclusiveLocal();
      goto LAB_710029cd44;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *(int *)plVar12 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_710029cd44:
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
LAB_710029ccb8:
    if ((*plVar12 != 0) && (lVar9 = *(long *)(*plVar12 + 0x10), lVar9 != 0)) {
      lVar9 = *(long *)(lVar9 + 0x10);
      goto LAB_710029cdbc;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar8;
    if (uVar2 == 0) goto LAB_710029ccb8;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_710029ccb8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar9 = 0;
LAB_710029cdbc:
  FUN_71001ccdf0(lVar9,(long)plVar6,0);
  return true;
}

