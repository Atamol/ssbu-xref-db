// addr:      710284e490
// offset:    0x284e490
// name:      FUN_710284e490
// mangled:   
// signature: undefined __cdecl FUN_710284e490(long * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, byte * param_7, ulong param_8, ulong param_9, ulong param_10, ulong param_11, ulong param_12, ulong param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16, undefined4 param_17, byte * param_18, ulong param_19, long param_20)


void FUN_710284e490(long *param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   ulong param_6,byte *param_7,ulong param_8,ulong param_9,ulong param_10,
                   ulong param_11,ulong param_12,ulong param_13,undefined4 param_14,
                   undefined4 param_15,undefined4 param_16,undefined4 param_17,byte *param_18,
                   ulong param_19,long param_20)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long ****pppplVar8;
  byte ****ppppbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *local_f0;
  uint local_b0 [2];
  byte local_a8 [64];
  undefined8 local_68;
  
  param_1[2] = 0x200000000;
  param_1[3] = 0;
  *param_1 = param_2;
  param_1[1] = (long)param_4;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = (long)&PTR_FUN_710517b340;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xc] = 0x3f80000000000000;
  param_1[0xf] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0x11] = 0x3f80000000000000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x18] = 0;
  plVar21 = param_1 + 0x16;
  *plVar21 = 0;
  plVar22 = param_1 + 0x17;
  *plVar22 = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0xffffffffffffffff;
  param_1[0x1d] = param_20;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x104) = 0xffffffffffffffff;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  plVar13 = *(long **)(*(long *)(param_2 + 0x300) + 0x18);
  plVar14 = (long *)*plVar13;
  do {
    uVar10 = param_6;
    pbVar11 = param_7;
    uVar12 = param_8;
    pppplVar8 = param_3;
    if (plVar14 == (long *)plVar13[1]) {
      param_1[5] = 0;
      goto joined_r0x00710284e5b0;
    }
    lVar15 = *plVar14;
    plVar14 = plVar14 + 1;
  } while (((*(ulong *)(lVar15 + 0xa0) ^ (ulong)param_5) & 0xffffffffff) != 0);
  param_1[5] = lVar15;
  if (lVar15 != 0) {
    pppplVar8 = (long ****)0x1;
    FUN_71025f4d80((long *)**(undefined8 **)(lVar15 + 0x110),
                   (long *)(*(undefined8 **)(lVar15 + 0x110))[1],1);
    param_2 = *param_1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(long *)**(undefined8 **)(param_1[5] + 0x110) + 0x10);
  }
joined_r0x00710284e5b0:
  if ((param_6 & 0xffffffffff) != 0) {
    for (plVar14 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
        plVar14 != *(long **)(*(long *)(param_2 + 0x310) + 0xd8); plVar14 = plVar14 + 2) {
      if ((*(uint *)(plVar14 + 1) < 2) &&
         (lVar15 = *plVar14, (param_6 & 0xffffffffff) == *(ulong *)(lVar15 + 0x68))) {
        param_1[0x16] = lVar15;
        if (lVar15 == 0) goto LAB_710284e638;
        if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar15 + 200) + 0x32) = 0x101;
        }
        if (*(long *)(lVar15 + 0xd8) == 0) goto LAB_710284e638;
        *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x22) = 1;
        lVar15 = *plVar21;
        goto joined_r0x00710284eb88;
      }
    }
  }
  param_1[0x16] = 0;
LAB_710284e638:
  lVar15 = *plVar21;
joined_r0x00710284eb88:
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x118) = *(byte *)(lVar15 + 0x118) | 1;
  }
  local_f0 = param_1 + 0x16;
  if ((param_7 != (byte *)0x0) && (uVar17 = (uint)*param_7, *param_7 != 0)) {
    plVar14 = *(long **)(*(long *)(*param_1 + 0x310) + 0xd0);
    plVar13 = *(long **)(*(long *)(*param_1 + 0x310) + 0xd8);
    if (plVar14 != plVar13) {
      uVar16 = 0;
      uVar19 = 0xffffffff;
      do {
        param_7 = param_7 + 1;
        uVar2 = uVar17 + 0x20;
        if (0x19 < uVar17 - 0x41) {
          uVar2 = uVar17;
        }
        uVar19 = (&DAT_7104754084)[(uVar2 ^ uVar19) & 0xff] ^ uVar19 >> 8;
        uVar17 = (uint)*param_7;
        uVar16 = uVar16 + 0x100000000;
      } while (uVar17 != 0);
      do {
        if ((*(uint *)(plVar14 + 1) < 2) &&
           (lVar15 = *plVar14, (uVar16 & 0xff00000000 | (ulong)~uVar19) == *(ulong *)(lVar15 + 0x68)
           )) {
          param_1[0x17] = lVar15;
          if (lVar15 == 0) goto LAB_710284e6f0;
          *(undefined1 *)(lVar15 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar15 + 0x108),param_2,pppplVar8,param_4,param_5,uVar10,pbVar11,
                         uVar12);
          lVar15 = *plVar22;
          if (lVar15 == 0) goto LAB_710284e730;
          if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar15 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar15 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar15 + 0xe0) == '\0') goto LAB_710284e6f0;
          *(undefined1 *)(*(long *)(lVar15 + 0xb0) + 0x10) = 0;
          lVar15 = *plVar22;
          goto joined_r0x00710284ec18;
        }
        plVar14 = plVar14 + 2;
      } while (plVar13 != plVar14);
    }
  }
  param_1[0x17] = 0;
LAB_710284e6f0:
  lVar15 = *plVar22;
joined_r0x00710284ec18:
  if (lVar15 != 0) {
    if ((*(char *)(lVar15 + 0xe0) != '\0') && (*(long *)(lVar15 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar15 + 200) + 0x32) = 0;
    }
    if (*(long *)(lVar15 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar15 + 0xd8) + 0x22) = 0;
    }
    if ((*plVar22 != 0) && (lVar15 = *(long *)(*plVar22 + 0xd8), lVar15 != 0)) {
      *(undefined1 *)(lVar15 + 0x28) = 1;
    }
  }
LAB_710284e730:
  local_a8[0] = 0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_710062dc20(local_b0,"%s_%s%s");
  if (param_1[0x17] == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_71025ee6c0(*(long *)(param_1[0x17] + 0xd0),local_a8);
  }
  param_1[0x18] = uVar16;
  FUN_710062dc20(local_b0,"%s_%s%s");
  if (*plVar22 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_71025ee6c0(*(long *)(*plVar22 + 0xd0),local_a8);
  }
  param_1[0x1a] = uVar16;
  FUN_710062dc20(local_b0,"%s_%s%s");
  if (param_1[0x17] == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_71025ee6c0(*(long *)(param_1[0x17] + 0xd0),local_a8);
  }
  param_1[0x19] = uVar16;
  ppppbVar9 = (byte ****)&DAT_71044424dd;
  pppplVar8 = (long ****)&DAT_710426e064;
  FUN_710062dc20(local_b0,"%s_%s%s");
  lVar15 = param_1[0x17];
  if (lVar15 == 0) {
    param_1[0x1b] = 0;
  }
  else {
    uVar16 = FUN_71025ee6c0(*(long *)(lVar15 + 0xd0),local_a8);
    param_1[0x1b] = uVar16;
    if ((((lVar15 != 0) && (param_1[0x18] != 0)) && (lVar20 = *(long *)(lVar15 + 0xd8), lVar20 != 0)
        ) && ((*(long *)(lVar15 + 0xd0) != 0 &&
              (bVar5 = FUN_710367c160(0,*(long *)(lVar20 + 8),param_1[0x18]), bVar5)))) {
      *(undefined4 *)(lVar20 + 0x10) = 0;
    }
  }
  FUN_710260fdd0(0,param_1[0x17],1);
  lVar20 = *param_1;
  lVar15 = *(long *)(lVar20 + 800);
  plVar14 = *(long **)(*(long *)(*(long *)(lVar15 + 0x48) + 800) + 0x40);
  piVar3 = (int *)*plVar14;
  piVar4 = (int *)plVar14[1];
  if ((long)piVar4 - (long)piVar3 == 0) {
LAB_710284e928:
    uVar16 = 0xffffffff;
  }
  else {
    piVar18 = piVar3;
    piVar1 = piVar3;
    while ((piVar1 != piVar4 &&
           ((*piVar1 != 0 ||
            (piVar18 = piVar1, ((*(ulong *)(piVar1 + 2) ^ param_8) & 0xffffffffff) != 0))))) {
      piVar1 = piVar1 + 0x1c;
      piVar18 = piVar4;
    }
    uVar16 = ((long)piVar18 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar4 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7) <= uVar16)
    goto LAB_710284e928;
  }
  *(int *)((long)param_1 + 0xfc) = (int)uVar16;
  iVar6 = FUN_71025ef9a0(*(long **)(*(long *)(*(long *)(lVar15 + 0x48) + 800) + 0x40),param_8,
                         param_9);
  *(int *)(param_1 + 0x20) = iVar6;
  if ((param_10 & 0xffffffffff) != 0) {
    iVar6 = FUN_71025ef9a0(*(long **)(*(long *)(*(long *)(lVar15 + 0x48) + 800) + 0x40),param_8,
                           param_10);
    *(int *)((long)param_1 + 0x104) = iVar6;
  }
  lVar15 = *(long *)(lVar20 + 800);
  plVar14 = *(long **)(*(long *)(*(long *)(lVar15 + 0x48) + 800) + 0x40);
  piVar3 = (int *)*plVar14;
  piVar4 = (int *)plVar14[1];
  if ((long)piVar4 - (long)piVar3 != 0) {
    piVar18 = piVar3;
    piVar1 = piVar3;
    while ((piVar1 != piVar4 &&
           ((*piVar1 != 0 ||
            (piVar18 = piVar1, ((*(ulong *)(piVar1 + 2) ^ param_11) & 0xffffffffff) != 0))))) {
      piVar1 = piVar1 + 0x1c;
      piVar18 = piVar4;
    }
    uVar16 = ((long)piVar18 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7;
    if (uVar16 < (ulong)(((long)piVar4 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7))
    goto LAB_710284e9f8;
  }
  uVar16 = 0xffffffff;
LAB_710284e9f8:
  *(int *)(param_1 + 0x21) = (int)uVar16;
  iVar6 = FUN_71025ef9a0(*(long **)(*(long *)(*(long *)(lVar15 + 0x48) + 800) + 0x40),param_11,
                         param_12);
  *(int *)((long)param_1 + 0x10c) = iVar6;
  if ((param_13 & 0xffffffffff) != 0) {
    iVar6 = FUN_71025ef9a0(*(long **)(*(long *)(*(long *)(lVar15 + 0x48) + 800) + 0x40),param_11,
                           param_13);
    *(int *)(param_1 + 0x22) = iVar6;
  }
  lVar15 = *(long *)(lVar20 + 0x300);
  uVar17 = FUN_7103151710(param_18);
  lVar15 = FUN_710262cd30(*(long *)(lVar15 + 8),uVar17);
  uVar17 = *(uint *)(lVar15 + 0x110);
  lVar15 = *(long *)(lVar15 + 0x108);
  param_1[0x24] = (long)param_3;
  *(undefined4 *)(param_1 + 0x28) = param_14;
  *(undefined4 *)((long)param_1 + 0x144) = param_15;
  *(undefined4 *)(param_1 + 0x29) = param_16;
  *(undefined4 *)((long)param_1 + 0x14c) = param_17;
  local_68 = 0;
  if ((*param_3)[1] == (long **)0x0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = FUN_7102405040((long)(*param_3)[1],&local_68,0,ppppbVar9,pppplVar8,uVar10,pbVar11,uVar12
                          );
  }
  param_1[0x27] = (ulong)uVar17;
  param_1[0x26] = lVar15;
  *(undefined4 *)(param_1 + 0x25) = uVar7;
  FUN_710314fbe0((long)(param_1 + 6),*local_f0,param_1[5]);
  if ((param_19 & 0xffffffffff) != 0) {
    for (plVar14 = *(long **)(*(long *)(*param_1 + 0x310) + 0xd0);
        plVar14 != *(long **)(*(long *)(*param_1 + 0x310) + 0xd8); plVar14 = plVar14 + 2) {
      if ((*(uint *)(plVar14 + 1) < 2) &&
         (lVar15 = *plVar14, (param_19 & 0xffffffffff) == *(ulong *)(lVar15 + 0x68))) {
        param_1[0x1c] = lVar15;
        if (lVar15 == 0) {
          return;
        }
        if (*(char *)(lVar15 + 0xe0) == '\0') {
          return;
        }
        (**(code **)(**(long **)(lVar15 + 0x90) + 0x180))
                  (*(long **)(lVar15 + 0x90),param_1[0x1d] & 0xffffffffff,0);
        return;
      }
    }
  }
  param_1[0x1c] = 0;
  return;
}

