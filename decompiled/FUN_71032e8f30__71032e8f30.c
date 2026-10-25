// addr:      71032e8f30
// offset:    0x32e8f30
// name:      FUN_71032e8f30
// mangled:   
// signature: undefined __cdecl FUN_71032e8f30(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71032e8f30(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
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
  undefined *puVar8;
  long *********ppppppppplVar9;
  long ****pppplVar10;
  undefined8 uVar11;
  byte ****ppppbVar12;
  long ****pppplVar13;
  long *plVar14;
  code *pcVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined1 auVar23 [16];
  long ********local_1d0;
  undefined8 *local_1c8;
  long *local_1b0;
  undefined **local_1a0;
  ulong local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined1 local_17a;
  undefined1 *local_178;
  undefined4 local_170;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  undefined4 local_70;
  
  ppppppppplVar9 = &local_1d0;
  if (*(int *)(param_1 + 0xec) == 0) {
    *(undefined1 *)(param_1 + 0x161) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70) = 0;
    lVar22 = *(long *)(param_1 + 0x138);
    pppplVar10 = (long ****)(long)*(int *)(lVar22 + 0x70);
    ppppbVar12 = (byte ****)(ulong)*(uint *)(lVar22 + 0x68);
    pppplVar13 = (long ****)0x0;
    FUN_710323beb0(lVar22,(ulong *)&DAT_710455da80,(long)pppplVar10,(ulong)ppppbVar12,(long ****)0x0
                   ,param_6,param_7,param_8);
    plVar16 = *(long **)(param_1 + 0x148);
    if (plVar16 != (long *)0x0) {
      *(undefined8 *)(param_1 + 0x148) = 0;
      (**(code **)(*plVar16 + 8))();
    }
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x28,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1d0 = (long ********)((ulong)local_1d0 & 0xffffffff00000000);
        local_190 = (undefined **)&DAT_00000028;
        pppplVar10 = (long ****)&local_190;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
        if (((uVar5 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x28,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,
                                    param_8), puVar7 != (undefined8 *)0x0)) goto LAB_71032e94a0;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_71032e94a0:
    *(undefined2 *)(puVar7 + 1) = 0x100;
    *(undefined4 *)((long)puVar7 + 0xc) = 0x4001;
    *(undefined4 *)((long)puVar7 + 0x14) = 1;
    *(undefined1 *)(puVar7 + 2) = 1;
    *(undefined1 *)(puVar7 + 3) = 0;
    *puVar7 = &PTR_FUN_71050aa3b8;
    lVar22 = FUN_710392e290(0x10,0x150,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8);
    uVar11 = extraout_x1;
    if (lVar22 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1d0 = (long ********)((ulong)local_1d0 & 0xffffffff00000000);
        local_190 = (undefined **)&DAT_00000150;
        pppplVar10 = (long ****)&local_190;
        auVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
        uVar11 = auVar23._8_8_;
        if (((auVar23._0_8_ & 1) != 0) &&
           (lVar22 = FUN_710392e290(0x10,0x150,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,
                                    param_8), uVar11 = extraout_x1_00, lVar22 != 0))
        goto LAB_71032e9528;
      }
      lVar22 = 0;
    }
LAB_71032e9528:
    *(undefined1 *)(lVar22 + 0xc4) = 0;
    *(undefined8 *)(lVar22 + 0x10) = 0;
    *(undefined8 *)(lVar22 + 0x18) = 0;
    *(undefined4 *)(lVar22 + 0xc0) = 0xffffffff;
    *(long *)lVar22 = lVar22;
    *(undefined8 *)(lVar22 + 8) = 0;
    *(undefined8 *)(lVar22 + 0xb0) = 0;
    *(undefined8 *)(lVar22 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar22 + 0xa0) = 0;
    *(undefined8 *)(lVar22 + 0xa8) = 0;
    *(undefined8 *)(lVar22 + 0x90) = 0;
    *(undefined8 *)(lVar22 + 0x98) = 0;
    *(undefined8 *)(lVar22 + 0x80) = 0;
    *(undefined8 *)(lVar22 + 0x88) = 0;
    *(undefined8 *)(lVar22 + 0x70) = 0;
    *(undefined8 *)(lVar22 + 0x78) = 0;
    *(undefined8 *)(lVar22 + 0x60) = 0;
    *(undefined8 *)(lVar22 + 0x68) = 0;
    *(undefined8 *)(lVar22 + 0x50) = 0;
    *(undefined8 *)(lVar22 + 0x58) = 0;
    *(undefined8 *)(lVar22 + 0x40) = 0;
    *(undefined8 *)(lVar22 + 0x48) = 0;
    *(undefined8 *)(lVar22 + 0x30) = 0;
    *(undefined8 *)(lVar22 + 0x38) = 0;
    *(undefined8 *)(lVar22 + 0x20) = 0;
    *(undefined8 *)(lVar22 + 0x28) = 0;
    *(long *)(lVar22 + 200) = param_1 + 0x138;
    *(undefined8 *)(lVar22 + 0xd0) = 0;
    FUN_7103776290((undefined8 *)(lVar22 + 0xd8),uVar11,pppplVar10,ppppbVar12,pppplVar13,param_6,
                   param_7,param_8);
    FUN_7103776290((undefined8 *)(lVar22 + 0xe8),extraout_x1_01,pppplVar10,ppppbVar12,pppplVar13,
                   param_6,param_7,param_8);
    *(undefined1 **)(lVar22 + 0xf8) = &DAT_c1ffff0000000000;
    *(undefined1 *)(lVar22 + 0x100) = 0xff;
    *(undefined8 *)(lVar22 + 0x116) = 0;
    *(undefined8 *)(lVar22 + 0x108) = 0;
    *(undefined8 *)(lVar22 + 0x110) = 0;
    *(undefined8 *)(lVar22 + 0x120) = 0xd9ffff0000000000;
    *(undefined8 *)(lVar22 + 0x128) = 0xd9ffff0000000000;
    *(undefined8 *)(lVar22 + 0x130) = 0xd9ffff0000000000;
    *(undefined8 *)(lVar22 + 0x138) = 0;
    *(undefined8 *)(lVar22 + 0x145) = 0;
    *(undefined8 *)(lVar22 + 0x140) = 0;
    *(code **)(lVar22 + 0x28) = FUN_7101b15370;
    *(undefined8 *)(lVar22 + 0x30) = 0;
    *(code **)(lVar22 + 0x38) = FUN_7101b15380;
    *(undefined8 *)(lVar22 + 0x40) = 0;
    *(code **)(lVar22 + 0x48) = FUN_7101b15a40;
    *(undefined8 *)(lVar22 + 0x50) = 0;
    *(code **)(lVar22 + 0x58) = FUN_7101b163b0;
    *(undefined8 *)(lVar22 + 0x60) = 0;
    if (0x12 < *(uint *)(lVar22 + 0xb4)) goto LAB_71032ea020;
    *(undefined4 *)(lVar22 + (long)(int)*(uint *)(lVar22 + 0xb4) * 4 + 0x68) = 0;
    puVar7[4] = lVar22;
    *(undefined2 *)(puVar7 + 1) = 0x100;
    *(undefined2 *)((long)puVar7 + 10) = local_1d0._0_2_;
    *(undefined4 *)((long)puVar7 + 0xc) = 0x15001;
    *(undefined1 *)(puVar7 + 2) = 0;
    *(undefined2 *)((long)puVar7 + 0x11) = (undefined2)local_190;
    *(undefined1 *)((long)puVar7 + 0x13) = local_190._2_1_;
    *(undefined4 *)((long)puVar7 + 0x14) = 2;
    *(undefined1 *)(puVar7 + 3) = 0;
    plVar16 = *(long **)(param_1 + 0x148);
    *(undefined8 **)(param_1 + 0x148) = puVar7;
    uVar11 = extraout_x1_02;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))();
      uVar11 = extraout_x1_03;
    }
    puVar7 = *(undefined8 **)(param_1 + 0x140);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x140) = 0;
      puVar21 = (undefined8 *)*puVar7;
      *puVar7 = 0;
      if (puVar21 != (undefined8 *)0x0) {
        FUN_7103773770(puVar21,uVar11,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8);
        FUN_710392eb40((ulong)puVar21);
      }
      FUN_710392eb40((ulong)puVar7);
    }
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,8,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1d0 = (long ********)((ulong)local_1d0 & 0xffffffff00000000);
        local_190 = (undefined **)&DAT_00000008;
        pppplVar10 = (long ****)&local_190;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
        if (((uVar5 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,8,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8)
           , puVar7 != (undefined8 *)0x0)) goto LAB_71032e96dc;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_71032e96dc:
    puVar21 = (undefined8 *)
              FUN_710392e290(0x10,8,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8);
    uVar11 = extraout_x1_04;
    if (puVar21 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1d0 = (long ********)((ulong)local_1d0 & 0xffffffff00000000);
        local_190 = (undefined **)&DAT_00000008;
        pppplVar10 = (long ****)&local_190;
        auVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
        uVar11 = auVar23._8_8_;
        if (((auVar23._0_8_ & 1) != 0) &&
           (puVar21 = (undefined8 *)
                      FUN_710392e290(0x10,8,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8
                                    ), uVar11 = extraout_x1_05, puVar21 != (undefined8 *)0x0))
        goto LAB_71032e9738;
      }
      puVar21 = (undefined8 *)0x0;
    }
LAB_71032e9738:
    FUN_7103773200(puVar21,uVar11,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8);
    *puVar7 = puVar21;
    puVar21 = *(undefined8 **)(param_1 + 0x140);
    *(undefined8 **)(param_1 + 0x140) = puVar7;
    if (puVar21 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar21;
      *puVar21 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        FUN_7103773770(puVar7,extraout_x1_06,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,
                       param_8);
        FUN_710392eb40((ulong)puVar7);
      }
      FUN_710392eb40((ulong)puVar21);
    }
    if (*(char *)(param_1 + 0x160) != '\0') {
      return;
    }
    lVar22 = *(long *)(param_1 + 0x138);
    pppplVar10 = (long ****)(long)*(int *)(lVar22 + 0x70);
    ppppbVar12 = (byte ****)(ulong)*(uint *)(lVar22 + 0x68);
    pppplVar13 = (long ****)0x0;
    FUN_710323beb0(lVar22,(ulong *)&DAT_710455da88,(long)pppplVar10,(ulong)ppppbVar12,(long ****)0x0
                   ,param_6,param_7,param_8);
    plVar16 = *(long **)(param_1 + 0x158);
    if (plVar16 != (long *)0x0) {
      *(undefined8 *)(param_1 + 0x158) = 0;
      (**(code **)(*plVar16 + 8))();
    }
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x28,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1d0 = (long ********)((ulong)local_1d0 & 0xffffffff00000000);
        local_190 = (undefined **)&DAT_00000028;
        pppplVar10 = (long ****)&local_190;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
        if (((uVar5 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x28,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,
                                    param_8), puVar7 != (undefined8 *)0x0)) goto LAB_71032e980c;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_71032e980c:
    *(undefined2 *)(puVar7 + 1) = 0x100;
    *(undefined4 *)((long)puVar7 + 0xc) = 0x4001;
    *(undefined1 *)(puVar7 + 2) = 1;
    *(undefined4 *)((long)puVar7 + 0x14) = 1;
    *(undefined1 *)(puVar7 + 3) = 0;
    *puVar7 = &PTR_FUN_71050aa168;
    lVar22 = FUN_710392e290(0x10,0xf0,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8);
    uVar11 = extraout_x1_07;
    if (lVar22 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1d0 = (long ********)((ulong)local_1d0 & 0xffffffff00000000);
        local_190 = (undefined **)&DAT_000000f0;
        pppplVar10 = (long ****)&local_190;
        auVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
        uVar11 = auVar23._8_8_;
        if (((auVar23._0_8_ & 1) != 0) &&
           (lVar22 = FUN_710392e290(0x10,0xf0,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,
                                    param_8), uVar11 = extraout_x1_08, lVar22 != 0))
        goto LAB_71032e9890;
      }
      lVar22 = 0;
    }
LAB_71032e9890:
    *(undefined8 *)(lVar22 + 0x10) = 0;
    *(undefined8 *)(lVar22 + 0x18) = 0;
    *(long *)lVar22 = lVar22;
    *(undefined8 *)(lVar22 + 8) = 0;
    *(undefined4 *)(lVar22 + 0xc0) = 0xffffffff;
    *(undefined1 *)(lVar22 + 0xc4) = 0;
    *(undefined8 *)(lVar22 + 0xb0) = 0;
    *(undefined8 *)(lVar22 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar22 + 0xa0) = 0;
    *(undefined8 *)(lVar22 + 0xa8) = 0;
    *(undefined8 *)(lVar22 + 0x90) = 0;
    *(undefined8 *)(lVar22 + 0x98) = 0;
    *(undefined8 *)(lVar22 + 0x80) = 0;
    *(undefined8 *)(lVar22 + 0x88) = 0;
    *(undefined8 *)(lVar22 + 0x70) = 0;
    *(undefined8 *)(lVar22 + 0x78) = 0;
    *(undefined8 *)(lVar22 + 0x60) = 0;
    *(undefined8 *)(lVar22 + 0x68) = 0;
    *(undefined8 *)(lVar22 + 0x50) = 0;
    *(undefined8 *)(lVar22 + 0x58) = 0;
    *(undefined8 *)(lVar22 + 0x40) = 0;
    *(undefined8 *)(lVar22 + 0x48) = 0;
    *(undefined8 *)(lVar22 + 0x30) = 0;
    *(undefined8 *)(lVar22 + 0x38) = 0;
    *(undefined8 *)(lVar22 + 0x20) = 0;
    *(undefined8 *)(lVar22 + 0x28) = 0;
    FUN_7103776290((undefined8 *)(lVar22 + 200),uVar11,pppplVar10,ppppbVar12,pppplVar13,param_6,
                   param_7,param_8);
    *(code **)(lVar22 + 0x48) = FUN_7101af1980;
    *(undefined8 *)(lVar22 + 0x50) = 0;
    *(undefined8 *)(lVar22 + 0xd8) = 0;
    *(undefined8 *)(lVar22 + 0xe0) = 0xafffff0000000000;
    *(code **)(lVar22 + 0x28) = FUN_7101af15f0;
    *(undefined8 *)(lVar22 + 0x30) = 0;
    *(code **)(lVar22 + 0x38) = FUN_7101af1600;
    *(undefined8 *)(lVar22 + 0x40) = 0;
    *(undefined1 *)(lVar22 + 0xe8) = 1;
    *(undefined4 *)(lVar22 + 0xec) = 0;
    *(code **)(lVar22 + 0x58) = FUN_7101af1b50;
    *(undefined8 *)(lVar22 + 0x60) = 0;
    if (0x12 < *(uint *)(lVar22 + 0xb4)) goto LAB_71032ea020;
    *(undefined4 *)(lVar22 + (long)(int)*(uint *)(lVar22 + 0xb4) * 4 + 0x68) = 0;
    puVar7[4] = lVar22;
    *(undefined2 *)(puVar7 + 1) = 0x100;
    *(undefined2 *)((long)puVar7 + 10) = local_1d0._0_2_;
    *(undefined4 *)((long)puVar7 + 0xc) = 0x4001;
    *(undefined1 *)(puVar7 + 2) = 0;
    *(undefined2 *)((long)puVar7 + 0x11) = (undefined2)local_190;
    *(undefined1 *)((long)puVar7 + 0x13) = local_190._2_1_;
    *(undefined4 *)((long)puVar7 + 0x14) = 1;
    *(undefined1 *)(puVar7 + 3) = 0;
    plVar16 = *(long **)(param_1 + 0x158);
    *(undefined8 **)(param_1 + 0x158) = puVar7;
    uVar11 = extraout_x1_09;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))();
      uVar11 = extraout_x1_10;
    }
    puVar7 = *(undefined8 **)(param_1 + 0x150);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x150) = 0;
      puVar21 = (undefined8 *)*puVar7;
      *puVar7 = 0;
      if (puVar21 != (undefined8 *)0x0) {
        FUN_7103773770(puVar21,uVar11,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8);
        FUN_710392eb40((ulong)puVar21);
      }
      FUN_710392eb40((ulong)puVar7);
    }
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,8,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1d0 = (long ********)((ulong)local_1d0 & 0xffffffff00000000);
        local_190 = (undefined **)&DAT_00000008;
        pppplVar10 = (long ****)&local_190;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
        if (((uVar5 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,8,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8)
           , puVar7 != (undefined8 *)0x0)) goto LAB_71032e9a04;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_71032e9a04:
    puVar21 = (undefined8 *)
              FUN_710392e290(0x10,8,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8);
    uVar11 = extraout_x1_11;
    if (puVar21 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1d0 = (long ********)((ulong)local_1d0 & 0xffffffff00000000);
        local_190 = (undefined **)&DAT_00000008;
        pppplVar10 = (long ****)&local_190;
        auVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
        uVar11 = auVar23._8_8_;
        if (((auVar23._0_8_ & 1) != 0) &&
           (puVar21 = (undefined8 *)
                      FUN_710392e290(0x10,8,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8
                                    ), uVar11 = extraout_x1_12, puVar21 != (undefined8 *)0x0))
        goto LAB_71032e9a60;
      }
      puVar21 = (undefined8 *)0x0;
    }
LAB_71032e9a60:
    FUN_7103773200(puVar21,uVar11,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8);
    *puVar7 = puVar21;
    puVar21 = *(undefined8 **)(param_1 + 0x150);
    *(undefined8 **)(param_1 + 0x150) = puVar7;
    if (puVar21 == (undefined8 *)0x0) {
      return;
    }
    puVar7 = (undefined8 *)*puVar21;
    *puVar21 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_7103773770(puVar7,extraout_x1_13,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8)
      ;
      FUN_710392eb40((ulong)puVar7);
    }
    FUN_710392eb40((ulong)puVar21);
    return;
  }
  uVar5 = FUN_710323d010(*(long *)(param_1 + 0x138),0,param_3,param_4,param_5,param_6,param_7,
                         param_8);
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar5 = FUN_710323d010(*(long *)(param_1 + 0x138),1,param_3,param_4,param_5,param_6,param_7,
                         param_8);
  if ((uVar5 & 1) == 0) {
    return;
  }
  puVar8 = &DAT_710455da80;
  uVar11 = 1;
  FUN_71032cbf30(*(undefined8 **)(param_1 + 0x140),*(long *)(param_1 + 0x138),
                 (ulong *)&DAT_710455da80,(byte ****)0x1,param_5,param_6,param_7,param_8);
  puVar7 = *(undefined8 **)(param_1 + 0x140);
  lVar22 = *(long *)(param_1 + 0x148);
  if (*(char *)(*(long *)(DAT_710532f7e8 + 8) + 0x162) == '\0') {
    *(undefined1 *)(*(long *)(DAT_710532f7e8 + 8) + 0x162) = 1;
  }
  lVar19 = **(long **)*puVar7;
  uVar2 = *(undefined4 *)(lVar22 + 0x14);
  *(undefined4 *)(*(long *)(lVar19 + 0x600) + 0x494) = uVar2;
  lVar18 = *(long *)(lVar19 + 0x608);
  lVar19 = *(long *)(lVar19 + 0x610);
  if (lVar18 != lVar19) {
    uVar5 = (lVar19 + -0x10) - lVar18;
    uVar1 = ((uint)(uVar5 >> 4) & 0xfffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar20 = -((ulong)uVar1 & 3);
      do {
        plVar16 = (long *)(lVar18 + 8);
        lVar18 = lVar18 + 0x10;
        lVar20 = lVar20 + 1;
        *(undefined4 *)(*plVar16 + 0x494) = uVar2;
      } while (lVar20 != 0);
    }
    if (0x2f < uVar5) {
      do {
        *(undefined4 *)(*(long *)(lVar18 + 8) + 0x494) = uVar2;
        *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x494) = uVar2;
        *(undefined4 *)(*(long *)(lVar18 + 0x28) + 0x494) = uVar2;
        plVar16 = (long *)(lVar18 + 0x38);
        lVar18 = lVar18 + 0x40;
        *(undefined4 *)(*plVar16 + 0x494) = uVar2;
      } while (lVar19 != lVar18);
    }
  }
  *(undefined8 **)(*(long *)(lVar22 + 0x20) + 0xd0) = puVar7;
  lVar22 = *(long *)(lVar22 + 0x20);
  plVar17 = (long *)*puVar7;
  plVar14 = (long *)*plVar17;
  *(undefined4 *)(*(long *)(*plVar14 + 0x600) + 0x18) = 0x60;
  *(undefined4 *)(*(long *)(*(long *)*plVar17 + 0x600) + 0x1c) = 0x10;
  plVar16 = (long *)(lVar22 + 0xd8);
  *(undefined4 *)(*(long *)(*(long *)*plVar17 + 0x600) + 0x20) = 0x80;
  if (plVar16 != plVar14 + 1) {
    **(undefined8 **)(lVar22 + 0xe0) = *(undefined8 *)plVar14[2];
    *(undefined8 *)(*(long *)(lVar22 + 0xe0) + 8) = *(undefined8 *)(plVar14[2] + 8);
    lVar19 = plVar14[2];
    lVar18 = *(long *)(lVar22 + 0xe0);
    if (lVar18 != lVar19) {
      **(undefined8 **)(lVar18 + 0x18) = **(undefined8 **)(lVar19 + 0x18);
      *(undefined8 *)(*(long *)(lVar18 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar19 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar19 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar19 + 0x18) + 0x18);
    }
  }
  FUN_7103776640(&local_190,(long)plVar16,(byte ****)"set_parts_bg_00",puVar8,uVar11,param_5,param_6
                 ,param_7,param_8);
  puVar3 = local_188;
  if ((undefined8 *)(lVar22 + 0xe8) != &local_190) {
    local_188 = (undefined1 *)0x0;
    uVar5 = *(ulong *)(lVar22 + 0xf0);
    *(undefined1 **)(lVar22 + 0xf0) = puVar3;
    if (uVar5 != 0) {
      uVar6 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar5);
    }
  }
  puVar3 = local_188;
  local_190 = &PTR_FUN_710523d988;
  local_188 = (undefined1 *)0x0;
  if (puVar3 != (undefined1 *)0x0) {
    uVar5 = *(ulong *)(puVar3 + 0x18);
    *(undefined ***)(puVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103778760(*(long *)(lVar22 + 0xe0),0x7104339d2f);
  plVar14 = (long *)(lVar22 + 0x140);
  ppppbVar12 = (byte ****)&local_190;
  local_190 = (undefined **)0x0;
  local_180 = 1;
  local_17c = 1;
  local_17a = 1;
  local_178 = &DAT_41f0000000000000;
  local_170 = 0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_80 = (long *)0x0;
  local_70 = 0;
  local_188 = &DAT_00010101;
  FUN_7103770b30(plVar14,plVar16,(long ****)"selector_0",ppppbVar12,param_5,param_6,param_7,param_8)
  ;
  FUN_71037717d0(plVar14,0,"parts_btn_tricircle_00",ppppbVar12,param_5,param_6,param_7,param_8);
  ppppbVar12 = (byte ****)0x0;
  FUN_7103771930(*(long *)(lVar22 + 0x140),0,(long ****)0x6,(byte ****)0x0,param_5,param_6,param_7,
                 param_8);
  local_1d0 = (long ********)0x0;
  FUN_7103772070(*(long *)(lVar22 + 0x140),0,(long ****)&local_1d0,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  FUN_71037717d0(plVar14,1,"set_parts_btn_skip_00",ppppbVar12,param_5,param_6,param_7,param_8);
  ppppbVar12 = (byte ****)0x0;
  FUN_7103771930(*(long *)(lVar22 + 0x140),1,(long ****)&DAT_00000007,(byte ****)0x0,param_5,param_6
                 ,param_7,param_8);
  local_1d0 = (long ********)0x0;
  FUN_7103772070(*(long *)(lVar22 + 0x140),1,(long ****)&local_1d0,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  FUN_71037717d0(plVar14,2,"set_parts_btn_link",ppppbVar12,param_5,param_6,param_7,param_8);
  ppppbVar12 = (byte ****)0x0;
  FUN_7103771930(*(long *)(lVar22 + 0x140),2,(long ****)&DAT_00000008,(byte ****)0x0,param_5,param_6
                 ,param_7,param_8);
  local_1d0 = (long ********)0x0;
  FUN_7103772070(*(long *)(lVar22 + 0x140),2,(long ****)&local_1d0,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  (**(code **)(**(long **)(lVar22 + 0x140) + 0x70))(*(long **)(lVar22 + 0x140),0);
  FUN_7103776910(&local_1d0,(long)plVar16,(long ****)"set_fxui_light_00",ppppppppplVar9,ppppbVar12,
                 param_5,param_6,param_7,param_8);
  puVar7 = local_1c8;
  plVar14 = FUN_710377aae0((long *)*local_1c8);
  if (plVar14 != (long *)0x0) {
    *(undefined4 *)(plVar14 + 0x24) = 0x2000000;
  }
  plVar14 = FUN_710377aae0((long *)*puVar7);
  if (plVar14 != (long *)0x0) {
    *(undefined1 *)((long)plVar14 + 0x13f) = 1;
  }
  FUN_7103776640(&local_1a0,(long)plVar16,(byte ****)"set_parts_item",ppppppppplVar9,ppppbVar12,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_198;
  FUN_7103778300(0x3f800000,local_198,0x7104401009);
  FUN_7103778300(0x3f800000,uVar5,0x7104400ff8);
  FUN_7101b11920((long)&local_1a0,0,ppppppppplVar9,ppppbVar12,param_5,param_6,param_7,param_8);
  *(undefined1 *)(lVar22 + 0x14c) = 0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar5 = local_198;
  if ((DAT_71053050f0 & 0x7fff0000) == 0x4030000) {
    *(undefined1 *)(lVar22 + 0x14c) = 1;
  }
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar5 != 0) {
    uVar6 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar5);
  }
  puVar7 = local_1c8;
  local_1d0 = (long ********)&PTR_FUN_710523d9a8;
  local_1c8 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  if (alStack_a0 == local_80) {
    pcVar15 = *(code **)(*local_80 + 0x20);
LAB_71032e9ac0:
    (*pcVar15)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar15 = *(code **)(*local_80 + 0x28);
    goto LAB_71032e9ac0;
  }
  if (alStack_d0 == local_b0) {
    pcVar15 = *(code **)(*local_b0 + 0x20);
LAB_71032e9af0:
    (*pcVar15)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar15 = *(code **)(*local_b0 + 0x28);
    goto LAB_71032e9af0;
  }
  if (alStack_100 == local_e0) {
    pcVar15 = *(code **)(*local_e0 + 0x20);
LAB_71032e9b20:
    (*pcVar15)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar15 = *(code **)(*local_e0 + 0x28);
    goto LAB_71032e9b20;
  }
  if (alStack_130 == local_110) {
    pcVar15 = *(code **)(*local_110 + 0x20);
LAB_71032e9b50:
    (*pcVar15)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar15 = *(code **)(*local_110 + 0x28);
    goto LAB_71032e9b50;
  }
  if (alStack_160 == local_140) {
    pcVar15 = *(code **)(*local_140 + 0x20);
LAB_71032e9b80:
    (*pcVar15)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar15 = *(code **)(*local_140 + 0x28);
    goto LAB_71032e9b80;
  }
  if (*(char *)(param_1 + 0x160) == '\0') {
    FUN_71032cbf30(*(undefined8 **)(param_1 + 0x150),*(long *)(param_1 + 0x138),
                   (ulong *)&DAT_710455da88,(byte ****)0x1,param_5,param_6,param_7,param_8);
    puVar7 = *(undefined8 **)(param_1 + 0x150);
    lVar18 = *(long *)(param_1 + 0x158);
    lVar19 = **(long **)*puVar7;
    uVar2 = *(undefined4 *)(lVar18 + 0x14);
    *(undefined4 *)(*(long *)(lVar19 + 0x600) + 0x494) = uVar2;
    lVar22 = *(long *)(lVar19 + 0x608);
    lVar19 = *(long *)(lVar19 + 0x610);
    if (lVar22 != lVar19) {
      uVar5 = (lVar19 + -0x10) - lVar22;
      uVar1 = ((uint)(uVar5 >> 4) & 0xfffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar20 = -((ulong)uVar1 & 3);
        do {
          plVar16 = (long *)(lVar22 + 8);
          lVar22 = lVar22 + 0x10;
          lVar20 = lVar20 + 1;
          *(undefined4 *)(*plVar16 + 0x494) = uVar2;
        } while (lVar20 != 0);
      }
      if (0x2f < uVar5) {
        do {
          *(undefined4 *)(*(long *)(lVar22 + 8) + 0x494) = uVar2;
          *(undefined4 *)(*(long *)(lVar22 + 0x18) + 0x494) = uVar2;
          *(undefined4 *)(*(long *)(lVar22 + 0x28) + 0x494) = uVar2;
          plVar16 = (long *)(lVar22 + 0x38);
          lVar22 = lVar22 + 0x40;
          *(undefined4 *)(*plVar16 + 0x494) = uVar2;
        } while (lVar19 != lVar22);
      }
    }
    lVar22 = *(long *)(lVar18 + 0x20);
    plVar14 = (long *)*puVar7;
    plVar16 = (long *)*plVar14;
    *(undefined4 *)(*(long *)(*plVar16 + 0x600) + 0x18) = 0x60;
    *(undefined4 *)(*(long *)(*(long *)*plVar14 + 0x600) + 0x1c) = 0x10;
    if ((long *)(lVar22 + 200) != plVar16 + 1) {
      plVar14 = (long *)(lVar22 + 0xd0);
      *(undefined8 *)*plVar14 = *(undefined8 *)plVar16[2];
      *(undefined8 *)(*plVar14 + 8) = *(undefined8 *)(plVar16[2] + 8);
      lVar19 = plVar16[2];
      lVar18 = *plVar14;
      if (lVar18 != lVar19) {
        **(undefined8 **)(lVar18 + 0x18) = **(undefined8 **)(lVar19 + 0x18);
        *(undefined8 *)(*(long *)(lVar18 + 0x18) + 8) =
             *(undefined8 *)(*(long *)(lVar19 + 0x18) + 8);
        *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x10) =
             *(undefined8 *)(*(long *)(lVar19 + 0x18) + 0x10);
        *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x18) =
             *(undefined8 *)(*(long *)(lVar19 + 0x18) + 0x18);
      }
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar22 + 0xd0),0x71043f0fa9);
    FUN_7103778760(*(long *)(lVar22 + 0xd0),0x71042a3654);
    local_180 = 1;
    local_17c = 1;
    local_17a = 1;
    local_190 = (undefined **)0x0;
    local_188 = (undefined1 *)0x101;
    local_178 = &DAT_41f0000000000000;
    local_170 = 0;
    local_140 = (long *)0x0;
    local_110 = (long *)0x0;
    local_e0 = (long *)0x0;
    local_b0 = (long *)0x0;
    local_80 = (long *)0x0;
    local_70 = 0;
    local_1d0 = (long ********)&DAT_7105186040;
    local_1b0 = (long *)&local_1d0;
    FUN_7101989a30((long *)&local_1d0,alStack_130);
    if (&local_1d0 == (long *********)local_1b0) {
      pcVar15 = *(code **)(*local_1b0 + 0x20);
LAB_71032e9d9c:
      (*pcVar15)();
    }
    else if (local_1b0 != (long *)0x0) {
      pcVar15 = *(code **)(*local_1b0 + 0x28);
      goto LAB_71032e9d9c;
    }
    plVar16 = (long *)(lVar22 + 0xd8);
    ppppbVar12 = (byte ****)&local_190;
    local_188._0_3_ = CONCAT12(1,(undefined2)local_188);
    FUN_7103770b30(plVar16,(long *)(lVar22 + 200),(long ****)"selector_00",ppppbVar12,param_5,
                   param_6,param_7,param_8);
    FUN_71037717d0(plVar16,0,"set_parts_btn_tricircle",ppppbVar12,param_5,param_6,param_7,param_8);
    ppppbVar12 = (byte ****)0x0;
    FUN_7103771930(*(long *)(lVar22 + 0xd8),0,(long ****)0x6,(byte ****)0x0,param_5,param_6,param_7,
                   param_8);
    lVar22 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
    if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar22 >> 3) < 3) {
      local_1d0 = (long ********)0x0;
    }
    else {
      local_1d0 = *(long *********)(lVar22 + 0x10);
    }
    FUN_7103772070(*plVar16,0,(long ****)&local_1d0,ppppbVar12,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar16,1,"set_parts_btn_skip",ppppbVar12,param_5,param_6,param_7,param_8);
    ppppbVar12 = (byte ****)0x0;
    FUN_7103771930(*plVar16,1,(long ****)&DAT_00000007,(byte ****)0x0,param_5,param_6,param_7,
                   param_8);
    lVar22 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
    if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar22 >> 3) < 3) {
      local_1d0 = (long ********)0x0;
    }
    else {
      local_1d0 = *(long *********)(lVar22 + 0x10);
    }
    FUN_7103772070(*plVar16,1,(long ****)&local_1d0,ppppbVar12,param_5,param_6,param_7,param_8);
    (**(code **)(*(long *)*plVar16 + 0x60))((long *)*plVar16,0);
    (**(code **)(*(long *)*plVar16 + 0x70))((long *)*plVar16,0);
    if (alStack_a0 == local_80) {
      pcVar15 = *(code **)(*local_80 + 0x20);
LAB_71032e9ee4:
      (*pcVar15)();
    }
    else if (local_80 != (long *)0x0) {
      pcVar15 = *(code **)(*local_80 + 0x28);
      goto LAB_71032e9ee4;
    }
    if (alStack_d0 == local_b0) {
      pcVar15 = *(code **)(*local_b0 + 0x20);
LAB_71032e9f14:
      (*pcVar15)();
    }
    else if (local_b0 != (long *)0x0) {
      pcVar15 = *(code **)(*local_b0 + 0x28);
      goto LAB_71032e9f14;
    }
    if (alStack_100 == local_e0) {
      pcVar15 = *(code **)(*local_e0 + 0x20);
LAB_71032e9f44:
      (*pcVar15)();
    }
    else if (local_e0 != (long *)0x0) {
      pcVar15 = *(code **)(*local_e0 + 0x28);
      goto LAB_71032e9f44;
    }
    if (alStack_130 == local_110) {
      pcVar15 = *(code **)(*local_110 + 0x20);
LAB_71032e9f74:
      (*pcVar15)();
    }
    else if (local_110 != (long *)0x0) {
      pcVar15 = *(code **)(*local_110 + 0x28);
      goto LAB_71032e9f74;
    }
    if (alStack_160 == local_140) {
      pcVar15 = *(code **)(*local_140 + 0x20);
    }
    else {
      if (local_140 == (long *)0x0) goto LAB_71032e9fa8;
      pcVar15 = *(code **)(*local_140 + 0x28);
    }
    (*pcVar15)();
  }
LAB_71032e9fa8:
  if (*(uint *)(param_1 + 0xe4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 2;
    return;
  }
LAB_71032ea020:
                    /* WARNING: Subroutine does not return */
  abort();
}

