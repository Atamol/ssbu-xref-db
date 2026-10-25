// addr:      7102dfe1b0
// offset:    0x2dfe1b0
// name:      FUN_7102dfe1b0
// mangled:   
// signature: undefined __cdecl FUN_7102dfe1b0(long param_1, undefined4 param_2)


void FUN_7102dfe1b0(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar5 = *(undefined8 **)(param_1 + 0x1370);
  if (puVar5 == (undefined8 *)0x0) {
switchD_7102dfe284_caseD_1:
    return;
  }
  puVar3 = (undefined8 *)*puVar5;
  puVar5 = (undefined8 *)puVar5[1];
  puVar9 = puVar3;
  if (puVar3 != puVar5) {
    do {
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
      puVar3 = puVar3 + 1;
    } while (puVar5 != puVar3);
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x1370);
    puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x1370))[1];
  }
  FUN_71025f5420(puVar3,puVar9,"IPP0001");
  switch(param_2) {
  case 0:
    puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x1370);
    puVar3 = (undefined8 *)(*(undefined8 **)(param_1 + 0x1370))[1];
    pcVar4 = "IPP0002";
    break;
  default:
    goto switchD_7102dfe284_caseD_1;
  case 2:
    puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x1370);
    puVar3 = (undefined8 *)(*(undefined8 **)(param_1 + 0x1370))[1];
    pcVar4 = "IPP0003";
    break;
  case 3:
    FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0x1370),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0x1370))[1],"IPP0004");
    puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x1370);
    puVar3 = (undefined8 *)(*(undefined8 **)(param_1 + 0x1370))[1];
    pcVar4 = "IPP0005";
    break;
  case 4:
    puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x1370);
    puVar3 = (undefined8 *)(*(undefined8 **)(param_1 + 0x1370))[1];
    pcVar4 = "IPP0006";
  }
  FUN_71025f5420(puVar5,puVar3,pcVar4);
  return;
}

