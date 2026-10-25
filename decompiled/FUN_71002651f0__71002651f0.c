// addr:      71002651f0
// offset:    0x2651f0
// name:      FUN_71002651f0
// mangled:   
// signature: undefined FUN_71002651f0(void)


/* WARNING: Removing unreachable block (ram,0x007100265550) */
/* WARNING: Removing unreachable block (ram,0x007100265564) */

undefined8
FUN_71002651f0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  code *pcVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int aiStack_f8 [2];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined **ppuStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [4];
  
  bVar6 = FUN_71001ccd00(param_2);
  if (!bVar6) {
    return 0;
  }
  uVar7 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if ((uVar7 & 1) == 0) {
    ppuStack_e0 = (undefined **)CONCAT44(ppuStack_e0._4_4_,0x80010004);
    FUN_71001b4200((undefined4 *)auStack_80,(undefined4 *)&ppuStack_e0);
    FUN_71001d0c90((long)param_2,auStack_80);
    return 1;
  }
  plVar8 = FUN_71001af850(0x328);
  if (plVar8 != (long *)0x0) {
    FUN_71001d38d0(plVar8,2);
    *(undefined4 *)(plVar8 + 0x15) = 0;
    *(undefined1 *)(plVar8 + 0x18) = 1;
    *(undefined4 *)(plVar8 + 0x1d) = 0;
    plVar8[0x16] = 0;
    plVar8[0x17] = 0;
    plVar8[0x19] = 0;
    plVar8[0x1a] = 0;
    *plVar8 = (long)&PTR_FUN_7104f5f030;
    plVar8[0x14] = (long)&PTR_FUN_7104f5f0c8;
    plVar8[0x1b] = 0;
    plVar8[0x1c] = 0;
    plVar8[0x1e] = 0;
    plVar8[0x1f] = 0;
    FUN_710022e6b0(plVar8 + 0x20,0);
    *(undefined1 *)(plVar8 + 0x39) = 0;
    plVar8[0x41] = 0;
    plVar8[0x43] = 0;
    plVar8[0x3c] = (long)&PTR_FUN_710509d038;
    plVar8[0x3a] = 0;
    *(undefined1 *)(plVar8 + 0x3d) = 0;
    plVar8[0x3e] = 0;
    plVar8[0x40] = 0;
    *(undefined4 *)(plVar8 + 0x3b) = 0;
    plVar8[0x38] = (long)&PTR_FUN_710509d058;
    *(undefined2 *)(plVar8 + 0x3f) = 0xffff;
    plVar8[0x42] = 0;
    *(undefined1 *)(plVar8 + 0x45) = 0;
    *(undefined1 *)(plVar8 + 0x47) = 0;
    plVar8[0x4b] = 0;
    plVar8[0x4c] = 0;
    plVar8[0x46] = (long)&PTR_FUN_710509cc08;
    plVar8[0x49] = (long)(plVar8 + 0x47);
    plVar8[0x4a] = 0x10;
    plVar8[0x4d] = 0;
    plVar8[0x4f] = 0;
    plVar8[0x50] = 0;
    plVar8[0x51] = 0;
    plVar8[0x52] = 0;
    plVar8[0x44] = (long)&PTR_FUN_710509d2a8;
    *(undefined1 *)(plVar8 + 0x54) = 0;
    plVar8[0x53] = (long)&PTR_FUN_7104f5fe78;
    FUN_71001d74b0(plVar8 + 0x57,0,0);
    plVar8[0x5e] = 0;
    plVar8[0x5f] = 0;
    *(undefined1 *)(plVar8 + 0x60) = 0;
    plVar8[0x53] = (long)&PTR_FUN_7104f5fe18;
    plVar8[0x62] = 0;
    plVar8[99] = 0;
    *(undefined4 *)(plVar8 + 100) = 0x1000000;
  }
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  puStack_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  ppuStack_c0 = &PTR_FUN_710509d038;
  ppuStack_e0 = &PTR_FUN_710509d058;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_a8 = 0xffff;
  (**(code **)(*plVar8 + 0x68))
            (aiStack_f8,plVar8,(int)param_2[3],param_1 + 4,&ppuStack_e0,(int)param_1[0x18],
             *(undefined1 *)((long)param_1 + 0xc4),param_1[0x1b],param_1[0x1c],param_1[0x1d],
             (int)param_1[0x19],*(undefined4 *)((long)param_1 + 0xcc),param_4,param_1[0x1a],param_5,
             param_6,0,param_7,param_8,param_3);
  pcVar10 = FUN_710170d030;
  if (aiStack_f8[0] < 0) {
    pcVar10 = (code *)0x0;
  }
  if (pcVar10 == (code *)0x0) {
    plVar14 = plVar8 + 1;
    iVar12 = (int)*plVar14;
    iVar4 = (int)*plVar14 + -1;
    if (iVar12 != (int)*plVar14) {
      ClearExclusiveLocal();
      goto LAB_710026552c;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *(int *)plVar14 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_710026552c:
      while( true ) {
        iVar1 = (int)*plVar14;
        iVar4 = iVar12 + -1;
        if (iVar1 == iVar12) break;
        ClearExclusiveLocal();
        iVar12 = iVar1;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      iVar12 = iVar1;
      if (bVar6) {
        *(int *)plVar14 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar4 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar8 + 0xc) = 1;
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    uStack_108 = uStack_f0;
    uStack_100 = uStack_e8;
    FUN_71001d0c90((long)param_2,&uStack_110);
    goto LAB_71002655e0;
  }
  plVar14 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002654ac:
    if ((*plVar14 == 0) || (lVar11 = *(long *)(*plVar14 + 0x10), lVar11 == 0)) goto LAB_71002655d0;
    lVar11 = *(long *)(lVar11 + 0x10);
  }
  else {
    puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar9;
    if (uVar2 == 0) goto LAB_71002654ac;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar14 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71002654ac;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002655d0:
    lVar11 = 0;
  }
  FUN_71001ccdf0(lVar11,(long)plVar8,0);
LAB_71002655e0:
  puVar5 = puStack_98;
  ppuStack_e0 = &PTR_FUN_710509d078;
  puVar13 = puStack_90;
  if (puStack_98 != (undefined8 *)0x0) {
    while (puVar13 != puVar5) {
      puVar13 = puVar13 + -5;
      (**(code **)*puVar13)(puVar13);
    }
    puStack_90 = puVar5;
    FUN_71001b1870((long)puStack_98);
  }
  return 1;
}

