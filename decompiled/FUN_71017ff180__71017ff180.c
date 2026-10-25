// addr:      71017ff180
// offset:    0x17ff180
// name:      FUN_71017ff180
// mangled:   
// signature: undefined __cdecl FUN_71017ff180(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_71017ff180(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  byte ***pppbVar5;
  undefined8 *puVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  int *piVar20;
  undefined8 uVar21;
  byte *pbVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  char *pcVar27;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  long *********ppppppppplVar28;
  undefined **ppuVar29;
  long ****pppplVar30;
  byte ****ppppbVar31;
  long ****pppplVar32;
  long lVar33;
  byte **ppbVar34;
  code *pcVar35;
  long lVar36;
  undefined1 *puVar37;
  undefined8 *puVar38;
  ulong uVar39;
  long *plVar40;
  ulong uVar41;
  long lVar42;
  ulong uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  long ********local_260;
  byte ***pppbStack_258;
  undefined4 local_250;
  undefined2 local_24c;
  undefined1 local_24a;
  undefined1 *local_248;
  undefined4 local_240;
  long alStack_230 [4];
  long *local_210;
  long alStack_200 [4];
  long *local_1e0;
  long alStack_1d0 [4];
  long *local_1b0;
  long alStack_1a0 [4];
  long *local_180;
  long alStack_170 [4];
  long *local_150;
  undefined4 local_140;
  undefined **local_130;
  undefined8 *local_128;
  undefined **local_120;
  ulong uStack_118;
  undefined **local_110;
  ulong local_108;
  undefined **local_100;
  byte ***local_f8 [3];
  undefined ***local_e0;
  undefined **local_b8;
  ulong local_b0;
  long ***local_a8;
  undefined4 local_9c [3];
  
  lVar13 = FUN_710392e290(0x10,0xd8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar13 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (undefined **)((ulong)local_100 & 0xffffffff00000000);
      local_260 = (long ********)&DAT_000000d8;
      param_3 = &local_260;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar14 & 1) != 0) &&
         (lVar13 = FUN_710392e290(0x10,0xd8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), lVar13 != 0)) goto LAB_71017ff210;
    }
    lVar13 = 0;
  }
LAB_71017ff210:
  *(undefined8 *)(lVar13 + 0x10) = 0;
  *(undefined8 *)(lVar13 + 0x18) = 0;
  *(undefined4 *)(lVar13 + 0xb0) = 0xffffffff;
  *(long *)lVar13 = lVar13;
  *(undefined8 *)(lVar13 + 8) = 0;
  *(undefined1 *)(lVar13 + 0xb4) = 0;
  *(undefined4 *)(lVar13 + 0xb8) = 0;
  *(undefined8 *)(lVar13 + 0xa0) = 0;
  *(undefined8 *)(lVar13 + 0xa8) = 0xffffffff;
  *(undefined8 *)(lVar13 + 0x90) = 0;
  *(undefined8 *)(lVar13 + 0x98) = 0;
  *(undefined8 *)(lVar13 + 0x80) = 0;
  *(undefined8 *)(lVar13 + 0x88) = 0;
  *(undefined8 *)(lVar13 + 0x70) = 0;
  *(undefined8 *)(lVar13 + 0x78) = 0;
  *(undefined8 *)(lVar13 + 0x60) = 0;
  *(undefined8 *)(lVar13 + 0x68) = 0;
  *(undefined8 *)(lVar13 + 0x50) = 0;
  *(undefined8 *)(lVar13 + 0x58) = 0;
  *(undefined8 *)(lVar13 + 0x40) = 0;
  *(undefined8 *)(lVar13 + 0x48) = 0;
  *(undefined8 *)(lVar13 + 0x30) = 0;
  *(undefined8 *)(lVar13 + 0x38) = 0;
  *(undefined8 *)(lVar13 + 0x20) = 0;
  *(undefined8 *)(lVar13 + 0x28) = 0;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar21 = extraout_x1;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (undefined **)((ulong)local_100 & 0xffffffff00000000);
      local_260 = (long ********)&DAT_00000080;
      param_3 = &local_260;
      auVar52 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      uVar21 = auVar52._8_8_;
      if (((auVar52._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), uVar21 = extraout_x1_00, puVar15 != (undefined8 *)0x0))
      goto LAB_71017ff2a0;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_71017ff2a0:
  *puVar15 = &PTR_FUN_7105181b40;
  puVar15[2] = 0;
  puVar15[1] = puVar15 + 2;
  puVar15[5] = 0;
  puVar15[3] = 0;
  puVar15[4] = puVar15 + 5;
  puVar15[8] = 0;
  puVar15[6] = 0;
  puVar15[7] = puVar15 + 8;
  puVar15[0xb] = 0;
  puVar15[9] = 0;
  puVar15[10] = puVar15 + 0xb;
  puVar15[0xc] = 0;
  *(undefined4 *)(puVar15 + 0xd) = 2;
  *(undefined4 *)(puVar15 + 0xf) = 0;
  puVar15[0xe] = 0;
  *(undefined1 *)(lVar13 + 0xd0) = 0;
  *(undefined4 *)(lVar13 + 0xd4) = 0xffffffff;
  *(undefined8 **)(lVar13 + 0xc0) = puVar15;
  *(undefined8 *)(lVar13 + 200) = 0;
  puVar15 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar15 != (undefined8 *)0x0) {
    if (((DAT_71053247b8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053247b8), iVar11 != 0))
    {
      if (((DAT_7105324748 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(&DAT_7105324748), iVar11 != 0)) {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(&DAT_7105324750), iVar11 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105324760 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105324748);
      }
      DAT_71053247c0 = &DAT_7105324760;
      __cxa_guard_release(&DAT_71053247b8);
    }
    auVar52 = (**(code **)*puVar15)(puVar15);
    uVar21 = auVar52._8_8_;
    for (puVar16 = auVar52._0_8_; puVar16 != (undefined8 *)0x0; puVar16 = (undefined8 *)*puVar16) {
      if ((undefined8 **)puVar16 == &DAT_71053247c0) goto LAB_71017ff344;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_71017ff344:
  cVar8 = *(char *)(puVar15 + 1);
  *(char *)(lVar13 + 0xd0) = cVar8;
  if (cVar8 == '\0') {
    *(undefined4 *)(lVar13 + 0xd4) = *(undefined4 *)((long)puVar15 + 0xc);
  }
  *(code **)(lVar13 + 0x28) = FUN_71017feae0;
  *(undefined8 *)(lVar13 + 0x30) = 0;
  *(code **)(lVar13 + 0x38) = FUN_71017fef60;
  *(undefined8 *)(lVar13 + 0x40) = 0;
  *(code **)(lVar13 + 0x48) = FUN_71017ff050;
  *(undefined8 *)(lVar13 + 0x50) = 0;
  uVar14 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar13;
  if (uVar14 != 0) {
    lVar13 = *(long *)(uVar14 + 200);
    *(undefined8 *)(uVar14 + 200) = 0;
    if (lVar13 != 0) {
      FUN_71032cad20(lVar13);
      uVar21 = extraout_x1_01;
    }
    FUN_710323b9e0(*(long *)(uVar14 + 0xc0),uVar21,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar17 = *(long **)(uVar14 + 0xc0);
    *(undefined8 *)(uVar14 + 0xc0) = 0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    FUN_710392eb40(uVar14);
    lVar13 = *(long *)(param_1 + 0x58);
  }
  plVar40 = (long *)(lVar13 + 0xc0);
  lVar18 = *plVar40;
  pppplVar32 = (long ****)0x0;
  FUN_710323beb0(lVar18,(ulong *)&DAT_71045439c8,(long)*(int *)(lVar18 + 0x70),
                 (ulong)*(uint *)(lVar18 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  plVar17 = DAT_7105328160;
  lVar18 = *DAT_7105328160;
  if (*(int *)(lVar18 + 0x204388) != 0) {
    lVar42 = *(long *)(DAT_710532f730 + 8);
    uVar14 = 0;
    do {
      if (2 < uVar14) goto LAB_7101800d7c;
      puVar1 = (uint *)(lVar18 + uVar14 * 0x2041f0 + 0x208578);
      if (*puVar1 != 0) {
        uVar43 = 0;
        puVar15 = (undefined8 *)(lVar18 + uVar14 * 0x2041f0 + 0x2043b8);
        do {
          if (3 < uVar43) goto LAB_7101800d7c;
          puVar37 = (undefined1 *)*puVar15;
          lVar18 = *(long *)(lVar42 + 0x168);
          uVar10 = FUN_71032632a0(lVar18,(ulong)puVar37);
          if ((uVar10 & 1) != 0) {
            puVar37 = FUN_71032631a0(lVar18,0x11b1ccb807);
          }
          local_260 = (long ********)
                      FUN_7103238a70((ulong)puVar37,(ulong)*(byte *)((long)puVar15 + -4),1);
          if (((ulong)local_260 & 0xffffffffff) != 0) {
            lVar18 = *plVar40;
            FUN_710323c4e0(lVar18,(ulong *)&local_260,(long *********)(long)*(int *)(lVar18 + 0x70),
                           (byte ****)(ulong)*(uint *)(lVar18 + 0x68),pppplVar32,param_6,param_7,
                           param_8);
          }
          uVar43 = uVar43 + 1;
          puVar15 = puVar15 + 0x20f;
        } while (uVar43 < *puVar1);
        lVar18 = *plVar17;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(lVar18 + 0x204388));
  }
  local_260 = (long ********)FUN_710323af70(0x71043f0717,0);
  if (((ulong)local_260 & 0xffffffffff) != 0) {
    lVar18 = *plVar40;
    FUN_710323c4e0(lVar18,(ulong *)&local_260,(long *********)(long)*(int *)(lVar18 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar18 + 0x68),pppplVar32,param_6,param_7,param_8);
  }
  lVar18 = *plVar40;
  ppppppppplVar28 = (long *********)(long)*(int *)(lVar18 + 0x70);
  ppppbVar31 = (byte ****)(ulong)*(uint *)(lVar18 + 0x68);
  FUN_710323c1c0(lVar18,(ulong *)&DAT_71045439d0,ppppppppplVar28,ppppbVar31,pppplVar32,param_6,
                 param_7,param_8);
  lVar18 = *plVar40;
  uVar14 = FUN_710323cb80(lVar18,extraout_x1_02,ppppppppplVar28,ppppbVar31,pppplVar32,param_6,
                          param_7,param_8);
  while ((uVar14 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar14 = FUN_710323cb80(lVar18,extraout_x1_03,ppppppppplVar28,ppppbVar31,pppplVar32,param_6,
                            param_7,param_8);
  }
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar28,ppppbVar31,pppplVar32,param_6,
                           param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (undefined **)((ulong)local_100 & 0xffffffff00000000);
      local_260 = (long ********)&DAT_00000088;
      ppppppppplVar28 = &local_260;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar14 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar28,ppppbVar31,pppplVar32,
                                   param_6,param_7,param_8), puVar15 != (undefined8 *)0x0))
      goto LAB_71017ff5c4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_71017ff5c4:
  *puVar15 = &PTR_FUN_71050a74f0;
  puVar15[1] = 0;
  puVar15[0xc] = 0;
  puVar15[0xd] = 0x1ffffffff;
  puVar15[2] = 0;
  puVar15[3] = 0;
  *(undefined1 *)(puVar15 + 0xb) = 0;
  puVar15[0xf] = plVar40;
  *(undefined1 *)(puVar15 + 0xe) = 1;
  puVar15[9] = 0;
  puVar15[10] = 0;
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x128,(long ****)ppppppppplVar28,ppppbVar31,pppplVar32,param_6,
                           param_7,param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (undefined **)((ulong)local_100 & 0xffffffff00000000);
      local_260 = (long ********)&DAT_00000128;
      ppppppppplVar28 = &local_260;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar14 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x128,(long ****)ppppppppplVar28,ppppbVar31,pppplVar32,
                                   param_6,param_7,param_8), puVar16 != (undefined8 *)0x0))
      goto LAB_71017ff64c;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_71017ff64c:
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar28,ppppbVar31,pppplVar32,param_6,param_7,
                           param_8);
  uVar21 = extraout_x1_04;
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (undefined **)((ulong)local_100 & 0xffffffff00000000);
      local_260 = (long ********)&DAT_00000008;
      ppppppppplVar28 = &local_260;
      auVar52 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      uVar21 = auVar52._8_8_;
      if (((auVar52._0_8_ & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar28,ppppbVar31,pppplVar32,param_6,
                                   param_7,param_8), uVar21 = extraout_x1_05,
         puVar19 != (undefined8 *)0x0)) goto LAB_71017ff6a8;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_71017ff6a8:
  FUN_7103773200(puVar19,uVar21,(long ****)ppppppppplVar28,ppppbVar31,pppplVar32,param_6,param_7,
                 param_8);
  *puVar16 = puVar19;
  FUN_7103776290(puVar16 + 1,extraout_x1_06,(long ****)ppppppppplVar28,ppppbVar31,pppplVar32,param_6
                 ,param_7,param_8);
  *(undefined4 *)(puVar16 + 0x20) = 0xffffffff;
  puVar16[10] = 0;
  puVar16[0xb] = 0;
  *(undefined1 *)((long)puVar16 + 0x104) = 0;
  *(undefined4 *)(puVar16 + 0x21) = 0xffffffff;
  puVar16[0x22] = plVar40;
  *(undefined4 *)(puVar16 + 0x23) = 0xffffffff;
  *(undefined1 *)((long)puVar16 + 0x11c) = 0;
  *(undefined4 *)(puVar16 + 0x24) = 0xffffffff;
  *(undefined2 *)((long)puVar16 + 0x124) = 0;
  *(undefined1 *)((long)puVar16 + 0x126) = 0;
  puVar16[9] = 0;
  puVar16[10] = 0;
  puVar16[9] = FUN_71019b4320;
  puVar16[0xc] = 0;
  puVar16[0xd] = 0;
  puVar16[0xb] = FUN_71019b4330;
  puVar16[0xc] = 0;
  puVar16[0xe] = 0;
  puVar16[0xf] = 0;
  puVar16[0xd] = FUN_71019b45f0;
  puVar16[0xe] = 0;
  puVar16[0x10] = 0;
  puVar16[0x11] = 0;
  puVar16[0xf] = FUN_71019b47c0;
  puVar16[0x10] = 0;
  puVar16[0x12] = 0;
  puVar16[0x13] = 0;
  puVar16[0x11] = FUN_71019b4dc0;
  puVar16[0x12] = 0;
  puVar16[3] = 0;
  puVar16[4] = puVar16;
  puVar16[7] = 0;
  puVar16[8] = 0;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[0x1e] = 0;
  puVar16[0x1f] = 0xffffffff;
  puVar16[0x1c] = 0;
  puVar16[0x1d] = 0;
  puVar16[0x1a] = 0;
  puVar16[0x1b] = 0;
  puVar16[0x18] = 0;
  puVar16[0x19] = 0;
  puVar16[0x16] = 0;
  puVar16[0x17] = 0;
  puVar16[0x14] = 0;
  puVar16[0x15] = 0;
  *(undefined4 *)(puVar16 + 0x15) = 0;
  puVar16[0x13] = FUN_71019b5590;
  puVar16[0x14] = 0;
  puVar15[0x10] = puVar16;
  lVar18 = DAT_710532f8b8;
  lVar42 = *plVar40;
  if (((DAT_710532f4d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_710532f4d8), iVar11 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar36 = *(long *)(lVar42 + 0x28);
    if (lVar36 == 0) goto LAB_71017ff7d4;
LAB_71017ff790:
    lVar33 = lVar42 + 0x28;
    do {
      bVar7 = (*(ulong *)(lVar36 + 0x20) & 0xfffffffffc) < 0x10e908f41c;
      if (!bVar7) {
        lVar33 = lVar36;
      }
      lVar36 = *(long *)(lVar36 + (ulong)bVar7 * 8);
    } while (lVar36 != 0);
    if ((lVar33 == lVar42 + 0x28) || (0x10e908f41c < (*(ulong *)(lVar33 + 0x20) & 0xffffffffff)))
    goto LAB_71017ff7d4;
    ppppppppplVar28 = (long *********)(lVar33 + 0x28);
  }
  else {
    lVar36 = *(long *)(lVar42 + 0x28);
    if (lVar36 != 0) goto LAB_71017ff790;
LAB_71017ff7d4:
    ppppppppplVar28 = (long *********)&DAT_710532f4a4;
  }
  if ((*(int *)ppppppppplVar28 != 0xffffff) &&
     (iVar11 = FUN_710330a8f0(*(long **)(lVar18 + 8),(ulong *)&DAT_71045439d0,(long ****)0x6,
                              ppppbVar31,pppplVar32,param_6,param_7,param_8), iVar11 != 0)) {
    FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar11,ppppppppplVar28,ppppbVar31,
                   pppplVar32,param_6,param_7,param_8);
  }
  puVar38 = (undefined8 *)puVar15[0x10];
  ppppbVar31 = (byte ****)0x1;
  FUN_71032cbf30(puVar38,*(long *)puVar38[0x22],(ulong *)&DAT_71045439c8,(byte ****)0x1,pppplVar32,
                 param_6,param_7,param_8);
  puVar19 = *(undefined8 **)*puVar38;
  puVar16 = puVar38 + 1;
  if (puVar38 != puVar19) {
    *(undefined8 *)puVar38[2] = *(undefined8 *)puVar19[2];
    *(undefined8 *)(puVar38[2] + 8) = *(undefined8 *)(puVar19[2] + 8);
    lVar42 = puVar19[2];
    lVar18 = puVar38[2];
    if (lVar18 != lVar42) {
      **(undefined8 **)(lVar18 + 0x18) = **(undefined8 **)(lVar42 + 0x18);
      *(undefined8 *)(*(long *)(lVar18 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar42 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar42 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar42 + 0x18) + 0x18);
    }
  }
  lVar18 = **(long **)*puVar38;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x18) = 0x40000;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0xe4) = 0x20;
  ppuVar29 = (undefined **)0x0;
  plVar17 = FUN_7103240d30((long *)puVar38[0x22],0x71043f0717,(long ****)0x0,ppppbVar31,pppplVar32,
                           param_6,param_7,param_8);
  FUN_7103776910(&local_260,(long)puVar16,(long ****)"set_rep_fp_lvup",ppuVar29,ppppbVar31,
                 pppplVar32,param_6,param_7,param_8);
  pppbVar5 = pppbStack_258;
  FUN_7103778b80((long)pppbStack_258,(long)plVar17,(long *********)ppuVar29,ppppbVar31,pppplVar32,
                 param_6,param_7,param_8);
  local_260 = (long ********)&PTR_FUN_710523d9a8;
  pppbStack_258 = (byte ***)0x0;
  if (pppbVar5 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar5);
  }
  uVar10 = *(uint *)(*DAT_7105328160 + 0x204388);
  if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
    FUN_7101764000();
    ppuVar29 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  piVar20 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  lVar18 = DAT_710532f730;
  bVar9 = DAT_7105307fdc._4_1_;
  lVar42 = *(long *)(DAT_710532f730 + 8);
  uVar12 = FUN_710324bb60(*(long *)(lVar42 + 0x2c8),*(ushort *)((long)piVar20 + 0xa2));
  if ((uint)bVar9 < (uVar12 & 0xff)) {
    *(undefined1 *)((long)puVar38 + 0x124) = 1;
    lVar42 = *(long *)(lVar18 + 8);
  }
  uVar21 = FUN_71032626e0(*(long *)(lVar42 + 0x168),*(ulong *)(piVar20 + 2));
  cVar8 = FUN_7101767150((undefined8 *)((long)piVar20 + 0xc5),(int)uVar21);
  if (DAT_7105307fdc._7_1_ != cVar8) {
    *(undefined1 *)((long)puVar38 + 0x125) = 1;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
    FUN_7101764000();
    ppuVar29 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar3 = DAT_7105307d50;
  piVar20 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  sVar2 = *(short *)((long)piVar20 + 0xa6);
  iVar11 = piVar20[0x2a];
  FUN_7103776910(&local_260,(long)puVar16,(long ****)"set_txt_atk_num",ppuVar29,ppppbVar31,
                 pppplVar32,param_6,param_7,param_8);
  uVar21 = 1;
  uVar14 = (long)sVar2 & 0xffffffff;
  FUN_710377a280((long)&local_260,(byte *)"mnu_amiibo_attack_n",1);
  pppbVar5 = pppbStack_258;
  local_260 = (long ********)&PTR_FUN_710523d9a8;
  pppbStack_258 = (byte ***)0x0;
  if (pppbVar5 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar5);
  }
  FUN_7103776910(&local_260,(long)puVar16,(long ****)"set_txt_def_num",uVar21,uVar14,pppplVar32,
                 param_6,param_7,param_8);
  uVar21 = 1;
  uVar14 = (long)(short)iVar11 & 0xffffffff;
  FUN_710377a280((long)&local_260,(byte *)"mnu_amiibo_defense_n",1);
  pppbVar5 = pppbStack_258;
  local_260 = (long ********)&PTR_FUN_710523d9a8;
  pppbStack_258 = (byte ***)0x0;
  if (pppbVar5 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar5);
  }
  fVar46 = (float)(int)sVar2;
  fVar48 = (float)(int)(short)iVar11;
  fVar49 = (float)NEON_ucvtf((uint)*(ushort *)
                                    (*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8) + 0x194));
  fVar49 = 10000.0 / fVar49;
  fVar47 = fVar48;
  if (fVar48 <= fVar46) {
    fVar47 = fVar46;
  }
  fVar47 = fVar47 * fVar49;
  fVar50 = (fVar49 * fVar46) / 10000.0;
  fVar48 = (fVar49 * fVar48) / 10000.0;
  fVar46 = fVar50;
  if (1.0 < fVar50) {
    fVar46 = 1.0;
  }
  fVar51 = 0.0;
  fVar49 = 0.0;
  if (0.0 <= fVar50) {
    fVar49 = fVar46;
  }
  fVar46 = fVar48;
  if (1.0 < fVar48) {
    fVar46 = 1.0;
  }
  fVar50 = 0.0;
  if (0.0 <= fVar48) {
    fVar50 = fVar46;
  }
  if (1.0 <= fVar47) {
    if (10000.0 < fVar47) {
      fVar47 = 10000.0;
    }
    fVar47 = fVar47 / 10000.0;
  }
  else {
    fVar47 = 0.0001;
  }
  fVar46 = *(float *)(*DAT_7105329fa0 + 0x2d0);
  if (*(float *)(*DAT_7105329fa0 + 0x2d0) <= 0.001) {
    fVar46 = 0.001;
  }
  fVar48 = powf(ABS(1.0 - fVar47),fVar46);
  fVar46 = powf(fVar47,1.0 / fVar46);
  fVar47 = (((1.0 - fVar48) + fVar46) * 0.5) / fVar47;
  fVar49 = fVar49 * fVar47;
  fVar50 = fVar50 * fVar47;
  fVar47 = fVar49;
  if (1.0 < fVar49) {
    fVar47 = 1.0;
  }
  FUN_7103776910(&local_100,(long)puVar16,(long ****)"set_pic_atk_bar",uVar21,uVar14,pppplVar32,
                 param_6,param_7,param_8);
  pppbVar5 = local_f8[0];
  ppbVar34 = *local_f8[0];
  fVar46 = 0.0;
  if (ppbVar34 != (byte **)0x0) {
    fVar51 = ABS(*(float *)(ppbVar34 + 10));
    fVar46 = ABS(*(float *)((long)ppbVar34 + 0x54));
  }
  fVar48 = -1.0;
  if (0.0 <= fVar49) {
    fVar48 = fVar47 + -1.0;
  }
  local_260 = (long ********)
              (ulong)(uint)(fVar48 * (fVar51 + -34.0) *
                                     ((fVar46 * -0.57735026) / (fVar51 + -34.0) + 1.0));
  pppbStack_258 = (byte ***)0x0;
  FUN_7103779770(1.0,(long)local_f8[0],&local_260);
  local_100 = &PTR_FUN_710523d9a8;
  local_f8[0] = (byte ***)0x0;
  if (pppbVar5 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar5);
  }
  FUN_7103776910(&local_100,(long)puVar16,(long ****)"set_pic_atk_bar_shadow",uVar21,uVar14,
                 pppplVar32,param_6,param_7,param_8);
  pppbVar5 = local_f8[0];
  ppbVar34 = *local_f8[0];
  if (ppbVar34 == (byte **)0x0) {
    fVar46 = 0.0;
    fVar47 = 0.0;
  }
  else {
    fVar47 = ABS(*(float *)((long)ppbVar34 + 0x54));
    fVar46 = ABS(*(float *)(ppbVar34 + 10));
  }
  local_260 = (long ********)
              (ulong)(uint)(fVar48 * (fVar46 + -34.0) *
                                     ((fVar47 * -0.57735026) / (fVar46 + -34.0) + 1.0));
  pppbStack_258 = (byte ***)0x0;
  FUN_7103779770(1.0,(long)local_f8[0],&local_260);
  local_100 = &PTR_FUN_710523d9a8;
  local_f8[0] = (byte ***)0x0;
  if (pppbVar5 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar5);
  }
  fVar47 = fVar50;
  if (1.0 < fVar50) {
    fVar47 = 1.0;
  }
  FUN_7103776910(&local_100,(long)puVar16,(long ****)"set_pic_def_bar",uVar21,uVar14,pppplVar32,
                 param_6,param_7,param_8);
  pppbVar5 = local_f8[0];
  ppbVar34 = *local_f8[0];
  if (ppbVar34 == (byte **)0x0) {
    fVar48 = 0.0;
    fVar46 = 0.0;
  }
  else {
    fVar46 = ABS(*(float *)((long)ppbVar34 + 0x54));
    fVar48 = ABS(*(float *)(ppbVar34 + 10));
  }
  fVar49 = -1.0;
  if (0.0 <= fVar50) {
    fVar49 = fVar47 + -1.0;
  }
  local_260 = (long ********)
              (ulong)(uint)(fVar49 * (fVar48 + -34.0) *
                                     ((fVar46 * -0.57735026) / (fVar48 + -34.0) + 1.0));
  pppbStack_258 = (byte ***)0x0;
  FUN_7103779770(1.0,(long)local_f8[0],&local_260);
  local_100 = &PTR_FUN_710523d9a8;
  local_f8[0] = (byte ***)0x0;
  if (pppbVar5 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar5);
  }
  FUN_7103776910(&local_100,(long)puVar16,(long ****)"set_pic_def_bar_shadow",uVar21,uVar14,
                 pppplVar32,param_6,param_7,param_8);
  pppbVar5 = local_f8[0];
  ppbVar34 = *local_f8[0];
  if (ppbVar34 == (byte **)0x0) {
    fVar46 = 0.0;
    fVar47 = 0.0;
  }
  else {
    fVar47 = ABS(*(float *)((long)ppbVar34 + 0x54));
    fVar46 = ABS(*(float *)(ppbVar34 + 10));
  }
  local_260 = (long ********)
              (ulong)(uint)(fVar49 * (fVar46 + -34.0) *
                                     ((fVar47 * -0.57735026) / (fVar46 + -34.0) + 1.0));
  pppbStack_258 = (byte ***)0x0;
  FUN_7103779770(1.0,(long)local_f8[0],&local_260);
  local_100 = &PTR_FUN_710523d9a8;
  local_f8[0] = (byte ***)0x0;
  if (pppbVar5 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar5);
  }
  pbVar22 = (byte *)FUN_71032dc2a0(*(long *)(DAT_710532f7b0 + 8),iVar3);
  FUN_7103776910(&local_260,(long)puVar16,(long ****)"set_txt_header_name",uVar21,uVar14,pppplVar32,
                 param_6,param_7,param_8);
  pppbVar5 = pppbStack_258;
  if (pppbStack_258[2] != (byte **)0x0) {
    FUN_71037a28a0((long *)pppbStack_258[2],pbVar22);
  }
  local_260 = (long ********)&PTR_FUN_710523d9a8;
  pppbStack_258 = (byte ***)0x0;
  if (pppbVar5 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar5);
  }
  uVar12 = FUN_710324bb60(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),
                          *(ushort *)((long)piVar20 + 0xa2));
  FUN_7103776910(&local_260,(long)puVar16,(long ****)"set_text_level_num",uVar21,uVar14,pppplVar32,
                 param_6,param_7,param_8);
  uVar14 = (ulong)(uVar12 & 0xff);
  uVar21 = 1;
  FUN_710377a280((long)&local_260,(byte *)"mnu_amiibo_level_n",1);
  pppbVar5 = pppbStack_258;
  local_260 = (long ********)&PTR_FUN_710523d9a8;
  pppbStack_258 = (byte ***)0x0;
  if (pppbVar5 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar5);
  }
  cVar8 = *(char *)((long)piVar20 + 0x103);
  if (cVar8 == '\x01') {
    lVar18 = puVar38[2];
    pcVar27 = "attribute_attack";
  }
  else if (cVar8 == '\x02') {
    lVar18 = puVar38[2];
    pcVar27 = "attribute_defense";
  }
  else if (cVar8 == '\x03') {
    lVar18 = puVar38[2];
    pcVar27 = "attribute_throw";
  }
  else {
    lVar18 = puVar38[2];
    pcVar27 = "attribute_none";
  }
  FUN_7103778300(0x3f800000,lVar18,(long)pcVar27);
  uVar23 = FUN_71032626e0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),*(ulong *)(piVar20 + 2));
  bVar9 = FUN_7101767150((undefined8 *)((long)piVar20 + 0xc5),(int)uVar23);
  FUN_71003a4ca0((uint *)&local_260,"mnu_amiibo_personal_%02d",(ulong)bVar9,uVar21,uVar14,pppplVar32
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_100,(long)puVar16,(long ****)"set_txt_personality_00",uVar21,uVar14,
                 pppplVar32,param_6,param_7,param_8);
  FUN_710377a120((long)&local_100,(char *)&pppbStack_258,uVar21,uVar14,pppplVar32,param_6,param_7,
                 param_8);
  pppbVar5 = local_f8[0];
  local_100 = &PTR_FUN_710523d9a8;
  local_f8[0] = (byte ***)0x0;
  if (pppbVar5 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar5);
  }
  if (*(char *)((long)puVar38 + 0x125) != '\0') {
    FUN_7103776910(&local_100,(long)puVar16,(long ****)"set_txt_personality_01",uVar21,uVar14,
                   pppplVar32,param_6,param_7,param_8);
    FUN_710377a120((long)&local_100,(char *)&pppbStack_258,uVar21,uVar14,pppplVar32,param_6,param_7,
                   param_8);
    pppbVar5 = local_f8[0];
    local_100 = &PTR_FUN_710523d9a8;
    local_f8[0] = (byte ***)0x0;
    if (pppbVar5 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar5);
    }
  }
  FUN_7103776910(&local_100,(long)puVar16,(long ****)"set_txt_win_count_num",uVar21,uVar14,
                 pppplVar32,param_6,param_7,param_8);
  ppppbVar31 = (byte ****)(ulong)*(ushort *)(piVar20 + 0x2d);
  FUN_710377a280((long)&local_100,(byte *)"mnu_amiibo_journey_victory_number_n",1);
  pppbVar5 = local_f8[0];
  local_100 = &PTR_FUN_710523d9a8;
  local_f8[0] = (byte ***)0x0;
  if (pppbVar5 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar5);
  }
  if (uVar10 - 1 < 3) {
    FUN_7103778430((long)puVar16,"battle_count_%d",(ulong)uVar10,ppppbVar31,pppplVar32,param_6,
                   param_7,param_8);
LAB_710180002c:
    uVar21 = 0;
    uVar43 = 0;
    uVar14 = 0;
    do {
      if (uVar14 < 3) {
        pppplVar30 = (long ****)(uVar14 & 0xffffffff);
        pppbStack_258 = (byte ***)((ulong)pppbStack_258 & 0xffffffffffffff00);
        local_260 = (long ********)0x0;
        FUN_710062dc20((uint *)&local_260,"set_btn_round_%02d");
        FUN_7103776640(&local_b8,(long)puVar16,&pppbStack_258,pppplVar30,ppppbVar31,pppplVar32,
                       param_6,param_7,param_8);
        lVar18 = *DAT_7105328160;
        lVar42 = *(long *)(DAT_710532f730 + 8);
        local_f8[0] = (byte ***)((ulong)local_f8[0] & 0xffffffffffffff00);
        local_100 = (undefined **)0x0;
        FUN_7103776290(&local_110,extraout_x1_07,pppplVar30,ppppbVar31,pppplVar32,param_6,param_7,
                       param_8);
        lVar18 = lVar18 + uVar14 * 0x2041f0;
        uVar39 = 0;
        pbVar22 = (byte *)(lVar18 + 0x2043b4);
        uVar26 = local_108;
        do {
          ppppppppplVar28 = (long *********)(uVar39 & 0xffffffff);
          FUN_710062dc20((uint *)&local_100,"set_parts_chara_%02d");
          FUN_7103776640(&local_120,(long)&local_b8,local_f8,ppppppppplVar28,ppppbVar31,pppplVar32,
                         param_6,param_7,param_8);
          uVar41 = uStack_118;
          uStack_118 = 0;
          local_108 = uVar41;
          if (uVar26 != 0) {
            uVar24 = *(ulong *)(uVar26 + 0x18);
            *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar26 + 0x18) = 0;
            if (uVar24 != 0) {
              FUN_710392eb40(uVar24);
            }
            FUN_710392eb40(uVar26);
          }
          local_120 = &PTR_FUN_710523d988;
          uStack_118 = 0;
          if (uVar39 < *(uint *)(lVar18 + 0x208578)) {
            FUN_7103778300(0x3f800000,uVar41,0x7104401009);
            puVar37 = *(undefined1 **)(pbVar22 + 4);
            lVar36 = *(long *)(lVar42 + 0x168);
            uVar12 = FUN_71032632a0(lVar36,(ulong)puVar37);
            if ((uVar12 & 1) != 0) {
              puVar37 = FUN_71032631a0(lVar36,0x11b1ccb807);
            }
            ppppbVar31 = (byte ****)0x1;
            plVar17 = FUN_710323f330((long *)puVar38[0x22],(ulong)puVar37,(ulong)*pbVar22,1,
                                     pppplVar32,param_6,param_7,param_8);
            lVar36 = *(long *)(DAT_710532f730 + 8);
            uVar12 = FUN_7103280ec0(*(long *)(lVar36 + 0x2a8),(ulong)puVar37,(ulong)*pbVar22,
                                    ppppbVar31,pppplVar32,param_6,param_7,param_8);
            lVar36 = *(long *)(*(long *)(lVar36 + 0x2a8) + 8);
            auVar52._8_8_ = 0;
            auVar52._0_8_ = uVar43;
            auVar52 = FUN_710326ad60(auVar52 << 0x40,lVar36,uVar12,0x10751bf048);
            auVar44._8_8_ = 0;
            auVar44._0_8_ = uVar43;
            auVar44 = FUN_710326ad60(auVar44 << 0x40,lVar36,uVar12,0x10021cc0de);
            auVar45._8_8_ = uVar21;
            auVar45._0_8_ = 0x3f800000;
            ppppppppplVar28 = (long *********)0xdef434469;
            auVar45 = FUN_710326ad60(auVar45,lVar36,uVar12,0xdef434469);
            local_120 = (undefined **)CONCAT44(auVar44._0_4_,auVar52._0_4_);
            uStack_118 = 0;
            FUN_7103776910(&local_130,(long)&local_110,(long ****)"set_rep_chara",ppppppppplVar28,
                           ppppbVar31,pppplVar32,param_6,param_7,param_8);
            puVar19 = local_128;
            FUN_7103778b80((long)local_128,(long)plVar17,ppppppppplVar28,ppppbVar31,pppplVar32,
                           param_6,param_7,param_8);
            puVar25 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar28,ppppbVar31,pppplVar32,
                                     param_6,param_7,param_8);
            if (puVar25 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_9c[0] = 0;
                local_a8 = (long ***)&SUB_00000020;
                pppplVar30 = &local_a8;
                uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_9c);
                if (((uVar26 & 1) != 0) &&
                   (puVar25 = (undefined8 *)
                              FUN_710392e290(0x10,0x20,pppplVar30,ppppbVar31,pppplVar32,param_6,
                                             param_7,param_8), puVar25 != (undefined8 *)0x0))
                goto LAB_7101800300;
              }
              puVar25 = (undefined8 *)0x0;
            }
LAB_7101800300:
            puVar6 = local_128;
            puVar25[2] = 0;
            puVar25[3] = 0;
            *puVar25 = 0;
            puVar25[1] = 0;
            *puVar25 = *puVar19;
            puVar25[1] = puVar19[1];
            puVar25[2] = local_128[2];
            puVar25[3] = local_128[3];
            FUN_7103779770(auVar45._0_4_,(long)puVar25,&local_120);
            if (puVar25 != (undefined8 *)0x0) {
              FUN_710392eb40((ulong)puVar25);
            }
            FUN_7103778430((long)&local_110,"rank_%d",(ulong)(pbVar22[0x50] + 1),ppppbVar31,
                           pppplVar32,param_6,param_7,param_8);
            uVar41 = local_108;
            if (pbVar22[0x4b] == 0) {
              pcVar27 = "team_red";
            }
            else if (pbVar22[0x4b] == 1) {
              pcVar27 = "team_blue";
            }
            else {
              pcVar27 = "team_off";
            }
            FUN_7103778300(0x3f800000,local_108,(long)pcVar27);
            if (DAT_710593b580 == (long *)0x0) {
              uVar26 = 4;
            }
            else {
              lVar36 = *DAT_710593b580;
              iVar11 = *(int *)(lVar36 + 0x7300);
              if (iVar11 == -1) {
                plVar17 = (long *)(lVar36 + 0x28);
              }
              else {
                if (*(ulong *)(lVar36 + 0x72c0) <= (ulong)(long)iVar11) goto LAB_7101800d7c;
                plVar17 = (long *)(lVar36 + (long)iVar11 * 0xcc0 + 0xce8);
              }
              lVar36 = *plVar17;
              if (*(long *)(lVar18 + 0x204398) == lVar36) {
                uVar26 = 0;
              }
              else if (*(long *)(lVar18 + 0x205410) == lVar36) {
                uVar26 = 1;
              }
              else if (*(long *)(lVar18 + 0x206488) == lVar36) {
                uVar26 = 2;
              }
              else {
                uVar26 = 3;
                if (*(long *)(lVar18 + 0x207500) != lVar36) {
                  uVar26 = 4;
                }
              }
            }
            pcVar27 = "my_amiibo_show";
            if (uVar39 != uVar26) {
              pcVar27 = "my_amiibo_hide";
            }
            FUN_7103778430((long)&local_110,"%s",pcVar27,ppppbVar31,pppplVar32,param_6,param_7,
                           param_8);
            local_130 = &PTR_FUN_710523d9a8;
            local_128 = (undefined8 *)0x0;
            if (puVar6 != (undefined8 *)0x0) {
              FUN_710392eb40((ulong)puVar6);
            }
          }
          else {
            FUN_7103778300(0x3f800000,uVar41,0x71042d5dfa);
            FUN_7103776910(&local_120,(long)&local_110,(long ****)"set_rep_chara",ppppppppplVar28,
                           ppppbVar31,pppplVar32,param_6,param_7,param_8);
            uVar26 = uStack_118;
            FUN_71037790a0(uStack_118,1,ppppppppplVar28,ppppbVar31,pppplVar32,param_6,param_7,
                           param_8);
            local_120 = &PTR_FUN_710523d9a8;
            uStack_118 = 0;
            if (uVar26 != 0) {
              FUN_710392eb40(uVar26);
            }
          }
          uVar39 = uVar39 + 1;
          pbVar22 = pbVar22 + 0x1078;
          uVar26 = uVar41;
        } while (uVar39 < 4);
        local_110 = &PTR_FUN_710523d988;
        local_108 = 0;
        if (uVar41 != 0) {
          uVar39 = *(ulong *)(uVar41 + 0x18);
          *(undefined ***)(uVar41 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar41 + 0x18) = 0;
          if (uVar39 != 0) {
            FUN_710392eb40(uVar39);
          }
          FUN_710392eb40(uVar41);
        }
        uVar39 = local_b0;
        local_b8 = &PTR_FUN_710523d988;
        local_b0 = 0;
        if (uVar39 != 0) {
          uVar26 = *(ulong *)(uVar39 + 0x18);
          *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar39 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar39);
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar10);
  }
  else if (uVar10 != 0) goto LAB_710180002c;
  local_250 = 1;
  local_24c = 1;
  local_24a = 1;
  local_248 = &DAT_41f0000000000000;
  local_260 = (long ********)0x0;
  pppbStack_258 = (byte ***)&DAT_00000101;
  local_240 = 0;
  local_210 = (long *)0x0;
  local_1e0 = (long *)0x0;
  local_1b0 = (long *)0x0;
  local_180 = (long *)0x0;
  local_150 = (long *)0x0;
  local_140 = 0;
  local_100 = (undefined **)&DAT_7105186040;
  local_e0 = &local_100;
  FUN_7101989a30((long *)&local_100,alStack_200);
  if (&local_100 == local_e0) {
    (*(code *)(*local_e0)[4])();
  }
  else if (local_e0 != (undefined ***)0x0) {
    (*(code *)(*local_e0)[5])();
  }
  local_100 = (undefined **)&DAT_71051860d0;
  local_e0 = &local_100;
  FUN_7101989a30((long *)&local_100,alStack_1a0);
  if (&local_100 == local_e0) {
    pcVar35 = (code *)(*local_e0)[4];
LAB_7101800650:
    (*pcVar35)();
  }
  else if (local_e0 != (undefined ***)0x0) {
    pcVar35 = (code *)(*local_e0)[5];
    goto LAB_7101800650;
  }
  ppppppppplVar28 = &local_260;
  plVar17 = puVar38 + 3;
  FUN_7103770b30(plVar17,puVar16,(long ****)"selector_0",(byte ****)ppppppppplVar28,pppplVar32,
                 param_6,param_7,param_8);
  local_f8[0] = (byte ***)((ulong)local_f8[0] & 0xffffffffffffff00);
  local_100 = (undefined **)0x0;
  FUN_710062dc20((uint *)&local_100,"set_btn_round_%02d");
  FUN_71037717d0(plVar17,0,(char *)local_f8,ppppppppplVar28,pppplVar32,param_6,param_7,param_8);
  lVar18 = *(long *)(puVar38[3] + 0x1b8);
  if (lVar18 != 0) {
    lVar42 = puVar38[3] + 0x1b8;
    lVar36 = lVar42;
    do {
      bVar7 = *(int *)(lVar18 + 0x20) < 0;
      if (!bVar7) {
        lVar36 = lVar18;
      }
      lVar18 = *(long *)(lVar18 + (ulong)bVar7 * 8);
    } while (lVar18 != 0);
    if (((lVar36 != lVar42) && (*(int *)(lVar36 + 0x20) < 1)) &&
       (plVar40 = *(long **)(lVar36 + 0x28), plVar40 != (long *)0x0)) {
      (**(code **)(*plVar40 + 0x1f8))(plVar40,0);
      (**(code **)(*plVar40 + 0x388))(plVar40,1,0);
    }
  }
  FUN_710062dc20((uint *)&local_100,"set_btn_round_%02d");
  FUN_71037717d0(plVar17,1,(char *)local_f8,ppppppppplVar28,pppplVar32,param_6,param_7,param_8);
  lVar18 = *(long *)(*plVar17 + 0x1b8);
  if (lVar18 != 0) {
    lVar42 = *plVar17 + 0x1b8;
    lVar36 = lVar42;
    do {
      if (0 < *(int *)(lVar18 + 0x20)) {
        lVar36 = lVar18;
      }
      lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < 1) * 8);
    } while (lVar18 != 0);
    if (((lVar36 != lVar42) && (*(int *)(lVar36 + 0x20) < 2)) &&
       (plVar40 = *(long **)(lVar36 + 0x28), plVar40 != (long *)0x0)) {
      (**(code **)(*plVar40 + 0x1f8))(plVar40,0);
      (**(code **)(*plVar40 + 0x388))(plVar40,1,0);
    }
  }
  FUN_710062dc20((uint *)&local_100,"set_btn_round_%02d");
  FUN_71037717d0(plVar17,2,(char *)local_f8,ppppppppplVar28,pppplVar32,param_6,param_7,param_8);
  lVar18 = *(long *)(*plVar17 + 0x1b8);
  if (lVar18 != 0) {
    lVar42 = *plVar17 + 0x1b8;
    lVar36 = lVar42;
    do {
      if (1 < *(int *)(lVar18 + 0x20)) {
        lVar36 = lVar18;
      }
      lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < 2) * 8);
    } while (lVar18 != 0);
    if (((lVar36 != lVar42) && (*(int *)(lVar36 + 0x20) < 3)) &&
       (plVar40 = *(long **)(lVar36 + 0x28), plVar40 != (long *)0x0)) {
      (**(code **)(*plVar40 + 0x1f8))(plVar40,0);
      (**(code **)(*plVar40 + 0x388))(plVar40,1,0);
    }
  }
  FUN_71037717d0(plVar17,3,"set_ok_dummy",ppppppppplVar28,pppplVar32,param_6,param_7,param_8);
  ppppbVar31 = (byte ****)0x0;
  FUN_7103771930(*plVar17,3,(long ****)0x6,(byte ****)0x0,pppplVar32,param_6,param_7,param_8);
  if (uVar10 == 1) {
LAB_7101800974:
    lVar18 = *(long *)(*plVar17 + 0x1b8);
    if (lVar18 != 0) {
      lVar42 = *plVar17 + 0x1b8;
      lVar36 = lVar42;
      do {
        bVar7 = *(int *)(lVar18 + 0x20) < 0;
        if (!bVar7) {
          lVar36 = lVar18;
        }
        lVar18 = *(long *)(lVar18 + (ulong)bVar7 * 8);
      } while (lVar18 != 0);
      if (((lVar36 != lVar42) && (*(int *)(lVar36 + 0x20) < 1)) &&
         (plVar40 = *(long **)(lVar36 + 0x28), plVar40 != (long *)0x0)) {
        (**(code **)(*plVar40 + 0x1f8))(plVar40,1);
        (**(code **)(*plVar40 + 0x388))(plVar40,0,0);
      }
    }
  }
  else {
    if (uVar10 == 2) {
LAB_7101800900:
      lVar18 = *(long *)(*plVar17 + 0x1b8);
      if (lVar18 != 0) {
        lVar42 = *plVar17 + 0x1b8;
        lVar36 = lVar42;
        do {
          if (0 < *(int *)(lVar18 + 0x20)) {
            lVar36 = lVar18;
          }
          lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < 1) * 8);
        } while (lVar18 != 0);
        if (((lVar36 != lVar42) && (*(int *)(lVar36 + 0x20) < 2)) &&
           (plVar40 = *(long **)(lVar36 + 0x28), plVar40 != (long *)0x0)) {
          (**(code **)(*plVar40 + 0x1f8))(plVar40,1);
          (**(code **)(*plVar40 + 0x388))(plVar40,0,0);
        }
      }
      goto LAB_7101800974;
    }
    if (uVar10 == 3) {
      lVar18 = *(long *)(*plVar17 + 0x1b8);
      if (lVar18 != 0) {
        lVar42 = *plVar17 + 0x1b8;
        lVar36 = lVar42;
        do {
          if (1 < *(int *)(lVar18 + 0x20)) {
            lVar36 = lVar18;
          }
          lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < 2) * 8);
        } while (lVar18 != 0);
        if (((lVar36 != lVar42) && (*(int *)(lVar36 + 0x20) < 3)) &&
           (plVar40 = *(long **)(lVar36 + 0x28), plVar40 != (long *)0x0)) {
          (**(code **)(*plVar40 + 0x1f8))(plVar40,1);
          (**(code **)(*plVar40 + 0x388))(plVar40,0,0);
        }
      }
      goto LAB_7101800900;
    }
  }
  lVar18 = *(long *)(*plVar17 + 0x1b8);
  if (lVar18 != 0) {
    lVar42 = *plVar17 + 0x1b8;
    lVar36 = lVar42;
    do {
      if (2 < *(int *)(lVar18 + 0x20)) {
        lVar36 = lVar18;
      }
      lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < 3) * 8);
    } while (lVar18 != 0);
    if (((lVar36 != lVar42) && (*(int *)(lVar36 + 0x20) < 4)) &&
       (plVar40 = *(long **)(lVar36 + 0x28), plVar40 != (long *)0x0)) {
      (**(code **)(*plVar40 + 0x1f8))(plVar40,1);
      (**(code **)(*plVar40 + 0x388))(plVar40,0,0);
    }
  }
  FUN_7103771a80(plVar17,0,1);
  *(undefined4 *)(puVar38 + 0x23) = 0;
  (**(code **)(*(long *)puVar38[3] + 0x70))((long *)puVar38[3],0);
  (**(code **)(*(long *)puVar38[3] + 0x60))((long *)puVar38[3],0);
  *(undefined1 *)(*(long *)(**(long **)*puVar38 + 0x600) + 0x4aa) = 0;
  pppplVar30 = (long ****)&DAT_00001000;
  FUN_7103775dc0(*(long **)*puVar38,0,(long ****)&DAT_00001000,ppppbVar31,pppplVar32,param_6,param_7
                 ,param_8);
  if (alStack_170 == local_150) {
    pcVar35 = *(code **)(*local_150 + 0x20);
LAB_7101800af0:
    (*pcVar35)();
    uVar21 = extraout_x1_09;
  }
  else {
    uVar21 = extraout_x1_08;
    if (local_150 != (long *)0x0) {
      pcVar35 = *(code **)(*local_150 + 0x28);
      goto LAB_7101800af0;
    }
  }
  if (alStack_1a0 == local_180) {
    pcVar35 = *(code **)(*local_180 + 0x20);
LAB_7101800b20:
    (*pcVar35)();
    uVar21 = extraout_x1_10;
  }
  else if (local_180 != (long *)0x0) {
    pcVar35 = *(code **)(*local_180 + 0x28);
    goto LAB_7101800b20;
  }
  if (alStack_1d0 == local_1b0) {
    pcVar35 = *(code **)(*local_1b0 + 0x20);
LAB_7101800b50:
    (*pcVar35)();
    uVar21 = extraout_x1_11;
  }
  else if (local_1b0 != (long *)0x0) {
    pcVar35 = *(code **)(*local_1b0 + 0x28);
    goto LAB_7101800b50;
  }
  if (alStack_200 == local_1e0) {
    pcVar35 = *(code **)(*local_1e0 + 0x20);
LAB_7101800b80:
    (*pcVar35)();
    uVar21 = extraout_x1_12;
  }
  else if (local_1e0 != (long *)0x0) {
    pcVar35 = *(code **)(*local_1e0 + 0x28);
    goto LAB_7101800b80;
  }
  if (alStack_230 == local_210) {
    pcVar35 = *(code **)(*local_210 + 0x20);
  }
  else {
    if (local_210 == (long *)0x0) goto LAB_7101800bb4;
    pcVar35 = *(code **)(*local_210 + 0x28);
  }
  (*pcVar35)();
  uVar21 = extraout_x1_13;
LAB_7101800bb4:
  puVar15[2] = &DAT_7105333600;
  uVar4 = DAT_7105333664;
  *(undefined4 *)(puVar15 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar15 + 0x6c) = uVar4;
  do {
    uVar10 = DAT_7105333650;
    cVar8 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0' || (uVar10 & 1) != 0);
  puVar15[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar15;
  FUN_71032caea0((long)puVar15,uVar21,pppplVar30,ppppbVar31,pppplVar32,param_6,param_7,param_8);
  lVar18 = *(long *)(lVar13 + 200);
  *(undefined8 **)(lVar13 + 200) = puVar15;
  if (lVar18 != 0) {
    FUN_71032cad20(lVar18);
    puVar15 = *(undefined8 **)(lVar13 + 200);
  }
  *(undefined1 *)(puVar15 + 0xe) = 1;
  if (*(uint *)(lVar13 + 0xa4) < 0x13) {
    *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0xa4) * 4 + 0x58) = 0;
    return;
  }
LAB_7101800d7c:
                    /* WARNING: Subroutine does not return */
  abort();
}

