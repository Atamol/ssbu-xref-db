// addr:      7100202710
// offset:    0x202710
// name:      FUN_7100202710
// mangled:   
// signature: undefined FUN_7100202710(void)


void FUN_7100202710(undefined8 *param_1,long *param_2,long param_3,long *param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 uStack_b0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (((int)param_2[0x14] == 0) || (uVar7 = (**(code **)(*param_2 + 0x58))(), (uVar7 & 1) == 0)) {
    uStack_b0._0_4_ = 0x80050002;
    goto LAB_71002028e4;
  }
  FUN_7100202db0(param_2);
  (**(code **)(*param_2 + 0xb0))(param_2,3);
  param_2[0x60] = 0;
  param_2[0x5f] = 0;
  param_2[0x61] = param_3;
  param_2[0x62] = *param_4;
  plVar8 = FUN_71001af850(0x238);
  if (plVar8 != (long *)0x0) {
    FUN_7100216320(plVar8,param_2,3,0x60,0,0);
  }
  *(undefined1 *)(plVar8 + 8) = *(undefined1 *)((long)param_2 + 0x1eb);
  uVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (((uVar5 >> 0x1b & 1) != 0) && (iVar6 = (**(code **)(*param_2 + 200))(param_2), iVar6 == 0xd))
  {
    *(undefined4 *)(plVar8 + 0x15) = 2;
  }
  lVar14 = plVar8[0x3e];
  plVar15 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar5 = *puVar9;
    if (uVar5 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar5) goto LAB_7100202d90;
      plVar15 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
    }
  }
  if (*(char *)(*(long *)(*plVar15 + 0x10) + 0x50) == '\0') {
    if (DAT_7104f54e20 == '\0') {
      FUN_71001b6a50(&uStack_b0);
    }
    else {
      FUN_71001b68a0(&uStack_b0,0);
    }
    DAT_71052aeba8 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
    if (-1 < param_5) {
      lVar11 = (long)param_5;
      goto LAB_710020298c;
    }
    lVar12 = DAT_71052aeba8 - -param_5;
    lVar11 = (long)param_5;
  }
  else {
    plVar15 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar5 = *puVar9;
      if (uVar5 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar5) goto LAB_7100202d90;
        plVar15 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
      }
    }
    lVar12 = *(long *)(*(long *)(*plVar15 + 0x10) + 0x58) + (long)DAT_7104f577b0;
    if (DAT_7104f54e20 == '\0') {
      FUN_71001b6a50(&uStack_b0);
    }
    else {
      FUN_71001b68a0(&uStack_b0,0);
    }
    DAT_71052aeba8 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
    lVar10 = lVar12 << 0x20;
    lVar11 = lVar10 >> 0x20;
    if ((int)lVar12 < 0) {
      lVar12 = DAT_71052aeba8 - (-lVar10 >> 0x20);
    }
    else {
LAB_710020298c:
      lVar12 = DAT_71052aeba8 + lVar11;
    }
  }
  *(long *)(lVar14 + 0x18) = lVar12;
  *(long *)(lVar14 + 0x20) = lVar11;
  *(undefined4 *)(lVar14 + 8) = 0x10;
  FUN_7100203410(param_2[1] + 0x40,plVar8);
  FUN_71002039c0(&uStack_78,param_2,(long)plVar8);
  uStack_b0._0_4_ = (uint)uStack_b0 & 0xffffff00;
  bVar4 = FUN_71001b4280((uint *)&uStack_78,(byte *)&uStack_b0);
  plVar15 = plVar8 + 1;
  iVar6 = (int)*plVar15;
  iVar3 = (int)*plVar15 + -1;
  if (iVar6 != (int)*plVar15) {
    ClearExclusiveLocal();
    iVar13 = iVar6;
    goto LAB_7100202a08;
  }
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar2) {
    *(int *)plVar15 = iVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  while (iVar13 = iVar6, cVar1 != '\0') {
LAB_7100202a08:
    while( true ) {
      iVar6 = (int)*plVar15;
      iVar3 = iVar13 + -1;
      if (iVar6 == iVar13) break;
      ClearExclusiveLocal();
      iVar13 = iVar6;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar2) {
      *(int *)plVar15 = iVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  }
  if ((iVar3 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar8 + 0xc) = 1;
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if (bVar4) {
    plVar8 = (long *)param_2[0x60];
    if (plVar8 != (long *)0x0) {
      plVar15 = plVar8 + 1;
      iVar6 = (int)*plVar15;
      iVar3 = (int)*plVar15 + -1;
      if (iVar6 != (int)*plVar15) {
        ClearExclusiveLocal();
        iVar13 = iVar6;
        goto LAB_7100202a90;
      }
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
      while (iVar13 = iVar6, cVar1 != '\0') {
LAB_7100202a90:
        while( true ) {
          iVar6 = (int)*plVar15;
          iVar3 = iVar13 + -1;
          if (iVar6 == iVar13) break;
          ClearExclusiveLocal();
          iVar13 = iVar6;
        }
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar3 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar8 + 0xc) = 1;
        (**(code **)(*plVar8 + 8))();
      }
    }
    param_2[0x60] = 0;
    param_2[0x5f] = 0;
    param_2[0x61] = 0;
    param_1[1] = uStack_70;
    param_1[2] = uStack_68;
    *param_1 = uStack_78;
    return;
  }
  if (param_3 == 0) {
    plVar8 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar5 = *puVar9;
      if (uVar5 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar5) {
LAB_7100202d90:
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
      }
    }
    if (*(char *)(*(long *)(*plVar8 + 0x10) + 0x50) == '\0') {
      FUN_71001b46a0(&uStack_b0,0x32,param_5);
      FUN_71001b2e80((long)&uStack_b0);
      do {
        uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
        if ((uVar7 & 1) == 0) break;
        plVar8 = &DAT_71052af138;
        if (DAT_71052af1d8 != '\0') {
          puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar5 = *puVar9;
          if (uVar5 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar5)
            goto LAB_7100202d90;
            plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
          }
        }
        if (*(char *)(*(long *)(*plVar8 + 0x10) + 0x50) != '\0') break;
        FUN_71001da0e0();
        uVar7 = FUN_71001b2e90((long)&uStack_b0);
      } while ((uVar7 & 1) != 0);
    }
    else {
      FUN_71001b46a0(&uStack_b0,0x32,DAT_7104f577b0);
      FUN_71001b2e80((long)&uStack_b0);
      do {
        uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
        if ((uVar7 & 1) == 0) break;
        FUN_71001da0e0();
        uVar7 = FUN_71001b2e90((long)&uStack_b0);
      } while ((uVar7 & 1) != 0);
    }
    FUN_71001b4730();
    plVar8 = (long *)param_2[0x60];
    if (plVar8 != (long *)0x0) {
      plVar15 = plVar8 + 1;
      iVar6 = (int)*plVar15;
      iVar3 = (int)*plVar15 + -1;
      if (iVar6 != (int)*plVar15) {
        ClearExclusiveLocal();
        iVar13 = iVar6;
        goto LAB_7100202cec;
      }
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
      while (iVar13 = iVar6, cVar1 != '\0') {
LAB_7100202cec:
        while( true ) {
          iVar6 = (int)*plVar15;
          iVar3 = iVar13 + -1;
          if (iVar6 == iVar13) break;
          ClearExclusiveLocal();
          iVar13 = iVar6;
        }
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar3 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar8 + 0xc) = 1;
        (**(code **)(*plVar8 + 8))();
      }
    }
    param_2[0x60] = 0;
    param_2[0x5f] = 0;
    param_2[0x61] = 0;
    uVar7 = (**(code **)(*param_2 + 0x38))(param_2);
    if ((uVar7 & 1) == 0) {
      (**(code **)(*param_2 + 0xb0))(param_2,0);
      uStack_b0._0_4_ = 0x80050008;
      goto LAB_71002028e4;
    }
  }
  uStack_b0._0_4_ = 0x10001;
LAB_71002028e4:
  FUN_71001b4200((undefined4 *)param_1,(undefined4 *)&uStack_b0);
  return;
}

