// addr:      71032ec140
// offset:    0x32ec140
// name:      FUN_71032ec140
// mangled:   
// signature: undefined __cdecl FUN_71032ec140(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71032ec140(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
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
  long *********ppppppppplVar13;
  long *********ppppppppplVar14;
  long *********ppppppppplVar15;
  long *********ppppppppplVar16;
  long *********ppppppppplVar17;
  long *********ppppppppplVar18;
  long *********ppppppppplVar19;
  long *********ppppppppplVar20;
  long *********ppppppppplVar21;
  undefined *puVar22;
  char *pcVar23;
  long ****pppplVar24;
  long *********ppppppppplVar25;
  undefined8 uVar26;
  long *********ppppppppplVar27;
  byte ****ppppbVar28;
  long lVar29;
  long **pplVar30;
  code *pcVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long *plVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  long ********local_1e0;
  long *local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined1 local_1ca;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  undefined4 local_c0;
  undefined **local_b0;
  ulong local_a8;
  long ***local_a0;
  ulong local_98;
  long ****local_80;
  
  ppppppppplVar25 = &local_1e0;
  ppppppppplVar13 = &local_1e0;
  ppppppppplVar14 = &local_1e0;
  ppppppppplVar15 = &local_1e0;
  ppppppppplVar16 = &local_1e0;
  ppppppppplVar17 = &local_1e0;
  ppppppppplVar18 = &local_1e0;
  ppppppppplVar19 = &local_1e0;
  ppppppppplVar20 = &local_1e0;
  ppppppppplVar21 = &local_1e0;
  ppppppppplVar27 = &local_1e0;
  if (*(char *)((long)*(long **)(param_1 + 8) + 0x34) != '\0') {
    return;
  }
  lVar34 = **(long **)(param_1 + 8);
  uVar9 = FUN_710323cb80(lVar34,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  while ((uVar9 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar9 = FUN_710323cb80(lVar34,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  plVar35 = *(long **)(param_1 + 8);
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000088;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = ppppppppplVar25;
      if (((uVar9 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar25,param_4,param_5,param_6,
                                   param_7,param_8), param_3 = ppppppppplVar25,
         puVar10 != (undefined8 *)0x0)) goto LAB_71032ec1fc;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_71032ec1fc:
  *puVar10 = &PTR_FUN_71050aa2b0;
  puVar10[1] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0x1ffffffff;
  puVar10[2] = 0;
  puVar10[3] = 0;
  *(undefined1 *)(puVar10 + 0xb) = 0;
  puVar10[0xf] = plVar35;
  *(undefined1 *)(puVar10 + 0xe) = 1;
  puVar10[9] = 0;
  puVar10[10] = 0;
  lVar34 = FUN_710392e290(0x10,0x208,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar34 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000208;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = ppppppppplVar13;
      if (((uVar9 & 1) != 0) &&
         (lVar34 = FUN_710392e290(0x10,0x208,(long ****)ppppppppplVar13,param_4,param_5,param_6,
                                  param_7,param_8), param_3 = ppppppppplVar13, lVar34 != 0))
      goto LAB_71032ec284;
    }
    lVar34 = 0;
  }
LAB_71032ec284:
  *(undefined8 *)(lVar34 + 0x10) = 0;
  *(undefined8 *)(lVar34 + 0x18) = 0;
  *(undefined4 *)(lVar34 + 0xf0) = 0xffffffff;
  *(long *)lVar34 = lVar34;
  *(undefined8 *)(lVar34 + 8) = 0;
  *(undefined1 *)(lVar34 + 0xf4) = 0;
  *(undefined8 *)(lVar34 + 0xe0) = 0;
  *(undefined8 *)(lVar34 + 0xe8) = 0xffffffff;
  *(undefined8 *)(lVar34 + 0xd0) = 0;
  *(undefined8 *)(lVar34 + 0xd8) = 0;
  *(undefined8 *)(lVar34 + 0xc0) = 0;
  *(undefined8 *)(lVar34 + 200) = 0;
  *(undefined8 *)(lVar34 + 0xb0) = 0;
  *(undefined8 *)(lVar34 + 0xb8) = 0;
  *(undefined8 *)(lVar34 + 0xa0) = 0;
  *(undefined8 *)(lVar34 + 0xa8) = 0;
  *(undefined8 *)(lVar34 + 0x90) = 0;
  *(undefined8 *)(lVar34 + 0x98) = 0;
  *(undefined8 *)(lVar34 + 0x80) = 0;
  *(undefined8 *)(lVar34 + 0x88) = 0;
  *(undefined8 *)(lVar34 + 0x70) = 0;
  *(undefined8 *)(lVar34 + 0x78) = 0;
  *(undefined8 *)(lVar34 + 0x60) = 0;
  *(undefined8 *)(lVar34 + 0x68) = 0;
  *(undefined8 *)(lVar34 + 0x50) = 0;
  *(undefined8 *)(lVar34 + 0x58) = 0;
  *(undefined8 *)(lVar34 + 0x40) = 0;
  *(undefined8 *)(lVar34 + 0x48) = 0;
  *(undefined8 *)(lVar34 + 0x30) = 0;
  *(undefined8 *)(lVar34 + 0x38) = 0;
  *(undefined8 *)(lVar34 + 0x20) = 0;
  *(undefined8 *)(lVar34 + 0x28) = 0;
  *(undefined8 *)(lVar34 + 0x118) = 0;
  *(undefined8 *)(lVar34 + 0x120) = 0;
  *(undefined8 *)(lVar34 + 0x108) = 0;
  *(undefined8 *)(lVar34 + 0x110) = 0;
  *(undefined8 *)(lVar34 + 0xf8) = 0;
  *(undefined8 *)(lVar34 + 0x100) = 0;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_00;
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000008;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar26 = auVar40._8_8_;
      param_3 = ppppppppplVar14;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7
                                   ,param_8), uVar26 = extraout_x1_01, param_3 = ppppppppplVar14,
         puVar11 != (undefined8 *)0x0)) goto LAB_71032ec334;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71032ec334:
  FUN_7103773200(puVar11,uVar26,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 **)(lVar34 + 0x128) = puVar11;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_02;
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000008;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar26 = auVar40._8_8_;
      param_3 = ppppppppplVar15;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar15,param_4,param_5,param_6,param_7
                                   ,param_8), uVar26 = extraout_x1_03, param_3 = ppppppppplVar15,
         puVar11 != (undefined8 *)0x0)) goto LAB_71032ec39c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71032ec39c:
  FUN_7103773200(puVar11,uVar26,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 **)(lVar34 + 0x130) = puVar11;
  *(undefined8 *)(lVar34 + 0x138) = 0;
  *(undefined ***)(lVar34 + 0x140) = &PTR_FUN_710523d9e8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (long ********)&SUB_00000018;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = ppppppppplVar16;
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar16,param_4,param_5,param_6,
                                   param_7,param_8), param_3 = ppppppppplVar16,
         puVar11 != (undefined8 *)0x0)) goto LAB_71032ec408;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71032ec408:
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined1 *)(puVar11 + 2) = 1;
  *(undefined8 **)(lVar34 + 0x148) = puVar11;
  *(undefined ***)(lVar34 + 0x150) = &PTR_FUN_710523d9e8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_04;
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (long ********)&SUB_00000018;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar26 = auVar40._8_8_;
      param_3 = ppppppppplVar17;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar17,param_4,param_5,param_6,
                                   param_7,param_8), uVar26 = extraout_x1_05,
         param_3 = ppppppppplVar17, puVar11 != (undefined8 *)0x0)) goto LAB_71032ec46c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71032ec46c:
  puVar3 = (undefined8 *)(lVar34 + 0x160);
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined1 *)(puVar11 + 2) = 1;
  *(undefined8 **)(lVar34 + 0x158) = puVar11;
  FUN_7103776290(puVar3,uVar26,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290((undefined8 *)(lVar34 + 0x170),extraout_x1_06,(long ****)param_3,param_4,param_5,
                 param_6,param_7,param_8);
  *(undefined ***)(lVar34 + 0x180) = &PTR_FUN_710523d9e8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (long ********)&SUB_00000018;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = ppppppppplVar18;
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar18,param_4,param_5,param_6,
                                   param_7,param_8), param_3 = ppppppppplVar18,
         puVar11 != (undefined8 *)0x0)) goto LAB_71032ec4e8;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71032ec4e8:
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined1 *)(puVar11 + 2) = 1;
  *(undefined8 **)(lVar34 + 0x188) = puVar11;
  *(undefined ***)(lVar34 + 400) = &PTR_FUN_710523d9a8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (long ********)&SUB_00000020;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = ppppppppplVar19;
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar19,param_4,param_5,param_6,
                                   param_7,param_8), param_3 = ppppppppplVar19,
         puVar11 != (undefined8 *)0x0)) goto LAB_71032ec554;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71032ec554:
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined8 **)(lVar34 + 0x198) = puVar11;
  *(undefined ***)(lVar34 + 0x1a0) = &PTR_FUN_710523d9a8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (long ********)&SUB_00000020;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = ppppppppplVar20;
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar20,param_4,param_5,param_6,
                                   param_7,param_8), param_3 = ppppppppplVar20,
         puVar11 != (undefined8 *)0x0)) goto LAB_71032ec5b4;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71032ec5b4:
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined8 **)(lVar34 + 0x1a8) = puVar11;
  *(undefined ***)(lVar34 + 0x1b0) = &PTR_FUN_710523d9a8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (long ********)&SUB_00000020;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar21,param_4,param_5,param_6,
                                   param_7,param_8), puVar11 != (undefined8 *)0x0))
      goto LAB_71032ec614;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71032ec614:
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined8 *)(lVar34 + 0x1c8) = 0;
  *(undefined8 **)(lVar34 + 0x1b8) = puVar11;
  *(undefined8 *)(lVar34 + 0x1c0) = 0;
  *(undefined8 *)(lVar34 + 0x1ee) = 0;
  *(undefined2 *)(lVar34 + 0x1f6) = 1;
  *(undefined1 *)(lVar34 + 0x200) = 1;
  *(undefined1 *)(lVar34 + 0x1f8) = 0;
  *(undefined4 *)(lVar34 + 0x1fc) = 0;
  *(code **)(lVar34 + 0x28) = FUN_7101af95b0;
  *(undefined8 *)(lVar34 + 0x30) = 0;
  *(code **)(lVar34 + 0x38) = FUN_7101af9670;
  *(undefined8 *)(lVar34 + 0x40) = 0;
  *(code **)(lVar34 + 0x58) = FUN_7101af9c60;
  *(undefined8 *)(lVar34 + 0x60) = 0;
  *(code **)(lVar34 + 0x68) = FUN_7101af9e40;
  *(undefined8 *)(lVar34 + 0x70) = 0;
  *(code **)(lVar34 + 0x48) = FUN_7101af97f0;
  *(undefined8 *)(lVar34 + 0x50) = 0;
  *(code **)(lVar34 + 0x78) = FUN_7101af9ee0;
  *(undefined8 *)(lVar34 + 0x80) = 0;
  *(undefined8 *)(lVar34 + 0x1e0) = 0;
  *(undefined8 *)(lVar34 + 0x1e8) = 0;
  *(undefined8 *)(lVar34 + 0x1d0) = 0;
  *(undefined8 *)(lVar34 + 0x1d8) = 0;
  *(code **)(lVar34 + 0x88) = FUN_7101afa110;
  *(undefined8 *)(lVar34 + 0x90) = 0;
  if (0x12 < *(uint *)(lVar34 + 0xe4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar34 + (long)(int)*(uint *)(lVar34 + 0xe4) * 4 + 0x98) = 0;
  puVar10[0x10] = lVar34;
  puVar11 = (undefined8 *)(lVar34 + 0x128);
  puVar22 = &DAT_7104544750;
  uVar26 = 1;
  FUN_71032cbf30(puVar11,*plVar35,(ulong *)&DAT_7104544750,(byte ****)0x1,param_5,param_6,param_7,
                 param_8);
  FUN_71037760f0(*(long *)**(undefined8 **)(lVar34 + 0x128),0);
  lVar32 = *(long *)**(undefined8 **)(lVar34 + 0x128);
  *(undefined4 *)(*(long *)(lVar32 + 0x600) + 0x494) = 3;
  lVar29 = *(long *)(lVar32 + 0x608);
  lVar32 = *(long *)(lVar32 + 0x610);
  if (lVar29 != lVar32) {
    uVar9 = (lVar32 + -0x10) - lVar29;
    uVar2 = ((uint)(uVar9 >> 4) & 0xfffffff) + 1;
    if ((uVar2 & 3) != 0) {
      lVar33 = -((ulong)uVar2 & 3);
      do {
        plVar1 = (long *)(lVar29 + 8);
        lVar29 = lVar29 + 0x10;
        lVar33 = lVar33 + 1;
        *(undefined4 *)(*plVar1 + 0x494) = 3;
      } while (lVar33 != 0);
    }
    if (0x2f < uVar9) {
      do {
        *(undefined4 *)(*(long *)(lVar29 + 8) + 0x494) = 3;
        *(undefined4 *)(*(long *)(lVar29 + 0x18) + 0x494) = 3;
        *(undefined4 *)(*(long *)(lVar29 + 0x28) + 0x494) = 3;
        plVar1 = (long *)(lVar29 + 0x38);
        lVar29 = lVar29 + 0x40;
        *(undefined4 *)(*plVar1 + 0x494) = 3;
      } while (lVar32 != lVar29);
    }
  }
  lVar29 = **(long **)*puVar11;
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x14) = 0x440;
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x18) = 0x800;
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x1c) = 0x10;
  lVar29 = *(long *)*puVar11;
  FUN_7103776910(&local_1e0,lVar29 + 8,(long ****)"hit_area",puVar22,uVar26,param_5,param_6,param_7,
                 param_8);
  plVar1 = local_1d8;
  lVar32 = *local_1d8;
  if (lVar32 == 0) {
    fVar36 = 0.0;
    fVar37 = 0.0;
    fVar38 = (float)(_ConstantZero >> 0x20);
    uVar9 = _ConstantZero;
  }
  else {
    fVar38 = *(float *)(lVar32 + 0x30);
    fVar36 = ABS(*(float *)(lVar32 + 0x50) * *(float *)(lVar32 + 0x48));
    uVar12 = *(ulong *)(lVar32 + 0x30);
    fVar37 = ABS(*(float *)(lVar32 + 0x54) * *(float *)(lVar32 + 0x4c));
    bVar7 = *(byte *)(lVar32 + 0x5b) & 3;
    if (bVar7 == 2) {
      fVar38 = fVar38 - fVar36 * 0.5;
LAB_71032ec860:
      uVar12 = CONCAT44((int)(uVar12 >> 0x20),fVar38);
    }
    else if (bVar7 == 1) {
      fVar38 = fVar38 + fVar36 * 0.5;
      goto LAB_71032ec860;
    }
    bVar7 = *(byte *)(lVar32 + 0x5b) >> 2 & 3;
    fVar38 = (float)(uVar12 >> 0x20);
    if (bVar7 == 2) {
      fVar38 = fVar37 * 0.5 + fVar38;
LAB_71032ec890:
      uVar12 = CONCAT44(fVar38,(int)uVar12);
    }
    else if (bVar7 == 1) {
      fVar38 = fVar38 - fVar37 * 0.5;
      goto LAB_71032ec890;
    }
    lVar32 = *(long *)(lVar32 + 0x18);
    if (lVar32 == 0) {
      fVar38 = (float)(uVar12 >> 0x20);
      uVar9 = uVar12;
    }
    else {
      do {
        fVar39 = (float)uVar12 + *(float *)(lVar32 + 0x30);
        uVar9 = (ulong)(uint)fVar39;
        fVar38 = (float)(uVar12 >> 0x20) + *(float *)(lVar32 + 0x34);
        uVar12 = CONCAT44(fVar38,fVar39);
        lVar32 = *(long *)(lVar32 + 0x18);
      } while (lVar32 != 0);
    }
  }
  fVar39 = (float)uVar9 + 960.0;
  *(float *)(lVar34 + 0x1c8) = fVar39 + fVar36 * 0.5;
  plVar4 = (long *)(lVar34 + 0x138);
  *(float *)(lVar34 + 0x1c4) = fVar39 - fVar36 * 0.5;
  *(float *)(lVar34 + 0x1cc) = (540.0 - fVar38) - fVar37 * 0.5;
  *(float *)(lVar34 + 0x1d0) = (540.0 - fVar38) + fVar37 * 0.5;
  local_1e0 = (long ********)&PTR_FUN_710523d9a8;
  local_1d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_7103776640(&local_b0,*(long *)*puVar11 + 8,(byte ****)"set_parts_03",puVar22,uVar26,param_5,
                 param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,local_a8,0x710433a60c);
  local_1d0 = 1;
  local_1cc = 1;
  local_1ca = 1;
  local_1c8 = &DAT_41f0000000000000;
  local_1e0 = (long ********)0x0;
  local_1d8 = (long *)&DAT_00000101;
  local_1c0 = 0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c0 = 0;
  local_a0 = (long ***)&PTR_FUN_71050aa268;
  local_80 = &local_a0;
  FUN_7101989a30((long *)&local_a0,alStack_120);
  if (&local_a0 == local_80) {
    pplVar30 = (*local_80)[4];
LAB_71032ec9fc:
    (*(code *)pplVar30)();
  }
  else if (local_80 != (long ****)0x0) {
    pplVar30 = (*local_80)[5];
    goto LAB_71032ec9fc;
  }
  local_1cc = CONCAT11(1,(undefined1)local_1cc);
  FUN_7103770b30(plVar4,(undefined8 *)(lVar29 + 8),(long ****)"selector_0",(byte ****)&local_1e0,
                 param_5,param_6,param_7,param_8);
  pcVar23 = "set_parts_00";
  FUN_71037717d0(plVar4,1,"set_parts_00",ppppppppplVar27,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_a0,*(long *)*puVar11 + 8,(byte ****)"set_parts_00",pcVar23,ppppppppplVar27,
                 param_5,param_6,param_7,param_8);
  uVar9 = local_98;
  FUN_7103778300(0x3f800000,local_98,0x710433a60c);
  local_a0 = (long ***)&PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  pcVar23 = "set_parts_01";
  FUN_71037717d0(plVar4,2,"set_parts_01",ppppppppplVar27,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_a0,*(long *)*puVar11 + 8,(byte ****)"set_parts_01",pcVar23,ppppppppplVar27,
                 param_5,param_6,param_7,param_8);
  uVar9 = local_98;
  FUN_7103778300(0x3f800000,local_98,0x710433a60c);
  local_a0 = (long ***)&PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  pcVar23 = "set_parts_02";
  FUN_71037717d0(plVar4,3,"set_parts_02",ppppppppplVar27,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_a0,*(long *)*puVar11 + 8,(byte ****)"set_parts_02",pcVar23,ppppppppplVar27,
                 param_5,param_6,param_7,param_8);
  uVar9 = local_98;
  FUN_7103778300(0x3f800000,local_98,0x710433a60c);
  local_a0 = (long ***)&PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  pcVar23 = "set_parts_03";
  FUN_71037717d0(plVar4,4,"set_parts_03",ppppppppplVar27,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_a0,*(long *)*puVar11 + 8,(byte ****)"set_parts_03",pcVar23,ppppppppplVar27,
                 param_5,param_6,param_7,param_8);
  uVar9 = local_98;
  FUN_7103778300(0x3f800000,local_98,0x710433a60c);
  local_a0 = (long ***)&PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  pcVar23 = "set_parts_04";
  FUN_71037717d0(plVar4,5,"set_parts_04",ppppppppplVar27,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_a0,*(long *)*puVar11 + 8,(byte ****)"set_parts_04",pcVar23,ppppppppplVar27,
                 param_5,param_6,param_7,param_8);
  uVar9 = local_98;
  FUN_7103778300(0x3f800000,local_98,0x710433a60c);
  local_a0 = (long ***)&PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  pcVar23 = "set_parts_05";
  FUN_71037717d0(plVar4,6,"set_parts_05",ppppppppplVar27,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_a0,*(long *)*puVar11 + 8,(byte ****)"set_parts_05",pcVar23,ppppppppplVar27,
                 param_5,param_6,param_7,param_8);
  uVar9 = local_98;
  FUN_7103778300(0x3f800000,local_98,0x710433a60c);
  local_a0 = (long ***)&PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  local_a0 = (long ***)0x7fc420ce8;
  FUN_7103772070(*(long *)(lVar34 + 0x138),4,&local_a0,(byte ****)ppppppppplVar27,param_5,param_6,
                 param_7,param_8);
  pppplVar24 = (long ****)0x1;
  FUN_7103771a80(plVar4,1,1);
  (**(code **)(**(long **)(lVar34 + 0x138) + 0x60))(*(long **)(lVar34 + 0x138),1);
  (**(code **)(**(long **)(lVar34 + 0x138) + 0x70))(*(long **)(lVar34 + 0x138),0);
  *(undefined4 *)(lVar34 + 0x1e0) = 1;
  *(undefined4 *)(lVar34 + 0x1e8) = 0x3c;
  FUN_7101afdf90(lVar34,extraout_x1_07,pppplVar24,(byte ****)ppppppppplVar27,param_5,param_6,param_7
                 ,param_8);
  if (alStack_f0 == local_d0) {
    pcVar31 = *(code **)(*local_d0 + 0x20);
LAB_71032ecd34:
    (*pcVar31)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar31 = *(code **)(*local_d0 + 0x28);
    goto LAB_71032ecd34;
  }
  if (alStack_120 == local_100) {
    pcVar31 = *(code **)(*local_100 + 0x20);
LAB_71032ecd64:
    (*pcVar31)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar31 = *(code **)(*local_100 + 0x28);
    goto LAB_71032ecd64;
  }
  if (alStack_150 == local_130) {
    pcVar31 = *(code **)(*local_130 + 0x20);
LAB_71032ecd94:
    (*pcVar31)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar31 = *(code **)(*local_130 + 0x28);
    goto LAB_71032ecd94;
  }
  if (alStack_180 == local_160) {
    pcVar31 = *(code **)(*local_160 + 0x20);
LAB_71032ecdc4:
    (*pcVar31)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar31 = *(code **)(*local_160 + 0x28);
    goto LAB_71032ecdc4;
  }
  if (alStack_1b0 == local_190) {
    pcVar31 = *(code **)(*local_190 + 0x20);
  }
  else {
    if (local_190 == (long *)0x0) goto LAB_71032ecdf8;
    pcVar31 = *(code **)(*local_190 + 0x28);
  }
  (*pcVar31)();
LAB_71032ecdf8:
  uVar9 = local_a8;
  puVar11 = (undefined8 *)(lVar34 + 0x130);
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  puVar22 = &DAT_7104544758;
  ppppbVar28 = (byte ****)0x1;
  FUN_71032cbf30(puVar11,*plVar35,(ulong *)&DAT_7104544758,(byte ****)0x1,param_5,param_6,param_7,
                 param_8);
  FUN_71037760f0(**(long **)*puVar11,0);
  lVar32 = **(long **)*puVar11;
  *(undefined4 *)(*(long *)(lVar32 + 0x600) + 0x494) = 7;
  lVar29 = *(long *)(lVar32 + 0x608);
  lVar32 = *(long *)(lVar32 + 0x610);
  if (lVar29 != lVar32) {
    uVar9 = (lVar32 + -0x10) - lVar29;
    uVar2 = ((uint)(uVar9 >> 4) & 0xfffffff) + 1;
    if ((uVar2 & 3) != 0) {
      lVar33 = -((ulong)uVar2 & 3);
      do {
        plVar1 = (long *)(lVar29 + 8);
        lVar29 = lVar29 + 0x10;
        lVar33 = lVar33 + 1;
        *(undefined4 *)(*plVar1 + 0x494) = 7;
      } while (lVar33 != 0);
    }
    if (0x2f < uVar9) {
      do {
        *(undefined4 *)(*(long *)(lVar29 + 8) + 0x494) = 7;
        *(undefined4 *)(*(long *)(lVar29 + 0x18) + 0x494) = 7;
        *(undefined4 *)(*(long *)(lVar29 + 0x28) + 0x494) = 7;
        plVar1 = (long *)(lVar29 + 0x38);
        lVar29 = lVar29 + 0x40;
        *(undefined4 *)(*plVar1 + 0x494) = 7;
      } while (lVar32 != lVar29);
    }
  }
  lVar29 = **(long **)(lVar34 + 0x130) + 8;
  FUN_7103778760(*(long *)(**(long **)(lVar34 + 0x130) + 0x10),0x7104349e91);
  if (*(int *)(lVar34 + 0x1fc) != 1) {
    lVar33 = *(long *)*puVar11;
    FUN_7103776910(&local_1e0,lVar33 + 8,(long ****)"set_txt_key",puVar22,ppppbVar28,param_5,param_6
                   ,param_7,param_8);
    plVar1 = local_1d8;
    lVar32 = *local_1d8;
    if (lVar32 != 0) {
      *(byte *)(lVar32 + 0x58) = *(byte *)(lVar32 + 0x58) | 1;
    }
    local_1e0 = (long ********)&PTR_FUN_710523d9a8;
    local_1d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar1);
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar33 + 0x10),0x71042a3672);
    *(undefined4 *)(lVar34 + 0x1fc) = 1;
  }
  FUN_7103776640(&local_1e0,lVar29,(byte ****)"set_parts_waiting_info",puVar22,ppppbVar28,param_5,
                 param_6,param_7,param_8);
  plVar1 = local_1d8;
  if (&local_1e0 != (long *********)puVar3) {
    local_1d8 = (long *)0x0;
    uVar9 = *(ulong *)(lVar34 + 0x168);
    *(long **)(lVar34 + 0x168) = plVar1;
    if (uVar9 != 0) {
      uVar12 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar9);
    }
  }
  plVar1 = local_1d8;
  local_1e0 = (long ********)&PTR_FUN_710523d988;
  local_1d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    uVar9 = plVar1[3];
    plVar1[2] = (long)&PTR_FUN_710523d9a8;
    plVar1[3] = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_7103776910(&local_1e0,(long)puVar3,(long ****)"set_rep_icn_1",puVar22,ppppbVar28,param_5,
                 param_6,param_7,param_8);
  plVar1 = local_1d8;
  if (&local_1e0 != (long *********)(lVar34 + 400)) {
    local_1d8 = (long *)0x0;
    uVar9 = *(ulong *)(lVar34 + 0x198);
    *(long **)(lVar34 + 0x198) = plVar1;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  plVar1 = local_1d8;
  local_1e0 = (long ********)&PTR_FUN_710523d9a8;
  local_1d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_7103776910(&local_1e0,(long)puVar3,(long ****)"set_rep_icn_2",puVar22,ppppbVar28,param_5,
                 param_6,param_7,param_8);
  plVar1 = local_1d8;
  if (&local_1e0 != (long *********)(lVar34 + 0x1a0)) {
    local_1d8 = (long *)0x0;
    uVar9 = *(ulong *)(lVar34 + 0x1a8);
    *(long **)(lVar34 + 0x1a8) = plVar1;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  plVar1 = local_1d8;
  local_1e0 = (long ********)&PTR_FUN_710523d9a8;
  local_1d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_7103776910(&local_1e0,(long)puVar3,(long ****)"set_gauge_waiting",puVar22,ppppbVar28,param_5,
                 param_6,param_7,param_8);
  plVar1 = local_1d8;
  if (&local_1e0 != (long *********)(lVar34 + 0x1b0)) {
    local_1d8 = (long *)0x0;
    uVar9 = *(ulong *)(lVar34 + 0x1b8);
    *(long **)(lVar34 + 0x1b8) = plVar1;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  plVar1 = local_1d8;
  local_1e0 = (long ********)&PTR_FUN_710523d9a8;
  local_1d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_7103776640(&local_1e0,lVar29,(byte ****)"set_parts_key_00",puVar22,ppppbVar28,param_5,param_6,
                 param_7,param_8);
  plVar1 = local_1d8;
  if (&local_1e0 != (long *********)(lVar34 + 0x170)) {
    local_1d8 = (long *)0x0;
    uVar9 = *(ulong *)(lVar34 + 0x178);
    *(long **)(lVar34 + 0x178) = plVar1;
    if (uVar9 != 0) {
      uVar12 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar9);
    }
  }
  plVar1 = local_1d8;
  local_1e0 = (long ********)&PTR_FUN_710523d988;
  local_1d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    uVar9 = *(ulong *)((long)plVar1 + 0x18);
    *(undefined ***)((long)plVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar1 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar34 + 0x178),0x7104339cd6);
  lVar29 = *(long *)**(undefined8 **)(lVar34 + 0x130);
  ppppppppplVar25 = (long *********)&DAT_00000198;
  memset(*(void **)(lVar29 + 0x600),0,0x198);
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x14) = 0x440;
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x18) = 0x800;
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x1c) = 0x10;
  FUN_7101afe3e0(lVar34,1,(long ****)ppppppppplVar25,ppppbVar28,param_5,param_6,param_7,param_8);
  *(undefined1 *)(lVar34 + 0x1f0) = 0;
  puVar10[2] = &DAT_7105333600;
  uVar8 = DAT_7105333664;
  *(undefined4 *)(puVar10 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar10 + 0x6c) = uVar8;
  do {
    uVar2 = DAT_7105333650;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar6) {
      DAT_7105333650 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0' || (uVar2 & 1) != 0);
  puVar10[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar10;
  FUN_71032caea0((long)puVar10,extraout_x1_08,(long ****)ppppppppplVar25,ppppbVar28,param_5,param_6,
                 param_7,param_8);
  lVar34 = plVar35[1];
  plVar35[1] = (long)puVar10;
  uVar26 = extraout_x1_09;
  if (lVar34 != 0) {
    FUN_71032cad20(lVar34);
    uVar26 = extraout_x1_10;
  }
  FUN_710323b9e0(*plVar35,uVar26,ppppppppplVar25,ppppbVar28,param_5,param_6,param_7,param_8);
  *(undefined1 *)(plVar35[1] + 0x70) = 0;
  *(undefined1 *)((long)plVar35 + 0x34) = 1;
  return;
}

