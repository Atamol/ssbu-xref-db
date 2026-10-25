// addr:      710025db30
// offset:    0x25db30
// name:      FUN_710025db30
// mangled:   
// signature: undefined __cdecl FUN_710025db30(long param_1, long * param_2)


void FUN_710025db30(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined ***local_68;
  
  plVar6 = param_2 + 1;
  FUN_710025ef50(param_2,(undefined8 *)*plVar6);
  param_2[2] = 0;
  *param_2 = (long)plVar6;
  *plVar6 = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(lVar2 + 0x18);
  if ((ulong)(lVar5 - lVar3) < 4) {
    uVar7 = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    uVar7 = *(uint *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + lVar3);
    *(long *)(param_1 + 0x18) = lVar3 + 4;
    if ((ulong)(lVar5 - (lVar3 + 4)) < (ulong)uVar7) {
      *(undefined1 *)(param_1 + 8) = 1;
      goto LAB_710025dbd8;
    }
  }
  if (uVar7 < 0x10000) {
    if (uVar7 == 0) {
      return;
    }
    uVar8 = 0;
    do {
      local_a0 = 0;
      local_90[0] = 0;
      uStack_78 = 0x10;
      local_b0 = (long *)0x0;
      local_a8 = (long *)0x0;
      local_98 = &PTR_FUN_710509cc08;
      local_80 = local_90;
      FUN_7100228650(param_1,(long)&local_98);
      FUN_71002607b0(param_1,(long *)&local_b0);
      local_68 = &local_98;
      auVar9 = FUN_7100260b60(param_2,(long)&local_98,&DAT_710449fdf0,(long *)&local_68);
      puVar1 = (undefined8 *)(auVar9._0_8_ + 0x48);
      if ((long **)puVar1 != &local_b0) {
        FUN_710025eff0(puVar1,local_b0,local_a8);
      }
      plVar4 = local_b0;
      plVar6 = local_a8;
      if (local_b0 != (long *)0x0) {
        while (plVar6 != plVar4) {
          FUN_71001b78a0(plVar6 + -2);
          plVar6 = plVar6 + -2;
        }
        local_a8 = plVar4;
        FUN_71001b1870((long)local_b0);
      }
      local_98 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_98);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar7);
    return;
  }
LAB_710025dbd8:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

