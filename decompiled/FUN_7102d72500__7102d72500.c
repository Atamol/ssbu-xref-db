// addr:      7102d72500
// offset:    0x2d72500
// name:      FUN_7102d72500
// mangled:   
// signature: undefined __cdecl FUN_7102d72500(long param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102d72500(long param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar10 [16];
  long *plVar9;
  
  (**(code **)(**(long **)(param_1 + 0x38) + 0x40))();
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  for (puVar6 = *(undefined8 **)(param_1 + 0x40); puVar6 != puVar1; puVar6 = puVar6 + 1) {
    (**(code **)(*(long *)*puVar6 + 0x40))();
  }
  lVar5 = *(long *)(param_1 + 8);
  plVar4 = *(long **)(**(long **)(lVar5 + 0x338) + 8);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x58))(plVar4,0x1b,0xffffffff);
    lVar5 = *(long *)(param_1 + 8);
  }
  plVar7 = *(long **)(*(long *)(lVar5 + 0x300) + 0x18);
  plVar4 = (long *)*plVar7;
  plVar7 = (long *)plVar7[1];
  plVar8 = plVar4;
  if (plVar4 != plVar7) {
    do {
      plVar9 = plVar8 + 1;
      if ((*(ulong *)(*plVar8 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
        puVar6 = *(undefined8 **)(*plVar8 + 0x130);
        if (puVar6 != (undefined8 *)0x0) {
          FUN_71025f5420((undefined8 *)*puVar6,(undefined8 *)puVar6[1],"IPP0001");
          plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x300) + 0x18);
          plVar7 = (long *)plVar4[1];
          plVar4 = (long *)*plVar4;
        }
        break;
      }
      plVar8 = plVar9;
    } while (plVar7 != plVar9);
    do {
      if (plVar4 == plVar7) goto LAB_7102d7262c;
      lVar5 = *plVar4;
      plVar4 = plVar4 + 1;
    } while ((*(ulong *)(lVar5 + 0xa0) & 0xffffffffff) != 0x733fdad37);
    puVar6 = *(undefined8 **)(lVar5 + 0x130);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_71025f55b0((undefined8 *)*puVar6,(undefined8 *)puVar6[1],"IPP0301");
    }
  }
LAB_7102d7262c:
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xd8) + 8) + 0x10) = 1;
  uVar3 = _ConstantZero;
  auVar2._8_8_ = _DAT_7107521008;
  auVar2._0_8_ = _ConstantZero;
  auVar10._8_8_ = _DAT_7107521008;
  auVar10._0_8_ = _ConstantZero;
  lVar5 = *(long *)(*(long *)(param_1 + 0xd8) + 8);
  auVar10 = NEON_ext(auVar10,auVar2,8,1);
  *(ulong *)(lVar5 + 0x38) = (ulong)auVar10._0_4_;
  *(undefined8 *)(lVar5 + 0x30) = uVar3;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  return;
}

