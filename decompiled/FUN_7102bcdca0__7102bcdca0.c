// addr:      7102bcdca0
// offset:    0x2bcdca0
// name:      FUN_7102bcdca0
// mangled:   
// signature: undefined __cdecl FUN_7102bcdca0(long param_1)


void FUN_7102bcdca0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 200);
    puVar5 = (undefined8 *)*puVar6;
    puVar2 = (undefined8 *)puVar6[1];
    if (puVar5 != puVar2) {
      do {
        plVar7 = (long *)*puVar5;
        if ((char)plVar7[4] == '\0') {
          plVar1 = (long *)plVar7[1];
          lVar3 = plVar7[2];
          lVar8 = *plVar7;
          *(undefined1 *)(plVar7 + 4) = 1;
          *plVar1 = lVar8;
          *(long **)(lVar8 + 8) = plVar1;
          *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
          *plVar7 = 0;
          plVar7[1] = 0;
          puVar6 = *(undefined8 **)(lVar3 + 0x28);
          *plVar7 = lVar3 + 0x20;
          plVar7[1] = (long)puVar6;
          *(long **)(lVar3 + 0x28) = plVar7;
          *puVar6 = plVar7;
          *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
          iVar4 = 0;
          if (plVar7[3] != 0) {
            iVar4 = *(int *)(plVar7[3] + 0x110);
          }
          *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + iVar4;
        }
        puVar5 = puVar5 + 1;
      } while (puVar2 != puVar5);
      puVar6 = *(undefined8 **)(param_1 + 200);
    }
    if (*(int *)(param_1 + 0x60) == 0) {
      FUN_71025f55b0((undefined8 *)*puVar6,(undefined8 *)puVar6[1],"IPP0002");
      FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 200),
                     (undefined8 *)(*(undefined8 **)(param_1 + 200))[1],"IPP0003");
    }
    else {
      FUN_71025f5420((undefined8 *)*puVar6,(undefined8 *)puVar6[1],"IPP0002");
      FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 200),
                     (undefined8 *)(*(undefined8 **)(param_1 + 200))[1],"IPP0003");
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_71052c51ba != '\0') {
      FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0xc0),
                     (undefined8 *)(*(undefined8 **)(param_1 + 0xc0))[1],"IPP0004");
      FUN_71025f5420((undefined8 *)**(undefined8 **)(param_1 + 0xc0),
                     (undefined8 *)(*(undefined8 **)(param_1 + 0xc0))[1],"IPP0005");
      return;
    }
  }
  return;
}

