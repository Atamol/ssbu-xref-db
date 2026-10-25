// addr:      7100262a10
// offset:    0x262a10
// name:      FUN_7100262a10
// mangled:   
// signature: undefined FUN_7100262a10(void)


/* WARNING: Removing unreachable block (ram,0x007100262ca8) */
/* WARNING: Removing unreachable block (ram,0x007100262cbc) */

undefined8
FUN_7100262a10(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  
  bVar5 = FUN_71001ccd00(param_2);
  if (!bVar5) {
    return 0;
  }
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if ((uVar6 & 1) == 0) {
    iStack_90 = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)auStack_78,&iStack_90);
    puVar9 = auStack_78;
LAB_7100262d04:
    FUN_71001d0c90((long)param_2,puVar9);
    return 1;
  }
  plVar7 = FUN_71001af850(0x378);
  if (plVar7 != (long *)0x0) {
    FUN_71001d38d0(plVar7,2);
    *(undefined4 *)(plVar7 + 0x14) = 0;
    plVar7[0x18] = 0;
    plVar7[0x1b] = 0;
    plVar7[0x15] = 0;
    plVar7[0x16] = 0;
    *(undefined1 *)(plVar7 + 0x17) = 1;
    *(undefined4 *)(plVar7 + 0x1c) = 0;
    *plVar7 = (long)&PTR_FUN_7104f5f190;
    plVar7[0x1d] = 0;
    plVar7[0x1e] = 0;
    FUN_710022e6b0(plVar7 + 0x1f,0);
    FUN_7100279c50(plVar7 + 0x37);
    plVar7[0x5e] = (long)(plVar7 + 0x5c);
    plVar7[0x58] = 0;
    plVar7[0x5f] = 0x10;
    *(undefined1 *)(plVar7 + 0x5a) = 0;
    *(undefined1 *)(plVar7 + 0x5c) = 0;
    plVar7[0x60] = 0;
    plVar7[0x61] = 0;
    plVar7[0x62] = 0;
    plVar7[99] = 0;
    plVar7[100] = 0;
    plVar7[0x65] = 0;
    plVar7[0x66] = 0;
    plVar7[0x67] = 0;
    plVar7[0x68] = 0;
    plVar7[0x5b] = (long)&PTR_FUN_710509cc08;
    plVar7[0x59] = (long)&PTR_FUN_7104f5ff18;
    plVar7[0x69] = 0;
    plVar7[0x6a] = 0;
    iStack_90 = CONCAT31(iStack_90._1_3_,1);
    FUN_71001b4220((undefined4 *)(plVar7 + 0x6b),(char *)&iStack_90);
    plVar7[0x6e] = 0;
  }
  (**(code **)(*plVar7 + 0x68))
            (&iStack_90,plVar7,(int)param_2[3],param_1 + 4,param_3,(int)param_1[0x18],
             *(undefined1 *)((long)param_1 + 0xc4),param_1[0x1b],param_1[0x1c],param_1[0x1d],
             (int)param_1[0x19],*(undefined4 *)((long)param_1 + 0xcc),param_4,param_5,param_1[0x1a],
             param_6,param_7 & 1);
  pcVar10 = FUN_710170d030;
  if (iStack_90 < 0) {
    pcVar10 = (code *)0x0;
  }
  if (pcVar10 == (code *)0x0) {
    plVar13 = plVar7 + 1;
    iVar12 = (int)*plVar13;
    iVar4 = (int)*plVar13 + -1;
    if (iVar12 != (int)*plVar13) {
      ClearExclusiveLocal();
      goto LAB_7100262c84;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *(int *)plVar13 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_7100262c84:
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
    puVar9 = &uStack_a8;
    uStack_a0 = uStack_88;
    uStack_98 = uStack_80;
    uStack_a8 = CONCAT44(uStack_8c,iStack_90);
    goto LAB_7100262d04;
  }
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100262c0c:
    if ((*plVar13 != 0) && (lVar11 = *(long *)(*plVar13 + 0x10), lVar11 != 0)) {
      lVar11 = *(long *)(lVar11 + 0x10);
      goto LAB_7100262d2c;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar8;
    if (uVar2 == 0) goto LAB_7100262c0c;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_7100262c0c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar11 = 0;
LAB_7100262d2c:
  FUN_71001ccdf0(lVar11,(long)plVar7,0);
  return 1;
}

