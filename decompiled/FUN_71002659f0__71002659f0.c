// addr:      71002659f0
// offset:    0x2659f0
// name:      FUN_71002659f0
// mangled:   
// signature: undefined8 __cdecl FUN_71002659f0(long * param_1, long * param_2, long param_3, long param_4, long param_5, long param_6, long param_7, void * param_8, byte param_9, byte param_10)


/* WARNING: Removing unreachable block (ram,0x007100265bf8) */
/* WARNING: Removing unreachable block (ram,0x007100265c0c) */

undefined8
FUN_71002659f0(long *param_1,long *param_2,long param_3,long param_4,long param_5,long param_6,
              long param_7,void *param_8,byte param_9,byte param_10)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  uint *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [4];
  
  bVar5 = FUN_71001ccd00(param_2);
  if (!bVar5) {
    return 0;
  }
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if ((uVar6 & 1) == 0) {
    local_98[0] = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)auStack_80,local_98);
    puVar9 = auStack_80;
LAB_7100265c50:
    FUN_71001d0c90((long)param_2,puVar9);
    return 1;
  }
  plVar7 = FUN_71001af850(0x4a8);
  if (plVar7 != (long *)0x0) {
    FUN_7100282210(plVar7);
  }
  FUN_7100266150(local_98,plVar7,(int)param_2[3],(long)(param_1 + 4),param_3,param_4,
                 (int)param_1[0x18],*(byte *)((long)param_1 + 0xc4),param_1[0x1b],param_1[0x1c],
                 param_1[0x1d],(int)param_1[0x19],*(undefined4 *)((long)param_1 + 0xcc),param_5,
                 param_6,param_7,param_1[0x1a],param_8,param_9 & 1,param_10 & 1);
  pcVar10 = FUN_710170d030;
  if (local_98[0] < 0) {
    pcVar10 = (code *)0x0;
  }
  if (pcVar10 == (code *)0x0) {
    plVar13 = plVar7 + 1;
    iVar12 = (int)*plVar13;
    iVar4 = (int)*plVar13 + -1;
    if (iVar12 != (int)*plVar13) {
      ClearExclusiveLocal();
      goto LAB_7100265bd4;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *(int *)plVar13 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_7100265bd4:
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
    if ((iVar4 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar7 + 0xc) = 1;
      (**(code **)(*plVar7 + 8))();
    }
    puVar9 = &local_b0;
    local_a8 = local_90;
    uStack_a0 = uStack_88;
    goto LAB_7100265c50;
  }
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar8;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        lVar11 = 0;
        goto LAB_7100265c7c;
      }
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar13 == 0) || (lVar11 = *(long *)(*plVar13 + 0x10), lVar11 == 0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x10);
  }
LAB_7100265c7c:
  FUN_71001ccdf0(lVar11,(long)plVar7,0);
  return 1;
}

