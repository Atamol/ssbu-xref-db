// addr:      7101aeb140
// offset:    0x1aeb140
// name:      FUN_7101aeb140
// mangled:   
// signature: undefined __cdecl FUN_7101aeb140(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101aeb140(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong *puVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined4 uVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *pvVar12;
  long *plVar13;
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
  undefined8 uVar14;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  long ****pppplVar15;
  long *********ppppppppplVar16;
  long ****pppplVar17;
  byte ****ppppbVar18;
  byte ****ppppbVar19;
  long lVar20;
  long ***ppplVar21;
  code *pcVar22;
  long *plVar23;
  undefined4 *puVar24;
  long lVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  void *pvVar29;
  long *plVar30;
  undefined1 auVar31 [16];
  undefined2 local_308;
  undefined1 local_306;
  undefined2 local_304;
  byte ***local_300;
  undefined8 local_2f8;
  long alStack_2d0 [4];
  long *local_2b0;
  long alStack_2a0 [4];
  long *local_280;
  long alStack_270 [4];
  long *local_250;
  long alStack_240 [4];
  long *local_220;
  long alStack_210 [4];
  long *local_1f0;
  long ***local_1d0;
  ushort local_1c8;
  undefined4 local_1c6;
  undefined2 local_1c2;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined1 local_1ba;
  undefined8 local_1b8;
  undefined4 local_1b0;
  long alStack_1a0 [4];
  long *local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  undefined4 local_b0;
  undefined **local_a0;
  long *local_98;
  undefined ***local_80;
  
  pppplVar15 = param_3;
  ppppbVar19 = param_4;
  lVar9 = FUN_710392e290(0x10,0x19d0,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar14 = extraout_x1;
  if (lVar9 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)0x19d0;
      pppplVar15 = &local_1d0;
      auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      uVar14 = auVar31._8_8_;
      if (((auVar31._0_8_ & 1) != 0) &&
         (lVar9 = FUN_710392e290(0x10,0x19d0,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         uVar14 = extraout_x1_00, lVar9 != 0)) goto LAB_7101aeb1cc;
    }
    lVar9 = 0;
  }
LAB_7101aeb1cc:
  *(undefined1 *)(lVar9 + 0x104) = 0;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined4 *)(lVar9 + 0x100) = 0xffffffff;
  *(undefined1 *)(lVar9 + 0x108) = 0;
  *(long *)lVar9 = lVar9;
  *(undefined8 *)(lVar9 + 8) = 0;
  *(undefined8 *)(lVar9 + 0xf0) = 0;
  *(undefined8 *)(lVar9 + 0xf8) = 0xffffffff;
  *(undefined8 *)(lVar9 + 0xe0) = 0;
  *(undefined8 *)(lVar9 + 0xe8) = 0;
  *(undefined8 *)(lVar9 + 0xd0) = 0;
  *(undefined8 *)(lVar9 + 0xd8) = 0;
  *(undefined8 *)(lVar9 + 0xc0) = 0;
  *(undefined8 *)(lVar9 + 200) = 0;
  *(undefined8 *)(lVar9 + 0xb0) = 0;
  *(undefined8 *)(lVar9 + 0xb8) = 0;
  *(undefined8 *)(lVar9 + 0xa0) = 0;
  *(undefined8 *)(lVar9 + 0xa8) = 0;
  *(undefined8 *)(lVar9 + 0x90) = 0;
  *(undefined8 *)(lVar9 + 0x98) = 0;
  *(undefined8 *)(lVar9 + 0x80) = 0;
  *(undefined8 *)(lVar9 + 0x88) = 0;
  *(undefined8 *)(lVar9 + 0x70) = 0;
  *(undefined8 *)(lVar9 + 0x78) = 0;
  *(undefined8 *)(lVar9 + 0x60) = 0;
  *(undefined8 *)(lVar9 + 0x68) = 0;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(undefined8 *)(lVar9 + 0x58) = 0;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0;
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(undefined8 *)(lVar9 + 0x38) = 0;
  *(undefined8 *)(lVar9 + 0x20) = 0;
  *(undefined8 *)(lVar9 + 0x28) = 0;
  *(undefined8 *)(lVar9 + 0x110) = 0;
  *(undefined8 *)(lVar9 + 0x118) = 0;
  FUN_7103776290((undefined8 *)(lVar9 + 0x120),uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,
                 param_8);
  *(undefined8 *)(lVar9 + 0x1c8) = 0;
  *(undefined8 *)(lVar9 + 0x1d0) = 0;
  *(undefined8 *)(lVar9 + 0x1b8) = 0;
  *(undefined8 *)(lVar9 + 0x1c0) = 0;
  *(undefined8 *)(lVar9 + 0x130) = 0;
  *(undefined8 *)(lVar9 + 0x1a8) = 0;
  *(undefined8 *)(lVar9 + 0x1b0) = 0;
  *(undefined8 *)(lVar9 + 0x198) = 0;
  *(undefined8 *)(lVar9 + 0x1a0) = 0;
  *(undefined8 *)(lVar9 + 0x188) = 0;
  *(undefined8 *)(lVar9 + 400) = 0;
  *(undefined8 *)(lVar9 + 0x178) = 0;
  *(undefined8 *)(lVar9 + 0x180) = 0;
  *(undefined ***)(lVar9 + 0x178) = &PTR_FUN_710523d9a8;
  *(undefined8 *)(lVar9 + 0x168) = 0;
  *(undefined8 *)(lVar9 + 0x170) = 0;
  *(undefined8 *)(lVar9 + 0x158) = 0;
  *(undefined8 *)(lVar9 + 0x160) = 0;
  *(undefined8 *)(lVar9 + 0x148) = 0;
  *(undefined8 *)(lVar9 + 0x150) = 0;
  *(undefined8 *)(lVar9 + 0x138) = 0;
  *(undefined8 *)(lVar9 + 0x140) = 0;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb2b4;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb2b4:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x180) = puVar10;
  *(undefined ***)(lVar9 + 0x188) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb314;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb314:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 400) = puVar10;
  *(undefined ***)(lVar9 + 0x198) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb374;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb374:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x1a0) = puVar10;
  *(undefined ***)(lVar9 + 0x1a8) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb3d4;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb3d4:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x1b0) = puVar10;
  *(undefined ***)(lVar9 + 0x1b8) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb434;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb434:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x1c0) = puVar10;
  *(undefined ***)(lVar9 + 0x1c8) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb494;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb494:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined ***)(lVar9 + 0x1e0) = &PTR_FUN_710523da28;
  *(undefined8 **)(lVar9 + 0x1d0) = puVar10;
  *(undefined8 *)(lVar9 + 0x1d8) = 0;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb500;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb500:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x1e8) = puVar10;
  *(undefined ***)(lVar9 + 0x1f0) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb55c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb55c:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x1f8) = puVar10;
  *(undefined ***)(lVar9 + 0x200) = &PTR_FUN_710523d9a8;
  *(undefined8 *)(lVar9 + 0x288) = 0;
  *(undefined8 *)(lVar9 + 0x280) = 0;
  *(undefined8 *)(lVar9 + 0x278) = 0;
  *(undefined8 *)(lVar9 + 0x270) = 0;
  *(undefined8 *)(lVar9 + 0x268) = 0;
  *(undefined8 *)(lVar9 + 0x260) = 0;
  *(undefined8 *)(lVar9 + 600) = 0;
  *(undefined8 *)(lVar9 + 0x250) = 0;
  *(undefined8 *)(lVar9 + 0x248) = 0;
  *(undefined8 *)(lVar9 + 0x240) = 0;
  *(undefined8 *)(lVar9 + 0x238) = 0;
  *(undefined8 *)(lVar9 + 0x230) = 0;
  *(undefined8 *)(lVar9 + 0x228) = 0;
  *(undefined8 *)(lVar9 + 0x220) = 0;
  *(undefined8 *)(lVar9 + 0x218) = 0;
  *(undefined8 *)(lVar9 + 0x210) = 0;
  *(undefined8 *)(lVar9 + 0x208) = 0;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb5fc;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb5fc:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x208) = puVar10;
  *(undefined ***)(lVar9 + 0x210) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb660;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb660:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x218) = puVar10;
  *(undefined ***)(lVar9 + 0x220) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb6c4;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb6c4:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x228) = puVar10;
  *(undefined ***)(lVar9 + 0x230) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb728;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb728:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x238) = puVar10;
  *(undefined ***)(lVar9 + 0x240) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb78c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb78c:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x248) = puVar10;
  *(undefined ***)(lVar9 + 0x250) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb7f0;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb7f0:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 600) = puVar10;
  *(undefined ***)(lVar9 + 0x260) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb854;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb854:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x268) = puVar10;
  *(undefined ***)(lVar9 + 0x270) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  uVar14 = extraout_x1_01;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      uVar14 = auVar31._8_8_;
      if (((auVar31._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         uVar14 = extraout_x1_02, puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb8b8;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb8b8:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x278) = puVar10;
  FUN_7103776290((undefined8 *)(lVar9 + 0x280),uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,
                 param_8);
  *(undefined8 *)(lVar9 + 0x318) = 0;
  *(undefined8 *)(lVar9 + 0x310) = 0;
  *(undefined8 *)(lVar9 + 0x308) = 0;
  *(undefined8 *)(lVar9 + 0x300) = 0;
  *(undefined8 *)(lVar9 + 0x2f8) = 0;
  *(undefined8 *)(lVar9 + 0x2f0) = 0;
  *(undefined8 *)(lVar9 + 0x2e8) = 0;
  *(undefined8 *)(lVar9 + 0x2e0) = 0;
  *(undefined8 *)(lVar9 + 0x2d8) = 0;
  *(undefined8 *)(lVar9 + 0x2d0) = 0;
  *(undefined8 *)(lVar9 + 0x2c8) = 0;
  *(undefined8 *)(lVar9 + 0x2c0) = 0;
  *(undefined8 *)(lVar9 + 0x2b8) = 0;
  *(undefined8 *)(lVar9 + 0x2b0) = 0;
  *(undefined8 *)(lVar9 + 0x2a8) = 0;
  *(undefined8 *)(lVar9 + 0x2a0) = 0;
  *(undefined8 *)(lVar9 + 0x298) = 0;
  *(undefined ***)(lVar9 + 0x290) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb96c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb96c:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x298) = puVar10;
  *(undefined ***)(lVar9 + 0x2a0) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeb9d0;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeb9d0:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x2a8) = puVar10;
  *(undefined ***)(lVar9 + 0x2b0) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeba34;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeba34:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x2b8) = puVar10;
  *(undefined ***)(lVar9 + 0x2c0) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeba98;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeba98:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x2c8) = puVar10;
  *(undefined ***)(lVar9 + 0x2d0) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aebafc;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aebafc:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x2d8) = puVar10;
  *(undefined ***)(lVar9 + 0x2e0) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aebb60;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aebb60:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x2e8) = puVar10;
  *(undefined ***)(lVar9 + 0x2f0) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aebbc4;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aebbc4:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x2f8) = puVar10;
  *(undefined ***)(lVar9 + 0x300) = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  uVar14 = extraout_x1_03;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&SUB_00000020;
      pppplVar15 = &local_1d0;
      auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      uVar14 = auVar31._8_8_;
      if (((auVar31._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         uVar14 = extraout_x1_04, puVar10 != (undefined8 *)0x0)) goto LAB_7101aebc28;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aebc28:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x308) = puVar10;
  FUN_7103776290((undefined8 *)(lVar9 + 0x310),uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,
                 param_8);
  pppplVar15 = (long ****)0x1638;
  *(undefined8 **)(lVar9 + 800) = param_2;
  *(long *****)(lVar9 + 0x328) = param_3;
  *(undefined4 *)(lVar9 + 0x350) = 0;
  *(undefined1 *)(lVar9 + 0x354) = 0;
  *(undefined8 *)(lVar9 + 0x345) = 0;
  *(undefined8 *)(lVar9 + 0x340) = 0;
  *(undefined8 *)(lVar9 + 0x338) = 0;
  *(undefined8 *)(lVar9 + 0x330) = 0;
  memset((void *)(lVar9 + 0x358),0,0x1638);
  FUN_71004f5770((undefined8 *)(lVar9 + 0x410));
  *(undefined4 *)(lVar9 + 0x500) = 0;
  *(undefined8 *)(lVar9 + 0x4f6) = 0;
  *(undefined8 *)(lVar9 + 0x4f0) = 0;
  *(undefined8 *)(lVar9 + 0x4e8) = 0;
  *(undefined8 *)(lVar9 + 0x4e0) = 0;
  *(undefined8 *)(lVar9 + 0x4d8) = 0;
  *(undefined8 *)(lVar9 + 0x4d0) = 0;
  *(undefined8 *)(lVar9 + 0x5a0) = 0;
  *(undefined8 *)(lVar9 + 0x598) = 0;
  *(undefined8 *)(lVar9 + 0x590) = 0;
  *(undefined8 *)(lVar9 + 0x588) = 0;
  *(undefined8 *)(lVar9 + 0x580) = 0;
  *(undefined8 *)(lVar9 + 0x578) = 0;
  *(undefined8 *)(lVar9 + 0x570) = 0;
  *(undefined8 *)(lVar9 + 0x568) = 0;
  *(undefined8 *)(lVar9 + 0x560) = 0;
  *(undefined8 *)(lVar9 + 0x558) = 0;
  *(undefined8 *)(lVar9 + 0x550) = 0;
  *(undefined8 *)(lVar9 + 0x548) = 0;
  *(undefined8 *)(lVar9 + 0x540) = 0;
  *(undefined8 *)(lVar9 + 0x538) = 0;
  *(undefined8 *)(lVar9 + 0x530) = 0;
  *(undefined8 *)(lVar9 + 0x528) = 0;
  *(undefined8 *)(lVar9 + 0x520) = 0;
  *(undefined8 *)(lVar9 + 0x518) = 0;
  *(undefined8 *)(lVar9 + 0x510) = 0;
  *(undefined8 *)(lVar9 + 0x508) = 0;
  *(undefined ***)(lVar9 + 0x5a8) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aebd48;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aebd48:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x5b0) = puVar10;
  *(undefined ***)(lVar9 + 0x5b8) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aebda8;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aebda8:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x5c0) = puVar10;
  *(undefined8 *)(lVar9 + 0x5f8) = 0;
  *(undefined8 *)(lVar9 + 0x676) = 0;
  *(undefined8 *)(lVar9 + 0x670) = 0;
  *(undefined8 *)(lVar9 + 0x668) = 0;
  *(undefined8 *)(lVar9 + 0x660) = 0;
  *(undefined8 *)(lVar9 + 0x658) = 0;
  *(undefined8 *)(lVar9 + 0x650) = 0;
  *(undefined8 *)(lVar9 + 0x648) = 0;
  *(undefined8 *)(lVar9 + 0x640) = 0;
  *(undefined8 *)(lVar9 + 0x638) = 0;
  *(undefined8 *)(lVar9 + 0x630) = 0;
  *(undefined8 *)(lVar9 + 0x628) = 0;
  *(undefined8 *)(lVar9 + 0x620) = 0;
  *(undefined8 *)(lVar9 + 0x740) = 0;
  *(undefined8 *)(lVar9 + 0x738) = 0;
  *(undefined8 *)(lVar9 + 0x730) = 0;
  *(undefined8 *)(lVar9 + 0x728) = 0;
  *(undefined8 *)(lVar9 + 0x720) = 0;
  *(undefined8 *)(lVar9 + 0x718) = 0;
  *(undefined8 *)(lVar9 + 0x710) = 0;
  *(undefined8 *)(lVar9 + 0x708) = 0;
  *(undefined8 *)(lVar9 + 0x700) = 0;
  *(undefined8 *)(lVar9 + 0x6f8) = 0;
  *(undefined8 *)(lVar9 + 0x6f0) = 0;
  *(undefined8 *)(lVar9 + 0x6e8) = 0;
  *(undefined8 *)(lVar9 + 0x6e0) = 0;
  *(undefined8 *)(lVar9 + 0x6d8) = 0;
  *(undefined8 *)(lVar9 + 0x6d0) = 0;
  *(undefined8 *)(lVar9 + 0x6c8) = 0;
  *(undefined8 *)(lVar9 + 0x6c0) = 0;
  *(undefined8 *)(lVar9 + 0x6b8) = 0;
  *(undefined8 *)(lVar9 + 0x6b0) = 0;
  *(undefined8 *)(lVar9 + 0x6a8) = 0;
  *(undefined8 *)(lVar9 + 0x6a0) = 0;
  *(undefined8 *)(lVar9 + 0x698) = 0;
  *(undefined8 *)(lVar9 + 0x690) = 0;
  *(undefined8 *)(lVar9 + 0x688) = 0;
  *(undefined8 *)(lVar9 + 0x680) = 0;
  FUN_71004f5770((undefined8 *)(lVar9 + 0x688));
  *(undefined4 *)(lVar9 + 0x778) = 0;
  *(undefined8 *)(lVar9 + 0x76e) = 0;
  *(undefined8 *)(lVar9 + 0x768) = 0;
  *(undefined8 *)(lVar9 + 0x760) = 0;
  *(undefined8 *)(lVar9 + 0x758) = 0;
  *(undefined8 *)(lVar9 + 0x750) = 0;
  *(undefined8 *)(lVar9 + 0x748) = 0;
  *(undefined8 *)(lVar9 + 0x818) = 0;
  *(undefined8 *)(lVar9 + 0x810) = 0;
  *(undefined8 *)(lVar9 + 0x808) = 0;
  *(undefined8 *)(lVar9 + 0x800) = 0;
  *(undefined8 *)(lVar9 + 0x7f8) = 0;
  *(undefined8 *)(lVar9 + 0x7f0) = 0;
  *(undefined8 *)(lVar9 + 0x7e8) = 0;
  *(undefined8 *)(lVar9 + 0x7e0) = 0;
  *(undefined8 *)(lVar9 + 0x7d8) = 0;
  *(undefined8 *)(lVar9 + 2000) = 0;
  *(undefined8 *)(lVar9 + 0x7c8) = 0;
  *(undefined8 *)(lVar9 + 0x7c0) = 0;
  *(undefined8 *)(lVar9 + 0x7b8) = 0;
  *(undefined8 *)(lVar9 + 0x7b0) = 0;
  *(undefined8 *)(lVar9 + 0x7a8) = 0;
  *(undefined8 *)(lVar9 + 0x7a0) = 0;
  *(undefined8 *)(lVar9 + 0x798) = 0;
  *(undefined8 *)(lVar9 + 0x790) = 0;
  *(undefined8 *)(lVar9 + 0x788) = 0;
  *(undefined8 *)(lVar9 + 0x780) = 0;
  *(undefined ***)(lVar9 + 0x820) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aebf1c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aebf1c:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x828) = puVar10;
  *(undefined ***)(lVar9 + 0x830) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aebf7c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aebf7c:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x838) = puVar10;
  *(undefined8 *)(lVar9 + 0x870) = 0;
  *(undefined8 *)(lVar9 + 0x8ee) = 0;
  *(undefined8 *)(lVar9 + 0x8e8) = 0;
  *(undefined8 *)(lVar9 + 0x8e0) = 0;
  *(undefined8 *)(lVar9 + 0x8d8) = 0;
  *(undefined8 *)(lVar9 + 0x8d0) = 0;
  *(undefined8 *)(lVar9 + 0x8c8) = 0;
  *(undefined8 *)(lVar9 + 0x8c0) = 0;
  *(undefined8 *)(lVar9 + 0x8b8) = 0;
  *(undefined8 *)(lVar9 + 0x8b0) = 0;
  *(undefined8 *)(lVar9 + 0x8a8) = 0;
  *(undefined8 *)(lVar9 + 0x8a0) = 0;
  *(undefined8 *)(lVar9 + 0x898) = 0;
  *(undefined8 *)(lVar9 + 0x9b8) = 0;
  *(undefined8 *)(lVar9 + 0x9b0) = 0;
  *(undefined8 *)(lVar9 + 0x9a8) = 0;
  *(undefined8 *)(lVar9 + 0x9a0) = 0;
  *(undefined8 *)(lVar9 + 0x998) = 0;
  *(undefined8 *)(lVar9 + 0x990) = 0;
  *(undefined8 *)(lVar9 + 0x988) = 0;
  *(undefined8 *)(lVar9 + 0x980) = 0;
  *(undefined8 *)(lVar9 + 0x978) = 0;
  *(undefined8 *)(lVar9 + 0x970) = 0;
  *(undefined8 *)(lVar9 + 0x968) = 0;
  *(undefined8 *)(lVar9 + 0x960) = 0;
  *(undefined8 *)(lVar9 + 0x958) = 0;
  *(undefined8 *)(lVar9 + 0x950) = 0;
  *(undefined8 *)(lVar9 + 0x948) = 0;
  *(undefined8 *)(lVar9 + 0x940) = 0;
  *(undefined8 *)(lVar9 + 0x938) = 0;
  *(undefined8 *)(lVar9 + 0x930) = 0;
  *(undefined8 *)(lVar9 + 0x928) = 0;
  *(undefined8 *)(lVar9 + 0x920) = 0;
  *(undefined8 *)(lVar9 + 0x918) = 0;
  *(undefined8 *)(lVar9 + 0x910) = 0;
  *(undefined8 *)(lVar9 + 0x908) = 0;
  *(undefined8 *)(lVar9 + 0x900) = 0;
  *(undefined8 *)(lVar9 + 0x8f8) = 0;
  FUN_71004f5770((undefined8 *)(lVar9 + 0x900));
  *(undefined4 *)(lVar9 + 0x9f0) = 0;
  *(undefined8 *)(lVar9 + 0x9e6) = 0;
  *(undefined8 *)(lVar9 + 0x9e0) = 0;
  *(undefined8 *)(lVar9 + 0x9d8) = 0;
  *(undefined8 *)(lVar9 + 0x9d0) = 0;
  *(undefined8 *)(lVar9 + 0x9c8) = 0;
  *(undefined8 *)(lVar9 + 0x9c0) = 0;
  *(undefined8 *)(lVar9 + 0xa90) = 0;
  *(undefined8 *)(lVar9 + 0xa88) = 0;
  *(undefined8 *)(lVar9 + 0xa80) = 0;
  *(undefined8 *)(lVar9 + 0xa78) = 0;
  *(undefined8 *)(lVar9 + 0xa70) = 0;
  *(undefined8 *)(lVar9 + 0xa68) = 0;
  *(undefined8 *)(lVar9 + 0xa60) = 0;
  *(undefined8 *)(lVar9 + 0xa58) = 0;
  *(undefined8 *)(lVar9 + 0xa50) = 0;
  *(undefined8 *)(lVar9 + 0xa48) = 0;
  *(undefined8 *)(lVar9 + 0xa40) = 0;
  *(undefined8 *)(lVar9 + 0xa38) = 0;
  *(undefined8 *)(lVar9 + 0xa30) = 0;
  *(undefined8 *)(lVar9 + 0xa28) = 0;
  *(undefined8 *)(lVar9 + 0xa20) = 0;
  *(undefined8 *)(lVar9 + 0xa18) = 0;
  *(undefined8 *)(lVar9 + 0xa10) = 0;
  *(undefined8 *)(lVar9 + 0xa08) = 0;
  *(undefined8 *)(lVar9 + 0xa00) = 0;
  *(undefined8 *)(lVar9 + 0x9f8) = 0;
  *(undefined ***)(lVar9 + 0xa98) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aec0f0;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aec0f0:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0xaa0) = puVar10;
  *(undefined ***)(lVar9 + 0xaa8) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aec150;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aec150:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0xab0) = puVar10;
  *(undefined8 *)(lVar9 + 0xae8) = 0;
  *(undefined8 *)(lVar9 + 0xb66) = 0;
  *(undefined8 *)(lVar9 + 0xb60) = 0;
  *(undefined8 *)(lVar9 + 0xb58) = 0;
  *(undefined8 *)(lVar9 + 0xb50) = 0;
  *(undefined8 *)(lVar9 + 0xb48) = 0;
  *(undefined8 *)(lVar9 + 0xb40) = 0;
  *(undefined8 *)(lVar9 + 0xb38) = 0;
  *(undefined8 *)(lVar9 + 0xb30) = 0;
  *(undefined8 *)(lVar9 + 0xb28) = 0;
  *(undefined8 *)(lVar9 + 0xb20) = 0;
  *(undefined8 *)(lVar9 + 0xb18) = 0;
  *(undefined8 *)(lVar9 + 0xb10) = 0;
  *(undefined8 *)(lVar9 + 0xc30) = 0;
  *(undefined8 *)(lVar9 + 0xc28) = 0;
  *(undefined8 *)(lVar9 + 0xc20) = 0;
  *(undefined8 *)(lVar9 + 0xc18) = 0;
  *(undefined8 *)(lVar9 + 0xc10) = 0;
  *(undefined8 *)(lVar9 + 0xc08) = 0;
  *(undefined8 *)(lVar9 + 0xc00) = 0;
  *(undefined8 *)(lVar9 + 0xbf8) = 0;
  *(undefined8 *)(lVar9 + 0xbf0) = 0;
  *(undefined8 *)(lVar9 + 0xbe8) = 0;
  *(undefined8 *)(lVar9 + 0xbe0) = 0;
  *(undefined8 *)(lVar9 + 0xbd8) = 0;
  *(undefined8 *)(lVar9 + 0xbd0) = 0;
  *(undefined8 *)(lVar9 + 0xbc8) = 0;
  *(undefined8 *)(lVar9 + 0xbc0) = 0;
  *(undefined8 *)(lVar9 + 3000) = 0;
  *(undefined8 *)(lVar9 + 0xbb0) = 0;
  *(undefined8 *)(lVar9 + 0xba8) = 0;
  *(undefined8 *)(lVar9 + 0xba0) = 0;
  *(undefined8 *)(lVar9 + 0xb98) = 0;
  *(undefined8 *)(lVar9 + 0xb90) = 0;
  *(undefined8 *)(lVar9 + 0xb88) = 0;
  *(undefined8 *)(lVar9 + 0xb80) = 0;
  *(undefined8 *)(lVar9 + 0xb78) = 0;
  *(undefined8 *)(lVar9 + 0xb70) = 0;
  FUN_71004f5770((undefined8 *)(lVar9 + 0xb78));
  *(undefined4 *)(lVar9 + 0xc68) = 0;
  *(undefined8 *)(lVar9 + 0xc5e) = 0;
  *(undefined8 *)(lVar9 + 0xc58) = 0;
  *(undefined8 *)(lVar9 + 0xc50) = 0;
  *(undefined8 *)(lVar9 + 0xc48) = 0;
  *(undefined8 *)(lVar9 + 0xc40) = 0;
  *(undefined8 *)(lVar9 + 0xc38) = 0;
  *(undefined8 *)(lVar9 + 0xd08) = 0;
  *(undefined8 *)(lVar9 + 0xd00) = 0;
  *(undefined8 *)(lVar9 + 0xcf8) = 0;
  *(undefined8 *)(lVar9 + 0xcf0) = 0;
  *(undefined8 *)(lVar9 + 0xce8) = 0;
  *(undefined8 *)(lVar9 + 0xce0) = 0;
  *(undefined8 *)(lVar9 + 0xcd8) = 0;
  *(undefined8 *)(lVar9 + 0xcd0) = 0;
  *(undefined8 *)(lVar9 + 0xcc8) = 0;
  *(undefined8 *)(lVar9 + 0xcc0) = 0;
  *(undefined8 *)(lVar9 + 0xcb8) = 0;
  *(undefined8 *)(lVar9 + 0xcb0) = 0;
  *(undefined8 *)(lVar9 + 0xca8) = 0;
  *(undefined8 *)(lVar9 + 0xca0) = 0;
  *(undefined8 *)(lVar9 + 0xc98) = 0;
  *(undefined8 *)(lVar9 + 0xc90) = 0;
  *(undefined8 *)(lVar9 + 0xc88) = 0;
  *(undefined8 *)(lVar9 + 0xc80) = 0;
  *(undefined8 *)(lVar9 + 0xc78) = 0;
  *(undefined8 *)(lVar9 + 0xc70) = 0;
  *(undefined ***)(lVar9 + 0xd10) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aec2c4;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aec2c4:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0xd18) = puVar10;
  *(undefined ***)(lVar9 + 0xd20) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aec324;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aec324:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0xd28) = puVar10;
  *(undefined8 *)(lVar9 + 0xd60) = 0;
  *(undefined8 *)(lVar9 + 0xdde) = 0;
  *(undefined8 *)(lVar9 + 0xdd8) = 0;
  *(undefined8 *)(lVar9 + 0xdd0) = 0;
  *(undefined8 *)(lVar9 + 0xdc8) = 0;
  *(undefined8 *)(lVar9 + 0xdc0) = 0;
  *(undefined8 *)(lVar9 + 0xdb8) = 0;
  *(undefined8 *)(lVar9 + 0xdb0) = 0;
  *(undefined8 *)(lVar9 + 0xda8) = 0;
  *(undefined8 *)(lVar9 + 0xda0) = 0;
  *(undefined8 *)(lVar9 + 0xd98) = 0;
  *(undefined8 *)(lVar9 + 0xd90) = 0;
  *(undefined8 *)(lVar9 + 0xd88) = 0;
  *(undefined8 *)(lVar9 + 0xea8) = 0;
  *(undefined8 *)(lVar9 + 0xea0) = 0;
  *(undefined8 *)(lVar9 + 0xe98) = 0;
  *(undefined8 *)(lVar9 + 0xe90) = 0;
  *(undefined8 *)(lVar9 + 0xe88) = 0;
  *(undefined8 *)(lVar9 + 0xe80) = 0;
  *(undefined8 *)(lVar9 + 0xe78) = 0;
  *(undefined8 *)(lVar9 + 0xe70) = 0;
  *(undefined8 *)(lVar9 + 0xe68) = 0;
  *(undefined8 *)(lVar9 + 0xe60) = 0;
  *(undefined8 *)(lVar9 + 0xe58) = 0;
  *(undefined8 *)(lVar9 + 0xe50) = 0;
  *(undefined8 *)(lVar9 + 0xe48) = 0;
  *(undefined8 *)(lVar9 + 0xe40) = 0;
  *(undefined8 *)(lVar9 + 0xe38) = 0;
  *(undefined8 *)(lVar9 + 0xe30) = 0;
  *(undefined8 *)(lVar9 + 0xe28) = 0;
  *(undefined8 *)(lVar9 + 0xe20) = 0;
  *(undefined8 *)(lVar9 + 0xe18) = 0;
  *(undefined8 *)(lVar9 + 0xe10) = 0;
  *(undefined8 *)(lVar9 + 0xe08) = 0;
  *(undefined8 *)(lVar9 + 0xe00) = 0;
  *(undefined8 *)(lVar9 + 0xdf8) = 0;
  *(undefined8 *)(lVar9 + 0xdf0) = 0;
  *(undefined8 *)(lVar9 + 0xde8) = 0;
  FUN_71004f5770((undefined8 *)(lVar9 + 0xdf0));
  *(undefined4 *)(lVar9 + 0xee0) = 0;
  *(undefined8 *)(lVar9 + 0xed6) = 0;
  *(undefined8 *)(lVar9 + 0xed0) = 0;
  *(undefined8 *)(lVar9 + 0xec8) = 0;
  *(undefined8 *)(lVar9 + 0xec0) = 0;
  *(undefined8 *)(lVar9 + 0xeb8) = 0;
  *(undefined8 *)(lVar9 + 0xeb0) = 0;
  *(undefined8 *)(lVar9 + 0xf80) = 0;
  *(undefined8 *)(lVar9 + 0xf78) = 0;
  *(undefined8 *)(lVar9 + 0xf70) = 0;
  *(undefined8 *)(lVar9 + 0xf68) = 0;
  *(undefined8 *)(lVar9 + 0xf60) = 0;
  *(undefined8 *)(lVar9 + 0xf58) = 0;
  *(undefined8 *)(lVar9 + 0xf50) = 0;
  *(undefined8 *)(lVar9 + 0xf48) = 0;
  *(undefined8 *)(lVar9 + 0xf40) = 0;
  *(undefined8 *)(lVar9 + 0xf38) = 0;
  *(undefined8 *)(lVar9 + 0xf30) = 0;
  *(undefined8 *)(lVar9 + 0xf28) = 0;
  *(undefined8 *)(lVar9 + 0xf20) = 0;
  *(undefined8 *)(lVar9 + 0xf18) = 0;
  *(undefined8 *)(lVar9 + 0xf10) = 0;
  *(undefined8 *)(lVar9 + 0xf08) = 0;
  *(undefined8 *)(lVar9 + 0xf00) = 0;
  *(undefined8 *)(lVar9 + 0xef8) = 0;
  *(undefined8 *)(lVar9 + 0xef0) = 0;
  *(undefined8 *)(lVar9 + 0xee8) = 0;
  *(undefined ***)(lVar9 + 0xf88) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aec498;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aec498:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0xf90) = puVar10;
  *(undefined ***)(lVar9 + 0xf98) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aec4f8;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aec4f8:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 4000) = puVar10;
  *(undefined8 *)(lVar9 + 0xfd8) = 0;
  *(undefined8 *)(lVar9 + 0x1056) = 0;
  *(undefined8 *)(lVar9 + 0x1050) = 0;
  *(undefined8 *)(lVar9 + 0x1048) = 0;
  *(undefined8 *)(lVar9 + 0x1040) = 0;
  *(undefined8 *)(lVar9 + 0x1038) = 0;
  *(undefined8 *)(lVar9 + 0x1030) = 0;
  *(undefined8 *)(lVar9 + 0x1028) = 0;
  *(undefined8 *)(lVar9 + 0x1020) = 0;
  *(undefined8 *)(lVar9 + 0x1018) = 0;
  *(undefined8 *)(lVar9 + 0x1010) = 0;
  *(undefined8 *)(lVar9 + 0x1008) = 0;
  *(undefined8 *)(lVar9 + 0x1000) = 0;
  *(undefined8 *)(lVar9 + 0x1120) = 0;
  *(undefined8 *)(lVar9 + 0x1118) = 0;
  *(undefined8 *)(lVar9 + 0x1110) = 0;
  *(undefined8 *)(lVar9 + 0x1108) = 0;
  *(undefined8 *)(lVar9 + 0x1100) = 0;
  *(undefined8 *)(lVar9 + 0x10f8) = 0;
  *(undefined8 *)(lVar9 + 0x10f0) = 0;
  *(undefined8 *)(lVar9 + 0x10e8) = 0;
  *(undefined8 *)(lVar9 + 0x10e0) = 0;
  *(undefined8 *)(lVar9 + 0x10d8) = 0;
  *(undefined8 *)(lVar9 + 0x10d0) = 0;
  *(undefined8 *)(lVar9 + 0x10c8) = 0;
  *(undefined8 *)(lVar9 + 0x10c0) = 0;
  *(undefined8 *)(lVar9 + 0x10b8) = 0;
  *(undefined8 *)(lVar9 + 0x10b0) = 0;
  *(undefined8 *)(lVar9 + 0x10a8) = 0;
  *(undefined8 *)(lVar9 + 0x10a0) = 0;
  *(undefined8 *)(lVar9 + 0x1098) = 0;
  *(undefined8 *)(lVar9 + 0x1090) = 0;
  *(undefined8 *)(lVar9 + 0x1088) = 0;
  *(undefined8 *)(lVar9 + 0x1080) = 0;
  *(undefined8 *)(lVar9 + 0x1078) = 0;
  *(undefined8 *)(lVar9 + 0x1070) = 0;
  *(undefined8 *)(lVar9 + 0x1068) = 0;
  *(undefined8 *)(lVar9 + 0x1060) = 0;
  FUN_71004f5770((undefined8 *)(lVar9 + 0x1068));
  *(undefined4 *)(lVar9 + 0x1158) = 0;
  *(undefined8 *)(lVar9 + 0x114e) = 0;
  *(undefined8 *)(lVar9 + 0x1148) = 0;
  *(undefined8 *)(lVar9 + 0x1140) = 0;
  *(undefined8 *)(lVar9 + 0x1138) = 0;
  *(undefined8 *)(lVar9 + 0x1130) = 0;
  *(undefined8 *)(lVar9 + 0x1128) = 0;
  *(undefined8 *)(lVar9 + 0x11f8) = 0;
  *(undefined8 *)(lVar9 + 0x11f0) = 0;
  *(undefined8 *)(lVar9 + 0x11e8) = 0;
  *(undefined8 *)(lVar9 + 0x11e0) = 0;
  *(undefined8 *)(lVar9 + 0x11d8) = 0;
  *(undefined8 *)(lVar9 + 0x11d0) = 0;
  *(undefined8 *)(lVar9 + 0x11c8) = 0;
  *(undefined8 *)(lVar9 + 0x11c0) = 0;
  *(undefined8 *)(lVar9 + 0x11b8) = 0;
  *(undefined8 *)(lVar9 + 0x11b0) = 0;
  *(undefined8 *)(lVar9 + 0x11a8) = 0;
  *(undefined8 *)(lVar9 + 0x11a0) = 0;
  *(undefined8 *)(lVar9 + 0x1198) = 0;
  *(undefined8 *)(lVar9 + 0x1190) = 0;
  *(undefined8 *)(lVar9 + 0x1188) = 0;
  *(undefined8 *)(lVar9 + 0x1180) = 0;
  *(undefined8 *)(lVar9 + 0x1178) = 0;
  *(undefined8 *)(lVar9 + 0x1170) = 0;
  *(undefined8 *)(lVar9 + 0x1168) = 0;
  *(undefined8 *)(lVar9 + 0x1160) = 0;
  *(undefined ***)(lVar9 + 0x1200) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aec670;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aec670:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x1208) = puVar10;
  *(undefined ***)(lVar9 + 0x1210) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aec6d0;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aec6d0:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x1218) = puVar10;
  *(undefined8 *)(lVar9 + 0x1250) = 0;
  *(undefined8 *)(lVar9 + 0x12ce) = 0;
  *(undefined8 *)(lVar9 + 0x12c8) = 0;
  *(undefined8 *)(lVar9 + 0x12c0) = 0;
  *(undefined8 *)(lVar9 + 0x12b8) = 0;
  *(undefined8 *)(lVar9 + 0x12b0) = 0;
  *(undefined8 *)(lVar9 + 0x12a8) = 0;
  *(undefined8 *)(lVar9 + 0x12a0) = 0;
  *(undefined8 *)(lVar9 + 0x1298) = 0;
  *(undefined8 *)(lVar9 + 0x1290) = 0;
  *(undefined8 *)(lVar9 + 0x1288) = 0;
  *(undefined8 *)(lVar9 + 0x1280) = 0;
  *(undefined8 *)(lVar9 + 0x1278) = 0;
  *(undefined8 *)(lVar9 + 0x1398) = 0;
  *(undefined8 *)(lVar9 + 0x1390) = 0;
  *(undefined8 *)(lVar9 + 5000) = 0;
  *(undefined8 *)(lVar9 + 0x1380) = 0;
  *(undefined8 *)(lVar9 + 0x1378) = 0;
  *(undefined8 *)(lVar9 + 0x1370) = 0;
  *(undefined8 *)(lVar9 + 0x1368) = 0;
  *(undefined8 *)(lVar9 + 0x1360) = 0;
  *(undefined8 *)(lVar9 + 0x1358) = 0;
  *(undefined8 *)(lVar9 + 0x1350) = 0;
  *(undefined8 *)(lVar9 + 0x1348) = 0;
  *(undefined8 *)(lVar9 + 0x1340) = 0;
  *(undefined8 *)(lVar9 + 0x1338) = 0;
  *(undefined8 *)(lVar9 + 0x1330) = 0;
  *(undefined8 *)(lVar9 + 0x1328) = 0;
  *(undefined8 *)(lVar9 + 0x1320) = 0;
  *(undefined8 *)(lVar9 + 0x1318) = 0;
  *(undefined8 *)(lVar9 + 0x1310) = 0;
  *(undefined8 *)(lVar9 + 0x1308) = 0;
  *(undefined8 *)(lVar9 + 0x1300) = 0;
  *(undefined8 *)(lVar9 + 0x12f8) = 0;
  *(undefined8 *)(lVar9 + 0x12f0) = 0;
  *(undefined8 *)(&DAT_000012e8 + lVar9) = 0;
  *(undefined8 *)(&DAT_000012e0 + lVar9) = 0;
  *(undefined8 *)(&DAT_000012d8 + lVar9) = 0;
  FUN_71004f5770((undefined8 *)(&DAT_000012e0 + lVar9));
  *(undefined4 *)(lVar9 + 0x13d0) = 0;
  *(undefined8 *)(lVar9 + 0x13c6) = 0;
  *(undefined8 *)(lVar9 + 0x13c0) = 0;
  *(undefined8 *)(lVar9 + 0x13b8) = 0;
  *(undefined8 *)(lVar9 + 0x13b0) = 0;
  *(undefined8 *)(lVar9 + 0x13a8) = 0;
  *(undefined8 *)(lVar9 + 0x13a0) = 0;
  *(undefined8 *)(lVar9 + 0x1470) = 0;
  *(undefined8 *)(lVar9 + 0x1468) = 0;
  *(undefined8 *)(lVar9 + 0x1460) = 0;
  *(undefined8 *)(lVar9 + 0x1458) = 0;
  *(undefined8 *)(lVar9 + 0x1450) = 0;
  *(undefined8 *)(lVar9 + 0x1448) = 0;
  *(undefined8 *)(lVar9 + 0x1440) = 0;
  *(undefined8 *)(lVar9 + 0x1438) = 0;
  *(undefined8 *)(lVar9 + 0x1430) = 0;
  *(undefined8 *)(lVar9 + 0x1428) = 0;
  *(undefined8 *)(lVar9 + 0x1420) = 0;
  *(undefined8 *)(lVar9 + 0x1418) = 0;
  *(undefined8 *)(lVar9 + 0x1410) = 0;
  *(undefined8 *)(lVar9 + 0x1408) = 0;
  *(undefined8 *)(lVar9 + 0x1400) = 0;
  *(undefined8 *)(lVar9 + 0x13f8) = 0;
  *(undefined8 *)(lVar9 + 0x13f0) = 0;
  *(undefined8 *)(lVar9 + 0x13e8) = 0;
  *(undefined8 *)(lVar9 + 0x13e0) = 0;
  *(undefined8 *)(lVar9 + 0x13d8) = 0;
  *(undefined ***)(lVar9 + 0x1478) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aec848;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aec848:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x1480) = puVar10;
  *(undefined ***)(lVar9 + 0x1488) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aec8a8;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aec8a8:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x1490) = puVar10;
  *(undefined8 *)(lVar9 + 0x14c8) = 0;
  *(undefined8 *)(lVar9 + 0x1546) = 0;
  *(undefined8 *)(lVar9 + 0x1540) = 0;
  *(undefined8 *)(lVar9 + 0x1538) = 0;
  *(undefined8 *)(lVar9 + 0x1530) = 0;
  *(undefined8 *)(lVar9 + 0x1528) = 0;
  *(undefined8 *)(lVar9 + 0x1520) = 0;
  *(undefined8 *)(lVar9 + 0x1518) = 0;
  *(undefined8 *)(lVar9 + 0x1510) = 0;
  *(undefined8 *)(lVar9 + 0x1508) = 0;
  *(undefined8 *)(lVar9 + 0x1500) = 0;
  *(undefined8 *)(lVar9 + 0x14f8) = 0;
  *(undefined8 *)(lVar9 + 0x14f0) = 0;
  *(undefined8 *)(lVar9 + 0x1610) = 0;
  *(undefined8 *)(lVar9 + 0x1608) = 0;
  *(undefined8 *)(lVar9 + 0x1600) = 0;
  *(undefined8 *)(lVar9 + 0x15f8) = 0;
  *(undefined8 *)(lVar9 + 0x15f0) = 0;
  *(undefined8 *)(lVar9 + 0x15e8) = 0;
  *(undefined8 *)(lVar9 + 0x15e0) = 0;
  *(undefined8 *)(lVar9 + 0x15d8) = 0;
  *(undefined8 *)(lVar9 + 0x15d0) = 0;
  *(undefined8 *)(lVar9 + 0x15c8) = 0;
  *(undefined8 *)(lVar9 + 0x15c0) = 0;
  *(undefined8 *)(lVar9 + 0x15b8) = 0;
  *(undefined8 *)(lVar9 + 0x15b0) = 0;
  *(undefined8 *)(lVar9 + 0x15a8) = 0;
  *(undefined8 *)(lVar9 + 0x15a0) = 0;
  *(undefined8 *)(lVar9 + 0x1598) = 0;
  *(undefined8 *)(lVar9 + 0x1590) = 0;
  *(undefined8 *)(lVar9 + 0x1588) = 0;
  *(undefined8 *)(lVar9 + 0x1580) = 0;
  *(undefined8 *)(lVar9 + 0x1578) = 0;
  *(undefined8 *)(lVar9 + 0x1570) = 0;
  *(undefined8 *)(lVar9 + 0x1568) = 0;
  *(undefined8 *)(lVar9 + 0x1560) = 0;
  *(undefined8 *)(lVar9 + 0x1558) = 0;
  *(undefined8 *)(lVar9 + 0x1550) = 0;
  FUN_71004f5770((undefined8 *)(lVar9 + 0x1558));
  *(undefined4 *)(lVar9 + 0x1648) = 0;
  *(undefined8 *)(lVar9 + 0x163e) = 0;
  *(undefined8 *)(lVar9 + 0x1638) = 0;
  *(undefined8 *)(lVar9 + 0x1630) = 0;
  *(undefined8 *)(lVar9 + 0x1628) = 0;
  *(undefined8 *)(lVar9 + 0x1620) = 0;
  *(undefined8 *)(lVar9 + 0x1618) = 0;
  *(undefined8 *)(lVar9 + 0x16e8) = 0;
  *(undefined8 *)(lVar9 + 0x16e0) = 0;
  *(undefined8 *)(lVar9 + 0x16d8) = 0;
  *(undefined8 *)(lVar9 + 0x16d0) = 0;
  *(undefined8 *)(lVar9 + 0x16c8) = 0;
  *(undefined8 *)(lVar9 + 0x16c0) = 0;
  *(undefined8 *)(lVar9 + 0x16b8) = 0;
  *(undefined8 *)(lVar9 + 0x16b0) = 0;
  *(undefined8 *)(lVar9 + 0x16a8) = 0;
  *(undefined8 *)(lVar9 + 0x16a0) = 0;
  *(undefined8 *)(lVar9 + 0x1698) = 0;
  *(undefined8 *)(lVar9 + 0x1690) = 0;
  *(undefined8 *)(lVar9 + 0x1688) = 0;
  *(undefined8 *)(lVar9 + 0x1680) = 0;
  *(undefined8 *)(lVar9 + 0x1678) = 0;
  *(undefined8 *)(lVar9 + 0x1670) = 0;
  *(undefined8 *)(lVar9 + 0x1668) = 0;
  *(undefined8 *)(lVar9 + 0x1660) = 0;
  *(undefined8 *)(lVar9 + 0x1658) = 0;
  *(undefined8 *)(lVar9 + 0x1650) = 0;
  *(undefined ***)(lVar9 + 0x16f0) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeca20;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeca20:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x16f8) = puVar10;
  *(undefined ***)(lVar9 + 0x1700) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aeca80;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aeca80:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x1708) = puVar10;
  *(undefined8 *)(lVar9 + 0x1740) = 0;
  *(undefined8 *)(lVar9 + 0x17be) = 0;
  *(undefined8 *)(lVar9 + 0x17b8) = 0;
  *(undefined8 *)(lVar9 + 0x17b0) = 0;
  *(undefined8 *)(lVar9 + 0x17a8) = 0;
  *(undefined8 *)(lVar9 + 0x17a0) = 0;
  *(undefined8 *)(lVar9 + 0x1798) = 0;
  *(undefined8 *)(lVar9 + 0x1790) = 0;
  *(undefined8 *)(lVar9 + 0x1788) = 0;
  *(undefined8 *)(lVar9 + 0x1780) = 0;
  *(undefined8 *)(lVar9 + 0x1778) = 0;
  *(undefined8 *)(lVar9 + 6000) = 0;
  *(undefined8 *)(lVar9 + 0x1768) = 0;
  *(undefined8 *)(lVar9 + 0x1888) = 0;
  *(undefined8 *)(lVar9 + 0x1880) = 0;
  *(undefined8 *)(lVar9 + 0x1878) = 0;
  *(undefined8 *)(lVar9 + 0x1870) = 0;
  *(undefined8 *)(lVar9 + 0x1868) = 0;
  *(undefined8 *)(lVar9 + 0x1860) = 0;
  *(undefined8 *)(lVar9 + 0x1858) = 0;
  *(undefined8 *)(lVar9 + 0x1850) = 0;
  *(undefined8 *)(lVar9 + 0x1848) = 0;
  *(undefined8 *)(lVar9 + 0x1840) = 0;
  *(undefined8 *)(lVar9 + 0x1838) = 0;
  *(undefined8 *)(lVar9 + 0x1830) = 0;
  *(undefined8 *)(lVar9 + 0x1828) = 0;
  *(undefined8 *)(lVar9 + 0x1820) = 0;
  *(undefined8 *)(lVar9 + 0x1818) = 0;
  *(undefined8 *)(lVar9 + 0x1810) = 0;
  *(undefined8 *)(lVar9 + 0x1808) = 0;
  *(undefined8 *)(lVar9 + 0x1800) = 0;
  *(undefined8 *)(lVar9 + 0x17f8) = 0;
  *(undefined8 *)(lVar9 + 0x17f0) = 0;
  *(undefined8 *)(lVar9 + 0x17e8) = 0;
  *(undefined8 *)(lVar9 + 0x17e0) = 0;
  *(undefined8 *)(lVar9 + 0x17d8) = 0;
  *(undefined8 *)(lVar9 + 0x17d0) = 0;
  *(undefined8 *)(lVar9 + 0x17c8) = 0;
  FUN_71004f5770((undefined8 *)(lVar9 + 0x17d0));
  *(undefined4 *)(lVar9 + 0x18c0) = 0;
  *(undefined8 *)(lVar9 + 0x18b6) = 0;
  *(undefined8 *)(lVar9 + 0x18b0) = 0;
  *(undefined8 *)(lVar9 + 0x18a8) = 0;
  *(undefined8 *)(lVar9 + 0x18a0) = 0;
  *(undefined8 *)(lVar9 + 0x1898) = 0;
  *(undefined8 *)(lVar9 + 0x1890) = 0;
  *(undefined8 *)(lVar9 + 0x1960) = 0;
  *(undefined8 *)(lVar9 + 0x1958) = 0;
  *(undefined8 *)(lVar9 + 0x1950) = 0;
  *(undefined8 *)(lVar9 + 0x1948) = 0;
  *(undefined8 *)(lVar9 + 0x1940) = 0;
  *(undefined8 *)(lVar9 + 0x1938) = 0;
  *(undefined8 *)(lVar9 + 0x1930) = 0;
  *(undefined8 *)(lVar9 + 0x1928) = 0;
  *(undefined8 *)(lVar9 + 0x1920) = 0;
  *(undefined8 *)(lVar9 + 0x1918) = 0;
  *(undefined8 *)(lVar9 + 0x1910) = 0;
  *(undefined8 *)(lVar9 + 0x1908) = 0;
  *(undefined8 *)(lVar9 + 0x1900) = 0;
  *(undefined8 *)(lVar9 + 0x18f8) = 0;
  *(undefined8 *)(lVar9 + 0x18f0) = 0;
  *(undefined8 *)(lVar9 + 0x18e8) = 0;
  *(undefined8 *)(lVar9 + 0x18e0) = 0;
  *(undefined8 *)(lVar9 + 0x18d8) = 0;
  *(undefined8 *)(lVar9 + 0x18d0) = 0;
  *(undefined8 *)(lVar9 + 0x18c8) = 0;
  *(undefined ***)(lVar9 + 0x1968) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101aecbf8;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aecbf8:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x1970) = puVar10;
  *(undefined ***)(lVar9 + 0x1978) = &PTR_FUN_710523da28;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  uVar14 = extraout_x1_05;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
      local_1d0 = (long ***)&DAT_00000010;
      pppplVar15 = &local_1d0;
      auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
      uVar14 = auVar31._8_8_;
      if (((auVar31._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         uVar14 = extraout_x1_06, puVar10 != (undefined8 *)0x0)) goto LAB_7101aecc58;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aecc58:
  puVar4 = (ulong *)(lVar9 + 0x1990);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 **)(lVar9 + 0x1980) = puVar10;
  *(undefined8 *)(lVar9 + 0x19b8) = 0;
  *(undefined8 *)(lVar9 + 0x19b0) = 0;
  *(undefined8 *)(lVar9 + 0x19a8) = 0;
  *(undefined8 *)(lVar9 + 0x19a0) = 0;
  *(undefined8 *)(lVar9 + 0x1998) = 0;
  *(undefined8 *)(lVar9 + 0x1990) = 0;
  *(byte *****)(lVar9 + 0x19c0) = param_4;
  *(undefined4 *)(lVar9 + 0x19c8) = 0;
  *(undefined4 *)(lVar9 + 0x358) = 0;
  *(undefined8 *)(lVar9 + 0x378) = 0;
  *(undefined8 *)(lVar9 + 0x370) = 0;
  *(undefined8 *)(lVar9 + 0x368) = 0;
  *(undefined8 *)(lVar9 + 0x360) = 0;
  FUN_7101432380(puVar4,uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  uVar11 = *(long *)(lVar9 + 0x19b0) + *(long *)(lVar9 + 0x19b8);
  *(undefined4 *)
   (*(long *)(*(long *)(lVar9 + 0x1998) + (uVar11 >> 7 & 0x1fffffffffffff8)) + (uVar11 & 0x3ff) * 4)
       = 0;
  lVar25 = *(long *)(lVar9 + 0x19b8) + 1;
  lVar20 = *(long *)(lVar9 + 0x1998);
  *(long *)(lVar9 + 0x19b8) = lVar25;
  uVar11 = lVar25 + *(long *)(lVar9 + 0x19b0);
  lVar25 = *(long *)(lVar9 + 0x19a0) - lVar20;
  uVar27 = 0;
  if (lVar25 != 0) {
    uVar27 = lVar25 * 0x80 - 1;
  }
  *(undefined4 *)(lVar9 + 0x5d0) = 0;
  *(undefined8 *)(lVar9 + 0x5f0) = 0;
  *(undefined8 *)(lVar9 + 0x5e8) = 0;
  *(undefined8 *)(lVar9 + 0x5e0) = 0;
  *(undefined8 *)(lVar9 + 0x5d8) = 0;
  uVar14 = extraout_x1_07;
  if (uVar27 == uVar11) {
    FUN_7101432380(puVar4,extraout_x1_07,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
    uVar11 = *(long *)(lVar9 + 0x19b0) + *(long *)(lVar9 + 0x19b8);
    lVar20 = *(long *)(lVar9 + 0x1998);
    uVar14 = extraout_x1_08;
  }
  *(undefined4 *)(*(long *)(lVar20 + (uVar11 >> 7 & 0x1fffffffffffff8)) + (uVar11 & 0x3ff) * 4) = 1;
  lVar25 = *(long *)(lVar9 + 0x19b8) + 1;
  lVar20 = *(long *)(lVar9 + 0x1998);
  *(long *)(lVar9 + 0x19b8) = lVar25;
  uVar11 = lVar25 + *(long *)(lVar9 + 0x19b0);
  lVar25 = *(long *)(lVar9 + 0x19a0) - lVar20;
  uVar27 = 0;
  if (lVar25 != 0) {
    uVar27 = lVar25 * 0x80 - 1;
  }
  *(undefined4 *)(lVar9 + 0x848) = 0;
  *(undefined8 *)(lVar9 + 0x868) = 0;
  *(undefined8 *)(lVar9 + 0x860) = 0;
  *(undefined8 *)(lVar9 + 0x858) = 0;
  *(undefined8 *)(lVar9 + 0x850) = 0;
  if (uVar27 == uVar11) {
    FUN_7101432380(puVar4,uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
    uVar11 = *(long *)(lVar9 + 0x19b0) + *(long *)(lVar9 + 0x19b8);
    lVar20 = *(long *)(lVar9 + 0x1998);
    uVar14 = extraout_x1_09;
  }
  *(undefined4 *)(*(long *)(lVar20 + (uVar11 >> 7 & 0x1fffffffffffff8)) + (uVar11 & 0x3ff) * 4) = 2;
  lVar25 = *(long *)(lVar9 + 0x19b8) + 1;
  lVar20 = *(long *)(lVar9 + 0x1998);
  *(long *)(lVar9 + 0x19b8) = lVar25;
  uVar11 = lVar25 + *(long *)(lVar9 + 0x19b0);
  lVar25 = *(long *)(lVar9 + 0x19a0) - lVar20;
  uVar27 = 0;
  if (lVar25 != 0) {
    uVar27 = lVar25 * 0x80 - 1;
  }
  *(undefined4 *)(lVar9 + 0xac0) = 0;
  *(undefined8 *)(lVar9 + 0xae0) = 0;
  *(undefined8 *)(lVar9 + 0xad8) = 0;
  *(undefined8 *)(lVar9 + 0xad0) = 0;
  *(undefined8 *)(lVar9 + 0xac8) = 0;
  if (uVar27 == uVar11) {
    FUN_7101432380(puVar4,uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
    uVar11 = *(long *)(lVar9 + 0x19b0) + *(long *)(lVar9 + 0x19b8);
    lVar20 = *(long *)(lVar9 + 0x1998);
    uVar14 = extraout_x1_10;
  }
  *(undefined4 *)(*(long *)(lVar20 + (uVar11 >> 7 & 0x1fffffffffffff8)) + (uVar11 & 0x3ff) * 4) = 3;
  lVar25 = *(long *)(lVar9 + 0x19b8) + 1;
  lVar20 = *(long *)(lVar9 + 0x1998);
  *(long *)(lVar9 + 0x19b8) = lVar25;
  uVar11 = lVar25 + *(long *)(lVar9 + 0x19b0);
  lVar25 = *(long *)(lVar9 + 0x19a0) - lVar20;
  uVar27 = 0;
  if (lVar25 != 0) {
    uVar27 = lVar25 * 0x80 - 1;
  }
  *(undefined4 *)(lVar9 + 0xd38) = 0;
  *(undefined8 *)(lVar9 + 0xd58) = 0;
  *(undefined8 *)(lVar9 + 0xd50) = 0;
  *(undefined8 *)(lVar9 + 0xd48) = 0;
  *(undefined8 *)(lVar9 + 0xd40) = 0;
  if (uVar27 == uVar11) {
    FUN_7101432380(puVar4,uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
    uVar11 = *(long *)(lVar9 + 0x19b0) + *(long *)(lVar9 + 0x19b8);
    lVar20 = *(long *)(lVar9 + 0x1998);
    uVar14 = extraout_x1_11;
  }
  *(undefined4 *)(*(long *)(lVar20 + (uVar11 >> 7 & 0x1fffffffffffff8)) + (uVar11 & 0x3ff) * 4) = 4;
  lVar25 = *(long *)(lVar9 + 0x19b8) + 1;
  lVar20 = *(long *)(lVar9 + 0x1998);
  *(long *)(lVar9 + 0x19b8) = lVar25;
  uVar11 = lVar25 + *(long *)(lVar9 + 0x19b0);
  lVar25 = *(long *)(lVar9 + 0x19a0) - lVar20;
  uVar27 = 0;
  if (lVar25 != 0) {
    uVar27 = lVar25 * 0x80 - 1;
  }
  *(undefined4 *)(lVar9 + 0xfb0) = 0;
  *(undefined8 *)(lVar9 + 0xfd0) = 0;
  *(undefined8 *)(lVar9 + 0xfc8) = 0;
  *(undefined8 *)(lVar9 + 0xfc0) = 0;
  *(undefined8 *)(lVar9 + 0xfb8) = 0;
  if (uVar27 == uVar11) {
    FUN_7101432380(puVar4,uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
    uVar11 = *(long *)(lVar9 + 0x19b0) + *(long *)(lVar9 + 0x19b8);
    lVar20 = *(long *)(lVar9 + 0x1998);
    uVar14 = extraout_x1_12;
  }
  *(undefined4 *)(*(long *)(lVar20 + (uVar11 >> 7 & 0x1fffffffffffff8)) + (uVar11 & 0x3ff) * 4) = 5;
  lVar25 = *(long *)(lVar9 + 0x19b8) + 1;
  lVar20 = *(long *)(lVar9 + 0x1998);
  *(long *)(lVar9 + 0x19b8) = lVar25;
  uVar11 = lVar25 + *(long *)(lVar9 + 0x19b0);
  lVar25 = *(long *)(lVar9 + 0x19a0) - lVar20;
  uVar27 = 0;
  if (lVar25 != 0) {
    uVar27 = lVar25 * 0x80 - 1;
  }
  *(undefined4 *)(lVar9 + 0x1228) = 0;
  *(undefined8 *)(lVar9 + 0x1248) = 0;
  *(undefined8 *)(lVar9 + 0x1240) = 0;
  *(undefined8 *)(lVar9 + 0x1238) = 0;
  *(undefined8 *)(lVar9 + 0x1230) = 0;
  if (uVar27 == uVar11) {
    FUN_7101432380(puVar4,uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
    uVar11 = *(long *)(lVar9 + 0x19b0) + *(long *)(lVar9 + 0x19b8);
    lVar20 = *(long *)(lVar9 + 0x1998);
    uVar14 = extraout_x1_13;
  }
  *(undefined4 *)(*(long *)(lVar20 + (uVar11 >> 7 & 0x1fffffffffffff8)) + (uVar11 & 0x3ff) * 4) = 6;
  lVar25 = *(long *)(lVar9 + 0x19b8) + 1;
  lVar20 = *(long *)(lVar9 + 0x1998);
  *(long *)(lVar9 + 0x19b8) = lVar25;
  uVar11 = lVar25 + *(long *)(lVar9 + 0x19b0);
  lVar25 = *(long *)(lVar9 + 0x19a0) - lVar20;
  uVar27 = 0;
  if (lVar25 != 0) {
    uVar27 = lVar25 * 0x80 - 1;
  }
  *(undefined4 *)(lVar9 + 0x14a0) = 0;
  *(undefined8 *)(lVar9 + 0x14c0) = 0;
  *(undefined8 *)(lVar9 + 0x14b8) = 0;
  *(undefined8 *)(lVar9 + 0x14b0) = 0;
  *(undefined8 *)(lVar9 + 0x14a8) = 0;
  if (uVar27 == uVar11) {
    FUN_7101432380(puVar4,uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
    uVar11 = *(long *)(lVar9 + 0x19b0) + *(long *)(lVar9 + 0x19b8);
    lVar20 = *(long *)(lVar9 + 0x1998);
    uVar14 = extraout_x1_14;
  }
  *(undefined4 *)(*(long *)(lVar20 + (uVar11 >> 7 & 0x1fffffffffffff8)) + (uVar11 & 0x3ff) * 4) = 7;
  lVar25 = *(long *)(lVar9 + 0x19b8) + 1;
  lVar20 = *(long *)(lVar9 + 0x1998);
  *(long *)(lVar9 + 0x19b8) = lVar25;
  uVar11 = lVar25 + *(long *)(lVar9 + 0x19b0);
  lVar25 = *(long *)(lVar9 + 0x19a0) - lVar20;
  uVar27 = 0;
  if (lVar25 != 0) {
    uVar27 = lVar25 * 0x80 - 1;
  }
  *(undefined4 *)(lVar9 + 0x1718) = 0;
  *(undefined8 *)(lVar9 + 0x1738) = 0;
  *(undefined8 *)(lVar9 + 0x1730) = 0;
  *(undefined8 *)(lVar9 + 0x1728) = 0;
  *(undefined8 *)(lVar9 + 0x1720) = 0;
  if (uVar27 == uVar11) {
    FUN_7101432380(puVar4,uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
    uVar11 = *(long *)(lVar9 + 0x19b0) + *(long *)(lVar9 + 0x19b8);
    lVar20 = *(long *)(lVar9 + 0x1998);
    uVar14 = extraout_x1_15;
  }
  *(undefined4 *)(*(long *)(lVar20 + (uVar11 >> 7 & 0x1fffffffffffff8)) + (uVar11 & 0x3ff) * 4) = 8;
  *(code **)(lVar9 + 0x48) = FUN_7101ae7550;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(code **)(lVar9 + 0x28) = FUN_7101ae74b0;
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(code **)(lVar9 + 0x38) = FUN_7101ae74c0;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(code **)(lVar9 + 0x58) = FUN_7101ae7940;
  *(undefined8 *)(lVar9 + 0x60) = 0;
  *(code **)(lVar9 + 0x78) = FUN_7101ae7c60;
  *(undefined8 *)(lVar9 + 0x80) = 0;
  *(long *)(lVar9 + 0x19b8) = *(long *)(lVar9 + 0x19b8) + 1;
  *(code **)(lVar9 + 0x88) = FUN_7101ae7ef0;
  *(undefined8 *)(lVar9 + 0x90) = 0;
  puVar24 = *(undefined4 **)(lVar9 + 0x338);
  *(code **)(lVar9 + 0x68) = FUN_7101ae7c50;
  *(undefined8 *)(lVar9 + 0x70) = 0;
  *(code **)(lVar9 + 0x98) = FUN_7101ae80c0;
  *(undefined8 *)(lVar9 + 0xa0) = 0;
  if (puVar24 < *(undefined4 **)(lVar9 + 0x340)) {
    *puVar24 = 2;
    puVar24 = (undefined4 *)(*(long *)(lVar9 + 0x338) + 4);
    *(undefined4 **)(lVar9 + 0x338) = puVar24;
  }
  else {
    pvVar29 = *(void **)(lVar9 + 0x330);
    pppplVar17 = (long ****)((long)puVar24 - (long)pvVar29);
    uVar11 = ((long)pppplVar17 >> 2) + 1;
    if (uVar11 >> 0x3e != 0) goto LAB_7101aee580;
    lVar25 = (long)*(undefined4 **)(lVar9 + 0x340) - (long)pvVar29;
    if ((ulong)(lVar25 >> 2) < 0x1fffffffffffffff) {
      uVar27 = lVar25 >> 1;
      if (uVar11 <= uVar27) {
        uVar11 = uVar27;
      }
      if (uVar11 != 0) {
        if (uVar11 >> 0x3e != 0) goto LAB_7101aee57c;
        goto LAB_7101aed178;
      }
LAB_7101aed1e0:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar11 = 0x3fffffffffffffff;
LAB_7101aed178:
      ppplVar21 = (long ***)(uVar11 * 4);
      if (ppplVar21 == (long ***)0x0) {
        ppplVar21 = (long ***)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,ppplVar21,pppplVar15,ppppbVar19,param_5,param_6,param_7,
                                       param_8);
      uVar14 = extraout_x1_16;
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
          pppplVar15 = &local_1d0;
          local_1d0 = ppplVar21;
          auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
          uVar14 = auVar31._8_8_;
          if (((auVar31._0_8_ & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,ppplVar21,pppplVar15,ppppbVar19,param_5,param_6,
                                               param_7,param_8), uVar14 = extraout_x1_17,
             pvVar12 != (void *)0x0)) goto LAB_7101aed1e4;
        }
        goto LAB_7101aed1e0;
      }
    }
LAB_7101aed1e4:
    puVar5 = (undefined4 *)((long)pvVar12 + ((long)pppplVar17 >> 2) * 4);
    puVar24 = puVar5 + 1;
    *puVar5 = 2;
    if (0 < (long)pppplVar17) {
      memcpy(pvVar12,pvVar29,(size_t)pppplVar17);
      uVar14 = extraout_x1_18;
      pppplVar15 = pppplVar17;
    }
    *(void **)(lVar9 + 0x330) = pvVar12;
    *(undefined4 **)(lVar9 + 0x338) = puVar24;
    *(void **)(lVar9 + 0x340) = (void *)((long)pvVar12 + uVar11 * 4);
    if (pvVar29 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar29);
      puVar24 = *(undefined4 **)(lVar9 + 0x338);
      uVar14 = extraout_x1_19;
    }
  }
  if (puVar24 < *(undefined4 **)(lVar9 + 0x340)) {
    *puVar24 = 3;
    *(long *)(lVar9 + 0x338) = *(long *)(lVar9 + 0x338) + 4;
  }
  else {
    pvVar29 = *(void **)(lVar9 + 0x330);
    pppplVar17 = (long ****)((long)puVar24 - (long)pvVar29);
    uVar11 = ((long)pppplVar17 >> 2) + 1;
    if (uVar11 >> 0x3e != 0) {
LAB_7101aee580:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar25 = (long)*(undefined4 **)(lVar9 + 0x340) - (long)pvVar29;
    if ((ulong)(lVar25 >> 2) < 0x1fffffffffffffff) {
      uVar27 = lVar25 >> 1;
      if (uVar11 <= uVar27) {
        uVar11 = uVar27;
      }
      if (uVar11 != 0) {
        if (uVar11 >> 0x3e != 0) goto LAB_7101aee57c;
        goto LAB_7101aed2b0;
      }
LAB_7101aed318:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar11 = 0x3fffffffffffffff;
LAB_7101aed2b0:
      ppplVar21 = (long ***)(uVar11 * 4);
      if (ppplVar21 == (long ***)0x0) {
        ppplVar21 = (long ***)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,ppplVar21,pppplVar15,ppppbVar19,param_5,param_6,param_7,
                                       param_8);
      uVar14 = extraout_x1_20;
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
          pppplVar15 = &local_1d0;
          local_1d0 = ppplVar21;
          auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
          uVar14 = auVar31._8_8_;
          if (((auVar31._0_8_ & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,ppplVar21,pppplVar15,ppppbVar19,param_5,param_6,
                                               param_7,param_8), uVar14 = extraout_x1_21,
             pvVar12 != (void *)0x0)) goto LAB_7101aed31c;
        }
        goto LAB_7101aed318;
      }
    }
LAB_7101aed31c:
    puVar24 = (undefined4 *)((long)pvVar12 + ((long)pppplVar17 >> 2) * 4);
    *puVar24 = 3;
    if (0 < (long)pppplVar17) {
      memcpy(pvVar12,pvVar29,(size_t)pppplVar17);
      uVar14 = extraout_x1_22;
      pppplVar15 = pppplVar17;
    }
    *(undefined4 **)(lVar9 + 0x338) = puVar24 + 1;
    *(void **)(lVar9 + 0x330) = pvVar12;
    *(void **)(lVar9 + 0x340) = (void *)((long)pvVar12 + uVar11 * 4);
    if (pvVar29 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar29);
      uVar14 = extraout_x1_23;
    }
  }
  if (0x12 < *(uint *)(lVar9 + 0xf4)) {
LAB_7101aee57c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar9 + (long)(int)*(uint *)(lVar9 + 0xf4) * 4 + 0xa8) = 0;
  if (DAT_7105325ca8 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
    uVar14 = extraout_x1_24;
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_300 = (byte ***)((ulong)local_300 & 0xffffffff00000000);
        local_1d0 = (long ***)&DAT_00000010;
        pppplVar15 = &local_1d0;
        auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_300);
        uVar14 = auVar31._8_8_;
        if (((auVar31._0_8_ & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8
                                    ), uVar14 = extraout_x1_25, puVar10 != (undefined8 *)0x0))
        goto LAB_7101aed3dc;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_7101aed3dc:
    FUN_7101ccc7b0(puVar10,uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
    uVar14 = extraout_x1_26;
    DAT_7105325ca8 = puVar10;
  }
  uVar11 = *(ulong *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar9;
  if (uVar11 != 0) {
    FUN_7101ae82f0(uVar11,uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
    FUN_710392eb40(uVar11);
  }
  *(undefined8 **)(param_1 + 0x28) = param_2;
  *(undefined2 *)(param_1 + 8) = 0x101;
  *(undefined2 *)(param_1 + 10) = local_304;
  *(undefined4 *)(param_1 + 0xc) = 0x4001;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined2 *)(param_1 + 0x11) = local_308;
  *(undefined1 *)(param_1 + 0x13) = local_306;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x11000;
  lVar25 = **(long **)*param_2;
  *(undefined4 *)(*(long *)(lVar25 + 0x600) + 0x494) = 1;
  lVar9 = *(long *)(lVar25 + 0x608);
  lVar25 = *(long *)(lVar25 + 0x610);
  if (lVar9 != lVar25) {
    uVar11 = (lVar25 + -0x10) - lVar9;
    uVar2 = ((uint)(uVar11 >> 4) & 0xfffffff) + 1;
    if ((uVar2 & 3) != 0) {
      lVar20 = -((ulong)uVar2 & 3);
      do {
        plVar1 = (long *)(lVar9 + 8);
        lVar9 = lVar9 + 0x10;
        lVar20 = lVar20 + 1;
        *(undefined4 *)(*plVar1 + 0x494) = 1;
      } while (lVar20 != 0);
    }
    if (0x2f < uVar11) {
      do {
        *(undefined4 *)(*(long *)(lVar9 + 8) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar9 + 0x28) + 0x494) = 1;
        plVar1 = (long *)(lVar9 + 0x38);
        lVar9 = lVar9 + 0x40;
        *(undefined4 *)(*plVar1 + 0x494) = 1;
      } while (lVar25 != lVar9);
    }
  }
  plVar30 = *(long **)(param_1 + 0x20);
  lVar25 = *(long *)*param_2;
  lVar9 = *(long *)plVar30[0x65];
  ppppppppplVar16 = (long *********)(long)*(int *)(lVar9 + 0x70);
  ppppbVar19 = (byte ****)(ulong)*(uint *)(lVar9 + 0x68);
  pppplVar15 = (long ****)0x0;
  plVar1 = (long *)(lVar25 + 8);
  FUN_710323beb0(lVar9,(ulong *)&DAT_71045445e8,(long)ppppppppplVar16,(ulong)ppppbVar19,
                 (long ****)0x0,param_6,param_7,param_8);
  lVar9 = *(long *)plVar30[0x65];
  uVar11 = FUN_710323cb80(lVar9,extraout_x1_27,ppppppppplVar16,ppppbVar19,pppplVar15,param_6,param_7
                          ,param_8);
  while ((uVar11 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar11 = FUN_710323cb80(lVar9,extraout_x1_28,ppppppppplVar16,ppppbVar19,pppplVar15,param_6,
                            param_7,param_8);
  }
  puVar10 = (undefined8 *)*param_2;
  plVar3 = plVar30 + 0x24;
  if (plVar3 != plVar1) {
    *(undefined8 *)plVar30[0x25] = **(undefined8 **)(lVar25 + 0x10);
    *(undefined8 *)(plVar30[0x25] + 8) = *(undefined8 *)(*(long *)(lVar25 + 0x10) + 8);
    lVar25 = *(long *)(lVar25 + 0x10);
    lVar9 = plVar30[0x25];
    if (lVar9 != lVar25) {
      **(undefined8 **)(lVar9 + 0x18) = **(undefined8 **)(lVar25 + 0x18);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar25 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x18);
    }
  }
  local_1d0 = (long ***)0x0;
  local_1c8 = 0x101;
  local_1c6 = 0;
  local_1c0 = 1;
  local_1bc = 1;
  local_1ba = 1;
  local_1c2 = 0;
  local_1b8 = &DAT_41f0000000000000;
  local_1b0 = 0;
  local_180 = (long *)0x0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_b0 = 0;
  FUN_710337df20((long)&local_1d0);
  local_1c8 = local_1c8 & 0xff00;
  local_1b8 = (undefined1 *)CONCAT44(0x42f00000,(undefined4)local_1b8);
  FUN_7101989b70(&local_300,&local_1d0);
  local_a0 = &PTR_FUN_71050a9fa0;
  local_98 = plVar30;
  local_80 = &local_a0;
  FUN_7101a7ed70((long *)&local_a0,alStack_2d0);
  if (&local_a0 == local_80) {
    pcVar22 = (code *)(*local_80)[4];
LAB_7101aed66c:
    (*pcVar22)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar22 = (code *)(*local_80)[5];
    goto LAB_7101aed66c;
  }
  ppppbVar19 = &local_300;
  FUN_7103770b30(plVar30 + 0x26,plVar3,(long ****)"selector_01",ppppbVar19,pppplVar15,param_6,
                 param_7,param_8);
  FUN_71037717d0(plVar30 + 0x26,0,"set_parts_btn_playbtn",ppppbVar19,pppplVar15,param_6,param_7,
                 param_8);
  lVar9 = *(long *)(plVar30[0x26] + 0x1b8);
  if (lVar9 != 0) {
    lVar25 = plVar30[0x26] + 0x1b8;
    lVar20 = lVar25;
    do {
      bVar8 = *(int *)(lVar9 + 0x20) < 0;
      if (!bVar8) {
        lVar20 = lVar9;
      }
      lVar9 = *(long *)(lVar9 + (ulong)bVar8 * 8);
    } while (lVar9 != 0);
    if (((lVar20 != lVar25) && (*(int *)(lVar20 + 0x20) < 1)) &&
       (plVar28 = *(long **)(lVar20 + 0x28), plVar28 != (long *)0x0)) {
      (**(code **)(*plVar28 + 0x1f8))(plVar28,1);
      (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
    }
  }
  if (alStack_210 == local_1f0) {
    pcVar22 = *(code **)(*local_1f0 + 0x20);
LAB_7101aed740:
    (*pcVar22)();
  }
  else if (local_1f0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_1f0 + 0x28);
    goto LAB_7101aed740;
  }
  if (alStack_240 == local_220) {
    pcVar22 = *(code **)(*local_220 + 0x20);
LAB_7101aed770:
    (*pcVar22)();
  }
  else if (local_220 != (long *)0x0) {
    pcVar22 = *(code **)(*local_220 + 0x28);
    goto LAB_7101aed770;
  }
  if (alStack_270 == local_250) {
    pcVar22 = *(code **)(*local_250 + 0x20);
LAB_7101aed7a0:
    (*pcVar22)();
  }
  else if (local_250 != (long *)0x0) {
    pcVar22 = *(code **)(*local_250 + 0x28);
    goto LAB_7101aed7a0;
  }
  if (alStack_2a0 == local_280) {
    pcVar22 = *(code **)(*local_280 + 0x20);
LAB_7101aed7d0:
    (*pcVar22)();
  }
  else if (local_280 != (long *)0x0) {
    pcVar22 = *(code **)(*local_280 + 0x28);
    goto LAB_7101aed7d0;
  }
  if (alStack_2d0 == local_2b0) {
    pcVar22 = *(code **)(*local_2b0 + 0x20);
LAB_7101aed800:
    (*pcVar22)();
  }
  else if (local_2b0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_2b0 + 0x28);
    goto LAB_7101aed800;
  }
  FUN_7101989b70(&local_300,&local_1d0);
  local_a0 = &PTR_FUN_71050a9fe8;
  local_98 = plVar30;
  local_80 = &local_a0;
  FUN_7101a7ed70((long *)&local_a0,alStack_2d0);
  if (&local_a0 == local_80) {
    pcVar22 = (code *)(*local_80)[4];
LAB_7101aed858:
    (*pcVar22)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar22 = (code *)(*local_80)[5];
    goto LAB_7101aed858;
  }
  local_a0 = &PTR_FUN_71050aa030;
  local_98 = plVar30;
  local_80 = &local_a0;
  FUN_7101989a30((long *)&local_a0,alStack_2a0);
  if (&local_a0 == local_80) {
    pcVar22 = (code *)(*local_80)[4];
LAB_7101aed8a4:
    (*pcVar22)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar22 = (code *)(*local_80)[5];
    goto LAB_7101aed8a4;
  }
  plVar28 = plVar30 + 0x27;
  ppppbVar19 = &local_300;
  FUN_7103770b30(plVar28,plVar3,(long ****)"selector_00",ppppbVar19,pppplVar15,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar28,3,"set_parts_btn_02",ppppbVar19,pppplVar15,param_6,param_7,param_8);
  FUN_71037717d0(plVar28,4,"set_parts_btn_03",ppppbVar19,pppplVar15,param_6,param_7,param_8);
  FUN_7103771a80(plVar28,4,1);
  plVar13 = (long *)plVar30[0x27];
  plVar26 = (long *)plVar13[0x37];
  if (plVar26 != (long *)0x0) {
    plVar23 = plVar13 + 0x37;
    do {
      if (3 < (int)plVar26[4]) {
        plVar23 = plVar26;
      }
      plVar26 = (long *)plVar26[(int)plVar26[4] < 4];
    } while (plVar26 != (long *)0x0);
    if (((plVar23 != plVar13 + 0x37) && ((int)plVar23[4] < 5)) &&
       (plVar26 = (long *)plVar23[5], plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
      (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
      plVar13 = (long *)*plVar28;
    }
  }
  (**(code **)(*plVar13 + 0x60))(plVar13,1);
  if (alStack_210 == local_1f0) {
    pcVar22 = *(code **)(*local_1f0 + 0x20);
LAB_7101aed9b0:
    (*pcVar22)();
  }
  else if (local_1f0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_1f0 + 0x28);
    goto LAB_7101aed9b0;
  }
  if (alStack_240 == local_220) {
    pcVar22 = *(code **)(*local_220 + 0x20);
LAB_7101aed9e0:
    (*pcVar22)();
  }
  else if (local_220 != (long *)0x0) {
    pcVar22 = *(code **)(*local_220 + 0x28);
    goto LAB_7101aed9e0;
  }
  if (alStack_270 == local_250) {
    pcVar22 = *(code **)(*local_250 + 0x20);
LAB_7101aeda10:
    (*pcVar22)();
  }
  else if (local_250 != (long *)0x0) {
    pcVar22 = *(code **)(*local_250 + 0x28);
    goto LAB_7101aeda10;
  }
  if (alStack_2a0 == local_280) {
    pcVar22 = *(code **)(*local_280 + 0x20);
LAB_7101aeda40:
    (*pcVar22)();
  }
  else if (local_280 != (long *)0x0) {
    pcVar22 = *(code **)(*local_280 + 0x28);
    goto LAB_7101aeda40;
  }
  if (alStack_2d0 == local_2b0) {
    pcVar22 = *(code **)(*local_2b0 + 0x20);
LAB_7101aeda70:
    (*pcVar22)();
  }
  else if (local_2b0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_2b0 + 0x28);
    goto LAB_7101aeda70;
  }
  FUN_7101989b70(&local_300,&local_1d0);
  plVar28 = plVar30 + 0x28;
  ppppbVar19 = &local_300;
  local_2f8._0_3_ = CONCAT12(1,(undefined2)local_2f8);
  FUN_7103770b30(plVar28,plVar3,(long ****)"selector_02",ppppbVar19,pppplVar15,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar28,5,"set_parts_arrow_l",ppppbVar19,pppplVar15,param_6,param_7,param_8);
  FUN_71037717d0(plVar28,6,"set_parts_arrow_r",ppppbVar19,pppplVar15,param_6,param_7,param_8);
  FUN_7103771930(plVar30[0x28],6,(long ****)0x6,(byte ****)0x1,pppplVar15,param_6,param_7,param_8);
  ppppbVar19 = (byte ****)0x1;
  FUN_7103771930(plVar30[0x28],5,(long ****)&DAT_00000007,(byte ****)0x1,pppplVar15,param_6,param_7,
                 param_8);
  FUN_7103771d60(&local_a0,plVar30[0x28],(long ****)0x6,ppppbVar19,pppplVar15,param_6,param_7,
                 param_8);
  plVar3 = local_98;
  plVar13 = (long *)*local_98;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x268))(plVar13,1,1);
  }
  local_a0 = &PTR_FUN_710523d9c8;
  local_98 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar3);
  }
  pppplVar17 = (long ****)0x5;
  FUN_7103771d60(&local_a0,*plVar28,(long ****)0x5,ppppbVar19,pppplVar15,param_6,param_7,param_8);
  plVar3 = local_98;
  plVar28 = (long *)*local_98;
  if (plVar28 != (long *)0x0) {
    pppplVar17 = (long ****)0x1;
    (**(code **)(*plVar28 + 0x268))(plVar28,1);
  }
  local_a0 = &PTR_FUN_710523d9c8;
  local_98 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar3);
  }
  if (alStack_210 == local_1f0) {
    pcVar22 = *(code **)(*local_1f0 + 0x20);
LAB_7101aedbac:
    (*pcVar22)();
  }
  else if (local_1f0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_1f0 + 0x28);
    goto LAB_7101aedbac;
  }
  if (alStack_240 == local_220) {
    pcVar22 = *(code **)(*local_220 + 0x20);
LAB_7101aedbdc:
    (*pcVar22)();
  }
  else if (local_220 != (long *)0x0) {
    pcVar22 = *(code **)(*local_220 + 0x28);
    goto LAB_7101aedbdc;
  }
  if (alStack_270 == local_250) {
    pcVar22 = *(code **)(*local_250 + 0x20);
LAB_7101aedc0c:
    (*pcVar22)();
  }
  else if (local_250 != (long *)0x0) {
    pcVar22 = *(code **)(*local_250 + 0x28);
    goto LAB_7101aedc0c;
  }
  if (alStack_2a0 == local_280) {
    pcVar22 = *(code **)(*local_280 + 0x20);
LAB_7101aedc3c:
    (*pcVar22)();
  }
  else if (local_280 != (long *)0x0) {
    pcVar22 = *(code **)(*local_280 + 0x28);
    goto LAB_7101aedc3c;
  }
  if (alStack_2d0 == local_2b0) {
    pcVar22 = *(code **)(*local_2b0 + 0x20);
LAB_7101aedc6c:
    (*pcVar22)();
  }
  else if (local_2b0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_2b0 + 0x28);
    goto LAB_7101aedc6c;
  }
  FUN_7103776640(&local_300,(long)plVar1,(byte ****)"set_parts_text_scroll",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x50) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x51];
    plVar30[0x51] = uVar11;
    if (uVar27 != 0) {
      uVar11 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d988;
  local_2f8 = 0;
  if (uVar11 != 0) {
    uVar27 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_rep_pic_cap",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x4e) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x4f];
    plVar30[0x4f] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_txt_time",pppplVar17,ppppbVar19,pppplVar15,
                 param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x40) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x41];
    plVar30[0x41] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_txt_date_num",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x42) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x43];
    plVar30[0x43] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_parts_btn_04",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x4c) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x4d];
    plVar30[0x4d] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_parts_btn_05",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x48) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x49];
    plVar30[0x49] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_parts_btn_06",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x4a) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x4b];
    plVar30[0x4b] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_300,(long)plVar1,(byte ****)"set_parts_text_scroll_00",pppplVar17,ppppbVar19
                 ,pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x62) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[99];
    plVar30[99] = uVar11;
    if (uVar27 != 0) {
      uVar11 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d988;
  local_2f8 = 0;
  if (uVar11 != 0) {
    uVar27 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_rep_pic_cap_00",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x60) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x61];
    plVar30[0x61] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_txt_time_00",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x52) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x53];
    plVar30[0x53] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_txt_date_num_00",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x54) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x55];
    plVar30[0x55] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_parts_btn_00",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x5e) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x5f];
    plVar30[0x5f] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_parts_btn_01",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x5a) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x5b];
    plVar30[0x5b] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_parts_btn_02",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x5c) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x5d];
    plVar30[0x5d] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  lVar9 = *(long *)plVar30[0x49];
  if (lVar9 != 0) {
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
  }
  lVar9 = *(long *)plVar30[0x4d];
  if (lVar9 != 0) {
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
  }
  lVar9 = *(long *)plVar30[0x5b];
  if (lVar9 != 0) {
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
  }
  lVar9 = *(long *)plVar30[0x5f];
  if (lVar9 != 0) {
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_parts_arrow_l",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x33) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x34];
    plVar30[0x34] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_300,(long)plVar1,(long ****)"set_parts_arrow_r",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  if ((byte ****)(plVar30 + 0x35) != &local_300) {
    local_2f8 = 0;
    uVar27 = plVar30[0x36];
    plVar30[0x36] = uVar11;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
  }
  uVar11 = local_2f8;
  local_300 = (byte ***)&PTR_FUN_710523d9a8;
  local_2f8 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  lVar9 = *(long *)*puVar10;
  *(undefined4 *)(*(long *)(lVar9 + 0x600) + 0x1c) = 0x100;
  *(undefined4 *)(*(long *)(lVar9 + 0x600) + 0x18) = 0x200;
  *(undefined4 *)(*(long *)(lVar9 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar9 + 0x600) + 0x14) = 0x40;
  plVar30[0x29] = (long)&DAT_710425f767;
  plVar30[0x2a] = (long)&DAT_7104401836;
  plVar30[0x2b] = (long)"notfound_off";
  plVar30[0x2c] = (long)"notfound_on";
  plVar30[0x2d] = (long)"pop_in";
  plVar30[0x2e] = (long)"pop_out";
  FUN_7103776640(&local_300,(long)plVar1,(byte ****)"set_parts_btn_02",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  FUN_7103778300(0x3f800000,local_2f8,0x71043f05a6);
  local_300 = (byte ***)&PTR_FUN_710523d988;
  local_2f8 = 0;
  if (uVar11 != 0) {
    uVar27 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_300,(long)plVar1,(byte ****)"set_parts_btn_06",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  FUN_7103778300(0x3f800000,local_2f8,0x71043f05a6);
  local_300 = (byte ***)&PTR_FUN_710523d988;
  local_2f8 = 0;
  if (uVar11 != 0) {
    uVar27 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_300,(long)plVar1,(byte ****)"set_parts_btn_03",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  FUN_7103778300(0x3f800000,local_2f8,0x71042e6c31);
  local_300 = (byte ***)&PTR_FUN_710523d988;
  local_2f8 = 0;
  if (uVar11 != 0) {
    uVar27 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_300,(long)plVar1,(byte ****)"set_parts_btn_07",pppplVar17,ppppbVar19,
                 pppplVar15,param_6,param_7,param_8);
  uVar11 = local_2f8;
  FUN_7103778300(0x3f800000,local_2f8,0x71042e6c31);
  local_300 = (byte ***)&PTR_FUN_710523d988;
  local_2f8 = 0;
  if (uVar11 != 0) {
    uVar27 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar11);
  }
  lVar9 = plVar30[0x65];
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar17,ppppbVar19,pppplVar15,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_300 = (byte ***)&DAT_00000088;
      ppppbVar18 = &local_300;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppbVar18,ppppbVar19,pppplVar15,param_6,
                                   param_7,param_8), puVar10 != (undefined8 *)0x0))
      goto LAB_7101aee3ec;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101aee3ec:
  pppplVar17 = (long ****)0x1;
  FUN_7101ad0e40(puVar10,lVar9,(long ****)0x1,ppppbVar19,pppplVar15,param_6,param_7,param_8);
  puVar10[2] = &DAT_7105333600;
  uVar7 = DAT_7105333664;
  *(undefined4 *)(puVar10 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar10 + 0x6c) = uVar7;
  do {
    uVar2 = DAT_7105333650;
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar8) {
      DAT_7105333650 = 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0' || (uVar2 & 1) != 0);
  puVar10[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar10;
  FUN_71032caea0((long)puVar10,extraout_x1_29,pppplVar17,ppppbVar19,pppplVar15,param_6,param_7,
                 param_8);
  lVar9 = plVar30[0x22];
  plVar30[0x22] = (long)puVar10;
  if (lVar9 != 0) {
    FUN_71032cad20(lVar9);
  }
  FUN_7101ccce30((long)DAT_7105325ca8);
  if (alStack_e0 == local_c0) {
    pcVar22 = *(code **)(*local_c0 + 0x20);
LAB_7101aee498:
    (*pcVar22)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101aee498;
  }
  if (alStack_110 == local_f0) {
    pcVar22 = *(code **)(*local_f0 + 0x20);
LAB_7101aee4c8:
    (*pcVar22)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101aee4c8;
  }
  if (alStack_140 == local_120) {
    pcVar22 = *(code **)(*local_120 + 0x20);
LAB_7101aee4f8:
    (*pcVar22)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar22 = *(code **)(*local_120 + 0x28);
    goto LAB_7101aee4f8;
  }
  if (alStack_170 == local_150) {
    pcVar22 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) goto LAB_7101aee52c;
    pcVar22 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar22)();
LAB_7101aee52c:
  if (alStack_1a0 == local_180) {
    pcVar22 = *(code **)(*local_180 + 0x20);
  }
  else {
    if (local_180 == (long *)0x0) {
      return;
    }
    pcVar22 = *(code **)(*local_180 + 0x28);
  }
  (*pcVar22)();
  return;
}

