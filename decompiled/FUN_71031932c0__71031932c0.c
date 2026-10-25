// addr:      71031932c0
// offset:    0x31932c0
// name:      FUN_71031932c0
// mangled:   
// signature: ulong __cdecl FUN_71031932c0(undefined1[16] param_1, undefined1[16] param_2, undefined1[16] param_3, undefined1[16] param_4, long * param_5, long param_6, long * * * * * * * * * * param_7, long * * * * * * * * * * param_8, undefined1[16] * param_9, uint * param_10, uint * param_11, ulong param_12)


ulong FUN_71031932c0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                    undefined1 param_4 [16],long *param_5,long param_6,long **********param_7,
                    long **********param_8,undefined1 (*param_9) [16],uint *param_10,uint *param_11,
                    ulong param_12)

{
  long *plVar1;
  float *pfVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool bVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long *plVar21;
  void *pvVar22;
  undefined8 *puVar23;
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
  long **********pppppppppplVar24;
  undefined8 uVar25;
  long ********pppppppplVar26;
  long *********ppppppppplVar27;
  uint *puVar28;
  long lVar29;
  long *********ppppppppplVar30;
  long *plVar31;
  long *plVar32;
  long lVar33;
  ulong *puVar34;
  uint uVar35;
  uint uVar36;
  long *********ppppppppplVar37;
  long lVar38;
  uint uVar39;
  undefined1 *puVar40;
  long lVar41;
  ulong uVar42;
  byte *pbVar43;
  long *plVar44;
  ulong uVar45;
  long *********ppppppppplVar46;
  byte *pbVar47;
  void *pvVar48;
  long **********pppppppppplVar49;
  long *********ppppppppplVar50;
  long lVar51;
  float *pfVar52;
  long lVar53;
  float fVar54;
  float fVar55;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar56;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar57;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 uVar58;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  float fVar59;
  undefined4 uVar60;
  undefined8 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined8 uVar64;
  float fVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  float fVar68;
  undefined1 auVar69 [16];
  byte local_120 [16];
  long *********local_110;
  byte local_108 [16];
  long *********local_f8;
  uint local_f0 [4];
  long *********local_e0;
  long *********local_d8 [2];
  byte *local_c8;
  long *********local_c0;
  long *********ppppppppplStack_b8;
  long *********local_b0;
  
  uVar62 = param_3._0_4_;
  uVar63 = param_3._4_4_;
  uVar64 = param_3._8_8_;
  fVar59 = param_2._0_4_;
  uVar60 = param_2._4_4_;
  uVar61 = param_2._8_8_;
  *param_5 = param_6;
  param_5[1] = (long)*param_7;
  ppppppppplVar27 = param_7[1];
  ppppppppplVar46 = param_7[2];
  ppppppppplVar30 = param_7[4];
  param_5[4] = (long)param_7[3];
  param_5[5] = (long)ppppppppplVar30;
  param_5[2] = (long)ppppppppplVar27;
  param_5[3] = (long)ppppppppplVar46;
  param_5[6] = (long)param_7[2];
  ppppppppplVar27 = param_7[3];
  *(undefined4 *)(param_5 + 8) = 0x10000;
  param_5[7] = (long)ppppppppplVar27;
  puVar28 = *(uint **)(param_6 + 0x340);
  uVar39 = puVar28[3];
  uVar35 = *puVar28 ^ *puVar28 << 0xb;
  uVar35 = uVar35 ^ uVar35 >> 8 ^ uVar39 ^ uVar39 >> 0x13;
  *puVar28 = puVar28[1];
  puVar28[1] = puVar28[2];
  puVar28[2] = uVar39;
  puVar28[3] = uVar35;
  *(uint *)((long)param_5 + 0x44) = uVar35;
  param_5[9] = 0;
  *(undefined4 *)(param_5 + 10) = 0;
  pppppppppplVar24 = param_7;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                           param_10,param_11,param_12);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
      local_c0 = (long *********)&DAT_00000080;
      pppppppppplVar24 = &local_c0;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)pppppppppplVar24,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12),
         puVar19 != (undefined8 *)0x0)) goto LAB_71031933b8;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_71031933b8:
  FUN_7103192970(puVar19,param_5,(long *********)pppppppppplVar24,(byte ****)param_8,
                 (long ****)param_9,(ulong)param_10,(ulong)param_11,param_12);
  param_5[0xb] = (long)puVar19;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)pppppppppplVar24,(byte ****)param_8,
                           (long ****)param_9,param_10,param_11,param_12);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
      local_c0 = (long *********)&DAT_00000010;
      pppppppppplVar24 = &local_c0;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)pppppppppplVar24,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12),
         puVar19 != (undefined8 *)0x0)) goto LAB_710319341c;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_710319341c:
  *puVar19 = param_5;
  *(undefined4 *)(puVar19 + 1) = 0;
  *(undefined2 *)((long)puVar19 + 0xc) = 0;
  param_5[0xc] = (long)puVar19;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0x2a0,(long ****)pppppppppplVar24,(byte ****)param_8,
                           (long ****)param_9,param_10,param_11,param_12);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
      local_c0 = (long *********)0x2a0;
      pppppppppplVar24 = &local_c0;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x2a0,(long ****)pppppppppplVar24,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12),
         puVar19 != (undefined8 *)0x0)) goto LAB_7103193480;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7103193480:
  *(undefined4 *)((long)puVar19 + 0x54) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x8c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x10) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0xc4) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x1e) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0xf4) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x10c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x21) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x104) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x20) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x11c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x23) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x114) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x22) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 300) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x25) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x124) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x24) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x16c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x2d) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x164) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x2c) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x17c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x2f) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x174) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x2e) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x18c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x31) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x184) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x30) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x19c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x33) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x194) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x32) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x1ac) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x35) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x1a4) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x34) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x1bc) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x37) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x1b4) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x36) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x1cc) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x39) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x1c4) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x38) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x20c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x41) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x204) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x40) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x21c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x43) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x214) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x42) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x22c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x45) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x224) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x44) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x23c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x47) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x234) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x46) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x24c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x49) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x244) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x48) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x25c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x4b) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x254) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x4a) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x26c) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x4d) = 0x3f800000;
  *(undefined4 *)((long)puVar19 + 0x264) = 0x3f800000;
  *(undefined4 *)(puVar19 + 0x4c) = 0x3f800000;
  *puVar19 = param_5;
  *(undefined1 *)(puVar19 + 2) = 1;
  *(undefined8 *)((long)puVar19 + 0x14) = 0;
  *(undefined8 *)((long)puVar19 + 0x1c) = 0x3f80000000000000;
  *(undefined1 **)((long)puVar19 + 0x2c) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)puVar19 + 0x24) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)puVar19 + 0x3c) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)puVar19 + 0x34) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)puVar19 + 0x4c) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)puVar19 + 0x44) = &DAT_3f8000003f800000;
  puVar19[0xd] = &DAT_3f8000003f800000;
  *(undefined1 **)((long)puVar19 + 0x84) = &DAT_3f8000003f800000;
  *(undefined1 *)(puVar19 + 0x16) = 1;
  *(undefined8 *)((long)puVar19 + 0xb4) = 0;
  *(undefined8 *)((long)puVar19 + 0xbc) = 0x3f80000000000000;
  puVar19[0x1b] = &DAT_3f8000003f800000;
  puVar19[0x1f] = &DAT_3f8000003f800000;
  *(undefined1 *)(puVar19 + 0x2a) = 1;
  *(undefined4 *)((long)puVar19 + 0x154) = 0;
  puVar19[0x2b] = 0;
  *(undefined1 *)(puVar19 + 0x3e) = 1;
  *(undefined4 *)((long)puVar19 + 500) = 0;
  puVar19[0x3f] = 0;
  puVar19[0x51] = 0;
  puVar19[0x50] = 0;
  puVar19[0x4f] = 0;
  puVar19[0x4e] = 0;
  *(undefined4 *)(puVar19 + 0x52) = 2;
  *(undefined1 *)((long)puVar19 + 0x294) = 0;
  puVar19[0xb] = &DAT_3f8000003f800000;
  puVar19[0xc] = &DAT_3f8000003f800000;
  puVar19[0xe] = &DAT_3f8000003f800000;
  puVar19[0xf] = &DAT_3f8000003f800000;
  puVar19[0x14] = 0;
  puVar19[0x15] = 0;
  puVar19[0x12] = 0;
  puVar19[0x13] = 0;
  puVar19[0x19] = &DAT_3f8000003f800000;
  puVar19[0x1a] = &DAT_3f8000003f800000;
  puVar19[0x1c] = &DAT_3f8000003f800000;
  puVar19[0x1d] = &DAT_3f8000003f800000;
  puVar19[0x28] = 0;
  puVar19[0x29] = 0;
  puVar19[0x26] = 0;
  puVar19[0x27] = 0;
  puVar19[0x3c] = 0;
  puVar19[0x3d] = 0;
  puVar19[0x3a] = 0;
  puVar19[0x3b] = 0;
  param_5[0xd] = (long)puVar19;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0x28,(long ****)pppppppppplVar24,(byte ****)param_8,
                           (long ****)param_9,param_10,param_11,param_12);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
      local_c0 = (long *********)&DAT_00000028;
      pppppppppplVar24 = &local_c0;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,(long ****)pppppppppplVar24,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12),
         puVar19 != (undefined8 *)0x0)) goto LAB_71031936ac;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_71031936ac:
  *puVar19 = param_5;
  puVar19[1] = puVar19 + 1;
  puVar19[3] = 0;
  puVar19[4] = 0;
  puVar19[2] = puVar19 + 1;
  param_5[0xe] = (long)puVar19;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0x30,(long ****)pppppppppplVar24,(byte ****)param_8,
                           (long ****)param_9,param_10,param_11,param_12);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
      local_c0 = (long *********)&DAT_00000030;
      pppppppppplVar24 = &local_c0;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x30,(long ****)pppppppppplVar24,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12),
         puVar19 != (undefined8 *)0x0)) goto LAB_7103193714;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7103193714:
  *(undefined2 *)(puVar19 + 5) = 0;
  puVar19[3] = 0;
  puVar19[4] = 0;
  puVar19[2] = puVar19 + 1;
  *puVar19 = param_5;
  puVar19[1] = puVar19 + 1;
  uVar18 = *(undefined4 *)(param_5[6] + 0xe0);
  *(undefined4 *)(puVar19 + 4) = uVar18;
  *(undefined4 *)((long)puVar19 + 0x24) = uVar18;
  *(undefined2 *)(puVar19 + 5) = 1;
  param_5[0xf] = (long)puVar19;
  plVar21 = (long *)FUN_710392e290(0x10,0x70,(long ****)pppppppppplVar24,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12);
  uVar25 = extraout_x1;
  if (plVar21 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
      local_c0 = (long *********)&DAT_00000070;
      pppppppppplVar24 = &local_c0;
      auVar69 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
      uVar25 = auVar69._8_8_;
      if (((auVar69._0_8_ & 1) != 0) &&
         (plVar21 = (long *)FUN_710392e290(0x10,0x70,(long ****)pppppppppplVar24,(byte ****)param_8,
                                           (long ****)param_9,param_10,param_11,param_12),
         uVar25 = extraout_x1_00, plVar21 != (long *)0x0)) goto LAB_71031937a0;
    }
    plVar21 = (long *)0x0;
  }
LAB_71031937a0:
  *plVar21 = (long)param_5;
  *(undefined1 *)(plVar21 + 1) = 1;
  plVar21[2] = 0;
  plVar21[5] = 0;
  plVar21[10] = 0;
  *(undefined4 *)(plVar21 + 0xb) = 0;
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[3] = 0;
  plVar21[4] = 0;
  plVar21[8] = (long)(plVar21 + 8);
  plVar21[9] = (long)(plVar21 + 8);
  plVar21[0xc] = 0;
  plVar21[0xd] = 0;
  lVar29 = param_5[7];
  puVar34 = *(ulong **)(lVar29 + 0xe0);
  puVar4 = *(ulong **)(lVar29 + 0xe8);
  if (puVar34 != puVar4) {
    do {
      if ((*puVar34 & 0xffffffffff) != 0) {
        for (plVar31 = *(long **)(*(long *)(*param_5 + 0x310) + 0xd0);
            plVar31 != *(long **)(*(long *)(*param_5 + 0x310) + 0xd8); plVar31 = plVar31 + 2) {
          if ((*(uint *)(plVar31 + 1) < 2) &&
             (lVar29 = *plVar31, (*puVar34 & 0xffffffffff) == *(ulong *)(lVar29 + 0x68)))
          goto LAB_7103193848;
        }
      }
      lVar29 = 0;
LAB_7103193848:
      plVar31 = (long *)plVar21[3];
      if (plVar31 < (long *)plVar21[4]) {
        *plVar31 = lVar29;
        plVar21[3] = plVar21[3] + 8;
      }
      else {
        pvVar48 = (void *)plVar21[2];
        pppppppppplVar49 = (long **********)((long)plVar31 - (long)pvVar48);
        uVar20 = ((long)pppppppppplVar49 >> 3) + 1;
        if (uVar20 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar33 = plVar21[4] - (long)pvVar48;
        if ((ulong)(lVar33 >> 3) < 0xfffffffffffffff) {
          uVar45 = lVar33 >> 2;
          if (uVar20 <= uVar45) {
            uVar20 = uVar45;
          }
          if (uVar20 != 0) {
            if (uVar20 >> 0x3d == 0) goto LAB_71031938b8;
            goto LAB_7103195140;
          }
          pvVar22 = (void *)0x0;
        }
        else {
          uVar20 = 0x1fffffffffffffff;
LAB_71031938b8:
          ppppppppplVar27 = (long *********)(uVar20 * 8);
          if (ppppppppplVar27 == (long *********)0x0) {
            ppppppppplVar27 = (long *********)0x1;
          }
          pvVar22 = (void *)FUN_710392e290(0x10,ppppppppplVar27,(long ****)pppppppppplVar24,
                                           (byte ****)param_8,(long ****)param_9,param_10,param_11,
                                           param_12);
          uVar25 = extraout_x1_01;
          if (pvVar22 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
              pppppppppplVar24 = &local_c0;
              local_c0 = ppppppppplVar27;
              auVar69 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
              uVar25 = auVar69._8_8_;
              if (((auVar69._0_8_ & 1) != 0) &&
                 (pvVar22 = (void *)FUN_710392e290(0x10,ppppppppplVar27,(long ****)pppppppppplVar24,
                                                   (byte ****)param_8,(long ****)param_9,param_10,
                                                   param_11,param_12), uVar25 = extraout_x1_02,
                 pvVar22 != (void *)0x0)) goto LAB_7103193920;
            }
            pvVar22 = (void *)0x0;
          }
        }
LAB_7103193920:
        plVar31 = (long *)((long)pvVar22 + ((long)pppppppppplVar49 >> 3) * 8);
        *plVar31 = lVar29;
        if (0 < (long)pppppppppplVar49) {
          memcpy(pvVar22,pvVar48,(size_t)pppppppppplVar49);
          uVar25 = extraout_x1_03;
          pppppppppplVar24 = pppppppppplVar49;
        }
        plVar21[2] = (long)pvVar22;
        plVar21[3] = (long)(plVar31 + 1);
        plVar21[4] = (long)((long)pvVar22 + uVar20 * 8);
        if (pvVar48 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar48);
          uVar25 = extraout_x1_04;
        }
      }
      puVar34 = puVar34 + 3;
    } while (puVar34 != puVar4);
    lVar29 = param_5[7];
  }
  puVar34 = *(ulong **)(lVar29 + 0xc0);
  puVar4 = *(ulong **)(lVar29 + 200);
joined_r0x007103193970:
  if (puVar34 != puVar4) {
    do {
      if ((*puVar34 & 0xffffffffff) != 0) {
        for (plVar31 = *(long **)(*(long *)(*param_5 + 0x310) + 0xd0);
            plVar31 != *(long **)(*(long *)(*param_5 + 0x310) + 0xd8); plVar31 = plVar31 + 2) {
          if ((*(uint *)(plVar31 + 1) < 2) &&
             (lVar29 = *plVar31, (*puVar34 & 0xffffffffff) == *(ulong *)(lVar29 + 0x68)))
          goto LAB_71031939e0;
        }
      }
      lVar29 = 0;
LAB_71031939e0:
      plVar31 = (long *)plVar21[6];
      if ((long *)plVar21[7] <= plVar31) goto code_r0x0071031939ec;
      *plVar31 = lVar29;
      plVar21[6] = plVar21[6] + 8;
      puVar34 = puVar34 + 2;
      if (puVar34 == puVar4) break;
    } while( true );
  }
  plVar31 = *(long **)(*(long *)(*param_5 + 0x310) + 0xd0);
  plVar32 = *(long **)(*(long *)(*param_5 + 0x310) + 0xd8);
  if (plVar31 == plVar32) {
LAB_7103193b30:
    while (plVar31 != plVar32) {
      lVar29 = *plVar31;
      plVar44 = plVar31;
      if (lVar29 != 0) {
        *(undefined1 *)(lVar29 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar29 + 0x108),uVar25,(long ****)pppppppppplVar24,
                       (byte ****)param_8,(long ****)param_9,param_10,param_11,param_12);
        *(byte *)(lVar29 + 0x118) = *(byte *)(lVar29 + 0x118) | 1;
        uVar25 = extraout_x1_09;
      }
      do {
        plVar31 = plVar44 + 2;
        if (plVar31 == plVar32) goto LAB_7103193b80;
        plVar1 = plVar44 + 3;
        plVar44 = plVar31;
      } while ((int)*plVar1 - 2U < 3);
    }
  }
  else {
    iVar6 = (int)plVar31[1];
    while( true ) {
      if (2 < iVar6 - 2U) goto LAB_7103193b30;
      if (plVar32 == plVar31 + 2) break;
      iVar6 = (int)plVar31[3];
      plVar31 = plVar31 + 2;
    }
  }
LAB_7103193b80:
  uVar20 = *(ulong *)(((long *)*plVar21)[7] + 0x68) & 0xffffffffff;
  if (uVar20 == 0) {
LAB_7103193bd0:
    plVar21[0xd] = 0;
  }
  else {
    lVar29 = *(long *)(*(long *)*plVar21 + 0x310);
    plVar31 = *(long **)(lVar29 + 0xd0);
    while( true ) {
      if (plVar31 == *(long **)(lVar29 + 0xd8)) goto LAB_7103193bd0;
      if ((*(uint *)(plVar31 + 1) < 2) && (lVar33 = *plVar31, uVar20 == *(ulong *)(lVar33 + 0x68)))
      break;
      plVar31 = plVar31 + 2;
    }
    plVar21[0xd] = lVar33;
    if (lVar33 == 0) {
LAB_7103195058:
      if (lVar33 != 0) goto LAB_710319505c;
    }
    else {
      if (*(char *)(lVar33 + 0xe0) != '\0') {
        (**(code **)(**(long **)(lVar33 + 0x90) + 0x170))(*(long **)(lVar33 + 0x90),0);
        lVar33 = plVar21[0xd];
        uVar25 = extraout_x1_18;
        goto LAB_7103195058;
      }
LAB_710319505c:
      *(undefined1 *)(lVar33 + 0x110) = 1;
      FUN_71025e9d50((long *)(lVar33 + 0x108),uVar25,(long ****)pppppppppplVar24,(byte ****)param_8,
                     (long ****)param_9,param_10,param_11,param_12);
      lVar29 = plVar21[0xd];
      if (lVar29 != 0) {
        *(byte *)(lVar29 + 0x118) = *(byte *)(lVar29 + 0x118) & 0xfe;
      }
    }
  }
  param_5[0x10] = (long)plVar21;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0x60,(long ****)pppppppppplVar24,(byte ****)param_8,
                           (long ****)param_9,param_10,param_11,param_12);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
      local_c0 = (long *********)&DAT_00000060;
      pppppppppplVar24 = &local_c0;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x60,(long ****)pppppppppplVar24,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12),
         puVar19 != (undefined8 *)0x0)) goto LAB_7103193c34;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7103193c34:
  FUN_71031a9320(puVar19,param_5,(long ****)pppppppppplVar24,(byte ****)param_8,(long ****)param_9,
                 param_10,param_11,param_12);
  param_5[0x11] = (long)puVar19;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0x40,(long ****)pppppppppplVar24,(byte ****)param_8,
                           (long ****)param_9,param_10,param_11,param_12);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
      local_c0 = (long *********)&DAT_00000040;
      pppppppppplVar24 = &local_c0;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x40,(long ****)pppppppppplVar24,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12),
         puVar19 != (undefined8 *)0x0)) goto LAB_7103193c98;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7103193c98:
  *puVar19 = param_5;
  *(undefined4 *)(puVar19 + 1) = 0;
  puVar19[6] = 0;
  puVar19[7] = 0;
  puVar19[4] = 0;
  puVar19[5] = 0;
  puVar19[2] = 0;
  puVar19[3] = 0;
  param_5[0x12] = (long)puVar19;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)pppppppppplVar24,(byte ****)param_8,
                           (long ****)param_9,param_10,param_11,param_12);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
      local_c0 = (long *********)&DAT_00000088;
      pppppppppplVar24 = &local_c0;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)pppppppppplVar24,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12),
         puVar19 != (undefined8 *)0x0)) goto LAB_7103193d0c;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7103193d0c:
  *puVar19 = param_5;
  *(undefined1 *)(puVar19 + 1) = 0;
  *(undefined8 *)((long)puVar19 + 0xc) = 0;
  *(undefined1 *)((long)puVar19 + 0x14) = 1;
  puVar23 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)pppppppppplVar24,(byte ****)param_8,
                           (long ****)param_9,param_10,param_11,param_12);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
      local_c0 = (long *********)&SUB_00000020;
      pppppppppplVar24 = &local_c0;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
      if (((uVar20 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)pppppppppplVar24,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12),
         puVar23 != (undefined8 *)0x0)) goto LAB_7103193d74;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_7103193d74:
  *puVar23 = param_5;
  puVar23[1] = 0x75bcd1500000000;
  puVar23[2] = 0x1f123bb5159a55e5;
  *(undefined4 *)(puVar23 + 3) = 0x5491333;
  puVar19[3] = puVar23;
  puVar19[4] = 0;
  puVar19[0xf] = 0;
  puVar19[0x10] = 0;
  puVar19[0xd] = 0;
  puVar19[0xe] = 0;
  puVar19[0xb] = 0;
  puVar19[0xc] = 0;
  puVar19[9] = 0;
  puVar19[10] = 0;
  puVar19[7] = 0;
  puVar19[8] = 0;
  puVar19[5] = 0;
  puVar19[6] = 0;
  param_5[0x13] = (long)puVar19;
  plVar21 = (long *)FUN_710392e290(0x10,0x40,(long ****)pppppppppplVar24,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12);
  if (plVar21 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
      local_c0 = (long *********)&DAT_00000040;
      pppppppppplVar24 = &local_c0;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
      if (((uVar20 & 1) != 0) &&
         (plVar21 = (long *)FUN_710392e290(0x10,0x40,(long ****)pppppppppplVar24,(byte ****)param_8,
                                           (long ****)param_9,param_10,param_11,param_12),
         plVar21 != (long *)0x0)) goto LAB_7103193e1c;
    }
    plVar21 = (long *)0x0;
  }
LAB_7103193e1c:
  *plVar21 = (long)param_5;
  *(undefined2 *)((long)plVar21 + 0x1c) = 0;
  *(undefined8 *)((long)plVar21 + 0x14) = 0;
  plVar21[5] = 0;
  *(undefined4 *)((long)plVar21 + 0x24) = 0;
  local_c0 = (long *********)(plVar21 + 4);
  *(undefined4 *)local_c0 = 0;
  lVar29 = *(long *)(**(long **)(*param_5 + 0x338) + 8);
  if (lVar29 == 0) {
    uVar18 = 0xffffffff;
    plVar31 = param_5;
  }
  else {
    pppppppppplVar24 = (long **********)0x0;
    uVar18 = FUN_7102405040(lVar29,&local_c0,0,(byte ****)param_8,(long ****)param_9,param_10,
                            param_11,param_12);
    plVar31 = (long *)*plVar21;
  }
  *(undefined4 *)(plVar21 + 2) = uVar18;
  uVar18 = *(undefined4 *)(plVar31[6] + 0x358);
  *(undefined2 *)((long)plVar21 + 0x1c) = 0;
  *(undefined4 *)((long)plVar21 + 0x14) = uVar18;
  *(undefined4 *)(plVar21 + 3) = 0;
  *(undefined4 *)(plVar21 + 6) = 0x8e;
  param_5[0x14] = (long)plVar21;
  plVar21 = (long *)FUN_710392e290(0x10,0x170,(long ****)pppppppppplVar24,(byte ****)param_8,
                                   (long ****)param_9,param_10,param_11,param_12);
  if (plVar21 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
      local_c0 = (long *********)&DAT_00000170;
      pppppppppplVar24 = &local_c0;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
      if (((uVar20 & 1) != 0) &&
         (plVar21 = (long *)FUN_710392e290(0x10,0x170,(long ****)pppppppppplVar24,(byte ****)param_8
                                           ,(long ****)param_9,param_10,param_11,param_12),
         plVar21 != (long *)0x0)) goto LAB_7103193eec;
    }
    plVar21 = (long *)0x0;
  }
LAB_7103193eec:
  FUN_7103196ef0(plVar21,(long)param_5,(long ****)pppppppppplVar24,(byte ****)param_8,
                 (long ****)param_9,param_10,param_11,param_12);
  param_5[0x15] = (long)plVar21;
  ppppppppplStack_b8 = (long *********)0x0;
  local_b0 = (long *********)0x0;
  local_c0 = (long *********)0x0;
  puVar34 = *(ulong **)(param_5[6] + 0x20);
  puVar4 = *(ulong **)(param_5[6] + 0x28);
  uVar25 = extraout_x1_10;
  if (puVar34 != puVar4) {
    fVar65 = 2.4;
    uVar66 = 0;
    do {
      fVar68 = *(float *)(puVar34 + 1);
      fVar54 = *(float *)((long)puVar34 + 0xc);
      fVar55 = *(float *)(puVar34 + 2);
      uVar18 = *(undefined4 *)((long)puVar34 + 0x14);
      if ((*puVar34 & 0xffffffffff) == 0x486bb9144) {
        if (fVar68 <= 0.04045) {
          fVar68 = fVar68 / 12.92;
        }
        else {
          uVar60 = 0;
          fVar59 = fVar65;
          uVar67 = uVar66;
          fVar68 = powf((fVar68 + 0.055) / 1.055,2.4);
          uVar25 = extraout_x1_11;
          uVar61 = uVar66;
          uVar66 = uVar67;
        }
        if (fVar54 <= 0.04045) {
          fVar54 = fVar54 / 12.92;
        }
        else {
          uVar60 = 0;
          fVar59 = fVar65;
          uVar67 = uVar66;
          fVar54 = powf((fVar54 + 0.055) / 1.055,2.4);
          uVar25 = extraout_x1_12;
          uVar61 = uVar66;
          uVar66 = uVar67;
        }
        if (fVar55 <= 0.04045) {
          fVar55 = fVar55 / 12.92;
        }
        else {
          uVar60 = 0;
          fVar59 = fVar65;
          uVar67 = uVar66;
          fVar55 = powf((fVar55 + 0.055) / 1.055,2.4);
          uVar25 = extraout_x1_13;
          uVar61 = uVar66;
          uVar66 = uVar67;
        }
      }
      ppppppppplVar27 = ppppppppplStack_b8;
      ppppppppplVar46 = local_c0;
      if (ppppppppplStack_b8 == local_b0) {
        lVar29 = (long)ppppppppplStack_b8 - (long)local_c0 >> 4;
        uVar20 = lVar29 + 1;
        if (uVar20 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_b0 - (long)local_c0 >> 4) < 0x7ffffffffffffff) {
          uVar45 = (long)local_b0 - (long)local_c0 >> 3;
          if (uVar20 <= uVar45) {
            uVar20 = uVar45;
          }
          if (uVar20 != 0) {
            if (uVar20 >> 0x3c == 0) goto LAB_7103194050;
LAB_7103195140:
                    /* WARNING: Subroutine does not return */
            abort();
          }
LAB_71031940a8:
          lVar33 = 0;
        }
        else {
          uVar20 = 0xfffffffffffffff;
LAB_7103194050:
          ppppppppplVar30 = (long *********)(uVar20 * 0x10);
          if (ppppppppplVar30 == (long *********)0x0) {
            ppppppppplVar30 = (long *********)0x1;
          }
          lVar33 = FUN_710392e290(0x10,ppppppppplVar30,(long ****)pppppppppplVar24,
                                  (byte ****)param_8,(long ****)param_9,param_10,param_11,param_12);
          uVar25 = extraout_x1_14;
          if (lVar33 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_f0[0] = 0;
              pppppppppplVar24 = local_d8;
              local_d8[0] = ppppppppplVar30;
              auVar69 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_f0);
              uVar25 = auVar69._8_8_;
              if (((auVar69._0_8_ & 1) != 0) &&
                 (lVar33 = FUN_710392e290(0x10,ppppppppplVar30,(long ****)pppppppppplVar24,
                                          (byte ****)param_8,(long ****)param_9,param_10,param_11,
                                          param_12), uVar25 = extraout_x1_15, lVar33 != 0))
              goto LAB_71031940ac;
            }
            goto LAB_71031940a8;
          }
        }
LAB_71031940ac:
        ppppppppplVar30 = (long *********)(lVar33 + lVar29 * 0x10);
        local_b0 = (long *********)(lVar33 + uVar20 * 0x10);
        ppppppppplStack_b8 = ppppppppplVar30 + 2;
        *(float *)ppppppppplVar30 = fVar68;
        *(float *)((long)ppppppppplVar30 + 4) = fVar54;
        *(float *)(ppppppppplVar30 + 1) = fVar55;
        *(undefined4 *)((long)ppppppppplVar30 + 0xc) = uVar18;
        if ((long)ppppppppplVar27 - (long)ppppppppplVar46 != 0) {
          uVar45 = ((long)ppppppppplVar27 - (long)ppppppppplVar46) - 0x10;
          uVar42 = uVar45 >> 4;
          uVar35 = (int)uVar42 + 1;
          uVar20 = (ulong)uVar35 & 7;
          if ((uVar35 & 7) != 0) {
            lVar53 = -uVar20;
            ppppppppplVar37 = ppppppppplVar27;
            do {
              ppppppppplVar30[-1] = ppppppppplVar37[-1];
              lVar53 = lVar53 + 1;
              ppppppppplVar30[-2] = ppppppppplVar37[-2];
              ppppppppplVar30 = ppppppppplVar30 + -2;
              ppppppppplVar37 = ppppppppplVar37 + -2;
            } while (lVar53 != 0);
            ppppppppplVar30 = (long *********)(lVar33 + (lVar29 - uVar20) * 0x10);
            ppppppppplVar27 = ppppppppplVar27 + uVar20 * -2;
          }
          if (0x6f < uVar45) {
            puVar40 = (undefined1 *)((long)ppppppppplVar27 + (-0x80 - (long)ppppppppplVar46));
            ppppppppplVar37 = ppppppppplVar30;
            ppppppppplVar50 = ppppppppplVar27;
            if (((uint)puVar40 >> 7 & 1) == 0) {
              ppppppppplVar30[-1] = ppppppppplVar27[-1];
              ppppppppplVar30[-2] = ppppppppplVar27[-2];
              ppppppppplVar30[-3] = ppppppppplVar27[-3];
              ppppppppplVar30[-4] = ppppppppplVar27[-4];
              ppppppppplVar30[-5] = ppppppppplVar27[-5];
              ppppppppplVar30[-6] = ppppppppplVar27[-6];
              ppppppppplVar30[-7] = ppppppppplVar27[-7];
              ppppppppplVar30[-8] = ppppppppplVar27[-8];
              ppppppppplVar30[-9] = ppppppppplVar27[-9];
              ppppppppplVar30[-10] = ppppppppplVar27[-10];
              pppppppplVar26 = ppppppppplVar27[-0xb];
              ppppppppplVar30[-0xc] = ppppppppplVar27[-0xc];
              ppppppppplVar30[-0xb] = pppppppplVar26;
              pppppppplVar26 = ppppppppplVar27[-0xd];
              ppppppppplVar30[-0xe] = ppppppppplVar27[-0xe];
              ppppppppplVar30[-0xd] = pppppppplVar26;
              ppppppppplVar50 = ppppppppplVar27 + -0x10;
              pppppppplVar26 = ppppppppplVar27[-0xf];
              ppppppppplVar37 = ppppppppplVar30 + -0x10;
              *ppppppppplVar37 = *ppppppppplVar50;
              ppppppppplVar30[-0xf] = pppppppplVar26;
            }
            if ((undefined1 *)0x7f < puVar40) {
              ppppppppplVar37 = ppppppppplVar37 + -0x10;
              do {
                ppppppppplVar37[0xf] = ppppppppplVar50[-1];
                ppppppppplVar37[0xe] = ppppppppplVar50[-2];
                ppppppppplVar37[0xd] = ppppppppplVar50[-3];
                ppppppppplVar37[0xc] = ppppppppplVar50[-4];
                ppppppppplVar37[0xb] = ppppppppplVar50[-5];
                ppppppppplVar37[10] = ppppppppplVar50[-6];
                ppppppppplVar37[9] = ppppppppplVar50[-7];
                ppppppppplVar37[8] = ppppppppplVar50[-8];
                ppppppppplVar37[7] = ppppppppplVar50[-9];
                ppppppppplVar37[6] = ppppppppplVar50[-10];
                pppppppplVar26 = ppppppppplVar50[-0xb];
                ppppppppplVar37[4] = ppppppppplVar50[-0xc];
                ppppppppplVar37[5] = pppppppplVar26;
                pppppppplVar26 = ppppppppplVar50[-0xd];
                ppppppppplVar37[2] = ppppppppplVar50[-0xe];
                ppppppppplVar37[3] = pppppppplVar26;
                pppppppplVar26 = ppppppppplVar50[-0xf];
                *ppppppppplVar37 = ppppppppplVar50[-0x10];
                ppppppppplVar37[1] = pppppppplVar26;
                pppppppplVar26 = ppppppppplVar50[-0x11];
                ppppppppplVar37[-2] = ppppppppplVar50[-0x12];
                ppppppppplVar37[-1] = pppppppplVar26;
                pppppppplVar26 = ppppppppplVar50[-0x13];
                ppppppppplVar37[-4] = ppppppppplVar50[-0x14];
                ppppppppplVar37[-3] = pppppppplVar26;
                pppppppplVar26 = ppppppppplVar50[-0x15];
                ppppppppplVar37[-6] = ppppppppplVar50[-0x16];
                ppppppppplVar37[-5] = pppppppplVar26;
                pppppppplVar26 = ppppppppplVar50[-0x17];
                ppppppppplVar37[-8] = ppppppppplVar50[-0x18];
                ppppppppplVar37[-7] = pppppppplVar26;
                pppppppplVar26 = ppppppppplVar50[-0x19];
                ppppppppplVar37[-10] = ppppppppplVar50[-0x1a];
                ppppppppplVar37[-9] = pppppppplVar26;
                pppppppplVar26 = ppppppppplVar50[-0x1b];
                ppppppppplVar37[-0xc] = ppppppppplVar50[-0x1c];
                ppppppppplVar37[-0xb] = pppppppplVar26;
                pppppppplVar26 = ppppppppplVar50[-0x1d];
                ppppppppplVar37[-0xe] = ppppppppplVar50[-0x1e];
                ppppppppplVar37[-0xd] = pppppppplVar26;
                ppppppppplVar27 = ppppppppplVar50 + -0x20;
                pppppppplVar26 = ppppppppplVar50[-0x1f];
                ppppppppplVar37[-0x10] = *ppppppppplVar27;
                ppppppppplVar37[-0xf] = pppppppplVar26;
                ppppppppplVar37 = ppppppppplVar37 + -0x20;
                ppppppppplVar50 = ppppppppplVar27;
              } while (ppppppppplVar46 != ppppppppplVar27);
            }
          }
          ppppppppplVar30 = (long *********)(lVar33 + (lVar29 + ~uVar42) * 0x10);
          ppppppppplVar46 = local_c0;
        }
        local_c0 = ppppppppplVar30;
        if (ppppppppplVar46 != (long *********)0x0) {
          FUN_710392eb40((ulong)ppppppppplVar46);
          uVar25 = extraout_x1_16;
        }
      }
      else {
        *(float *)ppppppppplStack_b8 = fVar68;
        *(float *)((long)ppppppppplStack_b8 + 4) = fVar54;
        *(float *)(ppppppppplStack_b8 + 1) = fVar55;
        *(undefined4 *)((long)ppppppppplStack_b8 + 0xc) = uVar18;
        ppppppppplStack_b8 = ppppppppplStack_b8 + 2;
      }
      puVar34 = puVar34 + 3;
    } while (puVar34 != puVar4);
    if (local_c0 != (long *********)0x0) {
      ppppppppplStack_b8 = local_c0;
      FUN_710392eb40((ulong)local_c0);
      uVar25 = extraout_x1_17;
    }
  }
  plVar21 = (long *)param_5[0x10];
  uVar18 = 5;
  if (*(char *)param_7 != '\0') {
    uVar18 = 0;
  }
  *(undefined4 *)((long)param_5 + 0x4c) = uVar18;
  plVar31 = (long *)*plVar21;
  uVar45 = (ulong)*(uint *)((long)param_7 + 4);
  lVar29 = plVar31[7];
  uVar20 = (*(long *)(lVar29 + 0x28) - *(long *)(lVar29 + 0x20) >> 3) * -0x5555555555555555;
  if (uVar45 <= uVar20 && uVar20 - uVar45 != 0) {
    *(uint *)(plVar21 + 0xb) = *(uint *)((long)param_7 + 4);
    pbVar47 = (byte *)(*(long *)(plVar31[7] + 0x20) + uVar45 * 0x18);
    if ((*pbVar47 & 1) == 0) {
      pbVar43 = pbVar47 + 1;
      bVar7 = *pbVar43;
joined_r0x00710319432c:
      if (bVar7 == 0) goto LAB_71031943b8;
      uVar35 = (uint)bVar7;
      plVar32 = *(long **)(*(long *)(*plVar31 + 0x310) + 0xd0);
      plVar31 = *(long **)(*(long *)(*plVar31 + 0x310) + 0xd8);
      if (plVar32 == plVar31) goto LAB_71031943b8;
      uVar20 = 0;
      uVar39 = 0xffffffff;
      do {
        pbVar43 = pbVar43 + 1;
        uVar36 = uVar35 + 0x20;
        if (0x19 < uVar35 - 0x41) {
          uVar36 = uVar35;
        }
        uVar39 = (&DAT_7104754084)[(uVar36 ^ uVar39) & 0xff] ^ uVar39 >> 8;
        uVar35 = (uint)*pbVar43;
        uVar20 = uVar20 + 0x100000000;
      } while (uVar35 != 0);
      while ((1 < *(uint *)(plVar32 + 1) ||
             (lVar29 = *plVar32,
             (uVar20 & 0xff00000000 | (ulong)~uVar39) != *(ulong *)(lVar29 + 0x68)))) {
        plVar32 = plVar32 + 2;
        if (plVar31 == plVar32) goto LAB_71031943b8;
      }
      plVar21[0xc] = lVar29;
      if (lVar29 != 0) {
        *(undefined1 *)(lVar29 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar29 + 0x108),uVar25,(long ****)pppppppppplVar24,
                       (byte ****)param_8,(long ****)param_9,param_10,param_11,param_12);
        lVar29 = plVar21[0xc];
        if (lVar29 != 0) {
          *(byte *)(lVar29 + 0x118) = *(byte *)(lVar29 + 0x118) & 0xfe;
        }
      }
    }
    else {
      pbVar43 = *(byte **)(*(long *)(plVar31[7] + 0x20) + uVar45 * 0x18 + 0x10);
      if (pbVar43 != (byte *)0x0) {
        bVar7 = *pbVar43;
        goto joined_r0x00710319432c;
      }
LAB_71031943b8:
      plVar21[0xc] = 0;
    }
    lVar29 = *(long *)(*(long *)*plVar21 + 0x318);
    std::operator+((ulong *)&local_c0,pbVar47,"_render_param",(long ****)pppppppppplVar24,
                   (byte ****)param_8,(long ****)param_9,param_10,param_11,param_12);
    std::operator+((ulong *)local_d8,pbVar47,"_light",(long ****)pppppppppplVar24,(byte ****)param_8
                   ,(long ****)param_9,param_10,param_11,param_12);
    std::operator+((ulong *)local_f0,pbVar47,"_stage",(long ****)pppppppppplVar24,(byte ****)param_8
                   ,(long ****)param_9,param_10,param_11,param_12);
    std::operator+((ulong *)local_108,pbVar47,"_chara",(long ****)pppppppppplVar24,
                   (byte ****)param_8,(long ****)param_9,param_10,param_11,param_12);
    std::operator+((ulong *)local_120,pbVar47,"_reflection_cubemap",(long ****)pppppppppplVar24,
                   (byte ****)param_8,(long ****)param_9,param_10,param_11,param_12);
    ppppppppplVar27 = (long *********)((ulong)&local_c0 | 1);
    if (((ulong)local_c0 & 1) != 0) {
      ppppppppplVar27 = local_b0;
    }
    FUN_7102633910(lVar29,ppppppppplVar27,pppppppppplVar24,param_8,(long ****)param_9,param_10,
                   param_11,param_12);
    pbVar47 = (byte *)((ulong)local_d8 | 1);
    if (((ulong)local_d8[0] & 1) != 0) {
      pbVar47 = local_c8;
    }
    FUN_71025f7350(*(long *)(lVar29 + 0x10),pbVar47);
    ppppppppplVar27 = (long *********)((ulong)local_f0 | 1);
    if ((local_f0[0] & 1) != 0) {
      ppppppppplVar27 = local_e0;
    }
    FUN_7102633b90(lVar29,ppppppppplVar27,1,param_8,(long ****)param_9,param_10,param_11,param_12);
    uVar25 = 1;
    ppppppppplVar27 = (long *********)((ulong)local_108 | 1);
    if ((local_108[0] & 1) != 0) {
      ppppppppplVar27 = local_f8;
    }
    FUN_7102633a10(lVar29,ppppppppplVar27,1,param_8,(long ****)param_9,param_10,param_11,param_12);
    ppppppppplVar27 = (long *********)((ulong)local_120 | 1);
    if ((local_120[0] & 1) != 0) {
      ppppppppplVar27 = local_110;
    }
    FUN_7102633800(lVar29,ppppppppplVar27,uVar25,param_8,(long ****)param_9,param_10,param_11,
                   param_12);
    if (((local_120[0] & 1) != 0) && (local_110 != (long *********)0x0)) {
      FUN_710392eb40((ulong)local_110);
    }
    if (((local_108[0] & 1) != 0) && (local_f8 != (long *********)0x0)) {
      FUN_710392eb40((ulong)local_f8);
    }
    if (((local_f0[0] & 1) != 0) && (local_e0 != (long *********)0x0)) {
      FUN_710392eb40((ulong)local_e0);
    }
    if ((((ulong)local_d8[0] & 1) != 0) && (local_c8 != (byte *)0x0)) {
      FUN_710392eb40((ulong)local_c8);
    }
    if ((((ulong)local_c0 & 1) != 0) && (local_b0 != (long *********)0x0)) {
      FUN_710392eb40((ulong)local_b0);
    }
    lVar29 = *(long *)(*plVar21 + 0x38);
  }
  if ((uVar45 < (ulong)(*(long *)(lVar29 + 0x78) - *(long *)(lVar29 + 0x70) >> 4)) &&
     (lVar33 = plVar21[0xd], lVar33 != 0)) {
    puVar23 = (undefined8 *)(*(long *)(lVar29 + 0x70) + uVar45 * 0x10);
    uVar18 = *(undefined4 *)puVar23;
    uVar56 = *(undefined4 *)((long)puVar23 + 4);
    uVar25 = *puVar23;
    puVar19 = puVar23 + 1;
    uVar57 = *(undefined4 *)puVar19;
    uVar58 = *(undefined4 *)((long)puVar23 + 0xc);
    uVar66 = *puVar19;
    if (*(char *)(lVar33 + 0xe0) != '\0') {
      param_8 = &local_c0;
      local_c0 = (long *********)*puVar23;
      ppppppppplStack_b8 = (long *********)*puVar19;
      (**(code **)(**(long **)(lVar33 + 0x90) + 0x268))
                (*(long **)(lVar33 + 0x90),"sfx_chara_guide_mt",3);
      uVar57 = (undefined4)uVar66;
      uVar58 = (undefined4)((ulong)uVar66 >> 0x20);
      uVar18 = (undefined4)uVar25;
      uVar56 = (undefined4)((ulong)uVar25 >> 0x20);
      lVar33 = plVar21[0xd];
      if (lVar33 == 0) goto LAB_71031945e8;
    }
    if (*(char *)(lVar33 + 0xe0) != '\0') {
      ppppppppplStack_b8 = (long *********)CONCAT44(uVar58,uVar57);
      local_c0 = (long *********)CONCAT44(uVar56,uVar18);
      param_8 = &local_c0;
      (**(code **)(**(long **)(lVar33 + 0x90) + 0x268))
                (*(long **)(lVar33 + 0x90),"sfx_stage_guide_mt",3);
    }
  }
LAB_71031945e8:
  plVar21 = (long *)param_5[0xd];
  lVar29 = *plVar21;
  lVar33 = *(long *)(lVar29 + 0x30);
  uVar35 = (int)((ulong)(*(long *)(lVar33 + 0x88) - *(long *)(lVar33 + 0x80)) >> 2) * -0x33333333;
  if (3 < uVar35) {
    uVar35 = 4;
  }
  if (uVar35 == 0) goto LAB_7103194e84;
  uVar39 = *(uint *)((long)param_7 + 4);
  lVar3 = *(long *)(*(long *)(lVar29 + 0x38) + 0x20);
  lVar5 = *(long *)(*(long *)(lVar29 + 0x38) + 0x28);
  pfVar52 = (float *)(plVar21 + 10);
  lVar53 = 0x12;
  uVar20 = 1;
  do {
    lVar51 = *(long *)(lVar33 + 0x80);
    lVar33 = lVar51 + lVar53;
    pfVar52[-0xf] = *(float *)(lVar33 + -0x12);
    pfVar52[-0xe] = *(float *)(lVar33 + -0xe);
    pfVar52[-0xd] = *(float *)(lVar33 + -10);
    plVar31 = (long *)(lVar29 + 0x58);
    uVar45 = (ulong)*(byte *)(lVar33 + -6);
    lVar41 = *(long *)(*(long *)(*plVar31 + 0x50) + 0x30);
    lVar38 = *(long *)(lVar41 + 0x20);
    uVar42 = (*(long *)(lVar41 + 0x28) - lVar38 >> 3) * -0x5555555555555555;
    if (uVar42 < uVar45 || uVar42 - uVar45 == 0) {
      fVar59 = 1.0;
      fVar65 = 1.0;
      fVar54 = 1.0;
      fVar55 = 1.0;
    }
    else {
      puVar34 = (ulong *)(lVar38 + uVar45 * 0x18);
      fVar65 = *(float *)(puVar34 + 1);
      fVar54 = *(float *)((long)puVar34 + 0xc);
      fVar55 = *(float *)(puVar34 + 2);
      fVar59 = *(float *)((long)puVar34 + 0x14);
      if ((*puVar34 & 0xffffffffff) == 0x486bb9144) {
        if (fVar65 <= 0.04045) {
          fVar65 = fVar65 / 12.92;
          if (0.04045 < fVar54) goto LAB_7103194780;
LAB_710319474c:
          fVar54 = fVar54 / 12.92;
          if (fVar55 <= 0.04045) goto LAB_7103194758;
LAB_710319479c:
          fVar55 = powf((fVar55 + 0.055) / 1.055,2.4);
        }
        else {
          fVar65 = powf((fVar65 + 0.055) / 1.055,2.4);
          if (fVar54 <= 0.04045) goto LAB_710319474c;
LAB_7103194780:
          fVar54 = powf((fVar54 + 0.055) / 1.055,2.4);
          if (0.04045 < fVar55) goto LAB_710319479c;
LAB_7103194758:
          fVar55 = fVar55 / 12.92;
        }
        lVar29 = *plVar21;
        plVar31 = (long *)(lVar29 + 0x58);
      }
    }
    pfVar52[-0xc] = fVar65;
    pfVar52[-0xb] = fVar54;
    pfVar52[-10] = fVar55;
    pfVar52[-9] = fVar59;
    lVar41 = *(long *)(*(long *)(*(long *)(lVar29 + 0x58) + 0x50) + 0x30);
    lVar38 = *(long *)(lVar41 + 0x20);
    uVar42 = (*(long *)(lVar41 + 0x28) - lVar38 >> 3) * -0x5555555555555555;
    uVar45 = (ulong)*(byte *)(lVar33 + -5);
    if (uVar42 < uVar45 || uVar42 - uVar45 == 0) {
      fVar59 = 1.0;
      fVar65 = 1.0;
      fVar54 = 1.0;
      fVar55 = 1.0;
    }
    else {
      puVar34 = (ulong *)(lVar38 + uVar45 * 0x18);
      fVar65 = *(float *)(puVar34 + 1);
      fVar54 = *(float *)((long)puVar34 + 0xc);
      fVar55 = *(float *)(puVar34 + 2);
      fVar59 = *(float *)((long)puVar34 + 0x14);
      if ((*puVar34 & 0xffffffffff) == 0x486bb9144) {
        if (fVar65 <= 0.04045) {
          fVar65 = fVar65 / 12.92;
          if (0.04045 < fVar54) goto LAB_7103194874;
LAB_7103194840:
          fVar54 = fVar54 / 12.92;
          if (fVar55 <= 0.04045) goto LAB_710319484c;
LAB_7103194890:
          fVar55 = powf((fVar55 + 0.055) / 1.055,2.4);
        }
        else {
          fVar65 = powf((fVar65 + 0.055) / 1.055,2.4);
          if (fVar54 <= 0.04045) goto LAB_7103194840;
LAB_7103194874:
          fVar54 = powf((fVar54 + 0.055) / 1.055,2.4);
          if (0.04045 < fVar55) goto LAB_7103194890;
LAB_710319484c:
          fVar55 = fVar55 / 12.92;
        }
        lVar29 = *plVar21;
        plVar31 = (long *)(lVar29 + 0x58);
      }
    }
    pfVar52[-8] = fVar65;
    pfVar52[-7] = fVar54;
    pfVar52[-6] = fVar55;
    pfVar52[-5] = fVar59;
    lVar41 = *(long *)(*(long *)(*plVar31 + 0x50) + 0x30);
    lVar38 = *(long *)(lVar41 + 0x20);
    uVar42 = (*(long *)(lVar41 + 0x28) - lVar38 >> 3) * -0x5555555555555555;
    uVar45 = (ulong)*(byte *)(lVar33 + -4);
    if (uVar42 < uVar45 || uVar42 - uVar45 == 0) {
      fVar59 = 1.0;
      fVar65 = 1.0;
      fVar54 = 1.0;
      fVar55 = 1.0;
    }
    else {
      puVar34 = (ulong *)(lVar38 + uVar45 * 0x18);
      fVar65 = *(float *)(puVar34 + 1);
      fVar54 = *(float *)((long)puVar34 + 0xc);
      fVar55 = *(float *)(puVar34 + 2);
      fVar59 = *(float *)((long)puVar34 + 0x14);
      if ((*puVar34 & 0xffffffffff) == 0x486bb9144) {
        if (fVar65 <= 0.04045) {
          fVar65 = fVar65 / 12.92;
          if (0.04045 < fVar54) goto LAB_710319496c;
LAB_7103194938:
          fVar54 = fVar54 / 12.92;
          if (fVar55 <= 0.04045) goto LAB_7103194944;
LAB_7103194988:
          fVar55 = powf((fVar55 + 0.055) / 1.055,2.4);
        }
        else {
          fVar65 = powf((fVar65 + 0.055) / 1.055,2.4);
          if (fVar54 <= 0.04045) goto LAB_7103194938;
LAB_710319496c:
          fVar54 = powf((fVar54 + 0.055) / 1.055,2.4);
          if (0.04045 < fVar55) goto LAB_7103194988;
LAB_7103194944:
          fVar55 = fVar55 / 12.92;
        }
        lVar29 = *plVar21;
        plVar31 = (long *)(lVar29 + 0x58);
      }
    }
    pfVar52[-4] = fVar65;
    pfVar52[-3] = fVar54;
    pfVar52[-2] = fVar55;
    pfVar52[-1] = fVar59;
    lVar41 = *(long *)(*(long *)(*plVar31 + 0x50) + 0x30);
    lVar38 = *(long *)(lVar41 + 0x20);
    uVar42 = (*(long *)(lVar41 + 0x28) - lVar38 >> 3) * -0x5555555555555555;
    uVar45 = (ulong)*(byte *)(lVar33 + -3);
    if (uVar42 < uVar45 || uVar42 - uVar45 == 0) {
      fVar59 = 1.0;
      fVar65 = 1.0;
      fVar54 = 1.0;
      fVar55 = 1.0;
    }
    else {
      puVar34 = (ulong *)(lVar38 + uVar45 * 0x18);
      fVar65 = *(float *)(puVar34 + 1);
      fVar54 = *(float *)((long)puVar34 + 0xc);
      fVar55 = *(float *)(puVar34 + 2);
      fVar59 = *(float *)((long)puVar34 + 0x14);
      if ((*puVar34 & 0xffffffffff) == 0x486bb9144) {
        if (fVar65 <= 0.04045) {
          fVar65 = fVar65 / 12.92;
          if (0.04045 < fVar54) goto LAB_7103194a64;
LAB_7103194a30:
          fVar54 = fVar54 / 12.92;
          if (fVar55 <= 0.04045) goto LAB_7103194a3c;
LAB_7103194a80:
          fVar55 = powf((fVar55 + 0.055) / 1.055,2.4);
        }
        else {
          fVar65 = powf((fVar65 + 0.055) / 1.055,2.4);
          if (fVar54 <= 0.04045) goto LAB_7103194a30;
LAB_7103194a64:
          fVar54 = powf((fVar54 + 0.055) / 1.055,2.4);
          if (0.04045 < fVar55) goto LAB_7103194a80;
LAB_7103194a3c:
          fVar55 = fVar55 / 12.92;
        }
        lVar29 = *plVar21;
        plVar31 = (long *)(lVar29 + 0x58);
      }
    }
    *pfVar52 = fVar65;
    pfVar52[1] = fVar54;
    pfVar52[2] = fVar55;
    pfVar52[3] = fVar59;
    lVar41 = *(long *)(*(long *)(*plVar31 + 0x50) + 0x30);
    lVar38 = *(long *)(lVar41 + 0x20);
    uVar42 = (*(long *)(lVar41 + 0x28) - lVar38 >> 3) * -0x5555555555555555;
    uVar45 = (ulong)*(byte *)(lVar33 + -2);
    if (uVar42 < uVar45 || uVar42 - uVar45 == 0) {
      fVar59 = 1.0;
      fVar55 = 1.0;
      fVar54 = 1.0;
      fVar65 = 1.0;
    }
    else {
      puVar34 = (ulong *)(lVar38 + uVar45 * 0x18);
      fVar65 = *(float *)(puVar34 + 1);
      fVar54 = *(float *)((long)puVar34 + 0xc);
      fVar55 = *(float *)(puVar34 + 2);
      fVar59 = *(float *)((long)puVar34 + 0x14);
      if ((*puVar34 & 0xffffffffff) == 0x486bb9144) {
        if (fVar65 <= 0.04045) {
          fVar65 = fVar65 / 12.92;
          if (0.04045 < fVar54) goto LAB_7103194b5c;
LAB_7103194b28:
          fVar54 = fVar54 / 12.92;
          if (fVar55 <= 0.04045) goto LAB_7103194b34;
LAB_7103194b78:
          fVar55 = powf((fVar55 + 0.055) / 1.055,2.4);
        }
        else {
          fVar65 = powf((fVar65 + 0.055) / 1.055,2.4);
          if (fVar54 <= 0.04045) goto LAB_7103194b28;
LAB_7103194b5c:
          fVar54 = powf((fVar54 + 0.055) / 1.055,2.4);
          if (0.04045 < fVar55) goto LAB_7103194b78;
LAB_7103194b34:
          fVar55 = fVar55 / 12.92;
        }
        lVar29 = *plVar21;
        plVar31 = (long *)(lVar29 + 0x58);
      }
    }
    pfVar52[4] = fVar65;
    pfVar52[5] = fVar54;
    pfVar52[6] = fVar55;
    pfVar52[7] = fVar59;
    lVar41 = *(long *)(*(long *)(*plVar31 + 0x50) + 0x30);
    lVar38 = *(long *)(lVar41 + 0x20);
    uVar42 = (*(long *)(lVar41 + 0x28) - lVar38 >> 3) * -0x5555555555555555;
    uVar45 = (ulong)*(byte *)(lVar33 + -1);
    if (uVar42 < uVar45 || uVar42 - uVar45 == 0) {
      fVar59 = 1.0;
      fVar55 = 1.0;
      fVar54 = 1.0;
      fVar65 = 1.0;
    }
    else {
      puVar34 = (ulong *)(lVar38 + uVar45 * 0x18);
      fVar65 = *(float *)(puVar34 + 1);
      fVar54 = *(float *)((long)puVar34 + 0xc);
      fVar55 = *(float *)(puVar34 + 2);
      fVar59 = *(float *)((long)puVar34 + 0x14);
      if ((*puVar34 & 0xffffffffff) == 0x486bb9144) {
        if (fVar65 <= 0.04045) {
          fVar65 = fVar65 / 12.92;
          if (0.04045 < fVar54) goto LAB_7103194c54;
LAB_7103194c20:
          fVar54 = fVar54 / 12.92;
          if (fVar55 <= 0.04045) goto LAB_7103194c2c;
LAB_7103194c70:
          fVar55 = powf((fVar55 + 0.055) / 1.055,2.4);
        }
        else {
          fVar65 = powf((fVar65 + 0.055) / 1.055,2.4);
          if (fVar54 <= 0.04045) goto LAB_7103194c20;
LAB_7103194c54:
          fVar54 = powf((fVar54 + 0.055) / 1.055,2.4);
          if (0.04045 < fVar55) goto LAB_7103194c70;
LAB_7103194c2c:
          fVar55 = fVar55 / 12.92;
        }
        lVar29 = *plVar21;
        plVar31 = (long *)(lVar29 + 0x58);
      }
    }
    pfVar52[8] = fVar65;
    pfVar52[9] = fVar54;
    pfVar52[10] = fVar55;
    pfVar52[0xb] = fVar59;
    uVar45 = (ulong)*(byte *)(lVar51 + lVar53);
    lVar38 = *(long *)(*(long *)(*plVar31 + 0x50) + 0x30);
    lVar33 = *(long *)(lVar38 + 0x20);
    uVar42 = (*(long *)(lVar38 + 0x28) - lVar33 >> 3) * -0x5555555555555555;
    if (uVar42 < uVar45 || uVar42 - uVar45 == 0) {
      fVar59 = 1.0;
      fVar55 = 1.0;
      fVar54 = 1.0;
      fVar65 = 1.0;
    }
    else {
      puVar34 = (ulong *)(lVar33 + uVar45 * 0x18);
      fVar65 = *(float *)(puVar34 + 1);
      fVar54 = *(float *)((long)puVar34 + 0xc);
      fVar55 = *(float *)(puVar34 + 2);
      fVar59 = *(float *)((long)puVar34 + 0x14);
      if ((*puVar34 & 0xffffffffff) == 0x486bb9144) {
        if (fVar65 <= 0.04045) {
          fVar65 = fVar65 / 12.92;
          if (0.04045 < fVar54) goto LAB_7103194d4c;
LAB_7103194d18:
          fVar54 = fVar54 / 12.92;
          if (fVar55 <= 0.04045) goto LAB_7103194d24;
LAB_7103194d68:
          fVar55 = powf((fVar55 + 0.055) / 1.055,2.4);
        }
        else {
          fVar65 = powf((fVar65 + 0.055) / 1.055,2.4);
          if (fVar54 <= 0.04045) goto LAB_7103194d18;
LAB_7103194d4c:
          fVar54 = powf((fVar54 + 0.055) / 1.055,2.4);
          if (0.04045 < fVar55) goto LAB_7103194d68;
LAB_7103194d24:
          fVar55 = fVar55 / 12.92;
        }
        lVar29 = *plVar21;
      }
    }
    pfVar52[0xc] = fVar65;
    pfVar52[0xd] = fVar54;
    pfVar52[0xe] = fVar55;
    pfVar52[0xf] = fVar59;
    lVar33 = *(long *)(*(long *)(lVar29 + 0x38) + 0x38);
    pfVar2 = (float *)(lVar33 + (ulong)uVar39 * 0x10);
    fVar65 = pfVar2[2];
    uVar36 = (uint)(*pfVar2 / 60.0);
    fVar54 = *pfVar2 / 60.0 - (float)(int)uVar36;
    fVar59 = 1.0 - fVar54;
    if ((uVar36 & 1) != 0) {
      fVar59 = fVar54;
    }
    fVar55 = (1.0 - pfVar2[1]) * fVar65;
    fVar68 = (1.0 - fVar59 * pfVar2[1]) * fVar65;
    fVar54 = fVar55;
    fVar59 = fVar68;
    switch(uVar36) {
    case 1:
      fVar59 = fVar65;
      fVar65 = fVar68;
      break;
    case 2:
      fVar54 = fVar68;
      fVar59 = fVar65;
      fVar65 = fVar55;
      break;
    case 3:
      fVar54 = fVar65;
      fVar65 = fVar55;
      break;
    case 4:
      fVar54 = fVar65;
      fVar59 = fVar55;
      fVar65 = fVar68;
      break;
    case 5:
      fVar54 = fVar68;
      fVar59 = fVar55;
    }
    uVar61 = 0;
    uVar60 = 0;
    auVar69 = NEON_fmov(0x3f800000,4);
    uVar62 = *(undefined4 *)(lVar33 + (ulong)uVar39 * 0x10 + 0xc);
    uVar64 = 0;
    uVar63 = 0x3f800000;
    param_4._0_8_ = CONCAT44(fVar59,fVar65);
    param_4._12_4_ = auVar69._12_4_;
    param_4._8_4_ = fVar54;
    *(long *)(pfVar52 + 0x12) = param_4._8_8_;
    *(long *)(pfVar52 + 0x10) = param_4._0_8_;
    *(long *)(pfVar52 + 0x16) = CONCAT44(0x3f800000,uVar62);
    *(long *)(pfVar52 + 0x14) = CONCAT44(uVar62,uVar62);
    if (uVar35 <= uVar20) {
LAB_7103194e84:
      uVar35 = *(uint *)((long)param_5 + 0x44);
      lVar29 = *(long *)(param_5[0x13] + 0x18);
      uVar39 = (uVar35 ^ uVar35 >> 0x1e) * 0x6c078965;
      *(uint *)(lVar29 + 8) = uVar35;
      *(uint *)(lVar29 + 0xc) = uVar39;
      uVar35 = (uVar39 ^ uVar39 >> 0x1e) * 0x6c078965 + 1;
      uVar39 = (uVar35 ^ uVar35 >> 0x1e) * 0x6c078965 + 2;
      *(uint *)(lVar29 + 0x10) = uVar35;
      *(uint *)(lVar29 + 0x14) = uVar39;
      *(uint *)(lVar29 + 0x18) = (uVar39 ^ uVar39 >> 0x1e) * 0x6c078965 + 3;
      puVar19 = (undefined8 *)param_5[0x11];
      uVar20 = *(ulong *)*puVar19;
      uVar35 = *(uint *)(param_7 + 1);
      if ((ulong)uVar35 < (ulong)(*(long *)(uVar20 + 0x1c8) - *(long *)(uVar20 + 0x1c0) >> 4)) {
        puVar23 = (undefined8 *)(*(long *)(uVar20 + 0x1c0) + (ulong)uVar35 * 0x10);
        uVar25 = *puVar23;
        lVar29 = puVar23[1];
        if (lVar29 != 0) {
          plVar21 = (long *)(lVar29 + 8);
          do {
            cVar8 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar17) {
              *plVar21 = *plVar21 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        plVar21 = *(long **)(uVar20 + 0x1a0);
        *(undefined8 *)(uVar20 + 0x198) = uVar25;
        *(long *)(uVar20 + 0x1a0) = lVar29;
        if (plVar21 != (long *)0x0) {
          plVar31 = plVar21 + 1;
          do {
            lVar29 = *plVar31;
            cVar8 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar17) {
              *plVar31 = lVar29 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar29 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            std::__shared_weak_count::__release_weak();
          }
        }
        FUN_71025e46e0(uVar20,1);
        uVar20 = *(ulong *)*puVar19;
      }
      pppppppplVar26 = (long ********)&DAT_ffffffff;
      FUN_710262b8c0(*(long *)(uVar20 + 0x300),uVar35,0xffffffff,(byte ****)param_8,
                     (long ****)param_9,param_10,param_11,param_12);
      puVar19 = (undefined8 *)param_5[0xc];
      uVar35 = *(uint *)(param_7 + 1);
      *(uint *)(puVar19 + 1) = uVar35;
      FUN_7102624740(*(long *)(*(long *)*puVar19 + 0x308),(ulong)uVar35);
      uVar20 = FUN_7102624870(*(long *)(*(long *)*puVar19 + 0x308),(ulong)uVar35);
      if (param_7[4] != (long *********)0x0) {
        pppppppplVar26 = (long ********)0x0;
        auVar69._4_4_ = extraout_var;
        auVar69._0_4_ = extraout_s0;
        auVar69._8_4_ = extraout_var_02;
        auVar69._12_4_ = extraout_var_05;
        auVar11._4_4_ = uVar60;
        auVar11._0_4_ = fVar59;
        auVar11._8_8_ = uVar61;
        auVar14._4_4_ = uVar63;
        auVar14._0_4_ = uVar62;
        auVar14._8_8_ = uVar64;
        uVar35 = FUN_710319cee0(auVar69,auVar11,auVar14,param_4,(long *)param_5[0x15],
                                (long *)param_7[4],0,(byte ****)param_8,(long ****)param_9,param_10,
                                param_11,param_12);
        uVar20 = (ulong)uVar35;
      }
      if (*(char *)param_7 == '\0') {
        plVar21 = (long *)param_5[0x13];
        *(undefined4 *)((long)param_5 + 0x4c) = 5;
        if (*(int *)((long)plVar21 + 0xc) == 2) {
          plVar31 = (long *)plVar21[0xb];
          plVar32 = (long *)plVar21[0xc];
          if (plVar31 == plVar32) {
            bVar17 = true;
          }
          else {
            do {
              plVar44 = plVar31 + 2;
              lVar29 = *plVar31;
              FUN_71031e6740(lVar29,1);
              iVar6 = *(int *)(lVar29 + 0x1c);
              *(undefined4 *)(lVar29 + 0x1c) = 3;
              *(undefined4 *)(lVar29 + 0x20) = 3;
              *(bool *)(lVar29 + 0x18) = iVar6 != 3;
              plVar31 = plVar44;
            } while (plVar32 != plVar44);
            bVar17 = *(int *)((long)plVar21 + 0xc) != 1;
          }
          *(bool *)(plVar21 + 1) = bVar17;
          *(undefined1 **)((long)plVar21 + 0xc) = &DAT_100000001;
          plVar21 = (long *)param_5[0x13];
        }
        FUN_71031b50a0(plVar21,0,pppppppplVar26,(byte ****)param_8,(long ****)param_9,param_10,
                       param_11,param_12);
        auVar9._4_4_ = extraout_var_00;
        auVar9._0_4_ = extraout_s0_00;
        auVar9._8_4_ = extraout_var_03;
        auVar9._12_4_ = extraout_var_06;
        auVar12._4_4_ = uVar60;
        auVar12._0_4_ = fVar59;
        auVar12._8_8_ = uVar61;
        auVar15._4_4_ = uVar63;
        auVar15._0_4_ = uVar62;
        auVar15._8_8_ = uVar64;
        FUN_71031a0750(auVar9,auVar12,auVar15,param_4,param_5[0x15]);
        plVar21 = (long *)param_5[0x13];
        auVar10._4_4_ = extraout_var_01;
        auVar10._0_4_ = extraout_s0_01;
        auVar10._8_4_ = extraout_var_04;
        auVar10._12_4_ = extraout_var_07;
        auVar13._4_4_ = uVar60;
        auVar13._0_4_ = fVar59;
        auVar13._8_8_ = uVar61;
        auVar16._4_4_ = uVar63;
        auVar16._0_4_ = uVar62;
        auVar16._8_8_ = uVar64;
        uVar35 = FUN_71031a03c0(auVar10,auVar13,auVar16,param_4,(long *)param_5[0x15],5,
                                (long ****)pppppppplVar26,param_8,param_9,param_10,param_11,param_12
                               );
        uVar35 = FUN_71031b53f0(plVar21,uVar35,pppppppplVar26,(byte ****)param_8,(byte ****)param_9,
                                param_10,param_11,param_12);
        uVar20 = (ulong)uVar35;
        *(undefined1 *)(param_5[0xc] + 0xc) = 0;
      }
      return uVar20;
    }
    lVar33 = *(long *)(lVar29 + 0x30);
    lVar53 = lVar53 + 0x14;
    pfVar52 = pfVar52 + 0x28;
    uVar20 = uVar20 + 1;
    uVar39 = uVar39 + (int)((ulong)(lVar5 - lVar3) >> 3) * -0x55555555;
  } while( true );
code_r0x0071031939ec:
  pvVar48 = (void *)plVar21[5];
  pppppppppplVar49 = (long **********)((long)plVar31 - (long)pvVar48);
  uVar20 = ((long)pppppppppplVar49 >> 3) + 1;
  if (uVar20 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar33 = plVar21[7] - (long)pvVar48;
  if ((ulong)(lVar33 >> 3) < 0xfffffffffffffff) {
    uVar45 = lVar33 >> 2;
    if (uVar20 <= uVar45) {
      uVar20 = uVar45;
    }
    if (uVar20 != 0) {
      if (uVar20 >> 0x3d != 0) goto LAB_7103195140;
      goto LAB_7103193a3c;
    }
  }
  else {
    uVar20 = 0x1fffffffffffffff;
LAB_7103193a3c:
    ppppppppplVar27 = (long *********)(uVar20 * 8);
    if (ppppppppplVar27 == (long *********)0x0) {
      ppppppppplVar27 = (long *********)0x1;
    }
    pvVar22 = (void *)FUN_710392e290(0x10,ppppppppplVar27,(long ****)pppppppppplVar24,
                                     (byte ****)param_8,(long ****)param_9,param_10,param_11,
                                     param_12);
    uVar25 = extraout_x1_05;
    if (pvVar22 != (void *)0x0) goto LAB_7103193aa0;
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8[0] = (long *********)((ulong)local_d8[0] & 0xffffffff00000000);
      pppppppppplVar24 = &local_c0;
      local_c0 = ppppppppplVar27;
      auVar69 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_d8);
      uVar25 = auVar69._8_8_;
      if (((auVar69._0_8_ & 1) != 0) &&
         (pvVar22 = (void *)FUN_710392e290(0x10,ppppppppplVar27,(long ****)pppppppppplVar24,
                                           (byte ****)param_8,(long ****)param_9,param_10,param_11,
                                           param_12), uVar25 = extraout_x1_06,
         pvVar22 != (void *)0x0)) goto LAB_7103193aa0;
    }
  }
  pvVar22 = (void *)0x0;
LAB_7103193aa0:
  plVar31 = (long *)((long)pvVar22 + ((long)pppppppppplVar49 >> 3) * 8);
  *plVar31 = lVar29;
  if (0 < (long)pppppppppplVar49) {
    memcpy(pvVar22,pvVar48,(size_t)pppppppppplVar49);
    uVar25 = extraout_x1_07;
    pppppppppplVar24 = pppppppppplVar49;
  }
  plVar21[5] = (long)pvVar22;
  plVar21[6] = (long)(plVar31 + 1);
  plVar21[7] = (long)((long)pvVar22 + uVar20 * 8);
  if (pvVar48 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar48);
    uVar25 = extraout_x1_08;
  }
  puVar34 = puVar34 + 2;
  goto joined_r0x007103193970;
}

