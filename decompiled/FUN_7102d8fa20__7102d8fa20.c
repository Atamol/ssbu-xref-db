// addr:      7102d8fa20
// offset:    0x2d8fa20
// name:      FUN_7102d8fa20
// mangled:   
// signature: undefined __cdecl FUN_7102d8fa20(long param_1)


void FUN_7102d8fa20(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar7;
  long *plVar6;
  
  *(undefined4 *)(param_1 + 0x6c) = 0;
  plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x300) + 0x18);
  plVar1 = (long *)*plVar4;
  plVar4 = (long *)plVar4[1];
  plVar5 = plVar1;
  if (plVar1 != plVar4) {
    do {
      plVar6 = plVar5 + 1;
      if ((*(ulong *)(*plVar5 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
        puVar3 = *(undefined8 **)(*plVar5 + 0x130);
        if (puVar3 != (undefined8 *)0x0) {
          FUN_71025f5420((undefined8 *)*puVar3,(undefined8 *)puVar3[1],"IPP0001");
          plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x300) + 0x18);
          plVar4 = (long *)plVar1[1];
          plVar1 = (long *)*plVar1;
        }
        break;
      }
      plVar5 = plVar6;
    } while (plVar4 != plVar6);
    do {
      if (plVar1 == plVar4) goto LAB_7102d8faf0;
      lVar7 = *plVar1;
      plVar1 = plVar1 + 1;
    } while ((*(ulong *)(lVar7 + 0xa0) & 0xffffffffff) != 0x7341185e5);
    puVar3 = *(undefined8 **)(lVar7 + 0x130);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_71025f55b0((undefined8 *)*puVar3,(undefined8 *)puVar3[1],"IPP1901");
    }
  }
LAB_7102d8faf0:
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar2 = 1;
  }
  else {
    plVar1 = *(long **)(**(long **)(*(long *)(param_1 + 8) + 0x338) + 8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x58))(plVar1,0x1b,0xffffffff);
    }
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x70) = uVar2;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x40))();
  (**(code **)(**(long **)(param_1 + 0x48) + 0x40))();
  (**(code **)(**(long **)(param_1 + 0x50) + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x007102d8fb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x40))();
  return;
}

