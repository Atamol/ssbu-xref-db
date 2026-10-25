// addr:      71018ffab0
// offset:    0x18ffab0
// name:      FUN_71018ffab0
// mangled:   
// signature: undefined __cdecl FUN_71018ffab0(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71018ffab0(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  short sVar2;
  char cVar3;
  long ****pppplVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  long ****pppplVar16;
  ulong uVar17;
  long ***ppplVar18;
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
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  long *********ppppppppplVar19;
  long ****pppplVar20;
  undefined8 uVar21;
  long ****pppplVar22;
  long *****ppppplVar23;
  byte ****ppppbVar24;
  undefined8 uVar25;
  long ****pppplVar26;
  long ****pppplVar27;
  undefined8 uVar28;
  uint uVar29;
  code *pcVar30;
  long lVar31;
  undefined **ppuVar32;
  long lVar33;
  byte *pbVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  long *plVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  long ***local_330;
  ulong local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined2 uStack_308;
  undefined1 uStack_306;
  undefined4 uStack_305;
  undefined1 uStack_301;
  undefined1 uStack_300;
  undefined1 uStack_2ff;
  undefined6 uStack_2fe;
  long ****local_2f8;
  long alStack_2f0 [4];
  long *local_2d0;
  long alStack_2c0 [4];
  long *local_2a0;
  long alStack_290 [4];
  long *local_270;
  long alStack_260 [4];
  long *local_240;
  long alStack_230 [4];
  long *local_210;
  long ********local_1f0;
  undefined2 local_1e8;
  undefined4 local_1e6;
  undefined2 local_1e2;
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined1 local_1da;
  undefined1 *local_1d8;
  undefined4 local_1d0;
  long alStack_1c0 [4];
  long *local_1a0;
  long alStack_190 [4];
  long *local_170;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  undefined4 local_d0;
  long ****local_b8;
  long ****local_b0;
  long ****local_a8;
  undefined **local_a0;
  undefined **local_98;
  undefined **local_90;
  undefined ***local_80;
  undefined4 local_6c [3];
  
  pppplVar22 = &local_330;
  pppplVar27 = &local_330;
  lVar7 = FUN_710392e290(0x10,0x108,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar7 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (byte ***)((ulong)local_320 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_00000108;
      param_3 = (undefined **)&local_1f0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      if (((uVar8 & 1) != 0) &&
         (lVar7 = FUN_710392e290(0x10,0x108,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8), lVar7 != 0)) goto LAB_71018ffb34;
    }
    lVar7 = 0;
  }
LAB_71018ffb34:
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined4 *)(lVar7 + 0xd0) = 0xffffffff;
  *(long *)lVar7 = lVar7;
  *(undefined8 *)(lVar7 + 8) = 0;
  *(undefined1 *)(lVar7 + 0xd4) = 0;
  *(undefined8 *)(lVar7 + 0xc0) = 0;
  *(undefined8 *)(lVar7 + 200) = 0xffffffff;
  *(undefined8 *)(lVar7 + 0xb0) = 0;
  *(undefined8 *)(lVar7 + 0xb8) = 0;
  *(undefined8 *)(lVar7 + 0xa0) = 0;
  *(undefined8 *)(lVar7 + 0xa8) = 0;
  *(undefined8 *)(lVar7 + 0x90) = 0;
  *(undefined8 *)(lVar7 + 0x98) = 0;
  *(undefined8 *)(lVar7 + 0x80) = 0;
  *(undefined8 *)(lVar7 + 0x88) = 0;
  *(undefined8 *)(lVar7 + 0x70) = 0;
  *(undefined8 *)(lVar7 + 0x78) = 0;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  *(undefined8 *)(lVar7 + 0x68) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x58) = 0;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar28 = extraout_x1;
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (byte ***)((ulong)local_320 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_00000080;
      param_3 = (undefined **)&local_1f0;
      auVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      uVar28 = auVar43._8_8_;
      if (((auVar43._0_8_ & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), uVar28 = extraout_x1_00, puVar9 != (undefined8 *)0x0))
      goto LAB_71018ffbc8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71018ffbc8:
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_7105181b40;
  puVar9[1] = puVar9 + 2;
  puVar9[5] = 0;
  puVar9[3] = 0;
  puVar9[4] = puVar9 + 5;
  puVar9[8] = 0;
  puVar9[6] = 0;
  puVar9[7] = puVar9 + 8;
  puVar9[0xc] = 0;
  puVar9[0xb] = 0;
  *(undefined4 *)(puVar9 + 0xd) = 2;
  *(undefined4 *)(puVar9 + 0xf) = 0;
  puVar9[0xe] = 0;
  puVar9[9] = 0;
  puVar9[10] = puVar9 + 0xb;
  *(undefined2 *)(lVar7 + 0xf0) = 0xffff;
  *(undefined8 **)(lVar7 + 0xd8) = puVar9;
  *(undefined8 *)(lVar7 + 0xe0) = 0;
  *(undefined8 *)(lVar7 + 0xe8) = 0;
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), uVar28 = extraout_x1_22, iVar6 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    uVar28 = extraout_x1_23;
  }
  uVar38 = DAT_71053050f0;
  *(undefined4 *)(lVar7 + 0xf4) = 2;
  *(undefined4 *)(lVar7 + 0x100) = 0;
  *(undefined8 *)(lVar7 + 0xf8) = 0;
  *(code **)(lVar7 + 0x48) = FUN_71018fe660;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(code **)(lVar7 + 0x28) = FUN_71018fd720;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(code **)(lVar7 + 0x38) = FUN_71018fdc40;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(bool *)(lVar7 + 0xf2) = (uVar38 & 0x7fff0000) == 0x3020000;
  *(code **)(lVar7 + 0x58) = FUN_71018ff6e0;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  *(undefined1 *)(lVar7 + 0xf3) = 0;
  *(code **)(lVar7 + 0x68) = FUN_71018ff970;
  *(undefined8 *)(lVar7 + 0x70) = 0;
  if (0x12 < *(uint *)(lVar7 + 0xc4)) goto LAB_7101901d40;
  *(undefined4 *)(lVar7 + (long)(int)*(uint *)(lVar7 + 0xc4) * 4 + 0x78) = 0;
  puVar9 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar9 != (undefined8 *)0x0) {
    if (((DAT_7105324750 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105324750), iVar6 != 0)) {
      DAT_7105324758 = 0;
      __cxa_guard_release(&DAT_7105324750);
    }
    auVar43 = (**(code **)*puVar9)(puVar9);
    uVar28 = auVar43._8_8_;
    for (puVar10 = auVar43._0_8_; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
      if (puVar10 == &DAT_7105324758) {
        *(undefined1 *)(lVar7 + 0xf3) = *(undefined1 *)(puVar9 + 1);
        *(undefined1 *)(lVar7 + 0xf8) = *(undefined1 *)((long)puVar9 + 9);
        *(undefined1 *)(lVar7 + 0xf9) = *(undefined1 *)((long)puVar9 + 10);
        cVar3 = *(char *)((long)puVar9 + 0xb);
        *(char *)(lVar7 + 0xfa) = cVar3;
        uVar38 = *(uint *)((long)puVar9 + 0xc);
        *(uint *)(lVar7 + 0xfc) = uVar38;
        uVar37 = *(uint *)(puVar9 + 2);
        *(uint *)(lVar7 + 0x100) = uVar37;
        *(undefined2 *)(lVar7 + 0xf0) = *(undefined2 *)((long)puVar9 + 0x14);
        if ((cVar3 != '\0') || (uVar38 < uVar37)) {
          *(undefined1 *)(lVar7 + 0xfb) = 1;
        }
        break;
      }
    }
  }
  uVar8 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar7;
  if (uVar8 != 0) {
    lVar7 = *(long *)(uVar8 + 0xe8);
    *(undefined8 *)(uVar8 + 0xe8) = 0;
    if (lVar7 != 0) {
      FUN_71032cad20(lVar7);
      uVar28 = extraout_x1_01;
    }
    lVar7 = *(long *)(uVar8 + 0xe0);
    *(undefined8 *)(uVar8 + 0xe0) = 0;
    if (lVar7 != 0) {
      FUN_71032cad20(lVar7);
      uVar28 = extraout_x1_02;
    }
    FUN_710323b9e0(*(long *)(uVar8 + 0xd8),uVar28,(long *********)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar11 = *(long **)(uVar8 + 0xd8);
    *(undefined8 *)(uVar8 + 0xd8) = 0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
    FUN_710392eb40(uVar8);
    lVar7 = *(long *)(param_1 + 0x58);
  }
  plVar11 = (long *)(lVar7 + 0xd8);
  lVar12 = *plVar11;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545908,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar11;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545910,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar11;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545850,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar11;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545858,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar11;
  ppppppppplVar19 = (long *********)(long)*(int *)(lVar12 + 0x70);
  ppppbVar24 = (byte ****)(ulong)*(uint *)(lVar12 + 0x68);
  pppplVar26 = (long ****)0x0;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545860,(long)ppppppppplVar19,(ulong)ppppbVar24,
                 (long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar11;
  uVar28 = extraout_x1_03;
  while (uVar8 = FUN_710323cb80(lVar12,uVar28,ppppppppplVar19,ppppbVar24,pppplVar26,param_6,param_7,
                                param_8), (uVar8 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar28 = extraout_x1_04;
  }
  lVar12 = *(long *)(*(long *)(*DAT_7105329f98 + 0x20) + 8);
  uVar28 = extraout_x1_05;
  while (uVar8 = FUN_710323cb80(lVar12,uVar28,ppppppppplVar19,ppppbVar24,pppplVar26,param_6,param_7,
                                param_8), (uVar8 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar28 = extraout_x1_06;
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,param_7
                          ,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (byte ***)((ulong)local_320 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_00000088;
      ppppppppplVar19 = &local_1f0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6
                                  ,param_7,param_8), puVar9 != (undefined8 *)0x0))
      goto LAB_71018ffed8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71018ffed8:
  *puVar9 = &PTR_FUN_71050b06a8;
  puVar9[1] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0x1ffffffff;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *(undefined1 *)(puVar9 + 0xb) = 0;
  puVar9[0xf] = plVar11;
  *(undefined1 *)(puVar9 + 0xe) = 1;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x2a8,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,
                           param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (byte ***)((ulong)local_320 & 0xffffffff00000000);
      local_1f0 = (long ********)0x2a8;
      ppppppppplVar19 = &local_1f0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      if (((uVar8 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x2a8,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,
                                   param_6,param_7,param_8), puVar10 != (undefined8 *)0x0))
      goto LAB_71018fff60;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_71018fff60:
  *puVar10 = plVar11;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,
                           param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (byte ***)((ulong)local_320 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_00000080;
      ppppppppplVar19 = &local_1f0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      if (((uVar8 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,
                                   param_6,param_7,param_8), puVar13 != (undefined8 *)0x0))
      goto LAB_71018fffb8;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_71018fffb8:
  puVar13[2] = 0;
  *puVar13 = &PTR_FUN_7105181b40;
  puVar13[1] = puVar13 + 2;
  puVar13[5] = 0;
  puVar13[3] = 0;
  puVar13[4] = puVar13 + 5;
  puVar13[8] = 0;
  puVar13[6] = 0;
  puVar13[7] = puVar13 + 8;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  puVar13[0xe] = 0;
  *(undefined2 *)(puVar13 + 0xf) = 0x101;
  puVar13[9] = 0;
  puVar13[10] = puVar13 + 0xb;
  *(undefined4 *)(puVar13 + 0xd) = 3;
  puVar10[1] = puVar13;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,param_7,
                           param_8);
  uVar28 = extraout_x1_07;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (byte ***)((ulong)local_320 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_00000008;
      ppppppppplVar19 = &local_1f0;
      auVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      uVar28 = auVar43._8_8_;
      if (((auVar43._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,
                                   param_7,param_8), uVar28 = extraout_x1_08,
         puVar13 != (undefined8 *)0x0)) goto LAB_7101900064;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101900064:
  FUN_7103773200(puVar13,uVar28,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,param_7,
                 param_8);
  puVar10[2] = puVar13;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,param_7,
                           param_8);
  uVar28 = extraout_x1_09;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (byte ***)((ulong)local_320 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_00000008;
      ppppppppplVar19 = &local_1f0;
      auVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      uVar28 = auVar43._8_8_;
      if (((auVar43._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,
                                   param_7,param_8), uVar28 = extraout_x1_10,
         puVar13 != (undefined8 *)0x0)) goto LAB_71019000cc;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_71019000cc:
  FUN_7103773200(puVar13,uVar28,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,param_7,
                 param_8);
  puVar10[3] = puVar13;
  FUN_7103776290(puVar10 + 4,extraout_x1_11,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6
                 ,param_7,param_8);
  puVar10[10] = &PTR_FUN_71050b0518;
  puVar10[0xb] = 0;
  *(undefined4 *)(puVar10 + 0x14) = 10;
  *(undefined4 *)(puVar10 + 0x22) = 10;
  puVar10[8] = 0;
  puVar10[9] = 0;
  *(undefined4 *)(puVar10 + 0x1b) = 100;
  *(undefined4 *)(puVar10 + 0x29) = 100;
  *(undefined4 *)(puVar10 + 0x2a) = 1;
  *(undefined1 *)(puVar10 + 0x2b) = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0;
  puVar10[0x17] = 0;
  puVar10[0x18] = 0;
  puVar10[0x15] = 0;
  puVar10[0x16] = 0;
  puVar10[0x20] = 0;
  puVar10[0x21] = 0;
  puVar10[0x1e] = 0;
  puVar10[0x1f] = 0;
  puVar10[0x1c] = 0;
  puVar10[0x1d] = 0;
  puVar10[0x27] = 0;
  puVar10[0x28] = 0;
  puVar10[0x25] = 0;
  puVar10[0x26] = 0;
  puVar10[0x23] = 0;
  puVar10[0x24] = 0;
  FUN_71032cc410(puVar10 + 0x2c,extraout_x1_12,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,
                 param_6,param_7,param_8);
  puVar10[0x33] = 0;
  puVar10[0x34] = 0;
  puVar10[0x31] = puVar10;
  puVar10[0x32] = 0;
  puVar10[0x48] = 0xffffffff;
  *(undefined4 *)(puVar10 + 0x49) = 0xffffffff;
  *(undefined1 *)((long)puVar10 + 0x24c) = 0;
  puVar10[0x47] = 0;
  puVar10[0x46] = 0;
  puVar10[0x45] = 0;
  puVar10[0x44] = 0;
  puVar10[0x43] = 0;
  puVar10[0x42] = 0;
  puVar10[0x41] = 0;
  puVar10[0x3f] = 0;
  puVar10[0x40] = 0;
  puVar10[0x3d] = 0;
  puVar10[0x3e] = 0;
  puVar10[0x3b] = 0;
  puVar10[0x3c] = 0;
  puVar10[0x39] = 0;
  puVar10[0x3a] = 0;
  puVar10[0x37] = 0;
  puVar10[0x38] = 0;
  puVar10[0x35] = 0;
  puVar10[0x36] = 0;
  *(undefined4 *)(puVar10 + 0x4a) = DAT_71050b0548;
  *(undefined2 *)((long)puVar10 + 0x254) = 0xffff;
  *(undefined4 *)(puVar10 + 0x4b) = 0;
  puVar10[0x4f] = 0;
  puVar10[0x4e] = 0;
  puVar10[0x4d] = 0;
  puVar10[0x4c] = 0;
  *(undefined4 *)(puVar10 + 0x50) = 0x3f800000;
  puVar10[0x51] = 0xffffffff;
  *(undefined1 *)(puVar10 + 0x52) = 0;
  *(undefined4 *)((long)puVar10 + 0x294) = 0;
  *(undefined1 *)(puVar10 + 0x53) = 0;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0xb8,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,
                           param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (byte ***)((ulong)local_320 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_000000b8;
      ppppppppplVar19 = &local_1f0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      if (((uVar8 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0xb8,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,
                                   param_6,param_7,param_8), puVar13 != (undefined8 *)0x0))
      goto LAB_7101900238;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101900238:
  *puVar13 = &PTR_FUN_710523d9a8;
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,
                           param_7,param_8);
  uVar28 = extraout_x1_13;
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (byte ***)((ulong)local_320 & 0xffffffff00000000);
      local_1f0 = (long ********)&SUB_00000020;
      ppppppppplVar19 = &local_1f0;
      auVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      uVar28 = auVar43._8_8_;
      if (((auVar43._0_8_ & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,
                                   param_6,param_7,param_8), uVar28 = extraout_x1_14,
         puVar14 != (undefined8 *)0x0)) goto LAB_7101900298;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_7101900298:
  puVar14[2] = 0;
  puVar14[3] = 0;
  *puVar14 = 0;
  puVar14[1] = 0;
  *(undefined4 *)((long)puVar13 + 0xa4) = 1;
  *(undefined2 *)(puVar13 + 0x16) = 0x100;
  *(undefined4 *)((long)puVar13 + 0xb4) = 0x3f800000;
  *(undefined1 *)(puVar13 + 3) = 0;
  *(undefined2 *)(puVar13 + 0x12) = 0;
  puVar13[0xb] = 0;
  *(undefined8 *)((long)puVar13 + 0x9c) = 0;
  *(undefined8 *)((long)puVar13 + 0x94) = 0;
  puVar13[0x15] = 0;
  puVar13[1] = puVar14;
  puVar13[2] = 0;
  puVar13[0x10] = 0;
  puVar13[0x11] = 0;
  puVar13[0xe] = 0;
  puVar13[0xf] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar10[0x54] = puVar13;
  puVar10[0x36] = FUN_7101dc6130;
  puVar10[0x37] = 0;
  puVar10[0x38] = FUN_7101dc6140;
  puVar10[0x39] = 0;
  puVar10[0x3a] = FUN_7101dc7420;
  puVar10[0x3b] = 0;
  puVar10[0x3c] = FUN_7101dc74a0;
  puVar10[0x3d] = 0;
  if (0x12 < *(uint *)((long)puVar10 + 0x23c)) goto LAB_7101901d40;
  *(undefined4 *)((long)puVar10 + (long)(int)*(uint *)((long)puVar10 + 0x23c) * 4 + 0x1f0) = 0;
  puVar9[0x10] = puVar10;
  puVar9[2] = &DAT_7105333600;
  *(undefined4 *)(puVar9 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar9 + 0x6c) = DAT_7105333664;
  do {
    uVar38 = DAT_7105333650;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar5) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar38 & 1) != 0);
  puVar9[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar9;
  FUN_71032caea0((long)puVar9,uVar28,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,
                 param_7,param_8);
  lVar12 = *(long *)(lVar7 + 0xe0);
  *(undefined8 **)(lVar7 + 0xe0) = puVar9;
  if (lVar12 != 0) {
    FUN_71032cad20(lVar12);
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,param_7
                          ,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (byte ***)((ulong)local_320 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_00000088;
      ppppppppplVar19 = &local_1f0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6
                                  ,param_7,param_8), puVar9 != (undefined8 *)0x0))
      goto LAB_71019003fc;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71019003fc:
  FUN_7101d8f690(puVar9,plVar11,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,param_6,param_7,
                 param_8);
  puVar9[2] = &DAT_7105333600;
  *(undefined4 *)(puVar9 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar9 + 0x6c) = DAT_7105333664;
  do {
    uVar38 = DAT_7105333650;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar5) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar38 & 1) != 0);
  puVar9[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar9;
  FUN_71032caea0((long)puVar9,extraout_x1_15,(long ****)ppppppppplVar19,ppppbVar24,pppplVar26,
                 param_6,param_7,param_8);
  lVar12 = *(long *)(lVar7 + 0xe8);
  *(undefined8 **)(lVar7 + 0xe8) = puVar9;
  if (lVar12 != 0) {
    FUN_71032cad20(lVar12);
    puVar9 = *(undefined8 **)(lVar7 + 0xe8);
  }
  pppplVar26 = (long ****)(ulong)(*(char *)(lVar7 + 0xf2) == '\0');
  uVar28 = 1;
  FUN_7101d88b10((undefined8 *)puVar9[0x10],1,0xffff,1,pppplVar26,1,param_7,param_8);
  *(undefined1 *)
   (*(long *)(*(long *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0xe8) + 0x80) + 0x108) + 0x600)
   + 0x4aa) = 0;
  puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0xe0) + 0x80);
  cVar3 = *(char *)(lVar7 + 0xf2);
  FUN_71032cbf30(puVar9 + 2,*(long *)*puVar9,(ulong *)&DAT_7104545908,(byte ****)0x1,pppplVar26,
                 uVar28,param_7,param_8);
  puVar10 = puVar9 + 4;
  FUN_71032cbf30(puVar9 + 3,*(long *)*puVar9,(ulong *)&DAT_7104545910,(byte ****)0x1,pppplVar26,
                 uVar28,param_7,param_8);
  lVar12 = *(long *)puVar9[2];
  if (puVar10 != (undefined8 *)(lVar12 + 8)) {
    *(undefined8 *)puVar9[5] = **(undefined8 **)(lVar12 + 0x10);
    *(undefined8 *)(puVar9[5] + 8) = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 8);
    lVar33 = *(long *)(lVar12 + 0x10);
    lVar12 = puVar9[5];
    if (lVar12 != lVar33) {
      **(undefined8 **)(lVar12 + 0x18) = **(undefined8 **)(lVar33 + 0x18);
      *(undefined8 *)(*(long *)(lVar12 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar33 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar12 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar33 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar12 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar33 + 0x18) + 0x18);
    }
  }
  pcVar1 = "on_plt_menu_lyt_00";
  if (cVar3 != '\0') {
    pcVar1 = "off_plt_menu_lyt_00";
  }
  FUN_7103778300(0x3f800000,puVar9[5],(long)pcVar1);
  lVar12 = **(long **)puVar9[2];
  *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0x18) = 0x100;
  *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0x1c) = 0x200;
  *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0x20) = 0x80;
  *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0x24) = 0x40010;
  *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0xe0) = 0x380;
  *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0xdc) = 0x380;
  local_1f0 = (long ********)0x0;
  local_1e8 = 0x101;
  local_1e2 = 0;
  local_1e6 = 0;
  local_1e0 = 1;
  local_1dc = 1;
  local_1da = 1;
  local_1d8 = &DAT_41f0000000000000;
  local_1d0 = 0;
  local_1a0 = (long *)0x0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d0 = 0;
  FUN_7101989b70(&local_320,&local_1f0);
  local_318._0_3_ = CONCAT12(1,(undefined2)local_318);
  plVar11 = puVar9 + 6;
  ppppbVar24 = (byte ****)&local_320;
  FUN_7103770b30(plVar11,puVar10,(long ****)"selector_0",ppppbVar24,pppplVar26,uVar28,param_7,
                 param_8);
  FUN_71037717d0(plVar11,0,"set_btn_tab_00",ppppbVar24,pppplVar26,uVar28,param_7,param_8);
  lVar12 = *(long *)(puVar9[6] + 0x1b8);
  if (lVar12 != 0) {
    lVar33 = puVar9[6] + 0x1b8;
    lVar31 = lVar33;
    lVar35 = lVar12;
    do {
      bVar5 = *(int *)(lVar35 + 0x20) < 0;
      if (!bVar5) {
        lVar31 = lVar35;
      }
      lVar35 = *(long *)(lVar35 + (ulong)bVar5 * 8);
    } while (lVar35 != 0);
    if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 1)) &&
       (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
      (**(code **)(*plVar39 + 0x1f8))(plVar39,1);
      (**(code **)(*plVar39 + 0x388))(plVar39,0,0);
      lVar33 = *plVar11 + 0x1b8;
      lVar12 = *(long *)(*plVar11 + 0x1b8);
    }
    lVar31 = lVar33;
    if (lVar12 != 0) {
      do {
        bVar5 = *(int *)(lVar12 + 0x20) < 0;
        if (!bVar5) {
          lVar31 = lVar12;
        }
        lVar12 = *(long *)(lVar12 + (ulong)bVar5 * 8);
      } while (lVar12 != 0);
      if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 1)) &&
         (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
        (**(code **)(*plVar39 + 0x208))(plVar39,0);
        (**(code **)(*plVar39 + 0x388))(plVar39,1,0);
      }
    }
  }
  FUN_71037717d0(plVar11,1,"set_btn_tab_01",ppppbVar24,pppplVar26,uVar28,param_7,param_8);
  lVar12 = *(long *)(*plVar11 + 0x1b8);
  if (lVar12 != 0) {
    lVar33 = *plVar11 + 0x1b8;
    lVar31 = lVar33;
    lVar35 = lVar12;
    do {
      if (0 < *(int *)(lVar35 + 0x20)) {
        lVar31 = lVar35;
      }
      lVar35 = *(long *)(lVar35 + (ulong)(*(int *)(lVar35 + 0x20) < 1) * 8);
    } while (lVar35 != 0);
    if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 2)) &&
       (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
      (**(code **)(*plVar39 + 0x1f8))(plVar39,1);
      (**(code **)(*plVar39 + 0x388))(plVar39,0,0);
      lVar33 = *plVar11 + 0x1b8;
      lVar12 = *(long *)(*plVar11 + 0x1b8);
    }
    lVar31 = lVar33;
    if (lVar12 != 0) {
      do {
        if (0 < *(int *)(lVar12 + 0x20)) {
          lVar31 = lVar12;
        }
        lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 1) * 8);
      } while (lVar12 != 0);
      if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 2)) &&
         (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
        (**(code **)(*plVar39 + 0x208))(plVar39,0);
        (**(code **)(*plVar39 + 0x388))(plVar39,1,0);
      }
    }
  }
  FUN_71037717d0(plVar11,2,"set_btn_tab_02",ppppbVar24,pppplVar26,uVar28,param_7,param_8);
  lVar12 = *(long *)(*plVar11 + 0x1b8);
  if (lVar12 != 0) {
    lVar33 = *plVar11 + 0x1b8;
    lVar31 = lVar33;
    lVar35 = lVar12;
    do {
      if (1 < *(int *)(lVar35 + 0x20)) {
        lVar31 = lVar35;
      }
      lVar35 = *(long *)(lVar35 + (ulong)(*(int *)(lVar35 + 0x20) < 2) * 8);
    } while (lVar35 != 0);
    if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 3)) &&
       (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
      (**(code **)(*plVar39 + 0x1f8))(plVar39,1);
      (**(code **)(*plVar39 + 0x388))(plVar39,0,0);
      lVar33 = *plVar11 + 0x1b8;
      lVar12 = *(long *)(*plVar11 + 0x1b8);
    }
    lVar31 = lVar33;
    if (lVar12 != 0) {
      do {
        if (1 < *(int *)(lVar12 + 0x20)) {
          lVar31 = lVar12;
        }
        lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 2) * 8);
      } while (lVar12 != 0);
      if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 3)) &&
         (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
        (**(code **)(*plVar39 + 0x208))(plVar39,0);
        (**(code **)(*plVar39 + 0x388))(plVar39,1,0);
      }
    }
  }
  FUN_71037717d0(plVar11,3,"set_btn_tab_03",ppppbVar24,pppplVar26,uVar28,param_7,param_8);
  lVar12 = *(long *)(*plVar11 + 0x1b8);
  if (lVar12 != 0) {
    lVar33 = *plVar11 + 0x1b8;
    lVar31 = lVar33;
    lVar35 = lVar12;
    do {
      if (2 < *(int *)(lVar35 + 0x20)) {
        lVar31 = lVar35;
      }
      lVar35 = *(long *)(lVar35 + (ulong)(*(int *)(lVar35 + 0x20) < 3) * 8);
    } while (lVar35 != 0);
    if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 4)) &&
       (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
      (**(code **)(*plVar39 + 0x1f8))(plVar39,1);
      (**(code **)(*plVar39 + 0x388))(plVar39,0,0);
      lVar33 = *plVar11 + 0x1b8;
      lVar12 = *(long *)(*plVar11 + 0x1b8);
    }
    lVar31 = lVar33;
    if (lVar12 != 0) {
      do {
        if (2 < *(int *)(lVar12 + 0x20)) {
          lVar31 = lVar12;
        }
        lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 3) * 8);
      } while (lVar12 != 0);
      if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 4)) &&
         (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
        (**(code **)(*plVar39 + 0x208))(plVar39,0);
        (**(code **)(*plVar39 + 0x388))(plVar39,1,0);
      }
    }
  }
  FUN_71037717d0(plVar11,4,"set_btn_tab_04",ppppbVar24,pppplVar26,uVar28,param_7,param_8);
  lVar12 = *(long *)(*plVar11 + 0x1b8);
  if (lVar12 != 0) {
    lVar33 = *plVar11 + 0x1b8;
    lVar31 = lVar33;
    lVar35 = lVar12;
    do {
      if (3 < *(int *)(lVar35 + 0x20)) {
        lVar31 = lVar35;
      }
      lVar35 = *(long *)(lVar35 + (ulong)(*(int *)(lVar35 + 0x20) < 4) * 8);
    } while (lVar35 != 0);
    if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 5)) &&
       (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
      (**(code **)(*plVar39 + 0x1f8))(plVar39,1);
      (**(code **)(*plVar39 + 0x388))(plVar39,0,0);
      lVar33 = *plVar11 + 0x1b8;
      lVar12 = *(long *)(*plVar11 + 0x1b8);
    }
    lVar31 = lVar33;
    if (lVar12 != 0) {
      do {
        if (3 < *(int *)(lVar12 + 0x20)) {
          lVar31 = lVar12;
        }
        lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 4) * 8);
      } while (lVar12 != 0);
      if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 5)) &&
         (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
        (**(code **)(*plVar39 + 0x208))(plVar39,0);
        (**(code **)(*plVar39 + 0x388))(plVar39,1,0);
      }
    }
  }
  FUN_7103771a80(plVar11,*(int *)(puVar9 + 0x4a),0);
  (**(code **)(*(long *)puVar9[6] + 0x70))((long *)puVar9[6],1);
  (**(code **)(*(long *)puVar9[6] + 0x60))((long *)puVar9[6],0);
  if (alStack_230 == local_210) {
    pcVar30 = *(code **)(*local_210 + 0x20);
LAB_7101900bc4:
    (*pcVar30)();
  }
  else if (local_210 != (long *)0x0) {
    pcVar30 = *(code **)(*local_210 + 0x28);
    goto LAB_7101900bc4;
  }
  if (alStack_260 == local_240) {
    pcVar30 = *(code **)(*local_240 + 0x20);
LAB_7101900bf4:
    (*pcVar30)();
  }
  else if (local_240 != (long *)0x0) {
    pcVar30 = *(code **)(*local_240 + 0x28);
    goto LAB_7101900bf4;
  }
  if (alStack_290 == local_270) {
    pcVar30 = *(code **)(*local_270 + 0x20);
LAB_7101900c24:
    (*pcVar30)();
  }
  else if (local_270 != (long *)0x0) {
    pcVar30 = *(code **)(*local_270 + 0x28);
    goto LAB_7101900c24;
  }
  if (alStack_2c0 == local_2a0) {
    pcVar30 = *(code **)(*local_2a0 + 0x20);
LAB_7101900c54:
    (*pcVar30)();
  }
  else if (local_2a0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_2a0 + 0x28);
    goto LAB_7101900c54;
  }
  if (alStack_2f0 == local_2d0) {
    pcVar30 = *(code **)(*local_2d0 + 0x20);
LAB_7101900c84:
    (*pcVar30)();
  }
  else if (local_2d0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_2d0 + 0x28);
    goto LAB_7101900c84;
  }
  FUN_7101989b70(&local_320,&local_1f0);
  plVar11 = puVar9 + 7;
  ppppbVar24 = (byte ****)&local_320;
  local_318._0_3_ = CONCAT12(1,(undefined2)local_318);
  FUN_7103770b30(plVar11,puVar10,(long ****)"selector_1",ppppbVar24,pppplVar26,uVar28,param_7,
                 param_8);
  FUN_71037717d0(plVar11,0,"set_spirits_tab_l_btn",ppppbVar24,pppplVar26,uVar28,param_7,param_8);
  lVar12 = *(long *)(puVar9[7] + 0x1b8);
  if (lVar12 != 0) {
    lVar33 = puVar9[7] + 0x1b8;
    lVar31 = lVar33;
    lVar35 = lVar12;
    do {
      bVar5 = *(int *)(lVar35 + 0x20) < 0;
      if (!bVar5) {
        lVar31 = lVar35;
      }
      lVar35 = *(long *)(lVar35 + (ulong)bVar5 * 8);
    } while (lVar35 != 0);
    if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 1)) &&
       (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
      (**(code **)(*plVar39 + 0x1f8))(plVar39,1);
      (**(code **)(*plVar39 + 0x388))(plVar39,0,0);
      lVar33 = *plVar11 + 0x1b8;
      lVar12 = *(long *)(*plVar11 + 0x1b8);
    }
    lVar31 = lVar33;
    if (lVar12 != 0) {
      do {
        bVar5 = *(int *)(lVar12 + 0x20) < 0;
        if (!bVar5) {
          lVar31 = lVar12;
        }
        lVar12 = *(long *)(lVar12 + (ulong)bVar5 * 8);
      } while (lVar12 != 0);
      if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 1)) &&
         (plVar39 = *(long **)(lVar31 + 0x28), plVar39 != (long *)0x0)) {
        (**(code **)(*plVar39 + 0x208))(plVar39,1);
        (**(code **)(*plVar39 + 0x388))(plVar39,0,0);
      }
    }
  }
  FUN_71037717d0(plVar11,1,"set_spirits_tab_r_btn",ppppbVar24,pppplVar26,uVar28,param_7,param_8);
  lVar12 = *plVar11;
  lVar33 = *(long *)(lVar12 + 0x1b8);
  if (lVar33 != 0) {
    lVar31 = lVar12 + 0x1b8;
    lVar35 = lVar31;
    lVar36 = lVar33;
    do {
      if (0 < *(int *)(lVar36 + 0x20)) {
        lVar35 = lVar36;
      }
      lVar36 = *(long *)(lVar36 + (ulong)(*(int *)(lVar36 + 0x20) < 1) * 8);
    } while (lVar36 != 0);
    if (((lVar35 != lVar31) && (*(int *)(lVar35 + 0x20) < 2)) &&
       (plVar39 = *(long **)(lVar35 + 0x28), plVar39 != (long *)0x0)) {
      (**(code **)(*plVar39 + 0x1f8))(plVar39,1);
      (**(code **)(*plVar39 + 0x388))(plVar39,0,0);
      lVar12 = *plVar11;
      lVar33 = *(long *)(lVar12 + 0x1b8);
      lVar31 = lVar12 + 0x1b8;
    }
    lVar35 = lVar31;
    if (lVar33 != 0) {
      do {
        if (0 < *(int *)(lVar33 + 0x20)) {
          lVar35 = lVar33;
        }
        lVar33 = *(long *)(lVar33 + (ulong)(*(int *)(lVar33 + 0x20) < 1) * 8);
      } while (lVar33 != 0);
      if (((lVar35 != lVar31) && (*(int *)(lVar35 + 0x20) < 2)) &&
         (plVar39 = *(long **)(lVar35 + 0x28), plVar39 != (long *)0x0)) {
        (**(code **)(*plVar39 + 0x208))(plVar39,1);
        (**(code **)(*plVar39 + 0x388))(plVar39,0,0);
        lVar12 = *plVar11;
      }
    }
  }
  FUN_7103771930(lVar12,0,(long ****)0x6,(byte ****)0x0,pppplVar26,uVar28,param_7,param_8);
  FUN_7103771930(*plVar11,1,(long ****)&DAT_00000007,(byte ****)0x0,pppplVar26,uVar28,param_7,
                 param_8);
  (**(code **)(*(long *)*plVar11 + 0x70))((long *)*plVar11,1);
  (**(code **)(*(long *)*plVar11 + 0x60))((long *)*plVar11,0);
  if (alStack_230 == local_210) {
    pcVar30 = *(code **)(*local_210 + 0x20);
LAB_7101900f34:
    (*pcVar30)();
  }
  else if (local_210 != (long *)0x0) {
    pcVar30 = *(code **)(*local_210 + 0x28);
    goto LAB_7101900f34;
  }
  if (alStack_260 == local_240) {
    pcVar30 = *(code **)(*local_240 + 0x20);
LAB_7101900f64:
    (*pcVar30)();
  }
  else if (local_240 != (long *)0x0) {
    pcVar30 = *(code **)(*local_240 + 0x28);
    goto LAB_7101900f64;
  }
  if (alStack_290 == local_270) {
    pcVar30 = *(code **)(*local_270 + 0x20);
LAB_7101900f94:
    (*pcVar30)();
  }
  else if (local_270 != (long *)0x0) {
    pcVar30 = *(code **)(*local_270 + 0x28);
    goto LAB_7101900f94;
  }
  if (alStack_2c0 == local_2a0) {
    pcVar30 = *(code **)(*local_2a0 + 0x20);
LAB_7101900fc4:
    (*pcVar30)();
  }
  else if (local_2a0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_2a0 + 0x28);
    goto LAB_7101900fc4;
  }
  if (alStack_2f0 == local_2d0) {
    pcVar30 = *(code **)(*local_2d0 + 0x20);
LAB_7101900ff4:
    (*pcVar30)();
  }
  else if (local_2d0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_2d0 + 0x28);
    goto LAB_7101900ff4;
  }
  FUN_7101989b70(&local_320,&local_1f0);
  plVar11 = puVar9 + 8;
  ppppbVar24 = (byte ****)&local_320;
  local_318._0_5_ = CONCAT14(1,(undefined4)local_318);
  FUN_7103770b30(plVar11,puVar10,(long ****)"selector_2",ppppbVar24,pppplVar26,uVar28,param_7,
                 param_8);
  FUN_71037717d0(plVar11,0,"set_scr_sort",ppppbVar24,pppplVar26,uVar28,param_7,param_8);
  lVar12 = puVar9[8];
  lVar33 = *(long *)(lVar12 + 0x1b8);
  if (lVar33 != 0) {
    lVar31 = lVar12 + 0x1b8;
    lVar35 = lVar31;
    lVar36 = lVar33;
    do {
      bVar5 = *(int *)(lVar36 + 0x20) < 0;
      if (!bVar5) {
        lVar35 = lVar36;
      }
      lVar36 = *(long *)(lVar36 + (ulong)bVar5 * 8);
    } while (lVar36 != 0);
    if (((lVar35 != lVar31) && (*(int *)(lVar35 + 0x20) < 1)) &&
       (plVar39 = *(long **)(lVar35 + 0x28), plVar39 != (long *)0x0)) {
      (**(code **)(*plVar39 + 0x1f8))(plVar39,1);
      (**(code **)(*plVar39 + 0x388))(plVar39,0,0);
      lVar12 = *plVar11;
      lVar33 = *(long *)(lVar12 + 0x1b8);
      lVar31 = lVar12 + 0x1b8;
    }
    lVar35 = lVar31;
    if (lVar33 != 0) {
      do {
        bVar5 = *(int *)(lVar33 + 0x20) < 0;
        if (!bVar5) {
          lVar35 = lVar33;
        }
        lVar33 = *(long *)(lVar33 + (ulong)bVar5 * 8);
      } while (lVar33 != 0);
      if (((lVar35 != lVar31) && (*(int *)(lVar35 + 0x20) < 1)) &&
         (plVar39 = *(long **)(lVar35 + 0x28), plVar39 != (long *)0x0)) {
        (**(code **)(*plVar39 + 0x208))(plVar39,1);
        (**(code **)(*plVar39 + 0x388))(plVar39,0,0);
        lVar12 = *plVar11;
      }
    }
  }
  pppplVar20 = (long ****)&DAT_00000008;
  ppppbVar24 = (byte ****)0x0;
  FUN_7103771930(lVar12,0,(long ****)&DAT_00000008,(byte ****)0x0,pppplVar26,uVar28,param_7,param_8)
  ;
  (**(code **)(*(long *)*plVar11 + 0x70))((long *)*plVar11,1);
  (**(code **)(*(long *)*plVar11 + 0x60))((long *)*plVar11,0);
  if (alStack_230 == local_210) {
    pcVar30 = *(code **)(*local_210 + 0x20);
LAB_7101901190:
    (*pcVar30)();
  }
  else if (local_210 != (long *)0x0) {
    pcVar30 = *(code **)(*local_210 + 0x28);
    goto LAB_7101901190;
  }
  if (alStack_260 == local_240) {
    pcVar30 = *(code **)(*local_240 + 0x20);
LAB_71019011c0:
    (*pcVar30)();
  }
  else if (local_240 != (long *)0x0) {
    pcVar30 = *(code **)(*local_240 + 0x28);
    goto LAB_71019011c0;
  }
  if (alStack_290 == local_270) {
    pcVar30 = *(code **)(*local_270 + 0x20);
LAB_71019011f0:
    (*pcVar30)();
  }
  else if (local_270 != (long *)0x0) {
    pcVar30 = *(code **)(*local_270 + 0x28);
    goto LAB_71019011f0;
  }
  if (alStack_2c0 == local_2a0) {
    pcVar30 = *(code **)(*local_2a0 + 0x20);
LAB_7101901220:
    (*pcVar30)();
  }
  else if (local_2a0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_2a0 + 0x28);
    goto LAB_7101901220;
  }
  if (alStack_2f0 == local_2d0) {
    pcVar30 = *(code **)(*local_2d0 + 0x20);
LAB_7101901250:
    (*pcVar30)();
  }
  else if (local_2d0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_2d0 + 0x28);
    goto LAB_7101901250;
  }
  local_b8 = (long ****)0x0;
  local_b0 = (long ****)0x0;
  local_a8 = (long ****)0x0;
  FUN_7101dc7fb0((long)puVar9,(ulong *)&local_b8,pppplVar20,ppppbVar24,pppplVar26,uVar28,param_7,
                 param_8);
  if ((long *****)(puVar9 + 0xb) != &local_b8) {
    pppplVar20 = local_b0;
    FUN_7101dbd0a0(puVar9 + 0xb,local_b8,local_b0,ppppbVar24,pppplVar26,uVar28,param_7,param_8);
  }
  uVar38 = *(uint *)(puVar9[6] + 0x254);
  if (4 < uVar38) goto LAB_7101901d40;
  pppplVar16 = (long ****)(puVar9 + 10);
  FUN_7101dbd250((long)pppplVar16,*(uint *)(&DAT_71050b054c + (long)(int)uVar38 * 0xc),pppplVar20,
                 ppppbVar24,pppplVar26,uVar28,param_7,param_8);
  local_320 = (byte ***)0x0;
  local_318 = 0x4248000041800000;
  local_310 = 0x101013f800000;
  uStack_306 = 1;
  uStack_308 = 0;
  local_2d0 = (long *)0x0;
  local_2a0 = (long *)0x0;
  local_270 = (long *)0x0;
  local_240 = (long *)0x0;
  local_210 = (long *)0x0;
  uStack_2ff = 0;
  uStack_301 = 0;
  uStack_300 = 0;
  uStack_305 = 0;
  FUN_710337e790((long)&local_320);
  local_a0 = (undefined **)&DAT_71050b0618;
  local_80 = &local_a0;
  FUN_71003cb050((long *)&local_a0,alStack_2c0);
  if (&local_a0 == local_80) {
    (*(code *)(*local_80)[4])();
  }
  else if (local_80 != (undefined ***)0x0) {
    (*(code *)(*local_80)[5])();
  }
  local_310 = CONCAT44(0x10001,(undefined4)local_310);
  local_320 = (byte ***)
              CONCAT44((int)((ulong)((long)local_b0 - (long)local_b8) >> 1),(undefined4)local_320);
  FUN_7103781a20(puVar9 + 9,puVar10,(byte ****)"scroll",(byte ****)&local_320,pppplVar16,uVar28,
                 param_7,param_8);
  (**(code **)(*(long *)puVar9[9] + 0x70))((long *)puVar9[9],1);
  lVar12 = (long)(int)uVar38 * 0xc;
  lVar33 = puVar9[9];
  uVar25 = 1;
  fVar40 = *(float *)(&DAT_71050b0554 + lVar12);
  *(undefined8 *)(lVar33 + 0x248) = 0x3f800000;
  fVar42 = *(float *)(lVar33 + 0x26c);
  if (fVar40 <= *(float *)(lVar33 + 0x26c)) {
    fVar42 = fVar40;
  }
  fVar41 = *(float *)(lVar33 + 0x268);
  if (*(float *)(lVar33 + 0x268) <= fVar40) {
    fVar41 = fVar42;
  }
  *(float *)(lVar33 + 0x264) = fVar41;
  *(float *)(lVar33 + 0x260) = fVar41;
  uVar21 = 0;
  FUN_7103783c10(puVar9 + 9,*(int *)(&DAT_71050b0550 + lVar12),0,1,pppplVar16,uVar28,param_7,param_8
                );
  if (local_b8 == local_b0) {
    uVar38 = 0;
  }
  else {
    lVar12 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar38 = 0;
    pppplVar26 = local_b8;
    do {
      sVar2 = *(short *)pppplVar26;
      uVar37 = 0;
      if ((sVar2 != -1) && (iVar6 = (int)sVar2, iVar6 < 2000)) {
        if ((uint)*(ushort *)(lVar12 + (long)iVar6 * 2 + 0x60) <
            (uint)((int)((ulong)(*(long *)(lVar12 + 0x28) - *(long *)(lVar12 + 0x20)) >> 6) *
                  -0x33333333)) {
          uVar37 = *(byte *)(*(long *)(*DAT_7105329f98 + 0x30) + (long)iVar6 * 0x24 + 1) >> 3 & 1;
        }
        else {
          uVar37 = 0;
        }
      }
      pppplVar26 = (long ****)((long)pppplVar26 + 2);
      uVar38 = uVar38 + uVar37;
    } while (local_b0 != pppplVar26);
  }
  uVar8 = (long)local_b0 - (long)local_b8;
  FUN_7103776910(&local_a0,(long)puVar10,(long ****)"set_txt_count_num",uVar21,uVar25,pppplVar16,
                 uVar28,param_7,param_8);
  pppplVar26 = (long ****)0x2;
  ppppbVar24 = (byte ****)(ulong)uVar38;
  pppplVar20 = (long ****)(uVar8 >> 1 & 0xffffffff);
  FUN_710377a280((long)&local_a0,(byte *)"mnu_spirits_directory_unlock_n",2);
  ppuVar15 = local_98;
  local_a0 = &PTR_FUN_710523d9a8;
  local_98 = (undefined **)0x0;
  if (ppuVar15 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar15);
  }
  if (alStack_230 == local_210) {
    pcVar30 = *(code **)(*local_210 + 0x20);
LAB_7101901514:
    (*pcVar30)();
  }
  else if (local_210 != (long *)0x0) {
    pcVar30 = *(code **)(*local_210 + 0x28);
    goto LAB_7101901514;
  }
  if (alStack_260 == local_240) {
    pcVar30 = *(code **)(*local_240 + 0x20);
LAB_7101901544:
    (*pcVar30)();
  }
  else if (local_240 != (long *)0x0) {
    pcVar30 = *(code **)(*local_240 + 0x28);
    goto LAB_7101901544;
  }
  if (alStack_290 == local_270) {
    pcVar30 = *(code **)(*local_270 + 0x20);
LAB_7101901574:
    (*pcVar30)();
  }
  else if (local_270 != (long *)0x0) {
    pcVar30 = *(code **)(*local_270 + 0x28);
    goto LAB_7101901574;
  }
  if (alStack_2c0 == local_2a0) {
    pcVar30 = *(code **)(*local_2a0 + 0x20);
LAB_71019015a4:
    (*pcVar30)();
  }
  else if (local_2a0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_2a0 + 0x28);
    goto LAB_71019015a4;
  }
  if (alStack_2f0 == local_2d0) {
    pcVar30 = *(code **)(*local_2d0 + 0x20);
LAB_71019015d4:
    (*pcVar30)();
  }
  else if (local_2d0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_2d0 + 0x28);
    goto LAB_71019015d4;
  }
  if (local_b8 != (long ****)0x0) {
    local_b0 = local_b8;
    FUN_710392eb40((ulong)local_b8);
  }
  ppuVar15 = (undefined **)
             FUN_710392e290(0x10,0x168,pppplVar26,ppppbVar24,pppplVar20,uVar28,param_7,param_8);
  uVar25 = extraout_x1_16;
  if (ppuVar15 == (undefined **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_320 = (byte ***)&DAT_00000168;
      pppplVar26 = (long ****)&local_320;
      auVar43 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar25 = auVar43._8_8_;
      if (((auVar43._0_8_ & 1) != 0) &&
         (ppuVar15 = (undefined **)
                     FUN_710392e290(0x10,0x168,pppplVar26,ppppbVar24,pppplVar20,uVar28,param_7,
                                    param_8), uVar25 = extraout_x1_17, ppuVar15 != (undefined **)0x0
         )) goto LAB_710190163c;
    }
    ppuVar15 = (undefined **)0x0;
  }
LAB_710190163c:
  local_90 = ppuVar15 + 0x2d;
  *ppuVar15 = (undefined *)0x0;
  for (uVar8 = 0; "mnu_spirits_sort_20"[uVar8] != '\0'; uVar8 = uVar8 + 2) {
    *(char *)((long)ppuVar15 + uVar8 + 8) = "mnu_spirits_sort_20"[uVar8];
    if ("mnu_spirits_sort_20"[uVar8 + 1] == '\0') {
      uVar8 = uVar8 + 1;
      break;
    }
    *(char *)((long)ppuVar15 + uVar8 + 9) = "mnu_spirits_sort_20"[uVar8 + 1];
  }
  *(undefined1 *)((long)ppuVar15 + (uVar8 & 0xffffffff) + 8) = 0;
  *(uint *)((long)ppuVar15 + 4) = (uint)uVar8;
  uVar29 = (uint)*(byte *)(ppuVar15 + 1);
  uVar37 = 0x811c9dc5;
  uVar38 = uVar37;
  if (*(byte *)(ppuVar15 + 1) != 0) {
    pbVar34 = (byte *)((long)ppuVar15 + 9);
    do {
      uVar38 = uVar38 * 0x89 ^ uVar29;
      uVar29 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar29 != 0);
  }
  ppuVar32 = ppuVar15 + 9;
  *(uint *)ppuVar15 = uVar38;
  *ppuVar32 = (undefined *)0x0;
  for (uVar8 = 0; "mnu_spirits_sort_01"[uVar8] != '\0'; uVar8 = uVar8 + 2) {
    *(char *)((long)ppuVar15 + uVar8 + 0x50) = "mnu_spirits_sort_01"[uVar8];
    if ("mnu_spirits_sort_01"[uVar8 + 1] == '\0') {
      uVar8 = uVar8 + 1;
      break;
    }
    *(char *)((long)ppuVar15 + uVar8 + 0x51) = "mnu_spirits_sort_01"[uVar8 + 1];
  }
  *(undefined1 *)((long)ppuVar32 + (uVar8 & 0xffffffff) + 8) = 0;
  *(uint *)((long)ppuVar15 + 0x4c) = (uint)uVar8;
  uVar29 = (uint)*(byte *)(ppuVar15 + 10);
  uVar38 = uVar37;
  if (*(byte *)(ppuVar15 + 10) != 0) {
    pbVar34 = (byte *)((long)ppuVar15 + 0x51);
    do {
      uVar38 = uVar38 * 0x89 ^ uVar29;
      uVar29 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar29 != 0);
  }
  *(uint *)(ppuVar15 + 9) = uVar38;
  ppuVar15[0x12] = (undefined *)0x0;
  for (uVar8 = 0; "mnu_spirits_sort_22"[uVar8] != '\0'; uVar8 = uVar8 + 2) {
    *(char *)((long)ppuVar15 + uVar8 + 0x98) = "mnu_spirits_sort_22"[uVar8];
    if ("mnu_spirits_sort_22"[uVar8 + 1] == '\0') {
      uVar8 = uVar8 + 1;
      break;
    }
    *(char *)((long)ppuVar15 + uVar8 + 0x99) = "mnu_spirits_sort_22"[uVar8 + 1];
  }
  *(undefined1 *)((long)ppuVar32 + (uVar8 & 0xffffffff) + 0x50) = 0;
  uVar29 = (uint)*(byte *)(ppuVar15 + 0x13);
  *(uint *)((long)ppuVar15 + 0x94) = (uint)uVar8;
  uVar38 = uVar37;
  if (*(byte *)(ppuVar15 + 0x13) != 0) {
    pbVar34 = (byte *)((long)ppuVar15 + 0x99);
    do {
      uVar38 = uVar38 * 0x89 ^ uVar29;
      uVar29 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar29 != 0);
  }
  *(uint *)(ppuVar15 + 0x12) = uVar38;
  ppuVar32 = ppuVar15 + 0x1b;
  ppuVar15[0x1b] = (undefined *)0x0;
  for (uVar8 = 0; "mnu_spirits_sort_03"[uVar8] != '\0'; uVar8 = uVar8 + 2) {
    *(char *)((long)ppuVar15 + uVar8 + 0xe0) = "mnu_spirits_sort_03"[uVar8];
    if ("mnu_spirits_sort_03"[uVar8 + 1] == '\0') {
      uVar8 = uVar8 + 1;
      break;
    }
    *(char *)((long)ppuVar15 + uVar8 + 0xe1) = "mnu_spirits_sort_03"[uVar8 + 1];
  }
  *(undefined1 *)((long)ppuVar32 + (uVar8 & 0xffffffff) + 8) = 0;
  *(uint *)((long)ppuVar15 + 0xdc) = (uint)uVar8;
  uVar29 = (uint)*(byte *)(ppuVar15 + 0x1c);
  uVar38 = uVar37;
  if (*(byte *)(ppuVar15 + 0x1c) != 0) {
    pbVar34 = (byte *)((long)ppuVar15 + 0xe1);
    do {
      uVar38 = uVar38 * 0x89 ^ uVar29;
      uVar29 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar29 != 0);
  }
  *(uint *)ppuVar32 = uVar38;
  local_98 = ppuVar15 + 0x24;
  local_a0 = ppuVar15;
  if (local_98 < local_90) {
    *local_98 = (undefined *)0x0;
    for (uVar8 = 0; "mnu_spirits_sort_00"[uVar8] != '\0'; uVar8 = uVar8 + 2) {
      *(char *)((long)ppuVar32 + uVar8 + 0x50) = "mnu_spirits_sort_00"[uVar8];
      if ("mnu_spirits_sort_00"[uVar8 + 1] == '\0') {
        uVar8 = uVar8 + 1;
        break;
      }
      *(char *)((long)ppuVar32 + uVar8 + 0x51) = "mnu_spirits_sort_00"[uVar8 + 1];
    }
    *(undefined1 *)((long)ppuVar15 + (uVar8 & 0xffffffff) + 0x128) = 0;
    *(uint *)((long)ppuVar15 + 0x124) = (uint)uVar8;
    uVar29 = (uint)*(byte *)(ppuVar15 + 0x25);
    uVar38 = uVar37;
    if (*(byte *)(ppuVar15 + 0x25) != 0) {
      pbVar34 = (byte *)((long)ppuVar15 + 0x129);
      do {
        uVar38 = uVar38 * 0x89 ^ uVar29;
        uVar29 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar29 != 0);
    }
    *(uint *)local_98 = uVar38;
    local_98 = ppuVar15 + 0x2d;
  }
  else {
    FUN_7101d79b80((ulong *)&local_a0,(long *)&PTR_s_mnu_spirits_sort_00_71050b05c8,pppplVar26,
                   ppppbVar24,pppplVar20,uVar28,param_7,param_8);
    uVar25 = extraout_x1_18;
  }
  local_310 = 0;
  uStack_308 = 0;
  uStack_306 = 0;
  uStack_305 = 0;
  uStack_301 = 0;
  FUN_7103776290((undefined8 *)&uStack_300,uVar25,pppplVar26,ppppbVar24,pppplVar20,uVar28,param_7,
                 param_8);
  local_318 = local_318 & 0xffffffff00000000;
  local_310 = _ConstantZero;
  uStack_308 = (undefined2)uRam0000007107459008;
  uStack_306 = (undefined1)((ulong)uRam0000007107459008 >> 0x10);
  uStack_305 = (undefined4)((ulong)uRam0000007107459008 >> 0x18);
  uStack_301 = (undefined1)((ulong)uRam0000007107459008 >> 0x38);
  *(undefined8 *)((long)local_2f8 + 8) = 0;
  local_320 = (byte ***)0x10000000a;
  FUN_7103776640(&local_b8,(long)puVar10,(byte ****)"set_scr_sort",pppplVar26,ppppbVar24,pppplVar20,
                 uVar28,param_7,param_8);
  pppplVar4 = local_b0;
  pppplVar16 = local_2f8;
  local_b0 = (long ****)0x0;
  local_2f8 = pppplVar4;
  if (pppplVar16 != (long ****)0x0) {
    uVar8 = *(ulong *)((long)pppplVar16 + 0x18);
    *(undefined ***)((long)pppplVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)pppplVar16 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40((ulong)pppplVar16);
  }
  local_b8 = (long ****)&PTR_FUN_710523d988;
  local_b0 = (long ****)0x0;
  FUN_7103776910(&local_b8,(long)&uStack_300,(long ****)"set_txt_key",pppplVar26,ppppbVar24,
                 pppplVar20,uVar28,param_7,param_8);
  FUN_710377a120((long)&local_b8,"mnu_spirits_sort_guide",pppplVar26,ppppbVar24,pppplVar20,uVar28,
                 param_7,param_8);
  pppplVar16 = local_b0;
  local_b8 = (long ****)&PTR_FUN_710523d9a8;
  local_b0 = (long ****)0x0;
  if (pppplVar16 != (long ****)0x0) {
    FUN_710392eb40((ulong)pppplVar16);
  }
  ppuVar32 = local_98;
  ppuVar15 = local_a0;
  local_b8 = (long ****)0x0;
  local_b0 = (long ****)0x0;
  local_a8 = (long ****)0x0;
  ppplVar18 = (long ***)((long)local_98 - (long)local_a0);
  if (ppplVar18 != (long ***)0x0) {
    if (0x38e38e38e38e38e < (ulong)(((long)ppplVar18 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pppplVar16 = (long ****)
                 FUN_710392e290(0x10,ppplVar18,pppplVar26,ppppbVar24,pppplVar20,uVar28,param_7,
                                param_8);
    if (pppplVar16 == (long ****)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6c[0] = 0;
        local_330 = ppplVar18;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
        pppplVar26 = pppplVar22;
        if (((uVar8 & 1) != 0) &&
           (pppplVar16 = (long ****)
                         FUN_710392e290(0x10,ppplVar18,pppplVar22,ppppbVar24,pppplVar20,uVar28,
                                        param_7,param_8), pppplVar26 = pppplVar22,
           pppplVar16 != (long ****)0x0)) goto LAB_7101901a44;
      }
      pppplVar16 = (long ****)0x0;
    }
LAB_7101901a44:
    local_a8 = pppplVar16 + ((long)ppplVar18 >> 3);
    local_b0 = pppplVar16;
    for (; local_b8 = pppplVar16, ppuVar15 != ppuVar32; ppuVar15 = ppuVar15 + 9) {
      *(uint *)local_b0 = 0;
      uVar8 = 0;
      do {
        cVar3 = *(char *)((long)ppuVar15 + uVar8 + 8);
        uVar17 = uVar8;
        if (cVar3 == '\0') break;
        *(char *)((long)local_b0 + uVar8 + 8) = cVar3;
        cVar3 = *(char *)((long)ppuVar15 + uVar8 + 9);
        if (cVar3 == '\0') {
          uVar17 = uVar8 + 1;
          break;
        }
        *(char *)((long)local_b0 + uVar8 + 9) = cVar3;
        cVar3 = *(char *)((long)ppuVar15 + uVar8 + 10);
        if (cVar3 == '\0') {
          uVar17 = uVar8 + 2;
          break;
        }
        uVar17 = uVar8 + 3;
        *(char *)((long)local_b0 + uVar8 + 10) = cVar3;
        uVar8 = uVar17;
      } while ((uint)uVar17 < 0x3f);
      *(undefined1 *)((long)local_b0 + (uVar17 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_b0 + 4) = (uint)uVar17;
      uVar29 = (uint)*(byte *)(local_b0 + 1);
      uVar38 = uVar37;
      if (*(byte *)(local_b0 + 1) != 0) {
        pbVar34 = (byte *)((long)local_b0 + 9);
        do {
          uVar38 = uVar38 * 0x89 ^ uVar29;
          uVar29 = (uint)*pbVar34;
          pbVar34 = pbVar34 + 1;
        } while (uVar29 != 0);
      }
      *(uint *)local_b0 = uVar38;
      local_b0 = local_b0 + 9;
    }
  }
  FUN_7103776640(&local_330,(long)puVar10,(byte ****)"set_blinder",pppplVar26,ppppbVar24,pppplVar20,
                 uVar28,param_7,param_8);
  ppppplVar23 = &local_b8;
  ppppbVar24 = (byte ****)&local_320;
  FUN_71032ccb70((long)(puVar9 + 0x2c),puVar9 + 3,(long ****)ppppplVar23,ppppbVar24,&local_330,
                 uVar28,param_7,param_8);
  uVar8 = local_328;
  local_330 = (long ***)&PTR_FUN_710523d988;
  local_328 = 0;
  uVar25 = extraout_x1_19;
  if (uVar8 != 0) {
    uVar17 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar8);
    uVar25 = extraout_x1_20;
  }
  if (local_b8 != (long ****)0x0) {
    local_b0 = local_b8;
    FUN_710392eb40((ulong)local_b8);
    uVar25 = extraout_x1_21;
  }
  FUN_7101dc79d0((long)puVar9,uVar25,ppppplVar23,ppppbVar24,pppplVar27,uVar28,param_7,param_8);
  FUN_7101dc7e00((long)puVar9,0,ppppplVar23,ppppbVar24,pppplVar27,uVar28,param_7,param_8);
  pppplVar22 = local_2f8;
  uStack_300 = 0x88;
  uStack_2ff = 0xd9;
  uStack_2fe = 0x710523;
  local_2f8 = (long ****)0x0;
  if (pppplVar22 != (long ****)0x0) {
    ppplVar18 = pppplVar22[3];
    pppplVar22[2] = (long ***)&PTR_FUN_710523d9a8;
    pppplVar22[3] = (long ***)0x0;
    if (ppplVar18 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar18);
    }
    FUN_710392eb40((ulong)pppplVar22);
  }
  if (local_a0 != (undefined **)0x0) {
    local_98 = local_a0;
    FUN_710392eb40((ulong)local_a0);
  }
  if (alStack_100 == local_e0) {
    pcVar30 = *(code **)(*local_e0 + 0x20);
LAB_7101901be0:
    (*pcVar30)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101901be0;
  }
  if (alStack_130 == local_110) {
    pcVar30 = *(code **)(*local_110 + 0x20);
LAB_7101901c10:
    (*pcVar30)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar30 = *(code **)(*local_110 + 0x28);
    goto LAB_7101901c10;
  }
  if (alStack_160 == local_140) {
    pcVar30 = *(code **)(*local_140 + 0x20);
LAB_7101901c40:
    (*pcVar30)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar30 = *(code **)(*local_140 + 0x28);
    goto LAB_7101901c40;
  }
  if (alStack_190 == local_170) {
    pcVar30 = *(code **)(*local_170 + 0x20);
LAB_7101901c70:
    (*pcVar30)();
  }
  else if (local_170 != (long *)0x0) {
    pcVar30 = *(code **)(*local_170 + 0x28);
    goto LAB_7101901c70;
  }
  if (alStack_1c0 == local_1a0) {
    pcVar30 = *(code **)(*local_1a0 + 0x20);
LAB_7101901ca0:
    (*pcVar30)();
  }
  else if (local_1a0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_1a0 + 0x28);
    goto LAB_7101901ca0;
  }
  if (*(uint *)(lVar7 + 0xc4) < 0x13) {
    *(undefined4 *)(lVar7 + (long)(int)*(uint *)(lVar7 + 0xc4) * 4 + 0x78) = 0;
    return;
  }
LAB_7101901d40:
                    /* WARNING: Subroutine does not return */
  abort();
}

