// addr:      7102f40210
// offset:    0x2f40210
// name:      FUN_7102f40210
// mangled:   
// signature: undefined __cdecl FUN_7102f40210(long param_1, ulong param_2)


void FUN_7102f40210(long param_1,ulong param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) == 0) {
    *(undefined1 **)(*(long *)(param_1 + 0x20) + 0x18) = &DAT_100000001;
  }
  if ((param_2 & 1) == 0) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x18) == 0) {
      *(undefined1 **)(*(long *)(param_1 + 0x10) + 0x18) = &DAT_100000001;
    }
    plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x30) + 0x300) + 0x18);
    plVar1 = (long *)*plVar4;
    do {
      if (plVar1 == (long *)plVar4[1]) goto LAB_7102f403e4;
      lVar6 = *plVar1;
      plVar1 = plVar1 + 1;
    } while ((*(ulong *)(lVar6 + 0xa0) & 0xffffffffff) != 0x7b569df99);
    puVar3 = *(undefined8 **)(lVar6 + 0x130);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_71025f55b0((undefined8 *)*puVar3,(undefined8 *)puVar3[1],"IPP0001");
      FUN_71025f55b0((undefined8 *)*puVar3,(undefined8 *)puVar3[1],"IPP0002");
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x300);
      lVar5 = *(long *)(lVar6 + 0x60);
      lVar6 = *(long *)(*(long *)(lVar6 + 0x48) + 8);
      uVar7 = *(undefined8 *)(lVar6 + 0x40);
      *(ulong *)(lVar5 + 0x38) = *(ulong *)(lVar6 + 0x48) & 0xffffffff;
      *(undefined8 *)(lVar5 + 0x30) = uVar7;
      uVar7 = *(undefined8 *)(lVar6 + 0x50);
      *(ulong *)(lVar5 + 0x48) = *(ulong *)(lVar6 + 0x58) & 0xffffffff;
      *(undefined8 *)(lVar5 + 0x40) = uVar7;
      uVar7 = *(undefined8 *)(lVar6 + 0x60);
      *(ulong *)(lVar5 + 0x58) = *(ulong *)(lVar6 + 0x68) & 0xffffffff;
      *(undefined8 *)(lVar5 + 0x50) = uVar7;
      uVar7 = *(undefined8 *)(lVar6 + 0x70);
      *(ulong *)(lVar5 + 0x68) = *(ulong *)(lVar6 + 0x78) & 0xffffffff;
      *(undefined8 *)(lVar5 + 0x60) = uVar7;
      uVar7 = *(undefined8 *)(lVar6 + 0x80);
      *(ulong *)(lVar5 + 0x78) = *(ulong *)(lVar6 + 0x88) & 0xffffffff;
      *(undefined8 *)(lVar5 + 0x70) = uVar7;
      *(undefined1 *)(lVar5 + 0x80) = *(undefined1 *)(lVar6 + 0x90);
      uVar7 = *(undefined8 *)(lVar6 + 0xa0);
      *(ulong *)(lVar5 + 0x98) = *(ulong *)(lVar6 + 0xa8) & 0xffffffff;
      *(undefined8 *)(lVar5 + 0x90) = uVar7;
      uVar7 = *(undefined8 *)(lVar6 + 0xb0);
      *(ulong *)(lVar5 + 0xa8) = *(ulong *)(lVar6 + 0xb8) & 0xffffffff;
      *(undefined8 *)(lVar5 + 0xa0) = uVar7;
    }
LAB_7102f403e4:
    uVar2 = 2;
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x18) == 0) {
      *(undefined1 **)(*(long *)(param_1 + 0x18) + 0x18) = &DAT_100000001;
    }
    plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x30) + 0x300) + 0x18);
    plVar1 = (long *)*plVar4;
    do {
      if (plVar1 == (long *)plVar4[1]) goto LAB_7102f4030c;
      lVar6 = *plVar1;
      plVar1 = plVar1 + 1;
    } while ((*(ulong *)(lVar6 + 0xa0) & 0xffffffffff) != 0x7b569df99);
    puVar3 = *(undefined8 **)(lVar6 + 0x130);
    if (puVar3 == (undefined8 *)0x0) {
LAB_7102f4030c:
      uVar2 = 1;
    }
    else {
      FUN_71025f55b0((undefined8 *)*puVar3,(undefined8 *)puVar3[1],"IPP0003");
      uVar2 = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x28) = uVar2;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}

