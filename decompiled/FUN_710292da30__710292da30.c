// addr:      710292da30
// offset:    0x292da30
// name:      FUN_710292da30
// mangled:   
// signature: undefined __cdecl FUN_710292da30(long * param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710292da30(long *param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  uVar2 = (**(code **)(*param_1 + 0x30))();
  if ((uVar2 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(*(long *)(param_1[1] + 0x300) + 0x48) + (ulong)param_2 * 8);
    puVar3 = *(ulong **)(*(long *)(param_1[1] + 0x300) + 0x60);
    if (puVar3 != (ulong *)(lVar7 + 8)) {
      FUN_7102616cf0(puVar3,*(undefined1 (**) [16])(lVar7 + 8),*(undefined1 (**) [16])(lVar7 + 0x10)
                     ,param_4,param_5,param_6,param_7,param_8);
    }
  }
  FUN_710262c200(*(long *)(param_1[1] + 0x300),param_2);
  FUN_7102926160((long)param_1,param_2);
  if (((DAT_71053144d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053144d8), iVar1 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_71052c51ba == '\0') {
    plVar8 = *(long **)(*(long *)(param_1[1] + 0x300) + 0x18);
    plVar9 = (long *)*plVar8;
    plVar8 = (long *)plVar8[1];
    if (plVar9 != plVar8) {
      do {
        lVar7 = *plVar9;
        uVar2 = *(ulong *)(lVar7 + 0xa0) & 0xffffffffff;
        if (uVar2 == 0x7b569df99) {
          puVar4 = (undefined8 *)**(undefined8 **)(lVar7 + 0x130);
          puVar5 = (undefined8 *)(*(undefined8 **)(lVar7 + 0x130))[1];
          pcVar6 = "IPP0002";
LAB_710292db98:
          FUN_71025f55b0(puVar4,puVar5,pcVar6);
        }
        else {
          if (uVar2 == 0x77e350c3c) {
            puVar4 = (undefined8 *)**(undefined8 **)(lVar7 + 0x130);
            puVar5 = (undefined8 *)(*(undefined8 **)(lVar7 + 0x130))[1];
            pcVar6 = "IPP0102";
            goto LAB_710292db98;
          }
          uVar2 = *(ulong *)(lVar7 + 0xa0) & 0xffffffffff;
          if (uVar2 == 0x7f8a17e92) {
            puVar4 = (undefined8 *)**(undefined8 **)(lVar7 + 0x130);
            puVar5 = (undefined8 *)(*(undefined8 **)(lVar7 + 0x130))[1];
            pcVar6 = "IPP0202";
            goto LAB_710292db98;
          }
          if (uVar2 == 0x733fdad37) {
            puVar4 = (undefined8 *)**(undefined8 **)(lVar7 + 0x130);
            puVar5 = (undefined8 *)(*(undefined8 **)(lVar7 + 0x130))[1];
            pcVar6 = "IPP0302";
            goto LAB_710292db98;
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar8 != plVar9);
    }
  }
  return;
}

