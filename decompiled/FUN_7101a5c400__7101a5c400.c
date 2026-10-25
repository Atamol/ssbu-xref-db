// addr:      7101a5c400
// offset:    0x1a5c400
// name:      FUN_7101a5c400
// mangled:   
// signature: undefined __cdecl FUN_7101a5c400(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a5c400(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  byte bVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint *puVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
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
  undefined *puVar20;
  undefined8 extraout_x1_10;
  long ****pppplVar21;
  char *pcVar22;
  byte ****ppppbVar23;
  long ***ppplVar24;
  code *pcVar25;
  byte ***pppbVar26;
  long **pplVar27;
  long lVar28;
  long ***ppplVar29;
  undefined4 *puVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  uint uVar34;
  void *pvVar35;
  void *pvVar36;
  long *plVar37;
  undefined8 *puVar38;
  ulong uVar39;
  long lVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  long lVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  ulong local_278;
  undefined **local_258;
  undefined8 *local_250;
  uint local_248;
  float local_244;
  float fStack_240;
  float local_23c;
  float fStack_238;
  char local_234;
  char local_233;
  undefined1 local_232;
  char local_231;
  undefined **local_230;
  long *local_228;
  long ***local_220;
  long *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined2 local_1fc;
  undefined1 local_1fa;
  undefined1 *local_1f8;
  undefined4 local_1f0;
  long alStack_1e0 [4];
  long *local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  undefined4 local_f0;
  long ***local_e0;
  undefined8 *local_d8 [3];
  long ****local_c0;
  
  pppplVar21 = param_3;
  ppppbVar23 = param_4;
  puVar10 = (undefined8 *)FUN_710392e290(0x10,0x500,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  uVar31 = extraout_x1;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
      local_210 = (undefined **)0x500;
      pppplVar21 = (long ****)&local_210;
      auVar49 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
      uVar31 = auVar49._8_8_;
      if (((auVar49._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x500,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8)
         , uVar31 = extraout_x1_00, puVar10 != (undefined8 *)0x0)) goto LAB_7101a5c498;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101a5c498:
  *puVar10 = param_2;
  puVar10[1] = 0;
  *(undefined4 *)(puVar10 + 2) = 0;
  puVar10[3] = &DAT_c1ffff0000000000;
  *(undefined2 *)(puVar10 + 4) = 0;
  FUN_7103776290(puVar10 + 5,uVar31,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
  FUN_7103776290(puVar10 + 7,extraout_x1_01,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
  puVar10[9] = &PTR_FUN_710523d9a8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
      local_210 = (undefined **)&SUB_00000020;
      pppplVar21 = (long ****)&local_210;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
      if (((uVar12 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101a5c524;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101a5c524:
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  pppplVar21 = (long ****)0x420;
  puVar10[10] = puVar11;
  puVar10[0xb] = 0;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  *(undefined1 *)(puVar10 + 0x10) = 0xff;
  *(undefined8 *)((long)puVar10 + 0x84) = 0;
  *(undefined4 *)((long)puVar10 + 0xa4) = 1;
  *(undefined2 *)((long)puVar10 + 0x8c) = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  memset(puVar10 + 0x15,0,0x420);
  FUN_71017abd00(puVar10 + 0x1c);
  puVar10[0x51] = 0;
  puVar10[0x50] = 0xffffffff;
  puVar10[0x52] = 0xffffffffffffffff;
  *(undefined2 *)(puVar10 + 0x53) = 0;
  *(undefined8 *)((long)puVar10 + 0x29c) = 0xffffffffffffffff;
  *(undefined2 *)((long)puVar10 + 0x2a4) = 0xffff;
  puVar10[0x55] = 0;
  *(undefined2 *)(puVar10 + 0x56) = 0;
  *(undefined4 *)(puVar10 + 0x5c) = 0xffffffff;
  *(undefined1 *)((long)puVar10 + 0x2e4) = 0;
  *(undefined4 *)(puVar10 + 0x5d) = 0;
  *(undefined1 *)((long)puVar10 + 0x2ec) = 0;
  puVar10[0x5e] = &DAT_3f8000003f800000;
  puVar10[0x5f] = &DAT_3f8000003f800000;
  *(undefined2 *)(puVar10 + 0x60) = 0;
  FUN_71017abd00(puVar10 + 0x61);
  *(undefined1 *)(puVar10 + 0x97) = 0xff;
  puVar11 = (undefined8 *)puVar10[0xd];
  *(undefined1 *)(puVar10 + 0x95) = 0;
  puVar10[0x96] = 0xb95d0753f;
  *(undefined4 *)(puVar10 + 0x98) = 0;
  *(undefined2 *)((long)puVar10 + 0x4c4) = 0;
  puVar10[0x9a] = 0;
  puVar10[0x99] = 0;
  puVar10[0x9b] = 0xffffffffffffffff;
  *(undefined4 *)(puVar10 + 0x9c) = 0;
  *(undefined2 *)(puVar10 + 0x9f) = 0;
  puVar10[0x9e] = 0;
  puVar10[0x9d] = 0;
  if ((ulong)(puVar10[0xf] - (long)puVar11 >> 4) < 8) {
    puVar38 = (undefined8 *)puVar10[0xe];
    lVar13 = FUN_710392e290(0x10,0x80,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
    if (lVar13 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        local_210 = (undefined **)&DAT_00000080;
        pppplVar21 = (long ****)&local_210;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        if (((uVar12 & 1) != 0) &&
           (lVar13 = FUN_710392e290(0x10,0x80,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8)
           , lVar13 != 0)) goto LAB_7101a5c67c;
      }
      lVar13 = 0;
    }
LAB_7101a5c67c:
    puVar15 = (undefined8 *)(lVar13 + ((long)puVar38 - (long)puVar11 >> 4) * 0x10);
    if (puVar38 == puVar11) {
      puVar10[0xd] = puVar15;
      puVar10[0xe] = puVar15;
      puVar10[0xf] = lVar13 + 0x80;
    }
    else {
      lVar40 = 0;
      do {
        *(undefined ***)((long)puVar15 + lVar40 + -0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar15 + lVar40 + -8) = 0;
        if (puVar38 != puVar15) {
          uVar31 = *(undefined8 *)((long)puVar38 + lVar40 + -8);
          *(undefined8 *)((long)puVar38 + lVar40 + -8) = 0;
          uVar12 = *(ulong *)((long)puVar15 + lVar40 + -8);
          *(undefined8 *)((long)puVar15 + lVar40 + -8) = uVar31;
          if (uVar12 != 0) {
            FUN_710392eb40(uVar12);
          }
        }
        lVar40 = lVar40 + -0x10;
      } while ((long)puVar11 - (long)puVar38 != lVar40);
      puVar38 = (undefined8 *)puVar10[0xd];
      puVar11 = (undefined8 *)puVar10[0xe];
      puVar10[0xd] = (long)puVar15 + lVar40;
      puVar10[0xe] = puVar15;
      puVar10[0xf] = lVar13 + 0x80;
      while (puVar11 != puVar38) {
        puVar15 = puVar11 + -2;
        *puVar15 = &PTR_FUN_710523d9a8;
        uVar12 = puVar11[-1];
        puVar11[-1] = 0;
        puVar11 = puVar15;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
    }
    if (puVar38 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar38);
    }
  }
  uVar12 = puVar10[0x15];
  if ((ulong)(((long)(puVar10[0x17] - uVar12) >> 4) * -0x1041041041041041) < 0x20) {
    uVar39 = puVar10[0x16];
    lVar40 = (long)(uVar39 - uVar12) >> 4;
    lVar13 = FUN_710392e290(0x10,0x7e00,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
    if (lVar13 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        local_210 = (undefined **)0x7e00;
        pppplVar21 = (long ****)&local_210;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        if (((uVar14 & 1) != 0) &&
           (lVar13 = FUN_710392e290(0x10,0x7e00,pppplVar21,ppppbVar23,param_5,param_6,param_7,
                                    param_8), lVar13 != 0)) goto LAB_7101a5c7a4;
      }
      lVar13 = 0;
    }
LAB_7101a5c7a4:
    lVar28 = lVar13 + lVar40 * 0x10;
    lVar43 = lVar28;
    if (uVar39 != uVar12) {
      lVar43 = 0;
      do {
        lVar2 = uVar39 + lVar43;
        lVar3 = lVar13 + lVar40 * 0x10 + lVar43;
        *(undefined4 *)(lVar3 + -0x3f0) = *(undefined4 *)(lVar2 + -0x3f0);
        FUN_71015547e0((undefined8 *)(lVar3 + -1000),(undefined8 *)(lVar2 + -1000));
        uVar7 = *(undefined2 *)(lVar2 + -0x230);
        uVar31 = *(undefined8 *)(lVar2 + -0x240);
        uVar32 = *(undefined8 *)(lVar2 + -0x238);
        *(undefined8 *)(lVar3 + -0x248) = *(undefined8 *)(lVar2 + -0x248);
        *(undefined2 *)(lVar3 + -0x230) = uVar7;
        *(undefined8 *)(lVar3 + -0x238) = uVar32;
        *(undefined8 *)(lVar3 + -0x240) = uVar31;
        uVar31 = *(undefined8 *)(lVar2 + -0x22c);
        *(undefined2 *)(lVar3 + -0x224) = *(undefined2 *)(lVar2 + -0x224);
        *(undefined8 *)(lVar3 + -0x22c) = uVar31;
        *(uint *)(lVar3 + -0x220) = 0;
        FUN_7101696040((uint *)(lVar3 + -0x220),(ushort *)(lVar2 + -0x218));
        uVar31 = *(undefined8 *)(lVar2 + -0x1e8);
        *(undefined8 *)(lVar3 + -0x1e3) = *(undefined8 *)(lVar2 + -0x1e3);
        *(undefined8 *)(lVar3 + -0x1e8) = uVar31;
        uVar32 = *(undefined8 *)(lVar2 + -0x1d0);
        uVar31 = *(undefined8 *)(lVar2 + -0x1d8);
        *(undefined2 *)(lVar3 + -0x1c8) = *(undefined2 *)(lVar2 + -0x1c8);
        *(undefined8 *)(lVar3 + -0x1d0) = uVar32;
        *(undefined8 *)(lVar3 + -0x1d8) = uVar31;
        FUN_71015547e0((undefined8 *)(lVar3 + -0x1c0),(undefined8 *)(lVar2 + -0x1c0));
        uVar31 = *(undefined8 *)(lVar2 + -0x20);
        uVar32 = *(undefined8 *)(lVar2 + -0x18);
        *(undefined1 *)(lVar3 + -0x10) = *(undefined1 *)(lVar2 + -0x10);
        *(undefined8 *)(lVar3 + -0x20) = uVar31;
        *(undefined8 *)(lVar3 + -0x18) = uVar32;
        uVar6 = *(undefined4 *)(lVar2 + -8);
        lVar43 = lVar43 + -0x3f0;
        *(undefined2 *)(lVar3 + -4) = *(undefined2 *)(lVar2 + -4);
        *(undefined4 *)(lVar3 + -8) = uVar6;
      } while (uVar12 - uVar39 != lVar43);
      uVar39 = puVar10[0x15];
      lVar43 = lVar13 + lVar40 * 0x10 + lVar43;
    }
    puVar10[0x15] = lVar43;
    puVar10[0x16] = lVar28;
    puVar10[0x17] = lVar13 + 0x7e00;
    if (uVar39 != 0) {
      FUN_710392eb40(uVar39);
    }
  }
  puVar11 = (undefined8 *)puVar10[0x18];
  if ((ulong)(puVar10[0x1a] - (long)puVar11 >> 4) < 0x20) {
    puVar38 = (undefined8 *)puVar10[0x19];
    lVar13 = FUN_710392e290(0x10,0x200,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
    if (lVar13 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        local_210 = (undefined **)&DAT_00000200;
        pppplVar21 = (long ****)&local_210;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        if (((uVar12 & 1) != 0) &&
           (lVar13 = FUN_710392e290(0x10,0x200,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8
                                   ), lVar13 != 0)) goto LAB_7101a5c9b8;
      }
      lVar13 = 0;
    }
LAB_7101a5c9b8:
    puVar15 = (undefined8 *)(lVar13 + ((long)puVar38 - (long)puVar11 >> 4) * 0x10);
    puVar33 = puVar15;
    if (puVar38 == puVar11) {
      puVar10[0x18] = puVar15;
      puVar10[0x19] = puVar15;
      puVar10[0x1a] = lVar13 + 0x200;
    }
    else {
      do {
        puVar33 = puVar33 + -2;
        puVar38 = puVar38 + -2;
        FUN_7101a58b00(puVar33,puVar38);
      } while (puVar11 != puVar38);
      puVar38 = (undefined8 *)puVar10[0x18];
      puVar11 = (undefined8 *)puVar10[0x19];
      puVar10[0x18] = puVar33;
      puVar10[0x19] = puVar15;
      puVar10[0x1a] = lVar13 + 0x200;
      while (puVar11 != puVar38) {
        puVar11 = puVar11 + -2;
        (**(code **)*puVar11)(puVar11);
      }
    }
    if (puVar38 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar38);
    }
  }
  uVar12 = *(ulong *)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar10;
  if (uVar12 != 0) {
    FUN_7101a59c60(uVar12);
    FUN_710392eb40(uVar12);
    puVar10 = *(undefined8 **)(param_1 + 8);
  }
  pppplVar1 = (long ****)(puVar10 + 5);
  if (pppplVar1 != param_3) {
    *(long ***)puVar10[6] = *param_3[1];
    *(long ***)(puVar10[6] + 8) = param_3[1][1];
    ppplVar29 = param_3[1];
    ppplVar24 = (long ***)puVar10[6];
    if (ppplVar24 != ppplVar29) {
      *ppplVar24[3] = *ppplVar29[3];
      ppplVar24[3][1] = ppplVar29[3][1];
      ppplVar24[3][2] = ppplVar29[3][2];
      ppplVar24[3][3] = ppplVar29[3][3];
    }
  }
  *(undefined4 *)(puVar10 + 1) = *(undefined4 *)param_4;
  *(undefined1 *)(puVar10 + 4) = *(undefined1 *)((long)param_4 + 4);
  *(undefined1 *)((long)puVar10 + 0x21) = *(undefined1 *)((long)param_4 + 5);
  puVar10[3] = param_4[1];
  *(undefined4 *)((long)puVar10 + 0xc) = *(undefined4 *)(param_4 + 2);
  *(int *)(puVar10 + 2) = *(int *)(param_4 + 2) - *(int *)((long)param_4 + 0x14);
  *(undefined1 *)(puVar10 + 0x9f) = *(undefined1 *)(param_4 + 3);
  FUN_7103776640(&local_210,(long)pppplVar1,(byte ****)"set_part_tournament",pppplVar21,ppppbVar23,
                 param_5,param_6,param_7,param_8);
  uVar12 = (ulong)local_208;
  puVar11 = puVar10 + 7;
  if (puVar11 != &local_210) {
    local_208 = (undefined8 *)0x0;
    uVar39 = puVar10[8];
    puVar10[8] = uVar12;
    if (uVar39 != 0) {
      uVar12 = *(ulong *)(uVar39 + 0x18);
      *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar39 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar39);
    }
  }
  uVar12 = (ulong)local_208;
  local_210 = &PTR_FUN_710523d988;
  local_208 = (undefined8 *)0x0;
  if (uVar12 != 0) {
    uVar39 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar39 != 0) {
      FUN_710392eb40(uVar39);
    }
    FUN_710392eb40(uVar12);
  }
  FUN_7103776910(&local_210,(long)puVar11,(long ****)"set_group_root",pppplVar21,ppppbVar23,param_5,
                 param_6,param_7,param_8);
  uVar12 = (ulong)local_208;
  if (puVar10 + 9 != &local_210) {
    local_208 = (undefined8 *)0x0;
    uVar39 = puVar10[10];
    puVar10[10] = uVar12;
    if (uVar39 != 0) {
      FUN_710392eb40(uVar39);
    }
  }
  uVar12 = (ulong)local_208;
  local_210 = &PTR_FUN_710523d9a8;
  local_208 = (undefined8 *)0x0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  FUN_7103776910(&local_230,(long)pppplVar1,(long ****)"set_ctrl_area",pppplVar21,ppppbVar23,param_5
                 ,param_6,param_7,param_8);
  lVar13 = *local_228;
  if (lVar13 == 0) {
    fVar45 = 540.0;
    fVar44 = -540.0;
    fVar48 = 960.0;
    fVar46 = -960.0;
  }
  else {
    fVar46 = *(float *)(lVar13 + 0x30);
    uVar12 = *(ulong *)(lVar13 + 0x30);
    fVar45 = ABS(*(float *)(lVar13 + 0x50) * *(float *)(lVar13 + 0x48));
    fVar48 = fVar45 * 0.5;
    fVar44 = ABS(*(float *)(lVar13 + 0x54) * *(float *)(lVar13 + 0x4c));
    bVar8 = *(byte *)(lVar13 + 0x5b) & 3;
    if (bVar8 == 2) {
      fVar46 = fVar46 - fVar48;
LAB_7101a5cc74:
      uVar12 = CONCAT44((int)(uVar12 >> 0x20),fVar46);
    }
    else if (bVar8 == 1) {
      fVar46 = fVar46 + fVar48;
      goto LAB_7101a5cc74;
    }
    fVar48 = fVar44 * 0.5;
    bVar8 = *(byte *)(lVar13 + 0x5b) >> 2 & 3;
    fVar46 = (float)(uVar12 >> 0x20);
    if (bVar8 == 2) {
      fVar46 = fVar48 + fVar46;
LAB_7101a5cca4:
      uVar12 = CONCAT44(fVar46,(int)uVar12);
    }
    else if (bVar8 == 1) {
      fVar46 = fVar46 - fVar48;
      goto LAB_7101a5cca4;
    }
    lVar13 = *(long *)(lVar13 + 0x18);
    if (lVar13 == 0) {
      fVar47 = (float)(uVar12 >> 0x20);
      uVar39 = uVar12;
    }
    else {
      do {
        fVar46 = (float)uVar12 + *(float *)(lVar13 + 0x30);
        uVar39 = (ulong)(uint)fVar46;
        fVar47 = (float)(uVar12 >> 0x20) + *(float *)(lVar13 + 0x34);
        uVar12 = CONCAT44(fVar47,fVar46);
        lVar13 = *(long *)(lVar13 + 0x18);
      } while (lVar13 != 0);
    }
    fVar48 = (float)uVar39 + 960.0;
    fVar45 = fVar45 * 0.5;
    fVar44 = fVar44 * 0.5;
    fVar46 = (fVar48 - fVar45) + -960.0;
    fVar48 = fVar48 + fVar45 + -960.0;
    fVar45 = (fVar44 - (540.0 - fVar47)) + 540.0;
    fVar44 = 540.0 - ((540.0 - fVar47) + fVar44);
  }
  uVar34 = *(uint *)((long)puVar10 + 0xc);
  iVar4 = uVar34 + 6;
  if (-1 < (int)(uVar34 + 3)) {
    iVar4 = uVar34 + 3;
  }
  *(int *)(puVar10 + 0x99) = iVar4 >> 2;
  *(undefined8 *)((long)puVar10 + 0x4cc) = 0;
  *(undefined4 *)((long)puVar10 + 0x4d4) = 0;
  if (0 < (int)uVar34) {
    uVar34 = 0;
    do {
      local_210 = &PTR_FUN_710523d9a8;
      puVar38 = (undefined8 *)
                FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
      if (puVar38 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_248 = 0;
          local_e0 = (long ***)&SUB_00000020;
          pppplVar21 = &local_e0;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_248);
          if (((uVar12 & 1) != 0) &&
             (puVar38 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,
                                       param_8), puVar38 != (undefined8 *)0x0)) goto LAB_7101a5cdd8;
        }
        puVar38 = (undefined8 *)0x0;
      }
LAB_7101a5cdd8:
      puVar38[2] = 0;
      puVar38[3] = 0;
      *puVar38 = 0;
      puVar38[1] = 0;
      pppplVar21 = (long ****)(ulong)uVar34;
      local_208 = puVar38;
      FUN_7103776910(&local_e0,(long)puVar11,(long ****)"set_group_%02d",pppplVar21,ppppbVar23,
                     param_5,param_6,param_7,param_8);
      puVar15 = local_d8[0];
      puVar38 = local_208;
      local_d8[0] = (undefined8 *)0x0;
      local_208 = puVar15;
      if (puVar38 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar38);
      }
      local_e0 = (long ***)&PTR_FUN_710523d9a8;
      local_d8[0] = (undefined8 *)0x0;
      puVar38 = (undefined8 *)puVar10[0xe];
      if (puVar38 == (undefined8 *)puVar10[0xf]) {
        lVar13 = (long)puVar38 - puVar10[0xd] >> 4;
        uVar12 = lVar13 + 1;
        if (uVar12 >> 0x3c != 0) goto LAB_7101a5e88c;
        lVar40 = (long)puVar10[0xf] - puVar10[0xd];
        if ((ulong)(lVar40 >> 4) < 0x7ffffffffffffff) {
          uVar39 = lVar40 >> 3;
          if (uVar12 <= uVar39) {
            uVar12 = uVar39;
          }
          if (uVar12 != 0) {
            if (uVar12 >> 0x3c == 0) goto LAB_7101a5cf24;
            goto LAB_7101a5e894;
          }
LAB_7101a5cf84:
          lVar40 = 0;
        }
        else {
          uVar12 = 0xfffffffffffffff;
LAB_7101a5cf24:
          ppplVar24 = (long ***)(uVar12 * 0x10);
          if (ppplVar24 == (long ***)0x0) {
            ppplVar24 = (long ***)0x1;
          }
          lVar40 = FUN_710392e290(0x10,ppplVar24,pppplVar21,ppppbVar23,param_5,param_6,param_7,
                                  param_8);
          if (lVar40 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_248 = 0;
              pppplVar21 = &local_e0;
              local_e0 = ppplVar24;
              uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_248);
              if (((uVar39 & 1) != 0) &&
                 (lVar40 = FUN_710392e290(0x10,ppplVar24,pppplVar21,ppppbVar23,param_5,param_6,
                                          param_7,param_8), lVar40 != 0)) goto LAB_7101a5cf88;
            }
            goto LAB_7101a5cf84;
          }
        }
LAB_7101a5cf88:
        puVar38 = (undefined8 *)(lVar40 + lVar13 * 0x10);
        *puVar38 = &PTR_FUN_710523d9a8;
        puVar15 = (undefined8 *)
                  FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
        if (puVar15 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_248 = 0;
            local_e0 = (long ***)&SUB_00000020;
            pppplVar21 = &local_e0;
            uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_248);
            if (((uVar39 & 1) != 0) &&
               (puVar15 = (undefined8 *)
                          FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,
                                         param_8), puVar15 != (undefined8 *)0x0))
            goto LAB_7101a5cfe8;
          }
          puVar15 = (undefined8 *)0x0;
        }
LAB_7101a5cfe8:
        puVar15[2] = 0;
        puVar15[3] = 0;
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar38[1] = puVar15;
        if (puVar38 != &local_210) {
          *puVar15 = *local_208;
          puVar15[1] = local_208[1];
          *(undefined8 *)(puVar38[1] + 0x10) = local_208[2];
          *(undefined8 *)(puVar38[1] + 0x18) = local_208[3];
        }
        puVar33 = (undefined8 *)puVar10[0xd];
        puVar41 = (undefined8 *)puVar10[0xe];
        puVar15 = puVar38 + 2;
        puVar42 = puVar33;
        if (puVar41 != puVar33) {
          lVar13 = 0;
          do {
            *(undefined ***)((long)puVar38 + lVar13 + -0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)((long)puVar38 + lVar13 + -8) = 0;
            if (puVar41 != puVar38) {
              uVar31 = *(undefined8 *)((long)puVar41 + lVar13 + -8);
              *(undefined8 *)((long)puVar41 + lVar13 + -8) = 0;
              uVar39 = *(ulong *)((long)puVar38 + lVar13 + -8);
              *(undefined8 *)((long)puVar38 + lVar13 + -8) = uVar31;
              if (uVar39 != 0) {
                FUN_710392eb40(uVar39);
              }
            }
            lVar13 = lVar13 + -0x10;
          } while ((long)puVar33 - (long)puVar41 != lVar13);
          puVar38 = (undefined8 *)((long)puVar38 + lVar13);
          puVar33 = (undefined8 *)puVar10[0xe];
          puVar42 = (undefined8 *)puVar10[0xd];
        }
        puVar10[0xd] = puVar38;
        puVar10[0xe] = puVar15;
        puVar10[0xf] = lVar40 + uVar12 * 0x10;
        while (puVar33 != puVar42) {
          puVar38 = puVar33 + -2;
          *puVar38 = &PTR_FUN_710523d9a8;
          uVar12 = puVar33[-1];
          puVar33[-1] = 0;
          puVar33 = puVar38;
          if (uVar12 != 0) {
            FUN_710392eb40(uVar12);
          }
        }
        if (puVar42 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar42);
        }
      }
      else {
        *puVar38 = &PTR_FUN_710523d9a8;
        puVar15 = (undefined8 *)
                  FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
        if (puVar15 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_248 = 0;
            local_e0 = (long ***)&SUB_00000020;
            pppplVar21 = &local_e0;
            uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_248);
            if (((uVar12 & 1) != 0) &&
               (puVar15 = (undefined8 *)
                          FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,
                                         param_8), puVar15 != (undefined8 *)0x0))
            goto LAB_7101a5ce78;
          }
          puVar15 = (undefined8 *)0x0;
        }
LAB_7101a5ce78:
        puVar15[2] = 0;
        puVar15[3] = 0;
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar38[1] = puVar15;
        if (puVar38 != &local_210) {
          *puVar15 = *local_208;
          *(undefined8 *)(puVar38[1] + 8) = local_208[1];
          *(undefined8 *)(puVar38[1] + 0x10) = local_208[2];
          *(undefined8 *)(puVar38[1] + 0x18) = local_208[3];
        }
        puVar10[0xe] = puVar10[0xe] + 0x10;
      }
      puVar38 = local_208;
      local_210 = &PTR_FUN_710523d9a8;
      local_208 = (undefined8 *)0x0;
      if (puVar38 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar38);
      }
      uVar34 = uVar34 + 1;
    } while ((int)uVar34 < *(int *)(puVar10 + 0x99));
    uVar34 = *(uint *)((long)puVar10 + 0xc);
  }
  uVar12 = puVar10[0x15];
  pvVar35 = (void *)puVar10[0x16];
  uVar39 = (ulong)(int)uVar34;
  lVar40 = (long)((long)pvVar35 - uVar12) >> 4;
  lVar13 = lVar40 * -0x1041041041041041 - uVar39;
  if (uVar39 <= (ulong)(lVar40 * -0x1041041041041041)) {
    if (lVar13 != 0) {
      puVar10[0x16] = uVar12 + uVar39 * 0x3f0;
    }
    goto joined_r0x007101a5d1a8;
  }
  if ((ulong)((puVar10[0x17] - (long)pvVar35 >> 4) * -0x1041041041041041) <
      uVar39 + lVar40 * 0x1041041041041041) {
    if ((int)uVar34 < 0) {
LAB_7101a5e88c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar43 = (long)(puVar10[0x17] - uVar12) >> 4;
    if ((ulong)(lVar43 * -0x1041041041041041) < 0x20820820820820) {
      uVar12 = lVar43 * -0x2082082082082082;
      local_278 = uVar39;
      if (uVar39 <= uVar12) {
        local_278 = uVar12;
      }
      if (local_278 != 0) goto LAB_7101a5d280;
      local_278 = 0;
LAB_7101a5d2e0:
      lVar43 = 0;
    }
    else {
      local_278 = 0x41041041041041;
LAB_7101a5d280:
      pppbVar26 = (byte ***)(local_278 * 0x3f0);
      if (pppbVar26 == (byte ***)0x0) {
        pppbVar26 = (byte ***)0x1;
      }
      lVar43 = FUN_710392e290(0x10,pppbVar26,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
      if (lVar43 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
          pppplVar21 = (long ****)&local_210;
          local_210 = (undefined **)pppbVar26;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
          if (((uVar12 & 1) != 0) &&
             (lVar43 = FUN_710392e290(0x10,pppbVar26,pppplVar21,ppppbVar23,param_5,param_6,param_7,
                                      param_8), lVar43 != 0)) goto LAB_7101a5d2e4;
        }
        goto LAB_7101a5d2e0;
      }
    }
LAB_7101a5d2e4:
    pvVar36 = (void *)(lVar43 + lVar40 * 0x10);
    pvVar35 = pvVar36;
    do {
      pppplVar21 = (long ****)0x3f0;
      memset(pvVar35,0,0x3f0);
      FUN_71017abd00((undefined8 *)((long)pvVar35 + 8));
      *(undefined8 *)((long)pvVar35 + 0x1b8) = 0xffffffffffffffff;
      *(undefined8 *)((long)pvVar35 + 0x1a8) = 0xffffffff;
      *(undefined8 *)((long)pvVar35 + 0x1b0) = 0;
      *(undefined2 *)((long)pvVar35 + 0x1c0) = 0;
      *(undefined2 *)((long)pvVar35 + 0x1cc) = 0xffff;
      *(undefined8 *)((long)pvVar35 + 0x1c4) = 0xffffffffffffffff;
      *(undefined8 *)((long)pvVar35 + 0x1d0) = 0;
      *(undefined2 *)((long)pvVar35 + 0x1d8) = 0;
      *(undefined4 *)((long)pvVar35 + 0x208) = 0xffffffff;
      *(undefined1 *)((long)pvVar35 + 0x20c) = 0;
      *(undefined4 *)((long)pvVar35 + 0x210) = 0;
      *(undefined1 *)((long)pvVar35 + 0x214) = 0;
      *(undefined1 **)((long)pvVar35 + 0x218) = &DAT_3f8000003f800000;
      *(undefined1 **)((long)pvVar35 + 0x220) = &DAT_3f8000003f800000;
      *(undefined2 *)((long)pvVar35 + 0x228) = 0;
      FUN_71017abd00((undefined8 *)((long)pvVar35 + 0x230));
      *(undefined1 *)((long)pvVar35 + 0x3d0) = 0;
      *(undefined8 *)((long)pvVar35 + 0x3d8) = 0xb95d0753f;
      lVar13 = lVar13 + 1;
      *(undefined1 *)((long)pvVar35 + 0x3e0) = 0xff;
      *(undefined4 *)((long)pvVar35 + 1000) = 0;
      *(undefined2 *)((long)pvVar35 + 0x3ec) = 0;
      pvVar35 = (void *)((long)pvVar35 + 0x3f0);
    } while (lVar13 != 0);
    uVar12 = puVar10[0x15];
    uVar14 = puVar10[0x16];
    if (uVar14 != uVar12) {
      lVar13 = 0;
      do {
        lVar40 = uVar14 + lVar13;
        *(undefined4 *)((long)pvVar36 + lVar13 + -0x3f0) = *(undefined4 *)(lVar40 + -0x3f0);
        FUN_71015547e0((undefined8 *)((long)pvVar36 + lVar13 + -1000),(undefined8 *)(lVar40 + -1000)
                      );
        uVar7 = *(undefined2 *)(lVar40 + -0x230);
        uVar31 = *(undefined8 *)(lVar40 + -0x240);
        uVar32 = *(undefined8 *)(lVar40 + -0x238);
        *(undefined8 *)((long)pvVar36 + lVar13 + -0x248) = *(undefined8 *)(lVar40 + -0x248);
        *(undefined2 *)((long)pvVar36 + lVar13 + -0x230) = uVar7;
        *(undefined8 *)((long)pvVar36 + lVar13 + -0x238) = uVar32;
        *(undefined8 *)((long)pvVar36 + lVar13 + -0x240) = uVar31;
        uVar31 = *(undefined8 *)(lVar40 + -0x22c);
        puVar16 = (uint *)((long)pvVar36 + lVar13 + -0x220);
        *(undefined2 *)((long)pvVar36 + lVar13 + -0x224) = *(undefined2 *)(lVar40 + -0x224);
        *(undefined8 *)((long)pvVar36 + lVar13 + -0x22c) = uVar31;
        *puVar16 = 0;
        FUN_7101696040(puVar16,(ushort *)(lVar40 + -0x218));
        uVar31 = *(undefined8 *)(lVar40 + -0x1e8);
        *(undefined8 *)((long)pvVar36 + lVar13 + -0x1e3) = *(undefined8 *)(lVar40 + -0x1e3);
        *(undefined8 *)((long)pvVar36 + lVar13 + -0x1e8) = uVar31;
        uVar32 = *(undefined8 *)(lVar40 + -0x1d0);
        uVar31 = *(undefined8 *)(lVar40 + -0x1d8);
        *(undefined2 *)((long)pvVar36 + lVar13 + -0x1c8) = *(undefined2 *)(lVar40 + -0x1c8);
        *(undefined8 *)((long)pvVar36 + lVar13 + -0x1d0) = uVar32;
        *(undefined8 *)((long)pvVar36 + lVar13 + -0x1d8) = uVar31;
        FUN_71015547e0((undefined8 *)((long)pvVar36 + lVar13 + -0x1c0),
                       (undefined8 *)(lVar40 + -0x1c0));
        uVar31 = *(undefined8 *)(lVar40 + -0x20);
        uVar32 = *(undefined8 *)(lVar40 + -0x18);
        *(undefined1 *)((long)pvVar36 + lVar13 + -0x10) = *(undefined1 *)(lVar40 + -0x10);
        *(undefined8 *)((long)pvVar36 + lVar13 + -0x20) = uVar31;
        *(undefined8 *)((long)pvVar36 + lVar13 + -0x18) = uVar32;
        uVar6 = *(undefined4 *)(lVar40 + -8);
        lVar28 = lVar13 + -0x3f0;
        *(undefined2 *)((long)pvVar36 + lVar13 + -4) = *(undefined2 *)(lVar40 + -4);
        *(undefined4 *)((long)pvVar36 + lVar13 + -8) = uVar6;
        lVar13 = lVar28;
      } while (uVar12 - uVar14 != lVar28);
      uVar12 = puVar10[0x15];
      pvVar36 = (void *)((long)pvVar36 + lVar28);
    }
    puVar10[0x15] = pvVar36;
    puVar10[0x16] = lVar43 + uVar39 * 0x3f0;
    puVar10[0x17] = lVar43 + local_278 * 0x3f0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
  }
  else {
    do {
      pppplVar21 = (long ****)0x3f0;
      memset(pvVar35,0,0x3f0);
      FUN_71017abd00((undefined8 *)((long)pvVar35 + 8));
      *(undefined8 *)((long)pvVar35 + 0x1a8) = 0xffffffff;
      *(undefined8 *)((long)pvVar35 + 0x1b0) = 0;
      *(undefined8 *)((long)pvVar35 + 0x1b8) = 0xffffffffffffffff;
      *(undefined2 *)((long)pvVar35 + 0x1c0) = 0;
      *(undefined2 *)((long)pvVar35 + 0x1cc) = 0xffff;
      *(undefined8 *)((long)pvVar35 + 0x1c4) = 0xffffffffffffffff;
      *(undefined8 *)((long)pvVar35 + 0x1d0) = 0;
      *(undefined2 *)((long)pvVar35 + 0x1d8) = 0;
      *(undefined4 *)((long)pvVar35 + 0x208) = 0xffffffff;
      *(undefined1 *)((long)pvVar35 + 0x20c) = 0;
      *(undefined4 *)((long)pvVar35 + 0x210) = 0;
      *(undefined1 *)((long)pvVar35 + 0x214) = 0;
      *(undefined1 **)((long)pvVar35 + 0x218) = &DAT_3f8000003f800000;
      *(undefined1 **)((long)pvVar35 + 0x220) = &DAT_3f8000003f800000;
      *(undefined2 *)((long)pvVar35 + 0x228) = 0;
      FUN_71017abd00((undefined8 *)((long)pvVar35 + 0x230));
      *(undefined1 *)((long)pvVar35 + 0x3d0) = 0;
      *(undefined8 *)((long)pvVar35 + 0x3d8) = 0xb95d0753f;
      lVar13 = lVar13 + 1;
      *(undefined1 *)((long)pvVar35 + 0x3e0) = 0xff;
      *(undefined4 *)((long)pvVar35 + 1000) = 0;
      *(undefined2 *)((long)pvVar35 + 0x3ec) = 0;
      pvVar35 = (void *)(puVar10[0x16] + 0x3f0);
      puVar10[0x16] = pvVar35;
    } while (lVar13 != 0);
  }
  uVar34 = *(uint *)((long)puVar10 + 0xc);
joined_r0x007101a5d1a8:
  uVar12 = (ulong)uVar34;
  if (0 < (int)uVar34) {
    lVar13 = 0;
    uVar39 = 0;
    do {
      uVar12 = ((long)(puVar10[0x16] - puVar10[0x15]) >> 4) * -0x1041041041041041;
      if (uVar12 < uVar39 || uVar12 - uVar39 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar30 = (undefined4 *)(puVar10[0x15] + lVar13);
      lVar13 = lVar13 + 0x3f0;
      *puVar30 = (int)uVar39;
      puVar30[4] = (uint)((long)*(int *)(puVar10 + 2) <= (long)uVar39);
      uVar12 = (ulong)*(int *)((long)puVar10 + 0xc);
      uVar39 = uVar39 + 1;
    } while ((long)uVar39 < (long)uVar12);
  }
  puVar30 = (undefined4 *)((ulong)&local_210 | 10);
  uVar39 = (ulong)&local_248 | 4;
  uVar34 = 0;
  do {
    local_234 = *(char *)(puVar10 + 4);
    local_231 = (int)uVar34 < (int)uVar12;
    local_233 = *(char *)((long)puVar10 + 0x21);
    local_232 = *(undefined1 *)(puVar10 + 0x9f);
    local_258 = &PTR_FUN_71050a8f08;
    local_250 = (undefined8 *)0x0;
    uVar32 = *puVar10;
    local_248 = uVar34;
    local_244 = fVar46;
    fStack_240 = fVar48;
    local_23c = fVar44;
    fStack_238 = fVar45;
    puVar38 = (undefined8 *)
              FUN_710392e290(0x10,200,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
    uVar31 = extraout_x1_02;
    if (puVar38 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        local_210 = (undefined **)&DAT_000000c8;
        pppplVar21 = (long ****)&local_210;
        auVar49 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        uVar31 = auVar49._8_8_;
        if (((auVar49._0_8_ & 1) != 0) &&
           (puVar38 = (undefined8 *)
                      FUN_710392e290(0x10,200,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8)
           , uVar31 = extraout_x1_03, puVar38 != (undefined8 *)0x0)) goto LAB_7101a5d680;
      }
      puVar38 = (undefined8 *)0x0;
    }
LAB_7101a5d680:
    *puVar38 = uVar32;
    puVar38[1] = 0;
    FUN_7103776290(puVar38 + 2,uVar31,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
    FUN_7103776290(puVar38 + 4,extraout_x1_04,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8)
    ;
    FUN_7103776290(puVar38 + 6,extraout_x1_05,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8)
    ;
    puVar38[8] = &PTR_FUN_710523d9a8;
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
    if (puVar15 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        local_210 = (undefined **)&SUB_00000020;
        pppplVar21 = (long ****)&local_210;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        if (((uVar12 & 1) != 0) &&
           (puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8
                                    ), puVar15 != (undefined8 *)0x0)) goto LAB_7101a5d6f4;
      }
      puVar15 = (undefined8 *)0x0;
    }
LAB_7101a5d6f4:
    puVar15[2] = 0;
    puVar15[3] = 0;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar38[9] = puVar15;
    puVar38[10] = &PTR_FUN_710523d9a8;
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
    if (puVar15 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        local_210 = (undefined **)&SUB_00000020;
        pppplVar21 = (long ****)&local_210;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        if (((uVar12 & 1) != 0) &&
           (puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8
                                    ), puVar15 != (undefined8 *)0x0)) goto LAB_7101a5d754;
      }
      puVar15 = (undefined8 *)0x0;
    }
LAB_7101a5d754:
    puVar15[2] = 0;
    puVar15[3] = 0;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar38[0xb] = puVar15;
    puVar38[0xc] = &PTR_FUN_710523d9a8;
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
    uVar31 = extraout_x1_06;
    if (puVar15 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        local_210 = (undefined **)&SUB_00000020;
        pppplVar21 = (long ****)&local_210;
        auVar49 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        uVar31 = auVar49._8_8_;
        if (((auVar49._0_8_ & 1) != 0) &&
           (puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8
                                    ), uVar31 = extraout_x1_07, puVar15 != (undefined8 *)0x0))
        goto LAB_7101a5d7b4;
      }
      puVar15 = (undefined8 *)0x0;
    }
LAB_7101a5d7b4:
    puVar15[2] = 0;
    puVar15[3] = 0;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar38[0xd] = puVar15;
    FUN_7103776290(puVar38 + 0xe,uVar31,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
    FUN_7103776290(puVar38 + 0x10,extraout_x1_08,pppplVar21,ppppbVar23,param_5,param_6,param_7,
                   param_8);
    FUN_7103776290(puVar38 + 0x12,extraout_x1_09,pppplVar21,ppppbVar23,param_5,param_6,param_7,
                   param_8);
    puVar15 = local_250;
    puVar38[0x14] = 0;
    puVar38[0x15] = 0x300000000;
    *(undefined4 *)(puVar38 + 0x16) = 0xffffffff;
    *(undefined8 *)((long)puVar38 + 0xba) = 0;
    *(undefined8 *)((long)puVar38 + 0xb4) = 0;
    if (local_250 != (undefined8 *)0x0) {
      plVar17 = *(long **)((long)local_250 + 0xa0);
      *(undefined8 *)((long)local_250 + 0xa0) = 0;
      local_250 = puVar38;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      uVar12 = *(ulong *)((long)puVar15 + 0x98);
      *(undefined ***)((long)puVar15 + 0x90) = &PTR_FUN_710523d988;
      *(undefined8 *)((long)puVar15 + 0x98) = 0;
      if (uVar12 != 0) {
        uVar14 = *(ulong *)(uVar12 + 0x18);
        *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar12 + 0x18) = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40(uVar12);
      }
      uVar12 = *(ulong *)((long)puVar15 + 0x88);
      *(undefined ***)((long)puVar15 + 0x80) = &PTR_FUN_710523d988;
      *(undefined8 *)((long)puVar15 + 0x88) = 0;
      if (uVar12 != 0) {
        uVar14 = *(ulong *)(uVar12 + 0x18);
        *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar12 + 0x18) = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40(uVar12);
      }
      uVar12 = *(ulong *)((long)puVar15 + 0x78);
      *(undefined ***)((long)puVar15 + 0x70) = &PTR_FUN_710523d988;
      *(undefined8 *)((long)puVar15 + 0x78) = 0;
      if (uVar12 != 0) {
        uVar14 = *(ulong *)(uVar12 + 0x18);
        *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar12 + 0x18) = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40(uVar12);
      }
      uVar12 = *(ulong *)((long)puVar15 + 0x68);
      *(undefined ***)((long)puVar15 + 0x60) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)puVar15 + 0x68) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      uVar12 = *(ulong *)((long)puVar15 + 0x58);
      *(undefined ***)((long)puVar15 + 0x50) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)puVar15 + 0x58) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      uVar12 = *(ulong *)((long)puVar15 + 0x48);
      *(undefined ***)((long)puVar15 + 0x40) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)puVar15 + 0x48) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      uVar12 = *(ulong *)((long)puVar15 + 0x38);
      *(undefined ***)((long)puVar15 + 0x30) = &PTR_FUN_710523d988;
      *(undefined8 *)((long)puVar15 + 0x38) = 0;
      if (uVar12 != 0) {
        uVar14 = *(ulong *)(uVar12 + 0x18);
        *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar12 + 0x18) = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40(uVar12);
      }
      uVar12 = *(ulong *)((long)puVar15 + 0x28);
      *(undefined ***)((long)puVar15 + 0x20) = &PTR_FUN_710523d988;
      *(undefined8 *)((long)puVar15 + 0x28) = 0;
      if (uVar12 != 0) {
        uVar14 = *(ulong *)(uVar12 + 0x18);
        *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar12 + 0x18) = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40(uVar12);
      }
      uVar12 = *(ulong *)((long)puVar15 + 0x18);
      *(undefined ***)((long)puVar15 + 0x10) = &PTR_FUN_710523d988;
      *(undefined8 *)((long)puVar15 + 0x18) = 0;
      if (uVar12 != 0) {
        uVar14 = *(ulong *)(uVar12 + 0x18);
        *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar12 + 0x18) = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40((ulong)puVar15);
      puVar38 = local_250;
    }
    local_250 = puVar38;
    puVar38 = local_250;
    uVar12 = (ulong)local_248;
    uVar5 = local_248 + 3;
    if (-1 < (int)local_248) {
      uVar5 = local_248;
    }
    *(uint *)(local_250 + 1) = local_248;
    *(int *)((long)local_250 + 0xc) = (int)uVar5 >> 2;
    *(char *)((long)local_250 + 0xbf) = local_231;
    FUN_7103776640(&local_210,(long)puVar11,(byte ****)"set_part_chara_%02d",uVar12,ppppbVar23,
                   param_5,param_6,param_7,param_8);
    puVar33 = local_208;
    puVar15 = puVar38 + 2;
    if (puVar15 != &local_210) {
      local_208 = (undefined8 *)0x0;
      uVar14 = puVar38[3];
      puVar38[3] = puVar33;
      if (uVar14 != 0) {
        uVar18 = *(ulong *)(uVar14 + 0x18);
        *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar14 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40(uVar14);
      }
    }
    puVar33 = local_208;
    local_210 = &PTR_FUN_710523d988;
    local_208 = (undefined8 *)0x0;
    if (puVar33 != (undefined8 *)0x0) {
      uVar14 = puVar33[3];
      puVar33[2] = &PTR_FUN_710523d9a8;
      puVar33[3] = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      FUN_710392eb40((ulong)puVar33);
    }
    lVar13 = puVar38[3];
    if ((*(long *)(lVar13 + 8) != 0) &&
       (lVar40 = *(long *)(*(long *)(lVar13 + 8) + 0x18), lVar40 != 0)) {
      *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) & 0xfe | *(byte *)((long)puVar38 + 0xbf);
      lVar13 = puVar38[3];
    }
    FUN_7103778300(0x3f800000,lVar13,0x710435be3c);
    FUN_7103778300(0x3f800000,puVar38[3],0x71042e6b72);
    FUN_7103778300(0x3f800000,puVar38[3],0x7104291651);
    *(char *)((long)puVar38 + 0xbc) = local_234;
    *(char *)((long)puVar38 + 0xbd) = local_233;
    *(undefined1 *)((long)puVar38 + 0xbe) = local_232;
    FUN_7103776640(&local_210,(long)puVar15,(byte ****)"set_parts_btn_nb",uVar12,ppppbVar23,param_5,
                   param_6,param_7,param_8);
    uVar14 = (ulong)local_208;
    puVar33 = puVar38 + 4;
    if (puVar33 != &local_210) {
      local_208 = (undefined8 *)0x0;
      uVar18 = puVar38[5];
      puVar38[5] = uVar14;
      if (uVar18 != 0) {
        uVar14 = *(ulong *)(uVar18 + 0x18);
        *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar18 + 0x18) = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40(uVar18);
      }
    }
    uVar14 = (ulong)local_208;
    local_210 = &PTR_FUN_710523d988;
    local_208 = (undefined8 *)0x0;
    if (uVar14 != 0) {
      uVar18 = *(ulong *)(uVar14 + 0x18);
      *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar14 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar14);
    }
    FUN_71003a4ca0((uint *)&local_210,"player_color_%dp",1,uVar12,ppppbVar23,param_5,param_6,param_7
                   ,param_8);
    FUN_7103778300(0x3f800000,puVar38[5],(long)&local_208);
    FUN_7103776910(&local_210,(long)puVar33,(long ****)"set_txt_number",uVar12,ppppbVar23,param_5,
                   param_6,param_7,param_8);
    uVar14 = (ulong)(*(int *)(puVar38 + 1) + 1);
    FUN_710377a310((long)&local_210,1);
    uVar12 = (ulong)local_208;
    local_210 = &PTR_FUN_710523d9a8;
    local_208 = (undefined8 *)0x0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_7103776910(&local_210,(long)puVar33,(long ****)"set_txt_number_sh",uVar14,ppppbVar23,param_5
                   ,param_6,param_7,param_8);
    uVar14 = (ulong)(*(int *)(puVar38 + 1) + 1);
    FUN_710377a310((long)&local_210,1);
    uVar12 = (ulong)local_208;
    local_210 = &PTR_FUN_710523d9a8;
    local_208 = (undefined8 *)0x0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_7103776640(&local_210,(long)puVar15,(byte ****)"set_btn_name",uVar14,ppppbVar23,param_5,
                   param_6,param_7,param_8);
    uVar12 = (ulong)local_208;
    puVar33 = puVar38 + 6;
    if (puVar33 != &local_210) {
      local_208 = (undefined8 *)0x0;
      uVar18 = puVar38[7];
      puVar38[7] = uVar12;
      if (uVar18 != 0) {
        uVar12 = *(ulong *)(uVar18 + 0x18);
        *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar18 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar18);
      }
    }
    uVar12 = (ulong)local_208;
    local_210 = &PTR_FUN_710523d988;
    local_208 = (undefined8 *)0x0;
    if (uVar12 != 0) {
      uVar18 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar12);
    }
    FUN_71003a4ca0((uint *)&local_210,"player_color_%dp",1,uVar14,ppppbVar23,param_5,param_6,param_7
                   ,param_8);
    FUN_7103778300(0x3f800000,puVar38[7],(long)&local_208);
    FUN_7101a587e0((long)puVar38,3);
    FUN_7103776910(&local_210,(long)puVar33,(long ****)"set_txt_00",uVar14,ppppbVar23,param_5,
                   param_6,param_7,param_8);
    uVar12 = (ulong)local_208;
    if (puVar38 + 8 != &local_210) {
      local_208 = (undefined8 *)0x0;
      uVar18 = puVar38[9];
      puVar38[9] = uVar12;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
    }
    uVar12 = (ulong)local_208;
    local_210 = &PTR_FUN_710523d9a8;
    local_208 = (undefined8 *)0x0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_7103776910(&local_210,(long)puVar33,(long ****)"set_txt_level",uVar14,ppppbVar23,param_5,
                   param_6,param_7,param_8);
    uVar12 = (ulong)local_208;
    if (puVar38 + 10 != &local_210) {
      local_208 = (undefined8 *)0x0;
      uVar18 = puVar38[0xb];
      puVar38[0xb] = uVar12;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
    }
    uVar12 = (ulong)local_208;
    local_210 = &PTR_FUN_710523d9a8;
    local_208 = (undefined8 *)0x0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_7103776910(&local_210,(long)puVar33,(long ****)"set_txt_level",uVar14,ppppbVar23,param_5,
                   param_6,param_7,param_8);
    uVar12 = (ulong)local_208;
    if (puVar38 + 0xc != &local_210) {
      local_208 = (undefined8 *)0x0;
      uVar18 = puVar38[0xd];
      puVar38[0xd] = uVar12;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
    }
    uVar12 = (ulong)local_208;
    local_210 = &PTR_FUN_710523d9a8;
    local_208 = (undefined8 *)0x0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_7103776640(&local_210,(long)puVar15,(byte ****)"set_parts_btn_chara",uVar14,ppppbVar23,
                   param_5,param_6,param_7,param_8);
    uVar12 = (ulong)local_208;
    if (puVar38 + 0xe != &local_210) {
      local_208 = (undefined8 *)0x0;
      uVar18 = puVar38[0xf];
      puVar38[0xf] = uVar12;
      if (uVar18 != 0) {
        uVar12 = *(ulong *)(uVar18 + 0x18);
        *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar18 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar18);
      }
    }
    uVar12 = (ulong)local_208;
    local_210 = &PTR_FUN_710523d988;
    local_208 = (undefined8 *)0x0;
    if (uVar12 != 0) {
      uVar18 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar12);
    }
    FUN_7103778300(0x3f800000,puVar38[0xf],0x710432a22d);
    FUN_71003a4ca0((uint *)&local_e0,"player_color_%dp",1,uVar14,ppppbVar23,param_5,param_6,param_7,
                   param_8);
    FUN_7103776640(&local_210,(long)puVar15,(byte ****)"set_btn_sp",uVar14,ppppbVar23,param_5,
                   param_6,param_7,param_8);
    uVar12 = (ulong)local_208;
    if (puVar38 + 0x10 != &local_210) {
      local_208 = (undefined8 *)0x0;
      uVar18 = puVar38[0x11];
      puVar38[0x11] = uVar12;
      if (uVar18 != 0) {
        uVar12 = *(ulong *)(uVar18 + 0x18);
        *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar18 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar18);
      }
    }
    uVar12 = (ulong)local_208;
    local_210 = &PTR_FUN_710523d988;
    local_208 = (undefined8 *)0x0;
    if (uVar12 != 0) {
      uVar18 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar12);
    }
    FUN_7103778300(0x3f800000,puVar38[0x11],(long)local_d8);
    FUN_7103778300(0x3f800000,puVar38[0x11],0x71043be6a5);
    FUN_7103776640(&local_210,(long)puVar15,(byte ****)"set_btn_hd",uVar14,ppppbVar23,param_5,
                   param_6,param_7,param_8);
    uVar12 = (ulong)local_208;
    if (puVar38 + 0x12 != &local_210) {
      local_208 = (undefined8 *)0x0;
      uVar18 = puVar38[0x13];
      puVar38[0x13] = uVar12;
      if (uVar18 != 0) {
        uVar12 = *(ulong *)(uVar18 + 0x18);
        *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar18 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar18);
      }
    }
    uVar12 = (ulong)local_208;
    local_210 = &PTR_FUN_710523d988;
    local_208 = (undefined8 *)0x0;
    if (uVar12 != 0) {
      uVar18 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar12);
    }
    FUN_7103778300(0x3f800000,puVar38[0x13],(long)local_d8);
    if (local_234 == '\x02') {
      lVar13 = puVar38[0x13];
      puVar20 = &DAT_710427e6d1;
LAB_7101a5dea8:
      FUN_7103778300(0x3f800000,lVar13,(long)puVar20);
    }
    else if (local_233 == '\x02') {
      lVar13 = puVar38[0x13];
      puVar20 = &DAT_7104329fc1;
      goto LAB_7101a5dea8;
    }
    FUN_7103776910(&local_210,(long)puVar15,(long ****)"set_txt_early",uVar14,ppppbVar23,param_5,
                   param_6,param_7,param_8);
    FUN_710377a280((long)&local_210,(byte *)"mel_tournament_guest_n",1);
    uVar12 = (ulong)local_208;
    local_210 = &PTR_FUN_710523d9a8;
    local_208 = (undefined8 *)0x0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    local_208 = (undefined8 *)CONCAT62(local_208._2_6_,0x101);
    local_210 = (undefined **)0x0;
    *(undefined2 *)(puVar30 + 1) = 0;
    *puVar30 = 0;
    local_200 = 1;
    local_1fc = 1;
    local_1fa = 1;
    local_1c0 = (long *)0x0;
    local_190 = (long *)0x0;
    local_160 = (long *)0x0;
    local_130 = (long *)0x0;
    local_100 = (long *)0x0;
    local_f0 = 0;
    local_1f8 = &DAT_41f0000000000000;
    local_1f0 = 0;
    FUN_710337df20((long)&local_210);
    uVar31 = local_208;
    plVar17 = puVar38 + 0x14;
    ppppbVar23 = (byte ****)&local_210;
    local_210 = (undefined **)CONCAT44(3,(uint)local_210);
    local_208._0_2_ = (ushort)(byte)local_208;
    uVar32 = local_208;
    local_208._5_3_ = SUB83(uVar31,5);
    local_208._0_4_ = (undefined4)uVar32;
    local_208._0_5_ = CONCAT14(1,(undefined4)local_208);
    FUN_7103770b30(plVar17,puVar15,(long ****)"selector",ppppbVar23,param_5,param_6,param_7,param_8)
    ;
    FUN_71037717d0(plVar17,0,"set_parts_btn_nb",ppppbVar23,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar17,1,"set_parts_btn_chara",ppppbVar23,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar17,2,"set_btn_name",ppppbVar23,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar17,3,"set_btn_sp",ppppbVar23,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar17,4,"set_btn_hd",ppppbVar23,param_5,param_6,param_7,param_8);
    (**(code **)(*(long *)puVar38[0x14] + 0x60))
              ((long *)puVar38[0x14],*(undefined1 *)((long)puVar38 + 0xbf));
    (**(code **)(*(long *)puVar38[0x14] + 0x70))
              ((long *)puVar38[0x14],*(undefined1 *)((long)puVar38 + 0xbf));
    FUN_7103771d60(&local_220,puVar38[0x14],(long ****)0x0,ppppbVar23,param_5,param_6,param_7,
                   param_8);
    plVar37 = local_218;
    plVar19 = (long *)*local_218;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x1b8))(plVar19,uVar39);
    }
    local_220 = (long ***)&PTR_FUN_710523d9c8;
    local_218 = (long *)0x0;
    if (plVar37 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar37);
    }
    FUN_7103771d60(&local_220,*plVar17,(long ****)0x1,ppppbVar23,param_5,param_6,param_7,param_8);
    plVar37 = local_218;
    plVar19 = (long *)*local_218;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x1b8))(plVar19,uVar39);
    }
    local_220 = (long ***)&PTR_FUN_710523d9c8;
    local_218 = (long *)0x0;
    if (plVar37 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar37);
    }
    FUN_7103771d60(&local_220,*plVar17,(long ****)0x2,ppppbVar23,param_5,param_6,param_7,param_8);
    plVar37 = local_218;
    plVar19 = (long *)*local_218;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x1b8))(plVar19,uVar39);
    }
    local_220 = (long ***)&PTR_FUN_710523d9c8;
    local_218 = (long *)0x0;
    if (plVar37 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar37);
    }
    FUN_7103771d60(&local_220,*plVar17,(long ****)0x3,ppppbVar23,param_5,param_6,param_7,param_8);
    plVar37 = local_218;
    plVar19 = (long *)*local_218;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x1b8))(plVar19,uVar39);
    }
    local_220 = (long ***)&PTR_FUN_710523d9c8;
    local_218 = (long *)0x0;
    if (plVar37 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar37);
    }
    FUN_7103771d60(&local_220,*plVar17,(long ****)&DAT_00000004,ppppbVar23,param_5,param_6,param_7,
                   param_8);
    plVar37 = local_218;
    plVar19 = (long *)*local_218;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x1b8))(plVar19,uVar39);
    }
    local_220 = (long ***)&PTR_FUN_710523d9c8;
    local_218 = (long *)0x0;
    if (plVar37 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar37);
    }
    local_220 = (long ***)0x151ca6c028;
    FUN_7103772070(*plVar17,0,&local_220,ppppbVar23,param_5,param_6,param_7,param_8);
    lVar13 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
    if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar13 >> 3) < 2) {
      local_220 = (long ***)0x0;
    }
    else {
      local_220 = *(long ****)(lVar13 + 8);
    }
    pppplVar21 = &local_220;
    FUN_7103772070(*plVar17,1,pppplVar21,ppppbVar23,param_5,param_6,param_7,param_8);
    lVar13 = *(long *)(*plVar17 + 0x1b8);
    if (lVar13 != 0) {
      lVar40 = *plVar17 + 0x1b8;
      lVar43 = lVar40;
      lVar28 = lVar13;
      do {
        bVar9 = *(int *)(lVar28 + 0x20) < 0;
        if (!bVar9) {
          lVar43 = lVar28;
        }
        lVar28 = *(long *)(lVar28 + (ulong)bVar9 * 8);
      } while (lVar28 != 0);
      if (((lVar43 != lVar40) && (*(int *)(lVar43 + 0x20) < 1)) &&
         (plVar37 = *(long **)(lVar43 + 0x28), plVar37 != (long *)0x0)) {
        (**(code **)(*plVar37 + 0x1f8))(plVar37,1);
        pppplVar21 = (long ****)0x0;
        (**(code **)(*plVar37 + 0x388))(plVar37,0);
        lVar40 = *plVar17 + 0x1b8;
        lVar13 = *(long *)(*plVar17 + 0x1b8);
      }
      lVar43 = lVar40;
      lVar28 = lVar13;
      if (lVar13 != 0) {
        do {
          if (1 < *(int *)(lVar28 + 0x20)) {
            lVar43 = lVar28;
          }
          lVar28 = *(long *)(lVar28 + (ulong)(*(int *)(lVar28 + 0x20) < 2) * 8);
        } while (lVar28 != 0);
        if (((lVar43 != lVar40) && (*(int *)(lVar43 + 0x20) < 3)) &&
           (plVar37 = *(long **)(lVar43 + 0x28), plVar37 != (long *)0x0)) {
          (**(code **)(*plVar37 + 0x1f8))(plVar37,0);
          pppplVar21 = (long ****)0x0;
          (**(code **)(*plVar37 + 0x388))(plVar37,1);
          lVar40 = *plVar17 + 0x1b8;
          lVar13 = *(long *)(*plVar17 + 0x1b8);
        }
        if (lVar13 != 0) {
          lVar43 = lVar40;
          lVar28 = lVar13;
          do {
            if (2 < *(int *)(lVar28 + 0x20)) {
              lVar43 = lVar28;
            }
            lVar28 = *(long *)(lVar28 + (ulong)(*(int *)(lVar28 + 0x20) < 3) * 8);
          } while (lVar28 != 0);
          if (((lVar43 != lVar40) && (*(int *)(lVar43 + 0x20) < 4)) &&
             (plVar37 = *(long **)(lVar43 + 0x28), plVar37 != (long *)0x0)) {
            bVar9 = *(char *)((long)puVar38 + 0xbe) == '\0';
            (**(code **)(*plVar37 + 0x1f8))(plVar37,!bVar9);
            pppplVar21 = (long ****)0x0;
            (**(code **)(*plVar37 + 0x388))(plVar37,bVar9);
            lVar40 = *plVar17 + 0x1b8;
            lVar13 = *(long *)(*plVar17 + 0x1b8);
          }
          if (lVar13 != 0) {
            lVar43 = lVar40;
            do {
              if (3 < *(int *)(lVar13 + 0x20)) {
                lVar43 = lVar13;
              }
              lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x20) < 4) * 8);
            } while (lVar13 != 0);
            if (((lVar43 != lVar40) && (*(int *)(lVar43 + 0x20) < 5)) &&
               (plVar17 = *(long **)(lVar43 + 0x28), plVar17 != (long *)0x0)) {
              bVar9 = *(char *)((long)puVar38 + 0xbd) == '\x02';
              (**(code **)(*plVar17 + 0x1f8))(plVar17,bVar9);
              pppplVar21 = (long ****)0x0;
              (**(code **)(*plVar17 + 0x388))(plVar17,!bVar9);
            }
          }
        }
      }
    }
    *(undefined1 *)((long)puVar38 + 0xc1) = 0;
    if (alStack_120 == local_100) {
      pcVar25 = *(code **)(*local_100 + 0x20);
LAB_7101a5e3c8:
      (*pcVar25)();
    }
    else if (local_100 != (long *)0x0) {
      pcVar25 = *(code **)(*local_100 + 0x28);
      goto LAB_7101a5e3c8;
    }
    if (alStack_150 == local_130) {
      pcVar25 = *(code **)(*local_130 + 0x20);
LAB_7101a5e3f4:
      (*pcVar25)();
    }
    else if (local_130 != (long *)0x0) {
      pcVar25 = *(code **)(*local_130 + 0x28);
      goto LAB_7101a5e3f4;
    }
    if (alStack_180 == local_160) {
      pcVar25 = *(code **)(*local_160 + 0x20);
LAB_7101a5e420:
      (*pcVar25)();
    }
    else if (local_160 != (long *)0x0) {
      pcVar25 = *(code **)(*local_160 + 0x28);
      goto LAB_7101a5e420;
    }
    if (alStack_1b0 == local_190) {
      pcVar25 = *(code **)(*local_190 + 0x20);
LAB_7101a5e44c:
      (*pcVar25)();
    }
    else if (local_190 != (long *)0x0) {
      pcVar25 = *(code **)(*local_190 + 0x28);
      goto LAB_7101a5e44c;
    }
    if (alStack_1e0 == local_1c0) {
      pcVar25 = *(code **)(*local_1c0 + 0x20);
LAB_7101a5e478:
      (*pcVar25)();
    }
    else if (local_1c0 != (long *)0x0) {
      pcVar25 = *(code **)(*local_1c0 + 0x28);
      goto LAB_7101a5e478;
    }
    if (local_231 != '\0') {
      puVar38 = (undefined8 *)puVar10[0x19];
      if (puVar38 < (undefined8 *)puVar10[0x1a]) {
        FUN_7101a58b00(puVar38,&local_258);
        puVar10[0x19] = puVar10[0x19] + 0x10;
      }
      else {
        lVar13 = (long)puVar38 - puVar10[0x18] >> 4;
        uVar12 = lVar13 + 1;
        if (uVar12 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar40 = (long)puVar10[0x1a] - puVar10[0x18];
        if ((ulong)(lVar40 >> 4) < 0x7ffffffffffffff) {
          uVar14 = lVar40 >> 3;
          if (uVar12 <= uVar14) {
            uVar12 = uVar14;
          }
          if (uVar12 != 0) {
            if (uVar12 >> 0x3c != 0) {
LAB_7101a5e894:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            goto LAB_7101a5e4f8;
          }
LAB_7101a5e550:
          lVar40 = 0;
        }
        else {
          uVar12 = 0xfffffffffffffff;
LAB_7101a5e4f8:
          pppbVar26 = (byte ***)(uVar12 * 0x10);
          if (pppbVar26 == (byte ***)0x0) {
            pppbVar26 = (byte ***)0x1;
          }
          lVar40 = FUN_710392e290(0x10,pppbVar26,pppplVar21,ppppbVar23,param_5,param_6,param_7,
                                  param_8);
          if (lVar40 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
              pppplVar21 = (long ****)&local_210;
              local_210 = (undefined **)pppbVar26;
              uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
              if (((uVar14 & 1) != 0) &&
                 (lVar40 = FUN_710392e290(0x10,pppbVar26,pppplVar21,ppppbVar23,param_5,param_6,
                                          param_7,param_8), lVar40 != 0)) goto LAB_7101a5e554;
            }
            goto LAB_7101a5e550;
          }
        }
LAB_7101a5e554:
        puVar15 = (undefined8 *)(lVar40 + lVar13 * 0x10);
        FUN_7101a58b00(puVar15,&local_258);
        puVar33 = (undefined8 *)puVar10[0x18];
        puVar41 = (undefined8 *)puVar10[0x19];
        puVar38 = puVar15 + 2;
        puVar42 = puVar33;
        if (puVar41 != puVar33) {
          do {
            puVar15 = puVar15 + -2;
            puVar41 = puVar41 + -2;
            FUN_7101a58b00(puVar15,puVar41);
          } while (puVar33 != puVar41);
          puVar33 = (undefined8 *)puVar10[0x19];
          puVar42 = (undefined8 *)puVar10[0x18];
        }
        puVar10[0x18] = puVar15;
        puVar10[0x19] = puVar38;
        puVar10[0x1a] = lVar40 + uVar12 * 0x10;
        while (puVar33 != puVar42) {
          puVar33 = puVar33 + -2;
          (**(code **)*puVar33)(puVar33);
        }
        if (puVar42 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar42);
        }
      }
    }
    FUN_7101a58930(&local_258);
    uVar34 = uVar34 + 1;
    if (uVar34 == 0x20) break;
    uVar12 = (ulong)*(uint *)((long)puVar10 + 0xc);
  } while( true );
  *(undefined4 *)(puVar10 + 0x9b) = 0;
  if (puVar10[0x19] == puVar10[0x18]) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(puVar10[0x18] + 8) + 0x18),0x7104412fd0);
  local_200 = 1;
  local_1fc = 1;
  local_1f8 = &DAT_41f0000000000000;
  local_210 = (undefined **)0x0;
  local_208 = (undefined8 *)0x101;
  local_1fa = 1;
  local_1f0 = 0;
  local_1c0 = (long *)0x0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_f0 = 0;
  FUN_710337df20((long)&local_210);
  uVar31 = local_208;
  local_210 = (undefined **)CONCAT44(3,(uint)local_210);
  local_208._0_5_ = CONCAT14(1,(undefined4)local_208);
  local_1f0 = 1;
  local_208._0_1_ = (byte)uVar31;
  local_208._0_2_ = (ushort)(byte)local_208;
  local_e0 = (long ***)&PTR_FUN_71050a8f28;
  local_c0 = &local_e0;
  FUN_7101989a30((long *)&local_e0,alStack_150);
  if (&local_e0 == local_c0) {
    pplVar27 = (*local_c0)[4];
LAB_7101a5e6cc:
    (*(code *)pplVar27)();
  }
  else if (local_c0 != (long ****)0x0) {
    pplVar27 = (*local_c0)[5];
    goto LAB_7101a5e6cc;
  }
  plVar17 = puVar10 + 0xb;
  ppppbVar23 = (byte ****)&local_210;
  FUN_7103770b30(plVar17,pppplVar1,(long ****)"selector_0",ppppbVar23,param_5,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar17,1,"set_parts_csr_r",ppppbVar23,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar17,2,"set_parts_csr_l",ppppbVar23,param_5,param_6,param_7,param_8);
  ppppbVar23 = (byte ****)&local_210;
  FUN_7103770b30(puVar10 + 0xc,pppplVar1,(long ****)"selector_1",ppppbVar23,param_5,param_6,param_7,
                 param_8);
  pcVar22 = "set_key_help_next";
  FUN_71037717d0(puVar10 + 0xc,0,"set_key_help_next",ppppbVar23,param_5,param_6,param_7,param_8);
  FUN_7101a59de0((long)puVar10,extraout_x1_10,pcVar22,ppppbVar23,param_5,param_6,param_7,param_8);
  if (alStack_120 == local_100) {
    pcVar25 = *(code **)(*local_100 + 0x20);
LAB_7101a5e77c:
    (*pcVar25)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar25 = *(code **)(*local_100 + 0x28);
    goto LAB_7101a5e77c;
  }
  if (alStack_150 == local_130) {
    pcVar25 = *(code **)(*local_130 + 0x20);
LAB_7101a5e7ac:
    (*pcVar25)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar25 = *(code **)(*local_130 + 0x28);
    goto LAB_7101a5e7ac;
  }
  if (alStack_180 == local_160) {
    pcVar25 = *(code **)(*local_160 + 0x20);
LAB_7101a5e7dc:
    (*pcVar25)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar25 = *(code **)(*local_160 + 0x28);
    goto LAB_7101a5e7dc;
  }
  if (alStack_1b0 == local_190) {
    pcVar25 = *(code **)(*local_190 + 0x20);
LAB_7101a5e80c:
    (*pcVar25)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar25 = *(code **)(*local_190 + 0x28);
    goto LAB_7101a5e80c;
  }
  if (alStack_1e0 == local_1c0) {
    pcVar25 = *(code **)(*local_1c0 + 0x20);
  }
  else {
    if (local_1c0 == (long *)0x0) goto LAB_7101a5e840;
    pcVar25 = *(code **)(*local_1c0 + 0x28);
  }
  (*pcVar25)();
LAB_7101a5e840:
  plVar17 = local_228;
  local_230 = &PTR_FUN_710523d9a8;
  local_228 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar17);
  }
  return;
}

