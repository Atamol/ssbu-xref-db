// addr:      7103567690
// offset:    0x3567690
// name:      FUN_7103567690
// mangled:   
// signature: int __cdecl FUN_7103567690(uint * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 * param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7103567690(uint *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                  long ****param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  size_t __n;
  ulong *puVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  long ****pppplVar15;
  byte ****ppppbVar16;
  undefined2 uVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long *plVar29;
  long lVar30;
  void *pvVar31;
  uint *puVar32;
  ulong *puVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  undefined8 local_390;
  uint local_388;
  undefined1 uStack_384;
  undefined1 uStack_383;
  undefined2 uStack_382;
  undefined4 local_380;
  undefined4 uStack_37c;
  uint local_378;
  undefined4 uStack_374;
  uint local_370;
  undefined8 local_36c;
  undefined1 *local_364;
  ulong local_35c;
  undefined4 local_354;
  undefined8 local_350;
  undefined1 local_348;
  undefined4 local_344;
  undefined1 local_340;
  undefined8 local_33c;
  undefined1 *local_334;
  undefined4 local_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318;
  undefined4 local_314;
  undefined1 local_310;
  undefined8 local_30c;
  undefined1 *local_304;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined8 local_2f0;
  undefined1 local_2e8;
  undefined4 local_2e4;
  undefined1 local_2e0;
  undefined8 local_2dc;
  undefined1 *local_2d4;
  undefined8 local_2cc;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined4 local_2b4;
  undefined1 local_2b0;
  undefined8 local_2ac;
  undefined1 *local_2a4;
  undefined8 local_29c;
  undefined4 local_294;
  undefined8 local_290;
  undefined1 local_288;
  undefined4 local_284;
  undefined1 local_280;
  undefined8 local_27c;
  undefined1 *local_274;
  undefined8 local_26c;
  undefined4 local_264;
  undefined8 local_260;
  undefined1 local_258;
  undefined4 local_254;
  undefined1 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined4 local_224;
  undefined1 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  ulong local_210;
  undefined8 local_208;
  ulong local_200;
  ulong local_1f8;
  size_t local_1f0;
  void *local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  void *local_1d0;
  char acStack_1c8 [16];
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined1 uStack_1ac;
  undefined1 uStack_1ab;
  undefined2 uStack_1aa;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined7 uStack_19f;
  long ***local_198;
  long local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined **local_178;
  long local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined **local_158;
  long local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined **local_138;
  long local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined **local_118;
  long local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined **local_f8;
  long local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  long local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 *local_80;
  long ****local_78 [3];
  
  lVar6 = DAT_7105336db8;
  piVar9 = (int *)FUN_710392e290(0x10,0x2b0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (piVar9 == (int *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_198 = (long ***)((ulong)local_198 & 0xffffffff00000000);
      local_390._0_1_ = 0xb0;
      local_390._1_1_ = 2;
      local_390._2_2_ = 0;
      local_390._4_4_ = 0;
      param_3 = (long ****)&local_390;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_198);
      if (((uVar10 & 1) != 0) &&
         (piVar9 = (int *)FUN_710392e290(0x10,0x2b0,param_3,param_4,param_5,param_6,param_7,param_8)
         , piVar9 != (int *)0x0)) goto LAB_7103567718;
    }
    piVar9 = (int *)0x0;
  }
LAB_7103567718:
  piVar9[0] = 0;
  piVar9[1] = 0;
  piVar9[2] = -1;
  piVar9[3] = -1;
  piVar9[4] = -1;
  puVar32 = (uint *)(piVar9 + 5);
  puVar32[0] = 0;
  puVar32[1] = 0;
  piVar9[0x17] = 0x3f800000;
  *(undefined1 **)(piVar9 + 0x28) = &DAT_3f8000003f800000;
  *(undefined1 **)(piVar9 + 0x2a) = &DAT_3f8000003f800000;
  *(undefined1 **)(piVar9 + 0x2c) = &DAT_3f8000003f800000;
  *(undefined1 **)(piVar9 + 0x2e) = &DAT_3f8000003f800000;
  piVar9[0x15] = 0;
  piVar9[0x16] = 0;
  piVar9[0x13] = 0;
  piVar9[0x14] = 0;
  piVar9[0x11] = 0;
  piVar9[0x12] = 0;
  piVar9[0xf] = 0;
  piVar9[0x10] = 0;
  piVar9[0xd] = 0;
  piVar9[0xe] = 0;
  piVar9[0xb] = 0;
  piVar9[0xc] = 0;
  piVar9[9] = 0;
  piVar9[10] = 0;
  piVar9[7] = 0;
  piVar9[8] = 0;
  piVar9[0x82] = 0;
  piVar9[0x83] = 0;
  piVar9[0x8a] = 0;
  piVar9[0x8b] = 0;
  piVar9[0x88] = 0;
  piVar9[0x89] = 0;
  piVar9[0x86] = 0;
  piVar9[0x87] = 0;
  piVar9[0x92] = 0;
  piVar9[0x93] = 0;
  piVar9[0x90] = 0;
  piVar9[0x91] = 0;
  piVar9[0x8e] = 0;
  piVar9[0x8f] = 0;
  piVar9[0x9a] = 0;
  piVar9[0x9b] = 0;
  piVar9[0x98] = 0;
  piVar9[0x99] = 0;
  piVar9[0x96] = 0;
  piVar9[0x97] = 0;
  piVar9[0xa2] = 0;
  piVar9[0xa3] = 0;
  piVar9[0xa0] = 0;
  piVar9[0xa1] = 0;
  piVar9[0x9e] = 0;
  piVar9[0x9f] = 0;
  *(undefined ***)(piVar9 + 0x9c) = &PTR_FUN_71052322d8;
  *(undefined1 *)((long)piVar9 + 0x2aa) = 0;
  *(undefined2 *)(piVar9 + 0xaa) = 0;
  piVar9[0xa8] = 0;
  piVar9[0xa9] = 0;
  piVar9[0xa6] = 0;
  piVar9[0xa7] = 0;
  piVar9[0xa4] = 0;
  piVar9[0xa5] = 0;
  *(undefined1 **)(piVar9 + 0x30) = &DAT_3f8000003f800000;
  *(undefined1 **)(piVar9 + 0x32) = &DAT_3f8000003f800000;
  *(undefined1 **)(piVar9 + 0x34) = &DAT_3f8000003f800000;
  *(undefined1 **)(piVar9 + 0x36) = &DAT_3f8000003f800000;
  *(undefined ***)(piVar9 + 0x44) = &PTR_FUN_7105232238;
  piVar9[0x46] = 0;
  piVar9[0x47] = 0;
  *(undefined ***)(piVar9 + 0x54) = &PTR_FUN_7105232238;
  piVar9[0x56] = 0;
  piVar9[0x57] = 0;
  *(undefined ***)(piVar9 + 100) = &PTR_FUN_7105232218;
  piVar9[0x66] = 0;
  piVar9[0x67] = 0;
  *(undefined ***)(piVar9 + 0x74) = &PTR_FUN_7105232218;
  piVar9[0x76] = 0;
  piVar9[0x77] = 0;
  *(undefined ***)(piVar9 + 0x84) = &PTR_FUN_71052321f8;
  *(undefined ***)(piVar9 + 0x8c) = &PTR_FUN_71052322b8;
  *(undefined ***)(piVar9 + 0x94) = &PTR_FUN_71052321d8;
  *(undefined ***)(piVar9 + 0x4c) = &PTR_FUN_7105232278;
  piVar9[0x4e] = 0;
  piVar9[0x4f] = 0;
  *(undefined ***)(piVar9 + 0x5c) = &PTR_FUN_7105232278;
  piVar9[0x5e] = 0;
  piVar9[0x5f] = 0;
  *(undefined ***)(piVar9 + 0x7c) = &PTR_FUN_7105232298;
  piVar9[0x24] = 0;
  piVar9[0x25] = 0;
  piVar9[0x26] = 0;
  piVar9[0x27] = 0;
  piVar9[0x20] = 0;
  piVar9[0x21] = 0;
  piVar9[0x22] = 0;
  piVar9[0x23] = 0;
  piVar9[0x1c] = 0;
  piVar9[0x1d] = 0;
  piVar9[0x1e] = 0;
  piVar9[0x1f] = 0;
  piVar9[0x18] = 0;
  piVar9[0x19] = 0;
  piVar9[0x1a] = 0;
  piVar9[0x1b] = 0;
  piVar9[0x48] = 0;
  piVar9[0x49] = 0;
  piVar9[0x4a] = 0;
  piVar9[0x4b] = 0;
  piVar9[0x38] = 0;
  piVar9[0x39] = 0;
  piVar9[0x3a] = 0;
  piVar9[0x3b] = 0;
  piVar9[0x50] = 0;
  piVar9[0x51] = 0;
  piVar9[0x52] = 0;
  piVar9[0x53] = 0;
  piVar9[0x58] = 0;
  piVar9[0x59] = 0;
  piVar9[0x5a] = 0;
  piVar9[0x5b] = 0;
  piVar9[0x60] = 0;
  piVar9[0x61] = 0;
  piVar9[0x62] = 0;
  piVar9[99] = 0;
  piVar9[0x68] = 0;
  piVar9[0x69] = 0;
  piVar9[0x6a] = 0;
  piVar9[0x6b] = 0;
  piVar9[0x70] = 0;
  piVar9[0x71] = 0;
  piVar9[0x72] = 0;
  piVar9[0x73] = 0;
  *(undefined ***)(piVar9 + 0x6c) = &PTR_FUN_7105232298;
  piVar9[0x6e] = 0;
  piVar9[0x6f] = 0;
  piVar9[0x78] = 0;
  piVar9[0x79] = 0;
  piVar9[0x7a] = 0;
  piVar9[0x7b] = 0;
  piVar9[0x7e] = 0;
  piVar9[0x7f] = 0;
  piVar9[0x80] = 0;
  piVar9[0x81] = 0;
  puVar33 = (ulong *)(piVar9 + 0x3c);
  *puVar33 = 0;
  piVar9[0x3e] = 0;
  piVar9[0x3f] = 0;
  piVar9[0x40] = 0;
  piVar9[0x41] = 0;
  piVar9[0x42] = 0;
  piVar9[0x43] = 0;
  uVar8 = *param_1;
  piVar9[1] = uVar8;
  *(undefined8 *)(piVar9 + 6) = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(piVar9 + 8) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(piVar9 + 10) = *(undefined8 *)(param_1 + 6);
  piVar9[0x12] = param_1[0x13];
  uVar4 = param_1[0x12];
  *puVar32 = (uint)(ushort)uVar4;
  *(undefined2 *)(piVar9 + 0xa7) = *(undefined2 *)((long)param_1 + 0x4a);
  piVar9[0x16] = (uint)(ushort)param_1[0xc];
  piVar9[0x17] = param_1[0x20];
  piVar9[0x18] = param_1[0x21];
  piVar9[0xc] = 0;
  piVar9[0xab] = (uint)((ushort)uVar4 != 0);
  if (1 < uVar8) {
    puVar11 = (undefined8 *)&nn::util::Vector3f::ConstantZero;
    if (*(undefined8 **)(param_1 + 0xe) != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(param_1 + 0xe);
    }
    uVar23 = *puVar11;
    *(ulong *)(piVar9 + 0x1e) = puVar11[1] & 0xffffffff;
    *(undefined8 *)(piVar9 + 0x1c) = uVar23;
    puVar11 = (undefined8 *)&nn::util::Vector3f::ConstantZero;
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(param_1 + 0x10);
    }
    uVar12 = puVar11[1];
    uVar23 = *puVar11;
    uVar4 = uVar8 << 4 | 1;
    uVar28 = (ulong)(int)uVar4;
    piVar9[3] = uVar4;
    uVar10 = -(ulong)((uVar8 & 0xfffffff) >> 0x1b) & 0xffffffc000000000 | (ulong)uVar4 << 6;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar28;
    if (SUB168(auVar2 * ZEXT816(0x40),8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    *(ulong *)(piVar9 + 0x22) = uVar12 & 0xffffffff;
    *(undefined8 *)(piVar9 + 0x20) = uVar23;
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,uVar10,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_198 = (long ***)((ulong)local_198 & 0xffffffff00000000);
        local_390._0_1_ = (byte)uVar10;
        local_390._1_1_ = (undefined1)(uVar10 >> 8);
        local_390._2_2_ = (undefined2)(uVar10 >> 0x10);
        local_390._4_4_ = (undefined4)(uVar10 >> 0x20);
        param_3 = (long ****)&local_390;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_198);
        if (((uVar12 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,uVar10,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar11 != (undefined8 *)0x0)) goto LAB_71035679dc;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_71035679dc:
    lVar24 = uVar28 * 0x40 + -0x40;
    puVar22 = puVar11 + 8;
    uVar10 = (ulong)((uint)lVar24 >> 6 ^ 0xffffffff) | 0xfffffffffffffff9;
    puVar19 = puVar11;
    do {
      puVar19[4] = 0;
      puVar19[5] = 0;
      uVar10 = uVar10 + 1;
      puVar19[2] = 0;
      puVar19[3] = 0;
      *puVar19 = 0;
      puVar19[1] = 0;
      puVar19 = puVar19 + 8;
    } while (uVar10 != 0);
    if (lVar24 != 0) {
      do {
        puVar22[4] = 0;
        puVar22[5] = 0;
        puVar22[2] = 0;
        puVar22[3] = 0;
        *puVar22 = 0;
        puVar22[1] = 0;
        puVar22[0xc] = 0;
        puVar22[0xd] = 0;
        puVar22[10] = 0;
        puVar22[0xb] = 0;
        puVar22[8] = 0;
        puVar22[9] = 0;
        puVar22[0x14] = 0;
        puVar22[0x15] = 0;
        puVar22[0x12] = 0;
        puVar22[0x13] = 0;
        puVar22[0x10] = 0;
        puVar22[0x11] = 0;
        puVar22[0x1c] = 0;
        puVar22[0x1d] = 0;
        puVar22[0x1a] = 0;
        puVar22[0x1b] = 0;
        puVar22[0x18] = 0;
        puVar22[0x19] = 0;
        puVar22[0x24] = 0;
        puVar22[0x25] = 0;
        puVar22[0x22] = 0;
        puVar22[0x23] = 0;
        puVar22[0x20] = 0;
        puVar22[0x21] = 0;
        puVar22[0x2c] = 0;
        puVar22[0x2d] = 0;
        puVar22[0x2a] = 0;
        puVar22[0x2b] = 0;
        puVar22[0x28] = 0;
        puVar22[0x29] = 0;
        puVar22[0x34] = 0;
        puVar22[0x35] = 0;
        puVar22[0x32] = 0;
        puVar22[0x33] = 0;
        puVar22[0x30] = 0;
        puVar22[0x31] = 0;
        puVar22[0x3c] = 0;
        puVar22[0x3d] = 0;
        puVar22[0x3a] = 0;
        puVar22[0x3b] = 0;
        puVar22[0x38] = 0;
        puVar22[0x39] = 0;
        puVar22 = puVar22 + 0x40;
      } while (puVar22 != puVar11 + uVar28 * 8);
    }
    *(undefined8 **)(piVar9 + 0xa4) = puVar11;
    if (*(short *)((long)param_1 + 0x4a) == 0) {
      uVar35 = 0;
      uVar23 = 0x3f800000;
    }
    else if (*(short *)((long)param_1 + 0x4a) == 1) {
      uVar35 = 0;
      uVar23 = 0x3f80000000000000;
    }
    else {
      uVar35 = 0x3f800000;
      uVar23 = 0;
    }
    uVar8 = piVar9[0x16];
    uVar4 = uVar8 - 1000;
    *(undefined8 *)(piVar9 + 0x26) = uVar35;
    *(undefined8 *)(piVar9 + 0x24) = uVar23;
    if (uVar8 < 1000) {
      bVar3 = false;
      if (99 < uVar8) goto LAB_7103567b58;
LAB_7103567b40:
      piVar9[0x19] = 1;
    }
    else {
      bVar3 = true;
      piVar9[0x16] = uVar4;
      uVar8 = uVar4;
      if (uVar4 < 100) goto LAB_7103567b40;
LAB_7103567b58:
      piVar9[0x19] = 2;
      piVar9[0x16] = uVar8 - 100;
    }
    lVar24 = DAT_7105336db8;
    uVar10 = *(ulong *)(param_1 + 8);
    if ((uVar10 & 0xffffffffff) != 0) {
      std::mutex::lock();
      lVar13 = FUN_7103720840(*(long **)(lVar24 + 0x80),uVar10 & 0xffffffffff);
      std::mutex::unlock();
      uVar10 = *(ulong *)(param_1 + 8);
      std::mutex::lock();
      uVar28 = *(ulong *)(lVar24 + 0x90);
      if (uVar28 != 0) {
        uVar12 = uVar28 - 1;
        uVar10 = uVar10 & 0xffffffffff;
        if ((uVar12 & uVar28) == 0) {
          uVar20 = uVar12 & uVar10;
        }
        else {
          uVar20 = uVar10;
          if (uVar28 <= uVar10) {
            uVar20 = 0;
            if (uVar28 != 0) {
              uVar20 = uVar10 / uVar28;
            }
            uVar20 = uVar10 - uVar20 * uVar28;
          }
        }
        plVar25 = *(long **)(*(long *)(lVar24 + 0x88) + uVar20 * 8);
        if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
          if ((uVar12 & uVar28) == 0) {
            do {
              uVar28 = plVar25[1];
              if (uVar28 != uVar10 && (uVar28 & uVar12) != uVar20) break;
              if ((uVar28 == uVar10) && (plVar25[2] == uVar10)) goto LAB_7103569884;
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
          else {
            do {
              uVar12 = plVar25[1];
              if (uVar12 == uVar10) {
                if (plVar25[2] == uVar10) goto LAB_7103569884;
              }
              else {
                if (uVar28 <= uVar12) {
                  uVar1 = 0;
                  if (uVar28 != 0) {
                    uVar1 = uVar12 / uVar28;
                  }
                  uVar12 = uVar12 - uVar1 * uVar28;
                }
                if (uVar12 != uVar20) break;
              }
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
        }
      }
      lVar27 = 0;
      goto LAB_7103567c6c;
    }
    lVar13 = 0;
    goto LAB_7103567c78;
  }
  goto LAB_71035678d0;
LAB_7103569884:
  lVar27 = plVar25[3];
LAB_7103567c6c:
  std::mutex::unlock();
  *(long *)(piVar9 + 0x1a) = lVar27;
LAB_7103567c78:
  uVar10 = *(ulong *)(param_1 + 10);
  lVar27 = 0;
  if ((uVar10 & 0xffffffffff) != 0) {
    std::mutex::lock();
    lVar27 = FUN_7103720840(*(long **)(lVar24 + 0x80),uVar10 & 0xffffffffff);
    std::mutex::unlock();
  }
  if (lVar13 == 0) {
    if (lVar27 == 0) {
      FUN_71035b53e0((long)piVar9);
      goto LAB_71035678dc;
    }
LAB_7103567cd0:
    uVar17 = 1;
  }
  else {
    if (lVar27 == 0) goto LAB_7103567cd0;
    uVar17 = 2;
  }
  *(undefined2 *)((long)piVar9 + 0x29e) = uVar17;
  lVar5 = DAT_7105335b00;
  local_b0 = _ConstantZero;
  local_a0 = 0x3f80000000000000;
  uStack_98 = 0xffffffffffffffff;
  local_198 = (long ***)&DAT_7105231730;
  uStack_a8 = CONCAT44(0x3f800000,(int)_DAT_7107521008);
  local_178 = &PTR_FUN_7104f62038;
  local_158 = &PTR_FUN_7105231690;
  local_138 = &PTR_FUN_7105232278;
  local_118 = &PTR_FUN_7105232298;
  local_88 = 1;
  local_84 = 5;
  local_90 = 0x200000002000;
  local_160 = 0;
  local_168 = (undefined8 *)0x0;
  local_170 = 0;
  local_140 = 0;
  local_148 = (undefined8 *)0x0;
  local_150 = 0;
  local_120 = 0;
  local_128 = (undefined8 *)0x0;
  local_130 = 0;
  local_100 = 0;
  local_108 = (undefined8 *)0x0;
  local_110 = 0;
  local_e0 = 0;
  local_e8 = (undefined8 *)0x0;
  local_f0 = 0;
  local_f8 = &PTR_FUN_71052322b8;
  local_c0 = 0;
  local_c8 = (undefined8 *)0x0;
  local_d0 = 0;
  local_d8 = &PTR_FUN_71052322d8;
  local_b8 = 0;
  lVar21 = *(long *)(lVar24 + 0x178) + (ulong)param_1[0x1e] * 0x20;
  if ((*(long **)(lVar21 + 0x10) == (long *)0x0) ||
     (**(long **)(lVar21 + 0x10) != *(long *)(lVar21 + 0x18))) {
    local_190 = 0;
LAB_7103567e04:
    local_180 = 0;
    local_188 = (undefined8 *)0x0;
  }
  else {
    local_190 = *(long *)(lVar21 + 8);
    if (local_190 == 0) goto LAB_7103567e04;
    local_188 = *(undefined8 **)(local_190 + 8);
    local_180 = *local_188;
  }
  local_1b8._0_4_ = 1;
  uStack_1ac = 0;
  uStack_1ab = 0;
  uStack_1aa = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  local_1a4 = 0x1000001;
  local_1a0 = 0;
  uVar8 = param_1[0x1f];
  local_1b8._4_4_ = 1;
  if (uVar8 != 1) {
    if (uVar8 == 3) {
      local_1b8._4_4_ = 1;
      if (*(char *)((long)piVar9 + 0x2aa) == '\0') {
        local_1b8._4_4_ = 2;
      }
    }
    else if (uVar8 == 2) {
      local_1b8._4_4_ = 0;
    }
    else {
      local_1b8._4_4_ = 2;
    }
  }
  FUN_7103590cf0(&local_390,(uint *)&local_1b8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((long *)CONCAT44(uStack_37c,local_380) == (long *)0x0) ||
     (*(long *)CONCAT44(uStack_37c,local_380) != CONCAT44(uStack_374,local_378))) {
    local_170 = 0;
LAB_7103567ebc:
    local_160 = 0;
    local_168 = (undefined8 *)0x0;
  }
  else {
    local_170 = CONCAT26(uStack_382,CONCAT15(uStack_383,CONCAT14(uStack_384,local_388)));
    if (local_170 == 0) goto LAB_7103567ebc;
    local_168 = *(undefined8 **)(local_170 + 8);
    local_160 = *local_168;
  }
  local_390._0_1_ = 1;
  local_390._1_1_ = 0;
  local_390._4_4_ = 3;
  uStack_384 = 0;
  uStack_383 = 0;
  uStack_382 = 0;
  local_380 = 0xff;
  local_388 = local_388 & 0xffffff00;
  uStack_37c = 0xff;
  local_378 = 7;
  local_364 = (undefined1 *)0x0;
  local_36c = 0;
  local_35c = local_35c & 0xffffffff00000000;
  uStack_374 = 0;
  local_370 = 0;
  FUN_7103593520(&local_1b8,(byte *)&local_390,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((long *)CONCAT44(local_1a4,uStack_1a8) == (long *)0x0) ||
     (*(long *)CONCAT44(local_1a4,uStack_1a8) != CONCAT71(uStack_19f,local_1a0))) {
    local_150 = 0;
LAB_7103567f54:
    local_140 = 0;
    local_148 = (undefined8 *)0x0;
  }
  else {
    local_150 = CONCAT26(uStack_1aa,CONCAT15(uStack_1ab,CONCAT14(uStack_1ac,uStack_1b0)));
    if (local_150 == 0) goto LAB_7103567f54;
    local_148 = *(undefined8 **)(local_150 + 8);
    local_140 = *local_148;
  }
  iVar7 = FUN_710392e1f0(&local_1b8,0x10,(long ****)&DAT_00000160,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_390._0_1_ = 0x60;
    local_390._1_1_ = 1;
    local_390._2_2_ = 0;
    local_390._4_4_ = 0;
    uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_390);
    if ((uVar10 & 1) != 0) {
      FUN_710392e1f0(&local_1b8,0x10,(long ****)&DAT_00000160,param_4,param_5,param_6,param_7,
                     param_8);
    }
  }
  pvVar31 = (void *)CONCAT44(local_1b8._4_4_,(uint)local_1b8);
  nu::VirtualAllocHook(0x160,0x10,pvVar31);
  puVar11 = (undefined8 *)CONCAT44(local_1b8._4_4_,(uint)local_1b8);
  FUN_71035b68c0(puVar11,extraout_x1,pvVar31,param_4,param_5,param_6,param_7,param_8);
  uVar8 = piVar9[0x16] + 100;
  if (piVar9[0x19] != 2) {
    uVar8 = piVar9[0x16];
  }
  pppplVar15 = (long ****)(ulong)uVar8;
  sprintf(acStack_1c8,"0x4f%06x",uVar8);
  uStack_382 = 0;
  local_390._0_1_ = 0x18;
  local_380 = 0;
  uStack_37c = 0;
  uStack_384 = 0x53;
  local_390._1_1_ = 0x30;
  local_390._2_2_ = 0x3478;
  local_390._4_4_ = 0x30303066;
  local_388 = 0x56313030;
  uStack_383 = 0;
  local_1e8 = (void *)0x0;
  local_1f0 = 0;
  local_1f8 = 0;
  __n = strlen(acStack_1c8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_1f8 = CONCAT71(local_1f8._1_7_,(char)((int)__n << 1));
    pvVar31 = (void *)((ulong)&local_1f8 | 1);
    if (__n != 0) goto LAB_71035680f0;
  }
  else {
    uVar28 = __n + 0x10 & 0xfffffffffffffff0;
    uVar10 = uVar28;
    if ((__n + 0x10 & 0xfffffffffffffff0) == 0) {
      uVar10 = 1;
    }
    pvVar31 = (void *)FUN_710392e290(0x10,uVar10,pppplVar15,param_4,param_5,param_6,param_7,param_8)
    ;
    if (pvVar31 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1e0 = local_1e0 & 0xffffffff00000000;
        local_1b8._0_4_ = (uint)uVar10;
        local_1b8._4_4_ = (undefined4)(uVar10 >> 0x20);
        pppplVar15 = (long ****)&local_1b8;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1e0);
        if (((uVar12 & 1) != 0) &&
           (pvVar31 = (void *)FUN_710392e290(0x10,uVar10,pppplVar15,param_4,param_5,param_6,param_7,
                                             param_8), pvVar31 != (void *)0x0)) goto LAB_71035680e0;
      }
      pvVar31 = (void *)0x0;
    }
LAB_71035680e0:
    local_1f8 = uVar28 | 1;
    local_1f0 = __n;
    local_1e8 = pvVar31;
LAB_71035680f0:
    memcpy(pvVar31,acStack_1c8,__n);
  }
  *(undefined1 *)((long)pvVar31 + __n) = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0x535004;
  puVar14 = (ulong *)std::string::append((char *)&local_1f8,(ulong)&local_210 | 1);
  uVar10 = *puVar14;
  local_1d8 = puVar14[1];
  local_1d0 = (void *)puVar14[2];
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = 0;
  uStack_1a8 = 0;
  local_1a4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1ab = 0;
  uStack_1aa = 0;
  local_1b8._0_4_ = 0;
  local_1b8._4_4_ = 0;
  local_1e0 = uVar10;
  if ((uVar10 & 1) == 0) {
    uVar28 = uVar10 >> 1 & 0x7f;
    pvVar31 = (void *)((ulong)&local_1e0 | 1);
    if (uVar28 < 0x17) goto LAB_710356817c;
LAB_71035681c0:
    pppplVar15 = (long ****)(uVar28 + 0x10 & 0xfffffffffffffff0);
    iVar7 = FUN_710392e1f0(&local_80,0x10,pppplVar15,param_4,param_5,param_6,param_7,param_8);
    if (((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_78[0] = pppplVar15,
       uVar12 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_78), (uVar12 & 1) != 0))
    {
      FUN_710392e1f0(&local_80,0x10,pppplVar15,param_4,param_5,param_6,param_7,param_8);
    }
    nu::VirtualAllocHook((ulong)pppplVar15,0x10,local_80);
    local_1b8._0_4_ = (uint)pppplVar15 | 1;
    local_1b8._4_4_ = (undefined4)((ulong)pppplVar15 >> 0x20);
    uStack_1a8 = SUB84(local_80,0);
    local_1a4 = (undefined4)((ulong)local_80 >> 0x20);
    uStack_1b0 = (undefined4)uVar28;
    uStack_1ac = (undefined1)(uVar28 >> 0x20);
    uStack_1ab = (undefined1)(uVar28 >> 0x28);
    uStack_1aa = (undefined2)(uVar28 >> 0x30);
LAB_7103568244:
    memcpy(local_80,pvVar31,uVar28);
    local_80[uVar28] = 0;
  }
  else {
    if (0xffffffffffffffef < local_1d8) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uVar28 = local_1d8;
    pvVar31 = local_1d0;
    if (0x16 < local_1d8) goto LAB_71035681c0;
LAB_710356817c:
    local_1b8._0_4_ = ((uint)uVar28 & 0x7f) << 1;
    local_80 = (undefined1 *)((ulong)&local_1b8 | 1);
    if (uVar28 != 0) goto LAB_7103568244;
    *(undefined1 *)((ulong)&local_1b8 | 1) = 0;
  }
  if (((uVar10 & 1) != 0) && (local_1d0 != (void *)0x0)) {
    FUN_710392eb40((ulong)local_1d0);
  }
  if (((local_210 & 1) != 0) && (local_200 != 0)) {
    FUN_710392eb40(local_200);
  }
  if (((local_1f8 & 1) != 0) && (local_1e8 != (void *)0x0)) {
    FUN_710392eb40((ulong)local_1e8);
  }
  FUN_71035b6c50((long)puVar11,&local_390,&local_1b8,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    plVar25 = (long *)0x0;
    lVar21 = 0;
  }
  else {
    plVar25 = (long *)puVar11[1];
    lVar21 = *plVar25;
  }
  plVar29 = *(long **)(piVar9 + 0x46);
  plVar18 = *(long **)(piVar9 + 0x48);
  lVar26 = *(long *)(piVar9 + 0x4a);
  *(undefined8 **)(piVar9 + 0x46) = puVar11;
  *(long **)(piVar9 + 0x48) = plVar25;
  *(long *)(piVar9 + 0x4a) = lVar21;
  if (((plVar18 != (long *)0x0) && (plVar29 != (long *)0x0)) && (*plVar18 == lVar26)) {
    (**(code **)(*plVar29 + 8))();
    plVar25 = *(long **)(piVar9 + 0x48);
  }
  if (((plVar25 == (long *)0x0) || (*plVar25 != *(long *)(piVar9 + 0x4a))) ||
     ((lVar21 = *(long *)(piVar9 + 0x46), lVar21 == 0 || (*(long *)(lVar21 + 8) == 0)))) {
    lVar21 = 0;
    piVar9[0x4e] = 0;
    piVar9[0x4f] = 0;
    piVar9[0x50] = 0;
    piVar9[0x51] = 0;
  }
  else {
    *(long *)(piVar9 + 0x4e) = lVar21;
    plVar25 = *(long **)(lVar21 + 8);
    *(long **)(piVar9 + 0x50) = plVar25;
    lVar21 = *plVar25;
  }
  *(long *)(piVar9 + 0x52) = lVar21;
  if ((*(long **)(piVar9 + 0x50) == (long *)0x0) || (**(long **)(piVar9 + 0x50) != lVar21)) {
    local_130 = 0;
LAB_710356836c:
    local_120 = 0;
    local_128 = (undefined8 *)0x0;
  }
  else {
    local_130 = *(long *)(piVar9 + 0x4e);
    if (local_130 == 0) goto LAB_710356836c;
    local_128 = *(undefined8 **)(local_130 + 8);
    local_120 = *local_128;
  }
  if (((uint)local_1b8 & 1) != 0) {
    pvVar31 = (void *)CONCAT44(local_1a4,uStack_1a8);
    nu::VirtualFreeHook(pvVar31);
    FUN_710392eb40((ulong)pvVar31);
  }
  if (((byte)local_390 & 1) != 0) {
    pvVar31 = (void *)CONCAT44(uStack_37c,local_380);
    nu::VirtualFreeHook(pvVar31);
    FUN_710392eb40((ulong)pvVar31);
  }
  iVar7 = FUN_710392e1f0(&local_1b8,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_390._0_1_ = 0x20;
    local_390._1_1_ = 0;
    local_390._2_2_ = 0;
    local_390._4_4_ = 0;
    uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_390);
    if ((uVar10 & 1) != 0) {
      FUN_710392e1f0(&local_1b8,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT44(local_1b8._4_4_,(uint)local_1b8));
  puVar11 = (undefined8 *)CONCAT44(local_1b8._4_4_,(uint)local_1b8);
  FUN_71035b6df0(puVar11,2,(long ****)0x2,param_4,param_5,param_6,param_7,param_8);
  if (lVar13 == 0) {
    plVar25 = (long *)puVar11[2];
    lVar21 = *plVar25;
    if (plVar25[2] != lVar21) {
      if (plVar25[1] == lVar21) goto LAB_7103569d68;
      lVar26 = *(long *)(DAT_7105338f68 + 0x28);
      if ((*(long **)(lVar26 + 0x60) == (long *)0x0) ||
         (**(long **)(lVar26 + 0x60) != *(long *)(lVar26 + 0x68))) {
        *(undefined8 *)(lVar21 + 8) = 0;
      }
      else {
        lVar26 = *(long *)(lVar26 + 0x58);
        *(long *)(lVar21 + 8) = lVar26;
        if (lVar26 != 0) goto LAB_71035684e4;
      }
      uVar23 = 0;
      *(undefined8 *)(lVar21 + 0x10) = 0;
LAB_7103568518:
      *(undefined8 *)(lVar21 + 0x18) = uVar23;
    }
  }
  else {
    plVar25 = (long *)puVar11[2];
    lVar21 = *plVar25;
    if (plVar25[2] != lVar21) {
      if (plVar25[1] == lVar21) goto LAB_7103569d68;
      if ((*(long **)(lVar13 + 0x60) == (long *)0x0) ||
         (**(long **)(lVar13 + 0x60) != *(long *)(lVar13 + 0x68))) {
        *(undefined8 *)(lVar21 + 8) = 0;
      }
      else {
        lVar26 = *(long *)(lVar13 + 0x58);
        *(long *)(lVar21 + 8) = lVar26;
        if (lVar26 != 0) {
LAB_71035684e4:
          puVar22 = *(undefined8 **)(lVar26 + 8);
          *(undefined8 **)(lVar21 + 0x10) = puVar22;
          uVar23 = *puVar22;
          goto LAB_7103568518;
        }
      }
      *(undefined8 *)(lVar21 + 0x10) = 0;
      *(undefined8 *)(lVar21 + 0x18) = 0;
    }
  }
  FUN_71035b71d0((undefined8 *)puVar11[3],0,(long ****)&DAT_00000004,(byte ****)0x0,param_5,param_6,
                 param_7,param_8);
  if (lVar27 == 0) {
    plVar25 = (long *)puVar11[2];
    lVar21 = *plVar25;
    if (1 < (ulong)(plVar25[2] - lVar21 >> 5)) {
      if ((ulong)(plVar25[1] - lVar21 >> 5) < 2) goto LAB_7103569d68;
      lVar26 = *(long *)(DAT_7105338f68 + 0x28);
      if ((*(long **)(lVar26 + 0x60) == (long *)0x0) ||
         (**(long **)(lVar26 + 0x60) != *(long *)(lVar26 + 0x68))) {
        *(undefined8 *)(lVar21 + 0x28) = 0;
      }
      else {
        lVar26 = *(long *)(lVar26 + 0x58);
        *(long *)(lVar21 + 0x28) = lVar26;
        if (lVar26 != 0) goto LAB_71035685f0;
      }
      uVar23 = 0;
      *(undefined8 *)(lVar21 + 0x30) = 0;
LAB_7103568618:
      *(undefined8 *)(lVar21 + 0x38) = uVar23;
    }
  }
  else {
    plVar25 = (long *)puVar11[2];
    lVar21 = *plVar25;
    if (1 < (ulong)(plVar25[2] - lVar21 >> 5)) {
      if ((ulong)(plVar25[1] - lVar21 >> 5) < 2) goto LAB_7103569d68;
      if ((*(long **)(lVar27 + 0x60) == (long *)0x0) ||
         (**(long **)(lVar27 + 0x60) != *(long *)(lVar27 + 0x68))) {
        *(undefined8 *)(lVar21 + 0x28) = 0;
      }
      else {
        lVar26 = *(long *)(lVar27 + 0x58);
        *(long *)(lVar21 + 0x28) = lVar26;
        if (lVar26 != 0) {
LAB_71035685f0:
          puVar22 = *(undefined8 **)(lVar26 + 8);
          *(undefined8 **)(lVar21 + 0x30) = puVar22;
          uVar23 = *puVar22;
          goto LAB_7103568618;
        }
      }
      *(undefined8 *)(lVar21 + 0x30) = 0;
      *(undefined8 *)(lVar21 + 0x38) = 0;
    }
  }
  ppppbVar16 = (byte ****)0x1;
  FUN_71035b71d0((undefined8 *)puVar11[3],1,(long ****)&DAT_00000004,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  plVar18 = (long *)puVar11[1];
  lVar21 = *(long *)(piVar9 + 0x6a);
  plVar25 = *(long **)(piVar9 + 0x66);
  plVar29 = *(long **)(piVar9 + 0x68);
  *(long *)(piVar9 + 0x6a) = *plVar18;
  *(undefined8 **)(piVar9 + 0x66) = puVar11;
  *(long **)(piVar9 + 0x68) = plVar18;
  if (((plVar29 != (long *)0x0) && (plVar25 != (long *)0x0)) && (*plVar29 == lVar21)) {
    (**(code **)(*plVar25 + 8))();
    plVar18 = *(long **)(piVar9 + 0x68);
  }
  if (((plVar18 == (long *)0x0) || (*plVar18 != *(long *)(piVar9 + 0x6a))) ||
     ((lVar21 = *(long *)(piVar9 + 0x66), lVar21 == 0 || (*(long *)(lVar21 + 8) == 0)))) {
    lVar21 = 0;
    piVar9[0x6e] = 0;
    piVar9[0x6f] = 0;
    piVar9[0x70] = 0;
    piVar9[0x71] = 0;
  }
  else {
    *(long *)(piVar9 + 0x6e) = lVar21;
    plVar25 = *(long **)(lVar21 + 8);
    *(long **)(piVar9 + 0x70) = plVar25;
    lVar21 = *plVar25;
  }
  *(long *)(piVar9 + 0x72) = lVar21;
  if ((*(long **)(piVar9 + 0x70) == (long *)0x0) || (**(long **)(piVar9 + 0x70) != lVar21)) {
    local_110 = 0;
LAB_71035686f4:
    local_100 = 0;
    local_108 = (undefined8 *)0x0;
  }
  else {
    local_110 = *(long *)(piVar9 + 0x6e);
    if (local_110 == 0) goto LAB_71035686f4;
    local_108 = *(undefined8 **)(local_110 + 8);
    local_100 = *local_108;
  }
  iVar7 = FUN_710392e1f0(&local_1b8,0x10,(long ****)&SUB_00000020,ppppbVar16,param_5,param_6,param_7
                         ,param_8);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_390._0_1_ = 0x20;
    local_390._1_1_ = 0;
    local_390._2_2_ = 0;
    local_390._4_4_ = 0;
    uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_390);
    if ((uVar10 & 1) != 0) {
      FUN_710392e1f0(&local_1b8,0x10,(long ****)&SUB_00000020,ppppbVar16,param_5,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT44(local_1b8._4_4_,(uint)local_1b8));
  puVar11 = (undefined8 *)CONCAT44(local_1b8._4_4_,(uint)local_1b8);
  FUN_71035b7380(puVar11,2,(long ****)0x2,ppppbVar16,param_5,param_6,param_7,param_8);
  plVar25 = (long *)puVar11[2];
  lVar21 = *plVar25;
  lVar26 = *(long *)(lVar5 + 0x4c8);
  plVar29 = *(long **)(lVar5 + 0x4d0);
  lVar30 = *(long *)(lVar5 + 0x4d8);
  if (plVar25[2] != lVar21) {
    if (plVar25[1] == lVar21) goto LAB_7103569d68;
    if (((plVar29 == (long *)0x0) || (*plVar29 != lVar30)) || (lVar26 == 0)) {
      uVar23 = 0;
      *(undefined8 *)(lVar21 + 8) = 0;
      *(undefined8 *)(lVar21 + 0x10) = 0;
    }
    else {
      *(long *)(lVar21 + 8) = lVar26;
      puVar22 = *(undefined8 **)(lVar26 + 0x60);
      *(undefined8 **)(lVar21 + 0x10) = puVar22;
      uVar23 = *puVar22;
    }
    *(undefined8 *)(lVar21 + 0x18) = uVar23;
  }
  FUN_71035b7760((undefined8 *)puVar11[3],0,(long ****)&DAT_00000004,(byte ****)0x0,param_5,param_6,
                 param_7,param_8);
  plVar25 = (long *)puVar11[2];
  lVar21 = *plVar25;
  if (1 < (ulong)(plVar25[2] - lVar21 >> 5)) {
    if ((ulong)(plVar25[1] - lVar21 >> 5) < 2) goto LAB_7103569d68;
    if (((plVar29 == (long *)0x0) || (*plVar29 != lVar30)) || (lVar26 == 0)) {
      uVar23 = 0;
      *(undefined8 *)(lVar21 + 0x28) = 0;
      *(undefined8 *)(lVar21 + 0x30) = 0;
    }
    else {
      *(long *)(lVar21 + 0x28) = lVar26;
      puVar22 = *(undefined8 **)(lVar26 + 0x60);
      *(undefined8 **)(lVar21 + 0x30) = puVar22;
      uVar23 = *puVar22;
    }
    *(undefined8 *)(lVar21 + 0x38) = uVar23;
  }
  ppppbVar16 = (byte ****)0x1;
  FUN_71035b7760((undefined8 *)puVar11[3],1,(long ****)&DAT_00000004,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  plVar29 = (long *)puVar11[1];
  lVar26 = *plVar29;
  plVar25 = *(long **)(piVar9 + 0x86);
  plVar18 = *(long **)(piVar9 + 0x88);
  lVar21 = *(long *)(piVar9 + 0x8a);
  *(undefined8 **)(piVar9 + 0x86) = puVar11;
  *(long **)(piVar9 + 0x88) = plVar29;
  *(long *)(piVar9 + 0x8a) = lVar26;
  if (((plVar18 != (long *)0x0) && (plVar25 != (long *)0x0)) && (*plVar18 == lVar21)) {
    (**(code **)(*plVar25 + 8))();
    plVar29 = *(long **)(piVar9 + 0x88);
  }
  if ((((plVar29 == (long *)0x0) || (*plVar29 != *(long *)(piVar9 + 0x8a))) ||
      (lVar21 = *(long *)(piVar9 + 0x86), lVar21 == 0)) || (*(long *)(lVar21 + 8) == 0)) {
    lVar21 = 0;
    piVar9[0x8e] = 0;
    piVar9[0x8f] = 0;
    piVar9[0x90] = 0;
    piVar9[0x91] = 0;
  }
  else {
    *(long *)(piVar9 + 0x8e) = lVar21;
    plVar25 = *(long **)(lVar21 + 8);
    *(long **)(piVar9 + 0x90) = plVar25;
    lVar21 = *plVar25;
  }
  *(long *)(piVar9 + 0x92) = lVar21;
  if ((*(long **)(piVar9 + 0x90) == (long *)0x0) || (**(long **)(piVar9 + 0x90) != lVar21)) {
    local_f0 = 0;
LAB_7103568938:
    local_e0 = 0;
    local_e8 = (undefined8 *)0x0;
  }
  else {
    local_f0 = *(long *)(piVar9 + 0x8e);
    if (local_f0 == 0) goto LAB_7103568938;
    local_e8 = *(undefined8 **)(local_f0 + 8);
    local_e0 = *local_e8;
  }
  iVar7 = FUN_710392e1f0(&local_1b8,0x10,(long ****)&DAT_00000078,ppppbVar16,param_5,param_6,param_7
                         ,param_8);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_390._0_1_ = 0x78;
    local_390._1_1_ = 0;
    local_390._2_2_ = 0;
    local_390._4_4_ = 0;
    uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_390);
    if ((uVar10 & 1) != 0) {
      FUN_710392e1f0(&local_1b8,0x10,(long ****)&DAT_00000078,ppppbVar16,param_5,param_6,param_7,
                     param_8);
    }
  }
  pppplVar15 = (long ****)CONCAT44(local_1b8._4_4_,(uint)local_1b8);
  nu::VirtualAllocHook(0x78,0x10,pppplVar15);
  puVar11 = (undefined8 *)CONCAT44(local_1b8._4_4_,(uint)local_1b8);
  puVar11[0xc] = 0;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[3] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar22 = puVar11 + 0xb;
  *puVar22 = 0;
  puVar11[6] = 0;
  puVar11[2] = 0;
  FUN_71037c3a70(puVar11);
  puVar11[3] = 0;
  *puVar11 = &PTR_FUN_7105232258;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[2] = &PTR_FUN_7105231ab0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  puVar11[7] = 0;
  puVar11[6] = &PTR_FUN_7105231a30;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0;
  *puVar22 = 0;
  puVar11[10] = &PTR_FUN_7105231a10;
  *(undefined4 *)(puVar11 + 0xe) = 0;
  lVar21 = DAT_7105231b28;
  if ((((DAT_7105231b30 == (long *)0x0) || (DAT_7105231b28 == 0)) ||
      (*DAT_7105231b30 != DAT_7105231b38)) || (*(long *)(DAT_7105231b28 + 8) == 0)) {
    uVar23 = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
  }
  else {
    puVar11[7] = DAT_7105231b28;
    puVar19 = *(undefined8 **)(lVar21 + 8);
    puVar11[8] = puVar19;
    uVar23 = *puVar19;
  }
  puVar11[9] = uVar23;
  if (((*(long **)(lVar5 + 0x3a0) == (long *)0x0) ||
      (**(long **)(lVar5 + 0x3a0) != *(long *)(lVar5 + 0x3a8))) ||
     ((lVar21 = *(long *)(lVar5 + 0x398), lVar21 == 0 || (*(long *)(lVar21 + 8) == 0)))) {
    uVar23 = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
  }
  else {
    puVar11[3] = lVar21;
    puVar19 = *(undefined8 **)(lVar21 + 8);
    puVar11[4] = puVar19;
    uVar23 = *puVar19;
  }
  puVar11[5] = uVar23;
  lVar24 = lVar24 + (long)piVar9[0xab] * 0x20;
  if (((*(long **)(lVar24 + 0x100) == (long *)0x0) ||
      (**(long **)(lVar24 + 0x100) != *(long *)(lVar24 + 0x108))) ||
     ((lVar24 = *(long *)(lVar24 + 0xf8), lVar24 == 0 || (*(long *)(lVar24 + 8) == 0)))) {
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    *puVar22 = 0;
  }
  else {
    puVar11[0xb] = lVar24;
    puVar22 = *(undefined8 **)(lVar24 + 8);
    puVar11[0xc] = puVar22;
    puVar11[0xd] = *puVar22;
  }
  plVar29 = (long *)puVar11[1];
  lVar21 = *plVar29;
  plVar25 = *(long **)(piVar9 + 0x96);
  plVar18 = *(long **)(piVar9 + 0x98);
  lVar24 = *(long *)(piVar9 + 0x9a);
  *(undefined8 **)(piVar9 + 0x96) = puVar11;
  *(long **)(piVar9 + 0x98) = plVar29;
  *(long *)(piVar9 + 0x9a) = lVar21;
  if (((plVar18 != (long *)0x0) && (plVar25 != (long *)0x0)) && (*plVar18 == lVar24)) {
    (**(code **)(*plVar25 + 8))();
    plVar29 = *(long **)(piVar9 + 0x98);
  }
  if (((plVar29 == (long *)0x0) || (*plVar29 != *(long *)(piVar9 + 0x9a))) ||
     ((lVar24 = *(long *)(piVar9 + 0x96), lVar24 == 0 || (*(long *)(lVar24 + 8) == 0)))) {
    lVar24 = 0;
    piVar9[0x9e] = 0;
    piVar9[0x9f] = 0;
    piVar9[0xa0] = 0;
    piVar9[0xa1] = 0;
  }
  else {
    *(long *)(piVar9 + 0x9e) = lVar24;
    plVar25 = *(long **)(lVar24 + 8);
    *(long **)(piVar9 + 0xa0) = plVar25;
    lVar24 = *plVar25;
  }
  *(long *)(piVar9 + 0xa2) = lVar24;
  if ((*(long **)(piVar9 + 0xa0) == (long *)0x0) || (**(long **)(piVar9 + 0xa0) != lVar24)) {
    local_d0 = 0;
LAB_7103568bfc:
    local_c0 = 0;
    local_c8 = (undefined8 *)0x0;
  }
  else {
    local_d0 = *(long *)(piVar9 + 0x9e);
    if (local_d0 == 0) goto LAB_7103568bfc;
    local_c8 = *(undefined8 **)(local_d0 + 8);
    local_c0 = *local_c8;
  }
  local_b8 = 0x14;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x1120,pppplVar15,ppppbVar16,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b8._0_4_ = 0;
      local_390._0_1_ = 0x20;
      local_390._1_1_ = 0x11;
      local_390._2_2_ = 0;
      local_390._4_4_ = 0;
      pppplVar15 = (long ****)&local_390;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b8);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x1120,pppplVar15,ppppbVar16,param_5,param_6,param_7,param_8
                                  ), puVar11 != (undefined8 *)0x0)) goto LAB_7103568c6c;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7103568c6c:
  *puVar11 = &DAT_7105231730;
  puVar11[1] = 0;
  puVar11[4] = &PTR_FUN_7104f62038;
  puVar11[5] = 0;
  puVar11[8] = &PTR_FUN_7105232278;
  puVar11[9] = 0;
  *(undefined1 *)(puVar11 + 0x1c) = 1;
  puVar11[0xc] = &PTR_FUN_7105232298;
  puVar11[0xd] = 0;
  puVar11[0x10] = &PTR_FUN_71052322b8;
  puVar11[0x11] = 0;
  puVar11[0x14] = &PTR_FUN_7105231690;
  puVar11[0x15] = 0;
  *(undefined8 *)((long)puVar11 + 0xec) = 0;
  *(undefined8 *)((long)puVar11 + 0xe4) = 0;
  *(undefined1 *)(puVar11 + 0x29) = 0;
  puVar11[0x20] = &PTR_FUN_71052322d8;
  puVar11[0x21] = 0;
  *(undefined4 *)((long)puVar11 + 0xf4) = 1;
  *(undefined4 *)(puVar11 + 0x1f) = 4;
  *(undefined4 *)((long)puVar11 + 0x14c) = 4;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0;
  puVar11[0x16] = 0;
  puVar11[0x17] = 0;
  puVar11[0x1a] = 0;
  puVar11[0x1b] = 0;
  puVar11[0x18] = &PTR_FUN_7105232358;
  puVar11[0x19] = 0;
  puVar11[0x22] = 0;
  puVar11[0x23] = 0;
  puVar11[0x27] = 0xffffffffffffffff;
  puVar11[0x28] = 0;
  uVar23 = _ConstantZero;
  uVar34 = (undefined4)_DAT_7107521008;
  puVar11[0x26] = 0;
  *(undefined1 *)(puVar11 + 0x2a) = 0;
  puVar11[0x25] = CONCAT44(0x3f800000,uVar34);
  puVar11[0x24] = uVar23;
  *(undefined8 *)((long)puVar11 + 0x154) = 0;
  puVar11[0x3a] = 0;
  puVar11[0x2c] = 0;
  puVar11[0x2d] = 0;
  puVar11[0x38] = 0;
  puVar11[0x39] = 0xffffffffffffffff;
  puVar11[0x3d] = 0;
  puVar11[0x3e] = 0;
  puVar11[0x3b] = &PTR_FUN_7105232378;
  puVar11[0x3c] = 0;
  FUN_71037c3a70(puVar11 + 0x3f);
  puVar11[0x36] = puVar11[0x24];
  puVar11[0x37] = puVar11[0x25];
  *(undefined4 *)(puVar11 + 0x41) = 1;
  *(undefined1 *)((long)puVar11 + 0x20c) = 0;
  puVar11[0x38] = puVar11[0x26];
  puVar11[0x39] = puVar11[0x27];
  puVar11[0x222] = 0;
  puVar11[0x3f] = &PTR_thunk_FUN_71037d1400_7105243018;
  puVar11[0x2f] = 0;
  puVar11[0x2e] = 0x3f800000;
  puVar11[0x31] = 0;
  puVar11[0x30] = 0x3f80000000000000;
  puVar11[0x33] = 0x3f800000;
  puVar11[0x32] = 0;
  puVar11[0x35] = 0x3f80000000000000;
  puVar11[0x34] = 0;
  uVar10 = *puVar33;
  *puVar33 = (ulong)puVar11;
  if (uVar10 != 0) {
    FUN_71035b79d0(uVar10);
    FUN_710392eb40(uVar10);
    puVar11 = (undefined8 *)*puVar33;
  }
  pppplVar15 = &local_198;
  FUN_71035b7aa0((long)puVar11,&local_b0,(long)pppplVar15);
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x1120,pppplVar15,ppppbVar16,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b8._0_4_ = 0;
      local_390._0_1_ = 0x20;
      local_390._1_1_ = 0x11;
      local_390._2_2_ = 0;
      local_390._4_4_ = 0;
      pppplVar15 = (long ****)&local_390;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b8);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x1120,pppplVar15,ppppbVar16,param_5,param_6,param_7,param_8
                                  ), puVar11 != (undefined8 *)0x0)) goto LAB_7103568e40;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7103568e40:
  *puVar11 = &DAT_7105231730;
  puVar11[1] = 0;
  puVar11[4] = &PTR_FUN_7104f62038;
  puVar11[5] = 0;
  *(undefined1 *)(puVar11 + 0x1c) = 1;
  puVar11[8] = &PTR_FUN_7105232278;
  puVar11[9] = 0;
  puVar11[0xc] = &PTR_FUN_7105232298;
  puVar11[0xd] = 0;
  *(undefined8 *)((long)puVar11 + 0xec) = 0;
  *(undefined8 *)((long)puVar11 + 0xe4) = 0;
  *(undefined1 *)(puVar11 + 0x29) = 0;
  puVar11[0x10] = &PTR_FUN_71052322b8;
  puVar11[0x11] = 0;
  puVar11[0x14] = &PTR_FUN_7105231690;
  puVar11[0x15] = 0;
  puVar11[0x20] = &PTR_FUN_71052322d8;
  puVar11[0x21] = 0;
  *(undefined4 *)((long)puVar11 + 0xf4) = 1;
  *(undefined4 *)(puVar11 + 0x1f) = 4;
  *(undefined4 *)((long)puVar11 + 0x14c) = 4;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0;
  puVar11[0x16] = 0;
  puVar11[0x17] = 0;
  puVar11[0x1a] = 0;
  puVar11[0x1b] = 0;
  puVar11[0x18] = &PTR_FUN_7105232358;
  puVar11[0x19] = 0;
  puVar11[0x22] = 0;
  puVar11[0x23] = 0;
  puVar11[0x27] = 0xffffffffffffffff;
  puVar11[0x28] = 0;
  uVar23 = _ConstantZero;
  uVar34 = (undefined4)_DAT_7107521008;
  puVar11[0x26] = 0;
  *(undefined1 *)(puVar11 + 0x2a) = 0;
  puVar11[0x25] = CONCAT44(0x3f800000,uVar34);
  puVar11[0x24] = uVar23;
  *(undefined8 *)((long)puVar11 + 0x154) = 0;
  puVar11[0x3a] = 0;
  puVar11[0x2c] = 0;
  puVar11[0x2d] = 0;
  puVar11[0x38] = 0;
  puVar11[0x39] = 0xffffffffffffffff;
  puVar11[0x3d] = 0;
  puVar11[0x3e] = 0;
  puVar11[0x3b] = &PTR_FUN_7105232378;
  puVar11[0x3c] = 0;
  FUN_71037c3a70(puVar11 + 0x3f);
  *(undefined4 *)(puVar11 + 0x41) = 1;
  puVar11[0x36] = puVar11[0x24];
  puVar11[0x37] = puVar11[0x25];
  *(undefined1 *)((long)puVar11 + 0x20c) = 0;
  puVar11[0x222] = 0;
  puVar11[0x38] = puVar11[0x26];
  puVar11[0x39] = puVar11[0x27];
  puVar11[0x2f] = 0;
  puVar11[0x2e] = 0x3f800000;
  puVar11[0x3f] = &PTR_thunk_FUN_71037d1400_7105243018;
  puVar11[0x31] = 0;
  puVar11[0x30] = 0x3f80000000000000;
  puVar11[0x33] = 0x3f800000;
  puVar11[0x32] = 0;
  puVar11[0x35] = 0x3f80000000000000;
  puVar11[0x34] = 0;
  uVar10 = *(ulong *)(piVar9 + 0x42);
  *(undefined8 **)(piVar9 + 0x42) = puVar11;
  if (uVar10 != 0) {
    FUN_71035b79d0(uVar10);
    FUN_710392eb40(uVar10);
    puVar11 = *(undefined8 **)(piVar9 + 0x42);
  }
  pppplVar15 = &local_198;
  FUN_71035b7aa0((long)puVar11,&local_b0,(long)pppplVar15);
  uVar23 = extraout_x1_00;
  if ((2 < *puVar32) && (param_1[0x1f] == 3)) {
    local_1b8._0_4_ = 1;
    local_1b8._4_4_ = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1ab = 0;
    uStack_1aa = 0;
    local_1a0 = 0;
    uStack_1a8 = 0;
    local_1a4 = 0x1000001;
    FUN_7103590cf0(&local_390,(uint *)&local_1b8,pppplVar15,ppppbVar16,param_5,param_6,param_7,
                   param_8);
    if (((long *)CONCAT44(uStack_37c,local_380) == (long *)0x0) ||
       (*(long *)CONCAT44(uStack_37c,local_380) != CONCAT44(uStack_374,local_378))) {
      local_170 = 0;
LAB_7103569010:
      local_160 = 0;
      local_168 = (undefined8 *)0x0;
    }
    else {
      local_170 = CONCAT26(uStack_382,CONCAT15(uStack_383,CONCAT14(uStack_384,local_388)));
      if (local_170 == 0) goto LAB_7103569010;
      local_168 = *(undefined8 **)(local_170 + 8);
      local_160 = *local_168;
    }
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x1120,pppplVar15,ppppbVar16,param_5,param_6,param_7,param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1e0 = local_1e0 & 0xffffffff00000000;
        local_390._0_1_ = 0x20;
        local_390._1_1_ = 0x11;
        local_390._2_2_ = 0;
        local_390._4_4_ = 0;
        pppplVar15 = (long ****)&local_390;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1e0);
        if (((uVar10 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x1120,pppplVar15,ppppbVar16,param_5,param_6,param_7,
                                     param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7103569078;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_7103569078:
    *puVar11 = &DAT_7105231730;
    puVar11[1] = 0;
    puVar11[4] = &PTR_FUN_7104f62038;
    puVar11[5] = 0;
    *(undefined1 *)(puVar11 + 0x1c) = 1;
    puVar11[8] = &PTR_FUN_7105232278;
    puVar11[9] = 0;
    puVar11[0xc] = &PTR_FUN_7105232298;
    puVar11[0xd] = 0;
    *(undefined8 *)((long)puVar11 + 0xec) = 0;
    *(undefined8 *)((long)puVar11 + 0xe4) = 0;
    *(undefined1 *)(puVar11 + 0x29) = 0;
    puVar11[0x10] = &PTR_FUN_71052322b8;
    puVar11[0x11] = 0;
    puVar11[0x14] = &PTR_FUN_7105231690;
    puVar11[0x15] = 0;
    puVar11[0x20] = &PTR_FUN_71052322d8;
    puVar11[0x21] = 0;
    *(undefined4 *)((long)puVar11 + 0xf4) = 1;
    *(undefined4 *)(puVar11 + 0x1f) = 4;
    *(undefined4 *)((long)puVar11 + 0x14c) = 4;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0;
    puVar11[0x16] = 0;
    puVar11[0x17] = 0;
    puVar11[0x1a] = 0;
    puVar11[0x1b] = 0;
    puVar11[0x18] = &PTR_FUN_7105232358;
    puVar11[0x19] = 0;
    puVar11[0x22] = 0;
    puVar11[0x23] = 0;
    puVar11[0x27] = 0xffffffffffffffff;
    puVar11[0x28] = 0;
    uVar23 = _ConstantZero;
    uVar34 = (undefined4)_DAT_7107521008;
    puVar11[0x26] = 0;
    *(undefined1 *)(puVar11 + 0x2a) = 0;
    puVar11[0x25] = CONCAT44(0x3f800000,uVar34);
    puVar11[0x24] = uVar23;
    *(undefined8 *)((long)puVar11 + 0x154) = 0;
    puVar11[0x3a] = 0;
    puVar11[0x2c] = 0;
    puVar11[0x2d] = 0;
    puVar11[0x38] = 0;
    puVar11[0x39] = 0xffffffffffffffff;
    puVar11[0x3d] = 0;
    puVar11[0x3e] = 0;
    puVar11[0x3b] = &PTR_FUN_7105232378;
    puVar11[0x3c] = 0;
    FUN_71037c3a70(puVar11 + 0x3f);
    *(undefined4 *)(puVar11 + 0x41) = 1;
    puVar11[0x36] = puVar11[0x24];
    puVar11[0x37] = puVar11[0x25];
    *(undefined1 *)((long)puVar11 + 0x20c) = 0;
    puVar11[0x222] = 0;
    puVar11[0x38] = puVar11[0x26];
    puVar11[0x39] = puVar11[0x27];
    puVar11[0x2f] = 0;
    puVar11[0x2e] = 0x3f800000;
    puVar11[0x3f] = &PTR_thunk_FUN_71037d1400_7105243018;
    puVar11[0x31] = 0;
    puVar11[0x30] = 0x3f80000000000000;
    puVar11[0x33] = 0x3f800000;
    puVar11[0x32] = 0;
    puVar11[0x35] = 0x3f80000000000000;
    puVar11[0x34] = 0;
    uVar10 = *(ulong *)(piVar9 + 0x3e);
    *(undefined8 **)(piVar9 + 0x3e) = puVar11;
    if (uVar10 != 0) {
      FUN_71035b79d0(uVar10);
      FUN_710392eb40(uVar10);
      puVar11 = *(undefined8 **)(piVar9 + 0x3e);
    }
    pppplVar15 = &local_198;
    FUN_71035b7aa0((long)puVar11,&local_b0,(long)pppplVar15);
    uVar23 = extraout_x1_01;
    if (*(long *)(piVar9 + 0x3e) == 0) goto LAB_71035678d0;
  }
  if (!bVar3) goto LAB_7103569b44;
  local_35c = 0;
  local_354 = 1;
  local_350 = 0;
  local_33c = 1;
  local_334 = &DAT_10000000f;
  local_348 = 0;
  local_344 = 0;
  local_340 = 0;
  local_32c = 0;
  local_328 = 0x100000000;
  uStack_320 = 0;
  local_30c = 1;
  local_304 = &DAT_10000000f;
  local_318 = 0;
  local_314 = 0;
  local_310 = 0;
  local_2fc = 0;
  local_2f4 = 1;
  local_2f0 = 0;
  local_2dc = 1;
  local_2d4 = &DAT_10000000f;
  local_2e8 = 0;
  local_2e4 = 0;
  local_2e0 = 0;
  local_2cc = 0;
  local_2c4 = 1;
  local_2c0 = 0;
  local_2ac = 1;
  local_2a4 = &DAT_10000000f;
  local_2b8 = 0;
  local_2b4 = 0;
  local_2b0 = 0;
  local_29c = 0;
  local_294 = 1;
  local_290 = 0;
  local_27c = 1;
  local_274 = &DAT_10000000f;
  local_288 = 0;
  local_284 = 0;
  local_280 = 0;
  local_26c = 0;
  local_238 = 0x100000000;
  local_264 = 1;
  local_260 = 0;
  local_24c = 1;
  local_248 = 0xf00000000;
  local_258 = 0;
  local_254 = 0;
  local_250 = 0;
  local_240 = 1;
  local_230 = 0;
  local_21c = 1;
  local_390._0_1_ = 2;
  local_390._1_1_ = 0;
  local_390._2_2_ = 0;
  local_390._4_4_ = 0;
  local_388 = 7;
  uStack_384 = 0;
  uStack_383 = 0;
  uStack_382 = 0;
  local_380 = 0;
  uStack_37c = 6;
  local_214 = 0xf;
  local_228 = 0;
  local_224 = 0;
  local_220 = 0;
  local_378 = local_378 & 0xffffff00;
  uStack_374 = 0;
  local_370 = local_370 & 0xffffff00;
  local_36c = 5;
  local_364 = &DAT_10000000f;
  FUN_710359b630(&local_1b8,(uint *)&local_390,pppplVar15,ppppbVar16,param_5,param_6,param_7,param_8
                );
  if (((long *)CONCAT44(local_1a4,uStack_1a8) == (long *)0x0) ||
     (*(long *)CONCAT44(local_1a4,uStack_1a8) != CONCAT71(uStack_19f,local_1a0))) {
    local_190 = 0;
LAB_7103569398:
    local_180 = 0;
    local_188 = (undefined8 *)0x0;
  }
  else {
    local_190 = CONCAT26(uStack_1aa,CONCAT15(uStack_1ab,CONCAT14(uStack_1ac,uStack_1b0)));
    if (local_190 == 0) goto LAB_7103569398;
    local_188 = *(undefined8 **)(local_190 + 8);
    local_180 = *local_188;
  }
  iVar7 = FUN_710392e1f0(&local_1b8,0x10,(long ****)&DAT_00000160,ppppbVar16,param_5,param_6,param_7
                         ,param_8);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_390._0_1_ = 0x60;
    local_390._1_1_ = 1;
    local_390._2_2_ = 0;
    local_390._4_4_ = 0;
    uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_390);
    if ((uVar10 & 1) != 0) {
      FUN_710392e1f0(&local_1b8,0x10,(long ****)&DAT_00000160,ppppbVar16,param_5,param_6,param_7,
                     param_8);
    }
  }
  pvVar31 = (void *)CONCAT44(local_1b8._4_4_,(uint)local_1b8);
  nu::VirtualAllocHook(0x160,0x10,pvVar31);
  puVar11 = (undefined8 *)CONCAT44(local_1b8._4_4_,(uint)local_1b8);
  FUN_71035b68c0(puVar11,extraout_x1_02,pvVar31,ppppbVar16,param_5,param_6,param_7,param_8);
  uStack_382 = 0;
  local_390._0_1_ = 0x18;
  local_390._1_1_ = 0x30;
  local_390._2_2_ = 0x3478;
  local_390._4_4_ = 0x30303066;
  uStack_1aa = 0;
  uStack_1a8 = 0;
  local_1a4 = 0;
  local_380 = 0;
  uStack_37c = 0;
  local_388 = 0x56396533;
  uStack_384 = 0x53;
  uStack_383 = 0;
  local_1b8._0_4_ = 0x34783018;
  local_1b8._4_4_ = 0x30303066;
  uStack_1b0 = 0x50396533;
  uStack_1ac = 0x53;
  uStack_1ab = 0;
  FUN_71035b6c50((long)puVar11,&local_390,&local_1b8,ppppbVar16,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    plVar25 = (long *)0x0;
    lVar24 = 0;
  }
  else {
    plVar25 = (long *)puVar11[1];
    lVar24 = *plVar25;
  }
  plVar29 = *(long **)(piVar9 + 0x56);
  plVar18 = *(long **)(piVar9 + 0x58);
  lVar21 = *(long *)(piVar9 + 0x5a);
  *(undefined8 **)(piVar9 + 0x56) = puVar11;
  *(long **)(piVar9 + 0x58) = plVar25;
  *(long *)(piVar9 + 0x5a) = lVar24;
  if (((plVar18 != (long *)0x0) && (plVar29 != (long *)0x0)) && (*plVar18 == lVar21)) {
    (**(code **)(*plVar29 + 8))();
    plVar25 = *(long **)(piVar9 + 0x58);
  }
  if (((plVar25 == (long *)0x0) || (*plVar25 != *(long *)(piVar9 + 0x5a))) ||
     ((lVar24 = *(long *)(piVar9 + 0x56), lVar24 == 0 || (*(long *)(lVar24 + 8) == 0)))) {
    lVar24 = 0;
    piVar9[0x5e] = 0;
    piVar9[0x5f] = 0;
    piVar9[0x60] = 0;
    piVar9[0x61] = 0;
  }
  else {
    *(long *)(piVar9 + 0x5e) = lVar24;
    plVar25 = *(long **)(lVar24 + 8);
    *(long **)(piVar9 + 0x60) = plVar25;
    lVar24 = *plVar25;
  }
  *(long *)(piVar9 + 0x62) = lVar24;
  if ((*(long **)(piVar9 + 0x60) == (long *)0x0) || (**(long **)(piVar9 + 0x60) != lVar24)) {
    local_130 = 0;
LAB_7103569564:
    local_120 = 0;
    local_128 = (undefined8 *)0x0;
  }
  else {
    local_130 = *(long *)(piVar9 + 0x5e);
    if (local_130 == 0) goto LAB_7103569564;
    local_128 = *(undefined8 **)(local_130 + 8);
    local_120 = *local_128;
  }
  if (((uint)local_1b8 & 1) != 0) {
    pvVar31 = (void *)CONCAT44(local_1a4,uStack_1a8);
    nu::VirtualFreeHook(pvVar31);
    FUN_710392eb40((ulong)pvVar31);
  }
  if (((byte)local_390 & 1) != 0) {
    pvVar31 = (void *)CONCAT44(uStack_37c,local_380);
    nu::VirtualFreeHook(pvVar31);
    FUN_710392eb40((ulong)pvVar31);
  }
  iVar7 = FUN_710392e1f0(&local_1b8,0x10,(long ****)&SUB_00000020,ppppbVar16,param_5,param_6,param_7
                         ,param_8);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_390._0_1_ = 0x20;
    local_390._1_1_ = 0;
    local_390._2_2_ = 0;
    local_390._4_4_ = 0;
    uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_390);
    if ((uVar10 & 1) != 0) {
      FUN_710392e1f0(&local_1b8,0x10,(long ****)&SUB_00000020,ppppbVar16,param_5,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT44(local_1b8._4_4_,(uint)local_1b8));
  puVar11 = (undefined8 *)CONCAT44(local_1b8._4_4_,(uint)local_1b8);
  pppplVar15 = (long ****)0x2;
  FUN_71035b6df0(puVar11,2,(long ****)0x2,ppppbVar16,param_5,param_6,param_7,param_8);
  lVar24 = FUN_7103720840(DAT_7105338f70,0x714194292);
  if (lVar24 != 0) {
    if (*(char *)(lVar24 + 4) == '\0') {
      uVar23 = *(undefined8 *)(lVar24 + 0x58);
      local_388 = (uint)uVar23;
      uStack_384 = (undefined1)((ulong)uVar23 >> 0x20);
      uStack_383 = (undefined1)((ulong)uVar23 >> 0x28);
      uStack_382 = (undefined2)((ulong)uVar23 >> 0x30);
      local_380 = (undefined4)*(undefined8 *)(lVar24 + 0x60);
      uStack_37c = (undefined4)((ulong)*(undefined8 *)(lVar24 + 0x60) >> 0x20);
      uVar23 = *(undefined8 *)(lVar24 + 0x68);
LAB_71035696b4:
      local_378 = (uint)uVar23;
      uStack_374 = (undefined4)((ulong)uVar23 >> 0x20);
      local_390._0_1_ = 0xc0;
      local_390._1_1_ = 2;
      local_390._2_2_ = 0x523;
      local_390._4_4_ = 0x71;
    }
    else {
      if (*(char *)(lVar24 + 5) == '\0') {
        local_388 = (uint)DAT_710523cb58;
        uStack_384 = (undefined1)((ulong)DAT_710523cb58 >> 0x20);
        uStack_383 = (undefined1)((ulong)DAT_710523cb58 >> 0x28);
        uStack_382 = (undefined2)((ulong)DAT_710523cb58 >> 0x30);
        local_380 = (undefined4)DAT_710523cb60;
        uStack_37c = (undefined4)((ulong)DAT_710523cb60 >> 0x20);
        uVar23 = DAT_710523cb68;
        goto LAB_71035696b4;
      }
      (**(code **)(**(long **)(lVar24 + 0x38) + 0x28))(&local_390,*(long **)(lVar24 + 0x38),0);
    }
    plVar25 = (long *)puVar11[2];
    lVar24 = *plVar25;
    if (plVar25[2] != lVar24) {
      if (plVar25[1] == lVar24) goto LAB_7103569d68;
      if (((long *)CONCAT44(uStack_37c,local_380) == (long *)0x0) ||
         (*(long *)CONCAT44(uStack_37c,local_380) != CONCAT44(uStack_374,local_378))) {
        *(undefined8 *)(lVar24 + 8) = 0;
LAB_710356971c:
        uVar23 = 0;
        *(undefined8 *)(lVar24 + 0x10) = 0;
      }
      else {
        lVar21 = CONCAT26(uStack_382,CONCAT15(uStack_383,CONCAT14(uStack_384,local_388)));
        *(long *)(lVar24 + 8) = lVar21;
        if (lVar21 == 0) goto LAB_710356971c;
        puVar22 = *(undefined8 **)(lVar21 + 8);
        *(undefined8 **)(lVar24 + 0x10) = puVar22;
        uVar23 = *puVar22;
      }
      *(undefined8 *)(lVar24 + 0x18) = uVar23;
    }
    FUN_71035b71d0((undefined8 *)puVar11[3],0,(long ****)&DAT_00000004,(byte ****)0x0,param_5,
                   param_6,param_7,param_8);
    if (piVar9[0x16] == 2) {
      if (lVar27 == 0) goto LAB_7103569800;
      plVar25 = (long *)puVar11[2];
      lVar24 = *plVar25;
      if ((ulong)(plVar25[2] - lVar24 >> 5) < 2) goto LAB_7103569894;
      if ((ulong)(plVar25[1] - lVar24 >> 5) < 2) goto LAB_7103569d68;
      if ((*(long **)(lVar27 + 0x60) == (long *)0x0) ||
         (**(long **)(lVar27 + 0x60) != *(long *)(lVar27 + 0x68))) goto LAB_710356988c;
      lVar13 = *(long *)(lVar27 + 0x58);
LAB_71035697f4:
      *(long *)(lVar24 + 0x28) = lVar13;
      if (lVar13 == 0) goto LAB_7103569890;
LAB_7103569860:
      puVar22 = *(undefined8 **)(lVar13 + 8);
      *(undefined8 **)(lVar24 + 0x30) = puVar22;
      uVar23 = *puVar22;
LAB_710356987c:
      *(undefined8 *)(lVar24 + 0x38) = uVar23;
    }
    else if ((piVar9[0x16] == 1) && (lVar13 != 0)) {
      plVar25 = (long *)puVar11[2];
      lVar24 = *plVar25;
      if (1 < (ulong)(plVar25[2] - lVar24 >> 5)) {
        if ((ulong)(plVar25[1] - lVar24 >> 5) < 2) goto LAB_7103569d68;
        if ((*(long **)(lVar13 + 0x60) != (long *)0x0) &&
           (**(long **)(lVar13 + 0x60) == *(long *)(lVar13 + 0x68))) {
          lVar13 = *(long *)(lVar13 + 0x58);
          goto LAB_71035697f4;
        }
LAB_710356988c:
        *(undefined8 *)(lVar24 + 0x28) = 0;
LAB_7103569890:
        *(undefined8 *)(lVar24 + 0x30) = 0;
        *(undefined8 *)(lVar24 + 0x38) = 0;
      }
    }
    else {
LAB_7103569800:
      plVar25 = (long *)puVar11[2];
      lVar24 = *plVar25;
      if (1 < (ulong)(plVar25[2] - lVar24 >> 5)) {
        if ((ulong)(plVar25[1] - lVar24 >> 5) < 2) {
LAB_7103569d68:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar13 = *(long *)(DAT_7105338f68 + 0x28);
        if ((*(long **)(lVar13 + 0x60) == (long *)0x0) ||
           (**(long **)(lVar13 + 0x60) != *(long *)(lVar13 + 0x68))) {
          *(undefined8 *)(lVar24 + 0x28) = 0;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x58);
          *(long *)(lVar24 + 0x28) = lVar13;
          if (lVar13 != 0) goto LAB_7103569860;
        }
        uVar23 = 0;
        *(undefined8 *)(lVar24 + 0x30) = 0;
        goto LAB_710356987c;
      }
    }
LAB_7103569894:
    pppplVar15 = (long ****)&DAT_00000004;
    ppppbVar16 = (byte ****)0x1;
    FUN_71035b71d0((undefined8 *)puVar11[3],1,(long ****)&DAT_00000004,(byte ****)0x1,param_5,
                   param_6,param_7,param_8);
    plVar18 = (long *)puVar11[1];
    lVar24 = *(long *)(piVar9 + 0x7a);
    plVar25 = *(long **)(piVar9 + 0x76);
    plVar29 = *(long **)(piVar9 + 0x78);
    *(long *)(piVar9 + 0x7a) = *plVar18;
    *(undefined8 **)(piVar9 + 0x76) = puVar11;
    *(long **)(piVar9 + 0x78) = plVar18;
    if (((plVar29 != (long *)0x0) && (plVar25 != (long *)0x0)) && (*plVar29 == lVar24)) {
      (**(code **)(*plVar25 + 8))();
      plVar18 = *(long **)(piVar9 + 0x78);
    }
    if (((plVar18 == (long *)0x0) || (*plVar18 != *(long *)(piVar9 + 0x7a))) ||
       ((lVar24 = *(long *)(piVar9 + 0x76), lVar24 == 0 || (*(long *)(lVar24 + 8) == 0)))) {
      lVar24 = 0;
      piVar9[0x7e] = 0;
      piVar9[0x7f] = 0;
      piVar9[0x80] = 0;
      piVar9[0x81] = 0;
    }
    else {
      *(long *)(piVar9 + 0x7e) = lVar24;
      plVar25 = *(long **)(lVar24 + 8);
      *(long **)(piVar9 + 0x80) = plVar25;
      lVar24 = *plVar25;
    }
    *(long *)(piVar9 + 0x82) = lVar24;
    if ((*(long **)(piVar9 + 0x80) == (long *)0x0) || (**(long **)(piVar9 + 0x80) != lVar24)) {
      local_110 = 0;
    }
    else {
      local_110 = *(long *)(piVar9 + 0x7e);
      if (local_110 != 0) {
        local_108 = *(undefined8 **)(local_110 + 8);
        local_100 = *local_108;
        goto LAB_7103569978;
      }
    }
    local_100 = 0;
    local_108 = (undefined8 *)0x0;
  }
LAB_7103569978:
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x1120,pppplVar15,ppppbVar16,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b8._0_4_ = 0;
      local_390._0_1_ = 0x20;
      local_390._1_1_ = 0x11;
      local_390._2_2_ = 0;
      local_390._4_4_ = 0;
      pppplVar15 = (long ****)&local_390;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b8);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x1120,pppplVar15,ppppbVar16,param_5,param_6,param_7,param_8
                                  ), puVar11 != (undefined8 *)0x0)) goto LAB_71035699d4;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71035699d4:
  *puVar11 = &DAT_7105231730;
  puVar11[1] = 0;
  puVar11[4] = &PTR_FUN_7104f62038;
  puVar11[5] = 0;
  puVar11[8] = &PTR_FUN_7105232278;
  puVar11[9] = 0;
  puVar11[0xc] = &PTR_FUN_7105232298;
  puVar11[0xd] = 0;
  puVar11[0x10] = &PTR_FUN_71052322b8;
  puVar11[0x11] = 0;
  *(undefined1 *)(puVar11 + 0x1c) = 1;
  *(undefined8 *)((long)puVar11 + 0xec) = 0;
  *(undefined8 *)((long)puVar11 + 0xe4) = 0;
  *(undefined1 *)(puVar11 + 0x29) = 0;
  puVar11[0x14] = &PTR_FUN_7105231690;
  puVar11[0x15] = 0;
  puVar11[0x20] = &PTR_FUN_71052322d8;
  puVar11[0x21] = 0;
  *(undefined4 *)((long)puVar11 + 0xf4) = 1;
  *(undefined4 *)(puVar11 + 0x1f) = 4;
  *(undefined4 *)((long)puVar11 + 0x14c) = 4;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xe] = 0;
  puVar11[0xf] = 0;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0;
  puVar11[0x16] = 0;
  puVar11[0x17] = 0;
  puVar11[0x1a] = 0;
  puVar11[0x1b] = 0;
  puVar11[0x18] = &PTR_FUN_7105232358;
  puVar11[0x19] = 0;
  puVar11[0x22] = 0;
  puVar11[0x23] = 0;
  puVar11[0x27] = 0xffffffffffffffff;
  puVar11[0x28] = 0;
  uVar23 = _ConstantZero;
  uVar34 = (undefined4)_DAT_7107521008;
  puVar11[0x26] = 0;
  *(undefined1 *)(puVar11 + 0x2a) = 0;
  puVar11[0x25] = CONCAT44(0x3f800000,uVar34);
  puVar11[0x24] = uVar23;
  *(undefined8 *)((long)puVar11 + 0x154) = 0;
  puVar11[0x3a] = 0;
  puVar11[0x2c] = 0;
  puVar11[0x2d] = 0;
  puVar11[0x38] = 0;
  puVar11[0x39] = 0xffffffffffffffff;
  puVar11[0x3d] = 0;
  puVar11[0x3e] = 0;
  puVar11[0x3b] = &PTR_FUN_7105232378;
  puVar11[0x3c] = 0;
  FUN_71037c3a70(puVar11 + 0x3f);
  puVar11[0x2f] = 0;
  puVar11[0x2e] = 0x3f800000;
  *(undefined4 *)(puVar11 + 0x41) = 1;
  *(undefined1 *)((long)puVar11 + 0x20c) = 0;
  puVar11[0x31] = 0;
  puVar11[0x30] = 0x3f80000000000000;
  puVar11[0x222] = 0;
  puVar11[0x3f] = &PTR_thunk_FUN_71037d1400_7105243018;
  puVar11[0x33] = 0x3f800000;
  puVar11[0x32] = 0;
  puVar11[0x36] = puVar11[0x24];
  puVar11[0x37] = puVar11[0x25];
  puVar11[0x38] = puVar11[0x26];
  puVar11[0x39] = puVar11[0x27];
  puVar11[0x35] = 0x3f80000000000000;
  puVar11[0x34] = 0;
  uVar10 = *(ulong *)(piVar9 + 0x40);
  *(undefined8 **)(piVar9 + 0x40) = puVar11;
  if (uVar10 != 0) {
    FUN_71035b79d0(uVar10);
    FUN_710392eb40(uVar10);
    puVar11 = *(undefined8 **)(piVar9 + 0x40);
  }
  pppplVar15 = &local_198;
  FUN_71035b7aa0((long)puVar11,&local_b0,(long)pppplVar15);
  if (*(long *)(piVar9 + 0x40) != 0) {
    *(int *)(DAT_7105336db8 + 0x14c) = *(int *)(DAT_7105336db8 + 0x14c) + 1;
    uVar23 = extraout_x1_03;
LAB_7103569b44:
    if (*puVar33 != 0) {
      FUN_71035b7d00(*puVar33,uVar23,pppplVar15,ppppbVar16,param_5,param_6,param_7,param_8);
      uVar10 = *puVar33;
      *(undefined8 *)(uVar10 + 0x178) = 0;
      *(undefined8 *)(uVar10 + 0x170) = 0x3f800000;
      *(undefined8 *)(uVar10 + 0x188) = 0;
      *(undefined8 *)(uVar10 + 0x180) = 0x3f80000000000000;
      *(undefined8 *)(uVar10 + 0x198) = 0x3f800000;
      *(undefined8 *)(uVar10 + 400) = 0;
      *(undefined8 *)(uVar10 + 0x1a8) = 0x3f80000000000000;
      *(undefined8 *)(uVar10 + 0x1a0) = 0;
      *(undefined1 *)(*puVar33 + 0xe0) = 0;
      uVar23 = extraout_x1_04;
    }
    if (*(long *)(piVar9 + 0x3e) != 0) {
      FUN_71035b7d00(*(long *)(piVar9 + 0x3e),uVar23,pppplVar15,ppppbVar16,param_5,param_6,param_7,
                     param_8);
      lVar24 = *(long *)(piVar9 + 0x3e);
      *(undefined8 *)(lVar24 + 0x178) = 0;
      *(undefined8 *)(lVar24 + 0x170) = 0x3f800000;
      *(undefined8 *)(lVar24 + 0x188) = 0;
      *(undefined8 *)(lVar24 + 0x180) = 0x3f80000000000000;
      *(undefined8 *)(lVar24 + 0x198) = 0x3f800000;
      *(undefined8 *)(lVar24 + 400) = 0;
      *(undefined8 *)(lVar24 + 0x1a8) = 0x3f80000000000000;
      *(undefined8 *)(lVar24 + 0x1a0) = 0;
      *(undefined1 *)(*(long *)(piVar9 + 0x3e) + 0xe0) = 0;
      uVar23 = extraout_x1_05;
    }
    if (*(long *)(piVar9 + 0x40) != 0) {
      FUN_71035b7d00(*(long *)(piVar9 + 0x40),uVar23,pppplVar15,ppppbVar16,param_5,param_6,param_7,
                     param_8);
      lVar24 = *(long *)(piVar9 + 0x40);
      *(undefined8 *)(lVar24 + 0x178) = 0;
      *(undefined8 *)(lVar24 + 0x170) = 0x3f800000;
      *(undefined8 *)(lVar24 + 0x188) = 0;
      *(undefined8 *)(lVar24 + 0x180) = 0x3f80000000000000;
      *(undefined8 *)(lVar24 + 0x198) = 0x3f800000;
      *(undefined8 *)(lVar24 + 400) = 0;
      *(undefined8 *)(lVar24 + 0x1a8) = 0x3f80000000000000;
      *(undefined8 *)(lVar24 + 0x1a0) = 0;
      *(undefined1 *)(*(long *)(piVar9 + 0x40) + 0xe0) = 0;
      uVar23 = extraout_x1_06;
    }
    if (*(long *)(piVar9 + 0x42) != 0) {
      FUN_71035b7d00(*(long *)(piVar9 + 0x42),uVar23,pppplVar15,ppppbVar16,param_5,param_6,param_7,
                     param_8);
      lVar24 = *(long *)(piVar9 + 0x42);
      *(undefined8 *)(lVar24 + 0x178) = 0;
      *(undefined8 *)(lVar24 + 0x170) = 0x3f800000;
      *(undefined8 *)(lVar24 + 0x188) = 0;
      *(undefined8 *)(lVar24 + 0x180) = 0x3f80000000000000;
      *(undefined8 *)(lVar24 + 0x198) = 0x3f800000;
      *(undefined8 *)(lVar24 + 400) = 0;
      *(undefined8 *)(lVar24 + 0x1a8) = 0x3f80000000000000;
      *(undefined8 *)(lVar24 + 0x1a0) = 0;
      *(undefined1 *)(*(long *)(piVar9 + 0x42) + 0xe0) = 0;
    }
    *(undefined1 **)(piVar9 + 0x28) = &DAT_3f8000003f800000;
    *(undefined1 **)(piVar9 + 0x2a) = &DAT_3f8000003f800000;
    *(undefined1 **)(piVar9 + 0x2c) = &DAT_3f8000003f800000;
    *(undefined1 **)(piVar9 + 0x2e) = &DAT_3f8000003f800000;
    piVar9[0xa6] = 0;
    piVar9[2] = -1;
    piVar9[4] = 0;
    piVar9[0xd] = 0;
    piVar9[0xe] = 0;
    piVar9[0x15] = 0;
    piVar9[0x11] = 0;
    *(undefined2 *)(piVar9 + 0xaa) = 0;
    *(undefined1 **)(piVar9 + 0x30) = &DAT_3f8000003f800000;
    *(undefined1 **)(piVar9 + 0x32) = &DAT_3f8000003f800000;
    *(undefined1 **)(piVar9 + 0x34) = &DAT_3f8000003f800000;
    *(undefined1 **)(piVar9 + 0x36) = &DAT_3f8000003f800000;
    piVar9[0xf] = 0;
    piVar9[0x10] = 0x3f800000;
    piVar9[0x13] = 0x3f800000;
    piVar9[0x14] = 0;
    iVar7 = *(int *)(lVar6 + 0x140) + 1;
    *(int *)(lVar6 + 0x140) = iVar7;
    *piVar9 = iVar7;
    uVar23 = 0;
    if (*(long *)(lVar6 + 0x130) != 0) {
      *(int **)(*(long *)(lVar6 + 0x130) + 0xe0) = piVar9;
      uVar23 = *(undefined8 *)(lVar6 + 0x130);
    }
    *(undefined8 *)(piVar9 + 0x3a) = uVar23;
    *(int **)(lVar6 + 0x130) = piVar9;
    if ((*(ulong *)(param_1 + 0x14) & 0xffffffffff) == 0) {
      return iVar7;
    }
    uVar8 = FUN_7103563430(*lib::Singleton<lib::EffectManager>::instance_,*(ulong *)(param_1 + 0x14)
                           ,param_1[0x13],*(undefined1 (**) [16])(param_1 + 0x18),
                           *(undefined1 (**) [16])(param_1 + 0x1a),
                           *(undefined1 (**) [16])(param_1 + 0x1c),0,-1,0);
    if (uVar8 == 0) {
      return iVar7;
    }
    if (0 < (int)uVar8) {
      lVar24 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar8 >> 0x18) * 0x300;
      if ((lVar24 != 0) && (*(uint *)(lVar24 + 4) == uVar8)) {
        lVar24 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar8 >> 0x18) * 0x300;
        uVar23 = *(undefined8 *)(param_1 + 0x16);
        *(undefined8 *)(lVar24 + 0x58) = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(lVar24 + 0x60) = uVar23;
        *(uint *)(lVar24 + 0x26c) = *(uint *)(lVar24 + 0x26c) & 0xfdff2fff;
      }
    }
    piVar9 = *(int **)(lVar6 + 0x130);
    while( true ) {
      if (piVar9 == (int *)0x0) {
        return iVar7;
      }
      if (*piVar9 == iVar7) break;
      piVar9 = *(int **)(piVar9 + 0x3a);
    }
    piVar9[0xc] = uVar8;
    return iVar7;
  }
LAB_71035678d0:
  FUN_71035b53e0((long)piVar9);
  if (piVar9 == (int *)0x0) {
    return 0;
  }
LAB_71035678dc:
  FUN_710392eb40((ulong)piVar9);
  return 0;
}

