// addr:      7102f3ff70
// offset:    0x2f3ff70
// name:      FUN_7102f3ff70
// mangled:   
// signature: undefined __cdecl FUN_7102f3ff70(undefined8 param_1, long param_2)


void FUN_7102f3ff70(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar8;
  undefined8 uVar9;
  long *plVar7;
  
  plVar1 = *(long **)(param_2 + 0x10);
  switch((int)plVar1[3]) {
  case 0:
  case 3:
    *(undefined4 *)(plVar1 + 4) = 0;
    break;
  case 1:
    pcVar2 = *(code **)(*plVar1 + 0x20);
    goto LAB_7102f3ffcc;
  case 2:
    pcVar2 = *(code **)(*plVar1 + 0x38);
LAB_7102f3ffcc:
    (*pcVar2)(param_1);
  }
  plVar1 = *(long **)(param_2 + 0x18);
  switch((int)plVar1[3]) {
  case 0:
  case 3:
    *(undefined4 *)(plVar1 + 4) = 0;
    break;
  case 1:
    pcVar2 = *(code **)(*plVar1 + 0x20);
    goto LAB_7102f40014;
  case 2:
    pcVar2 = *(code **)(*plVar1 + 0x38);
LAB_7102f40014:
    (*pcVar2)(param_1);
  }
  plVar1 = *(long **)(param_2 + 0x20);
  switch((int)plVar1[3]) {
  case 0:
  case 3:
    *(undefined4 *)(plVar1 + 4) = 0;
    goto switchD_7102f4003c_default;
  case 1:
    pcVar2 = *(code **)(*plVar1 + 0x20);
    break;
  case 2:
    pcVar2 = *(code **)(*plVar1 + 0x38);
    break;
  default:
    goto switchD_7102f4003c_default;
  }
  (*pcVar2)(param_1);
switchD_7102f4003c_default:
  if (((*(int *)(*(long *)(param_2 + 0x10) + 0x18) == 0) &&
      (*(int *)(*(long *)(param_2 + 0x18) + 0x18) == 0)) && (*(char *)(param_2 + 0x38) == '\0')) {
    plVar5 = *(long **)(*(long *)(*(long *)(param_2 + 0x30) + 0x300) + 0x18);
    plVar1 = (long *)*plVar5;
    plVar5 = (long *)plVar5[1];
    plVar6 = plVar1;
    if (plVar1 != plVar5) {
      do {
        plVar7 = plVar6 + 1;
        if ((*(ulong *)(*plVar6 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
          puVar4 = *(undefined8 **)(*plVar6 + 0x130);
          if (puVar4 != (undefined8 *)0x0) {
            FUN_71025f5420((undefined8 *)*puVar4,(undefined8 *)puVar4[1],"IPP0001");
            FUN_71025f5420((undefined8 *)*puVar4,(undefined8 *)puVar4[1],"IPP0002");
            lVar8 = *(long *)(*(long *)(param_2 + 0x30) + 0x300);
            lVar3 = *(long *)(lVar8 + 0x60);
            lVar8 = **(long **)(lVar8 + 0x48);
            uVar9 = *(undefined8 *)(lVar8 + 0x40);
            *(ulong *)(lVar3 + 0x38) = *(ulong *)(lVar8 + 0x48) & 0xffffffff;
            *(undefined8 *)(lVar3 + 0x30) = uVar9;
            uVar9 = *(undefined8 *)(lVar8 + 0x50);
            *(ulong *)(lVar3 + 0x48) = *(ulong *)(lVar8 + 0x58) & 0xffffffff;
            *(undefined8 *)(lVar3 + 0x40) = uVar9;
            uVar9 = *(undefined8 *)(lVar8 + 0x60);
            *(ulong *)(lVar3 + 0x58) = *(ulong *)(lVar8 + 0x68) & 0xffffffff;
            *(undefined8 *)(lVar3 + 0x50) = uVar9;
            uVar9 = *(undefined8 *)(lVar8 + 0x70);
            *(ulong *)(lVar3 + 0x68) = *(ulong *)(lVar8 + 0x78) & 0xffffffff;
            *(undefined8 *)(lVar3 + 0x60) = uVar9;
            uVar9 = *(undefined8 *)(lVar8 + 0x80);
            *(ulong *)(lVar3 + 0x78) = *(ulong *)(lVar8 + 0x88) & 0xffffffff;
            *(undefined8 *)(lVar3 + 0x70) = uVar9;
            *(undefined1 *)(lVar3 + 0x80) = *(undefined1 *)(lVar8 + 0x90);
            uVar9 = *(undefined8 *)(lVar8 + 0xa0);
            *(ulong *)(lVar3 + 0x98) = *(ulong *)(lVar8 + 0xa8) & 0xffffffff;
            *(undefined8 *)(lVar3 + 0x90) = uVar9;
            uVar9 = *(undefined8 *)(lVar8 + 0xb0);
            *(ulong *)(lVar3 + 0xa8) = *(ulong *)(lVar8 + 0xb8) & 0xffffffff;
            *(undefined8 *)(lVar3 + 0xa0) = uVar9;
            plVar1 = *(long **)(*(long *)(*(long *)(param_2 + 0x30) + 0x300) + 0x18);
            plVar5 = (long *)plVar1[1];
            plVar1 = (long *)*plVar1;
          }
          break;
        }
        plVar6 = plVar7;
      } while (plVar5 != plVar7);
      do {
        if (plVar1 == plVar5) goto LAB_7102f401ec;
        lVar8 = *plVar1;
        plVar1 = plVar1 + 1;
      } while ((*(ulong *)(lVar8 + 0xa0) & 0xffffffffff) != 0x7b569df99);
      puVar4 = *(undefined8 **)(lVar8 + 0x130);
      if (puVar4 != (undefined8 *)0x0) {
        FUN_71025f5420((undefined8 *)*puVar4,(undefined8 *)puVar4[1],"IPP0003");
      }
    }
LAB_7102f401ec:
    *(undefined1 *)(param_2 + 0x38) = 1;
  }
  return;
}

