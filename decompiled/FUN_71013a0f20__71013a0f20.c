// addr:      71013a0f20
// offset:    0x13a0f20
// name:      FUN_71013a0f20
// mangled:   
// signature: undefined __cdecl FUN_71013a0f20(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71013a0f20(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****__s;
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  long *plVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined **local_80;
  ulong local_78;
  long ***local_70;
  ulong local_68;
  
  lVar15 = *(long *)(param_1 + 0x50);
  puVar5 = (undefined8 *)FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&DAT_00000088;
      param_3 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar5 != (undefined8 *)0x0)) goto LAB_71013a0fa4;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_71013a0fa4:
  *puVar5 = &PTR_FUN_71050ab080;
  puVar5[1] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0x1ffffffff;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(undefined1 *)(puVar5 + 0xb) = 0;
  puVar5[0xf] = lVar15 + 8;
  *(undefined1 *)(puVar5 + 0xe) = 1;
  puVar5[9] = 0;
  puVar5[10] = 0;
  plVar7 = (long *)FUN_710392e290(0x10,0x1d0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&DAT_000001d0;
      param_3 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar6 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x1d0,param_3,param_4,param_5,param_6,param_7,param_8
                                         ), plVar7 != (long *)0x0)) goto LAB_71013a102c;
    }
    plVar7 = (long *)0x0;
  }
LAB_71013a102c:
  plVar14 = plVar7 + 1;
  *plVar7 = lVar15 + 8;
  puVar8 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar11 = extraout_x1;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&DAT_00000008;
      param_3 = &local_70;
      auVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      uVar11 = auVar16._8_8_;
      if (((auVar16._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar11 = extraout_x1_00, puVar8 != (undefined8 *)0x0)) goto LAB_71013a1090;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71013a1090:
  FUN_7103773200(puVar8,uVar11,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar7[1] = (long)puVar8;
  FUN_7101414b10(plVar7 + 2,plVar14,param_3,param_4,param_5,param_6,param_7,param_8);
  __s = (long ****)(plVar7 + 4);
  pppplVar12 = (long ****)&DAT_00000110;
  memset(__s,0,0x110);
  FUN_7101b50990(__s,extraout_x1_01,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  plVar7[0x26] = (long)&PTR_FUN_710523d9a8;
  plVar7[0x27] = 0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar12 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_71013a1124;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71013a1124:
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  plVar7[0x27] = (long)puVar8;
  plVar7[0x32] = 0;
  plVar7[0x33] = 0;
  plVar7[0x30] = 0;
  plVar7[0x31] = 0;
  plVar7[0x2e] = 0;
  plVar7[0x2f] = 0;
  plVar7[0x2c] = 0;
  plVar7[0x2d] = 0;
  plVar7[0x2a] = 0;
  plVar7[0x2b] = 0;
  plVar7[0x28] = (long)&PTR_FUN_710523d9a8;
  plVar7[0x29] = 0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar12 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_71013a119c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71013a119c:
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  plVar7[0x29] = (long)puVar8;
  plVar7[0x2a] = (long)&PTR_FUN_710523d9a8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar12 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_71013a11fc;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71013a11fc:
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  plVar7[0x2b] = (long)puVar8;
  plVar7[0x2c] = (long)&PTR_FUN_710523d9a8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar12 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_71013a125c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71013a125c:
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  plVar7[0x2d] = (long)puVar8;
  plVar7[0x2e] = (long)&PTR_FUN_710523d9a8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar12 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_71013a12bc;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71013a12bc:
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  plVar7[0x2f] = (long)puVar8;
  plVar7[0x30] = (long)&PTR_FUN_710523d9a8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar12 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_71013a131c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71013a131c:
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  plVar7[0x31] = (long)puVar8;
  plVar7[0x32] = (long)&PTR_FUN_710523d9a8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar12 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_71013a137c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71013a137c:
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  plVar7[0x33] = (long)puVar8;
  plVar7[0x38] = 0;
  plVar7[0x39] = 0;
  plVar7[0x36] = 0;
  plVar7[0x37] = 0;
  plVar7[0x34] = (long)&PTR_FUN_710523d9a8;
  plVar7[0x35] = 0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar12 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_71013a13e8;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71013a13e8:
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  plVar7[0x35] = (long)puVar8;
  plVar7[0x36] = (long)&PTR_FUN_710523d9a8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar12 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_71013a1448;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71013a1448:
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  plVar7[0x37] = (long)puVar8;
  plVar7[0x38] = (long)&PTR_FUN_710523d9a8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      local_70 = (long ***)&SUB_00000020;
      pppplVar12 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_71013a14a8;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71013a14a8:
  puVar8[2] = 0;
  puVar8[3] = 0;
  pppplVar12 = (long ****)&DAT_7104544ac8;
  *puVar8 = 0;
  puVar8[1] = 0;
  ppppbVar13 = (byte ****)0x1;
  plVar7[0x39] = (long)puVar8;
  FUN_71032cbf30(plVar14,*(long *)*plVar7,(ulong *)&DAT_7104544ac8,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  FUN_71037780e0(&local_70,*(long *)plVar7[1] + 8,(long ****)&DAT_7104421055,pppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != __s) {
    local_68 = 0;
    uVar9 = plVar7[5];
    plVar7[5] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_71037780e0(&local_70,*(long *)plVar7[1] + 8,(long ****)&DAT_710428ff7d,pppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long ****)(plVar7 + 6)) {
    local_68 = 0;
    uVar9 = plVar7[7];
    plVar7[7] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_71037780e0(&local_70,*(long *)plVar7[1] + 8,(long ****)"gauge_move",pppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long ****)(plVar7 + 8)) {
    local_68 = 0;
    uVar9 = plVar7[9];
    plVar7[9] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_71037780e0(&local_70,*(long *)plVar7[1] + 8,(long ****)"countup_hit",pppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long ****)(plVar7 + 10)) {
    local_68 = 0;
    uVar9 = plVar7[0xb];
    plVar7[0xb] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_71037780e0(&local_70,*(long *)plVar7[1] + 8,(long ****)"in_corp",pppplVar12,ppppbVar13,param_5
                 ,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long ****)(plVar7 + 0xc)) {
    local_68 = 0;
    uVar9 = plVar7[0xd];
    plVar7[0xd] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_71037780e0(&local_70,*(long *)plVar7[1] + 8,(long ****)"in_grats",pppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long ****)(plVar7 + 0xe)) {
    local_68 = 0;
    uVar9 = plVar7[0xf];
    plVar7[0xf] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_71037780e0(&local_70,*(long *)plVar7[1] + 8,(long ****)"out_grats",pppplVar12,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long ****)(plVar7 + 0x10)) {
    local_68 = 0;
    uVar9 = plVar7[0x11];
    plVar7[0x11] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_70,*(long *)*plVar14 + 8,(long ****)"set_txt_hit_num_00",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long ****)(plVar7 + 0x26)) {
    local_68 = 0;
    uVar9 = plVar7[0x27];
    plVar7[0x27] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_70,*(long *)*plVar14 + 8,(long ****)"fg_00",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long ****)(plVar7 + 0x28)) {
    local_68 = 0;
    uVar9 = plVar7[0x29];
    plVar7[0x29] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_70,*(long *)*plVar14 + 8,(long ****)"set_parts_pointer_00",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long ****)(plVar7 + 0x2a)) {
    local_68 = 0;
    uVar9 = plVar7[0x2b];
    plVar7[0x2b] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_70,*(long *)plVar7[1] + 8,(byte ****)"set_parts_pointer_00",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_71037780e0(&local_80,(long)&local_70,(long ****)"icon_off",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_78;
  if (&local_80 != (undefined ***)(plVar7 + 0x12)) {
    local_78 = 0;
    uVar9 = plVar7[0x13];
    plVar7[0x13] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_78;
  local_80 = &PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_71037780e0(&local_80,(long)&local_70,(long ****)"icon_in",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_78;
  if (&local_80 != (undefined ***)(plVar7 + 0x14)) {
    local_78 = 0;
    uVar9 = plVar7[0x15];
    plVar7[0x15] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_78;
  local_80 = &PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar6 != 0) {
    uVar9 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_70,*(long *)*plVar14 + 8,(long ****)"set_parts_pointer_01",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long ****)(plVar7 + 0x2c)) {
    local_68 = 0;
    uVar9 = plVar7[0x2d];
    plVar7[0x2d] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_70,*(long *)plVar7[1] + 8,(byte ****)"set_parts_pointer_01",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_71037780e0(&local_80,(long)&local_70,(long ****)"icon_off",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_78;
  if (&local_80 != (undefined ***)(plVar7 + 0x16)) {
    local_78 = 0;
    uVar9 = plVar7[0x17];
    plVar7[0x17] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_78;
  local_80 = &PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_71037780e0(&local_80,(long)&local_70,(long ****)"icon_in",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_78;
  if (&local_80 != (undefined ***)(plVar7 + 0x18)) {
    local_78 = 0;
    uVar9 = plVar7[0x19];
    plVar7[0x19] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_78;
  local_80 = &PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar6 != 0) {
    uVar9 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_70,*(long *)*plVar14 + 8,(long ****)"set_parts_pointer_02",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long ****)(plVar7 + 0x2e)) {
    local_68 = 0;
    uVar9 = plVar7[0x2f];
    plVar7[0x2f] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_70,*(long *)plVar7[1] + 8,(byte ****)"set_parts_pointer_02",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_71037780e0(&local_80,(long)&local_70,(long ****)"icon_off",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_78;
  if (&local_80 != (undefined ***)(plVar7 + 0x1a)) {
    local_78 = 0;
    uVar9 = plVar7[0x1b];
    plVar7[0x1b] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_78;
  local_80 = &PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_71037780e0(&local_80,(long)&local_70,(long ****)"icon_in",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_78;
  if (&local_80 != (undefined ***)(plVar7 + 0x1c)) {
    local_78 = 0;
    uVar9 = plVar7[0x1d];
    plVar7[0x1d] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_78;
  local_80 = &PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar6 != 0) {
    uVar9 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_70,*(long *)*plVar14 + 8,(long ****)"set_parts_pointer_03",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long ****)(plVar7 + 0x30)) {
    local_68 = 0;
    uVar9 = plVar7[0x31];
    plVar7[0x31] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_70,*(long *)plVar7[1] + 8,(byte ****)"set_parts_pointer_03",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_71037780e0(&local_80,(long)&local_70,(long ****)"icon_off",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_78;
  if (&local_80 != (undefined ***)(plVar7 + 0x1e)) {
    local_78 = 0;
    uVar9 = plVar7[0x1f];
    plVar7[0x1f] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_78;
  local_80 = &PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_71037780e0(&local_80,(long)&local_70,(long ****)"icon_in",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_78;
  if (&local_80 != (undefined ***)(plVar7 + 0x20)) {
    local_78 = 0;
    uVar9 = plVar7[0x21];
    plVar7[0x21] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_78;
  local_80 = &PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar6 != 0) {
    uVar9 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_70,*(long *)*plVar14 + 8,(long ****)"set_parts_pointer_04",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  uVar6 = local_68;
  if (&local_70 != (long ****)(plVar7 + 0x32)) {
    local_68 = 0;
    uVar9 = plVar7[0x33];
    plVar7[0x33] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_70,*(long *)plVar7[1] + 8,(byte ****)"set_parts_pointer_04",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_71037780e0(&local_80,(long)&local_70,(long ****)"icon_off",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_78;
  if (&local_80 != (undefined ***)(plVar7 + 0x22)) {
    local_78 = 0;
    uVar9 = plVar7[0x23];
    plVar7[0x23] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_78;
  local_80 = &PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_71037780e0(&local_80,(long)&local_70,(long ****)"icon_in",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_78;
  if (&local_80 != (undefined ***)(plVar7 + 0x24)) {
    local_78 = 0;
    uVar9 = plVar7[0x25];
    plVar7[0x25] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_78;
  local_80 = &PTR_FUN_710523d9e8;
  local_78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar6 != 0) {
    uVar9 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_70,*(long *)*plVar14 + 8,(byte ****)"set_parts_score_00",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_80,(long)&local_70,(long ****)"set_txt_num",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_78;
  if (&local_80 != (undefined ***)(plVar7 + 0x34)) {
    local_78 = 0;
    uVar9 = plVar7[0x35];
    plVar7[0x35] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar6 != 0) {
    uVar9 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_70,*(long *)*plVar14 + 8,(byte ****)"set_parts_score_01",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_80,(long)&local_70,(long ****)"set_txt_num",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_78;
  if (&local_80 != (undefined ***)(plVar7 + 0x36)) {
    local_78 = 0;
    uVar9 = plVar7[0x37];
    plVar7[0x37] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar6 != 0) {
    uVar9 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_70,*(long *)*plVar14 + 8,(byte ****)"set_parts_score_02",pppplVar12,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_80,(long)&local_70,(long ****)"set_txt_num",pppplVar12,ppppbVar13,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_78;
  uVar11 = extraout_x1_02;
  if (&local_80 != (undefined ***)(plVar7 + 0x38)) {
    local_78 = 0;
    uVar9 = plVar7[0x39];
    plVar7[0x39] = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
      uVar11 = extraout_x1_03;
    }
  }
  uVar6 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
    uVar11 = extraout_x1_04;
  }
  uVar6 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar6 != 0) {
    uVar9 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar6);
    uVar11 = extraout_x1_05;
  }
  puVar5[0x10] = plVar7;
  puVar5[2] = &DAT_7105333600;
  uVar4 = DAT_7105333664;
  *(undefined4 *)(puVar5 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar5 + 0x6c) = uVar4;
  do {
    uVar3 = DAT_7105333650;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar2) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar3 & 1) != 0);
  puVar5[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar5;
  FUN_71032caea0((long)puVar5,uVar11,pppplVar12,ppppbVar13,param_5,param_6,param_7,param_8);
  lVar10 = *(long *)(lVar15 + 0x10);
  *(undefined8 **)(lVar15 + 0x10) = puVar5;
  if (lVar10 != 0) {
    FUN_71032cad20(lVar10);
    return;
  }
  return;
}

