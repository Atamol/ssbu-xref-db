// addr:      710029b8f0
// offset:    0x29b8f0
// name:      FUN_710029b8f0
// mangled:   
// signature: undefined8 __cdecl FUN_710029b8f0(long param_1, undefined4 param_2, long param_3, long param_4, undefined4 param_5)


/* WARNING: Removing unreachable block (ram,0x00710029bd4c) */
/* WARNING: Removing unreachable block (ram,0x00710029bbfc) */
/* WARNING: Removing unreachable block (ram,0x00710029bb68) */
/* WARNING: Removing unreachable block (ram,0x00710029bad4) */
/* WARNING: Removing unreachable block (ram,0x00710029bac0) */
/* WARNING: Removing unreachable block (ram,0x00710029ba40) */
/* WARNING: Removing unreachable block (ram,0x00710029ba2c) */
/* WARNING: Removing unreachable block (ram,0x00710029bb7c) */
/* WARNING: Removing unreachable block (ram,0x00710029bc10) */
/* WARNING: Removing unreachable block (ram,0x00710029bc90) */
/* WARNING: Removing unreachable block (ram,0x00710029bca4) */
/* WARNING: Removing unreachable block (ram,0x00710029bd38) */

undefined8
FUN_710029b8f0(long param_1,undefined4 param_2,long param_3,long param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  undefined **local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710029b974:
    if ((*plVar8 == 0) || (lVar7 = *(long *)(*plVar8 + 0x10), lVar7 == 0)) goto LAB_710029b9a4;
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_710029b974;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_710029b974;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710029b9a4:
    lVar7 = 0;
  }
  plVar10 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  plVar11 = *(long **)(param_1 + 0x140);
  plVar8 = *(long **)(param_3 + 8);
  if (plVar11 != plVar8) {
    if (plVar11 != (long *)0x0) {
      plVar8 = plVar11 + 1;
      iVar9 = (int)*plVar8;
      iVar5 = (int)*plVar8 + -1;
      if (iVar9 != (int)*plVar8) {
        ClearExclusiveLocal();
        goto LAB_710029ba08;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
      while (cVar3 != '\0') {
LAB_710029ba08:
        while( true ) {
          iVar1 = (int)*plVar8;
          iVar5 = iVar9 + -1;
          if (iVar1 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar1;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        iVar9 = iVar1;
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      }
      if (iVar5 == 0) {
        piVar12 = (int *)((long)plVar11 + 0xc);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        iVar9 = *piVar12;
        iVar5 = *piVar12 + -1;
        if (iVar9 != *piVar12) {
          ClearExclusiveLocal();
          goto LAB_710029ba9c;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
        while (cVar3 != '\0') {
LAB_710029ba9c:
          while( true ) {
            iVar1 = *piVar12;
            iVar5 = iVar9 + -1;
            if (iVar1 == iVar9) break;
            ClearExclusiveLocal();
            iVar9 = iVar1;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          iVar9 = iVar1;
          if (bVar4) {
            *piVar12 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        }
        if (iVar5 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
      plVar8 = *(long **)(param_3 + 8);
    }
    *(long **)(param_1 + 0x140) = plVar8;
    if ((plVar8 != (long *)0x0) && (plVar8 = plVar8 + 1, (int)*plVar8 != 0)) {
      iVar9 = (int)*plVar8;
      if (iVar9 == (int)*plVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_710029bb8c;
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        while (iVar5 = (int)*plVar8, iVar5 != iVar9) {
          ClearExclusiveLocal();
          iVar9 = iVar5;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        iVar9 = iVar5;
      } while (cVar3 != '\0');
    }
  }
LAB_710029bb8c:
  plVar11 = *(long **)(param_1 + 0x198);
  plVar8 = *(long **)(param_4 + 8);
  if (plVar11 != plVar8) {
    if (plVar11 != (long *)0x0) {
      plVar8 = plVar11 + 1;
      iVar9 = (int)*plVar8;
      iVar5 = (int)*plVar8 + -1;
      if (iVar9 != (int)*plVar8) {
        ClearExclusiveLocal();
        goto LAB_710029bbd8;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
      while (cVar3 != '\0') {
LAB_710029bbd8:
        while( true ) {
          iVar1 = (int)*plVar8;
          iVar5 = iVar9 + -1;
          if (iVar1 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar1;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        iVar9 = iVar1;
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      }
      if (iVar5 == 0) {
        piVar12 = (int *)((long)plVar11 + 0xc);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        iVar9 = *piVar12;
        iVar5 = *piVar12 + -1;
        if (iVar9 != *piVar12) {
          ClearExclusiveLocal();
          goto LAB_710029bc6c;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
        while (cVar3 != '\0') {
LAB_710029bc6c:
          while( true ) {
            iVar1 = *piVar12;
            iVar5 = iVar9 + -1;
            if (iVar1 == iVar9) break;
            ClearExclusiveLocal();
            iVar9 = iVar1;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          iVar9 = iVar1;
          if (bVar4) {
            *piVar12 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        }
        if (iVar5 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
      plVar8 = *(long **)(param_4 + 8);
    }
    *(long **)(param_1 + 0x198) = plVar8;
    if ((plVar8 != (long *)0x0) && (plVar8 = plVar8 + 1, (int)*plVar8 != 0)) {
      iVar9 = (int)*plVar8;
      if (iVar9 == (int)*plVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_710029bd5c;
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        while (iVar5 = (int)*plVar8, iVar5 != iVar9) {
          ClearExclusiveLocal();
          iVar9 = iVar5;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        iVar9 = iVar5;
      } while (cVar3 != '\0');
    }
  }
LAB_710029bd5c:
  *(undefined4 *)(param_1 + 0xa4) = param_5;
  local_70 = &PTR_FUN_7104f56e28;
  pcStack_68 = FUN_710029dbc0;
  local_60 = 0;
  puStack_58 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&local_70);
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return 1;
}

