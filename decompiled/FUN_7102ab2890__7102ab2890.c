// addr:      7102ab2890
// offset:    0x2ab2890
// name:      FUN_7102ab2890
// mangled:   
// signature: undefined __cdecl FUN_7102ab2890(ulong param_1, undefined8 param_2, long * * * * param_3, char * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102ab2890(ulong param_1,undefined8 param_2,long ****param_3,char *param_4,long ****param_5
                   ,undefined8 param_6,long ***param_7,long ***param_8)

{
  int *piVar1;
  byte ****ppppbVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  byte *pbVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  long *********ppppppppplVar16;
  long ****pppplVar17;
  byte ****ppppbVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long ********pppppppplVar24;
  undefined8 *puVar25;
  int *piVar26;
  long *******ppppppplVar27;
  long lVar28;
  long ****pppplVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  float fVar39;
  float fVar40;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  undefined1 auVar41 [16];
  float fVar45;
  float fVar46;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar47 [16];
  undefined4 uVar51;
  float fVar52;
  undefined8 uVar53;
  float fStack_1f4;
  long ***local_1c0;
  undefined8 uStack_1b8;
  long ********local_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  long ********local_190;
  long *******ppppppplStack_188;
  long ********local_180;
  undefined *puStack_178;
  undefined *local_170;
  char *pcStack_168;
  float local_160;
  float fStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined1 local_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined1 local_12c;
  undefined1 uStack_12b;
  undefined1 local_12a;
  undefined1 local_129;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined1 uStack_124;
  undefined1 uStack_123;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined2 local_11c;
  undefined1 local_11a;
  ulong local_118;
  undefined2 local_110;
  undefined8 local_108;
  long local_100;
  long lStack_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined2 local_c4;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  long ***local_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  
  plVar34 = *(long **)(param_1 + 0x338);
  plVar14 = (long *)FUN_710392e290(0x10,0x440,param_3,(byte ****)param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar14 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c0 = (long ***)((ulong)local_1c0 & 0xffffffff00000000);
      local_190 = (long ********)&DAT_00000440;
      ppppppppplVar16 = &local_190;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
      if (((uVar15 & 1) != 0) &&
         (plVar14 = (long *)FUN_710392e290(0x10,0x440,(long ****)ppppppppplVar16,(byte ****)param_4,
                                           param_5,param_6,param_7,param_8), plVar14 != (long *)0x0)
         ) goto LAB_7102ab2914;
    }
    plVar14 = (long *)0x0;
  }
LAB_7102ab2914:
  plVar33 = plVar14 + 1;
  *plVar33 = 0;
  plVar31 = plVar14 + 2;
  *plVar31 = 0;
  plVar14[6] = (long)&PTR_FUN_710517b340;
  plVar14[3] = 0;
  plVar14[4] = 0;
  *plVar14 = 0;
  plVar14[0xb] = 0;
  plVar14[10] = 0x3f800000;
  plVar14[0xd] = 0;
  plVar14[0xc] = 0x3f80000000000000;
  plVar14[7] = 0;
  plVar14[0xf] = 0x3f800000;
  plVar14[0xe] = 0;
  plVar14[0x11] = 0x3f80000000000000;
  plVar14[0x10] = 0;
  *(undefined4 *)(plVar14 + 8) = 0xffffffff;
  *(undefined1 *)(plVar14 + 0x12) = 0;
  plVar14[0x14] = (long)&PTR_FUN_710517b340;
  plVar14[0x15] = 0;
  *(undefined4 *)(plVar14 + 0x16) = 0xffffffff;
  *(undefined1 *)(plVar14 + 0x20) = 0;
  *(undefined4 *)(plVar14 + 0x24) = 0xffffffff;
  *(undefined1 *)(plVar14 + 0x2e) = 0;
  *(undefined4 *)(plVar14 + 0x32) = 0xffffffff;
  *(undefined1 *)(plVar14 + 0x3c) = 0;
  *(undefined4 *)(plVar14 + 0x40) = 0xffffffff;
  *(undefined1 *)(plVar14 + 0x4a) = 0;
  plVar14[0x4c] = (long)&PTR_FUN_710517b340;
  plVar14[0x4d] = 0;
  plVar14[0x22] = (long)&PTR_FUN_710517b340;
  plVar14[0x23] = 0;
  plVar14[0x30] = (long)&PTR_FUN_710517b340;
  plVar14[0x31] = 0;
  plVar14[0x3e] = (long)&PTR_FUN_710517b340;
  plVar14[0x3f] = 0;
  plVar14[0x19] = 0;
  plVar14[0x18] = 0x3f800000;
  plVar14[0x1b] = 0;
  plVar14[0x1a] = 0x3f80000000000000;
  plVar14[0x1d] = 0x3f800000;
  plVar14[0x1c] = 0;
  plVar14[0x1f] = 0x3f80000000000000;
  plVar14[0x1e] = 0;
  plVar14[0x27] = 0;
  plVar14[0x26] = 0x3f800000;
  plVar14[0x29] = 0;
  plVar14[0x28] = 0x3f80000000000000;
  plVar14[0x2b] = 0x3f800000;
  plVar14[0x2a] = 0;
  plVar14[0x2d] = 0x3f80000000000000;
  plVar14[0x2c] = 0;
  plVar14[0x35] = 0;
  plVar14[0x34] = 0x3f800000;
  plVar14[0x37] = 0;
  plVar14[0x36] = 0x3f80000000000000;
  plVar14[0x39] = 0x3f800000;
  plVar14[0x38] = 0;
  plVar14[0x3b] = 0x3f80000000000000;
  plVar14[0x3a] = 0;
  plVar14[0x43] = 0;
  plVar14[0x42] = 0x3f800000;
  plVar14[0x45] = 0;
  plVar14[0x44] = 0x3f80000000000000;
  plVar14[0x47] = 0x3f800000;
  plVar14[0x46] = 0;
  plVar14[0x49] = 0x3f80000000000000;
  plVar14[0x48] = 0;
  plVar14[0x51] = 0;
  plVar14[0x50] = 0x3f800000;
  plVar14[0x53] = 0;
  plVar14[0x52] = 0x3f80000000000000;
  fStack_1f4 = 1.0;
  fVar39 = fStack_1f4;
  fStack_1f4 = 1.0;
  fVar38 = fStack_1f4;
  fStack_1f4 = 1.0;
  fVar37 = fStack_1f4;
  fStack_1f4 = 1.0;
  fVar35 = fStack_1f4;
  fStack_1f4 = 1.0;
  *(undefined4 *)(plVar14 + 0x4e) = 0xffffffff;
  *(undefined1 *)(plVar14 + 0x58) = 0;
  *(undefined2 *)(plVar14 + 0x70) = 0;
  *(undefined4 *)(plVar14 + 0x72) = 0;
  *(undefined2 *)((long)plVar14 + 0x394) = 0;
  plVar14[0x5f] = 0;
  plVar14[0x5e] = 0;
  plVar14[0x5d] = 0;
  plVar14[0x5c] = 0;
  plVar14[0x5b] = 0;
  plVar14[0x5a] = 0;
  *(undefined1 *)((long)plVar14 + 0x38c) = 0;
  plVar14[0x55] = 0x3f800000;
  plVar14[0x54] = 0;
  plVar14[0x57] = 0x3f80000000000000;
  plVar14[0x56] = 0;
  *(undefined8 *)((long)plVar14 + 900) = 0;
  plVar14[0x73] = (long)plVar34;
  plVar14[0x78] = 0;
  *(undefined1 *)(plVar14 + 0x79) = 0;
  plVar14[0x75] = 0;
  plVar14[0x74] = 0;
  *(undefined2 *)(plVar14 + 0x76) = 0;
  *(undefined8 *)((long)plVar14 + 0x3f1) = 0;
  *(undefined8 *)((long)plVar14 + 0x3ec) = 0;
  *(undefined8 *)((long)plVar14 + 0x3e4) = 0;
  *(undefined8 *)((long)plVar14 + 0x3dc) = 0;
  *(undefined8 *)((long)plVar14 + 0x3cc) = 0;
  *(undefined8 *)((long)plVar14 + 0x3d4) = 0;
  *(undefined8 *)((long)plVar14 + 0x41c) = 0;
  *(undefined8 *)((long)plVar14 + 0x414) = 0;
  *(undefined8 *)((long)plVar14 + 0x40c) = 0;
  *(undefined8 *)((long)plVar14 + 0x404) = 0;
  *(undefined8 *)((long)plVar14 + 0x3fc) = 0;
  plVar14[0x85] = param_1;
  *(undefined1 *)(plVar14 + 0x86) = 0;
  plVar20 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
  plVar32 = *(long **)(*(long *)(param_1 + 0x310) + 0xd8);
  if (plVar20 != plVar32) {
    do {
      if ((*(uint *)(plVar20 + 1) < 2) &&
         (lVar19 = *plVar20, *(long *)(lVar19 + 0x68) == 0xf4aa953aa)) {
        *plVar14 = lVar19;
        if (lVar19 == 0) {
LAB_7102ab3454:
          if (lVar19 == 0) goto LAB_7102ab2af4;
        }
        else if (*(long *)(lVar19 + 0xd8) != 0) {
          if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar19 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar19 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x22) = 0;
          }
          lVar19 = *plVar14;
          if (lVar19 != 0) {
            if ((*(char *)(lVar19 + 0xe0) != '\0') &&
               (lVar30 = *(long *)(lVar19 + 200), lVar30 != 0)) {
              *(undefined1 *)(lVar30 + 0xc) = 1;
              *(undefined4 *)(lVar30 + 0x10) = 0;
            }
            if (*(long *)(lVar19 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x28) = 1;
            }
            lVar19 = *plVar14;
            if (lVar19 != 0) {
              if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar19 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar19 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 1;
              }
              if (*(char *)(lVar19 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar19 + 0xb0) + 0x10) = 0;
              }
            }
          }
          FUN_710314fd10((long)(plVar14 + 6),param_1,(byte *)"dyr_Halberd_set",
                         "chikeiHal_O_OBJ_O_HIR");
          FUN_710314fd10((long)(plVar14 + 0x14),param_1,(byte *)"dyr_Halberd_set",
                         "DomePosition_O_OBJ_O_HIR");
          FUN_710314fd10((long)(plVar14 + 0x22),param_1,(byte *)"dyr_Halberd_set",
                         "EnkeiPosition_O_OBJ_O_HIR");
          FUN_710314fd10((long)(plVar14 + 0x30),param_1,(byte *)"dyr_Halberd_set",
                         "HL2renPosition_O_OBJ_O_HIR");
          FUN_710314fd10((long)(plVar14 + 0x3e),param_1,(byte *)"dyr_Halberd_set",
                         "HALBERD_DUMMY1_O_OBJ_O_HIR");
          param_4 = "HL_Gate_Col_O_OBJ_O_HIR";
          FUN_710314fd10((long)(plVar14 + 0x4c),param_1,(byte *)"dyr_Halberd_set",
                         "HL_Gate_Col_O_OBJ_O_HIR");
          lVar19 = *plVar14;
          if (lVar19 != 0) {
            uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_Halberd_set");
            if (uVar15 != 0) {
              plVar14[0x5a] = uVar15;
            }
            uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_Halberd_loop");
            if (uVar15 != 0) {
              plVar14[0x5b] = uVar15;
            }
            if ((((lVar19 != 0) && (uVar15 = plVar14[0x5a], uVar15 != 0)) &&
                (lVar30 = *(long *)(lVar19 + 0xd8), lVar30 != 0)) &&
               ((*(long *)(lVar19 + 0xd0) != 0 &&
                (bVar11 = FUN_710367c160(0,*(long *)(lVar30 + 8),uVar15), bVar11)))) {
              *(undefined4 *)(lVar30 + 0x10) = 0;
            }
          }
          FUN_710260fdd0(0,*plVar14,1);
          lVar19 = *plVar14;
          goto LAB_7102ab3454;
        }
        *(byte *)(lVar19 + 0x118) = *(byte *)(lVar19 + 0x118) | 1;
        goto LAB_7102ab2af4;
      }
      plVar20 = plVar20 + 2;
    } while (plVar32 != plVar20);
  }
  *plVar14 = 0;
LAB_7102ab2af4:
  for (plVar20 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
      plVar20 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar20 = plVar20 + 2) {
    if ((*(uint *)(plVar20 + 1) < 2) &&
       (lVar19 = *plVar20, *(long *)(lVar19 + 0x68) == 0x13a8e77bf9)) {
      *plVar33 = lVar19;
      if (lVar19 == 0) {
LAB_7102ab43b4:
        if (lVar19 == 0) goto LAB_7102ab2b3c;
      }
      else if (*(long *)(lVar19 + 0xd8) != 0) {
        if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar19 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar19 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x22) = 0;
        }
        lVar19 = *plVar33;
        if (lVar19 == 0) {
LAB_7102ab4364:
          lVar19 = 0;
          bVar11 = true;
LAB_7102ab436c:
          if (!bVar11) {
LAB_7102ab4370:
            if ((((plVar14[0x5c] != 0) && (lVar30 = *(long *)(lVar19 + 0xd8), lVar30 != 0)) &&
                (*(long *)(lVar19 + 0xd0) != 0)) &&
               (bVar11 = FUN_710367c160(0,*(long *)(lVar30 + 8),plVar14[0x5c]), bVar11)) {
              *(undefined4 *)(lVar30 + 0x10) = 0;
            }
          }
        }
        else {
          if ((*(char *)(lVar19 + 0xe0) != '\0') && (lVar30 = *(long *)(lVar19 + 200), lVar30 != 0))
          {
            *(undefined1 *)(lVar30 + 0xc) = 1;
            *(undefined4 *)(lVar30 + 0x10) = 0;
          }
          if (*(long *)(lVar19 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x28) = 1;
          }
          lVar19 = *plVar33;
          if (lVar19 == 0) goto LAB_7102ab4364;
          if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar19 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar19 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar19 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar19 + 0xb0) + 0x10) = 0;
          }
          lVar19 = *plVar33;
          bVar11 = lVar19 == 0;
          if (lVar19 != 0) {
            uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dys_HL_MainWing_set");
            if (uVar15 != 0) {
              plVar14[0x5c] = uVar15;
            }
            uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dys_HL_MainWing_Loop");
            if (uVar15 == 0) goto LAB_7102ab436c;
            plVar14[0x5d] = uVar15;
            if (bVar11) goto LAB_7102ab439c;
            goto LAB_7102ab4370;
          }
        }
LAB_7102ab439c:
        FUN_710260fdd0(0,*plVar33,1);
        lVar19 = *plVar33;
        goto LAB_7102ab43b4;
      }
      *(byte *)(lVar19 + 0x118) = *(byte *)(lVar19 + 0x118) | 1;
      goto LAB_7102ab2b3c;
    }
  }
  *plVar33 = 0;
LAB_7102ab2b3c:
  for (plVar20 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
      plVar20 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar20 = plVar20 + 2) {
    if ((*(uint *)(plVar20 + 1) < 2) &&
       (lVar19 = *plVar20, *(long *)(lVar19 + 0x68) == 0x13f7583d49)) {
      *plVar31 = lVar19;
      if (lVar19 == 0) {
LAB_7102ab4458:
        if (lVar19 == 0) goto LAB_7102ab2b84;
      }
      else if (*(long *)(lVar19 + 0xd8) != 0) {
        if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar19 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar19 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x22) = 0;
        }
        lVar19 = *plVar31;
        if (lVar19 == 0) {
LAB_7102ab43c8:
          lVar19 = 0;
          bVar11 = true;
LAB_7102ab43d0:
          *(undefined4 *)(plVar14 + 0x62) = 0x746573;
          plVar14[0x61] = 0x5f647261626c6168;
          plVar14[0x60] = 0x5f74656a5f727964;
        }
        else {
          if ((*(char *)(lVar19 + 0xe0) != '\0') && (lVar30 = *(long *)(lVar19 + 200), lVar30 != 0))
          {
            *(undefined1 *)(lVar30 + 0xc) = 1;
            *(undefined4 *)(lVar30 + 0x10) = 0;
          }
          if (*(long *)(lVar19 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x28) = 1;
          }
          lVar19 = *plVar31;
          if (lVar19 == 0) goto LAB_7102ab43c8;
          if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar19 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar19 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar19 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar19 + 0xb0) + 0x10) = 0;
          }
          lVar19 = *plVar31;
          bVar11 = lVar19 == 0;
          if (lVar19 == 0) goto LAB_7102ab43d0;
          uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_jet_halbard_set");
          if (uVar15 != 0) {
            plVar14[0x5e] = uVar15;
          }
          *(undefined4 *)(plVar14 + 0x62) = 0x746573;
          plVar14[0x61] = 0x5f647261626c6168;
          plVar14[0x60] = 0x5f74656a5f727964;
          uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_jet_halbard_Loop");
          if (uVar15 != 0) {
            plVar14[0x5f] = uVar15;
          }
        }
        builtin_strncpy((char *)((long)plVar14 + 0x34d),"rd_Loop",8);
        plVar14[0x69] = 0x5f647261626c6168;
        plVar14[0x68] = 0x5f74656a5f727964;
        if ((((!bVar11) && (plVar14[0x5e] != 0)) && (lVar30 = *(long *)(lVar19 + 0xd8), lVar30 != 0)
            ) && ((*(long *)(lVar19 + 0xd0) != 0 &&
                  (bVar11 = FUN_710367c160(0,*(long *)(lVar30 + 8),plVar14[0x5e]), bVar11)))) {
          *(undefined4 *)(lVar30 + 0x10) = 0;
        }
        FUN_710260fdd0(0,*plVar31,1);
        lVar19 = *plVar31;
        goto LAB_7102ab4458;
      }
      *(byte *)(lVar19 + 0x118) = *(byte *)(lVar19 + 0x118) | 1;
      goto LAB_7102ab2b84;
    }
  }
  *plVar31 = 0;
LAB_7102ab2b84:
  plVar20 = (long *)**(long **)(*(long *)(param_1 + 0x300) + 0x18);
  while ((*(ulong *)(*plVar20 + 0xa0) & 0xffffffffff) != 0xa7d5049d5) {
    plVar20 = plVar20 + 1;
  }
  puVar21 = *(undefined8 **)(*plVar20 + 0x110);
  plVar14[3] = (long)puVar21;
  FUN_71025f4d80((long *)*puVar21,(long *)puVar21[1],1);
  plVar20 = (long *)**(long **)(*(long *)(param_1 + 0x300) + 0x18);
  while ((*(ulong *)(*plVar20 + 0xa0) & 0xffffffffff) != 0xae459186f) {
    plVar20 = plVar20 + 1;
  }
  puVar21 = *(undefined8 **)(*plVar20 + 0x110);
  plVar14[4] = (long)puVar21;
  pppplVar17 = (long ****)0x1;
  FUN_71025f4d80((long *)*puVar21,(long *)puVar21[1],1);
  plVar20 = *(long **)(*(long *)(*(long *)(*(long *)(param_1 + 800) + 0x48) + 800) + 0x40);
  piVar4 = (int *)*plVar20;
  piVar5 = (int *)plVar20[1];
  if ((long)piVar5 - (long)piVar4 == 0) {
LAB_7102ab2ca4:
    uVar15 = 0xffffffff;
  }
  else {
    piVar26 = piVar4;
    for (piVar1 = piVar4;
        (piVar1 != piVar5 &&
        ((*piVar1 != 0 ||
         (piVar26 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x129ed8a4db))));
        piVar1 = piVar1 + 0x1c) {
      piVar26 = piVar5;
    }
    uVar15 = ((long)piVar26 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar5 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7) <= uVar15)
    goto LAB_7102ab2ca4;
  }
  *(int *)(plVar14 + 0x72) = (int)uVar15;
  plVar14[0x78] = (long)plVar34;
  local_190 = (long ********)0x0;
  if (*(long *)(*plVar34 + 8) == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    pppplVar17 = (long ****)0x0;
    uVar12 = FUN_7102405040(*(long *)(*plVar34 + 8),&local_190,0,(byte ****)param_4,param_5,param_6,
                            param_7,param_8);
  }
  *(undefined4 *)((long)plVar14 + 0x3cc) = uVar12;
  *(undefined4 *)(plVar14 + 0x7d) = 0;
  plVar14[0x7e] = (long)plVar34;
  plVar14[0x7c] = 0xc0000000b;
  local_190 = (long ********)0x0;
  uVar12 = 0xffffffff;
  if (*(long *)(*plVar34 + 8) != 0) {
    pppplVar17 = (long ****)0x0;
    uVar12 = FUN_7102405040(*(long *)(*plVar34 + 8),&local_190,0,(byte ****)param_4,param_5,param_6,
                            param_7,param_8);
  }
  plVar14[0x82] = 0x1400000013;
  *(undefined4 *)((long)plVar14 + 0x3fc) = uVar12;
  *(undefined4 *)(plVar14 + 0x83) = 0;
  cVar7 = *(char *)(plVar14[0x85] + 0x54);
  *(char *)(plVar14 + 0x86) = cVar7;
  if (cVar7 == '\x01') {
    plVar20 = (long *)((long *)plVar14[3])[1];
    for (plVar34 = *(long **)plVar14[3]; plVar34 != plVar20; plVar34 = plVar34 + 1) {
      lVar19 = *plVar34;
      *(undefined1 *)(lVar19 + 0x128) = 1;
      if (*(long *)(lVar19 + 8) != 0) {
        *(undefined8 *)(*(long *)(lVar19 + 8) + 0xd8) = 0xffffffffffffffff;
        FUN_7100532bc0(*(long *)(lVar19 + 8),0);
      }
    }
    plVar20 = (long *)((long *)plVar14[4])[1];
    for (plVar34 = *(long **)plVar14[4]; plVar34 != plVar20; plVar34 = plVar34 + 1) {
      lVar19 = *plVar34;
      *(undefined1 *)(lVar19 + 0x128) = 1;
      if (*(long *)(lVar19 + 8) != 0) {
        *(undefined8 *)(*(long *)(lVar19 + 8) + 0xd8) = 0xffffffffffffffff;
        FUN_7100532bc0(*(long *)(lVar19 + 8),0);
      }
    }
    FUN_7102abb730(0x459f6000,plVar14,0);
    lVar19 = *plVar14;
    if (lVar19 != 0) {
      if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar19 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar19 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar19 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar19 + 0xb0) + 0x10) = 0;
      }
    }
    lVar19 = *plVar33;
    if (lVar19 != 0) {
      if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar19 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar19 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar19 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar19 + 0xb0) + 0x10) = 0;
      }
    }
    lVar19 = *plVar31;
    if (lVar19 != 0) {
      if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar19 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar19 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar19 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar19 + 0xb0) + 0x10) = 0;
      }
    }
    FUN_7102abb920(1.0,(long)plVar14);
    *(undefined1 *)((long)plVar14 + 0x381) = 4;
  }
  uVar15 = *(ulong *)(param_1 + 0xa78);
  *(long **)(param_1 + 0xa78) = plVar14;
  if (uVar15 != 0) {
    FUN_710392eb40(uVar15);
  }
  plVar14 = *(long **)(param_1 + 0x338);
  puVar21 = (undefined8 *)
            FUN_710392e290(0x10,0x2a0,pppplVar17,(byte ****)param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar21 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c0 = (long ***)((ulong)local_1c0 & 0xffffffff00000000);
      local_190 = (long ********)0x2a0;
      ppppppppplVar16 = &local_190;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
      if (((uVar15 & 1) != 0) &&
         (puVar21 = (undefined8 *)
                    FUN_710392e290(0x10,0x2a0,(long ****)ppppppppplVar16,(byte ****)param_4,param_5,
                                   param_6,param_7,param_8), puVar21 != (undefined8 *)0x0))
      goto LAB_7102ab2f28;
    }
    puVar21 = (undefined8 *)0x0;
  }
LAB_7102ab2f28:
  *puVar21 = &PTR_FUN_710510d800;
  plVar32 = puVar21 + 1;
  *plVar32 = 0;
  puVar21[4] = &PTR_FUN_710517b340;
  puVar21[2] = 0;
  puVar21[5] = 0;
  *(undefined4 *)(puVar21 + 6) = 0xffffffff;
  puVar21[9] = 0;
  puVar21[8] = 0x3f800000;
  puVar21[0xb] = 0;
  puVar21[10] = 0x3f80000000000000;
  puVar21[0xd] = 0x3f800000;
  puVar21[0xc] = 0;
  puVar21[0xf] = 0x3f80000000000000;
  puVar21[0xe] = 0;
  *(undefined1 *)(puVar21 + 0x10) = 0;
  puVar21[0x12] = 0;
  puVar25 = puVar21 + 0x14;
  *puVar25 = &PTR_FUN_710517b340;
  puVar21[0x15] = 0;
  *(undefined4 *)(puVar21 + 0x16) = 0xffffffff;
  *(undefined1 *)(puVar21 + 0x20) = 0;
  *(undefined1 *)(puVar21 + 0x34) = 0;
  *(undefined1 *)((long)puVar21 + 0x1e1) = 0;
  *(undefined4 *)(puVar21 + 0x3e) = 0;
  *(undefined2 *)((long)puVar21 + 500) = 0;
  *(undefined1 *)((long)puVar21 + 0x1ec) = 0;
  puVar21[0x22] = 0;
  puVar21[0x23] = 0;
  puVar21[0x19] = 0;
  puVar21[0x18] = 0x3f800000;
  puVar21[0x1b] = 0;
  puVar21[0x1a] = 0x3f80000000000000;
  puVar21[0x1d] = 0x3f800000;
  puVar21[0x1c] = 0;
  puVar21[0x1f] = 0x3f80000000000000;
  puVar21[0x1e] = 0;
  *(undefined8 *)((long)puVar21 + 0x1e4) = 0;
  uVar22 = *(undefined8 *)(param_1 + 0x338);
  puVar21[0x4a] = 0;
  *(undefined1 *)(puVar21 + 0x4b) = 0;
  *(undefined1 *)(puVar21 + 0x43) = 0;
  puVar21[0x42] = 0;
  puVar21[0x41] = 0;
  puVar21[0x3f] = uVar22;
  puVar21[0x40] = 0;
  *(undefined8 *)((long)puVar21 + 0x239) = 0;
  *(undefined8 *)((long)puVar21 + 0x234) = 0;
  *(undefined8 *)((long)puVar21 + 0x22c) = 0;
  *(undefined8 *)((long)puVar21 + 0x224) = 0;
  *(undefined8 *)((long)puVar21 + 0x21c) = 0;
  *(undefined8 *)((long)puVar21 + 0x274) = 0;
  *(undefined8 *)((long)puVar21 + 0x26c) = 0;
  *(undefined8 *)((long)puVar21 + 0x264) = 0;
  *(undefined8 *)((long)puVar21 + 0x25c) = 0;
  *(undefined8 *)((long)puVar21 + 0x279) = 0;
  puVar21[0x51] = param_1;
  *(undefined1 *)(puVar21 + 0x52) = 0;
  plVar34 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
  plVar20 = *(long **)(*(long *)(param_1 + 0x310) + 0xd8);
  if (plVar34 != plVar20) {
    do {
      if ((*(uint *)(plVar34 + 1) < 2) &&
         (lVar19 = *plVar34, *(long *)(lVar19 + 0x68) == 0x13563add4f)) {
        *plVar32 = lVar19;
        if (lVar19 == 0) {
LAB_7102ab53c0:
          if (lVar19 == 0) goto LAB_7102ab3064;
        }
        else if (*(long *)(lVar19 + 0xd8) != 0) {
          if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar19 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar19 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x22) = 0;
          }
          lVar19 = *plVar32;
          if (lVar19 != 0) {
            if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar19 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar19 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar19 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar19 + 0xb0) + 0x10) = 0;
            }
          }
          lVar19 = *plVar32;
          if (lVar19 == 0) {
            puVar21[5] = 0;
LAB_7102ab5244:
            iVar13 = -1;
          }
          else {
            if (*(long *)(lVar19 + 0xd8) == 0) {
              iVar13 = -1;
            }
            else {
              plVar34 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
              iVar13 = (**(code **)(*plVar34 + 0x18))(plVar34,"dyr_BattleStage_set");
            }
            puVar21[5] = lVar19;
            if (*(long *)(lVar19 + 0xd8) == 0) goto LAB_7102ab5244;
            if (iVar13 == -1) {
              iVar13 = 0;
            }
            else {
              (**(code **)(**(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8) + 0x10))();
            }
          }
          *(int *)(puVar21 + 6) = iVar13;
          param_4 = "PLAY_CATWARK_SMALL_O_OBJ_O_HIR";
          puVar21[9] = 0;
          puVar21[8] = 0x3f800000;
          puVar21[0xb] = 0;
          puVar21[10] = 0x3f80000000000000;
          *(undefined1 *)(puVar21 + 0x10) = 0;
          puVar21[0xd] = 0x3f800000;
          puVar21[0xc] = 0;
          puVar21[0xf] = 0x3f80000000000000;
          puVar21[0xe] = 0;
          FUN_710314fd10((long)puVar25,param_1,(byte *)"dyr_BattleStage_set",
                         "PLAY_CATWARK_SMALL_O_OBJ_O_HIR");
          lVar19 = puVar21[1];
          if (lVar19 == 0) {
            *(undefined4 *)(puVar21 + 0x26) = 0x746573;
            builtin_strncpy((char *)(puVar21 + 0x24),"dyr_Batt",8);
            builtin_strncpy((char *)(puVar21 + 0x25),"leStage_",8);
            builtin_strncpy((char *)((long)puVar21 + 0x16d),"ge_Loop",8);
            builtin_strncpy((char *)(puVar21 + 0x2c),"dyr_batt",8);
            builtin_strncpy((char *)(puVar21 + 0x2d),"lestage_",8);
          }
          else {
            uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_BattleStage_set");
            if (uVar15 != 0) {
              puVar21[0x22] = uVar15;
            }
            *(undefined4 *)(puVar21 + 0x26) = 0x746573;
            builtin_strncpy((char *)(puVar21 + 0x24),"dyr_Batt",8);
            builtin_strncpy((char *)(puVar21 + 0x25),"leStage_",8);
            uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_battlestage_Loop");
            if (uVar15 != 0) {
              puVar21[0x23] = uVar15;
            }
            builtin_strncpy((char *)((long)puVar21 + 0x16d),"ge_Loop",8);
            builtin_strncpy((char *)(puVar21 + 0x2c),"dyr_batt",8);
            builtin_strncpy((char *)(puVar21 + 0x2d),"lestage_",8);
            if ((((lVar19 != 0) && (puVar21[0x22] != 0)) &&
                (lVar30 = *(long *)(lVar19 + 0xd8), lVar30 != 0)) &&
               ((*(long *)(lVar19 + 0xd0) != 0 &&
                (bVar11 = FUN_710367c160(0,*(long *)(lVar30 + 8),puVar21[0x22]), bVar11)))) {
              *(undefined4 *)(lVar30 + 0x10) = 0;
            }
          }
          FUN_710260fdd0(0,*plVar32,1);
          lVar19 = *plVar32;
          goto LAB_7102ab53c0;
        }
        *(byte *)(lVar19 + 0x118) = *(byte *)(lVar19 + 0x118) | 1;
        goto LAB_7102ab3064;
      }
      plVar34 = plVar34 + 2;
    } while (plVar20 != plVar34);
  }
  *plVar32 = 0;
LAB_7102ab3064:
  lVar19 = *(long *)(param_1 + 0x300);
  plVar34 = (long *)**(long **)(lVar19 + 0x18);
  while ((*(ulong *)(*plVar34 + 0xa0) & 0xffffffffff) != 0xed88a9053) {
    plVar34 = plVar34 + 1;
  }
  puVar23 = *(undefined8 **)(*plVar34 + 0x110);
  puVar21[2] = puVar23;
  plVar34 = (long *)**(long **)(lVar19 + 0x18);
  while ((*(ulong *)(*plVar34 + 0xa0) & 0xffffffffff) != 0xe4183c1e9) {
    plVar34 = plVar34 + 1;
  }
  puVar21[0x12] = *(undefined8 *)(*plVar34 + 0x110);
  FUN_71025f4d80((long *)*puVar23,(long *)puVar23[1],1);
  pppplVar17 = (long ****)0x1;
  FUN_71025f4d80(*(long **)puVar21[0x12],(long *)((undefined8 *)puVar21[0x12])[1],1);
  builtin_strncpy((char *)(puVar21 + 0x35),"form01L",8);
  builtin_strncpy((char *)((long)puVar21 + 0x1a1),"00_Platf",8);
  builtin_strncpy((char *)(puVar21 + 0x39),"form01R",8);
  builtin_strncpy((char *)((long)puVar21 + 0x1c1),"00_Platf",8);
  plVar34 = *(long **)(*(long *)(*(long *)(*(long *)(param_1 + 800) + 0x48) + 800) + 0x40);
  piVar4 = (int *)*plVar34;
  piVar5 = (int *)plVar34[1];
  if ((long)piVar5 - (long)piVar4 == 0) {
LAB_7102ab31ac:
    uVar15 = 0xffffffff;
  }
  else {
    piVar26 = piVar4;
    for (piVar1 = piVar4;
        (piVar1 != piVar5 &&
        ((*piVar1 != 0 ||
         (piVar26 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x13080f1747))));
        piVar1 = piVar1 + 0x1c) {
      piVar26 = piVar5;
    }
    uVar15 = ((long)piVar26 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar5 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7) <= uVar15)
    goto LAB_7102ab31ac;
  }
  *(int *)(puVar21 + 0x3e) = (int)uVar15;
  puVar21[0x42] = plVar14;
  local_190 = (long ********)0x0;
  if (*(long *)(*plVar14 + 8) == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    pppplVar17 = (long ****)0x0;
    uVar12 = FUN_7102405040(*(long *)(*plVar14 + 8),&local_190,0,(byte ****)param_4,param_5,param_6,
                            param_7,param_8);
  }
  puVar21[0x46] = 0xe0000000d;
  local_190 = (long ********)(puVar21 + 0x4c);
  *(undefined4 *)((long)puVar21 + 0x21c) = uVar12;
  *(undefined4 *)(puVar21 + 0x47) = 0;
  puVar21[0x4a] = plVar14;
  if (*(long *)(*plVar14 + 8) == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    pppplVar17 = (long ****)0x0;
    uVar12 = FUN_7102405040(*(long *)(*plVar14 + 8),&local_190,0,(byte ****)param_4,param_5,param_6,
                            param_7,param_8);
  }
  puVar21[0x4e] = 0x1100000010;
  *(undefined4 *)((long)puVar21 + 0x25c) = uVar12;
  *(undefined4 *)(puVar21 + 0x4f) = 0;
  cVar7 = *(char *)(puVar21[0x51] + 0x54);
  *(char *)(puVar21 + 0x52) = cVar7;
  if (cVar7 == '\x01') {
    uVar22 = 0;
    if ((*plVar32 != 0) && (lVar19 = *(long *)(*plVar32 + 0xd8), lVar19 != 0)) {
      lVar19 = *(long *)(lVar19 + 8);
      plVar14 = *(long **)(lVar19 + 0x10);
      iVar13 = *(int *)(lVar19 + 0xac);
      if (iVar13 == 1) {
        plVar34 = (long *)(**(code **)(*plVar14 + 0x38))(plVar14,1);
        plVar14 = (long *)0x0;
        if (plVar34 != (long *)0x0) {
LAB_7102ab3710:
          plVar14 = (long *)(**(code **)(*plVar34 + 0x40))(plVar34,0);
        }
      }
      else {
        if (iVar13 != 0) goto LAB_7102ab372c;
        plVar34 = (long *)(**(code **)(*plVar14 + 0x38))(plVar14,0);
        if (plVar34 != (long *)0x0) goto LAB_7102ab3710;
        plVar14 = (long *)0x0;
      }
      uVar22 = (**(code **)(*plVar14 + 0x88))();
    }
LAB_7102ab372c:
    FUN_710260fdd0(uVar22,*plVar32,1);
    lVar19 = *plVar32;
    if (lVar19 != 0) {
      if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar19 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar19 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar19 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar19 + 0xb0) + 0x10) = 0;
      }
    }
    puVar23 = (undefined8 *)puVar21[2];
    plVar14 = (long *)puVar23[3];
    plVar34 = (long *)puVar23[4];
    if (plVar14 != plVar34) {
      bVar8 = *(byte *)((long)puVar21 + 0x1a1);
      plVar20 = plVar14;
      do {
        lVar19 = *plVar20;
        uVar3 = 0x811c9dc5;
        pbVar10 = (byte *)((long)puVar21 + 0x1a2);
        bVar6 = bVar8;
        while (bVar6 != 0) {
          uVar3 = uVar3 * 0x89 ^ (uint)bVar6;
          bVar6 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        }
        if ((*(uint *)(lVar19 + 0x18) == uVar3) &&
           (iVar13 = strcmp((char *)(lVar19 + 0x20),(char *)((long)puVar21 + 0x1a1)), iVar13 == 0))
        {
          if ((lVar19 != 0) && (lVar19 = *(long *)(*(long *)(lVar19 + 8) + 0x108), lVar19 != 0)) {
            *(undefined1 *)(lVar19 + 0x44) = 0;
            puVar23 = (undefined8 *)puVar21[2];
            plVar14 = (long *)puVar23[3];
            plVar34 = (long *)puVar23[4];
            if (plVar14 != plVar34) goto LAB_7102ab3810;
            goto LAB_7102ab3884;
          }
          break;
        }
        plVar20 = plVar20 + 1;
      } while (plVar20 != plVar34);
      if (plVar14 != plVar34) {
LAB_7102ab3810:
        bVar8 = *(byte *)((long)puVar21 + 0x1c1);
        do {
          lVar19 = *plVar14;
          uVar3 = 0x811c9dc5;
          pbVar10 = (byte *)((long)puVar21 + 0x1c2);
          bVar6 = bVar8;
          while (bVar6 != 0) {
            uVar3 = uVar3 * 0x89 ^ (uint)bVar6;
            bVar6 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          }
          if ((*(uint *)(lVar19 + 0x18) == uVar3) &&
             (iVar13 = strcmp((char *)(lVar19 + 0x20),(char *)((long)puVar21 + 0x1c1)), iVar13 == 0)
             ) {
            if ((lVar19 != 0) && (lVar19 = *(long *)(*(long *)(lVar19 + 8) + 0x108), lVar19 != 0)) {
              *(undefined1 *)(lVar19 + 0x44) = 0;
              puVar23 = (undefined8 *)puVar21[2];
            }
            break;
          }
          plVar14 = plVar14 + 1;
        } while (plVar14 != plVar34);
      }
    }
LAB_7102ab3884:
    pppplVar17 = (long ****)0x1;
    ppppppplStack_188 = (long *******)0x0;
    local_190 = (long ********)&DAT_3f800000;
    puStack_178 = (undefined *)0x0;
    local_180 = (long ********)0x3f80000000000000;
    pcStack_168 = (char *)0x3f800000;
    local_170 = (undefined *)0x0;
    uStack_158 = 0;
    uStack_154 = 0x3f800000;
    local_160 = 0.0;
    fStack_15c = 0.0;
    FUN_71025f4d80((long *)*puVar23,(long *)puVar23[1],1);
    FUN_710314fa90((long)(puVar21 + 4),&local_190);
    auVar41._4_4_ = fStack_15c;
    auVar41._0_4_ = local_160;
    auVar41._8_4_ = uStack_158;
    auVar41._12_4_ = uStack_154;
    plVar14 = *(long **)puVar21[2];
    plVar34 = (long *)((long *)puVar21[2])[1];
    auVar41 = NEON_ext(ZEXT816(0),auVar41,8,1);
    auVar41 = NEON_ext(auVar41,auVar41,8,1);
    for (; plVar14 != plVar34; plVar14 = plVar14 + 1) {
      lVar19 = *plVar14;
      if (*(char *)(lVar19 + 0x128) == '\0' ||
          (*(char *)(*(long *)(lVar19 + 8) + 0xe8) != '\0' ||
          *(char *)(*(long *)(lVar19 + 8) + 0xe7) != '\0')) {
        *(undefined1 *)(lVar19 + 0x129) = 1;
LAB_7102ab3948:
        *(long *)(lVar19 + 0x18) = auVar41._8_8_;
        *(long *)(lVar19 + 0x10) = auVar41._0_8_;
      }
      else if ((1e-05 < ABS((float)*(undefined8 *)(lVar19 + 0x10) - local_160)) ||
              (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar19 + 0x10) >> 0x20) - fStack_15c))) {
        *(undefined1 *)(lVar19 + 0x12a) = 1;
        goto LAB_7102ab3948;
      }
      if (1e-05 <= ABS(*(float *)(lVar19 + 0x30))) {
        *(undefined4 *)(lVar19 + 0x30) = 0;
        *(undefined1 *)(lVar19 + 0x129) = 1;
      }
      uVar53 = *(undefined8 *)(lVar19 + 0x58);
      uVar22 = *(undefined8 *)(lVar19 + 0x50);
      if (1e-05 <= ABS((float)uVar22 + -1.0)) {
        uVar22 = CONCAT44((int)((ulong)uVar22 >> 0x20),0x3f800000);
        *(undefined1 *)(lVar19 + 0x129) = 1;
        *(undefined8 *)(lVar19 + 0x58) = uVar53;
        *(undefined8 *)(lVar19 + 0x50) = uVar22;
      }
      if (1e-05 <= ABS((float)((ulong)uVar22 >> 0x20) + -1.0)) {
        *(undefined1 *)(lVar19 + 0x129) = 1;
        *(undefined8 *)(lVar19 + 0x58) = uVar53;
        *(ulong *)(lVar19 + 0x50) = CONCAT44(0x3f800000,(int)uVar22);
      }
    }
    plVar34 = (long *)((long *)puVar21[0x12])[1];
    for (plVar14 = *(long **)puVar21[0x12]; plVar14 != plVar34; plVar14 = plVar14 + 1) {
      lVar19 = *plVar14;
      *(undefined1 *)(lVar19 + 0x128) = 1;
      if (*(long *)(lVar19 + 8) != 0) {
        *(undefined8 *)(*(long *)(lVar19 + 8) + 0xd8) = 0xffffffffffffffff;
        FUN_7100532bc0(*(long *)(lVar19 + 8),0);
      }
    }
    FUN_710314fa90((long)puVar25,&local_190);
    plVar14 = *(long **)puVar21[0x12];
    plVar34 = (long *)((long *)puVar21[0x12])[1];
    if (plVar14 != plVar34) {
      auVar47._4_4_ = fStack_15c;
      auVar47._0_4_ = local_160;
      auVar47._8_4_ = uStack_158;
      auVar47._12_4_ = uStack_154;
      auVar41 = NEON_ext(auVar41,auVar47,8,1);
      auVar41 = NEON_ext(auVar41,auVar41,8,1);
      do {
        lVar19 = *plVar14;
        if (*(char *)(lVar19 + 0x128) == '\0' ||
            (*(char *)(*(long *)(lVar19 + 8) + 0xe8) != '\0' ||
            *(char *)(*(long *)(lVar19 + 8) + 0xe7) != '\0')) {
          *(undefined1 *)(lVar19 + 0x129) = 1;
LAB_7102ab3a94:
          *(long *)(lVar19 + 0x18) = auVar41._8_8_;
          *(long *)(lVar19 + 0x10) = auVar41._0_8_;
        }
        else if ((1e-05 < ABS((float)*(undefined8 *)(lVar19 + 0x10) - local_160)) ||
                (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar19 + 0x10) >> 0x20) - fStack_15c)))
        {
          *(undefined1 *)(lVar19 + 0x12a) = 1;
          goto LAB_7102ab3a94;
        }
        if (1e-05 <= ABS(*(float *)(lVar19 + 0x30))) {
          *(undefined4 *)(lVar19 + 0x30) = 0;
          *(undefined1 *)(lVar19 + 0x129) = 1;
        }
        uVar53 = *(undefined8 *)(lVar19 + 0x58);
        uVar22 = *(undefined8 *)(lVar19 + 0x50);
        if (1e-05 <= ABS((float)uVar22 + -1.0)) {
          uVar22 = CONCAT44((int)((ulong)uVar22 >> 0x20),0x3f800000);
          *(undefined1 *)(lVar19 + 0x129) = 1;
          *(undefined8 *)(lVar19 + 0x58) = uVar53;
          *(undefined8 *)(lVar19 + 0x50) = uVar22;
        }
        if (1e-05 <= ABS((float)((ulong)uVar22 >> 0x20) + -1.0)) {
          *(undefined1 *)(lVar19 + 0x129) = 1;
          *(undefined8 *)(lVar19 + 0x58) = uVar53;
          *(ulong *)(lVar19 + 0x50) = CONCAT44(0x3f800000,(int)uVar22);
        }
        plVar14 = plVar14 + 1;
      } while (plVar34 != plVar14);
    }
    *(undefined1 *)((long)puVar21 + 0x1e1) = 4;
  }
  plVar14 = *(long **)(param_1 + 0xa80);
  *(undefined8 **)(param_1 + 0xa80) = puVar21;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  local_190 = (long ********)0x7104328126;
  ppppppplStack_188 = (long *******)PTR_s_dyr_Background_set_710510d6f0;
  local_180 = (long ********)PTR_s_dyr_Background_Loop_710510d6f8;
  puVar21 = (undefined8 *)
            FUN_710392e290(0x10,0x100,pppplVar17,(byte ****)param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar21 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (long ***)((ulong)local_88 & 0xffffffff00000000);
      local_1c0 = (long ***)&DAT_00000100;
      pppplVar17 = &local_1c0;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar15 & 1) != 0) &&
         (puVar21 = (undefined8 *)
                    FUN_710392e290(0x10,0x100,pppplVar17,(byte ****)param_4,param_5,param_6,param_7,
                                   param_8), puVar21 != (undefined8 *)0x0)) goto LAB_7102ab3b94;
    }
    puVar21 = (undefined8 *)0x0;
  }
LAB_7102ab3b94:
  ppppppppplVar16 = &local_190;
  FUN_7102abe900(puVar21,param_1,ppppppppplVar16);
  plVar14 = *(long **)(param_1 + 0xa90);
  *(undefined8 **)(param_1 + 0xa90) = puVar21;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar14 = *(long **)(param_1 + 0x338);
  ppppbVar2 = (byte ****)(param_1 + 0x738);
  puVar21 = (undefined8 *)
            FUN_710392e290(0x10,0x410,(long ****)ppppppppplVar16,(byte ****)param_4,param_5,param_6,
                           param_7,param_8);
  if (puVar21 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c0 = (long ***)((ulong)local_1c0 & 0xffffffff00000000);
      local_190 = (long ********)0x410;
      ppppppppplVar16 = &local_190;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
      if (((uVar15 & 1) != 0) &&
         (puVar21 = (undefined8 *)
                    FUN_710392e290(0x10,0x410,(long ****)ppppppppplVar16,(byte ****)param_4,param_5,
                                   param_6,param_7,param_8), puVar21 != (undefined8 *)0x0))
      goto LAB_7102ab3c20;
    }
    puVar21 = (undefined8 *)0x0;
  }
LAB_7102ab3c20:
  puVar21[1] = ppppbVar2;
  puVar21[2] = 0;
  *puVar21 = &PTR_FUN_710510d780;
  auVar47 = ZEXT816(0x3f80000000000000);
  puVar21[5] = 0;
  puVar21[4] = 0x3f800000;
  puVar21[7] = 0;
  puVar21[6] = 0x3f80000000000000;
  fVar52 = 1.0;
  auVar41 = ZEXT816(0x3f800000) << 0x40;
  *(undefined4 *)(puVar21 + 0x36) = 0xffffffff;
  *(undefined4 *)(puVar21 + 0x44) = 0xffffffff;
  puVar21[0xd] = 0;
  puVar21[0xc] = 0x3f800000;
  puVar21[0xf] = 0;
  puVar21[0xe] = 0x3f80000000000000;
  *(undefined1 *)(puVar21 + 0x40) = 0;
  puVar21[0x42] = &PTR_FUN_710517b340;
  puVar21[0x43] = 0;
  *(undefined1 *)(puVar21 + 0x4e) = 0;
  puVar21[0x54] = 0;
  puVar21[0x53] = 0;
  puVar21[0x52] = 0;
  puVar21[0x51] = 0;
  puVar21[0x50] = 0;
  *(undefined2 *)(puVar21 + 0x55) = 5;
  *(undefined4 *)((long)puVar21 + 0x2ac) = 0;
  *(undefined1 *)(puVar21 + 0x56) = 0;
  *(undefined4 *)((long)puVar21 + 0x2b4) = 0;
  puVar21[0x5a] = 0;
  puVar21[0x59] = 0;
  puVar21[0x58] = 0;
  puVar21[0x34] = &PTR_FUN_710517b340;
  puVar21[0x35] = 0;
  puVar21[9] = 0x3f800000;
  puVar21[8] = 0;
  puVar21[0xb] = 0x3f80000000000000;
  puVar21[10] = 0;
  puVar21[0x11] = 0x3f800000;
  puVar21[0x10] = 0;
  puVar21[0x13] = 0x3f80000000000000;
  puVar21[0x12] = 0;
  puVar21[0x15] = 0;
  puVar21[0x14] = 0x3f800000;
  puVar21[0x17] = 0;
  puVar21[0x16] = 0x3f80000000000000;
  puVar21[0x19] = 0x3f800000;
  puVar21[0x18] = 0;
  puVar21[0x1b] = 0x3f80000000000000;
  puVar21[0x1a] = 0;
  puVar21[0x1d] = 0;
  puVar21[0x1c] = 0x3f800000;
  puVar21[0x1f] = 0;
  puVar21[0x1e] = 0x3f80000000000000;
  puVar21[0x21] = 0x3f800000;
  puVar21[0x20] = 0;
  puVar21[0x23] = 0x3f80000000000000;
  puVar21[0x22] = 0;
  puVar21[0x25] = 0;
  puVar21[0x24] = 0x3f800000;
  puVar21[0x27] = 0;
  puVar21[0x26] = 0x3f80000000000000;
  puVar21[0x29] = 0x3f800000;
  puVar21[0x28] = 0;
  puVar21[0x2b] = 0x3f80000000000000;
  puVar21[0x2a] = 0;
  puVar21[0x2d] = 0;
  puVar21[0x2c] = 0x3f800000;
  puVar21[0x2f] = 0;
  puVar21[0x2e] = 0x3f80000000000000;
  puVar21[0x31] = 0x3f800000;
  puVar21[0x30] = 0;
  puVar21[0x33] = 0x3f80000000000000;
  puVar21[0x32] = 0;
  puVar21[0x39] = 0;
  puVar21[0x38] = 0x3f800000;
  puVar21[0x3b] = 0;
  puVar21[0x3a] = 0x3f80000000000000;
  puVar21[0x3d] = 0x3f800000;
  puVar21[0x3c] = 0;
  puVar21[0x3f] = 0x3f80000000000000;
  puVar21[0x3e] = 0;
  puVar21[0x47] = 0;
  puVar21[0x46] = 0x3f800000;
  puVar21[0x49] = 0;
  puVar21[0x48] = 0x3f80000000000000;
  puVar21[0x4b] = 0x3f800000;
  puVar21[0x4a] = 0;
  puVar21[0x4d] = 0x3f80000000000000;
  puVar21[0x4c] = 0;
  puVar21[0x5b] = *(undefined8 *)(param_1 + 0x340);
  *(undefined1 *)(puVar21 + 0x60) = 0;
  puVar21[0x5f] = 0xffffffffffffffff;
  puVar21[0x5e] = 0xffffffffffffffff;
  puVar21[0x5d] = 0xffffffffffffffff;
  puVar21[0x5c] = 0xffffffffffffffff;
  puVar21[0x69] = 0;
  puVar21[0x68] = 0;
  puVar21[0x67] = 0;
  puVar21[0x66] = 0;
  puVar21[0x65] = 0;
  puVar21[100] = 0;
  puVar21[99] = 0;
  puVar21[0x62] = 0;
  puVar21[0x61] = 0;
  puVar21[0x6a] = plVar14;
  *(undefined8 *)((long)puVar21 + 0x3f4) = 0;
  *(undefined8 *)((long)puVar21 + 0x3ec) = 0;
  *(undefined8 *)((long)puVar21 + 0x3dc) = 0;
  *(undefined4 *)((long)puVar21 + 0x3fc) = 0;
  *(undefined8 *)((long)puVar21 + 0x3e4) = 0;
  *(undefined1 *)(puVar21 + 0x6f) = 0;
  puVar21[0x6e] = 0;
  puVar21[0x6d] = 0;
  puVar21[0x6c] = 0;
  *(undefined8 *)((long)puVar21 + 0x3a1) = 0;
  *(undefined8 *)((long)puVar21 + 0x39c) = 0;
  *(undefined8 *)((long)puVar21 + 0x394) = 0;
  *(undefined8 *)((long)puVar21 + 0x38c) = 0;
  *(undefined8 *)((long)puVar21 + 0x37c) = 0;
  *(undefined8 *)((long)puVar21 + 900) = 0;
  *(undefined8 *)((long)puVar21 + 0x3d1) = 0;
  *(undefined8 *)((long)puVar21 + 0x3cc) = 0;
  *(undefined8 *)((long)puVar21 + 0x3c4) = 0;
  *(undefined8 *)((long)puVar21 + 0x3bc) = 0;
  *(undefined8 *)((long)puVar21 + 0x3b4) = 0;
  *(undefined8 *)((long)puVar21 + 0x3ac) = 0;
  puVar21[0x80] = param_1;
  plVar34 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
  plVar20 = *(long **)(*(long *)(param_1 + 0x310) + 0xd8);
  if (plVar34 != plVar20) {
    do {
      if ((*(uint *)(plVar34 + 1) < 2) &&
         (lVar19 = *plVar34, *(long *)(lVar19 + 0x68) == 0x1062bac89b)) {
        puVar21[2] = lVar19;
        if (lVar19 == 0) goto LAB_7102ab3e00;
        fVar52 = fVar35;
        if (*(long *)(lVar19 + 0xd8) != 0) {
          if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar19 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar19 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x22) = 0;
          }
          lVar19 = puVar21[2];
          if (lVar19 != 0) {
            if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar19 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar19 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar19 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar19 + 0xb0) + 0x10) = 0;
            }
          }
          lVar19 = puVar21[2];
          if (lVar19 == 0) {
            puVar21[0x35] = 0;
            iVar13 = -1;
            fVar52 = fVar37;
          }
          else {
            if (*(long *)(lVar19 + 0xd8) == 0) {
              iVar13 = -1;
            }
            else {
              plVar34 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
              fVar38 = fVar39;
              iVar13 = (**(code **)(*plVar34 + 0x18))(plVar34,"StgHalberd2ren_O_OBJ_O_HIR");
            }
            puVar21[0x35] = lVar19;
            fVar52 = fVar38;
            if (*(long *)(lVar19 + 0xd8) == 0) {
              iVar13 = -1;
            }
            else if (iVar13 == -1) {
              iVar13 = 0;
            }
            else {
              (**(code **)(**(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8) + 0x10))();
              fVar52 = fVar38;
            }
          }
          lVar19 = puVar21[2];
          *(int *)(puVar21 + 0x36) = iVar13;
          puVar21[0x39] = 0;
          puVar21[0x38] = 0x3f800000;
          *(undefined1 *)(puVar21 + 0x40) = 0;
          puVar21[0x3b] = 0;
          puVar21[0x3a] = 0x3f80000000000000;
          puVar21[0x3d] = 0x3f800000;
          puVar21[0x3c] = 0;
          puVar21[0x3f] = 0x3f80000000000000;
          puVar21[0x3e] = 0;
          if (lVar19 == 0) {
            puVar21[0x43] = 0;
            iVar13 = -1;
          }
          else {
            if (*(long *)(lVar19 + 0xd8) == 0) {
              iVar13 = -1;
            }
            else {
              plVar34 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
              iVar13 = (**(code **)(*plVar34 + 0x18))(plVar34,"HL_MAIN_CANON1_O_OBJ_O_HIR");
            }
            puVar21[0x43] = lVar19;
            if (*(long *)(lVar19 + 0xd8) == 0) {
              iVar13 = -1;
            }
            else if (iVar13 == -1) {
              iVar13 = 0;
            }
            else {
              (**(code **)(**(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8) + 0x10))();
            }
          }
          lVar19 = puVar21[2];
          *(int *)(puVar21 + 0x44) = iVar13;
          puVar21[0x47] = 0;
          puVar21[0x46] = 0x3f800000;
          *(undefined1 *)(puVar21 + 0x4e) = 0;
          puVar21[0x49] = 0;
          puVar21[0x48] = 0x3f80000000000000;
          puVar21[0x4b] = 0x3f800000;
          puVar21[0x4a] = 0;
          puVar21[0x4d] = 0x3f80000000000000;
          puVar21[0x4c] = 0;
          if (lVar19 == 0) goto LAB_7102ab3e00;
          uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_Hero2ren_Close");
          if (uVar15 != 0) {
            puVar21[0x50] = uVar15;
          }
          uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_Hero2ren_Loop");
          if (uVar15 != 0) {
            puVar21[0x51] = uVar15;
          }
          uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_Hero2ren_Open");
          if (uVar15 != 0) {
            puVar21[0x52] = uVar15;
          }
          uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_Hero2ren_ShotLoop");
          if (uVar15 != 0) {
            puVar21[0x53] = uVar15;
          }
          uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_Hero2ren_Wait");
          if (uVar15 != 0) {
            puVar21[0x54] = uVar15;
          }
        }
        *(byte *)(lVar19 + 0x118) = *(byte *)(lVar19 + 0x118) | 1;
        goto LAB_7102ab3e00;
      }
      plVar34 = plVar34 + 2;
    } while (plVar20 != plVar34);
  }
  puVar21[2] = 0;
  fVar52 = fStack_1f4;
LAB_7102ab3e00:
  auVar36 = FUN_7100492c30(_DAT_710446a9b0,0);
  fVar35 = auVar36._0_4_;
  fVar37 = auVar36._4_4_;
  fVar38 = auVar36._8_4_;
  fVar39 = auVar36._12_4_;
  fVar40 = auVar47._0_4_;
  fVar42 = auVar47._4_4_;
  fVar44 = auVar47._8_4_;
  fVar45 = auVar47._12_4_;
  fVar46 = auVar41._0_4_;
  fVar48 = auVar41._4_4_;
  puVar21[0x31] = 0x3f800000;
  puVar21[0x30] = 0;
  puVar21[0x33] = 0x3f800000bfbdf400;
  puVar21[0x32] = 0x4254c6a800000000;
  puVar21[0x2d] = 0;
  puVar21[0x2c] = 0x3f800000;
  fVar49 = auVar41._8_4_;
  fVar50 = auVar41._12_4_;
  puVar21[0x2f] = 0;
  puVar21[0x2e] = 0x3f80000000000000;
  lVar19 = puVar21[1];
  puVar21[0x25] =
       CONCAT44(fVar39 * fVar35 + fVar45 * fVar37 + fVar50 * fVar38 + fVar52 * fVar39,
                fVar38 * fVar35 + fVar44 * fVar37 + fVar49 * fVar38 + fVar39 * -5.962);
  puVar21[0x24] =
       CONCAT44(fVar37 * fVar35 + fVar42 * fVar37 + fVar48 * fVar38 + fVar39 * 26.568,
                fVar35 * fVar35 + fVar40 * fVar37 + fVar46 * fVar38 + fVar39 * -49.406);
  puVar21[0x27] =
       CONCAT44(fVar39 * fVar40 + fVar45 * fVar42 + fVar50 * fVar44 + fVar52 * fVar45,
                fVar38 * fVar40 + fVar44 * fVar42 + fVar49 * fVar44 + fVar45 * -5.962);
  puVar21[0x26] =
       CONCAT44(fVar37 * fVar40 + fVar42 * fVar42 + fVar48 * fVar44 + fVar45 * 26.568,
                fVar35 * fVar40 + fVar40 * fVar42 + fVar46 * fVar44 + fVar45 * -49.406);
  *(float *)(puVar21 + 0x29) = fVar38 * fVar46 + fVar44 * fVar48 + fVar49 * fVar49 + fVar50 * -5.962
  ;
  *(float *)((long)puVar21 + 0x14c) =
       fVar39 * fVar46 + fVar45 * fVar48 + fVar50 * fVar49 + fVar52 * fVar50;
  *(float *)(puVar21 + 0x28) =
       fVar35 * fVar46 + fVar40 * fVar48 + fVar46 * fVar49 + fVar50 * -49.406;
  *(float *)((long)puVar21 + 0x144) =
       fVar37 * fVar46 + fVar42 * fVar48 + fVar48 * fVar49 + fVar50 * 26.568;
  puVar21[0x2b] =
       CONCAT44(fVar39 * 0.555 + fVar45 * 0.099 + fVar50 * 0.261 + fVar52 * fVar52,
                fVar38 * 0.555 + fVar44 * 0.099 + fVar49 * 0.261 + fVar52 * -5.962);
  puVar21[0x2a] =
       CONCAT44(fVar37 * 0.555 + fVar42 * 0.099 + fVar48 * 0.261 + fVar52 * 26.568,
                fVar35 * 0.555 + fVar40 * 0.099 + fVar46 * 0.261 + fVar52 * -49.406);
  plVar34 = (long *)FUN_710392e290(0x10,0x240,(long ****)ppppppppplVar16,(byte ****)param_4,param_5,
                                   param_6,param_7,param_8);
  if (plVar34 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c0 = (long ***)((ulong)local_1c0 & 0xffffffff00000000);
      local_190 = (long ********)0x240;
      ppppppppplVar16 = &local_190;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
      if (((uVar15 & 1) != 0) &&
         (plVar34 = (long *)FUN_710392e290(0x10,0x240,(long ****)ppppppppplVar16,(byte ****)param_4,
                                           param_5,param_6,param_7,param_8), plVar34 != (long *)0x0)
         ) goto LAB_7102ab3f08;
    }
    plVar34 = (long *)0x0;
  }
LAB_7102ab3f08:
  local_180 = (long ********)0x1000000001;
  local_190 = (long ********)&DAT_00000004;
  ppppppplStack_188 = (long *******)&DAT_100000001;
  FUN_710313e6a0(plVar34,param_1,(long ****)&local_190,(byte ****)param_4,param_5,param_6,param_7,
                 param_8);
  plVar34[0x10] = 0;
  plVar34[0x11] = 0;
  plVar34[0x2b] = 0;
  plVar34[0x2a] = 0x3f800000;
  *(undefined4 *)((long)plVar34 + 0x44) = 4;
  plVar34[0x2d] = 0;
  plVar34[0x2c] = 0x3f80000000000000;
  *(undefined2 *)(plVar34 + 9) = 0;
  *(undefined1 *)((long)plVar34 + 0x5c) = 1;
  plVar34[0x2f] = 0x3f800000;
  plVar34[0x2e] = 0;
  *(undefined8 *)((long)plVar34 + 0x54) = 0;
  *(undefined8 *)((long)plVar34 + 0x4c) = 0;
  *(undefined1 *)(plVar34 + 0xc) = 0;
  *plVar34 = (long)&PTR_FUN_710510cdb8;
  plVar34[0xd] = lVar19;
  plVar34[0xe] = 0;
  plVar34[0xf] = 0;
  *(undefined1 *)(plVar34 + 0x32) = 0;
  *(undefined4 *)((long)plVar34 + 0x194) = 0;
  *(undefined1 *)(plVar34 + 0x33) = 0;
  plVar34[0x34] = 0;
  plVar34[0x35] = 0;
  plVar34[0x31] = 0x3f80000000000000;
  plVar34[0x30] = 0;
  lVar30 = lRam0000007107459008;
  lVar19 = _ConstantZero;
  *(undefined2 *)(plVar34 + 0x37) = 1;
  plVar34[0x36] = param_1;
  *(undefined1 *)((long)plVar34 + 0x1ba) = 0;
  *(undefined4 *)((long)plVar34 + 0x1bc) = 0xffffffff;
  *(undefined4 *)(plVar34 + 0x3e) = 0;
  plVar34[0x3c] = 0;
  plVar34[0x3d] = 0;
  plVar34[0x39] = lVar30;
  plVar34[0x38] = lVar19;
  plVar34[0x3b] = lVar30;
  plVar34[0x3a] = lVar19;
  bVar11 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),param_1,
                          (long ****)(plVar34 + 0x36),(byte ****)param_4,param_5,param_6,param_7,
                          param_8);
  *(bool *)(plVar34 + 0x37) = bVar11;
  plVar34[0x40] = 0;
  *(undefined1 *)(plVar34 + 0x41) = 0;
  plVar34[0x42] = param_1;
  pppplVar17 = (long ****)0x11602384a3;
  *(undefined1 *)(plVar34 + 0x46) = 0;
  ppppppppplVar16 = (long *********)(plVar34 + 0x43);
  plVar34[0x45] = 0;
  plVar34[0x44] = 0;
  plVar34[0x43] = 0;
  FUN_7102626be0((long ***)&local_190,*(ulong **)(param_1 + 800),(long ****)0x11602384a3,
                 (byte ****)param_4,param_5,param_6,param_7,param_8);
  if ((&local_190 != ppppppppplVar16) &&
     (lVar19 = plVar34[0x45], (long ********)lVar19 != local_180)) {
    if (local_180 == (long ********)0x0) {
      if (lVar19 != 0) {
        lVar30 = plVar34[0x43];
        plVar20 = (long *)plVar34[0x44];
        *plVar20 = lVar30;
        *(long **)(lVar30 + 8) = plVar20;
        *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + -1;
        plVar34[0x44] = 0;
        plVar34[0x45] = 0;
        *ppppppppplVar16 = (long ********)0x0;
      }
    }
    else {
      if (lVar19 != 0) {
        pppppppplVar24 = *ppppppppplVar16;
        ppppppplVar27 = (long *******)plVar34[0x44];
        *ppppppplVar27 = (long ******)pppppppplVar24;
        pppppppplVar24[1] = ppppppplVar27;
        *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + -1;
        plVar34[0x44] = 0;
        plVar34[0x45] = 0;
        *ppppppppplVar16 = (long ********)0x0;
      }
      puVar25 = *(undefined8 **)((long)local_180 + 0x20);
      plVar34[0x43] = (long)local_180 + 0x18;
      plVar34[0x44] = (long)puVar25;
      *(long **********)((long)local_180 + 0x20) = ppppppppplVar16;
      *puVar25 = ppppppppplVar16;
      *(long *)((long)local_180 + 0x10) = *(long *)((long)local_180 + 0x10) + 1;
      plVar34[0x45] = (long)local_180;
    }
  }
  if (local_180 != (long ********)0x0) {
    *ppppppplStack_188 = (long ******)local_190;
    local_190[1] = ppppppplStack_188;
    *(long *)((long)local_180 + 0x10) = *(long *)((long)local_180 + 0x10) + -1;
    ppppppplStack_188 = (long *******)0x0;
    local_180 = (long ********)0x0;
    local_190 = (long ********)0x0;
  }
  auVar41 = _ConstantOne;
  lVar19 = plVar34[0x45];
  if (lVar19 != 0) {
    auVar47 = NEON_ext(_ConstantOne,_ConstantOne,8,1);
    uVar22 = (undefined8)nn::util::Vector3f::ConstantOne;
    *(ulong *)(lVar19 + 0x78) = (ulong)auVar47._0_4_;
    *(undefined8 *)(lVar19 + 0x70) = uVar22;
    if (*(char *)(lVar19 + 0x35) == '\0') {
      *(ulong *)(lVar19 + 0x48) = *(ulong *)(lVar19 + 0x48) | 4;
LAB_7102ab424c:
      lVar19 = plVar34[0x45];
      auVar41 = _ConstantZero;
    }
    else {
      uVar3 = *(uint *)(lVar19 + 0x3c);
      if ((int)uVar3 < 1) goto LAB_7102ab424c;
      lVar19 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar3 >> 0x18) * 0x300;
      if ((lVar19 == 0) || (*(uint *)(lVar19 + 4) != uVar3)) goto LAB_7102ab424c;
      lVar19 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar3 >> 0x18) * 0x300;
      *(undefined1 *)(lVar19 + 0x2da) = 1;
      fVar35 = auVar41._0_4_;
      bVar11 = false;
      if ((fVar35 == auVar41._8_4_) && (bVar11 = false, !NAN(fVar35) && !NAN(auVar41._4_4_))) {
        bVar11 = fVar35 == auVar41._4_4_;
      }
      uVar3 = *(uint *)(lVar19 + 0x26c) | 0x2000;
      if (bVar11) {
        uVar3 = *(uint *)(lVar19 + 0x26c) & 0xffffdfff;
      }
      *(uint *)(lVar19 + 0x26c) = uVar3;
      *(ulong *)(lVar19 + 0x108) = (ulong)auVar47._0_4_;
      *(undefined8 *)(lVar19 + 0x100) = uVar22;
      lVar19 = plVar34[0x45];
      auVar41 = _ConstantZero;
    }
    _ConstantZero = auVar41;
    if (lVar19 != 0) {
      auVar47 = NEON_ext(auVar41,auVar41,8,1);
      *(ulong *)(lVar19 + 0x58) = (ulong)auVar47._0_4_;
      *(long *)(lVar19 + 0x50) = auVar41._0_8_;
      if (*(char *)(lVar19 + 0x35) == '\0') {
        *(ulong *)(lVar19 + 0x48) = *(ulong *)(lVar19 + 0x48) | 1;
        lVar19 = plVar34[0x45];
      }
      else {
        uVar3 = *(uint *)(lVar19 + 0x3c);
        if (0 < (int)uVar3) {
          lVar30 = *lib::Singleton<lib::EffectManager>::instance_;
          uVar15 = (ulong)(uVar3 >> 0x18);
          lVar28 = lVar30 + uVar15 * 0x300;
          if ((lVar28 != 0) && (*(uint *)(lVar28 + 4) == uVar3)) {
            if (*(char *)(lVar30 + uVar15 * 0x300 + 0x2d6) == '\0') {
              lVar19 = lVar30 + uVar15 * 0x300;
              *(undefined1 *)(lVar19 + 0x2da) = 1;
              *(ulong *)(lVar19 + 0x128) = (ulong)auVar47._0_4_;
              *(long *)(lVar19 + 0x120) = auVar41._0_8_;
            }
            else {
              lVar28 = lVar30 + uVar15 * 0x300;
              uVar12 = *(undefined4 *)(lVar28 + 0xf8);
              uVar9 = *(undefined4 *)(lVar28 + 0xfc);
              uVar51 = auVar41._0_4_;
              *(undefined4 *)(lVar28 + 0xf8) = uVar12;
              *(undefined4 *)(lVar28 + 0xfc) = uVar9;
              *(undefined4 *)(lVar28 + 0xf0) = uVar51;
              *(undefined4 *)(lVar28 + 0xf4) = *(undefined4 *)(lVar28 + 0xf4);
              uVar43 = *(undefined4 *)(lVar19 + 0x54);
              *(undefined4 *)(lVar28 + 0xf8) = uVar12;
              *(undefined4 *)(lVar28 + 0xfc) = uVar9;
              *(undefined4 *)(lVar28 + 0xf0) = uVar51;
              *(undefined4 *)(lVar28 + 0xf4) = uVar43;
              *(undefined4 *)(lVar28 + 0xf8) = *(undefined4 *)(lVar19 + 0x58);
              *(undefined4 *)(lVar28 + 0xfc) = uVar9;
              *(undefined4 *)(lVar28 + 0xf0) = uVar51;
              *(undefined4 *)(lVar28 + 0xf4) = uVar43;
            }
            if (*(long *)(lVar30 + uVar15 * 0x300 + 0x58) == 0) {
              lVar30 = lVar30 + uVar15 * 0x300;
              *(undefined8 *)(lVar30 + 0x130) = 0;
              *(undefined8 *)(lVar30 + 0x138) = 0;
            }
          }
        }
        lVar19 = plVar34[0x45];
      }
      if (lVar19 != 0) {
        auVar41 = NEON_ext(_ConstantZero,_ConstantZero,8,1);
        uVar22 = (undefined8)nn::util::Vector3f::ConstantZero;
        *(ulong *)(lVar19 + 0x68) = (ulong)auVar41._0_4_;
        *(undefined8 *)(lVar19 + 0x60) = uVar22;
        if (*(char *)(lVar19 + 0x35) == '\0') {
          *(ulong *)(lVar19 + 0x48) = *(ulong *)(lVar19 + 0x48) | 2;
LAB_7102ab4550:
          lVar19 = plVar34[0x45];
        }
        else {
          uVar3 = *(uint *)(lVar19 + 0x3c);
          if ((int)uVar3 < 1) goto LAB_7102ab4550;
          lVar19 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar3 >> 0x18) * 0x300;
          if ((lVar19 == 0) || (*(uint *)(lVar19 + 4) != uVar3)) goto LAB_7102ab4550;
          lVar19 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar3 >> 0x18) * 0x300;
          *(undefined1 *)(lVar19 + 0x2da) = 1;
          *(ulong *)(lVar19 + 0x118) = (ulong)auVar41._0_4_;
          *(undefined8 *)(lVar19 + 0x110) = uVar22;
          lVar19 = plVar34[0x45];
        }
        if ((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) {
          uVar3 = *(uint *)(lVar19 + 0x3c);
          lVar19 = *lib::Singleton<lib::EffectManager>::instance_;
          std::mutex::lock();
          if ((0 < (int)uVar3) &&
             ((lVar19 = lVar19 + (ulong)(uVar3 >> 0x18) * 0x300, lVar19 != 0 &&
              (*(uint *)(lVar19 + 4) == uVar3)))) {
            pppplVar17 = (long ****)0x0;
            param_4 = (char *)0x0;
            FUN_71035707d0(lVar19,0,(long ****)0x0,0,param_5,param_6,param_7,param_8);
          }
          std::mutex::unlock();
        }
      }
    }
  }
  local_88 = (long ***)&DAT_00000004;
  local_80 = &DAT_100000001;
  uStack_78 = 0x1000000001;
  plVar20 = (long *)FUN_710392e290(0x10,0x48,pppplVar17,(byte ****)param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar20 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c0 = (long ***)((ulong)local_1c0 & 0xffffffff00000000);
      local_190 = (long ********)&DAT_00000048;
      ppppppppplVar16 = &local_190;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
      if (((uVar15 & 1) != 0) &&
         (plVar20 = (long *)FUN_710392e290(0x10,0x48,(long ****)ppppppppplVar16,(byte ****)param_4,
                                           param_5,param_6,param_7,param_8), plVar20 != (long *)0x0)
         ) goto LAB_7102ab4630;
    }
    plVar20 = (long *)0x0;
  }
LAB_7102ab4630:
  pppplVar17 = &local_88;
  FUN_710313e6a0(plVar20,param_1,pppplVar17,(byte ****)param_4,param_5,param_6,param_7,param_8);
  plVar34[0x40] = (long)plVar20;
  FUN_710313ef20(plVar20);
  local_ea = 0;
  auVar41 = NEON_ext(_ConstantZero,_ConstantZero,8,1);
  local_1b0 = (long ********)nn::util::Vector3f::ConstantZero;
  uStack_1a8 = (ulong)auVar41._0_4_;
  local_e8 = 0x3f800000;
  local_110 = 0;
  local_11a = 0xe;
  uStack_121 = 0;
  uStack_11e = 0;
  local_108 = 0x31ed91fca;
  lStack_f8 = lRam0000007107459008;
  local_100 = _ConstantZero;
  local_f0 = 0;
  local_ec = 0;
  local_e4 = 0x3f800000;
  local_d8 = 0x425cbfc4f;
  local_d0 = 0x7fb997a80;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0xbf800000;
  local_ac = 0;
  local_b4 = 0;
  local_bc = 0;
  local_a4 = 0xffffffff;
  local_a0 = 3;
  local_9c = 0x3f800000;
  local_98 = 0;
  local_96 = 0;
  lVar19 = plVar34[0xd];
  local_170 = *(undefined **)(lVar19 + 0x150);
  pcStack_168 = *(char **)(lVar19 + 0x158);
  local_160 = *(float *)(lVar19 + 0x160);
  fStack_15c = *(float *)(lVar19 + 0x164);
  uStack_158 = *(undefined4 *)(lVar19 + 0x168);
  uStack_154 = *(undefined4 *)(lVar19 + 0x16c);
  local_150 = *(undefined4 *)(lVar19 + 0x170);
  local_148 = 0;
  local_140 = CONCAT13(*(undefined1 *)(lVar19 + 0x17c),
                       CONCAT12((char)*(undefined4 *)(lVar19 + 0x178),
                                (short)*(undefined4 *)(lVar19 + 0x174)));
  local_13c = (undefined1)*(undefined4 *)(lVar19 + 0x180);
  local_138 = *(undefined8 *)(lVar19 + 0x188);
  local_130 = *(undefined1 *)(lVar19 + 400);
  uStack_12f = (undefined1)*(undefined4 *)(lVar19 + 0x194);
  uStack_12e = *(undefined1 *)(lVar19 + 0x198);
  uStack_12d = *(undefined1 *)(lVar19 + 0x199);
  local_12c = *(undefined1 *)(lVar19 + 0x19a);
  uStack_12b = *(undefined1 *)(lVar19 + 0x19b);
  local_12a = *(undefined1 *)(lVar19 + 0x19c);
  local_11c = *(undefined2 *)(lVar19 + 0x19e);
  local_118 = (ulong)*(uint *)(lVar19 + 0x1a0);
  local_129 = *(undefined1 *)(lVar19 + 0x1a4);
  uStack_128 = *(undefined1 *)(lVar19 + 0x1a5);
  uStack_127 = *(undefined1 *)(lVar19 + 0x1a6);
  uStack_126 = (undefined1)*(undefined4 *)(lVar19 + 0x1a8);
  uStack_125 = *(undefined1 *)(lVar19 + 0x1ac);
  uStack_124 = *(undefined1 *)(lVar19 + 0x1ad);
  uStack_123 = *(undefined1 *)(lVar19 + 0x1ae);
  uStack_122 = *(undefined1 *)(lVar19 + 0x1af);
  uStack_120 = *(undefined1 *)(lVar19 + 0x1b0);
  uStack_11f = *(undefined1 *)(lVar19 + 0x1b1);
  uStack_11d = 0;
  local_1c0 = (long ***)0x0;
  uStack_1b8 = 0;
  local_1a0 = (ulong)*(uint *)(lVar19 + 0x154);
  if (plVar34[7] != 0) {
    plVar20 = *(long **)(plVar34[7] + 0x130);
    pppplVar17 = &local_1c0;
    param_5 = (long ****)0x6;
    param_6 = 0x3f;
    param_4 = (char *)0x0;
    local_190 = local_1b0;
    ppppppplStack_188 = (long *******)uStack_1a8;
    local_180 = local_1b0;
    puStack_178 = (undefined *)uStack_1a8;
    (**(code **)(*plVar20 + 0x100))(plVar20,0);
    if (plVar34[7] != 0) {
      plVar20 = *(long **)(plVar34[7] + 0xa0);
      param_4 = (char *)&local_190;
      pppplVar17 = (long ****)0x0;
      (**(code **)(*plVar20 + 0x68))(plVar20,0);
    }
  }
  auVar41 = NEON_ext(_ConstantZero,_ConstantZero,8,1);
  uStack_1a8 = (ulong)auVar41._0_4_;
  local_1b0 = (long ********)nn::util::Vector3f::ConstantZero;
  local_11a = 0xe;
  uStack_121 = 0;
  uStack_11e = 0;
  local_108 = 0x31ed91fca;
  local_f0 = 0;
  lStack_f8 = lRam0000007107459008;
  local_100 = _ConstantZero;
  local_110 = 0;
  local_ec = 0;
  local_e4 = 0x3f800000;
  local_d8 = 0x425cbfc4f;
  local_d0 = 0x7fb997a80;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0xbf800000;
  local_bc = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0xffffffff;
  local_a0 = 3;
  local_9c = 0x3f800000;
  local_98 = 0;
  local_96 = 0;
  lVar19 = plVar34[0xd];
  local_170 = *(undefined **)(lVar19 + 0x1b4);
  pcStack_168 = *(char **)(lVar19 + 0x1bc);
  local_160 = *(float *)(lVar19 + 0x1c4);
  fStack_15c = *(float *)(lVar19 + 0x1c8);
  uStack_158 = *(undefined4 *)(lVar19 + 0x1cc);
  uStack_154 = *(undefined4 *)(lVar19 + 0x1d0);
  local_150 = *(undefined4 *)(lVar19 + 0x1d4);
  local_148 = 0;
  local_140 = CONCAT13(*(undefined1 *)(lVar19 + 0x1e0),
                       CONCAT12((char)*(undefined4 *)(lVar19 + 0x1dc),
                                (short)*(undefined4 *)(lVar19 + 0x1d8)));
  local_13c = (undefined1)*(undefined4 *)(lVar19 + 0x1e4);
  local_138 = *(undefined8 *)(lVar19 + 0x1e8);
  local_130 = *(undefined1 *)(lVar19 + 0x1f0);
  uStack_12f = (undefined1)*(undefined4 *)(lVar19 + 500);
  uStack_12e = *(undefined1 *)(lVar19 + 0x1f8);
  uStack_12d = *(undefined1 *)(lVar19 + 0x1f9);
  local_12c = *(undefined1 *)(lVar19 + 0x1fa);
  uStack_12b = *(undefined1 *)(lVar19 + 0x1fb);
  local_12a = *(undefined1 *)(lVar19 + 0x1fc);
  local_11c = *(undefined2 *)(lVar19 + 0x1fe);
  local_118 = (ulong)*(uint *)(lVar19 + 0x200);
  local_129 = *(undefined1 *)(lVar19 + 0x204);
  uStack_128 = *(undefined1 *)(lVar19 + 0x205);
  uStack_127 = *(undefined1 *)(lVar19 + 0x206);
  uStack_126 = (undefined1)*(undefined4 *)(lVar19 + 0x208);
  uStack_125 = *(undefined1 *)(lVar19 + 0x20c);
  uStack_124 = *(undefined1 *)(lVar19 + 0x20d);
  uStack_123 = *(undefined1 *)(lVar19 + 0x20e);
  uStack_122 = *(undefined1 *)(lVar19 + 0x20f);
  uStack_120 = *(undefined1 *)(lVar19 + 0x210);
  uStack_11f = *(undefined1 *)(lVar19 + 0x211);
  local_1c0 = (long ***)0x0;
  uStack_1b8 = 0;
  uStack_11d = 0;
  local_1a0 = (ulong)*(uint *)(lVar19 + 0x1b8);
  local_190 = local_1b0;
  ppppppplStack_188 = (long *******)uStack_1a8;
  local_180 = local_1b0;
  puStack_178 = (undefined *)uStack_1a8;
  if (*(long *)(plVar34[0x40] + 0x38) != 0) {
    plVar20 = *(long **)(*(long *)(plVar34[0x40] + 0x38) + 0x130);
    pppplVar17 = &local_1c0;
    param_5 = (long ****)0x6;
    param_6 = 0x3f;
    param_4 = (char *)0x0;
    (**(code **)(*plVar20 + 0x100))(plVar20,0);
    if (*(long *)(plVar34[0x40] + 0x38) != 0) {
      plVar20 = *(long **)(*(long *)(plVar34[0x40] + 0x38) + 0xa0);
      param_4 = (char *)&local_190;
      pppplVar17 = (long ****)0x0;
      (**(code **)(*plVar20 + 0x68))(plVar20,0);
      if (*(long *)(plVar34[0x40] + 0x38) != 0) {
        plVar20 = *(long **)(*(long *)(plVar34[0x40] + 0x38) + 0x130);
        (**(code **)(*plVar20 + 0x120))(plVar20,0);
      }
    }
  }
  puVar21[0x68] = plVar34;
  FUN_710313ef20(plVar34);
  if (*(long *)(puVar21[0x68] + 0x38) != 0) {
    plVar34 = *(long **)(*(long *)(puVar21[0x68] + 0x38) + 0x130);
    (**(code **)(*plVar34 + 0x120))(plVar34,0);
  }
  puVar25 = (undefined8 *)
            FUN_710392e290(0x10,0x260,pppplVar17,(byte ****)param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar25 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c0 = (long ***)((ulong)local_1c0 & 0xffffffff00000000);
      local_190 = (long ********)0x260;
      ppppppppplVar16 = &local_190;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
      if (((uVar15 & 1) != 0) &&
         (puVar25 = (undefined8 *)
                    FUN_710392e290(0x10,0x260,(long ****)ppppppppplVar16,(byte ****)param_4,param_5,
                                   param_6,param_7,param_8), puVar25 != (undefined8 *)0x0))
      goto LAB_7102ab4bbc;
    }
    puVar25 = (undefined8 *)0x0;
  }
LAB_7102ab4bbc:
  *puVar25 = &PTR_FUN_710510d820;
  pppplVar17 = (long ****)(puVar25 + 0x34);
  plVar20 = puVar25 + 1;
  *plVar20 = 0;
  puVar25[4] = 0;
  puVar25[5] = 0;
  *(undefined1 *)(puVar25 + 0x26) = 4;
  puVar25[2] = 0;
  puVar25[3] = 0;
  *(undefined1 *)(puVar25 + 0x30) = 0;
  *(undefined4 *)((long)puVar25 + 0x184) = 0;
  *(undefined1 *)(puVar25 + 0x31) = 0;
  puVar25[0x29] = 0;
  puVar25[0x28] = 0x3f800000;
  puVar25[0x2b] = 0;
  puVar25[0x2a] = 0x3f80000000000000;
  puVar25[0x2d] = 0x3f800000;
  puVar25[0x2c] = 0;
  puVar25[0x32] = 0;
  puVar25[0x33] = 0;
  puVar25[0x2f] = 0x3f80000000000000;
  puVar25[0x2e] = 0;
  lVar30 = lRam0000007107459008;
  lVar19 = _ConstantZero;
  puVar25[0x34] = param_1;
  *(undefined2 *)(puVar25 + 0x35) = 1;
  *(undefined1 *)((long)puVar25 + 0x1aa) = 0;
  *(undefined4 *)((long)puVar25 + 0x1ac) = 0xffffffff;
  *(undefined4 *)(puVar25 + 0x3c) = 0;
  puVar25[0x3a] = 0;
  puVar25[0x3b] = 0;
  puVar25[0x37] = lVar30;
  puVar25[0x36] = lVar19;
  puVar25[0x39] = lVar30;
  puVar25[0x38] = lVar19;
  bVar11 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),param_1,
                          pppplVar17,(byte ****)param_4,param_5,param_6,param_7,param_8);
  puVar25[0x3e] = 0;
  *(bool *)(puVar25 + 0x35) = bVar11;
  *(undefined1 *)(puVar25 + 0x3f) = 0;
  *(undefined8 *)((long)puVar25 + 0x221) = 0;
  *(undefined8 *)((long)puVar25 + 0x21c) = 0;
  *(undefined8 *)((long)puVar25 + 0x214) = 0;
  *(undefined8 *)((long)puVar25 + 0x20c) = 0;
  *(undefined8 *)((long)puVar25 + 0x1fc) = 0;
  *(undefined8 *)((long)puVar25 + 0x204) = 0;
  *(undefined8 *)((long)puVar25 + 0x249) = 0;
  *(undefined8 *)((long)puVar25 + 0x244) = 0;
  *(undefined8 *)((long)puVar25 + 0x23c) = 0;
  *(undefined8 *)((long)puVar25 + 0x234) = 0;
  *(undefined8 *)((long)puVar25 + 0x22c) = 0;
  for (plVar34 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
      plVar34 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar34 = plVar34 + 2) {
    if ((*(uint *)(plVar34 + 1) < 2) && (lVar19 = *plVar34, *(long *)(lVar19 + 0x68) == 0xe9012564f)
       ) {
      *plVar20 = lVar19;
      if (lVar19 == 0) goto LAB_7102ab4d04;
      if (*(long *)(lVar19 + 0xd8) != 0) {
        if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar19 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar19 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x22) = 0;
        }
        lVar30 = *plVar20;
        lVar19 = 0;
        if (lVar30 == 0) {
LAB_7102ab5194:
          *(undefined2 *)(puVar25 + 0x10) = 0x6e;
          builtin_strncpy((char *)((long)puVar25 + 0x37),"get_End",8);
          builtin_strncpy((char *)(puVar25 + 6),"dyr_Targ",8);
          builtin_strncpy((char *)(puVar25 + 0xe),"dyr_Targ",8);
          builtin_strncpy((char *)(puVar25 + 0xf),"et_Locko",8);
          *(undefined2 *)(puVar25 + 0x18) = 0x68;
          builtin_strncpy((char *)(puVar25 + 0x16),"dyr_Targ",8);
          builtin_strncpy((char *)(puVar25 + 0x17),"et_Searc",8);
        }
        else {
          if ((*(char *)(lVar30 + 0xe0) != '\0') && (*(long *)(lVar30 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar30 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar30 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar30 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar30 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar30 + 0xb0) + 0x10) = 0;
          }
          lVar19 = *plVar20;
          if (lVar19 == 0) goto LAB_7102ab5194;
          uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_Target_End");
          if (uVar15 != 0) {
            puVar25[2] = uVar15;
          }
          builtin_strncpy((char *)((long)puVar25 + 0x37),"get_End",8);
          builtin_strncpy((char *)(puVar25 + 6),"dyr_Targ",8);
          uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_Target_Lockon");
          if (uVar15 != 0) {
            puVar25[3] = uVar15;
          }
          *(undefined2 *)(puVar25 + 0x10) = 0x6e;
          builtin_strncpy((char *)(puVar25 + 0xe),"dyr_Targ",8);
          builtin_strncpy((char *)(puVar25 + 0xf),"et_Locko",8);
          uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_Target_Search");
          if (uVar15 != 0) {
            puVar25[4] = uVar15;
          }
          *(undefined2 *)(puVar25 + 0x18) = 0x68;
          builtin_strncpy((char *)(puVar25 + 0x16),"dyr_Targ",8);
          builtin_strncpy((char *)(puVar25 + 0x17),"et_Searc",8);
          uVar15 = FUN_71025ee6c0(*(long *)(lVar19 + 0xd0),(byte *)"dyr_Target_Start");
          if (uVar15 != 0) {
            puVar25[5] = uVar15;
          }
        }
        *(undefined1 *)(puVar25 + 0x20) = 0;
        builtin_strncpy((char *)(puVar25 + 0x1e),"dyr_Targ",8);
        builtin_strncpy((char *)(puVar25 + 0x1f),"et_Start",8);
        if (lVar19 == 0) goto LAB_7102ab4d04;
      }
      *(byte *)(lVar19 + 0x118) = *(byte *)(lVar19 + 0x118) | 1;
      goto LAB_7102ab4d04;
    }
  }
  *plVar20 = 0;
LAB_7102ab4d04:
  plVar34 = *(long **)(param_1 + 0x338);
  local_190 = (long ********)(puVar25 + 0x40);
  puVar25[0x3e] = plVar34;
  if (*(long *)(*plVar34 + 8) == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    pppplVar17 = (long ****)0x0;
    uVar12 = FUN_7102405040(*(long *)(*plVar34 + 8),&local_190,0,(byte ****)param_4,param_5,param_6,
                            param_7,param_8);
    plVar34 = *(long **)(param_1 + 0x338);
  }
  puVar25[0x42] = 0x2600000025;
  local_190 = (long ********)(puVar25 + 0x46);
  *(undefined4 *)((long)puVar25 + 0x1fc) = uVar12;
  *(undefined4 *)(puVar25 + 0x43) = 0;
  puVar25[0x44] = plVar34;
  if (*(long *)(*plVar34 + 8) == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    pppplVar17 = (long ****)0x0;
    uVar12 = FUN_7102405040(*(long *)(*plVar34 + 8),&local_190,0,(byte ****)param_4,param_5,param_6,
                            param_7,param_8);
  }
  *(undefined4 *)((long)puVar25 + 0x22c) = uVar12;
  *(undefined4 *)(puVar25 + 0x49) = 0;
  puVar25[0x48] = 0x2800000027;
  plVar34 = (long *)puVar21[0x69];
  puVar21[0x69] = puVar25;
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 8))();
  }
  puVar21[0x61] = 0x706050403020100;
  local_190 = (long ********)(puVar21 + 0x70);
  puVar21[0x6e] = plVar14;
  if (*(long *)(*plVar14 + 8) == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    pppplVar17 = (long ****)0x0;
    uVar12 = FUN_7102405040(*(long *)(*plVar14 + 8),&local_190,0,(byte ****)param_4,param_5,param_6,
                            param_7,param_8);
  }
  puVar21[0x72] = 0x1d0000001c;
  local_190 = (long ********)(puVar21 + 0x76);
  *(undefined4 *)((long)puVar21 + 0x37c) = uVar12;
  *(undefined4 *)(puVar21 + 0x73) = 0;
  puVar21[0x74] = plVar14;
  if (*(long *)(*plVar14 + 8) == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    pppplVar17 = (long ****)0x0;
    uVar12 = FUN_7102405040(*(long *)(*plVar14 + 8),&local_190,0,(byte ****)param_4,param_5,param_6,
                            param_7,param_8);
  }
  puVar21[0x78] = 0x1f0000001e;
  local_190 = (long ********)(puVar21 + 0x7c);
  *(undefined4 *)((long)puVar21 + 0x3ac) = uVar12;
  *(undefined4 *)(puVar21 + 0x79) = 0;
  puVar21[0x7a] = plVar14;
  if (*(long *)(*plVar14 + 8) == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    pppplVar17 = (long ****)0x0;
    uVar12 = FUN_7102405040(*(long *)(*plVar14 + 8),&local_190,0,(byte ****)param_4,param_5,param_6,
                            param_7,param_8);
  }
  *(undefined4 *)((long)puVar21 + 0x3dc) = uVar12;
  *(undefined4 *)(puVar21 + 0x7f) = 0;
  puVar21[0x7e] = 0x2200000021;
  plVar14 = *(long **)(param_1 + 0xa98);
  *(undefined8 **)(param_1 + 0xa98) = puVar21;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  local_190 = (long ********)0x710425d486;
  puStack_178 = PTR_s_dyr_Hero2Hou_Wait_710510d710;
  local_170 = PTR_s_dyr_Hero2Hou_Vibration_710510d718;
  ppppppplStack_188 = (long *******)PTR_s_dyr_Hero2Hou_Ready_710510d700;
  local_180 = (long ********)PTR_s_dyr_Hero2Hou_Shot_710510d708;
  pcStack_168 = "dyr_Hero2Dan_set";
  local_160 = 2.1101566e-36;
  fStack_15c = 1.58347e-43;
  pppplVar29 = *(long *****)(param_1 + 0x338);
  puVar21 = (undefined8 *)
            FUN_710392e290(0x10,0x160,pppplVar17,(byte ****)param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar21 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (long ***)((ulong)local_88 & 0xffffffff00000000);
      local_1c0 = (long ***)&DAT_00000160;
      pppplVar17 = &local_1c0;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar15 & 1) != 0) &&
         (puVar21 = (undefined8 *)
                    FUN_710392e290(0x10,0x160,pppplVar17,(byte ****)param_4,param_5,param_6,param_7,
                                   param_8), puVar21 != (undefined8 *)0x0)) goto LAB_7102ab4f2c;
    }
    puVar21 = (undefined8 *)0x0;
  }
LAB_7102ab4f2c:
  ppppppppplVar16 = &local_190;
  ppppbVar18 = ppppbVar2;
  FUN_7102abef70(puVar21,param_1,(long ****)ppppppppplVar16,ppppbVar2,pppplVar29,param_6,param_7,
                 param_8);
  plVar14 = *(long **)(param_1 + 0xaa0);
  *(undefined8 **)(param_1 + 0xaa0) = puVar21;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  local_190 = (long ********)0x71043cd5ef;
  ppppppplStack_188 = (long *******)0x71042d4518;
  local_180 = (long ********)0x7104463c63;
  pcStack_168 = PTR_s_dyr_ArmHand_Attack_710510d730;
  local_160 = SUB84(PTR_s_dyr_ArmHand_Rolling_710510d738,0);
  fStack_15c = (float)((ulong)PTR_s_dyr_ArmHand_Rolling_710510d738 >> 0x20);
  puStack_178 = PTR_s_dyr_ArmHand_Wait_710510d720;
  local_170 = PTR_s_dyr_ArmHand_Carge_710510d728;
  puVar21 = (undefined8 *)
            FUN_710392e290(0x10,0x200,(long ****)ppppppppplVar16,ppppbVar18,pppplVar29,param_6,
                           param_7,param_8);
  if (puVar21 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (long ***)((ulong)local_88 & 0xffffffff00000000);
      local_1c0 = (long ***)&DAT_00000200;
      pppplVar17 = &local_1c0;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar15 & 1) != 0) &&
         (puVar21 = (undefined8 *)
                    FUN_710392e290(0x10,0x200,pppplVar17,ppppbVar18,pppplVar29,param_6,param_7,
                                   param_8), puVar21 != (undefined8 *)0x0)) goto LAB_7102ab4ff0;
    }
    puVar21 = (undefined8 *)0x0;
  }
LAB_7102ab4ff0:
  FUN_7102ab7e50(puVar21,param_1,&local_190,ppppbVar2,pppplVar29,param_6,param_7,param_8);
  uVar15 = *(ulong *)(param_1 + 0xaa8);
  *(undefined8 **)(param_1 + 0xaa8) = puVar21;
  if (uVar15 == 0) {
    return;
  }
  plVar14 = *(long **)(uVar15 + 0x1e8);
  if (plVar14 == (long *)0x0) {
LAB_7102ab5030:
    if (plVar14 == (long *)0x0) goto LAB_7102ab5040;
  }
  else if (*(char *)((long)plVar14 + 0x42) == '\0') {
    (**(code **)(*plVar14 + 0x20))();
    plVar14 = *(long **)(uVar15 + 0x1e8);
    goto LAB_7102ab5030;
  }
  (**(code **)(*plVar14 + 8))();
LAB_7102ab5040:
  *(undefined8 *)(uVar15 + 0x1e8) = 0;
  FUN_710392eb40(uVar15);
                    /* WARNING: Read-only address (ram,0x00710446a9b0) is written */
  return;
}

