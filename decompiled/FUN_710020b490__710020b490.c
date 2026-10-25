// addr:      710020b490
// offset:    0x20b490
// name:      FUN_710020b490
// mangled:   
// signature: undefined FUN_710020b490(void)


void FUN_710020b490(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  long *plVar4;
  uint *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 auStack_88 [3];
  undefined8 auStack_70 [3];
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  undefined4 uStack_34;
  
  lStack_48 = 0;
  uStack_58 = &uStack_58;
  plStack_50 = &uStack_58;
  (**(code **)(*param_1 + 0x88))();
  plVar7 = (long *)param_1[0x13];
  while (plVar7 != param_1 + 0x14) {
    lVar8 = plVar7[0x17];
    plVar4 = FUN_71001b1820(0x18);
    plVar4[1] = (long)&uStack_58;
    plVar4[2] = lVar8;
    *plVar4 = 0;
    *plVar4 = (long)uStack_58;
    uStack_58[1] = (long)plVar4;
    lStack_48 = lStack_48 + 1;
    plVar6 = (long *)plVar7[1];
    uStack_58 = plVar4;
    if ((long *)plVar7[1] == (long *)0x0) {
      plVar6 = plVar7 + 2;
      bVar3 = *(long **)*plVar6 != plVar7;
      plVar7 = (long *)*plVar6;
      if (bVar3) {
        do {
          lVar8 = *plVar6;
          plVar6 = (long *)(lVar8 + 0x10);
          plVar7 = (long *)*plVar6;
        } while (*plVar7 != lVar8);
      }
    }
    else {
      do {
        plVar7 = plVar6;
        plVar6 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  if (&uStack_58 != plStack_50) {
    plVar7 = plStack_50;
    do {
      lVar8 = plVar7[2];
      uStack_34 = 0x80050007;
      FUN_71001b4200((undefined4 *)auStack_70,&uStack_34);
      FUN_7100209ab0(lVar8,auStack_70);
      plVar7 = (long *)plVar7[1];
    } while (&uStack_58 != plVar7);
  }
  if (lStack_48 != 0) {
    lVar8 = *plStack_50;
    *(long *)(lVar8 + 8) = uStack_58[1];
    *(long *)uStack_58[1] = lVar8;
    lStack_48 = 0;
    plVar7 = plStack_50;
    while (plVar7 != &uStack_58) {
      plVar6 = (long *)plVar7[1];
      FUN_71001b1870((long)plVar7);
      plVar7 = plVar6;
    }
  }
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020b63c:
    if ((*plVar7 != 0) && (lVar8 = *(long *)(*plVar7 + 0x10), lVar8 != 0)) {
      lVar8 = *(long *)(lVar8 + 0x10);
      goto LAB_710020b670;
    }
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar5;
    if (uVar1 == 0) goto LAB_710020b63c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710020b63c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar8 = 0;
LAB_710020b670:
  plVar6 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  for (plVar7 = (long *)param_1[0x17]; param_1 + 0x16 != plVar7; plVar7 = (long *)plVar7[1]) {
    lVar8 = plVar7[2];
    uVar2 = (ulong)uStack_58 >> 0x20;
    uStack_58 = (long *)CONCAT44((int)uVar2,0x80050007);
    FUN_71001b4200((undefined4 *)auStack_88,(undefined4 *)&uStack_58);
    FUN_7100209ab0(lVar8,auStack_88);
  }
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

