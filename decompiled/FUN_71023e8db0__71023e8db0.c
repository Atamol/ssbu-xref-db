// addr:      71023e8db0
// offset:    0x23e8db0
// name:      FUN_71023e8db0
// mangled:   
// signature: undefined __cdecl FUN_71023e8db0(long param_1, long param_2)


void FUN_71023e8db0(long param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  byte ****ppppbVar12;
  long *plVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  byte ****ppppbVar14;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar15;
  undefined8 extraout_x1_03;
  undefined **ppuVar16;
  byte *pbVar17;
  long ****pppplVar18;
  long ****pppplVar19;
  long *********ppppppppplVar20;
  uint uVar21;
  uint uVar22;
  byte ****ppppbVar23;
  long ****pppplVar24;
  ulong in_x5;
  uint *puVar25;
  long ***in_x6;
  uint *puVar26;
  long ***in_x7;
  long ***ppplVar27;
  byte bVar28;
  char *pcVar29;
  byte *pbVar30;
  int iVar31;
  uint uVar32;
  long *plVar33;
  uint uVar34;
  long lVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  long *plVar44;
  long *plVar45;
  long lVar46;
  byte *pbVar47;
  long lVar48;
  ulong uVar49;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_a8 [2];
  uint local_a0 [2];
  uint local_98 [2];
  uint local_90 [2];
  long ***local_88;
  undefined4 local_7c [3];
  
  lVar46 = *(long *)(DAT_7105329de8 + 8);
  lVar48 = *(long *)(param_1 + 0xe8);
  *(undefined8 *)(*(long *)(lVar46 + 0xc0) + 0x70) = 0;
  lVar10 = *(long *)(lVar46 + 0xc0);
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104546028,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,in_x5,in_x6,in_x7);
  lVar10 = *(long *)(lVar46 + 0xc0);
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104546030,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,in_x5,in_x6,in_x7);
  lVar10 = *(long *)(lVar46 + 0xc0);
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104546038,(long)*(int *)(lVar10 + 0x70),
                 (ulong)*(uint *)(lVar10 + 0x68),(long ****)0x1,in_x5,in_x6,in_x7);
  lVar10 = *(long *)(lVar46 + 0xc0);
  ppuVar16 = (undefined **)(long)*(int *)(lVar10 + 0x70);
  ppppbVar23 = (byte ****)(ulong)*(uint *)(lVar10 + 0x68);
  pppplVar24 = (long ****)0x1;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104546040,(long)ppuVar16,(ulong)ppppbVar23,(long ****)0x1,
                 in_x5,in_x6,in_x7);
  lVar10 = *(long *)(lVar46 + 0xc0);
  uVar15 = extraout_x1;
  while (uVar11 = FUN_710323cb80(lVar10,uVar15,(long *********)ppuVar16,ppppbVar23,pppplVar24,in_x5,
                                 in_x6,in_x7), (uVar11 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar15 = extraout_x1_00;
  }
  lVar10 = *(long *)(lVar46 + 0xc0);
  if (((DAT_710532f4d0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_710532f4d0), iVar9 != 0)) {
    DAT_710532f4a0 = 0xffffff;
    ppuVar16 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d0);
  }
  plVar44 = (long *)(lVar10 + 0x10);
  plVar33 = (long *)*plVar44;
  plVar13 = plVar44;
  if (plVar33 == (long *)0x0) {
    puVar25 = &DAT_710532f4a0;
  }
  else {
    do {
      bVar7 = (plVar33[4] & 0xffffffffffU) < 0x256aae431f;
      if (!bVar7) {
        plVar13 = plVar33;
      }
      plVar33 = (long *)plVar33[bVar7];
    } while (plVar33 != (long *)0x0);
    if ((plVar13 == plVar44) || (0x256aae431f < (plVar13[4] & 0xffffffffe0U))) {
      puVar25 = &DAT_710532f4a0;
    }
    else {
      puVar25 = (uint *)(plVar13 + 5);
    }
  }
  uVar32 = *puVar25;
  local_90[0] = uVar32;
  if (uVar32 == 0xffffff) {
    FUN_7103720c30(lVar46 + 0xd0,local_90,(long *********)ppuVar16,ppppbVar23,pppplVar24,in_x5,in_x6
                   ,in_x7);
  }
  else {
    FUN_7103540a00(DAT_7105332f20,uVar32);
    FUN_7103720c30(lVar46 + 0xd0,local_90,(long *********)ppuVar16,ppppbVar23,pppplVar24,in_x5,in_x6
                   ,in_x7);
    FUN_7103540b10(DAT_7105332f20,uVar32,(long *********)ppuVar16,ppppbVar23,pppplVar24,in_x5,in_x6,
                   in_x7);
    local_90[0] = 0xffffff;
  }
  lVar10 = *(long *)(lVar46 + 0xc0);
  if (((DAT_710532f4d0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_710532f4d0), iVar9 != 0)) {
    ppuVar16 = &PTR_LOOP_7104f17000;
    DAT_710532f4a0 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d0);
  }
  plVar44 = (long *)(lVar10 + 0x10);
  plVar33 = (long *)*plVar44;
  plVar13 = plVar44;
  if (plVar33 == (long *)0x0) {
    puVar25 = &DAT_710532f4a0;
  }
  else {
    do {
      bVar7 = (plVar33[4] & 0xffffffffffU) < 0x29245e9df5;
      if (!bVar7) {
        plVar13 = plVar33;
      }
      plVar33 = (long *)plVar33[bVar7];
    } while (plVar33 != (long *)0x0);
    if ((plVar13 == plVar44) || (0x29245e9df5 < (plVar13[4] & 0xfffffffffeU))) {
      puVar25 = &DAT_710532f4a0;
    }
    else {
      puVar25 = (uint *)(plVar13 + 5);
    }
  }
  uVar32 = *puVar25;
  plVar13 = (long *)(lVar46 + 0x100);
  local_98[0] = uVar32;
  if (uVar32 == 0xffffff) {
    FUN_7103720c30((long)plVar13,local_98,(long *********)ppuVar16,ppppbVar23,pppplVar24,in_x5,in_x6
                   ,in_x7);
  }
  else {
    FUN_7103540a00(DAT_7105332f20,uVar32);
    FUN_7103720c30((long)plVar13,local_98,(long *********)ppuVar16,ppppbVar23,pppplVar24,in_x5,in_x6
                   ,in_x7);
    FUN_7103540b10(DAT_7105332f20,uVar32,(long *********)ppuVar16,ppppbVar23,pppplVar24,in_x5,in_x6,
                   in_x7);
    local_98[0] = 0xffffff;
  }
  lVar10 = *(long *)(lVar46 + 0xc0);
  if (((DAT_710532f4d0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_710532f4d0), iVar9 != 0)) {
    ppuVar16 = &PTR_LOOP_7104f17000;
    DAT_710532f4a0 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d0);
  }
  plVar45 = (long *)(lVar10 + 0x10);
  plVar44 = (long *)*plVar45;
  plVar33 = plVar45;
  if (plVar44 == (long *)0x0) {
    puVar25 = &DAT_710532f4a0;
  }
  else {
    do {
      bVar7 = (plVar44[4] & 0xfffffffffcU) < 0x25e8cf6d24;
      if (!bVar7) {
        plVar33 = plVar44;
      }
      plVar44 = (long *)plVar44[bVar7];
    } while (plVar44 != (long *)0x0);
    if ((plVar33 == plVar45) || (0x25e8cf6d24 < (plVar33[4] & 0xffffffffffU))) {
      puVar25 = &DAT_710532f4a0;
    }
    else {
      puVar25 = (uint *)(plVar33 + 5);
    }
  }
  uVar32 = *puVar25;
  local_a0[0] = uVar32;
  if (uVar32 == 0xffffff) {
    FUN_7103720c30(lVar46 + 0x130,local_a0,(long *********)ppuVar16,ppppbVar23,pppplVar24,in_x5,
                   in_x6,in_x7);
  }
  else {
    FUN_7103540a00(DAT_7105332f20,uVar32);
    FUN_7103720c30(lVar46 + 0x130,local_a0,(long *********)ppuVar16,ppppbVar23,pppplVar24,in_x5,
                   in_x6,in_x7);
    FUN_7103540b10(DAT_7105332f20,uVar32,(long *********)ppuVar16,ppppbVar23,pppplVar24,in_x5,in_x6,
                   in_x7);
    local_a0[0] = 0xffffff;
  }
  lVar10 = *(long *)(lVar46 + 0xc0);
  if (((DAT_710532f4d0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_710532f4d0), iVar9 != 0)) {
    ppuVar16 = &PTR_LOOP_7104f17000;
    DAT_710532f4a0 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d0);
  }
  plVar45 = (long *)(lVar10 + 0x10);
  plVar44 = (long *)*plVar45;
  plVar33 = plVar45;
  if (plVar44 == (long *)0x0) {
LAB_71023e9160:
    puVar25 = &DAT_710532f4a0;
  }
  else {
    do {
      bVar7 = (plVar44[4] & 0xfffffffffeU) < 0x25a6282f6a;
      if (!bVar7) {
        plVar33 = plVar44;
      }
      plVar44 = (long *)plVar44[bVar7];
    } while (plVar44 != (long *)0x0);
    if ((plVar33 == plVar45) || (0x25a6282f6a < (plVar33[4] & 0xffffffffffU))) goto LAB_71023e9160;
    puVar25 = (uint *)(plVar33 + 5);
  }
  uVar32 = *puVar25;
  local_a8[0] = uVar32;
  if (uVar32 == 0xffffff) {
    FUN_7103720c30(lVar46 + 0x160,local_a8,(long *********)ppuVar16,ppppbVar23,pppplVar24,in_x5,
                   in_x6,in_x7);
  }
  else {
    FUN_7103540a00(DAT_7105332f20,uVar32);
    FUN_7103720c30(lVar46 + 0x160,local_a8,(long *********)ppuVar16,ppppbVar23,pppplVar24,in_x5,
                   in_x6,in_x7);
    FUN_7103540b10(DAT_7105332f20,uVar32,(long *********)ppuVar16,ppppbVar23,pppplVar24,in_x5,in_x6,
                   in_x7);
    local_a8[0] = 0xffffff;
  }
  pcVar29 = *(char **)(lVar46 + 0x108);
  if ((*pcVar29 == '\f') && (iVar9 = *(int *)(pcVar29 + 1) + -1, 0 < *(int *)(pcVar29 + 1))) {
    lVar10 = *plVar13;
    iVar31 = 0;
    pbVar47 = &DAT_7104742dbb;
    do {
      iVar37 = iVar9 + iVar31;
      if (iVar37 < 0) {
        iVar37 = iVar37 + 1;
      }
      iVar37 = iVar37 >> 1;
      puVar25 = (uint *)(*(long *)(lVar10 + 0x28) + (long)*(int *)(pcVar29 + 5) + (long)iVar37 * 8);
      uVar11 = *(ulong *)(*(long *)(lVar10 + 0x20) + (ulong)*puVar25 * 8);
      if (uVar11 == 0x5a4fa7c89) {
        uVar32 = puVar25[1];
        if ((int)uVar32 < 0) goto LAB_71023e9258;
        pbVar47 = (byte *)(pcVar29 + (int)uVar32);
        goto LAB_71023e9264;
      }
      iVar2 = iVar37 + -1;
      if (uVar11 < 0x5a4fa7c8a) {
        iVar31 = iVar37 + 1;
        iVar2 = iVar9;
      }
      iVar9 = iVar2;
    } while (iVar31 <= iVar9);
    lVar10 = 0;
  }
  else {
LAB_71023e9258:
    lVar10 = 0;
    pbVar47 = &DAT_7104742dbb;
  }
LAB_71023e9264:
  bVar28 = *pbVar47;
  if ((bVar28 - 0xb < 2) &&
     (uVar11 = (ulong)*(uint *)(pbVar47 + 1), 0 < (int)*(uint *)(pbVar47 + 1))) {
    uVar49 = 0;
    plVar13 = (long *)(lVar46 + 0x1c8);
    do {
      ppplVar27 = (long ***)0x1276e1b0c7;
      puVar26 = (uint *)0x1c8dcfd6bc;
      puVar25 = (uint *)0x1c312a14b0;
      ppppbVar23 = (byte ****)&DAT_7104742dbb;
      lVar35 = 0;
      iVar9 = (int)uVar11;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          uVar11 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar11 == 0xabb6b6fef) {
            uVar32 = puVar1[1];
            if ((int)uVar32 < 0) {
              ppppbVar12 = (byte ****)&DAT_7104742dbb;
            }
            else {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar32);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar11 < 0xabb6b6ff0) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        local_b4 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        local_b4 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        local_b4 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        local_b4 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        local_b4 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        local_b4 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          uVar11 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar11 == 0x89fbf5b8b) {
            uVar32 = puVar1[1];
            if (-1 < (int)uVar32) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar32);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar11 < 0x89fbf5b8c) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        local_c0 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        local_c0 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        local_c0 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        local_c0 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        local_c0 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        local_c0 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          uVar11 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar11 == 0xbca254bae) {
            uVar32 = puVar1[1];
            if (-1 < (int)uVar32) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar32);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar11 < 0xbca254baf) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        local_c4 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        local_c4 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        local_c4 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        local_c4 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        local_c4 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        local_c4 = 0;
      }
      pppplVar24 = (long ****)0xaeb0d2fa7;
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          uVar11 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar11 == 0xaeb0d2fa7) {
            uVar32 = puVar1[1];
            if (-1 < (int)uVar32) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar32);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar11 < 0xaeb0d2fa8) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        local_c8 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        local_c8 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        local_c8 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        local_c8 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        local_c8 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        local_c8 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          uVar11 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar11 == 0xd954e9a0c) {
            uVar32 = puVar1[1];
            if (-1 < (int)uVar32) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar32);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar11 < 0xd954e9a0d) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        local_cc = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        local_cc = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        local_cc = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        local_cc = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        local_cc = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        local_cc = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          uVar11 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar11 == 0x1d8dc20848) {
            uVar32 = puVar1[1];
            if (-1 < (int)uVar32) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar32);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar11 < 0x1d8dc20849) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        local_b8 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        local_b8 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        local_b8 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        local_b8 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        local_b8 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        local_b8 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          uVar11 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar11 == 0x1d84c8a1a1) {
            uVar32 = puVar1[1];
            if (-1 < (int)uVar32) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar32);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar11 < 0x1d84c8a1a2) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        local_bc = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        local_bc = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        local_bc = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        local_bc = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        local_bc = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        local_bc = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          uVar11 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar11 == 0x1b8940e840) {
            uVar32 = puVar1[1];
            if (-1 < (int)uVar32) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar32);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar11 < 0x1b8940e841) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        uVar32 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        uVar32 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        uVar32 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        uVar32 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar32 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        uVar32 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          uVar11 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar11 == 0x1b0a01fef1) {
            uVar34 = puVar1[1];
            if (-1 < (int)uVar34) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar34);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar11 < 0x1b0a01fef2) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        uVar34 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        uVar34 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        uVar34 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        uVar34 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar34 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        uVar34 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          uVar11 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar11 == 0x237dc1b447) {
            uVar36 = puVar1[1];
            if (-1 < (int)uVar36) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar36);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar11 < 0x237dc1b448) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        uVar36 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        uVar36 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        uVar36 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        uVar36 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar36 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        uVar36 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          uVar11 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar11 == 0x2351d1d801) {
            uVar38 = puVar1[1];
            if (-1 < (int)uVar38) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar38);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar11 < 0x2351d1d802) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        uVar38 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        uVar38 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        uVar38 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        uVar38 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar38 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        uVar38 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          uVar11 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar11 == 0x220dd93fb1) {
            uVar39 = puVar1[1];
            if (-1 < (int)uVar39) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar39);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar11 < 0x220dd93fb2) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        uVar39 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        uVar39 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        uVar39 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        uVar39 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar39 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        uVar39 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          uVar11 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar11 == 0x22c42bf20f) {
            uVar40 = puVar1[1];
            if (-1 < (int)uVar40) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar40);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (uVar11 < 0x22c42bf210) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        uVar40 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        uVar40 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        uVar40 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        uVar40 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar40 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        uVar40 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar31 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar37 = 0;
        do {
          iVar2 = iVar31 + iVar37;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                           (long)iVar2 * 8);
          pppplVar24 = *(long *****)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
          if (pppplVar24 == (long ****)0x1c312a14b0) {
            uVar41 = puVar1[1];
            if (-1 < (int)uVar41) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)uVar41);
            }
            break;
          }
          iVar5 = iVar2 + -1;
          if (pppplVar24 < (long ****)0x1c312a14b1) {
            iVar37 = iVar2 + 1;
            iVar5 = iVar31;
          }
          iVar31 = iVar5;
        } while (iVar37 <= iVar31);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        uVar41 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        uVar41 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        uVar41 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        uVar41 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar41 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        uVar41 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (uVar42 = *(int *)((long)ppppbVar14 + 1) - 1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar31 = 0;
        do {
          iVar37 = uVar42 + iVar31;
          if (iVar37 < 0) {
            iVar37 = iVar37 + 1;
          }
          iVar37 = iVar37 >> 1;
          pppplVar24 = (long ****)
                       (*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                       (long)iVar37 * 8);
          puVar25 = *(uint **)(*(long *)(lVar35 + 0x20) + (ulong)*(uint *)pppplVar24 * 8);
          if (puVar25 == (uint *)0x1c8dcfd6bc) {
            if (-1 < (int)*(uint *)((long)pppplVar24 + 4)) {
              ppppbVar12 = (byte ****)
                           ((long)ppppbVar14 + (long)(int)*(uint *)((long)pppplVar24 + 4));
            }
            break;
          }
          pppplVar24 = (long ****)(ulong)(iVar37 - 1U);
          uVar43 = iVar37 - 1U;
          if (puVar25 < (uint *)0x1c8dcfd6bd) {
            iVar31 = iVar37 + 1;
            uVar43 = uVar42;
          }
          uVar42 = uVar43;
        } while (iVar31 <= (int)uVar42);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        uVar42 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        uVar42 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        uVar42 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        uVar42 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar42 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        uVar42 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (uVar43 = *(int *)((long)ppppbVar14 + 1) - 1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar31 = 0;
        do {
          iVar37 = uVar43 + iVar31;
          if (iVar37 < 0) {
            iVar37 = iVar37 + 1;
          }
          uVar8 = iVar37 >> 1;
          pppplVar24 = (long ****)(ulong)uVar8;
          puVar25 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                            (long)(int)uVar8 * 8);
          puVar26 = *(uint **)(*(long *)(lVar35 + 0x20) + (ulong)*puVar25 * 8);
          if (puVar26 == (uint *)0x1276e1b0c7) {
            if (-1 < (int)puVar25[1]) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)puVar25[1]);
            }
            break;
          }
          puVar25 = (uint *)(ulong)(uVar8 - 1);
          uVar21 = uVar8 - 1;
          if (puVar26 < (uint *)0x1276e1b0c8) {
            iVar31 = uVar8 + 1;
            uVar21 = uVar43;
          }
          uVar43 = uVar21;
        } while (iVar31 <= (int)uVar43);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        uVar43 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        uVar43 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        uVar43 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        uVar43 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar43 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        uVar43 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      ppppbVar12 = ppppbVar23;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (uVar8 = *(int *)((long)ppppbVar14 + 1) - 1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        pppplVar24 = *(long *****)(lVar35 + 0x20);
        iVar31 = 0;
        do {
          iVar37 = uVar8 + iVar31;
          if (iVar37 < 0) {
            iVar37 = iVar37 + 1;
          }
          uVar21 = iVar37 >> 1;
          puVar25 = (uint *)(ulong)uVar21;
          puVar26 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                            (long)(int)uVar21 * 8);
          ppplVar27 = pppplVar24[*puVar26];
          if (ppplVar27 == (long ***)0x1da59efa6d) {
            if (-1 < (int)puVar26[1]) {
              ppppbVar12 = (byte ****)((long)ppppbVar14 + (long)(int)puVar26[1]);
            }
            break;
          }
          puVar26 = (uint *)(ulong)(uVar21 - 1);
          uVar22 = uVar21 - 1;
          if (ppplVar27 < (long ***)0x1da59efa6e) {
            iVar31 = uVar21 + 1;
            uVar22 = uVar8;
          }
          uVar8 = uVar22;
        } while (iVar31 <= (int)uVar8);
      }
      switch(*(byte *)ppppbVar12) {
      case 1:
      case 3:
        uVar8 = (uint)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 2:
        uVar8 = (uint)(char)*(byte *)((long)ppppbVar12 + 1);
        break;
      case 4:
        uVar8 = (uint)*(short *)((long)ppppbVar12 + 1);
        break;
      case 5:
        uVar8 = (uint)*(ushort *)((long)ppppbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar8 = *(uint *)((long)ppppbVar12 + 1);
        break;
      default:
        uVar8 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        ppppbVar14 = ppppbVar23;
        if ((long)uVar49 < (long)iVar9) {
          ppppbVar14 = (byte ****)(pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5));
          lVar35 = lVar10;
        }
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      if (*(byte *)ppppbVar14 == 0xc) {
        uVar21 = *(int *)((long)ppppbVar14 + 1) - 1;
        if (0 < *(int *)((long)ppppbVar14 + 1)) {
          puVar25 = *(uint **)(lVar35 + 0x20);
          pppplVar24 = (long ****)0x0;
          do {
            uVar22 = (uint)pppplVar24;
            iVar31 = uVar21 + uVar22;
            if (iVar31 < 0) {
              iVar31 = iVar31 + 1;
            }
            uVar3 = iVar31 >> 1;
            puVar26 = (uint *)(ulong)uVar3;
            ppplVar27 = (long ***)
                        (*(long *)(lVar35 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                        (long)(int)uVar3 * 8);
            uVar4 = *(uint *)ppplVar27;
            if (*(ulong *)(puVar25 + (ulong)uVar4 * 2) == 0xb48285ce3) {
              if (-1 < (int)*(uint *)((long)ppplVar27 + 4)) {
                ppppbVar23 = (byte ****)
                             ((long)ppppbVar14 + (long)(int)*(uint *)((long)ppplVar27 + 4));
                goto LAB_71023ea674;
              }
              break;
            }
            ppplVar27 = (long ***)(ulong)(uVar3 - 1);
            uVar6 = uVar3 - 1;
            if (*(ulong *)(puVar25 + (ulong)uVar4 * 2) < 0xb48285ce4) {
              uVar22 = uVar3 + 1;
              uVar6 = uVar21;
            }
            uVar21 = uVar6;
            pppplVar24 = (long ****)(ulong)uVar22;
          } while ((int)uVar22 <= (int)uVar21);
        }
        ppppbVar23 = (byte ****)&DAT_7104742dbb;
      }
LAB_71023ea674:
      pbVar17 = &DAT_7104742dbb;
      switch(*(byte *)ppppbVar23) {
      case 1:
      case 3:
        local_d0 = (uint)*(byte *)((long)ppppbVar23 + 1);
        break;
      case 2:
        local_d0 = (uint)(char)*(byte *)((long)ppppbVar23 + 1);
        break;
      case 4:
        local_d0 = (uint)*(short *)((long)ppppbVar23 + 1);
        break;
      case 5:
        local_d0 = (uint)*(ushort *)((long)ppppbVar23 + 1);
        break;
      case 6:
      case 7:
        local_d0 = *(uint *)((long)ppppbVar23 + 1);
        break;
      default:
        local_d0 = 0;
      }
      lVar35 = 0;
      if (bVar28 == 0xb) {
        pbVar30 = pbVar17;
        if ((long)uVar49 < (long)iVar9) {
          pbVar30 = pbVar47 + *(int *)(pbVar47 + (uVar49 & 0x3fffffff) * 4 + 5);
          lVar35 = lVar10;
        }
      }
      else {
        pbVar30 = &DAT_7104742dbb;
      }
      if ((*pbVar30 == 0xc) && (uVar21 = *(int *)(pbVar30 + 1) - 1, 0 < *(int *)(pbVar30 + 1))) {
        pppplVar24 = *(long *****)(lVar35 + 0x20);
        ppppbVar23 = (byte ****)0x0;
        do {
          uVar22 = (uint)ppppbVar23;
          iVar9 = uVar21 + uVar22;
          if (iVar9 < 0) {
            iVar9 = iVar9 + 1;
          }
          uVar3 = iVar9 >> 1;
          puVar25 = (uint *)(ulong)uVar3;
          puVar26 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)(pbVar30 + 5) +
                            (long)(int)uVar3 * 8);
          ppplVar27 = pppplVar24[*puVar26];
          if (ppplVar27 == (long ***)0xafb23e8a3) {
            if (-1 < (int)puVar26[1]) {
              pbVar17 = pbVar30 + (int)puVar26[1];
            }
            break;
          }
          puVar26 = (uint *)(ulong)(uVar3 - 1);
          uVar4 = uVar3 - 1;
          if (ppplVar27 < (long ***)0xafb23e8a4) {
            uVar22 = uVar3 + 1;
            uVar4 = uVar21;
          }
          uVar21 = uVar4;
          ppppbVar23 = (byte ****)(ulong)uVar22;
        } while ((int)uVar22 <= (int)uVar21);
      }
      switch(*pbVar17) {
      case 1:
      case 3:
        pppplVar18 = (long ****)(ulong)pbVar17[1];
        break;
      case 2:
        pppplVar18 = (long ****)(long)(char)pbVar17[1];
        break;
      case 4:
        pppplVar18 = (long ****)(long)*(short *)(pbVar17 + 1);
        break;
      case 5:
        pppplVar18 = (long ****)(ulong)*(ushort *)(pbVar17 + 1);
        break;
      case 6:
      case 7:
        pppplVar18 = (long ****)(ulong)*(uint *)(pbVar17 + 1);
        break;
      default:
        pppplVar18 = (long ****)0x0;
      }
      plVar33 = plVar13;
      plVar44 = (long *)*plVar13;
      if ((long *)*plVar13 == (long *)0x0) {
        lVar35 = *plVar13;
        plVar45 = plVar13;
      }
      else {
        do {
          while (plVar45 = plVar44, *(int *)((long)plVar45 + 0x1c) <= (int)local_b4) {
            if ((int)local_b4 <= *(int *)((long)plVar45 + 0x1c)) goto LAB_71023ea84c;
            plVar33 = plVar45 + 1;
            plVar44 = (long *)*plVar33;
            if ((long *)*plVar33 == (long *)0x0) goto LAB_71023ea84c;
          }
          plVar33 = plVar45;
          plVar44 = (long *)*plVar45;
        } while ((long *)*plVar45 != (long *)0x0);
LAB_71023ea84c:
        lVar35 = *plVar33;
      }
      if (lVar35 == 0) {
        plVar44 = (long *)FUN_710392e290(0x10,0x68,pppplVar18,ppppbVar23,pppplVar24,puVar25,puVar26,
                                         ppplVar27);
        if (plVar44 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_7c[0] = 0;
            local_88 = (long ***)&DAT_00000068;
            pppplVar19 = &local_88;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
            if (((uVar11 & 1) != 0) &&
               (plVar44 = (long *)FUN_710392e290(0x10,0x68,pppplVar19,ppppbVar23,pppplVar24,puVar25,
                                                 puVar26,ppplVar27), plVar44 != (long *)0x0))
            goto LAB_71023ea8e0;
          }
          plVar44 = (long *)0x0;
        }
LAB_71023ea8e0:
        *(uint *)((long)plVar44 + 0x1c) = local_b4;
        *(uint *)(plVar44 + 4) = local_c0;
        *(uint *)((long)plVar44 + 0x24) = local_c4;
        *(uint *)(plVar44 + 5) = local_c8;
        *(uint *)((long)plVar44 + 0x2c) = local_cc;
        *(uint *)(plVar44 + 6) = local_b8;
        *(uint *)((long)plVar44 + 0x34) = local_bc;
        *(uint *)(plVar44 + 7) = uVar32 + local_b8;
        *(uint *)((long)plVar44 + 0x3c) = uVar34 + local_bc;
        *(uint *)(plVar44 + 8) = uVar36 + local_b8;
        *(uint *)((long)plVar44 + 0x44) = uVar38 + local_bc;
        *(uint *)(plVar44 + 9) = uVar39 + local_b8;
        *(uint *)((long)plVar44 + 0x4c) = uVar40 + local_bc;
        *(uint *)(plVar44 + 10) = uVar41 + local_b8;
        *(uint *)(plVar44 + 0xc) = local_d0;
        *plVar44 = 0;
        plVar44[1] = 0;
        *(uint *)((long)plVar44 + 0x54) = uVar42 + local_bc;
        *(float *)(plVar44 + 0xb) = (float)(int)uVar43;
        *(float *)((long)plVar44 + 0x5c) = (float)(int)uVar8;
        *(int *)((long)plVar44 + 100) = (int)pppplVar18;
        plVar44[2] = (long)plVar45;
        *plVar33 = (long)plVar44;
        if (**(long **)(lVar46 + 0x1c0) != 0) {
          *(long *)(lVar46 + 0x1c0) = **(long **)(lVar46 + 0x1c0);
          plVar44 = (long *)*plVar33;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  (*(long **)(lVar46 + 0x1c8),plVar44);
        *(long *)(lVar46 + 0x1d0) = *(long *)(lVar46 + 0x1d0) + 1;
        bVar28 = *pbVar47;
      }
      in_x6 = (long ***)0x1c8dcfd6bc;
      in_x5 = 0x1c312a14b0;
      in_x7 = (long ***)0x1276e1b0c7;
      pppplVar24 = (long ****)0xbca254bae;
      if (1 < (byte)(bVar28 - 0xb)) break;
      uVar11 = (ulong)*(int *)(pbVar47 + 1);
      uVar49 = uVar49 + 1;
    } while ((long)uVar49 < (long)uVar11);
  }
  lVar10 = *(long *)(lVar48 + 0x160);
  ppppppppplVar20 = (long *********)(long)*(int *)(lVar10 + 0x70);
  ppppbVar23 = (byte ****)(ulong)*(uint *)(lVar10 + 0x68);
  FUN_710323c1c0(lVar10,(ulong *)&DAT_7104546048,ppppppppplVar20,ppppbVar23,pppplVar24,in_x5,in_x6,
                 in_x7);
  lVar10 = *(long *)(lVar48 + 0x160);
  uVar15 = extraout_x1_01;
  while (uVar11 = FUN_710323cb80(lVar10,uVar15,ppppppppplVar20,ppppbVar23,pppplVar24,in_x5,in_x6,
                                 in_x7), lVar46 = DAT_710532f8b8, (uVar11 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar15 = extraout_x1_02;
  }
  lVar10 = *(long *)(lVar48 + 0x160);
  if (((DAT_710532f4d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_710532f4d8), iVar9 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar48 = *(long *)(lVar10 + 0x28);
  }
  else {
    lVar48 = *(long *)(lVar10 + 0x28);
  }
  if (lVar48 != 0) {
    lVar35 = lVar10 + 0x28;
    do {
      bVar7 = (*(ulong *)(lVar48 + 0x20) & 0xffffffffff) < 0x12c1dcf509;
      if (!bVar7) {
        lVar35 = lVar48;
      }
      lVar48 = *(long *)(lVar48 + (ulong)bVar7 * 8);
    } while (lVar48 != 0);
    if ((lVar35 != lVar10 + 0x28) && ((*(ulong *)(lVar35 + 0x20) & 0xfffffffffe) < 0x12c1dcf50a)) {
      ppppppppplVar20 = (long *********)(lVar35 + 0x28);
      goto LAB_71023eab10;
    }
  }
  ppppppppplVar20 = (long *********)&DAT_710532f4a4;
LAB_71023eab10:
  if ((*(int *)ppppppppplVar20 != 0xffffff) &&
     (iVar9 = FUN_710330a8f0(*(long **)(lVar46 + 8),(ulong *)&DAT_7104546048,(long ****)0x2,
                             ppppbVar23,pppplVar24,in_x5,in_x6,in_x7), iVar9 != 0)) {
    FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar9,ppppppppplVar20,ppppbVar23,
                   pppplVar24,in_x5,in_x6,in_x7);
  }
  lVar10 = DAT_710532f870;
  if ((*(byte *)(*(long *)(DAT_710532f870 + 8) + 0x10) >> 1 & 1) == 0) {
    plVar13 = (long *)(*(long *)(DAT_710532f870 + 8) + 8);
    *(undefined8 *)(*plVar13 + 0x70) = 1;
    FUN_7101845ea0(plVar13);
    *(undefined8 *)(*(long *)(*(long *)(lVar10 + 8) + 8) + 0x70) = 0;
  }
  if (*(int *)(param_2 + 0x5c) == -0x2e04f471) {
    iVar9 = strcmp((char *)(param_2 + 100),"MenuSequenceScene");
    bVar7 = iVar9 != 0;
  }
  else {
    bVar7 = true;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_71053144d8), iVar9 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053050f0 & 0x7f000000) != 0x7000000) && (!bVar7 && DAT_71053050f4 == '\0')) {
    FUN_710178c070(&DAT_71053050f0);
  }
  if (*(char *)(param_1 + 0xf0) == '\0') {
    return;
  }
  lVar46 = *(long *)(DAT_710532f7b8 + 8);
  lVar10 = *(long *)(lVar46 + 0xa8);
  if (*(char *)(lVar10 + 0x78) == '\0') {
    *(undefined4 *)(lVar10 + 0x68) = 0;
    lVar10 = *(long *)(lVar46 + 0xa8);
  }
  ppppppppplVar20 = (long *********)(long)*(int *)(lVar10 + 0x70);
  ppppbVar23 = (byte ****)(ulong)*(uint *)(lVar10 + 0x68);
  pppplVar24 = (long ****)0x0;
  FUN_710323beb0(lVar10,(ulong *)&DAT_7104545d80,(long)ppppppppplVar20,(ulong)ppppbVar23,
                 (long ****)0x0,in_x5,in_x6,in_x7);
  FUN_71032e3a80(*(long *)(DAT_710532f7b8 + 8),extraout_x1_03,ppppppppplVar20,ppppbVar23,pppplVar24,
                 in_x5,in_x6,in_x7);
  return;
}

