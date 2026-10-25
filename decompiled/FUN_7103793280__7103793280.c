// addr:      7103793280
// offset:    0x3793280
// name:      FUN_7103793280
// mangled:   
// signature: undefined __cdecl FUN_7103793280(long param_1, long param_2, long param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7103793280(long param_1,long param_2,long param_3)

{
  byte bVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  uint *puVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  long local_98;
  long *local_90;
  float local_80 [8];
  float *local_60;
  
  *(long *)(param_1 + 8) = param_2;
  puVar8 = *(uint **)(param_2 + 0x38);
  if ((puVar8 != (uint *)0x0) && (uVar3 = puVar8[2], (ushort)uVar3 != 0)) {
    uVar13 = 0;
    do {
      puVar12 = puVar8 + 3;
      pcVar5 = (char *)0x0;
      if (*puVar12 != 0) {
        pcVar5 = (char *)((long)puVar12 + (ulong)*puVar12);
      }
      iVar4 = strcmp("align_type",pcVar5);
      if (iVar4 == 0) {
        if (*(char *)((long)puVar8 + 0x16) == '\x01') {
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((long)puVar12 + (ulong)puVar8[4]);
        }
        break;
      }
      uVar13 = uVar13 + 1;
      puVar8 = puVar12;
    } while (uVar13 < (ushort)uVar3);
  }
  pcVar5 = (char *)FUN_7100044a80(param_3,"BasePane");
  uVar6 = 0;
  if (pcVar5 != (char *)0x0) {
    if (*pcVar5 == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(**(long **)(param_2 + 0x18) + 0x60))(*(long **)(param_2 + 0x18),pcVar5,1)
      ;
    }
  }
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  pcVar5 = (char *)FUN_7100044a80(param_3,"IconPane");
  plVar7 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    if (*pcVar5 == '\0') {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(**(long **)(param_2 + 0x18) + 0x60))
                                 (*(long **)(param_2 + 0x18),pcVar5,1);
    }
  }
  *(long **)(param_1 + 0x20) = plVar7;
  plVar7 = FUN_7103772fe0(plVar7);
  *(long **)(param_1 + 0x28) = plVar7;
  pcVar5 = (char *)FUN_7100044a80(param_3,"TextPane");
  plVar7 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    if (*pcVar5 == '\0') {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(**(long **)(param_2 + 0x18) + 0x60))
                                 (*(long **)(param_2 + 0x18),pcVar5,1);
    }
  }
  plVar7 = FUN_7103772fe0(plVar7);
  lVar9 = *(long *)(param_1 + 0x18);
  *(long **)(param_1 + 0x30) = plVar7;
  if (lVar9 == 0) {
    fVar15 = 0.0;
    fVar14 = _ConstantZero;
  }
  else {
    fVar14 = *(float *)(lVar9 + 0x30);
    fVar15 = ABS(*(float *)(lVar9 + 0x50) * *(float *)(lVar9 + 0x48));
    bVar1 = *(byte *)(lVar9 + 0x5b) & 3;
    if (bVar1 == 2) {
      fVar14 = fVar14 - fVar15 * 0.5;
    }
    else if (bVar1 == 1) {
      fVar14 = fVar14 + fVar15 * 0.5;
    }
    for (lVar9 = *(long *)(lVar9 + 0x18); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x18)) {
      fVar14 = fVar14 + *(float *)(lVar9 + 0x30);
    }
  }
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
    fVar16 = 0.0;
    fVar18 = _ConstantZero;
  }
  else {
    fVar18 = *(float *)(lVar9 + 0x30);
    fVar16 = ABS(*(float *)(lVar9 + 0x50) * *(float *)(lVar9 + 0x48));
    bVar1 = *(byte *)(lVar9 + 0x5b) & 3;
    if (bVar1 == 2) {
      fVar18 = fVar18 - fVar16 * 0.5;
    }
    else if (bVar1 == 1) {
      fVar18 = fVar18 + fVar16 * 0.5;
    }
    for (lVar9 = *(long *)(lVar9 + 0x18); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x18)) {
      fVar18 = fVar18 + *(float *)(lVar9 + 0x30);
    }
  }
  if (plVar7 == (long *)0x0) {
    fVar17 = 0.0;
    fVar19 = _ConstantZero;
  }
  else {
    fVar19 = *(float *)(plVar7 + 6);
    fVar17 = ABS(*(float *)(plVar7 + 10) * *(float *)(plVar7 + 9));
    bVar1 = *(byte *)((long)plVar7 + 0x5b) & 3;
    if (bVar1 == 2) {
      fVar19 = fVar19 - fVar17 * 0.5;
    }
    else if (bVar1 == 1) {
      fVar19 = fVar19 + fVar17 * 0.5;
    }
    for (lVar9 = plVar7[3]; lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x18)) {
      fVar19 = fVar19 + *(float *)(lVar9 + 0x30);
    }
  }
  fVar18 = ((fVar19 + 960.0) - fVar17 * 0.5) - (fVar18 + 960.0 + fVar16 * 0.5);
  local_80[0] = (fVar14 + 960.0 + fVar15 * 0.5) - (fVar19 + 960.0 + fVar17 * 0.5);
  pfVar2 = (float *)&local_b0;
  if (0.0 <= local_80[0]) {
    pfVar2 = local_80;
  }
  *(float *)(param_1 + 0x38) =
       (float)(int)(*(float *)(&DAT_7104465440 + (ulong)(fVar18 < 0.0) * 4) + fVar18);
  local_b0 = (undefined *)((ulong)local_b0._4_4_ << 0x20);
  *(float *)(param_1 + 0x3c) = *pfVar2;
  plVar10 = *(long **)(param_1 + 0x28);
  if (plVar10 != (long *)0x0) {
    *(undefined4 *)(plVar10 + 0x2c) = 1;
    *(undefined1 *)((long)plVar10 + 0x27b) = 1;
    FUN_71037a1ff0(plVar10);
    lVar9 = *(long *)(param_1 + 0x28);
    local_b0 = &DAT_710523f640;
    local_a8 = FUN_7103793900;
    local_a0 = 0;
    local_98 = param_1;
    local_90 = &local_b0;
    local_60 = local_80;
    FUN_7103793f90((long)&local_b0,(undefined8 *)local_80);
    FUN_71003cb050((long *)local_80,(long *)(lVar9 + 0x1e0));
    if (local_80 == local_60) {
      pcVar11 = *(code **)(*(long *)local_60 + 0x20);
LAB_71037937bc:
      (*pcVar11)();
    }
    else if (local_60 != (float *)0x0) {
      pcVar11 = *(code **)(*(long *)local_60 + 0x28);
      goto LAB_71037937bc;
    }
    if (&local_b0 == local_90) {
      pcVar11 = *(code **)(*local_90 + 0x20);
LAB_71037937e8:
      (*pcVar11)();
    }
    else if (local_90 != (long *)0x0) {
      pcVar11 = *(code **)(*local_90 + 0x28);
      goto LAB_71037937e8;
    }
    plVar7 = *(long **)(param_1 + 0x30);
  }
  if (plVar7 == (long *)0x0) goto LAB_71037938bc;
  if (*(int *)(param_1 + 0x10) - 3U < 2) {
    *(undefined4 *)(plVar7 + 0x2c) = 1;
  }
  else {
    *(undefined4 *)(plVar7 + 0x2c) = 0;
  }
  *(undefined1 *)((long)plVar7 + 0x27b) = 1;
  FUN_71037a1ff0(plVar7);
  lVar9 = *(long *)(param_1 + 0x30);
  local_b0 = &DAT_710523f640;
  local_a8 = FUN_7103793900;
  local_a0 = 0;
  local_98 = param_1;
  local_90 = &local_b0;
  local_60 = local_80;
  FUN_7103793f90((long)&local_b0,(undefined8 *)local_80);
  FUN_71003cb050((long *)local_80,(long *)(lVar9 + 0x1e0));
  if (local_80 == local_60) {
    pcVar11 = *(code **)(*(long *)local_60 + 0x20);
LAB_710379388c:
    (*pcVar11)();
  }
  else if (local_60 != (float *)0x0) {
    pcVar11 = *(code **)(*(long *)local_60 + 0x28);
    goto LAB_710379388c;
  }
  if (&local_b0 == local_90) {
    pcVar11 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_71037938bc;
    pcVar11 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar11)();
LAB_71037938bc:
  FUN_7103793900(param_1);
  return;
}

