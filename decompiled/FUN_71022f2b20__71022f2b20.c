// addr:      71022f2b20
// offset:    0x22f2b20
// name:      FUN_71022f2b20
// mangled:   
// signature: undefined8 __cdecl FUN_71022f2b20(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


undefined8
FUN_71022f2b20(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,long ****param_5,
              ulong param_6,long ***param_7,long ***param_8)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  uint *puVar13;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  long *plVar14;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  long *********ppppppppplVar15;
  long ****pppplVar16;
  long *********ppppppppplVar17;
  long *********ppppppppplVar18;
  long *********ppppppppplVar19;
  long *********ppppppppplVar20;
  long *********ppppppppplVar21;
  long *********ppppppppplVar22;
  long *********ppppppppplVar23;
  long *********ppppppppplVar24;
  long *********ppppppppplVar25;
  long *********ppppppppplVar26;
  long *********ppppppppplVar27;
  undefined **ppuVar28;
  char *pcVar29;
  long *********ppppppppplVar30;
  long *********ppppppppplVar31;
  long *********ppppppppplVar32;
  byte ****ppppbVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long *plVar37;
  undefined1 auVar38 [16];
  long ********local_70;
  undefined4 local_64;
  
  ppppppppplVar15 = &local_70;
  ppppppppplVar17 = &local_70;
  ppppppppplVar18 = &local_70;
  ppppppppplVar19 = &local_70;
  ppppppppplVar20 = &local_70;
  ppppppppplVar21 = &local_70;
  ppppppppplVar22 = &local_70;
  ppppppppplVar23 = &local_70;
  ppppppppplVar24 = &local_70;
  ppppppppplVar25 = &local_70;
  ppppppppplVar26 = &local_70;
  ppppppppplVar27 = &local_70;
  ppppppppplVar30 = &local_70;
  ppppppppplVar31 = &local_70;
  ppppppppplVar32 = &local_70;
  plVar5 = (long *)FUN_710392e290(0x10,0x2b0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar5 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ********)0x2b0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (plVar5 = (long *)FUN_710392e290(0x10,0x2b0,(long ****)ppppppppplVar15,param_4,param_5,
                                          param_6,param_7,param_8), plVar5 != (long *)0x0))
      goto LAB_71022f2ba4;
    }
    plVar5 = (long *)0x0;
  }
LAB_71022f2ba4:
  pppplVar16 = (long ****)0x24c;
  *plVar5 = param_1 + 0x50;
  plVar5[1] = (long)plVar5;
  *(undefined4 *)((long)plVar5 + 0x27c) = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[0x50] = 0xffffffff;
  *(undefined4 *)(plVar5 + 0x51) = 0xffffffff;
  *(undefined1 *)((long)plVar5 + 0x28c) = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  memset(plVar5 + 6,0,0x24c);
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x80,pppplVar16,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ********)&DAT_00000080;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      pppplVar16 = (long ****)ppppppppplVar17;
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar17,param_4,param_5,param_6,
                                  param_7,param_8), pppplVar16 = (long ****)ppppppppplVar17,
         puVar7 != (undefined8 *)0x0)) goto LAB_71022f2c28;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71022f2c28:
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_7105181b40;
  puVar7[1] = puVar7 + 2;
  puVar7[5] = 0;
  puVar7[3] = 0;
  puVar7[4] = puVar7 + 5;
  puVar7[8] = 0;
  puVar7[6] = 0;
  puVar7[7] = puVar7 + 8;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  *(undefined4 *)(puVar7 + 0xf) = 0;
  puVar7[0xe] = 0;
  puVar7[9] = 0;
  puVar7[10] = puVar7 + 0xb;
  *(undefined4 *)(puVar7 + 0xd) = 2;
  plVar5[0x52] = (long)puVar7;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x80,pppplVar16,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ********)&DAT_00000080;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      pppplVar16 = (long ****)ppppppppplVar18;
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar18,param_4,param_5,param_6,
                                  param_7,param_8), pppplVar16 = (long ****)ppppppppplVar18,
         puVar7 != (undefined8 *)0x0)) goto LAB_71022f2ccc;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71022f2ccc:
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_7105181b40;
  puVar7[1] = puVar7 + 2;
  puVar7[5] = 0;
  puVar7[3] = 0;
  puVar7[4] = puVar7 + 5;
  puVar7[8] = 0;
  puVar7[6] = 0;
  puVar7[7] = puVar7 + 8;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  *(undefined4 *)(puVar7 + 0xf) = 0;
  puVar7[0xe] = 0;
  *(undefined2 *)(puVar7 + 0xf) = 0x101;
  puVar7[9] = 0;
  puVar7[10] = puVar7 + 0xb;
  *(undefined4 *)(puVar7 + 0xd) = 3;
  plVar5[0x53] = (long)puVar7;
  *(undefined4 *)(plVar5 + 0x54) = 0;
  *(undefined1 *)((long)plVar5 + 0x2a4) = 1;
  *(undefined4 *)(plVar5 + 0x55) = 0xffffffff;
  *(undefined2 *)((long)plVar5 + 0x2ac) = 0;
  if (DAT_7105328180 == (long *)0x0) {
    plVar8 = (long *)FUN_710392e290(0x10,8,pppplVar16,param_4,param_5,param_6,param_7,param_8);
    if (plVar8 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ********)&DAT_00000008;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        pppplVar16 = (long ****)ppppppppplVar19;
        if (((uVar6 & 1) != 0) &&
           (plVar8 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar19,param_4,param_5,
                                            param_6,param_7,param_8),
           pppplVar16 = (long ****)ppppppppplVar19, plVar8 != (long *)0x0)) goto LAB_71022f2d98;
      }
      plVar8 = (long *)0x0;
    }
LAB_71022f2d98:
    lVar9 = FUN_710392e290(0x10,0x248,pppplVar16,param_4,param_5,param_6,param_7,param_8);
    if (lVar9 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ********)0x248;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        pppplVar16 = (long ****)ppppppppplVar20;
        if (((uVar6 & 1) != 0) &&
           (lVar9 = FUN_710392e290(0x10,0x248,(long ****)ppppppppplVar20,param_4,param_5,param_6,
                                   param_7,param_8), pppplVar16 = (long ****)ppppppppplVar20,
           lVar9 != 0)) goto LAB_71022f2df4;
      }
      lVar9 = 0;
    }
LAB_71022f2df4:
    *(undefined4 *)(lVar9 + 0xe8) = 0;
    *(undefined4 *)(lVar9 + 0xe0) = 0xffffffff;
    *(undefined8 *)(lVar9 + 0x110) = 0x13ffff0000000000;
    *(undefined8 *)(lVar9 + 0x118) = 0x5affff0000000000;
    *(undefined1 **)(lVar9 + 0x218) = &DAT_c1ffff0000000000;
    *(undefined8 *)(lVar9 + 0x10) = 0;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    uVar3 = 0;
    *(undefined1 *)(lVar9 + 0xe4) = 0;
    *(undefined8 *)(lVar9 + 0xf0) = 0;
    *(undefined2 *)(lVar9 + 0xf8) = 0;
    *(undefined2 *)(lVar9 + 0x124) = 0;
    *(undefined4 *)(lVar9 + 0x120) = 0;
    *(undefined1 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x220) = 0;
    *(undefined8 *)(lVar9 + 0x238) = 0;
    *(undefined8 *)(lVar9 + 0x230) = 0;
    *(undefined8 *)(lVar9 + 0x228) = 0;
    *(undefined2 *)(lVar9 + 0x220) = 1;
    *(undefined1 *)(lVar9 + 0x222) = 0;
    *(undefined2 *)(lVar9 + 0x240) = 0;
    *(long *)lVar9 = lVar9;
    *(undefined8 *)(lVar9 + 8) = 0;
    *(undefined8 *)(lVar9 + 0xd0) = 0;
    *(undefined8 *)(lVar9 + 0xd8) = 0xffffffff;
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
    if (DAT_710532f8b0 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)
               FUN_710392e290(0x10,0x10,pppplVar16,param_4,param_5,param_6,param_7,param_8);
      uVar12 = extraout_x1;
      if (puVar7 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_70 = (long ********)&DAT_00000010;
          auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          uVar12 = auVar38._8_8_;
          pppplVar16 = (long ****)ppppppppplVar21;
          if (((auVar38._0_8_ & 1) != 0) &&
             (puVar7 = (undefined8 *)
                       FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar21,param_4,param_5,param_6,
                                      param_7,param_8), uVar12 = extraout_x1_00,
             pppplVar16 = (long ****)ppppppppplVar21, puVar7 != (undefined8 *)0x0))
          goto LAB_71022f2ef8;
        }
        puVar7 = (undefined8 *)0x0;
      }
LAB_71022f2ef8:
      FUN_7103306080(puVar7,uVar12,pppplVar16,param_4,param_5,param_6,param_7,param_8);
      uVar3 = *(uint *)(lVar9 + 0xd4);
      DAT_710532f8b0 = puVar7;
    }
    *(code **)(lVar9 + 0x28) = FUN_71022ea6a0;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(code **)(lVar9 + 0x38) = FUN_71022ea6b0;
    *(undefined8 *)(lVar9 + 0x40) = 0;
    *(code **)(lVar9 + 0x48) = FUN_71022ea6f0;
    *(undefined8 *)(lVar9 + 0x50) = 0;
    *(code **)(lVar9 + 0x58) = FUN_71022eabf0;
    *(undefined8 *)(lVar9 + 0x60) = 0;
    *(code **)(lVar9 + 0x68) = FUN_71022eab30;
    *(undefined8 *)(lVar9 + 0x70) = 0;
    *(code **)(lVar9 + 0x78) = FUN_71022ead50;
    *(undefined8 *)(lVar9 + 0x80) = 0;
    if (0x12 < uVar3) goto LAB_71022f3f08;
    *(undefined4 *)(lVar9 + (long)(int)uVar3 * 4 + 0x88) = 0;
    *plVar8 = lVar9;
    DAT_7105328180 = plVar8;
  }
  if (DAT_7105328178 == (long *)0x0) {
    plVar8 = (long *)FUN_710392e290(0x10,8,pppplVar16,param_4,param_5,param_6,param_7,param_8);
    if (plVar8 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ********)&DAT_00000008;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        pppplVar16 = (long ****)ppppppppplVar22;
        if (((uVar6 & 1) != 0) &&
           (plVar8 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar22,param_4,param_5,
                                            param_6,param_7,param_8),
           pppplVar16 = (long ****)ppppppppplVar22, plVar8 != (long *)0x0)) goto LAB_71022f2fd0;
      }
      plVar8 = (long *)0x0;
    }
LAB_71022f2fd0:
    lVar9 = FUN_710392e290(0x10,0x2b0,pppplVar16,param_4,param_5,param_6,param_7,param_8);
    if (lVar9 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ********)0x2b0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        pppplVar16 = (long ****)ppppppppplVar23;
        if (((uVar6 & 1) != 0) &&
           (lVar9 = FUN_710392e290(0x10,0x2b0,(long ****)ppppppppplVar23,param_4,param_5,param_6,
                                   param_7,param_8), pppplVar16 = (long ****)ppppppppplVar23,
           lVar9 != 0)) goto LAB_71022f302c;
      }
      lVar9 = 0;
    }
LAB_71022f302c:
    *(undefined8 *)(lVar9 + 0x10) = 0;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    *(long *)lVar9 = lVar9;
    *(undefined8 *)(lVar9 + 8) = 0;
    *(undefined4 *)(lVar9 + 0xd0) = 0xffffffff;
    *(undefined1 *)(lVar9 + 0xd4) = 0;
    *(undefined4 *)(lVar9 + 0x1a8) = 0xffffffff;
    *(undefined1 *)(lVar9 + 0x1ac) = 0;
    *(undefined8 *)(lVar9 + 0x238) = 0;
    *(undefined8 *)(lVar9 + 0x230) = 0;
    *(undefined8 *)(lVar9 + 0x228) = 0;
    *(undefined8 *)(lVar9 + 0x220) = 0;
    *(undefined8 *)(lVar9 + 0x218) = 0;
    *(undefined8 *)(lVar9 + 0x210) = 0;
    *(undefined8 *)(lVar9 + 0x208) = 0;
    *(undefined8 *)(lVar9 + 0x1b0) = 0;
    *(undefined1 **)(lVar9 + 0x238) = &DAT_c1ffff0000000000;
    *(undefined8 *)(lVar9 + 0x240) = 0;
    *(undefined4 *)(lVar9 + 0x248) = 0;
    *(undefined8 *)(lVar9 + 0x268) = 0;
    *(undefined8 *)(lVar9 + 0x260) = 0;
    *(undefined8 *)(lVar9 + 600) = 0;
    *(undefined8 *)(lVar9 + 0x250) = 0;
    *(undefined8 *)(lVar9 + 0xc0) = 0;
    *(undefined8 *)(lVar9 + 200) = 0xffffffff;
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
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    *(undefined8 *)(lVar9 + 0xf0) = 0;
    *(long *)(lVar9 + 0xd8) = lVar9;
    *(undefined8 *)(lVar9 + 0xe0) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x1a0) = 0xffffffff;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x178) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x168) = 0;
    *(undefined8 *)(lVar9 + 0x170) = 0;
    *(undefined8 *)(lVar9 + 0x158) = 0;
    *(undefined8 *)(lVar9 + 0x160) = 0;
    *(undefined8 *)(lVar9 + 0x148) = 0;
    *(undefined8 *)(lVar9 + 0x150) = 0;
    *(undefined8 *)(lVar9 + 0x138) = 0;
    *(undefined8 *)(lVar9 + 0x140) = 0;
    *(undefined8 *)(lVar9 + 0x128) = 0;
    *(undefined8 *)(lVar9 + 0x130) = 0;
    *(undefined8 *)(lVar9 + 0x118) = 0;
    *(undefined8 *)(lVar9 + 0x120) = 0;
    *(undefined8 *)(lVar9 + 0x108) = 0;
    *(undefined8 *)(lVar9 + 0x110) = 0;
    *(undefined8 *)(lVar9 + 0xf8) = 0;
    *(undefined8 *)(lVar9 + 0x100) = 0;
    *(undefined8 *)(lVar9 + 0x1f8) = 0;
    *(undefined8 *)(lVar9 + 0x200) = 0;
    *(undefined8 *)(lVar9 + 0x1e8) = 0;
    *(undefined8 *)(lVar9 + 0x1f0) = 0;
    *(undefined8 *)(lVar9 + 0x1d8) = 0;
    *(undefined8 *)(lVar9 + 0x1e0) = 0;
    *(undefined8 *)(lVar9 + 0x1c8) = 0;
    *(undefined8 *)(lVar9 + 0x1d0) = 0;
    *(undefined8 *)(lVar9 + 0x1b8) = 0;
    *(undefined8 *)(lVar9 + 0x1c0) = 0;
    FUN_71022e6d40((long *)(lVar9 + 0x250),1,pppplVar16,param_4,param_5,param_6,param_7,param_8);
    *(undefined8 *)(lVar9 + 0x288) = 0;
    *(undefined8 *)(lVar9 + 0x280) = 0;
    *(undefined8 *)(lVar9 + 0x278) = 0;
    *(undefined8 *)(lVar9 + 0x270) = 0;
    *(undefined8 *)(lVar9 + 0x268) = 0;
    FUN_71022e7050((long *)(lVar9 + 0x270),1,pppplVar16,param_4,param_5,param_6,param_7,param_8);
    *(code **)(lVar9 + 0x28) = FUN_71022e72f0;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(undefined8 *)(lVar9 + 0x298) = 0;
    *(code **)(lVar9 + 0x38) = FUN_71022e7300;
    *(undefined8 *)(lVar9 + 0x40) = 0;
    *(code **)(lVar9 + 0x48) = FUN_71022e7790;
    *(undefined8 *)(lVar9 + 0x50) = 0;
    *(undefined8 *)(lVar9 + 0x290) = 0;
    *(code **)(lVar9 + 0x58) = FUN_71022e7c80;
    *(undefined8 *)(lVar9 + 0x60) = 0;
    *(undefined8 *)(lVar9 + 0x288) = 0;
    *(undefined2 *)(lVar9 + 0x2a0) = 0x101;
    *(code **)(lVar9 + 0x68) = FUN_71022e7e20;
    *(undefined8 *)(lVar9 + 0x70) = 0;
    if (0x12 < *(uint *)(lVar9 + 0xc4)) goto LAB_71022f3f08;
    *(undefined4 *)(lVar9 + (long)(int)*(uint *)(lVar9 + 0xc4) * 4 + 0x78) = 0;
    *(code **)(lVar9 + 0x110) = FUN_71022e7fc0;
    *(undefined8 *)(lVar9 + 0x118) = 0;
    *(code **)(lVar9 + 0x100) = FUN_71022e7fb0;
    *(undefined8 *)(lVar9 + 0x108) = 0;
    *(code **)(lVar9 + 0x120) = FUN_71022e82c0;
    *(undefined8 *)(lVar9 + 0x128) = 0;
    *(code **)(lVar9 + 0x130) = FUN_71022e8430;
    *(undefined8 *)(lVar9 + 0x138) = 0;
    *(code **)(lVar9 + 0x140) = FUN_71022e8540;
    *(undefined8 *)(lVar9 + 0x148) = 0;
    if (0x12 < *(uint *)(lVar9 + 0x19c)) goto LAB_71022f3f08;
    *(undefined4 *)(lVar9 + (long)(int)*(uint *)(lVar9 + 0x19c) * 4 + 0x150) = 0;
    *plVar8 = lVar9;
    DAT_7105328178 = plVar8;
  }
  if (DAT_7105324ad8 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar16,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar7 == (undefined8 *)0x0) {
      local_64 = 0;
      local_70 = (long ********)&DAT_00000008;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      puVar7 = (undefined8 *)
               FUN_710392e290(0x10,8,(long ****)ppppppppplVar24,param_4,param_5,param_6,param_7,
                              param_8);
      pppplVar16 = (long ****)ppppppppplVar24;
    }
    *puVar7 = 0;
    DAT_7105324ad8 = puVar7;
  }
  *(undefined4 *)(*(long *)(DAT_710532f7b0 + 8) + 0x178) = 0xffffffff;
  FUN_7103723a90(*plVar5,&DAT_7105328190,pppplVar16,param_4,param_5,param_6,param_7,param_8);
  plVar5[6] = (long)FUN_71022ebf80;
  plVar5[7] = 0;
  plVar5[8] = (long)FUN_71022ec380;
  plVar5[9] = 0;
  plVar5[0xc] = (long)FUN_71022ec800;
  plVar5[0xd] = 0;
  plVar5[0xe] = (long)FUN_71022ec920;
  plVar5[0xf] = 0;
  plVar5[0x12] = (long)FUN_71022ecfa0;
  plVar5[0x13] = 0;
  plVar5[0x14] = (long)FUN_71022ed1f0;
  plVar5[0x15] = 0;
  plVar5[10] = (long)FUN_71022ec770;
  plVar5[0xb] = 0;
  plVar5[0x18] = (long)FUN_71022eda40;
  plVar5[0x19] = 0;
  plVar5[0x10] = (long)FUN_71022ec990;
  plVar5[0x11] = 0;
  plVar5[0x1a] = (long)FUN_71022edcd0;
  plVar5[0x1b] = 0;
  plVar5[0x16] = (long)FUN_71022ed890;
  plVar5[0x17] = 0;
  plVar5[0x1e] = (long)FUN_71022ee210;
  plVar5[0x1f] = 0;
  plVar5[0x1c] = (long)FUN_71022edfe0;
  plVar5[0x1d] = 0;
  plVar5[0x20] = (long)FUN_71022ee440;
  plVar5[0x21] = 0;
  plVar5[0x22] = (long)FUN_71022ee740;
  plVar5[0x23] = 0;
  plVar5[0x24] = (long)FUN_71022ee8e0;
  plVar5[0x25] = 0;
  if (DAT_7105328160 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar16,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ********)&DAT_00000008;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        pppplVar16 = (long ****)ppppppppplVar25;
        if (((uVar6 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,8,(long ****)ppppppppplVar25,param_4,param_5,param_6,
                                    param_7,param_8), pppplVar16 = (long ****)ppppppppplVar25,
           puVar7 != (undefined8 *)0x0)) goto LAB_71022f3380;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_71022f3380:
    plVar8 = (long *)FUN_710392e290(0x10,0x810980,pppplVar16,param_4,param_5,param_6,param_7,param_8
                                   );
    if (plVar8 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ********)0x810980;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar6 & 1) != 0) &&
           (plVar8 = (long *)FUN_710392e290(0x10,0x810980,(long ****)ppppppppplVar26,param_4,param_5
                                            ,param_6,param_7,param_8), plVar8 != (long *)0x0))
        goto LAB_71022f33e0;
      }
      plVar8 = (long *)0x0;
    }
LAB_71022f33e0:
    pppplVar16 = (long ****)0x13c;
    *plVar8 = (long)plVar8;
    plVar8[2] = 0;
    plVar8[1] = 0;
    *(undefined4 *)((long)plVar8 + 0x164) = 0;
    plVar8[3] = 0;
    plVar8[4] = 0;
    plVar8[0x2d] = 0xffffffff;
    *(undefined4 *)(plVar8 + 0x2e) = 0xffffffff;
    *(undefined1 *)((long)plVar8 + 0x174) = 0;
    memset(plVar8 + 5,0,0x13c);
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x80,pppplVar16,param_4,param_5,param_6,param_7,param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ********)&DAT_00000080;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar6 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x80,(long ****)ppppppppplVar27,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71022f3468;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71022f3468:
    puVar10[2] = 0;
    *puVar10 = &PTR_FUN_7105181b40;
    puVar10[1] = puVar10 + 2;
    puVar10[5] = 0;
    puVar10[3] = 0;
    puVar10[4] = puVar10 + 5;
    puVar10[8] = 0;
    puVar10[6] = 0;
    puVar10[7] = puVar10 + 8;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    *(undefined4 *)(puVar10 + 0xf) = 0;
    puVar10[0xe] = 0;
    puVar10[9] = 0;
    puVar10[10] = puVar10 + 0xb;
    *(undefined4 *)(puVar10 + 0xd) = 2;
    plVar8[0x31] = 0xffffffff;
    *(undefined4 *)(plVar8 + 0x32) = 0xffffffff;
    plVar8[0x2f] = (long)puVar10;
    plVar8[0x30] = 0;
    FUN_7103342e00((undefined2 *)(plVar8 + 0x33));
    memset(plVar8 + 0x40871,0,0x60c5d8);
    FUN_7103342e00((undefined2 *)(plVar8 + 0x40872));
    FUN_7103342e00((undefined2 *)(plVar8 + 0x810b0));
    FUN_7103342e00((undefined2 *)(plVar8 + 0xc18ee));
    *(undefined4 *)(plVar8 + 0x10212f) = 0;
    plVar8[0x10212e] = 0;
    plVar8[0x10212d] = 0;
    plVar8[0x10212c] = 0;
    plVar8[5] = (long)FUN_71022e0690;
    plVar8[6] = 0;
    plVar8[7] = (long)FUN_71022e06a0;
    plVar8[8] = 0;
    plVar8[9] = (long)FUN_71022e1930;
    plVar8[10] = 0;
    plVar8[0xd] = (long)FUN_71022e1d30;
    plVar8[0xe] = 0;
    plVar8[0x11] = (long)FUN_71022e2390;
    plVar8[0x12] = 0;
    plVar8[0xb] = (long)FUN_71022e1b30;
    plVar8[0xc] = 0;
    plVar8[0x13] = (long)FUN_71022e2690;
    plVar8[0x14] = 0;
    plVar8[0xf] = (long)FUN_71022e2520;
    plVar8[0x10] = 0;
    plVar8[0x15] = (long)FUN_71022e2830;
    plVar8[0x16] = 0;
    plVar8[0x17] = (long)FUN_71022e2950;
    plVar8[0x18] = 0;
    plVar8[0x19] = (long)FUN_71022e2cc0;
    plVar8[0x1a] = 0;
    plVar8[0x1b] = (long)FUN_71022e34e0;
    plVar8[0x1c] = 0;
    plVar8[0x1d] = (long)FUN_71022e35e0;
    plVar8[0x1e] = 0;
    plVar8[0x1f] = (long)FUN_71022e37b0;
    plVar8[0x20] = 0;
    plVar8[3] = (long)FUN_71022e3bc0;
    plVar8[4] = 0;
    plVar8[0x21] = (long)FUN_71022e3a20;
    plVar8[0x22] = 0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    *(undefined8 *)((long)plVar8 + 0x15c) = 0;
    *(undefined8 *)((long)plVar8 + 0x154) = 0;
    *(undefined8 *)((long)plVar8 + 0x14c) = 0;
    *(undefined8 *)((long)plVar8 + 0x144) = 0;
    *(undefined8 *)((long)plVar8 + 0x13c) = 0;
    *(undefined8 *)((long)plVar8 + 0x134) = 0;
    *(undefined8 *)((long)plVar8 + 300) = 0;
    *(undefined8 *)((long)plVar8 + 0x124) = 0;
    *(undefined8 *)((long)plVar8 + 0x11c) = 0;
    *(undefined8 *)((long)plVar8 + 0x164) = 0xffffffff00000000;
    *(undefined8 *)((long)plVar8 + 0x16c) = 0xffffffff00000000;
    *(undefined1 *)((long)plVar8 + 0x174) = 0;
    *(undefined4 *)(plVar8 + 0x23) = 0;
    FUN_71022e3bd0(plVar8);
    *puVar7 = plVar8;
    DAT_7105328160 = puVar7;
  }
  plVar5[0x26] = (long)FUN_71022eeac0;
  plVar5[0x27] = 0;
  plVar5[0x41] = 0;
  plVar5[0x28] = (long)FUN_71022eeca0;
  plVar5[0x29] = 0;
  plVar5[0x2c] = (long)FUN_71022eefd0;
  plVar5[0x2d] = 0;
  plVar5[0x43] = 0;
  plVar5[0x45] = 0;
  plVar5[0x2e] = (long)FUN_71022ef1f0;
  plVar5[0x2f] = 0;
  plVar5[0x32] = (long)FUN_71022ef910;
  plVar5[0x33] = 0;
  plVar5[0x34] = (long)FUN_71022efb30;
  plVar5[0x35] = 0;
  plVar5[0x38] = (long)FUN_71022f0020;
  plVar5[0x39] = 0;
  plVar5[0x3a] = (long)FUN_71022f0270;
  plVar5[0x3b] = 0;
  plVar5[0x3e] = (long)FUN_71022f09d0;
  plVar5[0x3f] = 0;
  plVar5[0x40] = (long)FUN_71022f0be0;
  plVar5[0x42] = (long)FUN_71022f0e70;
  plVar5[0x44] = (long)FUN_71022f1270;
  plVar5[0x2a] = (long)FUN_71022eed70;
  plVar5[0x2b] = 0;
  plVar5[0x30] = (long)FUN_71022ef500;
  plVar5[0x31] = 0;
  plVar5[0x36] = (long)FUN_71022eff60;
  plVar5[0x37] = 0;
  plVar5[0x3c] = (long)FUN_71022f0500;
  plVar5[0x3d] = 0;
  if (0x12 < *(uint *)((long)plVar5 + 0x27c)) {
LAB_71022f3f08:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)plVar5 + (long)(int)*(uint *)((long)plVar5 + 0x27c) * 4 + 0x230) = 0;
  lVar9 = *(long *)(DAT_710532f7d8 + 8);
  std::mutex::lock();
  *(undefined1 *)(lVar9 + 0xf5) = 0;
  *(undefined1 *)(lVar9 + 0xf1) = 1;
  *(uint *)(lVar9 + 0xe8) = *(uint *)(lVar9 + 0xe8) | 1;
  *(undefined1 *)(*(long *)(*(long *)(lVar9 + 0xa0) + 0x80) + 0x1cc) = *(undefined1 *)(lVar9 + 0xf4)
  ;
  *(undefined8 *)(lVar9 + 0xf8) = 0x8ffff0000000000;
  *(undefined4 *)(lVar9 + 0xec) = 0xffffffff;
  *(undefined4 *)(lVar9 + 0x100) = 7;
  std::mutex::unlock();
  lVar9 = plVar5[0x52];
  local_70 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar9,(ulong *)&local_70,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = plVar5[0x52];
  local_70 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar9,(ulong *)&local_70,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = plVar5[0x52];
  FUN_710323beb0(lVar9,(ulong *)&DAT_7104545f20,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = plVar5[0x52];
  local_70 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar9,(ulong *)&local_70,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = plVar5[0x52];
  local_70 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar9,(ulong *)&local_70,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = plVar5[0x52];
  FUN_710323beb0(lVar9,(ulong *)&DAT_7104545f28,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = plVar5[0x52];
  local_70 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar9,(ulong *)&local_70,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = plVar5[0x52];
  local_70 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar9,(ulong *)&local_70,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = plVar5[0x52];
  FUN_710323beb0(lVar9,(ulong *)&DAT_7104545f30,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = plVar5[0x52];
  local_70 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar9,(ulong *)&local_70,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = plVar5[0x52];
  local_70 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar9,(ulong *)&local_70,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = plVar5[0x52];
  pppplVar16 = (long ****)0x1;
  FUN_710323beb0(lVar9,(ulong *)&DAT_7104545f38,(long)*(int *)(lVar9 + 0x70),
                 (ulong)*(uint *)(lVar9 + 0x68),(long ****)0x1,param_6,param_7,param_8);
  lVar9 = plVar5[0x52];
  ppuVar28 = (undefined **)(long)*(int *)(lVar9 + 0x70);
  ppppbVar33 = (byte ****)(ulong)*(uint *)(lVar9 + 0x68);
  FUN_710323c1c0(lVar9,(ulong *)&DAT_7104545f68,(long *********)ppuVar28,ppppbVar33,pppplVar16,
                 param_6,param_7,param_8);
  lVar36 = plVar5[0x52];
  uVar6 = FUN_710323cb80(lVar36,extraout_x1_01,(long *********)ppuVar28,ppppbVar33,pppplVar16,
                         param_6,param_7,param_8);
  uVar12 = extraout_x1_02;
  lVar9 = DAT_710532f8b8;
  while (DAT_710532f8b8 = lVar9, (uVar6 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar6 = FUN_710323cb80(lVar36,extraout_x1_03,(long *********)ppuVar28,ppppbVar33,pppplVar16,
                           param_6,param_7,param_8);
    uVar12 = extraout_x1_04;
    lVar9 = DAT_710532f8b8;
  }
  auVar38._8_8_ = uVar12;
  auVar38._0_8_ = uVar6;
  lVar36 = plVar5[0x52];
  if (((DAT_710532f4d8 & 1) == 0) &&
     (auVar38 = __cxa_guard_acquire(&DAT_710532f4d8), auVar38._0_4_ != 0)) {
    DAT_710532f4a4 = 0xffffff;
    ppuVar28 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    auVar38 = __cxa_guard_release(&DAT_710532f4d8);
    lVar35 = *(long *)(lVar36 + 0x28);
    if (lVar35 == 0) goto LAB_71022f39c4;
LAB_71022f3980:
    lVar34 = lVar36 + 0x28;
    do {
      bVar2 = (*(ulong *)(lVar35 + 0x20) & 0xffffffffff) < 0xd361e7307;
      if (!bVar2) {
        lVar34 = lVar35;
      }
      lVar35 = *(long *)(lVar35 + (ulong)bVar2 * 8);
    } while (lVar35 != 0);
    if ((lVar34 == lVar36 + 0x28) || (0xd361e7307 < (*(ulong *)(lVar34 + 0x20) & 0xfffffffff8)))
    goto LAB_71022f39c4;
    ppppppppplVar15 = (long *********)(lVar34 + 0x28);
  }
  else {
    lVar35 = *(long *)(lVar36 + 0x28);
    if (lVar35 != 0) goto LAB_71022f3980;
LAB_71022f39c4:
    ppppppppplVar15 = (long *********)&DAT_710532f4a4;
  }
  pcVar29 = (char *)ppuVar28;
  if (*(int *)ppppppppplVar15 != 0xffffff) {
    pcVar29 = (char *)0x5;
    uVar3 = FUN_710330a8f0(*(long **)(lVar9 + 8),(ulong *)&DAT_7104545f68,(long ****)0x5,ppppbVar33,
                           pppplVar16,param_6,param_7,param_8);
    auVar38._4_4_ = 0;
    auVar38._0_4_ = uVar3;
    auVar38._8_8_ = extraout_x1_05;
    if (uVar3 != 0) {
      uVar3 = FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,uVar3,ppppppppplVar15,
                             ppppbVar33,pppplVar16,param_6,param_7,param_8);
      auVar38._4_4_ = 0;
      auVar38._0_4_ = uVar3;
      auVar38._8_8_ = extraout_x1_06;
      pcVar29 = (char *)ppppppppplVar15;
    }
  }
  if (DAT_7105328170 != (undefined8 *)0x0) goto LAB_71022f3e18;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,8,(long ****)pcVar29,ppppbVar33,pppplVar16,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ********)&DAT_00000008;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      pcVar29 = (char *)ppppppppplVar30;
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)ppppppppplVar30,ppppbVar33,pppplVar16,param_6,
                                  param_7,param_8), pcVar29 = (char *)ppppppppplVar30,
         puVar7 != (undefined8 *)0x0)) goto LAB_71022f3a74;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71022f3a74:
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x30,(long ****)pcVar29,ppppbVar33,pppplVar16,param_6,param_7,
                           param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ********)&DAT_00000030;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      pcVar29 = (char *)ppppppppplVar31;
      if (((uVar6 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar31,ppppbVar33,pppplVar16,
                                   param_6,param_7,param_8), pcVar29 = (char *)ppppppppplVar31,
         puVar10 != (undefined8 *)0x0)) goto LAB_71022f3ad0;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_71022f3ad0:
  puVar10[3] = 0;
  puVar10[4] = 0;
  *(undefined4 *)(puVar10 + 5) = 0x3f800000;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x30,(long ****)pcVar29,ppppbVar33,pppplVar16,param_6,param_7,
                           param_8);
  ppuVar28 = (undefined **)pcVar29;
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ********)&DAT_00000030;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      ppuVar28 = (undefined **)ppppppppplVar32;
      if (((uVar6 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,pppplVar16,
                                   param_6,param_7,param_8),
         ppuVar28 = (undefined **)ppppppppplVar32, puVar11 != (undefined8 *)0x0))
      goto LAB_71022f3b34;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71022f3b34:
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[3] = 0;
  *(undefined4 *)(puVar11 + 2) = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  *puVar10 = puVar11;
  *puVar7 = puVar10;
  lVar9 = plVar5[0x52];
  if (((DAT_710532f4d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_710532f4d0), iVar4 != 0)) {
    DAT_710532f4a0 = 0xffffff;
    ppuVar28 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d0);
    lVar36 = *(long *)(lVar9 + 0x10);
    if (lVar36 == 0) goto LAB_71022f3bac;
LAB_71022f3b68:
    lVar35 = lVar9 + 0x10;
    do {
      bVar2 = (*(ulong *)(lVar36 + 0x20) & 0xffffffffff) < 0x26d9eccde3;
      if (!bVar2) {
        lVar35 = lVar36;
      }
      lVar36 = *(long *)(lVar36 + (ulong)bVar2 * 8);
    } while (lVar36 != 0);
    if ((lVar35 == lVar9 + 0x10) || (0x26d9eccde3 < (*(ulong *)(lVar35 + 0x20) & 0xfffffffffc)))
    goto LAB_71022f3bac;
    puVar13 = (uint *)(lVar35 + 0x28);
  }
  else {
    lVar36 = *(long *)(lVar9 + 0x10);
    if (lVar36 != 0) goto LAB_71022f3b68;
LAB_71022f3bac:
    puVar13 = &DAT_710532f4a0;
  }
  FUN_7103375860(puVar10,puVar13,(long ****)ppuVar28,ppppbVar33,pppplVar16,param_6,param_7,param_8);
  if (*(long **)*puVar7 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = **(long **)*puVar7;
  }
  FUN_7103371290(lVar9,extraout_x1_07,ppuVar28,ppppbVar33,pppplVar16,param_6,param_7,param_8);
  plVar8 = (long *)0x0;
  if (*(long **)*puVar7 != (long *)0x0) {
    FUN_7103375650(*(long **)*puVar7,"CAMERA_POSITION_APPEAR",&DAT_71042b2a84);
    plVar8 = (long *)0x0;
    if (*(long **)*puVar7 != (long *)0x0) {
      FUN_7103375650(*(long **)*puVar7,"CAMERA_POSITION_TOP",&DAT_71042b2a84);
      plVar8 = (long *)0x0;
      if (*(long **)*puVar7 != (long *)0x0) {
        FUN_7103375650(*(long **)*puVar7,"CAMERA_POSITION_CUSTOMIZE",&DAT_71042b2a84);
        plVar8 = (long *)0x0;
        if (*(long **)*puVar7 != (long *)0x0) {
          FUN_7103375650(*(long **)*puVar7,"CAMERA_POSITION_RAISE",&DAT_71042b2a84);
          plVar8 = (long *)0x0;
          if (*(long **)*puVar7 != (long *)0x0) {
            FUN_7103375650(*(long **)*puVar7,"CAMERA_POSITION_PRIZE",&DAT_71042b2a84);
            plVar8 = (long *)0x0;
            if (*(long **)*puVar7 != (long *)0x0) {
              FUN_7103375650(*(long **)*puVar7,"CAMERA_POSITION_MII_BODY",&DAT_71042b2a84);
              plVar8 = (long *)0x0;
              if (*(long **)*puVar7 != (long *)0x0) {
                FUN_7103375650(*(long **)*puVar7,"CAMERA_POSITION_MII_HAT",&DAT_71042b2a84);
                plVar8 = *(long **)*puVar7;
              }
            }
          }
        }
      }
    }
  }
  pcVar29 = &DAT_71042b2a84;
  ppppbVar33 = (byte ****)0x0;
  FUN_7103375650(plVar8,"EDIT_MII_TYPE",&DAT_71042b2a84);
  plVar37 = (long *)*puVar7;
  plVar8 = (long *)*plVar37;
  lVar35 = *plVar8;
  *(undefined4 *)(plVar8 + 2) = 0;
  plVar8 = *(long **)(lVar35 + 0x10);
  *plVar8 = lVar35;
  *(undefined4 *)(plVar8 + 1) = 0x48;
  lVar9 = *(long *)(lVar35 + 0x10);
  *(long *)(lVar35 + 0x10) = lVar9 + 0x10;
  lVar36 = *(long *)(*(long *)(lVar35 + 0x18) + 200);
  *(long *)(lVar35 + 0x10) = lVar9;
  if (lVar36 == lVar35) {
    lVar9 = *(long *)(*(long *)(lVar35 + 0x18) + 0x40);
    if (*(uint *)(lVar9 + 0xc) < 2) {
      plVar8 = (long *)(*(long *)(lVar9 + 0x18) +
                       ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar9 + 0xb) & 0x3f)) & 2) *
                       0x20);
      do {
        if (((int)plVar8[3] == 0x13) && (plVar14 = plVar8, plVar8[2] == 2)) break;
        piVar1 = (int *)((long)plVar8 + 0x1c);
        plVar8 = plVar8 + (long)*piVar1 * 4;
        plVar14 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar14 = (long *)(*(long *)(lVar9 + 0x10) + 0x10);
    }
    pcVar29 = "initialize";
    uVar3 = FUN_71038f4d40(lVar35,plVar14,"initialize");
    uVar12 = extraout_x1_09;
  }
  else {
    FUN_71038f4b20(lVar35,"initialize");
    uVar3 = FUN_71038f4fc0(lVar35,-2);
    uVar12 = extraout_x1_08;
  }
  puVar10 = (undefined8 *)(*(long *)(lVar35 + 0x10) + -0x10);
  if ((puVar10 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar35 + 0x10) + -8) & 0xf) != 6)) {
    *(undefined8 **)(lVar35 + 0x10) = puVar10;
  }
  else {
    uVar3 = FUN_7103377130(plVar37,0,(long ****)pcVar29,ppppbVar33,pppplVar16,param_6,param_7,
                           param_8);
    uVar12 = extraout_x1_10;
  }
  auVar38._4_4_ = 0;
  auVar38._0_4_ = uVar3;
  auVar38._8_8_ = uVar12;
  DAT_7105328170 = puVar7;
LAB_71022f3e18:
  plVar8 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar5;
  if (plVar8 != (long *)0x0) {
    FUN_71022f25f0(plVar8,auVar38._8_8_,(long *********)pcVar29,ppppbVar33,pppplVar16,param_6,
                   param_7,param_8);
    uVar12 = FUN_710392eb40((ulong)plVar8);
    return uVar12;
  }
  return auVar38._0_8_;
}

