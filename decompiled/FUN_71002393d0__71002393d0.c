// addr:      71002393d0
// offset:    0x2393d0
// name:      FUN_71002393d0
// mangled:   
// signature: undefined4 __cdecl FUN_71002393d0(long param_1, long * param_2, undefined8 param_3, char * param_4, char * param_5, char * param_6, undefined2 param_7, char * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)


/* WARNING: Removing unreachable block (ram,0x007100239a40) */
/* WARNING: Removing unreachable block (ram,0x007100239648) */
/* WARNING: Removing unreachable block (ram,0x0071002395a4) */
/* WARNING: Removing unreachable block (ram,0x007100239590) */
/* WARNING: Removing unreachable block (ram,0x00710023965c) */
/* WARNING: Removing unreachable block (ram,0x007100239700) */
/* WARNING: Removing unreachable block (ram,0x007100239714) */
/* WARNING: Removing unreachable block (ram,0x007100239a2c) */

undefined4
FUN_71002393d0(long param_1,long *param_2,undefined8 param_3,char *param_4,char *param_5,
              char *param_6,undefined2 param_7,char *param_8,undefined8 param_9,undefined8 param_10,
              undefined8 param_11)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 uVar13;
  long *plVar14;
  undefined **local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined8 local_68;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100239464:
    if (*plVar10 == 0) goto LAB_710023948c;
    lVar9 = *(long *)(*plVar10 + 0x10);
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar8;
    if (uVar4 == 0) goto LAB_7100239464;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_7100239464;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710023948c:
    lVar9 = 0;
  }
  FUN_71001d5dd0(lVar9,0);
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002394dc:
    if ((*plVar10 == 0) || (lVar9 = *(long *)(*plVar10 + 0x10), lVar9 == 0)) goto LAB_710023950c;
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar8;
    if (uVar4 == 0) goto LAB_71002394dc;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_71002394dc;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710023950c:
    lVar9 = 0;
  }
  plVar14 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  plVar10 = *(long **)(param_1 + 0x108);
  if (plVar10 == (long *)0x0) {
LAB_71002395d8:
    plVar10 = *(long **)(param_1 + 0xf8);
    if (plVar10 != (long *)0x0) {
      if ((int)plVar10[8] != 5) goto LAB_7100239770;
      plVar2 = plVar10 + 1;
      iVar12 = (int)*plVar2;
      iVar6 = (int)*plVar2 + -1;
      if (iVar12 != (int)*plVar2) {
        ClearExclusiveLocal();
        goto LAB_7100239624;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
      while (cVar5 != '\0') {
LAB_7100239624:
        while( true ) {
          iVar1 = (int)*plVar2;
          iVar6 = iVar12 + -1;
          if (iVar1 == iVar12) break;
          ClearExclusiveLocal();
          iVar12 = iVar1;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        iVar12 = iVar1;
        if (bVar7) {
          *(int *)plVar2 = iVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar6 == 0) && (*(char *)((long)plVar10 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar10 + 0xc) = 1;
        (**(code **)(*plVar10 + 8))();
      }
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    plVar10 = *(long **)(param_1 + 0x100);
    if (plVar10 != (long *)0x0) {
      if ((int)plVar10[8] != 5) goto LAB_7100239770;
      plVar2 = plVar10 + 1;
      iVar12 = (int)*plVar2;
      iVar6 = (int)*plVar2 + -1;
      if (iVar12 != (int)*plVar2) {
        ClearExclusiveLocal();
        goto LAB_71002396dc;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
      while (cVar5 != '\0') {
LAB_71002396dc:
        while( true ) {
          iVar1 = (int)*plVar2;
          iVar6 = iVar12 + -1;
          if (iVar1 == iVar12) break;
          ClearExclusiveLocal();
          iVar12 = iVar1;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        iVar12 = iVar1;
        if (bVar7) {
          *(int *)plVar2 = iVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar6 == 0) && (*(char *)((long)plVar10 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar10 + 0xc) = 1;
        (**(code **)(*plVar10 + 8))();
      }
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    bVar7 = FUN_71001ccd00(param_2);
    if (bVar7) {
      if (*(long *)(param_1 + 0xc0) == 0) {
        puVar11 = FUN_71001af850(0x98);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &PTR_FUN_710523be40;
          *(undefined4 *)(puVar11 + 1) = 1;
          *(undefined1 *)((long)puVar11 + 0xc) = 0;
          puVar11[2] = 0;
          *(undefined4 *)(puVar11 + 3) = 0;
          *puVar11 = &PTR_FUN_7104f5b740;
          puVar11[4] = &PTR_FUN_710509cc08;
          *(undefined1 *)(puVar11 + 5) = 0;
          puVar11[7] = puVar11 + 5;
          puVar11[8] = 0x10;
          puVar11[9] = &PTR_FUN_710509cc08;
          *(undefined1 *)(puVar11 + 10) = 0;
          puVar11[0xc] = puVar11 + 10;
          puVar11[0xd] = 0x10;
          FUN_71001b47e0((long)(puVar11 + 9),"",-1);
          puVar11[0xe] = 0;
          puVar11[0xf] = 0;
          puVar11[0x10] = 0;
          puVar11[0x11] = 0;
        }
        *(undefined8 **)(param_1 + 0xc0) = puVar11;
        plVar10 = &DAT_71052af1a0;
        if (DAT_71052af1d8 != '\0') goto LAB_710023984c;
LAB_7100239884:
        if (*plVar10 == 0) goto LAB_71002398ac;
        lVar9 = *(long *)(*plVar10 + 0x10);
      }
      else {
        plVar10 = &DAT_71052af1a0;
        if (DAT_71052af1d8 == '\0') goto LAB_7100239884;
LAB_710023984c:
        plVar10 = &DAT_71052af1a0;
        puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar4 = *puVar8;
        if (uVar4 == 0) goto LAB_7100239884;
        if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x88);
          goto LAB_7100239884;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002398ac:
        lVar9 = 0;
      }
      plVar10 = (long *)(lVar9 + 0x30);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      *(long *)(lVar9 + 0x78) = *(long *)(lVar9 + 0x78) + 1;
      (**(code **)(*plVar10 + 0x20))(plVar10);
      if (*(int *)(param_1 + 0x110) == 0) {
        *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xb8);
        puVar11 = FUN_71001af850(0x520);
        if (puVar11 == (undefined8 *)0x0) goto LAB_71002399c8;
LAB_71002398f0:
        lVar9 = param_2[3];
        local_70 = local_80;
        local_80[0] = 0;
        local_68 = 0x10;
        local_88 = &PTR_FUN_710509cc08;
        FUN_71001b47e0((long)&local_88,param_4,-1);
        FUN_710023cca0(puVar11,(int)lVar9,param_1,param_3,(long)&local_88,param_5,param_6,param_7,
                       param_8,param_9,param_10,param_11,*(uint *)(param_1 + 0x110),
                       *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                       *(undefined8 *)(param_1 + 0xf0));
        *(undefined8 **)(param_1 + 0xf8) = puVar11;
        local_88 = &PTR_FUN_710509cc08;
        FUN_71001b4910((long)&local_88);
        lVar9 = *(long *)(param_1 + 0xf8);
      }
      else {
        puVar11 = FUN_71001af850(0x520);
        if (puVar11 != (undefined8 *)0x0) goto LAB_71002398f0;
LAB_71002399c8:
        lVar9 = 0;
        *(undefined8 *)(param_1 + 0xf8) = 0;
      }
      piVar3 = (int *)(lVar9 + 8);
      iVar12 = *piVar3;
      if (iVar12 != *piVar3) {
        ClearExclusiveLocal();
        goto LAB_7100239a08;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      while (cVar5 != '\0') {
LAB_7100239a08:
        while (iVar6 = *piVar3, iVar6 != iVar12) {
          ClearExclusiveLocal();
          iVar12 = iVar6;
        }
        iVar1 = iVar12 + 1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        iVar12 = iVar6;
        if (bVar7) {
          *piVar3 = iVar1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      }
      plVar10 = &DAT_71052af138;
      if (DAT_71052af1d8 == '\0') {
LAB_7100239a94:
        if ((*plVar10 == 0) || (lVar9 = *(long *)(*plVar10 + 0x10), lVar9 == 0))
        goto LAB_7100239ac4;
        lVar9 = *(long *)(lVar9 + 0x10);
      }
      else {
        puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar4 = *puVar8;
        if (uVar4 == 0) goto LAB_7100239a94;
        if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
          goto LAB_7100239a94;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100239ac4:
        lVar9 = 0;
      }
      FUN_71001ccdf0(lVar9,*(long *)(param_1 + 0xf8),0);
      uVar13 = 1;
      goto LAB_7100239774;
    }
  }
  else if ((int)plVar10[8] == 5) {
    plVar2 = plVar10 + 1;
    iVar12 = (int)*plVar2;
    iVar6 = (int)*plVar2 + -1;
    if (iVar12 != (int)*plVar2) {
      ClearExclusiveLocal();
      goto LAB_710023956c;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *(int *)plVar2 = iVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
    while (cVar5 != '\0') {
LAB_710023956c:
      while( true ) {
        iVar1 = (int)*plVar2;
        iVar6 = iVar12 + -1;
        if (iVar1 == iVar12) break;
        ClearExclusiveLocal();
        iVar12 = iVar1;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      iVar12 = iVar1;
      if (bVar7) {
        *(int *)plVar2 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar6 == 0) && (*(char *)((long)plVar10 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar10 + 0xc) = 1;
      (**(code **)(*plVar10 + 8))();
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
    goto LAB_71002395d8;
  }
LAB_7100239770:
  uVar13 = 0;
LAB_7100239774:
  (**(code **)(*plVar14 + 0x20))(plVar14);
  return uVar13;
}

