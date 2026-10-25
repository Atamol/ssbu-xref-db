// addr:      7101bcf940
// offset:    0x1bcf940
// name:      FUN_7101bcf940
// mangled:   
// signature: undefined __cdecl FUN_7101bcf940(long * param_1, long param_2, byte * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101bcf940(long *param_1,long param_2,byte ******param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  byte ****ppppbVar10;
  bool bVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  byte ***pppbVar18;
  byte ********ppppppppbVar19;
  byte ********ppppppppbVar20;
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
  undefined8 uVar21;
  char *pcVar22;
  byte *********pppppppppbVar23;
  long ****pppplVar24;
  byte ****ppppbVar25;
  byte ****ppppbVar26;
  long ****pppplVar27;
  long lVar28;
  byte *******pppppppbVar29;
  code *pcVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  byte ********ppppppppbVar35;
  byte ********ppppppppbVar36;
  char *pcVar37;
  long *plVar38;
  byte *********pppppppppbVar39;
  long *plVar40;
  undefined1 auVar41 [16];
  undefined **local_270;
  ulong local_268;
  undefined **local_260;
  ulong local_258;
  undefined **local_250;
  ulong local_248;
  undefined **local_240;
  ulong local_238;
  undefined **local_230;
  ulong local_228;
  undefined **local_220;
  ulong local_218;
  undefined **local_210;
  ulong local_208;
  undefined **local_200;
  ulong local_1f8;
  byte ********local_1f0;
  undefined8 local_1e8;
  byte ********local_1e0;
  byte ********local_1d8;
  undefined4 local_1d0;
  char *local_1c8;
  undefined4 local_1c0 [2];
  char *local_1b8;
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
  byte ********local_c0;
  byte ****local_b8;
  uint local_b0;
  byte ****local_a8;
  byte *********local_a0;
  byte ****local_98;
  undefined4 local_84;
  undefined **local_80;
  byte ****local_78;
  
  plVar40 = param_1 + 1;
  *param_1 = param_2;
  ppppppppbVar19 = (byte ********)param_3;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar21 = extraout_x1;
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&DAT_00000008;
      ppppppppbVar19 = (byte ********)&local_1f0;
      auVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      uVar21 = auVar41._8_8_;
      if (((auVar41._0_8_ & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                                   param_8), uVar21 = extraout_x1_00, puVar12 != (undefined8 *)0x0))
      goto LAB_7101bcf9cc;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bcf9cc:
  FUN_7103773200(puVar12,uVar21,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,param_8);
  param_1[1] = (long)puVar12;
  FUN_7101414b10(param_1 + 2,plVar40,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7101bcec20(param_1 + 4,extraout_x1_01,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                 param_7,param_8);
  puVar13 = (undefined1 *)
            FUN_710392e290(0x10,0xc0,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  uVar21 = extraout_x1_02;
  if (puVar13 == (undefined1 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&DAT_000000c0;
      ppppppppbVar19 = (byte ********)&local_1f0;
      auVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      uVar21 = auVar41._8_8_;
      if (((auVar41._0_8_ & 1) != 0) &&
         (puVar13 = (undefined1 *)
                    FUN_710392e290(0x10,0xc0,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), uVar21 = extraout_x1_03,
         puVar13 != (undefined1 *)0x0)) goto LAB_7101bcfa4c;
    }
    puVar13 = (undefined1 *)0x0;
  }
LAB_7101bcfa4c:
  *puVar13 = 0;
  *(undefined2 *)(puVar13 + 0x18) = 0;
  *(undefined8 *)(puVar13 + 8) = 0;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  *(undefined8 *)(puVar13 + 0x58) = 0;
  *(undefined8 *)(puVar13 + 0x48) = 0;
  *(undefined8 *)(puVar13 + 0x38) = 0;
  *(undefined8 *)(puVar13 + 0x20) = 0;
  *(undefined8 *)(puVar13 + 0x28) = 0;
  *(undefined8 *)(puVar13 + 0x30) = 0;
  *(undefined8 *)(puVar13 + 0x50) = 0;
  *(undefined8 *)(puVar13 + 0x40) = 0;
  FUN_7103776290((undefined8 *)(puVar13 + 0x30),uVar21,(long ****)ppppppppbVar19,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776290((undefined8 *)(puVar13 + 0x40),extraout_x1_04,(long ****)ppppppppbVar19,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7103776290((undefined8 *)(puVar13 + 0x50),extraout_x1_05,(long ****)ppppppppbVar19,param_4,
                 param_5,param_6,param_7,param_8);
  *(undefined ***)(puVar13 + 0x28) = &PTR_FUN_71050ac038;
  *(undefined8 *)(puVar13 + 0x80) = 0;
  *(undefined8 *)(puVar13 + 0x88) = 0;
  *(undefined8 *)(puVar13 + 0x70) = 0;
  *(undefined8 *)(puVar13 + 0x78) = 0;
  *(undefined8 *)(puVar13 + 0x90) = 0;
  *(undefined8 *)(puVar13 + 0x60) = 0;
  *(undefined8 *)(puVar13 + 0x68) = 0;
  *(undefined8 *)(puVar13 + 0xa8) = 0;
  *(undefined8 *)(puVar13 + 0xb0) = 0;
  *(undefined ***)(puVar13 + 0x98) = &PTR_FUN_710523d9e8;
  *(undefined8 *)(puVar13 + 0xa0) = 0;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000018;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bcfb14;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bcfb14:
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined1 *)(puVar12 + 2) = 1;
  *(undefined8 **)(puVar13 + 0xa0) = puVar12;
  *(undefined ***)(puVar13 + 0xa8) = &PTR_FUN_710523d9e8;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000018;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bcfb78;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bcfb78:
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined1 *)(puVar12 + 2) = 1;
  *(undefined8 **)(puVar13 + 0xb0) = puVar12;
  *(undefined ***)(puVar13 + 0x90) = &PTR_FUN_71050ab348;
  *(undefined4 *)(puVar13 + 0xb8) = 0;
  param_1[5] = (long)puVar13;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&DAT_00000010;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bcfbf4;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bcfbf4:
  *puVar12 = &PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  uVar21 = extraout_x1_06;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000020;
      ppppppppbVar19 = (byte ********)&local_1f0;
      auVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      uVar21 = auVar41._8_8_;
      if (((auVar41._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), uVar21 = extraout_x1_07,
         puVar15 != (undefined8 *)0x0)) goto LAB_7101bcfc54;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101bcfc54:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar12[1] = puVar15;
  param_1[6] = (long)puVar12;
  FUN_7101bcd660(param_1 + 7,uVar21,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7101bcc0a0(param_1 + 8,extraout_x1_08,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                 param_7,param_8);
  param_1[9] = (long)&PTR_FUN_71050ac0c8;
  param_1[10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = (long)&PTR_FUN_710523d9a8;
  param_1[0xc] = 0;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000020;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bcfce8;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bcfce8:
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  param_1[0xc] = (long)puVar12;
  param_1[0xd] = (long)&PTR_FUN_710523d9a8;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000020;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bcfd48;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bcfd48:
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  param_1[0xe] = (long)puVar12;
  param_1[0xf] = (long)&PTR_FUN_710523d9a8;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000020;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bcfda8;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bcfda8:
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  param_1[0x10] = (long)puVar12;
  param_1[0x11] = (long)&PTR_FUN_710523d9a8;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000020;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bcfe08;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bcfe08:
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  param_1[10] = (long)&PTR_FUN_71050ab5a8;
  param_1[0x12] = (long)puVar12;
  param_1[0x13] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = (long)&PTR_FUN_710523d9e8;
  param_1[0x15] = 0;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000018;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bcfe84;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bcfe84:
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined1 *)(puVar12 + 2) = 1;
  param_1[0x15] = (long)puVar12;
  param_1[0x16] = (long)&PTR_FUN_710523d9e8;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000018;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bcfee8;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bcfee8:
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined1 *)(puVar12 + 2) = 1;
  param_1[0x17] = (long)puVar12;
  param_1[0x18] = (long)&PTR_FUN_710523d9e8;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000018;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bcff48;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bcff48:
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined1 *)(puVar12 + 2) = 1;
  param_1[0x19] = (long)puVar12;
  param_1[0x1a] = (long)&PTR_FUN_710523d9e8;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000018;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bcffac;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bcffac:
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined1 *)(puVar12 + 2) = 1;
  param_1[0x1b] = (long)puVar12;
  param_1[0x1c] = 0;
  param_1[0x13] = (long)&PTR_FUN_71050ab368;
  param_1[0x1d] = (long)&PTR_FUN_710523d9a8;
  param_1[0x1e] = 0;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000020;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bd001c;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bd001c:
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = (long)puVar12;
  param_1[0x1c] = (long)&PTR_FUN_71050ab428;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = (long)&PTR_FUN_710523d9e8;
  param_1[0x21] = 0;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000018;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bd009c;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bd009c:
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined1 *)(puVar12 + 2) = 1;
  param_1[0x21] = (long)puVar12;
  param_1[0x22] = (long)&PTR_FUN_710523d9e8;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000018;
      ppppppppbVar19 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppbVar19,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bd0100;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bd0100:
  *puVar12 = 0;
  puVar12[1] = 0;
  pppplVar24 = (long ****)&DAT_7104544e38;
  *(undefined1 *)(puVar12 + 2) = 1;
  param_1[0x23] = (long)puVar12;
  ppppbVar25 = (byte ****)0x1;
  param_1[0x1f] = (long)&PTR_FUN_71050ab348;
  FUN_71032cbf30(plVar40,**(long **)(*param_1 + 0x78),(ulong *)&DAT_7104544e38,(byte ****)0x1,
                 param_5,param_6,param_7,param_8);
  lVar28 = *(long *)(**(long **)param_1[1] + 0x600);
  *(undefined4 *)(lVar28 + 0x488) = 8;
  if ((*(int *)(lVar28 + 0x484) == 0) && (*(int *)(lVar28 + 0x48c) != 8)) {
    *(undefined4 *)(lVar28 + 0x48c) = 8;
  }
  FUN_7103776390(&local_220,(undefined8 *)(*(long *)*plVar40 + 8),pppplVar24,ppppbVar25,param_5,
                 param_6,param_7,param_8);
  FUN_7101bcf520(param_1[4],&local_220,pppplVar24,ppppbVar25,param_5,param_6,param_7,param_8);
  uVar14 = local_218;
  local_220 = &PTR_FUN_710523d988;
  local_218 = 0;
  if (uVar14 != 0) {
    uVar16 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar14);
  }
  cVar2 = *(char *)param_3;
  cVar3 = *(char *)((long)param_3 + 1);
  cVar4 = *(char *)((long)param_3 + 2);
  cVar5 = *(char *)((long)param_3 + 3);
  cVar6 = *(char *)((long)param_3 + 4);
  cVar7 = *(char *)((long)param_3 + 5);
  FUN_7103776390(&local_230,(undefined8 *)(*(long *)param_1[1] + 8),pppplVar24,ppppbVar25,param_5,
                 param_6,param_7,param_8);
  puVar13 = (undefined1 *)param_1[5];
  FUN_7103776390(&local_210,&local_230,pppplVar24,ppppbVar25,param_5,param_6,param_7,param_8);
  local_1e8 = "in_menu";
  local_1d8 = (byte ********)0x71043ad648;
  local_c0 = (byte ********)&local_1f0;
  local_1f0 = (byte ********)((ulong)local_1f0 & 0xffffffff00000000);
  local_1e0._0_4_ = 1;
  local_b8 = (byte ****)0x2;
  FUN_7101b85d60((long)(puVar13 + 0x90),(long)&local_210,(long ****)&local_c0,ppppbVar25,param_5,
                 param_6,param_7,param_8);
  local_1f0 = (byte ********)0x0;
  local_1e8 = (char *)0x101;
  local_1e0 = (byte ********)CONCAT17(local_1e0._7_1_,0x1000100000001);
  local_1d8 = (byte ********)&DAT_41f0000000000000;
  local_1d0 = 0;
  local_1a0 = (long *)0x0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d0 = 0;
  FUN_710337df20((long)&local_1f0);
  local_1f0 = (byte ********)0x400000000;
  local_1d8 = (byte ********)((ulong)local_1d8 & 0xffffffff);
  local_1e8 = (char *)CONCAT71(local_1e8._1_7_,1);
  local_c0 = (byte ********)&PTR_FUN_71050abf70;
  local_a0 = &local_c0;
  FUN_7101989a30((long *)&local_c0,alStack_160);
  if (&local_c0 == local_a0) {
    pppppppbVar29 = (*local_a0)[4];
LAB_7101bd02f0:
    (*(code *)pppppppbVar29)();
  }
  else if (local_a0 != (byte *********)0x0) {
    pppppppbVar29 = (*local_a0)[5];
    goto LAB_7101bd02f0;
  }
  local_c0 = (byte ********)&PTR_FUN_71050abf70;
  local_a0 = &local_c0;
  FUN_7101989a30((long *)&local_c0,alStack_190);
  if (&local_c0 == local_a0) {
    pppppppbVar29 = (*local_a0)[4];
LAB_7101bd0334:
    (*(code *)pppppppbVar29)();
  }
  else if (local_a0 != (byte *********)0x0) {
    pppppppbVar29 = (*local_a0)[5];
    goto LAB_7101bd0334;
  }
  local_c0 = (byte ********)&PTR_FUN_71050abf70;
  local_a0 = &local_c0;
  FUN_7101989a30((long *)&local_c0,alStack_100);
  if (&local_c0 == local_a0) {
    pppppppbVar29 = (*local_a0)[4];
LAB_7101bd0378:
    (*(code *)pppppppbVar29)();
  }
  else if (local_a0 != (byte *********)0x0) {
    pppppppbVar29 = (*local_a0)[5];
    goto LAB_7101bd0378;
  }
  plVar17 = (long *)(puVar13 + 8);
  ppppppppbVar19 = (byte ********)&local_1f0;
  FUN_7103770b30(plVar17,&local_210,(long ****)"selector_option",(byte ****)ppppppppbVar19,param_5,
                 param_6,param_7,param_8);
  FUN_71037717d0(plVar17,0,"set_main_00",ppppppppbVar19,param_5,param_6,param_7,param_8);
  lVar28 = *(long *)(*(long *)(puVar13 + 8) + 0x1b8);
  if (lVar28 != 0) {
    lVar31 = *(long *)(puVar13 + 8) + 0x1b8;
    lVar33 = lVar31;
    lVar34 = lVar28;
    do {
      bVar11 = *(int *)(lVar34 + 0x20) < 0;
      if (!bVar11) {
        lVar33 = lVar34;
      }
      lVar34 = *(long *)(lVar34 + (ulong)bVar11 * 8);
    } while (lVar34 != 0);
    if (((lVar33 != lVar31) && (*(int *)(lVar33 + 0x20) < 1)) &&
       (plVar38 = *(long **)(lVar33 + 0x28), plVar38 != (long *)0x0)) {
      (**(code **)(*plVar38 + 0x1f8))(plVar38,cVar2 != '\0');
      (**(code **)(*plVar38 + 0x388))(plVar38,cVar2 == '\0',0);
      lVar31 = *plVar17 + 0x1b8;
      lVar28 = *(long *)(*plVar17 + 0x1b8);
    }
    lVar33 = lVar31;
    if (lVar28 != 0) {
      do {
        bVar11 = *(int *)(lVar28 + 0x20) < 0;
        if (!bVar11) {
          lVar33 = lVar28;
        }
        lVar28 = *(long *)(lVar28 + (ulong)bVar11 * 8);
      } while (lVar28 != 0);
      if (((lVar33 != lVar31) && (*(int *)(lVar33 + 0x20) < 1)) &&
         (plVar38 = *(long **)(lVar33 + 0x28), plVar38 != (long *)0x0)) {
        (**(code **)(*plVar38 + 0x208))(plVar38,0);
        (**(code **)(*plVar38 + 0x388))(plVar38,1,0);
      }
    }
  }
  pcVar22 = "set_main_01";
  FUN_71037717d0(plVar17,1,"set_main_01",ppppppppbVar19,param_5,param_6,param_7,param_8);
  lVar28 = *(long *)(*plVar17 + 0x1b8);
  if (lVar28 != 0) {
    lVar31 = *plVar17 + 0x1b8;
    lVar33 = lVar31;
    lVar34 = lVar28;
    do {
      if (0 < *(int *)(lVar34 + 0x20)) {
        lVar33 = lVar34;
      }
      lVar34 = *(long *)(lVar34 + (ulong)(*(int *)(lVar34 + 0x20) < 1) * 8);
    } while (lVar34 != 0);
    if (((lVar33 != lVar31) && (*(int *)(lVar33 + 0x20) < 2)) &&
       (plVar38 = *(long **)(lVar33 + 0x28), plVar38 != (long *)0x0)) {
      (**(code **)(*plVar38 + 0x1f8))(plVar38,cVar2 != '\0');
      pcVar22 = (char *)0x0;
      (**(code **)(*plVar38 + 0x388))(plVar38,cVar2 == '\0');
      lVar31 = *plVar17 + 0x1b8;
      lVar28 = *(long *)(*plVar17 + 0x1b8);
    }
    lVar33 = lVar31;
    if (lVar28 != 0) {
      do {
        if (0 < *(int *)(lVar28 + 0x20)) {
          lVar33 = lVar28;
        }
        lVar28 = *(long *)(lVar28 + (ulong)(*(int *)(lVar28 + 0x20) < 1) * 8);
      } while (lVar28 != 0);
      if (((lVar33 != lVar31) && (*(int *)(lVar33 + 0x20) < 2)) &&
         (plVar38 = *(long **)(lVar33 + 0x28), plVar38 != (long *)0x0)) {
        (**(code **)(*plVar38 + 0x208))(plVar38,0);
        pcVar22 = (char *)0x0;
        (**(code **)(*plVar38 + 0x388))(plVar38,1);
      }
    }
  }
  if (cVar2 == '\0') {
    FUN_710376b960(*plVar17);
  }
  if (alStack_100 == local_e0) {
    pcVar30 = *(code **)(*local_e0 + 0x20);
LAB_7101bd05ec:
    (*pcVar30)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101bd05ec;
  }
  if (alStack_130 == local_110) {
    pcVar30 = *(code **)(*local_110 + 0x20);
LAB_7101bd061c:
    (*pcVar30)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar30 = *(code **)(*local_110 + 0x28);
    goto LAB_7101bd061c;
  }
  if (alStack_160 == local_140) {
    pcVar30 = *(code **)(*local_140 + 0x20);
LAB_7101bd064c:
    (*pcVar30)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar30 = *(code **)(*local_140 + 0x28);
    goto LAB_7101bd064c;
  }
  if (alStack_190 == local_170) {
    pcVar30 = *(code **)(*local_170 + 0x20);
LAB_7101bd067c:
    (*pcVar30)();
  }
  else if (local_170 != (long *)0x0) {
    pcVar30 = *(code **)(*local_170 + 0x28);
    goto LAB_7101bd067c;
  }
  if ((long *)local_1c0 == local_1a0) {
    pcVar30 = *(code **)(*local_1a0 + 0x20);
LAB_7101bd06ac:
    (*pcVar30)();
  }
  else if (local_1a0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_1a0 + 0x28);
    goto LAB_7101bd06ac;
  }
  FUN_7103776390(&local_200,&local_210,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,param_6,
                 param_7,param_8);
  local_1f0 = (byte ********)0x0;
  local_1e8 = (char *)0x101;
  local_1e0 = (byte ********)CONCAT17(local_1e0._7_1_,0x1000100000001);
  local_1d8 = (byte ********)&DAT_41f0000000000000;
  local_1d0 = 0;
  local_1a0 = (long *)0x0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d0 = 0;
  FUN_710337df20((long)&local_1f0);
  uVar21 = local_1e8;
  local_1f0 = (byte ********)0x0;
  local_1e8 = (char *)CONCAT71(local_1e8._1_7_,1);
  uVar9 = local_1e8;
  local_1e8._3_5_ = SUB85(uVar21,3);
  local_1e8._0_3_ = CONCAT12(1,(short)uVar9);
  local_c0 = (byte ********)&PTR_FUN_71050abfb8;
  local_a0 = &local_c0;
  FUN_7101989a30((long *)&local_c0,alStack_160);
  if (&local_c0 == local_a0) {
    pppppppbVar29 = (*local_a0)[4];
LAB_7101bd0760:
    (*(code *)pppppppbVar29)();
  }
  else if (local_a0 != (byte *********)0x0) {
    pppppppbVar29 = (*local_a0)[5];
    goto LAB_7101bd0760;
  }
  plVar17 = (long *)(puVar13 + 0x20);
  ppppppppbVar19 = (byte ********)&local_1f0;
  FUN_7103770b30(plVar17,&local_200,(long ****)"option_csr_grp",(byte ****)ppppppppbVar19,param_5,
                 param_6,param_7,param_8);
  FUN_71037717d0(plVar17,0,"set_parts_csr_l",ppppppppbVar19,param_5,param_6,param_7,param_8);
  ppppbVar26 = (byte ****)0x0;
  FUN_7103771930(*(long *)(puVar13 + 0x20),0,(long ****)0x2,(byte ****)0x0,param_5,param_6,param_7,
                 param_8);
  FUN_7103771d60(&local_c0,*(long *)(puVar13 + 0x20),(long ****)0x0,ppppbVar26,param_5,param_6,
                 param_7,param_8);
  ppppbVar25 = local_b8;
  plVar38 = (long *)*local_b8;
  if (plVar38 != (long *)0x0) {
    (**(code **)(*plVar38 + 0x268))(plVar38,1,1);
  }
  local_c0 = (byte ********)&PTR_FUN_710523d9c8;
  local_b8 = (byte ****)0x0;
  if (ppppbVar25 != (byte ****)0x0) {
    FUN_710392eb40((ulong)ppppbVar25);
  }
  FUN_71037717d0(plVar17,1,"set_parts_csr_r",ppppbVar26,param_5,param_6,param_7,param_8);
  ppppbVar25 = (byte ****)0x0;
  FUN_7103771930(*plVar17,1,(long ****)0x3,(byte ****)0x0,param_5,param_6,param_7,param_8);
  pppppppppbVar23 = (byte *********)0x1;
  FUN_7103771d60(&local_c0,*plVar17,(long ****)0x1,ppppbVar25,param_5,param_6,param_7,param_8);
  ppppbVar26 = local_b8;
  plVar17 = (long *)*local_b8;
  uVar21 = extraout_x1_09;
  if (plVar17 != (long *)0x0) {
    pppppppppbVar23 = (byte *********)0x1;
    (**(code **)(*plVar17 + 0x268))(plVar17,1);
    uVar21 = extraout_x1_10;
  }
  local_c0 = (byte ********)&PTR_FUN_710523d9c8;
  local_b8 = (byte ****)0x0;
  if (ppppbVar26 != (byte ****)0x0) {
    FUN_710392eb40((ulong)ppppbVar26);
    uVar21 = extraout_x1_11;
  }
  local_b0 = 1;
  local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
  local_b8 = (byte ****)0x71042a384e;
  local_a8 = (byte ****)0x710425fde2;
  local_a0 = (byte *********)CONCAT44(local_a0._4_4_,2);
  local_98 = (byte ****)0x710438c824;
  FUN_7103776290(&local_80,uVar21,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  ppppbVar26 = local_78;
  if ((undefined ***)(puVar13 + 0x30) != &local_80) {
    **(undefined8 **)(puVar13 + 0x38) = *local_78;
    *(byte ****)(*(long *)(puVar13 + 0x38) + 8) = local_78[1];
    puVar12 = *(undefined8 **)(puVar13 + 0x38);
    if ((byte ****)puVar12 != local_78) {
      *(byte ***)puVar12[3] = *local_78[3];
      *(undefined8 *)(puVar12[3] + 8) = *(undefined8 *)((long)local_78[3] + 8);
      *(undefined8 *)(puVar12[3] + 0x10) = *(undefined8 *)((long)local_78[3] + 0x10);
      *(undefined8 *)(puVar12[3] + 0x18) = *(undefined8 *)((long)local_78[3] + 0x18);
    }
  }
  if ((undefined ***)(puVar13 + 0x40) != &local_80) {
    **(undefined8 **)(puVar13 + 0x48) = *local_78;
    *(byte ****)(*(long *)(puVar13 + 0x48) + 8) = local_78[1];
    puVar12 = *(undefined8 **)(puVar13 + 0x48);
    if ((byte ****)puVar12 != local_78) {
      *(byte ***)puVar12[3] = *local_78[3];
      *(undefined8 *)(puVar12[3] + 8) = *(undefined8 *)((long)local_78[3] + 8);
      *(undefined8 *)(puVar12[3] + 0x10) = *(undefined8 *)((long)local_78[3] + 0x10);
      *(undefined8 *)(puVar12[3] + 0x18) = *(undefined8 *)((long)local_78[3] + 0x18);
    }
  }
  if ((undefined ***)(puVar13 + 0x50) != &local_80) {
    **(undefined8 **)(puVar13 + 0x58) = *local_78;
    *(byte ****)(*(long *)(puVar13 + 0x58) + 8) = local_78[1];
    puVar12 = *(undefined8 **)(puVar13 + 0x58);
    if ((byte ****)puVar12 != local_78) {
      *(byte ***)puVar12[3] = *local_78[3];
      *(undefined8 *)(puVar12[3] + 8) = *(undefined8 *)((long)local_78[3] + 8);
      *(undefined8 *)(puVar12[3] + 0x10) = *(undefined8 *)((long)local_78[3] + 0x10);
      *(undefined8 *)(puVar12[3] + 0x18) = *(undefined8 *)((long)local_78[3] + 0x18);
    }
  }
  local_80 = &PTR_FUN_710523d988;
  local_78 = (byte ****)0x0;
  if (ppppbVar26 != (byte ****)0x0) {
    uVar14 = (ulong)ppppbVar26[3];
    ppppbVar26[2] = (byte ***)&PTR_FUN_710523d9a8;
    ppppbVar26[3] = (byte ***)0x0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40((ulong)ppppbVar26);
  }
  if (2 < (uint)local_c0) goto LAB_7101bd1e80;
  FUN_7103776640(&local_80,(long)&local_200,local_b8,pppppppppbVar23,ppppbVar25,param_5,param_6,
                 param_7,param_8);
  ppppbVar26 = local_78;
  if (2 < (uint)local_c0) goto LAB_7101bd1e80;
  if ((undefined ***)(puVar13 + (long)(int)(uint)local_c0 * 0x10 + 0x30) != &local_80) {
    local_78 = (byte ****)0x0;
    uVar14 = *(ulong *)(puVar13 + (long)(int)(uint)local_c0 * 0x10 + 0x38);
    *(byte *****)(puVar13 + (long)(int)(uint)local_c0 * 0x10 + 0x38) = ppppbVar26;
    if (uVar14 != 0) {
      uVar16 = *(ulong *)(uVar14 + 0x18);
      *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar14 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar14);
    }
  }
  ppppbVar26 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = (byte ****)0x0;
  if (ppppbVar26 != (byte ****)0x0) {
    pppbVar18 = ppppbVar26[3];
    ppppbVar26[2] = (byte ***)&PTR_FUN_710523d9a8;
    ppppbVar26[3] = (byte ***)0x0;
    if (pppbVar18 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar18);
    }
    FUN_710392eb40((ulong)ppppbVar26);
  }
  if (2 < local_b0) goto LAB_7101bd1e80;
  FUN_7103776640(&local_80,(long)&local_200,local_a8,pppppppppbVar23,ppppbVar25,param_5,param_6,
                 param_7,param_8);
  ppppbVar26 = local_78;
  if (2 < local_b0) goto LAB_7101bd1e80;
  if ((undefined ***)(puVar13 + (long)(int)local_b0 * 0x10 + 0x30) != &local_80) {
    local_78 = (byte ****)0x0;
    uVar14 = *(ulong *)(puVar13 + (long)(int)local_b0 * 0x10 + 0x38);
    *(byte *****)(puVar13 + (long)(int)local_b0 * 0x10 + 0x38) = ppppbVar26;
    if (uVar14 != 0) {
      uVar16 = *(ulong *)(uVar14 + 0x18);
      *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar14 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar14);
    }
  }
  ppppbVar26 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = (byte ****)0x0;
  if (ppppbVar26 != (byte ****)0x0) {
    pppbVar18 = ppppbVar26[3];
    ppppbVar26[2] = (byte ***)&PTR_FUN_710523d9a8;
    ppppbVar26[3] = (byte ***)0x0;
    if (pppbVar18 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar18);
    }
    FUN_710392eb40((ulong)ppppbVar26);
  }
  if (2 < (uint)local_a0) goto LAB_7101bd1e80;
  FUN_7103776640(&local_80,(long)&local_200,local_98,pppppppppbVar23,ppppbVar25,param_5,param_6,
                 param_7,param_8);
  ppppbVar26 = local_78;
  if (2 < (uint)local_a0) goto LAB_7101bd1e80;
  if ((undefined ***)(puVar13 + (long)(int)(uint)local_a0 * 0x10 + 0x30) != &local_80) {
    local_78 = (byte ****)0x0;
    uVar14 = *(ulong *)(puVar13 + (long)(int)(uint)local_a0 * 0x10 + 0x38);
    *(byte *****)(puVar13 + (long)(int)(uint)local_a0 * 0x10 + 0x38) = ppppbVar26;
    if (uVar14 != 0) {
      uVar16 = *(ulong *)(uVar14 + 0x18);
      *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar14 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar14);
    }
  }
  ppppbVar26 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = (byte ****)0x0;
  if (ppppbVar26 != (byte ****)0x0) {
    pppbVar18 = ppppbVar26[3];
    ppppbVar26[2] = (byte ***)&PTR_FUN_710523d9a8;
    ppppbVar26[3] = (byte ***)0x0;
    if (pppbVar18 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar18);
    }
    FUN_710392eb40((ulong)ppppbVar26);
  }
  puVar13[0x18] = 1;
  if (alStack_100 == local_e0) {
    pcVar30 = *(code **)(*local_e0 + 0x20);
LAB_7101bd0c10:
    (*pcVar30)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101bd0c10;
  }
  if (alStack_130 == local_110) {
    pcVar30 = *(code **)(*local_110 + 0x20);
LAB_7101bd0c40:
    (*pcVar30)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar30 = *(code **)(*local_110 + 0x28);
    goto LAB_7101bd0c40;
  }
  if (alStack_160 == local_140) {
    pcVar30 = *(code **)(*local_140 + 0x20);
LAB_7101bd0c70:
    (*pcVar30)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar30 = *(code **)(*local_140 + 0x28);
    goto LAB_7101bd0c70;
  }
  if (alStack_190 == local_170) {
    pcVar30 = *(code **)(*local_170 + 0x20);
LAB_7101bd0ca0:
    (*pcVar30)();
  }
  else if (local_170 != (long *)0x0) {
    pcVar30 = *(code **)(*local_170 + 0x28);
    goto LAB_7101bd0ca0;
  }
  if ((long *)local_1c0 == local_1a0) {
    pcVar30 = *(code **)(*local_1a0 + 0x20);
LAB_7101bd0cd0:
    (*pcVar30)();
  }
  else if (local_1a0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_1a0 + 0x28);
    goto LAB_7101bd0cd0;
  }
  uVar14 = local_1f8;
  local_200 = &PTR_FUN_710523d988;
  local_1f8 = 0;
  if (uVar14 != 0) {
    uVar16 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar14);
  }
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&DAT_00000088;
      pppppppppbVar23 = &local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bd0d54;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bd0d54:
  *puVar12 = &PTR_FUN_71050ac000;
  puVar12[1] = 0;
  puVar12[2] = 0;
  *(undefined2 *)(puVar12 + 3) = 0;
  *(undefined8 *)((long)puVar12 + 0x44) = 0;
  *(undefined8 *)((long)puVar12 + 0x3c) = 0;
  *(undefined4 *)((long)puVar12 + 0x5c) = 0;
  *(undefined8 *)((long)puVar12 + 0x54) = 0;
  *(undefined8 *)((long)puVar12 + 0x4c) = 0;
  *(undefined8 *)((long)puVar12 + 0x34) = 0;
  *(undefined8 *)((long)puVar12 + 0x2c) = 0;
  *(undefined8 *)((long)puVar12 + 0x24) = 0;
  *(undefined8 *)((long)puVar12 + 0x1c) = 0;
  puVar12[8] = &PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,param_7,
                           param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000020;
      pppppppppbVar23 = &local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,
                                   param_7,param_8), puVar15 != (undefined8 *)0x0))
      goto LAB_7101bd0de8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101bd0de8:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar12[9] = puVar15;
  puVar12[10] = &PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,param_7,
                           param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000020;
      pppppppppbVar23 = &local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,
                                   param_7,param_8), puVar15 != (undefined8 *)0x0))
      goto LAB_7101bd0e48;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101bd0e48:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar12[7] = &PTR_FUN_71050abdb0;
  puVar12[0xb] = puVar15;
  puVar12[0xc] = 0;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0;
  puVar12[0xd] = &PTR_FUN_710523d9e8;
  puVar12[0xe] = 0;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,param_7,
                           param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000018;
      pppppppppbVar23 = &local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,
                                   param_7,param_8), puVar15 != (undefined8 *)0x0))
      goto LAB_7101bd0ebc;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101bd0ebc:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  puVar12[0xe] = puVar15;
  puVar12[0xf] = &PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,param_7,
                           param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000018;
      pppppppppbVar23 = &local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,
                                   param_7,param_8), puVar15 != (undefined8 *)0x0))
      goto LAB_7101bd0f20;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101bd0f20:
  *(undefined1 *)(puVar15 + 2) = 1;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar12[0x10] = puVar15;
  puVar12[0xc] = &PTR_FUN_71050ab348;
  plVar17 = *(long **)(puVar13 + 0x78);
  *(undefined8 **)(puVar13 + 0x70) = puVar12 + 3;
  *(undefined8 **)(puVar13 + 0x78) = puVar12;
  if (plVar17 != (long *)0x0) {
    plVar38 = plVar17 + 1;
    do {
      lVar28 = *plVar38;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar11) {
        *plVar38 = lVar28 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_1e8 = (char *)0x0;
  local_1e0 = (byte ********)0x0;
  local_1f0 = (byte ********)0x0;
  ppppppppbVar19 = local_1f0;
  if (cVar3 != '\0') {
    ppppppppbVar19 =
         (byte ********)
         FUN_710392e290(0x10,4,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,param_7,param_8
                       );
    if (ppppppppbVar19 == (byte ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
        local_c0 = (byte ********)&DAT_00000004;
        pppppppppbVar23 = &local_c0;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
        if (((uVar14 & 1) != 0) &&
           (ppppppppbVar19 =
                 (byte ********)
                 FUN_710392e290(0x10,4,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,param_7
                                ,param_8), ppppppppbVar19 != (byte ********)0x0))
        goto LAB_7101bd0fe4;
      }
      ppppppppbVar19 = (byte ********)0x0;
    }
LAB_7101bd0fe4:
    local_1e8 = (char *)((long)ppppppppbVar19 + 4);
    *(undefined4 *)ppppppppbVar19 = 0;
  }
  local_1f0 = ppppppppbVar19;
  local_1e0 = (byte ********)local_1e8;
  if (cVar4 != '\0') {
    pppppppppbVar39 = (byte *********)((long)local_1e8 - (long)ppppppppbVar19);
    uVar16 = (long)pppppppppbVar39 >> 2;
    uVar14 = uVar16 + 1;
    if (uVar14 >> 0x3e != 0) goto LAB_7101bd1e84;
    if (uVar16 < 0x1fffffffffffffff) {
      if (uVar14 <= (ulong)((long)pppppppppbVar39 >> 1)) {
        uVar14 = (long)pppppppppbVar39 >> 1;
      }
      if (uVar14 != 0) {
        if (uVar14 >> 0x3e != 0) goto LAB_7101bd1e80;
        goto LAB_7101bd104c;
      }
      ppppppppbVar36 = (byte ********)0x0;
    }
    else {
      uVar14 = 0x3fffffffffffffff;
LAB_7101bd104c:
      ppppppppbVar20 = (byte ********)(uVar14 * 4);
      if (ppppppppbVar20 == (byte ********)0x0) {
        ppppppppbVar20 = (byte ********)0x1;
      }
      ppppppppbVar36 =
           (byte ********)
           FUN_710392e290(0x10,ppppppppbVar20,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,
                          param_7,param_8);
      if (ppppppppbVar36 == (byte ********)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
          pppppppppbVar23 = &local_c0;
          local_c0 = ppppppppbVar20;
          uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
          if (((uVar32 & 1) != 0) &&
             (ppppppppbVar36 =
                   (byte ********)
                   FUN_710392e290(0x10,ppppppppbVar20,(long ****)pppppppppbVar23,ppppbVar25,param_5,
                                  param_6,param_7,param_8), ppppppppbVar36 != (byte ********)0x0))
          goto LAB_7101bd10b8;
        }
        ppppppppbVar36 = (byte ********)0x0;
      }
    }
LAB_7101bd10b8:
    puVar1 = (undefined4 *)((long)ppppppppbVar36 + uVar16 * 4);
    ppppppppbVar20 = (byte ********)((long)ppppppppbVar36 + uVar14 * 4);
    ppppppppbVar35 = (byte ********)(puVar1 + 1);
    *puVar1 = 1;
    if (0 < (long)pppppppppbVar39) {
      memcpy(ppppppppbVar36,ppppppppbVar19,(size_t)pppppppppbVar39);
      pppppppppbVar23 = pppppppppbVar39;
    }
    local_1f0 = ppppppppbVar36;
    local_1e8 = (char *)ppppppppbVar35;
    local_1e0 = ppppppppbVar20;
    if (ppppppppbVar19 != (byte ********)0x0) {
      FUN_710392eb40((ulong)ppppppppbVar19);
    }
  }
  ppppppppbVar20 = local_1f0;
  ppppppppbVar19 = local_1f0;
  if (cVar5 != '\0') {
    if (local_1e8 < local_1e0) {
      *(undefined4 *)local_1e8 = 2;
      local_1e8 = (char *)((long)local_1e8 + 4);
    }
    else {
      pppppppppbVar39 = (byte *********)((long)local_1e8 - (long)local_1f0);
      uVar14 = ((long)pppppppppbVar39 >> 2) + 1;
      if (uVar14 >> 0x3e != 0) goto LAB_7101bd1e84;
      if ((ulong)((long)local_1e0 - (long)local_1f0 >> 2) < 0x1fffffffffffffff) {
        uVar16 = (long)local_1e0 - (long)local_1f0 >> 1;
        if (uVar14 <= uVar16) {
          uVar14 = uVar16;
        }
        if (uVar14 != 0) {
          if (uVar14 >> 0x3e != 0) goto LAB_7101bd1e80;
          goto LAB_7101bd1174;
        }
LAB_7101bd11d4:
        ppppppppbVar19 = (byte ********)0x0;
      }
      else {
        uVar14 = 0x3fffffffffffffff;
LAB_7101bd1174:
        ppppppppbVar36 = (byte ********)(uVar14 * 4);
        if (ppppppppbVar36 == (byte ********)0x0) {
          ppppppppbVar36 = (byte ********)0x1;
        }
        ppppppppbVar19 =
             (byte ********)
             FUN_710392e290(0x10,ppppppppbVar36,(long ****)pppppppppbVar23,ppppbVar25,param_5,
                            param_6,param_7,param_8);
        if (ppppppppbVar19 == (byte ********)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
            pppppppppbVar23 = &local_c0;
            local_c0 = ppppppppbVar36;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
            if (((uVar16 & 1) != 0) &&
               (ppppppppbVar19 =
                     (byte ********)
                     FUN_710392e290(0x10,ppppppppbVar36,(long ****)pppppppppbVar23,ppppbVar25,
                                    param_5,param_6,param_7,param_8),
               ppppppppbVar19 != (byte ********)0x0)) goto LAB_7101bd11d8;
          }
          goto LAB_7101bd11d4;
        }
      }
LAB_7101bd11d8:
      puVar1 = (undefined4 *)((long)ppppppppbVar19 + ((long)pppppppppbVar39 >> 2) * 4);
      ppppppppbVar36 = (byte ********)((long)ppppppppbVar19 + uVar14 * 4);
      ppppppppbVar35 = (byte ********)(puVar1 + 1);
      *puVar1 = 2;
      if (0 < (long)pppppppppbVar39) {
        memcpy(ppppppppbVar19,ppppppppbVar20,(size_t)pppppppppbVar39);
        pppppppppbVar23 = pppppppppbVar39;
      }
      local_1e8 = (char *)ppppppppbVar35;
      local_1e0 = ppppppppbVar36;
      if (ppppppppbVar20 != (byte ********)0x0) {
        local_1f0 = ppppppppbVar19;
        FUN_710392eb40((ulong)ppppppppbVar20);
        ppppppppbVar19 = local_1f0;
      }
    }
  }
  ppppppppbVar20 = ppppppppbVar19;
  if (cVar6 != '\0') {
    if (local_1e8 < local_1e0) {
      *(undefined4 *)local_1e8 = 3;
      local_1e8 = (char *)((long)local_1e8 + 4);
    }
    else {
      pppppppppbVar39 = (byte *********)((long)local_1e8 - (long)ppppppppbVar19);
      uVar14 = ((long)pppppppppbVar39 >> 2) + 1;
      local_1f0 = ppppppppbVar19;
      if (uVar14 >> 0x3e != 0) goto LAB_7101bd1e84;
      if ((ulong)((long)local_1e0 - (long)ppppppppbVar19 >> 2) < 0x1fffffffffffffff) {
        uVar16 = (long)local_1e0 - (long)ppppppppbVar19 >> 1;
        if (uVar14 <= uVar16) {
          uVar14 = uVar16;
        }
        if (uVar14 != 0) {
          if (uVar14 >> 0x3e != 0) goto LAB_7101bd1e80;
          goto LAB_7101bd129c;
        }
LAB_7101bd12fc:
        ppppppppbVar20 = (byte ********)0x0;
      }
      else {
        uVar14 = 0x3fffffffffffffff;
LAB_7101bd129c:
        ppppppppbVar36 = (byte ********)(uVar14 * 4);
        if (ppppppppbVar36 == (byte ********)0x0) {
          ppppppppbVar36 = (byte ********)0x1;
        }
        ppppppppbVar20 =
             (byte ********)
             FUN_710392e290(0x10,ppppppppbVar36,(long ****)pppppppppbVar23,ppppbVar25,param_5,
                            param_6,param_7,param_8);
        if (ppppppppbVar20 == (byte ********)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
            pppppppppbVar23 = &local_c0;
            local_c0 = ppppppppbVar36;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
            if (((uVar16 & 1) != 0) &&
               (ppppppppbVar20 =
                     (byte ********)
                     FUN_710392e290(0x10,ppppppppbVar36,(long ****)pppppppppbVar23,ppppbVar25,
                                    param_5,param_6,param_7,param_8),
               ppppppppbVar20 != (byte ********)0x0)) goto LAB_7101bd1300;
          }
          goto LAB_7101bd12fc;
        }
      }
LAB_7101bd1300:
      puVar1 = (undefined4 *)((long)ppppppppbVar20 + ((long)pppppppppbVar39 >> 2) * 4);
      ppppppppbVar36 = (byte ********)((long)ppppppppbVar20 + uVar14 * 4);
      ppppppppbVar35 = (byte ********)(puVar1 + 1);
      *puVar1 = 3;
      if (0 < (long)pppppppppbVar39) {
        memcpy(ppppppppbVar20,ppppppppbVar19,(size_t)pppppppppbVar39);
        pppppppppbVar23 = pppppppppbVar39;
      }
      local_1e8 = (char *)ppppppppbVar35;
      local_1e0 = ppppppppbVar36;
      if (ppppppppbVar19 != (byte ********)0x0) {
        local_1f0 = ppppppppbVar20;
        FUN_710392eb40((ulong)ppppppppbVar19);
        ppppppppbVar20 = local_1f0;
      }
    }
  }
  local_1f0 = ppppppppbVar20;
  if (cVar7 != '\0') {
    if (local_1e8 < local_1e0) {
      *(undefined4 *)local_1e8 = 4;
      local_1e8 = (char *)((long)local_1e8 + 4);
    }
    else {
      pppppppppbVar39 = (byte *********)((long)local_1e8 - (long)ppppppppbVar20);
      uVar14 = ((long)pppppppppbVar39 >> 2) + 1;
      if (uVar14 >> 0x3e != 0) {
LAB_7101bd1e84:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_1e0 - (long)ppppppppbVar20 >> 2) < 0x1fffffffffffffff) {
        uVar16 = (long)local_1e0 - (long)ppppppppbVar20 >> 1;
        if (uVar14 <= uVar16) {
          uVar14 = uVar16;
        }
        if (uVar14 != 0) {
          if (uVar14 >> 0x3e != 0) goto LAB_7101bd1e80;
          goto LAB_7101bd13bc;
        }
LAB_7101bd141c:
        ppppppppbVar36 = (byte ********)0x0;
      }
      else {
        uVar14 = 0x3fffffffffffffff;
LAB_7101bd13bc:
        ppppppppbVar19 = (byte ********)(uVar14 * 4);
        if (ppppppppbVar19 == (byte ********)0x0) {
          ppppppppbVar19 = (byte ********)0x1;
        }
        ppppppppbVar36 =
             (byte ********)
             FUN_710392e290(0x10,ppppppppbVar19,(long ****)pppppppppbVar23,ppppbVar25,param_5,
                            param_6,param_7,param_8);
        if (ppppppppbVar36 == (byte ********)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
            pppppppppbVar23 = &local_c0;
            local_c0 = ppppppppbVar19;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
            if (((uVar16 & 1) != 0) &&
               (ppppppppbVar36 =
                     (byte ********)
                     FUN_710392e290(0x10,ppppppppbVar19,(long ****)pppppppppbVar23,ppppbVar25,
                                    param_5,param_6,param_7,param_8),
               ppppppppbVar36 != (byte ********)0x0)) goto LAB_7101bd1420;
          }
          goto LAB_7101bd141c;
        }
      }
LAB_7101bd1420:
      puVar1 = (undefined4 *)((long)ppppppppbVar36 + ((long)pppppppppbVar39 >> 2) * 4);
      ppppppppbVar19 = (byte ********)((long)ppppppppbVar36 + uVar14 * 4);
      ppppppppbVar35 = (byte ********)(puVar1 + 1);
      *puVar1 = 4;
      if (0 < (long)pppppppppbVar39) {
        memcpy(ppppppppbVar36,ppppppppbVar20,(size_t)pppppppppbVar39);
        pppppppppbVar23 = pppppppppbVar39;
      }
      local_1f0 = ppppppppbVar36;
      local_1e8 = (char *)ppppppppbVar35;
      local_1e0 = ppppppppbVar19;
      if (ppppppppbVar20 != (byte ********)0x0) {
        FUN_710392eb40((ulong)ppppppppbVar20);
      }
    }
  }
  pcVar37 = *(char **)(puVar13 + 0x70);
  FUN_7103776390(&local_c0,&local_210,(long ****)pppppppppbVar23,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  pcVar22 = "set_main_00";
  ppppppppbVar19 = (byte ********)&local_1f0;
  FUN_7101bc9cc0(pcVar37,(long)&local_c0,(byte ****)"set_main_00",(byte ****)ppppppppbVar19,param_5,
                 param_6,param_7,param_8);
  ppppbVar25 = local_b8;
  local_c0 = (byte ********)&PTR_FUN_710523d988;
  local_b8 = (byte ****)0x0;
  if (ppppbVar25 != (byte ****)0x0) {
    pppbVar18 = ppppbVar25[3];
    ppppbVar25[2] = (byte ***)&PTR_FUN_710523d9a8;
    ppppbVar25[3] = (byte ***)0x0;
    if (pppbVar18 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar18);
    }
    FUN_710392eb40((ulong)ppppbVar25);
  }
  if (local_1f0 != (byte ********)0x0) {
    local_1e8 = (char *)local_1f0;
    FUN_710392eb40((ulong)local_1f0);
  }
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,param_6,
                           param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_1f0 = (byte ********)&DAT_00000088;
      pcVar22 = (char *)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,
                                   param_6,param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bd151c;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bd151c:
  *puVar12 = &PTR_FUN_71050ac000;
  puVar12[1] = 0;
  puVar12[2] = 0;
  *(undefined2 *)(puVar12 + 3) = 0;
  *(undefined8 *)((long)puVar12 + 0x44) = 0;
  *(undefined8 *)((long)puVar12 + 0x3c) = 0;
  *(undefined4 *)((long)puVar12 + 0x5c) = 0;
  *(undefined8 *)((long)puVar12 + 0x54) = 0;
  *(undefined8 *)((long)puVar12 + 0x4c) = 0;
  *(undefined8 *)((long)puVar12 + 0x34) = 0;
  *(undefined8 *)((long)puVar12 + 0x2c) = 0;
  *(undefined8 *)((long)puVar12 + 0x24) = 0;
  *(undefined8 *)((long)puVar12 + 0x1c) = 0;
  puVar12[8] = &PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,param_6,
                           param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000020;
      pcVar22 = (char *)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar14 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,
                                   param_6,param_7,param_8), puVar15 != (undefined8 *)0x0))
      goto LAB_7101bd15b0;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101bd15b0:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar12[9] = puVar15;
  puVar12[10] = &PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,param_6,
                           param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000020;
      pcVar22 = (char *)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar14 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,
                                   param_6,param_7,param_8), puVar15 != (undefined8 *)0x0))
      goto LAB_7101bd1610;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101bd1610:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar12[7] = &PTR_FUN_71050abdb0;
  puVar12[0xb] = puVar15;
  puVar12[0xc] = 0;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0;
  puVar12[0xd] = &PTR_FUN_710523d9e8;
  puVar12[0xe] = 0;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,param_6,
                           param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000018;
      pcVar22 = (char *)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar14 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,
                                   param_6,param_7,param_8), puVar15 != (undefined8 *)0x0))
      goto LAB_7101bd1684;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101bd1684:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  puVar12[0xe] = puVar15;
  puVar12[0xf] = &PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,param_6,
                           param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_1f0 = (byte ********)&SUB_00000018;
      pcVar22 = (char *)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar14 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,
                                   param_6,param_7,param_8), puVar15 != (undefined8 *)0x0))
      goto LAB_7101bd16e8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101bd16e8:
  *(undefined1 *)(puVar15 + 2) = 1;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar12[0x10] = puVar15;
  puVar12[0xc] = &PTR_FUN_71050ab348;
  plVar17 = *(long **)(puVar13 + 0x88);
  *(undefined8 **)(puVar13 + 0x80) = puVar12 + 3;
  *(undefined8 **)(puVar13 + 0x88) = puVar12;
  if (plVar17 != (long *)0x0) {
    plVar38 = plVar17 + 1;
    do {
      lVar28 = *plVar38;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar11) {
        *plVar38 = lVar28 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      std::__shared_weak_count::__release_weak();
    }
  }
  pcVar37 = *(char **)(puVar13 + 0x80);
  FUN_7103776390(&local_80,&local_210,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,param_6,
                 param_7,param_8);
  local_1f0 = (byte ********)
              FUN_710392e290(0x10,8,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,param_6,
                             param_7,param_8);
  if (local_1f0 == (byte ********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_84 = 0;
      local_1f0 = (byte ********)&DAT_00000008;
      ppppppppbVar20 = (byte ********)&local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
      if (((uVar14 & 1) != 0) &&
         (local_1f0 = (byte ********)
                      FUN_710392e290(0x10,8,(long ****)ppppppppbVar20,(byte ****)ppppppppbVar19,
                                     param_5,param_6,param_7,param_8),
         local_1f0 != (byte ********)0x0)) goto LAB_7101bd17a0;
    }
    local_1f0 = (byte ********)0x0;
  }
LAB_7101bd17a0:
  local_1e8 = (char *)(local_1f0 + 1);
  *local_1f0 = (byte *******)0x600000005;
  pcVar22 = "set_main_01";
  ppppppppbVar19 = (byte ********)&local_1f0;
  local_1e0 = (byte ********)local_1e8;
  FUN_7101bc9cc0(pcVar37,(long)&local_80,(byte ****)"set_main_01",(byte ****)ppppppppbVar19,param_5,
                 param_6,param_7,param_8);
  if (local_1f0 != (byte ********)0x0) {
    local_1e8 = (char *)local_1f0;
    FUN_710392eb40((ulong)local_1f0);
  }
  ppppbVar25 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = (byte ****)0x0;
  if (ppppbVar25 != (byte ****)0x0) {
    pppbVar18 = ppppbVar25[3];
    ppppbVar25[2] = (byte ***)&PTR_FUN_710523d9a8;
    ppppbVar25[3] = (byte ***)0x0;
    if (pppbVar18 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar18);
    }
    FUN_710392eb40((ulong)ppppbVar25);
  }
  if (cVar2 != '\0') {
    uVar21 = *(undefined8 *)(puVar13 + 0x70);
    plVar17 = *(long **)(puVar13 + 0x78);
    if (plVar17 != (long *)0x0) {
      plVar38 = plVar17 + 1;
      do {
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar11) {
          *plVar38 = *plVar38 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar38 = plVar17 + 2;
      do {
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar11) {
          *plVar38 = *plVar38 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar28 = *(long *)(puVar13 + 0x68);
    *(undefined8 *)(puVar13 + 0x60) = uVar21;
    *(long **)(puVar13 + 0x68) = plVar17;
    if (lVar28 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    if (plVar17 != (long *)0x0) {
      plVar38 = plVar17 + 1;
      do {
        lVar28 = *plVar38;
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar11) {
          *plVar38 = lVar28 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar28 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  (**(code **)(**(long **)(puVar13 + 8) + 0x60))(*(long **)(puVar13 + 8),0);
  FUN_710376b960(*(long *)(puVar13 + 8));
  (**(code **)(**(long **)(puVar13 + 0x20) + 0x60))(*(long **)(puVar13 + 0x20),0);
  uVar14 = local_208;
  *puVar13 = 1;
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar14 != 0) {
    uVar16 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar14);
  }
  uVar14 = local_228;
  local_230 = &PTR_FUN_710523d988;
  local_228 = 0;
  if (uVar14 != 0) {
    uVar16 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar14);
  }
  FUN_7103776390(&local_240,(undefined8 *)(*(long *)param_1[1] + 8),(long ****)pcVar22,
                 (byte ****)ppppppppbVar19,param_5,param_6,param_7,param_8);
  ppppppppbVar36 = (byte ********)param_1[6];
  FUN_7103776390(&local_c0,&local_240,(long ****)pcVar22,(byte ****)ppppppppbVar19,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_1f0,(long)&local_c0,(long ****)"set_txt_timer",pcVar22,ppppppppbVar19,
                 param_5,param_6,param_7,param_8);
  ppppppppbVar20 = (byte ********)local_1e8;
  if ((byte *********)ppppppppbVar36 != &local_1f0) {
    local_1e8 = (char *)0x0;
    pppppppbVar29 = ppppppppbVar36[1];
    ppppppppbVar36[1] = (byte *******)ppppppppbVar20;
    if (pppppppbVar29 != (byte *******)0x0) {
      FUN_710392eb40((ulong)pppppppbVar29);
    }
  }
  ppppppppbVar20 = (byte ********)local_1e8;
  local_1f0 = (byte ********)&PTR_FUN_710523d9a8;
  local_1e8 = (char *)0x0;
  if (ppppppppbVar20 != (byte ********)0x0) {
    FUN_710392eb40((ulong)ppppppppbVar20);
  }
  ppppbVar25 = local_b8;
  local_c0 = (byte ********)&PTR_FUN_710523d988;
  local_b8 = (byte ****)0x0;
  if (ppppbVar25 != (byte ****)0x0) {
    uVar14 = *(ulong *)((long)ppppbVar25 + 0x18);
    *(undefined ***)((long)ppppbVar25 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppppbVar25 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40((ulong)ppppbVar25);
  }
  uVar14 = local_238;
  local_240 = &PTR_FUN_710523d988;
  local_238 = 0;
  if (uVar14 != 0) {
    uVar16 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar14);
  }
  FUN_7103776390(&local_250,(undefined8 *)(*(long *)*plVar40 + 8),(long ****)pcVar22,
                 (byte ****)ppppppppbVar19,param_5,param_6,param_7,param_8);
  pppplVar24 = (long ****)0x1;
  FUN_7101bcdd20((undefined4 *)param_1[7],&local_250,(long *****)0x1,(byte ****)ppppppppbVar19,
                 param_5,param_6,param_7,param_8);
  uVar14 = local_248;
  local_250 = &PTR_FUN_710523d988;
  local_248 = 0;
  if (uVar14 != 0) {
    uVar16 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar14);
  }
  FUN_7103776390(&local_260,(undefined8 *)(*(long *)param_1[1] + 8),pppplVar24,
                 (byte ****)ppppppppbVar19,param_5,param_6,param_7,param_8);
  pppplVar24 = *(long *****)(*param_1 + 0x78);
  ppppbVar25 = (byte ****)0x2;
  pppplVar27 = (long ****)0x2;
  FUN_7101bcc690((long *)param_1[8],&local_260,pppplVar24,(byte ****)0x2,(long ****)0x2,param_6,
                 param_7,param_8);
  uVar14 = local_258;
  local_260 = &PTR_FUN_710523d988;
  local_258 = 0;
  if (uVar14 != 0) {
    uVar16 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar14);
  }
  FUN_7103776640(&local_270,*(long *)param_1[1] + 8,(byte ****)"set_parts_header",pppplVar24,
                 ppppbVar25,pppplVar27,param_6,param_7,param_8);
  local_1e8 = "set_txt_rule";
  local_1d8 = (byte ********)0x710437c772;
  local_1c8 = "set_band_color_00";
  local_1f0 = (byte ********)((ulong)local_1f0 & 0xffffffff00000000);
  local_1e0._0_4_ = 1;
  local_1d0 = 2;
  local_1c0[0] = 3;
  local_1b8 = "set_band_color_01";
  local_b8 = (byte ****)0x4;
  local_c0 = (byte ********)&local_1f0;
  FUN_7101b8b370((long)(param_1 + 10),(long)&local_270,(long ****)&local_c0,ppppbVar25,pppplVar27,
                 param_6,param_7,param_8);
  local_1e8 = &DAT_7104421055;
  local_1d8 = (byte ********)&DAT_710438b28f;
  pppppppppbVar23 = &local_c0;
  local_1f0 = (byte ********)((ulong)local_1f0 & 0xffffffff00000000);
  local_1e0 = (byte ********)CONCAT44(local_1e0._4_4_,1);
  local_1d0 = 2;
  local_1c8 = "out";
  local_1c0[0] = 3;
  local_1b8 = "hide";
  local_b8 = (byte ****)&DAT_00000004;
  local_c0 = (byte ********)&local_1f0;
  FUN_7101bce9f0((long)(param_1 + 0x13),(long)&local_270,(long ****)pppppppppbVar23,ppppbVar25,
                 pppplVar27,param_6,param_7,param_8);
  uVar14 = local_268;
  local_270 = &PTR_FUN_710523d988;
  local_268 = 0;
  if (uVar14 != 0) {
    uVar16 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar14);
  }
  lVar28 = *(long *)*plVar40;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)pppppppppbVar23,ppppbVar25,pppplVar27,param_6,
                           param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (byte ********)((ulong)local_c0 & 0xffffffff00000000);
      local_1f0 = (byte ********)&DAT_00000010;
      pppppppppbVar23 = &local_1f0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)pppppppppbVar23,ppppbVar25,pppplVar27,
                                   param_6,param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101bd1bbc;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bd1bbc:
  *puVar12 = "btn_keyhelp_skill";
  puVar12[1] = "set_txt_icon";
  local_1f0 = (byte ********)((ulong)local_1f0 & 0xffffffff00000000);
  ppppppppbVar19 =
       (byte ********)
       FUN_710392e290(0x10,0x10,(long ****)pppppppppbVar23,ppppbVar25,pppplVar27,param_6,param_7,
                      param_8);
  if (ppppppppbVar19 == (byte ********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_c0 = (byte ********)&DAT_00000010;
      pppppppppbVar23 = &local_c0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar14 & 1) != 0) &&
         (ppppppppbVar19 =
               (byte ********)
               FUN_710392e290(0x10,0x10,(long ****)pppppppppbVar23,ppppbVar25,pppplVar27,param_6,
                              param_7,param_8), ppppppppbVar19 != (byte ********)0x0))
      goto LAB_7101bd1c28;
    }
    ppppppppbVar19 = (byte ********)0x0;
  }
LAB_7101bd1c28:
  local_1e0 = ppppppppbVar19 + 2;
  pppppppbVar29 = (byte *******)puVar12[1];
  *ppppppppbVar19 = (byte *******)*puVar12;
  ppppppppbVar19[1] = pppppppbVar29;
  local_1e8 = (char *)ppppppppbVar19;
  local_1d8 = local_1e0;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)pppppppppbVar23,ppppbVar25,pppplVar27,param_6,
                           param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_c0 = (byte ********)&SUB_00000020;
      pppppppppbVar23 = &local_c0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar14 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)pppppppppbVar23,ppppbVar25,pppplVar27,
                                   param_6,param_7,param_8), puVar15 != (undefined8 *)0x0))
      goto LAB_7101bd1c90;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101bd1c90:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined8 *)param_1[0x1e] = 0;
  *(undefined8 *)(param_1[0x1e] + 8) = puVar15[1];
  *(undefined8 *)(param_1[0x1e] + 0x10) = puVar15[2];
  *(undefined8 *)(param_1[0x1e] + 0x18) = puVar15[3];
  if (puVar15 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar15);
  }
  bVar11 = (int)local_1f0 == 0;
  if (bVar11) {
    FUN_7103776390(&local_c0,(undefined8 *)(lVar28 + 8),(long ****)pppppppppbVar23,ppppbVar25,
                   pppplVar27,param_6,param_7,param_8);
    if ((long)local_1e0 - (long)local_1e8 != 0) {
      uVar14 = 0;
      uVar16 = (long)local_1e0 - (long)local_1e8 >> 3;
      do {
        uVar32 = (long)local_1e0 - (long)local_1e8 >> 3;
        if (uVar14 == uVar16 - 1) {
          if (uVar32 <= uVar14) {
LAB_7101bd1e78:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          FUN_7103776910(&local_80,(long)&local_c0,
                         (long ****)*(byte ********)((long)local_1e8 + uVar14 * 8),pppppppppbVar23,
                         ppppbVar25,pppplVar27,param_6,param_7,param_8);
          ppppbVar26 = local_78;
          bVar11 = (int)local_1f0 != 0;
          if (bVar11) goto LAB_7101bd1e80;
          if ((undefined ***)(param_1 + 0x1d) != &local_80) {
            local_78 = (byte ****)0x0;
            uVar16 = param_1[0x1e];
            param_1[0x1e] = (long)ppppbVar26;
            if (uVar16 != 0) {
              FUN_710392eb40(uVar16);
            }
          }
          ppppbVar26 = local_78;
          local_80 = &PTR_FUN_710523d9a8;
          local_78 = (byte ****)0x0;
          if (ppppbVar26 != (byte ****)0x0) {
            FUN_710392eb40((ulong)ppppbVar26);
          }
        }
        else {
          if (uVar32 <= uVar14) goto LAB_7101bd1e78;
          FUN_7103776640(&local_80,(long)&local_c0,
                         (byte ****)*(byte ********)((long)local_1e8 + uVar14 * 8),pppppppppbVar23,
                         ppppbVar25,pppplVar27,param_6,param_7,param_8);
          ppppbVar10 = local_78;
          ppppbVar26 = local_b8;
          local_78 = (byte ****)0x0;
          local_b8 = ppppbVar10;
          if (ppppbVar26 != (byte ****)0x0) {
            pppbVar18 = ppppbVar26[3];
            ppppbVar26[2] = (byte ***)&PTR_FUN_710523d9a8;
            ppppbVar26[3] = (byte ***)0x0;
            if (pppbVar18 != (byte ***)0x0) {
              FUN_710392eb40((ulong)pppbVar18);
            }
            FUN_710392eb40((ulong)ppppbVar26);
          }
          local_80 = &PTR_FUN_710523d988;
          local_78 = (byte ****)0x0;
        }
        uVar14 = uVar14 + 1;
        uVar16 = (long)local_1e0 - (long)local_1e8 >> 3;
      } while (uVar14 < uVar16);
    }
    ppppbVar26 = local_b8;
    local_c0 = (byte ********)&PTR_FUN_710523d988;
    local_b8 = (byte ****)0x0;
    if (ppppbVar26 != (byte ****)0x0) {
      pppbVar18 = ppppbVar26[3];
      ppppbVar26[2] = (byte ***)&PTR_FUN_710523d9a8;
      ppppbVar26[3] = (byte ***)0x0;
      if (pppbVar18 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar18);
      }
      FUN_710392eb40((ulong)ppppbVar26);
    }
    if ((byte ********)local_1e8 != (byte ********)0x0) {
      local_1e0 = (byte ********)local_1e8;
      FUN_710392eb40((ulong)local_1e8);
    }
    if (puVar12 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar12);
    }
    local_1e8 = &DAT_7104421055;
    local_c0 = (byte ********)&local_1f0;
    local_1f0 = (byte ********)((ulong)local_1f0 & 0xffffffff00000000);
    local_1e0 = (byte ********)CONCAT44(local_1e0._4_4_,1);
    local_1d8 = (byte ********)&DAT_710428ff7d;
    local_b8 = (byte ****)0x2;
    FUN_7101b85d60((long)(param_1 + 0x1f),*(long *)*plVar40 + 8,(long ****)&local_c0,ppppbVar25,
                   pppplVar27,param_6,param_7,param_8);
    return;
  }
LAB_7101bd1e80:
                    /* WARNING: Subroutine does not return */
  abort();
}

