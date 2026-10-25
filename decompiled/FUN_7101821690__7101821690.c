// addr:      7101821690
// offset:    0x1821690
// name:      FUN_7101821690
// mangled:   
// signature: undefined __cdecl FUN_7101821690(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101821690(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  long ***ppplVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  void *pvVar17;
  long *plVar18;
  long ********pppppppplVar19;
  ulong uVar20;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 uVar21;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  long *********ppppppppplVar22;
  long ****pppplVar23;
  undefined **ppuVar24;
  byte ****ppppbVar25;
  long ****pppplVar26;
  undefined8 uVar27;
  char *pcVar28;
  code *pcVar29;
  long lVar30;
  byte *pbVar31;
  int iVar32;
  ulong *puVar33;
  ulong *puVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  uint uVar38;
  ulong uVar39;
  long lVar40;
  undefined8 *puVar41;
  long *plVar42;
  long *plVar43;
  long ***ppplVar44;
  long ****pppplVar45;
  long *********__n;
  void *pvVar46;
  long *********ppppppppplVar47;
  undefined1 auVar48 [16];
  undefined8 local_210;
  ulong local_208;
  undefined7 local_200;
  undefined1 uStack_1f9;
  undefined1 uStack_1f8;
  undefined1 uStack_1f7;
  undefined1 local_1f6;
  undefined4 local_1f5;
  undefined2 local_1f1;
  undefined1 local_1ef;
  long alStack_1e0 [4];
  long *local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  undefined **local_e8;
  ulong local_e0;
  long ***local_d8;
  long ***local_d0;
  long ***ppplStack_c8;
  long ********local_c0;
  long ********local_b8;
  void *local_b0;
  
  lVar11 = FUN_710392e290(0x10,0xf0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar21 = extraout_x1;
  if (lVar11 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
      local_210 = (undefined **)&DAT_000000f0;
      param_3 = (long *********)&local_210;
      auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      uVar21 = auVar48._8_8_;
      if (((auVar48._0_8_ & 1) != 0) &&
         (lVar11 = FUN_710392e290(0x10,0xf0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), uVar21 = extraout_x1_00, lVar11 != 0))
      goto LAB_7101821718;
    }
    lVar11 = 0;
  }
LAB_7101821718:
  *(undefined1 *)(lVar11 + 0xb4) = 0;
  *(undefined8 *)(lVar11 + 0x10) = 0;
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined4 *)(lVar11 + 0xb0) = 0xffffffff;
  *(long *)lVar11 = lVar11;
  *(undefined8 *)(lVar11 + 8) = 0;
  *(undefined8 *)(lVar11 + 0xa0) = 0;
  *(undefined8 *)(lVar11 + 0xa8) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x90) = 0;
  *(undefined8 *)(lVar11 + 0x98) = 0;
  *(undefined8 *)(lVar11 + 0x80) = 0;
  *(undefined8 *)(lVar11 + 0x88) = 0;
  *(undefined8 *)(lVar11 + 0x70) = 0;
  *(undefined8 *)(lVar11 + 0x78) = 0;
  *(undefined8 *)(lVar11 + 0x60) = 0;
  *(undefined8 *)(lVar11 + 0x68) = 0;
  *(undefined8 *)(lVar11 + 0x50) = 0;
  *(undefined8 *)(lVar11 + 0x58) = 0;
  *(undefined8 *)(lVar11 + 0x40) = 0;
  *(undefined8 *)(lVar11 + 0x48) = 0;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined8 *)(lVar11 + 0x38) = 0;
  *(undefined8 *)(lVar11 + 0x20) = 0;
  *(undefined8 *)(lVar11 + 0x28) = 0;
  FUN_7103763c70((undefined8 *)(lVar11 + 0xb8),uVar21,(long ****)param_3,param_4,param_5,param_6,
                 param_7,param_8);
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar21 = extraout_x1_01;
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
      local_210 = (undefined **)&DAT_00000080;
      param_3 = (long *********)&local_210;
      auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      uVar21 = auVar48._8_8_;
      if (((auVar48._0_8_ & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), uVar21 = extraout_x1_02, puVar12 != (undefined8 *)0x0))
      goto LAB_71018217ac;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_71018217ac:
  *puVar12 = &PTR_FUN_7105181b40;
  puVar12[2] = 0;
  puVar12[1] = puVar12 + 2;
  puVar12[5] = 0;
  puVar12[3] = 0;
  puVar12[4] = puVar12 + 5;
  puVar12[8] = 0;
  puVar12[6] = 0;
  puVar12[7] = puVar12 + 8;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  *(undefined4 *)(puVar12 + 0xd) = 2;
  *(undefined4 *)(puVar12 + 0xf) = 0;
  puVar12[0xe] = 0;
  puVar12[9] = 0;
  puVar12[10] = puVar12 + 0xb;
  *(undefined8 **)(lVar11 + 200) = puVar12;
  *(undefined8 *)(lVar11 + 0xd0) = 0;
  lVar15 = DAT_710532f840;
  *(undefined8 *)(lVar11 + 0xd8) = *(undefined8 *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  uVar27 = *(undefined8 *)(*(long *)(lVar15 + 8) + 0xc0);
  *(undefined4 *)(lVar11 + 0xe8) = 0;
  *(undefined1 *)(lVar11 + 0xec) = 0;
  *(code **)(lVar11 + 0x28) = FUN_7101820db0;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(code **)(lVar11 + 0x48) = FUN_7101821360;
  *(undefined8 *)(lVar11 + 0x50) = 0;
  *(undefined8 *)(lVar11 + 0xe0) = uVar27;
  *(code **)(lVar11 + 0x38) = FUN_71018211c0;
  *(undefined8 *)(lVar11 + 0x40) = 0;
  if (0x12 < *(uint *)(lVar11 + 0xa4)) goto LAB_7101822da0;
  *(undefined4 *)(lVar11 + (long)(int)*(uint *)(lVar11 + 0xa4) * 4 + 0x58) = 0;
  uVar39 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar11;
  if (uVar39 != 0) {
    lVar11 = *(long *)(uVar39 + 0xd0);
    *(undefined8 *)(uVar39 + 0xd0) = 0;
    if (lVar11 != 0) {
      FUN_71032cad20(lVar11);
      uVar21 = extraout_x1_03;
    }
    FUN_710323b9e0(*(long *)(uVar39 + 200),uVar21,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar13 = *(long **)(uVar39 + 200);
    *(undefined8 *)(uVar39 + 200) = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uVar14 = *(ulong *)(uVar39 + 0xc0);
    *(undefined ***)(uVar39 + 0xb8) = &PTR_FUN_710523d7d8;
    *(undefined8 *)(uVar39 + 0xc0) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar39);
    lVar11 = *(long *)(param_1 + 0x58);
  }
  plVar13 = (long *)(lVar11 + 200);
  lVar15 = *plVar13;
  ppppppppplVar22 = (long *********)(long)*(int *)(lVar15 + 0x70);
  ppppbVar25 = (byte ****)(ulong)*(uint *)(lVar15 + 0x68);
  pppplVar26 = (long ****)0x0;
  FUN_710323beb0(lVar15,(ulong *)&DAT_71045444e8,(long)ppppppppplVar22,(ulong)ppppbVar25,
                 (long ****)0x0,param_6,param_7,param_8);
  lVar37 = *(long *)(DAT_710532f730 + 8);
  lVar15 = *(long *)(lVar37 + 0x378);
  lVar30 = *(long *)(lVar15 + 8);
  pcVar28 = *(char **)(lVar30 + 0x20);
  if ((*pcVar28 == '\f') && (iVar10 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar32 = 0;
    uVar39 = *(ulong *)(lVar30 + 0x48) & 0xffffffffff;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar10 + iVar32;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar30 + 0x18) + 0x28) + (long)*(int *)(pcVar28 + 5) +
                       (long)iVar2 * 8);
      uVar14 = *(ulong *)(*(long *)(*(long *)(lVar30 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar14 == uVar39) {
        uVar38 = puVar1[1];
        if ((int)uVar38 < 0) goto LAB_710182198c;
        pbVar31 = (byte *)(pcVar28 + (int)uVar38);
        break;
      }
      iVar8 = iVar2 + -1;
      if (uVar14 <= uVar39) {
        iVar32 = iVar2 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
    } while (iVar32 <= iVar10);
  }
  else {
LAB_710182198c:
    pbVar31 = &DAT_7104742dbb;
  }
  uVar21 = extraout_x1_04;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    uVar38 = 0;
    while ((uVar39 = FUN_710328d580(lVar15,uVar38), uVar21 = extraout_x1_05,
           (uVar39 & 0xff00000000000000) == 0x6f00000000000000 && ((uVar39 & 0xffffffffff) != 0))) {
      lVar15 = *(long *)(DAT_710532f730 + 8);
      FUN_7103239920((uint *)&local_210,0x29,0);
      FUN_710328d780((uint *)&local_c0,*(long *)(lVar15 + 0x378),uVar39);
      ppppppppplVar22 = &local_b8;
      FUN_7103239d20((uint *)&local_210,"%s.bntx");
      if (local_210._4_4_ == 0) {
        uVar39 = 0;
      }
      else {
        uVar36 = 0xffffffff;
        puVar34 = &local_208;
        do {
          puVar33 = (ulong *)((long)puVar34 + 1);
          bVar3 = (byte)*puVar34;
          uVar35 = bVar3 + 0x20;
          if (0x19 < bVar3 - 0x41) {
            uVar35 = (uint)bVar3;
          }
          uVar36 = (&DAT_7104754084)[(uVar35 ^ uVar36) & 0xff] ^ uVar36 >> 8;
          puVar34 = puVar33;
        } while (puVar33 < (ulong *)((long)&local_208 + (ulong)local_210._4_4_));
        uVar39 = (ulong)~uVar36;
      }
      local_210 = (undefined **)(uVar39 | ((long)(int)local_210._4_4_ & 0xffU) << 0x20);
      uVar21 = extraout_x1_06;
      if ((long ********)local_210 != (long ********)0x0) {
        lVar15 = *plVar13;
        ppppppppplVar22 = (long *********)(long)*(int *)(lVar15 + 0x70);
        ppppbVar25 = (byte ****)(ulong)*(uint *)(lVar15 + 0x68);
        FUN_710323c4e0(lVar15,&local_210,ppppppppplVar22,ppppbVar25,pppplVar26,param_6,param_7,
                       param_8);
        uVar21 = extraout_x1_07;
      }
      lVar15 = *(long *)(lVar37 + 0x378);
      lVar30 = *(long *)(lVar15 + 8);
      pcVar28 = *(char **)(lVar30 + 0x20);
      pbVar31 = &DAT_7104742dbb;
      if ((*pcVar28 == '\f') && (iVar10 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
        iVar32 = 0;
        uVar39 = *(ulong *)(lVar30 + 0x48) & 0xffffffffff;
        do {
          iVar2 = iVar10 + iVar32;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(*(long *)(lVar30 + 0x18) + 0x28) + (long)*(int *)(pcVar28 + 5)
                           + (long)iVar2 * 8);
          uVar14 = *(ulong *)(*(long *)(*(long *)(lVar30 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
          if (uVar14 == uVar39) {
            uVar36 = puVar1[1];
            if (-1 < (int)uVar36) {
              pbVar31 = (byte *)(pcVar28 + (int)uVar36);
            }
            break;
          }
          iVar8 = iVar2 + -1;
          if (uVar14 <= uVar39) {
            iVar32 = iVar2 + 1;
            iVar8 = iVar10;
          }
          iVar10 = iVar8;
        } while (iVar32 <= iVar10);
      }
      if ((1 < *pbVar31 - 0xb) || (uVar38 = uVar38 + 1, *(int *)(pbVar31 + 1) <= (int)uVar38))
      break;
    }
  }
  lVar15 = *plVar13;
  uVar39 = FUN_710323cb80(lVar15,uVar21,ppppppppplVar22,ppppbVar25,pppplVar26,param_6,param_7,
                          param_8);
  while ((uVar39 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar39 = FUN_710323cb80(lVar15,extraout_x1_08,ppppppppplVar22,ppppbVar25,pppplVar26,param_6,
                            param_7,param_8);
  }
  puVar12 = *(undefined8 **)(param_2 + 0xa8);
  if (((DAT_7105324848 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_7105324848), iVar10 != 0)) {
    if (((DAT_7105324748 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_7105324748), iVar10 != 0))
    {
      if (((DAT_7105324750 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&DAT_7105324750), iVar10 != 0)) {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105324760 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105324748);
    }
    DAT_7105324850 = &DAT_7105324760;
    __cxa_guard_release(&DAT_7105324848);
  }
  for (puVar16 = (undefined8 *)(**(code **)*puVar12)(puVar12);
      (undefined8 **)puVar16 != &DAT_7105324850; puVar16 = (undefined8 *)*puVar16) {
  }
  lVar15 = puVar12[1];
  puVar12 = *(undefined8 **)(param_2 + 0xa8);
  if (((DAT_7105324848 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_7105324848), iVar10 != 0)) {
    if (((DAT_7105324748 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_7105324748), iVar10 != 0))
    {
      if (((DAT_7105324750 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&DAT_7105324750), iVar10 != 0)) {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105324760 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105324748);
    }
    DAT_7105324850 = &DAT_7105324760;
    __cxa_guard_release(&DAT_7105324848);
  }
  for (puVar16 = (undefined8 *)(**(code **)*puVar12)(puVar12);
      (undefined8 **)puVar16 != &DAT_7105324850; puVar16 = (undefined8 *)*puVar16) {
  }
  lVar30 = puVar12[1];
  puVar12 = *(undefined8 **)(param_2 + 0xa8);
  if (((DAT_7105324848 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_7105324848), iVar10 != 0)) {
    if (((DAT_7105324748 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_7105324748), iVar10 != 0))
    {
      if (((DAT_7105324750 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&DAT_7105324750), iVar10 != 0)) {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105324760 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105324748);
    }
    DAT_7105324850 = &DAT_7105324760;
    __cxa_guard_release(&DAT_7105324848);
  }
  for (puVar16 = (undefined8 *)(**(code **)*puVar12)(puVar12);
      (undefined8 **)puVar16 != &DAT_7105324850; puVar16 = (undefined8 *)*puVar16) {
  }
  uVar4 = *(undefined1 *)puVar12[1];
  *(undefined1 *)(lVar11 + 0xec) = uVar4;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar22,ppppbVar25,pppplVar26,param_6,
                           param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
      local_210 = (undefined **)&DAT_00000088;
      ppppppppplVar22 = (long *********)&local_210;
      uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar39 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar22,ppppbVar25,pppplVar26,
                                   param_6,param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101821cb4;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101821cb4:
  *puVar12 = &PTR_FUN_71050a9470;
  puVar12[1] = 0;
  puVar12[0xc] = 0;
  puVar12[0xd] = 0x1ffffffff;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *(undefined1 *)(puVar12 + 0xb) = 0;
  puVar12[0xf] = plVar13;
  *(undefined1 *)(puVar12 + 0xe) = 1;
  puVar12[9] = 0;
  puVar12[10] = 0;
  lVar37 = FUN_710392e290(0x10,0x168,(long ****)ppppppppplVar22,ppppbVar25,pppplVar26,param_6,
                          param_7,param_8);
  if (lVar37 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
      local_210 = (undefined **)&DAT_00000168;
      ppppppppplVar22 = (long *********)&local_210;
      uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar39 & 1) != 0) &&
         (lVar37 = FUN_710392e290(0x10,0x168,(long ****)ppppppppplVar22,ppppbVar25,pppplVar26,
                                  param_6,param_7,param_8), lVar37 != 0)) goto LAB_7101821d3c;
    }
    lVar37 = 0;
  }
LAB_7101821d3c:
  *(undefined8 *)(lVar37 + 0x10) = 0;
  *(undefined8 *)(lVar37 + 0x18) = 0;
  *(undefined4 *)(lVar37 + 0xd0) = 0xffffffff;
  *(long *)lVar37 = lVar37;
  *(undefined8 *)(lVar37 + 8) = 0;
  *(undefined1 *)(lVar37 + 0xd4) = 0;
  *(long **)(lVar37 + 0xd8) = plVar13;
  *(undefined8 *)(lVar37 + 0xc0) = 0;
  *(undefined8 *)(lVar37 + 200) = 0xffffffff;
  *(undefined8 *)(lVar37 + 0xb0) = 0;
  *(undefined8 *)(lVar37 + 0xb8) = 0;
  *(undefined8 *)(lVar37 + 0xa0) = 0;
  *(undefined8 *)(lVar37 + 0xa8) = 0;
  *(undefined8 *)(lVar37 + 0x90) = 0;
  *(undefined8 *)(lVar37 + 0x98) = 0;
  *(undefined8 *)(lVar37 + 0x80) = 0;
  *(undefined8 *)(lVar37 + 0x88) = 0;
  *(undefined8 *)(lVar37 + 0x70) = 0;
  *(undefined8 *)(lVar37 + 0x78) = 0;
  *(undefined8 *)(lVar37 + 0x60) = 0;
  *(undefined8 *)(lVar37 + 0x68) = 0;
  *(undefined8 *)(lVar37 + 0x50) = 0;
  *(undefined8 *)(lVar37 + 0x58) = 0;
  *(undefined8 *)(lVar37 + 0x40) = 0;
  *(undefined8 *)(lVar37 + 0x48) = 0;
  *(undefined8 *)(lVar37 + 0x30) = 0;
  *(undefined8 *)(lVar37 + 0x38) = 0;
  *(undefined8 *)(lVar37 + 0x20) = 0;
  *(undefined8 *)(lVar37 + 0x28) = 0;
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar22,ppppbVar25,pppplVar26,param_6,param_7,
                           param_8);
  uVar21 = extraout_x1_09;
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
      local_210 = (undefined **)&DAT_00000008;
      ppppppppplVar22 = (long *********)&local_210;
      auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      uVar21 = auVar48._8_8_;
      if (((auVar48._0_8_ & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar22,ppppbVar25,pppplVar26,param_6,
                                   param_7,param_8), uVar21 = extraout_x1_10,
         puVar16 != (undefined8 *)0x0)) goto LAB_7101821ddc;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_7101821ddc:
  FUN_7103773200(puVar16,uVar21,(long ****)ppppppppplVar22,ppppbVar25,pppplVar26,param_6,param_7,
                 param_8);
  pppplVar45 = (long ****)(lVar37 + 0xf8);
  *pppplVar45 = (long ***)&PTR_FUN_71050a9430;
  *(undefined8 **)(lVar37 + 0xe0) = puVar16;
  *(undefined1 *)(lVar37 + 0xe8) = 1;
  plVar13 = (long *)(lVar37 + 0xf0);
  *plVar13 = 0;
  ppppppppplVar47 = (long *********)(lVar37 + 0x100);
  *ppppppppplVar47 = (long ********)0x0;
  *(undefined8 *)(lVar37 + 0x108) = 0;
  *(undefined8 *)(lVar37 + 0x110) = 0;
  *(long *)(lVar37 + 0x118) = lVar15 + 4;
  *(undefined4 *)(lVar37 + 0x120) = 0;
  *(long *)(lVar37 + 0x128) = lVar30 + 8;
  *(undefined4 *)(lVar37 + 0x130) = 0;
  *(undefined8 *)(lVar37 + 0x138) = 0;
  *(undefined8 *)(lVar37 + 0x140) = 0;
  *(undefined8 *)(lVar37 + 0x148) = 0;
  FUN_7103776290((undefined8 *)(lVar37 + 0x150),extraout_x1_11,(long ****)ppppppppplVar22,ppppbVar25
                 ,pppplVar26,param_6,param_7,param_8);
  *(code **)(lVar37 + 0x38) = FUN_7101a98460;
  *(undefined8 *)(lVar37 + 0x40) = 0;
  *(undefined1 *)(lVar37 + 0x160) = uVar4;
  *(code **)(lVar37 + 0x48) = FUN_7101a985d0;
  *(undefined8 *)(lVar37 + 0x50) = 0;
  *(code **)(lVar37 + 0x58) = FUN_7101a995b0;
  *(undefined8 *)(lVar37 + 0x60) = 0;
  *(code **)(lVar37 + 0x28) = FUN_7101a98450;
  *(undefined8 *)(lVar37 + 0x30) = 0;
  *(code **)(lVar37 + 0x68) = FUN_7101a98450;
  *(undefined8 *)(lVar37 + 0x70) = 0;
  if (0x12 < *(uint *)(lVar37 + 0xc4)) {
LAB_7101822da0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar37 + (long)(int)*(uint *)(lVar37 + 0xc4) * 4 + 0x78) = 0;
  puVar12[0x10] = lVar37;
  puVar16 = (undefined8 *)(lVar37 + 0xe0);
  ppppppppplVar22 = (long *********)&DAT_71045444e8;
  ppppbVar25 = (byte ****)0x1;
  FUN_71032cbf30(puVar16,**(long **)(lVar37 + 0xd8),(ulong *)&DAT_71045444e8,(byte ****)0x1,
                 pppplVar26,param_6,param_7,param_8);
  lVar30 = *(long *)(DAT_710532f730 + 8);
  (*(undefined8 **)(lVar37 + 0x128))[1] = **(undefined8 **)(lVar37 + 0x128);
  lVar40 = *(long *)(lVar30 + 0x378);
  lVar15 = *(long *)(lVar40 + 8);
  pcVar28 = *(char **)(lVar15 + 0x20);
  if ((*pcVar28 == '\f') && (iVar10 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar32 = 0;
    uVar39 = *(ulong *)(lVar15 + 0x48) & 0xffffffffff;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar10 + iVar32;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar15 + 0x18) + 0x28) + (long)*(int *)(pcVar28 + 5) +
                       (long)iVar2 * 8);
      uVar14 = *(ulong *)(*(long *)(*(long *)(lVar15 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar14 == uVar39) {
        uVar38 = puVar1[1];
        if ((int)uVar38 < 0) goto LAB_7101821f54;
        pbVar31 = (byte *)(pcVar28 + (int)uVar38);
        break;
      }
      iVar8 = iVar2 + -1;
      if (uVar14 <= uVar39) {
        iVar32 = iVar2 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
    } while (iVar32 <= iVar10);
  }
  else {
LAB_7101821f54:
    pbVar31 = &DAT_7104742dbb;
  }
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    uVar38 = 0;
    do {
      plVar43 = *(long **)(lVar37 + 0xd8);
      uVar39 = FUN_710328d580(lVar40,uVar38);
      if (((uVar39 & 0xff00000000000000) == 0x6f00000000000000) && ((uVar39 & 0xffffffffff) != 0)) {
        lVar15 = *(long *)(DAT_710532f730 + 8);
        FUN_7103239920((uint *)&local_210,0x29,0);
        FUN_710328d780((uint *)&local_c0,*(long *)(lVar15 + 0x378),uVar39);
        ppppppppplVar22 = &local_b8;
        FUN_7103239d20((uint *)&local_210,"%s.bntx");
        if (local_210._4_4_ == 0) {
          uVar39 = 0;
        }
        else {
          uVar36 = 0xffffffff;
          puVar34 = &local_208;
          do {
            puVar33 = (ulong *)((long)puVar34 + 1);
            bVar3 = (byte)*puVar34;
            uVar35 = bVar3 + 0x20;
            if (0x19 < bVar3 - 0x41) {
              uVar35 = (uint)bVar3;
            }
            uVar36 = (&DAT_7104754084)[(uVar35 ^ uVar36) & 0xff] ^ uVar36 >> 8;
            puVar34 = puVar33;
          } while (puVar33 < (ulong *)((long)&local_208 + (ulong)local_210._4_4_));
          uVar39 = (ulong)~uVar36;
        }
        local_210 = (undefined **)(uVar39 | ((long)(int)local_210._4_4_ & 0xffU) << 0x20);
        if ((long ********)local_210 != (long ********)0x0) {
          lVar15 = *plVar43;
          ppppppppplVar22 = (long *********)(long)*(int *)(lVar15 + 0x70);
          ppppbVar25 = (byte ****)(ulong)*(uint *)(lVar15 + 0x68);
          FUN_710323c4e0(lVar15,&local_210,ppppppppplVar22,ppppbVar25,pppplVar26,param_6,param_7,
                         param_8);
        }
      }
      else {
        local_210 = (undefined **)0x0;
      }
      lVar40 = *(long *)(lVar30 + 0x378);
      lVar15 = *(long *)(lVar40 + 8);
      pcVar28 = *(char **)(lVar15 + 0x20);
      pbVar31 = &DAT_7104742dbb;
      if ((*pcVar28 == '\f') && (iVar10 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
        iVar32 = 0;
        uVar39 = *(ulong *)(lVar15 + 0x48) & 0xffffffffff;
        do {
          iVar2 = iVar10 + iVar32;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(*(long *)(lVar15 + 0x18) + 0x28) + (long)*(int *)(pcVar28 + 5)
                           + (long)iVar2 * 8);
          uVar14 = *(ulong *)(*(long *)(*(long *)(lVar15 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
          if (uVar14 == uVar39) {
            uVar36 = puVar1[1];
            if (-1 < (int)uVar36) {
              pbVar31 = (byte *)(pcVar28 + (int)uVar36);
            }
            break;
          }
          iVar8 = iVar2 + -1;
          if (uVar14 <= uVar39) {
            iVar32 = iVar2 + 1;
            iVar8 = iVar10;
          }
          iVar10 = iVar8;
        } while (iVar32 <= iVar10);
      }
    } while ((*pbVar31 - 0xb < 2) && (uVar38 = uVar38 + 1, (int)uVar38 < *(int *)(pbVar31 + 1)));
  }
  uVar39 = FUN_710328d580(lVar40,0);
  if (((uVar39 & 0xff00000000000000) == 0x6f00000000000000) && ((uVar39 & 0xffffffffff) != 0)) {
    uVar38 = 0;
    do {
      uVar39 = FUN_710328d580(lVar40,uVar38);
      lVar15 = DAT_710532f730;
      uVar14 = FUN_710328ee30(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x378),uVar39);
      if (((int)uVar14 != -1) && (*(char *)*DAT_7105314510 == '\0')) {
        puVar41 = *(undefined8 **)(**(long **)((char *)*DAT_7105314510 + 8) + 0x28);
        uVar36 = *(uint *)(puVar41 + 1);
        if (0x28 < uVar36) goto LAB_7101822da0;
        uVar14 = FUN_710328ee30(*(long *)(*(long *)(*(long *)(lVar15 + 8) + (long)(int)uVar36 * 8 +
                                                   8) + 8),uVar39);
        if (((uint)uVar14 < 0x20) && ((*(uint *)*puVar41 & 1 << (ulong)((uint)uVar14 & 0x1f)) != 0))
        {
          puVar1 = *(uint **)(lVar37 + 0x140);
          if (puVar1 == *(uint **)(lVar37 + 0x148)) {
            pvVar46 = *(void **)(lVar37 + 0x138);
            __n = (long *********)((long)puVar1 - (long)pvVar46);
            uVar14 = ((long)__n >> 2) + 1;
            if (uVar14 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar15 = (long)*(uint **)(lVar37 + 0x148) - (long)pvVar46;
            if ((ulong)(lVar15 >> 2) < 0x1fffffffffffffff) {
              uVar20 = lVar15 >> 1;
              if (uVar14 <= uVar20) {
                uVar14 = uVar20;
              }
              if (uVar14 != 0) {
                if (uVar14 >> 0x3e == 0) goto LAB_7101822280;
                goto LAB_7101822da0;
              }
LAB_71018222e4:
              pvVar17 = (void *)0x0;
            }
            else {
              uVar14 = 0x3fffffffffffffff;
LAB_7101822280:
              pppppppplVar19 = (long ********)(uVar14 * 4);
              if (pppppppplVar19 == (long ********)0x0) {
                pppppppplVar19 = (long ********)0x1;
              }
              pvVar17 = (void *)FUN_710392e290(0x10,pppppppplVar19,(long ****)ppppppppplVar22,
                                               ppppbVar25,pppplVar26,param_6,param_7,param_8);
              if (pvVar17 == (void *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
                  ppppppppplVar22 = (long *********)&local_210;
                  local_210 = (undefined **)pppppppplVar19;
                  uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
                  if (((uVar20 & 1) != 0) &&
                     (pvVar17 = (void *)FUN_710392e290(0x10,pppppppplVar19,
                                                       (long ****)ppppppppplVar22,ppppbVar25,
                                                       pppplVar26,param_6,param_7,param_8),
                     pvVar17 != (void *)0x0)) goto LAB_71018222e8;
                }
                goto LAB_71018222e4;
              }
            }
LAB_71018222e8:
            puVar1 = (uint *)((long)pvVar17 + ((long)__n >> 2) * 4);
            *puVar1 = uVar38;
            if (0 < (long)__n) {
              memcpy(pvVar17,pvVar46,(size_t)__n);
              ppppppppplVar22 = __n;
            }
            *(void **)(lVar37 + 0x138) = pvVar17;
            *(uint **)(lVar37 + 0x140) = puVar1 + 1;
            *(void **)(lVar37 + 0x148) = (void *)((long)pvVar17 + uVar14 * 4);
            if (pvVar46 != (void *)0x0) {
              FUN_710392eb40((ulong)pvVar46);
            }
          }
          else {
            *puVar1 = uVar38;
            *(long *)(lVar37 + 0x140) = *(long *)(lVar37 + 0x140) + 4;
          }
          puVar41 = *(undefined8 **)(lVar37 + 0x128);
          puVar34 = (ulong *)puVar41[1];
          if (puVar34 == (ulong *)puVar41[2]) {
            pvVar46 = (void *)*puVar41;
            ppppppppplVar22 = (long *********)((long)puVar34 - (long)pvVar46);
            uVar14 = ((long)ppppppppplVar22 >> 3) + 1;
            if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar15 = (long)puVar41[2] - (long)pvVar46;
            if ((ulong)(lVar15 >> 3) < 0xfffffffffffffff) {
              uVar20 = lVar15 >> 2;
              if (uVar14 <= uVar20) {
                uVar14 = uVar20;
              }
              if (uVar14 != 0) {
                if (uVar14 >> 0x3d == 0) goto LAB_71018223a0;
                goto LAB_7101822da0;
              }
              uVar14 = 0;
              pvVar17 = (void *)0x0;
            }
            else {
              uVar14 = 0x1fffffffffffffff;
LAB_71018223a0:
              pppppppplVar19 = (long ********)(uVar14 * 8);
              if (pppppppplVar19 == (long ********)0x0) {
                pppppppplVar19 = (long ********)0x1;
              }
              pvVar17 = (void *)FUN_710392e290(0x10,pppppppplVar19,(long ****)ppppppppplVar22,
                                               ppppbVar25,pppplVar26,param_6,param_7,param_8);
              if (pvVar17 == (void *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
                  pppplVar23 = (long ****)&local_210;
                  local_210 = (undefined **)pppppppplVar19;
                  uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
                  if (((uVar20 & 1) != 0) &&
                     (pvVar17 = (void *)FUN_710392e290(0x10,pppppppplVar19,pppplVar23,ppppbVar25,
                                                       pppplVar26,param_6,param_7,param_8),
                     pvVar17 != (void *)0x0)) goto LAB_710182240c;
                }
                pvVar17 = (void *)0x0;
              }
            }
LAB_710182240c:
            puVar34 = (ulong *)((long)pvVar17 + ((long)ppppppppplVar22 >> 3) * 8);
            *puVar34 = uVar39;
            if (0 < (long)ppppppppplVar22) {
              memcpy(pvVar17,pvVar46,(size_t)ppppppppplVar22);
            }
            *puVar41 = pvVar17;
            puVar41[1] = puVar34 + 1;
            puVar41[2] = (void *)((long)pvVar17 + uVar14 * 8);
            if (pvVar46 != (void *)0x0) {
              FUN_710392eb40((ulong)pvVar46);
            }
          }
          else {
            *puVar34 = uVar39;
            puVar41[1] = puVar41[1] + 8;
          }
          bVar9 = FUN_710328f130(*(long *)(lVar30 + 0x378),uVar39);
          if ((bVar9) && (uVar38 < 0x20)) {
            **(uint **)**(undefined8 **)(*DAT_7105314510 + 0x278) =
                 **(uint **)**(undefined8 **)(*DAT_7105314510 + 0x278) | 1 << (ulong)(uVar38 & 0x1f)
            ;
          }
        }
      }
      lVar40 = *(long *)(lVar30 + 0x378);
      uVar38 = uVar38 + 1;
      uVar39 = FUN_710328d580(lVar40,uVar38);
    } while (((uVar39 & 0xff00000000000000) == 0x6f00000000000000) && ((uVar39 & 0xffffffffff) != 0)
            );
  }
  plVar43 = (long *)(*DAT_7105314508 + 0x5b4dd8);
  plVar42 = (long *)(*DAT_7105314508 + 0x5b4de8);
  if (*plVar42 == 0) {
    plVar18 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar22,ppppbVar25,pppplVar26,
                                     param_6,param_7,param_8);
    if (plVar18 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
        local_210 = (undefined **)&SUB_00000018;
        ppppppppplVar22 = (long *********)&local_210;
        uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
        if (((uVar39 & 1) != 0) &&
           (plVar18 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar22,ppppbVar25,
                                             pppplVar26,param_6,param_7,param_8),
           plVar18 != (long *)0x0)) goto LAB_710182255c;
      }
      plVar18 = (long *)0x0;
    }
LAB_710182255c:
    *(undefined1 *)(plVar18 + 2) = 0;
    plVar18[1] = (long)plVar43;
    lVar15 = *plVar43;
    *plVar18 = lVar15;
    *(long **)(lVar15 + 8) = plVar18;
    *plVar43 = (long)plVar18;
    *plVar42 = *plVar42 + 1;
  }
  else {
    *(byte *)(*plVar43 + 0x10) = *(byte *)(*plVar43 + 0x10) & 1;
  }
  local_210 = (undefined **)0x0;
  local_208 = 0x4248000041800000;
  local_200 = 0x101013f800000;
  uStack_1f9 = 0;
  uStack_1f8 = 0;
  uStack_1f7 = 0;
  local_1c0 = (long *)0x0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_1f6 = 1;
  local_100 = (long *)0x0;
  local_1ef = 0;
  local_1f1 = 0;
  local_1f5 = 0;
  FUN_710337e790((long)&local_210);
  pvVar46 = *(void **)(lVar37 + 0x138);
  local_c0 = (long ********)0x0;
  local_b8 = (long ********)0x0;
  local_b0 = (void *)0x0;
  ppplVar44 = (long ***)(*(long *)(lVar37 + 0x140) - (long)pvVar46);
  uVar39 = (long)ppplVar44 >> 2;
  local_210 = (undefined **)CONCAT44((int)uVar39,(uint)local_210);
  uStack_1f9 = 1;
  uStack_1f8 = 1;
  if (ppplVar44 == (long ***)0x0) {
    pppppppplVar19 = (long ********)0x0;
  }
  else {
    if (uVar39 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pppppppplVar19 =
         (long ********)
         FUN_710392e290(0x10,ppplVar44,(long ****)ppppppppplVar22,ppppbVar25,pppplVar26,param_6,
                        param_7,param_8);
    if (pppppppplVar19 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e8 = (undefined **)((ulong)local_e8 & 0xffffffff00000000);
        pppplVar23 = &local_d8;
        local_d8 = ppplVar44;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e8);
        if (((uVar14 & 1) != 0) &&
           (pppppppplVar19 =
                 (long ********)
                 FUN_710392e290(0x10,ppplVar44,pppplVar23,ppppbVar25,pppplVar26,param_6,param_7,
                                param_8), pppppppplVar19 != (long ********)0x0))
        goto LAB_7101822654;
      }
      pppppppplVar19 = (long ********)0x0;
    }
LAB_7101822654:
    local_b0 = (void *)((long)pppppppplVar19 + uVar39 * 4);
    local_c0 = pppppppplVar19;
    local_b8 = pppppppplVar19;
    if (0 < (long)ppplVar44) {
      memcpy(pppppppplVar19,pvVar46,(size_t)ppplVar44);
      local_b8 = (long ********)((long)pppppppplVar19 + (long)ppplVar44);
    }
  }
  if (&local_c0 != ppppppppplVar47) {
    FUN_7100816110(ppppppppplVar47,pppppppplVar19,(long ****)local_b8,ppppbVar25,pppplVar26,param_6,
                   param_7,param_8);
    pppppppplVar19 = local_c0;
  }
  if ((pppppppplVar19 != (long ********)0x0) &&
     (local_b8 = pppppppplVar19, pppppppplVar19 != (long ********)0x0)) {
    FUN_710392eb40((ulong)pppppppplVar19);
  }
  FUN_7103781a20(plVar13,(undefined8 *)(**(long **)(lVar37 + 0xe0) + 8),(byte ****)"scroll",
                 (byte ****)&local_210,pppplVar45,param_6,param_7,param_8);
  ppppbVar25 = (byte ****)0x1;
  ppuVar24 = (undefined **)0x0;
  FUN_7103783c10(plVar13,**(int **)(lVar37 + 0x118),0,1,pppplVar45,param_6,param_7,param_8);
  (**(code **)(**(long **)(lVar37 + 0xf0) + 0x70))(*(long **)(lVar37 + 0xf0),0);
  (**(code **)(**(long **)(lVar37 + 0xf0) + 0x60))(*(long **)(lVar37 + 0xf0),0);
  if (alStack_120 == local_100) {
    pcVar29 = *(code **)(*local_100 + 0x20);
LAB_7101822768:
    (*pcVar29)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar29 = *(code **)(*local_100 + 0x28);
    goto LAB_7101822768;
  }
  if (alStack_150 == local_130) {
    pcVar29 = *(code **)(*local_130 + 0x20);
LAB_7101822798:
    (*pcVar29)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar29 = *(code **)(*local_130 + 0x28);
    goto LAB_7101822798;
  }
  if (alStack_180 == local_160) {
    pcVar29 = *(code **)(*local_160 + 0x20);
LAB_71018227c8:
    (*pcVar29)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar29 = *(code **)(*local_160 + 0x28);
    goto LAB_71018227c8;
  }
  if (alStack_1b0 == local_190) {
    pcVar29 = *(code **)(*local_190 + 0x20);
LAB_71018227f8:
    (*pcVar29)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar29 = *(code **)(*local_190 + 0x28);
    goto LAB_71018227f8;
  }
  if (alStack_1e0 == local_1c0) {
    pcVar29 = *(code **)(*local_1c0 + 0x20);
  }
  else {
    if (local_1c0 == (long *)0x0) goto LAB_710182282c;
    pcVar29 = *(code **)(*local_1c0 + 0x28);
  }
  (*pcVar29)();
LAB_710182282c:
  lVar15 = *plVar13;
  local_d0 = (long ***)0x0;
  ppplStack_c8 = (long ***)0x0;
  local_d8 = (long ***)0x0;
  FUN_71019bb740((ulong *)&local_d8,*(long *)(lVar15 + 0x170) - *(long *)(lVar15 + 0x168) >> 3,
                 (long ****)ppuVar24,ppppbVar25,pppplVar45,param_6,param_7,param_8);
  plVar43 = *(long **)(lVar15 + 0x170);
  ppplVar44 = local_d8;
  ppplVar6 = local_d0;
  for (plVar13 = *(long **)(lVar15 + 0x168); local_d8 = ppplVar44, local_d0 = ppplVar6,
      plVar13 != plVar43; plVar13 = plVar13 + 1) {
    if (ppplVar6 == ppplStack_c8) {
      FUN_71019bb8f0((long *)&local_d8,(undefined8 *)(*plVar13 + 8),(long ****)ppuVar24,ppppbVar25,
                     pppplVar45,param_6,param_7,param_8);
    }
    else {
      FUN_7103776390(ppplVar6,(undefined8 *)(*plVar13 + 8),(long ****)ppuVar24,ppppbVar25,pppplVar45
                     ,param_6,param_7,param_8);
      local_d0 = local_d0 + 2;
    }
    ppplVar44 = local_d8;
    ppplVar6 = local_d0;
  }
  if (ppplVar44 != ppplVar6) {
    uVar39 = 0;
    do {
      FUN_7103776390(&local_e8,ppplVar44,(long ****)ppuVar24,ppppbVar25,pppplVar45,param_6,param_7,
                     param_8);
      FUN_7103778300(0x3f800000,local_e0,0x71043cd335);
      if (uVar39 < (ulong)(*(long *)(lVar37 + 0x140) - *(long *)(lVar37 + 0x138) >> 2)) {
        lVar15 = *(long *)(DAT_710532f730 + 8);
        plVar13 = *(long **)(lVar37 + 0xd8);
        uVar14 = FUN_710328d580(*(long *)(lVar15 + 0x378),
                                *(uint *)(*(long *)(lVar37 + 0x138) + uVar39 * 4));
        if ((uVar14 & 0xff00000000000000) == 0x6f00000000000000 && (uVar14 & 0xffffffffff) != 0) {
          FUN_7103239920((uint *)&local_210,0x29,0);
          FUN_710328d780((uint *)&local_c0,*(long *)(lVar15 + 0x378),uVar14);
          ppuVar24 = (undefined **)&local_b8;
          FUN_7103239d20((uint *)&local_210,"%s.bntx");
          if (local_210._4_4_ == 0) {
            uVar14 = 0;
          }
          else {
            uVar38 = 0xffffffff;
            puVar34 = &local_208;
            do {
              puVar33 = (ulong *)((long)puVar34 + 1);
              bVar3 = (byte)*puVar34;
              uVar36 = bVar3 + 0x20;
              if (0x19 < bVar3 - 0x41) {
                uVar36 = (uint)bVar3;
              }
              uVar38 = (&DAT_7104754084)[(uVar36 ^ uVar38) & 0xff] ^ uVar38 >> 8;
              puVar34 = puVar33;
            } while (puVar33 < (ulong *)((long)&local_208 + (ulong)local_210._4_4_));
            uVar14 = (ulong)~uVar38;
          }
          uVar14 = uVar14 | ((long)(int)local_210._4_4_ & 0xffU) << 0x20;
        }
        else {
          uVar14 = 0;
        }
        lVar15 = *plVar13;
        if (((DAT_710532f4e0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(&DAT_710532f4e0), iVar10 != 0)) {
          DAT_710532f4a8 = &PTR_FUN_710523da08;
          puVar41 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)ppuVar24,ppppbVar25,pppplVar45,param_6,
                                   param_7,param_8);
          if (puVar41 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_c0 = (long ********)((ulong)local_c0 & 0xffffffff00000000);
              local_210 = (undefined **)&DAT_00000010;
              pppplVar26 = (long ****)&local_210;
              uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
              if (((uVar20 & 1) != 0) &&
                 (puVar41 = (undefined8 *)
                            FUN_710392e290(0x10,0x10,pppplVar26,ppppbVar25,pppplVar45,param_6,
                                           param_7,param_8), puVar41 != (undefined8 *)0x0))
              goto LAB_7101822ae0;
            }
            puVar41 = (undefined8 *)0x0;
          }
LAB_7101822ae0:
          ppuVar24 = &PTR_LOOP_7104f17000;
          *puVar41 = 0;
          puVar41[1] = 0;
          DAT_710532f4b0 = puVar41;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_710532f4e0);
          if (uVar14 != 0) goto LAB_7101822a0c;
LAB_7101822b18:
          plVar13 = (long *)&DAT_710532f4a8;
        }
        else {
          if (uVar14 == 0) goto LAB_7101822b18;
LAB_7101822a0c:
          plVar42 = (long *)(lVar15 + 0x40);
          plVar13 = (long *)*plVar42;
          plVar43 = plVar42;
          if (plVar13 != (long *)0x0) {
            do {
              bVar9 = (plVar13[4] & 0xffffffffffU) < uVar14;
              if (!bVar9) {
                plVar43 = plVar13;
              }
              plVar13 = (long *)plVar13[bVar9];
            } while (plVar13 != (long *)0x0);
            if (plVar43 != plVar42) {
              plVar13 = (long *)&DAT_710532f4a8;
              if ((plVar43[4] & 0xffffffffffU) <= uVar14) {
                plVar13 = plVar43 + 6;
              }
              goto LAB_7101822b24;
            }
          }
          plVar13 = (long *)&DAT_710532f4a8;
        }
LAB_7101822b24:
        FUN_7103776910(&local_210,(long)&local_e8,(long ****)"set_rep_pic_stage",ppuVar24,ppppbVar25
                       ,pppplVar45,param_6,param_7,param_8);
        uVar14 = local_208;
        FUN_7103778b80(local_208,(long)plVar13,(long *********)ppuVar24,ppppbVar25,pppplVar45,
                       param_6,param_7,param_8);
        local_210 = &PTR_FUN_710523d9a8;
        local_208 = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
      }
      uVar14 = local_e0;
      uVar39 = uVar39 + 1;
      local_e8 = &PTR_FUN_710523d988;
      local_e0 = 0;
      if (uVar14 != 0) {
        uVar20 = *(ulong *)(uVar14 + 0x18);
        *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar14 + 0x18) = 0;
        if (uVar20 != 0) {
          FUN_710392eb40(uVar20);
        }
        FUN_710392eb40(uVar14);
      }
      ppplVar44 = ppplVar44 + 2;
    } while (ppplVar44 != ppplVar6);
  }
  ppplVar6 = local_d8;
  ppplVar44 = local_d0;
  if (local_d8 != (long ***)0x0) {
    while (ppplVar44 != ppplVar6) {
      ppplVar44 = ppplVar44 + -2;
      (*(code *)**ppplVar44)(ppplVar44);
    }
    local_d0 = ppplVar6;
    if (local_d8 != (long ***)0x0) {
      FUN_710392eb40((ulong)local_d8);
    }
  }
  lVar15 = **(long **)*puVar16;
  *(undefined4 *)(*(long *)(lVar15 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar15 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar15 + 0x600) + 0x18) = 0x10;
  pppplVar26 = (long ****)&DAT_00001000;
  FUN_7103775dc0(*(long **)*puVar16,0,(long ****)&DAT_00001000,ppppbVar25,pppplVar45,param_6,param_7
                 ,param_8);
  puVar12[2] = &DAT_7105333600;
  uVar7 = DAT_7105333664;
  *(undefined4 *)(puVar12 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar12 + 0x6c) = uVar7;
  do {
    uVar38 = DAT_7105333650;
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar9) {
      DAT_7105333650 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0' || (uVar38 & 1) != 0);
  puVar12[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar12;
  FUN_71032caea0((long)puVar12,extraout_x1_12,pppplVar26,ppppbVar25,pppplVar45,param_6,param_7,
                 param_8);
  lVar15 = *(long *)(lVar11 + 0xd0);
  *(undefined8 **)(lVar11 + 0xd0) = puVar12;
  if (lVar15 == 0) {
    return;
  }
  FUN_71032cad20(lVar15);
  return;
}

