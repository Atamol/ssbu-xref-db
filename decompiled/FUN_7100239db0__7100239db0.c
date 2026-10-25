// addr:      7100239db0
// offset:    0x239db0
// name:      FUN_7100239db0
// mangled:   
// signature: uint __cdecl FUN_7100239db0(long param_1, long * param_2, long param_3)


/* WARNING: Removing unreachable block (ram,0x007100239f98) */
/* WARNING: Removing unreachable block (ram,0x007100239eec) */
/* WARNING: Removing unreachable block (ram,0x007100239ed8) */
/* WARNING: Removing unreachable block (ram,0x007100239fac) */

uint FUN_7100239db0(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100239e24:
    if ((*plVar8 == 0) || (lVar9 = *(long *)(*plVar8 + 0x10), lVar9 == 0)) goto LAB_7100239e54;
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar7;
    if (uVar6 == 0) goto LAB_7100239e24;
    if ((ulong)uVar6 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x20);
      goto LAB_7100239e24;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100239e54:
    lVar9 = 0;
  }
  plVar11 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  plVar8 = *(long **)(param_1 + 0x108);
  if (plVar8 == (long *)0x0) {
LAB_7100239f20:
    plVar8 = *(long **)(param_1 + 0xf8);
    if (plVar8 != (long *)0x0) {
      if ((int)plVar8[8] != 5) goto LAB_7100239f60;
      plVar1 = plVar8 + 1;
      iVar10 = (int)*plVar1;
      iVar5 = (int)*plVar1 + -1;
      if (iVar10 != (int)*plVar1) {
        ClearExclusiveLocal();
        goto LAB_7100239f74;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
      while (cVar3 != '\0') {
LAB_7100239f74:
        while( true ) {
          iVar2 = (int)*plVar1;
          iVar5 = iVar10 + -1;
          if (iVar2 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar2;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        iVar10 = iVar2;
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar5 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar8 + 0xc) = 1;
        (**(code **)(*plVar8 + 8))();
      }
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    uVar6 = FUN_710023a020(param_1,param_2,param_3);
  }
  else {
    if ((int)plVar8[8] == 5) {
      plVar1 = plVar8 + 1;
      iVar10 = (int)*plVar1;
      iVar5 = (int)*plVar1 + -1;
      if (iVar10 != (int)*plVar1) {
        ClearExclusiveLocal();
        goto LAB_7100239eb4;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
      while (cVar3 != '\0') {
LAB_7100239eb4:
        while( true ) {
          iVar2 = (int)*plVar1;
          iVar5 = iVar10 + -1;
          if (iVar2 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar2;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        iVar10 = iVar2;
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar5 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar8 + 0xc) = 1;
        (**(code **)(*plVar8 + 8))();
      }
      *(undefined8 *)(param_1 + 0x108) = 0;
      goto LAB_7100239f20;
    }
LAB_7100239f60:
    uVar6 = 0;
  }
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return uVar6 & 1;
}

