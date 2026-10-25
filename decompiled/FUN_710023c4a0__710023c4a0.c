// addr:      710023c4a0
// offset:    0x23c4a0
// name:      FUN_710023c4a0
// mangled:   
// signature: undefined __cdecl FUN_710023c4a0(undefined8 * param_1, undefined8 param_2, long * param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined8 param_7)


/* WARNING: Removing unreachable block (ram,0x00710023c614) */
/* WARNING: Removing unreachable block (ram,0x00710023c628) */

void FUN_710023c4a0(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  uint *puVar7;
  int *piVar8;
  code *pcVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  int local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_44;
  
  bVar5 = FUN_71001ccd00(param_3);
  if (!bVar5) {
    local_68 = -0x7ffefff3;
    piVar8 = &local_68;
    goto LAB_710023c6a4;
  }
  plVar6 = FUN_71001af850(0x1d8);
  if (plVar6 != (long *)0x0) {
    FUN_7100241220(plVar6);
  }
  (**(code **)(*plVar6 + 0x68))(&local_68,plVar6,(int)param_3[3],param_4,param_6,param_5,param_7);
  pcVar9 = FUN_710170d030;
  if (local_68 < 0) {
    pcVar9 = (code *)0x0;
  }
  if (pcVar9 == (code *)0x0) {
    plVar12 = plVar6 + 1;
    iVar11 = (int)*plVar12;
    iVar4 = (int)*plVar12 + -1;
    if (iVar11 == (int)*plVar12) {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
      while (cVar3 != '\0') {
LAB_710023c5f0:
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
      }
      param_1[2] = local_58;
      *param_1 = CONCAT44(uStack_64,local_68);
      param_1[1] = uStack_60;
      return;
    }
    ClearExclusiveLocal();
    goto LAB_710023c5f0;
  }
  plVar12 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710023c58c:
    if ((*plVar12 == 0) || (lVar10 = *(long *)(*plVar12 + 0x10), lVar10 == 0)) goto LAB_710023c688;
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar7;
    if (uVar2 == 0) goto LAB_710023c58c;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_710023c58c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710023c688:
    lVar10 = 0;
  }
  FUN_71001ccdf0(lVar10,(long)plVar6,0);
  piVar8 = &local_44;
  local_44 = 0x10001;
LAB_710023c6a4:
  FUN_71001b4200((undefined4 *)param_1,piVar8);
  return;
}

