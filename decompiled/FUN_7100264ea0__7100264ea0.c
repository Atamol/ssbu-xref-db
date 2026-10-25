// addr:      7100264ea0
// offset:    0x264ea0
// name:      FUN_7100264ea0
// mangled:   
// signature: undefined FUN_7100264ea0(void)


/* WARNING: Removing unreachable block (ram,0x007100265084) */
/* WARNING: Removing unreachable block (ram,0x007100265098) */

undefined8
FUN_7100264ea0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int aiStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [3];
  
  bVar5 = FUN_71001ccd00(param_2);
  if (!bVar5) {
    return 0;
  }
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if ((uVar6 & 1) == 0) {
    aiStack_70[0] = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)auStack_58,aiStack_70);
    puVar9 = auStack_58;
LAB_71002650e0:
    FUN_71001d0c90((long)param_2,puVar9);
    return 1;
  }
  plVar7 = FUN_71001af850(0x1e0);
  if (plVar7 != (long *)0x0) {
    FUN_71001d38d0(plVar7,2);
    *(undefined4 *)(plVar7 + 0x14) = 0;
    plVar7[0x15] = 0;
    plVar7[0x16] = 0;
    plVar7[0x21] = 0;
    plVar7[0x17] = 0;
    plVar7[0x18] = 0;
    *(undefined1 *)(plVar7 + 0x22) = 0;
    *plVar7 = (long)&PTR_FUN_7104f5f108;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    plVar7[0x1b] = 0;
    plVar7[0x1c] = 0;
    plVar7[0x1d] = 0;
    plVar7[0x1e] = 0;
    plVar7[0x1f] = 0;
    plVar7[0x20] = 0;
    FUN_710022e6b0(plVar7 + 0x23,0);
    plVar7[0x3b] = 0;
  }
  (**(code **)(*plVar7 + 0x70))
            (aiStack_70,plVar7,(int)param_2[3],param_1 + 4,param_3,param_4,param_5);
  pcVar10 = FUN_710170d030;
  if (aiStack_70[0] < 0) {
    pcVar10 = (code *)0x0;
  }
  if (pcVar10 == (code *)0x0) {
    plVar13 = plVar7 + 1;
    iVar12 = (int)*plVar13;
    iVar4 = (int)*plVar13 + -1;
    if (iVar12 != (int)*plVar13) {
      ClearExclusiveLocal();
      goto LAB_7100265060;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *(int *)plVar13 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_7100265060:
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
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    puVar9 = &uStack_88;
    uStack_80 = uStack_68;
    uStack_78 = uStack_60;
    goto LAB_71002650e0;
  }
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100264fe8:
    if ((*plVar13 != 0) && (lVar11 = *(long *)(*plVar13 + 0x10), lVar11 != 0)) {
      lVar11 = *(long *)(lVar11 + 0x10);
      goto LAB_7100265108;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar8;
    if (uVar2 == 0) goto LAB_7100264fe8;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_7100264fe8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar11 = 0;
LAB_7100265108:
  FUN_71001ccdf0(lVar11,(long)plVar7,0);
  return 1;
}

