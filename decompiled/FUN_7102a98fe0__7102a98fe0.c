// addr:      7102a98fe0
// offset:    0x2a98fe0
// name:      FUN_7102a98fe0
// mangled:   
// signature: undefined __cdecl FUN_7102a98fe0(long param_1, undefined4 param_2)


void FUN_7102a98fe0(long param_1,undefined4 param_2)

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
  
  puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1];
  for (puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0xaa0); puVar3 != puVar4;
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
  switch(param_2) {
  case 0:
    FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0xaa0),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1],"IPP0001");
    FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0xaa0),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1],"IPP0002");
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0xaa0);
    puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1];
    pcVar5 = "IPP0003";
    break;
  case 1:
    FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0xaa0),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1],"IPP0004");
    if (*(char *)(param_1 + 0xab0) == '\0') {
      return;
    }
    FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0xaa0),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1],"IPP0017");
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0xaa0);
    puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1];
    pcVar5 = "IPP0018";
    goto LAB_7102a991fc;
  case 2:
    FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0xaa0),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1],"IPP0005");
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0xaa0);
    puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1];
    pcVar5 = "IPP0007";
    break;
  case 3:
    FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0xaa0),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1],"IPP0009");
    FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0xaa0),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1],"IPP0011");
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0xaa0);
    puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1];
    pcVar5 = "IPP0012";
    break;
  case 4:
    FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0xaa0),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1],"IPP0014");
    if (*(char *)(param_1 + 0xab0) == '\0') {
      return;
    }
    FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0xaa0),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1],"IPP0017");
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0xaa0);
    puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1];
    pcVar5 = "IPP0021";
    goto LAB_7102a991fc;
  case 5:
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0xaa0);
    puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1];
    pcVar5 = "IPP0015";
    break;
  case 6:
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0xaa0);
    puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1];
    pcVar5 = "IPP0016";
    break;
  default:
    goto switchD_7102a99090_default;
  }
  FUN_71025f5420(puVar3,puVar4,pcVar5);
  if (*(char *)(param_1 + 0xab0) == '\0') {
switchD_7102a99090_default:
    return;
  }
  puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0xaa0);
  puVar4 = (undefined8 *)(*(undefined8 **)(param_1 + 0xaa0))[1];
  pcVar5 = "IPP0017";
LAB_7102a991fc:
  FUN_71025f5420(puVar3,puVar4,pcVar5);
  return;
}

