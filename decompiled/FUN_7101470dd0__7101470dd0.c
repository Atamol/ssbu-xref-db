// addr:      7101470dd0
// offset:    0x1470dd0
// name:      FUN_7101470dd0
// mangled:   
// signature: undefined __cdecl FUN_7101470dd0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_7101470dd0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined **ppuVar12;
  long *********ppppppppplVar13;
  long ****pppplVar14;
  byte ****ppppbVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long *plVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined1 auVar28 [16];
  undefined **local_80;
  ulong local_78;
  long ***local_70;
  undefined8 *local_68;
  
  uVar23 = *(undefined8 *)(param_1 + 0x10);
  puVar6 = (undefined8 *)FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&DAT_00000088;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101470e54;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101470e54:
  *puVar6 = &PTR_FUN_71050ab198;
  puVar6[1] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0x1ffffffff;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined1 *)(puVar6 + 0xb) = 0;
  puVar6[0xf] = uVar23;
  *(undefined1 *)(puVar6 + 0xe) = 1;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar8 = (undefined8 *)FUN_710392e290(0x10,0x328,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)0x328;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x328,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_7101470edc;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101470edc:
  puVar26 = puVar8 + 1;
  *puVar8 = uVar23;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar23 = extraout_x1;
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&DAT_00000008;
      param_3 = &local_70;
      auVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      uVar23 = auVar28._8_8_;
      if (((auVar28._0_8_ & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar23 = extraout_x1_00, puVar9 != (undefined8 *)0x0)) goto LAB_7101470f40;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101470f40:
  FUN_7103773200(puVar9,uVar23,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar8[1] = puVar9;
  puVar8[0x1a] = 0;
  puVar8[0x1b] = 0;
  puVar8[0x18] = 0;
  puVar8[0x19] = 0;
  puVar8[3] = 0;
  puVar8[0x16] = 0;
  puVar8[0x17] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[2] = &PTR_FUN_710523d9e8;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101470fe8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101470fe8:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[4] = &PTR_FUN_710523d9e8;
  puVar8[3] = puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101471058;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101471058:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[6] = &PTR_FUN_710523d9e8;
  puVar8[5] = puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_71014710c4;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71014710c4:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[8] = &PTR_FUN_710523d9e8;
  puVar8[7] = puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101471134;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101471134:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[10] = &PTR_FUN_710523d9e8;
  puVar8[9] = puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_71014711a0;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71014711a0:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0xc] = &PTR_FUN_710523d9e8;
  puVar8[0xb] = puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101471210;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101471210:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  pppplVar16 = (long ****)(puVar8 + 0xe);
  *pppplVar16 = (long ***)&PTR_FUN_710523d9e8;
  puVar8[0xd] = puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_710147127c;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710147127c:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0x10] = &PTR_FUN_710523d9e8;
  puVar8[0xf] = puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_71014712ec;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71014712ec:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0x12] = &PTR_FUN_710523d9e8;
  puVar8[0x11] = puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101471358;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101471358:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  pppplVar17 = (long ****)(puVar8 + 0x14);
  *pppplVar17 = (long ***)&PTR_FUN_710523d9e8;
  puVar8[0x13] = puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_71014713c8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71014713c8:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0x16] = &PTR_FUN_710523d9e8;
  puVar8[0x15] = puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101471434;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101471434:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0x18] = &PTR_FUN_710523d9e8;
  puVar8[0x17] = puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_71014714a4;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71014714a4:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0x1a] = &PTR_FUN_710523d9e8;
  puVar8[0x19] = puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101471510;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101471510:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar8[0x1c] = &PTR_FUN_710523d9a8;
  puVar8[0x1b] = puVar9;
  puVar8[0x1d] = 0;
  puVar8[0x20] = 0;
  puVar8[0x21] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x1f] = 0;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101471590;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101471590:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x1e] = &PTR_FUN_710523d9a8;
  puVar8[0x1d] = puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_71014715f8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71014715f8:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x1f] = puVar9;
  puVar8[0x20] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101471658;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101471658:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x21] = puVar9;
  puVar8[0x24] = 0;
  puVar8[0x25] = 0;
  puVar8[0x22] = &PTR_FUN_710523d9a8;
  puVar8[0x23] = 0;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_71014716c0;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71014716c0:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x23] = puVar9;
  puVar8[0x24] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101471720;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101471720:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x25] = puVar9;
  puVar8[0x26] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101471780;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101471780:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x27] = puVar9;
  puVar8[0x28] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_71014717e0;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71014717e0:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x29] = puVar9;
  puVar8[0x2a] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101471840;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101471840:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x2b] = puVar9;
  puVar8[0x2c] = &PTR_FUN_710523d9a8;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar23 = extraout_x1_01;
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      param_3 = &local_70;
      auVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      uVar23 = auVar28._8_8_;
      if (((auVar28._0_8_ & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar23 = extraout_x1_02, puVar9 != (undefined8 *)0x0)) goto LAB_71014718a0;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71014718a0:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar8[0x34] = &DAT_c1ffff0000000000;
  puVar8[0x2f] = &DAT_c1ffff0000000000;
  *(undefined1 *)(puVar8 + 0x32) = 0;
  *(undefined4 *)((long)puVar8 + 0x194) = 0;
  *(undefined1 *)(puVar8 + 0x33) = 0;
  *(undefined1 *)(puVar8 + 0x35) = 0xff;
  *(undefined1 *)(puVar8 + 0x38) = 0;
  puVar8[0x5b] = 0;
  *(undefined1 *)((long)puVar8 + 0x2ec) = 0;
  puVar8[0x5a] = 0;
  puVar8[0x59] = 0;
  puVar8[0x58] = 0;
  puVar8[0x57] = 0;
  puVar8[0x56] = 0;
  puVar8[0x55] = 0;
  puVar8[0x54] = 0;
  puVar8[0x53] = 0;
  puVar8[0x52] = 0;
  puVar8[0x51] = 0;
  puVar8[0x50] = 0;
  puVar8[0x4f] = 0;
  puVar8[0x4e] = 0;
  puVar8[0x4d] = 0;
  puVar8[0x4c] = 0;
  puVar8[0x4b] = 0;
  puVar8[0x4a] = 0;
  puVar8[0x49] = 0;
  puVar8[0x48] = 0;
  puVar8[0x47] = 0;
  puVar8[0x46] = 0;
  puVar8[0x45] = 0;
  puVar8[0x44] = 0;
  puVar8[0x43] = 0;
  puVar8[0x42] = 0;
  puVar8[0x41] = 0;
  puVar8[0x62] = 0;
  puVar8[0x61] = 0;
  puVar8[0x60] = 0;
  puVar8[0x30] = &DAT_c1ffff0000000000;
  puVar8[0x31] = 0;
  puVar8[0x5c] = 0xffffffff;
  *(undefined4 *)(puVar8 + 0x5d) = 0xffffffff;
  puVar8[0x2d] = puVar9;
  puVar8[0x2e] = 0;
  puVar8[0x36] = 0;
  puVar8[0x37] = 0;
  puVar8[0x3b] = 0;
  puVar8[0x3c] = 0;
  puVar8[0x39] = puVar8;
  puVar8[0x3a] = 0;
  puVar8[0x3f] = 0;
  puVar8[0x40] = 0;
  puVar8[0x3d] = 0;
  puVar8[0x3e] = 0;
  *(undefined8 *)((long)puVar8 + 0x2f5) = 0;
  puVar8[0x5e] = 0;
  FUN_7103382c30(puVar8 + 99,uVar23,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar8[0x3e] = FUN_7101b5d880;
  puVar8[0x3f] = 0;
  puVar8[0x42] = FUN_7101b5d970;
  puVar8[0x44] = FUN_7101b5daf0;
  puVar8[0x46] = FUN_7101b5dc60;
  puVar8[0x48] = FUN_7101b5dee0;
  puVar8[0x4a] = FUN_7101b5dff0;
  puVar8[0x4c] = FUN_7101b5e230;
  puVar8[0x40] = FUN_7101b5d890;
  puVar8[0x4e] = FUN_7101b5e490;
  *(undefined4 *)(puVar8 + 100) = 0;
  puVar8[0x41] = 0;
  puVar8[0x43] = 0;
  puVar8[0x45] = 0;
  puVar8[0x47] = 0;
  puVar8[0x49] = 0;
  puVar8[0x4b] = 0;
  puVar8[0x4d] = 0;
  puVar8[0x4f] = 0;
  puVar8[0x50] = FUN_7101b5e530;
  puVar8[0x51] = 0;
  puVar8[0x3a] = 0;
  puVar8[0x3b] = 0;
  *(undefined8 *)((long)puVar8 + 0x2d4) = 0;
  *(undefined8 *)((long)puVar8 + 0x2cc) = 0;
  *(undefined8 *)((long)puVar8 + 0x2c4) = 0;
  *(undefined8 *)((long)puVar8 + 700) = 0;
  *(undefined8 *)((long)puVar8 + 0x2b4) = 0;
  *(undefined8 *)((long)puVar8 + 0x2ac) = 0;
  *(undefined8 *)((long)puVar8 + 0x2a4) = 0;
  *(undefined8 *)((long)puVar8 + 0x294) = 0;
  *(undefined8 *)((long)puVar8 + 0x29c) = 0;
  *(undefined8 *)((long)puVar8 + 0x2dc) = 0xffffffff00000000;
  *(undefined8 *)((long)puVar8 + 0x2e4) = 0xffffffff00000000;
  *(undefined1 *)((long)puVar8 + 0x2ec) = 0;
  *(undefined4 *)(puVar8 + 0x52) = 0;
  FUN_7101b5e670(puVar8 + 0x39);
  puVar6[0x10] = puVar8;
  ppuVar12 = (undefined **)&DAT_7104544af8;
  ppppbVar15 = (byte ****)0x1;
  FUN_71032cbf30(puVar26,*(long *)*puVar8,(ulong *)&DAT_7104544af8,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  lVar19 = DAT_710532f8b8;
  lVar24 = *(long *)*puVar8;
  if (((DAT_710532f4d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710532f4d8), iVar5 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    ppuVar12 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar22 = *(long *)(lVar24 + 0x28);
  }
  else {
    lVar22 = *(long *)(lVar24 + 0x28);
  }
  if (lVar22 != 0) {
    lVar18 = lVar24 + 0x28;
    do {
      bVar4 = (*(ulong *)(lVar22 + 0x20) & 0xfffffffffc) < 0x17564bc894;
      if (!bVar4) {
        lVar18 = lVar22;
      }
      lVar22 = *(long *)(lVar22 + (ulong)bVar4 * 8);
    } while (lVar22 != 0);
    if ((lVar18 != lVar24 + 0x28) && ((*(ulong *)(lVar18 + 0x20) & 0xffffffffff) < 0x17564bc895)) {
      ppppppppplVar13 = (long *********)(lVar18 + 0x28);
      goto LAB_7101471b30;
    }
  }
  ppppppppplVar13 = (long *********)&DAT_710532f4a4;
LAB_7101471b30:
  if (*(int *)ppppppppplVar13 != 0xffffff) {
    ppuVar12 = (undefined **)0x6;
    iVar5 = FUN_710330a8f0(*(long **)(lVar19 + 8),(ulong *)&DAT_7104544b00,(long ****)0x6,ppppbVar15
                           ,param_5,param_6,param_7,param_8);
    if (iVar5 != 0) {
      FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar5,ppppppppplVar13,ppppbVar15
                     ,param_5,param_6,param_7,param_8);
      ppuVar12 = (undefined **)ppppppppplVar13;
    }
  }
  FUN_71037780e0(&local_70,*(long *)*puVar26 + 8,(long ****)&DAT_7104421055,ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 2)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[3];
    puVar8[3] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar26 + 8,(long ****)&DAT_710428ff7d,ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 4)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[5];
    puVar8[5] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar26 + 8,(long ****)"highscore",ppuVar12,ppppbVar15,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 6)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[7];
    puVar8[7] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar26 + 8,(long ****)"highscore_type",ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 8)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[9];
    puVar8[9] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar26 + 8,(long ****)&DAT_71042f866d,ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 10)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0xb];
    puVar8[0xb] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar26 + 8,(long ****)"gsp_type",ppuVar12,ppppbVar15,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 0xc)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0xd];
    puVar8[0xd] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar26 + 8,(long ****)"countstop_score",ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != pppplVar16) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0xf];
    puVar8[0xf] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar26 + 8,(long ****)"countup_score",ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 0x10)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0x11];
    puVar8[0x11] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar26 + 8,(long ****)"countfinish_score",ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 0x12)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0x13];
    puVar8[0x13] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar26 + 8,(long ****)"countstop_gsp",ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != pppplVar17) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0x15];
    puVar8[0x15] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar26 + 8,(long ****)"countup_gsp",ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 0x16)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0x17];
    puVar8[0x17] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar26 + 8,(long ****)"countfinish_gsp",ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 0x18)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0x19];
    puVar8[0x19] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar26 + 8,(long ****)"anim_key_help_in",ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 0x1a)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0x1b];
    puVar8[0x1b] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_70,*(long *)*puVar26 + 8,(long ****)"set_txt_gsp",ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 0x1c)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0x1d];
    puVar8[0x1d] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_70,*(long *)*puVar26 + 8,(long ****)"set_txt_score_00",ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 0x1e)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0x1f];
    puVar8[0x1f] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_70,*(long *)*puVar26 + 8,(long ****)"set_txt_score_01",ppuVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 0x20)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0x21];
    puVar8[0x21] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  uVar23 = 0;
  FUN_7103776640(&local_80,*(long *)*puVar26 + 8,(byte ****)"set_parts_playericon_%02d",0,ppppbVar15
                 ,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_rep_icon",uVar23,ppppbVar15,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 0x22)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0x23];
    puVar8[0x23] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  uVar7 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar7 != 0) {
    uVar10 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar7);
  }
  pppplVar14 = (long ****)0x1;
  FUN_7103776640(&local_80,*(long *)*puVar26 + 8,(byte ****)"set_parts_playericon_%02d",1,ppppbVar15
                 ,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_rep_icon",pppplVar14,ppppbVar15,param_5,
                 param_6,param_7,param_8);
  puVar9 = local_68;
  if (&local_70 != (long ****)(puVar8 + 0x24)) {
    local_68 = (undefined8 *)0x0;
    uVar7 = puVar8[0x25];
    puVar8[0x25] = puVar9;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  puVar9 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  uVar7 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar7 != 0) {
    uVar10 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_70,*(long *)*puVar26 + 8,(long ****)"set_fxui_title_flash",pppplVar14,
                 ppppbVar15,param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if ((long *)*local_68 != (long *)0x0) {
    plVar11 = FUN_710377aae0((long *)*local_68);
    if (plVar11 != (long *)0x0) {
      *(undefined4 *)(plVar11 + 0x24) = 0x2000000;
    }
    plVar11 = FUN_710377aae0((long *)*local_68);
    if (plVar11 != (long *)0x0) {
      *(undefined1 *)((long)plVar11 + 0x13f) = 1;
    }
    plVar11 = puVar8 + 0x27;
    if (&local_70 != (long ****)(puVar8 + 0x26)) {
      *(undefined8 *)*plVar11 = *local_68;
      *(undefined8 *)(*plVar11 + 8) = local_68[1];
      *(undefined8 *)(*plVar11 + 0x10) = local_68[2];
      *(undefined8 *)(*plVar11 + 0x18) = local_68[3];
    }
    FUN_710377aa20(*(long **)*plVar11,0);
    FUN_710377abf0(*(long **)*plVar11,0);
    lVar19 = *(long *)*plVar11;
    puVar9 = local_68;
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
  }
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_70,*(long *)*puVar26 + 8,(long ****)"set_fxui_iconflash_00",pppplVar14,
                 ppppbVar15,param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if ((long *)*local_68 != (long *)0x0) {
    plVar11 = FUN_710377aae0((long *)*local_68);
    if (plVar11 != (long *)0x0) {
      *(undefined4 *)(plVar11 + 0x24) = 0x2000000;
    }
    plVar11 = FUN_710377aae0((long *)*local_68);
    if (plVar11 != (long *)0x0) {
      *(undefined1 *)((long)plVar11 + 0x13f) = 1;
    }
    plVar11 = puVar8 + 0x29;
    if (&local_70 != (long ****)(puVar8 + 0x28)) {
      *(undefined8 *)*plVar11 = *local_68;
      *(undefined8 *)(*plVar11 + 8) = local_68[1];
      *(undefined8 *)(*plVar11 + 0x10) = local_68[2];
      *(undefined8 *)(*plVar11 + 0x18) = local_68[3];
    }
    FUN_710377aa20(*(long **)*plVar11,0);
    FUN_710377abf0(*(long **)*plVar11,0);
    lVar19 = *(long *)*plVar11;
    puVar9 = local_68;
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
  }
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_70,*(long *)*puVar26 + 8,(long ****)"set_fxui_high_in",pppplVar14,ppppbVar15
                 ,param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if ((long *)*local_68 != (long *)0x0) {
    plVar11 = FUN_710377aae0((long *)*local_68);
    if (plVar11 != (long *)0x0) {
      *(undefined4 *)(plVar11 + 0x24) = 0x2000000;
    }
    plVar11 = FUN_710377aae0((long *)*local_68);
    if (plVar11 != (long *)0x0) {
      *(undefined1 *)((long)plVar11 + 0x13f) = 1;
    }
    plVar11 = puVar8 + 0x2b;
    if (&local_70 != (long ****)(puVar8 + 0x2a)) {
      *(undefined8 *)*plVar11 = *local_68;
      *(undefined8 *)(*plVar11 + 8) = local_68[1];
      *(undefined8 *)(*plVar11 + 0x10) = local_68[2];
      *(undefined8 *)(*plVar11 + 0x18) = local_68[3];
    }
    FUN_710377aa20(*(long **)*plVar11,0);
    FUN_710377abf0(*(long **)*plVar11,0);
    lVar19 = *(long *)*plVar11;
    puVar9 = local_68;
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
  }
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_70,*(long *)*puVar26 + 8,(long ****)"set_fxui_score",pppplVar14,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  puVar9 = local_68;
  if ((long *)*local_68 != (long *)0x0) {
    plVar11 = FUN_710377aae0((long *)*local_68);
    if (plVar11 != (long *)0x0) {
      *(undefined4 *)(plVar11 + 0x24) = 0x2000000;
    }
    plVar11 = FUN_710377aae0((long *)*local_68);
    if (plVar11 != (long *)0x0) {
      *(undefined1 *)((long)plVar11 + 0x13f) = 1;
    }
    plVar11 = puVar8 + 0x2d;
    if (&local_70 != (long ****)(puVar8 + 0x2c)) {
      *(undefined8 *)*plVar11 = *local_68;
      *(undefined8 *)(*plVar11 + 8) = local_68[1];
      *(undefined8 *)(*plVar11 + 0x10) = local_68[2];
      *(undefined8 *)(*plVar11 + 0x18) = local_68[3];
    }
    FUN_710377aa20(*(long **)*plVar11,0);
    FUN_710377abf0(*(long **)*plVar11,0);
    lVar19 = *(long *)*plVar11;
    puVar9 = local_68;
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
  }
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  lVar19 = **(long **)puVar8[1];
  *(undefined4 *)(*(long *)(lVar19 + 0x600) + 0x18) = 0x20;
  *(undefined4 *)(*(long *)(lVar19 + 0x600) + 0x20) = 0x40;
  *(undefined4 *)(*(long *)(lVar19 + 0x600) + 0x24) = 0x80;
  *(undefined4 *)(*(long *)(lVar19 + 0x600) + 0x28) = 0xbfffffff;
  plVar11 = (long *)puVar8[3];
  plVar27 = (long *)plVar11[1];
  if (plVar27 != (long *)0x0) {
    if ((char)plVar11[2] != '\0') {
      plVar25 = *(long **)(*plVar11 + 0x80);
      plVar11 = (long *)(*plVar11 + 0x88);
      if (plVar25 != plVar11) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar25[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar25[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar25[0xd] + 0x178))();
              (**(code **)(*(long *)plVar25[0xd] + 0x140))((long *)plVar25[0xd],0);
            }
            plVar20 = (long *)plVar25[1];
            if ((long *)plVar25[1] == (long *)0x0) break;
            do {
              plVar25 = plVar20;
              plVar20 = (long *)*plVar25;
            } while ((long *)*plVar25 != (long *)0x0);
LAB_7101472678:
            if (plVar25 == plVar11) goto LAB_7101472690;
          }
          plVar20 = plVar25 + 2;
          plVar21 = (long *)*plVar20;
          if ((long *)*plVar21 != plVar25) {
            do {
              lVar19 = *plVar20;
              plVar20 = (long *)(lVar19 + 0x10);
              plVar25 = (long *)*plVar20;
            } while (*plVar25 != lVar19);
            goto LAB_7101472678;
          }
          plVar25 = plVar21;
        } while (plVar21 != plVar11);
LAB_7101472690:
        plVar27 = *(long **)(puVar8[3] + 8);
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
  }
  plVar11 = (long *)puVar8[7];
  plVar27 = (long *)plVar11[1];
  if (plVar27 != (long *)0x0) {
    if ((char)plVar11[2] != '\0') {
      plVar25 = *(long **)(*plVar11 + 0x80);
      plVar11 = (long *)(*plVar11 + 0x88);
      if (plVar25 != plVar11) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar25[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar25[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar25[0xd] + 0x178))();
              (**(code **)(*(long *)plVar25[0xd] + 0x140))((long *)plVar25[0xd],0);
            }
            plVar20 = (long *)plVar25[1];
            if ((long *)plVar25[1] == (long *)0x0) break;
            do {
              plVar25 = plVar20;
              plVar20 = (long *)*plVar25;
            } while ((long *)*plVar25 != (long *)0x0);
LAB_7101472764:
            if (plVar25 == plVar11) goto LAB_710147277c;
          }
          plVar20 = plVar25 + 2;
          plVar21 = (long *)*plVar20;
          if ((long *)*plVar21 != plVar25) {
            do {
              lVar19 = *plVar20;
              plVar20 = (long *)(lVar19 + 0x10);
              plVar25 = (long *)*plVar20;
            } while (*plVar25 != lVar19);
            goto LAB_7101472764;
          }
          plVar25 = plVar21;
        } while (plVar21 != plVar11);
LAB_710147277c:
        plVar27 = *(long **)(puVar8[7] + 8);
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
  }
  plVar11 = (long *)puVar8[0xb];
  plVar27 = (long *)plVar11[1];
  if (plVar27 != (long *)0x0) {
    if ((char)plVar11[2] != '\0') {
      plVar25 = *(long **)(*plVar11 + 0x80);
      plVar11 = (long *)(*plVar11 + 0x88);
      if (plVar25 != plVar11) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar25[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar25[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar25[0xd] + 0x178))();
              (**(code **)(*(long *)plVar25[0xd] + 0x140))((long *)plVar25[0xd],0);
            }
            plVar20 = (long *)plVar25[1];
            if ((long *)plVar25[1] == (long *)0x0) break;
            do {
              plVar25 = plVar20;
              plVar20 = (long *)*plVar25;
            } while ((long *)*plVar25 != (long *)0x0);
LAB_7101472850:
            if (plVar25 == plVar11) goto LAB_7101472868;
          }
          plVar20 = plVar25 + 2;
          plVar21 = (long *)*plVar20;
          if ((long *)*plVar21 != plVar25) {
            do {
              lVar19 = *plVar20;
              plVar20 = (long *)(lVar19 + 0x10);
              plVar25 = (long *)*plVar20;
            } while (*plVar25 != lVar19);
            goto LAB_7101472850;
          }
          plVar25 = plVar21;
        } while (plVar21 != plVar11);
LAB_7101472868:
        plVar27 = *(long **)(puVar8[0xb] + 8);
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
  }
  FUN_710377b140((long)pppplVar16);
  FUN_710377b140((long)pppplVar17);
  plVar11 = (long *)puVar8[0x1b];
  plVar27 = (long *)plVar11[1];
  uVar23 = extraout_x1_03;
  if (plVar27 != (long *)0x0) {
    if ((char)plVar11[2] != '\0') {
      plVar25 = *(long **)(*plVar11 + 0x80);
      plVar11 = (long *)(*plVar11 + 0x88);
      if (plVar25 != plVar11) {
        do {
          while( true ) {
            uVar7 = (**(code **)(*(long *)plVar25[0xd] + 0x148))();
            if (((uVar7 & 1) != 0) &&
               (uVar7 = (**(code **)(*plVar27 + 0x120))(plVar27,plVar25[0xd]), (uVar7 & 1) != 0)) {
              (**(code **)(*(long *)plVar25[0xd] + 0x178))();
              (**(code **)(*(long *)plVar25[0xd] + 0x140))((long *)plVar25[0xd],0);
            }
            plVar20 = (long *)plVar25[1];
            if ((long *)plVar25[1] == (long *)0x0) break;
            do {
              plVar25 = plVar20;
              plVar20 = (long *)*plVar25;
            } while ((long *)*plVar25 != (long *)0x0);
LAB_710147294c:
            if (plVar25 == plVar11) goto LAB_7101472964;
          }
          plVar20 = plVar25 + 2;
          plVar21 = (long *)*plVar20;
          if ((long *)*plVar21 != plVar25) {
            do {
              lVar19 = *plVar20;
              plVar20 = (long *)(lVar19 + 0x10);
              plVar25 = (long *)*plVar20;
            } while (*plVar25 != lVar19);
            goto LAB_710147294c;
          }
          plVar25 = plVar21;
        } while (plVar21 != plVar11);
LAB_7101472964:
        plVar27 = *(long **)(puVar8[0x1b] + 8);
      }
    }
    (**(code **)(*plVar27 + 0x188))(plVar27);
    uVar23 = extraout_x1_04;
  }
  puVar6[2] = &DAT_7105333600;
  uVar3 = DAT_7105333664;
  *(undefined4 *)(puVar6 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar6 + 0x6c) = uVar3;
  do {
    uVar2 = DAT_7105333650;
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar2 & 1) != 0);
  puVar6[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar6;
  FUN_71032caea0((long)puVar6,uVar23,pppplVar14,ppppbVar15,param_5,param_6,param_7,param_8);
  lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  *(undefined8 **)(*(long *)(param_1 + 0x10) + 8) = puVar6;
  if (lVar19 != 0) {
    FUN_71032cad20(lVar19);
  }
  FUN_710175e350();
  return;
}

