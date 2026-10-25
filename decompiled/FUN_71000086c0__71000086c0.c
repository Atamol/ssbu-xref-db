// addr:      71000086c0
// offset:    0x86c0
// name:      FUN_71000086c0
// mangled:   
// signature: undefined __cdecl FUN_71000086c0(long param_1, long param_2, uint param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71000086c0(long param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  lVar9 = *(long *)(param_1 + 0xa8);
  if (lVar9 == 0) {
    return;
  }
  auVar13 = FUN_7100017740();
  uVar4 = auVar13._8_4_ + ((int)param_2 + (int)(param_2 / 1000) * -1000) * 1000;
  plVar7 = *(long **)(param_1 + 0x4d58);
  lVar1 = auVar13._0_8_ + param_2 / 1000;
  uVar3 = uVar4 - 1000000;
  if (uVar4 < 1000000) {
    uVar3 = uVar4;
  }
  if (999999 < uVar4) {
    lVar1 = lVar1 + 1;
  }
  uVar10 = auVar13._8_8_ & 0xffffffff00000000 | (ulong)uVar3;
  plVar2 = (long *)(param_1 + 0x4d58);
  for (; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[2]) {
    if (*(uint *)(*plVar7 + 0x28) == param_3) {
      FUN_7100006870(plVar2,plVar7,0);
      break;
    }
  }
  lVar12 = param_1 + (ulong)param_3 * 0x30;
  *(long *)(lVar12 + 0x4d90) = lVar1;
  *(ulong *)(lVar12 + 0x4d98) = uVar10;
  *(uint *)(lVar12 + 0x4da0) = param_3;
  lVar5 = FUN_71000069a0((long)plVar2);
  if ((lVar5 != 0) && (plVar7 = (long *)*plVar2, plVar7 != (long *)0x0)) {
    lVar5 = FUN_7100017750(*(long *)(*plVar7 + 0x18),(int)*(undefined8 *)(*plVar7 + 0x20),
                           *(long *)(lVar12 + 0x4d90),(int)*(undefined8 *)(lVar12 + 0x4d98));
    if (lVar5 < 1) {
      do {
        plVar11 = plVar7;
        plVar7 = (long *)plVar11[2];
        if (plVar7 == (long *)0x0) break;
        lVar5 = FUN_7100017750(*(long *)(*plVar7 + 0x18),(int)*(undefined8 *)(*plVar7 + 0x20),
                               *(long *)(lVar12 + 0x4d90),(int)*(undefined8 *)(lVar12 + 0x4d98));
      } while (lVar5 < 1);
      goto LAB_71000087e4;
    }
  }
  plVar11 = (long *)0x0;
LAB_71000087e4:
  FUN_71000067f0(plVar2,(long)plVar11,lVar12 + 0x4d78,(undefined8 *)(lVar12 + 0x4d78));
  if ((*(long *)(param_1 + 0x4d10) != 0) || (*(int *)(param_1 + 0x4d18) != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x4d18);
    lVar5 = FUN_7100017750(lVar1,uVar3,*(long *)(param_1 + 0x4d10),(int)uVar8);
    if (0 < lVar5) {
      return;
    }
    uVar6 = FUN_7100017150(*(long **)(lVar9 + 0xb0),(long *)(param_1 + 0x4d20),
                           (undefined8 *)(lVar9 + 0xb0));
    if ((int)uVar6 != 0) {
      FUN_7100015de0(param_1,(byte *)"Internal error removing splay node = %d\n",uVar6 & 0xffffffff,
                     uVar8,param_5,param_6,param_7,param_8);
    }
  }
  *(long *)(param_1 + 0x4d10) = lVar1;
  *(ulong *)(param_1 + 0x4d18) = uVar10;
  *(long *)(param_1 + 0x4d50) = param_1;
  plVar7 = FUN_7100016ed0(lVar1,uVar10,*(long **)(lVar9 + 0xb0),(long *)(param_1 + 0x4d20));
  *(long **)(lVar9 + 0xb0) = plVar7;
  return;
}

