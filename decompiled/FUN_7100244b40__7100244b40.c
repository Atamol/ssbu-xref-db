// addr:      7100244b40
// offset:    0x244b40
// name:      FUN_7100244b40
// mangled:   
// signature: undefined FUN_7100244b40(void)


/* WARNING: Removing unreachable block (ram,0x007100244c14) */
/* WARNING: Removing unreachable block (ram,0x007100244c00) */
/* WARNING: Removing unreachable block (ram,0x007100244e54) */
/* WARNING: Removing unreachable block (ram,0x007100244d68) */
/* WARNING: Removing unreachable block (ram,0x007100244d7c) */
/* WARNING: Removing unreachable block (ram,0x007100244e40) */

void FUN_7100244b40(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   long param_5,undefined8 *param_6,uint param_7)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_44;
  
  lVar10 = param_5;
  plVar7 = FUN_71001af850(0x3f8);
  if (plVar7 != (long *)0x0) {
    FUN_7100243360(plVar7,param_2,param_2 + 0x10,lVar10,param_4,param_5,param_6,param_7);
  }
  plVar2 = plVar7 + 1;
  iVar9 = (int)*plVar2;
  if (iVar9 != (int)*plVar2) {
    ClearExclusiveLocal();
    goto LAB_7100244bdc;
  }
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar5) {
    *(int *)plVar2 = (int)*plVar2 + 1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  while (cVar4 != '\0') {
LAB_7100244bdc:
    while (iVar6 = (int)*plVar2, iVar6 != iVar9) {
      ClearExclusiveLocal();
      iVar9 = iVar6;
    }
    iVar1 = iVar9 + 1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    iVar9 = iVar6;
    if (bVar5) {
      *(int *)plVar2 = iVar1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  }
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100244c78:
    if ((*plVar11 != 0) && (lVar10 = *(long *)(*plVar11 + 0x10), lVar10 != 0)) {
      FUN_71001ccdf0(*(long *)(lVar10 + 0x10),(long)plVar7,0);
      goto joined_r0x007100244c98;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar8;
    if (uVar3 == 0) goto LAB_7100244c78;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_7100244c78;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  FUN_71001ccdf0(0,(long)plVar7,0);
joined_r0x007100244c98:
  if (param_5 == 0) {
    uStack_68 = CONCAT44(uStack_68._4_4_,0x80050001);
    FUN_71001b4200(param_1,(undefined4 *)&uStack_68);
    FUN_71001d6330((long)plVar7,param_7);
    if ((int)plVar7[8] == 5) {
      uStack_68 = plVar7[0x67];
      lStack_60 = plVar7[0x68];
      lStack_58 = plVar7[0x69];
    }
    else {
      uStack_44 = 0x80050008;
      FUN_71001b4200((undefined4 *)&uStack_68,&uStack_44);
    }
    FUN_71001b4300(param_1,(undefined4 *)&uStack_68);
    iVar9 = (int)*plVar2;
    iVar6 = (int)*plVar2 + -1;
    if (iVar9 != (int)*plVar2) {
      ClearExclusiveLocal();
      goto LAB_7100244e1c;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    while (cVar4 != '\0') {
LAB_7100244e1c:
      while( true ) {
        iVar1 = (int)*plVar2;
        iVar6 = iVar9 + -1;
        if (iVar1 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar1;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      iVar9 = iVar1;
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar6 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar7 + 0xc) = 1;
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  else {
    iVar9 = (int)*plVar2;
    iVar6 = (int)*plVar2 + -1;
    if (iVar9 != (int)*plVar2) {
      ClearExclusiveLocal();
      goto LAB_7100244d44;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    while (cVar4 != '\0') {
LAB_7100244d44:
      while( true ) {
        iVar1 = (int)*plVar2;
        iVar6 = iVar9 + -1;
        if (iVar1 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar1;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      iVar9 = iVar1;
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar6 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar7 + 0xc) = 1;
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    uStack_68 = CONCAT44(uStack_68._4_4_,0x10001);
    FUN_71001b4200(param_1,(undefined4 *)&uStack_68);
  }
  return;
}

