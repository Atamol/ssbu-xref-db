// addr:      7101a43a00
// offset:    0x1a43a00
// name:      FUN_7101a43a00
// mangled:   
// signature: undefined __cdecl FUN_7101a43a00(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a43a00(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar10;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  byte ****ppppbVar18;
  byte ****ppppbVar19;
  long ***ppplVar20;
  byte *pbVar21;
  long lVar22;
  code *pcVar23;
  uint uVar24;
  long ***ppplVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  long *plVar30;
  undefined1 auVar31 [16];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined4 local_80;
  long ***local_70;
  long *local_68;
  
  pppplVar12 = (long ****)&local_1a0;
  pppplVar13 = (long ****)&local_1a0;
  pppplVar14 = (long ****)&local_1a0;
  pppplVar15 = (long ****)&local_1a0;
  pppplVar16 = (long ****)&local_1a0;
  pppplVar17 = (long ****)&local_1a0;
  ppppbVar19 = (byte ****)&local_1a0;
  pppplVar11 = param_3;
  ppppbVar18 = param_4;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x110,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar10 = extraout_x1;
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000110;
      auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      uVar10 = auVar31._8_8_;
      pppplVar11 = pppplVar12;
      if (((auVar31._0_8_ & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x110,pppplVar12,ppppbVar18,param_5,param_6,param_7,param_8),
         uVar10 = extraout_x1_00, pppplVar11 = pppplVar12, puVar4 != (undefined8 *)0x0))
      goto LAB_7101a43a8c;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101a43a8c:
  *puVar4 = param_2;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 2) = 0;
  FUN_7103776290(puVar4 + 3,uVar10,pppplVar11,ppppbVar18,param_5,param_6,param_7,param_8);
  puVar4[5] = &PTR_FUN_710523d9a8;
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar11,ppppbVar18,param_5,param_6,param_7,param_8);
  uVar10 = extraout_x1_01;
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_1a0 = (undefined **)&SUB_00000020;
      auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      uVar10 = auVar31._8_8_;
      pppplVar11 = pppplVar13;
      if (((auVar31._0_8_ & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar13,ppppbVar18,param_5,param_6,param_7,param_8),
         uVar10 = extraout_x1_02, pppplVar11 = pppplVar13, puVar5 != (undefined8 *)0x0))
      goto LAB_7101a43afc;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7101a43afc:
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar4[6] = puVar5;
  FUN_7103776290(puVar4 + 7,uVar10,pppplVar11,ppppbVar18,param_5,param_6,param_7,param_8);
  puVar4[9] = &PTR_FUN_710523d9a8;
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar11,ppppbVar18,param_5,param_6,param_7,param_8);
  uVar10 = extraout_x1_03;
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_1a0 = (undefined **)&SUB_00000020;
      auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      uVar10 = auVar31._8_8_;
      pppplVar11 = pppplVar14;
      if (((auVar31._0_8_ & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar18,param_5,param_6,param_7,param_8),
         uVar10 = extraout_x1_04, pppplVar11 = pppplVar14, puVar5 != (undefined8 *)0x0))
      goto LAB_7101a43b6c;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7101a43b6c:
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar4[10] = puVar5;
  FUN_7103776290(puVar4 + 0xb,uVar10,pppplVar11,ppppbVar18,param_5,param_6,param_7,param_8);
  puVar4[0xd] = &PTR_FUN_710523d9a8;
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar11,ppppbVar18,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_1a0 = (undefined **)&SUB_00000020;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      pppplVar11 = pppplVar15;
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar15,ppppbVar18,param_5,param_6,param_7,param_8),
         pppplVar11 = pppplVar15, puVar5 != (undefined8 *)0x0)) goto LAB_7101a43bdc;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7101a43bdc:
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar4[0xe] = puVar5;
  puVar4[0xf] = &PTR_FUN_710523d9a8;
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar11,ppppbVar18,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_1a0 = (undefined **)&SUB_00000020;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      pppplVar11 = pppplVar16;
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar16,ppppbVar18,param_5,param_6,param_7,param_8),
         pppplVar11 = pppplVar16, puVar5 != (undefined8 *)0x0)) goto LAB_7101a43c3c;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7101a43c3c:
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar4[0x10] = puVar5;
  puVar4[0x11] = &PTR_FUN_710523d9a8;
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar11,ppppbVar18,param_5,param_6,param_7,param_8);
  uVar10 = extraout_x1_05;
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_1a0 = (undefined **)&SUB_00000020;
      auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      uVar10 = auVar31._8_8_;
      pppplVar11 = pppplVar17;
      if (((auVar31._0_8_ & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar17,ppppbVar18,param_5,param_6,param_7,param_8),
         uVar10 = extraout_x1_06, pppplVar11 = pppplVar17, puVar5 != (undefined8 *)0x0))
      goto LAB_7101a43c9c;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7101a43c9c:
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar4[0x12] = puVar5;
  FUN_7103776290(puVar4 + 0x13,uVar10,pppplVar11,ppppbVar18,param_5,param_6,param_7,param_8);
  FUN_7103776290(puVar4 + 0x15,extraout_x1_07,pppplVar11,ppppbVar18,param_5,param_6,param_7,param_8)
  ;
  FUN_7103776290(puVar4 + 0x17,extraout_x1_08,pppplVar11,ppppbVar18,param_5,param_6,param_7,param_8)
  ;
  *(undefined4 *)(puVar4 + 0x1b) = 3;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1c] = &DAT_c1ffff0000000000;
  puVar4[0x1d] = &DAT_c1ffff0000000000;
  *(undefined4 *)(puVar4 + 0x20) = 0;
  puVar4[0x1e] = 0xffffffff;
  puVar4[0x1f] = 0xffffffff;
  *(undefined1 **)((long)puVar4 + 0x104) = &DAT_100000001;
  uVar6 = *(ulong *)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar4;
  if (uVar6 != 0) {
    FUN_7101a41fd0(uVar6);
    FUN_710392eb40(uVar6);
    puVar4 = *(undefined8 **)(param_1 + 8);
  }
  pppplVar12 = (long ****)(puVar4 + 3);
  if (pppplVar12 != param_3) {
    *(long ***)puVar4[4] = *param_3[1];
    *(long ***)(puVar4[4] + 8) = param_3[1][1];
    ppplVar25 = param_3[1];
    ppplVar20 = (long ***)puVar4[4];
    if (ppplVar20 != ppplVar25) {
      *ppplVar20[3] = *ppplVar25[3];
      ppplVar20[3][1] = ppplVar25[3][1];
      ppplVar20[3][2] = ppplVar25[3][2];
      ppplVar20[3][3] = ppplVar25[3][3];
    }
  }
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((long)param_4 + 4);
  *(undefined4 *)((long)puVar4 + 0xc) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)param_4;
  FUN_7103778300(0x3f800000,puVar4[4],0x710444303f);
  FUN_7103778300(0x3f800000,puVar4[4],0x71043ad1bb);
  FUN_7103778300(0x3f800000,puVar4[4],0x710441236e);
  FUN_7103778300(0x3f800000,puVar4[4],0x710435be3c);
  FUN_7103778300(0x3f800000,puVar4[4],0x710431894d);
  FUN_7103778300(0x3f800000,puVar4[4],0x710426fc9a);
  FUN_7103776910(&local_1a0,(long)pppplVar12,(long ****)"set_window",pppplVar11,ppppbVar18,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_198;
  if (puVar4 + 5 != &local_1a0) {
    local_198 = 0;
    uVar7 = puVar4[6];
    puVar4[6] = uVar6;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar6 = local_198;
  local_1a0 = &PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_1a0,(long)pppplVar12,(byte ****)"set_btn_panel",pppplVar11,ppppbVar18,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_198;
  puVar5 = puVar4 + 7;
  if (puVar5 != &local_1a0) {
    local_198 = 0;
    uVar7 = puVar4[8];
    puVar4[8] = uVar6;
    if (uVar7 != 0) {
      uVar6 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar7);
    }
  }
  uVar6 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar6 != 0) {
    uVar7 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_1a0,(long)pppplVar12,(byte ****)"set_btn_name",pppplVar11,ppppbVar18,param_5
                 ,param_6,param_7,param_8);
  uVar6 = local_198;
  puVar1 = puVar4 + 0xb;
  if (puVar1 != &local_1a0) {
    local_198 = 0;
    uVar7 = puVar4[0xc];
    puVar4[0xc] = uVar6;
    if (uVar7 != 0) {
      uVar6 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar7);
    }
  }
  uVar6 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar6 != 0) {
    uVar7 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_1a0,(long)pppplVar12,(byte ****)"set_btn_sp",pppplVar11,ppppbVar18,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_198;
  if (puVar4 + 0x13 != &local_1a0) {
    local_198 = 0;
    uVar7 = puVar4[0x14];
    puVar4[0x14] = uVar6;
    if (uVar7 != 0) {
      uVar6 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar7);
    }
  }
  uVar6 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar6 != 0) {
    uVar7 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_1a0,(long)pppplVar12,(byte ****)"set_part_chara_pk",pppplVar11,ppppbVar18,
                 param_5,param_6,param_7,param_8);
  uVar6 = local_198;
  if (puVar4 + 0x15 != &local_1a0) {
    local_198 = 0;
    uVar7 = puVar4[0x16];
    puVar4[0x16] = uVar6;
    if (uVar7 != 0) {
      uVar6 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar7);
    }
  }
  uVar6 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar6 != 0) {
    uVar7 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_1a0,(long)pppplVar12,(byte ****)"set_part_chara_element",pppplVar11,
                 ppppbVar18,param_5,param_6,param_7,param_8);
  uVar6 = local_198;
  if (puVar4 + 0x17 != &local_1a0) {
    local_198 = 0;
    uVar7 = puVar4[0x18];
    puVar4[0x18] = uVar6;
    if (uVar7 != 0) {
      uVar6 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar7);
    }
  }
  uVar6 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar6 != 0) {
    uVar7 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_1a0,(long)puVar5,(long ****)"set_txt_00",pppplVar11,ppppbVar18,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_198;
  if (puVar4 + 9 != &local_1a0) {
    local_198 = 0;
    uVar7 = puVar4[10];
    puVar4[10] = uVar6;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar6 = local_198;
  local_1a0 = &PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_1a0,(long)puVar5,(long ****)"set_txt_fp_level",pppplVar11,ppppbVar18,param_5
                 ,param_6,param_7,param_8);
  uVar6 = local_198;
  if (puVar4 + 0x11 != &local_1a0) {
    local_198 = 0;
    uVar7 = puVar4[0x12];
    puVar4[0x12] = uVar6;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar6 = local_198;
  local_1a0 = &PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_1a0,(long)puVar1,(long ****)"set_txt_00",pppplVar11,ppppbVar18,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_198;
  if (puVar4 + 0xd != &local_1a0) {
    local_198 = 0;
    uVar7 = puVar4[0xe];
    puVar4[0xe] = uVar6;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar6 = local_198;
  local_1a0 = &PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_1a0,(long)puVar1,(long ****)"set_txt_level",pppplVar11,ppppbVar18,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_198;
  if (puVar4 + 0xf != &local_1a0) {
    local_198 = 0;
    uVar7 = puVar4[0x10];
    puVar4[0x10] = uVar6;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  uVar6 = local_198;
  local_1a0 = &PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_1a0,(long)pppplVar12,(byte ****)"set_lct_hd",pppplVar11,ppppbVar18,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_198;
  FUN_7103778300(0x3f800000,local_198,0x71042e6b68);
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar6 != 0) {
    uVar7 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_71003a4ca0((uint *)&local_1a0,"player_color_%dp",(ulong)(*(int *)((long)puVar4 + 0xc) + 1),
                 pppplVar11,ppppbVar18,param_5,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,puVar4[8],(long)&local_198);
  FUN_7103778300(0x3f800000,puVar4[8],0x710437c043);
  FUN_7103776910(&local_70,(long)puVar5,(long ****)"set_txt_fp",pppplVar11,ppppbVar18,param_5,
                 param_6,param_7,param_8);
  uVar24 = 0x811c9dc5;
  uVar28 = 99;
  local_198 = CONCAT17(local_198._7_1_,0x70665f6e6d63);
  pbVar21 = (byte *)((long)&local_198 + 1);
  do {
    uVar24 = uVar24 * 0x89 ^ uVar28;
    uVar28 = (uint)*pbVar21;
    pbVar21 = pbVar21 + 1;
  } while (uVar28 != 0);
  local_1a0 = (undefined **)CONCAT44(6,uVar24);
  FUN_710377a120((long)&local_70,(char *)&local_198,pppplVar11,ppppbVar18,param_5,param_6,param_7,
                 param_8);
  plVar2 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar2);
  }
  if (*(long **)(puVar4[0x12] + 0x10) != (long *)0x0) {
    ppppbVar18 = (byte ****)0x0;
    local_1a0 = (undefined **)((ulong)local_1a0 & 0xffffffff00000000);
    FUN_71037a2270(*(long **)(puVar4[0x12] + 0x10),(ushort *)&local_1a0,0,0);
  }
  FUN_7103778300(0x3f800000,puVar4[0x14],0x7104432a78);
  local_1a0 = (undefined **)CONCAT62(local_1a0._2_6_,0xffff);
  FUN_7101a42170(puVar4,(ushort *)&local_1a0,(long *********)&DAT_00000004,ppppbVar18,param_5,
                 param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,puVar4[0xc],0x710439ce90);
  local_1a0 = (undefined **)0x0;
  local_198 = 0x101;
  local_190 = 1;
  local_18c = 1;
  local_18a = 1;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  FUN_710337df20((long)&local_1a0);
  uVar10 = local_198;
  plVar2 = puVar4 + 0x19;
  local_198._0_2_ = (ushort)(byte)local_198;
  uVar3 = local_198;
  local_198._5_3_ = SUB83(uVar10,5);
  local_198._0_5_ = CONCAT14(1,(int)uVar3);
  FUN_7103770b30(plVar2,pppplVar12,(long ****)"selector",(byte ****)&local_1a0,param_5,param_6,
                 param_7,param_8);
  FUN_71037717d0(plVar2,0,"set_btn_panel",ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar2,1,"set_btn_name",ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar2,2,"set_btn_sp",ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar2,3,"set_part_chara_pk",ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar2,4,"set_part_chara_element",ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar2,5,"set_btn_chara_hit",ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_7103771d60(&local_70,puVar4[0x19],(long ****)0x0,ppppbVar19,param_5,param_6,param_7,param_8);
  plVar30 = local_68;
  plVar8 = (long *)*local_68;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x268))(plVar8,1,0);
  }
  local_70 = (long ***)&PTR_FUN_710523d9c8;
  local_68 = (long *)0x0;
  if (plVar30 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar30);
  }
  lVar9 = *plVar2;
  lVar26 = *(long *)(lVar9 + 0x1b8);
  if (lVar26 != 0) {
    lVar22 = lVar9 + 0x1b8;
    lVar27 = lVar22;
    lVar29 = lVar26;
    do {
      if (1 < *(int *)(lVar29 + 0x20)) {
        lVar27 = lVar29;
      }
      lVar29 = *(long *)(lVar29 + (ulong)(*(int *)(lVar29 + 0x20) < 2) * 8);
    } while (lVar29 != 0);
    if (((lVar27 != lVar22) && (*(int *)(lVar27 + 0x20) < 3)) &&
       (plVar30 = *(long **)(lVar27 + 0x28), plVar30 != (long *)0x0)) {
      (**(code **)(*plVar30 + 0x1f8))(plVar30,0);
      (**(code **)(*plVar30 + 0x388))(plVar30,1,0);
      lVar9 = *plVar2;
      lVar26 = *(long *)(lVar9 + 0x1b8);
      lVar22 = lVar9 + 0x1b8;
    }
    lVar27 = lVar22;
    lVar29 = lVar26;
    if (lVar26 != 0) {
      do {
        if (2 < *(int *)(lVar29 + 0x20)) {
          lVar27 = lVar29;
        }
        lVar29 = *(long *)(lVar29 + (ulong)(*(int *)(lVar29 + 0x20) < 3) * 8);
      } while (lVar29 != 0);
      if (((lVar27 != lVar22) && (*(int *)(lVar27 + 0x20) < 4)) &&
         (plVar30 = *(long **)(lVar27 + 0x28), plVar30 != (long *)0x0)) {
        (**(code **)(*plVar30 + 0x1f8))(plVar30,0);
        (**(code **)(*plVar30 + 0x388))(plVar30,1,0);
        lVar9 = *plVar2;
        lVar26 = *(long *)(lVar9 + 0x1b8);
        lVar22 = lVar9 + 0x1b8;
      }
      lVar27 = lVar22;
      if (lVar26 != 0) {
        do {
          if (3 < *(int *)(lVar26 + 0x20)) {
            lVar27 = lVar26;
          }
          lVar26 = *(long *)(lVar26 + (ulong)(*(int *)(lVar26 + 0x20) < 4) * 8);
        } while (lVar26 != 0);
        if (((lVar27 != lVar22) && (*(int *)(lVar27 + 0x20) < 5)) &&
           (plVar30 = *(long **)(lVar27 + 0x28), plVar30 != (long *)0x0)) {
          (**(code **)(*plVar30 + 0x1f8))(plVar30,0);
          (**(code **)(*plVar30 + 0x388))(plVar30,1,0);
          lVar9 = *plVar2;
        }
      }
    }
  }
  local_70 = (long ***)0x151ca6c028;
  FUN_7103772070(lVar9,0,&local_70,ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar9 >> 3) < 2) {
    local_70 = (long ***)0x0;
  }
  else {
    local_70 = *(long ****)(lVar9 + 8);
  }
  FUN_7103772070(*plVar2,3,&local_70,ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar9 >> 3) < 2) {
    local_70 = (long ***)0x0;
  }
  else {
    local_70 = *(long ****)(lVar9 + 8);
  }
  FUN_7103772070(*plVar2,5,&local_70,ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar9 >> 3) < 2) {
    local_70 = (long ***)0x0;
  }
  else {
    local_70 = *(long ****)(lVar9 + 8);
  }
  FUN_7103772070(puVar4[0x19],4,&local_70,ppppbVar19,param_5,param_6,param_7,param_8);
  (**(code **)(*(long *)puVar4[0x19] + 0x60))
            ((long *)puVar4[0x19],*(undefined1 *)((long)puVar4 + 0x104));
  (**(code **)(*(long *)puVar4[0x19] + 0x70))
            ((long *)puVar4[0x19],*(undefined1 *)((long)puVar4 + 0x104));
  FUN_7103778760(puVar4[4],0x710425ed91);
  FUN_7103778760(puVar4[4],0x710433a9c5);
  FUN_7103778760(puVar4[0x16],0x710433a9c5);
  FUN_7103778760(puVar4[0x18],0x710433a9c5);
  FUN_7101a42860((long)puVar4);
  if (alStack_b0 == local_90) {
    pcVar23 = *(code **)(*local_90 + 0x20);
LAB_7101a44768:
    (*pcVar23)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar23 = *(code **)(*local_90 + 0x28);
    goto LAB_7101a44768;
  }
  if (alStack_e0 == local_c0) {
    pcVar23 = *(code **)(*local_c0 + 0x20);
LAB_7101a44798:
    (*pcVar23)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar23 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101a44798;
  }
  if (alStack_110 == local_f0) {
    pcVar23 = *(code **)(*local_f0 + 0x20);
LAB_7101a447c8:
    (*pcVar23)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar23 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101a447c8;
  }
  if (alStack_140 == local_120) {
    pcVar23 = *(code **)(*local_120 + 0x20);
  }
  else {
    if (local_120 == (long *)0x0) goto LAB_7101a447fc;
    pcVar23 = *(code **)(*local_120 + 0x28);
  }
  (*pcVar23)();
LAB_7101a447fc:
  if (alStack_170 == local_150) {
    pcVar23 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) {
      return;
    }
    pcVar23 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar23)();
  return;
}

