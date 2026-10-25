// addr:      710354f7b0
// offset:    0x354f7b0
// name:      FUN_710354f7b0
// mangled:   
// signature: undefined __cdecl FUN_710354f7b0(long param_1)


void FUN_710354f7b0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulong uVar11;
  
  lVar6 = *(long *)(param_1 + 200);
  for (lVar8 = *(long *)(param_1 + 0xc0); lVar8 != lVar6; lVar8 = lVar8 + 0x20) {
    plVar1 = *(long **)(lVar8 + 8);
    plVar3 = *(long **)(lVar8 + 0x10);
    lVar7 = *(long *)(lVar8 + 0x18);
    *(undefined8 *)(lVar8 + 8) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    if (((plVar3 != (long *)0x0) && (plVar1 != (long *)0x0)) && (*plVar3 == lVar7)) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    puVar4 = (ulong *)*(ulong *)(param_1 + 0xa8);
    while (puVar4 != (ulong *)0x0) {
      uVar11 = *puVar4;
      if ((*(byte *)(puVar4 + 2) & 1) != 0) {
        pvVar10 = (void *)puVar4[4];
        nu::VirtualFreeHook(pvVar10);
        FUN_710392eb40((ulong)pvVar10);
      }
      FUN_710392eb40((ulong)puVar4);
      puVar4 = (ulong *)uVar11;
    }
    uVar11 = *(ulong *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (uVar11 != 0) {
      uVar5 = uVar11 & 3;
      if (uVar11 - 1 < 3) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        do {
          lVar6 = lVar8 * 8;
          lVar8 = lVar8 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar6) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar6 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar6 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar6 + 0x18) = 0;
        } while (uVar11 - uVar5 != lVar8);
      }
      if (uVar5 != 0) {
        lVar8 = lVar8 << 3;
        lVar6 = -uVar5;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar8) = 0;
          lVar8 = lVar8 + 8;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xc0);
  puVar9 = *(undefined8 **)(param_1 + 200);
  while (puVar9 != puVar2) {
    puVar9 = puVar9 + -4;
    (**(code **)*puVar9)(puVar9);
  }
  *(undefined8 **)(param_1 + 200) = puVar2;
  return;
}

