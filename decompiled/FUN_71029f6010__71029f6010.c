// addr:      71029f6010
// offset:    0x29f6010
// name:      FUN_71029f6010
// mangled:   
// signature: undefined __cdecl FUN_71029f6010(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_71029f6010(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long ***ppplVar11;
  ulong *puVar12;
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
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  long *********ppppppppplVar13;
  char *pcVar14;
  undefined1 (*pauVar15) [16];
  long ****pppplVar16;
  byte ****ppppbVar17;
  byte ****ppppbVar18;
  long ****pppplVar19;
  char *pcVar20;
  undefined1 (*pauVar21) [16];
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  undefined8 uVar25;
  ulong uVar26;
  long **pplVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long **pplVar32;
  ulong *puVar33;
  long *plVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  undefined1 auVar38 [16];
  ulong local_a8;
  ulong local_a0;
  undefined4 local_94;
  long ***local_90;
  undefined8 uStack_88;
  long ********local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  FUN_71025d9250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar3 = (undefined4 *)
           FUN_710392e290(0x10,4,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6,
                          param_7,param_8);
  if (puVar3 == (undefined4 *)0x0) {
    local_90 = (long ***)((ulong)local_90 & 0xffffffff00000000);
    local_80 = (long ********)&DAT_00000004;
    param_3 = &local_80;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
    puVar3 = (undefined4 *)
             FUN_710392e290(0x10,4,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6,
                            param_7,param_8);
  }
  *puVar3 = 0;
  uVar26 = param_1[0x116];
  param_1[0x116] = (long)puVar3;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  lVar31 = param_1[0x60];
  FUN_710262bb40(lVar31,3);
  FUN_710262beb0(lVar31,0xfffffffc);
  for (plVar4 = *(long **)(param_1[0x62] + 0xd0); plVar4 != *(long **)(param_1[0x62] + 0xd8);
      plVar4 = plVar4 + 2) {
    if ((*(uint *)(plVar4 + 1) < 2) && (lVar31 = *plVar4, *(long *)(lVar31 + 0x68) == 0xb0e9eac1b))
    goto LAB_71029f60f8;
  }
  lVar31 = 0;
LAB_71029f60f8:
  param_1[0x118] = lVar31;
  *(undefined1 *)(param_1 + 0x11d) = 1;
  if (lVar31 != 0) {
    if ((*(char *)(lVar31 + 0xe0) != '\0') && (*(long *)(lVar31 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar31 + 200) + 0x32) = 0;
    }
    if (*(long *)(lVar31 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar31 + 0xd8) + 0x22) = 0;
    }
  }
  param_1[0x11a] = 0x4551500000000000;
  param_1[0x119] = 0x45f8180045f3c000;
  *(undefined4 *)(param_1 + 0x11b) = 0x45516000;
  *(undefined4 *)((long)param_1 + 0x8dc) = 0x45597000;
  param_1[0x11c] = 0x4546c00000000000;
  for (plVar4 = *(long **)(param_1[0x62] + 0xd0); plVar4 != *(long **)(param_1[0x62] + 0xd8);
      plVar4 = plVar4 + 2) {
    if ((*(uint *)(plVar4 + 1) < 2) && (lVar31 = *plVar4, *(long *)(lVar31 + 0x68) == 0xacf6bcec8))
    {
      param_1[0x11f] = lVar31;
      *(undefined1 *)(param_1 + 0x124) = 0;
      if (lVar31 == 0) {
LAB_71029f836c:
        if (lVar31 == 0) goto LAB_71029f61c8;
      }
      else if ((*(long *)(lVar31 + 0xd8) != 0) && (*(long *)(lVar31 + 0xd8) != 0)) {
        *(undefined1 *)(*(long *)(lVar31 + 0xd8) + 0x22) = 0;
        lVar31 = param_1[0x11f];
        goto LAB_71029f836c;
      }
      if (((*(long *)(lVar31 + 200) != 0) && (*(char *)(lVar31 + 0xe0) != '\0')) &&
         (*(long *)(lVar31 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar31 + 200) + 0x32) = 0;
      }
      goto LAB_71029f61c8;
    }
  }
  param_1[0x11f] = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
LAB_71029f61c8:
  *(undefined4 *)(param_1 + 0x120) = 0x45f3c000;
  *(undefined4 *)((long)param_1 + 0x904) = 0x45f81800;
  *(undefined4 *)(param_1 + 0x121) = 0;
  *(undefined4 *)((long)param_1 + 0x90c) = 0x45515000;
  *(undefined4 *)(param_1 + 0x122) = 0x45516000;
  *(undefined4 *)((long)param_1 + 0x914) = 0x45597000;
  param_1[0x123] = 0x4546c00000000000;
  plVar4 = (long *)FUN_710392e290(0x10,0x50,(long ****)param_3,(byte ****)param_4,(long ****)param_5
                                  ,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ***)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long ********)&DAT_00000050;
      ppppppppplVar13 = &local_80;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar26 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x50,(long ****)ppppppppplVar13,(byte ****)param_4,
                                          (long ****)param_5,param_6,param_7,param_8),
         plVar4 != (long *)0x0)) goto LAB_71029f6240;
    }
    plVar4 = (long *)0x0;
  }
LAB_71029f6240:
  pcVar14 = "S08_shokikabomb";
  ppppppppplVar13 = (long *********)param_1[0x116];
  FUN_71029fb9b0(0,0x45515000,0x45516000,0x45597000,0x45354000,0x45597000,0x453f0000,0x454fb000,
                 plVar4,(long)param_1,(long ****)ppppppppplVar13,(byte ****)"S08_shokikabomb",
                 (long ****)param_5,param_6,param_7,param_8);
  uVar26 = param_1[0x14d];
  param_1[0x14d] = (long)plVar4;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  for (plVar4 = *(long **)(param_1[0x62] + 0xd0); plVar4 != *(long **)(param_1[0x62] + 0xd8);
      plVar4 = plVar4 + 2) {
    if ((*(uint *)(plVar4 + 1) < 2) && (lVar31 = *plVar4, *(long *)(lVar31 + 0x68) == 0x9f9cc0cbd))
    goto LAB_71029f62e8;
  }
  lVar31 = 0;
LAB_71029f62e8:
  param_1[300] = lVar31;
  *(undefined1 *)(param_1 + 0x131) = 1;
  if (lVar31 != 0) {
    if ((*(char *)(lVar31 + 0xe0) != '\0') && (*(long *)(lVar31 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar31 + 200) + 0x32) = 0;
    }
    if (*(long *)(lVar31 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar31 + 0xd8) + 0x22) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x12f) = 0x45f0a000;
  *(undefined4 *)(param_1 + 0x12d) = 0x45598000;
  *(undefined4 *)((long)param_1 + 0x96c) = 0x4564b000;
  *(undefined4 *)(param_1 + 0x12e) = 0x4564c000;
  *(undefined4 *)((long)param_1 + 0x974) = 0x45f09800;
  *(undefined4 *)((long)param_1 + 0x97c) = 0x45f3b800;
  param_1[0x130] = 0x45e29000456a6000;
  for (plVar4 = *(long **)(param_1[0x62] + 0xd0); plVar4 != *(long **)(param_1[0x62] + 0xd8);
      plVar4 = plVar4 + 2) {
    if ((*(uint *)(plVar4 + 1) < 2) && (lVar31 = *plVar4, *(long *)(lVar31 + 0x68) == 0xa56629f72))
    goto LAB_71029f63a8;
  }
  lVar31 = 0;
LAB_71029f63a8:
  param_1[0x133] = lVar31;
  *(undefined1 *)(param_1 + 0x138) = 1;
  if (lVar31 != 0) {
    if ((*(char *)(lVar31 + 0xe0) != '\0') && (*(long *)(lVar31 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar31 + 200) + 0x32) = 0;
    }
    if (*(long *)(lVar31 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar31 + 0xd8) + 0x22) = 0;
    }
  }
  lVar31 = param_1[0x116];
  *(undefined4 *)((long)param_1 + 0x9ac) = 0x45f09800;
  *(undefined4 *)(param_1 + 0x134) = 0x45598000;
  *(undefined4 *)((long)param_1 + 0x9a4) = 0x4564b000;
  *(undefined4 *)(param_1 + 0x135) = 0x4564c000;
  *(undefined4 *)(param_1 + 0x136) = 0x45f0a000;
  *(undefined4 *)((long)param_1 + 0x9b4) = 0x45f3b800;
  param_1[0x137] = 0x45e29000456a6000;
  param_1[0x112] = lVar31;
  plVar4 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar13,(byte ****)pcVar14,
                                  (long ****)param_5,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    local_90 = (long ***)((ulong)local_90 & 0xffffffff00000000);
    local_80 = (long ********)&SUB_00000018;
    ppppppppplVar13 = &local_80;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
    plVar4 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar13,(byte ****)pcVar14,
                                    (long ****)param_5,param_6,param_7,param_8);
  }
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = lVar31;
  uVar26 = param_1[0x113];
  param_1[0x113] = (long)plVar4;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  param_1[0x109] = 0x453ea00000000000;
  param_1[0x10a] = 0x45516000453ea000;
  param_1[0x10b] = 0x4559800045516000;
  param_1[0x10c] = 0x4564c00045598000;
  param_1[0x10d] = 0x45e740004564c000;
  param_1[0x10e] = 0x45f0a00045e74000;
  param_1[0x10f] = 0x45f5c80045f0a000;
  param_1[0x110] = 0x45fa280045f5c800;
  param_1[0x108] = (long)param_1;
  *(undefined4 *)(param_1 + 0x114) = 0x45fa2800;
  puVar5 = (ulong *)FUN_710392e290(0x10,0x40,(long ****)ppppppppplVar13,(byte ****)pcVar14,
                                   (long ****)param_5,param_6,param_7,param_8);
  if (puVar5 == (ulong *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ***)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long ********)&DAT_00000040;
      ppppppppplVar13 = &local_80;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar26 & 1) != 0) &&
         (puVar5 = (ulong *)FUN_710392e290(0x10,0x40,(long ****)ppppppppplVar13,(byte ****)pcVar14,
                                           (long ****)param_5,param_6,param_7,param_8),
         puVar5 != (ulong *)0x0)) goto LAB_71029f6564;
    }
    puVar5 = (ulong *)0x0;
  }
LAB_71029f6564:
  ppppppppplVar13 = (long *********)param_1[0x116];
  ppppbVar18 = (byte ****)(param_1 + 0xe7);
  pcVar14 = "S08_nature";
  pcVar20 = "S08_nature_screen";
  ppppbVar17 = ppppbVar18;
  FUN_71029fec70(puVar5,(ulong)param_1,(long ****)ppppppppplVar13,ppppbVar18,(long ****)"S08_nature"
                 ,(byte *)"S08_nature_screen",param_7,param_8);
  puVar33 = (ulong *)param_1[0x14e];
  param_1[0x14e] = (long)puVar5;
  if (puVar33 != (ulong *)0x0) {
    FUN_7103177800(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0),*puVar33);
    FUN_710392eb40((ulong)puVar33);
  }
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar13,ppppbVar17,(long ****)pcVar14,pcVar20
                          ,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ***)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long ********)&DAT_00000028;
      ppppppppplVar13 = &local_80;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar26 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar13,ppppbVar17,(long ****)pcVar14
                                  ,pcVar20,param_7,param_8), puVar6 != (undefined8 *)0x0))
      goto LAB_71029f660c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_71029f660c:
  puVar6[4] = 0x45e29000456a6000;
  *puVar6 = param_1;
  puVar6[1] = 0;
  puVar6[2] = 0x4559800000000000;
  puVar6[3] = 0x4546c00000000000;
  uVar26 = param_1[0x150];
  param_1[0x150] = (long)puVar6;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  local_a0 = 0x3f80000000000000;
  local_90 = (long ***)0x45f8180045f3c000;
  local_a8 = 0x4559700045516000;
  plVar4 = (long *)FUN_710392e290(0x10,0x180,(long ****)ppppppppplVar13,ppppbVar17,
                                  (long ****)pcVar14,pcVar20,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_94 = 0;
      local_80 = (long ********)&DAT_00000180;
      ppppppppplVar13 = &local_80;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
      if (((uVar26 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x180,(long ****)ppppppppplVar13,ppppbVar17,
                                          (long ****)pcVar14,pcVar20,param_7,param_8),
         plVar4 != (long *)0x0)) goto LAB_71029f66b0;
    }
    plVar4 = (long *)0x0;
  }
LAB_71029f66b0:
  pcVar14 = "S08_base_01";
  pcVar20 = "00_Item";
  pcVar22 = "IPP0001";
  pppplVar16 = &local_90;
  ppppbVar17 = (byte ****)0x0;
  pppplVar19 = (long ****)pcVar14;
  FUN_71029fd880(plVar4,(long)param_1,(byte *)"S08_base_01",(byte ****)0x0,(long ****)"S08_base_01",
                 (byte *)"00_Item",(byte *)"IPP0001",pppplVar16,&local_a0,&local_a8,
                 (undefined8 *)&DAT_7104556df0);
  param_1[0x140] = (long)plVar4;
  FUN_710313ef20(plVar4);
  local_90 = (long ***)0x4564b00045598000;
  local_a8 = 0x45f3b80045f0a000;
  local_a0 = 0x45f098004564c000;
  plVar4 = (long *)FUN_710392e290(0x10,0x180,(long ****)pcVar14,ppppbVar17,pppplVar19,pcVar20,
                                  pcVar22,pppplVar16);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_94 = 0;
      local_80 = (long ********)&DAT_00000180;
      ppppppppplVar13 = &local_80;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
      if (((uVar26 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x180,(long ****)ppppppppplVar13,ppppbVar17,
                                          pppplVar19,pcVar20,pcVar22,pppplVar16),
         plVar4 != (long *)0x0)) goto LAB_71029f6798;
    }
    plVar4 = (long *)0x0;
  }
LAB_71029f6798:
  pcVar14 = "S08_base_02";
  pcVar20 = "S08_base_03";
  pcVar22 = "01_Item";
  pcVar24 = "IPP0101";
  pppplVar16 = &local_90;
  ppppbVar17 = (byte ****)0x0;
  FUN_71029fd880(plVar4,(long)param_1,(byte *)"S08_base_02",(byte ****)0x0,(long ****)"S08_base_03",
                 (byte *)"01_Item",(byte *)"IPP0101",pppplVar16,&local_a0,&local_a8,
                 (undefined8 *)&DAT_7104556df8);
  param_1[0x141] = (long)plVar4;
  FUN_710313ef20(plVar4);
  local_90 = (long ***)0x4564b00045598000;
  local_a8 = 0x45f3b80045f0a000;
  local_a0 = 0x45f098004564c000;
  plVar4 = (long *)FUN_710392e290(0x10,0x140,(long ****)pcVar14,ppppbVar17,(long ****)pcVar20,
                                  pcVar22,pcVar24,pppplVar16);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_94 = 0;
      local_80 = (long ********)&DAT_00000140;
      ppppppppplVar13 = &local_80;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
      if (((uVar26 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x140,(long ****)ppppppppplVar13,ppppbVar17,
                                          (long ****)pcVar20,pcVar22,pcVar24,pppplVar16),
         plVar4 != (long *)0x0)) goto LAB_71029f6850;
    }
    plVar4 = (long *)0x0;
  }
LAB_71029f6850:
  pcVar14 = "S08_brokenboard_A";
  pcVar20 = "S08_brokenboard_A_b";
  pcVar22 = "01_Item";
  pcVar24 = "IPP0102";
  ppppbVar17 = ppppbVar18;
  pcVar23 = pcVar14;
  FUN_71029fc350(plVar4,(long)param_1,ppppbVar18,(byte ****)"S08_brokenboard_A",
                 (long ****)"S08_brokenboard_A_b",(byte *)"S08_brokenboard_A",(byte *)"01_Item",
                 (byte *)"IPP0102",(byte *)"IPP0105",0x1561e066de,&local_90,&local_a0,&local_a8,
                 (undefined8 *)&DAT_7104556df8);
  param_1[0x142] = (long)plVar4;
  FUN_710313ef20(plVar4);
  *(long *)(param_1[0x148] + param_1[0x147] * 8) = param_1[0x142];
  param_1[0x147] = param_1[0x147] + 1;
  local_90 = (long ***)0x4564b00045598000;
  local_a8 = 0x45f3b80045f0a000;
  local_a0 = 0x45f098004564c000;
  plVar4 = (long *)FUN_710392e290(0x10,0x140,(long ****)ppppbVar17,(byte ****)pcVar14,
                                  (long ****)pcVar20,pcVar23,pcVar22,pcVar24);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_94 = 0;
      local_80 = (long ********)&DAT_00000140;
      ppppppppplVar13 = &local_80;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
      if (((uVar26 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x140,(long ****)ppppppppplVar13,(byte ****)pcVar14,
                                          (long ****)pcVar20,pcVar23,pcVar22,pcVar24),
         plVar4 != (long *)0x0)) goto LAB_71029f6938;
    }
    plVar4 = (long *)0x0;
  }
LAB_71029f6938:
  pcVar14 = "S08_brokenboard_B";
  pcVar20 = "S08_brokenboard_B_b";
  pcVar22 = "01_Item";
  pcVar24 = "IPP0103";
  ppppbVar17 = ppppbVar18;
  pcVar23 = pcVar14;
  FUN_71029fc350(plVar4,(long)param_1,ppppbVar18,(byte ****)"S08_brokenboard_B",
                 (long ****)"S08_brokenboard_B_b",(byte *)"S08_brokenboard_B",(byte *)"01_Item",
                 (byte *)"IPP0103",(byte *)"IPP0106",0x15f8e93764,&local_90,&local_a0,&local_a8,
                 (undefined8 *)&DAT_7104556df8);
  param_1[0x143] = (long)plVar4;
  FUN_710313ef20(plVar4);
  *(long *)(param_1[0x148] + param_1[0x147] * 8) = param_1[0x143];
  param_1[0x147] = param_1[0x147] + 1;
  local_90 = (long ***)0x4564b00045598000;
  local_a8 = 0x45f3b80045f0a000;
  local_a0 = 0x45f098004564c000;
  plVar4 = (long *)FUN_710392e290(0x10,0x140,(long ****)ppppbVar17,(byte ****)pcVar14,
                                  (long ****)pcVar20,pcVar23,pcVar22,pcVar24);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_94 = 0;
      local_80 = (long ********)&DAT_00000140;
      ppppppppplVar13 = &local_80;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
      if (((uVar26 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x140,(long ****)ppppppppplVar13,(byte ****)pcVar14,
                                          (long ****)pcVar20,pcVar23,pcVar22,pcVar24),
         plVar4 != (long *)0x0)) goto LAB_71029f6a1c;
    }
    plVar4 = (long *)0x0;
  }
LAB_71029f6a1c:
  pcVar14 = "S08_brokenboard_C";
  pcVar20 = "S08_brokenboard_C_b";
  pcVar22 = "01_Item";
  pcVar24 = "IPP0104";
  ppppbVar17 = ppppbVar18;
  pcVar23 = pcVar14;
  FUN_71029fc350(plVar4,(long)param_1,ppppbVar18,(byte ****)"S08_brokenboard_C",
                 (long ****)"S08_brokenboard_C_b",(byte *)"S08_brokenboard_C",(byte *)"01_Item",
                 (byte *)"IPP0104",(byte *)"IPP0107",0x158fee07f2,&local_90,&local_a0,&local_a8,
                 (undefined8 *)&DAT_7104556df8);
  param_1[0x144] = (long)plVar4;
  FUN_710313ef20(plVar4);
  *(long *)(param_1[0x148] + param_1[0x147] * 8) = param_1[0x144];
  lVar31 = param_1[0x116];
  param_1[0x147] = param_1[0x147] + 1;
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0xe0,(long ****)ppppbVar17,(byte ****)pcVar14,(long ****)pcVar20,
                          pcVar23,pcVar22,pcVar24);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ***)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long ********)&DAT_000000e0;
      ppppppppplVar13 = &local_80;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar26 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0xe0,(long ****)ppppppppplVar13,(byte ****)pcVar14,
                                  (long ****)pcVar20,pcVar23,pcVar22,pcVar24),
         puVar6 != (undefined8 *)0x0)) goto LAB_71029f6b00;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_71029f6b00:
  puVar6[2] = lVar31;
  puVar6[3] = 0;
  *puVar6 = param_1;
  *(undefined4 *)(puVar6 + 1) = 0;
  *(undefined2 *)((long)puVar6 + 0xc) = 1;
  puVar6[4] = 0;
  puVar6[5] = ppppbVar18;
  ppppbVar17 = (byte ****)0x1;
  puVar6[6] = 0;
  *(undefined1 *)(puVar6 + 0x14) = 0;
  puVar6[0x16] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[9] = 0x3f800000;
  puVar6[8] = &DAT_3f8000003f800000;
  puVar6[0xb] = 0x3f80000000000000;
  puVar6[10] = 0;
  puVar6[0xf] = 0x3f800000;
  puVar6[0xe] = &DAT_3f8000003f800000;
  puVar6[0x11] = 0x3f80000000000000;
  puVar6[0x10] = 0;
  ppppppppplVar13 = *(long **********)(param_1[0x61] + 8);
  FUN_710315a0a0(puVar6 + 0x17,*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0),
                 (long ****)ppppppppplVar13,(byte ****)0x1,(long ****)pcVar20,pcVar23,pcVar22,
                 pcVar24);
  *(undefined2 *)(puVar6 + 0x18) = 0;
  *(undefined8 *)((long)puVar6 + 0xc4) = 0;
  *(undefined4 *)(*(long *)(puVar6[0x17] + 8) + 0x14) = 1;
  lVar31 = puVar6[0x17];
  if (*(char *)(lVar31 + 0x10) == '\0') {
    lVar29 = *(long *)(lVar31 + 8);
    *(undefined1 *)(lVar31 + 0x10) = 1;
    if (*(char *)(lVar31 + 0x11) == '\0') {
      if (*(char *)(lVar29 + 0x1c) != '\0') {
        (**(code **)(*(long *)(*DAT_71052b8f00 + 0xa30) + 0x18))(*DAT_71052b8f00 + 0xa30,lVar29);
        *(undefined1 *)(lVar29 + 0x1c) = 0;
      }
    }
    else if (*(char *)(lVar29 + 0x1c) == '\0') {
      (**(code **)(*(long *)(*DAT_71052b8f00 + 0xa30) + 0x10))(*DAT_71052b8f00 + 0xa30,lVar29);
      *(undefined1 *)(lVar29 + 0x1c) = 1;
    }
  }
  puVar6[0x1a] = 0;
  plVar4 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar13,ppppbVar17,(long ****)pcVar20
                                  ,pcVar23,pcVar22,pcVar24);
  uVar25 = extraout_x1;
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ***)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long ********)&SUB_00000020;
      ppppppppplVar13 = &local_80;
      auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      uVar25 = auVar38._8_8_;
      if (((auVar38._0_8_ & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar13,ppppbVar17,
                                          (long ****)pcVar20,pcVar23,pcVar22,pcVar24),
         uVar25 = extraout_x1_00, plVar4 != (long *)0x0)) goto LAB_71029f6be8;
    }
    plVar4 = (long *)0x0;
  }
LAB_71029f6be8:
  for (plVar7 = *(long **)(param_1[0x62] + 0xd0); plVar7 != *(long **)(param_1[0x62] + 0xd8);
      plVar7 = plVar7 + 2) {
    if ((*(uint *)(plVar7 + 1) < 2) && (lVar31 = *plVar7, *(long *)(lVar31 + 0x68) == 0xce651d44c))
    {
      *plVar4 = lVar31;
      if ((lVar31 == 0) || (*(long *)(lVar31 + 0xd8) != 0)) goto LAB_71029f6c30;
      plVar7 = FUN_71026533a0((undefined8 *)(lVar31 + 0x90),0,(long ****)ppppppppplVar13,ppppbVar17,
                              (long ****)pcVar20,pcVar23,(long ***)pcVar22,(long ***)pcVar24);
      plVar34 = *(long **)(lVar31 + 0xd8);
      *(long **)(lVar31 + 0xd8) = plVar7;
      uVar25 = extraout_x1_26;
      if (plVar34 == (long *)0x0) goto LAB_71029f6c30;
      (**(code **)(*plVar34 + 8))();
      lVar31 = *plVar4;
      uVar25 = extraout_x1_27;
      goto joined_r0x0071029f83cc;
    }
  }
  *plVar4 = 0;
LAB_71029f6c30:
  lVar31 = *plVar4;
joined_r0x0071029f83cc:
  if (lVar31 != 0) {
    if ((*(char *)(lVar31 + 0xe0) != '\0') && (*(long *)(lVar31 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar31 + 200) + 0x30) = 0x101;
    }
    if (*(long *)(lVar31 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar31 + 0xd8) + 0x21) = 1;
    }
    if (*(char *)(lVar31 + 0xe0) != '\0') {
      *(undefined1 *)(*(long *)(lVar31 + 0xb0) + 0x10) = 0;
    }
  }
  uVar2 = 0xffffffff;
  plVar7 = plVar4 + 1;
  *plVar7 = -1;
  lVar31 = *plVar4;
  *(undefined4 *)(plVar4 + 3) = 0xffffffff;
  plVar4[2] = -1;
  if (lVar31 == 0) {
    *(undefined4 *)plVar7 = 0xffffffff;
LAB_71029f6dc4:
    *(undefined4 *)((long)plVar4 + 0xc) = 0xffffffff;
LAB_71029f6dc8:
    *(undefined4 *)(plVar4 + 2) = 0xffffffff;
LAB_71029f6dcc:
    *(undefined4 *)((long)plVar4 + 0x14) = 0xffffffff;
  }
  else {
    if (*(long *)(lVar31 + 0xd8) != 0) {
      plVar7 = *(long **)(*(long *)(*(long *)(lVar31 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar7 + 0x18))(plVar7,"polySurface3656");
      lVar31 = *plVar4;
      *(undefined4 *)(plVar4 + 1) = uVar1;
      uVar25 = extraout_x1_01;
      if (lVar31 == 0) goto LAB_71029f6dc4;
      lVar29 = *(long *)(lVar31 + 0xd8);
      if (lVar29 == 0) goto LAB_71029f831c;
LAB_71029f6cc8:
      plVar7 = *(long **)(*(long *)(lVar29 + 8) + 8);
      uVar1 = (**(code **)(*plVar7 + 0x18))(plVar7,"polySurface3655");
      lVar31 = *plVar4;
      *(undefined4 *)((long)plVar4 + 0xc) = uVar1;
      uVar25 = extraout_x1_02;
      if (lVar31 == 0) goto LAB_71029f6dc8;
      lVar29 = *(long *)(lVar31 + 0xd8);
      if (lVar29 == 0) goto LAB_71029f8328;
LAB_71029f6cf8:
      plVar7 = *(long **)(*(long *)(lVar29 + 8) + 8);
      uVar1 = (**(code **)(*plVar7 + 0x18))(plVar7,"polySurface3654");
      lVar31 = *plVar4;
      *(undefined4 *)(plVar4 + 2) = uVar1;
      uVar25 = extraout_x1_03;
      if (lVar31 != 0) {
        lVar29 = *(long *)(lVar31 + 0xd8);
        goto joined_r0x0071029f6d24;
      }
      goto LAB_71029f6dcc;
    }
    *(undefined4 *)plVar7 = 0xffffffff;
    lVar29 = *(long *)(lVar31 + 0xd8);
    if (lVar29 != 0) goto LAB_71029f6cc8;
LAB_71029f831c:
    *(undefined4 *)((long)plVar4 + 0xc) = 0xffffffff;
    lVar29 = *(long *)(lVar31 + 0xd8);
    if (lVar29 != 0) goto LAB_71029f6cf8;
LAB_71029f8328:
    *(undefined4 *)(plVar4 + 2) = 0xffffffff;
    lVar29 = *(long *)(lVar31 + 0xd8);
joined_r0x0071029f6d24:
    if (lVar29 == 0) {
      *(undefined4 *)((long)plVar4 + 0x14) = 0xffffffff;
      lVar31 = *(long *)(lVar31 + 0xd8);
joined_r0x0071029f833c:
      if (lVar31 == 0) goto LAB_71029f8340;
      plVar7 = *(long **)(*(long *)(lVar31 + 8) + 8);
      uVar2 = (**(code **)(*plVar7 + 0x18))(plVar7,"polySurface3652");
      uVar25 = extraout_x1_05;
    }
    else {
      plVar7 = *(long **)(*(long *)(lVar29 + 8) + 8);
      uVar2 = (**(code **)(*plVar7 + 0x18))(plVar7,"polySurface3653");
      *(undefined4 *)((long)plVar4 + 0x14) = uVar2;
      uVar25 = extraout_x1_04;
      if (*plVar4 != 0) {
        lVar31 = *(long *)(*plVar4 + 0xd8);
        goto joined_r0x0071029f833c;
      }
LAB_71029f8340:
      uVar2 = 0xffffffff;
    }
  }
  *(undefined4 *)(plVar4 + 3) = uVar2;
  uVar26 = puVar6[0x16];
  puVar6[0x16] = plVar4;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
    plVar4 = (long *)puVar6[0x16];
    uVar25 = extraout_x1_06;
  }
  lVar31 = *plVar4;
  if (lVar31 != 0) {
    *(undefined1 *)(lVar31 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar31 + 0x108),uVar25,(long ****)ppppppppplVar13,ppppbVar17,
                   (long ****)pcVar20,pcVar23,pcVar22,pcVar24);
    lVar31 = *plVar4;
    if (lVar31 != 0) {
      if ((*(char *)(lVar31 + 0xe0) != '\0') && (*(long *)(lVar31 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar31 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar31 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar31 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar31 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar31 + 0xb0) + 0x10) = 0;
      }
    }
  }
  if ((ulong)(param_1[0x36] - param_1[0x35] >> 3) < 2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar31 = *(long *)(*(long *)(*(long *)(param_1[0x35] + 8) + 0x10) + 0x40);
  fVar35 = *(float *)(param_1 + 0xf4);
  fVar37 = *(float *)(lVar31 + 0x104);
  *(float *)((long)puVar6 + 0xc4) = *(float *)(lVar31 + 0x100) - fVar35;
  *(float *)(puVar6 + 0x19) = fVar35 + fVar37;
  plVar4 = (long *)FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar13,ppppbVar17,(long ****)pcVar20
                                  ,pcVar23,pcVar22,pcVar24);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ***)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long ********)&DAT_000000a8;
      ppppppppplVar13 = &local_80;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar26 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar13,ppppbVar17,
                                          (long ****)pcVar20,pcVar23,pcVar22,pcVar24),
         plVar4 != (long *)0x0)) goto LAB_71029f6ed0;
    }
    plVar4 = (long *)0x0;
  }
LAB_71029f6ed0:
  *plVar4 = (long)param_1;
  plVar4[1] = (long)ppppbVar18;
  plVar4[0x13] = 0;
  plVar4[0x14] = 0;
  plVar4[2] = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  local_80 = (long ********)&DAT_00000004;
  puStack_78 = &DAT_100000001;
  local_70 = CONCAT44((int)((ulong)(param_1[0xf6] - param_1[0xf5]) >> 2) * -0x3b13b13b +
                      (int)((ulong)(param_1[0xf9] - param_1[0xf8]) >> 2) * -0x3b13b13b +
                      (int)((ulong)(param_1[0xfc] - param_1[0xfb]) >> 2) * -0x3b13b13b +
                      (int)((ulong)(param_1[0xff] - param_1[0xfe]) >> 2) * -0x3b13b13b +
                      (int)((ulong)(param_1[0x102] - param_1[0x101]) >> 2) * -0x3b13b13b +
                      (int)((ulong)(param_1[0x105] - param_1[0x104]) >> 2) * -0x3b13b13b,1);
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x48,(long ****)ppppppppplVar13,ppppbVar17,(long ****)pcVar20,pcVar23
                          ,pcVar22,pcVar24);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = local_a0 & 0xffffffff00000000;
      local_90 = (long ***)&DAT_00000048;
      pppplVar16 = &local_90;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar26 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x48,pppplVar16,ppppbVar17,(long ****)pcVar20,pcVar23,pcVar22
                                  ,pcVar24), puVar8 != (undefined8 *)0x0)) goto LAB_71029f6ff0;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71029f6ff0:
  FUN_710313e6a0(puVar8,*plVar4,(long ****)&local_80,ppppbVar17,(long ****)pcVar20,pcVar23,pcVar22,
                 pcVar24);
  plVar4[2] = (long)puVar8;
  FUN_71029ff1d0((long)plVar4,0,*(byte *****)(plVar4[1] + 0x70),*(byte *****)(plVar4[1] + 0x78),
                 (long ****)pcVar20,pcVar23,pcVar22,pcVar24);
  FUN_71029ff1d0((long)plVar4,1,*(byte *****)(plVar4[1] + 0x88),*(byte *****)(plVar4[1] + 0x90),
                 (long ****)pcVar20,pcVar23,pcVar22,pcVar24);
  FUN_71029ff1d0((long)plVar4,2,*(byte *****)(plVar4[1] + 0xa0),*(byte *****)(plVar4[1] + 0xa8),
                 (long ****)pcVar20,pcVar23,pcVar22,pcVar24);
  FUN_71029ff1d0((long)plVar4,3,*(byte *****)(plVar4[1] + 0xb8),*(byte *****)(plVar4[1] + 0xc0),
                 (long ****)pcVar20,pcVar23,pcVar22,pcVar24);
  FUN_71029ff1d0((long)plVar4,4,*(byte *****)(plVar4[1] + 0xd0),*(byte *****)(plVar4[1] + 0xd8),
                 (long ****)pcVar20,pcVar23,pcVar22,pcVar24);
  ppppbVar18 = *(byte *****)(plVar4[1] + 0xe8);
  ppppbVar17 = *(byte *****)(plVar4[1] + 0xf0);
  FUN_71029ff1d0((long)plVar4,5,ppppbVar18,ppppbVar17,(long ****)pcVar20,pcVar23,pcVar22,pcVar24);
  plVar7 = (long *)plVar4[2];
  if ((char)plVar7[8] != '\0') {
    plVar34 = (long *)plVar7[6];
    if (((plVar34 != (long *)0x0) && ((char)plVar34[2] != '\0')) &&
       (*(undefined1 *)(plVar34 + 2) = 0, (char)plVar34[10] != '\0')) {
      plVar9 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar34 + 8));
      (**(code **)(*plVar9 + 0x48))(plVar9,0);
      *(undefined1 *)(plVar34 + 10) = 0;
    }
    (**(code **)(*plVar7 + 0x30))(plVar7);
  }
  *(undefined1 *)(plVar7 + 8) = 0;
  uVar26 = puVar6[0x1a];
  puVar6[0x1a] = plVar4;
  if (uVar26 != 0) {
    uVar10 = *(ulong *)(uVar26 + 0x90);
    if (uVar10 != 0) {
      *(ulong *)(uVar26 + 0x98) = uVar10;
      FUN_710392eb40(uVar10);
    }
    uVar10 = *(ulong *)(uVar26 + 0x78);
    if (uVar10 != 0) {
      *(ulong *)(uVar26 + 0x80) = uVar10;
      FUN_710392eb40(uVar10);
    }
    uVar10 = *(ulong *)(uVar26 + 0x60);
    if (uVar10 != 0) {
      *(ulong *)(uVar26 + 0x68) = uVar10;
      FUN_710392eb40(uVar10);
    }
    uVar10 = *(ulong *)(uVar26 + 0x48);
    if (uVar10 != 0) {
      *(ulong *)(uVar26 + 0x50) = uVar10;
      FUN_710392eb40(uVar10);
    }
    uVar10 = *(ulong *)(uVar26 + 0x30);
    if (uVar10 != 0) {
      *(ulong *)(uVar26 + 0x38) = uVar10;
      FUN_710392eb40(uVar10);
    }
    uVar10 = *(ulong *)(uVar26 + 0x18);
    if (uVar10 != 0) {
      *(ulong *)(uVar26 + 0x20) = uVar10;
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar26);
    plVar4 = (long *)puVar6[0x1a];
  }
  plVar4 = (long *)plVar4[2];
  if ((char)plVar4[8] != '\0') {
    plVar7 = (long *)plVar4[6];
    if (((plVar7 != (long *)0x0) && ((char)plVar7[2] != '\0')) &&
       (*(undefined1 *)(plVar7 + 2) = 0, (char)plVar7[10] != '\0')) {
      plVar34 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar7 + 8));
      (**(code **)(*plVar34 + 0x48))(plVar34,0);
      *(undefined1 *)(plVar7 + 10) = 0;
    }
    (**(code **)(*plVar4 + 0x30))(plVar4);
  }
  *(undefined1 *)(plVar4 + 8) = 0;
  uVar26 = param_1[0x14c];
  param_1[0x14c] = (long)puVar6;
  if (uVar26 != 0) {
    FUN_71029ff620(uVar26);
    FUN_710392eb40(uVar26);
  }
  lVar31 = param_1[0x116];
  plVar4 = (long *)FUN_710392e290(0x10,0xa0,(long ****)ppppbVar18,ppppbVar17,(long ****)pcVar20,
                                  pcVar23,pcVar22,pcVar24);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ***)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long ********)&DAT_000000a0;
      ppppppppplVar13 = &local_80;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar26 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0xa0,(long ****)ppppppppplVar13,ppppbVar17,
                                          (long ****)pcVar20,pcVar23,pcVar22,pcVar24),
         plVar4 != (long *)0x0)) goto LAB_71029f7228;
    }
    plVar4 = (long *)0x0;
  }
LAB_71029f7228:
  local_80 = (long ********)0x0;
  puStack_78 = &DAT_100000001;
  local_70 = 0x1000000001;
  FUN_710313e6a0(plVar4,(long)param_1,(long ****)&local_80,ppppbVar17,(long ****)pcVar20,pcVar23,
                 pcVar22,pcVar24);
  *plVar4 = (long)&PTR_FUN_7105102480;
  *(undefined4 *)((long)plVar4 + 0x7c) = 0;
  plVar4[0x10] = 0x42c8000042c80000;
  *(undefined4 *)((long)plVar4 + 0x44) = 0;
  plVar4[9] = (long)param_1;
  plVar4[10] = 0;
  *(undefined4 *)(plVar4 + 0x11) = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xb] = lVar31;
  plVar4[0xc] = 0;
  plVar4[0x12] = 0x42c8000000000000;
  plVar4[0x13] = 0x42c80000;
  lVar31 = param_1[0x61];
  uVar2 = *(undefined4 *)(lVar31 + 0x124);
  *(undefined4 *)((long)plVar4 + 0x74) = uVar2;
  *(undefined4 *)((long)plVar4 + 0x7c) = uVar2;
  *(undefined4 *)(plVar4 + 0x10) = 0x42c80000;
  *(undefined4 *)(plVar4 + 0x12) = uVar2;
  *(undefined4 *)((long)plVar4 + 0x94) = 0x42c80000;
  local_80 = (long ********)(ulong)(uint)(*(float *)(lVar31 + 0x118) + -20.0);
  puStack_78 = (undefined1 *)0x0;
  local_70 = (ulong)(uint)(*(float *)(lVar31 + 0x11c) + 20.0);
  local_a0 = CONCAT44(local_a0._4_4_,0x800);
  uStack_68 = 0;
  uStack_88 = 0;
  local_90 = (long ***)&DAT_3f80000000000000;
  local_a8 = local_a8 & 0xffffffff00000000;
  plVar34 = (long *)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8) + 0x50);
  plVar7 = (long *)*plVar34;
  if (plVar7 != (long *)0x0) {
    plVar34 = (long *)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8) + 0x50);
    do {
      while (plVar9 = plVar7, (ulong)plVar9[4] <= *(ulong *)(param_1[0x60] + 0x10)) {
        if (*(ulong *)(param_1[0x60] + 0x10) <= (ulong)plVar9[4]) goto LAB_71029f734c;
        plVar34 = plVar9 + 1;
        plVar7 = (long *)*plVar34;
        if ((long *)*plVar34 == (long *)0x0) goto LAB_71029f734c;
      }
      plVar7 = (long *)*plVar9;
      plVar34 = plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
LAB_71029f734c:
  lVar31 = *(long *)(*plVar34 + 0x28);
  pauVar15 = (undefined1 (*) [16])&local_80;
  ppppbVar18 = (byte ****)0x2;
  pauVar21 = (undefined1 (*) [16])&local_90;
  puVar5 = &local_a0;
  puVar33 = &local_a8;
  uVar25 = 0;
  ppplVar11 = FUN_7100523f10(DAT_71052b9298,**(uint **)(lVar31 + 0xc0),pauVar15,
                             (undefined1 (*) [16])0x2,pauVar21,(uint *)puVar5,(uint *)puVar33,0);
  FUN_71031653d0(lVar31,(long)ppplVar11,(long ****)pauVar15,ppppbVar18,(long ****)pauVar21,puVar5,
                 puVar33,uVar25);
  plVar4[10] = (long)ppplVar11;
  *(undefined1 *)(ppplVar11 + 0x25) = 0;
  *(undefined1 *)((long)ppplVar11 + 0x12f) = 0;
  *(undefined1 *)(ppplVar11 + 0x26) = *(undefined1 *)((long)ppplVar11 + 299);
  *(undefined4 *)((long)ppplVar11 + 299) = 0;
  pplVar27 = ppplVar11[0x20];
  ppplVar11[0x20] = ppplVar11[0x11];
  ppplVar11[0x21] = ppplVar11[0x12];
  pplVar32 = ppplVar11[0x13];
  ppplVar11[0x11] = pplVar27;
  ppplVar11[0x12] = pplVar27;
  ppplVar11[0x13] = ppplVar11[0x22];
  ppplVar11[0x18] = ppplVar11[0x17];
  ppplVar11[0x22] = pplVar32;
  ppplVar11[0x15] = ppplVar11[0x14];
  ppplVar11[0x1b] = ppplVar11[0x1a];
  ppplVar11[0x1e] = ppplVar11[0x1d];
  if (ppplVar11[1] != (long **)0x0) {
    ppplVar11[1][0x1b] = (long *)0x0;
    pplVar32 = ppplVar11[1];
    if (*(char *)(pplVar32 + 0x1c) != '\0') {
      pplVar27 = (long **)pplVar32[0x10];
      *(undefined2 *)(pplVar32 + 0x1c) = 0;
      *(undefined2 *)((long)pplVar32 + 0xe7) = 0;
      for (; pplVar32 + 0x10 != pplVar27; pplVar27 = (long **)*pplVar27) {
        *(undefined1 *)(pplVar27 + 0x20) = 0;
        if (*(uint *)((long)pplVar27 + 0xfc) != 0) {
          plVar7 = pplVar27[0x1e];
          *(undefined1 *)(*plVar7 + (ulong)*(uint *)((long)pplVar27 + 0xfc) * 0x18 + 0x10) = 0;
          pauVar15 = (undefined1 (*) [16])0x0;
          (**(code **)(*(long *)plVar7[3] + 0x18))();
        }
        *(undefined4 *)(pplVar27 + 0x10) = 0;
        pplVar27[0xe] = (long *)0x0;
        pplVar27[0xf] = (long *)0x0;
        pplVar27[0xc] = (long *)0x0;
        pplVar27[0xd] = (long *)0x0;
      }
      for (pplVar27 = (long **)pplVar32[0xd]; pplVar32 + 0xd != pplVar27;
          pplVar27 = (long **)*pplVar27) {
        *(undefined1 *)(pplVar27 + 10) = 0;
      }
      FUN_7100525010(DAT_71052b9298,(long)pplVar32);
    }
  }
  param_1[0x14f] = (long)plVar4;
  FUN_710313ef20(plVar4);
  iVar28 = (int)param_1[0x115];
  if (iVar28 == 2) {
    *(undefined4 *)(param_1 + 0x111) = 4;
    puVar6 = (undefined8 *)param_1[0x113];
    uVar2 = *(undefined4 *)*puVar6;
    *(float *)((long)puVar6 + 0xc) = *(float *)((long)param_1 + 0x86c) - *(float *)(param_1 + 0x10d)
    ;
    *(undefined4 *)(puVar6 + 1) = uVar2;
    *(undefined4 *)(puVar6 + 2) = uVar2;
    *(undefined4 *)((long)puVar6 + 0x14) = 0;
    if (param_1[0x128] != 0) {
      uVar26 = 0;
      uVar36 = extraout_x1_07;
      do {
        plVar4 = (long *)param_1[uVar26 + 0x12a];
        lVar31 = *plVar4;
        *(undefined1 *)(plVar4 + 6) = 0;
        if (lVar31 != 0) {
          *(undefined1 *)(lVar31 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar31 + 0x108),uVar36,(long ****)pauVar15,ppppbVar18,
                         (long ****)pauVar21,puVar5,puVar33,uVar25);
          lVar31 = *plVar4;
          uVar36 = extraout_x1_23;
          if (lVar31 != 0) {
            if ((*(char *)(lVar31 + 0xe0) != '\0') && (*(long *)(lVar31 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar31 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar31 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar31 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar31 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar31 + 0xb0) + 0x10) = 0;
            }
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < (ulong)param_1[0x128]);
    }
    lVar31 = param_1[0x140];
    pauVar15 = (undefined1 (*) [16])0x1;
    FUN_71025f4d80((long *)**(undefined8 **)(lVar31 + 0xe8),
                   (long *)(*(undefined8 **)(lVar31 + 0xe8))[1],1);
    plVar4 = *(long **)(lVar31 + 0xf0);
    if ((char)plVar4[4] != '\0') {
      plVar7 = (long *)plVar4[1];
      lVar29 = plVar4[2];
      lVar30 = *plVar4;
      *(undefined1 *)(plVar4 + 4) = 0;
      *plVar7 = lVar30;
      *(long **)(lVar30 + 8) = plVar7;
      *(long *)(lVar29 + 0x18) = *(long *)(lVar29 + 0x18) + -1;
      *plVar4 = 0;
      plVar4[1] = 0;
      puVar6 = *(undefined8 **)(lVar29 + 0x40);
      *plVar4 = lVar29 + 0x38;
      plVar4[1] = (long)puVar6;
      *(long **)(lVar29 + 0x40) = plVar4;
      *puVar6 = plVar4;
      *(long *)(lVar29 + 0x30) = *(long *)(lVar29 + 0x30) + 1;
      iVar28 = 0;
      if (plVar4[3] != 0) {
        iVar28 = *(int *)(plVar4[3] + 0x110);
      }
      *(int *)(lVar29 + 0x48) = *(int *)(lVar29 + 0x48) - iVar28;
    }
    if (*(long *)(lVar31 + 200) != 0) {
      uVar26 = 0;
      uVar36 = extraout_x1_24;
      do {
        plVar4 = *(long **)(lVar31 + 0xd8 + uVar26 * 8);
        lVar29 = *plVar4;
        *(undefined1 *)(plVar4 + 6) = 0;
        if (lVar29 != 0) {
          *(undefined1 *)(lVar29 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar29 + 0x108),uVar36,(long ****)pauVar15,ppppbVar18,
                         (long ****)pauVar21,puVar5,puVar33,uVar25);
          lVar29 = *plVar4;
          uVar36 = extraout_x1_25;
          if (lVar29 != 0) {
            if ((*(char *)(lVar29 + 0xe0) != '\0') && (*(long *)(lVar29 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar29 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar29 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar29 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar29 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar29 + 0xb0) + 0x10) = 0;
            }
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(ulong *)(lVar31 + 200));
    }
    if (param_1[0x13c] != 0) {
      uVar26 = 0;
      do {
        pauVar15 = (undefined1 (*) [16])((long *)param_1[uVar26 + 0x13e] + 4);
        FUN_71029fc1d0((long *)param_1[uVar26 + 0x13e],4,(long ****)pauVar15,ppppbVar18,
                       (long ****)pauVar21,puVar5,puVar33,uVar25);
        uVar26 = uVar26 + 1;
      } while (uVar26 < (ulong)param_1[0x13c]);
    }
    lVar31 = param_1[0x141];
    plVar7 = (long *)(*(long **)(lVar31 + 0xe8))[1];
    for (plVar4 = (long *)**(long **)(lVar31 + 0xe8); plVar4 != plVar7; plVar4 = plVar4 + 1) {
      lVar29 = *plVar4;
      *(undefined1 *)(lVar29 + 0x128) = 1;
      if (*(long *)(lVar29 + 8) != 0) {
        *(undefined8 *)(*(long *)(lVar29 + 8) + 0xd8) = 0xffffffffffffffff;
        FUN_7100532bc0(*(long *)(lVar29 + 8),0);
      }
    }
    plVar4 = *(long **)(lVar31 + 0xf0);
    if ((char)plVar4[4] == '\0') {
      *(undefined1 *)(plVar4 + 4) = 1;
      lVar30 = *plVar4;
      plVar7 = (long *)plVar4[1];
      lVar29 = plVar4[2];
      *plVar7 = lVar30;
      *(long **)(lVar30 + 8) = plVar7;
      *(long *)(lVar29 + 0x30) = *(long *)(lVar29 + 0x30) + -1;
      *plVar4 = 0;
      plVar4[1] = 0;
      puVar6 = *(undefined8 **)(lVar29 + 0x28);
      *plVar4 = lVar29 + 0x20;
      plVar4[1] = (long)puVar6;
      *(long **)(lVar29 + 0x28) = plVar4;
      *puVar6 = plVar4;
      *(long *)(lVar29 + 0x18) = *(long *)(lVar29 + 0x18) + 1;
      iVar28 = 0;
      if (plVar4[3] != 0) {
        iVar28 = *(int *)(plVar4[3] + 0x110);
      }
      *(int *)(lVar29 + 0x48) = *(int *)(lVar29 + 0x48) + iVar28;
    }
    if (*(long *)(lVar31 + 200) != 0) {
      uVar26 = 0;
      do {
        plVar4 = *(long **)(lVar31 + 0xd8 + uVar26 * 8);
        pauVar15 = (undefined1 (*) [16])(plVar4 + 4);
        FUN_71029fc1d0(plVar4,4,(long ****)pauVar15,ppppbVar18,(long ****)pauVar21,puVar5,puVar33,
                       uVar25);
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(ulong *)(lVar31 + 200));
    }
    if (param_1[0x147] != 0) {
      uVar26 = 0;
      do {
        FUN_71029fd5a0(param_1[uVar26 + 0x149],1,pauVar15,ppppbVar18,(long ****)pauVar21,puVar5,
                       puVar33,uVar25);
        uVar26 = uVar26 + 1;
      } while (uVar26 < (ulong)param_1[0x147]);
    }
    plVar4 = (long *)param_1[0x150];
    *(int *)(*(long *)(*(long *)(*plVar4 + 0x318) + 0x18) + 0x2c) = (int)plVar4[4];
    *(undefined4 *)(plVar4 + 1) = 4;
    lVar31 = *(long *)(param_1[0x60] + 0x60);
    lVar29 = *(long *)(*(long *)(param_1[0x60] + 0x48) + 8);
    uVar36 = *(undefined8 *)(lVar29 + 0x40);
    *(ulong *)(lVar31 + 0x38) = *(ulong *)(lVar29 + 0x48) & 0xffffffff;
    *(undefined8 *)(lVar31 + 0x30) = uVar36;
    uVar36 = *(undefined8 *)(lVar29 + 0x50);
    *(ulong *)(lVar31 + 0x48) = *(ulong *)(lVar29 + 0x58) & 0xffffffff;
    *(undefined8 *)(lVar31 + 0x40) = uVar36;
    uVar36 = *(undefined8 *)(lVar29 + 0x60);
    *(ulong *)(lVar31 + 0x58) = *(ulong *)(lVar29 + 0x68) & 0xffffffff;
    *(undefined8 *)(lVar31 + 0x50) = uVar36;
    uVar36 = *(undefined8 *)(lVar29 + 0x70);
    *(ulong *)(lVar31 + 0x68) = *(ulong *)(lVar29 + 0x78) & 0xffffffff;
    *(undefined8 *)(lVar31 + 0x60) = uVar36;
    uVar36 = *(undefined8 *)(lVar29 + 0x80);
    *(ulong *)(lVar31 + 0x78) = *(ulong *)(lVar29 + 0x88) & 0xffffffff;
    *(undefined8 *)(lVar31 + 0x70) = uVar36;
    *(undefined1 *)(lVar31 + 0x80) = *(undefined1 *)(lVar29 + 0x90);
    uVar36 = *(undefined8 *)(lVar29 + 0xa0);
    *(ulong *)(lVar31 + 0x98) = *(ulong *)(lVar29 + 0xa8) & 0xffffffff;
    *(undefined8 *)(lVar31 + 0x90) = uVar36;
    uVar36 = *(undefined8 *)(lVar29 + 0xb0);
    *(ulong *)(lVar31 + 0xa8) = *(ulong *)(lVar29 + 0xb8) & 0xffffffff;
    *(undefined8 *)(lVar31 + 0xa0) = uVar36;
    lVar31 = *(long *)(*(long *)(param_1[0x60] + 0x48) + 8);
    puVar12 = *(ulong **)(param_1[0x60] + 0x60);
    if (puVar12 != (ulong *)(lVar31 + 8)) {
      pauVar15 = *(undefined1 (**) [16])(lVar31 + 0x10);
      FUN_7102616cf0(puVar12,*(undefined1 (**) [16])(lVar31 + 8),pauVar15,ppppbVar18,
                     (long ****)pauVar21,puVar5,puVar33,uVar25);
    }
    puVar8 = *(undefined8 **)(*(long *)param_1[0x66] + 0x58);
    for (puVar6 = *(undefined8 **)(*(long *)param_1[0x66] + 0x50); puVar6 != puVar8;
        puVar6 = puVar6 + 1) {
      plVar4 = (long *)*puVar6;
      if (*(int *)((long)plVar4 + 0xc) == 1) {
        if ((char)plVar4[3] == '\0') {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          *(undefined1 *)(plVar4 + 3) = 1;
        }
      }
      else if ((char)plVar4[3] != '\0') {
        *(undefined1 *)(plVar4 + 3) = 0;
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    FUN_71029fad30((long)param_1);
    FUN_71025f7350(*(long *)(param_1[99] + 0x10),(byte *)"light01");
    FUN_7102633910(param_1[99],(long *********)"render_param_01",pauVar15,ppppbVar18,
                   (long ****)pauVar21,puVar5,puVar33,uVar25);
    FUN_7102633800(param_1[99],(long *********)"reflection_cubemap_01",pauVar15,ppppbVar18,
                   (long ****)pauVar21,puVar5,puVar33,uVar25);
    FUN_7102633a10(param_1[99],(long *********)"chara_01",1,ppppbVar18,(long ****)pauVar21,puVar5,
                   puVar33,uVar25);
    FUN_7102633b90(param_1[99],(long *********)"stage_01",1,ppppbVar18,(long ****)pauVar21,puVar5,
                   puVar33,uVar25);
    plVar4 = *(long **)(*(long *)param_1[0x67] + 8);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x58))(plVar4,1,0xffffffff);
    }
  }
  else {
    if (iVar28 == 1) {
      puVar6 = (undefined8 *)param_1[0x113];
      *(undefined4 *)(param_1 + 0x111) = 0;
      uVar2 = *(undefined4 *)*puVar6;
      *(float *)((long)puVar6 + 0xc) =
           *(float *)((long)param_1 + 0x84c) - *(float *)(param_1 + 0x109);
      *(undefined4 *)(puVar6 + 1) = uVar2;
      *(undefined4 *)(puVar6 + 2) = uVar2;
      *(undefined4 *)((long)puVar6 + 0x14) = 0;
      plVar4 = *(long **)(**(long **)(param_1[0x108] + 0x338) + 8);
      uVar36 = extraout_x1_07;
      if (plVar4 != (long *)0x0) {
        pauVar15 = (undefined1 (*) [16])&DAT_ffffffff;
        (**(code **)(*plVar4 + 0x58))(plVar4,0);
        uVar36 = extraout_x1_18;
      }
      if (param_1[0x13c] != 0) {
        uVar26 = 0;
        do {
          plVar4 = (long *)param_1[uVar26 + 0x13e];
          lVar31 = *plVar4;
          *(undefined1 *)(plVar4 + 6) = 0;
          if (lVar31 != 0) {
            *(undefined1 *)(lVar31 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar31 + 0x108),uVar36,(long ****)pauVar15,ppppbVar18,
                           (long ****)pauVar21,puVar5,puVar33,uVar25);
            lVar31 = *plVar4;
            uVar36 = extraout_x1_19;
            if (lVar31 != 0) {
              if ((*(char *)(lVar31 + 0xe0) != '\0') && (*(long *)(lVar31 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar31 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar31 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar31 + 0xd8) + 0x21) = 1;
              }
              if (*(char *)(lVar31 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar31 + 0xb0) + 0x10) = 0;
              }
            }
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 < (ulong)param_1[0x13c]);
      }
      lVar31 = param_1[0x141];
      pppplVar16 = (long ****)0x1;
      FUN_71025f4d80((long *)**(undefined8 **)(lVar31 + 0xe8),
                     (long *)(*(undefined8 **)(lVar31 + 0xe8))[1],1);
      plVar4 = *(long **)(lVar31 + 0xf0);
      if ((char)plVar4[4] != '\0') {
        plVar7 = (long *)plVar4[1];
        lVar29 = plVar4[2];
        lVar30 = *plVar4;
        *(undefined1 *)(plVar4 + 4) = 0;
        *plVar7 = lVar30;
        *(long **)(lVar30 + 8) = plVar7;
        *(long *)(lVar29 + 0x18) = *(long *)(lVar29 + 0x18) + -1;
        *plVar4 = 0;
        plVar4[1] = 0;
        puVar6 = *(undefined8 **)(lVar29 + 0x40);
        *plVar4 = lVar29 + 0x38;
        plVar4[1] = (long)puVar6;
        *(long **)(lVar29 + 0x40) = plVar4;
        *puVar6 = plVar4;
        *(long *)(lVar29 + 0x30) = *(long *)(lVar29 + 0x30) + 1;
        iVar28 = 0;
        if (plVar4[3] != 0) {
          iVar28 = *(int *)(plVar4[3] + 0x110);
        }
        *(int *)(lVar29 + 0x48) = *(int *)(lVar29 + 0x48) - iVar28;
      }
      uVar36 = extraout_x1_20;
      if (*(long *)(lVar31 + 200) != 0) {
        uVar26 = 0;
        do {
          plVar4 = *(long **)(lVar31 + 0xd8 + uVar26 * 8);
          lVar29 = *plVar4;
          *(undefined1 *)(plVar4 + 6) = 0;
          if (lVar29 != 0) {
            *(undefined1 *)(lVar29 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar29 + 0x108),uVar36,pppplVar16,ppppbVar18,(long ****)pauVar21
                           ,puVar5,puVar33,uVar25);
            lVar29 = *plVar4;
            uVar36 = extraout_x1_21;
            if (lVar29 != 0) {
              if ((*(char *)(lVar29 + 0xe0) != '\0') && (*(long *)(lVar29 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar29 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar29 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar29 + 0xd8) + 0x21) = 1;
              }
              if (*(char *)(lVar29 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar29 + 0xb0) + 0x10) = 0;
              }
            }
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 < *(ulong *)(lVar31 + 200));
      }
      if (param_1[0x147] != 0) {
        uVar26 = 0;
        do {
          FUN_71029fd390(param_1[uVar26 + 0x149],uVar36,pppplVar16,ppppbVar18,(long ****)pauVar21,
                         puVar5,puVar33,uVar25);
          uVar26 = uVar26 + 1;
          uVar36 = extraout_x1_22;
        } while (uVar26 < (ulong)param_1[0x147]);
      }
      if (param_1[0x128] != 0) {
        uVar26 = 0;
        do {
          pppplVar16 = (long ****)((long *)param_1[uVar26 + 0x12a] + 4);
          FUN_71029fc1d0((long *)param_1[uVar26 + 0x12a],4,pppplVar16,ppppbVar18,(long ****)pauVar21
                         ,puVar5,puVar33,uVar25);
          uVar26 = uVar26 + 1;
        } while (uVar26 < (ulong)param_1[0x128]);
      }
      lVar31 = param_1[0x140];
      plVar7 = (long *)(*(long **)(lVar31 + 0xe8))[1];
      for (plVar4 = (long *)**(long **)(lVar31 + 0xe8); plVar4 != plVar7; plVar4 = plVar4 + 1) {
        lVar29 = *plVar4;
        *(undefined1 *)(lVar29 + 0x128) = 1;
        if (*(long *)(lVar29 + 8) != 0) {
          *(undefined8 *)(*(long *)(lVar29 + 8) + 0xd8) = 0xffffffffffffffff;
          FUN_7100532bc0(*(long *)(lVar29 + 8),0);
        }
      }
      plVar4 = *(long **)(lVar31 + 0xf0);
      if ((char)plVar4[4] == '\0') {
        *(undefined1 *)(plVar4 + 4) = 1;
        lVar30 = *plVar4;
        plVar7 = (long *)plVar4[1];
        lVar29 = plVar4[2];
        *plVar7 = lVar30;
        *(long **)(lVar30 + 8) = plVar7;
        *(long *)(lVar29 + 0x30) = *(long *)(lVar29 + 0x30) + -1;
        *plVar4 = 0;
        plVar4[1] = 0;
        puVar6 = *(undefined8 **)(lVar29 + 0x28);
        *plVar4 = lVar29 + 0x20;
        plVar4[1] = (long)puVar6;
        *(long **)(lVar29 + 0x28) = plVar4;
        *puVar6 = plVar4;
        *(long *)(lVar29 + 0x18) = *(long *)(lVar29 + 0x18) + 1;
        iVar28 = 0;
        if (plVar4[3] != 0) {
          iVar28 = *(int *)(plVar4[3] + 0x110);
        }
        *(int *)(lVar29 + 0x48) = *(int *)(lVar29 + 0x48) + iVar28;
      }
      if (*(long *)(lVar31 + 200) != 0) {
        uVar26 = 0;
        do {
          plVar4 = *(long **)(lVar31 + 0xd8 + uVar26 * 8);
          pppplVar16 = (long ****)(plVar4 + 4);
          FUN_71029fc1d0(plVar4,4,pppplVar16,ppppbVar18,(long ****)pauVar21,puVar5,puVar33,uVar25);
          uVar26 = uVar26 + 1;
        } while (uVar26 < *(ulong *)(lVar31 + 200));
      }
      plVar4 = (long *)param_1[0x150];
      *(int *)(*(long *)(*(long *)(*plVar4 + 0x318) + 0x18) + 0x2c) = (int)plVar4[3];
      *(undefined4 *)(plVar4 + 1) = 3;
      lVar31 = *(long *)(param_1[0x60] + 0x60);
      lVar29 = **(long **)(param_1[0x60] + 0x48);
      uVar36 = *(undefined8 *)(lVar29 + 0x40);
      *(ulong *)(lVar31 + 0x38) = *(ulong *)(lVar29 + 0x48) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0x30) = uVar36;
      uVar36 = *(undefined8 *)(lVar29 + 0x50);
      *(ulong *)(lVar31 + 0x48) = *(ulong *)(lVar29 + 0x58) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0x40) = uVar36;
      uVar36 = *(undefined8 *)(lVar29 + 0x60);
      *(ulong *)(lVar31 + 0x58) = *(ulong *)(lVar29 + 0x68) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0x50) = uVar36;
      uVar36 = *(undefined8 *)(lVar29 + 0x70);
      *(ulong *)(lVar31 + 0x68) = *(ulong *)(lVar29 + 0x78) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0x60) = uVar36;
      uVar36 = *(undefined8 *)(lVar29 + 0x80);
      *(ulong *)(lVar31 + 0x78) = *(ulong *)(lVar29 + 0x88) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0x70) = uVar36;
      *(undefined1 *)(lVar31 + 0x80) = *(undefined1 *)(lVar29 + 0x90);
      uVar36 = *(undefined8 *)(lVar29 + 0xa0);
      *(ulong *)(lVar31 + 0x98) = *(ulong *)(lVar29 + 0xa8) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0x90) = uVar36;
      uVar36 = *(undefined8 *)(lVar29 + 0xb0);
      *(ulong *)(lVar31 + 0xa8) = *(ulong *)(lVar29 + 0xb8) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0xa0) = uVar36;
      puVar8 = *(undefined8 **)(*(long *)param_1[0x66] + 0x58);
      for (puVar6 = *(undefined8 **)(*(long *)param_1[0x66] + 0x50); puVar6 != puVar8;
          puVar6 = puVar6 + 1) {
        plVar4 = (long *)*puVar6;
        if (*(int *)((long)plVar4 + 0xc) == 0) {
          if ((char)plVar4[3] == '\0') {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            *(undefined1 *)(plVar4 + 3) = 1;
          }
        }
        else if ((char)plVar4[3] != '\0') {
          *(undefined1 *)(plVar4 + 3) = 0;
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
    }
    else {
      if (iVar28 != 0) {
        return;
      }
      puVar6 = (undefined8 *)param_1[0x113];
      *(undefined4 *)(param_1 + 0x111) = 0;
      uVar2 = *(undefined4 *)*puVar6;
      *(float *)((long)puVar6 + 0xc) =
           *(float *)((long)param_1 + 0x84c) - *(float *)(param_1 + 0x109);
      *(undefined4 *)(puVar6 + 1) = uVar2;
      *(undefined4 *)(puVar6 + 2) = uVar2;
      *(undefined4 *)((long)puVar6 + 0x14) = 0;
      plVar4 = *(long **)(**(long **)(param_1[0x108] + 0x338) + 8);
      uVar36 = extraout_x1_07;
      if (plVar4 != (long *)0x0) {
        pauVar15 = (undefined1 (*) [16])&DAT_ffffffff;
        (**(code **)(*plVar4 + 0x58))(plVar4,0);
        uVar36 = extraout_x1_08;
      }
      if (param_1[0x13c] != 0) {
        uVar26 = 0;
        do {
          plVar4 = (long *)param_1[uVar26 + 0x13e];
          lVar31 = *plVar4;
          *(undefined1 *)(plVar4 + 6) = 0;
          if (lVar31 != 0) {
            *(undefined1 *)(lVar31 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar31 + 0x108),uVar36,(long ****)pauVar15,ppppbVar18,
                           (long ****)pauVar21,puVar5,puVar33,uVar25);
            lVar31 = *plVar4;
            uVar36 = extraout_x1_09;
            if (lVar31 != 0) {
              if ((*(char *)(lVar31 + 0xe0) != '\0') && (*(long *)(lVar31 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar31 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar31 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar31 + 0xd8) + 0x21) = 1;
              }
              if (*(char *)(lVar31 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar31 + 0xb0) + 0x10) = 0;
              }
            }
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 < (ulong)param_1[0x13c]);
      }
      lVar31 = param_1[0x141];
      pppplVar16 = (long ****)0x1;
      FUN_71025f4d80((long *)**(undefined8 **)(lVar31 + 0xe8),
                     (long *)(*(undefined8 **)(lVar31 + 0xe8))[1],1);
      plVar4 = *(long **)(lVar31 + 0xf0);
      if ((char)plVar4[4] != '\0') {
        plVar7 = (long *)plVar4[1];
        lVar29 = plVar4[2];
        lVar30 = *plVar4;
        *(undefined1 *)(plVar4 + 4) = 0;
        *plVar7 = lVar30;
        *(long **)(lVar30 + 8) = plVar7;
        *(long *)(lVar29 + 0x18) = *(long *)(lVar29 + 0x18) + -1;
        *plVar4 = 0;
        plVar4[1] = 0;
        puVar6 = *(undefined8 **)(lVar29 + 0x40);
        *plVar4 = lVar29 + 0x38;
        plVar4[1] = (long)puVar6;
        *(long **)(lVar29 + 0x40) = plVar4;
        *puVar6 = plVar4;
        *(long *)(lVar29 + 0x30) = *(long *)(lVar29 + 0x30) + 1;
        iVar28 = 0;
        if (plVar4[3] != 0) {
          iVar28 = *(int *)(plVar4[3] + 0x110);
        }
        *(int *)(lVar29 + 0x48) = *(int *)(lVar29 + 0x48) - iVar28;
      }
      uVar36 = extraout_x1_10;
      if (*(long *)(lVar31 + 200) != 0) {
        uVar26 = 0;
        do {
          plVar4 = *(long **)(lVar31 + 0xd8 + uVar26 * 8);
          lVar29 = *plVar4;
          *(undefined1 *)(plVar4 + 6) = 0;
          if (lVar29 != 0) {
            *(undefined1 *)(lVar29 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar29 + 0x108),uVar36,pppplVar16,ppppbVar18,(long ****)pauVar21
                           ,puVar5,puVar33,uVar25);
            lVar29 = *plVar4;
            uVar36 = extraout_x1_11;
            if (lVar29 != 0) {
              if ((*(char *)(lVar29 + 0xe0) != '\0') && (*(long *)(lVar29 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar29 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar29 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar29 + 0xd8) + 0x21) = 1;
              }
              if (*(char *)(lVar29 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar29 + 0xb0) + 0x10) = 0;
              }
            }
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 < *(ulong *)(lVar31 + 200));
      }
      if (param_1[0x147] != 0) {
        uVar26 = 0;
        do {
          FUN_71029fd390(param_1[uVar26 + 0x149],uVar36,pppplVar16,ppppbVar18,(long ****)pauVar21,
                         puVar5,puVar33,uVar25);
          uVar26 = uVar26 + 1;
          uVar36 = extraout_x1_12;
        } while (uVar26 < (ulong)param_1[0x147]);
      }
      if (param_1[0x128] != 0) {
        uVar26 = 0;
        do {
          pppplVar16 = (long ****)((long *)param_1[uVar26 + 0x12a] + 2);
          FUN_71029fc1d0((long *)param_1[uVar26 + 0x12a],2,pppplVar16,ppppbVar18,(long ****)pauVar21
                         ,puVar5,puVar33,uVar25);
          uVar26 = uVar26 + 1;
          uVar36 = extraout_x1_13;
        } while (uVar26 < (ulong)param_1[0x128]);
      }
      lVar31 = param_1[0x140];
      plVar7 = (long *)(*(long **)(lVar31 + 0xe8))[1];
      for (plVar4 = (long *)**(long **)(lVar31 + 0xe8); plVar4 != plVar7; plVar4 = plVar4 + 1) {
        lVar29 = *plVar4;
        *(undefined1 *)(lVar29 + 0x128) = 1;
        if (*(long *)(lVar29 + 8) != 0) {
          *(undefined8 *)(*(long *)(lVar29 + 8) + 0xd8) = 0xffffffffffffffff;
          FUN_7100532bc0(*(long *)(lVar29 + 8),0);
          uVar36 = extraout_x1_14;
        }
      }
      plVar4 = *(long **)(lVar31 + 0xf0);
      if ((char)plVar4[4] == '\0') {
        *(undefined1 *)(plVar4 + 4) = 1;
        lVar30 = *plVar4;
        plVar7 = (long *)plVar4[1];
        lVar29 = plVar4[2];
        *plVar7 = lVar30;
        *(long **)(lVar30 + 8) = plVar7;
        *(long *)(lVar29 + 0x30) = *(long *)(lVar29 + 0x30) + -1;
        *plVar4 = 0;
        plVar4[1] = 0;
        puVar6 = *(undefined8 **)(lVar29 + 0x28);
        *plVar4 = lVar29 + 0x20;
        plVar4[1] = (long)puVar6;
        *(long **)(lVar29 + 0x28) = plVar4;
        *puVar6 = plVar4;
        *(long *)(lVar29 + 0x18) = *(long *)(lVar29 + 0x18) + 1;
        iVar28 = 0;
        if (plVar4[3] != 0) {
          iVar28 = *(int *)(plVar4[3] + 0x110);
        }
        *(int *)(lVar29 + 0x48) = *(int *)(lVar29 + 0x48) + iVar28;
      }
      if (*(long *)(lVar31 + 200) != 0) {
        uVar26 = 0;
        do {
          plVar4 = *(long **)(lVar31 + 0xd8 + uVar26 * 8);
          pppplVar16 = (long ****)(plVar4 + 2);
          FUN_71029fc1d0(plVar4,2,pppplVar16,ppppbVar18,(long ****)pauVar21,puVar5,puVar33,uVar25);
          uVar26 = uVar26 + 1;
          uVar36 = extraout_x1_15;
        } while (uVar26 < *(ulong *)(lVar31 + 200));
      }
      *(undefined1 *)(lVar31 + 0x170) = 1;
      lVar29 = param_1[0x14d];
      *(undefined4 *)(lVar29 + 8) = 1;
      lVar31 = *(long *)(lVar29 + 0x10);
      uVar2 = **(undefined4 **)(lVar29 + 0x18);
      *(undefined4 *)(lVar29 + 0x20) = uVar2;
      *(undefined4 *)(lVar29 + 0x28) = uVar2;
      *(undefined4 *)(lVar29 + 0x2c) = 0;
      *(float *)(lVar29 + 0x24) = *(float *)(lVar29 + 0x40) - *(float *)(lVar29 + 0x30);
      if (lVar31 != 0) {
        *(undefined1 *)(lVar31 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar31 + 0x108),uVar36,pppplVar16,ppppbVar18,(long ****)pauVar21,
                       puVar5,puVar33,uVar25);
        lVar31 = *(long *)(lVar29 + 0x10);
        uVar36 = extraout_x1_16;
        if (lVar31 != 0) {
          if ((*(char *)(lVar31 + 0xe0) != '\0') && (*(long *)(lVar31 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar31 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar31 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar31 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar31 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar31 + 0xb0) + 0x10) = 0;
          }
        }
      }
      lVar29 = param_1[0x14e];
      lVar31 = *(long *)(lVar29 + 0x30);
      if (lVar31 != 0) {
        *(undefined1 *)(lVar31 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar31 + 0x108),uVar36,pppplVar16,ppppbVar18,(long ****)pauVar21,
                       puVar5,puVar33,uVar25);
        uVar36 = extraout_x1_17;
      }
      lVar31 = *(long *)(lVar29 + 0x38);
      if (lVar31 != 0) {
        *(undefined1 *)(lVar31 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar31 + 0x108),uVar36,pppplVar16,ppppbVar18,(long ****)pauVar21,
                       puVar5,puVar33,uVar25);
      }
      uVar2 = **(undefined4 **)(lVar29 + 0x18);
      *(undefined4 *)(lVar29 + 0x20) = uVar2;
      *(undefined4 *)(lVar29 + 0x24) = 0x452fd000;
      *(undefined4 *)(lVar29 + 0x28) = uVar2;
      *(undefined4 *)(lVar29 + 0x2c) = 0;
      *(undefined4 *)(lVar29 + 0x10) = 0;
      plVar4 = (long *)param_1[0x150];
      *(undefined4 *)(*(long *)(*(long *)(*plVar4 + 0x318) + 0x18) + 0x2c) =
           *(undefined4 *)((long)plVar4 + 0xc);
      *(undefined4 *)(plVar4 + 1) = 1;
      lVar31 = *(long *)(param_1[0x60] + 0x60);
      lVar29 = **(long **)(param_1[0x60] + 0x48);
      uVar36 = *(undefined8 *)(lVar29 + 0x40);
      *(ulong *)(lVar31 + 0x38) = *(ulong *)(lVar29 + 0x48) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0x30) = uVar36;
      uVar36 = *(undefined8 *)(lVar29 + 0x50);
      *(ulong *)(lVar31 + 0x48) = *(ulong *)(lVar29 + 0x58) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0x40) = uVar36;
      uVar36 = *(undefined8 *)(lVar29 + 0x60);
      *(ulong *)(lVar31 + 0x58) = *(ulong *)(lVar29 + 0x68) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0x50) = uVar36;
      uVar36 = *(undefined8 *)(lVar29 + 0x70);
      *(ulong *)(lVar31 + 0x68) = *(ulong *)(lVar29 + 0x78) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0x60) = uVar36;
      uVar36 = *(undefined8 *)(lVar29 + 0x80);
      *(ulong *)(lVar31 + 0x78) = *(ulong *)(lVar29 + 0x88) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0x70) = uVar36;
      *(undefined1 *)(lVar31 + 0x80) = *(undefined1 *)(lVar29 + 0x90);
      uVar36 = *(undefined8 *)(lVar29 + 0xa0);
      *(ulong *)(lVar31 + 0x98) = *(ulong *)(lVar29 + 0xa8) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0x90) = uVar36;
      uVar36 = *(undefined8 *)(lVar29 + 0xb0);
      *(ulong *)(lVar31 + 0xa8) = *(ulong *)(lVar29 + 0xb8) & 0xffffffff;
      *(undefined8 *)(lVar31 + 0xa0) = uVar36;
      puVar8 = *(undefined8 **)(*(long *)param_1[0x66] + 0x58);
      for (puVar6 = *(undefined8 **)(*(long *)param_1[0x66] + 0x50); puVar6 != puVar8;
          puVar6 = puVar6 + 1) {
        plVar4 = (long *)*puVar6;
        if (*(int *)((long)plVar4 + 0xc) == 0) {
          if ((char)plVar4[3] == '\0') {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            *(undefined1 *)(plVar4 + 3) = 1;
          }
        }
        else if ((char)plVar4[3] != '\0') {
          *(undefined1 *)(plVar4 + 3) = 0;
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
    }
    FUN_71029faf00((long)param_1);
    FUN_71025f7350(*(long *)(param_1[99] + 0x10),(byte *)"light00");
    FUN_7102633910(param_1[99],(long *********)"render_param",pppplVar16,ppppbVar18,
                   (long ****)pauVar21,puVar5,puVar33,uVar25);
    FUN_7102633800(param_1[99],(long *********)"reflection_cubemap",pppplVar16,ppppbVar18,
                   (long ****)pauVar21,puVar5,puVar33,uVar25);
    FUN_7102633a10(param_1[99],(long *********)"chara",1,ppppbVar18,(long ****)pauVar21,puVar5,
                   puVar33,uVar25);
    FUN_7102633b90(param_1[99],(long *********)"stage",1,ppppbVar18,(long ****)pauVar21,puVar5,
                   puVar33,uVar25);
  }
  return;
}

