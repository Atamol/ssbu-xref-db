// addr:      7101ad0e40
// offset:    0x1ad0e40
// name:      FUN_7101ad0e40
// mangled:   
// signature: undefined __cdecl FUN_7101ad0e40(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ad0e40(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar9;
  byte ****ppppbVar10;
  byte ****ppppbVar11;
  byte ****ppppbVar12;
  byte ****ppppbVar13;
  byte ****ppppbVar14;
  byte ****ppppbVar15;
  byte ****ppppbVar16;
  byte ****ppppbVar17;
  long ****pppplVar18;
  byte ****ppppbVar19;
  byte ****ppppbVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  byte ***local_1e0;
  ulong local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined1 local_1ca;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  undefined4 local_c0;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined ***local_80;
  
  ppppbVar19 = &local_1e0;
  ppppbVar10 = &local_1e0;
  ppppbVar11 = &local_1e0;
  ppppbVar12 = &local_1e0;
  ppppbVar13 = &local_1e0;
  ppppbVar14 = &local_1e0;
  ppppbVar15 = &local_1e0;
  ppppbVar16 = &local_1e0;
  ppppbVar17 = &local_1e0;
  ppppbVar20 = &local_1e0;
  *param_1 = &PTR_FUN_71050a9a90;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar4 = (int)param_3;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar5 = FUN_710392e290(0x10,0x168,param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar5 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (byte ***)&DAT_00000168;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = (long ****)ppppbVar19;
      if (((uVar6 & 1) != 0) &&
         (lVar5 = FUN_710392e290(0x10,0x168,(long ****)ppppbVar19,param_4,param_5,param_6,param_7,
                                 param_8), param_3 = (long ****)ppppbVar19, lVar5 != 0))
      goto LAB_7101ad0ef4;
    }
    lVar5 = 0;
  }
LAB_7101ad0ef4:
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(long *)lVar5 = lVar5;
  *(undefined8 *)(lVar5 + 8) = 0;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0xffffffff;
  *(undefined4 *)(lVar5 + 0xc0) = 0xffffffff;
  *(undefined1 *)(lVar5 + 0xc4) = 0;
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0xa8) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 *)(lVar5 + 0x98) = 0;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x70) = 0;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 *)(lVar5 + 0x68) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  puVar25 = (undefined8 *)(lVar5 + 0xd0);
  *puVar25 = &PTR_FUN_710523d9a8;
  *(undefined8 *)(lVar5 + 200) = param_2;
  *(undefined8 *)(lVar5 + 0xd8) = 0;
  *(undefined8 *)(lVar5 + 0x130) = 0;
  *(undefined8 *)(lVar5 + 0x138) = 0;
  *(undefined8 *)(lVar5 + 0x120) = 0;
  *(undefined8 *)(lVar5 + 0x128) = 0;
  *(undefined8 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x118) = 0;
  *(undefined8 *)(lVar5 + 0x100) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0;
  *(undefined8 *)(lVar5 + 0xf0) = 0;
  *(undefined8 *)(lVar5 + 0xf8) = 0;
  *(undefined8 *)(lVar5 + 0xe0) = 0;
  *(undefined8 *)(lVar5 + 0xe8) = 0;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (byte ***)&SUB_00000020;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = (long ****)ppppbVar10;
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)ppppbVar10,param_4,param_5,param_6,param_7,
                                  param_8), param_3 = (long ****)ppppbVar10,
         puVar7 != (undefined8 *)0x0)) goto LAB_7101ad0fb4;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101ad0fb4:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 *)(lVar5 + 0xe0) = &PTR_FUN_710523d9a8;
  *(undefined8 **)(lVar5 + 0xd8) = puVar7;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (byte ***)&SUB_00000020;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = (long ****)ppppbVar11;
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)ppppbVar11,param_4,param_5,param_6,param_7,
                                  param_8), param_3 = (long ****)ppppbVar11,
         puVar7 != (undefined8 *)0x0)) goto LAB_7101ad101c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101ad101c:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 *)(lVar5 + 0xf0) = &PTR_FUN_710523d9a8;
  *(undefined8 **)(lVar5 + 0xe8) = puVar7;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (byte ***)&SUB_00000020;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = (long ****)ppppbVar12;
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)ppppbVar12,param_4,param_5,param_6,param_7,
                                  param_8), param_3 = (long ****)ppppbVar12,
         puVar7 != (undefined8 *)0x0)) goto LAB_7101ad1084;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101ad1084:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 **)(lVar5 + 0xf8) = puVar7;
  *(undefined ***)(lVar5 + 0x100) = &PTR_FUN_710523d9a8;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (byte ***)&SUB_00000020;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = (long ****)ppppbVar13;
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,param_4,param_5,param_6,param_7,
                                  param_8), param_3 = (long ****)ppppbVar13,
         puVar7 != (undefined8 *)0x0)) goto LAB_7101ad10e4;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101ad10e4:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 **)(lVar5 + 0x108) = puVar7;
  *(undefined ***)(lVar5 + 0x110) = &PTR_FUN_710523d9a8;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (byte ***)&SUB_00000020;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = (long ****)ppppbVar14;
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)ppppbVar14,param_4,param_5,param_6,param_7,
                                  param_8), param_3 = (long ****)ppppbVar14,
         puVar7 != (undefined8 *)0x0)) goto LAB_7101ad1144;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101ad1144:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 **)(lVar5 + 0x118) = puVar7;
  *(undefined ***)(lVar5 + 0x120) = &PTR_FUN_710523d9a8;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (byte ***)&SUB_00000020;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      param_3 = (long ****)ppppbVar15;
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)ppppbVar15,param_4,param_5,param_6,param_7,
                                  param_8), param_3 = (long ****)ppppbVar15,
         puVar7 != (undefined8 *)0x0)) goto LAB_7101ad11a4;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101ad11a4:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 **)(lVar5 + 0x128) = puVar7;
  *(undefined ***)(lVar5 + 0x130) = &PTR_FUN_710523d9a8;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar9 = extraout_x1;
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (byte ***)&SUB_00000020;
      auVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar9 = auVar27._8_8_;
      param_3 = (long ****)ppppbVar16;
      if (((auVar27._0_8_ & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)ppppbVar16,param_4,param_5,param_6,param_7,
                                  param_8), uVar9 = extraout_x1_00, param_3 = (long ****)ppppbVar16,
         puVar7 != (undefined8 *)0x0)) goto LAB_7101ad1204;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101ad1204:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 **)(lVar5 + 0x138) = puVar7;
  FUN_7103776290((undefined8 *)(lVar5 + 0x140),uVar9,param_3,param_4,param_5,param_6,param_7,param_8
                );
  puVar7 = (undefined8 *)(lVar5 + 0x150);
  puVar8 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar9 = extraout_x1_01;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_1e0 = (byte ***)&DAT_00000008;
      auVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar9 = auVar27._8_8_;
      param_3 = (long ****)ppppbVar17;
      if (((auVar27._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)ppppbVar17,param_4,param_5,param_6,param_7,
                                  param_8), uVar9 = extraout_x1_02, param_3 = (long ****)ppppbVar17,
         puVar8 != (undefined8 *)0x0)) goto LAB_7101ad127c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101ad127c:
  FUN_7103773200(puVar8,uVar9,param_3,param_4,param_5,param_6,param_7,param_8);
  *(code **)(lVar5 + 0x58) = FUN_7101ad0950;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(code **)(lVar5 + 0x28) = FUN_7101ad08b0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined4 *)(lVar5 + 0x160) = 0;
  *(code **)(lVar5 + 0x48) = FUN_7101ad08c0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  pppplVar18 = (long ****)&DAT_71045445e8;
  *(undefined8 **)(lVar5 + 0x150) = puVar8;
  *(undefined8 *)(lVar5 + 0x158) = 0;
  ppppbVar19 = (byte ****)0x1;
  *(code **)(lVar5 + 0x38) = FUN_7101ad0a10;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  FUN_71032cbf30(puVar7,**(long **)(lVar5 + 200),(ulong *)&DAT_71045445e8,(byte ****)0x1,param_5,
                 param_6,param_7,param_8);
  lVar23 = *(long *)**(undefined8 **)(lVar5 + 0x150);
  *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0x494) = 6;
  lVar21 = *(long *)(lVar23 + 0x608);
  lVar23 = *(long *)(lVar23 + 0x610);
  if (lVar21 != lVar23) {
    uVar6 = (lVar23 + -0x10) - lVar21;
    uVar2 = ((uint)(uVar6 >> 4) & 0xfffffff) + 1;
    if ((uVar2 & 3) != 0) {
      lVar24 = -((ulong)uVar2 & 3);
      do {
        plVar1 = (long *)(lVar21 + 8);
        lVar21 = lVar21 + 0x10;
        lVar24 = lVar24 + 1;
        *(undefined4 *)(*plVar1 + 0x494) = 6;
      } while (lVar24 != 0);
    }
    if (0x2f < uVar6) {
      do {
        *(undefined4 *)(*(long *)(lVar21 + 8) + 0x494) = 6;
        *(undefined4 *)(*(long *)(lVar21 + 0x18) + 0x494) = 6;
        *(undefined4 *)(*(long *)(lVar21 + 0x28) + 0x494) = 6;
        plVar1 = (long *)(lVar21 + 0x38);
        lVar21 = lVar21 + 0x40;
        *(undefined4 *)(*plVar1 + 0x494) = 6;
      } while (lVar23 != lVar21);
    }
  }
  FUN_71037760f0(**(long **)*puVar7,0);
  FUN_7103776390(&local_b0,(undefined8 *)(*(long *)*puVar7 + 8),pppplVar18,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_1e0,(long)&local_b0,(byte ****)"set_parts_stage",pppplVar18,ppppbVar19,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_1d8;
  if (&local_1e0 != (byte ****)(lVar5 + 0x140)) {
    local_1d8 = 0;
    uVar26 = *(ulong *)(lVar5 + 0x148);
    *(ulong *)(lVar5 + 0x148) = uVar6;
    if (uVar26 != 0) {
      uVar6 = *(ulong *)(uVar26 + 0x18);
      *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar26 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar26);
    }
  }
  uVar6 = local_1d8;
  local_1e0 = (byte ***)&PTR_FUN_710523d988;
  local_1d8 = 0;
  if (uVar6 != 0) {
    uVar26 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_1e0,(long)&local_b0,(long ****)"set_rep_pic_cap",pppplVar18,ppppbVar19,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_1d8;
  if (&local_1e0 != (byte ****)(lVar5 + 0x120)) {
    local_1d8 = 0;
    uVar26 = *(ulong *)(lVar5 + 0x128);
    *(ulong *)(lVar5 + 0x128) = uVar6;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
  }
  uVar6 = local_1d8;
  local_1e0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1d8 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_1e0,(long)&local_b0,(long ****)"set_rep_bgshot",pppplVar18,ppppbVar19,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_1d8;
  if (&local_1e0 != (byte ****)(lVar5 + 0x130)) {
    local_1d8 = 0;
    uVar26 = *(ulong *)(lVar5 + 0x138);
    *(ulong *)(lVar5 + 0x138) = uVar6;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
  }
  uVar6 = local_1d8;
  local_1e0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1d8 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_1e0,(long)&local_b0,(long ****)"set_txt_00",pppplVar18,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_1d8;
  if (&local_1e0 != (byte ****)puVar25) {
    local_1d8 = 0;
    uVar26 = *(ulong *)(lVar5 + 0xd8);
    *(ulong *)(lVar5 + 0xd8) = uVar6;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
  }
  uVar6 = local_1d8;
  local_1e0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1d8 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_1e0,(long)&local_b0,(long ****)"set_parts_btn_01",pppplVar18,ppppbVar19,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_1d8;
  if (&local_1e0 != (byte ****)(lVar5 + 0xe0)) {
    local_1d8 = 0;
    uVar26 = *(ulong *)(lVar5 + 0xe8);
    *(ulong *)(lVar5 + 0xe8) = uVar6;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
  }
  uVar6 = local_1d8;
  local_1e0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1d8 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_1e0,(long)&local_b0,(long ****)"set_parts_btn_00",pppplVar18,ppppbVar19,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_1d8;
  if (&local_1e0 != (byte ****)(lVar5 + 0xf0)) {
    local_1d8 = 0;
    uVar26 = *(ulong *)(lVar5 + 0xf8);
    *(ulong *)(lVar5 + 0xf8) = uVar6;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
  }
  uVar6 = local_1d8;
  local_1e0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1d8 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_a0,(long)&local_b0,(byte ****)"set_parts_btn_01",pppplVar18,ppppbVar19,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_1e0,(long)&local_a0,(long ****)"set_txt_00",pppplVar18,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_1d8;
  if (&local_1e0 != (byte ****)(lVar5 + 0x100)) {
    local_1d8 = 0;
    uVar26 = *(ulong *)(lVar5 + 0x108);
    *(ulong *)(lVar5 + 0x108) = uVar6;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
  }
  uVar6 = local_1d8;
  local_1e0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1d8 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar6 != 0) {
    uVar26 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_a0,(long)&local_b0,(byte ****)"set_parts_btn_00",pppplVar18,ppppbVar19,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_1e0,(long)&local_a0,(long ****)"set_txt_00",pppplVar18,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_1d8;
  if (&local_1e0 != (byte ****)(lVar5 + 0x110)) {
    local_1d8 = 0;
    uVar26 = *(ulong *)(lVar5 + 0x118);
    *(ulong *)(lVar5 + 0x118) = uVar6;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
  }
  uVar6 = local_1d8;
  local_1e0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1d8 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_98;
  plVar1 = (long *)(lVar5 + 0x158);
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar6 != 0) {
    uVar26 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
    FUN_710392eb40(uVar6);
  }
  pcVar3 = "pop_replay_detail_delete";
  if (iVar4 != 0) {
    pcVar3 = "pop_replay_movie_detail_delete";
  }
  FUN_710377a120((long)puVar25,pcVar3,pppplVar18,ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_710377a120((long)(lVar5 + 0x100),"pop_btn_yes",pppplVar18,ppppbVar19,param_5,param_6,param_7,
                 param_8);
  FUN_710377a120((long)(lVar5 + 0x110),"pop_btn_no",pppplVar18,ppppbVar19,param_5,param_6,param_7,
                 param_8);
  local_1d0 = 1;
  local_1cc = 1;
  local_1ca = 1;
  local_1c8 = &DAT_41f0000000000000;
  local_1e0 = (byte ***)0x0;
  local_1d8 = 0x101;
  local_1c0 = 0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c0 = 0;
  FUN_710337df20((long)&local_1e0);
  local_a0 = &PTR_FUN_71050a9a48;
  local_98 = lVar5;
  local_80 = &local_a0;
  FUN_7101989a30((long *)&local_a0,alStack_180);
  if (&local_a0 == local_80) {
    pcVar22 = (code *)(*local_80)[4];
LAB_7101ad176c:
    (*pcVar22)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar22 = (code *)(*local_80)[5];
    goto LAB_7101ad176c;
  }
  FUN_7103778760(*(long *)(**(long **)(lVar5 + 0x150) + 0x10),0x710428ff7d);
  *(undefined4 *)(*(long *)(*(long *)**(undefined8 **)(lVar5 + 0x150) + 0x600) + 0x494) = 6;
  FUN_7103770b30(plVar1,(undefined8 *)(**(long **)(lVar5 + 0x150) + 8),(long ****)"selector",
                 &local_1e0,param_5,param_6,param_7,param_8);
  pcVar3 = "";
  if (**(long **)(lVar5 + 0xe8) != 0) {
    pcVar3 = (char *)(**(long **)(lVar5 + 0xe8) + 0xb0);
  }
  FUN_71037717d0(plVar1,0,pcVar3,ppppbVar20,param_5,param_6,param_7,param_8);
  pcVar3 = "";
  if (**(long **)(lVar5 + 0xf8) != 0) {
    pcVar3 = (char *)(**(long **)(lVar5 + 0xf8) + 0xb0);
  }
  FUN_71037717d0(plVar1,1,pcVar3,ppppbVar20,param_5,param_6,param_7,param_8);
  (**(code **)(**(long **)(lVar5 + 0x158) + 0x70))(*(long **)(lVar5 + 0x158),1);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar5 + 0x150),1,(long ****)0x16fff,ppppbVar20,param_5,
                 param_6,param_7,param_8);
  if (0x12 < *(uint *)(lVar5 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar5 + (long)(int)*(uint *)(lVar5 + 0xb4) * 4 + 0x68) = 0;
  if (alStack_f0 == local_d0) {
    pcVar22 = *(code **)(*local_d0 + 0x20);
LAB_7101ad1874:
    (*pcVar22)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101ad1874;
  }
  if (alStack_120 == local_100) {
    pcVar22 = *(code **)(*local_100 + 0x20);
LAB_7101ad18a4:
    (*pcVar22)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar22 = *(code **)(*local_100 + 0x28);
    goto LAB_7101ad18a4;
  }
  if (alStack_150 == local_130) {
    pcVar22 = *(code **)(*local_130 + 0x20);
LAB_7101ad18d4:
    (*pcVar22)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar22 = *(code **)(*local_130 + 0x28);
    goto LAB_7101ad18d4;
  }
  if (alStack_180 == local_160) {
    pcVar22 = *(code **)(*local_160 + 0x20);
LAB_7101ad1904:
    (*pcVar22)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar22 = *(code **)(*local_160 + 0x28);
    goto LAB_7101ad1904;
  }
  if (alStack_1b0 == local_190) {
    pcVar22 = *(code **)(*local_190 + 0x20);
  }
  else {
    if (local_190 == (long *)0x0) goto LAB_7101ad1938;
    pcVar22 = *(code **)(*local_190 + 0x28);
  }
  (*pcVar22)();
LAB_7101ad1938:
  uVar6 = local_a8;
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = 0;
  if (uVar6 != 0) {
    uVar26 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
    FUN_710392eb40(uVar6);
  }
  param_1[0x10] = lVar5;
  return;
}

