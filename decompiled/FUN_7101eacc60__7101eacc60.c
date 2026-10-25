// addr:      7101eacc60
// offset:    0x1eacc60
// name:      FUN_7101eacc60
// mangled:   
// signature: undefined __cdecl FUN_7101eacc60(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101eacc60(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long **pplVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  bool bVar9;
  int iVar10;
  long **pplVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  byte ***pppbVar16;
  ulong uVar17;
  long ***ppplVar18;
  long ***ppplVar19;
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
  undefined8 uVar20;
  long *plVar21;
  long ****pppplVar22;
  long ****pppplVar23;
  long ****pppplVar24;
  byte ****ppppbVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long **pplVar28;
  char *pcVar29;
  long lVar30;
  code *pcVar31;
  uint uVar32;
  uint uVar33;
  byte *pbVar34;
  long lVar35;
  long *plVar36;
  long *plVar37;
  long **pplVar38;
  long lVar39;
  long **pplVar40;
  undefined8 *puVar41;
  uint *puVar42;
  long **pplVar43;
  byte ****ppppbVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  byte ****local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  long ***local_260;
  long ***local_258;
  ulong local_250;
  long ***local_248;
  long ***local_240;
  long ***local_238;
  long ***local_230;
  long ***local_228;
  long ***ppplStack_220;
  byte ***local_218;
  byte ***local_210;
  byte ***local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  undefined2 uStack_1e0;
  undefined1 uStack_1de;
  undefined1 uStack_1dd;
  undefined1 uStack_1dc;
  undefined1 uStack_1db;
  undefined1 uStack_1da;
  undefined1 uStack_1d9;
  ulong local_1d8;
  uint *local_1b8;
  uint *local_1b0;
  uint *puStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined2 local_188;
  undefined1 local_186;
  undefined4 local_185;
  undefined2 local_181;
  undefined1 local_17f;
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
  undefined4 local_74 [5];
  
  *param_1 = &PTR_FUN_71050b2808;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  pplVar11 = (long **)FUN_710392e290(0x10,0x188,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1;
  if (pplVar11 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_200._0_4_ = 0;
      local_1a0 = (byte ***)&DAT_00000188;
      param_3 = (long ****)&local_1a0;
      auVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
      uVar26 = auVar46._8_8_;
      if (((auVar46._0_8_ & 1) != 0) &&
         (pplVar11 = (long **)FUN_710392e290(0x10,0x188,param_3,param_4,param_5,param_6,param_7,
                                             param_8), uVar26 = extraout_x1_00,
         pplVar11 != (long **)0x0)) goto LAB_7101eacd10;
    }
    pplVar11 = (long **)0x0;
  }
LAB_7101eacd10:
  *(undefined4 *)(pplVar11 + 1) = 0x1000;
  pplVar11[2] = (long *)0x0;
  pplVar11[7] = (long *)0x0;
  pplVar11[3] = (long *)0x0;
  pplVar11[4] = (long *)0x0;
  pplVar11[6] = (long *)0x0;
  pplVar11[5] = (long *)(pplVar11 + 6);
  pplVar28 = pplVar11 + 8;
  *pplVar28 = (long *)0x0;
  pppplVar23 = (long ****)(pplVar11 + 9);
  *pppplVar23 = (long ***)&PTR_FUN_71050b26f0;
  *pplVar11 = (long *)&DAT_71050b26a0;
  pplVar11[10] = (long *)pplVar11;
  pplVar11[0xb] = (long *)0x0;
  *(undefined8 *)((long)pplVar11 + 0xe4) = 0xffffffff00000000;
  pplVar11[0xc] = (long *)0x0;
  *(undefined4 *)((long)pplVar11 + 0xec) = 0;
  pplVar11[0xd] = (long *)0x0;
  pplVar11[0xe] = (long *)0x0;
  pplVar40 = pplVar11 + 0x1f;
  *pplVar40 = (long *)0x0;
  *(undefined4 *)(pplVar11 + 0x1e) = 0xffffffff;
  *(undefined1 *)((long)pplVar11 + 0xf4) = 0;
  *(undefined4 *)(pplVar11 + 0x1c) = 0;
  pplVar11[0xf] = (long *)0x0;
  pplVar11[0x1a] = (long *)0x0;
  pplVar11[0x1b] = (long *)0x0;
  pplVar11[0x18] = (long *)0x0;
  pplVar11[0x19] = (long *)0x0;
  pplVar11[0x16] = (long *)0x0;
  pplVar11[0x17] = (long *)0x0;
  pplVar11[0x14] = (long *)0x0;
  pplVar11[0x15] = (long *)0x0;
  pplVar11[0x12] = (long *)0x0;
  pplVar11[0x13] = (long *)0x0;
  pplVar11[0x10] = (long *)0x0;
  pplVar11[0x11] = (long *)0x0;
  FUN_71032d6000(pplVar11 + 0x20,uVar26,param_3,param_4,param_5,param_6,param_7,param_8);
  pppplVar24 = (long ****)(pplVar11 + 0x22);
  FUN_71032cc410(pppplVar24,extraout_x1_01,param_3,param_4,param_5,param_6,param_7,param_8);
  pplVar2 = pplVar11 + 0x2c;
  pplVar11[0x2c] = (long *)0x0;
  pplVar11[0x2d] = (long *)0x0;
  pplVar11[0x2b] = (long *)pplVar2;
  *(undefined4 *)(pplVar11 + 0x2a) = 0;
  pplVar11[0x27] = (long *)0x0;
  pplVar11[0x28] = (long *)0x0;
  pplVar11[0x29] = (long *)0x0;
  plVar12 = (long *)FUN_710392e290(0x10,0x32198,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar12 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_200._0_4_ = 0;
      local_1a0 = (byte ***)0x32198;
      pppplVar22 = (long ****)&local_1a0;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
      if (((uVar13 & 1) != 0) &&
         (plVar12 = (long *)FUN_710392e290(0x10,0x32198,pppplVar22,param_4,param_5,param_6,param_7,
                                           param_8), plVar12 != (long *)0x0)) goto LAB_7101eace58;
    }
    plVar12 = (long *)0x0;
  }
LAB_7101eace58:
  *plVar12 = 0x200000000;
  memset(plVar12 + 1,0,0x10a);
  pppplVar22 = (long ****)0x32040;
  *(undefined8 *)((long)plVar12 + 0x134) = 1;
  *(undefined8 *)((long)plVar12 + 0x14f) = 0;
  plVar12[0x28] = -0x2600010000000000;
  plVar12[0x29] = 0;
  memset(plVar12 + 0x2b,0,0x32040);
  pplVar11[0x2e] = plVar12;
  *(undefined1 *)(pplVar11 + 0x2f) = 1;
  FUN_71033841c0(pplVar11 + 0x30,extraout_x1_02,pppplVar22,param_4,param_5,param_6,param_7,param_8);
  pplVar11[0xf] = (long *)FUN_7101eaa430;
  pplVar11[0x10] = (long *)0x0;
  pplVar11[0x11] = (long *)FUN_7101eaa440;
  pplVar11[0x12] = (long *)0x0;
  pplVar11[0xb] = (long *)0x0;
  pplVar11[0xc] = (long *)0x0;
  *(undefined8 *)((long)pplVar11 + 0xdc) = 0;
  *(undefined8 *)((long)pplVar11 + 0xd4) = 0;
  *(undefined8 *)((long)pplVar11 + 0xcc) = 0;
  *(undefined8 *)((long)pplVar11 + 0xc4) = 0;
  *(undefined8 *)((long)pplVar11 + 0xbc) = 0;
  *(undefined8 *)((long)pplVar11 + 0xb4) = 0;
  *(undefined8 *)((long)pplVar11 + 0xac) = 0;
  *(undefined8 *)((long)pplVar11 + 0xa4) = 0;
  *(undefined8 *)((long)pplVar11 + 0x9c) = 0;
  *(undefined8 *)((long)pplVar11 + 0xe4) = 0xffffffff00000000;
  *(undefined8 *)((long)pplVar11 + 0xec) = 0xffffffff00000000;
  *(undefined1 *)((long)pplVar11 + 0xf4) = 0;
  *(undefined4 *)(pplVar11 + 0x13) = 0;
  FUN_7101eaa4a0((long *)(pplVar11 + 10));
  *(undefined4 *)(pplVar11 + 1) = 0x1000;
  uVar26 = extraout_x1_03;
  if (DAT_710532f860 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)
              FUN_710392e290(0x10,8,pppplVar22,param_4,param_5,param_6,param_7,param_8);
    if (puVar14 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_200._0_4_ = 0;
        local_1a0 = (byte ***)&DAT_00000008;
        pppplVar22 = (long ****)&local_1a0;
        uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
        if (((uVar13 & 1) != 0) &&
           (puVar14 = (undefined8 *)
                      FUN_710392e290(0x10,8,pppplVar22,param_4,param_5,param_6,param_7,param_8),
           puVar14 != (undefined8 *)0x0)) goto LAB_7101eacf84;
      }
      puVar14 = (undefined8 *)0x0;
    }
LAB_7101eacf84:
    puVar15 = (undefined8 *)
              FUN_710392e290(0x10,0x20,pppplVar22,param_4,param_5,param_6,param_7,param_8);
    uVar26 = extraout_x1_04;
    if (puVar15 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_200._0_4_ = 0;
        local_1a0 = (byte ***)&SUB_00000020;
        pppplVar22 = (long ****)&local_1a0;
        auVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
        uVar26 = auVar46._8_8_;
        if (((auVar46._0_8_ & 1) != 0) &&
           (puVar15 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,pppplVar22,param_4,param_5,param_6,param_7,param_8),
           uVar26 = extraout_x1_05, puVar15 != (undefined8 *)0x0)) goto LAB_7101eacfd8;
      }
      puVar15 = (undefined8 *)0x0;
    }
LAB_7101eacfd8:
    puVar15[2] = 0;
    puVar15[1] = 0;
    *puVar15 = puVar15 + 1;
    *(undefined4 *)(puVar15 + 3) = 1;
    *puVar14 = puVar15;
    DAT_710532f860 = puVar14;
  }
  if (DAT_7105325ca8 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)
              FUN_710392e290(0x10,0x10,pppplVar22,param_4,param_5,param_6,param_7,param_8);
    uVar26 = extraout_x1_06;
    if (puVar14 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_200._0_4_ = 0;
        local_1a0 = (byte ***)&DAT_00000010;
        pppplVar22 = (long ****)&local_1a0;
        auVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
        uVar26 = auVar46._8_8_;
        if (((auVar46._0_8_ & 1) != 0) &&
           (puVar14 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,pppplVar22,param_4,param_5,param_6,param_7,param_8),
           uVar26 = extraout_x1_07, puVar14 != (undefined8 *)0x0)) goto LAB_7101ead060;
      }
      puVar14 = (undefined8 *)0x0;
    }
LAB_7101ead060:
    FUN_7101ccc7b0(puVar14,uVar26,pppplVar22,param_4,param_5,param_6,param_7,param_8);
    uVar26 = extraout_x1_08;
    DAT_7105325ca8 = puVar14;
  }
  param_1[0x10] = pplVar11;
  FUN_7101ebc290(pplVar11 + 0x27,uVar26,pppplVar22,param_4,param_5,param_6,param_7,param_8);
  puVar14 = DAT_710532f860;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x32198,pppplVar22,param_4,param_5,param_6,param_7,param_8);
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_200._0_4_ = 0;
      local_1a0 = (byte ***)0x32198;
      pppplVar22 = (long ****)&local_1a0;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
      if (((uVar13 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x32198,pppplVar22,param_4,param_5,param_6,param_7,param_8),
         puVar15 != (undefined8 *)0x0)) goto LAB_7101ead0e8;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101ead0e8:
  *puVar15 = 0x200000000;
  memset(puVar15 + 1,0,0x10a);
  *(undefined8 *)((long)puVar15 + 0x134) = 1;
  *(undefined8 *)((long)puVar15 + 0x14f) = 0;
  puVar15[0x28] = 0xd9ffff0000000000;
  puVar15[0x29] = 0;
  memset(puVar15 + 0x2b,0,0x32040);
  puVar42 = (uint *)pplVar11[0x27];
  puVar3 = (uint *)pplVar11[0x28];
  if (puVar42 != puVar3) {
    pcVar29 = (char *)*DAT_7105314510;
    puVar41 = *(undefined8 **)(pcVar29 + 0x298);
    do {
      uVar4 = *puVar42;
      if (uVar4 != 0 && *pcVar29 == '\0') {
        plVar12 = (long *)*puVar41;
        lVar30 = *plVar12;
        if ((lVar30 != plVar12[1]) && (plVar12[0xb] != 0)) {
          plVar21 = plVar12 + 10;
          plVar36 = (long *)*plVar21;
          plVar37 = plVar21;
          if (plVar36 != (long *)0x0) {
            do {
              bVar9 = *(uint *)((long)plVar36 + 0x1c) < uVar4;
              if (!bVar9) {
                plVar37 = plVar36;
              }
              plVar36 = (long *)plVar36[bVar9];
            } while (plVar36 != (long *)0x0);
            if (((plVar37 != plVar21) && (*(uint *)((long)plVar37 + 0x1c) <= uVar4)) &&
               (uVar13 = (ulong)(int)plVar37[4], (int)plVar37[4] != -1)) {
              if ((ulong)((plVar12[1] - lVar30) / 0x32198) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
              if (*(short *)(lVar30 + uVar13 * 0x32198 + 4) == 2) {
                memcpy(puVar15,(void *)(lVar30 + uVar13 * 0x32198),0x32198);
                pppplVar22 = (long ****)(ulong)*(uint *)(puVar15 + 0x2c);
                if ((*(uint *)(puVar15 + 0x2c) != 0) &&
                   (iVar10 = FUN_7103301380((long *)*puVar14,(long)(puVar15 + 0x1933),pppplVar22,
                                            param_4,param_5,param_6,param_7,param_8), iVar10 != 0))
                {
                  uVar4 = *puVar42;
                  pplVar38 = pplVar2;
                  pplVar8 = (long **)*pplVar2;
                  if ((long **)*pplVar2 == (long **)0x0) {
                    plVar12 = *pplVar2;
                    pplVar43 = pplVar2;
                  }
                  else {
                    do {
                      while (pplVar43 = pplVar8, uVar4 < *(uint *)((long)pplVar43 + 0x1c)) {
                        pplVar38 = pplVar43;
                        pplVar8 = (long **)*pplVar43;
                        if ((long **)*pplVar43 == (long **)0x0) goto LAB_7101ead2a0;
                      }
                      if (uVar4 <= *(uint *)((long)pplVar43 + 0x1c)) break;
                      pplVar38 = pplVar43 + 1;
                      pplVar8 = (long **)*pplVar38;
                    } while ((long **)*pplVar38 != (long **)0x0);
LAB_7101ead2a0:
                    plVar12 = *pplVar38;
                  }
                  if (plVar12 == (long *)0x0) {
                    plVar12 = (long *)FUN_710392e290(0x10,0x28,pppplVar22,param_4,param_5,param_6,
                                                     param_7,param_8);
                    if (plVar12 == (long *)0x0) {
                      if (DAT_7105332f00 != (long *)0x0) {
                        local_200._0_4_ = 0;
                        local_1a0 = (byte ***)&DAT_00000028;
                        pppplVar22 = (long ****)&local_1a0;
                        uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
                        if (((uVar13 & 1) != 0) &&
                           (plVar12 = (long *)FUN_710392e290(0x10,0x28,pppplVar22,param_4,param_5,
                                                             param_6,param_7,param_8),
                           plVar12 != (long *)0x0)) goto LAB_7101ead308;
                      }
                      plVar12 = (long *)0x0;
                    }
LAB_7101ead308:
                    *(uint *)((long)plVar12 + 0x1c) = uVar4;
                    *(int *)(plVar12 + 4) = iVar10;
                    plVar12[2] = (long)pplVar43;
                    *plVar12 = 0;
                    plVar12[1] = 0;
                    *pplVar38 = plVar12;
                    if ((long *)*pplVar11[0x2b] != (long *)0x0) {
                      pplVar11[0x2b] = (long *)*pplVar11[0x2b];
                      plVar12 = *pplVar38;
                    }
                    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                              (pplVar11[0x2c],plVar12);
                    pplVar11[0x2d] = (long *)((long)pplVar11[0x2d] + 1);
                  }
                }
              }
            }
          }
        }
      }
      puVar42 = puVar42 + 1;
      if (puVar42 == puVar3) break;
      pcVar29 = (char *)*DAT_7105314510;
    } while( true );
  }
  if (puVar15 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar15);
  }
  FUN_71032cb040((long)pplVar11,param_2,(long ****)&PTR_DAT_71050b2720,(byte ****)0x355f0f91bf,
                 (long ****)0x1,param_6,param_7,param_8);
  if (pplVar11[3] == pplVar11[2]) goto LAB_7101eaf08c;
  puVar15 = (undefined8 *)*pplVar11[2];
  puVar14 = (undefined8 *)(*(long *)*puVar15 + 8);
  if (DAT_710523d00c < 0xe) {
    local_300 = (byte ****)((ulong)(0x3801 >> (ulong)(DAT_710523d00c & 0x1f)) & 0xffffffff00000001);
  }
  else {
    local_300 = (byte ****)0x0;
  }
  local_1a0 = (byte ***)0x0;
  uStack_198 = 0x4248000041800000;
  local_190 = 0x101013f800000;
  uVar4 = 0x811c9dc5;
  local_188 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_186 = 1;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_17f = 0;
  local_181 = 0;
  local_185 = 0;
  FUN_710337e790((long)&local_1a0);
  local_1a0 = (byte ***)
              CONCAT44((int)((ulong)((long)pplVar11[0x28] - (long)pplVar11[0x27]) >> 2),
                       (undefined4)local_1a0);
  pcVar29 = "scroll";
  ppppbVar25 = (byte ****)&local_1a0;
  local_185._0_3_ = CONCAT21(0x101,(undefined1)local_185);
  FUN_7103781a20((long *)pplVar40,puVar14,(byte ****)"scroll",ppppbVar25,pppplVar23,param_6,param_7,
                 param_8);
  (**(code **)(*pplVar11[0x1f] + 0x60))(pplVar11[0x1f],0);
  (**(code **)(*pplVar11[0x1f] + 0x70))(pplVar11[0x1f],0);
  local_1b8 = (uint *)0x0;
  local_200._4_4_ = 0x1e;
  local_1f8 = 0x5f756e6d;
  uStack_1f4 = 0x63677473;
  local_1f0 = 0x6f745f6574616572;
  uStack_1e8 = 0x5f70;
  uStack_1e6 = 0x61665f627573;
  uStack_1e0 = 0x6f76;
  uVar32 = 0x6d;
  uStack_1de = 0x72;
  uStack_1dd = 0x69;
  uStack_1dc = 0x74;
  uStack_1db = 0x65;
  lVar30 = 9;
  uStack_1da = 0;
  local_1b0 = (uint *)0x0;
  puStack_1a8 = (uint *)0x0;
  local_200._0_4_ = uVar4;
  do {
    local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar32;
    uVar32 = (uint)*(byte *)((long)&local_200 + lVar30);
    lVar30 = lVar30 + 1;
  } while (uVar32 != 0);
  FUN_71019c1c50((ulong *)&local_1b8,(long)&local_200,(long ****)pcVar29,ppppbVar25,pppplVar23,
                 param_6,param_7,param_8);
  local_200._4_4_ = 0x1a;
  local_1f8 = 0x5f756e6d;
  uStack_1f4 = 0x63677473;
  local_1f0 = 0x6f745f6574616572;
  uStack_1e8 = 0x5f70;
  uStack_1e6 = 0x6f705f627573;
  uStack_1e0 = 0x7473;
  uVar32 = 0x6d;
  lVar30 = 9;
  uStack_1de = 0;
  local_200._0_4_ = uVar4;
  do {
    local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar32;
    uVar32 = (uint)*(byte *)((long)&local_200 + lVar30);
    lVar30 = lVar30 + 1;
  } while (uVar32 != 0);
  if (local_1b0 < puStack_1a8) {
    *local_1b0 = 0;
    for (uVar13 = 0; *(char *)((long)&local_1f8 + uVar13) != '\0'; uVar13 = uVar13 + 2) {
      *(char *)((long)local_1b0 + uVar13 + 8) = *(char *)((long)&local_1f8 + uVar13);
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      cVar5 = *(char *)((long)&local_1f8 + uVar13 + 1);
      if (cVar5 == '\0') {
        uVar13 = uVar13 + 1;
        break;
      }
      *(char *)((long)local_1b0 + uVar13 + 9) = cVar5;
    }
    *(undefined1 *)((long)local_1b0 + (uVar13 & 0xffffffff) + 8) = 0;
    local_1b0[1] = (uint)uVar13;
    uVar33 = (uint)(byte)local_1b0[2];
    uVar32 = uVar4;
    if ((byte)local_1b0[2] != 0) {
      pbVar34 = (byte *)((long)local_1b0 + 9);
      do {
        uVar32 = uVar32 * 0x89 ^ uVar33;
        uVar33 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar33 != 0);
    }
    *local_1b0 = uVar32;
    local_1b0 = local_1b0 + 0x12;
  }
  else {
    FUN_71019c1c50((ulong *)&local_1b8,(long)&local_200,(long ****)pcVar29,ppppbVar25,pppplVar23,
                   param_6,param_7,param_8);
  }
  local_200._4_4_ = 0x1c;
  local_1f8 = 0x5f756e6d;
  uStack_1f4 = 0x63677473;
  local_1f0 = 0x6f745f6574616572;
  uStack_1e8 = 0x5f70;
  uStack_1e6 = 0x65645f627573;
  uStack_1e0 = 0x656c;
  uVar32 = 0x6d;
  uStack_1dc = 0;
  uStack_1de = 0x74;
  uStack_1dd = 0x65;
  lVar30 = 9;
  local_200._0_4_ = uVar4;
  do {
    local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar32;
    uVar32 = (uint)*(byte *)((long)&local_200 + lVar30);
    lVar30 = lVar30 + 1;
  } while (uVar32 != 0);
  if (local_1b0 < puStack_1a8) {
    *local_1b0 = 0;
    for (uVar13 = 0; *(char *)((long)&local_1f8 + uVar13) != '\0'; uVar13 = uVar13 + 2) {
      *(char *)((long)local_1b0 + uVar13 + 8) = *(char *)((long)&local_1f8 + uVar13);
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      cVar5 = *(char *)((long)&local_1f8 + uVar13 + 1);
      if (cVar5 == '\0') {
        uVar13 = uVar13 + 1;
        break;
      }
      *(char *)((long)local_1b0 + uVar13 + 9) = cVar5;
    }
    *(undefined1 *)((long)local_1b0 + (uVar13 & 0xffffffff) + 8) = 0;
    local_1b0[1] = (uint)uVar13;
    uVar33 = (uint)(byte)local_1b0[2];
    uVar32 = uVar4;
    if ((byte)local_1b0[2] != 0) {
      pbVar34 = (byte *)((long)local_1b0 + 9);
      do {
        uVar32 = uVar32 * 0x89 ^ uVar33;
        uVar33 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar33 != 0);
    }
    *local_1b0 = uVar32;
    local_1b0 = local_1b0 + 0x12;
  }
  else {
    FUN_71019c1c50((ulong *)&local_1b8,(long)&local_200,(long ****)pcVar29,ppppbVar25,pppplVar23,
                   param_6,param_7,param_8);
  }
  puVar3 = local_1b0;
  puVar42 = local_1b8;
  ppplVar19 = (long ***)((long)local_1b0 - (long)local_1b8);
  local_1f8 = local_1f8 & 0xffffff00;
  local_208 = (byte ***)0x0;
  local_200._0_4_ = 0;
  local_200._4_4_ = 0;
  local_218 = (byte ***)0x0;
  local_210 = (byte ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    if (0x38e38e38e38e38e < (ulong)(((long)ppplVar19 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pppbVar16 = (byte ***)
                FUN_710392e290(0x10,ppplVar19,(long ****)pcVar29,ppppbVar25,pppplVar23,param_6,
                               param_7,param_8);
    if (pppbVar16 == (byte ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_248 = (long ***)((ulong)local_248 & 0xffffffff00000000);
        pppplVar22 = &local_230;
        local_230 = ppplVar19;
        uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_248);
        if (((uVar13 & 1) != 0) &&
           (pppbVar16 = (byte ***)
                        FUN_710392e290(0x10,ppplVar19,pppplVar22,ppppbVar25,pppplVar23,param_6,
                                       param_7,param_8), pppbVar16 != (byte ***)0x0))
        goto LAB_7101ead7f4;
      }
      pppbVar16 = (byte ***)0x0;
    }
LAB_7101ead7f4:
    local_208 = pppbVar16 + ((long)ppplVar19 >> 3);
    local_210 = pppbVar16;
    for (; local_218 = pppbVar16, puVar3 != puVar42; puVar42 = puVar42 + 0x12) {
      *(uint *)local_210 = 0;
      uVar13 = 0;
      do {
        cVar5 = *(char *)((long)puVar42 + uVar13 + 8);
        uVar17 = uVar13;
        if (cVar5 == '\0') break;
        *(char *)((long)local_210 + uVar13 + 8) = cVar5;
        cVar5 = *(char *)((long)puVar42 + uVar13 + 9);
        if (cVar5 == '\0') {
          uVar17 = uVar13 + 1;
          break;
        }
        *(char *)((long)local_210 + uVar13 + 9) = cVar5;
        cVar5 = *(char *)((long)puVar42 + uVar13 + 10);
        if (cVar5 == '\0') {
          uVar17 = uVar13 + 2;
          break;
        }
        uVar17 = uVar13 + 3;
        *(char *)((long)local_210 + uVar13 + 10) = cVar5;
        uVar13 = uVar17;
      } while ((uint)uVar17 < 0x3f);
      *(undefined1 *)((long)local_210 + (uVar17 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_210 + 4) = (uint)uVar17;
      uVar33 = (uint)*(byte *)(local_210 + 1);
      uVar32 = uVar4;
      if (*(byte *)(local_210 + 1) != 0) {
        pbVar34 = (byte *)((long)local_210 + 9);
        do {
          uVar32 = uVar32 * 0x89 ^ uVar33;
          uVar33 = (uint)*pbVar34;
          pbVar34 = pbVar34 + 1;
        } while (uVar33 != 0);
      }
      *(uint *)local_210 = uVar32;
      local_210 = local_210 + 9;
    }
  }
  pppplVar23 = (long ****)&local_200;
  ppppbVar25 = &local_218;
  uVar27 = 1;
  pppplVar22 = (long ****)0x0;
  uVar26 = 0;
  FUN_71032d6470((long)pplVar11[0x21],puVar15,pppplVar23,ppppbVar25,(long ****)0x0,0,1,param_8);
  if (local_218 != (byte ***)0x0) {
    local_210 = local_218;
    FUN_710392eb40((ulong)local_218);
  }
  if ((ulong)((long)pplVar11[3] - (long)pplVar11[2] >> 3) < 2) {
LAB_7101eaf08c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  ppppbVar44 = (byte ****)pplVar11[2][1];
  local_200._4_4_ = 0x19;
  local_1f8 = 0x5f756e6d;
  uStack_1f4 = 0x63677473;
  local_230 = (long ***)0x0;
  uVar32 = 0x6d;
  lVar30 = 9;
  local_1f0 = 0x6f745f6574616572;
  uStack_1e8 = 0x5f70;
  local_228 = (long ***)0x0;
  ppplStack_220 = (long ***)0x0;
  uStack_1e6 = 0x305f74726f73;
  uStack_1e0 = 0x30;
  local_200._0_4_ = uVar4;
  do {
    local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar32;
    uVar32 = (uint)*(byte *)((long)&local_200 + lVar30);
    lVar30 = lVar30 + 1;
  } while (uVar32 != 0);
  FUN_71019c1c50((ulong *)&local_230,(long)&local_200,pppplVar23,ppppbVar25,pppplVar22,uVar26,uVar27
                 ,param_8);
  uVar32 = 0x6d;
  local_1f0 = 0x6f745f6574616572;
  lVar30 = 9;
  uStack_1e8 = 0x5f70;
  local_200._4_4_ = 0x19;
  local_1f8 = 0x5f756e6d;
  uStack_1f4 = 0x63677473;
  uStack_1e6 = 0x305f74726f73;
  uStack_1e0 = 0x31;
  local_200._0_4_ = uVar4;
  do {
    local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar32;
    uVar32 = (uint)*(byte *)((long)&local_200 + lVar30);
    lVar30 = lVar30 + 1;
  } while (uVar32 != 0);
  if (local_228 < ppplStack_220) {
    *(uint *)local_228 = 0;
    for (uVar13 = 0; *(char *)((long)&local_1f8 + uVar13) != '\0'; uVar13 = uVar13 + 2) {
      *(char *)((long)local_228 + uVar13 + 8) = *(char *)((long)&local_1f8 + uVar13);
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      cVar5 = *(char *)((long)&local_1f8 + uVar13 + 1);
      if (cVar5 == '\0') {
        uVar13 = uVar13 + 1;
        break;
      }
      *(char *)((long)local_228 + uVar13 + 9) = cVar5;
    }
    *(undefined1 *)((long)local_228 + (uVar13 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_228 + 4) = (uint)uVar13;
    uVar33 = (uint)*(byte *)(local_228 + 1);
    uVar32 = uVar4;
    if (*(byte *)(local_228 + 1) != 0) {
      pbVar34 = (byte *)((long)local_228 + 9);
      do {
        uVar32 = uVar32 * 0x89 ^ uVar33;
        uVar33 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar33 != 0);
    }
    *(uint *)local_228 = uVar32;
    local_228 = local_228 + 9;
    uVar20 = extraout_x1_09;
  }
  else {
    FUN_71019c1c50((ulong *)&local_230,(long)&local_200,pppplVar23,ppppbVar25,pppplVar22,uVar26,
                   uVar27,param_8);
    uVar20 = extraout_x1_10;
  }
  if (local_300 != (byte ****)0x0) {
    uVar32 = 0x6d;
    local_1f0 = 0x6f745f6574616572;
    lVar30 = 9;
    uStack_1e8 = 0x5f70;
    local_200._4_4_ = 0x19;
    local_1f8 = 0x5f756e6d;
    uStack_1f4 = 0x63677473;
    uStack_1e6 = 0x305f74726f73;
    uStack_1e0 = 0x32;
    local_200._0_4_ = uVar4;
    do {
      local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar32;
      uVar32 = (uint)*(byte *)((long)&local_200 + lVar30);
      lVar30 = lVar30 + 1;
    } while (uVar32 != 0);
    if (local_228 < ppplStack_220) {
      *(uint *)local_228 = 0;
      for (uVar13 = 0; *(char *)((long)&local_1f8 + uVar13) != '\0'; uVar13 = uVar13 + 2) {
        *(char *)((long)local_228 + uVar13 + 8) = *(char *)((long)&local_1f8 + uVar13);
        if (0x3e < (int)uVar13 + 1U) {
          uVar13 = (ulong)((int)uVar13 + 1);
          break;
        }
        cVar5 = *(char *)((long)&local_1f8 + uVar13 + 1);
        if (cVar5 == '\0') {
          uVar13 = uVar13 + 1;
          break;
        }
        *(char *)((long)local_228 + uVar13 + 9) = cVar5;
      }
      *(undefined1 *)((long)local_228 + (uVar13 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_228 + 4) = (uint)uVar13;
      uVar33 = (uint)*(byte *)(local_228 + 1);
      uVar32 = uVar4;
      if (*(byte *)(local_228 + 1) != 0) {
        pbVar34 = (byte *)((long)local_228 + 9);
        do {
          uVar32 = uVar32 * 0x89 ^ uVar33;
          uVar33 = (uint)*pbVar34;
          pbVar34 = pbVar34 + 1;
        } while (uVar33 != 0);
      }
      *(uint *)local_228 = uVar32;
      local_228 = local_228 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_230,(long)&local_200,pppplVar23,ppppbVar25,pppplVar22,uVar26,
                     uVar27,param_8);
      uVar20 = extraout_x1_11;
    }
  }
  local_1f0 = 0x6f745f6574616572;
  uVar32 = 0x6d;
  lVar30 = 9;
  uStack_1e8 = 0x5f70;
  local_200._4_4_ = 0x19;
  local_1f8 = 0x5f756e6d;
  uStack_1f4 = 0x63677473;
  uStack_1e6 = 0x305f74726f73;
  uStack_1e0 = 0x33;
  local_200._0_4_ = uVar4;
  do {
    local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar32;
    uVar32 = (uint)*(byte *)((long)&local_200 + lVar30);
    lVar30 = lVar30 + 1;
  } while (uVar32 != 0);
  if (local_228 < ppplStack_220) {
    *(uint *)local_228 = 0;
    for (uVar13 = 0; *(char *)((long)&local_1f8 + uVar13) != '\0'; uVar13 = uVar13 + 2) {
      *(char *)((long)local_228 + uVar13 + 8) = *(char *)((long)&local_1f8 + uVar13);
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      cVar5 = *(char *)((long)&local_1f8 + uVar13 + 1);
      if (cVar5 == '\0') {
        uVar13 = uVar13 + 1;
        break;
      }
      *(char *)((long)local_228 + uVar13 + 9) = cVar5;
    }
    *(undefined1 *)((long)local_228 + (uVar13 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_228 + 4) = (uint)uVar13;
    uVar33 = (uint)*(byte *)(local_228 + 1);
    uVar32 = uVar4;
    if (*(byte *)(local_228 + 1) != 0) {
      pbVar34 = (byte *)((long)local_228 + 9);
      do {
        uVar32 = uVar32 * 0x89 ^ uVar33;
        uVar33 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar33 != 0);
    }
    *(uint *)local_228 = uVar32;
    local_228 = local_228 + 9;
  }
  else {
    FUN_71019c1c50((ulong *)&local_230,(long)&local_200,pppplVar23,ppppbVar25,pppplVar22,uVar26,
                   uVar27,param_8);
    uVar20 = extraout_x1_12;
  }
  local_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e6 = 0;
  FUN_7103776290((undefined8 *)&uStack_1e0,uVar20,pppplVar23,ppppbVar25,pppplVar22,uVar26,uVar27,
                 param_8);
  local_1f0 = _ConstantZero;
  local_200._4_4_ = 0;
  local_1f8 = 0;
  uStack_1e8 = (undefined2)uRam0000007107459008;
  uStack_1e6 = (undefined6)((ulong)uRam0000007107459008 >> 0x10);
  *(undefined8 *)(local_1d8 + 8) = 0;
  local_200._0_4_ = 8;
  FUN_7103776640(&local_248,(long)puVar14,(byte ****)"set_scr_sort",pppplVar23,ppppbVar25,pppplVar22
                 ,uVar26,uVar27,param_8);
  uVar13 = local_1d8;
  local_1d8 = (ulong)local_240;
  local_240 = (long ***)0x0;
  uVar20 = extraout_x1_13;
  if (uVar13 != 0) {
    uVar17 = *(ulong *)(uVar13 + 0x18);
    *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar13 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar13);
    uVar20 = extraout_x1_14;
  }
  ppplVar7 = local_228;
  ppplVar19 = local_230;
  local_1f0 = _ConstantZero;
  uVar45 = uRam0000007107459008;
  if (**(long **)(local_1d8 + 0x18) != 0) {
    local_1f0 = *(undefined8 *)(**(long **)(local_1d8 + 0x18) + 0x30);
    uVar45 = 0;
  }
  uStack_1e8 = (undefined2)uVar45;
  uStack_1e6 = (undefined6)((ulong)uVar45 >> 0x10);
  local_248 = (long ***)0x0;
  local_240 = (long ***)0x0;
  local_238 = (long ***)0x0;
  ppplVar6 = (long ***)((long)local_228 - (long)local_230);
  if (ppplVar6 != (long ***)0x0) {
    if (0x38e38e38e38e38e < (ulong)(((long)ppplVar6 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    ppplVar18 = (long ***)
                FUN_710392e290(0x10,ppplVar6,pppplVar23,ppppbVar25,pppplVar22,uVar26,uVar27,param_8)
    ;
    uVar20 = extraout_x1_15;
    if (ppplVar18 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_260 = (long ***)((ulong)local_260 & 0xffffffff00000000);
        pppplVar23 = &local_258;
        local_258 = ppplVar6;
        auVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_260);
        uVar20 = auVar46._8_8_;
        if (((auVar46._0_8_ & 1) != 0) &&
           (ppplVar18 = (long ***)
                        FUN_710392e290(0x10,ppplVar6,pppplVar23,ppppbVar25,pppplVar22,uVar26,uVar27,
                                       param_8), uVar20 = extraout_x1_16, ppplVar18 != (long ***)0x0
           )) goto LAB_7101eaddd0;
      }
      ppplVar18 = (long ***)0x0;
    }
LAB_7101eaddd0:
    local_238 = ppplVar18 + ((long)ppplVar6 >> 3);
    local_240 = ppplVar18;
    for (; local_248 = ppplVar18, ppplVar19 != ppplVar7; ppplVar19 = ppplVar19 + 9) {
      *(uint *)local_240 = 0;
      uVar13 = 0;
      do {
        cVar5 = *(char *)((long)ppplVar19 + uVar13 + 8);
        uVar17 = uVar13;
        if (cVar5 == '\0') break;
        *(char *)((long)local_240 + uVar13 + 8) = cVar5;
        cVar5 = *(char *)((long)ppplVar19 + uVar13 + 9);
        if (cVar5 == '\0') {
          uVar17 = uVar13 + 1;
          break;
        }
        *(char *)((long)local_240 + uVar13 + 9) = cVar5;
        cVar5 = *(char *)((long)ppplVar19 + uVar13 + 10);
        if (cVar5 == '\0') {
          uVar17 = uVar13 + 2;
          break;
        }
        uVar17 = uVar13 + 3;
        *(char *)((long)local_240 + uVar13 + 10) = cVar5;
        uVar13 = uVar17;
      } while ((uint)uVar17 < 0x3f);
      *(undefined1 *)((long)local_240 + (uVar17 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_240 + 4) = (uint)uVar17;
      uVar33 = (uint)*(byte *)(local_240 + 1);
      uVar32 = uVar4;
      if (*(byte *)(local_240 + 1) != 0) {
        pbVar34 = (byte *)((long)local_240 + 9);
        do {
          uVar32 = uVar32 * 0x89 ^ uVar33;
          uVar33 = (uint)*pbVar34;
          pbVar34 = pbVar34 + 1;
        } while (uVar33 != 0);
      }
      *(uint *)local_240 = uVar32;
      local_240 = local_240 + 9;
    }
  }
  FUN_7103776290(&local_258,uVar20,pppplVar23,ppppbVar25,pppplVar22,uVar26,uVar27,param_8);
  ppppbVar25 = (byte ****)&local_200;
  pppplVar23 = &local_258;
  FUN_71032ccb70((long)pppplVar24,ppppbVar44,&local_248,ppppbVar25,pppplVar23,uVar26,uVar27,param_8)
  ;
  uVar13 = local_250;
  local_258 = (long ***)&PTR_FUN_710523d988;
  local_250 = 0;
  if (uVar13 != 0) {
    uVar17 = *(ulong *)(uVar13 + 0x18);
    *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar13 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar13);
  }
  if (local_248 != (long ***)0x0) {
    local_240 = local_248;
    FUN_710392eb40((ulong)local_248);
  }
  if ((long *)**pplVar28 == (long *)0x0) {
    lVar30 = 0;
  }
  else {
    lVar30 = *(long *)**pplVar28;
  }
  FUN_71033744b0(lVar30,"scroller_",pplVar40);
  FUN_7103374690(lVar30,"sub_menu_",pplVar11 + 0x20);
  FUN_71033745a0(lVar30,"sort_window_",pppplVar24);
  plVar12 = *pplVar28;
  if ((long *)*plVar12 != (long *)0x0) {
    pppplVar24 = (long ****)&DAT_710439b9ac;
    FUN_7103375650((long *)*plVar12,"sort_window_facade_",&DAT_710439b9ac);
    plVar12 = *pplVar28;
    ppppbVar25 = ppppbVar44;
  }
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_260 = (long ***)((ulong)local_260 & 0xffffffff00000000);
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_260);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eadfc4;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eadfc4:
  ppplVar19[5] = (long **)0x0;
  ppplVar19[6] = (long **)0x0;
  *ppplVar19 = (long **)&PTR_FUN_71050b2740;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)FUN_7101eaac40;
  ppplVar19[4] = (long **)0x0;
  pppplVar24 = &local_260;
  *(undefined4 *)(ppplVar19 + 1) = 0;
  local_260 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"state_in_manager",pppplVar24,ppppbVar25,pppplVar23,uVar26,
                 uVar27,param_8);
  ppplVar19 = local_260;
  local_260 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_268 = (long ***)((ulong)local_268._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_268);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae070;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae070:
  *ppplVar19 = (long **)&PTR_FUN_71050b2740;
  ppplVar19[5] = (long **)0x0;
  ppplVar19[6] = (long **)0x0;
  ppplVar19[2] = pplVar11;
  pppplVar24 = (long ****)&local_268;
  ppplVar19[3] = (long **)FUN_7101eaac60;
  ppplVar19[4] = (long **)0x0;
  *(undefined4 *)(ppplVar19 + 1) = 0;
  local_268 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"state_out_manager",pppplVar24,ppppbVar25,pppplVar23,uVar26,
                 uVar27,param_8);
  ppplVar19 = local_268;
  local_268 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_270 = (long ***)((ulong)local_270._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_270);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae114;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae114:
  ppplVar19[4] = (long **)0x0;
  ppplVar19[5] = (long **)FUN_7101eaac80;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)0x0;
  *ppplVar19 = (long **)&PTR_FUN_71050b2768;
  ppplVar19[6] = (long **)0x0;
  pppplVar24 = (long ****)&local_270;
  *(undefined4 *)(ppplVar19 + 1) = 1;
  local_270 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"is_full",pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                 param_8);
  ppplVar19 = local_270;
  local_270 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_278 = (long ***)((ulong)local_278._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_278);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae1c4;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae1c4:
  *ppplVar19 = (long **)&PTR_FUN_71050b2768;
  ppplVar19[4] = (long **)0x0;
  ppplVar19[5] = (long **)FUN_7101eaad40;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)0x0;
  pppplVar24 = (long ****)&local_278;
  ppplVar19[6] = (long **)0x0;
  *(undefined4 *)(ppplVar19 + 1) = 1;
  local_278 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"is_max_num",pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                 param_8);
  ppplVar19 = local_278;
  local_278 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_280 = (long ***)((ulong)local_280._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_280);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae26c;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae26c:
  *ppplVar19 = (long **)&PTR_FUN_71050b2768;
  ppplVar19[4] = (long **)0x0;
  ppplVar19[5] = (long **)FUN_7101eaadb0;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)0x0;
  pppplVar24 = (long ****)&local_280;
  ppplVar19[6] = (long **)0x0;
  *(undefined4 *)(ppplVar19 + 1) = 1;
  local_280 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"is_error_input_device_kind",pppplVar24,ppppbVar25,pppplVar23
                 ,uVar26,uVar27,param_8);
  ppplVar19 = local_280;
  local_280 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_288 = (long ***)((ulong)local_288._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_288);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae314;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae314:
  ppplVar19[4] = (long **)0x0;
  ppplVar19[5] = (long **)FUN_7101eaae70;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)0x0;
  *ppplVar19 = (long **)&PTR_FUN_71050b2790;
  ppplVar19[6] = (long **)0x0;
  pppplVar24 = (long ****)&local_288;
  *(undefined4 *)(ppplVar19 + 1) = 1;
  local_288 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"is_not_purchased_bgm_id",pppplVar24,ppppbVar25,pppplVar23,
                 uVar26,uVar27,param_8);
  ppplVar19 = local_288;
  local_288 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_290 = (long ***)((ulong)local_290._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000028;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_290);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae3c4;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae3c4:
  *ppplVar19 = (long **)&PTR_FUN_71050b27b8;
  ppplVar19[4] = (long **)0x0;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)FUN_7101eaaf10;
  *(undefined4 *)(ppplVar19 + 1) = 0;
  pppplVar24 = (long ****)&local_290;
  local_290 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"check_no_dlc_auth_process",pppplVar24,ppppbVar25,pppplVar23,
                 uVar26,uVar27,param_8);
  ppplVar19 = local_290;
  local_290 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_298 = (long ***)((ulong)local_298._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_298);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae46c;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae46c:
  *ppplVar19 = (long **)&PTR_FUN_71050b2768;
  ppplVar19[4] = (long **)0x0;
  ppplVar19[5] = (long **)FUN_7101eab080;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)0x0;
  pppplVar24 = (long ****)&local_298;
  ppplVar19[6] = (long **)0x0;
  *(undefined4 *)(ppplVar19 + 1) = 1;
  local_298 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"is_no_dlc_auth_process_busy",pppplVar24,ppppbVar25,
                 pppplVar23,uVar26,uVar27,param_8);
  ppplVar19 = local_298;
  local_298 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2a0 = (long ***)((ulong)local_2a0._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2a0);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae514;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae514:
  *ppplVar19 = (long **)&PTR_FUN_71050b2768;
  ppplVar19[4] = (long **)0x0;
  ppplVar19[5] = (long **)FUN_7101eab0a0;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)0x0;
  pppplVar24 = (long ****)&local_2a0;
  ppplVar19[6] = (long **)0x0;
  *(undefined4 *)(ppplVar19 + 1) = 1;
  local_2a0 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"is_no_dlc_auth_eshop_selected",pppplVar24,ppppbVar25,
                 pppplVar23,uVar26,uVar27,param_8);
  ppplVar19 = local_2a0;
  local_2a0 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2a8 = (long ***)((ulong)local_2a8._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000028;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2a8);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae5bc;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae5bc:
  *ppplVar19 = (long **)&PTR_FUN_71050b27b8;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)FUN_7101eab0b0;
  ppplVar19[4] = (long **)0x0;
  pppplVar24 = (long ****)&local_2a8;
  *(undefined4 *)(ppplVar19 + 1) = 0;
  local_2a8 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"set_preview",pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                 param_8);
  ppplVar19 = local_2a8;
  local_2a8 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2b0 = (long ***)((ulong)local_2b0._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000028;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae65c;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae65c:
  *ppplVar19 = (long **)&PTR_FUN_71050b27b8;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)FUN_7101eab610;
  ppplVar19[4] = (long **)0x0;
  pppplVar24 = (long ****)&local_2b0;
  *(undefined4 *)(ppplVar19 + 1) = 0;
  local_2b0 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"sort_list",pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                 param_8);
  ppplVar19 = local_2b0;
  local_2b0 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2b8 = (long ***)((ulong)local_2b8._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b8);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae6fc;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae6fc:
  *ppplVar19 = (long **)&PTR_FUN_71050b2740;
  ppplVar19[5] = (long **)0x0;
  ppplVar19[6] = (long **)0x0;
  ppplVar19[2] = pplVar11;
  pppplVar24 = (long ****)&local_2b8;
  ppplVar19[3] = (long **)FUN_7101eab660;
  ppplVar19[4] = (long **)0x0;
  *(undefined4 *)(ppplVar19 + 1) = 0;
  local_2b8 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"backup_list_selected_id",pppplVar24,ppppbVar25,pppplVar23,
                 uVar26,uVar27,param_8);
  ppplVar19 = local_2b8;
  local_2b8 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2c0 = (long ***)((ulong)local_2c0._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2c0);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae7a0;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae7a0:
  *ppplVar19 = (long **)&PTR_FUN_71050b2740;
  ppplVar19[5] = (long **)0x0;
  ppplVar19[6] = (long **)0x0;
  ppplVar19[2] = pplVar11;
  pppplVar24 = (long ****)&local_2c0;
  ppplVar19[3] = (long **)FUN_7101eab6b0;
  ppplVar19[4] = (long **)0x0;
  *(undefined4 *)(ppplVar19 + 1) = 0;
  local_2c0 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"select_list_from_backup_id",pppplVar24,ppppbVar25,pppplVar23
                 ,uVar26,uVar27,param_8);
  ppplVar19 = local_2c0;
  local_2c0 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2c8 = (long ***)((ulong)local_2c8._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2c8);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae844;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae844:
  *ppplVar19 = (long **)&PTR_FUN_71050b2790;
  ppplVar19[4] = (long **)0x0;
  ppplVar19[5] = (long **)FUN_7101eab720;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)0x0;
  pppplVar24 = (long ****)&local_2c8;
  ppplVar19[6] = (long **)0x0;
  *(undefined4 *)(ppplVar19 + 1) = 1;
  local_2c8 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"is_favorite",pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                 param_8);
  ppplVar19 = local_2c8;
  local_2c8 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2d0 = (long ***)((ulong)local_2d0._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000028;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2d0);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae8ec;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae8ec:
  *ppplVar19 = (long **)&PTR_FUN_71050b27b8;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)FUN_7101eab7b0;
  ppplVar19[4] = (long **)0x0;
  pppplVar24 = (long ****)&local_2d0;
  *(undefined4 *)(ppplVar19 + 1) = 0;
  local_2d0 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"switch_favorite",pppplVar24,ppppbVar25,pppplVar23,uVar26,
                 uVar27,param_8);
  ppplVar19 = local_2d0;
  local_2d0 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2d8 = (long ***)((ulong)local_2d8._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000028;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2d8);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eae98c;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eae98c:
  *ppplVar19 = (long **)&PTR_FUN_71050b27b8;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)FUN_7101eabb80;
  ppplVar19[4] = (long **)0x0;
  pppplVar24 = (long ****)&local_2d8;
  *(undefined4 *)(ppplVar19 + 1) = 0;
  local_2d8 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"post_stage",pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                 param_8);
  ppplVar19 = local_2d8;
  local_2d8 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2e0 = (long ***)((ulong)local_2e0._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2e0);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eaea2c;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eaea2c:
  *ppplVar19 = (long **)&PTR_FUN_71050b2768;
  ppplVar19[4] = (long **)0x0;
  ppplVar19[5] = (long **)FUN_7101eabdb0;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)0x0;
  pppplVar24 = (long ****)&local_2e0;
  ppplVar19[6] = (long **)0x0;
  *(undefined4 *)(ppplVar19 + 1) = 1;
  local_2e0 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"is_finished_post",pppplVar24,ppppbVar25,pppplVar23,uVar26,
                 uVar27,param_8);
  ppplVar19 = local_2e0;
  local_2e0 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2e8 = (long ***)((ulong)local_2e8._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2e8);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eaead4;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eaead4:
  *ppplVar19 = (long **)&PTR_FUN_71050b2768;
  ppplVar19[4] = (long **)0x0;
  ppplVar19[5] = (long **)FUN_7101eabdd0;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)0x0;
  pppplVar24 = (long ****)&local_2e8;
  ppplVar19[6] = (long **)0x0;
  *(undefined4 *)(ppplVar19 + 1) = 1;
  local_2e8 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"is_succeeded_post",pppplVar24,ppppbVar25,pppplVar23,uVar26,
                 uVar27,param_8);
  ppplVar19 = local_2e8;
  local_2e8 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2f0 = (long ***)((ulong)local_2f0._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000028;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2f0);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eaeb7c;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eaeb7c:
  *ppplVar19 = (long **)&PTR_FUN_71050b27b8;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)FUN_7101eabde0;
  ppplVar19[4] = (long **)0x0;
  pppplVar24 = (long ****)&local_2f0;
  *(undefined4 *)(ppplVar19 + 1) = 0;
  local_2f0 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"delete_stage",pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27
                 ,param_8);
  ppplVar19 = local_2f0;
  local_2f0 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  ppplVar19 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (ppplVar19 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2f8 = (long ***)((ulong)local_2f8._4_4_ << 0x20);
      local_258 = (long ***)&DAT_00000028;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2f8);
      if (((uVar13 & 1) != 0) &&
         (ppplVar19 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), ppplVar19 != (long ***)0x0)) goto LAB_7101eaec1c;
    }
    ppplVar19 = (long ***)0x0;
  }
LAB_7101eaec1c:
  *ppplVar19 = (long **)&PTR_FUN_71050b27b8;
  ppplVar19[2] = pplVar11;
  ppplVar19[3] = (long **)FUN_7101eac1a0;
  ppplVar19[4] = (long **)0x0;
  pppplVar24 = (long ****)&local_2f8;
  *(undefined4 *)(ppplVar19 + 1) = 0;
  local_2f8 = ppplVar19;
  FUN_7103376af0((long)plVar12,(byte *)"setup_submenu",pppplVar24,ppppbVar25,pppplVar23,uVar26,
                 uVar27,param_8);
  ppplVar19 = local_2f8;
  local_2f8 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = *pplVar28;
  local_258 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,param_8);
  if (local_258 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74[0] = 0;
      local_258 = (long ***)&DAT_00000038;
      pppplVar24 = &local_258;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
      if (((uVar13 & 1) != 0) &&
         (local_258 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar25,pppplVar23,uVar26,uVar27,
                                     param_8), local_258 != (long ***)0x0)) goto LAB_7101eaecbc;
    }
    local_258 = (long ***)0x0;
  }
LAB_7101eaecbc:
  *local_258 = (long **)&PTR_FUN_71050b27e0;
  local_258[2] = pplVar11;
  local_258[3] = (long **)0x0;
  local_258[6] = (long **)0x0;
  local_258[4] = (long **)0x0;
  local_258[5] = (long **)FUN_7101eac6a0;
  *(undefined4 *)(local_258 + 1) = 1;
  FUN_7103376af0((long)plVar12,(byte *)"get_submenu_result",&local_258,ppppbVar25,pppplVar23,uVar26,
                 uVar27,param_8);
  ppplVar19 = local_258;
  local_258 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    (*(code *)(*ppplVar19)[1])();
  }
  plVar12 = (long *)0x0;
  if ((long *)**pplVar28 != (long *)0x0) {
    FUN_7103375650((long *)**pplVar28,"MAKE_PANEL_INDEX",&DAT_71042b2a84);
    plVar12 = (long *)0x0;
    if ((long *)**pplVar28 != (long *)0x0) {
      FUN_7103375650((long *)**pplVar28,"LIST_ITEM_NUM",&DAT_71042b2a84);
      plVar12 = (long *)0x0;
      if ((long *)*pplVar11[8] != (long *)0x0) {
        FUN_7103375650((long *)*pplVar11[8],"SORT_ID_CREATED",&DAT_71042b2a84);
        plVar12 = (long *)0x0;
        if ((long *)**pplVar28 != (long *)0x0) {
          FUN_7103375650((long *)**pplVar28,"SORT_ID_USED",&DAT_71042b2a84);
          plVar12 = (long *)0x0;
          if ((long *)**pplVar28 != (long *)0x0) {
            FUN_7103375650((long *)**pplVar28,"SORT_ID_NAME",&DAT_71042b2a84);
            plVar12 = (long *)0x0;
            if ((long *)**pplVar28 != (long *)0x0) {
              FUN_7103375650((long *)**pplVar28,"SORT_ID_OWNER",&DAT_71042b2a84);
              plVar12 = (long *)**pplVar28;
            }
          }
        }
      }
    }
  }
  pcVar29 = &DAT_71043cdb7b;
  FUN_7103375650(plVar12,"IS_USING_NAME_ORDER_SORTING",&DAT_71043cdb7b);
  plVar37 = *pplVar28;
  plVar12 = (long *)*plVar37;
  lVar39 = *plVar12;
  *(undefined4 *)(plVar12 + 2) = 0;
  plVar12 = *(long **)(lVar39 + 0x10);
  *plVar12 = lVar39;
  *(undefined4 *)(plVar12 + 1) = 0x48;
  lVar30 = *(long *)(lVar39 + 0x10);
  *(long *)(lVar39 + 0x10) = lVar30 + 0x10;
  lVar35 = *(long *)(*(long *)(lVar39 + 0x18) + 200);
  *(long *)(lVar39 + 0x10) = lVar30;
  if (lVar35 == lVar39) {
    lVar30 = *(long *)(*(long *)(lVar39 + 0x18) + 0x40);
    if (*(uint *)(lVar30 + 0xc) < 2) {
      plVar12 = (long *)(*(long *)(lVar30 + 0x18) +
                        ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar30 + 0xb) & 0x3f)) & 2)
                        * 0x20);
      do {
        if (((int)plVar12[3] == 0x13) && (plVar21 = plVar12, plVar12[2] == 2)) break;
        piVar1 = (int *)((long)plVar12 + 0x1c);
        plVar12 = plVar12 + (long)*piVar1 * 4;
        plVar21 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar21 = (long *)(*(long *)(lVar30 + 0x10) + 0x10);
    }
    pcVar29 = "initialize";
    FUN_71038f4d40(lVar39,plVar21,"initialize");
  }
  else {
    FUN_71038f4b20(lVar39,"initialize");
    FUN_71038f4fc0(lVar39,-2);
  }
  puVar14 = (undefined8 *)(*(long *)(lVar39 + 0x10) + -0x10);
  if ((puVar14 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar39 + 0x10) + -8) & 0xf) != 6)) {
    *(undefined8 **)(lVar39 + 0x10) = puVar14;
  }
  else {
    FUN_7103377130(plVar37,0,(long ****)pcVar29,local_300,pppplVar23,uVar26,uVar27,param_8);
  }
  FUN_7101ccce30((long)DAT_7105325ca8);
  uVar13 = local_1d8;
  uStack_1e0 = 0xd988;
  uStack_1de = 0x23;
  uStack_1dd = 5;
  uStack_1dc = 0x71;
  uStack_1db = 0;
  uStack_1da = 0;
  uStack_1d9 = 0;
  local_1d8 = 0;
  if (uVar13 != 0) {
    uVar17 = *(ulong *)(uVar13 + 0x18);
    *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar13 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar13);
  }
  if (local_230 != (long ***)0x0) {
    local_228 = local_230;
    FUN_710392eb40((ulong)local_230);
  }
  if (local_1b8 != (uint *)0x0) {
    local_1b0 = local_1b8;
    FUN_710392eb40((ulong)local_1b8);
  }
  if (alStack_b0 == local_90) {
    pcVar31 = *(code **)(*local_90 + 0x20);
LAB_7101eaefa8:
    (*pcVar31)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar31 = *(code **)(*local_90 + 0x28);
    goto LAB_7101eaefa8;
  }
  if (alStack_e0 == local_c0) {
    pcVar31 = *(code **)(*local_c0 + 0x20);
LAB_7101eaefd8:
    (*pcVar31)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar31 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101eaefd8;
  }
  if (alStack_110 == local_f0) {
    pcVar31 = *(code **)(*local_f0 + 0x20);
LAB_7101eaf008:
    (*pcVar31)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar31 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101eaf008;
  }
  if (alStack_140 == local_120) {
    pcVar31 = *(code **)(*local_120 + 0x20);
  }
  else {
    if (local_120 == (long *)0x0) goto LAB_7101eaf03c;
    pcVar31 = *(code **)(*local_120 + 0x28);
  }
  (*pcVar31)();
LAB_7101eaf03c:
  if (alStack_170 == local_150) {
    pcVar31 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) {
      return;
    }
    pcVar31 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar31)();
  return;
}

