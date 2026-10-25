// addr:      7103084b00
// offset:    0x3084b00
// name:      FUN_7103084b00
// mangled:   
// signature: undefined __cdecl FUN_7103084b00(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_7103084b00(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar5;
  long *plVar6;
  long *********ppppppppplVar7;
  char *pcVar8;
  undefined **ppuVar9;
  byte ****ppppbVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  long ********pppppppplVar15;
  float *pfVar16;
  long lVar17;
  long *plVar18;
  float *pfVar19;
  ulong uVar20;
  long *plVar21;
  float *pfVar22;
  long *plVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  long *plVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  long ********local_78;
  undefined4 local_64;
  
  FUN_71025d9250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar11 = param_1[0x113];
  uVar13 = 0;
  if (param_1[0x114] - lVar11 != 0) {
    uVar13 = (param_1[0x114] - lVar11) * 0x40 - 1;
  }
  uVar20 = param_1[0x117] + param_1[0x116];
  uVar5 = extraout_x1;
  if (uVar13 == uVar20) {
    FUN_7103087660((ulong *)(param_1 + 0x112),extraout_x1,(long ****)param_3,(byte ****)param_4,
                   (long ****)param_5,param_6,param_7,param_8);
    uVar20 = param_1[0x116] + param_1[0x117];
    lVar11 = param_1[0x113];
    uVar5 = extraout_x1_00;
  }
  *(undefined8 *)(*(long *)(lVar11 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8) = 0;
  lVar11 = param_1[0x117];
  lVar12 = param_1[0x113];
  param_1[0x117] = lVar11 + 1;
  uVar13 = param_1[0x116] + lVar11 + 1;
  uVar20 = 0;
  if (param_1[0x114] - lVar12 != 0) {
    uVar20 = (param_1[0x114] - lVar12) * 0x40 - 1;
  }
  if (uVar20 == uVar13) {
    FUN_7103087660((ulong *)(param_1 + 0x112),uVar5,(long ****)param_3,(byte ****)param_4,
                   (long ****)param_5,param_6,param_7,param_8);
    uVar13 = param_1[0x116] + param_1[0x117];
    lVar12 = param_1[0x113];
  }
  *(undefined8 *)(*(long *)(lVar12 + (uVar13 >> 6 & 0x3fffffffffffff8)) + (uVar13 & 0x1ff) * 8) = 1;
  lVar12 = param_1[0x117];
  lVar11 = lVar12 + 1;
  param_1[0x117] = lVar11;
  if (lVar11 != 0) {
    while( true ) {
      uVar13 = (lVar11 + param_1[0x116]) - 1;
      FUN_71030881f0((long)param_1,
                     (uint *)(*(long *)(param_1[0x113] + (uVar13 >> 6 & 0x3fffffffffffff8)) +
                             (uVar13 & 0x1ff) * 8),(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      lVar17 = param_1[0x117];
      param_1[0x117] = lVar17 + -1;
      lVar1 = param_1[0x114] - param_1[0x113];
      lVar11 = 0;
      if (lVar1 != 0) {
        lVar11 = lVar1 * 0x40 + -1;
      }
      if (0x3ff < (ulong)(((1 - lVar17) - param_1[0x116]) + lVar11)) {
        puVar14 = (ulong *)(param_1[0x114] + -8);
        if (*puVar14 != 0) {
          FUN_710392eb40(*puVar14);
          puVar14 = (ulong *)(param_1[0x114] + -8);
        }
        param_1[0x114] = (long)puVar14;
      }
      if (lVar12 == 0) break;
      lVar11 = param_1[0x117];
      lVar12 = lVar12 + -1;
    }
  }
  plVar21 = param_1 + 0x11b;
  plVar18 = (long *)**(long **)(param_1[0x60] + 0x18);
  plVar24 = (long *)(*(long **)(param_1[0x60] + 0x18))[1];
  plVar6 = plVar24;
  plVar26 = plVar18;
  if (plVar18 != plVar24) {
    do {
      uVar13 = *(ulong *)(*plVar26 + 0xa0);
      do {
        if (plVar18 == plVar6) goto LAB_7103084e18;
        lVar11 = *plVar18;
        plVar18 = plVar18 + 1;
      } while (((*(ulong *)(lVar11 + 0xa0) ^ uVar13) & 0xffffffffff) != 0);
      if (((lVar11 != 0) && (plVar18 = *(long **)(lVar11 + 0x110), plVar18 != (long *)0x0)) &&
         (*plVar18 != plVar18[1])) {
        plVar6 = plVar21;
        plVar27 = plVar21;
        if ((long *)*plVar21 != (long *)0x0) {
          plVar23 = (long *)*plVar21;
          do {
            while (plVar6 = plVar23, (uVar13 & 0xffffffffff) < (plVar6[4] & 0xffffffffffU)) {
              plVar23 = (long *)*plVar6;
              plVar27 = plVar6;
              if ((long *)*plVar6 == (long *)0x0) {
                plVar23 = (long *)*plVar6;
                goto joined_r0x007103084df4;
              }
            }
            if ((uVar13 & 0xffffffffff) <= (plVar6[4] & 0xffffffffffU)) break;
            plVar27 = plVar6 + 1;
            plVar23 = (long *)*plVar27;
          } while ((long *)*plVar27 != (long *)0x0);
        }
        plVar23 = (long *)*plVar27;
joined_r0x007103084df4:
        if (plVar23 == (long *)0x0) {
          plVar23 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,(byte ****)param_4,
                                           (long ****)param_5,param_6,param_7,param_8);
          if (plVar23 == (long *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_64 = 0;
              local_78 = (long ********)&DAT_00000030;
              param_3 = &local_78;
              uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
              if (((uVar20 & 1) != 0) &&
                 (plVar23 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,(byte ****)param_4,
                                                   (long ****)param_5,param_6,param_7,param_8),
                 plVar23 != (long *)0x0)) goto LAB_7103084dc4;
            }
            plVar23 = (long *)0x0;
          }
LAB_7103084dc4:
          plVar23[4] = uVar13;
          plVar23[5] = 0;
          plVar23[2] = (long)plVar6;
          *plVar23 = 0;
          plVar23[1] = 0;
          *plVar27 = (long)plVar23;
          plVar6 = plVar23;
          if (*(long *)param_1[0x11a] != 0) {
            param_1[0x11a] = *(long *)param_1[0x11a];
            plVar6 = (long *)*plVar27;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    ((long *)param_1[0x11b],plVar6);
          param_1[0x11c] = param_1[0x11c] + 1;
        }
        plVar23[5] = (long)plVar18;
      }
LAB_7103084e18:
      if (plVar26 + 1 == plVar24) break;
      plVar18 = (long *)**(long **)(param_1[0x60] + 0x18);
      plVar6 = (long *)(*(long **)(param_1[0x60] + 0x18))[1];
      plVar26 = plVar26 + 1;
    } while( true );
  }
  plVar24 = (long *)*plVar21;
  plVar18 = plVar21;
  if ((long *)*plVar21 == (long *)0x0) {
    plVar24 = (long *)*plVar21;
  }
  else {
    do {
      while (plVar21 = plVar24, 0xdb820e60d < (plVar21[4] & 0xffffffffffU)) {
        plVar24 = (long *)*plVar21;
        plVar18 = plVar21;
        if ((long *)*plVar21 == (long *)0x0) goto LAB_7103084e88;
      }
      if ((plVar21[4] & 0xffffffffffU) == 0xdb820e60d) break;
      plVar18 = plVar21 + 1;
      plVar24 = (long *)*plVar18;
    } while ((long *)*plVar18 != (long *)0x0);
LAB_7103084e88:
    plVar24 = (long *)*plVar18;
  }
  if (plVar24 == (long *)0x0) {
    plVar24 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,(byte ****)param_4,
                                     (long ****)param_5,param_6,param_7,param_8);
    if (plVar24 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_78 = (long ********)&DAT_00000030;
        param_3 = &local_78;
        uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar13 & 1) != 0) &&
           (plVar24 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8),
           plVar24 != (long *)0x0)) goto LAB_7103084eec;
      }
      plVar24 = (long *)0x0;
    }
LAB_7103084eec:
    plVar24[4] = 0xdb820e60d;
    plVar24[5] = 0;
    plVar24[2] = (long)plVar21;
    *plVar24 = 0;
    plVar24[1] = 0;
    *plVar18 = (long)plVar24;
    plVar21 = plVar24;
    if (*(long *)param_1[0x11a] != 0) {
      param_1[0x11a] = *(long *)param_1[0x11a];
      plVar21 = (long *)*plVar18;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)param_1[0x11b],plVar21);
    param_1[0x11c] = param_1[0x11c] + 1;
  }
  puVar4 = (undefined8 *)
           FUN_710392e290(0x10,0x1d0,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                          param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ********)&DAT_000001d0;
      ppppppppplVar7 = &local_78;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar13 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x1d0,(long ****)ppppppppplVar7,(byte ****)param_4,
                                  (long ****)param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7103084f88;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7103084f88:
  ppppbVar10 = (byte ****)plVar24[5];
  pcVar8 = "dys_ring_r_nokoru_set";
  FUN_7103144f60(puVar4,(long)param_1,(byte *)"dys_ring_r_nokoru_set",ppppbVar10,(long ****)param_5,
                 param_6,param_7,param_8);
  param_1[300] = (long)puVar4;
  for (plVar21 = *(long **)(param_1[0x62] + 0xd0); ppuVar9 = (undefined **)pcVar8,
      plVar21 != *(long **)(param_1[0x62] + 0xd8); plVar21 = plVar21 + 2) {
    if ((*(uint *)(plVar21 + 1) < 2) &&
       (lVar11 = *plVar21, *(long *)(lVar11 + 0x68) == 0x15e0291b1d)) {
      if (lVar11 != 0) {
        if (*(long *)(lVar11 + 0xd8) == 0) {
          iVar3 = -1;
          param_1[0x11f] = lVar11;
        }
        else {
          plVar21 = *(long **)(*(long *)(*(long *)(lVar11 + 0xd8) + 8) + 8);
          iVar3 = (**(code **)(*plVar21 + 0x18))(plVar21,"RNT_01_joint");
          param_1[0x11f] = lVar11;
          ppuVar9 = (undefined **)pcVar8;
        }
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0xd8) == 0)) goto LAB_7103084fec;
        if (iVar3 == -1) {
          iVar3 = 0;
        }
        else {
          (**(code **)(**(long **)(*(long *)(*(long *)(lVar11 + 0xd8) + 8) + 8) + 0x10))();
        }
        goto LAB_7103084ff0;
      }
      break;
    }
  }
  param_1[0x11f] = 0;
LAB_7103084fec:
  iVar3 = -1;
LAB_7103084ff0:
  *(int *)(param_1 + 0x120) = iVar3;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  param_1[0x123] = 0;
  param_1[0x122] = 0x3f800000;
  param_1[0x125] = 0;
  param_1[0x124] = 0x3f80000000000000;
  param_1[0x127] = 0x3f800000;
  param_1[0x126] = 0;
  param_1[0x129] = 0x3f80000000000000;
  param_1[0x128] = 0;
  *(long **)(param_1[300] + 0x68) = param_1 + 0x11e;
  *(undefined1 *)(param_1[300] + 0x151) = 0;
  plVar21 = (long *)**(long **)(param_1[0x60] + 0x18);
  do {
    if (plVar21 == (long *)(*(long **)(param_1[0x60] + 0x18))[1]) goto LAB_710308521c;
    lVar11 = *plVar21;
    plVar21 = plVar21 + 1;
  } while ((*(ulong *)(lVar11 + 0xa0) & 0xffffffffff) != 0x7b569df99);
  puVar25 = *(undefined8 **)(lVar11 + 0x130);
  uVar2 = FUN_7103151710((byte *)"IPP0002");
  for (puVar4 = (undefined8 *)*puVar25; puVar4 != (undefined8 *)puVar25[1]; puVar4 = puVar4 + 1) {
    plVar21 = (long *)*puVar4;
    if ((plVar21[3] != 0) && (*(uint *)(plVar21[3] + 0x100) == uVar2)) goto LAB_7103085138;
  }
  plVar21 = (long *)0x0;
LAB_7103085138:
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    ppuVar9 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_71052c51ba == '\0') {
    if ((char)plVar21[4] != '\0') {
      plVar18 = (long *)plVar21[1];
      lVar11 = plVar21[2];
      lVar12 = *plVar21;
      *(undefined1 *)(plVar21 + 4) = 0;
      *plVar18 = lVar12;
      *(long **)(lVar12 + 8) = plVar18;
      *(long *)(lVar11 + 0x18) = *(long *)(lVar11 + 0x18) + -1;
      *plVar21 = 0;
      plVar21[1] = 0;
      puVar4 = *(undefined8 **)(lVar11 + 0x40);
      *plVar21 = lVar11 + 0x38;
      plVar21[1] = (long)puVar4;
      *(long **)(lVar11 + 0x40) = plVar21;
      *puVar4 = plVar21;
      *(long *)(lVar11 + 0x30) = *(long *)(lVar11 + 0x30) + 1;
      iVar3 = 0;
      if (plVar21[3] != 0) {
        iVar3 = *(int *)(plVar21[3] + 0x110);
      }
      iVar3 = *(int *)(lVar11 + 0x48) - iVar3;
      goto LAB_7103085218;
    }
  }
  else if ((char)plVar21[4] == '\0') {
    *(undefined1 *)(plVar21 + 4) = 1;
    lVar12 = *plVar21;
    plVar18 = (long *)plVar21[1];
    lVar11 = plVar21[2];
    *plVar18 = lVar12;
    *(long **)(lVar12 + 8) = plVar18;
    *(long *)(lVar11 + 0x30) = *(long *)(lVar11 + 0x30) + -1;
    *plVar21 = 0;
    plVar21[1] = 0;
    puVar4 = *(undefined8 **)(lVar11 + 0x28);
    *plVar21 = lVar11 + 0x20;
    plVar21[1] = (long)puVar4;
    *(long **)(lVar11 + 0x28) = plVar21;
    *puVar4 = plVar21;
    *(long *)(lVar11 + 0x18) = *(long *)(lVar11 + 0x18) + 1;
    iVar3 = 0;
    if (plVar21[3] != 0) {
      iVar3 = *(int *)(plVar21[3] + 0x110);
    }
    iVar3 = *(int *)(lVar11 + 0x48) + iVar3;
LAB_7103085218:
    *(int *)(lVar11 + 0x48) = iVar3;
  }
LAB_710308521c:
  for (plVar21 = *(long **)(param_1[0x62] + 0xd0); plVar21 != *(long **)(param_1[0x62] + 0xd8);
      plVar21 = plVar21 + 2) {
    if ((*(uint *)(plVar21 + 1) < 2) &&
       (lVar11 = *plVar21, *(long *)(lVar11 + 0x68) == 0x14cc425535)) {
      if (lVar11 != 0) {
        if (*(long *)(lVar11 + 0xd8) == 0) {
          iVar3 = -1;
          param_1[0x133] = lVar11;
        }
        else {
          plVar21 = *(long **)(*(long *)(*(long *)(lVar11 + 0xd8) + 8) + 8);
          iVar3 = (**(code **)(*plVar21 + 0x18))(plVar21,"LHU_07_joint");
          param_1[0x133] = lVar11;
        }
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0xd8) == 0)) goto LAB_7103085264;
        if (iVar3 == -1) {
          iVar3 = 0;
        }
        else {
          (**(code **)(**(long **)(*(long *)(*(long *)(lVar11 + 0xd8) + 8) + 8) + 0x10))();
        }
        goto LAB_7103085268;
      }
      break;
    }
  }
  param_1[0x133] = 0;
LAB_7103085264:
  iVar3 = -1;
LAB_7103085268:
  *(int *)(param_1 + 0x134) = iVar3;
  *(undefined1 *)(param_1 + 0x13e) = 0;
  param_1[0x137] = 0;
  param_1[0x136] = 0x3f800000;
  param_1[0x139] = 0;
  param_1[0x138] = 0x3f80000000000000;
  param_1[0x13b] = 0x3f800000;
  param_1[0x13a] = 0;
  param_1[0x13d] = 0x3f80000000000000;
  param_1[0x13c] = 0;
  for (plVar21 = *(long **)(param_1[0x62] + 0xd0); plVar21 != *(long **)(param_1[0x62] + 0xd8);
      plVar21 = plVar21 + 2) {
    if ((*(uint *)(plVar21 + 1) < 2) &&
       (lVar11 = *plVar21, *(long *)(lVar11 + 0x68) == 0x1430c2baf8)) {
      if (lVar11 != 0) {
        if (*(long *)(lVar11 + 0xd8) == 0) {
          iVar3 = -1;
          param_1[0x141] = lVar11;
        }
        else {
          plVar21 = *(long **)(*(long *)(*(long *)(lVar11 + 0xd8) + 8) + 8);
          iVar3 = (**(code **)(*plVar21 + 0x18))(plVar21,"RHU_02_joint");
          param_1[0x141] = lVar11;
        }
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0xd8) == 0)) goto LAB_71030852c8;
        if (iVar3 == -1) {
          iVar3 = 0;
        }
        else {
          (**(code **)(**(long **)(*(long *)(*(long *)(lVar11 + 0xd8) + 8) + 8) + 0x10))();
        }
        goto LAB_71030852cc;
      }
      break;
    }
  }
  param_1[0x141] = 0;
LAB_71030852c8:
  iVar3 = -1;
LAB_71030852cc:
  lVar11 = param_1[0x154];
  *(int *)(param_1 + 0x142) = iVar3;
  *(undefined1 *)(param_1 + 0x14c) = 0;
  param_1[0x145] = 0;
  param_1[0x144] = 0x3f800000;
  param_1[0x147] = 0;
  param_1[0x146] = 0x3f80000000000000;
  param_1[0x149] = 0x3f800000;
  param_1[0x148] = 0;
  param_1[0x14b] = 0x3f80000000000000;
  param_1[0x14a] = 0;
  if (lVar11 == 0) {
    plVar18 = (long *)(param_1[0x62] + 0xd0);
    puVar4 = (undefined8 *)(param_1[0x62] + 0xd8);
    for (plVar21 = (long *)*plVar18; plVar21 != (long *)*puVar4; plVar21 = plVar21 + 2) {
      if ((*(uint *)(plVar21 + 1) < 2) &&
         (lVar11 = *plVar21, *(long *)(lVar11 + 0x68) == 0x7d5651d04)) {
        param_1[0x154] = lVar11;
        if (lVar11 == 0) goto LAB_7103085504;
        goto LAB_71030852ec;
      }
    }
    param_1[0x154] = 0;
LAB_7103085510:
    for (plVar18 = (long *)*plVar18; plVar18 != (long *)*puVar4; plVar18 = plVar18 + 2) {
      if ((*(uint *)(plVar18 + 1) < 2) &&
         (lVar11 = *plVar18, *(long *)(lVar11 + 0x68) == 0x7d5651d04)) {
        param_1[0x154] = lVar11;
        if (lVar11 == 0) goto LAB_7103085558;
        goto LAB_7103085350;
      }
    }
    param_1[0x154] = 0;
  }
  else {
LAB_71030852ec:
    if (lVar11 != 0) {
      if (*(char *)(lVar11 + 0xe0) == '\0') {
LAB_7103085320:
        if (*(char *)(lVar11 + 0xe0) != '\0') {
          ppuVar9 = (undefined **)0x1;
          (**(code **)(**(long **)(lVar11 + 0x90) + 0x180))(*(long **)(lVar11 + 0x90),0x111e04915e);
          lVar11 = param_1[0x154];
        }
      }
      else {
        ppuVar9 = (undefined **)0x1;
        (**(code **)(**(long **)(lVar11 + 0x90) + 0x180))(*(long **)(lVar11 + 0x90),0x11870dc0e4);
        lVar11 = param_1[0x154];
        if (lVar11 != 0) goto LAB_7103085320;
      }
      if (lVar11 == 0) {
LAB_7103085504:
        plVar18 = (long *)(param_1[0x62] + 0xd0);
        puVar4 = (undefined8 *)(param_1[0x62] + 0xd8);
        goto LAB_7103085510;
      }
LAB_7103085350:
      if (lVar11 != 0) {
        if (*(char *)(lVar11 + 0xe0) != '\0') {
          ppuVar9 = (undefined **)0x1;
          (**(code **)(**(long **)(lVar11 + 0x90) + 0x180))(*(long **)(lVar11 + 0x90),0x11e30f5907);
          lVar11 = param_1[0x154];
          if (lVar11 == 0) goto LAB_7103085558;
        }
        if (*(char *)(lVar11 + 0xe0) != '\0') {
          ppuVar9 = (undefined **)0x0;
          (**(code **)(**(long **)(lVar11 + 0x90) + 0x180))(*(long **)(lVar11 + 0x90),0x117a0608bd);
        }
      }
    }
  }
LAB_7103085558:
  for (puVar14 = *(ulong **)(param_1[0x62] + 0xd0); puVar14 != *(ulong **)(param_1[0x62] + 0xd8);
      puVar14 = puVar14 + 2) {
    if (((uint)puVar14[1] < 2) && (uVar13 = *puVar14, *(long *)(uVar13 + 0x68) == 0x17ad4910ac))
    goto LAB_71030855a0;
  }
  uVar13 = 0;
LAB_71030855a0:
  FUN_71030888f0(uVar13,0);
  FUN_710260fdd0(0,uVar13,1);
  if (uVar13 != 0) {
    if ((*(char *)(uVar13 + 0xe0) != '\0') && (*(long *)(uVar13 + 200) != 0)) {
      *(undefined2 *)(*(long *)(uVar13 + 200) + 0x30) = 0x101;
    }
    if (*(long *)(uVar13 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(uVar13 + 0xd8) + 0x21) = 1;
    }
    if (*(char *)(uVar13 + 0xe0) != '\0') {
      *(undefined1 *)(*(long *)(uVar13 + 0xb0) + 0x10) = 0;
    }
  }
  for (puVar14 = *(ulong **)(param_1[0x62] + 0xd0); puVar14 != *(ulong **)(param_1[0x62] + 0xd8);
      puVar14 = puVar14 + 2) {
    if (((uint)puVar14[1] < 2) && (uVar13 = *puVar14, *(long *)(uVar13 + 0x68) == 0x177299394f))
    goto LAB_7103085640;
  }
  uVar13 = 0;
LAB_7103085640:
  FUN_71030888f0(uVar13,0);
  fVar28 = 0.0;
  FUN_710260fdd0(0,uVar13,1);
  if (uVar13 != 0) {
    if ((*(char *)(uVar13 + 0xe0) != '\0') && (*(long *)(uVar13 + 200) != 0)) {
      *(undefined2 *)(*(long *)(uVar13 + 200) + 0x30) = 0x101;
    }
    if (*(long *)(uVar13 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(uVar13 + 0xd8) + 0x21) = 1;
    }
    if (*(char *)(uVar13 + 0xe0) != '\0') {
      *(undefined1 *)(*(long *)(uVar13 + 0xb0) + 0x10) = 0;
    }
  }
  lVar11 = param_1[0x102] - param_1[0x101];
  pppppppplVar15 = (long ********)(lVar11 >> 5);
  if (lVar11 == 0) {
    pppppppplVar15 = (long ********)0x1;
  }
  lVar12 = FUN_710392e290(0x10,pppppppplVar15,(long ****)ppuVar9,ppppbVar10,(long ****)param_5,
                          param_6,param_7,param_8);
  if (lVar12 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      ppppppppplVar7 = &local_78;
      local_78 = pppppppplVar15;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar13 & 1) != 0) &&
         (lVar12 = FUN_710392e290(0x10,pppppppplVar15,(long ****)ppppppppplVar7,ppppbVar10,
                                  (long ****)param_5,param_6,param_7,param_8), lVar12 != 0))
      goto LAB_7103085700;
    }
    lVar12 = 0;
  }
LAB_7103085700:
  uVar13 = param_1[0x12d];
  param_1[0x12d] = lVar12;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  if (lVar11 != 0) {
    pppppppplVar15 = (long ********)0x0;
    do {
      *(undefined1 *)(param_1[0x12d] + (long)pppppppplVar15) = 0;
      pppppppplVar15 = (long ********)((long)pppppppplVar15 + 1);
    } while (pppppppplVar15 < (long ********)(lVar11 >> 5));
  }
  pfVar16 = (float *)param_1[0xf8];
  pfVar19 = (float *)param_1[0xf9];
  *(undefined4 *)((long)param_1 + 0x734) = 0;
  if (pfVar16 != pfVar19) {
    uVar20 = (long)pfVar19 + (-4 - (long)pfVar16);
    uVar2 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
    uVar13 = (ulong)uVar2 & 3;
    if ((uVar2 & 3) == 0) {
      fVar28 = 0.0;
    }
    else {
      fVar28 = 0.0;
      lVar11 = -uVar13;
      pfVar22 = pfVar16;
      do {
        fVar28 = fVar28 + *pfVar22;
        lVar11 = lVar11 + 1;
        *(float *)((long)param_1 + 0x734) = fVar28;
        pfVar22 = pfVar22 + 1;
      } while (lVar11 != 0);
      pfVar16 = pfVar16 + uVar13;
    }
    if (0xb < uVar20) {
      do {
        fVar30 = *pfVar16;
        *(float *)((long)param_1 + 0x734) = fVar28 + fVar30;
        fVar28 = fVar28 + fVar30 + pfVar16[1];
        *(float *)((long)param_1 + 0x734) = fVar28;
        fVar28 = fVar28 + pfVar16[2];
        *(float *)((long)param_1 + 0x734) = fVar28;
        pfVar22 = pfVar16 + 3;
        pfVar16 = pfVar16 + 4;
        fVar28 = fVar28 + *pfVar22;
        *(float *)((long)param_1 + 0x734) = fVar28;
      } while (pfVar16 != pfVar19);
    }
    fVar28 = fVar28 * 60.0;
  }
  *(float *)((long)param_1 + 0x734) = fVar28;
  if ((param_1[0xf1] & 0xffffffffffU) != 0) {
    for (plVar21 = *(long **)(param_1[0x62] + 0xd0); plVar21 != *(long **)(param_1[0x62] + 0xd8);
        plVar21 = plVar21 + 2) {
      if ((*(uint *)(plVar21 + 1) < 2) &&
         (lVar11 = *plVar21, (param_1[0xf1] & 0xffffffffffU) == *(ulong *)(lVar11 + 0x68))) {
        param_1[0x14f] = lVar11;
        if (lVar11 == 0) goto LAB_710308581c;
        *(byte *)(lVar11 + 0x118) = *(byte *)(lVar11 + 0x118) | 1;
        lVar11 = param_1[0x14f];
        if (lVar11 == 0) goto LAB_710308581c;
        uVar29 = 0;
        if ((*(char *)(lVar11 + 0xe0) != '\0') && (uVar29 = 0, *(long *)(lVar11 + 200) != 0)) {
          uVar29 = *(undefined4 *)(*(long *)(lVar11 + 200) + 0x34);
        }
        *(undefined4 *)((long)param_1 + 0xa84) = uVar29;
        uVar29 = 0x3f800000;
        if ((*(char *)(lVar11 + 0xe0) != '\0') &&
           (uVar29 = 0x3f800000, *(long *)(lVar11 + 200) != 0)) {
          uVar29 = *(undefined4 *)(*(long *)(lVar11 + 200) + 8);
        }
        goto LAB_7103085824;
      }
    }
  }
  param_1[0x14f] = 0;
LAB_710308581c:
  *(undefined4 *)((long)param_1 + 0xa84) = 0;
  uVar29 = 0x3f800000;
LAB_7103085824:
  *(undefined4 *)(param_1 + 0x150) = uVar29;
  return;
}

