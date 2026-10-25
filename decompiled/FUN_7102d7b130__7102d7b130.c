// addr:      7102d7b130
// offset:    0x2d7b130
// name:      FUN_7102d7b130
// mangled:   
// signature: undefined __cdecl FUN_7102d7b130(long param_1)


void FUN_7102d7b130(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  *(undefined1 *)(*(long *)(param_1 + 0x38) + 0xa5) = 1;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x38))();
  plVar4 = *(long **)(param_1 + 0x48);
  for (plVar1 = *(long **)(param_1 + 0x40); plVar1 != plVar4; plVar1 = plVar1 + 1) {
    lVar2 = *plVar1;
    if (2 < (ulong)(long)*(char *)(lVar2 + 0xbc)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (0.0 <= *(float *)(&DAT_71045596c0 + (long)*(char *)(lVar2 + 0xbc) * 4) + 30.0) {
      *(float *)(lVar2 + 0xa8) =
           *(float *)(&DAT_71045596c0 + (long)*(char *)(lVar2 + 0xbc) * 4) + 30.0;
    }
    *(undefined1 *)(lVar2 + 0xa6) = 0;
    *(undefined1 *)(*plVar1 + 0xa5) = 1;
    (**(code **)(*(long *)*plVar1 + 0x38))();
  }
  lVar2 = *(long *)(param_1 + 8);
  plVar1 = *(long **)(**(long **)(lVar2 + 0x338) + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,9,0xffffffff);
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
    } while ((*(ulong *)(lVar2 + 0xa0) & 0xffffffffff) != 0x792668e51);
    puVar3 = *(undefined8 **)(lVar2 + 0x130);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_71025f5420((undefined8 *)*puVar3,(undefined8 *)puVar3[1],"IPP0901");
      return;
    }
  }
  return;
}

