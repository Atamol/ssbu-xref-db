// addr:      7100201e50
// offset:    0x201e50
// name:      FUN_7100201e50
// mangled:   
// signature: undefined FUN_7100201e50(void)


/* WARNING: Type propagation algorithm not settling */

void FUN_7100201e50(undefined4 *param_1,long *param_2,long param_3,long param_4,long param_5,
                   long *param_6,int param_7)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  ulong uVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 uStack_98;
  
  iVar4 = 10000000;
  if (param_7 != -1) {
    iVar4 = param_7;
  }
  uVar9 = (**(code **)(*param_2 + 0x60))();
  if (((((uVar9 & 1) == 0) && (*(int *)((long)param_2 + 0x114) != 0)) ||
      (uVar9 = (**(code **)(*param_2 + 0x40))(param_2), (uVar9 & 1) != 0)) ||
     (uVar9 = (**(code **)(*param_2 + 0x58))(param_2), (uVar9 & 1) != 0)) {
    uStack_98._0_4_ = 0x80050002;
    goto LAB_7100201ee0;
  }
  *(undefined1 *)(param_2 + 0x21) = 0;
  (**(code **)(*param_2 + 0xb0))(param_2,1);
  if (param_3 != 0) {
    piVar1 = (int *)(param_3 + 8);
    iVar14 = *piVar1;
    if (iVar14 == *piVar1) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_7100201f9c;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      while (iVar15 = *piVar1, iVar15 != iVar14) {
        ClearExclusiveLocal();
        iVar14 = iVar15;
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      iVar14 = iVar15;
    } while (cVar6 != '\0');
  }
LAB_7100201f9c:
  param_2[0x60] = param_3;
  param_2[0x5f] = param_4;
  param_2[0x61] = param_5;
  param_2[0x62] = *param_6;
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar5 = *puVar10;
    if (uVar5 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar5) goto LAB_71002023f0;
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
    }
  }
  lVar16 = *(long *)(param_2[0x20] + 0x1f0);
  if (*(char *)(*(long *)(*plVar11 + 0x10) + 0x50) == '\0') {
    if (DAT_7104f54e20 == '\0') {
      FUN_71001b6a50(&uStack_98);
    }
    else {
      FUN_71001b68a0(&uStack_98,0);
    }
    DAT_71052aeba8 = CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
    if (-1 < iVar4) {
      lVar13 = (long)iVar4;
      goto LAB_7100202124;
    }
    *(long *)(lVar16 + 0x18) = DAT_71052aeba8 - -iVar4;
    *(long *)(lVar16 + 0x20) = (long)iVar4;
    lVar16 = param_2[0x20];
    cVar6 = (char)param_2[0xf];
  }
  else {
    plVar11 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar5 = *puVar10;
      if (uVar5 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar5) goto LAB_71002023f0;
        plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
      }
    }
    lVar3 = *(long *)(*(long *)(*plVar11 + 0x10) + 0x58) + (long)DAT_7104f577b0;
    if (DAT_7104f54e20 == '\0') {
      FUN_71001b6a50(&uStack_98);
    }
    else {
      FUN_71001b68a0(&uStack_98,0);
    }
    DAT_71052aeba8 = CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
    lVar12 = lVar3 << 0x20;
    lVar13 = lVar12 >> 0x20;
    if ((int)lVar3 < 0) {
      *(long *)(lVar16 + 0x18) = DAT_71052aeba8 - (-lVar12 >> 0x20);
      *(long *)(lVar16 + 0x20) = lVar13;
      lVar16 = param_2[0x20];
      cVar6 = (char)param_2[0xf];
    }
    else {
LAB_7100202124:
      *(long *)(lVar16 + 0x18) = DAT_71052aeba8 + lVar13;
      *(long *)(lVar16 + 0x20) = lVar13;
      lVar16 = param_2[0x20];
      cVar6 = (char)param_2[0xf];
    }
  }
  if (cVar6 == '\0') {
    FUN_71001f2180((long)(param_2 + 2));
  }
  FUN_71001bec20(lVar16 + 0x140,param_2[3]);
  FUN_7100202410((long)param_2,(long *)param_2[0x20]);
  bVar8 = (**(code **)(*param_2 + 0x60))(param_2);
  *(byte *)(param_2 + 0x66) = ~bVar8 & 1;
  if (param_5 == 0) {
    plVar11 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar5 = *puVar10;
      if (uVar5 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar5) {
LAB_71002023f0:
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
      }
    }
    if (*(char *)(*(long *)(*plVar11 + 0x10) + 0x50) == '\0') {
      FUN_71001b46a0(&uStack_98,0x32,iVar4);
      FUN_71001b2e80((long)&uStack_98);
      do {
        uVar9 = (**(code **)(*param_2 + 0x40))(param_2);
        if ((uVar9 & 1) == 0) break;
        plVar11 = &DAT_71052af138;
        if (DAT_71052af1d8 != '\0') {
          puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar5 = *puVar10;
          if (uVar5 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar5)
            goto LAB_71002023f0;
            plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
          }
        }
        if (*(char *)(*(long *)(*plVar11 + 0x10) + 0x50) != '\0') break;
        FUN_71001da0e0();
        uVar9 = FUN_71001b2e90((long)&uStack_98);
      } while ((uVar9 & 1) != 0);
    }
    else {
      FUN_71001b46a0(&uStack_98,0x32,DAT_7104f577b0);
      FUN_71001b2e80((long)&uStack_98);
      do {
        uVar9 = (**(code **)(*param_2 + 0x40))(param_2);
        if ((uVar9 & 1) == 0) break;
        FUN_71001da0e0();
        uVar9 = FUN_71001b2e90((long)&uStack_98);
      } while ((uVar9 & 1) != 0);
    }
    FUN_71001b4730();
    plVar11 = (long *)param_2[0x60];
    if (plVar11 != (long *)0x0) {
      plVar2 = plVar11 + 1;
      iVar4 = (int)*plVar2;
      iVar14 = (int)*plVar2 + -1;
      if (iVar4 != (int)*plVar2) {
        ClearExclusiveLocal();
        iVar15 = iVar4;
        goto LAB_710020234c;
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
      while (iVar15 = iVar4, cVar6 != '\0') {
LAB_710020234c:
        while( true ) {
          iVar4 = (int)*plVar2;
          iVar14 = iVar15 + -1;
          if (iVar4 == iVar15) break;
          ClearExclusiveLocal();
          iVar15 = iVar4;
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar14;
          cVar6 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar14 == 0) && (*(char *)((long)plVar11 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar11 + 0xc) = 1;
        (**(code **)(*plVar11 + 8))();
      }
    }
    param_2[0x60] = 0;
    param_2[0x5f] = 0;
    param_2[0x61] = 0;
    uVar9 = (**(code **)(*param_2 + 0x58))(param_2);
    if ((uVar9 & 1) == 0) {
      (**(code **)(*param_2 + 0xb0))(param_2,0);
      uStack_98._0_4_ = 0x80050008;
      goto LAB_7100201ee0;
    }
  }
  uStack_98._0_4_ = 0x10001;
LAB_7100201ee0:
  FUN_71001b4200(param_1,(undefined4 *)&uStack_98);
  return;
}

