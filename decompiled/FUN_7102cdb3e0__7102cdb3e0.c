// addr:      7102cdb3e0
// offset:    0x2cdb3e0
// name:      FUN_7102cdb3e0
// mangled:   
// signature: undefined __cdecl FUN_7102cdb3e0(long param_1, undefined4 param_2)


void FUN_7102cdb3e0(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  float fVar10;
  
  switch(param_2) {
  case 5:
    FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 0x18),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0x18))[1],"IPP0002");
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x18);
    puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0x18))[1];
    if (2 < *(int *)(param_1 + 0x104)) {
      FUN_71025f5420(puVar3,puVar4,"IPP0003");
      FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 0x18),
                     (undefined8 *)(*(undefined8 **)(param_1 + 0x18))[1],"IPP0004");
      if (*(char *)(param_1 + 0x100) == '\0') {
        return;
      }
      goto LAB_7102cdb588;
    }
    FUN_71025f55b0(puVar3,puVar4,"IPP0003");
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x18);
    puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0x18))[1];
    pcVar5 = "IPP0004";
    goto LAB_7102cdb57c;
  case 6:
    plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    if ((plVar7 != (long *)0x0) && ((int)plVar7[1] != 1 && plVar7 != (long *)0x0)) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)(*(long *)(*plVar7 + 8) + 0x10) = 1;
    }
    break;
  case 7:
    puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0x18))[1];
    for (puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x18); puVar3 != puVar4;
        puVar3 = puVar3 + 1) {
      plVar7 = (long *)*puVar3;
      if ((char)plVar7[4] != '\0') {
        plVar1 = (long *)plVar7[1];
        lVar2 = plVar7[2];
        lVar8 = *plVar7;
        *(undefined1 *)(plVar7 + 4) = 0;
        *plVar1 = lVar8;
        *(long **)(lVar8 + 8) = plVar1;
        *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -1;
        *plVar7 = 0;
        plVar7[1] = 0;
        puVar9 = *(undefined8 **)(lVar2 + 0x40);
        *plVar7 = lVar2 + 0x38;
        plVar7[1] = (long)puVar9;
        *(long **)(lVar2 + 0x40) = plVar7;
        *puVar9 = plVar7;
        *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + 1;
        iVar6 = 0;
        if (plVar7[3] != 0) {
          iVar6 = *(int *)(plVar7[3] + 0x110);
        }
        *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) - iVar6;
      }
    }
    break;
  case 8:
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x18);
    puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0x18))[1];
    pcVar5 = "IPP0002";
LAB_7102cdb57c:
    FUN_71025f5420(puVar3,puVar4,pcVar5);
    if (*(char *)(param_1 + 0x100) != '\0') {
LAB_7102cdb588:
      FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0x18),
                     (undefined8 *)(*(undefined8 **)(param_1 + 0x18))[1],"IPP0001");
      FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0x18),
                     (undefined8 *)(*(undefined8 **)(param_1 + 0x18))[1],"IPP0005");
      return;
    }
    break;
  case 9:
    fVar10 = *(float *)(*(long *)(param_1 + 0x10) + 0x94);
    *(undefined2 *)(param_1 + 0x48) = 1;
    fVar10 = fVar10 + 300.0;
    *(code **)(param_1 + 0x30) = FUN_7102cdac80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(float *)(param_1 + 0x44) = fVar10;
    *(float *)(param_1 + 0x40) = fVar10;
  }
  return;
}

