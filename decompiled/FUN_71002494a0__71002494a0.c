// addr:      71002494a0
// offset:    0x2494a0
// name:      FUN_71002494a0
// mangled:   
// signature: bool __cdecl FUN_71002494a0(undefined8 param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined4 param_7)


/* WARNING: Removing unreachable block (ram,0x007100249684) */
/* WARNING: Removing unreachable block (ram,0x007100249698) */

bool FUN_71002494a0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  code *pcVar11;
  int iVar12;
  long *plVar13;
  undefined4 local_6c;
  int local_68 [6];
  
  bVar5 = FUN_71001ccd00(param_2);
  if (!bVar5) {
    local_6c = 0x8001000d;
    FUN_71001b4200(local_68,&local_6c);
    pcVar11 = FUN_710170d030;
    if (local_68[0] < 0) {
      pcVar11 = (code *)0x0;
    }
    return pcVar11 != (code *)0x0;
  }
  plVar6 = FUN_71001af850(0x110);
  if (plVar6 != (long *)0x0) {
    FUN_71001d38d0(plVar6,2);
    *(undefined4 *)(plVar6 + 0x14) = 0;
    *(undefined1 *)((long)plVar6 + 0xa4) = 0;
    *(undefined4 *)(plVar6 + 0x15) = 0;
    *plVar6 = (long)&PTR_FUN_7104f5c9d8;
    FUN_71001d44e0(plVar6 + 0x16);
    plVar6[0x1c] = 0;
    plVar6[0x1d] = 0;
    plVar6[0x1e] = 0;
    plVar6[0x1f] = 0;
    plVar6[0x20] = 0;
    puVar7 = FUN_71001af850(0x58);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &DAT_7104f5c770;
      nn::account::AsyncContext::AsyncContext((AsyncContext *)(puVar7 + 1));
      *(undefined1 *)(puVar7 + 10) = 0;
    }
    plVar6[0x21] = (long)puVar7;
  }
  uVar8 = FUN_7100249920((long)plVar6,(int)param_2[3],param_3,param_4,param_5,param_6,param_7);
  if ((uVar8 & 1) == 0) {
    plVar13 = plVar6 + 1;
    iVar12 = (int)*plVar13;
    iVar4 = (int)*plVar13 + -1;
    if (iVar12 != (int)*plVar13) {
      ClearExclusiveLocal();
      goto LAB_7100249660;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *(int *)plVar13 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_7100249660:
      while( true ) {
        iVar1 = (int)*plVar13;
        iVar4 = iVar12 + -1;
        if (iVar1 == iVar12) break;
        ClearExclusiveLocal();
        iVar12 = iVar1;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      iVar12 = iVar1;
      if (bVar5) {
        *(int *)plVar13 = iVar4;
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
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002495d8:
    if ((*plVar13 != 0) && (lVar10 = *(long *)(*plVar13 + 0x10), lVar10 != 0)) {
      lVar10 = *(long *)(lVar10 + 0x10);
      goto LAB_71002496d8;
    }
  }
  else {
    puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar9;
    if (uVar2 == 0) goto LAB_71002495d8;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71002495d8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar10 = 0;
LAB_71002496d8:
  FUN_71001ccdf0(lVar10,(long)plVar6,0);
  return true;
}

