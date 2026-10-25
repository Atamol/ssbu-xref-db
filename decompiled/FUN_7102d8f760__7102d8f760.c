// addr:      7102d8f760
// offset:    0x2d8f760
// name:      FUN_7102d8f760
// mangled:   
// signature: undefined __cdecl FUN_7102d8f760(long param_1)


void FUN_7102d8f760(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  float fVar16;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  int local_48;
  long *plVar15;
  
  *(undefined1 *)(*(long *)(param_1 + 0x38) + 0xa5) = 1;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x38))();
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_7102d9b1b0(*(long *)(param_1 + 0x78));
  local_60 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x340);
  local_4c = 0;
  local_58 = 0xffffffffffffffff;
  local_50 = 0xffffffff;
  FUN_7102666c30(&local_60);
  uVar6 = local_50;
  iVar13 = (int)local_58;
  iVar2 = local_58._4_4_;
  local_50 = 0xffffffff;
  bVar7 = local_58._4_4_ == -1;
  local_58._0_4_ = local_58._4_4_;
  local_58._4_4_ = uVar6;
  local_48 = iVar13;
  local_4c = 1;
  if (bVar7) {
    FUN_7102666c30(&local_60);
    local_48 = (int)local_58;
  }
  else {
    local_50 = 0xffffffff;
    local_48 = iVar2;
  }
  local_58 = CONCAT44(local_50,local_58._4_4_);
  local_50 = 0xffffffff;
  iVar2 = iVar13;
  if (iVar13 * 0x1000000 <= local_48 * 0x1000000) {
    iVar2 = local_48;
  }
  local_4c = 1;
  iVar3 = local_48;
  if (iVar13 * 0x1000000 <= local_48 * 0x1000000) {
    iVar3 = iVar13;
  }
  fVar16 = *(float *)(*(long *)(param_1 + 0x38) + 0x98);
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN_7102d8ed80(*(long *)(param_1 + 0x40),(char)iVar2);
  lVar9 = *(long *)(param_1 + 0x40);
  if (0.0 <= fVar16) {
    *(float *)(lVar9 + 0xa8) = fVar16;
  }
  *(undefined1 *)(lVar9 + 0xa6) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x40) + 0xa5) = 1;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x38))();
  FUN_7102d8ed80(*(long *)(param_1 + 0x48),(char)iVar3);
  lVar9 = *(long *)(param_1 + 0x48);
  if (0.0 <= fVar16) {
    *(float *)(lVar9 + 0xa8) = fVar16;
  }
  *(undefined1 *)(lVar9 + 0xa6) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x48) + 0xa5) = 1;
  (**(code **)(**(long **)(param_1 + 0x48) + 0x38))();
  *(undefined8 *)(param_1 + 0x60) = 0x200000001;
  iVar13 = (int)*(float *)(*(long *)(param_1 + 0x10) + 0x334);
  puVar10 = *(uint **)(*(long *)(param_1 + 8) + 0x340);
  uVar1 = (1 - iVar13) + (int)*(float *)(*(long *)(param_1 + 0x10) + 0x338);
  uVar4 = *puVar10;
  *puVar10 = puVar10[1];
  uVar5 = puVar10[3];
  uVar4 = uVar4 ^ uVar4 << 0xb;
  uVar4 = uVar4 ^ uVar4 >> 8 ^ uVar5 ^ uVar5 >> 0x13;
  puVar10[1] = puVar10[2];
  puVar10[2] = uVar5;
  uVar5 = 0;
  if (uVar1 != 0) {
    uVar5 = uVar4 / uVar1;
  }
  puVar10[3] = uVar4;
  lVar9 = *(long *)(param_1 + 8);
  *(float *)(param_1 + 0x68) = (float)((uVar4 - uVar5 * uVar1) + iVar13);
  plVar8 = *(long **)(**(long **)(lVar9 + 0x338) + 8);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x58))(plVar8,0x13,0xffffffff);
    lVar9 = *(long *)(param_1 + 8);
  }
  plVar12 = *(long **)(*(long *)(lVar9 + 0x300) + 0x18);
  plVar8 = (long *)*plVar12;
  plVar12 = (long *)plVar12[1];
  plVar14 = plVar8;
  if (plVar8 != plVar12) {
    do {
      plVar15 = plVar14 + 1;
      if ((*(ulong *)(*plVar14 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
        puVar11 = *(undefined8 **)(*plVar14 + 0x130);
        if (puVar11 != (undefined8 *)0x0) {
          FUN_71025f55b0((undefined8 *)*puVar11,(undefined8 *)puVar11[1],"IPP0001");
          plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x300) + 0x18);
          plVar12 = (long *)plVar8[1];
          plVar8 = (long *)*plVar8;
        }
        break;
      }
      plVar14 = plVar15;
    } while (plVar12 != plVar15);
    do {
      if (plVar8 == plVar12) {
        return;
      }
      lVar9 = *plVar8;
      plVar8 = plVar8 + 1;
    } while ((*(ulong *)(lVar9 + 0xa0) & 0xffffffffff) != 0x7341185e5);
    puVar11 = *(undefined8 **)(lVar9 + 0x130);
    if (puVar11 != (undefined8 *)0x0) {
      FUN_71025f5420((undefined8 *)*puVar11,(undefined8 *)puVar11[1],"IPP1901");
      return;
    }
  }
  return;
}

