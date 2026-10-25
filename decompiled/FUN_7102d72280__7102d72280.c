// addr:      7102d72280
// offset:    0x2d72280
// name:      FUN_7102d72280
// mangled:   
// signature: undefined __cdecl FUN_7102d72280(long param_1)


void FUN_7102d72280(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  float fVar14;
  float fVar15;
  long *plVar13;
  
  *(undefined1 *)(*(long *)(param_1 + 0x38) + 0xa5) = 1;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x38))();
  puVar8 = *(uint **)(*(long *)(param_1 + 8) + 0x340);
  iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0xc0);
  iVar3 = *(int *)(*(long *)(param_1 + 0x10) + 0xc4);
  uVar2 = *puVar8;
  *puVar8 = puVar8[1];
  uVar4 = puVar8[3];
  uVar2 = uVar2 ^ uVar2 << 0xb;
  puVar8[1] = puVar8[2];
  puVar8[2] = uVar4;
  uVar4 = uVar2 ^ uVar2 >> 8 ^ uVar4 ^ uVar4 >> 0x13;
  uVar2 = (1 - iVar1) + iVar3;
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = uVar4 / uVar2;
  }
  puVar8[3] = uVar4;
  plVar7 = *(long **)(param_1 + 0x48);
  fVar15 = (float)((uVar4 - uVar5 * uVar2) + iVar1);
  *(float *)(param_1 + 100) = fVar15;
  plVar11 = *(long **)(param_1 + 0x40);
  while (plVar11 != plVar7) {
    *(undefined1 *)(*plVar11 + 0xa5) = 1;
    if (0x31 < *(uint *)(param_1 + 0xcc)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(int *)(*plVar11 + 0xcc) =
         (int)*(short *)(param_1 + (long)(int)*(uint *)(param_1 + 0xcc) * 2 + 0x68);
    lVar9 = *plVar11;
    if (0.0 <= fVar15) {
      *(float *)(lVar9 + 0xa8) = fVar15;
    }
    *(undefined1 *)(lVar9 + 0xa6) = 1;
    (**(code **)(*(long *)*plVar11 + 0x38))();
    fVar15 = fVar15 + *(float *)(param_1 + 100);
    iVar1 = 0;
    if (*(int *)(param_1 + 0xcc) < 0x31) {
      iVar1 = *(int *)(param_1 + 0xcc) + 1;
    }
    *(int *)(param_1 + 0xcc) = iVar1;
    plVar11 = plVar11 + 1;
  }
  lVar9 = *(long *)(param_1 + 8);
  plVar7 = *(long **)(**(long **)(lVar9 + 0x338) + 8);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x58))(plVar7,2,0xffffffff);
    lVar9 = *(long *)(param_1 + 8);
  }
  plVar11 = *(long **)(*(long *)(lVar9 + 0x300) + 0x18);
  plVar7 = (long *)*plVar11;
  plVar11 = (long *)plVar11[1];
  plVar12 = plVar7;
  if (plVar7 != plVar11) {
    do {
      plVar13 = plVar12 + 1;
      if ((*(ulong *)(*plVar12 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
        puVar10 = *(undefined8 **)(*plVar12 + 0x130);
        if (puVar10 != (undefined8 *)0x0) {
          FUN_71025f55b0((undefined8 *)*puVar10,(undefined8 *)puVar10[1],"IPP0001");
          plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x300) + 0x18);
          plVar11 = (long *)plVar7[1];
          plVar7 = (long *)*plVar7;
        }
        break;
      }
      plVar12 = plVar13;
    } while (plVar11 != plVar13);
    do {
      if (plVar7 == plVar11) goto LAB_7102d72458;
      lVar9 = *plVar7;
      plVar7 = plVar7 + 1;
    } while ((*(ulong *)(lVar9 + 0xa0) & 0xffffffffff) != 0x733fdad37);
    puVar10 = *(undefined8 **)(lVar9 + 0x130);
    if (puVar10 != (undefined8 *)0x0) {
      FUN_71025f5420((undefined8 *)*puVar10,(undefined8 *)puVar10[1],"IPP0301");
    }
  }
LAB_7102d72458:
  if (*(char *)(param_1 + 0xf0) == '\0') {
    lVar9 = *(long *)(param_1 + 0x10);
    fVar14 = *(float *)(lVar9 + 200);
    fVar15 = *(float *)(lVar9 + 0xcc);
    uVar6 = *(undefined8 *)(lVar9 + 200);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(lVar9 + 0xd0);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xd8) + 8) + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    if (*(float *)(param_1 + 0xe8) <= 1e-05) {
      fVar14 = 0.0;
      *(undefined1 *)(param_1 + 0xf0) = 0;
      lVar9 = *(long *)(*(long *)(param_1 + 0xd8) + 8);
      *(undefined8 *)(lVar9 + 0x38) = 0;
      *(undefined8 *)(lVar9 + 0x30) = uVar6;
      fVar15 = 0.0;
    }
    else {
      *(undefined1 *)(param_1 + 0xf0) = 1;
      lVar9 = *(long *)(*(long *)(param_1 + 0xd8) + 8);
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined8 *)(lVar9 + 0x38) = 0;
      fVar14 = fVar14 / *(float *)(param_1 + 0xe8);
      fVar15 = fVar15 / *(float *)(param_1 + 0xe8);
    }
    *(float *)(param_1 + 0xe0) = fVar14;
    *(float *)(param_1 + 0xe4) = fVar15;
  }
  return;
}

