// addr:      71002636b0
// offset:    0x2636b0
// name:      FUN_71002636b0
// mangled:   
// signature: undefined FUN_71002636b0(void)


/* WARNING: Removing unreachable block (ram,0x0071002639ac) */
/* WARNING: Removing unreachable block (ram,0x0071002639c0) */

undefined4
FUN_71002636b0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
              undefined1 *param_10,byte param_11)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  uint *puVar8;
  code *pcVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int aiStack_90 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  
  bVar5 = FUN_71001ccd00(param_2);
  if (!bVar5) {
    return 0;
  }
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if ((uVar6 & 1) == 0) {
    *param_10 = 1;
    aiStack_90[0] = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)auStack_78,aiStack_90);
    FUN_71001d0c90((long)param_2,auStack_78);
    return 1;
  }
  plVar7 = FUN_71001af850(0x2b0);
  if (plVar7 != (long *)0x0) {
    FUN_71001d38d0(plVar7,2);
    *(undefined4 *)(plVar7 + 0x15) = 0;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    *plVar7 = (long)&PTR_FUN_7104f5ee80;
    plVar7[0x18] = 0;
    plVar7[0x14] = (long)&PTR_FUN_7104f5ef18;
    plVar7[0x19] = (long)&PTR_FUN_710509cc08;
    *(undefined1 *)(plVar7 + 0x1a) = 0;
    plVar7[0x1c] = (long)(plVar7 + 0x1a);
    plVar7[0x1d] = 0x10;
    FUN_71001b47e0((long)(plVar7 + 0x19),"",-1);
    plVar7[0x1e] = 0;
    FUN_710022e6b0(plVar7 + 0x1f,0);
    plVar7[0x41] = (long)(plVar7 + 0x3f);
    plVar7[0x42] = 0x10;
    plVar7[0x47] = 0x10;
    plVar7[0x46] = (long)(plVar7 + 0x44);
    plVar7[0x37] = 0;
    plVar7[0x38] = 0;
    plVar7[0x39] = 0;
    *(undefined4 *)(plVar7 + 0x3a) = 0;
    *(undefined1 *)(plVar7 + 0x3d) = 0;
    plVar7[0x3e] = (long)&PTR_FUN_710509cc08;
    *(undefined1 *)(plVar7 + 0x3f) = 0;
    plVar7[0x43] = (long)&PTR_FUN_710509cc08;
    *(undefined1 *)(plVar7 + 0x44) = 0;
    plVar7[0x48] = (long)&PTR_FUN_710509cc08;
    plVar7[0x4b] = (long)(plVar7 + 0x49);
    *(undefined1 *)(plVar7 + 0x49) = 0;
    plVar7[0x4c] = 0x10;
    plVar7[0x4d] = 0;
    plVar7[0x4e] = 0;
    plVar7[0x4f] = 0;
    plVar7[0x50] = 0;
    plVar7[0x51] = 0;
    plVar7[0x52] = 0;
    *(undefined4 *)(plVar7 + 0x53) = 0;
    *(undefined2 *)((long)plVar7 + 0x29c) = 0;
    plVar7[0x54] = 0;
    *(undefined1 *)(plVar7 + 0x55) = 0;
    plVar7[0x3b] = 0;
    plVar7[0x3c] = (long)&PTR_FUN_7104f5fc38;
  }
  (**(code **)(*plVar7 + 0x68))
            (aiStack_90,plVar7,(int)param_2[3],param_1 + 4,(int)param_1[0x18],
             *(undefined4 *)((long)param_1 + 0xcc),param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,param_10,param_11 & 1);
  pcVar9 = FUN_710170d030;
  if (aiStack_90[0] < 0) {
    pcVar9 = (code *)0x0;
  }
  if (pcVar9 == (code *)0x0) {
    plVar12 = plVar7 + 1;
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
LAB_7100263988:
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
      if ((iVar4 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar7 + 0xc) = 1;
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      uStack_a0 = uStack_88;
      uStack_98 = uStack_80;
      FUN_71001d0c90((long)param_2,&uStack_a8);
      return 1;
    }
    ClearExclusiveLocal();
    goto LAB_7100263988;
  }
  plVar12 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100263900:
    if ((*plVar12 != 0) && (lVar10 = *(long *)(*plVar12 + 0x10), lVar10 != 0)) {
      lVar10 = *(long *)(lVar10 + 0x10);
      goto LAB_7100263a30;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar8;
    if (uVar2 == 0) goto LAB_7100263900;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_7100263900;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar10 = 0;
LAB_7100263a30:
  FUN_71001ccdf0(lVar10,(long)plVar7,0);
  return 1;
}

