// addr:      7101390d00
// offset:    0x1390d00
// name:      FUN_7101390d00
// mangled:   
// signature: undefined __cdecl FUN_7101390d00(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101390d00(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar12;
  undefined8 extraout_x1_01;
  long ****pppplVar13;
  byte ****ppppbVar14;
  long lVar15;
  long ****pppplVar16;
  undefined1 auVar17 [16];
  long ***local_78;
  ulong local_70;
  undefined4 local_64;
  
  lVar15 = *(long *)(param_1 + 0x50);
  puVar6 = (undefined8 *)FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000088;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101390d88;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101390d88:
  *puVar6 = &PTR_FUN_71050aaf68;
  puVar6[1] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0x1ffffffff;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined1 *)(puVar6 + 0xb) = 0;
  puVar6[0xf] = lVar15 + 8;
  *(undefined1 *)(puVar6 + 0xe) = 1;
  puVar6[9] = 0;
  puVar6[10] = 0;
  plVar8 = (long *)FUN_710392e290(0x10,0xf8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_000000f8;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0xf8,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101390e10;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101390e10:
  *plVar8 = (long)puVar6;
  plVar1 = plVar8 + 2;
  *(undefined1 *)(plVar8 + 1) = 0;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar12 = extraout_x1;
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000008;
      param_3 = &local_78;
      auVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      uVar12 = auVar17._8_8_;
      if (((auVar17._0_8_ & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar12 = extraout_x1_00, puVar9 != (undefined8 *)0x0)) goto LAB_7101390e78;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101390e78:
  FUN_7103773200(puVar9,uVar12,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar8[2] = (long)puVar9;
  FUN_7101414b10(plVar8 + 3,plVar1,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar8[5] = (long)&PTR_FUN_710523d9e8;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101390ef8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101390ef8:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  pppplVar16 = (long ****)(plVar8 + 7);
  *pppplVar16 = (long ***)&PTR_FUN_710523d9e8;
  plVar8[6] = (long)puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101390f68;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101390f68:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  plVar8[9] = (long)&PTR_FUN_710523d9e8;
  plVar8[8] = (long)puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101390fd4;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101390fd4:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  plVar8[0xb] = (long)&PTR_FUN_710523d9e8;
  plVar8[10] = (long)puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101391044;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101391044:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  plVar8[0xd] = (long)&PTR_FUN_710523d9e8;
  plVar8[0xc] = (long)puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_71013910b0;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71013910b0:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  plVar8[0xf] = (long)&PTR_FUN_710523d9e8;
  plVar8[0xe] = (long)puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101391120;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101391120:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  plVar8[0x11] = (long)&PTR_FUN_710523d9e8;
  plVar8[0x10] = (long)puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_710139118c;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710139118c:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  plVar8[0x13] = (long)&PTR_FUN_710523d9e8;
  plVar8[0x12] = (long)puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_71013911fc;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71013911fc:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  plVar8[0x15] = (long)&PTR_FUN_710523d9e8;
  plVar8[0x14] = (long)puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101391264;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101391264:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  plVar8[0x17] = (long)&PTR_FUN_710523d9e8;
  plVar8[0x16] = (long)puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_71013912d0;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71013912d0:
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  plVar8[0x19] = (long)&PTR_FUN_710523d9a8;
  plVar8[0x18] = (long)puVar9;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_710139134c;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710139134c:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  plVar8[0x1b] = (long)&PTR_FUN_710523d9a8;
  plVar8[0x1a] = (long)puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_71013913b4;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71013913b4:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  plVar8[0x1d] = (long)&PTR_FUN_710523d9a8;
  plVar8[0x1c] = (long)puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      pppplVar13 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar13,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_710139141c;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710139141c:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  plVar8[0x1e] = (long)puVar9;
  pppplVar13 = (long ****)&DAT_7104544a98;
  if ((char)plVar8[1] != '\0') {
    pppplVar13 = (long ****)&DAT_7104544aa0;
  }
  ppppbVar14 = (byte ****)0x0;
  FUN_71032cbf30(plVar1,**(long **)(*plVar8 + 0x78),(ulong *)pppplVar13,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  FUN_71037780e0(&local_78,*(long *)plVar8[2] + 8,(long ****)&DAT_7104421055,pppplVar13,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  uVar7 = local_70;
  if (&local_78 != (long ****)(plVar8 + 5)) {
    local_70 = 0;
    uVar10 = plVar8[6];
    plVar8[6] = uVar7;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar1 + 8,(long ****)&DAT_710428ff7d,pppplVar13,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  uVar7 = local_70;
  if (&local_78 != pppplVar16) {
    local_70 = 0;
    uVar10 = plVar8[8];
    plVar8[8] = uVar7;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar1 + 8,(long ****)"gauge_sec_onoff",pppplVar13,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  uVar7 = local_70;
  if (&local_78 != (long ****)(plVar8 + 9)) {
    local_70 = 0;
    uVar10 = plVar8[10];
    plVar8[10] = uVar7;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar1 + 8,(long ****)"name_bg_col",pppplVar13,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  uVar7 = local_70;
  if (&local_78 != (long ****)(plVar8 + 0xb)) {
    local_70 = 0;
    uVar10 = plVar8[0xc];
    plVar8[0xc] = uVar7;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar1 + 8,(long ****)"gauge_00",pppplVar13,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_70;
  if (&local_78 != (long ****)(plVar8 + 0xd)) {
    local_70 = 0;
    uVar10 = plVar8[0xe];
    plVar8[0xe] = uVar7;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar1 + 8,(long ****)"gauge_01",pppplVar13,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_70;
  if (&local_78 != (long ****)(plVar8 + 0xf)) {
    local_70 = 0;
    uVar10 = plVar8[0x10];
    plVar8[0x10] = uVar7;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar1 + 8,(long ****)"gauge_colanim_00",pppplVar13,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  uVar7 = local_70;
  if (&local_78 != (long ****)(plVar8 + 0x11)) {
    local_70 = 0;
    uVar10 = plVar8[0x12];
    plVar8[0x12] = uVar7;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar1 + 8,(long ****)"gauge_colanim_01",pppplVar13,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  uVar7 = local_70;
  if (&local_78 != (long ****)(plVar8 + 0x13)) {
    local_70 = 0;
    uVar10 = plVar8[0x14];
    plVar8[0x14] = uVar7;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar1 + 8,(long ****)"bg_colanim_00",pppplVar13,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  uVar7 = local_70;
  if (&local_78 != (long ****)(plVar8 + 0x15)) {
    local_70 = 0;
    uVar10 = plVar8[0x16];
    plVar8[0x16] = uVar7;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar1 + 8,(long ****)"boss_face",pppplVar13,ppppbVar14,param_5
                 ,param_6,param_7,param_8);
  uVar7 = local_70;
  if (&local_78 != (long ****)(plVar8 + 0x17)) {
    local_70 = 0;
    uVar10 = plVar8[0x18];
    plVar8[0x18] = uVar7;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_78,*(long *)*plVar1 + 8,(long ****)"set_txt_name_00",pppplVar13,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  uVar7 = local_70;
  if (&local_78 != (long ****)(plVar8 + 0x19)) {
    local_70 = 0;
    uVar10 = plVar8[0x1a];
    plVar8[0x1a] = uVar7;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_78,*(long *)*plVar1 + 8,(long ****)"set_txt_name_01",pppplVar13,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  uVar7 = local_70;
  if (&local_78 != (long ****)(plVar8 + 0x1b)) {
    local_70 = 0;
    uVar10 = plVar8[0x1c];
    plVar8[0x1c] = uVar7;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_78,*(long *)*plVar1 + 8,(long ****)"set_rep_face",pppplVar13,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  uVar7 = local_70;
  if (&local_78 != (long ****)(plVar8 + 0x1d)) {
    local_70 = 0;
    uVar10 = plVar8[0x1e];
    plVar8[0x1e] = uVar7;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_710377b140((long)pppplVar16);
  puVar6[0x10] = plVar8;
  puVar6[2] = &DAT_7105333600;
  uVar5 = DAT_7105333664;
  *(undefined4 *)(puVar6 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar6 + 0x6c) = uVar5;
  do {
    uVar4 = DAT_7105333650;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar3) {
      DAT_7105333650 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || (uVar4 & 1) != 0);
  puVar6[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar6;
  FUN_71032caea0((long)puVar6,extraout_x1_01,pppplVar13,ppppbVar14,param_5,param_6,param_7,param_8);
  lVar11 = *(long *)(lVar15 + 0x10);
  *(undefined8 **)(lVar15 + 0x10) = puVar6;
  if (lVar11 != 0) {
    FUN_71032cad20(lVar11);
    return;
  }
  return;
}

