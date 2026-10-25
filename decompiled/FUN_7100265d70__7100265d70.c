// addr:      7100265d70
// offset:    0x265d70
// name:      FUN_7100265d70
// mangled:   
// signature: undefined FUN_7100265d70(void)


/* WARNING: Removing unreachable block (ram,0x007100266020) */
/* WARNING: Removing unreachable block (ram,0x007100266034) */

undefined8
FUN_7100265d70(long *param_1,long *param_2,long *param_3,long param_4,void *param_5,byte param_6)

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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [4];
  
  bVar5 = FUN_71001ccd00(param_2);
  if (!bVar5) {
    return 0;
  }
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if ((uVar6 & 1) == 0) {
    iStack_88 = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)auStack_70,&iStack_88);
    puVar9 = auStack_70;
LAB_710026607c:
    FUN_71001d0c90((long)param_2,puVar9);
    return 1;
  }
  plVar7 = FUN_71001af850(0x2a8);
  if (plVar7 != (long *)0x0) {
    FUN_71001d38d0(plVar7,2);
    *(undefined4 *)(plVar7 + 0x14) = 0;
    plVar7[0x18] = 0;
    plVar7[0x1b] = 0;
    plVar7[0x15] = 0;
    plVar7[0x16] = 0;
    *(undefined1 *)(plVar7 + 0x17) = 1;
    *(undefined4 *)(plVar7 + 0x1c) = 0;
    *plVar7 = (long)&PTR_FUN_7104f5f540;
    plVar7[0x1d] = 0;
    plVar7[0x1e] = 0;
    FUN_710022e6b0(plVar7 + 0x1f,0);
    plVar7[0x3d] = (long)(plVar7 + 0x3b);
    plVar7[0x3e] = 0x10;
    *(undefined1 *)(plVar7 + 0x38) = 0;
    *(undefined1 *)(plVar7 + 0x3b) = 0;
    plVar7[0x3f] = 0;
    plVar7[0x40] = 0;
    plVar7[0x3a] = (long)&PTR_FUN_710509cc08;
    plVar7[0x41] = 0;
    plVar7[0x42] = 0;
    plVar7[0x43] = 0;
    plVar7[0x44] = 0;
    plVar7[0x45] = 0;
    plVar7[0x46] = 0;
    plVar7[0x47] = 0;
    plVar7[0x37] = (long)&PTR_FUN_7104f5fff8;
    plVar7[0x48] = 0;
    plVar7[0x49] = 0;
    iStack_88 = CONCAT31(iStack_88._1_3_,1);
    FUN_71001b4220((undefined4 *)(plVar7 + 0x4a),(char *)&iStack_88);
    plVar7[0x4d] = 0;
    *(undefined1 *)(plVar7 + 0x4f) = 0;
    plVar7[0x52] = 0;
    plVar7[0x54] = 0;
    *plVar7 = (long)&PTR_FUN_7104f5f5e0;
    plVar7[0x50] = 0;
    *(undefined4 *)(plVar7 + 0x51) = 0;
    *(undefined1 *)((long)plVar7 + 0x28c) = 1;
    plVar7[0x53] = 0;
    plVar7[0x4e] = (long)&PTR_FUN_710509d7b8;
  }
  FUN_7100266340(&iStack_88,plVar7,(int)param_2[3],(long)(param_1 + 4),param_3,(int)param_1[0x18],
                 *(byte *)((long)param_1 + 0xc4),param_1[0x1b],param_1[0x1c],param_1[0x1d],
                 (int)param_1[0x19],*(undefined4 *)((long)param_1 + 0xcc),param_4,param_1[0x1a],
                 param_5,param_6 & 1);
  pcVar10 = FUN_710170d030;
  if (iStack_88 < 0) {
    pcVar10 = (code *)0x0;
  }
  if (pcVar10 == (code *)0x0) {
    plVar13 = plVar7 + 1;
    iVar12 = (int)*plVar13;
    iVar4 = (int)*plVar13 + -1;
    if (iVar12 != (int)*plVar13) {
      ClearExclusiveLocal();
      goto LAB_7100265ffc;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *(int *)plVar13 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_7100265ffc:
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
    puVar9 = &uStack_a0;
    uStack_98 = uStack_80;
    uStack_90 = uStack_78;
    uStack_a0 = CONCAT44(uStack_84,iStack_88);
    goto LAB_710026607c;
  }
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100265f84:
    if ((*plVar13 != 0) && (lVar11 = *(long *)(*plVar13 + 0x10), lVar11 != 0)) {
      lVar11 = *(long *)(lVar11 + 0x10);
      goto LAB_71002660a4;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar8;
    if (uVar2 == 0) goto LAB_7100265f84;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_7100265f84;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar11 = 0;
LAB_71002660a4:
  FUN_71001ccdf0(lVar11,(long)plVar7,0);
  return 1;
}

