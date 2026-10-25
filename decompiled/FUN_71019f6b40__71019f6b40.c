// addr:      71019f6b40
// offset:    0x19f6b40
// name:      FUN_71019f6b40
// mangled:   
// signature: undefined __cdecl FUN_71019f6b40(long param_1, long * * * * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019f6b40(long param_1,long ****param_2,long ****param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ***ppplVar1;
  long ***ppplVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined2 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  long ***ppplVar11;
  bool bVar12;
  int iVar13;
  long ****pppplVar14;
  long ***ppplVar15;
  ulong uVar16;
  long **pplVar17;
  long **__dest;
  byte ****ppppbVar18;
  ulong uVar19;
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
  long ****pppplVar20;
  char *pcVar21;
  undefined8 uVar22;
  long ****pppplVar23;
  undefined8 uVar24;
  byte ****ppppbVar25;
  ushort uVar26;
  undefined4 uVar27;
  long *plVar28;
  long *plVar29;
  code *pcVar30;
  uint uVar31;
  long *plVar32;
  long ***ppplVar33;
  byte *pbVar34;
  uint uVar35;
  long lVar36;
  ushort *puVar37;
  long ***ppplVar38;
  long ***ppplVar39;
  undefined2 *puVar40;
  long ***ppplVar41;
  long *plVar42;
  long ***ppplVar43;
  long ****pppplVar44;
  int iVar45;
  undefined1 auVar46 [16];
  long **local_340;
  long **local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined2 local_318;
  undefined1 local_316;
  undefined4 local_315;
  undefined2 local_311;
  undefined1 local_30f;
  long alStack_300 [4];
  long *local_2e0;
  long alStack_2d0 [4];
  long *local_2b0;
  long alStack_2a0 [4];
  long *local_280;
  long alStack_270 [4];
  long *local_250;
  long alStack_240 [4];
  long *local_220;
  long ***local_208;
  long ***local_200 [8];
  undefined **local_1c0;
  ulong local_1b8;
  undefined8 local_1b0;
  long ***local_1a8;
  undefined8 local_1a0;
  undefined1 *local_198;
  long *local_190;
  undefined8 local_188;
  long local_180 [4];
  long *local_160;
  undefined8 local_158;
  long local_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  undefined4 local_90;
  
  pppplVar20 = param_3;
  ppppbVar25 = param_4;
  pppplVar14 = (long ****)FUN_710392e290(0x10,0xe0,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar22 = extraout_x1;
  if (pppplVar14 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&DAT_000000e0;
      pppplVar20 = (long ****)&local_1b0;
      auVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      uVar22 = auVar46._8_8_;
      if (((auVar46._0_8_ & 1) != 0) &&
         (pppplVar14 = (long ****)
                       FUN_710392e290(0x10,0xe0,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                                      param_8), uVar22 = extraout_x1_00,
         pppplVar14 != (long ****)0x0)) goto LAB_71019f6bcc;
    }
    pppplVar14 = (long ****)0x0;
  }
LAB_71019f6bcc:
  pppplVar14[5] = (long ***)0x0;
  pppplVar14[6] = (long ***)0x0;
  *pppplVar14 = (long ***)&PTR_FUN_71050a8770;
  pppplVar14[3] = (long ***)0x0;
  pppplVar14[4] = (long ***)0x0;
  pppplVar14[1] = (long ***)0x0;
  pppplVar14[2] = (long ***)0x0;
  FUN_7103776290(pppplVar14 + 7,uVar22,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8);
  FUN_7103776290(pppplVar14 + 9,extraout_x1_01,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                );
  pppplVar14[0xb] = (long ***)&PTR_FUN_710523d9a8;
  ppplVar15 = (long ***)
              FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8);
  if (ppplVar15 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (ppplVar15 = (long ***)
                      FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    ), ppplVar15 != (long ***)0x0)) goto LAB_71019f6c54;
    }
    ppplVar15 = (long ***)0x0;
  }
LAB_71019f6c54:
  ppplVar15[2] = (long **)0x0;
  ppplVar15[3] = (long **)0x0;
  *ppplVar15 = (long **)0x0;
  ppplVar15[1] = (long **)0x0;
  pppplVar14[0xc] = ppplVar15;
  *(undefined4 *)(pppplVar14 + 0xd) = 0;
  pppplVar14[0xe] = (long ***)0x0;
  pppplVar14[0xf] = (long ***)&PTR_FUN_71050a8730;
  ppplVar15 = (long ***)
              FUN_710392e290(0x10,0x3b0,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8);
  uVar22 = extraout_x1_02;
  if (ppplVar15 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&DAT_000003b0;
      pppplVar20 = (long ****)&local_1b0;
      auVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      uVar22 = auVar46._8_8_;
      if (((auVar46._0_8_ & 1) != 0) &&
         (ppplVar15 = (long ***)
                      FUN_710392e290(0x10,0x3b0,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                                     param_8), uVar22 = extraout_x1_03, ppplVar15 != (long ***)0x0))
      goto LAB_71019f6cd0;
    }
    ppplVar15 = (long ***)0x0;
  }
LAB_71019f6cd0:
  *ppplVar15 = (long **)ppplVar15;
  ppplVar15[1] = (long **)0x0;
  ppplVar15[4] = (long **)0x0;
  ppplVar15[2] = (long **)0x0;
  ppplVar15[3] = (long **)0x0;
  *(undefined4 *)(ppplVar15 + 0x18) = 0xffffffff;
  *(undefined1 *)((long)ppplVar15 + 0xc4) = 0;
  ppplVar15[5] = (long **)0x0;
  ppplVar15[0x16] = (long **)0x0;
  ppplVar15[0x17] = (long **)&DAT_ffffffff;
  ppplVar15[0x14] = (long **)0x0;
  ppplVar15[0x15] = (long **)0x0;
  ppplVar15[0x12] = (long **)0x0;
  ppplVar15[0x13] = (long **)0x0;
  ppplVar15[0x10] = (long **)0x0;
  ppplVar15[0x11] = (long **)0x0;
  ppplVar15[0xe] = (long **)0x0;
  ppplVar15[0xf] = (long **)0x0;
  ppplVar15[0xc] = (long **)0x0;
  ppplVar15[0xd] = (long **)0x0;
  ppplVar15[10] = (long **)0x0;
  ppplVar15[0xb] = (long **)0x0;
  ppplVar15[8] = (long **)0x0;
  ppplVar15[9] = (long **)0x0;
  ppplVar15[6] = (long **)0x0;
  ppplVar15[7] = (long **)0x0;
  FUN_7103776290(ppplVar15 + 0x19,uVar22,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8);
  ppplVar15[0x1b] = (long **)0x0;
  ppplVar15[0x1c] = (long **)&PTR_FUN_710523d9a8;
  pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    );
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7
                                             ,param_8), pplVar17 != (long **)0x0))
      goto LAB_71019f6d84;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f6d84:
  pplVar17[2] = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  ppplVar15[0x1d] = pplVar17;
  ppplVar15[0x1e] = (long **)&PTR_FUN_710523d9a8;
  pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    );
  uVar22 = extraout_x1_04;
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      auVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      uVar22 = auVar46._8_8_;
      if (((auVar46._0_8_ & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7
                                             ,param_8), uVar22 = extraout_x1_05,
         pplVar17 != (long **)0x0)) goto LAB_71019f6dec;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f6dec:
  pplVar17[2] = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  ppplVar15[0x1f] = pplVar17;
  FUN_7103776290(ppplVar15 + 0x20,uVar22,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8);
  FUN_7103776290(ppplVar15 + 0x22,extraout_x1_06,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x24,extraout_x1_07,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x26,extraout_x1_08,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x28,extraout_x1_09,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x2a,extraout_x1_10,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x2c,extraout_x1_11,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x2e,extraout_x1_12,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x30,extraout_x1_13,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x32,extraout_x1_14,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x34,extraout_x1_15,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x36,extraout_x1_16,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x38,extraout_x1_17,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x3a,extraout_x1_18,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x3c,extraout_x1_19,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x3e,extraout_x1_20,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  FUN_7103776290(ppplVar15 + 0x40,extraout_x1_21,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                 param_8);
  ppplVar15[0x42] = (long **)&PTR_FUN_710523d9a8;
  pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    );
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7
                                             ,param_8), pplVar17 != (long **)0x0))
      goto LAB_71019f6ee4;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f6ee4:
  pplVar17[2] = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  ppplVar15[0x43] = pplVar17;
  ppplVar15[0x44] = (long **)&PTR_FUN_710523d9a8;
  pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    );
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7
                                             ,param_8), pplVar17 != (long **)0x0))
      goto LAB_71019f6f50;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f6f50:
  pplVar17[2] = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  ppplVar15[0x45] = pplVar17;
  ppplVar15[0x46] = (long **)&PTR_FUN_710523d9a8;
  pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    );
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7
                                             ,param_8), pplVar17 != (long **)0x0))
      goto LAB_71019f6fbc;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f6fbc:
  pplVar17[2] = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  ppplVar15[0x47] = pplVar17;
  ppplVar15[0x48] = (long **)&PTR_FUN_710523d9a8;
  pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    );
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7
                                             ,param_8), pplVar17 != (long **)0x0))
      goto LAB_71019f7028;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f7028:
  pplVar17[2] = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  ppplVar15[0x49] = pplVar17;
  ppplVar15[0x4a] = (long **)&PTR_FUN_710523d9a8;
  pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    );
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7
                                             ,param_8), pplVar17 != (long **)0x0))
      goto LAB_71019f7094;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f7094:
  pplVar17[2] = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  ppplVar15[0x4b] = pplVar17;
  ppplVar15[0x4c] = (long **)&PTR_FUN_710523d9a8;
  pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    );
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7
                                             ,param_8), pplVar17 != (long **)0x0))
      goto LAB_71019f7100;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f7100:
  pplVar17[2] = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  ppplVar15[0x4d] = pplVar17;
  ppplVar15[0x4e] = (long **)&PTR_FUN_710523d9a8;
  pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    );
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7
                                             ,param_8), pplVar17 != (long **)0x0))
      goto LAB_71019f716c;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f716c:
  pplVar17[2] = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  ppplVar15[0x4f] = pplVar17;
  ppplVar15[0x50] = (long **)&PTR_FUN_710523d9a8;
  pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    );
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7
                                             ,param_8), pplVar17 != (long **)0x0))
      goto LAB_71019f71d8;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f71d8:
  pplVar17[2] = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  ppplVar15[0x51] = pplVar17;
  ppplVar15[0x52] = (long **)&PTR_FUN_710523d9a8;
  pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    );
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7
                                             ,param_8), pplVar17 != (long **)0x0))
      goto LAB_71019f7244;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f7244:
  pplVar17[2] = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  ppplVar15[0x53] = pplVar17;
  ppplVar15[0x54] = (long **)&PTR_FUN_710523d9a8;
  pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    );
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7
                                             ,param_8), pplVar17 != (long **)0x0))
      goto LAB_71019f72b0;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f72b0:
  pplVar17[2] = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  ppplVar15[0x55] = pplVar17;
  ppplVar15[0x56] = (long **)&PTR_FUN_710523d9a8;
  pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8
                                    );
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)&SUB_00000020;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7
                                             ,param_8), pplVar17 != (long **)0x0))
      goto LAB_71019f731c;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f731c:
  ppplVar33 = ppplVar15 + 0x5c;
  pplVar17[2] = (long *)0x0;
  pplVar17[3] = (long *)0x0;
  *pplVar17 = (long *)0x0;
  pplVar17[1] = (long *)0x0;
  ppplVar43 = ppplVar15 + 0x5f;
  ppplVar39 = ppplVar15 + 0x62;
  ppplVar1 = ppplVar15 + 0x68;
  ppplVar15[0x5b] = (long **)ppplVar33;
  ppplVar2 = ppplVar15 + 0x65;
  ppplVar15[100] = (long **)ppplVar2;
  *(undefined4 *)((long)ppplVar15 + 0x36c) = 2;
  ppplVar15[0x57] = pplVar17;
  ppplVar15[0x5a] = (long **)0x0;
  ppplVar15[0x59] = (long **)0x0;
  ppplVar15[0x58] = (long **)0x0;
  ppplVar15[0x5d] = (long **)0x0;
  ppplVar15[0x5c] = (long **)0x0;
  ppplVar15[0x60] = (long **)0x0;
  ppplVar15[0x5f] = (long **)0x0;
  ppplVar15[0x5e] = (long **)ppplVar43;
  ppplVar15[99] = (long **)0x0;
  ppplVar15[0x62] = (long **)0x0;
  ppplVar15[0x61] = (long **)ppplVar39;
  ppplVar15[0x66] = (long **)0x0;
  ppplVar15[0x65] = (long **)0x0;
  ppplVar15[0x69] = (long **)0x0;
  ppplVar15[0x68] = (long **)0x0;
  ppplVar15[0x67] = (long **)ppplVar1;
  *(undefined4 *)(ppplVar15 + 0x6d) = 0;
  ppplVar15[0x6c] = (long **)0x0;
  ppplVar15[0x6b] = (long **)0x0;
  ppplVar15[0x6a] = (long **)0x0;
  *(undefined8 *)((long)ppplVar15 + 0x376) = 0;
  ppplVar15[0x6e] = (long **)0x0;
  *(undefined4 *)((long)ppplVar15 + 0x394) = 0xffffffff;
  *(undefined2 *)(ppplVar15 + 0x73) = 0;
  *(undefined4 *)((long)ppplVar15 + 0x39c) = 0xffffffff;
  *(undefined1 *)(ppplVar15 + 0x75) = 0;
  ppplVar15[0x74] = (long **)0x0;
  puVar10 = DAT_710593bc60;
  pplVar17 = (long **)FUN_710392e290(0x10,0x4800,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                                     param_8);
  if (pplVar17 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
      local_1b0 = (undefined **)0x4800;
      pppplVar20 = (long ****)&local_1b0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
      if (((uVar16 & 1) != 0) &&
         (pplVar17 = (long **)FUN_710392e290(0x10,0x4800,pppplVar20,ppppbVar25,param_5,param_6,
                                             param_7,param_8), pplVar17 != (long **)0x0))
      goto LAB_71019f7428;
    }
    pplVar17 = (long **)0x0;
  }
LAB_71019f7428:
  uVar8 = 0x811c9dc5;
  ppplVar15[0x6a] = pplVar17;
  ppplVar15[0x6b] = pplVar17;
  ppplVar15[0x6c] = pplVar17 + 0x900;
  local_150[3] = 0;
  local_150[2] = 0;
  local_150[1] = 0;
  local_150[0] = 0;
  local_158 = 0;
  local_160 = (long *)0x0;
  local_180[3] = 0;
  local_180[2] = 0;
  local_180[1] = 0;
  local_180[0] = 0;
  local_188 = 0;
  local_190 = (long *)0x0;
  local_198 = (undefined1 *)0x0;
  local_1a0 = 0;
  local_1a8 = (long ***)0x0;
  local_1b0 = (undefined **)0x0;
  plVar28 = (long *)*puVar10;
  lVar36 = *plVar28;
  lVar3 = plVar28[1];
  if (lVar36 != lVar3) {
    do {
      if ((*(long *)(lVar36 + 0x60) != 0) &&
         (iVar13 = FUN_7100000410(*(long *)(lVar36 + 0x60)), 0 < iVar13)) {
        iVar45 = 0;
        do {
          local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffffffffff00);
          pppplVar20 = (long ****)&local_1b0;
          FUN_7100000570(*(long *)(lVar36 + 0x60),iVar45,(long)pppplVar20);
          bVar12 = FUN_71037ae880((char *)&local_1b0,"nam_name_preset_*");
          if (bVar12) {
            uVar16 = 0;
            do {
              uVar19 = uVar16;
              if (*(char *)((long)&local_1b0 + uVar16) == '\0') break;
              *(char *)((long)&local_328 + uVar16) = *(char *)((long)&local_1b0 + uVar16);
              cVar5 = *(char *)((long)&local_1b0 + uVar16 + 1);
              if (cVar5 == '\0') {
                uVar19 = uVar16 + 1;
                break;
              }
              cVar6 = *(char *)((long)&local_1b0 + uVar16 + 2);
              *(char *)((long)&local_328 + uVar16 + 1) = cVar5;
              if (cVar6 == '\0') {
                uVar19 = uVar16 + 2;
                break;
              }
              uVar19 = uVar16 + 3;
              *(char *)((long)&local_328 + uVar16 + 2) = cVar6;
              uVar16 = uVar19;
            } while ((uint)uVar19 < 0x3f);
            *(undefined1 *)((long)&local_328 + (uVar19 & 0xffffffff)) = 0;
            uVar35 = uVar8;
            pbVar34 = (byte *)((long)&local_328 + 1);
            bVar4 = (byte)local_328;
            while (bVar4 != 0) {
              uVar35 = uVar35 * 0x89 ^ (uint)bVar4;
              bVar4 = *pbVar34;
              pbVar34 = pbVar34 + 1;
            }
            local_330 = (undefined **)CONCAT44((int)uVar19,uVar35);
            pplVar17 = ppplVar15[0x6b];
            if (pplVar17 < ppplVar15[0x6c]) {
              uVar16 = 0;
              *(uint *)pplVar17 = 0;
              bVar4 = (byte)local_328;
              while (bVar4 != 0) {
                *(byte *)((long)pplVar17 + uVar16 + 8) = bVar4;
                bVar4 = ((byte *)((long)&local_328 + 1))[uVar16];
                if (bVar4 == 0) {
                  uVar16 = uVar16 + 1;
                  break;
                }
                *(byte *)((long)pplVar17 + uVar16 + 9) = bVar4;
                cVar5 = *(char *)((long)&local_328 + uVar16 + 2);
                if (cVar5 == '\0') {
                  uVar16 = uVar16 + 2;
                  break;
                }
                *(char *)((long)pplVar17 + uVar16 + 10) = cVar5;
                if (0x3e < (int)uVar16 + 3U) {
                  uVar16 = (ulong)((int)uVar16 + 3);
                  break;
                }
                lVar9 = uVar16 + 3;
                uVar16 = uVar16 + 3;
                bVar4 = *(byte *)((long)&local_328 + lVar9);
              }
              *(undefined1 *)((long)pplVar17 + (uVar16 & 0xffffffff) + 8) = 0;
              *(uint *)((long)pplVar17 + 4) = (uint)uVar16;
              uVar31 = (uint)*(byte *)(pplVar17 + 1);
              uVar35 = uVar8;
              if (*(byte *)(pplVar17 + 1) != 0) {
                pbVar34 = (byte *)((long)pplVar17 + 9);
                do {
                  uVar35 = uVar35 * 0x89 ^ uVar31;
                  uVar31 = (uint)*pbVar34;
                  pbVar34 = pbVar34 + 1;
                } while (uVar31 != 0);
              }
              *(uint *)pplVar17 = uVar35;
              ppplVar15[0x6b] = ppplVar15[0x6b] + 9;
            }
            else {
              FUN_71019c1c50((ulong *)(ppplVar15 + 0x6a),(long)&local_330,pppplVar20,ppppbVar25,
                             param_5,param_6,param_7,param_8);
            }
          }
          iVar45 = iVar45 + 1;
        } while (iVar45 != iVar13);
      }
      lVar36 = lVar36 + 0x70;
    } while (lVar36 != lVar3);
    plVar28 = (long *)*puVar10;
  }
  if ((long *)plVar28[3] != plVar28 + 4) {
    plVar42 = (long *)plVar28[3];
    do {
      if ((plVar42[0x11] != 0) && (iVar13 = FUN_7100000410(plVar42[0x11]), 0 < iVar13)) {
        iVar45 = 0;
        do {
          local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffffffffff00);
          pppplVar20 = (long ****)&local_1b0;
          FUN_7100000570(plVar42[0x11],iVar45,(long)pppplVar20);
          bVar12 = FUN_71037ae880((char *)&local_1b0,"nam_name_preset_*");
          if (bVar12) {
            uVar16 = 0;
            do {
              uVar19 = uVar16;
              if (*(char *)((long)&local_1b0 + uVar16) == '\0') break;
              *(char *)((long)&local_328 + uVar16) = *(char *)((long)&local_1b0 + uVar16);
              cVar5 = *(char *)((long)&local_1b0 + uVar16 + 1);
              if (cVar5 == '\0') {
                uVar19 = uVar16 + 1;
                break;
              }
              cVar6 = *(char *)((long)&local_1b0 + uVar16 + 2);
              *(char *)((long)&local_328 + uVar16 + 1) = cVar5;
              if (cVar6 == '\0') {
                uVar19 = uVar16 + 2;
                break;
              }
              uVar19 = uVar16 + 3;
              *(char *)((long)&local_328 + uVar16 + 2) = cVar6;
              uVar16 = uVar19;
            } while ((uint)uVar19 < 0x3f);
            *(undefined1 *)((long)&local_328 + (uVar19 & 0xffffffff)) = 0;
            uVar35 = uVar8;
            pbVar34 = (byte *)((long)&local_328 + 1);
            bVar4 = (byte)local_328;
            while (bVar4 != 0) {
              uVar35 = uVar35 * 0x89 ^ (uint)bVar4;
              bVar4 = *pbVar34;
              pbVar34 = pbVar34 + 1;
            }
            local_330 = (undefined **)CONCAT44((int)uVar19,uVar35);
            pplVar17 = ppplVar15[0x6b];
            if (pplVar17 < ppplVar15[0x6c]) {
              uVar16 = 0;
              *(uint *)pplVar17 = 0;
              bVar4 = (byte)local_328;
              while (bVar4 != 0) {
                *(byte *)((long)pplVar17 + uVar16 + 8) = bVar4;
                bVar4 = ((byte *)((long)&local_328 + 1))[uVar16];
                if (bVar4 == 0) {
                  uVar16 = uVar16 + 1;
                  break;
                }
                *(byte *)((long)pplVar17 + uVar16 + 9) = bVar4;
                cVar5 = *(char *)((long)&local_328 + uVar16 + 2);
                if (cVar5 == '\0') {
                  uVar16 = uVar16 + 2;
                  break;
                }
                *(char *)((long)pplVar17 + uVar16 + 10) = cVar5;
                if (0x3e < (int)uVar16 + 3U) {
                  uVar16 = (ulong)((int)uVar16 + 3);
                  break;
                }
                lVar36 = uVar16 + 3;
                uVar16 = uVar16 + 3;
                bVar4 = *(byte *)((long)&local_328 + lVar36);
              }
              *(undefined1 *)((long)pplVar17 + (uVar16 & 0xffffffff) + 8) = 0;
              *(uint *)((long)pplVar17 + 4) = (uint)uVar16;
              uVar31 = (uint)*(byte *)(pplVar17 + 1);
              uVar35 = uVar8;
              if (*(byte *)(pplVar17 + 1) != 0) {
                pbVar34 = (byte *)((long)pplVar17 + 9);
                do {
                  uVar35 = uVar35 * 0x89 ^ uVar31;
                  uVar31 = (uint)*pbVar34;
                  pbVar34 = pbVar34 + 1;
                } while (uVar31 != 0);
              }
              *(uint *)pplVar17 = uVar35;
              ppplVar15[0x6b] = ppplVar15[0x6b] + 9;
            }
            else {
              FUN_71019c1c50((ulong *)(ppplVar15 + 0x6a),(long)&local_330,pppplVar20,ppppbVar25,
                             param_5,param_6,param_7,param_8);
            }
          }
          iVar45 = iVar45 + 1;
        } while (iVar45 != iVar13);
      }
      plVar29 = (long *)plVar42[1];
      if ((long *)plVar42[1] == (long *)0x0) {
        plVar29 = plVar42 + 2;
        plVar32 = (long *)*plVar29;
        if ((long *)*plVar32 != plVar42) {
          do {
            lVar36 = *plVar29;
            plVar29 = (long *)(lVar36 + 0x10);
            plVar32 = (long *)*plVar29;
          } while (*plVar32 != lVar36);
        }
      }
      else {
        do {
          plVar32 = plVar29;
          plVar29 = (long *)*plVar32;
        } while ((long *)*plVar32 != (long *)0x0);
      }
      plVar42 = plVar32;
    } while (plVar32 != plVar28 + 4);
  }
  pplVar17 = ppplVar15[0x58];
  if ((ulong)((long)ppplVar15[0x5a] - (long)pplVar17 >> 1) < 4) {
    pppplVar44 = (long ****)((long)ppplVar15[0x59] - (long)pplVar17);
    lVar36 = (long)pppplVar44 >> 1;
    __dest = (long **)FUN_710392e290(0x10,8,pppplVar20,ppppbVar25,param_5,param_6,param_7,param_8);
    if (__dest == (long **)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
        local_1b0 = (undefined **)&DAT_00000008;
        pppplVar20 = (long ****)&local_1b0;
        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
        if (((uVar16 & 1) != 0) &&
           (__dest = (long **)FUN_710392e290(0x10,8,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                                             param_8), __dest != (long **)0x0)) goto LAB_71019f7930;
      }
      __dest = (long **)0x0;
    }
LAB_71019f7930:
    if (0 < (long)pppplVar44) {
      memcpy(__dest,pplVar17,(size_t)pppplVar44);
      pppplVar20 = pppplVar44;
    }
    ppplVar15[0x58] = __dest;
    ppplVar15[0x59] = (long **)((long)__dest + lVar36 * 2);
    ppplVar15[0x5a] = __dest + 1;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  if (DAT_710523d00c == 0) {
    puVar37 = &DAT_7104543b30;
    do {
      ppplVar41 = ppplVar33;
      if ((long ***)*ppplVar33 == (long ***)0x0) {
        pplVar17 = *ppplVar33;
        ppplVar38 = ppplVar33;
      }
      else {
        ppplVar11 = (long ***)*ppplVar33;
        do {
          while (ppplVar38 = ppplVar11, *puVar37 < *(ushort *)((long)ppplVar38 + 0x1a)) {
            ppplVar11 = (long ***)*ppplVar38;
            ppplVar41 = ppplVar38;
            if ((long ***)*ppplVar38 == (long ***)0x0) goto LAB_71019f79fc;
          }
          if (*puVar37 <= *(ushort *)((long)ppplVar38 + 0x1a)) break;
          ppplVar41 = ppplVar38 + 1;
          ppplVar11 = (long ***)*ppplVar41;
        } while ((long ***)*ppplVar41 != (long ***)0x0);
LAB_71019f79fc:
        pplVar17 = *ppplVar41;
      }
      if (pplVar17 == (long **)0x0) {
        pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                                           param_8);
        if (pplVar17 == (long **)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
            local_1b0 = (undefined **)&SUB_00000020;
            pppplVar20 = (long ****)&local_1b0;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
            if (((uVar16 & 1) != 0) &&
               (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,
                                                   param_7,param_8), pplVar17 != (long **)0x0))
            goto LAB_71019f7a5c;
          }
          pplVar17 = (long **)0x0;
        }
LAB_71019f7a5c:
        *(ushort *)((long)pplVar17 + 0x1a) = *puVar37;
        *(ushort *)((long)pplVar17 + 0x1c) = puVar37[1];
        *pplVar17 = (long *)0x0;
        pplVar17[1] = (long *)0x0;
        pplVar17[2] = (long *)ppplVar38;
        *ppplVar41 = pplVar17;
        if ((long **)*ppplVar15[0x5b] != (long **)0x0) {
          ppplVar15[0x5b] = (long **)*ppplVar15[0x5b];
          pplVar17 = *ppplVar41;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((long *)ppplVar15[0x5c],(long *)pplVar17);
        ppplVar15[0x5d] = (long **)((long)ppplVar15[0x5d] + 1);
      }
      puVar37 = puVar37 + 2;
    } while (puVar37 != &DAT_7104543b88);
    puVar37 = &DAT_7104543b88;
    do {
      ppplVar33 = ppplVar43;
      ppplVar41 = ppplVar43;
      if ((long ***)*ppplVar43 != (long ***)0x0) {
        ppplVar11 = (long ***)*ppplVar43;
        do {
          while (ppplVar33 = ppplVar11, *puVar37 < *(ushort *)((long)ppplVar33 + 0x1a)) {
            ppplVar11 = (long ***)*ppplVar33;
            ppplVar41 = ppplVar33;
            if ((long ***)*ppplVar33 == (long ***)0x0) {
              pplVar17 = *ppplVar33;
              goto joined_r0x0071019f7bc8;
            }
          }
          if (*puVar37 <= *(ushort *)((long)ppplVar33 + 0x1a)) break;
          ppplVar41 = ppplVar33 + 1;
          ppplVar11 = (long ***)*ppplVar41;
        } while ((long ***)*ppplVar41 != (long ***)0x0);
      }
      pplVar17 = *ppplVar41;
joined_r0x0071019f7bc8:
      if (pplVar17 == (long **)0x0) {
        pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                                           param_8);
        if (pplVar17 == (long **)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
            local_1b0 = (undefined **)&SUB_00000020;
            pppplVar20 = (long ****)&local_1b0;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
            if (((uVar16 & 1) != 0) &&
               (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,
                                                   param_7,param_8), pplVar17 != (long **)0x0))
            goto LAB_71019f7b74;
          }
          pplVar17 = (long **)0x0;
        }
LAB_71019f7b74:
        *(ushort *)((long)pplVar17 + 0x1a) = *puVar37;
        *(ushort *)((long)pplVar17 + 0x1c) = puVar37[1];
        *pplVar17 = (long *)0x0;
        pplVar17[1] = (long *)0x0;
        pplVar17[2] = (long *)ppplVar33;
        *ppplVar41 = pplVar17;
        if ((long **)*ppplVar15[0x5e] != (long **)0x0) {
          ppplVar15[0x5e] = (long **)*ppplVar15[0x5e];
          pplVar17 = *ppplVar41;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((long *)ppplVar15[0x5f],(long *)pplVar17);
        ppplVar15[0x60] = (long **)((long)ppplVar15[0x60] + 1);
      }
      puVar37 = puVar37 + 2;
    } while (puVar37 != &DAT_7104543c2c);
    puVar37 = &DAT_7104543c2c;
    do {
      ppplVar33 = ppplVar39;
      ppplVar43 = ppplVar39;
      if ((long ***)*ppplVar39 != (long ***)0x0) {
        ppplVar41 = (long ***)*ppplVar39;
        do {
          while (ppplVar33 = ppplVar41, *puVar37 < *(ushort *)((long)ppplVar33 + 0x1a)) {
            ppplVar41 = (long ***)*ppplVar33;
            ppplVar43 = ppplVar33;
            if ((long ***)*ppplVar33 == (long ***)0x0) {
              pplVar17 = *ppplVar33;
              goto joined_r0x0071019f7cf8;
            }
          }
          if (*puVar37 <= *(ushort *)((long)ppplVar33 + 0x1a)) break;
          ppplVar43 = ppplVar33 + 1;
          ppplVar41 = (long ***)*ppplVar43;
        } while ((long ***)*ppplVar43 != (long ***)0x0);
      }
      pplVar17 = *ppplVar43;
joined_r0x0071019f7cf8:
      if (pplVar17 == (long **)0x0) {
        pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                                           param_8);
        if (pplVar17 == (long **)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
            local_1b0 = (undefined **)&SUB_00000020;
            pppplVar20 = (long ****)&local_1b0;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
            if (((uVar16 & 1) != 0) &&
               (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,
                                                   param_7,param_8), pplVar17 != (long **)0x0))
            goto LAB_71019f7ca4;
          }
          pplVar17 = (long **)0x0;
        }
LAB_71019f7ca4:
        *(ushort *)((long)pplVar17 + 0x1a) = *puVar37;
        *(ushort *)((long)pplVar17 + 0x1c) = puVar37[1];
        *pplVar17 = (long *)0x0;
        pplVar17[1] = (long *)0x0;
        pplVar17[2] = (long *)ppplVar33;
        *ppplVar43 = pplVar17;
        if ((long **)*ppplVar15[0x61] != (long **)0x0) {
          ppplVar15[0x61] = (long **)*ppplVar15[0x61];
          pplVar17 = *ppplVar43;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((long *)ppplVar15[0x62],(long *)pplVar17);
        ppplVar15[99] = (long **)((long)ppplVar15[99] + 1);
      }
      puVar37 = puVar37 + 2;
    } while (puVar37 != &DAT_7104543c54);
    puVar40 = &DAT_7104543b30;
    do {
      uVar26 = puVar40[1];
      uVar7 = *puVar40;
      ppplVar39 = (long ***)*ppplVar2;
      ppplVar43 = ppplVar2;
      ppplVar33 = ppplVar2;
      while (ppplVar39 != (long ***)0x0) {
        while (ppplVar33 = ppplVar39, uVar26 < *(ushort *)((long)ppplVar33 + 0x1a)) {
          ppplVar39 = (long ***)*ppplVar33;
          ppplVar43 = ppplVar33;
          if ((long ***)*ppplVar33 == (long ***)0x0) {
            pplVar17 = *ppplVar33;
            goto joined_r0x0071019f7e18;
          }
        }
        if (uVar26 <= *(ushort *)((long)ppplVar33 + 0x1a)) break;
        ppplVar43 = ppplVar33 + 1;
        ppplVar39 = (long ***)*ppplVar43;
      }
      pplVar17 = *ppplVar43;
joined_r0x0071019f7e18:
      if (pplVar17 == (long **)0x0) {
        pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                                           param_8);
        if (pplVar17 == (long **)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
            local_1b0 = (undefined **)&SUB_00000020;
            pppplVar20 = (long ****)&local_1b0;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
            if (((uVar16 & 1) != 0) &&
               (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,
                                                   param_7,param_8), pplVar17 != (long **)0x0))
            goto LAB_71019f7dcc;
          }
          pplVar17 = (long **)0x0;
        }
LAB_71019f7dcc:
        *(ushort *)((long)pplVar17 + 0x1a) = uVar26;
        *(undefined2 *)((long)pplVar17 + 0x1c) = uVar7;
        pplVar17[2] = (long *)ppplVar33;
        *pplVar17 = (long *)0x0;
        pplVar17[1] = (long *)0x0;
        *ppplVar43 = pplVar17;
        if ((long **)*ppplVar15[100] != (long **)0x0) {
          ppplVar15[100] = (long **)*ppplVar15[100];
          pplVar17 = *ppplVar43;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((long *)ppplVar15[0x65],(long *)pplVar17);
        ppplVar15[0x66] = (long **)((long)ppplVar15[0x66] + 1);
      }
      puVar40 = puVar40 + 2;
    } while (puVar40 != &DAT_7104543b88);
    puVar40 = &DAT_7104543b88;
    do {
      uVar26 = puVar40[1];
      uVar7 = *puVar40;
      ppplVar39 = (long ***)*ppplVar2;
      ppplVar43 = ppplVar2;
      ppplVar33 = ppplVar2;
      while (ppplVar39 != (long ***)0x0) {
        while (ppplVar33 = ppplVar39, uVar26 < *(ushort *)((long)ppplVar33 + 0x1a)) {
          ppplVar39 = (long ***)*ppplVar33;
          ppplVar43 = ppplVar33;
          if ((long ***)*ppplVar33 == (long ***)0x0) {
            pplVar17 = *ppplVar33;
            goto joined_r0x0071019f7f38;
          }
        }
        if (uVar26 <= *(ushort *)((long)ppplVar33 + 0x1a)) break;
        ppplVar43 = ppplVar33 + 1;
        ppplVar39 = (long ***)*ppplVar43;
      }
      pplVar17 = *ppplVar43;
joined_r0x0071019f7f38:
      if (pplVar17 == (long **)0x0) {
        pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                                           param_8);
        if (pplVar17 == (long **)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
            local_1b0 = (undefined **)&SUB_00000020;
            pppplVar20 = (long ****)&local_1b0;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
            if (((uVar16 & 1) != 0) &&
               (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,
                                                   param_7,param_8), pplVar17 != (long **)0x0))
            goto LAB_71019f7eec;
          }
          pplVar17 = (long **)0x0;
        }
LAB_71019f7eec:
        *(ushort *)((long)pplVar17 + 0x1a) = uVar26;
        *(undefined2 *)((long)pplVar17 + 0x1c) = uVar7;
        pplVar17[2] = (long *)ppplVar33;
        *pplVar17 = (long *)0x0;
        pplVar17[1] = (long *)0x0;
        *ppplVar43 = pplVar17;
        if ((long **)*ppplVar15[100] != (long **)0x0) {
          ppplVar15[100] = (long **)*ppplVar15[100];
          pplVar17 = *ppplVar43;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((long *)ppplVar15[0x65],(long *)pplVar17);
        ppplVar15[0x66] = (long **)((long)ppplVar15[0x66] + 1);
      }
      puVar40 = puVar40 + 2;
    } while (puVar40 != &DAT_7104543c2c);
    puVar40 = &DAT_7104543c2c;
    do {
      uVar26 = puVar40[1];
      uVar7 = *puVar40;
      ppplVar39 = (long ***)*ppplVar2;
      ppplVar43 = ppplVar2;
      ppplVar33 = ppplVar2;
      while (ppplVar39 != (long ***)0x0) {
        while (ppplVar33 = ppplVar39, uVar26 < *(ushort *)((long)ppplVar33 + 0x1a)) {
          ppplVar39 = (long ***)*ppplVar33;
          ppplVar43 = ppplVar33;
          if ((long ***)*ppplVar33 == (long ***)0x0) {
            pplVar17 = *ppplVar33;
            goto joined_r0x0071019f8058;
          }
        }
        if (uVar26 <= *(ushort *)((long)ppplVar33 + 0x1a)) break;
        ppplVar43 = ppplVar33 + 1;
        ppplVar39 = (long ***)*ppplVar43;
      }
      pplVar17 = *ppplVar43;
joined_r0x0071019f8058:
      if (pplVar17 == (long **)0x0) {
        pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                                           param_8);
        if (pplVar17 == (long **)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
            local_1b0 = (undefined **)&SUB_00000020;
            pppplVar20 = (long ****)&local_1b0;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
            if (((uVar16 & 1) != 0) &&
               (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,
                                                   param_7,param_8), pplVar17 != (long **)0x0))
            goto LAB_71019f800c;
          }
          pplVar17 = (long **)0x0;
        }
LAB_71019f800c:
        *(ushort *)((long)pplVar17 + 0x1a) = uVar26;
        *(undefined2 *)((long)pplVar17 + 0x1c) = uVar7;
        pplVar17[2] = (long *)ppplVar33;
        *pplVar17 = (long *)0x0;
        pplVar17[1] = (long *)0x0;
        *ppplVar43 = pplVar17;
        if ((long **)*ppplVar15[100] != (long **)0x0) {
          ppplVar15[100] = (long **)*ppplVar15[100];
          pplVar17 = *ppplVar43;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((long *)ppplVar15[0x65],(long *)pplVar17);
        ppplVar15[0x66] = (long **)((long)ppplVar15[0x66] + 1);
      }
      puVar40 = puVar40 + 2;
    } while (puVar40 != &DAT_7104543c54);
  }
  puVar37 = &DAT_7104543c54;
  do {
    ppplVar33 = ppplVar1;
    ppplVar43 = ppplVar1;
    if ((long ***)*ppplVar1 != (long ***)0x0) {
      ppplVar39 = (long ***)*ppplVar1;
      do {
        while (ppplVar33 = ppplVar39, *puVar37 < *(ushort *)((long)ppplVar33 + 0x1a)) {
          ppplVar39 = (long ***)*ppplVar33;
          ppplVar43 = ppplVar33;
          if ((long ***)*ppplVar33 == (long ***)0x0) {
            pplVar17 = *ppplVar33;
            goto joined_r0x0071019f8188;
          }
        }
        if (*puVar37 <= *(ushort *)((long)ppplVar33 + 0x1a)) break;
        ppplVar43 = ppplVar33 + 1;
        ppplVar39 = (long ***)*ppplVar43;
      } while ((long ***)*ppplVar43 != (long ***)0x0);
    }
    pplVar17 = *ppplVar43;
joined_r0x0071019f8188:
    if (pplVar17 == (long **)0x0) {
      pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                                         param_8);
      if (pplVar17 == (long **)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
          local_1b0 = (undefined **)&SUB_00000020;
          pppplVar20 = (long ****)&local_1b0;
          uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
          if (((uVar16 & 1) != 0) &&
             (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,
                                                 param_7,param_8), pplVar17 != (long **)0x0))
          goto LAB_71019f8138;
        }
        pplVar17 = (long **)0x0;
      }
LAB_71019f8138:
      *(ushort *)((long)pplVar17 + 0x1a) = *puVar37;
      *(ushort *)((long)pplVar17 + 0x1c) = puVar37[1];
      *pplVar17 = (long *)0x0;
      pplVar17[1] = (long *)0x0;
      pplVar17[2] = (long *)ppplVar33;
      *ppplVar43 = pplVar17;
      if ((long **)*ppplVar15[0x67] != (long **)0x0) {
        ppplVar15[0x67] = (long **)*ppplVar15[0x67];
        pplVar17 = *ppplVar43;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((long *)ppplVar15[0x68],(long *)pplVar17);
      ppplVar15[0x69] = (long **)((long)ppplVar15[0x69] + 1);
    }
    puVar37 = puVar37 + 2;
  } while (puVar37 != &DAT_7104543cc4);
  puVar37 = &DAT_7104543cc4;
  do {
    ppplVar33 = ppplVar1;
    ppplVar43 = ppplVar1;
    if ((long ***)*ppplVar1 != (long ***)0x0) {
      ppplVar39 = (long ***)*ppplVar1;
      do {
        while (ppplVar33 = ppplVar39, *puVar37 < *(ushort *)((long)ppplVar33 + 0x1a)) {
          ppplVar39 = (long ***)*ppplVar33;
          ppplVar43 = ppplVar33;
          if ((long ***)*ppplVar33 == (long ***)0x0) {
            pplVar17 = *ppplVar33;
            goto joined_r0x0071019f82b0;
          }
        }
        if (*puVar37 <= *(ushort *)((long)ppplVar33 + 0x1a)) break;
        ppplVar43 = ppplVar33 + 1;
        ppplVar39 = (long ***)*ppplVar43;
      } while ((long ***)*ppplVar43 != (long ***)0x0);
    }
    pplVar17 = *ppplVar43;
joined_r0x0071019f82b0:
    if (pplVar17 == (long **)0x0) {
      pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,param_7,
                                         param_8);
      if (pplVar17 == (long **)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_330 = (undefined **)((ulong)local_330 & 0xffffffff00000000);
          local_1b0 = (undefined **)&SUB_00000020;
          pppplVar20 = (long ****)&local_1b0;
          uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
          if (((uVar16 & 1) != 0) &&
             (pplVar17 = (long **)FUN_710392e290(0x10,0x20,pppplVar20,ppppbVar25,param_5,param_6,
                                                 param_7,param_8), pplVar17 != (long **)0x0))
          goto LAB_71019f8260;
        }
        pplVar17 = (long **)0x0;
      }
LAB_71019f8260:
      *(ushort *)((long)pplVar17 + 0x1a) = *puVar37;
      *(ushort *)((long)pplVar17 + 0x1c) = puVar37[1];
      *pplVar17 = (long *)0x0;
      pplVar17[1] = (long *)0x0;
      pplVar17[2] = (long *)ppplVar33;
      *ppplVar43 = pplVar17;
      if ((long **)*ppplVar15[0x67] != (long **)0x0) {
        ppplVar15[0x67] = (long **)*ppplVar15[0x67];
        pplVar17 = *ppplVar43;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((long *)ppplVar15[0x68],(long *)pplVar17);
      ppplVar15[0x69] = (long **)((long)ppplVar15[0x69] + 1);
    }
    puVar37 = puVar37 + 2;
  } while (puVar37 != (ushort *)&DAT_7104543d48);
  ppplVar15[5] = (long **)FUN_71019f2df0;
  ppplVar15[6] = (long **)0x0;
  ppplVar15[9] = (long **)FUN_71019f2e30;
  ppplVar15[10] = (long **)0x0;
  ppplVar15[7] = (long **)FUN_71019f2e00;
  ppplVar15[8] = (long **)0x0;
  ppplVar15[0xb] = (long **)FUN_71019f40c0;
  ppplVar15[0xc] = (long **)0x0;
  ppplVar15[1] = (long **)0x0;
  ppplVar15[2] = (long **)0x0;
  *(undefined8 *)((long)ppplVar15 + 0xac) = 0;
  *(undefined8 *)((long)ppplVar15 + 0xa4) = 0;
  *(undefined8 *)((long)ppplVar15 + 0x9c) = 0;
  *(undefined8 *)((long)ppplVar15 + 0x94) = 0;
  *(undefined8 *)((long)ppplVar15 + 0x8c) = 0;
  *(undefined8 *)((long)ppplVar15 + 0x84) = 0;
  *(undefined8 *)((long)ppplVar15 + 0x7c) = 0;
  *(undefined8 *)((long)ppplVar15 + 0x74) = 0;
  *(undefined8 *)((long)ppplVar15 + 0x6c) = 0;
  *(undefined8 *)((long)ppplVar15 + 0xb4) = 0xffffffff00000000;
  *(undefined8 *)((long)ppplVar15 + 0xbc) = 0xffffffff00000000;
  *(undefined1 *)((long)ppplVar15 + 0xc4) = 0;
  *(undefined4 *)(ppplVar15 + 0xd) = 0;
  FUN_71019f4120((long *)ppplVar15);
  uVar27 = 0;
  if (DAT_710523d00c != 0) {
    uVar27 = 2;
  }
  *(undefined4 *)((long)ppplVar15 + 0x36c) = uVar27;
  pppplVar14[0x10] = ppplVar15;
  pppplVar14[0x11] = (long ***)0x0;
  pppplVar14[0x12] = (long ***)&DAT_ffffffff00000000;
  *(undefined2 *)(pppplVar14 + 0x13) = 0;
  pppplVar14[0x18] = (long ***)0x0;
  *(undefined4 *)(pppplVar14 + 0x1a) = 0xffffffff;
  *(undefined1 *)((long)pppplVar14 + 0xd4) = 0;
  *(undefined4 *)(pppplVar14 + 0x1b) = 0;
  *(undefined1 *)((long)pppplVar14 + 0xdc) = 1;
  plVar28 = *(long **)(param_1 + 8);
  *(long *****)(param_1 + 8) = pppplVar14;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 8))();
    pppplVar14 = *(long *****)(param_1 + 8);
  }
  pppplVar44 = pppplVar14 + 7;
  if (pppplVar44 != param_2) {
    *pppplVar14[8] = *param_2[1];
    pppplVar14[8][1] = param_2[1][1];
    ppplVar33 = param_2[1];
    ppplVar15 = pppplVar14[8];
    if (ppplVar15 != ppplVar33) {
      *ppplVar15[3] = *ppplVar33[3];
      ppplVar15[3][1] = ppplVar33[3][1];
      ppplVar15[3][2] = ppplVar33[3][2];
      ppplVar15[3][3] = ppplVar33[3][3];
    }
  }
  *(undefined4 *)(pppplVar14 + 0x11) = *(undefined4 *)param_3;
  *(undefined4 *)((long)pppplVar14 + 0x8c) = *(undefined4 *)((long)param_3 + 4);
  *(undefined4 *)(pppplVar14 + 0x12) = *(undefined4 *)(param_3 + 1);
  *(undefined1 *)((long)pppplVar14 + 0x99) = *(undefined1 *)((long)param_3 + 0xd);
  ppppbVar18 = (byte ****)param_4[4];
  if (ppppbVar18 == (byte ****)0x0) {
    local_190 = (long *)0x0;
  }
  else if (param_4 == ppppbVar18) {
    local_190 = &local_1b0;
    (*(code *)(*ppppbVar18)[3])(ppppbVar18,&local_1b0);
  }
  else {
    local_190 = (long *)(*(code *)(*ppppbVar18)[2])();
  }
  FUN_71019f57d0(&local_1b0,(long *)(pppplVar14 + 0x14));
  if (&local_1b0 == local_190) {
    pcVar30 = *(code **)(*local_190 + 0x20);
LAB_71019f84c0:
    (*pcVar30)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar30 = *(code **)(*local_190 + 0x28);
    goto LAB_71019f84c0;
  }
  FUN_7103776640(&local_1b0,(long)pppplVar44,(byte ****)"set_lct_name_select",pppplVar20,ppppbVar25,
                 param_5,param_6,param_7,param_8);
  ppplVar15 = local_1a8;
  if (pppplVar14 + 9 != (long ****)&local_1b0) {
    local_1a8 = (long ***)0x0;
    ppplVar33 = pppplVar14[10];
    pppplVar14[10] = ppplVar15;
    if (ppplVar33 != (long ***)0x0) {
      pplVar17 = ppplVar33[3];
      ppplVar33[2] = (long **)&PTR_FUN_710523d9a8;
      ppplVar33[3] = (long **)0x0;
      if (pplVar17 != (long **)0x0) {
        FUN_710392eb40((ulong)pplVar17);
      }
      FUN_710392eb40((ulong)ppplVar33);
    }
  }
  ppplVar15 = local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (long ***)0x0;
  if (ppplVar15 != (long ***)0x0) {
    pplVar17 = ppplVar15[3];
    ppplVar15[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar15[3] = (long **)0x0;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
    FUN_710392eb40((ulong)ppplVar15);
  }
  if (*(char *)((long)param_3 + 0xc) != '\0') {
    FUN_7103776640(&local_330,(long)pppplVar44,(byte ****)"set_part_help",pppplVar20,ppppbVar25,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_1b0,(long)&local_330,(long ****)"set_txt_icon",pppplVar20,ppppbVar25,
                   param_5,param_6,param_7,param_8);
    ppplVar15 = local_1a8;
    if (pppplVar14 + 0xb != (long ****)&local_1b0) {
      local_1a8 = (long ***)0x0;
      ppplVar33 = pppplVar14[0xc];
      pppplVar14[0xc] = ppplVar15;
      if (ppplVar33 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar33);
      }
    }
    ppplVar15 = local_1a8;
    local_1b0 = &PTR_FUN_710523d9a8;
    local_1a8 = (long ***)0x0;
    if (ppplVar15 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar15);
    }
    uVar16 = local_328;
    local_330 = &PTR_FUN_710523d988;
    local_328 = 0;
    if (uVar16 != 0) {
      uVar19 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar19 != 0) {
        FUN_710392eb40(uVar19);
      }
      FUN_710392eb40(uVar16);
    }
  }
  local_330 = (undefined **)0x0;
  local_328 = 0x4248000041800000;
  local_320 = 0x101013f800000;
  local_316 = 1;
  local_318 = 0;
  local_2e0 = (long *)0x0;
  local_2b0 = (long *)0x0;
  local_280 = (long *)0x0;
  local_250 = (long *)0x0;
  local_220 = (long *)0x0;
  local_30f = 0;
  local_311 = 0;
  local_315 = 0;
  FUN_710337e790((long)&local_330);
  plVar28 = local_2e0;
  local_2e0 = (long *)0x0;
  if (alStack_300 == plVar28) {
    pcVar30 = *(code **)(*plVar28 + 0x20);
LAB_71019f8674:
    (*pcVar30)();
  }
  else if (plVar28 != (long *)0x0) {
    pcVar30 = *(code **)(*plVar28 + 0x28);
    goto LAB_71019f8674;
  }
  pcVar21 = "scroll";
  ppppbVar25 = (byte ****)&local_330;
  local_330 = (undefined **)&DAT_200000000;
  pppplVar20 = pppplVar14;
  FUN_7103781a20((long *)(pppplVar14 + 0xe),pppplVar14 + 9,(byte ****)"scroll",ppppbVar25,pppplVar14
                 ,param_6,param_7,param_8);
  FUN_7103776390(&local_208,pppplVar14[0xe] + 0x38,(long ****)pcVar21,ppppbVar25,pppplVar20,param_6,
                 param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1b0,"player_color_%dp",
                 (ulong)(*(int *)((long)pppplVar14 + 0x8c) + 1),pcVar21,ppppbVar25,pppplVar20,
                 param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,(long)local_200[0],(long)&local_1a8);
  ppplVar15 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d988;
  local_200[0] = (long ***)0x0;
  if (ppplVar15 != (long ***)0x0) {
    pplVar17 = ppplVar15[3];
    ppplVar15[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar15[3] = (long **)0x0;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
    FUN_710392eb40((ulong)ppplVar15);
  }
  (*(code *)(*pppplVar14[0xe])[0xc])(pppplVar14[0xe],0);
  if (*(int *)(pppplVar14 + 0x1a) == -1) {
LAB_71019f8774:
    ppplVar15 = (long ***)0x0;
  }
  else {
    ppplVar15 = (long ***)0x0;
    do {
      if ((long)(int)pppplVar14[6] <= (long)ppplVar15) goto LAB_71019f8774;
      if (pppplVar14[6] <= ppplVar15) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar16 = (long)ppplVar15 + (long)pppplVar14[5];
      ppplVar15 = (long ***)((long)ppplVar15 + 1);
    } while (*(int *)(*(long *)((long)pppplVar14[2] + (uVar16 >> 7 & 0x1fffffffffffff8)) +
                     (uVar16 & 0x3ff) * 4) != *(int *)(pppplVar14 + 0x1a));
  }
  iVar13 = local_330._4_4_;
  if ((int)ppplVar15 <= local_330._4_4_) {
    iVar13 = (int)ppplVar15;
  }
  uVar24 = 1;
  uVar22 = 0;
  FUN_7103783c10((long *)(pppplVar14 + 0xe),iVar13,0,1,pppplVar20,param_6,param_7,param_8);
  iVar13 = *(int *)((long)pppplVar14 + 0x8c);
  FUN_7103776640(&local_340,(long)pppplVar44,(byte ****)"set_lct_name_applet",uVar22,uVar24,
                 pppplVar20,param_6,param_7,param_8);
  ppplVar15 = pppplVar14[0x10];
  if (ppplVar15 + 0x19 != &local_340) {
    *ppplVar15[0x1a] = *local_338;
    ppplVar15[0x1a][1] = local_338[1];
    pplVar17 = ppplVar15[0x1a];
    if (pplVar17 != local_338) {
      *pplVar17[3] = *local_338[3];
      pplVar17[3][1] = local_338[3][1];
      pplVar17[3][2] = local_338[3][2];
      pplVar17[3][3] = local_338[3][3];
    }
  }
  FUN_7103776910(&local_1b0,(long)&local_340,(long ****)"set_txt_name",uVar22,uVar24,pppplVar20,
                 param_6,param_7,param_8);
  ppplVar33 = local_1a8;
  if (ppplVar15 + 0x1c != (long ***)&local_1b0) {
    local_1a8 = (long ***)0x0;
    pplVar17 = ppplVar15[0x1d];
    ppplVar15[0x1d] = (long **)ppplVar33;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  ppplVar33 = local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103776910(&local_1b0,(long)&local_340,(long ****)"set_txt_number",uVar22,uVar24,pppplVar20,
                 param_6,param_7,param_8);
  ppplVar33 = local_1a8;
  if (ppplVar15 + 0x1e != (long ***)&local_1b0) {
    local_1a8 = (long ***)0x0;
    pplVar17 = ppplVar15[0x1f];
    ppplVar15[0x1f] = (long **)ppplVar33;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  ppplVar33 = local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  local_1b0 = (undefined **)0x0;
  local_1a0 = CONCAT17(local_1a0._7_1_,0x1000100000001);
  local_198 = &DAT_41f0000000000000;
  local_1a8 = (long ***)0x101;
  local_190 = (long *)((ulong)local_190 & 0xffffffff00000000);
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  FUN_710337df20((long)&local_1b0);
  plVar28 = local_100;
  local_100 = (long *)0x0;
  if (alStack_120 == plVar28) {
    pcVar30 = *(code **)(*plVar28 + 0x20);
LAB_71019f8968:
    (*pcVar30)();
  }
  else if (plVar28 != (long *)0x0) {
    pcVar30 = *(code **)(*plVar28 + 0x28);
    goto LAB_71019f8968;
  }
  plVar28 = local_a0;
  bVar12 = alStack_c0 == local_a0;
  local_a0 = (long *)0x0;
  if (bVar12) {
    pcVar30 = *(code **)(*plVar28 + 0x20);
LAB_71019f89a8:
    (*pcVar30)();
  }
  else if (plVar28 != (long *)0x0) {
    pcVar30 = *(code **)(*plVar28 + 0x28);
    goto LAB_71019f89a8;
  }
  pcVar21 = "selector_0";
  local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
  ppppbVar25 = (byte ****)&local_1b0;
  local_1a0._0_4_ = CONCAT13(1,(undefined3)local_1a0);
  FUN_7103770b30((long *)(ppplVar15 + 0x1b),&local_340,(long ****)"selector_0",ppppbVar25,pppplVar20
                 ,param_6,param_7,param_8);
  FUN_7103776390(&local_1c0,ppplVar15[0x1b] + 0x3f,(long ****)pcVar21,ppppbVar25,pppplVar20,param_6,
                 param_7,param_8);
  FUN_71003a4ca0((uint *)&local_208,"player_color_%dp",(ulong)(iVar13 + 1),pcVar21,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,local_1b8,(long)local_200);
  uVar16 = local_1b8;
  local_1c0 = &PTR_FUN_710523d988;
  local_1b8 = 0;
  if (uVar16 != 0) {
    uVar19 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar19 != 0) {
      FUN_710392eb40(uVar19);
    }
    FUN_710392eb40(uVar16);
  }
  (*(code *)(*ppplVar15[0x1b])[0xc])(ppplVar15[0x1b],0);
  uVar16 = 0;
  pppplVar44 = (long ****)(ppplVar15 + 0x20);
  do {
    pppplVar23 = (long ****)(uVar16 & 0xffffffff);
    FUN_7103776640(&local_208,(long)&local_340,(byte ****)"set_btn_0_%02d",pppplVar23,ppppbVar25,
                   pppplVar20,param_6,param_7,param_8);
    ppplVar33 = local_200[0];
    if (&local_208 != pppplVar44) {
      local_200[0] = (long ***)0x0;
      ppplVar43 = pppplVar44[1];
      pppplVar44[1] = ppplVar33;
      if (ppplVar43 != (long ***)0x0) {
        pplVar17 = ppplVar43[3];
        ppplVar43[2] = (long **)&PTR_FUN_710523d9a8;
        ppplVar43[3] = (long **)0x0;
        if (pplVar17 != (long **)0x0) {
          FUN_710392eb40((ulong)pplVar17);
        }
        FUN_710392eb40((ulong)ppplVar43);
      }
    }
    ppplVar33 = local_200[0];
    local_208 = (long ***)&PTR_FUN_710523d988;
    local_200[0] = (long ***)0x0;
    if (ppplVar33 != (long ***)0x0) {
      pplVar17 = ppplVar33[3];
      ppplVar33[2] = (long **)&PTR_FUN_710523d9a8;
      ppplVar33[3] = (long **)0x0;
      if (pplVar17 != (long **)0x0) {
        FUN_710392eb40((ulong)pplVar17);
      }
      FUN_710392eb40((ulong)ppplVar33);
    }
    plVar28 = (long *)FUN_710392e290(0x10,8,pppplVar23,ppppbVar25,pppplVar20,param_6,param_7,param_8
                                    );
    if (plVar28 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1c0 = (undefined **)((ulong)local_1c0 & 0xffffffff00000000);
        local_208 = (long ***)&DAT_00000008;
        pppplVar23 = &local_208;
        uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
        if (((uVar19 & 1) != 0) &&
           (plVar28 = (long *)FUN_710392e290(0x10,8,pppplVar23,ppppbVar25,pppplVar20,param_6,param_7
                                             ,param_8), plVar28 != (long *)0x0))
        goto LAB_71019f8b34;
      }
      plVar28 = (long *)0x0;
    }
LAB_71019f8b34:
    *plVar28 = 0;
    pplVar17 = pppplVar44[1][1];
    if (pplVar17 == (long **)0x0) {
      lVar36 = 0;
    }
    else {
      lVar36 = 0;
      if (pplVar17[0xc] != (long *)0x0) {
        lVar36 = FUN_7103796f20((long)pplVar17[0xc],(long)(pplVar17[3] + 0x16));
      }
    }
    *plVar28 = lVar36;
    ppppbVar25 = (byte ****)(uVar16 & 0xffffffff);
    pcVar21 = "set_btn_0_%02d";
    FUN_71037717d0(ppplVar15 + 0x1b,(int)uVar16,"set_btn_0_%02d",ppppbVar25,pppplVar20,param_6,
                   param_7,param_8);
    if (plVar28 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar28);
    }
    uVar16 = uVar16 + 1;
    pppplVar44 = pppplVar44 + 2;
  } while (uVar16 != 0x11);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x20),(long ****)"set_txt",pcVar21,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  ppplVar33 = local_200[0];
  if ((long ****)(ppplVar15 + 0x42) != &local_208) {
    local_200[0] = (long ***)0x0;
    pplVar17 = ppplVar15[0x43];
    ppplVar15[0x43] = (long **)ppplVar33;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x21],0x71043299dc);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x21],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x21],0x71042915df);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x22),(long ****)"set_txt",pcVar21,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  ppplVar33 = local_200[0];
  if ((long ****)(ppplVar15 + 0x44) != &local_208) {
    local_200[0] = (long ***)0x0;
    pplVar17 = ppplVar15[0x45];
    ppplVar15[0x45] = (long **)ppplVar33;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x23],0x71043299dc);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x23],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x23],0x71042915df);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x24),(long ****)"set_txt",pcVar21,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  ppplVar33 = local_200[0];
  if ((long ****)(ppplVar15 + 0x46) != &local_208) {
    local_200[0] = (long ***)0x0;
    pplVar17 = ppplVar15[0x47];
    ppplVar15[0x47] = (long **)ppplVar33;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x25],0x71043299dc);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x25],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x25],0x71042915df);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x26),(long ****)"set_txt",pcVar21,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  ppplVar33 = local_200[0];
  if ((long ****)(ppplVar15 + 0x48) != &local_208) {
    local_200[0] = (long ***)0x0;
    pplVar17 = ppplVar15[0x49];
    ppplVar15[0x49] = (long **)ppplVar33;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x27],0x71043299dc);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x27],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x27],0x71042915df);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x28),(long ****)"set_txt",pcVar21,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  ppplVar33 = local_200[0];
  if ((long ****)(ppplVar15 + 0x4a) != &local_208) {
    local_200[0] = (long ***)0x0;
    pplVar17 = ppplVar15[0x4b];
    ppplVar15[0x4b] = (long **)ppplVar33;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x29],0x71043299dc);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x29],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x29],0x71042915df);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x2a),(long ****)"set_txt",pcVar21,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  ppplVar33 = local_200[0];
  if ((long ****)(ppplVar15 + 0x4c) != &local_208) {
    local_200[0] = (long ***)0x0;
    pplVar17 = ppplVar15[0x4d];
    ppplVar15[0x4d] = (long **)ppplVar33;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x2b],0x71043299dc);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x2b],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x2b],0x71042915df);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x2c),(long ****)"set_txt",pcVar21,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  ppplVar33 = local_200[0];
  if ((long ****)(ppplVar15 + 0x4e) != &local_208) {
    local_200[0] = (long ***)0x0;
    pplVar17 = ppplVar15[0x4f];
    ppplVar15[0x4f] = (long **)ppplVar33;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x2d],0x71043299dc);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x2d],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x2d],0x71042915df);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x2e),(long ****)"set_txt",pcVar21,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  ppplVar33 = local_200[0];
  if ((long ****)(ppplVar15 + 0x50) != &local_208) {
    local_200[0] = (long ***)0x0;
    pplVar17 = ppplVar15[0x51];
    ppplVar15[0x51] = (long **)ppplVar33;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x2f],0x71043299dc);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x2f],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x2f],0x71042915df);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x30),(long ****)"set_txt",pcVar21,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  ppplVar33 = local_200[0];
  if ((long ****)(ppplVar15 + 0x52) != &local_208) {
    local_200[0] = (long ***)0x0;
    pplVar17 = ppplVar15[0x53];
    ppplVar15[0x53] = (long **)ppplVar33;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x31],0x71043299dc);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x31],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x31],0x71042915df);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x32),(long ****)"set_txt",pcVar21,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  ppplVar33 = local_200[0];
  if ((long ****)(ppplVar15 + 0x54) != &local_208) {
    local_200[0] = (long ***)0x0;
    pplVar17 = ppplVar15[0x55];
    ppplVar15[0x55] = (long **)ppplVar33;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x33],0x71043299dc);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x33],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x33],0x71042915df);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x34),(long ****)"set_txt",pcVar21,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  ppplVar33 = local_200[0];
  if ((long ****)(ppplVar15 + 0x56) != &local_208) {
    local_200[0] = (long ***)0x0;
    pplVar17 = ppplVar15[0x57];
    ppplVar15[0x57] = (long **)ppplVar33;
    if (pplVar17 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar17);
    }
  }
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x35],0x71043299dc);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x35],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x35],0x71042915df);
  local_208 = (long ***)0x14224eca7c;
  FUN_7103772070((long)ppplVar15[0x1b],0,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8);
  local_208 = (long ***)0x14224eca7c;
  FUN_7103772070((long)ppplVar15[0x1b],1,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8);
  local_208 = (long ***)0x14224eca7c;
  FUN_7103772070((long)ppplVar15[0x1b],2,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8);
  local_208 = (long ***)0x14224eca7c;
  FUN_7103772070((long)ppplVar15[0x1b],3,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8);
  local_208 = (long ***)0x14224eca7c;
  FUN_7103772070((long)ppplVar15[0x1b],4,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8);
  local_208 = (long ***)0x14224eca7c;
  FUN_7103772070((long)ppplVar15[0x1b],5,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8);
  local_208 = (long ***)0x14224eca7c;
  FUN_7103772070((long)ppplVar15[0x1b],6,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8);
  local_208 = (long ***)0x14224eca7c;
  FUN_7103772070((long)ppplVar15[0x1b],7,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8);
  local_208 = (long ***)0x14224eca7c;
  FUN_7103772070((long)ppplVar15[0x1b],8,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8);
  local_208 = (long ***)0x14224eca7c;
  FUN_7103772070((long)ppplVar15[0x1b],9,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8);
  local_208 = (long ***)0x14224eca7c;
  FUN_7103772070((long)ppplVar15[0x1b],10,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8);
  local_208 = (long ***)0x14224eca7c;
  FUN_7103772070((long)ppplVar15[0x1b],0xb,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8)
  ;
  local_208 = (long ***)0x7fc420ce8;
  FUN_7103772070((long)ppplVar15[0x1b],0xc,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8)
  ;
  local_208 = (long ***)0x151ca6c028;
  FUN_7103772070((long)ppplVar15[0x1b],0xd,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8)
  ;
  local_208 = (long ***)0x7fc420ce8;
  FUN_7103772070((long)ppplVar15[0x1b],0xe,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8)
  ;
  local_208 = (long ***)0x7fc420ce8;
  FUN_7103772070((long)ppplVar15[0x1b],0xf,&local_208,ppppbVar25,pppplVar20,param_6,param_7,param_8)
  ;
  local_208 = (long ***)0x7fc420ce8;
  pppplVar44 = &local_208;
  FUN_7103772070((long)ppplVar15[0x1b],0x10,pppplVar44,ppppbVar25,pppplVar20,param_6,param_7,param_8
                );
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x37],0x71043299dc);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x37],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x37],0x71042915df);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x36),(long ****)"set_txt",pppplVar44,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  FUN_710377a120((long)&local_208,"mel_chara_select_key_space",pppplVar44,ppppbVar25,pppplVar20,
                 param_6,param_7,param_8);
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x39],0x7104307ef5);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x39],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x39],0x710439cd8f);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x3b],0x7104307ef5);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x3b],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x3b],0x71042915df);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x3d],0x7104307ef5);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x3d],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x3d],0x7104400dc2);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x3f],0x7104307ef5);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x3f],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x3f],0x71042915df);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x3e),(long ****)"set_txt",pppplVar44,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  FUN_710377a120((long)&local_208,"mel_chara_select_key_random_nam",pppplVar44,ppppbVar25,pppplVar20
                 ,param_6,param_7,param_8);
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x41],0x7104349d04);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x41],0x71042a294d);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x41],0x71042915df);
  FUN_7103776910(&local_208,(long)(ppplVar15 + 0x40),(long ****)"set_txt",pppplVar44,ppppbVar25,
                 pppplVar20,param_6,param_7,param_8);
  FUN_710377a120((long)&local_208,"mel_chara_select_key_ok",pppplVar44,ppppbVar25,pppplVar20,param_6
                 ,param_7,param_8);
  ppplVar33 = local_200[0];
  local_208 = (long ***)&PTR_FUN_710523d9a8;
  local_200[0] = (long ***)0x0;
  if (ppplVar33 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar33);
  }
  FUN_71019f4420((long)ppplVar15);
  if (ppplVar15[0x1d][2] != (long *)0x0) {
    FUN_71037a2270(ppplVar15[0x1d][2],(ushort *)((long)ppplVar15 + 0x37c),0xffffffff,1);
  }
  pppplVar44 = (long ****)(ulong)*(uint *)(ppplVar15 + 0x6f);
  ppppbVar25 = (byte ****)0xa;
  FUN_710377a310((long)(ppplVar15 + 0x1e),2);
  pcVar21 = "txt_max";
  if (*(int *)(ppplVar15 + 0x6f) < 10) {
    pcVar21 = "txt_entry";
  }
  *(bool *)(ppplVar15 + 0x75) = 9 < *(int *)(ppplVar15 + 0x6f);
  FUN_7103778300(0x3f800000,(long)ppplVar15[0x1a],(long)pcVar21);
  if (*(int *)(ppplVar15 + 0x6f) < 1) {
    uVar26 = 0;
  }
  else {
    uVar26 = *(ushort *)((long)ppplVar15 + (ulong)(*(int *)(ppplVar15 + 0x6f) - 1) * 2 + 0x37c);
  }
  ppplVar33 = (long ***)ppplVar15[0x65];
  if (ppplVar33 != (long ***)0x0) {
    ppplVar43 = ppplVar15 + 0x65;
    do {
      bVar12 = *(ushort *)((long)ppplVar33 + 0x1a) < uVar26;
      if (!bVar12) {
        ppplVar43 = ppplVar33;
      }
      ppplVar33 = (long ***)ppplVar33[bVar12];
    } while (ppplVar33 != (long ***)0x0);
    if ((ppplVar43 != ppplVar15 + 0x65) && (*(ushort *)((long)ppplVar43 + 0x1a) <= uVar26)) {
      uVar26 = *(ushort *)((long)ppplVar43 + 0x1c);
    }
  }
  *(ushort *)(ppplVar15 + 0x73) = uVar26;
  FUN_71019f4970((long)ppplVar15,extraout_x1_22,pppplVar44,ppppbVar25,pppplVar20,param_6,param_7,
                 param_8);
  if (alStack_c0 == local_a0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  else if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x28))();
  }
  if (alStack_f0 == local_d0) {
    pcVar30 = *(code **)(*local_d0 + 0x20);
LAB_71019f96cc:
    (*pcVar30)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_d0 + 0x28);
    goto LAB_71019f96cc;
  }
  if (alStack_120 == local_100) {
    pcVar30 = *(code **)(*local_100 + 0x20);
LAB_71019f96f4:
    (*pcVar30)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar30 = *(code **)(*local_100 + 0x28);
    goto LAB_71019f96f4;
  }
  if (local_150 == local_130) {
    pcVar30 = *(code **)(*local_130 + 0x20);
LAB_71019f9724:
    (*pcVar30)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar30 = *(code **)(*local_130 + 0x28);
    goto LAB_71019f9724;
  }
  if (local_180 == local_160) {
    pcVar30 = *(code **)(*local_160 + 0x20);
LAB_71019f9754:
    (*pcVar30)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar30 = *(code **)(*local_160 + 0x28);
    goto LAB_71019f9754;
  }
  FUN_7103771930((long)pppplVar14[0x10][0x1b],0xe,(long ****)&DAT_00000010,(byte ****)0x0,pppplVar20
                 ,param_6,param_7,param_8);
  FUN_7103771930((long)pppplVar14[0x10][0x1b],0xf,(long ****)&DAT_00000011,(byte ****)0x0,pppplVar20
                 ,param_6,param_7,param_8);
  FUN_7103771930((long)pppplVar14[0x10][0x1b],0x10,(long ****)&DAT_00000012,(byte ****)0x0,
                 pppplVar20,param_6,param_7,param_8);
  pplVar17 = local_338;
  local_340 = (long **)&PTR_FUN_710523d988;
  local_338 = (long **)0x0;
  if (pplVar17 != (long **)0x0) {
    plVar28 = pplVar17[3];
    pplVar17[2] = (long *)&PTR_FUN_710523d9a8;
    pplVar17[3] = (long *)0x0;
    if (plVar28 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar28);
    }
    FUN_710392eb40((ulong)pplVar17);
  }
  if (alStack_240 == local_220) {
    pcVar30 = *(code **)(*local_220 + 0x20);
LAB_71019f97f8:
    (*pcVar30)();
  }
  else if (local_220 != (long *)0x0) {
    pcVar30 = *(code **)(*local_220 + 0x28);
    goto LAB_71019f97f8;
  }
  if (alStack_270 == local_250) {
    pcVar30 = *(code **)(*local_250 + 0x20);
LAB_71019f9828:
    (*pcVar30)();
  }
  else if (local_250 != (long *)0x0) {
    pcVar30 = *(code **)(*local_250 + 0x28);
    goto LAB_71019f9828;
  }
  if (alStack_2a0 == local_280) {
    pcVar30 = *(code **)(*local_280 + 0x20);
LAB_71019f9858:
    (*pcVar30)();
  }
  else if (local_280 != (long *)0x0) {
    pcVar30 = *(code **)(*local_280 + 0x28);
    goto LAB_71019f9858;
  }
  if (alStack_2d0 == local_2b0) {
    pcVar30 = *(code **)(*local_2b0 + 0x20);
  }
  else {
    if (local_2b0 == (long *)0x0) goto LAB_71019f988c;
    pcVar30 = *(code **)(*local_2b0 + 0x28);
  }
  (*pcVar30)();
LAB_71019f988c:
  if (alStack_300 == local_2e0) {
    pcVar30 = *(code **)(*local_2e0 + 0x20);
  }
  else {
    if (local_2e0 == (long *)0x0) {
      return;
    }
    pcVar30 = *(code **)(*local_2e0 + 0x28);
  }
  (*pcVar30)();
  return;
}

