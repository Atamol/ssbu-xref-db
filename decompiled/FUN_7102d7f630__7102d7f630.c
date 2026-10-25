// addr:      7102d7f630
// offset:    0x2d7f630
// name:      FUN_7102d7f630
// mangled:   
// signature: undefined __cdecl FUN_7102d7f630(long param_1)


void FUN_7102d7f630(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  (**(code **)(**(long **)(param_1 + 0x38) + 0x40))();
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  for (puVar4 = *(undefined8 **)(param_1 + 0x40); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(long *)*puVar4 + 0x40))();
  }
  lVar3 = *(long *)(param_1 + 8);
  plVar2 = *(long **)(**(long **)(lVar3 + 0x338) + 8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2,0x1b,0xffffffff);
    lVar3 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(*(long *)(lVar3 + 0x300) + 0x18);
  plVar2 = (long *)*plVar5;
  plVar5 = (long *)plVar5[1];
  plVar6 = plVar2;
  if (plVar2 != plVar5) {
    do {
      plVar7 = plVar6 + 1;
      if ((*(ulong *)(*plVar6 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
        puVar4 = *(undefined8 **)(*plVar6 + 0x130);
        if (puVar4 != (undefined8 *)0x0) {
          FUN_71025f5420((undefined8 *)*puVar4,(undefined8 *)puVar4[1],"IPP0001");
          plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x300) + 0x18);
          plVar5 = (long *)plVar2[1];
          plVar2 = (long *)*plVar2;
        }
        break;
      }
      plVar6 = plVar7;
    } while (plVar5 != plVar7);
    do {
      if (plVar2 == plVar5) {
        return;
      }
      lVar3 = *plVar2;
      plVar2 = plVar2 + 1;
    } while ((*(ulong *)(lVar3 + 0xa0) & 0xffffffffff) != 0x7d8420788);
    puVar4 = *(undefined8 **)(lVar3 + 0x130);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_71025f55b0((undefined8 *)*puVar4,(undefined8 *)puVar4[1],"IPP1101");
      return;
    }
  }
  return;
}

