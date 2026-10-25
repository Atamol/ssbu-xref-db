// addr:      7101b7a8f0
// offset:    0x1b7a8f0
// name:      FUN_7101b7a8f0
// mangled:   
// signature: undefined __cdecl FUN_7101b7a8f0(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_7101b7a8f0(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  long ****pppplVar10;
  undefined **ppuVar11;
  long *********ppppppppplVar12;
  byte ****ppppbVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined **local_80;
  ulong local_78;
  long ***local_70;
  ulong local_68;
  
  *param_1 = &PTR_FUN_71050ab468;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  pppplVar10 = param_3;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x6e90,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)0x6e90;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x6e90,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101b7a9a0;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101b7a9a0:
  *puVar4 = &PTR_FUN_71050ab240;
  puVar4[1] = param_1;
  puVar1 = puVar4 + 2;
  puVar6 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  uVar9 = extraout_x1;
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&DAT_00000008;
      pppplVar10 = &local_70;
      auVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      uVar9 = auVar18._8_8_;
      if (((auVar18._0_8_ & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         uVar9 = extraout_x1_00, puVar6 != (undefined8 *)0x0)) goto LAB_7101b7aa0c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7aa0c:
  FUN_7103773200(puVar6,uVar9,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  puVar4[2] = puVar6;
  FUN_7101414b10(puVar4 + 3,puVar1,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  puVar4[3] = &PTR_FUN_71050ab278;
  puVar4[5] = puVar4;
  puVar4[6] = &PTR_FUN_710523d9a8;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[7] = 0;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7aaa8;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7aaa8:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar4[8] = &PTR_FUN_710523d9e8;
  puVar4[7] = puVar6;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7ab1c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7ab1c:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[10] = &PTR_FUN_710523d9e8;
  puVar4[9] = puVar6;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7ab8c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7ab8c:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0xc] = &PTR_FUN_710523d9a8;
  puVar4[0xb] = puVar6;
  puVar4[0xd] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7ac00;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7ac00:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar4[0xe] = &PTR_FUN_710523d9e8;
  puVar4[0xd] = puVar6;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7ac6c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7ac6c:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0x10] = &PTR_FUN_710523d9e8;
  puVar4[0xf] = puVar6;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7acdc;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7acdc:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0x12] = &PTR_FUN_710523d9a8;
  puVar4[0x11] = puVar6;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7ad48;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7ad48:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar4[0x14] = &PTR_FUN_710523d9e8;
  puVar4[0x13] = puVar6;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7adb4;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7adb4:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0x16] = &PTR_FUN_710523d9e8;
  puVar4[0x15] = puVar6;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7ae24;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7ae24:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0x18] = &PTR_FUN_710523d9a8;
  puVar4[0x17] = puVar6;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7ae90;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7ae90:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar4[0x1a] = &PTR_FUN_710523d9e8;
  puVar4[0x19] = puVar6;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7aefc;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7aefc:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0x1c] = &PTR_FUN_710523d9e8;
  puVar4[0x1b] = puVar6;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7af6c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7af6c:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0x1e] = &PTR_FUN_710523d9a8;
  puVar4[0x1d] = puVar6;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7afd4;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7afd4:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar4[0x1f] = puVar6;
  puVar4[0x2c] = 0;
  puVar4[0x2d] = 0;
  puVar4[0x2a] = 0;
  puVar4[0x2b] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = 0;
  puVar4[0x24] = 0;
  puVar4[0x25] = 0;
  puVar4[0x22] = 0;
  puVar4[0x23] = 0;
  puVar4[0x20] = &PTR_FUN_710523d9e8;
  puVar4[0x21] = 0;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b050;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b050:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0x21] = puVar6;
  puVar4[0x22] = &PTR_FUN_710523d9e8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b0b4;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b0b4:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0x23] = puVar6;
  puVar4[0x24] = &PTR_FUN_710523d9e8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b114;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b114:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0x25] = puVar6;
  puVar4[0x26] = &PTR_FUN_710523d9e8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b178;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b178:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0x27] = puVar6;
  puVar4[0x28] = &PTR_FUN_710523d9e8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b1d8;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b1d8:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0x29] = puVar6;
  puVar4[0x2a] = &PTR_FUN_710523d9e8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b23c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b23c:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0x2b] = puVar6;
  puVar4[0x2c] = &PTR_FUN_710523d9e8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b29c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b29c:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  puVar4[0x2d] = puVar6;
  puVar4[0x3c] = 0;
  puVar4[0x3d] = 0;
  puVar4[0x3a] = 0;
  puVar4[0x3b] = 0;
  puVar4[0x38] = 0;
  puVar4[0x39] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x34] = 0;
  puVar4[0x35] = 0;
  puVar4[0x32] = 0;
  puVar4[0x33] = 0;
  puVar4[0x30] = 0;
  puVar4[0x31] = 0;
  puVar4[0x2e] = &PTR_FUN_710523d9a8;
  puVar4[0x2f] = 0;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b320;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b320:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar4[0x2f] = puVar6;
  puVar4[0x30] = &PTR_FUN_710523d9a8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b380;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b380:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar4[0x31] = puVar6;
  puVar4[0x32] = &PTR_FUN_710523d9a8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b3e0;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b3e0:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar4[0x33] = puVar6;
  puVar4[0x34] = &PTR_FUN_710523d9a8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b440;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b440:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar4[0x35] = puVar6;
  puVar4[0x36] = &PTR_FUN_710523d9a8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b4a0;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b4a0:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar4[0x37] = puVar6;
  puVar4[0x38] = &PTR_FUN_710523d9a8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b500;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b500:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar4[0x39] = puVar6;
  puVar4[0x3a] = &PTR_FUN_710523d9a8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b560;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b560:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar4[0x3b] = puVar6;
  puVar4[0x3c] = &PTR_FUN_710523d9a8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b5c0;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b5c0:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar4[0x3d] = puVar6;
  puVar4[0x3e] = &PTR_FUN_710523d9e8;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000018;
      pppplVar10 = &local_70;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101b7b620;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101b7b620:
  *(undefined1 *)(puVar6 + 2) = 1;
  *puVar6 = 0;
  puVar6[1] = 0;
  pppplVar10 = (long ****)0x6c80;
  puVar4[0x3f] = puVar6;
  memset(puVar4 + 0x40,0,0x6c80);
  FUN_7101b635a0(puVar4 + 0x40,extraout_x1_01,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  FUN_7101b635a0(puVar4 + 0x1f2,extraout_x1_02,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  FUN_7101b635a0(puVar4 + 0x3a4,extraout_x1_03,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  FUN_7101b635a0(puVar4 + 0x556,extraout_x1_04,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  FUN_7101b635a0(puVar4 + 0x708,extraout_x1_05,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  FUN_7101b635a0(puVar4 + 0x8ba,extraout_x1_06,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  FUN_7101b635a0(puVar4 + 0xa6c,extraout_x1_07,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  FUN_7101b635a0(puVar4 + 0xc1e,extraout_x1_08,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(puVar4 + 0xdd1) = 0;
  puVar4[0xdd0] = 0;
  ppuVar11 = (undefined **)&DAT_7104544bb8;
  if (((ulong)param_3 & 1) == 0) {
    ppuVar11 = (undefined **)&DAT_7104544bc0;
  }
  ppppbVar13 = (byte ****)0x0;
  FUN_71032cbf30(puVar1,**(long **)(puVar4[1] + 0x78),(ulong *)ppuVar11,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  *(undefined4 *)(**(long **)puVar4[2] + 0x650) = 0;
  lVar15 = DAT_710532f8b8;
  lVar17 = **(long **)(puVar4[1] + 0x78);
  if (((DAT_710532f4d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710532f4d8), iVar3 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    ppuVar11 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar16 = *(long *)(lVar17 + 0x28);
  }
  else {
    lVar16 = *(long *)(lVar17 + 0x28);
  }
  if (lVar16 != 0) {
    lVar14 = lVar17 + 0x28;
    do {
      bVar2 = (*(ulong *)(lVar16 + 0x20) & 0xffffffffff) < 0xfa2ef17bf;
      if (!bVar2) {
        lVar14 = lVar16;
      }
      lVar16 = *(long *)(lVar16 + (ulong)bVar2 * 8);
    } while (lVar16 != 0);
    if ((lVar14 != lVar17 + 0x28) && ((*(ulong *)(lVar14 + 0x20) & 0xffffffffc0) < 0xfa2ef17c0)) {
      ppppppppplVar12 = (long *********)(lVar14 + 0x28);
      goto LAB_7101b7b760;
    }
  }
  ppppppppplVar12 = (long *********)&DAT_710532f4a4;
LAB_7101b7b760:
  if (*(int *)ppppppppplVar12 != 0xffffff) {
    ppuVar11 = (undefined **)0x3;
    iVar3 = FUN_710330a8f0(*(long **)(lVar15 + 8),(ulong *)&DAT_7104544bc8,(long ****)0x3,ppppbVar13
                           ,param_5,param_6,param_7,param_8);
    if (iVar3 != 0) {
      FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar3,ppppppppplVar12,ppppbVar13
                     ,param_5,param_6,param_7,param_8);
      ppuVar11 = (undefined **)ppppppppplVar12;
    }
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"player",ppuVar11,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x3e)) {
    local_68 = 0;
    uVar7 = puVar4[0x3f];
    puVar4[0x3f] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_7103776910(&local_70,*(long *)*puVar1 + 8,(long ****)"set_rep_time_pil_s",ppuVar11,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x1e)) {
    local_68 = 0;
    uVar7 = puVar4[0x1f];
    puVar4[0x1f] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  ppppppppplVar12 = (long *********)0x0;
  plVar8 = FUN_7103240d30(*(long **)(puVar4[1] + 0x78),0x71043081e9,(long ****)0x0,ppppbVar13,
                          param_5,param_6,param_7,param_8);
  FUN_7103778b80(puVar4[0x1f],(long)plVar8,ppppppppplVar12,ppppbVar13,param_5,param_6,param_7,
                 param_8);
  FUN_71037780e0(&local_70,*(long *)puVar4[2] + 8,(long ****)"time_onoff",ppppppppplVar12,ppppbVar13
                 ,param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x20)) {
    local_68 = 0;
    uVar7 = puVar4[0x21];
    puVar4[0x21] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"time_num_00",ppppppppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x22)) {
    local_68 = 0;
    uVar7 = puVar4[0x23];
    puVar4[0x23] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"time_num_01",ppppppppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x24)) {
    local_68 = 0;
    uVar7 = puVar4[0x25];
    puVar4[0x25] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"time_num_02",ppppppppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x26)) {
    local_68 = 0;
    uVar7 = puVar4[0x27];
    puVar4[0x27] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"time_num_03",ppppppppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x28)) {
    local_68 = 0;
    uVar7 = puVar4[0x29];
    puVar4[0x29] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"time_num_04",ppppppppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x2a)) {
    local_68 = 0;
    uVar7 = puVar4[0x2b];
    puVar4[0x2b] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"time_num_05",ppppppppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x2c)) {
    local_68 = 0;
    uVar7 = puVar4[0x2d];
    puVar4[0x2d] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_7103776640(&local_80,*(long *)*puVar1 + 8,(byte ****)"set_parts_enemy_01",ppppppppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_txt_enemy",ppppppppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x12)) {
    local_68 = 0;
    uVar7 = puVar4[0x13];
    puVar4[0x13] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"enemy_1_off",ppppppppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x14)) {
    local_68 = 0;
    uVar7 = puVar4[0x15];
    puVar4[0x15] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"enemy_1_on",ppppppppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x16)) {
    local_68 = 0;
    uVar7 = puVar4[0x17];
    puVar4[0x17] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  uVar5 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar5 != 0) {
    uVar7 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar5);
  }
  FUN_7103776910(&local_70,*(long *)*puVar1 + 8,(long ****)"set_txt_bgm",ppppppppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 6)) {
    local_68 = 0;
    uVar7 = puVar4[7];
    puVar4[7] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"bgm_in",ppppppppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 8)) {
    local_68 = 0;
    uVar7 = puVar4[9];
    puVar4[9] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"bgm_out",ppppppppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 10)) {
    local_68 = 0;
    uVar7 = puVar4[0xb];
    puVar4[0xb] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_7103776910(&local_70,*(long *)*puVar1 + 8,(long ****)"set_txt_title_special",ppppppppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0xc)) {
    local_68 = 0;
    uVar7 = puVar4[0xd];
    puVar4[0xd] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"title_special_in",ppppppppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0xe)) {
    local_68 = 0;
    uVar7 = puVar4[0xf];
    puVar4[0xf] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"title_special_out",ppppppppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x10)) {
    local_68 = 0;
    uVar7 = puVar4[0x11];
    puVar4[0x11] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_7103776640(&local_80,*(long *)*puVar1 + 8,(byte ****)"set_parts_gsp",ppppppppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_txt_gsp_count",ppppppppplVar12,ppppbVar13
                 ,param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x18)) {
    local_68 = 0;
    uVar7 = puVar4[0x19];
    puVar4[0x19] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,*(long *)*puVar1 + 8,(long ****)"gsp_onoff",ppppppppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x1c)) {
    local_68 = 0;
    uVar7 = puVar4[0x1d];
    puVar4[0x1d] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_71037780e0(&local_70,(long)&local_80,(long ****)"gsp_type",ppppppppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x1a)) {
    local_68 = 0;
    uVar7 = puVar4[0x1b];
    puVar4[0x1b] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  uVar5 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar5 != 0) {
    uVar7 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar5);
  }
  FUN_7103776910(&local_70,*(long *)*puVar1 + 8,(long ****)"set_rep_stock_%02d",1,ppppbVar13,param_5
                 ,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x2e)) {
    local_68 = 0;
    uVar7 = puVar4[0x2f];
    puVar4[0x2f] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  lVar15 = *(long *)puVar4[0x2f];
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_70,*(long *)*puVar1 + 8,(long ****)"set_rep_stock_%02d",2,ppppbVar13,param_5
                 ,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x30)) {
    local_68 = 0;
    uVar7 = puVar4[0x31];
    puVar4[0x31] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  lVar15 = *(long *)puVar4[0x31];
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_70,*(long *)*puVar1 + 8,(long ****)"set_rep_stock_%02d",3,ppppbVar13,param_5
                 ,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x32)) {
    local_68 = 0;
    uVar7 = puVar4[0x33];
    puVar4[0x33] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  lVar15 = *(long *)puVar4[0x33];
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_70,*(long *)*puVar1 + 8,(long ****)"set_rep_stock_%02d",4,ppppbVar13,param_5
                 ,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x34)) {
    local_68 = 0;
    uVar7 = puVar4[0x35];
    puVar4[0x35] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  lVar15 = *(long *)puVar4[0x35];
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_70,*(long *)*puVar1 + 8,(long ****)"set_rep_stock_%02d",5,ppppbVar13,param_5
                 ,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x36)) {
    local_68 = 0;
    uVar7 = puVar4[0x37];
    puVar4[0x37] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  lVar15 = *(long *)puVar4[0x37];
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_70,*(long *)*puVar1 + 8,(long ****)"set_rep_stock_%02d",6,ppppbVar13,param_5
                 ,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x38)) {
    local_68 = 0;
    uVar7 = puVar4[0x39];
    puVar4[0x39] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  lVar15 = *(long *)puVar4[0x39];
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_70,*(long *)*puVar1 + 8,(long ****)"set_rep_stock_%02d",7,ppppbVar13,param_5
                 ,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x3a)) {
    local_68 = 0;
    uVar7 = puVar4[0x3b];
    puVar4[0x3b] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  lVar15 = *(long *)puVar4[0x3b];
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_70,*(long *)*puVar1 + 8,(long ****)"set_rep_stock_%02d",8,ppppbVar13,param_5
                 ,param_6,param_7,param_8);
  uVar5 = local_68;
  if (&local_70 != (long ****)(puVar4 + 0x3c)) {
    local_68 = 0;
    uVar7 = puVar4[0x3d];
    puVar4[0x3d] = uVar5;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar5 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  lVar15 = *(long *)puVar4[0x3d];
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  FUN_7101b69480(puVar4,4,0);
  param_1[0x10] = puVar4;
  return;
}

