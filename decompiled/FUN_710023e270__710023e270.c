// addr:      710023e270
// offset:    0x23e270
// name:      FUN_710023e270
// mangled:   
// signature: long * __cdecl FUN_710023e270(long param_1, uint param_2)


long * FUN_710023e270(long param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined **ppuVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  uint *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 uVar12;
  code *pcVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined **local_50;
  long *local_48;
  
  if (*(code **)(param_1 + 0x508) == (code *)0x0) {
    plVar8 = FUN_71001af850(0x70);
    if (plVar8 != (long *)0x0) {
      FUN_710023bd70(plVar8);
    }
    pcVar13 = *(code **)(param_1 + 0x510);
    if (pcVar13 != (code *)0x0) goto LAB_710023e2cc;
LAB_710023e2f0:
    if ((param_2 & 1) != 0) {
      uVar6 = 0xc;
      if (DAT_71052b5940 != '\0') {
        uVar6 = 0x4c;
      }
      pcVar13 = *(code **)(param_1 + 0x518);
      goto joined_r0x00710023e314;
    }
    uVar6 = 0xc;
    if (*(char *)(param_1 + 0x4b1) != '\0') {
      uVar6 = 0x2c;
    }
    pcVar13 = *(code **)(param_1 + 0x518);
    if (pcVar13 != (code *)0x0) goto LAB_710023e2e0;
LAB_710023e318:
    if ((param_2 & 1) == 0) {
      uVar7 = (uint)*(ushort *)
                     (*(long *)(*(long *)(*(long *)(param_1 + 0x2f0) + 0xc0) + 0x70) + 0x4c);
    }
    else {
      plVar11 = &DAT_71052af1a0;
      if (DAT_71052af1d8 != '\0') {
        puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar7 = *puVar9;
        if (uVar7 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar7) {
            plVar8 = (long *)FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h"
                                            ,0x47,0xe0000003,0);
            return plVar8;
          }
          plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar7 * 8) + 0x88);
        }
      }
      uVar7 = (uint)*(ushort *)(*(long *)(*plVar11 + 0x10) + 0x80);
    }
  }
  else {
    plVar8 = (long *)(**(code **)(param_1 + 0x508))();
    pcVar13 = *(code **)(param_1 + 0x510);
    if (pcVar13 == (code *)0x0) goto LAB_710023e2f0;
LAB_710023e2cc:
    uVar6 = (*pcVar13)(param_2 & 1);
    pcVar13 = *(code **)(param_1 + 0x518);
joined_r0x00710023e314:
    if (pcVar13 == (code *)0x0) goto LAB_710023e318;
LAB_710023e2e0:
    uVar7 = (*pcVar13)(param_2 & 1);
  }
  uVar12 = 1;
  if ((param_2 & 1) == 0) {
    uVar12 = 2;
  }
  uVar10 = FUN_7100230c10((long)plVar8,uVar7,uVar12,uVar6);
  if ((uVar10 & 1) == 0) {
    if (*(long *)(param_1 + 0x508) != 0) {
      return plVar8;
    }
    FUN_7100231550((long)plVar8);
    if (plVar8 == (long *)0x0) {
      return (long *)0x0;
    }
    (**(code **)(*plVar8 + 8))(plVar8);
    return (long *)0x0;
  }
  if ((param_2 & 1) != 0) {
    return plVar8;
  }
  plVar11 = FUN_71001af850(0x70);
  local_50 = &PTR_FUN_7104f5c438;
  local_48 = (long *)0x0;
  plVar14 = *(long **)(param_1 + 0x4c0);
  if (plVar14 == (long *)0x0) {
    FUN_7100245640(plVar11,(long)&local_50);
    local_50 = &PTR_FUN_7104f5c438;
    ppuVar5 = local_50;
    goto LAB_710023e5d4;
  }
  plVar1 = plVar14 + 1;
  if ((int)*plVar1 != 0) {
    iVar15 = (int)*plVar1;
    if (iVar15 == (int)*plVar1) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_710023e4b0;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      while (iVar4 = (int)*plVar1, iVar4 != iVar15) {
        ClearExclusiveLocal();
        iVar15 = iVar4;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      iVar15 = iVar4;
    } while (cVar2 != '\0');
  }
LAB_710023e4b0:
  local_48 = plVar14;
  FUN_7100245640(plVar11,(long)&local_50);
  local_50 = &PTR_FUN_7104f5c438;
  ppuVar5 = &PTR_FUN_7104f5c438;
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 1;
    iVar15 = (int)*plVar1;
    iVar4 = (int)*plVar1 + -1;
    if (iVar15 != (int)*plVar1) {
      ClearExclusiveLocal();
      iVar16 = iVar15;
      goto LAB_710023e504;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    while (iVar16 = iVar15, cVar2 != '\0') {
LAB_710023e504:
      while( true ) {
        iVar15 = (int)*plVar1;
        iVar4 = iVar16 + -1;
        if (iVar15 == iVar16) break;
        ClearExclusiveLocal();
        iVar16 = iVar15;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    }
    ppuVar5 = local_50;
    if (iVar4 == 0) {
      piVar17 = (int *)((long)plVar14 + 0xc);
      local_50 = &PTR_FUN_7104f5c438;
      (**(code **)(*plVar14 + 0x10))(plVar14);
      iVar15 = *piVar17;
      iVar4 = *piVar17 + -1;
      if (iVar15 != *piVar17) {
        ClearExclusiveLocal();
        iVar16 = iVar15;
        goto LAB_710023e588;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar3) {
        *piVar17 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
      while (iVar16 = iVar15, cVar2 != '\0') {
LAB_710023e588:
        while( true ) {
          iVar15 = *piVar17;
          iVar4 = iVar16 + -1;
          if (iVar15 == iVar16) break;
          ClearExclusiveLocal();
          iVar16 = iVar15;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      }
      ppuVar5 = local_50;
      if (iVar4 == 0) {
        (**(code **)(*plVar14 + 8))(plVar14);
        ppuVar5 = local_50;
      }
    }
  }
LAB_710023e5d4:
  local_50 = ppuVar5;
  plVar11[0xb] = plVar8[2];
  FUN_7100231580((long)plVar8,plVar11,FUN_7100240360);
  return plVar8;
}

