// addr:      7102d8c600
// offset:    0x2d8c600
// name:      FUN_7102d8c600
// mangled:   
// signature: undefined __cdecl FUN_7102d8c600(long param_1)


void FUN_7102d8c600(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  (**(code **)(**(long **)(param_1 + 0x38) + 0x38))();
  lVar2 = *(long *)(param_1 + 8);
  plVar1 = *(long **)(**(long **)(lVar2 + 0x338) + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,0x10,0xffffffff);
    lVar2 = *(long *)(param_1 + 8);
  }
  plVar4 = *(long **)(*(long *)(lVar2 + 0x300) + 0x18);
  plVar1 = (long *)*plVar4;
  plVar4 = (long *)plVar4[1];
  plVar5 = plVar1;
  if (plVar1 != plVar4) {
    do {
      plVar6 = plVar5 + 1;
      if ((*(ulong *)(*plVar5 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
        puVar3 = *(undefined8 **)(*plVar5 + 0x130);
        if (puVar3 != (undefined8 *)0x0) {
          FUN_71025f55b0((undefined8 *)*puVar3,(undefined8 *)puVar3[1],"IPP0001");
          plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x300) + 0x18);
          plVar4 = (long *)plVar1[1];
          plVar1 = (long *)*plVar1;
        }
        break;
      }
      plVar5 = plVar6;
    } while (plVar4 != plVar6);
    do {
      if (plVar1 == plVar4) {
        return;
      }
      lVar2 = *plVar1;
      plVar1 = plVar1 + 1;
    } while ((*(ulong *)(lVar2 + 0xa0) & 0xffffffffff) != 0x7c5473730);
    puVar3 = *(undefined8 **)(lVar2 + 0x130);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_71025f5420((undefined8 *)*puVar3,(undefined8 *)puVar3[1],"IPP1601");
      return;
    }
  }
  return;
}

