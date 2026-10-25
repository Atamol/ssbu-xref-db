// addr:      7100221720
// offset:    0x221720
// name:      FUN_7100221720
// mangled:   
// signature: undefined __cdecl FUN_7100221720(undefined4 * param_1, undefined8 param_2, long * param_3, undefined8 param_4, undefined4 param_5, undefined8 param_6, undefined8 param_7)


/* WARNING: Removing unreachable block (ram,0x007100221908) */
/* WARNING: Removing unreachable block (ram,0x00710022191c) */

void FUN_7100221720(undefined4 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                   undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  uint *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  int local_68 [6];
  
  bVar5 = FUN_71001ccd00(param_3);
  if (bVar5) {
    plVar6 = FUN_71001af850(0x118);
    if (plVar6 != (long *)0x0) {
      FUN_71001d38d0(plVar6,0);
      *(undefined4 *)(plVar6 + 0x14) = 0;
      plVar6[0x15] = 0;
      *plVar6 = (long)&PTR_FUN_7104f59b08;
      plVar6[0x16] = (long)&PTR_FUN_710509cc08;
      *(undefined1 *)(plVar6 + 0x17) = 0;
      plVar6[0x19] = (long)(plVar6 + 0x17);
      plVar6[0x1a] = 0x10;
      FUN_71001b47e0((long)(plVar6 + 0x16),"",-1);
      *(undefined4 *)(plVar6 + 0x1b) = 0;
      plVar6[0x1c] = 0;
      plVar6[0x1d] = 0;
      plVar6[0x1e] = 0;
      *(undefined1 *)(plVar6 + 0x1f) = 0;
      plVar6[0x20] = 0;
      plVar6[0x21] = 0;
      uVar8 = 5;
      if (DAT_7104f561d0 != '\0') {
        uVar8 = 10;
      }
      *(undefined4 *)(plVar6 + 0x22) = uVar8;
    }
    (**(code **)(*plVar6 + 0x68))(local_68,plVar6,(int)param_3[3],param_4,param_5,param_6,param_7);
    pcVar9 = FUN_710170d030;
    if (local_68[0] < 0) {
      pcVar9 = (code *)0x0;
    }
    if (pcVar9 != (code *)0x0) {
      plVar12 = &DAT_71052af138;
      if (DAT_71052af1d8 == '\0') {
LAB_7100221894:
        if ((*plVar12 == 0) || (lVar10 = *(long *)(*plVar12 + 0x10), lVar10 == 0))
        goto LAB_710022195c;
        lVar10 = *(long *)(lVar10 + 0x10);
      }
      else {
        puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar2 = *puVar7;
        if (uVar2 == 0) goto LAB_7100221894;
        if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
          goto LAB_7100221894;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710022195c:
        lVar10 = 0;
      }
      FUN_71001ccdf0(lVar10,(long)plVar6,0);
      local_68[0] = 0x10001;
      goto LAB_7100221970;
    }
    plVar12 = plVar6 + 1;
    iVar11 = (int)*plVar12;
    iVar4 = (int)*plVar12 + -1;
    if (iVar11 != (int)*plVar12) {
      ClearExclusiveLocal();
      goto LAB_71002218e4;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *(int *)plVar12 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_71002218e4:
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
      local_68[0] = -0x7ffefff3;
      goto LAB_7100221970;
    }
  }
  local_68[0] = -0x7ffefff3;
LAB_7100221970:
  FUN_71001b4200(param_1,local_68);
  return;
}

