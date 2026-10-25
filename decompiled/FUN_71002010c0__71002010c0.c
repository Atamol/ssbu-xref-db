// addr:      71002010c0
// offset:    0x2010c0
// name:      FUN_71002010c0
// mangled:   
// signature: undefined __cdecl FUN_71002010c0(undefined8 * param_1)


void FUN_71002010c0(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  uint *puVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  
  *param_1 = &PTR_FUN_7104f57c68;
  FUN_71001ffb10((long)param_1);
  FUN_71002015a0((long)param_1);
  if ((long *)param_1[0x20] != (long *)0x0) {
    FUN_7100201730(param_1[1] + 0x40,(long *)param_1[0x20]);
    plVar6 = (long *)param_1[0x20];
    plVar11 = plVar6 + 1;
    iVar4 = (int)*plVar11;
    iVar3 = (int)*plVar11 + -1;
    if (iVar4 != (int)*plVar11) {
      ClearExclusiveLocal();
      iVar9 = iVar4;
      goto LAB_7100201148;
    }
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *(int *)plVar11 = iVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    while (iVar9 = iVar4, cVar2 != '\0') {
LAB_7100201148:
      while( true ) {
        iVar4 = (int)*plVar11;
        iVar3 = iVar9 + -1;
        if (iVar4 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar4;
      }
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar3 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar6 + 0xc) = 1;
      (**(code **)(*plVar6 + 8))();
    }
    param_1[0x20] = 0;
  }
  plVar11 = (long *)param_1[0x1c];
  if (plVar11 != (long *)param_1[0x1d]) {
    do {
      lVar10 = *plVar11;
      plVar6 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar7;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1)
          goto LAB_710020157c;
          plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      (**(code **)(*(long *)(*(long *)(*(long *)(*plVar6 + 0x10) + 0x10) + 0x78) + 0x10))();
      plVar6 = *(long **)(lVar10 + 8);
      while (((long *)(*plVar11 + 0x10) != plVar6 && ((long *)plVar6[6] != (long *)0x0))) {
        FUN_7100201730(param_1[1] + 0x40,(long *)plVar6[6]);
        plVar8 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar8 = plVar6 + 2;
          bVar5 = *(long **)*plVar8 != plVar6;
          plVar6 = (long *)*plVar8;
          if (bVar5) {
            do {
              lVar10 = *plVar8;
              plVar8 = (long *)(lVar10 + 0x10);
              plVar6 = (long *)*plVar8;
            } while (*plVar6 != lVar10);
          }
        }
        else {
          do {
            plVar6 = plVar8;
            plVar8 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
      }
      plVar6 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar7;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_710020157c:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      (**(code **)(*(long *)(*(long *)(*(long *)(*plVar6 + 0x10) + 0x10) + 0x78) + 0x20))();
      FUN_7100201af0(*plVar11);
      lVar10 = *plVar11;
      if (lVar10 != 0) {
        FUN_7100213ea0(lVar10);
        FUN_71001af8a0(lVar10);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != (long *)param_1[0x1d]);
  }
  plVar11 = (long *)param_1[0x19];
  if (plVar11 != (long *)param_1[0x1a]) {
    do {
      FUN_71001ff2f0(*plVar11);
      lVar10 = *plVar11;
      if (lVar10 != 0) {
        FUN_71001ff2f0(lVar10);
        FUN_710021a2d0(lVar10 + 8,*(undefined8 **)(lVar10 + 0x10));
        FUN_71001af8a0(lVar10);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != (long *)param_1[0x1a]);
  }
  plVar11 = (long *)param_1[0x37];
  if (plVar11 != (long *)param_1[0x38]) {
    do {
      while (plVar6 = (long *)*plVar11, plVar6 == (long *)0x0) {
LAB_7100201404:
        plVar11 = plVar11 + 1;
        if (plVar11 == (long *)param_1[0x38]) goto LAB_7100201438;
      }
      plVar8 = plVar6 + 1;
      iVar4 = (int)*plVar8;
      iVar3 = (int)*plVar8 + -1;
      if (iVar4 != (int)*plVar8) {
        ClearExclusiveLocal();
        iVar9 = iVar4;
        goto LAB_71002013c0;
      }
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
      while (iVar9 = iVar4, cVar2 != '\0') {
LAB_71002013c0:
        while( true ) {
          iVar4 = (int)*plVar8;
          iVar3 = iVar9 + -1;
          if (iVar4 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar4;
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar3 != 0) || (*(char *)((long)plVar6 + 0xc) != '\0')) goto LAB_7100201404;
      *(undefined1 *)((long)plVar6 + 0xc) = 1;
      (**(code **)(*plVar6 + 8))();
      plVar11 = plVar11 + 1;
    } while (plVar11 != (long *)param_1[0x38]);
  }
LAB_7100201438:
  if ((long *)param_1[100] != (long *)0x0) {
    (**(code **)(*(long *)param_1[100] + 8))();
  }
  FUN_71001dcfd0(param_1 + 0x96,(undefined8 *)param_1[0x97]);
  plVar11 = (long *)param_1[0x60];
  param_1[0x5e] = &PTR_FUN_7104f591b8;
  if (plVar11 != (long *)0x0) {
    plVar6 = plVar11 + 1;
    iVar4 = (int)*plVar6;
    iVar3 = (int)*plVar6 + -1;
    if (iVar4 != (int)*plVar6) {
      ClearExclusiveLocal();
      iVar9 = iVar4;
      goto LAB_71002014a8;
    }
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *(int *)plVar6 = iVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    while (iVar9 = iVar4, cVar2 != '\0') {
LAB_71002014a8:
      while( true ) {
        iVar4 = (int)*plVar6;
        iVar3 = iVar9 + -1;
        if (iVar4 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar4;
      }
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *(int *)plVar6 = iVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar3 == 0) && (*(char *)((long)plVar11 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar11 + 0xc) = 1;
      (**(code **)(*plVar11 + 8))();
    }
  }
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  FUN_71001b3a50(param_1 + 0x43);
  if (param_1[0x40] != 0) {
    FUN_71001b1870(param_1[0x40]);
  }
  lVar10 = param_1[0x3a];
  if (lVar10 != 0) {
    param_1[0x3b] = lVar10;
    FUN_71001b1870(lVar10);
  }
  lVar10 = param_1[0x37];
  if (lVar10 != 0) {
    param_1[0x38] = lVar10;
    FUN_71001b1870(lVar10);
  }
  lVar10 = param_1[0x1c];
  if (lVar10 != 0) {
    param_1[0x1d] = lVar10;
    FUN_71001b1870(lVar10);
  }
  lVar10 = param_1[0x19];
  if (lVar10 != 0) {
    param_1[0x1a] = lVar10;
    FUN_71001b1870(lVar10);
  }
  FUN_71001e1510(param_1);
  return;
}

