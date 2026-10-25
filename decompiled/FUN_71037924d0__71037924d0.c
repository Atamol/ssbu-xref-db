// addr:      71037924d0
// offset:    0x37924d0
// name:      FUN_71037924d0
// mangled:   
// signature: undefined __cdecl FUN_71037924d0(long * param_1, byte * * * * param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71037924d0(long *param_1,byte ****param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  char *__s2;
  float *pfVar2;
  ushort uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  byte ***pppbVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  byte ***pppbVar12;
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
  long *local_98;
  long *local_90;
  float local_80 [8];
  float *local_60;
  
  FUN_7103789fb0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar10 = param_1[0x13];
  plVar5 = FUN_710379dd60(lVar10,"set_txt_icon");
  param_1[0x3b] = (long)plVar5;
  if (lVar10 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)(**(code **)(**(long **)(lVar10 + 0x18) + 0x60))
                               (*(long **)(lVar10 + 0x18),"set_pic_icon",1);
  }
  if (((DAT_710593ba20 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_710593ba20), iVar4 != 0)) {
    if (((DAT_710593ba28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_710593ba28), iVar4 != 0)) {
      if (((DAT_710593b9e0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_710593b9e0), iVar4 != 0))
      {
        DAT_710593b9e8 = 0;
        __cxa_guard_release(&DAT_710593b9e0);
      }
      DAT_710593ba30 = &DAT_710593b9e8;
      __cxa_guard_release(&DAT_710593ba28);
    }
    DAT_710593ba38 = &DAT_710593ba30;
    __cxa_guard_release(&DAT_710593ba20);
  }
  if (plVar5 != (long *)0x0) {
    for (puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5); puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      if ((undefined8 **)puVar6 == &DAT_710593ba38) goto LAB_7103792580;
    }
    plVar5 = (long *)0x0;
  }
LAB_7103792580:
  param_1[0x3c] = (long)plVar5;
  plVar5 = FUN_710379dd60(lVar10,"set_txt_help");
  lVar10 = param_1[0xd];
  plVar11 = (long *)param_1[0x3b];
  param_1[0x3d] = (long)plVar5;
  param_1[0x3e] = lVar10;
  if (plVar11 == (long *)0x0) {
    if (lVar10 == 0) {
      return;
    }
    if (plVar5 == (long *)0x0) {
      return;
    }
    if (param_1[0x3c] != 0) {
      return;
    }
  }
  else {
    if (plVar5 == (long *)0x0) {
      return;
    }
    if (lVar10 == 0) {
      return;
    }
  }
  pppbVar7 = param_2[7];
  if ((pppbVar7 != (byte ***)0x0) && (uVar3 = *(ushort *)(pppbVar7 + 1), uVar3 != 0)) {
    uVar13 = 0;
    do {
      pppbVar12 = (byte ***)((long)pppbVar7 + 0xc);
      __s2 = (char *)0x0;
      if (*(uint *)pppbVar12 != 0) {
        __s2 = (char *)((long)pppbVar12 + (ulong)*(uint *)pppbVar12);
      }
      iVar4 = strcmp("align_type",__s2);
      if (iVar4 == 0) {
        if (*(char *)((long)pppbVar7 + 0x16) == '\x01') {
          *(undefined4 *)(param_1 + 0x3a) =
               *(undefined4 *)((long)pppbVar12 + (ulong)*(uint *)(pppbVar7 + 2));
        }
        break;
      }
      uVar13 = uVar13 + 1;
      pppbVar7 = pppbVar12;
    } while (uVar13 < uVar3);
  }
  if (plVar11 == (long *)0x0) {
    plVar8 = (long *)param_1[0x3c];
    if (lVar10 == 0) goto LAB_71037926a0;
LAB_7103792638:
    fVar14 = *(float *)(lVar10 + 0x30);
    fVar15 = ABS(*(float *)(lVar10 + 0x50) * *(float *)(lVar10 + 0x48));
    bVar1 = *(byte *)(lVar10 + 0x5b) & 3;
    if (bVar1 == 2) {
      fVar14 = fVar14 - fVar15 * 0.5;
    }
    else if (bVar1 == 1) {
      fVar14 = fVar14 + fVar15 * 0.5;
    }
    for (lVar10 = *(long *)(lVar10 + 0x18); lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x18)) {
      fVar14 = fVar14 + *(float *)(lVar10 + 0x30);
    }
  }
  else {
    plVar8 = plVar11;
    if (lVar10 != 0) goto LAB_7103792638;
LAB_71037926a0:
    fVar15 = 0.0;
    fVar14 = _ConstantZero;
  }
  if (plVar8 == (long *)0x0) {
    fVar16 = 0.0;
    fVar18 = _ConstantZero;
  }
  else {
    fVar18 = *(float *)(plVar8 + 6);
    fVar16 = ABS(*(float *)(plVar8 + 10) * *(float *)(plVar8 + 9));
    bVar1 = *(byte *)((long)plVar8 + 0x5b) & 3;
    if (bVar1 == 2) {
      fVar18 = fVar18 - fVar16 * 0.5;
    }
    else if (bVar1 == 1) {
      fVar18 = fVar18 + fVar16 * 0.5;
    }
    for (lVar10 = plVar8[3]; lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x18)) {
      fVar18 = fVar18 + *(float *)(lVar10 + 0x30);
    }
  }
  if (plVar5 == (long *)0x0) {
    fVar17 = 0.0;
    fVar19 = _ConstantZero;
  }
  else {
    fVar19 = *(float *)(plVar5 + 6);
    fVar17 = ABS(*(float *)(plVar5 + 10) * *(float *)(plVar5 + 9));
    bVar1 = *(byte *)((long)plVar5 + 0x5b) & 3;
    if (bVar1 == 2) {
      fVar19 = fVar19 - fVar17 * 0.5;
    }
    else if (bVar1 == 1) {
      fVar19 = fVar19 + fVar17 * 0.5;
    }
    for (lVar10 = plVar5[3]; lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x18)) {
      fVar19 = fVar19 + *(float *)(lVar10 + 0x30);
    }
  }
  fVar18 = ((fVar19 + 960.0) - fVar17 * 0.5) - (fVar18 + 960.0 + fVar16 * 0.5);
  local_80[0] = (fVar14 + 960.0 + fVar15 * 0.5) - (fVar19 + 960.0 + fVar17 * 0.5);
  pfVar2 = (float *)&local_b0;
  if (0.0 <= local_80[0]) {
    pfVar2 = local_80;
  }
  *(float *)(param_1 + 0x3f) =
       (float)(int)(*(float *)(&DAT_7104465440 + (ulong)(fVar18 < 0.0) * 4) + fVar18);
  local_b0 = (undefined *)((ulong)local_b0._4_4_ << 0x20);
  *(float *)((long)param_1 + 0x1fc) = *pfVar2;
  if (plVar11 != (long *)0x0) {
    *(undefined4 *)(plVar11 + 0x2c) = 1;
    *(undefined1 *)((long)plVar11 + 0x27b) = 1;
    FUN_71037a1ff0(plVar11);
    lVar10 = param_1[0x3b];
    local_b0 = &DAT_710523f5b0;
    local_a8 = FUN_7103792bd0;
    local_a0 = 0;
    local_98 = param_1;
    local_90 = &local_b0;
    local_60 = local_80;
    FUN_7103793160((long)&local_b0,(undefined8 *)local_80);
    FUN_71003cb050((long *)local_80,(long *)(lVar10 + 0x1e0));
    if (local_80 == local_60) {
      pcVar9 = *(code **)(*(long *)local_60 + 0x20);
LAB_7103792a0c:
      (*pcVar9)();
    }
    else if (local_60 != (float *)0x0) {
      pcVar9 = *(code **)(*(long *)local_60 + 0x28);
      goto LAB_7103792a0c;
    }
    if (&local_b0 == local_90) {
      pcVar9 = *(code **)(*local_90 + 0x20);
LAB_7103792a38:
      (*pcVar9)();
    }
    else if (local_90 != (long *)0x0) {
      pcVar9 = *(code **)(*local_90 + 0x28);
      goto LAB_7103792a38;
    }
    plVar5 = (long *)param_1[0x3d];
  }
  if (plVar5 == (long *)0x0) goto LAB_7103792af4;
  *(undefined4 *)(plVar5 + 0x2c) = 0;
  *(undefined1 *)((long)plVar5 + 0x27b) = 1;
  FUN_71037a1ff0(plVar5);
  lVar10 = param_1[0x3d];
  local_b0 = &DAT_710523f5b0;
  local_a8 = FUN_7103792bd0;
  local_a0 = 0;
  local_98 = param_1;
  local_90 = &local_b0;
  local_60 = local_80;
  FUN_7103793160((long)&local_b0,(undefined8 *)local_80);
  FUN_71003cb050((long *)local_80,(long *)(lVar10 + 0x1e0));
  if (local_80 == local_60) {
    pcVar9 = *(code **)(*(long *)local_60 + 0x20);
LAB_7103792ac4:
    (*pcVar9)();
  }
  else if (local_60 != (float *)0x0) {
    pcVar9 = *(code **)(*(long *)local_60 + 0x28);
    goto LAB_7103792ac4;
  }
  if (&local_b0 == local_90) {
    pcVar9 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_7103792af4;
    pcVar9 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar9)();
LAB_7103792af4:
  FUN_7103792bd0((long)param_1);
  return;
}

