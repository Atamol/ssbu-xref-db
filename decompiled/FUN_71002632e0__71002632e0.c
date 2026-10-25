// addr:      71002632e0
// offset:    0x2632e0
// name:      FUN_71002632e0
// mangled:   
// signature: undefined FUN_71002632e0(void)


/* WARNING: Removing unreachable block (ram,0x00710026358c) */
/* WARNING: Removing unreachable block (ram,0x0071002635a0) */

undefined8
FUN_71002632e0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              byte param_6)

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
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 auStack_68 [3];
  
  bVar5 = FUN_71001ccd00(param_2);
  if (!bVar5) {
    return 0;
  }
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if ((uVar6 & 1) == 0) {
    iStack_80 = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)auStack_68,&iStack_80);
    puVar9 = auStack_68;
LAB_71002635e8:
    FUN_71001d0c90((long)param_2,puVar9);
    return 1;
  }
  plVar7 = FUN_71001af850(0x2a8);
  if (plVar7 != (long *)0x0) {
    FUN_71001d38d0(plVar7,2);
    *(undefined1 *)(plVar7 + 0x17) = 1;
    *(undefined4 *)(plVar7 + 0x14) = 0;
    *(undefined4 *)(plVar7 + 0x1c) = 0;
    plVar7[0x15] = 0;
    plVar7[0x16] = 0;
    *plVar7 = (long)&PTR_FUN_7104f5f3a0;
    plVar7[0x18] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    plVar7[0x1b] = 0;
    plVar7[0x1d] = 0;
    plVar7[0x1e] = 0;
    FUN_710022e6b0(plVar7 + 0x1f,0);
    *(undefined1 *)(plVar7 + 0x38) = 0;
    plVar7[0x3b] = 0;
    plVar7[0x3c] = 0;
    plVar7[0x3d] = 0;
    plVar7[0x3e] = 0;
    plVar7[0x39] = 0;
    *(undefined4 *)(plVar7 + 0x3a) = 0;
    *(undefined1 *)(plVar7 + 0x40) = 0;
    plVar7[0x37] = (long)&PTR_FUN_710509d328;
    plVar7[0x41] = (long)&PTR_FUN_710509cc08;
    plVar7[0x44] = (long)(plVar7 + 0x42);
    *(undefined1 *)(plVar7 + 0x42) = 0;
    plVar7[0x46] = 0;
    plVar7[0x47] = 0;
    plVar7[0x48] = 0;
    plVar7[0x49] = 0;
    plVar7[0x4a] = 0;
    plVar7[0x4b] = 0;
    plVar7[0x4c] = 0;
    plVar7[0x4d] = 0;
    plVar7[0x4e] = 0;
    plVar7[0x45] = 0x10;
    plVar7[0x3f] = (long)&PTR_FUN_7104f602f8;
    plVar7[0x4f] = 0;
    plVar7[0x50] = 0;
    iStack_80 = 0x10001;
    FUN_71001b4200((undefined4 *)(plVar7 + 0x51),&iStack_80);
    plVar7[0x54] = 0;
  }
  (**(code **)(*plVar7 + 0x68))
            (&iStack_80,plVar7,(int)param_2[3],param_1 + 4,param_3,(int)param_1[0x18],
             *(undefined1 *)((long)param_1 + 0xc4),param_1[0x1b],param_1[0x1c],param_1[0x1d],
             (int)param_1[0x19],*(undefined4 *)((long)param_1 + 0xcc),param_4,param_1[0x1a],param_5,
             param_6 & 1);
  pcVar10 = FUN_710170d030;
  if (iStack_80 < 0) {
    pcVar10 = (code *)0x0;
  }
  if (pcVar10 == (code *)0x0) {
    plVar13 = plVar7 + 1;
    iVar12 = (int)*plVar13;
    iVar4 = (int)*plVar13 + -1;
    if (iVar12 != (int)*plVar13) {
      ClearExclusiveLocal();
      goto LAB_7100263568;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *(int *)plVar13 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_7100263568:
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
    uStack_98 = CONCAT44(uStack_7c,iStack_80);
    goto LAB_71002635e8;
  }
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002634f0:
    if ((*plVar13 != 0) && (lVar11 = *(long *)(*plVar13 + 0x10), lVar11 != 0)) {
      lVar11 = *(long *)(lVar11 + 0x10);
      goto LAB_7100263610;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar8;
    if (uVar2 == 0) goto LAB_71002634f0;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71002634f0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar11 = 0;
LAB_7100263610:
  FUN_71001ccdf0(lVar11,(long)plVar7,0);
  return 1;
}

