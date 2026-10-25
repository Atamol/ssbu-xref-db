// addr:      7101839390
// offset:    0x1839390
// name:      FUN_7101839390
// mangled:   
// signature: undefined __cdecl FUN_7101839390(long param_1, byte param_2)


/* WARNING: Removing unreachable block (ram,0x007101839ec8) */
/* WARNING: Removing unreachable block (ram,0x007101839e00) */
/* WARNING: Removing unreachable block (ram,0x007101839e64) */
/* WARNING: Removing unreachable block (ram,0x007101839f28) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101839390(long param_1,byte param_2)

{
  long ****pppplVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long **********__dest;
  long ****pppplVar14;
  long **********pppppppppplVar15;
  long **********pppppppppplVar16;
  long ***ppplVar17;
  void *__dest_00;
  ulong uVar18;
  int *piVar19;
  long ****pppplVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar27;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined **ppuVar28;
  long *********ppppppppplVar29;
  byte ****ppppbVar30;
  long ****pppplVar31;
  undefined8 uVar32;
  undefined8 in_x7;
  char *pcVar33;
  long lVar34;
  long *plVar35;
  long ********pppppppplVar36;
  ulong uVar37;
  ulong uVar38;
  long *plVar39;
  long *plVar40;
  undefined4 uVar41;
  byte *pbVar42;
  long *plVar43;
  long *plVar44;
  int iVar45;
  long lVar46;
  uint *puVar47;
  void *pvVar48;
  long **********pppppppppplVar49;
  size_t sVar50;
  int local_118;
  undefined4 local_114;
  undefined1 local_110;
  long ****local_108;
  long ****local_100;
  long ****local_f8;
  long **********local_f0;
  long **********local_e8;
  long **********local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  long **********local_c0;
  long **********local_b8;
  long **********local_b0;
  long **********local_a0;
  long **********local_90;
  long **********local_88;
  undefined4 local_74;
  long ********local_70 [2];
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar10 = FUN_7101a0ffd0();
  *(uint *)(param_1 + 0xd8) = uVar10;
  if (DAT_71053050f4 == '\0') {
    if ((DAT_71053050f0 & 0x7f000000) == 0x7000000) {
      if ((int)DAT_71053050f0 < 0x7070200) {
        if (DAT_71053050f0 == 0x7010600) {
          iVar12 = 3;
          goto LAB_7101839450;
        }
        if (DAT_71053050f0 == 0x7020000) goto LAB_710183944c;
      }
      else if ((DAT_71053050f0 == 0x7070200) || (DAT_71053050f0 == 0x7070400)) goto LAB_710183944c;
      iVar12 = 2;
    }
    else {
LAB_710183944c:
      iVar12 = 0;
    }
  }
  else {
    iVar12 = 1;
  }
LAB_7101839450:
  uVar11 = uVar10 - 1;
  *(bool *)(param_1 + 0x128) = uVar11 == 0;
  *(int *)(param_1 + 0xdc) = iVar12;
  *(byte *)(param_1 + 300) = param_2 & 1;
  *(bool *)(param_1 + 0x129) = uVar10 == 2;
  if (uVar11 < 0x1a) {
    if ((0x32a0151U >> (ulong)(uVar11 & 0x1f) & 1) == 0) {
LAB_71018394c8:
      *(bool *)(param_1 + 0x12a) =
           *(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x78) + 1) != '\0';
    }
    else {
      *(undefined1 *)(param_1 + 0x12a) = 1;
    }
  }
  else {
    if (uVar10 != 0x1c) goto LAB_71018394c8;
    if (((DAT_71053144d8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    *(bool *)(param_1 + 0x12a) = (char)DAT_71053082c4 == '\x01';
    uVar10 = *(uint *)(param_1 + 0xd8);
    iVar12 = *(int *)(param_1 + 0xdc);
  }
  if (((iVar12 == 0) && (uVar10 < 0x1d)) && ((0x1000083fU >> (ulong)(uVar10 & 0x1f) & 1) != 0)) {
    if (uVar10 == 0x1c) {
      pcVar33 = &DAT_7105308134;
    }
    else {
      pcVar33 = (char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x78) + 3);
    }
    *(bool *)(param_1 + 299) = *pcVar33 != '\0';
  }
  FUN_710326f6a0(&local_c0,0,(long ****)0x1,(byte ****)0x0,(long ****)0x0,(byte ****)0x1,0,in_x7);
  uVar13 = *(ulong *)(param_1 + 0x108);
  plVar43 = (long *)(param_1 + 0x108);
  if (uVar13 != 0) {
    *(ulong *)(param_1 + 0x110) = uVar13;
    FUN_710392eb40(uVar13);
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *plVar43 = 0;
  }
  *(long ***********)(param_1 + 0x108) = local_c0;
  *(long ***********)(param_1 + 0x110) = local_b8;
  *(long ***********)(param_1 + 0x118) = local_b0;
  uVar13 = (ulong)(*(int *)(param_1 + 0xd8) == 5);
  ppuVar28 = (undefined **)0x1;
  uVar32 = 1;
  ppppbVar30 = (byte ****)0x0;
  pppplVar31 = (long ****)0x0;
  FUN_710326f6a0(&local_d8,1,(long ****)0x1,(byte ****)0x0,(long ****)0x0,(byte ****)0x1,uVar13,
                 in_x7);
  uVar41 = 2;
  switch(*(undefined4 *)(param_1 + 0xd8)) {
  case 7:
    break;
  default:
    uVar41 = 0;
    break;
  case 0x16:
    uVar41 = 7;
    break;
  case 0x18:
    uVar41 = 8;
    break;
  case 0x19:
  case 0x1a:
    uVar41 = 5;
    break;
  case 0x1b:
    uVar41 = 4;
  }
  lVar46 = *(long *)(DAT_710532f730 + 8);
  if (((DAT_71053144d8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
    FUN_7101764000();
    ppuVar28 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar34 = (long)DAT_7105308760._4_4_;
  if (0 < DAT_7105308760._4_4_) {
    uVar37 = 0;
    pbVar42 = &DAT_71053087b8;
    do {
      if (7 < uVar37) goto LAB_710183a2d4;
      if (7 < *pbVar42) {
        *pbVar42 = 0;
      }
      uVar37 = uVar37 + 1;
      pbVar42 = pbVar42 + 0x1c8;
    } while ((long)uVar37 < lVar34);
  }
  plVar44 = (long *)(param_1 + 0xd0);
  if (*(char *)(*plVar44 + 0x78) == '\0') {
    *(undefined4 *)(*plVar44 + 0x68) = 1;
  }
  lVar34 = DAT_7105329060;
  if (*(char *)(param_1 + 0x128) == '\0') {
    if (*(char *)(param_1 + 0x129) == '\0') {
      if (0 < DAT_7105308760._4_4_) {
        uVar37 = 0;
        pbVar42 = &DAT_71053087b8;
        do {
          if (7 < uVar37) goto LAB_710183a2d4;
          ppuVar28 = (undefined **)(ulong)*pbVar42;
          FUN_710183b6c0(param_1,*(undefined1 **)(pbVar42 + -0x10),(uint)*pbVar42,ppppbVar30,
                         pppplVar31,uVar32,uVar13,in_x7);
          uVar37 = uVar37 + 1;
          pbVar42 = pbVar42 + 0x1c8;
        } while ((long)uVar37 < (long)DAT_7105308760._4_4_);
      }
      if (((*(char *)(param_1 + 300) != '\0') && (*(int *)(param_1 + 0xdc) == 0)) &&
         (DAT_710532f7b0 != 0)) {
        lVar34 = *(long *)(DAT_710532f7b0 + 8);
        uVar10 = FUN_71032de0f0(lVar34);
        if ((uVar10 == 1) && (*(int *)(lVar34 + 0xa30) != -1)) {
          piVar19 = FUN_71032df050(lVar34,*(int *)(lVar34 + 0xa30));
          puVar22 = *(undefined1 **)(piVar19 + 2);
          lVar34 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
          uVar10 = FUN_71032632a0(lVar34,(ulong)puVar22);
          puVar21 = puVar22;
          if ((uVar10 & 1) != 0) {
            puVar21 = FUN_71032631a0(lVar34,0x11b1ccb807);
          }
          uVar11 = FUN_71032633f0(lVar34,(ulong)puVar22);
          uVar10 = (uint)*(byte *)((long)piVar19 + 0x12);
          if (uVar11 <= *(byte *)((long)piVar19 + 0x12)) {
            uVar10 = 0;
          }
          ppuVar28 = (undefined **)(ulong)uVar10;
          FUN_710183b6c0(param_1,puVar21,uVar10,ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
        }
      }
      if (((*(int *)(param_1 + 0xd8) == 5) && (DAT_710530e1e8 != 0 || DAT_710530e1ec != '\0')) &&
         (0 < DAT_7105308760._4_4_)) {
        uVar37 = 0;
        puVar47 = &DAT_710530e228;
        do {
          if (7 < uVar37) goto LAB_710183a2d4;
          puVar21 = *(undefined1 **)(puVar47 + -2);
          uVar10 = *puVar47;
          ppuVar28 = (undefined **)(ulong)uVar10;
          FUN_710183b6c0(param_1,puVar21,uVar10,ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
          lVar34 = *(long *)(lVar46 + 0x168);
          uVar11 = FUN_71032632a0(lVar34,(ulong)puVar21);
          if ((uVar11 & 1) != 0) {
            puVar21 = FUN_71032631a0(lVar34,0x11b1ccb807);
            ppuVar28 = (undefined **)(ulong)uVar10;
            FUN_710183b6c0(param_1,puVar21,uVar10,ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
          }
          uVar37 = uVar37 + 1;
          puVar47 = puVar47 + 4;
        } while ((long)uVar37 < (long)DAT_7105308760._4_4_);
      }
    }
    else {
      lVar25 = *(long *)(DAT_7105329060 + 8);
      iVar12 = *(int *)(lVar25 + 0x198);
      if (0 < iVar12) {
        iVar45 = 0;
        while( true ) {
          plVar39 = *(long **)(lVar25 + 200);
          plVar35 = *(long **)(lVar25 + 0xd0);
          plVar40 = plVar39;
          if (plVar39 != plVar35) {
            iVar4 = *(int *)(*plVar39 + 0x83c);
            while ((plVar40 = plVar39, iVar4 != iVar45 &&
                   (plVar39 = plVar39 + 1, plVar40 = plVar35, plVar35 != plVar39))) {
              iVar4 = *(int *)(*plVar39 + 0x83c);
            }
          }
          bVar5 = *(byte *)(*plVar40 + 0x48);
          ppuVar28 = (undefined **)(ulong)bVar5;
          FUN_710183b6c0(param_1,*(undefined1 **)(*plVar40 + 0x38),(uint)bVar5,ppppbVar30,pppplVar31
                         ,uVar32,uVar13,in_x7);
          iVar45 = iVar45 + 1;
          if (iVar45 == iVar12) break;
          lVar25 = *(long *)(lVar34 + 8);
        }
      }
    }
  }
  else {
    pbVar42 = &DAT_710530aa10;
    uVar38 = 3;
    uVar37 = 0;
    if (DAT_710530d560 != 0) {
      uVar38 = 5;
    }
    do {
      if (4 < uVar37) goto LAB_710183a2d4;
      FUN_710183b6c0(param_1,*(undefined1 **)(pbVar42 + -0x10),(uint)*pbVar42,ppppbVar30,pppplVar31,
                     uVar32,uVar13,in_x7);
      uVar37 = uVar37 + 1;
      pbVar42 = pbVar42 + 0x1c8;
    } while (uVar37 < uVar38);
    uVar37 = 0;
    pbVar42 = &DAT_710530be38;
    do {
      if (4 < uVar37) goto LAB_710183a2d4;
      ppuVar28 = (undefined **)(ulong)*pbVar42;
      FUN_710183b6c0(param_1,*(undefined1 **)(pbVar42 + -0x10),(uint)*pbVar42,ppppbVar30,pppplVar31,
                     uVar32,uVar13,in_x7);
      uVar37 = uVar37 + 1;
      pbVar42 = pbVar42 + 0x1c8;
    } while (uVar37 < uVar38);
  }
  pvVar48 = DAT_710530e308;
  local_f0 = (long **********)0x0;
  pppppppppplVar16 = (long **********)(DAT_710530e310 - (long)DAT_710530e308);
  local_e8 = (long **********)0x0;
  local_e0 = (long **********)0x0;
  if (pppppppppplVar16 == (long **********)0x0) {
    pppppppppplVar15 = (long **********)0x0;
    __dest = (long **********)0x0;
LAB_71018398a4:
    if (*(int *)(param_1 + 0xd8) != 5) {
      FUN_71017aacc0(&DAT_710530e308);
      pvVar48 = DAT_710530e308;
      local_c0 = (long **********)0x0;
      local_b8 = (long **********)0x0;
      local_b0 = (long **********)0x0;
      pppppppppplVar16 = (long **********)(DAT_710530e310 - (long)DAT_710530e308);
      if (pppppppppplVar16 == (long **********)0x0) {
        pppppppppplVar15 = (long **********)0x0;
        __dest = (long **********)0x0;
      }
      else {
        if ((ulong)((long)pppppppppplVar16 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        __dest = (long **********)
                 FUN_710392e290(0x10,pppppppppplVar16,(long ****)ppuVar28,ppppbVar30,pppplVar31,
                                uVar32,uVar13,in_x7);
        if (__dest == (long **********)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_108 = (long ****)((ulong)local_108 & 0xffffffff00000000);
            ppuVar28 = (undefined **)&local_90;
            local_90 = pppppppppplVar16;
            uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
            if (((uVar37 & 1) != 0) &&
               (__dest = (long **********)
                         FUN_710392e290(0x10,pppppppppplVar16,(long ****)ppuVar28,ppppbVar30,
                                        pppplVar31,uVar32,uVar13,in_x7),
               __dest != (long **********)0x0)) goto LAB_7101839934;
          }
          __dest = (long **********)0x0;
        }
LAB_7101839934:
        pppppppppplVar15 = __dest + ((long)pppppppppplVar16 >> 3);
        local_c0 = __dest;
        local_b8 = __dest;
        local_b0 = pppppppppplVar15;
        if (0 < (long)pppppppppplVar16) {
          ppuVar28 = (undefined **)pppppppppplVar16;
          memcpy(__dest,pvVar48,(size_t)pppppppppplVar16);
          local_b8 = (long **********)((long)__dest + (long)pppppppppplVar16);
        }
      }
      if (local_f0 != (long **********)0x0) {
        local_e8 = local_f0;
        FUN_710392eb40((ulong)local_f0);
        __dest = local_c0;
        pppppppppplVar15 = local_b0;
      }
      local_e8 = local_b8;
      local_f0 = __dest;
      local_e0 = pppppppppplVar15;
    }
  }
  else {
    if ((ulong)((long)pppppppppplVar16 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    __dest = (long **********)
             FUN_710392e290(0x10,pppppppppplVar16,(long ****)ppuVar28,ppppbVar30,pppplVar31,uVar32,
                            uVar13,in_x7);
    if (__dest == (long **********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_90 = (long **********)((ulong)local_90 & 0xffffffff00000000);
        ppuVar28 = (undefined **)&local_c0;
        local_c0 = pppppppppplVar16;
        uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
        if (((uVar37 & 1) != 0) &&
           (__dest = (long **********)
                     FUN_710392e290(0x10,pppppppppplVar16,(long ****)ppuVar28,ppppbVar30,pppplVar31,
                                    uVar32,uVar13,in_x7), __dest != (long **********)0x0))
        goto LAB_71018397a8;
      }
      __dest = (long **********)0x0;
    }
LAB_71018397a8:
    pppppppppplVar15 = __dest + ((long)pppppppppplVar16 >> 3);
    local_f0 = __dest;
    local_e8 = __dest;
    local_e0 = pppppppppplVar15;
    if ((long)pppppppppplVar16 < 1) goto LAB_71018398a4;
    ppuVar28 = (undefined **)pppppppppplVar16;
    memcpy(__dest,pvVar48,(size_t)pppppppppplVar16);
    local_e8 = (long **********)((long)__dest + (long)pppppppppplVar16);
    if (pppppppppplVar16 == (long **********)0x0) goto LAB_71018398a4;
  }
  puVar24 = local_d8;
  pppppppppplVar49 = local_e8;
  local_108 = (long ****)0x0;
  local_100 = (long ****)0x0;
  local_f8 = (long ****)0x0;
  pppppppppplVar16 = (long **********)((long)local_d0 - (long)local_d8);
  uVar37 = (long)pppppppppplVar16 >> 3;
  if (pppppppppplVar16 != (long **********)0x0) {
    if (uVar37 >> 0x3d != 0) {
LAB_710183a2d4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pppplVar14 = (long ****)
                 FUN_710392e290(0x10,pppppppppplVar16,(long ****)ppuVar28,ppppbVar30,pppplVar31,
                                uVar32,uVar13,in_x7);
    if (pppplVar14 == (long ****)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_90 = (long **********)((ulong)local_90 & 0xffffffff00000000);
        ppuVar28 = (undefined **)&local_c0;
        local_c0 = pppppppppplVar16;
        uVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
        if (((uVar38 & 1) != 0) &&
           (pppplVar14 = (long ****)
                         FUN_710392e290(0x10,pppppppppplVar16,(long ****)ppuVar28,ppppbVar30,
                                        pppplVar31,uVar32,uVar13,in_x7),
           pppplVar14 != (long ****)0x0)) goto LAB_7101839a18;
      }
      pppplVar14 = (long ****)0x0;
    }
LAB_7101839a18:
    local_f8 = pppplVar14 + uVar37;
    pppppppppplVar15 = local_e0;
    local_100 = pppplVar14;
  }
  local_108 = local_100;
  if (uVar37 <= (ulong)((long)pppppppppplVar15 - (long)__dest >> 3)) goto joined_r0x007101839af0;
  if (pppppppppplVar16 == (long **********)0x0) {
    pppppppppplVar16 = (long **********)0x1;
  }
  pppppppppplVar49 = (long **********)((long)pppppppppplVar49 - (long)__dest);
  lVar34 = (long)pppppppppplVar49 >> 3;
  pppppppppplVar15 =
       (long **********)
       FUN_710392e290(0x10,pppppppppplVar16,(long ****)ppuVar28,ppppbVar30,pppplVar31,uVar32,uVar13,
                      in_x7);
  if (pppppppppplVar15 == (long **********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long **********)((ulong)local_90 & 0xffffffff00000000);
      ppuVar28 = (undefined **)&local_c0;
      local_c0 = pppppppppplVar16;
      uVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar38 & 1) != 0) &&
         (pppppppppplVar15 =
               (long **********)
               FUN_710392e290(0x10,pppppppppplVar16,(long ****)ppuVar28,ppppbVar30,pppplVar31,uVar32
                              ,uVar13,in_x7), pppppppppplVar15 != (long **********)0x0))
      goto LAB_7101839aa8;
    }
    pppppppppplVar15 = (long **********)0x0;
  }
LAB_7101839aa8:
  if (0 < (long)pppppppppplVar49) {
    memcpy(pppppppppplVar15,__dest,(size_t)pppppppppplVar49);
    ppuVar28 = (undefined **)pppppppppplVar49;
  }
  local_f0 = pppppppppplVar15;
  local_e8 = pppppppppplVar15 + lVar34;
  local_e0 = pppppppppplVar15 + uVar37;
  if (__dest != (long **********)0x0) {
    FUN_710392eb40((ulong)__dest);
  }
joined_r0x007101839af0:
  if (puVar24 != local_d0) {
    do {
      ppplVar17 = (long ***)*puVar24;
      ppuVar28 = (undefined **)0x0;
      uVar37 = FUN_7101797560((undefined1 *)ppplVar17,uVar41,0);
      pppplVar14 = local_108;
      if ((uVar37 & 1) != 0) {
        if (*(int *)(param_1 + 0xd8) == 5) {
          pppppppppplVar16 = local_f0;
          if (local_f0 != local_e8) {
            bVar6 = ((ulong)ppplVar17 & 0xffffffffff) != 0;
            bVar7 = ((ulong)ppplVar17 & 0xff00000000000000) == 0xc100000000000000;
            if ((bVar7) && (((ulong)ppplVar17 & 0xffffffffff) != 0)) {
              pppppppppplVar15 = local_f0;
              pppppppppplVar16 = local_e8;
              if (bVar6) {
                do {
                  ppppppppplVar29 = *pppppppppplVar15;
                  pppppppppplVar16 = pppppppppplVar15;
                  if ((((ulong)ppppppppplVar29 & 0xff00000000000000) == 0xc100000000000000 &&
                      ((ulong)ppppppppplVar29 & 0xffffffffff) != 0) &&
                      (((ulong)ppplVar17 ^ (ulong)ppppppppplVar29) & 0xffffffffff) == 0)
                  goto joined_r0x007101839c1c;
                  pppppppppplVar15 = pppppppppplVar15 + 1;
                } while (local_e8 != pppppppppplVar15);
                goto LAB_7101839d6c;
              }
            }
            else {
              ppppppppplVar29 = *local_f0;
              bVar8 = ((ulong)ppppppppplVar29 & 0xffffffffff) != 0;
              bVar9 = ((ulong)ppppppppplVar29 & 0xff00000000000000) == 0xc100000000000000;
              if (bVar7 && bVar6) {
                if (bVar9 && bVar8) {
                  while (pppppppppplVar15 = pppppppppplVar16 + 1,
                        (((ulong)ppplVar17 ^ (ulong)ppppppppplVar29) & 0xffffffffff) != 0) {
                    if (local_e8 == pppppppppplVar15) goto LAB_7101839d6c;
                    ppppppppplVar29 = *pppppppppplVar15;
                    pppppppppplVar16 = pppppppppplVar15;
                    if ((((ulong)ppppppppplVar29 & 0xff00000000000000) != 0xc100000000000000) ||
                       (((ulong)ppppppppplVar29 & 0xffffffffff) == 0)) break;
                  }
                }
              }
              else if (bVar9 && bVar8) {
                do {
                  pppppppppplVar16 = pppppppppplVar16 + 1;
                  if (local_e8 == pppppppppplVar16) goto LAB_7101839d6c;
                } while ((((ulong)*pppppppppplVar16 & 0xff00000000000000) == 0xc100000000000000) &&
                        (((ulong)*pppppppppplVar16 & 0xffffffffff) != 0));
              }
            }
          }
joined_r0x007101839c1c:
          if (local_e8 == pppppppppplVar16) goto LAB_7101839d6c;
        }
        if (local_100 != local_f8) goto code_r0x007101839c4c;
        pppppppppplVar16 = (long **********)((long)local_100 - (long)local_108);
        uVar37 = ((long)pppppppppplVar16 >> 3) + 1;
        if (uVar37 >> 0x3d != 0) goto LAB_710183b6a8;
        if ((ulong)((long)local_f8 - (long)local_108 >> 3) < 0xfffffffffffffff) {
          uVar38 = (long)local_f8 - (long)local_108 >> 2;
          if (uVar37 <= uVar38) {
            uVar37 = uVar38;
          }
          if (uVar37 != 0) {
            if (uVar37 >> 0x3d == 0) goto LAB_7101839cbc;
            goto LAB_710183a2d4;
          }
          pppplVar20 = (long ****)0x0;
        }
        else {
          uVar37 = 0x1fffffffffffffff;
LAB_7101839cbc:
          pppppppppplVar15 = (long **********)(uVar37 * 8);
          if (pppppppppplVar15 == (long **********)0x0) {
            pppppppppplVar15 = (long **********)0x1;
          }
          pppplVar20 = (long ****)
                       FUN_710392e290(0x10,pppppppppplVar15,(long ****)ppuVar28,ppppbVar30,
                                      pppplVar31,uVar32,uVar13,in_x7);
          if (pppplVar20 == (long ****)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_90 = (long **********)((ulong)local_90 & 0xffffffff00000000);
              ppuVar28 = (undefined **)&local_c0;
              local_c0 = pppppppppplVar15;
              uVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
              if (((uVar38 & 1) != 0) &&
                 (pppplVar20 = (long ****)
                               FUN_710392e290(0x10,pppppppppplVar15,(long ****)ppuVar28,ppppbVar30,
                                              pppplVar31,uVar32,uVar13,in_x7),
                 pppplVar20 != (long ****)0x0)) goto LAB_7101839d24;
            }
            pppplVar20 = (long ****)0x0;
          }
        }
LAB_7101839d24:
        pppplVar1 = pppplVar20 + ((long)pppppppppplVar16 >> 3);
        *pppplVar1 = ppplVar17;
        if (0 < (long)pppppppppplVar16) {
          memcpy(pppplVar20,pppplVar14,(size_t)pppppppppplVar16);
          ppuVar28 = (undefined **)pppppppppplVar16;
        }
        local_108 = pppplVar20;
        local_100 = pppplVar1 + 1;
        local_f8 = pppplVar20 + uVar37;
        if (pppplVar14 != (long ****)0x0) {
          FUN_710392eb40((ulong)pppplVar14);
        }
      }
LAB_7101839d6c:
      puVar24 = puVar24 + 1;
      if (puVar24 == local_d0) break;
    } while( true );
  }
  if (*(int *)(param_1 + 0xd8) == 7) {
    FUN_7101684280(&local_f0,local_108,local_100,ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
LAB_7101839db0:
    local_c0 = (long **********)FUN_71032631a0(*(long *)(lVar46 + 0x168),0xfd03198f0);
    pppppppppplVar15 =
         (long **********)FUN_710172acb0((ulong *)local_f0,(ulong *)local_e8,(ulong *)&local_c0);
    pppppppppplVar16 = local_f0;
    if (pppppppppplVar15 != local_e8) {
      local_e8 = pppppppppplVar15;
    }
    pppppppppplVar15 = local_e8;
    local_c0 = (long **********)FUN_71032631a0(*(long *)(lVar46 + 0x168),0x13fdfdfb2b);
    pppppppppplVar15 =
         (long **********)
         FUN_710172acb0((ulong *)pppppppppplVar16,(ulong *)pppppppppplVar15,(ulong *)&local_c0);
    pppppppppplVar16 = local_f0;
    if (pppppppppplVar15 != local_e8) {
      local_e8 = pppppppppplVar15;
    }
    pppppppppplVar15 = local_e8;
    local_c0 = (long **********)FUN_71032631a0(*(long *)(lVar46 + 0x168),0x15d7061f77);
    pppppppppplVar15 =
         (long **********)
         FUN_710172acb0((ulong *)pppppppppplVar16,(ulong *)pppppppppplVar15,(ulong *)&local_c0);
    pppppppppplVar16 = local_f0;
    if (pppppppppplVar15 != local_e8) {
      local_e8 = pppppppppplVar15;
    }
    pppppppppplVar15 = local_e8;
    local_c0 = (long **********)FUN_71032631a0(*(long *)(lVar46 + 0x168),0x1257ab1d87);
    ppuVar28 = (undefined **)&local_c0;
    pppppppppplVar16 =
         (long **********)
         FUN_710172acb0((ulong *)pppppppppplVar16,(ulong *)pppppppppplVar15,(ulong *)ppuVar28);
    if (pppppppppplVar16 != local_e8) {
      ppuVar28 = (undefined **)0x0;
      local_e8 = pppppppppplVar16;
    }
    FUN_710183b900((ulong *)&DAT_710530e308,(long *)&local_f0,(long ****)ppuVar28,ppppbVar30,
                   pppplVar31,uVar32,uVar13,in_x7);
  }
  else if (*(int *)(param_1 + 0xd8) == 0x16) {
    FUN_7101684280(&local_f0,local_108,local_100,ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
    goto LAB_7101839db0;
  }
  uVar10 = *(int *)(param_1 + 0xd8) - 9;
  if ((uVar10 < 0x14) && ((0x67feU >> (ulong)(uVar10 & 0x1f) & 1) == 0)) {
    if (*(int *)(param_1 + 0xd8) - 0x19U < 3) {
      ppplVar17 = (long ***)FUN_71032631a0(*(long *)(lVar46 + 0x168),0x14ca4126b0);
      pppplVar14 = local_108;
      *(long ****)(param_1 + 0x120) = ppplVar17;
      if (local_100 == local_f8) {
        sVar50 = (long)local_100 - (long)local_108;
        uVar37 = ((long)sVar50 >> 3) + 1;
        if (uVar37 >> 0x3d != 0) goto LAB_710183b6a8;
        if ((ulong)((long)local_f8 - (long)local_108 >> 3) < 0xfffffffffffffff) {
          uVar38 = (long)local_f8 - (long)local_108 >> 2;
          if (uVar37 <= uVar38) {
            uVar37 = uVar38;
          }
          if (uVar37 != 0) {
            if (uVar37 >> 0x3d != 0) goto LAB_710183a2d4;
            goto LAB_710183a434;
          }
          pppplVar20 = (long ****)0x0;
        }
        else {
          uVar37 = 0x1fffffffffffffff;
LAB_710183a434:
          pppppppppplVar16 = (long **********)(uVar37 * 8);
          if (pppppppppplVar16 == (long **********)0x0) {
            pppppppppplVar16 = (long **********)0x1;
          }
          pppplVar20 = (long ****)
                       FUN_710392e290(0x10,pppppppppplVar16,(long ****)ppuVar28,ppppbVar30,
                                      pppplVar31,uVar32,uVar13,in_x7);
          if (pppplVar20 == (long ****)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_90 = (long **********)((ulong)local_90 & 0xffffffff00000000);
              pppppppppplVar15 = (long **********)&local_c0;
              local_c0 = pppppppppplVar16;
              uVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
              if (((uVar38 & 1) != 0) &&
                 (pppplVar20 = (long ****)
                               FUN_710392e290(0x10,pppppppppplVar16,(long ****)pppppppppplVar15,
                                              ppppbVar30,pppplVar31,uVar32,uVar13,in_x7),
                 pppplVar20 != (long ****)0x0)) goto LAB_710183a49c;
            }
            pppplVar20 = (long ****)0x0;
          }
        }
LAB_710183a49c:
        pppplVar1 = pppplVar20 + ((long)sVar50 >> 3);
        *pppplVar1 = ppplVar17;
        if (0 < (long)sVar50) {
          memcpy(pppplVar20,pppplVar14,sVar50);
        }
        local_108 = pppplVar20;
        local_100 = pppplVar1 + 1;
        local_f8 = pppplVar20 + uVar37;
        if (pppplVar14 == (long ****)0x0) goto LAB_710183a4d8;
        goto LAB_710183a4d4;
      }
      *local_100 = ppplVar17;
LAB_710183a130:
      local_100 = local_100 + 1;
    }
  }
  else {
    puVar21 = FUN_71032631a0(*(long *)(lVar46 + 0x168),0xfd5f7fa78);
    puVar24 = *(undefined8 **)(param_1 + 0x110);
    if (puVar24 < *(undefined8 **)(param_1 + 0x118)) {
      *puVar24 = puVar21;
      *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + 8;
    }
    else {
      pvVar48 = (void *)*plVar43;
      pppppppppplVar16 = (long **********)((long)puVar24 - (long)pvVar48);
      uVar37 = ((long)pppppppppplVar16 >> 3) + 1;
      if (uVar37 >> 0x3d != 0) goto LAB_710183b6a8;
      lVar34 = (long)*(undefined8 **)(param_1 + 0x118) - (long)pvVar48;
      if ((ulong)(lVar34 >> 3) < 0xfffffffffffffff) {
        uVar38 = lVar34 >> 2;
        if (uVar37 <= uVar38) {
          uVar37 = uVar38;
        }
        if (uVar37 != 0) {
          if (uVar37 >> 0x3d != 0) goto LAB_710183a2d4;
          goto LAB_710183a030;
        }
        __dest_00 = (void *)0x0;
      }
      else {
        uVar37 = 0x1fffffffffffffff;
LAB_710183a030:
        pppppppppplVar15 = (long **********)(uVar37 * 8);
        if (pppppppppplVar15 == (long **********)0x0) {
          pppppppppplVar15 = (long **********)0x1;
        }
        __dest_00 = (void *)FUN_710392e290(0x10,pppppppppplVar15,(long ****)ppuVar28,ppppbVar30,
                                           pppplVar31,uVar32,uVar13,in_x7);
        if (__dest_00 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_90 = (long **********)((ulong)local_90 & 0xffffffff00000000);
            ppuVar28 = (undefined **)&local_c0;
            local_c0 = pppppppppplVar15;
            uVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
            if (((uVar38 & 1) != 0) &&
               (__dest_00 = (void *)FUN_710392e290(0x10,pppppppppplVar15,(long ****)ppuVar28,
                                                   ppppbVar30,pppplVar31,uVar32,uVar13,in_x7),
               __dest_00 != (void *)0x0)) goto LAB_710183a098;
          }
          __dest_00 = (void *)0x0;
        }
      }
LAB_710183a098:
      puVar24 = (undefined8 *)((long)__dest_00 + ((long)pppppppppplVar16 >> 3) * 8);
      *puVar24 = puVar21;
      if (0 < (long)pppppppppplVar16) {
        memcpy(__dest_00,pvVar48,(size_t)pppppppppplVar16);
        ppuVar28 = (undefined **)pppppppppplVar16;
      }
      *(void **)(param_1 + 0x108) = __dest_00;
      *(undefined8 **)(param_1 + 0x110) = puVar24 + 1;
      *(void **)(param_1 + 0x118) = (void *)((long)__dest_00 + uVar37 * 8);
      if (pvVar48 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar48);
      }
    }
    pppplVar20 = local_100;
    pppplVar14 = local_108;
    if (((ulong)((long)local_100 - (long)local_108 >> 3) < 2) || (*(int *)(param_1 + 0xdc) == 3))
    goto LAB_710183a4d8;
    ppplVar17 = (long ***)FUN_71032631a0(*(long *)(lVar46 + 0x168),0xfd5f7fa78);
    *(long ****)(param_1 + 0x120) = ppplVar17;
    if (local_f8 != pppplVar20) {
      *pppplVar20 = ppplVar17;
      goto LAB_710183a130;
    }
    sVar50 = (long)local_f8 - (long)pppplVar14;
    uVar38 = (long)sVar50 >> 3;
    uVar37 = uVar38 + 1;
    if (uVar37 >> 0x3d != 0) {
LAB_710183b6a8:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar38 < 0xfffffffffffffff) {
      if (uVar37 <= (ulong)((long)sVar50 >> 2)) {
        uVar37 = (long)sVar50 >> 2;
      }
      if (uVar37 != 0) {
        if (uVar37 >> 0x3d != 0) goto LAB_710183a2d4;
        goto LAB_710183a2f0;
      }
      pppplVar20 = (long ****)0x0;
    }
    else {
      uVar37 = 0x1fffffffffffffff;
LAB_710183a2f0:
      pppppppppplVar16 = (long **********)(uVar37 * 8);
      if (pppppppppplVar16 == (long **********)0x0) {
        pppppppppplVar16 = (long **********)0x1;
      }
      pppplVar20 = (long ****)
                   FUN_710392e290(0x10,pppppppppplVar16,(long ****)ppuVar28,ppppbVar30,pppplVar31,
                                  uVar32,uVar13,in_x7);
      if (pppplVar20 == (long ****)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_90 = (long **********)((ulong)local_90 & 0xffffffff00000000);
          pppppppppplVar15 = (long **********)&local_c0;
          local_c0 = pppppppppplVar16;
          uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
          if (((uVar18 & 1) != 0) &&
             (pppplVar20 = (long ****)
                           FUN_710392e290(0x10,pppppppppplVar16,(long ****)pppppppppplVar15,
                                          ppppbVar30,pppplVar31,uVar32,uVar13,in_x7),
             pppplVar20 != (long ****)0x0)) goto LAB_710183a358;
        }
        pppplVar20 = (long ****)0x0;
      }
    }
LAB_710183a358:
    pppplVar1 = pppplVar20 + uVar38;
    *pppplVar1 = ppplVar17;
    if (0 < (long)sVar50) {
      memcpy(pppplVar20,pppplVar14,sVar50);
    }
    local_108 = pppplVar20;
    local_100 = pppplVar1 + 1;
    local_f8 = pppplVar20 + uVar37;
    if (pppplVar14 != (long ****)0x0) {
LAB_710183a4d4:
      FUN_710392eb40((ulong)pppplVar14);
    }
  }
LAB_710183a4d8:
  if ((((*(ulong *)(param_1 + 0x120) & 0xff00000000000000) != 0xc100000000000000) ||
      ((*(ulong *)(param_1 + 0x120) & 0xffffffffff) == 0)) && (local_108 != local_100)) {
    *(long ****)(param_1 + 0x120) = *local_108;
  }
  local_118 = *(int *)(param_1 + 0xd8);
  local_114 = *(undefined4 *)(param_1 + 0xdc);
  local_110 = *(undefined1 *)(param_1 + 0x12a);
  FUN_7101a0a3e0(*(int **)(DAT_7105324ae8 + 8),&local_118,(long ****)&local_108,(byte ****)&local_f0
                 ,pppplVar31,uVar32,uVar13,in_x7);
  if (*(char *)(*(long *)(param_1 + 0xd0) + 0x78) == '\0') {
    *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x68) = 1;
  }
  lVar46 = *(long *)(param_1 + 0xd0);
  if (*(char *)(param_1 + 0x128) == '\0') {
    FUN_710323beb0(lVar46,(ulong *)&DAT_71045447d0,(long)*(int *)(lVar46 + 0x70),
                   (ulong)*(uint *)(lVar46 + 0x68),(long ****)0x0,uVar32,uVar13,in_x7);
    if (*(char *)(param_1 + 0x129) != '\0') {
      lVar46 = *plVar44;
      FUN_710323beb0(lVar46,(ulong *)&DAT_7104543b28,(long)*(int *)(lVar46 + 0x70),
                     (ulong)*(uint *)(lVar46 + 0x68),(long ****)0x1,uVar32,uVar13,in_x7);
      lVar46 = *plVar44;
      FUN_710323beb0(lVar46,(ulong *)&DAT_71045443e0,(long)*(int *)(lVar46 + 0x70),
                     (ulong)*(uint *)(lVar46 + 0x68),(long ****)0x0,uVar32,uVar13,in_x7);
      lVar46 = *plVar44;
      FUN_710323beb0(lVar46,(ulong *)&DAT_71045443d8,(long)*(int *)(lVar46 + 0x70),
                     (ulong)*(uint *)(lVar46 + 0x68),(long ****)0x0,uVar32,uVar13,in_x7);
      lVar46 = *plVar44;
      ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
      ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
      pppplVar31 = (long ****)0x0;
      FUN_710323beb0(lVar46,(ulong *)&DAT_71045443d0,(long)ppppppppplVar29,(ulong)ppppbVar30,
                     (long ****)0x0,uVar32,uVar13,in_x7);
      local_c0 = (long **********)FUN_710323af70(0x7104308504,0);
      uVar27 = extraout_x1_02;
      if (((ulong)local_c0 & 0xffffffffff) != 0) {
        lVar46 = *plVar44;
        ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
        ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
        FUN_710323c4e0(lVar46,(ulong *)&local_c0,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13
                       ,in_x7);
        uVar27 = extraout_x1_03;
      }
      FUN_71032d1fd0(plVar44,uVar27,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
      FUN_7101a11d30((long *)&local_c0,plVar43,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,
                     uVar32,uVar13,in_x7);
      pppppppppplVar15 = local_b8;
      for (pppppppppplVar16 = local_c0; pppppppppplVar16 != pppppppppplVar15;
          pppppppppplVar16 = pppppppppplVar16 + 1) {
        ppppppppplVar29 = (long *********)0x1;
        local_90 = (long **********)FUN_7103238a70((ulong)*pppppppppplVar16,0,1);
        if (((ulong)local_90 & 0xffffffffff) != 0) {
          lVar46 = *plVar44;
          ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
          ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
          FUN_710323c4e0(lVar46,(ulong *)&local_90,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                         uVar13,in_x7);
        }
      }
      puVar3 = *(ulong **)(param_1 + 0x110);
      for (puVar2 = *(ulong **)(param_1 + 0x108); puVar2 != puVar3; puVar2 = puVar2 + 1) {
        ppppppppplVar29 = (long *********)&DAT_00000007;
        local_90 = (long **********)FUN_7103238a70(*puVar2,0,7);
        if (((ulong)local_90 & 0xffffffffff) != 0) {
          lVar46 = *plVar44;
          ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
          ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
          FUN_710323c4e0(lVar46,(ulong *)&local_90,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                         uVar13,in_x7);
        }
      }
      lVar34 = *(long *)(DAT_710532f730 + 8);
      lVar46 = *(long *)(lVar34 + 0x168);
      puVar21 = FUN_71032631a0(lVar46,0x1280f1c82e);
      puVar22 = FUN_71032631a0(lVar46,0x14ef73f367);
      puVar23 = FUN_71032631a0(lVar46,0x12915a4ff6);
      puVar24 = (undefined8 *)
                FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                               uVar13,in_x7);
      if (puVar24 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_70[0] = (long ********)((ulong)local_70[0] & 0xffffffff00000000);
          local_90 = (long **********)&SUB_00000018;
          pppppppppplVar16 = (long **********)&local_90;
          uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
          if (((uVar37 & 1) != 0) &&
             (puVar24 = (undefined8 *)
                        FUN_710392e290(0x10,0x18,(long ****)pppppppppplVar16,ppppbVar30,pppplVar31,
                                       uVar32,uVar13,in_x7), puVar24 != (undefined8 *)0x0))
          goto LAB_710183ab68;
        }
        puVar24 = (undefined8 *)0x0;
      }
LAB_710183ab68:
      *puVar24 = puVar21;
      puVar24[1] = puVar22;
      puVar24[2] = puVar23;
      lVar46 = *(long *)(lVar34 + 0x168);
      puVar21 = FUN_71032631a0(lVar46,0x11b1ccb807);
      uVar10 = FUN_71032633f0(lVar46,(ulong)puVar21);
      if (0 < (int)uVar10) {
        uVar11 = 0;
        do {
          lVar46 = 0;
          do {
            local_90 = (long **********)
                       FUN_7103238a70(*(ulong *)((long)puVar24 + lVar46),(ulong)uVar11,1);
            if (((ulong)local_90 & 0xffffffffff) != 0) {
              lVar25 = *plVar44;
              ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar25 + 0x68);
              FUN_710323c4e0(lVar25,(ulong *)&local_90,(long *********)(long)*(int *)(lVar25 + 0x70)
                             ,ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
            }
            lVar46 = lVar46 + 8;
          } while (lVar46 != 0x18);
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar10);
      }
      lVar46 = 0;
      do {
        ppppppppplVar29 = (long *********)&DAT_00000008;
        local_90 = (long **********)FUN_7103238a70(*(ulong *)((long)puVar24 + lVar46),0,8);
        if (((ulong)local_90 & 0xffffffffff) != 0) {
          lVar25 = *plVar44;
          ppppppppplVar29 = (long *********)(long)*(int *)(lVar25 + 0x70);
          ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar25 + 0x68);
          FUN_710323c4e0(lVar25,(ulong *)&local_90,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                         uVar13,in_x7);
        }
        lVar46 = lVar46 + 8;
      } while (lVar46 != 0x18);
      lVar46 = *(long *)(lVar34 + 0x168);
      puVar21 = FUN_71032631a0(lVar46,0x13b28d453e);
      puVar22 = FUN_71032631a0(lVar46,0x13b3e567a6);
      puVar26 = (undefined8 *)
                FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                               uVar13,in_x7);
      if (puVar26 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_70[0] = (long ********)((ulong)local_70[0] & 0xffffffff00000000);
          local_90 = (long **********)&DAT_00000010;
          pppppppppplVar16 = (long **********)&local_90;
          uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
          if (((uVar37 & 1) != 0) &&
             (puVar26 = (undefined8 *)
                        FUN_710392e290(0x10,0x10,(long ****)pppppppppplVar16,ppppbVar30,pppplVar31,
                                       uVar32,uVar13,in_x7), puVar26 != (undefined8 *)0x0))
          goto LAB_710183acc4;
        }
        puVar26 = (undefined8 *)0x0;
      }
LAB_710183acc4:
      *puVar26 = puVar21;
      puVar26[1] = puVar22;
      local_90 = (long **********)FUN_7103238a70((ulong)puVar21,0,8);
      if (((ulong)local_90 & 0xffffffffff) != 0) {
        lVar46 = *plVar44;
        ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
        FUN_710323c4e0(lVar46,(ulong *)&local_90,(long *********)(long)*(int *)(lVar46 + 0x70),
                       ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
      }
      ppppppppplVar29 = (long *********)&DAT_00000008;
      local_90 = (long **********)FUN_7103238a70(puVar26[1],0,8);
      if (((ulong)local_90 & 0xffffffffff) != 0) {
        lVar46 = *plVar44;
        ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
        ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
        FUN_710323c4e0(lVar46,(ulong *)&local_90,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13
                       ,in_x7);
      }
      lVar46 = *(long *)(lVar34 + 0x168);
      puVar21 = FUN_71032631a0(lVar46,0x13b28d453e);
      uVar10 = FUN_71032633f0(lVar46,(ulong)puVar21);
      if (1 < (int)uVar10) {
        uVar37 = 1;
        do {
          lVar46 = 0;
          do {
            ppppppppplVar29 = (long *********)0x1;
            local_90 = (long **********)FUN_7103238a70(*(ulong *)((long)puVar26 + lVar46),uVar37,1);
            uVar27 = extraout_x1_04;
            if (((ulong)local_90 & 0xffffffffff) != 0) {
              lVar34 = *plVar44;
              ppppppppplVar29 = (long *********)(long)*(int *)(lVar34 + 0x70);
              ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar34 + 0x68);
              FUN_710323c4e0(lVar34,(ulong *)&local_90,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                             uVar13,in_x7);
              uVar27 = extraout_x1_05;
            }
            lVar46 = lVar46 + 8;
          } while (lVar46 != 0x10);
          uVar11 = (int)uVar37 + 1;
          uVar37 = (ulong)uVar11;
        } while (uVar11 != uVar10);
        goto LAB_710183ada0;
      }
      goto LAB_710183ada4;
    }
    FUN_710183bb20((undefined4 *)&local_c0,param_1);
    lVar46 = *(long *)(param_1 + 0xd0);
    FUN_710323beb0(lVar46,(ulong *)&DAT_7104543b28,(long)*(int *)(lVar46 + 0x70),
                   (ulong)*(uint *)(lVar46 + 0x68),(long ****)0x1,uVar32,uVar13,in_x7);
    lVar46 = *(long *)(param_1 + 0xd0);
    FUN_710323beb0(lVar46,(ulong *)&DAT_7104544388,(long)*(int *)(lVar46 + 0x70),
                   (ulong)*(uint *)(lVar46 + 0x68),(long ****)0x0,uVar32,uVar13,in_x7);
    lVar46 = *(long *)(param_1 + 0xd0);
    ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
    ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
    pppplVar31 = (long ****)0x0;
    FUN_710323beb0(lVar46,(ulong *)&DAT_7104544390,(long)ppppppppplVar29,(ulong)ppppbVar30,
                   (long ****)0x0,uVar32,uVar13,in_x7);
    uVar27 = extraout_x1_09;
    iVar12 = (int)local_c0;
    if ((int)local_c0 == 9) {
      lVar46 = *plVar44;
      ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
      ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
      pppplVar31 = (long ****)0x0;
      FUN_710323beb0(lVar46,(ulong *)&DAT_7104544398,(long)ppppppppplVar29,(ulong)ppppbVar30,
                     (long ****)0x0,uVar32,uVar13,in_x7);
      uVar27 = extraout_x1_10;
      iVar12 = (int)local_c0;
    }
    if (iVar12 == 0x16) {
      lVar46 = *plVar44;
      ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
      ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
      pppplVar31 = (long ****)0x0;
      FUN_710323beb0(lVar46,(ulong *)&DAT_71045443a0,(long)ppppppppplVar29,(ulong)ppppbVar30,
                     (long ****)0x0,uVar32,uVar13,in_x7);
      uVar27 = extraout_x1_12;
      iVar12 = (int)local_c0;
    }
    if (iVar12 == 0x18) {
      lVar46 = *plVar44;
      ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
      ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
      pppplVar31 = (long ****)0x0;
      FUN_710323beb0(lVar46,(ulong *)&DAT_71045443a8,(long)ppppppppplVar29,(ulong)ppppbVar30,
                     (long ****)0x0,uVar32,uVar13,in_x7);
      uVar27 = extraout_x1_11;
      iVar12 = (int)local_c0;
    }
    if (iVar12 == 0xf) {
      lVar46 = *plVar44;
      ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
      ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
      pppplVar31 = (long ****)0x0;
      FUN_710323beb0(lVar46,(ulong *)&DAT_71045443b0,(long)ppppppppplVar29,(ulong)ppppbVar30,
                     (long ****)0x0,uVar32,uVar13,in_x7);
      uVar27 = extraout_x1_13;
    }
    FUN_71032d1fd0(plVar44,uVar27,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
    local_90 = (long **********)FUN_710323af70(0x7104308504,0);
    if (((ulong)local_90 & 0xffffffffff) != 0) {
      lVar46 = *plVar44;
      ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
      ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
      FUN_710323c4e0(lVar46,(ulong *)&local_90,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13,
                     in_x7);
    }
    FUN_7101a11d30((long *)&local_90,plVar43,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,uVar32
                   ,uVar13,in_x7);
    pppppppppplVar15 = local_88;
    for (pppppppppplVar16 = local_90; pppppppppplVar16 != pppppppppplVar15;
        pppppppppplVar16 = pppppppppplVar16 + 1) {
      ppppppppplVar29 = (long *********)0x1;
      local_70[0] = (long ********)FUN_7103238a70((ulong)*pppppppppplVar16,0,1);
      if (((ulong)local_70[0] & 0xffffffffff) != 0) {
        lVar46 = *plVar44;
        ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
        ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
        FUN_710323c4e0(lVar46,(ulong *)local_70,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13,
                       in_x7);
      }
    }
    puVar3 = *(ulong **)(param_1 + 0x110);
    for (puVar2 = *(ulong **)(param_1 + 0x108); puVar2 != puVar3; puVar2 = puVar2 + 1) {
      ppppppppplVar29 = (long *********)&DAT_00000007;
      local_70[0] = (long ********)FUN_7103238a70(*puVar2,0,7);
      if (((ulong)local_70[0] & 0xffffffffff) != 0) {
        lVar46 = *plVar44;
        ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
        ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
        FUN_710323c4e0(lVar46,(ulong *)local_70,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13,
                       in_x7);
      }
    }
    lVar34 = *(long *)(DAT_710532f730 + 8);
    lVar46 = *(long *)(lVar34 + 0x168);
    puVar21 = FUN_71032631a0(lVar46,0x1280f1c82e);
    puVar22 = FUN_71032631a0(lVar46,0x14ef73f367);
    puVar23 = FUN_71032631a0(lVar46,0x12915a4ff6);
    puVar24 = (undefined8 *)
              FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                             uVar13,in_x7);
    if (puVar24 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_74 = 0;
        local_70[0] = (long ********)&SUB_00000018;
        ppppppppplVar29 = local_70;
        uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
        if (((uVar37 & 1) != 0) &&
           (puVar24 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,
                                     uVar32,uVar13,in_x7), puVar24 != (undefined8 *)0x0))
        goto LAB_710183b108;
      }
      puVar24 = (undefined8 *)0x0;
    }
LAB_710183b108:
    *puVar24 = puVar21;
    puVar24[1] = puVar22;
    puVar24[2] = puVar23;
    lVar46 = *(long *)(lVar34 + 0x168);
    puVar21 = FUN_71032631a0(lVar46,0x11b1ccb807);
    uVar10 = FUN_71032633f0(lVar46,(ulong)puVar21);
    if (0 < (int)uVar10) {
      uVar11 = 0;
      do {
        lVar46 = 0;
        do {
          local_70[0] = (long ********)
                        FUN_7103238a70(*(ulong *)((long)puVar24 + lVar46),(ulong)uVar11,1);
          if (((ulong)local_70[0] & 0xffffffffff) != 0) {
            lVar25 = *plVar44;
            ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar25 + 0x68);
            FUN_710323c4e0(lVar25,(ulong *)local_70,(long *********)(long)*(int *)(lVar25 + 0x70),
                           ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
          }
          lVar46 = lVar46 + 8;
        } while (lVar46 != 0x18);
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar10);
    }
    lVar46 = 0;
    do {
      ppppppppplVar29 = (long *********)&DAT_00000008;
      local_70[0] = (long ********)FUN_7103238a70(*(ulong *)((long)puVar24 + lVar46),0,8);
      if (((ulong)local_70[0] & 0xffffffffff) != 0) {
        lVar25 = *plVar44;
        ppppppppplVar29 = (long *********)(long)*(int *)(lVar25 + 0x70);
        ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar25 + 0x68);
        FUN_710323c4e0(lVar25,(ulong *)local_70,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13,
                       in_x7);
      }
      lVar46 = lVar46 + 8;
    } while (lVar46 != 0x18);
    lVar46 = *(long *)(lVar34 + 0x168);
    puVar21 = FUN_71032631a0(lVar46,0x143829f67e);
    uVar10 = FUN_71032633f0(lVar46,(ulong)puVar21);
    if ((int)local_c0 - 0x19U < 4) {
      puVar21 = FUN_71032631a0(lVar46,0x143829f67e);
      puVar22 = FUN_71032631a0(lVar46,0x14c6fc852a);
      puVar26 = (undefined8 *)
                FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                               uVar13,in_x7);
      if (puVar26 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_74 = 0;
          local_70[0] = (long ********)&DAT_00000010;
          ppppppppplVar29 = local_70;
          uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
          if (((uVar37 & 1) != 0) &&
             (puVar26 = (undefined8 *)
                        FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,
                                       uVar32,uVar13,in_x7), puVar26 != (undefined8 *)0x0))
          goto LAB_710183b2a8;
        }
        puVar26 = (undefined8 *)0x0;
      }
LAB_710183b2a8:
      *puVar26 = puVar21;
      puVar26[1] = puVar22;
      if (0 < (int)uVar10) {
        uVar11 = 0;
        do {
          lVar46 = 0;
          do {
            ppppppppplVar29 = (long *********)0x1;
            local_70[0] = (long ********)
                          FUN_7103238a70(*(ulong *)((long)puVar26 + lVar46),(ulong)uVar11,1);
            if (((ulong)local_70[0] & 0xffffffffff) != 0) {
              lVar25 = *plVar44;
              ppppppppplVar29 = (long *********)(long)*(int *)(lVar25 + 0x70);
              ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar25 + 0x68);
              FUN_710323c4e0(lVar25,(ulong *)local_70,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                             uVar13,in_x7);
            }
            lVar46 = lVar46 + 8;
          } while (lVar46 != 0x10);
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar10);
      }
    }
    else {
      puVar21 = FUN_71032631a0(lVar46,0x13b28d453e);
      puVar22 = FUN_71032631a0(lVar46,0x13b3e567a6);
      puVar26 = (undefined8 *)
                FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                               uVar13,in_x7);
      if (puVar26 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_74 = 0;
          local_70[0] = (long ********)&DAT_00000010;
          ppppppppplVar29 = local_70;
          uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
          if (((uVar37 & 1) != 0) &&
             (puVar26 = (undefined8 *)
                        FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,
                                       uVar32,uVar13,in_x7), puVar26 != (undefined8 *)0x0))
          goto LAB_710183b384;
        }
        puVar26 = (undefined8 *)0x0;
      }
LAB_710183b384:
      *puVar26 = puVar21;
      puVar26[1] = puVar22;
      if (1 < (int)uVar10) {
        uVar37 = 1;
        do {
          lVar46 = 0;
          do {
            ppppppppplVar29 = (long *********)0x1;
            local_70[0] = (long ********)FUN_7103238a70(*(ulong *)((long)puVar26 + lVar46),uVar37,1)
            ;
            if (((ulong)local_70[0] & 0xffffffffff) != 0) {
              lVar25 = *plVar44;
              ppppppppplVar29 = (long *********)(long)*(int *)(lVar25 + 0x70);
              ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar25 + 0x68);
              FUN_710323c4e0(lVar25,(ulong *)local_70,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                             uVar13,in_x7);
            }
            lVar46 = lVar46 + 8;
          } while (lVar46 != 0x10);
          uVar11 = (int)uVar37 + 1;
          uVar37 = (ulong)uVar11;
        } while (uVar11 != uVar10);
      }
    }
    if (puVar26 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar26);
    }
    lVar46 = *(long *)(lVar34 + 0x168);
    puVar21 = FUN_71032631a0(lVar46,0x13b28d453e);
    puVar22 = FUN_71032631a0(lVar46,0x13b3e567a6);
    puVar26 = (undefined8 *)
              FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                             uVar13,in_x7);
    if (puVar26 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_74 = 0;
        local_70[0] = (long ********)&DAT_00000010;
        ppppppppplVar29 = local_70;
        uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
        if (((uVar37 & 1) != 0) &&
           (puVar26 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,
                                     uVar32,uVar13,in_x7), puVar26 != (undefined8 *)0x0))
        goto LAB_710183b470;
      }
      puVar26 = (undefined8 *)0x0;
    }
LAB_710183b470:
    *puVar26 = puVar21;
    puVar26[1] = puVar22;
    local_70[0] = (long ********)FUN_7103238a70((ulong)puVar21,0,8);
    if (((ulong)local_70[0] & 0xffffffffff) != 0) {
      lVar46 = *plVar44;
      ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
      FUN_710323c4e0(lVar46,(ulong *)local_70,(long *********)(long)*(int *)(lVar46 + 0x70),
                     ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
    }
    ppppppppplVar29 = (long *********)&DAT_00000008;
    local_70[0] = (long ********)FUN_7103238a70(puVar26[1],0,8);
    if (((ulong)local_70[0] & 0xffffffffff) != 0) {
      lVar46 = *plVar44;
      ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
      ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
      FUN_710323c4e0(lVar46,(ulong *)local_70,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13,
                     in_x7);
    }
    FUN_710392eb40((ulong)puVar26);
    uVar27 = extraout_x1_14;
    if (puVar24 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar24);
      uVar27 = extraout_x1_15;
    }
    pppppppppplVar16 = local_90;
    pppppppppplVar15 = local_90;
    if (local_90 != (long **********)0x0) goto LAB_710183adc4;
  }
  else {
    FUN_710323beb0(lVar46,(ulong *)&DAT_7104543b28,(long)*(int *)(lVar46 + 0x70),
                   (ulong)*(uint *)(lVar46 + 0x68),(long ****)0x1,uVar32,uVar13,in_x7);
    lVar46 = *plVar44;
    FUN_710323beb0(lVar46,(ulong *)&DAT_71045443b8,(long)*(int *)(lVar46 + 0x70),
                   (ulong)*(uint *)(lVar46 + 0x68),(long ****)0x0,uVar32,uVar13,in_x7);
    lVar46 = *plVar44;
    FUN_710323beb0(lVar46,(ulong *)&DAT_71045443c0,(long)*(int *)(lVar46 + 0x70),
                   (ulong)*(uint *)(lVar46 + 0x68),(long ****)0x0,uVar32,uVar13,in_x7);
    lVar46 = *plVar44;
    ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
    ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
    pppplVar31 = (long ****)0x0;
    FUN_710323beb0(lVar46,(ulong *)&DAT_71045443c8,(long)ppppppppplVar29,(ulong)ppppbVar30,
                   (long ****)0x0,uVar32,uVar13,in_x7);
    FUN_71032d1fd0(plVar44,extraout_x1,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
    FUN_7101a11d30((long *)&local_c0,plVar43,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,uVar32
                   ,uVar13,in_x7);
    pppppppppplVar15 = local_b8;
    for (pppppppppplVar16 = local_c0; pppppppppplVar16 != pppppppppplVar15;
        pppppppppplVar16 = pppppppppplVar16 + 1) {
      ppppppppplVar29 = (long *********)0x1;
      local_90 = (long **********)FUN_7103238a70((ulong)*pppppppppplVar16,0,1);
      if (((ulong)local_90 & 0xffffffffff) != 0) {
        lVar46 = *plVar44;
        ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
        ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
        FUN_710323c4e0(lVar46,(ulong *)&local_90,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13
                       ,in_x7);
      }
    }
    puVar3 = *(ulong **)(param_1 + 0x110);
    for (puVar2 = *(ulong **)(param_1 + 0x108); puVar2 != puVar3; puVar2 = puVar2 + 1) {
      ppppppppplVar29 = (long *********)&DAT_00000007;
      local_90 = (long **********)FUN_7103238a70(*puVar2,0,7);
      if (((ulong)local_90 & 0xffffffffff) != 0) {
        lVar46 = *plVar44;
        ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
        ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
        FUN_710323c4e0(lVar46,(ulong *)&local_90,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13
                       ,in_x7);
      }
    }
    lVar34 = *(long *)(DAT_710532f730 + 8);
    lVar46 = *(long *)(lVar34 + 0x168);
    puVar21 = FUN_71032631a0(lVar46,0x1280f1c82e);
    puVar22 = FUN_71032631a0(lVar46,0x14ef73f367);
    puVar23 = FUN_71032631a0(lVar46,0x12915a4ff6);
    puVar24 = (undefined8 *)
              FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                             uVar13,in_x7);
    if (puVar24 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_70[0] = (long ********)((ulong)local_70[0] & 0xffffffff00000000);
        local_90 = (long **********)&SUB_00000018;
        pppppppppplVar16 = (long **********)&local_90;
        uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
        if (((uVar37 & 1) != 0) &&
           (puVar24 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,(long ****)pppppppppplVar16,ppppbVar30,pppplVar31,
                                     uVar32,uVar13,in_x7), puVar24 != (undefined8 *)0x0))
        goto LAB_710183a71c;
      }
      puVar24 = (undefined8 *)0x0;
    }
LAB_710183a71c:
    *puVar24 = puVar21;
    puVar24[1] = puVar22;
    puVar24[2] = puVar23;
    lVar46 = *(long *)(lVar34 + 0x168);
    puVar21 = FUN_71032631a0(lVar46,0x11b1ccb807);
    uVar10 = FUN_71032633f0(lVar46,(ulong)puVar21);
    if (0 < (int)uVar10) {
      uVar11 = 0;
      do {
        lVar46 = 0;
        do {
          local_90 = (long **********)
                     FUN_7103238a70(*(ulong *)((long)puVar24 + lVar46),(ulong)uVar11,1);
          if (((ulong)local_90 & 0xffffffffff) != 0) {
            lVar25 = *plVar44;
            ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar25 + 0x68);
            FUN_710323c4e0(lVar25,(ulong *)&local_90,(long *********)(long)*(int *)(lVar25 + 0x70),
                           ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
          }
          lVar46 = lVar46 + 8;
        } while (lVar46 != 0x18);
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar10);
    }
    lVar46 = 0;
    do {
      ppppppppplVar29 = (long *********)&DAT_00000008;
      local_90 = (long **********)FUN_7103238a70(*(ulong *)((long)puVar24 + lVar46),0,8);
      if (((ulong)local_90 & 0xffffffffff) != 0) {
        lVar25 = *plVar44;
        ppppppppplVar29 = (long *********)(long)*(int *)(lVar25 + 0x70);
        ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar25 + 0x68);
        FUN_710323c4e0(lVar25,(ulong *)&local_90,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13
                       ,in_x7);
      }
      lVar46 = lVar46 + 8;
    } while (lVar46 != 0x18);
    lVar46 = *(long *)(lVar34 + 0x168);
    puVar21 = FUN_71032631a0(lVar46,0x13b28d453e);
    puVar22 = FUN_71032631a0(lVar46,0x13b3e567a6);
    puVar26 = (undefined8 *)
              FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                             uVar13,in_x7);
    if (puVar26 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_70[0] = (long ********)((ulong)local_70[0] & 0xffffffff00000000);
        local_90 = (long **********)&DAT_00000010;
        pppppppppplVar16 = (long **********)&local_90;
        uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
        if (((uVar37 & 1) != 0) &&
           (puVar26 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,(long ****)pppppppppplVar16,ppppbVar30,pppplVar31,
                                     uVar32,uVar13,in_x7), puVar26 != (undefined8 *)0x0))
        goto LAB_710183a878;
      }
      puVar26 = (undefined8 *)0x0;
    }
LAB_710183a878:
    *puVar26 = puVar21;
    puVar26[1] = puVar22;
    local_90 = (long **********)FUN_7103238a70((ulong)puVar21,0,8);
    if (((ulong)local_90 & 0xffffffffff) != 0) {
      lVar46 = *plVar44;
      ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
      FUN_710323c4e0(lVar46,(ulong *)&local_90,(long *********)(long)*(int *)(lVar46 + 0x70),
                     ppppbVar30,pppplVar31,uVar32,uVar13,in_x7);
    }
    ppppppppplVar29 = (long *********)&DAT_00000008;
    local_90 = (long **********)FUN_7103238a70(puVar26[1],0,8);
    if (((ulong)local_90 & 0xffffffffff) != 0) {
      lVar46 = *plVar44;
      ppppppppplVar29 = (long *********)(long)*(int *)(lVar46 + 0x70);
      ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar46 + 0x68);
      FUN_710323c4e0(lVar46,(ulong *)&local_90,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,uVar13,
                     in_x7);
    }
    lVar46 = *(long *)(lVar34 + 0x168);
    puVar21 = FUN_71032631a0(lVar46,0x13b28d453e);
    uVar10 = FUN_71032633f0(lVar46,(ulong)puVar21);
    if ((int)uVar10 < 2) {
LAB_710183ada4:
      FUN_710392eb40((ulong)puVar26);
      uVar27 = extraout_x1_06;
    }
    else {
      uVar37 = 1;
      do {
        lVar46 = 0;
        do {
          ppppppppplVar29 = (long *********)0x1;
          local_90 = (long **********)FUN_7103238a70(*(ulong *)((long)puVar26 + lVar46),uVar37,1);
          uVar27 = extraout_x1_00;
          if (((ulong)local_90 & 0xffffffffff) != 0) {
            lVar34 = *plVar44;
            ppppppppplVar29 = (long *********)(long)*(int *)(lVar34 + 0x70);
            ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar34 + 0x68);
            FUN_710323c4e0(lVar34,(ulong *)&local_90,ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                           uVar13,in_x7);
            uVar27 = extraout_x1_01;
          }
          lVar46 = lVar46 + 8;
        } while (lVar46 != 0x10);
        uVar11 = (int)uVar37 + 1;
        uVar37 = (ulong)uVar11;
      } while (uVar11 != uVar10);
LAB_710183ada0:
      if (puVar26 != (undefined8 *)0x0) goto LAB_710183ada4;
    }
    if (puVar24 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar24);
      uVar27 = extraout_x1_07;
    }
    if (local_c0 != (long **********)0x0) {
      local_b8 = local_c0;
      pppppppppplVar16 = local_c0;
      pppppppppplVar15 = local_88;
LAB_710183adc4:
      local_88 = pppppppppplVar15;
      FUN_710392eb40((ulong)pppppppppplVar16);
      uVar27 = extraout_x1_08;
    }
  }
  iVar12 = *(int *)(param_1 + 0xd8);
  if ((((0x19 < iVar12 - 4U) || ((0xfb1c0U >> (ulong)(iVar12 - 4U & 0x1f) & 1) != 0)) &&
      (*(int *)(param_1 + 200) != 2)) &&
     (puVar24 = *(undefined8 **)(*(long *)(*DAT_7105329f98 + 0x30) + 0x8ac20),
     *(int *)(puVar24 + 2) < 1)) {
    *(undefined1 *)(puVar24 + 0xe) = 0;
    local_c0 = (long **********)&DAT_71050c5300;
    local_b8 = (long **********)&DAT_c1ffff0000000000;
    local_a0 = (long **********)&local_c0;
    FUN_71003cb050((long *)&local_c0,puVar24 + 8);
    if (&local_c0 == (long ***********)local_a0) {
      pppppppplVar36 = (*local_a0)[4];
LAB_710183b510:
      (*(code *)pppppppplVar36)();
    }
    else if (local_a0 != (long **********)0x0) {
      pppppppplVar36 = (*local_a0)[5];
      goto LAB_710183b510;
    }
    ppppppppplVar29 = (long *********)&DAT_ffffffff;
    ppppbVar30 = (byte ****)0x1;
    FUN_7103549720(puVar24,FUN_710259f170,0xffffffff,1,pppplVar31,uVar32,uVar13,in_x7);
    iVar12 = *(int *)(param_1 + 0xd8);
    uVar27 = extraout_x1_16;
  }
  if (iVar12 - 9U < 0x14) {
    uVar10 = 0xfc7e >> (ulong)(iVar12 - 9U & 0x1f);
    *(byte *)(param_1 + 0x12f) = (byte)uVar10 & 1;
    if ((uVar10 & 1) == 0) goto joined_r0x00710183b5cc;
  }
  else {
    *(undefined1 *)(param_1 + 0x12f) = 1;
  }
  plVar43 = *(long **)(*DAT_7105314510 + 0x88);
  FUN_71017c0f50((long *)*plVar43,uVar27,(long ****)ppppppppplVar29,ppppbVar30,pppplVar31,uVar32,
                 uVar13,in_x7);
  FUN_71017c6500(*plVar43);
joined_r0x00710183b5cc:
  if (local_108 != (long ****)0x0) {
    local_100 = local_108;
    FUN_710392eb40((ulong)local_108);
  }
  if (local_f0 != (long **********)0x0) {
    FUN_710392eb40((ulong)local_f0);
  }
  if (local_d8 != (undefined8 *)0x0) {
    local_d0 = local_d8;
    FUN_710392eb40((ulong)local_d8);
  }
  return;
code_r0x007101839c4c:
  *local_100 = ppplVar17;
  local_100 = local_100 + 1;
  puVar24 = puVar24 + 1;
  goto joined_r0x007101839af0;
}

