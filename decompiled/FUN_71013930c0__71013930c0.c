// addr:      71013930c0
// offset:    0x13930c0
// name:      FUN_71013930c0
// mangled:   
// signature: undefined __cdecl FUN_71013930c0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71013930c0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 uVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  long lVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  long ***local_78;
  undefined8 *local_70;
  undefined4 local_64;
  
  lVar13 = *(long *)(param_1 + 0x50);
  plVar9 = (long *)(lVar13 + 0x10);
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000088;
      param_3 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_710139314c;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_710139314c:
  *puVar4 = &PTR_FUN_71050aafd8;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0x1ffffffff;
  puVar4[0xf] = plVar9;
  *(undefined1 *)(puVar4 + 0xe) = 1;
  puVar6 = (undefined8 *)FUN_710392e290(0x10,0xb0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_000000b0;
      param_3 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0xb0,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_71013931d8;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_71013931d8:
  puVar7 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar10 = extraout_x1;
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000008;
      param_3 = &local_78;
      auVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      uVar10 = auVar15._8_8_;
      if (((auVar15._0_8_ & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar10 = extraout_x1_00, puVar7 != (undefined8 *)0x0)) goto LAB_7101393234;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101393234:
  FUN_7103773200(puVar7,uVar10,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(puVar6 + 1) = 0xb;
  *puVar6 = puVar7;
  puVar6[2] = &PTR_FUN_710523d9e8;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_71013932b0;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71013932b0:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[4] = &PTR_FUN_710523d9e8;
  puVar6[3] = puVar7;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_7101393320;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101393320:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[6] = &PTR_FUN_710523d9e8;
  puVar6[5] = puVar7;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_710139338c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_710139338c:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[8] = &PTR_FUN_710523d9e8;
  puVar6[7] = puVar7;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_71013933fc;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71013933fc:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[10] = &PTR_FUN_710523d9e8;
  puVar6[9] = puVar7;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_7101393464;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101393464:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[0xc] = &PTR_FUN_710523d9e8;
  puVar6[0xb] = puVar7;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_71013934d0;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71013934d0:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[0xe] = &PTR_FUN_710523d9e8;
  puVar6[0xd] = puVar7;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_7101393538;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101393538:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[0x10] = &PTR_FUN_710523d9e8;
  puVar6[0xf] = puVar7;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_71013935a4;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71013935a4:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[0x12] = &PTR_FUN_710523d9e8;
  puVar6[0x11] = puVar7;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      param_3 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_710139360c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_710139360c:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[0x14] = &PTR_FUN_710523d9e8;
  puVar6[0x13] = puVar7;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      pppplVar11 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar11,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_7101393678;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101393678:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  pppplVar11 = (long ****)&DAT_7104544ab0;
  puVar6[0x15] = puVar7;
  ppppbVar12 = (byte ****)0x0;
  puVar4[0x10] = puVar6;
  FUN_71032cbf30(puVar6,*plVar9,(ulong *)&DAT_7104544ab0,(byte ****)0x0,param_5,param_6,param_7,
                 param_8);
  *(undefined4 *)(**(long **)*puVar6 + 0x650) = 1;
  lVar8 = *(long *)*puVar6 + 8;
  FUN_71037780e0(&local_78,lVar8,(long ****)"count_05",pppplVar11,ppppbVar12,param_5,param_6,param_7
                 ,param_8);
  puVar7 = local_70;
  if (&local_78 != (long ****)(puVar6 + 2)) {
    local_70 = (undefined8 *)0x0;
    uVar5 = puVar6[3];
    puVar6[3] = puVar7;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  puVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  FUN_71037780e0(&local_78,lVar8,(long ****)"count_03",pppplVar11,ppppbVar12,param_5,param_6,param_7
                 ,param_8);
  puVar7 = local_70;
  if (&local_78 != (long ****)(puVar6 + 4)) {
    local_70 = (undefined8 *)0x0;
    uVar5 = puVar6[5];
    puVar6[5] = puVar7;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  puVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  FUN_71037780e0(&local_78,lVar8,(long ****)&DAT_7104443319,pppplVar11,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  puVar7 = local_70;
  if (&local_78 != (long ****)(puVar6 + 6)) {
    local_70 = (undefined8 *)0x0;
    uVar5 = puVar6[7];
    puVar6[7] = puVar7;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  puVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  FUN_71037780e0(&local_78,lVar8,(long ****)"timeup",pppplVar11,ppppbVar12,param_5,param_6,param_7,
                 param_8);
  puVar7 = local_70;
  if (&local_78 != (long ****)(puVar6 + 8)) {
    local_70 = (undefined8 *)0x0;
    uVar5 = puVar6[9];
    puVar6[9] = puVar7;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  puVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  FUN_71037780e0(&local_78,lVar8,(long ****)"suddendeath",pppplVar11,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  puVar7 = local_70;
  if (&local_78 != (long ****)(puVar6 + 10)) {
    local_70 = (undefined8 *)0x0;
    uVar5 = puVar6[0xb];
    puVar6[0xb] = puVar7;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  puVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  FUN_71037780e0(&local_78,lVar8,(long ****)"gameset",pppplVar11,ppppbVar12,param_5,param_6,param_7,
                 param_8);
  puVar7 = local_70;
  if (&local_78 != (long ****)(puVar6 + 0xc)) {
    local_70 = (undefined8 *)0x0;
    uVar5 = puVar6[0xd];
    puVar6[0xd] = puVar7;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  puVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  FUN_71037780e0(&local_78,lVar8,(long ****)"complete",pppplVar11,ppppbVar12,param_5,param_6,param_7
                 ,param_8);
  puVar7 = local_70;
  if (&local_78 != (long ****)(puVar6 + 0xe)) {
    local_70 = (undefined8 *)0x0;
    uVar5 = puVar6[0xf];
    puVar6[0xf] = puVar7;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  puVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  FUN_71037780e0(&local_78,lVar8,(long ****)"success",pppplVar11,ppppbVar12,param_5,param_6,param_7,
                 param_8);
  puVar7 = local_70;
  if (&local_78 != (long ****)(puVar6 + 0x10)) {
    local_70 = (undefined8 *)0x0;
    uVar5 = puVar6[0x11];
    puVar6[0x11] = puVar7;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  puVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  FUN_71037780e0(&local_78,lVar8,(long ****)"failure",pppplVar11,ppppbVar12,param_5,param_6,param_7,
                 param_8);
  puVar7 = local_70;
  if (&local_78 != (long ****)(puVar6 + 0x12)) {
    local_70 = (undefined8 *)0x0;
    uVar5 = puVar6[0x13];
    puVar6[0x13] = puVar7;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  puVar7 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  FUN_71037780e0(&local_78,lVar8,(long ****)"ready",pppplVar11,ppppbVar12,param_5,param_6,param_7,
                 param_8);
  puVar7 = local_70;
  if (&local_78 != (long ****)(puVar6 + 0x14)) {
    local_70 = (undefined8 *)0x0;
    uVar5 = puVar6[0x15];
    puVar6[0x15] = puVar7;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_7103776910(&local_78,lVar8,(long ****)"txt_sudden",pppplVar11,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  puVar6 = local_70;
  if (*(long **)((long)local_70 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_70 + 0x10),(byte *)"SUDDEN\nDEATH");
  }
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_7103776910(&local_78,lVar8,(long ****)"txt_complete_00",pppplVar11,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  puVar6 = local_70;
  if (*(long **)((long)local_70 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_70 + 0x10),(byte *)"COMPLETE!");
  }
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_7103776910(&local_78,lVar8,(long ****)"txt_success_00",pppplVar11,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  puVar6 = local_70;
  if (*(long **)((long)local_70 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_70 + 0x10),(byte *)"SUCCESS!");
  }
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_7103776910(&local_78,lVar8,(long ****)"txt_failure_00",pppplVar11,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  puVar6 = local_70;
  if (*(long **)((long)local_70 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_70 + 0x10),(byte *)"FAILURE!");
  }
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_7103776910(&local_78,lVar8,(long ****)"txt_ready_00",pppplVar11,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  puVar6 = local_70;
  uVar10 = extraout_x1_01;
  if (*(long **)((long)local_70 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_70 + 0x10),(byte *)"Ready!");
    uVar10 = extraout_x1_02;
  }
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
    uVar10 = extraout_x1_03;
  }
  puVar4[2] = &DAT_7105333600;
  *(undefined4 *)(puVar4 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar4 + 0x6c) = DAT_7105333664;
  do {
    uVar3 = DAT_7105333650;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar2) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar3 & 1) != 0);
  puVar4[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar4;
  FUN_71032caea0((long)puVar4,uVar10,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  lVar8 = *(long *)(lVar13 + 0x18);
  *(undefined8 **)(lVar13 + 0x18) = puVar4;
  if (lVar8 != 0) {
    FUN_71032cad20(lVar8);
  }
  puVar4 = (undefined8 *)
           FUN_710392e290(0x10,0x88,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000088;
      pppplVar11 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101393bd0;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101393bd0:
  *puVar4 = &PTR_FUN_71050ab010;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0x1ffffffff;
  puVar4[0xf] = plVar9;
  *(undefined1 *)(puVar4 + 0xe) = 1;
  plVar9 = (long *)FUN_710392e290(0x10,0x148,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000148;
      pppplVar11 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x148,pppplVar11,ppppbVar12,param_5,param_6,param_7,
                                          param_8), plVar9 != (long *)0x0)) goto LAB_7101393c5c;
    }
    plVar9 = (long *)0x0;
  }
LAB_7101393c5c:
  plVar14 = plVar9 + 1;
  *plVar9 = (long)puVar4;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,8,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  uVar10 = extraout_x1_04;
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000008;
      pppplVar11 = &local_78;
      auVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      uVar10 = auVar15._8_8_;
      if (((auVar15._0_8_ & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8),
         uVar10 = extraout_x1_05, puVar6 != (undefined8 *)0x0)) goto LAB_7101393cc0;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101393cc0:
  FUN_7103773200(puVar6,uVar10,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  plVar9[0xb] = (long)&PTR_FUN_710523d9a8;
  *(undefined1 *)(plVar9 + 3) = 0;
  plVar9[1] = (long)puVar6;
  plVar9[2] = 0;
  plVar9[0xc] = 0;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000020;
      pppplVar11 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101393d30;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101393d30:
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  plVar9[0xd] = (long)&PTR_FUN_710523d9e8;
  plVar9[0xc] = (long)puVar6;
  plVar9[0xe] = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0xf] = 0;
  plVar9[0x10] = 0;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      pppplVar11 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101393da4;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101393da4:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  plVar9[0xf] = (long)&PTR_FUN_710523d9e8;
  plVar9[0xe] = (long)puVar6;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      pppplVar11 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101393e10;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101393e10:
  *(undefined1 *)(puVar6 + 2) = 1;
  *puVar6 = 0;
  puVar6[1] = 0;
  plVar9[0x11] = (long)&PTR_FUN_710523d9e8;
  plVar9[0x10] = (long)puVar6;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&SUB_00000018;
      pppplVar11 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7101393e78;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7101393e78:
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 1;
  plVar9[0x25] = 0;
  plVar9[0x26] = 0xffffffff;
  pppplVar11 = (long ****)&DAT_7104544ab8;
  ppppbVar12 = (byte ****)0x0;
  *(undefined4 *)(plVar9 + 0x27) = 0xffffffff;
  *(undefined1 *)((long)plVar9 + 0x13c) = 0;
  plVar9[0x18] = 0;
  *(undefined2 *)(plVar9 + 0x28) = 0;
  *(undefined4 *)((long)plVar9 + 0x144) = 4;
  plVar9[0x12] = (long)puVar6;
  plVar9[0x13] = (long)plVar9;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0;
  plVar9[0x23] = 0;
  plVar9[0x24] = 0;
  plVar9[0x21] = 0;
  plVar9[0x22] = 0;
  plVar9[0x1f] = 0;
  plVar9[0x20] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  FUN_71032cbf30(plVar14,**(long **)(*plVar9 + 0x78),(ulong *)&DAT_7104544ab8,(byte ****)0x0,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_78,*(long *)plVar9[1] + 8,(long ****)"set_txt_center",pppplVar11,ppppbVar12,
                 param_5,param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar9 + 0xb)) {
    *(undefined8 *)plVar9[0xc] = *local_70;
    *(undefined8 *)(plVar9[0xc] + 8) = local_70[1];
    *(undefined8 *)(plVar9[0xc] + 0x10) = local_70[2];
    *(undefined8 *)(plVar9[0xc] + 0x18) = local_70[3];
  }
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar14 + 8,(long ****)"common",pppplVar11,ppppbVar12,param_5,
                 param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar9 + 0xd)) {
    *(undefined8 *)plVar9[0xe] = *local_70;
    *(undefined8 *)(plVar9[0xe] + 8) = local_70[1];
    *(undefined1 *)(plVar9[0xe] + 0x10) = *(undefined1 *)(local_70 + 2);
  }
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  bVar2 = local_70 != (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  if (bVar2) {
    local_70 = (undefined8 *)0x0;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar14 + 8,(long ****)"victory",pppplVar11,ppppbVar12,param_5,
                 param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar9 + 0xf)) {
    *(undefined8 *)plVar9[0x10] = *local_70;
    *(undefined8 *)(plVar9[0x10] + 8) = local_70[1];
    *(undefined1 *)(plVar9[0x10] + 0x10) = *(undefined1 *)(local_70 + 2);
  }
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  bVar2 = local_70 != (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  if (bVar2) {
    local_70 = (undefined8 *)0x0;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)*plVar14 + 8,(long ****)&DAT_71043ad452,pppplVar11,ppppbVar12,
                 param_5,param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar9 + 0x11)) {
    *(undefined8 *)plVar9[0x12] = *local_70;
    *(undefined8 *)(plVar9[0x12] + 8) = local_70[1];
    *(undefined1 *)(plVar9[0x12] + 0x10) = *(undefined1 *)(local_70 + 2);
  }
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  bVar2 = local_70 != (undefined8 *)0x0;
  uVar10 = extraout_x1_06;
  local_70 = (undefined8 *)0;
  if (bVar2) {
    local_70 = (undefined8 *)0x0;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)puVar6);
    uVar10 = extraout_x1_07;
  }
  plVar9[0x18] = (long)FUN_7101b4fb80;
  plVar9[0x19] = 0;
  plVar9[0x1a] = (long)FUN_7101b4fbc0;
  plVar9[0x1b] = 0;
  if (0x12 < *(uint *)((long)plVar9 + 300)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)plVar9 + (long)(int)*(uint *)((long)plVar9 + 300) * 4 + 0xe0) = 0;
  puVar4[0x10] = plVar9;
  puVar4[2] = &DAT_7105333600;
  *(undefined4 *)(puVar4 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar4 + 0x6c) = DAT_7105333664;
  do {
    uVar3 = DAT_7105333650;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar2) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar3 & 1) != 0);
  puVar4[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar4;
  FUN_71032caea0((long)puVar4,uVar10,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  lVar8 = *(long *)(lVar13 + 0x20);
  *(undefined8 **)(lVar13 + 0x20) = puVar4;
  if (lVar8 != 0) {
    FUN_71032cad20(lVar8);
  }
  puVar4 = (undefined8 *)
           FUN_710392e290(0x10,0x10,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000010;
      pppplVar11 = &local_78;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101394190;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101394190:
  FUN_7101414d00(puVar4,*(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x80),
                 (long ****)(*(long *)(*(long *)(lVar13 + 0x20) + 0x80) + 8),ppppbVar12,param_5,
                 param_6,param_7,param_8);
  plVar9 = *(long **)(lVar13 + 0xf0);
  *(undefined8 **)(lVar13 + 0xf0) = puVar4;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  *(bool *)(lVar13 + 0x138) = *(int *)(**(long **)(*(long *)(lVar13 + 8) + 8) + 0xd48) == 6;
  return;
}

