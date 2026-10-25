// addr:      7102e1ea60
// offset:    0x2e1ea60
// name:      FUN_7102e1ea60
// mangled:   
// signature: undefined __cdecl FUN_7102e1ea60(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102e1ea60(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
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
  long ***ppplVar13;
  long ****pppplVar14;
  char *pcVar15;
  byte ****ppppbVar16;
  byte ****ppppbVar17;
  long ****pppplVar18;
  int *piVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  undefined8 uVar25;
  long ****pppplVar26;
  long ****pppplVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  long lVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  long ***local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long ***local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_64;
  
  lVar21 = *(long *)(*(long *)(param_1 + 8) + 0x310);
  for (plVar8 = *(long **)(lVar21 + 0xd0); plVar8 != *(long **)(lVar21 + 0xd8); plVar8 = plVar8 + 2)
  {
    if ((*(uint *)(plVar8 + 1) < 2) && (lVar23 = *plVar8, *(long *)(lVar23 + 0x68) == 0x1587ac87d1))
    {
      *(long *)(param_1 + 0x50) = lVar23;
      if (lVar23 == 0) goto LAB_7102e1ead8;
      *(undefined1 *)(lVar23 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar23 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      lVar21 = *(long *)(param_1 + 0x50);
      param_2 = extraout_x1;
      goto joined_r0x007102e1edb0;
    }
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
LAB_7102e1ead8:
  lVar21 = *(long *)(param_1 + 0x50);
joined_r0x007102e1edb0:
  if (lVar21 != 0) {
    *(byte *)(lVar21 + 0x118) = *(byte *)(lVar21 + 0x118) | 1;
  }
  lVar21 = *(long *)(*(long *)(param_1 + 8) + 0x310);
  for (plVar8 = *(long **)(lVar21 + 0xd0); plVar8 != *(long **)(lVar21 + 0xd8); plVar8 = plVar8 + 2)
  {
    if ((*(uint *)(plVar8 + 1) < 2) && (lVar23 = *plVar8, *(long *)(lVar23 + 0x68) == 0x230fba8564))
    {
      *(long *)(param_1 + 0x58) = lVar23;
      if (lVar23 == 0) goto LAB_7102e1eb3c;
      *(undefined1 *)(lVar23 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar23 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      lVar21 = *(long *)(param_1 + 0x58);
      param_2 = extraout_x1_00;
      goto joined_r0x007102e1edd4;
    }
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
LAB_7102e1eb3c:
  lVar21 = *(long *)(param_1 + 0x58);
joined_r0x007102e1edd4:
  if (lVar21 != 0) {
    *(byte *)(lVar21 + 0x118) = *(byte *)(lVar21 + 0x118) | 1;
  }
  lVar21 = *(long *)(*(long *)(param_1 + 8) + 0x310);
  for (plVar8 = *(long **)(lVar21 + 0xd0); plVar8 != *(long **)(lVar21 + 0xd8); plVar8 = plVar8 + 2)
  {
    if ((*(uint *)(plVar8 + 1) < 2) && (lVar23 = *plVar8, *(long *)(lVar23 + 0x68) == 0x18ec0a34b4))
    {
      *(long *)(param_1 + 0x60) = lVar23;
      if (lVar23 == 0) goto LAB_7102e1eba0;
      *(undefined1 *)(lVar23 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar23 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      lVar21 = *(long *)(param_1 + 0x60);
      param_2 = extraout_x1_01;
      goto joined_r0x007102e1edf8;
    }
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
LAB_7102e1eba0:
  lVar21 = *(long *)(param_1 + 0x60);
joined_r0x007102e1edf8:
  if (lVar21 != 0) {
    *(byte *)(lVar21 + 0x118) = *(byte *)(lVar21 + 0x118) | 1;
  }
  lVar21 = *(long *)(*(long *)(param_1 + 8) + 0x310);
  for (plVar8 = *(long **)(lVar21 + 0xd0); plVar8 != *(long **)(lVar21 + 0xd8); plVar8 = plVar8 + 2)
  {
    if ((*(uint *)(plVar8 + 1) < 2) && (lVar23 = *plVar8, *(long *)(lVar23 + 0x68) == 0x1a17cc4e52))
    {
      *(long *)(param_1 + 0x68) = lVar23;
      if (lVar23 == 0) goto LAB_7102e1ec04;
      *(undefined1 *)(lVar23 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar23 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      lVar21 = *(long *)(param_1 + 0x68);
      param_2 = extraout_x1_02;
      goto joined_r0x007102e1ee1c;
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
LAB_7102e1ec04:
  lVar21 = *(long *)(param_1 + 0x68);
joined_r0x007102e1ee1c:
  if (lVar21 != 0) {
    *(byte *)(lVar21 + 0x118) = *(byte *)(lVar21 + 0x118) | 1;
  }
  lVar21 = *(long *)(*(long *)(param_1 + 8) + 0x310);
  for (plVar8 = *(long **)(lVar21 + 0xd0); plVar8 != *(long **)(lVar21 + 0xd8); plVar8 = plVar8 + 2)
  {
    if ((*(uint *)(plVar8 + 1) < 2) && (lVar23 = *plVar8, *(long *)(lVar23 + 0x68) == 0x2059b1aa3b))
    {
      *(long *)(param_1 + 0x70) = lVar23;
      if (lVar23 == 0) goto LAB_7102e1ec68;
      *(undefined1 *)(lVar23 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar23 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      lVar21 = *(long *)(param_1 + 0x70);
      param_2 = extraout_x1_03;
      goto joined_r0x007102e1ee40;
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
LAB_7102e1ec68:
  lVar21 = *(long *)(param_1 + 0x70);
joined_r0x007102e1ee40:
  if (lVar21 != 0) {
    *(byte *)(lVar21 + 0x118) = *(byte *)(lVar21 + 0x118) | 1;
  }
  lVar21 = *(long *)(*(long *)(param_1 + 8) + 0x310);
  for (plVar8 = *(long **)(lVar21 + 0xd0); plVar8 != *(long **)(lVar21 + 0xd8); plVar8 = plVar8 + 2)
  {
    if ((*(uint *)(plVar8 + 1) < 2) && (lVar23 = *plVar8, *(long *)(lVar23 + 0x68) == 0x212b6591f3))
    {
      *(long *)(param_1 + 0x78) = lVar23;
      if (lVar23 == 0) goto LAB_7102e1eccc;
      *(undefined1 *)(lVar23 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar23 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      lVar21 = *(long *)(param_1 + 0x78);
      param_2 = extraout_x1_04;
      goto joined_r0x007102e1ee64;
    }
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
LAB_7102e1eccc:
  lVar21 = *(long *)(param_1 + 0x78);
joined_r0x007102e1ee64:
  if (lVar21 != 0) {
    *(byte *)(lVar21 + 0x118) = *(byte *)(lVar21 + 0x118) | 1;
  }
  lVar21 = *(long *)(*(long *)(param_1 + 8) + 0x310);
  for (plVar8 = *(long **)(lVar21 + 0xd0); plVar8 != *(long **)(lVar21 + 0xd8); plVar8 = plVar8 + 2)
  {
    if ((*(uint *)(plVar8 + 1) < 2) && (lVar23 = *plVar8, *(long *)(lVar23 + 0x68) == 0x1e37d11bc5))
    {
      *(long *)(param_1 + 0x80) = lVar23;
      if (lVar23 != 0) {
        *(undefined1 *)(lVar23 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar23 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        param_2 = extraout_x1_05;
      }
      goto LAB_7102e1ed30;
    }
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
LAB_7102e1ed30:
  lVar21 = *(long *)(param_1 + 0x80);
  if (lVar21 != 0) {
    *(byte *)(lVar21 + 0x118) = *(byte *)(lVar21 + 0x118) | 1;
  }
  lVar21 = *(long *)(*(long *)(param_1 + 8) + 0x310);
  for (plVar8 = *(long **)(lVar21 + 0xd0); plVar8 != *(long **)(lVar21 + 0xd8); plVar8 = plVar8 + 2)
  {
    if ((*(uint *)(plVar8 + 1) < 2) && (lVar23 = *plVar8, *(long *)(lVar23 + 0x68) == 0x177bc9ff40))
    {
      if (lVar23 != 0) {
        *(undefined1 *)(lVar23 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar23 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        *(byte *)(lVar23 + 0x118) = *(byte *)(lVar23 + 0x118) | 1;
      }
      break;
    }
  }
  puVar5 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&DAT_00000010;
      param_3 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar5 != (undefined8 *)0x0)) goto LAB_7102e1ef04;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102e1ef04:
  uVar25 = *(undefined8 *)(param_1 + 8);
  *puVar5 = &PTR_FUN_710513f810;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&SUB_00000020;
      param_3 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_7102e1ef68;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7102e1ef68:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = uVar25;
  puVar7[1] = 0;
  puVar5[1] = puVar7;
  plVar8 = *(long **)(param_1 + 0x310);
  *(undefined8 **)(param_1 + 0x310) = puVar5;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
    puVar5 = *(undefined8 **)(param_1 + 0x310);
  }
  FUN_7102dfe700((long *)puVar5[1],(byte *)"stc_w02_waterroom_bg_set",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7102dfe700(*(long **)(*(long *)(param_1 + 0x310) + 8),(byte *)"stc_w02_water_flows_bg_set",
                 param_3,param_4,param_5,param_6,param_7,param_8);
  lVar21 = *(long *)(*(long *)(param_1 + 0x310) + 8);
  if (lVar21 != 0) {
    plVar24 = *(long **)(lVar21 + 0x10);
    uVar25 = extraout_x1_06;
    for (plVar8 = *(long **)(lVar21 + 8); plVar8 != plVar24; plVar8 = plVar8 + 1) {
      lVar21 = *plVar8;
      if (lVar21 != 0) {
        *(undefined1 *)(lVar21 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar21 + 0x108),uVar25,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        lVar21 = *plVar8;
        uVar25 = extraout_x1_07;
        if (lVar21 != 0) {
          *(byte *)(lVar21 + 0x118) = *(byte *)(lVar21 + 0x118) | 1;
        }
      }
    }
  }
  puVar5 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&DAT_00000010;
      pppplVar14 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar14,param_4,param_5,param_6,param_7,param_8),
         puVar5 != (undefined8 *)0x0)) goto LAB_7102e1f05c;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102e1f05c:
  pppplVar14 = *(long *****)(param_1 + 0x18);
  pcVar15 = "stc_w02_yakumono_water_surinuke_set";
  pppplVar18 = (long ****)0x1;
  FUN_7102e1d840(puVar5,*(long *)(param_1 + 8),pppplVar14,
                 (byte ****)"stc_w02_yakumono_water_surinuke_set",(long ****)0x1,param_6,param_7,
                 param_8);
  plVar8 = *(long **)(param_1 + 0x318);
  *(undefined8 **)(param_1 + 0x318) = puVar5;
  uVar25 = extraout_x1_08;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
    puVar5 = *(undefined8 **)(param_1 + 0x318);
    uVar25 = extraout_x1_09;
  }
  plVar8 = (long *)puVar5[1];
  lVar21 = *plVar8;
  if (lVar21 != 0) {
    *(undefined1 *)(lVar21 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar21 + 0x108),uVar25,pppplVar14,(byte ****)pcVar15,pppplVar18,param_6,
                   param_7,param_8);
    lVar21 = *plVar8;
    if (lVar21 != 0) {
      *(byte *)(lVar21 + 0x118) = *(byte *)(lVar21 + 0x118) | 1;
    }
  }
  puVar5 = (undefined8 *)plVar8[1];
  if (puVar5 != (undefined8 *)0x0) {
    pppplVar14 = (long ****)0x1;
    FUN_71025f4d80((long *)*puVar5,(long *)puVar5[1],1);
    *(undefined1 *)(plVar8 + 2) = 1;
  }
  lVar21 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(lVar21 + 0x900);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(lVar21 + 0x914);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(lVar21 + 0x918);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(lVar21 + 0x91c);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(lVar21 + 0x904);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(lVar21 + 0x908);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(lVar21 + 0x90c);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(lVar21 + 0x910);
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x110,pppplVar14,(byte ****)pcVar15,pppplVar18,param_6,param_7,
                          param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&DAT_00000110;
      pppplVar14 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x110,pppplVar14,(byte ****)pcVar15,pppplVar18,param_6,
                                  param_7,param_8), puVar5 != (undefined8 *)0x0))
      goto LAB_7102e1f180;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102e1f180:
  FUN_7102e28740(*(undefined4 *)(lVar21 + 0x924),puVar5,*(undefined8 *)(param_1 + 8),param_1 + 0x2b8
                 ,(byte ****)"whaloh",(ulong)*(byte *)(lVar21 + 0x920),param_6,param_7,param_8);
  plVar8 = *(long **)(param_1 + 0x2d8);
  *(undefined8 **)(param_1 + 0x2d8) = puVar5;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
    puVar5 = *(undefined8 **)(param_1 + 0x2d8);
  }
  lVar21 = *(long *)(param_1 + 0x18);
  pppplVar14 = (long ****)(*(long *)(lVar21 + 0x6e8) + 0x30);
  pppplVar18 = (long ****)&DAT_00000019;
  ppppbVar16 = (byte ****)&SUB_00000018;
  FUN_7102e12e40(*(undefined4 *)(*(long *)(lVar21 + 0x9a8) + 0xc),**(undefined4 **)(lVar21 + 0x948),
                 (*(undefined4 **)(lVar21 + 0x948))[1],**(undefined4 **)(lVar21 + 0x960),
                 (*(undefined4 **)(lVar21 + 0x960))[1],
                 *(undefined4 *)(*(long *)(lVar21 + 0xa08) + 0x18),
                 *(undefined4 *)(*(long *)(lVar21 + 0xa08) + 0x1c),(long)puVar5,
                 *(long *)(lVar21 + 0x748) + 0x24,pppplVar14,0x18,0x19,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x2d8) + 0x18))(*(long **)(param_1 + 0x2d8),0);
  lVar21 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x10);
  if (lVar21 != 0) {
    *(byte *)(lVar21 + 0x118) = *(byte *)(lVar21 + 0x118) | 1;
  }
  lVar21 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(lVar21 + 0x928);
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(lVar21 + 0x93c);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(lVar21 + 0x940);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(lVar21 + 0x944);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(lVar21 + 0x92c);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(lVar21 + 0x930);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(lVar21 + 0x934);
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(lVar21 + 0x938);
  pppplVar27 = (long ****)(param_1 + 0x2e0);
  ppppbVar17 = (byte ****)(*(long *)(lVar21 + 0x6e8) + 0x40);
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x98,pppplVar14,ppppbVar16,pppplVar18,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&DAT_00000098;
      pppplVar14 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x98,pppplVar14,ppppbVar16,pppplVar18,param_6,param_7,param_8
                                 ), puVar5 != (undefined8 *)0x0)) goto LAB_7102e1f2d8;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102e1f2d8:
  pcVar15 = "manaphy";
  FUN_7102e27910(puVar5,*(undefined8 *)(param_1 + 8),pppplVar27,ppppbVar17,(long ****)"manaphy",
                 param_6,param_7,param_8);
  plVar8 = *(long **)(param_1 + 0x300);
  *(undefined8 **)(param_1 + 0x300) = puVar5;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x38,pppplVar27,ppppbVar17,(long ****)pcVar15,param_6,param_7,param_8
                         );
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&DAT_00000038;
      pppplVar14 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x38,pppplVar14,ppppbVar17,(long ****)pcVar15,param_6,param_7
                                  ,param_8), puVar5 != (undefined8 *)0x0)) goto LAB_7102e1f360;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102e1f360:
  uVar25 = *(undefined8 *)(param_1 + 8);
  uVar34 = *(undefined8 *)(param_1 + 0x10);
  lVar21 = *(long *)(param_1 + 0x18);
  puVar5[4] = 0;
  puVar5[2] = uVar34;
  puVar5[3] = lVar21;
  *puVar5 = &PTR_FUN_710513fa70;
  puVar5[1] = uVar25;
  puVar5[5] = 0;
  puVar5[6] = 0;
  plVar8 = *(long **)(param_1 + 0x308);
  *(undefined8 **)(param_1 + 0x308) = puVar5;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8);
    puVar5 = *(undefined8 **)(param_1 + 0x308);
    lVar21 = *(long *)(param_1 + 0x18);
  }
  FUN_7102e14260(**(undefined4 **)(lVar21 + 0x9a8),**(undefined4 **)(lVar21 + 0x948),
                 (*(undefined4 **)(lVar21 + 0x948))[1],**(undefined4 **)(lVar21 + 0x960),
                 (*(undefined4 **)(lVar21 + 0x960))[1],**(undefined4 **)(lVar21 + 0xa08),
                 (*(undefined4 **)(lVar21 + 0xa08))[1],(long)puVar5,0x710438afbd,
                 *(long *****)(lVar21 + 0x748),*(byte *****)(lVar21 + 0x6e8),
                 (long ****)&SUB_00000018,0x19,param_7,param_8);
  lVar21 = *(long *)(param_1 + 0x18);
  FUN_7102e14260(*(undefined4 *)(*(long *)(lVar21 + 0x9a8) + 4),**(undefined4 **)(lVar21 + 0x948),
                 (*(undefined4 **)(lVar21 + 0x948))[1],**(undefined4 **)(lVar21 + 0x960),
                 (*(undefined4 **)(lVar21 + 0x960))[1],
                 *(undefined4 *)(*(long *)(lVar21 + 0xa08) + 8),
                 *(undefined4 *)(*(long *)(lVar21 + 0xa08) + 0xc),*(long *)(param_1 + 0x308),
                 0x71043de3f1,(long ****)(*(long *)(lVar21 + 0x748) + 0xc),
                 (byte ****)(*(long *)(lVar21 + 0x6e8) + 0x10),(long ****)&SUB_00000018,0x19,param_7
                 ,param_8);
  lVar21 = *(long *)(param_1 + 0x18);
  ppppbVar16 = (byte ****)(*(long *)(lVar21 + 0x6e8) + 0x20);
  pppplVar14 = (long ****)&SUB_00000018;
  uVar25 = 0x19;
  FUN_7102e14260(*(undefined4 *)(*(long *)(lVar21 + 0x9a8) + 8),**(undefined4 **)(lVar21 + 0x948),
                 (*(undefined4 **)(lVar21 + 0x948))[1],**(undefined4 **)(lVar21 + 0x960),
                 (*(undefined4 **)(lVar21 + 0x960))[1],
                 *(undefined4 *)(*(long *)(lVar21 + 0xa08) + 0x10),
                 *(undefined4 *)(*(long *)(lVar21 + 0xa08) + 0x14),*(long *)(param_1 + 0x308),
                 0x7104452bf0,(long ****)(*(long *)(lVar21 + 0x748) + 0x18),ppppbVar16,
                 (long ****)&SUB_00000018,0x19,param_7,param_8);
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x308) + 0x20);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x308) + 0x28);
  if (puVar5 != puVar7) {
    do {
      plVar8 = (long *)*puVar5;
      plVar24 = (long *)puVar5[1];
      if (plVar24 == (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8,0);
      }
      else {
        plVar10 = plVar24 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        (**(code **)(*plVar8 + 0x18))(plVar8,0);
        do {
          lVar21 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar21 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar7);
    plVar24 = *(long **)(*(long *)(param_1 + 0x308) + 0x28);
    for (plVar8 = *(long **)(*(long *)(param_1 + 0x308) + 0x20); plVar8 != plVar24;
        plVar8 = plVar8 + 2) {
      lVar21 = *plVar8;
      plVar10 = (long *)plVar8[1];
      if (plVar10 != (long *)0x0) {
        plVar12 = plVar10 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar21 = *(long *)(lVar21 + 0x10);
      if (lVar21 != 0) {
        *(byte *)(lVar21 + 0x118) = *(byte *)(lVar21 + 0x118) | 1;
      }
      if (plVar10 != (long *)0x0) {
        plVar12 = plVar10 + 1;
        do {
          lVar21 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar21 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  lVar21 = *(long *)(param_1 + 8);
  plVar24 = *(long **)(*(long *)(lVar21 + 0x300) + 0x18);
  plVar8 = (long *)*plVar24;
  do {
    if (plVar8 == (long *)plVar24[1]) {
      plVar8 = (long *)0x0;
      goto LAB_7102e1f5e0;
    }
    lVar23 = *plVar8;
    plVar8 = plVar8 + 1;
  } while ((*(ulong *)(lVar23 + 0xa0) & 0xffffffffff) != 0x179eb4fbad);
  plVar24 = *(long **)(lVar23 + 0x110);
  plVar8 = plVar24;
  if ((plVar24 != (long *)0x0) && (plVar8 = (long *)0x0, *plVar24 != plVar24[1])) {
    plVar8 = plVar24;
  }
LAB_7102e1f5e0:
  *(long **)(param_1 + 0x1d0) = plVar8;
  plVar24 = *(long **)(*(long *)(lVar21 + 0x300) + 0x18);
  plVar8 = (long *)*plVar24;
  do {
    if (plVar8 == (long *)plVar24[1]) {
      plVar8 = (long *)0x0;
      goto LAB_7102e1f63c;
    }
    lVar23 = *plVar8;
    plVar8 = plVar8 + 1;
  } while ((*(ulong *)(lVar23 + 0xa0) & 0xffffffffff) != 0x1764bbc6ce);
  plVar24 = *(long **)(lVar23 + 0x110);
  plVar8 = plVar24;
  if ((plVar24 != (long *)0x0) && (plVar8 = (long *)0x0, *plVar24 != plVar24[1])) {
    plVar8 = plVar24;
  }
LAB_7102e1f63c:
  *(long **)(param_1 + 0x1d8) = plVar8;
  plVar24 = *(long **)(*(long *)(lVar21 + 0x300) + 0x18);
  plVar8 = (long *)*plVar24;
  do {
    if (plVar8 == (long *)plVar24[1]) {
      plVar8 = (long *)0x0;
      goto LAB_7102e1f698;
    }
    lVar23 = *plVar8;
    plVar8 = plVar8 + 1;
  } while ((*(ulong *)(lVar23 + 0xa0) & 0xffffffffff) != 0x17b599a86e);
  plVar24 = *(long **)(lVar23 + 0x110);
  plVar8 = plVar24;
  if ((plVar24 != (long *)0x0) && (plVar8 = (long *)0x0, *plVar24 != plVar24[1])) {
    plVar8 = plVar24;
  }
LAB_7102e1f698:
  *(long **)(param_1 + 0x1e0) = plVar8;
  plVar24 = *(long **)(*(long *)(lVar21 + 0x300) + 0x18);
  plVar8 = (long *)*plVar24;
  do {
    if (plVar8 == (long *)plVar24[1]) {
      plVar8 = (long *)0x0;
      goto LAB_7102e1f6f4;
    }
    lVar23 = *plVar8;
    plVar8 = plVar8 + 1;
  } while ((*(ulong *)(lVar23 + 0xa0) & 0xffffffffff) != 0x174f96950d);
  plVar24 = *(long **)(lVar23 + 0x110);
  plVar8 = plVar24;
  if ((plVar24 != (long *)0x0) && (plVar8 = (long *)0x0, *plVar24 != plVar24[1])) {
    plVar8 = plVar24;
  }
LAB_7102e1f6f4:
  *(long **)(param_1 + 0x1e8) = plVar8;
  plVar24 = *(long **)(*(long *)(lVar21 + 0x300) + 0x18);
  plVar8 = (long *)*plVar24;
  do {
    if (plVar8 == (long *)plVar24[1]) {
      plVar8 = (long *)0x0;
      goto LAB_7102e1f744;
    }
    lVar21 = *plVar8;
    plVar8 = plVar8 + 1;
  } while ((*(ulong *)(lVar21 + 0xa0) & 0xffffffffff) != 0x1587ac87d1);
  plVar24 = *(long **)(lVar21 + 0x110);
  plVar8 = plVar24;
  if ((plVar24 != (long *)0x0) && (plVar8 = (long *)0x0, *plVar24 != plVar24[1])) {
    plVar8 = plVar24;
  }
LAB_7102e1f744:
  *(long **)(param_1 + 0x1f0) = plVar8;
  pppplVar18 = (long ****)0x1;
  FUN_71025f4d80((long *)*plVar8,(long *)plVar8[1],1);
  lVar21 = *(long *)(param_1 + 0x60);
  plVar8 = *(long **)(param_1 + 0x1d0);
  uStack_f8 = 0;
  local_100 = (long ***)&DAT_3f800000;
  local_e8 = 0;
  local_f0 = 0x3f80000000000000;
  uStack_d8 = 0x3f800000;
  local_e0 = 0;
  uStack_c8 = 0x3f80000000000000;
  local_d0 = 0xc47a0000;
  if (lVar21 != 0) {
    (**(code **)(**(long **)(lVar21 + 0x90) + 0x148))(*(long **)(lVar21 + 0x90),&local_100);
    lVar21 = *(long *)(lVar21 + 0xd8);
    if (lVar21 != 0) {
      local_a8 = local_e8;
      local_b0 = local_f0;
      local_b8 = (undefined1 *)uStack_f8;
      local_c0 = local_100;
      local_88 = uStack_c8;
      local_90 = local_d0;
      local_98 = uStack_d8;
      local_a0 = local_e0;
      if (*(char *)(*(long *)(lVar21 + 8) + 0xa8) != '\0') {
        plVar24 = *(long **)(*(long *)(lVar21 + 8) + 0x48);
        (**(code **)(*plVar24 + 0x20))(plVar24,&local_c0);
      }
      *(undefined1 *)(lVar21 + 0x20) = 1;
    }
  }
  fVar29 = (float)((ulong)local_d0 >> 0x20);
  if (plVar8 != (long *)0x0) {
    plVar24 = (long *)plVar8[1];
    for (plVar8 = (long *)*plVar8; plVar8 != plVar24; plVar8 = plVar8 + 1) {
      lVar21 = *plVar8;
      if (*(char *)(lVar21 + 0x128) == '\0' ||
          (*(char *)(*(long *)(lVar21 + 8) + 0xe8) != '\0' ||
          *(char *)(*(long *)(lVar21 + 8) + 0xe7) != '\0')) {
        *(undefined1 *)(lVar21 + 0x129) = 1;
LAB_7102e1f8b0:
        *(undefined8 *)(lVar21 + 0x18) = 0;
        *(undefined8 *)(lVar21 + 0x10) = local_d0;
      }
      else if ((1e-05 < ABS((float)*(undefined8 *)(lVar21 + 0x10) - (float)local_d0)) ||
              (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar21 + 0x10) >> 0x20) - fVar29))) {
        *(undefined1 *)(lVar21 + 0x12a) = 1;
        goto LAB_7102e1f8b0;
      }
      if (1e-05 <= ABS(*(float *)(lVar21 + 0x30))) {
        *(undefined4 *)(lVar21 + 0x30) = 0;
        *(undefined1 *)(lVar21 + 0x129) = 1;
      }
      uVar35 = *(undefined8 *)(lVar21 + 0x58);
      uVar34 = *(undefined8 *)(lVar21 + 0x50);
      if (1e-05 <= ABS((float)uVar34 + -1.0)) {
        uVar34 = CONCAT44((int)((ulong)uVar34 >> 0x20),0x3f800000);
        *(undefined1 *)(lVar21 + 0x129) = 1;
        *(undefined8 *)(lVar21 + 0x58) = uVar35;
        *(undefined8 *)(lVar21 + 0x50) = uVar34;
      }
      if (1e-05 <= ABS((float)((ulong)uVar34 >> 0x20) + -1.0)) {
        *(undefined1 *)(lVar21 + 0x129) = 1;
        *(undefined8 *)(lVar21 + 0x58) = uVar35;
        *(ulong *)(lVar21 + 0x50) = CONCAT44(0x3f800000,(int)uVar34);
      }
    }
  }
  plVar24 = (long *)(*(long **)(param_1 + 0x1e8))[1];
  for (plVar8 = (long *)**(long **)(param_1 + 0x1e8); plVar8 != plVar24; plVar8 = plVar8 + 1) {
    lVar21 = *plVar8;
    if (*(char *)(lVar21 + 0x128) == '\0' ||
        (*(char *)(*(long *)(lVar21 + 8) + 0xe8) != '\0' ||
        *(char *)(*(long *)(lVar21 + 8) + 0xe7) != '\0')) {
      *(undefined1 *)(lVar21 + 0x129) = 1;
LAB_7102e1f9a4:
      *(undefined8 *)(lVar21 + 0x18) = 0;
      *(undefined8 *)(lVar21 + 0x10) = local_d0;
    }
    else if ((1e-05 < ABS((float)*(undefined8 *)(lVar21 + 0x10) - (float)local_d0)) ||
            (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar21 + 0x10) >> 0x20) - fVar29))) {
      *(undefined1 *)(lVar21 + 0x12a) = 1;
      goto LAB_7102e1f9a4;
    }
    if (1e-05 <= ABS(*(float *)(lVar21 + 0x30))) {
      *(undefined4 *)(lVar21 + 0x30) = 0;
      *(undefined1 *)(lVar21 + 0x129) = 1;
    }
    uVar35 = *(undefined8 *)(lVar21 + 0x58);
    uVar34 = *(undefined8 *)(lVar21 + 0x50);
    if (1e-05 <= ABS((float)uVar34 + -1.0)) {
      uVar34 = CONCAT44((int)((ulong)uVar34 >> 0x20),0x3f800000);
      *(undefined1 *)(lVar21 + 0x129) = 1;
      *(undefined8 *)(lVar21 + 0x58) = uVar35;
      *(undefined8 *)(lVar21 + 0x50) = uVar34;
    }
    if (1e-05 <= ABS((float)((ulong)uVar34 >> 0x20) + -1.0)) {
      *(undefined1 *)(lVar21 + 0x129) = 1;
      *(undefined8 *)(lVar21 + 0x58) = uVar35;
      *(ulong *)(lVar21 + 0x50) = CONCAT44(0x3f800000,(int)uVar34);
    }
  }
  lVar21 = *(long *)(param_1 + 0x68);
  plVar8 = *(long **)(param_1 + 0x1d8);
  uStack_f8 = 0;
  local_100 = (long ***)&DAT_3f800000;
  local_e8 = 0;
  local_f0 = 0x3f80000000000000;
  uStack_d8 = 0x3f800000;
  local_e0 = 0;
  uStack_c8 = 0x3f80000000000000;
  local_d0 = 0x447a0000;
  if (lVar21 != 0) {
    (**(code **)(**(long **)(lVar21 + 0x90) + 0x148))(*(long **)(lVar21 + 0x90),&local_100);
    lVar21 = *(long *)(lVar21 + 0xd8);
    if (lVar21 != 0) {
      local_a8 = local_e8;
      local_b0 = local_f0;
      local_b8 = (undefined1 *)uStack_f8;
      local_c0 = local_100;
      local_88 = uStack_c8;
      local_90 = local_d0;
      local_98 = uStack_d8;
      local_a0 = local_e0;
      if (*(char *)(*(long *)(lVar21 + 8) + 0xa8) != '\0') {
        plVar24 = *(long **)(*(long *)(lVar21 + 8) + 0x48);
        (**(code **)(*plVar24 + 0x20))(plVar24,&local_c0);
      }
      *(undefined1 *)(lVar21 + 0x20) = 1;
    }
  }
  fVar29 = (float)((ulong)local_d0 >> 0x20);
  if (plVar8 != (long *)0x0) {
    plVar24 = (long *)plVar8[1];
    for (plVar8 = (long *)*plVar8; plVar8 != plVar24; plVar8 = plVar8 + 1) {
      lVar21 = *plVar8;
      if (*(char *)(lVar21 + 0x128) == '\0' ||
          (*(char *)(*(long *)(lVar21 + 8) + 0xe8) != '\0' ||
          *(char *)(*(long *)(lVar21 + 8) + 0xe7) != '\0')) {
        *(undefined1 *)(lVar21 + 0x129) = 1;
LAB_7102e1fb3c:
        *(undefined8 *)(lVar21 + 0x18) = 0;
        *(undefined8 *)(lVar21 + 0x10) = local_d0;
      }
      else if ((1e-05 < ABS((float)*(undefined8 *)(lVar21 + 0x10) - (float)local_d0)) ||
              (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar21 + 0x10) >> 0x20) - fVar29))) {
        *(undefined1 *)(lVar21 + 0x12a) = 1;
        goto LAB_7102e1fb3c;
      }
      if (1e-05 <= ABS(*(float *)(lVar21 + 0x30))) {
        *(undefined4 *)(lVar21 + 0x30) = 0;
        *(undefined1 *)(lVar21 + 0x129) = 1;
      }
      uVar35 = *(undefined8 *)(lVar21 + 0x58);
      uVar34 = *(undefined8 *)(lVar21 + 0x50);
      if (1e-05 <= ABS((float)uVar34 + -1.0)) {
        uVar34 = CONCAT44((int)((ulong)uVar34 >> 0x20),0x3f800000);
        *(undefined1 *)(lVar21 + 0x129) = 1;
        *(undefined8 *)(lVar21 + 0x58) = uVar35;
        *(undefined8 *)(lVar21 + 0x50) = uVar34;
      }
      if (1e-05 <= ABS((float)((ulong)uVar34 >> 0x20) + -1.0)) {
        *(undefined1 *)(lVar21 + 0x129) = 1;
        *(undefined8 *)(lVar21 + 0x58) = uVar35;
        *(ulong *)(lVar21 + 0x50) = CONCAT44(0x3f800000,(int)uVar34);
      }
    }
  }
  plVar24 = (long *)(*(long **)(param_1 + 0x1e0))[1];
  for (plVar8 = (long *)**(long **)(param_1 + 0x1e0); plVar8 != plVar24; plVar8 = plVar8 + 1) {
    lVar21 = *plVar8;
    if (*(char *)(lVar21 + 0x128) == '\0' ||
        (*(char *)(*(long *)(lVar21 + 8) + 0xe8) != '\0' ||
        *(char *)(*(long *)(lVar21 + 8) + 0xe7) != '\0')) {
      *(undefined1 *)(lVar21 + 0x129) = 1;
LAB_7102e1fc2c:
      *(undefined8 *)(lVar21 + 0x18) = 0;
      *(undefined8 *)(lVar21 + 0x10) = local_d0;
    }
    else if ((1e-05 < ABS((float)*(undefined8 *)(lVar21 + 0x10) - (float)local_d0)) ||
            (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar21 + 0x10) >> 0x20) - fVar29))) {
      *(undefined1 *)(lVar21 + 0x12a) = 1;
      goto LAB_7102e1fc2c;
    }
    if (1e-05 <= ABS(*(float *)(lVar21 + 0x30))) {
      *(undefined4 *)(lVar21 + 0x30) = 0;
      *(undefined1 *)(lVar21 + 0x129) = 1;
    }
    uVar35 = *(undefined8 *)(lVar21 + 0x58);
    uVar34 = *(undefined8 *)(lVar21 + 0x50);
    if (1e-05 <= ABS((float)uVar34 + -1.0)) {
      uVar34 = CONCAT44((int)((ulong)uVar34 >> 0x20),0x3f800000);
      *(undefined1 *)(lVar21 + 0x129) = 1;
      *(undefined8 *)(lVar21 + 0x58) = uVar35;
      *(undefined8 *)(lVar21 + 0x50) = uVar34;
    }
    if (1e-05 <= ABS((float)((ulong)uVar34 >> 0x20) + -1.0)) {
      *(undefined1 *)(lVar21 + 0x129) = 1;
      *(undefined8 *)(lVar21 + 0x58) = uVar35;
      *(ulong *)(lVar21 + 0x50) = CONCAT44(0x3f800000,(int)uVar34);
    }
  }
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x10,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&DAT_00000010;
      pppplVar18 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,param_8)
         , puVar5 != (undefined8 *)0x0)) goto LAB_7102e1fcf0;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102e1fcf0:
  lVar21 = *(long *)(param_1 + 8);
  pppplVar27 = *(long *****)(param_1 + 0x18);
  *puVar5 = &PTR_FUN_710513fe58;
  plVar8 = (long *)FUN_710392e290(0x10,0x140,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,param_8
                                 );
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&DAT_00000140;
      pppplVar18 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar6 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x140,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7
                                          ,param_8), plVar8 != (long *)0x0)) goto LAB_7102e1fd60;
    }
    plVar8 = (long *)0x0;
  }
LAB_7102e1fd60:
  FUN_7102e296f0(plVar8,lVar21,pppplVar27,0,pppplVar14,uVar25,param_7,param_8);
  ppppbVar16 = (byte ****)0x1;
  FUN_7102e296f0(plVar8 + 0x14,lVar21,pppplVar27,1,pppplVar14,uVar25,param_7,param_8);
  puVar5[1] = plVar8;
  plVar8 = *(long **)(param_1 + 0x1f8);
  *(undefined8 **)(param_1 + 0x1f8) = puVar5;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  lVar21 = *(long *)(param_1 + 0x70);
  if (lVar21 != 0) {
    if ((*(char *)(lVar21 + 0xe0) != '\0') && (*(long *)(lVar21 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar21 + 200) + 0x32) = 0;
    }
    if (*(long *)(lVar21 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar21 + 0xd8) + 0x22) = 0;
    }
    lVar21 = *(long *)(param_1 + 0x70);
    if (lVar21 != 0) {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x140);
      if ((*(char *)(lVar21 + 0xe0) != '\0') && (*(long *)(lVar21 + 200) != 0)) {
        *(undefined4 *)(*(long *)(lVar21 + 200) + 8) = uVar4;
      }
      if (*(long *)(lVar21 + 0xd8) != 0) {
        *(undefined4 *)(*(long *)(lVar21 + 0xd8) + 0x24) = uVar4;
      }
      if (*(char *)(lVar21 + 0xe0) != '\0') {
        *(undefined4 *)(*(long *)(lVar21 + 0xb0) + 0x14) = uVar4;
      }
    }
  }
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x10,pppplVar27,ppppbVar16,pppplVar14,uVar25,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&DAT_00000010;
      pppplVar27 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar27,ppppbVar16,pppplVar14,uVar25,param_7,param_8)
         , puVar5 != (undefined8 *)0x0)) goto LAB_7102e1fe68;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102e1fe68:
  lVar21 = *(long *)(param_1 + 8);
  lVar23 = *(long *)(param_1 + 0x18);
  *puVar5 = &PTR_FUN_710513fce8;
  plVar8 = (long *)FUN_710392e290(0x10,0x1e0,pppplVar27,ppppbVar16,pppplVar14,uVar25,param_7,param_8
                                 );
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&DAT_000001e0;
      pppplVar27 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar6 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x1e0,pppplVar27,ppppbVar16,pppplVar14,uVar25,param_7
                                          ,param_8), plVar8 != (long *)0x0)) goto LAB_7102e1fed8;
    }
    plVar8 = (long *)0x0;
  }
LAB_7102e1fed8:
  *(undefined1 *)((long)plVar8 + 0x54) = 0;
  *plVar8 = lVar23;
  plVar8[1] = 0;
  *(undefined4 *)(plVar8 + 10) = 0;
  *(undefined1 *)(plVar8 + 0xc) = 0;
  plVar8[0xb] = 0;
  plVar8[0xe] = 0;
  *(undefined4 *)(plVar8 + 0xf) = 0;
  lVar9 = lRam0000007107459008;
  lVar11 = _ConstantZero;
  plVar8[4] = 0;
  *(undefined2 *)(plVar8 + 2) = 4;
  plVar8[5] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[0x11] = lVar9;
  plVar8[0x10] = lVar11;
  plVar8[0x13] = lVar9;
  plVar8[0x12] = lVar11;
  *(undefined4 *)(plVar8 + 0xb) = *(undefined4 *)(lVar23 + 0x144);
  *(undefined4 *)((long)plVar8 + 0x5c) = 0;
  *(undefined1 *)((long)plVar8 + 0x54) = 1;
  *(undefined1 *)(plVar8 + 0xc) = 1;
  plVar24 = (long *)FUN_710392e290(0x10,0x48,pppplVar27,ppppbVar16,pppplVar14,uVar25,param_7,param_8
                                  );
  if (plVar24 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&DAT_00000048;
      pppplVar18 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar6 & 1) != 0) &&
         (plVar24 = (long *)FUN_710392e290(0x10,0x48,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7
                                           ,param_8), plVar24 != (long *)0x0)) goto LAB_7102e1ff98;
    }
    plVar24 = (long *)0x0;
  }
LAB_7102e1ff98:
  pppplVar18 = &local_c0;
  local_b0 = 0x1000000001;
  local_c0 = (long ***)&SUB_00000020;
  local_b8 = &DAT_100000001;
  FUN_710313e6a0(plVar24,lVar21,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,param_8);
  *plVar24 = (long)&PTR_FUN_710513fd08;
  if (plVar24[7] != 0) {
    lVar9 = (**(code **)(**(long **)(plVar24[7] + 0x130) + 0x1c8))();
    *(undefined4 *)(lVar9 + 0x68) = 0;
    *(undefined8 *)(lVar9 + 0x60) = 0x121a06;
    *(undefined8 *)(lVar9 + 0x78) = 0;
    *(undefined8 *)(lVar9 + 0x80) = 0;
    *(undefined8 *)(lVar9 + 0x70) = 0x31ed91fca;
    *(short *)(lVar9 + 0x2c0) = (short)plVar8[2];
    *(long *)(lVar9 + 0x2d8) = plVar8[5];
    *(long *)(lVar9 + 0x2d0) = plVar8[4];
    *(long *)(lVar9 + 0x2e8) = plVar8[7];
    *(long *)(lVar9 + 0x2e0) = plVar8[6];
    *(long *)(lVar9 + 0x2f8) = plVar8[9];
    *(long *)(lVar9 + 0x2f0) = plVar8[8];
    lVar11 = plVar8[0xc];
    *(long *)(lVar9 + 0x308) = plVar8[0xb];
    lVar22 = plVar8[10];
    *(char *)(lVar9 + 0x310) = (char)lVar11;
    *(long *)(lVar9 + 0x300) = lVar22;
    *(short *)(lVar9 + 0x268) = (short)plVar8[2];
    *(int *)(lVar9 + 0x26c) = (int)plVar8[0xb];
    *(undefined4 *)(lVar9 + 0x270) = *(undefined4 *)((long)plVar8 + 0x5c);
    *(char *)(lVar9 + 0x288) = (char)plVar8[0xc];
    if (plVar24[7] != 0) {
      auVar36 = (**(code **)(**(long **)(plVar24[7] + 0x130) + 0x1c8))();
      FUN_7103148ab0(auVar36._0_8_,auVar36._8_8_,(undefined **)pppplVar18,ppppbVar16,pppplVar14,
                     uVar25,param_7,param_8);
      if (plVar24[7] != 0) {
        plVar10 = (long *)(**(code **)(**(long **)(plVar24[7] + 0x130) + 0x1c8))();
        uVar4 = (**(code **)(*plVar10 + 0x108))(plVar10,0);
        if ((plVar24[7] != 0) &&
           (lVar11 = (**(code **)(**(long **)(plVar24[7] + 0x130) + 0x1c8))(),
           *(short *)(lVar11 + 0x2a0) != 0)) {
          *(undefined4 *)(lVar11 + 0x2a4) = uVar4;
        }
      }
    }
  }
  plVar8[1] = (long)plVar24;
  if ((char)plVar24[8] != '\0') {
    plVar10 = (long *)plVar24[6];
    if (((plVar10 != (long *)0x0) && ((char)plVar10[2] != '\0')) &&
       (*(undefined1 *)(plVar10 + 2) = 0, (char)plVar10[10] != '\0')) {
      plVar12 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar10 + 8));
      (**(code **)(*plVar12 + 0x48))(plVar12,0);
      *(undefined1 *)(plVar10 + 10) = 0;
    }
    (**(code **)(*plVar24 + 0x30))(plVar24);
  }
  *(undefined1 *)(plVar24 + 8) = 0;
  plVar8[0x14] = lVar23;
  plVar8[0x15] = 0;
  lVar9 = lRam0000007107459008;
  lVar11 = _ConstantZero;
  plVar8[0x17] = lRam0000007107459008;
  plVar8[0x16] = lVar11;
  plVar8[0x19] = lVar9;
  plVar8[0x18] = lVar11;
  *(undefined2 *)((long)plVar8 + 0xf4) = 0;
  *(undefined4 *)(plVar8 + 0x1e) = 0;
  plVar8[0x20] = 0;
  *(undefined2 *)(plVar8 + 0x1a) = 4;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x23] = lVar9;
  plVar8[0x22] = lVar11;
  plVar8[0x25] = lVar9;
  plVar8[0x24] = lVar11;
  *(undefined4 *)(plVar8 + 0x1e) = *(undefined4 *)(lVar23 + 0x144);
  *(undefined2 *)((long)plVar8 + 0xf4) = 0x101;
  plVar24 = (long *)FUN_710392e290(0x10,0x48,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,param_8
                                  );
  if (plVar24 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&DAT_00000048;
      pppplVar18 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar6 & 1) != 0) &&
         (plVar24 = (long *)FUN_710392e290(0x10,0x48,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7
                                           ,param_8), plVar24 != (long *)0x0)) goto LAB_7102e201d4;
    }
    plVar24 = (long *)0x0;
  }
LAB_7102e201d4:
  local_c0 = (long ***)&SUB_00000020;
  pppplVar18 = &local_c0;
  local_b8 = &DAT_100000001;
  local_b0 = 0x1000000001;
  FUN_710313e6a0(plVar24,lVar21,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,param_8);
  *plVar24 = (long)&PTR_FUN_710513fd88;
  if (plVar24[7] != 0) {
    lVar11 = (**(code **)(**(long **)(plVar24[7] + 0x130) + 0x1c8))();
    lVar22 = plVar8[0x16];
    lVar32 = plVar8[0x18];
    lVar9 = plVar8[0x1c];
    *(undefined4 *)(lVar11 + 0x68) = 0;
    *(long *)(lVar11 + 0x80) = lVar32;
    *(undefined8 *)(lVar11 + 0x60) = 0x121a00;
    *(undefined8 *)(lVar11 + 0x70) = 0x31ed91fca;
    *(float *)(lVar11 + 0x78) = (float)lVar22 + (float)lVar9;
    *(float *)(lVar11 + 0x7c) = (float)((ulong)lVar22 >> 0x20) + (float)((ulong)lVar9 >> 0x20);
    *(short *)(lVar11 + 0x268) = (short)plVar8[0x1a];
    *(int *)(lVar11 + 0x26c) = (int)plVar8[0x1e];
    *(undefined8 *)(lVar11 + 0x274) = 0;
    cVar2 = *(char *)((long)plVar8 + 0xf4);
    *(undefined4 *)(lVar11 + 0x284) = 0;
    uVar4 = 0x43340000;
    if (cVar2 != '\0') {
      uVar4 = 0;
    }
    *(undefined4 *)(lVar11 + 0x270) = uVar4;
    *(undefined1 *)(lVar11 + 0x288) = *(undefined1 *)((long)plVar8 + 0xf5);
    if (plVar24[7] != 0) {
      auVar36 = (**(code **)(**(long **)(plVar24[7] + 0x130) + 0x1c8))();
      FUN_7103148ab0(auVar36._0_8_,auVar36._8_8_,(undefined **)pppplVar18,ppppbVar16,pppplVar14,
                     uVar25,param_7,param_8);
      if (plVar24[7] != 0) {
        plVar10 = (long *)(**(code **)(**(long **)(plVar24[7] + 0x130) + 0x1c8))();
        uVar4 = (**(code **)(*plVar10 + 0x108))(plVar10,0);
        if ((plVar24[7] != 0) &&
           (lVar11 = (**(code **)(**(long **)(plVar24[7] + 0x130) + 0x1c8))(),
           *(short *)(lVar11 + 0x2a0) != 0)) {
          *(undefined4 *)(lVar11 + 0x2a4) = uVar4;
        }
      }
    }
  }
  plVar8[0x15] = (long)plVar24;
  if ((char)plVar24[8] != '\0') {
    plVar10 = (long *)plVar24[6];
    if (((plVar10 != (long *)0x0) && ((char)plVar10[2] != '\0')) &&
       (*(undefined1 *)(plVar10 + 2) = 0, (char)plVar10[10] != '\0')) {
      plVar12 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar10 + 8));
      (**(code **)(*plVar12 + 0x48))(plVar12,0);
      *(undefined1 *)(plVar10 + 10) = 0;
    }
    (**(code **)(*plVar24 + 0x30))(plVar24);
  }
  *(undefined1 *)(plVar24 + 8) = 0;
  *(undefined1 *)((long)plVar8 + 0x184) = 0;
  plVar8[0x26] = lVar23;
  plVar8[0x27] = 0;
  *(undefined4 *)(plVar8 + 0x30) = 0;
  *(undefined1 *)(plVar8 + 0x32) = 0;
  plVar8[0x31] = 0;
  plVar8[0x34] = 1;
  *(undefined4 *)(plVar8 + 0x35) = 0;
  lVar9 = lRam0000007107459008;
  lVar11 = _ConstantZero;
  *(undefined2 *)(plVar8 + 0x28) = 4;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  plVar8[0x2c] = 0;
  plVar8[0x2d] = 0;
  plVar8[0x2a] = 0;
  plVar8[0x2b] = 0;
  plVar8[0x37] = lVar9;
  plVar8[0x36] = lVar11;
  plVar8[0x39] = lVar9;
  plVar8[0x38] = lVar11;
  *(undefined4 *)(plVar8 + 0x31) = *(undefined4 *)(lVar23 + 0x144);
  *(undefined4 *)((long)plVar8 + 0x18c) = 0;
  *(undefined1 *)((long)plVar8 + 0x184) = 1;
  *(undefined1 *)(plVar8 + 0x32) = 1;
  plVar24 = (long *)FUN_710392e290(0x10,0x48,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,param_8
                                  );
  if (plVar24 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&DAT_00000048;
      pppplVar18 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      if (((uVar6 & 1) != 0) &&
         (plVar24 = (long *)FUN_710392e290(0x10,0x48,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7
                                           ,param_8), plVar24 != (long *)0x0)) goto LAB_7102e20410;
    }
    plVar24 = (long *)0x0;
  }
LAB_7102e20410:
  local_c0 = (long ***)&SUB_00000020;
  pppplVar18 = &local_c0;
  local_b8 = &DAT_100000001;
  local_b0 = 0x1000000001;
  FUN_710313e6a0(plVar24,lVar21,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,param_8);
  *plVar24 = (long)&PTR_FUN_710513fd08;
  if (plVar24[7] != 0) {
    lVar23 = (**(code **)(**(long **)(plVar24[7] + 0x130) + 0x1c8))();
    *(undefined4 *)(lVar23 + 0x68) = 0;
    *(undefined8 *)(lVar23 + 0x60) = 0x121a06;
    *(undefined8 *)(lVar23 + 0x78) = 0;
    *(undefined8 *)(lVar23 + 0x80) = 0;
    *(undefined8 *)(lVar23 + 0x70) = 0x31ed91fca;
    *(short *)(lVar23 + 0x2c0) = (short)plVar8[0x28];
    *(long *)(lVar23 + 0x2d8) = plVar8[0x2b];
    *(long *)(lVar23 + 0x2d0) = plVar8[0x2a];
    *(long *)(lVar23 + 0x2e8) = plVar8[0x2d];
    *(long *)(lVar23 + 0x2e0) = plVar8[0x2c];
    *(long *)(lVar23 + 0x2f8) = plVar8[0x2f];
    *(long *)(lVar23 + 0x2f0) = plVar8[0x2e];
    lVar21 = plVar8[0x32];
    *(long *)(lVar23 + 0x308) = plVar8[0x31];
    lVar11 = plVar8[0x30];
    *(char *)(lVar23 + 0x310) = (char)lVar21;
    *(long *)(lVar23 + 0x300) = lVar11;
    *(short *)(lVar23 + 0x268) = (short)plVar8[0x28];
    *(int *)(lVar23 + 0x26c) = (int)plVar8[0x31];
    *(undefined4 *)(lVar23 + 0x270) = *(undefined4 *)((long)plVar8 + 0x18c);
    *(char *)(lVar23 + 0x288) = (char)plVar8[0x32];
    if (plVar24[7] != 0) {
      auVar36 = (**(code **)(**(long **)(plVar24[7] + 0x130) + 0x1c8))();
      FUN_7103148ab0(auVar36._0_8_,auVar36._8_8_,(undefined **)pppplVar18,ppppbVar16,pppplVar14,
                     uVar25,param_7,param_8);
      if (plVar24[7] != 0) {
        plVar10 = (long *)(**(code **)(**(long **)(plVar24[7] + 0x130) + 0x1c8))();
        uVar4 = (**(code **)(*plVar10 + 0x108))(plVar10,0);
        if ((plVar24[7] != 0) &&
           (lVar21 = (**(code **)(**(long **)(plVar24[7] + 0x130) + 0x1c8))(),
           *(short *)(lVar21 + 0x2a0) != 0)) {
          *(undefined4 *)(lVar21 + 0x2a4) = uVar4;
        }
      }
    }
  }
  plVar8[0x27] = (long)plVar24;
  if ((char)plVar24[8] != '\0') {
    plVar10 = (long *)plVar24[6];
    if (((plVar10 != (long *)0x0) && ((char)plVar10[2] != '\0')) &&
       (*(undefined1 *)(plVar10 + 2) = 0, (char)plVar10[10] != '\0')) {
      plVar12 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar10 + 8));
      (**(code **)(*plVar12 + 0x48))(plVar12,0);
      *(undefined1 *)(plVar10 + 10) = 0;
    }
    (**(code **)(*plVar24 + 0x30))(plVar24);
  }
  *(undefined1 *)(plVar24 + 8) = 0;
  *(undefined1 *)(plVar8 + 0x3a) = 1;
  *(undefined4 *)((long)plVar8 + 0x1d4) = 0x43a28000;
  puVar5[1] = plVar8;
  plVar8 = *(long **)(param_1 + 0x200);
  *(undefined8 **)(param_1 + 0x200) = puVar5;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  lVar21 = *(long *)(param_1 + 0x78);
  if (lVar21 != 0) {
    if ((*(char *)(lVar21 + 0xe0) != '\0') && (*(long *)(lVar21 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar21 + 200) + 0x32) = 0;
    }
    if (*(long *)(lVar21 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar21 + 0xd8) + 0x22) = 0;
    }
  }
  lVar21 = *(long *)(param_1 + 0x80);
  if (lVar21 != 0) {
    if ((*(char *)(lVar21 + 0xe0) != '\0') && (*(long *)(lVar21 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar21 + 200) + 0x32) = 0;
    }
    if (*(long *)(lVar21 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar21 + 0xd8) + 0x22) = 0;
    }
  }
  local_100 = (long ***)0x0;
  lVar23 = *(long *)(param_1 + 8);
  lVar21 = *(long *)(**(long **)(lVar23 + 0x338) + 8);
  if (lVar21 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    pppplVar18 = (long ****)0x0;
    uVar4 = FUN_7102405040(lVar21,&local_100,0,ppppbVar16,pppplVar14,uVar25,param_7,param_8);
    lVar23 = *(long *)(param_1 + 8);
  }
  puVar5 = (undefined8 *)(lVar23 + 0x338);
  *(undefined4 *)(param_1 + 0x20c) = uVar4;
  if (*(long *)(*(long *)*puVar5 + 8) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    pppplVar18 = (long ****)0x0;
    uVar4 = FUN_7102405040(*(long *)(*(long *)*puVar5 + 8),&local_100,0,ppppbVar16,pppplVar14,uVar25
                           ,param_7,param_8);
    puVar5 = (undefined8 *)(*(long *)(param_1 + 8) + 0x338);
  }
  *(undefined4 *)(param_1 + 0x210) = uVar4;
  if (*(long *)(*(long *)*puVar5 + 8) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    pppplVar18 = (long ****)0x0;
    uVar4 = FUN_7102405040(*(long *)(*(long *)*puVar5 + 8),&local_100,0,ppppbVar16,pppplVar14,uVar25
                           ,param_7,param_8);
    puVar5 = (undefined8 *)(*(long *)(param_1 + 8) + 0x338);
  }
  *(undefined4 *)(param_1 + 0x208) = uVar4;
  if (*(long *)(*(long *)*puVar5 + 8) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    pppplVar18 = (long ****)0x0;
    uVar4 = FUN_7102405040(*(long *)(*(long *)*puVar5 + 8),&local_100,0,ppppbVar16,pppplVar14,uVar25
                           ,param_7,param_8);
  }
  *(undefined4 *)(param_1 + 0x214) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  pppplVar18 = (long ****)
               FUN_710392e290(0x10,0x50,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,param_8);
  if (pppplVar18 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_c0 = (long ***)&DAT_00000050;
      pppplVar18 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (pppplVar18 = (long ****)
                       FUN_710392e290(0x10,0x50,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,
                                      param_8), pppplVar18 != (long ****)0x0)) goto LAB_7102e20768;
    }
    pppplVar18 = (long ****)0x0;
  }
LAB_7102e20768:
  ppplVar13 = *(long ****)(param_1 + 8);
  *(undefined2 *)(pppplVar18 + 1) = 1;
  pppplVar18[6] = (long ***)0x0;
  pppplVar18[7] = (long ***)0x0;
  *pppplVar18 = ppplVar13;
  *(undefined1 *)((long)pppplVar18 + 10) = 0;
  pppplVar18[3] = (long ***)0x0;
  pppplVar18[2] = (long ***)0xc1a00000c2960000;
  pppplVar18[5] = (long ***)0x0;
  pppplVar18[4] = (long ***)0xc1c80000;
  *(undefined4 *)((long)pppplVar18 + 0xc) = 0xffffffff;
  *(undefined4 *)(pppplVar18 + 8) = 0;
  pppplVar27 = pppplVar18;
  bVar3 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)ppplVar13,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,param_8);
  *(bool *)(pppplVar18 + 1) = bVar3;
  pppplVar26 = *(long *****)(param_1 + 0x230);
  *(long *****)(param_1 + 0x230) = pppplVar18;
  if (pppplVar26 != (long ****)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') && (*(char *)((long)pppplVar26 + 10) != '\0'))
    {
      if (*(char *)((long)pppplVar26 + 9) != '\0') {
        uVar28 = *(uint *)((long)pppplVar26 + 0xc);
        if ((uVar28 < 0x38) &&
           (piVar19 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar19 + (long)(int)uVar28 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar19 + (long)(int)uVar28 + 0x464) = 0;
          *piVar19 = *piVar19 + -1;
        }
        *(undefined4 *)((long)pppplVar26 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)pppplVar26 + 9) = 0;
      }
      *(undefined1 *)((long)pppplVar26 + 10) = 0;
    }
    pppplVar27 = pppplVar26;
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                   (ulong)*pppplVar26,(long)pppplVar26);
    FUN_710392eb40((ulong)pppplVar26);
    pppplVar18 = *(long *****)(param_1 + 0x230);
  }
  if (*(char *)((long)pppplVar18 + 9) != '\0') {
    uVar28 = *(uint *)((long)pppplVar18 + 0xc);
    if ((uVar28 < 0x38) &&
       (piVar19 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar19 + (long)(int)uVar28 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar19 + (long)(int)uVar28 + 0x464) = 0;
      *piVar19 = *piVar19 + -1;
    }
    *(undefined4 *)((long)pppplVar18 + 0xc) = 0xffffffff;
    *(undefined1 *)((long)pppplVar18 + 9) = 0;
  }
  *(undefined1 *)((long)pppplVar18 + 10) = 0;
  pppplVar18 = (long ****)
               FUN_710392e290(0x10,0x50,pppplVar27,ppppbVar16,pppplVar14,uVar25,param_7,param_8);
  if (pppplVar18 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_c0 = (long ***)&DAT_00000050;
      pppplVar18 = &local_c0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (pppplVar18 = (long ****)
                       FUN_710392e290(0x10,0x50,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,
                                      param_8), pppplVar18 != (long ****)0x0)) goto LAB_7102e208fc;
    }
    pppplVar18 = (long ****)0x0;
  }
LAB_7102e208fc:
  ppplVar13 = *(long ****)(param_1 + 8);
  *(undefined2 *)(pppplVar18 + 1) = 1;
  pppplVar18[6] = (long ***)0x0;
  pppplVar18[7] = (long ***)0x0;
  *pppplVar18 = ppplVar13;
  *(undefined1 *)((long)pppplVar18 + 10) = 0;
  *(undefined4 *)((long)pppplVar18 + 0xc) = 0xffffffff;
  *(undefined4 *)(pppplVar18 + 8) = 0;
  pppplVar18[3] = (long ***)0x0;
  pppplVar18[2] = (long ***)0xc1a0000041c80000;
  pppplVar18[5] = (long ***)0x0;
  pppplVar18[4] = (long ***)0x42960000;
  pppplVar27 = pppplVar18;
  bVar3 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)ppplVar13,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,param_8);
  *(bool *)(pppplVar18 + 1) = bVar3;
  pppplVar26 = *(long *****)(param_1 + 0x238);
  *(long *****)(param_1 + 0x238) = pppplVar18;
  if (pppplVar26 != (long ****)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') && (*(char *)((long)pppplVar26 + 10) != '\0'))
    {
      if (*(char *)((long)pppplVar26 + 9) != '\0') {
        uVar28 = *(uint *)((long)pppplVar26 + 0xc);
        if ((uVar28 < 0x38) &&
           (piVar19 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar19 + (long)(int)uVar28 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar19 + (long)(int)uVar28 + 0x464) = 0;
          *piVar19 = *piVar19 + -1;
        }
        *(undefined4 *)((long)pppplVar26 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)pppplVar26 + 9) = 0;
      }
      *(undefined1 *)((long)pppplVar26 + 10) = 0;
    }
    pppplVar27 = pppplVar26;
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                   (ulong)*pppplVar26,(long)pppplVar26);
    FUN_710392eb40((ulong)pppplVar26);
    pppplVar18 = *(long *****)(param_1 + 0x238);
  }
  if (*(char *)((long)pppplVar18 + 9) != '\0') {
    uVar28 = *(uint *)((long)pppplVar18 + 0xc);
    if ((uVar28 < 0x38) &&
       (piVar19 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar19 + (long)(int)uVar28 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar19 + (long)(int)uVar28 + 0x464) = 0;
      *piVar19 = *piVar19 + -1;
    }
    *(undefined4 *)((long)pppplVar18 + 0xc) = 0xffffffff;
    *(undefined1 *)((long)pppplVar18 + 9) = 0;
  }
  *(undefined1 *)((long)pppplVar18 + 10) = 0;
  lVar21 = *(long *)(*(long *)(param_1 + 0x18) + 0xb50);
  uVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0xb58) - lVar21;
  uVar28 = (uint)(uVar6 >> 4);
  if (uVar28 == 0) {
    return;
  }
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar23 = 0;
  lVar11 = 0x43;
  do {
    pfVar1 = (float *)(lVar21 + lVar23);
    fVar31 = pfVar1[2];
    fVar33 = pfVar1[3];
    fVar29 = *pfVar1;
    fVar30 = pfVar1[1];
    pppplVar18 = (long ****)
                 FUN_710392e290(0x10,0x50,pppplVar27,ppppbVar16,pppplVar14,uVar25,param_7,param_8);
    if (pppplVar18 == (long ****)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_c0 = (long ***)&DAT_00000050;
        pppplVar18 = &local_c0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar6 & 1) != 0) &&
           (pppplVar18 = (long ****)
                         FUN_710392e290(0x10,0x50,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,
                                        param_8), pppplVar18 != (long ****)0x0))
        goto LAB_7102e20af0;
      }
      pppplVar18 = (long ****)0x0;
    }
LAB_7102e20af0:
    ppplVar13 = *(long ****)(param_1 + 8);
    *pppplVar18 = ppplVar13;
    *(undefined2 *)(pppplVar18 + 1) = 1;
    pppplVar18[6] = (long ***)0x0;
    pppplVar18[7] = (long ***)0x0;
    *(undefined1 *)((long)pppplVar18 + 10) = 0;
    *(undefined4 *)((long)pppplVar18 + 0xc) = 0xffffffff;
    pppplVar18[3] = (long ***)0x0;
    pppplVar18[2] = (long ***)CONCAT44(fVar30 - fVar33 * 0.5,fVar29 - fVar31 * 0.5);
    pppplVar18[5] = (long ***)0x0;
    pppplVar18[4] = (long ***)CONCAT44(fVar30 + fVar33 * 0.5,fVar29 + fVar31 * 0.5);
    *(undefined4 *)(pppplVar18 + 8) = 0;
    pppplVar27 = pppplVar18;
    bVar3 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                           (ulong)ppplVar13,pppplVar18,ppppbVar16,pppplVar14,uVar25,param_7,param_8)
    ;
    *(bool *)(pppplVar18 + 1) = bVar3;
    pppplVar26 = *(long *****)(param_1 + lVar11 * 8);
    *(long *****)(param_1 + lVar11 * 8) = pppplVar18;
    if (pppplVar26 != (long ****)0x0) {
      if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') &&
         (*(char *)((long)pppplVar26 + 10) != '\0')) {
        if (*(char *)((long)pppplVar26 + 9) != '\0') {
          uVar20 = *(uint *)((long)pppplVar26 + 0xc);
          if ((uVar20 < 0x38) &&
             (piVar19 = *(int **)(*DAT_71052b6fd8 + 0xc0),
             *(char *)((long)piVar19 + (long)(int)uVar20 + 0x464) != '\0')) {
            *(undefined1 *)((long)piVar19 + (long)(int)uVar20 + 0x464) = 0;
            *piVar19 = *piVar19 + -1;
          }
          *(undefined4 *)((long)pppplVar26 + 0xc) = 0xffffffff;
          *(undefined1 *)((long)pppplVar26 + 9) = 0;
        }
        *(undefined1 *)((long)pppplVar26 + 10) = 0;
      }
      pppplVar27 = pppplVar26;
      FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                     (ulong)*pppplVar26,(long)pppplVar26);
      FUN_710392eb40((ulong)pppplVar26);
      pppplVar18 = *(long *****)(param_1 + lVar11 * 8);
    }
    if (*(char *)((long)pppplVar18 + 9) != '\0') {
      uVar20 = *(uint *)((long)pppplVar18 + 0xc);
      if ((uVar20 < 0x38) &&
         (piVar19 = *(int **)(*DAT_71052b6fd8 + 0xc0),
         *(char *)((long)piVar19 + (long)(int)uVar20 + 0x464) != '\0')) {
        *(undefined1 *)((long)piVar19 + (long)(int)uVar20 + 0x464) = 0;
        *piVar19 = *piVar19 + -1;
      }
      *(undefined4 *)((long)pppplVar18 + 0xc) = 0xffffffff;
      *(undefined1 *)((long)pppplVar18 + 9) = 0;
    }
    uVar20 = (int)lVar11 - 0x42;
    *(undefined1 *)((long)pppplVar18 + 10) = 0;
    if (uVar28 <= uVar20) {
      return;
    }
    lVar21 = *(long *)(*(long *)(param_1 + 0x18) + 0xb50);
    lVar23 = lVar23 + 0x10;
    lVar11 = lVar11 + 1;
    if ((ulong)(*(long *)(*(long *)(param_1 + 0x18) + 0xb58) - lVar21 >> 4) <= (ulong)uVar20) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
  } while( true );
}

