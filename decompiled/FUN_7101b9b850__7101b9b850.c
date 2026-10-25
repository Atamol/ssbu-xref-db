// addr:      7101b9b850
// offset:    0x1b9b850
// name:      FUN_7101b9b850
// mangled:   
// signature: undefined __cdecl FUN_7101b9b850(long * param_1, long param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b9b850(long *param_1,long param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  byte ****ppppbVar2;
  byte ****ppppbVar3;
  byte ****ppppbVar4;
  byte ****ppppbVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long ***ppplVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long **pplVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
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
  byte ****ppppbVar22;
  long ****pppplVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  code *pcVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long *plVar33;
  long *plVar34;
  long lVar35;
  long *plVar36;
  undefined1 auVar37 [16];
  undefined **local_220;
  ulong local_218;
  undefined **local_210;
  long ***local_208 [3];
  undefined ***local_1f0;
  byte ***local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined1 local_1aa;
  undefined1 *local_1a8;
  undefined4 local_1a0;
  long alStack_190 [4];
  long *local_170;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  undefined4 local_a0;
  undefined **local_88;
  ulong local_80;
  
  plVar34 = param_1 + 1;
  *param_1 = param_2;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&DAT_00000008;
      param_3 = &local_1c0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      uVar26 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                                  ), uVar26 = extraout_x1_00, puVar15 != (undefined8 *)0x0))
      goto LAB_7101b9b8dc;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9b8dc:
  FUN_7103773200(puVar15,uVar26,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[1] = (long)puVar15;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&DAT_00000080;
      param_3 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9b940;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9b940:
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
  *(undefined4 *)(puVar15 + 0xd) = 2;
  puVar15[0xc] = 0;
  *(undefined4 *)(puVar15 + 0xf) = 0;
  puVar15[0xe] = 0;
  param_1[2] = (long)puVar15;
  FUN_7101414b10(param_1 + 3,plVar34,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = (long)&PTR_FUN_710523d9e8;
  param_1[6] = 0;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      param_3 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9ba18;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9ba18:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[6] = (long)puVar15;
  param_1[7] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      param_3 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9ba88;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9ba88:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[8] = (long)puVar15;
  param_1[9] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      param_3 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9baf4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9baf4:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[10] = (long)puVar15;
  param_1[0xb] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      param_3 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9bb64;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9bb64:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0xc] = (long)puVar15;
  param_1[0xd] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      param_3 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9bbd0;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9bbd0:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0xe] = (long)puVar15;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = (long)&PTR_FUN_710523d9e8;
  param_1[0x10] = 0;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      param_3 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9bc4c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9bc4c:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x10] = (long)puVar15;
  param_1[0x11] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      param_3 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9bcb8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9bcb8:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x12] = (long)puVar15;
  param_1[0x13] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9bd28;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9bd28:
  *puVar15 = 0;
  puVar15[1] = 0;
  ppppbVar22 = (byte ****)0x248;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x14] = (long)puVar15;
  memset(param_1 + 0x16,0,0x248);
  param_1[0x15] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9bdb0;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9bdb0:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x16] = (long)puVar15;
  param_1[0x17] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9be20;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9be20:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x18] = (long)puVar15;
  param_1[0x19] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9be8c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9be8c:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x1a] = (long)puVar15;
  param_1[0x1b] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9befc;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9befc:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x1c] = (long)puVar15;
  param_1[0x1d] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9bf68;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9bf68:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x1e] = (long)puVar15;
  param_1[0x1f] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9bfd8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9bfd8:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x20] = (long)puVar15;
  param_1[0x21] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c044;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c044:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x22] = (long)puVar15;
  param_1[0x23] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c0b4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c0b4:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x24] = (long)puVar15;
  param_1[0x25] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c120;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c120:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x26] = (long)puVar15;
  param_1[0x27] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c190;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c190:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x28] = (long)puVar15;
  param_1[0x29] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c1fc;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c1fc:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x2a] = (long)puVar15;
  param_1[0x2b] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c26c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c26c:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x2c] = (long)puVar15;
  param_1[0x2d] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c2d8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c2d8:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x2e] = (long)puVar15;
  param_1[0x2f] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c348;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c348:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x30] = (long)puVar15;
  param_1[0x31] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c3b4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c3b4:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x32] = (long)puVar15;
  param_1[0x33] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c424;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c424:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x34] = (long)puVar15;
  param_1[0x35] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c490;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c490:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x36] = (long)puVar15;
  param_1[0x37] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c500;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c500:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x38] = (long)puVar15;
  param_1[0x39] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c56c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c56c:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x3a] = (long)puVar15;
  param_1[0x3b] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c5dc;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c5dc:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x3c] = (long)puVar15;
  param_1[0x3d] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c648;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c648:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x3e] = (long)puVar15;
  param_1[0x3f] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c6b8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c6b8:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x40] = (long)puVar15;
  param_1[0x41] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c728;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c728:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x42] = (long)puVar15;
  param_1[0x43] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c79c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c79c:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x44] = (long)puVar15;
  param_1[0x45] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c80c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c80c:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x46] = (long)puVar15;
  param_1[0x47] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c880;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c880:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x48] = (long)puVar15;
  param_1[0x49] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c8f0;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c8f0:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x4a] = (long)puVar15;
  param_1[0x4b] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c964;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c964:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x4c] = (long)puVar15;
  param_1[0x4d] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9c9d4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9c9d4:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x4e] = (long)puVar15;
  param_1[0x4f] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9ca48;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9ca48:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x50] = (long)puVar15;
  param_1[0x51] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9cab8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9cab8:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x52] = (long)puVar15;
  param_1[0x53] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9cb2c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9cb2c:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x54] = (long)puVar15;
  param_1[0x55] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9cb9c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9cb9c:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x56] = (long)puVar15;
  param_1[0x57] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9cc10;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9cc10:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x58] = (long)puVar15;
  param_1[0x59] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9cc80;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9cc80:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x5a] = (long)puVar15;
  param_1[0x5b] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9ccf4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9ccf4:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  param_1[0x5c] = (long)puVar15;
  param_1[0x5d] = (long)&PTR_FUN_710523d9e8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000018;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9cd64;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9cd64:
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  ppppbVar22 = (byte ****)&DAT_000001a8;
  plVar33 = param_1 + 0x5f;
  param_1[0x5e] = (long)puVar15;
  memset(plVar33,0,0x1a8);
  param_1[0x62] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9cdec;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9cdec:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[99] = (long)puVar15;
  param_1[100] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9ce5c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9ce5c:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x65] = (long)puVar15;
  param_1[0x66] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_01;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      uVar26 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), uVar26 = extraout_x1_02, puVar15 != (undefined8 *)0x0))
      goto LAB_7101b9cecc;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9cecc:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  ppppbVar1 = (byte ****)(param_1 + 0x68);
  param_1[0x67] = (long)puVar15;
  FUN_7103776290(ppppbVar1,uVar26,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  param_1[0x6a] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9cf48;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9cf48:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x6b] = (long)puVar15;
  param_1[0x6c] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9cfb8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9cfb8:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x6d] = (long)puVar15;
  param_1[0x6e] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d028;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d028:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x6f] = (long)puVar15;
  param_1[0x70] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_03;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      uVar26 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), uVar26 = extraout_x1_04, puVar15 != (undefined8 *)0x0))
      goto LAB_7101b9d098;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d098:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  ppppbVar2 = (byte ****)(param_1 + 0x72);
  param_1[0x71] = (long)puVar15;
  FUN_7103776290(ppppbVar2,uVar26,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  param_1[0x74] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d118;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d118:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x75] = (long)puVar15;
  param_1[0x76] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d188;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d188:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x77] = (long)puVar15;
  param_1[0x78] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d1f8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d1f8:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x79] = (long)puVar15;
  param_1[0x7a] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_05;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      uVar26 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), uVar26 = extraout_x1_06, puVar15 != (undefined8 *)0x0))
      goto LAB_7101b9d268;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d268:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  ppppbVar3 = (byte ****)(param_1 + 0x7c);
  param_1[0x7b] = (long)puVar15;
  FUN_7103776290(ppppbVar3,uVar26,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  param_1[0x7e] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d2e8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d2e8:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x7f] = (long)puVar15;
  param_1[0x80] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d358;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d358:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x81] = (long)puVar15;
  param_1[0x82] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d3c8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d3c8:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x83] = (long)puVar15;
  param_1[0x84] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_07;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      uVar26 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), uVar26 = extraout_x1_08, puVar15 != (undefined8 *)0x0))
      goto LAB_7101b9d438;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d438:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  ppppbVar4 = (byte ****)(param_1 + 0x86);
  param_1[0x85] = (long)puVar15;
  FUN_7103776290(ppppbVar4,uVar26,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  param_1[0x88] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d4b8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d4b8:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x89] = (long)puVar15;
  param_1[0x8a] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d528;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d528:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x8b] = (long)puVar15;
  param_1[0x8c] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d598;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d598:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x8d] = (long)puVar15;
  param_1[0x8e] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_09;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      uVar26 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), uVar26 = extraout_x1_10, puVar15 != (undefined8 *)0x0))
      goto LAB_7101b9d60c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d60c:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  ppppbVar5 = (byte ****)(param_1 + 0x90);
  param_1[0x8f] = (long)puVar15;
  FUN_7103776290(ppppbVar5,uVar26,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  param_1[0x92] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d688;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d688:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x93] = (long)puVar15;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d774;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d774:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x95] = (long)puVar15;
  param_1[0x96] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d7e4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d7e4:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x97] = (long)puVar15;
  param_1[0x98] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d854;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d854:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x99] = (long)puVar15;
  param_1[0x9a] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d8c4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d8c4:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x9b] = (long)puVar15;
  param_1[0x9c] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d934;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d934:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x9d] = (long)puVar15;
  param_1[0x9e] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9d9a4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9d9a4:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x9f] = (long)puVar15;
  param_1[0xa0] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9da14;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9da14:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xa1] = (long)puVar15;
  param_1[0xa2] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9da84;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9da84:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xa3] = (long)puVar15;
  param_1[0xa4] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9daf4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9daf4:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xa5] = (long)puVar15;
  param_1[0xa6] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9db64;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9db64:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xa7] = (long)puVar15;
  param_1[0xa8] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9dbd4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9dbd4:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xa9] = (long)puVar15;
  param_1[0xaa] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9dc44;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9dc44:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xab] = (long)puVar15;
  param_1[0xac] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9dcb4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9dcb4:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xad] = (long)puVar15;
  param_1[0xae] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9dd24;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9dd24:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xaf] = (long)puVar15;
  param_1[0xb0] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9dd94;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9dd94:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xb1] = (long)puVar15;
  param_1[0xb2] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9de04;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9de04:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xb3] = (long)puVar15;
  param_1[0xb4] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9de74;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9de74:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xb5] = (long)puVar15;
  param_1[0xb6] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9dee4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9dee4:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xb7] = (long)puVar15;
  param_1[0xb8] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9df54;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9df54:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xb9] = (long)puVar15;
  param_1[0xba] = 0x100000000;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  *(undefined4 *)((long)param_1 + 0x5dc) = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9dfd8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9dfd8:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xbe] = (long)puVar15;
  param_1[0xbf] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9e048;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9e048:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xc0] = (long)puVar15;
  param_1[0xc1] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9e0b8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9e0b8:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xc2] = (long)puVar15;
  param_1[0xc3] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_11;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      uVar26 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), uVar26 = extraout_x1_12, puVar15 != (undefined8 *)0x0))
      goto LAB_7101b9e128;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9e128:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  ppppbVar6 = (byte ****)(param_1 + 0xc5);
  param_1[0xc4] = (long)puVar15;
  FUN_7103776290(ppppbVar6,uVar26,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  param_1[199] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_13;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      auVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      uVar26 = auVar37._8_8_;
      if (((auVar37._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), uVar26 = extraout_x1_14, puVar15 != (undefined8 *)0x0))
      goto LAB_7101b9e1a8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9e1a8:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  ppppbVar7 = (byte ****)(param_1 + 0xc9);
  param_1[200] = (long)puVar15;
  FUN_7103776290(ppppbVar7,uVar26,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  param_1[0xcb] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9e22c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9e22c:
  plVar36 = param_1 + 0x61;
  plVar8 = param_1 + 0x60;
  pppplVar23 = (long ****)&DAT_00000110;
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0xcc] = (long)puVar15;
  memset(param_1 + 0xcd,0,0x110);
  FUN_7101b50990(param_1 + 0xcd,extraout_x1_15,pppplVar23,param_4,param_5,param_6,param_7,param_8);
  ppppbVar22 = (byte ****)0xd80;
  memset(param_1 + 0xef,0,0xd80);
  lVar19 = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar19 + 0x790) = 0;
    *(undefined8 *)((long)param_1 + lVar19 + 0x788) = 0;
    *(undefined8 *)((long)param_1 + lVar19 + 0x780) = 0;
    *(undefined ***)((long)param_1 + lVar19 + 0x778) = &PTR_FUN_710523d9e8;
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8
                            );
    if (puVar15 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
        local_1c0 = (byte ***)&SUB_00000018;
        ppppbVar22 = &local_1c0;
        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
        if (((uVar16 & 1) != 0) &&
           (puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7
                                     ,param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9e2f0;
      }
      puVar15 = (undefined8 *)0x0;
    }
LAB_7101b9e2f0:
    *puVar15 = 0;
    puVar15[1] = 0;
    *(undefined1 *)(puVar15 + 2) = 1;
    *(undefined8 **)((long)param_1 + lVar19 + 0x780) = puVar15;
    *(undefined ***)((long)param_1 + lVar19 + 0x788) = &PTR_FUN_710523d9e8;
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8
                            );
    if (puVar15 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
        local_1c0 = (byte ***)&SUB_00000018;
        ppppbVar22 = &local_1c0;
        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
        if (((uVar16 & 1) != 0) &&
           (puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,(long ****)ppppbVar22,param_4,param_5,param_6,param_7
                                     ,param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9e354;
      }
      puVar15 = (undefined8 *)0x0;
    }
LAB_7101b9e354:
    lVar30 = lVar19 + 0x20;
    *(undefined1 *)(puVar15 + 2) = 1;
    *puVar15 = 0;
    puVar15[1] = 0;
    *(undefined8 **)((long)param_1 + lVar19 + 0x790) = puVar15;
    lVar19 = lVar30;
  } while (lVar30 != 0xd80);
  param_1[0x2a2] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a0] = 0;
  param_1[0x29f] = 0;
  param_1[0x2a3] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9e3dc;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9e3dc:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  param_1[0x2a4] = (long)puVar15;
  param_1[0x2a5] = (long)&PTR_FUN_710523d9a8;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
      local_1c0 = (byte ***)&SUB_00000020;
      ppppbVar22 = &local_1c0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
      if (((uVar16 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar22,param_4,param_5,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101b9e44c;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101b9e44c:
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar24 = &DAT_7104544d30;
  uVar26 = 1;
  param_1[0x2a7] = 0x300000000;
  param_1[0x2a6] = (long)puVar15;
  *(undefined2 *)(param_1 + 0x2aa) = 0;
  param_1[0x2a9] = 0;
  param_1[0x2a8] = 0;
  *(undefined2 *)(param_1 + 0x2ab) = 0;
  *(undefined8 *)((long)param_1 + 0x155c) = 0;
  FUN_71032cbf30(plVar34,**(long **)(*param_1 + 0x78),(ulong *)&DAT_7104544d30,(byte ****)0x1,
                 param_5,param_6,param_7,param_8);
  puVar15 = (undefined8 *)(*(long *)param_1[1] + 8);
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)&DAT_7104421055,puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 5) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[6];
    param_1[6] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"menu_in",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 7) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[8];
    param_1[8] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)&DAT_710428ff7d,puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 9) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[10];
    param_1[10] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"loading_on",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xb) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xc];
    param_1[0xc] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"loading_off",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xd) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xe];
    param_1[0xe] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"in_detail",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x15) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x16];
    param_1[0x16] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"out_detail",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x17) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x18];
    param_1[0x18] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_page_0",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x19) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x1a];
    param_1[0x1a] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_page_1",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x1b) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x1c];
    param_1[0x1c] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_page_2",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x1d) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x1e];
    param_1[0x1e] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_page_3",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x1f) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x20];
    param_1[0x20] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_page_4",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x21) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x22];
    param_1[0x22] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_extra1_type1",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x23) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x24];
    param_1[0x24] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_extra1_type2",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x25) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x26];
    param_1[0x26] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_extra2_type1",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x27) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x28];
    param_1[0x28] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_extra2_type2",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x29) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x2a];
    param_1[0x2a] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_extra3_type1",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x2b) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x2c];
    param_1[0x2c] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_extra3_type2",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x2d) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x2e];
    param_1[0x2e] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_extra4_type1",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x2f) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x30];
    param_1[0x30] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_extra4_type2",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x31) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x32];
    param_1[0x32] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_navi_up_show",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x33) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x34];
    param_1[0x34] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_navi_up_hide",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x35) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x36];
    param_1[0x36] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_navi_down_show",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x37) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x38];
    param_1[0x38] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_navi_down_hide",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x39) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x3a];
    param_1[0x3a] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_0",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x3b) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x3c];
    param_1[0x3c] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_0_to_1",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x3d) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x3e];
    param_1[0x3e] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_1_to_2",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x3f) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x40];
    param_1[0x40] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_2_to_3",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x41) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x42];
    param_1[0x42] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_3_to_4",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x43) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x44];
    param_1[0x44] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_2_to_1",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x45) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x46];
    param_1[0x46] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_3_to_2",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x47) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x48];
    param_1[0x48] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_4_to_3",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x49) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x4a];
    param_1[0x4a] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_1_to_0",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x4b) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x4c];
    param_1[0x4c] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_2_to_0",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x4d) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x4e];
    param_1[0x4e] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_3_to_0",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x4f) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x50];
    param_1[0x50] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_4_to_0",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x51) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x52];
    param_1[0x52] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_next_in",puVar24,uVar26,param_5,param_6
                 ,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x53) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x54];
    param_1[0x54] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_next_out",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x55) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x56];
    param_1[0x56] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_previous_in",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x57) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x58];
    param_1[0x58] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_previous_out",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x59) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x5a];
    param_1[0x5a] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_type_0",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x5b) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x5c];
    param_1[0x5c] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"detail_type_1",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x5d) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x5e];
    param_1[0x5e] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"in_list",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xcd) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xce];
    param_1[0xce] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"out_list",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xcf) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xd0];
    param_1[0xd0] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_line1",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xd1) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xd2];
    param_1[0xd2] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_line2",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xd3) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xd4];
    param_1[0xd4] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_navi_left_show",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xd5) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xd6];
    param_1[0xd6] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_navi_left_hide",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xd7) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xd8];
    param_1[0xd8] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_navi_right_show",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xd9) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xda];
    param_1[0xda] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_navi_right_hide",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xdb) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xdc];
    param_1[0xdc] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_0",puVar24,uVar26,param_5,param_6,param_7
                 ,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xdd) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xde];
    param_1[0xde] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_1",puVar24,uVar26,param_5,param_6,param_7
                 ,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xdf) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xe0];
    param_1[0xe0] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_0_to_1",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xe1) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xe2];
    param_1[0xe2] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_0_to_2",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xe3) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xe4];
    param_1[0xe4] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_0_to_3",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xe5) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xe6];
    param_1[0xe6] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_1_to_2",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xe7) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xe8];
    param_1[0xe8] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_2_to_3",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xe9) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xea];
    param_1[0xea] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_2_to_1",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xeb) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xec];
    param_1[0xec] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)puVar15,(long ****)"list_3_to_2",puVar24,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xed) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xee];
    param_1[0xee] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776640(&local_210,(long)puVar15,(byte ****)"set_parts_loading",puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  FUN_71037780e0(&local_1c0,(long)&local_210,(long ****)&DAT_710441139d,puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xf) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x10];
    param_1[0x10] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)&local_210,(long ****)&DAT_710429257e,puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x11) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x12];
    param_1[0x12] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_71037780e0(&local_1c0,(long)&local_210,(long ****)&DAT_71043cd335,puVar24,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x13) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x14];
    param_1[0x14] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9e8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  ppplVar12 = local_208[0];
  local_210 = &PTR_FUN_710523d988;
  local_208[0] = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    pplVar17 = ppplVar12[3];
    ppplVar12[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar12[3] = (long **)0x0;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
    FUN_710392eb40((ulong)ppplVar12);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_name_%02d",0,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x62) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[99];
    param_1[99] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_explain_%02d",0,uVar26,param_5,param_6
                 ,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 100) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x65];
    param_1[0x65] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_rep_skill_%02d",0,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x66) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x67];
    param_1[0x67] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  uVar25 = 0;
  FUN_7103776640(&local_1c0,(long)puVar15,(byte ****)"set_parts_keyassign_%02d",0,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if (ppppbVar1 != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x69];
    param_1[0x69] = (long)puVar13;
    if (uVar16 != 0) {
      uVar18 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d988;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    uVar16 = *(ulong *)((long)puVar13 + 0x18);
    *(undefined ***)((long)puVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar13 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)ppppbVar1,(long ****)"set_txt_btn",uVar25,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x6a) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x6b];
    param_1[0x6b] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_name_%02d",1,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x6c) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x6d];
    param_1[0x6d] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_explain_%02d",1,uVar26,param_5,param_6
                 ,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x6e) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x6f];
    param_1[0x6f] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_rep_skill_%02d",1,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x70) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x71];
    param_1[0x71] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  uVar25 = 1;
  FUN_7103776640(&local_1c0,(long)puVar15,(byte ****)"set_parts_keyassign_%02d",1,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if (ppppbVar2 != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x73];
    param_1[0x73] = (long)puVar13;
    if (uVar16 != 0) {
      uVar18 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d988;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    uVar16 = *(ulong *)((long)puVar13 + 0x18);
    *(undefined ***)((long)puVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar13 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)ppppbVar2,(long ****)"set_txt_btn",uVar25,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x74) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x75];
    param_1[0x75] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_name_%02d",2,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x76) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x77];
    param_1[0x77] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_explain_%02d",2,uVar26,param_5,param_6
                 ,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x78) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x79];
    param_1[0x79] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_rep_skill_%02d",2,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x7a) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x7b];
    param_1[0x7b] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  uVar25 = 2;
  FUN_7103776640(&local_1c0,(long)puVar15,(byte ****)"set_parts_keyassign_%02d",2,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if (ppppbVar3 != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x7d];
    param_1[0x7d] = (long)puVar13;
    if (uVar16 != 0) {
      uVar18 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d988;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    uVar16 = *(ulong *)((long)puVar13 + 0x18);
    *(undefined ***)((long)puVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar13 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)ppppbVar3,(long ****)"set_txt_btn",uVar25,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x7e) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x7f];
    param_1[0x7f] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_name_%02d",3,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x80) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x81];
    param_1[0x81] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_explain_%02d",3,uVar26,param_5,param_6
                 ,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x82) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x83];
    param_1[0x83] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_rep_skill_%02d",3,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x84) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x85];
    param_1[0x85] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  uVar25 = 3;
  FUN_7103776640(&local_1c0,(long)puVar15,(byte ****)"set_parts_keyassign_%02d",3,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if (ppppbVar4 != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x87];
    param_1[0x87] = (long)puVar13;
    if (uVar16 != 0) {
      uVar18 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d988;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    uVar16 = *(ulong *)((long)puVar13 + 0x18);
    *(undefined ***)((long)puVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar13 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)ppppbVar4,(long ****)"set_txt_btn",uVar25,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x88) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x89];
    param_1[0x89] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_name_%02d",4,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x8a) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x8b];
    param_1[0x8b] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_explain_%02d",4,uVar26,param_5,param_6
                 ,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x8c) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x8d];
    param_1[0x8d] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_rep_skill_%02d",4,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x8e) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x8f];
    param_1[0x8f] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  uVar25 = 4;
  FUN_7103776640(&local_1c0,(long)puVar15,(byte ****)"set_parts_keyassign_%02d",4,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if (ppppbVar5 != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x91];
    param_1[0x91] = (long)puVar13;
    if (uVar16 != 0) {
      uVar18 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d988;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    uVar16 = *(ulong *)((long)puVar13 + 0x18);
    *(undefined ***)((long)puVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar13 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)ppppbVar5,(long ****)"set_txt_btn",uVar25,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x92) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x93];
    param_1[0x93] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_extratitle_%02d",0,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x94) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x95];
    param_1[0x95] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_extratxta_%02d",0,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x96) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x97];
    param_1[0x97] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_extratxtb_%02d",0,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x98) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x99];
    param_1[0x99] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_rep_extraimg_%02d",0,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x9a) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x9b];
    param_1[0x9b] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_extratitle_%02d",1,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x9c) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x9d];
    param_1[0x9d] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_extratxta_%02d",1,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x9e) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x9f];
    param_1[0x9f] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_extratxtb_%02d",1,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xa0) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xa1];
    param_1[0xa1] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_rep_extraimg_%02d",1,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xa2) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xa3];
    param_1[0xa3] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_extratitle_%02d",2,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xa4) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xa5];
    param_1[0xa5] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_extratxta_%02d",2,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xa6) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xa7];
    param_1[0xa7] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_extratxtb_%02d",2,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xa8) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xa9];
    param_1[0xa9] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_rep_extraimg_%02d",2,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xaa) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xab];
    param_1[0xab] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_extratitle_%02d",3,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xac) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xad];
    param_1[0xad] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_extratxta_%02d",3,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xae) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xaf];
    param_1[0xaf] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_extratxtb_%02d",3,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xb0) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xb1];
    param_1[0xb1] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  uVar25 = 3;
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_rep_extraimg_%02d",3,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xb2) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xb3];
    param_1[0xb3] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_fighter_name",uVar25,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xb4) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xb5];
    param_1[0xb5] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_rep_fighter",uVar25,uVar26,param_5,param_6
                 ,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xb6) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xb7];
    param_1[0xb7] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_name_05",uVar25,uVar26,param_5,param_6
                 ,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xbd) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xbe];
    param_1[0xbe] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_explain_05",uVar25,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xbf) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xc0];
    param_1[0xc0] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_rep_skill_05_1",uVar25,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xc1) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xc2];
    param_1[0xc2] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_rep_skill_05_2",uVar25,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xc3) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xc4];
    param_1[0xc4] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776640(&local_1c0,(long)puVar15,(byte ****)"set_parts_keyassign_05_1",uVar25,uVar26,
                 param_5,param_6,param_7,param_8);
  puVar13 = local_1b8;
  if (ppppbVar6 != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xc6];
    param_1[0xc6] = (long)puVar13;
    if (uVar16 != 0) {
      uVar18 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d988;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    uVar16 = *(ulong *)((long)puVar13 + 0x18);
    *(undefined ***)((long)puVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar13 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)ppppbVar6,(long ****)"set_txt_btn",uVar25,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 199) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[200];
    param_1[200] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776640(&local_1c0,(long)puVar15,(byte ****)"set_parts_keyassign_05_2",uVar25,uVar26,
                 param_5,param_6,param_7,param_8);
  puVar13 = local_1b8;
  if (ppppbVar7 != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xca];
    param_1[0xca] = (long)puVar13;
    if (uVar16 != 0) {
      uVar18 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d988;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    uVar16 = *(ulong *)((long)puVar13 + 0x18);
    *(undefined ***)((long)puVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar13 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)ppppbVar7,(long ****)"set_txt_btn",uVar25,uVar26,param_5,param_6,
                 param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0xcb) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0xcc];
    param_1[0xcc] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103778300(0x3f800000,param_1[0xc6],0x71044227a9);
  FUN_7103778300(0x3f800000,param_1[0xca],0x71044227a9);
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_list_page",uVar25,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x2a3) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x2a4];
    param_1[0x2a4] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_list_all",uVar25,uVar26,param_5,
                 param_6,param_7,param_8);
  puVar13 = local_1b8;
  if ((byte ****)(param_1 + 0x2a5) != &local_1c0) {
    local_1b8 = (undefined1 *)0x0;
    uVar16 = param_1[0x2a6];
    param_1[0x2a6] = (long)puVar13;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  FUN_7103776910(&local_1c0,(long)puVar15,(long ****)"set_txt_list_slash",uVar25,uVar26,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_1c0,"mel_wazalist_open_guide_03",uVar25,uVar26,param_5,param_6,param_7
                 ,param_8);
  puVar13 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = (undefined1 *)0x0;
  if (puVar13 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  lVar35 = **(long **)*plVar34;
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x2c) = 0x20;
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x30) = 0x40000;
  ppppbVar22 = &local_1c0;
  local_1c0 = (byte ***)0x0;
  local_1a0 = 0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_a0 = 0;
  local_1b0 = 1;
  local_1ac = 1;
  local_1aa = 1;
  local_1a8 = &DAT_41f0000000000000;
  local_1b8 = (undefined1 *)0x1010000010101;
  FUN_7103770b30(plVar33,puVar15,(long ****)"group_header_arrow",ppppbVar22,param_5,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar33,3,"set_parts_ft_left",ppppbVar22,param_5,param_6,param_7,param_8);
  lVar19 = *plVar33;
  lVar30 = *(long *)(lVar19 + 0x1b8);
  if (lVar30 != 0) {
    lVar29 = lVar19 + 0x1b8;
    lVar31 = lVar29;
    lVar32 = lVar30;
    do {
      if (2 < *(int *)(lVar32 + 0x20)) {
        lVar31 = lVar32;
      }
      lVar32 = *(long *)(lVar32 + (ulong)(*(int *)(lVar32 + 0x20) < 3) * 8);
    } while (lVar32 != 0);
    if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 4)) &&
       (plVar34 = *(long **)(lVar31 + 0x28), plVar34 != (long *)0x0)) {
      (**(code **)(*plVar34 + 0x1f8))(plVar34,0);
      (**(code **)(*plVar34 + 0x388))(plVar34,1,0);
      lVar19 = *plVar33;
      lVar30 = *(long *)(lVar19 + 0x1b8);
      lVar29 = lVar19 + 0x1b8;
    }
    lVar31 = lVar29;
    if (lVar30 != 0) {
      do {
        if (2 < *(int *)(lVar30 + 0x20)) {
          lVar31 = lVar30;
        }
        lVar30 = *(long *)(lVar30 + (ulong)(*(int *)(lVar30 + 0x20) < 3) * 8);
      } while (lVar30 != 0);
      if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 4)) &&
         (plVar34 = *(long **)(lVar31 + 0x28), plVar34 != (long *)0x0)) {
        (**(code **)(*plVar34 + 0x208))(plVar34,0);
        (**(code **)(*plVar34 + 0x388))(plVar34,1,0);
        lVar19 = *plVar33;
      }
    }
  }
  uVar26 = 0;
  FUN_7103771930(lVar19,3,(long ****)&DAT_00000007,(byte ****)0x0,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar33,2,"set_parts_ft_right",uVar26,param_5,param_6,param_7,param_8);
  lVar19 = *plVar33;
  lVar30 = *(long *)(lVar19 + 0x1b8);
  if (lVar30 != 0) {
    lVar29 = lVar19 + 0x1b8;
    lVar31 = lVar29;
    lVar32 = lVar30;
    do {
      if (1 < *(int *)(lVar32 + 0x20)) {
        lVar31 = lVar32;
      }
      lVar32 = *(long *)(lVar32 + (ulong)(*(int *)(lVar32 + 0x20) < 2) * 8);
    } while (lVar32 != 0);
    if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 3)) &&
       (plVar34 = *(long **)(lVar31 + 0x28), plVar34 != (long *)0x0)) {
      (**(code **)(*plVar34 + 0x1f8))(plVar34,0);
      (**(code **)(*plVar34 + 0x388))(plVar34,1,0);
      lVar19 = *plVar33;
      lVar30 = *(long *)(lVar19 + 0x1b8);
      lVar29 = lVar19 + 0x1b8;
    }
    lVar31 = lVar29;
    if (lVar30 != 0) {
      do {
        if (1 < *(int *)(lVar30 + 0x20)) {
          lVar31 = lVar30;
        }
        lVar30 = *(long *)(lVar30 + (ulong)(*(int *)(lVar30 + 0x20) < 2) * 8);
      } while (lVar30 != 0);
      if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 3)) &&
         (plVar34 = *(long **)(lVar31 + 0x28), plVar34 != (long *)0x0)) {
        (**(code **)(*plVar34 + 0x208))(plVar34,0);
        (**(code **)(*plVar34 + 0x388))(plVar34,1,0);
        lVar19 = *plVar33;
      }
    }
  }
  FUN_7103771930(lVar19,2,(long ****)&DAT_00000008,(byte ****)0x0,param_5,param_6,param_7,param_8);
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x1c) = 0x800108;
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x20) = 0x200202;
  if (alStack_d0 == local_b0) {
    pcVar28 = *(code **)(*local_b0 + 0x20);
LAB_7101ba13c4:
    (*pcVar28)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_b0 + 0x28);
    goto LAB_7101ba13c4;
  }
  if (alStack_100 == local_e0) {
    pcVar28 = *(code **)(*local_e0 + 0x20);
LAB_7101ba13f4:
    (*pcVar28)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101ba13f4;
  }
  if (alStack_130 == local_110) {
    pcVar28 = *(code **)(*local_110 + 0x20);
LAB_7101ba1424:
    (*pcVar28)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar28 = *(code **)(*local_110 + 0x28);
    goto LAB_7101ba1424;
  }
  if (alStack_160 == local_140) {
    pcVar28 = *(code **)(*local_140 + 0x20);
LAB_7101ba1454:
    (*pcVar28)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar28 = *(code **)(*local_140 + 0x28);
    goto LAB_7101ba1454;
  }
  if (alStack_190 == local_170) {
    pcVar28 = *(code **)(*local_170 + 0x20);
LAB_7101ba1484:
    (*pcVar28)();
  }
  else if (local_170 != (long *)0x0) {
    pcVar28 = *(code **)(*local_170 + 0x28);
    goto LAB_7101ba1484;
  }
  ppppbVar22 = &local_1c0;
  local_1c0 = (byte ***)0x0;
  local_1b0 = 1;
  local_1ac = 1;
  local_1aa = 1;
  local_1a8 = &DAT_41f0000000000000;
  local_1a0 = 0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_a0 = 0;
  local_1b8 = (undefined1 *)0x1010000010101;
  FUN_7103770b30(plVar8,puVar15,(long ****)"group_detail_arrow",ppppbVar22,param_5,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar8,1,"set_parts_arrow_00",ppppbVar22,param_5,param_6,param_7,param_8);
  lVar19 = *plVar8;
  lVar30 = *(long *)(lVar19 + 0x1b8);
  if (lVar30 != 0) {
    lVar29 = lVar19 + 0x1b8;
    lVar31 = lVar29;
    lVar32 = lVar30;
    do {
      if (0 < *(int *)(lVar32 + 0x20)) {
        lVar31 = lVar32;
      }
      lVar32 = *(long *)(lVar32 + (ulong)(*(int *)(lVar32 + 0x20) < 1) * 8);
    } while (lVar32 != 0);
    if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 2)) &&
       (plVar34 = *(long **)(lVar31 + 0x28), plVar34 != (long *)0x0)) {
      (**(code **)(*plVar34 + 0x1f8))(plVar34,0);
      (**(code **)(*plVar34 + 0x388))(plVar34,1,0);
      lVar19 = *plVar8;
      lVar30 = *(long *)(lVar19 + 0x1b8);
      lVar29 = lVar19 + 0x1b8;
    }
    lVar31 = lVar29;
    if (lVar30 != 0) {
      do {
        if (0 < *(int *)(lVar30 + 0x20)) {
          lVar31 = lVar30;
        }
        lVar30 = *(long *)(lVar30 + (ulong)(*(int *)(lVar30 + 0x20) < 1) * 8);
      } while (lVar30 != 0);
      if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 2)) &&
         (plVar34 = *(long **)(lVar31 + 0x28), plVar34 != (long *)0x0)) {
        (**(code **)(*plVar34 + 0x208))(plVar34,0);
        (**(code **)(*plVar34 + 0x388))(plVar34,1,0);
        lVar19 = *plVar8;
      }
    }
  }
  uVar26 = 0;
  FUN_7103771930(lVar19,1,(long ****)&DAT_00000009,(byte ****)0x0,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar8,0,"set_parts_arrow_01",uVar26,param_5,param_6,param_7,param_8);
  lVar19 = *plVar8;
  lVar30 = *(long *)(lVar19 + 0x1b8);
  if (lVar30 != 0) {
    lVar29 = lVar19 + 0x1b8;
    lVar31 = lVar29;
    lVar32 = lVar30;
    do {
      bVar14 = *(int *)(lVar32 + 0x20) < 0;
      if (!bVar14) {
        lVar31 = lVar32;
      }
      lVar32 = *(long *)(lVar32 + (ulong)bVar14 * 8);
    } while (lVar32 != 0);
    if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 1)) &&
       (plVar34 = *(long **)(lVar31 + 0x28), plVar34 != (long *)0x0)) {
      (**(code **)(*plVar34 + 0x1f8))(plVar34,0);
      (**(code **)(*plVar34 + 0x388))(plVar34,1,0);
      lVar19 = *plVar8;
      lVar30 = *(long *)(lVar19 + 0x1b8);
      lVar29 = lVar19 + 0x1b8;
    }
    lVar31 = lVar29;
    if (lVar30 != 0) {
      do {
        bVar14 = *(int *)(lVar30 + 0x20) < 0;
        if (!bVar14) {
          lVar31 = lVar30;
        }
        lVar30 = *(long *)(lVar30 + (ulong)bVar14 * 8);
      } while (lVar30 != 0);
      if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 1)) &&
         (plVar34 = *(long **)(lVar31 + 0x28), plVar34 != (long *)0x0)) {
        (**(code **)(*plVar34 + 0x208))(plVar34,0);
        (**(code **)(*plVar34 + 0x388))(plVar34,1,0);
        lVar19 = *plVar8;
      }
    }
  }
  FUN_7103771930(lVar19,0,(long ****)0xa,(byte ****)0x0,param_5,param_6,param_7,param_8);
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x24) = 0x100001;
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x28) = 0x400004;
  if (alStack_d0 == local_b0) {
    pcVar28 = *(code **)(*local_b0 + 0x20);
LAB_7101ba1768:
    (*pcVar28)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_b0 + 0x28);
    goto LAB_7101ba1768;
  }
  if (alStack_100 == local_e0) {
    pcVar28 = *(code **)(*local_e0 + 0x20);
LAB_7101ba1798:
    (*pcVar28)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101ba1798;
  }
  if (alStack_130 == local_110) {
    pcVar28 = *(code **)(*local_110 + 0x20);
LAB_7101ba17c8:
    (*pcVar28)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar28 = *(code **)(*local_110 + 0x28);
    goto LAB_7101ba17c8;
  }
  if (alStack_160 == local_140) {
    pcVar28 = *(code **)(*local_140 + 0x20);
LAB_7101ba17f8:
    (*pcVar28)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar28 = *(code **)(*local_140 + 0x28);
    goto LAB_7101ba17f8;
  }
  if (alStack_190 == local_170) {
    pcVar28 = *(code **)(*local_170 + 0x20);
LAB_7101ba1828:
    (*pcVar28)();
  }
  else if (local_170 != (long *)0x0) {
    pcVar28 = *(code **)(*local_170 + 0x28);
    goto LAB_7101ba1828;
  }
  ppppbVar22 = &local_1c0;
  local_1c0 = (byte ***)0x0;
  local_1b0 = 1;
  local_1ac = 1;
  local_1aa = 1;
  local_1a8 = &DAT_41f0000000000000;
  local_1a0 = 0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_a0 = 0;
  local_1b8 = &DAT_00010101;
  FUN_7103770b30(plVar36,puVar15,(long ****)"group_header_keyhelp",ppppbVar22,param_5,param_6,
                 param_7,param_8);
  FUN_71037717d0(plVar36,4,"set_parts_listkey",ppppbVar22,param_5,param_6,param_7,param_8);
  lVar19 = *plVar36;
  lVar30 = *(long *)(lVar19 + 0x1b8);
  if (lVar30 != 0) {
    lVar29 = lVar19 + 0x1b8;
    lVar31 = lVar29;
    lVar32 = lVar30;
    do {
      if (3 < *(int *)(lVar32 + 0x20)) {
        lVar31 = lVar32;
      }
      lVar32 = *(long *)(lVar32 + (ulong)(*(int *)(lVar32 + 0x20) < 4) * 8);
    } while (lVar32 != 0);
    if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 5)) &&
       (plVar34 = *(long **)(lVar31 + 0x28), plVar34 != (long *)0x0)) {
      (**(code **)(*plVar34 + 0x1f8))(plVar34,0);
      (**(code **)(*plVar34 + 0x388))(plVar34,1,0);
      lVar19 = *plVar36;
      lVar30 = *(long *)(lVar19 + 0x1b8);
      lVar29 = lVar19 + 0x1b8;
    }
    lVar31 = lVar29;
    if (lVar30 != 0) {
      do {
        if (3 < *(int *)(lVar30 + 0x20)) {
          lVar31 = lVar30;
        }
        lVar30 = *(long *)(lVar30 + (ulong)(*(int *)(lVar30 + 0x20) < 4) * 8);
      } while (lVar30 != 0);
      if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 5)) &&
         (plVar34 = *(long **)(lVar31 + 0x28), plVar34 != (long *)0x0)) {
        (**(code **)(*plVar34 + 0x208))(plVar34,0);
        (**(code **)(*plVar34 + 0x388))(plVar34,1,0);
        lVar19 = *plVar36;
      }
    }
  }
  uVar26 = 6;
  uVar25 = 0;
  FUN_7103771930(lVar19,4,(long ****)0x6,(byte ****)0x0,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_88,(long)puVar15,(byte ****)"set_parts_listkey",uVar26,uVar25,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_210,(long)&local_88,(long ****)"set_txt_icon",uVar26,uVar25,param_5,param_6,
                 param_7,param_8);
  ppplVar12 = local_208[0];
  if ((undefined ***)(param_1 + 0xb8) != &local_210) {
    local_208[0] = (long ***)0x0;
    uVar16 = param_1[0xb9];
    param_1[0xb9] = (long)ppplVar12;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  ppplVar12 = local_208[0];
  local_210 = &PTR_FUN_710523d9a8;
  local_208[0] = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar12);
  }
  uVar16 = local_80;
  local_88 = &PTR_FUN_710523d988;
  local_80 = 0;
  if (uVar16 != 0) {
    uVar18 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40(uVar16);
  }
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x18) = 0x10;
  if (alStack_d0 == local_b0) {
    pcVar28 = *(code **)(*local_b0 + 0x20);
LAB_7101ba1a80:
    (*pcVar28)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_b0 + 0x28);
    goto LAB_7101ba1a80;
  }
  if (alStack_100 == local_e0) {
    pcVar28 = *(code **)(*local_e0 + 0x20);
LAB_7101ba1ab0:
    (*pcVar28)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101ba1ab0;
  }
  if (alStack_130 == local_110) {
    pcVar28 = *(code **)(*local_110 + 0x20);
LAB_7101ba1ae4:
    (*pcVar28)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar28 = *(code **)(*local_110 + 0x28);
    goto LAB_7101ba1ae4;
  }
  if (alStack_160 == local_140) {
    pcVar28 = *(code **)(*local_140 + 0x20);
LAB_7101ba1b14:
    (*pcVar28)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar28 = *(code **)(*local_140 + 0x28);
    goto LAB_7101ba1b14;
  }
  plVar34 = param_1 + 0x29f;
  if (alStack_190 == local_170) {
    pcVar28 = *(code **)(*local_170 + 0x20);
LAB_7101ba1b50:
    (*pcVar28)();
  }
  else if (local_170 != (long *)0x0) {
    pcVar28 = *(code **)(*local_170 + 0x28);
    goto LAB_7101ba1b50;
  }
  uVar18 = 0x40;
  uVar27 = 0x20;
  FUN_7101ba23f0((long)(param_1 + 0x15),0,0x40,0x20,param_5,param_6,param_7,param_8);
  uVar16 = 0;
  do {
    local_1b8 = (undefined1 *)CONCAT62(local_1b8._2_6_,0x101);
    local_1c0 = (byte ***)0x0;
    *(undefined2 *)((undefined4 *)((ulong)&local_1c0 | 10) + 1) = 0;
    *(undefined4 *)((ulong)&local_1c0 | 10) = 0;
    plVar33 = param_1 + uVar16 + 0x2a0;
    local_1b0 = 1;
    local_1ac = 1;
    local_1aa = 1;
    local_1a8 = &DAT_41f0000000000000;
    local_1a0 = 0;
    local_170 = (long *)0x0;
    local_140 = (long *)0x0;
    local_110 = (long *)0x0;
    local_e0 = (long *)0x0;
    local_b0 = (long *)0x0;
    local_a0 = 0;
    local_210 = (undefined **)&DAT_7105186040;
    local_1f0 = &local_210;
    FUN_7101989a30((long *)&local_210,alStack_160);
    if (&local_210 == local_1f0) {
      pcVar28 = (code *)(*local_1f0)[4];
LAB_7101ba1c64:
      (*pcVar28)();
    }
    else if (local_1f0 != (undefined ***)0x0) {
      pcVar28 = (code *)(*local_1f0)[5];
      goto LAB_7101ba1c64;
    }
    local_210 = (undefined **)&DAT_71051860d0;
    local_1f0 = &local_210;
    FUN_7101989a30((long *)&local_210,alStack_100);
    if (&local_210 == local_1f0) {
      pcVar28 = (code *)(*local_1f0)[4];
LAB_7101ba1ca8:
      (*pcVar28)();
    }
    else if (local_1f0 != (undefined ***)0x0) {
      pcVar28 = (code *)(*local_1f0)[5];
      goto LAB_7101ba1ca8;
    }
    uVar9 = uVar16 + 1;
    local_1b8 = (undefined1 *)((ulong)local_1b8 & 0xffffffffffffff00);
    local_1aa = 0;
    FUN_71003a4ca0((uint *)&local_210,"selector_list%d",uVar9 & 0xffffffff,uVar18,uVar27,param_5,
                   param_6,param_7,param_8);
    FUN_7103770b30(plVar33,puVar15,local_208,&local_1c0,param_5,param_6,param_7,param_8);
    lVar19 = 0;
    do {
      uVar10 = lVar19 + uVar16 * 0x24;
      iVar11 = (int)uVar10;
      uVar27 = uVar10 & 0xffffffff;
      FUN_71037717d0(plVar33,iVar11,"set_parts_item_%02d",uVar27,param_5,param_6,param_7,param_8);
      lVar30 = *(long *)(*plVar33 + 0x1b8);
      if (lVar30 != 0) {
        lVar29 = *plVar33 + 0x1b8;
        lVar31 = lVar29;
        lVar32 = lVar30;
        do {
          if (iVar11 <= *(int *)(lVar32 + 0x20)) {
            lVar31 = lVar32;
          }
          lVar32 = *(long *)(lVar32 + (ulong)(*(int *)(lVar32 + 0x20) < iVar11) * 8);
        } while (lVar32 != 0);
        if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) <= iVar11)) &&
           (plVar36 = *(long **)(lVar31 + 0x28), plVar36 != (long *)0x0)) {
          (**(code **)(*plVar36 + 0x1f8))(plVar36,1);
          (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
          lVar29 = *plVar33 + 0x1b8;
          lVar30 = *(long *)(*plVar33 + 0x1b8);
        }
        lVar31 = lVar29;
        if (lVar30 != 0) {
          do {
            if (iVar11 <= *(int *)(lVar30 + 0x20)) {
              lVar31 = lVar30;
            }
            lVar30 = *(long *)(lVar30 + (ulong)(*(int *)(lVar30 + 0x20) < iVar11) * 8);
          } while (lVar30 != 0);
          if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) <= iVar11)) &&
             (plVar36 = *(long **)(lVar31 + 0x28), plVar36 != (long *)0x0)) {
            (**(code **)(*plVar36 + 0x208))(plVar36,1);
            (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
          }
        }
      }
      uVar18 = uVar10 & 0xffffffff;
      FUN_7103776640(&local_220,(long)puVar15,(byte ****)"set_parts_item_%02d",uVar18,uVar27,param_5
                     ,param_6,param_7,param_8);
      FUN_71037780e0(&local_88,(long)&local_220,(long ****)"checkmark_off",uVar18,uVar27,param_5,
                     param_6,param_7,param_8);
      uVar21 = local_80;
      if ((undefined ***)(param_1 + uVar10 * 4 + 0xef) != &local_88) {
        local_80 = 0;
        uVar20 = param_1[uVar10 * 4 + 0xf0];
        param_1[uVar10 * 4 + 0xf0] = uVar21;
        if (uVar20 != 0) {
          FUN_710392eb40(uVar20);
        }
      }
      uVar21 = local_80;
      local_88 = &PTR_FUN_710523d9e8;
      local_80 = 0;
      if (uVar21 != 0) {
        FUN_710392eb40(uVar21);
      }
      FUN_71037780e0(&local_88,(long)&local_220,(long ****)"checkmark_on",uVar18,uVar27,param_5,
                     param_6,param_7,param_8);
      uVar21 = local_80;
      if ((undefined ***)(param_1 + uVar10 * 4 + 0xf1) != &local_88) {
        local_80 = 0;
        uVar20 = param_1[uVar10 * 4 + 0xf2];
        param_1[uVar10 * 4 + 0xf2] = uVar21;
        if (uVar20 != 0) {
          FUN_710392eb40(uVar20);
        }
      }
      uVar10 = local_80;
      local_88 = &PTR_FUN_710523d9e8;
      local_80 = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      uVar10 = local_218;
      local_220 = &PTR_FUN_710523d988;
      local_218 = 0;
      if (uVar10 != 0) {
        uVar21 = *(ulong *)(uVar10 + 0x18);
        *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar10 + 0x18) = 0;
        if (uVar21 != 0) {
          FUN_710392eb40(uVar21);
        }
        FUN_710392eb40(uVar10);
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x24);
    (**(code **)(*(long *)*plVar33 + 0x60))((long *)*plVar33,0);
    (**(code **)(*(long *)*plVar33 + 0x70))((long *)*plVar33,0);
    FUN_710376b960(*plVar33);
    if (alStack_d0 == local_b0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    else if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x28))();
    }
    if (alStack_100 == local_e0) {
      pcVar28 = *(code **)(*local_e0 + 0x20);
LAB_7101ba1f74:
      (*pcVar28)();
    }
    else if (local_e0 != (long *)0x0) {
      pcVar28 = *(code **)(*local_e0 + 0x28);
      goto LAB_7101ba1f74;
    }
    if (alStack_130 == local_110) {
      pcVar28 = *(code **)(*local_110 + 0x20);
LAB_7101ba1fa0:
      (*pcVar28)();
    }
    else if (local_110 != (long *)0x0) {
      pcVar28 = *(code **)(*local_110 + 0x28);
      goto LAB_7101ba1fa0;
    }
    if (alStack_160 == local_140) {
      pcVar28 = *(code **)(*local_140 + 0x20);
LAB_7101ba1fc8:
      (*pcVar28)();
    }
    else if (local_140 != (long *)0x0) {
      pcVar28 = *(code **)(*local_140 + 0x28);
      goto LAB_7101ba1fc8;
    }
    if (alStack_190 == local_170) {
      pcVar28 = *(code **)(*local_170 + 0x20);
LAB_7101ba1ff4:
      (*pcVar28)();
    }
    else if (local_170 != (long *)0x0) {
      pcVar28 = *(code **)(*local_170 + 0x28);
      goto LAB_7101ba1ff4;
    }
    uVar16 = uVar9;
  } while (uVar9 != 3);
  ppppbVar22 = &local_1c0;
  local_1b0 = 1;
  local_1c0 = (byte ***)0x0;
  local_1ac = 1;
  local_1aa = 1;
  local_1a8 = &DAT_41f0000000000000;
  local_1a0 = 0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_a0 = 0;
  local_1b8 = &DAT_00010101;
  FUN_7103770b30(plVar34,puVar15,(long ****)"group_list_navi",ppppbVar22,param_5,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar34,1,"set_parts_arrow_02",ppppbVar22,param_5,param_6,param_7,param_8);
  lVar19 = *plVar34;
  lVar30 = *(long *)(lVar19 + 0x1b8);
  if (lVar30 != 0) {
    lVar29 = lVar19 + 0x1b8;
    lVar31 = lVar29;
    lVar32 = lVar30;
    do {
      if (0 < *(int *)(lVar32 + 0x20)) {
        lVar31 = lVar32;
      }
      lVar32 = *(long *)(lVar32 + (ulong)(*(int *)(lVar32 + 0x20) < 1) * 8);
    } while (lVar32 != 0);
    if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 2)) &&
       (plVar33 = *(long **)(lVar31 + 0x28), plVar33 != (long *)0x0)) {
      (**(code **)(*plVar33 + 0x1f8))(plVar33,0);
      (**(code **)(*plVar33 + 0x388))(plVar33,1,0);
      lVar19 = *plVar34;
      lVar30 = *(long *)(lVar19 + 0x1b8);
      lVar29 = lVar19 + 0x1b8;
    }
    lVar31 = lVar29;
    if (lVar30 != 0) {
      do {
        if (0 < *(int *)(lVar30 + 0x20)) {
          lVar31 = lVar30;
        }
        lVar30 = *(long *)(lVar30 + (ulong)(*(int *)(lVar30 + 0x20) < 1) * 8);
      } while (lVar30 != 0);
      if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 2)) &&
         (plVar33 = *(long **)(lVar31 + 0x28), plVar33 != (long *)0x0)) {
        (**(code **)(*plVar33 + 0x208))(plVar33,0);
        (**(code **)(*plVar33 + 0x388))(plVar33,1,0);
        lVar19 = *plVar34;
      }
    }
  }
  uVar26 = 0;
  FUN_7103771930(lVar19,1,(long ****)&DAT_0000000d,(byte ****)0x0,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar34,0,"set_parts_arrow_03",uVar26,param_5,param_6,param_7,param_8);
  lVar19 = *plVar34;
  lVar30 = *(long *)(lVar19 + 0x1b8);
  if (lVar30 != 0) {
    lVar29 = lVar19 + 0x1b8;
    lVar31 = lVar29;
    lVar32 = lVar30;
    do {
      bVar14 = *(int *)(lVar32 + 0x20) < 0;
      if (!bVar14) {
        lVar31 = lVar32;
      }
      lVar32 = *(long *)(lVar32 + (ulong)bVar14 * 8);
    } while (lVar32 != 0);
    if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 1)) &&
       (plVar33 = *(long **)(lVar31 + 0x28), plVar33 != (long *)0x0)) {
      (**(code **)(*plVar33 + 0x1f8))(plVar33,0);
      (**(code **)(*plVar33 + 0x388))(plVar33,1,0);
      lVar19 = *plVar34;
      lVar30 = *(long *)(lVar19 + 0x1b8);
      lVar29 = lVar19 + 0x1b8;
    }
    lVar31 = lVar29;
    if (lVar30 != 0) {
      do {
        bVar14 = *(int *)(lVar30 + 0x20) < 0;
        if (!bVar14) {
          lVar31 = lVar30;
        }
        lVar30 = *(long *)(lVar30 + (ulong)bVar14 * 8);
      } while (lVar30 != 0);
      if (((lVar31 != lVar29) && (*(int *)(lVar31 + 0x20) < 1)) &&
         (plVar33 = *(long **)(lVar31 + 0x28), plVar33 != (long *)0x0)) {
        (**(code **)(*plVar33 + 0x208))(plVar33,0);
        (**(code **)(*plVar33 + 0x388))(plVar33,1,0);
        lVar19 = *plVar34;
      }
    }
  }
  FUN_7103771930(lVar19,0,(long ****)&DAT_0000000e,(byte ****)0x0,param_5,param_6,param_7,param_8);
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x34) = 0x100;
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x38) = 0x200;
  (**(code **)(*(long *)*plVar34 + 0x60))((long *)*plVar34,0);
  (**(code **)(*(long *)*plVar34 + 0x70))((long *)*plVar34,0);
  if (alStack_d0 == local_b0) {
    pcVar28 = *(code **)(*local_b0 + 0x20);
LAB_7101ba2308:
    (*pcVar28)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_b0 + 0x28);
    goto LAB_7101ba2308;
  }
  if (alStack_100 == local_e0) {
    pcVar28 = *(code **)(*local_e0 + 0x20);
LAB_7101ba2338:
    (*pcVar28)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101ba2338;
  }
  if (alStack_130 == local_110) {
    pcVar28 = *(code **)(*local_110 + 0x20);
LAB_7101ba2368:
    (*pcVar28)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar28 = *(code **)(*local_110 + 0x28);
    goto LAB_7101ba2368;
  }
  if (alStack_160 == local_140) {
    pcVar28 = *(code **)(*local_140 + 0x20);
  }
  else {
    if (local_140 == (long *)0x0) goto LAB_7101ba239c;
    pcVar28 = *(code **)(*local_140 + 0x28);
  }
  (*pcVar28)();
LAB_7101ba239c:
  if (alStack_190 == local_170) {
    pcVar28 = *(code **)(*local_170 + 0x20);
  }
  else {
    if (local_170 == (long *)0x0) {
      return;
    }
    pcVar28 = *(code **)(*local_170 + 0x28);
  }
  (*pcVar28)();
  return;
}

