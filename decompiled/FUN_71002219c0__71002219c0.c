// addr:      71002219c0
// offset:    0x2219c0
// name:      FUN_71002219c0
// mangled:   
// signature: undefined __cdecl FUN_71002219c0(undefined4 * param_1, undefined8 param_2, long * param_3, long param_4, undefined4 param_5, undefined4 param_6, long * param_7, byte param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)


/* WARNING: Removing unreachable block (ram,0x007100221c5c) */
/* WARNING: Removing unreachable block (ram,0x007100221c70) */

void FUN_71002219c0(undefined4 *param_1,undefined8 param_2,long *param_3,long param_4,
                   undefined4 param_5,undefined4 param_6,long *param_7,byte param_8,long *param_9,
                   undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint *puVar8;
  code *pcVar9;
  long lVar10;
  undefined4 uVar11;
  int iVar12;
  long *plVar13;
  int local_78 [6];
  
  bVar5 = FUN_71001ccd00(param_3);
  if (!bVar5) {
    local_78[0] = -0x7ffefff3;
    goto LAB_7100221ce8;
  }
  plVar6 = FUN_71001af850(0x1a0);
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
    cVar3 = DAT_7104f561d0;
    plVar6[0x27] = 0;
    plVar6[0x28] = 0;
    *plVar6 = (long)&PTR_FUN_7104f59b88;
    plVar6[0x23] = (long)&PTR_FUN_7104f59c28;
    uVar11 = 5;
    if (cVar3 != '\0') {
      uVar11 = 10;
    }
    *(undefined4 *)(plVar6 + 0x24) = 0x10;
    plVar6[0x25] = 0;
    plVar6[0x29] = 0;
    *(undefined4 *)(plVar6 + 0x22) = uVar11;
    puVar7 = FUN_71001b1820(1);
    plVar6[0x28] = (long)puVar7;
    plVar6[0x29] = (long)puVar7 + 1;
    plVar6[0x27] = (long)puVar7;
    *(undefined1 *)puVar7 = 0;
    *(undefined1 *)(plVar6 + 0x33) = 1;
    plVar6[0x2a] = 0;
    plVar6[0x2b] = 0;
    plVar6[0x32] = 0;
    plVar6[0x28] = plVar6[0x28] + 1;
    plVar6[0x2c] = 0;
    plVar6[0x2d] = 1;
    plVar6[0x2e] = (long)(plVar6 + 0x2f);
    plVar6[0x2f] = 0;
    plVar6[0x30] = 0;
    plVar6[0x31] = 0;
  }
  FUN_7100221d10(local_78,(long)plVar6,(int)param_3[3],param_4,param_5,param_6,param_7,param_8 & 1,
                 param_9,param_10,param_11,param_12);
  pcVar9 = FUN_710170d030;
  if (local_78[0] < 0) {
    pcVar9 = (code *)0x0;
  }
  if (pcVar9 == (code *)0x0) {
    plVar13 = plVar6 + 1;
    iVar12 = (int)*plVar13;
    iVar4 = (int)*plVar13 + -1;
    if (iVar12 != (int)*plVar13) {
      ClearExclusiveLocal();
      goto LAB_7100221c38;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *(int *)plVar13 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_7100221c38:
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
    }
    local_78[0] = -0x7ffefff3;
    goto LAB_7100221ce8;
  }
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100221bd0:
    if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x10), lVar10 == 0)) goto LAB_7100221cc8;
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar8;
    if (uVar2 == 0) goto LAB_7100221bd0;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_7100221bd0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100221cc8:
    lVar10 = 0;
  }
  FUN_71001ccdf0(lVar10,(long)plVar6,0);
  local_78[0] = 0x10001;
LAB_7100221ce8:
  FUN_71001b4200(param_1,local_78);
  return;
}

