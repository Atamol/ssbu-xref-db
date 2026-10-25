// addr:      710240d150
// offset:    0x240d150
// name:      FUN_710240d150
// mangled:   
// signature: undefined __cdecl FUN_710240d150(uint param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710240d150(uint param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  ulong *puVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  uint local_48 [2];
  
  lVar22 = *DAT_7105329f40;
  uVar20 = *(uint *)(lVar22 + 1000);
  if (((uVar20 != 0xffffff) && (uVar20 < *(uint *)(DAT_7105332f20 + 0x18))) &&
     (*(char *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar20 * 8 + 4) != '\0')) {
    uVar20 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar20 * 8);
    if ((uVar20 != 0xffffff) && (uVar20 < *(uint *)(DAT_7105332f20 + 0x1c))) {
      plVar13 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar20 * 0x18);
      if (((*(char *)((long)plVar13 + 0xc) != '\0' && plVar13 != (long *)0x0) &&
          ((*(char *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar20 * 0x18 + 0xd) == '\x03' &&
           (*plVar13 != 0)))) && (**(char **)(lVar22 + 0x3f8) == '\0')) {
        uVar20 = *(uint *)(lVar22 + 1000);
        local_48[0] = uVar20;
        if (uVar20 == 0xffffff) {
          uVar19 = FUN_7103720c30(lVar22 + 0x3f0,local_48,param_3,param_4,param_5,param_6,param_7,
                                  param_8);
        }
        else {
          FUN_7103540a00(DAT_7105332f20,uVar20);
          uVar19 = FUN_7103720c30(lVar22 + 0x3f0,local_48,param_3,param_4,param_5,param_6,param_7,
                                  param_8);
          FUN_7103540b10(DAT_7105332f20,uVar20,param_3,param_4,param_5,param_6,param_7,param_8);
          local_48[0] = 0xffffff;
        }
        if ((uVar19 & 1) == 0) {
          return;
        }
      }
    }
  }
  pcVar16 = *(char **)(lVar22 + 0x3f8);
  if ((*pcVar16 == '\f') && (iVar17 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    lVar14 = *(long *)(lVar22 + 0x3f0);
    iVar18 = 0;
    pbVar15 = &DAT_7104742dbb;
    do {
      iVar9 = iVar17 + iVar18;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      iVar9 = iVar9 >> 1;
      puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar9 * 8);
      uVar19 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar19 == 0x5dc12ee8e) {
        uVar20 = puVar1[1];
        if ((int)uVar20 < 0) goto LAB_710240d2c4;
        pbVar15 = (byte *)(pcVar16 + (int)uVar20);
        goto joined_r0x00710240d2d4;
      }
      iVar11 = iVar9 + -1;
      if (uVar19 < 0x5dc12ee8f) {
        iVar18 = iVar9 + 1;
        iVar11 = iVar17;
      }
      iVar17 = iVar11;
    } while (iVar18 <= iVar17);
    lVar14 = 0;
  }
  else {
LAB_710240d2c4:
    lVar14 = 0;
    pbVar15 = &DAT_7104742dbb;
  }
joined_r0x00710240d2d4:
  if (param_1 < 0x16c) {
    iVar17 = (&DAT_710454a7ec)[(long)(int)param_1 * 0x12];
  }
  else {
    iVar17 = -1;
  }
  bVar3 = *pbVar15;
  if (1 < bVar3 - 0xb) {
    return;
  }
  iVar18 = *(int *)(pbVar15 + 1);
  if (iVar18 < 1) {
    return;
  }
  uVar19 = 0;
  do {
    if (bVar3 == 0xb) {
      lVar5 = lVar14;
      pbVar8 = pbVar15 + *(int *)(pbVar15 + (uVar19 & 0x3fffffff) * 4 + 5);
    }
    else {
      lVar5 = 0;
      pbVar8 = &DAT_7104742dbb;
    }
    if ((*pbVar8 == 0xc) && (iVar9 = *(int *)(pbVar8 + 1) + -1, 0 < *(int *)(pbVar8 + 1))) {
      iVar11 = 0;
      do {
        iVar2 = iVar9 + iVar11;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(lVar5 + 0x28) + (long)*(int *)(pbVar8 + 5) + (long)iVar2 * 8);
        uVar21 = *(ulong *)(*(long *)(lVar5 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar21 == 0x94db0ad8a) {
          uVar20 = puVar1[1];
          if (-1 < (int)uVar20) {
            pbVar8 = pbVar8 + (int)uVar20;
            goto LAB_710240d3dc;
          }
          break;
        }
        iVar4 = iVar2 + -1;
        if (uVar21 < 0x94db0ad8b) {
          iVar11 = iVar2 + 1;
          iVar4 = iVar9;
        }
        iVar9 = iVar4;
      } while (iVar11 <= iVar9);
    }
    lVar5 = 0;
    pbVar8 = &DAT_7104742dbb;
LAB_710240d3dc:
    if ((*pbVar8 == 9) &&
       (uVar21 = *(ulong *)(*(long *)(lVar5 + 0x20) + (long)*(int *)(pbVar8 + 1) * 8),
       (uVar21 & 0xffffffffff) != 0)) {
      uVar6 = 0;
      uVar10 = 1;
      puVar12 = &DAT_71045492b0;
      while( true ) {
        uVar7 = uVar6;
        if ((((puVar12[-10] ^ uVar21) & 0xffffffffff) == 0) ||
           (uVar7 = uVar10, ((puVar12[-5] ^ uVar21) & 0xffffffffff) == 0)) goto LAB_710240d478;
        if (0x89 < uVar10 + 1) goto LAB_710240d490;
        if (((*puVar12 ^ uVar21) & 0xffffffffff) == 0) break;
        if (((puVar12[5] ^ uVar21) & 0xffffffffff) == 0) {
          uVar7 = uVar6 | 3;
          goto LAB_710240d478;
        }
        uVar6 = uVar6 + 4;
        uVar10 = uVar10 + 4;
        puVar12 = puVar12 + 0x14;
      }
      uVar7 = uVar6 | 2;
LAB_710240d478:
      if (*(int *)(&DAT_7104549258 + (uVar7 & 0xffffffff) * 0x28) != -1 &&
          iVar17 == *(int *)(&DAT_7104549258 + (uVar7 & 0xffffffff) * 0x28)) {
        pbVar8 = &DAT_7104742dbb;
        lVar5 = 0;
        if ((bVar3 == 0xb) && ((int)uVar19 < iVar18)) {
          pbVar8 = pbVar15 + *(int *)(pbVar15 + (uVar19 & 0x3fffffff) * 4 + 5);
          lVar5 = lVar14;
        }
        if ((*pbVar8 != 0xc) || (iVar17 = *(int *)(pbVar8 + 1) + -1, *(int *)(pbVar8 + 1) < 1))
        goto LAB_710240d558;
        iVar18 = 0;
        pbVar15 = &DAT_7104742dbb;
        break;
      }
    }
LAB_710240d490:
    uVar19 = uVar19 + 1;
    if ((long)iVar18 <= (long)uVar19) {
      return;
    }
  } while( true );
  while( true ) {
    iVar11 = iVar9 + -1;
    if (uVar19 < 0xcddcab188) {
      iVar18 = iVar9 + 1;
      iVar11 = iVar17;
    }
    iVar17 = iVar11;
    if (iVar17 < iVar18) break;
    iVar9 = iVar17 + iVar18;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 1;
    }
    iVar9 = iVar9 >> 1;
    puVar1 = (uint *)(*(long *)(lVar5 + 0x28) + (long)*(int *)(pbVar8 + 5) + (long)iVar9 * 8);
    uVar19 = *(ulong *)(*(long *)(lVar5 + 0x20) + (ulong)*puVar1 * 8);
    if (uVar19 == 0xcddcab187) {
      uVar20 = puVar1[1];
      if ((int)uVar20 < 0) {
LAB_710240d558:
        pbVar15 = &DAT_7104742dbb;
      }
      else {
        pbVar15 = pbVar8 + (int)uVar20;
      }
      break;
    }
  }
  switch(*pbVar15) {
  case 1:
  case 3:
    uVar20 = (uint)pbVar15[1];
    if (10 < pbVar15[1]) goto LAB_710240d5e4;
    goto LAB_710240d5c8;
  case 2:
    uVar20 = (uint)(char)pbVar15[1];
    break;
  case 4:
    uVar20 = (uint)*(short *)(pbVar15 + 1);
    break;
  case 5:
    uVar20 = (uint)*(ushort *)(pbVar15 + 1);
    break;
  case 6:
  case 7:
    uVar20 = *(uint *)(pbVar15 + 1);
    break;
  default:
    uVar20 = 0;
    goto LAB_710240d5c8;
  }
  if (uVar20 < 0xb) {
LAB_710240d5c8:
    FUN_7103737290("Stage_Rev",(&PTR_s_StRev_None_710523cf40)[uVar20],500);
  }
LAB_710240d5e4:
  *(uint *)(lVar22 + 0x490) = uVar20;
  return;
}

