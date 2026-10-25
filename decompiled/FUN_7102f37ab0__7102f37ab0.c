// addr:      7102f37ab0
// offset:    0x2f37ab0
// name:      FUN_7102f37ab0
// mangled:   
// signature: undefined __cdecl FUN_7102f37ab0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102f37ab0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 extraout_x1;
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  if ((*(int *)(param_1 + 0x80) == 6) ||
     ((*(int *)(param_1 + 0x80) == 4 &&
      ((*(int *)(param_1 + 0x84) != 0 || (*(int *)(param_1 + 0x88) != 0)))))) {
    *(undefined4 *)(param_1 + 0x90) = 0x42700000;
    lVar4 = *(long *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x80) = 1;
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x110) = 1;
      FUN_71025e9d50((long *)(lVar4 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,param_8
                    );
      lVar4 = *(long *)(param_1 + 0x18);
      param_2 = extraout_x1;
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x118) = *(byte *)(lVar4 + 0x118) & 0xfe;
      }
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(char *)(lVar4 + 0x10) != '\0') {
      lVar1 = *(long *)(lVar4 + 0x20);
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar1 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
      }
      plVar2 = *(long **)(lVar4 + 8);
      if (plVar2 != (long *)0x0) {
        plVar5 = (long *)plVar2[1];
        for (plVar2 = (long *)*plVar2; plVar2 != plVar5; plVar2 = plVar2 + 1) {
          lVar1 = *plVar2;
          *(undefined1 *)(lVar1 + 0x128) = 1;
          if (*(long *)(lVar1 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar1 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar1 + 8),0);
          }
        }
      }
      (**(code **)(**(long **)(lVar4 + 0x28) + 0xa8))(*(long **)(lVar4 + 0x28),1);
    }
    plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 0xe0) + 0x300) + 0x18);
    plVar2 = (long *)*plVar5;
    do {
      if (plVar2 == (long *)plVar5[1]) {
        return;
      }
      lVar4 = *plVar2;
      plVar2 = plVar2 + 1;
    } while ((*(ulong *)(lVar4 + 0xa0) & 0xffffffffff) != 0x7b569df99);
    puVar3 = *(undefined8 **)(lVar4 + 0x130);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_71025f55b0((undefined8 *)*puVar3,(undefined8 *)puVar3[1],"IPP0002");
      return;
    }
  }
  return;
}

