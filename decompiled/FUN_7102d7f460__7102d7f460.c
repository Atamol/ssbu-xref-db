// addr:      7102d7f460
// offset:    0x2d7f460
// name:      FUN_7102d7f460
// mangled:   
// signature: undefined __cdecl FUN_7102d7f460(long param_1)


void FUN_7102d7f460(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  long *plVar4;
  
  *(undefined1 *)(*(long *)(param_1 + 0x38) + 0xa5) = 1;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x38))();
  plVar5 = *(long **)(param_1 + 0x40);
  plVar6 = *(long **)(param_1 + 0x48);
  if ((long)plVar6 - (long)plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  if (plVar5 != plVar6) {
    fVar7 = *(float *)(*plVar5 + 0x98);
    fVar8 = *(float *)(*(long *)(param_1 + 0x38) + 0x98) +
            fVar7 * (float)(ulong)((long)plVar6 - (long)plVar5 >> 3);
    do {
      lVar1 = *plVar5;
      if (0.0 <= fVar8) {
        *(float *)(lVar1 + 0xa8) = fVar8;
      }
      *(undefined1 *)(lVar1 + 0xa6) = 0;
      *(undefined1 *)(*plVar5 + 0xa5) = 1;
      *(undefined4 *)(*plVar5 + 0xe0) = *(undefined4 *)(param_1 + 0x2c);
      plVar3 = plVar5 + 1;
      (**(code **)(*(long *)*plVar5 + 0x38))();
      fVar8 = fVar8 - fVar7;
      plVar5 = plVar3;
    } while (plVar6 != plVar3);
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  lVar1 = *(long *)(param_1 + 8);
  plVar5 = *(long **)(**(long **)(lVar1 + 0x338) + 8);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x58))(plVar5,0xb,0xffffffff);
    lVar1 = *(long *)(param_1 + 8);
  }
  plVar6 = *(long **)(*(long *)(lVar1 + 0x300) + 0x18);
  plVar5 = (long *)*plVar6;
  plVar6 = (long *)plVar6[1];
  plVar3 = plVar5;
  if (plVar5 != plVar6) {
    do {
      plVar4 = plVar3 + 1;
      if ((*(ulong *)(*plVar3 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
        puVar2 = *(undefined8 **)(*plVar3 + 0x130);
        if (puVar2 != (undefined8 *)0x0) {
          FUN_71025f55b0((undefined8 *)*puVar2,(undefined8 *)puVar2[1],"IPP0001");
          plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x300) + 0x18);
          plVar6 = (long *)plVar5[1];
          plVar5 = (long *)*plVar5;
        }
        break;
      }
      plVar3 = plVar4;
    } while (plVar6 != plVar4);
    do {
      if (plVar5 == plVar6) {
        return;
      }
      lVar1 = *plVar5;
      plVar5 = plVar5 + 1;
    } while ((*(ulong *)(lVar1 + 0xa0) & 0xffffffffff) != 0x7d8420788);
    puVar2 = *(undefined8 **)(lVar1 + 0x130);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_71025f5420((undefined8 *)*puVar2,(undefined8 *)puVar2[1],"IPP1101");
      return;
    }
  }
  return;
}

