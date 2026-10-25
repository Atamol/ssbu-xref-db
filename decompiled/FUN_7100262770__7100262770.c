// addr:      7100262770
// offset:    0x262770
// name:      FUN_7100262770
// mangled:   
// signature: undefined FUN_7100262770(void)


/* WARNING: Removing unreachable block (ram,0x00710026293c) */
/* WARNING: Removing unreachable block (ram,0x007100262950) */

undefined8
FUN_7100262770(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,byte param_7)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int aiStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 auStack_68 [3];
  
  bVar5 = FUN_71001ccd00(param_2);
  if (!bVar5) {
    return 0;
  }
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if ((uVar6 & 1) == 0) {
    aiStack_80[0] = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)auStack_68,aiStack_80);
    puVar9 = auStack_68;
LAB_7100262998:
    FUN_71001d0c90((long)param_2,puVar9);
    return 1;
  }
  plVar7 = FUN_71001af850(0x3a8);
  if (plVar7 != (long *)0x0) {
    FUN_710027af00(plVar7);
  }
  (**(code **)(*plVar7 + 0x68))
            (aiStack_80,plVar7,(int)param_2[3],param_1 + 4,param_3,(int)param_1[0x18],
             *(undefined1 *)((long)param_1 + 0xc4),param_1[0x1b],param_1[0x1c],param_1[0x1d],
             (int)param_1[0x19],*(undefined4 *)((long)param_1 + 0xcc),param_4,param_5,param_1[0x1a],
             param_6,param_7 & 1);
  pcVar10 = FUN_710170d030;
  if (aiStack_80[0] < 0) {
    pcVar10 = (code *)0x0;
  }
  if (pcVar10 == (code *)0x0) {
    plVar13 = plVar7 + 1;
    iVar12 = (int)*plVar13;
    iVar4 = (int)*plVar13 + -1;
    if (iVar12 != (int)*plVar13) {
      ClearExclusiveLocal();
      goto LAB_7100262918;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *(int *)plVar13 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_7100262918:
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
    puVar9 = &uStack_98;
    uStack_90 = uStack_78;
    uStack_88 = uStack_70;
    goto LAB_7100262998;
  }
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002628a0:
    if ((*plVar13 != 0) && (lVar11 = *(long *)(*plVar13 + 0x10), lVar11 != 0)) {
      lVar11 = *(long *)(lVar11 + 0x10);
      goto LAB_71002629c0;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar8;
    if (uVar2 == 0) goto LAB_71002628a0;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71002628a0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar11 = 0;
LAB_71002629c0:
  FUN_71001ccdf0(lVar11,(long)plVar7,0);
  return 1;
}

