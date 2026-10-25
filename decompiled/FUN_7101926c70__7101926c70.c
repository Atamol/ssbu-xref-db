// addr:      7101926c70
// offset:    0x1926c70
// name:      FUN_7101926c70
// mangled:   
// signature: undefined __cdecl FUN_7101926c70(long param_1, undefined4 * param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * param_7, long * * * param_8)


void FUN_7101926c70(long param_1,undefined4 *param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ***param_7,long ***param_8)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
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
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  long ****pppplVar15;
  char *pcVar16;
  long *********ppppppppplVar17;
  undefined1 (*pauVar18) [16];
  code *pcVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined8 uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ulong *puVar34;
  long *plVar35;
  long ********pppppppplVar36;
  ulong *puVar37;
  int *piVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  long *plVar44;
  long *plVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  undefined1 auVar50 [16];
  long ********local_210;
  undefined4 local_208;
  undefined4 local_204;
  char local_200;
  undefined1 auStack_1ff [7];
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined5 uStack_1b0;
  undefined3 local_1ab;
  undefined5 uStack_1a8;
  long local_e8;
  long *plStack_e0;
  long local_d8;
  long *local_d0;
  long local_c8;
  long *local_c0;
  long ********local_b8;
  long *local_b0;
  uint local_a8 [2];
  ulong local_a0;
  long *local_98;
  uint local_90 [2];
  long ********local_88;
  long *local_80;
  uint local_68 [2];
  
  uVar28 = *(uint *)(*DAT_710532a860 + 0x1c);
  puVar20 = *(undefined8 **)(*DAT_7105314510 + 0x158);
  ppppppppplVar17 = param_3;
  pauVar18 = param_4;
  pcVar19 = (code *)param_5;
  FUN_710192a680(param_1);
  lVar21 = *(long *)(*(long *)(param_1 + 0x218) + 8);
  *(undefined8 *)(lVar21 + 0x30) = 0;
  *(undefined1 *)(lVar21 + 0x2c) = 0;
  *(undefined2 *)(lVar21 + 0x3c) = 1;
  *(undefined4 *)(lVar21 + 0x38) = 0;
  lVar21 = *(long *)(*(long *)(param_1 + 0x218) + 8);
  *(undefined8 *)(lVar21 + 0x30) = 0;
  *(undefined1 *)(lVar21 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(*DAT_710532a860 + 0x78);
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x460,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                          (long ****)pcVar19,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
      local_210 = (long ********)0x460;
      ppppppppplVar17 = &local_210;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar10 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x460,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                  (long ****)pcVar19,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101926d64;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101926d64:
  uVar29 = *(undefined8 *)(param_1 + 0x220);
  *(undefined4 *)(puVar9 + 0xe) = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  *(undefined4 *)(puVar9 + 2) = 0xffffffff;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[3] = 0;
  puVar9[0x10] = 0;
  *puVar9 = &PTR_FUN_71050c07f8;
  puVar9[1] = uVar29;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[0xf] = 0;
  *(undefined4 *)(puVar9 + 0x78) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x3c4) = 0xffffffff;
  *(undefined4 *)(puVar9 + 0x80) = 0xffffffff;
  *(undefined4 *)((long)puVar9 + 0x404) = 0xffffffff;
  *(undefined2 *)(puVar9 + 0x20) = 0;
  *(undefined2 *)(puVar9 + 0x30) = 0;
  *(undefined2 *)(puVar9 + 0x40) = 0;
  *(undefined2 *)(puVar9 + 0x50) = 0;
  puVar9[0x4f] = 0;
  puVar9[0x4e] = 0;
  puVar9[0x4d] = 0;
  puVar9[0x4c] = 0;
  puVar9[0x4b] = 0;
  puVar9[0x4a] = 0;
  puVar9[0x49] = 0;
  puVar9[0x48] = 0;
  puVar9[0x47] = 0;
  puVar9[0x46] = 0;
  puVar9[0x45] = 0;
  puVar9[0x44] = 0;
  puVar9[0x43] = 0;
  puVar9[0x42] = 0;
  *(undefined2 *)(puVar9 + 0x60) = 0;
  puVar9[0x5f] = 0;
  puVar9[0x5e] = 0;
  puVar9[0x5d] = 0;
  puVar9[0x5c] = 0;
  puVar9[0x5b] = 0;
  puVar9[0x5a] = 0;
  puVar9[0x59] = 0;
  puVar9[0x58] = 0;
  puVar9[0x57] = 0;
  puVar9[0x56] = 0;
  puVar9[0x55] = 0;
  puVar9[0x54] = 0;
  puVar9[0x53] = 0;
  puVar9[0x52] = 0;
  *(undefined2 *)(puVar9 + 0x70) = 0;
  puVar9[0x6f] = 0;
  puVar9[0x6e] = 0;
  puVar9[0x6d] = 0;
  puVar9[0x6c] = 0;
  puVar9[0x6b] = 0;
  puVar9[0x6a] = 0;
  puVar9[0x69] = 0;
  puVar9[0x68] = 0;
  puVar9[0x67] = 0;
  puVar9[0x66] = 0;
  puVar9[0x65] = 0;
  puVar9[100] = 0;
  puVar9[99] = 0;
  puVar9[0x62] = 0;
  puVar9[0x72] = 0;
  puVar9[0x75] = 0;
  *(undefined4 *)(puVar9 + 0x76) = 0;
  *(undefined4 *)((long)puVar9 + 0x3b4) = 0x876500;
  *(undefined1 *)(puVar9 + 0x77) = 0;
  puVar9[0x74] = &PTR_FUN_7104f73d30;
  *(undefined4 *)(puVar9 + 0x73) = 0;
  puVar9[0x7a] = 0;
  puVar9[0x79] = 0;
  puVar9[0x7d] = 0;
  *(undefined4 *)(puVar9 + 0x7e) = 0;
  *(undefined4 *)((long)puVar9 + 0x3f4) = 0x876500;
  *(undefined1 *)(puVar9 + 0x7f) = 0;
  puVar9[0x7c] = &PTR_FUN_7104f73d30;
  *(undefined4 *)(puVar9 + 0x7b) = 0;
  puVar9[0x85] = 0;
  *(undefined4 *)(puVar9 + 0x84) = 0;
  puVar9[0x83] = 0;
  puVar9[0x82] = 0;
  puVar9[0x81] = 0;
  *(undefined4 *)(puVar9 + 0x86) = 1;
  puVar9[0x1e] = 0;
  puVar9[0x1f] = 0;
  puVar9[0x1c] = 0;
  puVar9[0x1d] = 0;
  puVar9[0x1a] = 0;
  puVar9[0x1b] = 0;
  puVar9[0x18] = 0;
  puVar9[0x19] = 0;
  puVar9[0x16] = 0;
  puVar9[0x17] = 0;
  puVar9[0x14] = 0;
  puVar9[0x15] = 0;
  puVar9[0x12] = 0;
  puVar9[0x13] = 0;
  puVar9[0x2e] = 0;
  puVar9[0x2f] = 0;
  puVar9[0x2c] = 0;
  puVar9[0x2d] = 0;
  puVar9[0x2a] = 0;
  puVar9[0x2b] = 0;
  puVar9[0x28] = 0;
  puVar9[0x29] = 0;
  puVar9[0x26] = 0;
  puVar9[0x27] = 0;
  puVar9[0x24] = 0;
  puVar9[0x25] = 0;
  puVar9[0x22] = 0;
  puVar9[0x23] = 0;
  puVar9[0x3e] = 0;
  puVar9[0x3f] = 0;
  puVar9[0x3c] = 0;
  puVar9[0x3d] = 0;
  puVar9[0x3a] = 0;
  puVar9[0x3b] = 0;
  puVar9[0x38] = 0;
  puVar9[0x39] = 0;
  puVar9[0x36] = 0;
  puVar9[0x37] = 0;
  puVar9[0x34] = 0;
  puVar9[0x35] = 0;
  puVar9[0x32] = 0;
  puVar9[0x33] = 0;
  *(undefined8 *)((long)puVar9 + 0x434) = 0;
  *(undefined8 *)((long)puVar9 + 0x43c) = 0;
  *(undefined4 *)((long)puVar9 + 0x444) = 0x3f800000;
  *(undefined1 *)((long)puVar9 + 0x44e) = 1;
  *(undefined2 *)((long)puVar9 + 0x44c) = 0x101;
  *(undefined4 *)(puVar9 + 0x89) = 0x1010101;
  *(undefined2 *)((long)puVar9 + 0x453) = 0;
  *(undefined4 *)((long)puVar9 + 0x44f) = 0;
  lVar21 = *(long *)(DAT_710532f730 + 8) + 0x160;
  if (*(uint *)(*DAT_710532a860 + 0x1c) < 3) {
    uVar10 = *(ulong *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) +
                        (ulong)*(uint *)(*DAT_710532a860 + 0x1c) * 0x3d700 + 0x3d6d0);
  }
  else {
    uVar10 = 0xc1ff000000000000;
  }
  puVar11 = FUN_7103263e20(lVar21,0x24);
  bVar6 = (uVar10 & 0xffffffffff) == 0;
  bVar7 = uVar10 >> 0x38 != 0xc1;
  if (bVar7 || bVar6) {
    if (((((((ulong)puVar11 & 0xff00000000000000) != 0xc100000000000000) ||
          (((ulong)puVar11 & 0xffffffffff) == 0)) ||
         (puVar11 = FUN_7103263e20(lVar21,0x25),
         ((ulong)puVar11 & 0xff00000000000000) != 0xc100000000000000)) ||
        ((((ulong)puVar11 & 0xffffffffff) == 0 ||
         (puVar11 = FUN_7103263e20(lVar21,0x26),
         ((ulong)puVar11 & 0xff00000000000000) != 0xc100000000000000)))) ||
       (((ulong)puVar11 & 0xffffffffff) == 0)) goto LAB_7101927138;
    puVar11 = FUN_7103263e20(lVar21,0x22);
    if ((((ulong)puVar11 & 0xff00000000000000) != 0xc100000000000000) ||
       (((ulong)puVar11 & 0xffffffffff) == 0)) goto LAB_710192738c;
    puVar11 = FUN_7103263e20(lVar21,8);
    uVar22 = (ulong)puVar11 & 0xffffffffff;
LAB_7101927174:
    if ((uVar22 == 0) || (((ulong)puVar11 & 0xff00000000000000) != 0xc100000000000000))
    goto LAB_7101927184;
  }
  else {
    if (((((((ulong)puVar11 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)puVar11 & 0xffffffffff) != 0)) &&
         ((((ulong)puVar11 ^ uVar10) & 0xffffffffff) == 0)) ||
        (((puVar11 = FUN_7103263e20(lVar21,0x25),
          ((ulong)puVar11 & 0xff00000000000000) == 0xc100000000000000 &&
          (((ulong)puVar11 & 0xffffffffff) != 0)) &&
         ((((ulong)puVar11 ^ uVar10) & 0xffffffffff) == 0)))) ||
       (((puVar11 = FUN_7103263e20(lVar21,0x26),
         ((ulong)puVar11 & 0xff00000000000000) == 0xc100000000000000 &&
         (((ulong)puVar11 & 0xffffffffff) != 0)) &&
        ((((ulong)puVar11 ^ uVar10) & 0xffffffffff) == 0)))) {
LAB_7101927138:
      *(undefined1 *)((long)puVar9 + 0x44f) = 1;
LAB_7101927140:
      puVar11 = FUN_7103263e20(lVar21,8);
      uVar22 = (ulong)puVar11 & 0xffffffffff;
      if (bVar7 || bVar6) goto LAB_7101927174;
    }
    else {
      puVar11 = FUN_7103263e20(lVar21,0x22);
      if (((((ulong)puVar11 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)puVar11 & 0xffffffffff) != 0)) &&
         ((((ulong)puVar11 ^ uVar10) & 0xffffffffff) == 0)) {
LAB_710192738c:
        *(undefined1 *)(puVar9 + 0x8a) = 1;
        goto LAB_7101927140;
      }
      puVar11 = FUN_7103263e20(lVar21,8);
      uVar22 = (ulong)puVar11 & 0xffffffffff;
    }
    if (((uVar22 != 0) && (((ulong)puVar11 & 0xff00000000000000) == 0xc100000000000000)) &&
       ((((ulong)puVar11 ^ uVar10) & 0xffffffffff) == 0)) {
LAB_7101927184:
      *(undefined1 *)((long)puVar9 + 0x454) = 1;
    }
  }
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x21d0,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                           (long ****)pcVar19,param_6,param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
      local_210 = (long ********)0x21d0;
      ppppppppplVar17 = &local_210;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar10 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x21d0,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                   (long ****)pcVar19,param_6,param_7,param_8),
         puVar12 != (undefined8 *)0x0)) goto LAB_71019271e8;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_71019271e8:
  FUN_7102500e20(&local_210,*(int *)(puVar9 + 2),ppppppppplVar17,(byte ****)pauVar18,
                 (long ****)pcVar19,param_6,param_7,param_8);
  *puVar12 = &PTR_FUN_71050c07d8;
  puVar12[0x15] = 0;
  puVar12[0x16] = 0;
  puVar12[0x18] = 0;
  puVar12[0x13] = 0;
  puVar12[0x14] = 0;
  *(undefined4 *)(puVar12 + 0x22) = 0;
  *(undefined4 *)(puVar12 + 0x28) = 0;
  puVar12[0x11] = 0;
  puVar12[0x12] = 0;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0;
  puVar12[0x1b] = 0;
  puVar12[0x1c] = 0;
  puVar12[0x19] = 0;
  puVar12[0x1a] = 0;
  puVar12[0x20] = 0;
  puVar12[0x21] = 0;
  puVar12[0x1e] = 0;
  puVar12[0x1f] = 0;
  puVar12[0x26] = 0;
  puVar12[0x27] = 0;
  puVar12[0x24] = 0;
  puVar12[0x25] = 0;
  memset(puVar12 + 0x29,0,0x2014);
  puVar12[0x433] = 0x42b4000042b40000;
  puVar12[0x432] = 0;
  puVar12[0x431] = 0;
  puVar12[0x430] = 0;
  puVar12[0x42f] = 0;
  puVar12[0x42e] = 0;
  puVar12[0x42d] = 0;
  puVar12[0x42c] = 0;
  puVar12[0x437] = 0;
  puVar12[0x436] = 0;
  puVar12[0x435] = 0;
  puVar12[0x438] = 0x3f80000000000000;
  puVar12[0x434] = 0;
  memset(puVar12 + 0x2b,0,0x2000);
  *(undefined1 *)((long)puVar12 + 0x21ce) = 0;
  *(undefined2 *)((long)puVar12 + 0x21cc) = 0;
  *(undefined4 *)(puVar12 + 0x439) = 0;
  puVar12[1] = local_210;
  puVar12[2] = CONCAT44(local_204,local_208);
  pppplVar15 = (long ****)0x0;
  puVar12[5] = local_1f0;
  puVar12[6] = uStack_1e8;
  puVar12[3] = CONCAT71(auStack_1ff,local_200);
  puVar12[4] = uStack_1f8;
  puVar12[9] = local_1d0;
  puVar12[10] = uStack_1c8;
  puVar12[7] = local_1e0;
  puVar12[8] = uStack_1d8;
  *(ulong *)((long)puVar12 + 0x6d) = CONCAT53(uStack_1a8,local_1ab);
  puVar12[0xb] = local_1c0;
  puVar12[0xc] = uStack_1b8;
  puVar12[0xd] = CONCAT35(local_1ab,uStack_1b0);
  *(float *)(puVar12 + 0xe) = *(float *)(puVar12 + 0xe) + 90.0;
  puVar9[0x85] = puVar12;
  FUN_71024d1810((uint *)&local_88,*DAT_710532a860,0,(byte ****)pauVar18,(long ****)pcVar19,param_6,
                 param_7,param_8);
  lVar21 = DAT_7105332f20;
  uVar26 = (uint)local_88;
  uVar10 = (ulong)local_88 & 0xffffffff;
  if ((uint)local_88 != 0xffffff) {
    if ((uint)local_88 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      piVar38 = (int *)(*(long *)(lVar21 + 0x40) + uVar10 * 0x48);
      bVar4 = *(byte *)(piVar38 + 2);
      std::recursive_mutex::unlock();
      bVar6 = false;
      if (((bVar4 & 1) != 0) && (piVar38 != (int *)0x0)) {
        if (*piVar38 == 0xffffff) {
          iVar8 = -1;
        }
        else {
          iVar8 = FUN_7103543080((long)piVar38);
        }
        bVar6 = iVar8 == 3;
      }
    }
    else {
      bVar6 = false;
    }
    lVar21 = DAT_7105332f20;
    if (uVar26 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar23 = *(long *)(lVar21 + 0x40);
      if ((*(byte *)(lVar23 + uVar10 * 0x48 + 8) & 1) != 0) {
        FUN_710353f5a0(lVar21,(int *)(lVar23 + uVar10 * 0x48),pppplVar15,(byte ****)pauVar18,
                       (long ****)pcVar19,param_6,param_7,param_8);
      }
      std::recursive_mutex::unlock();
    }
    local_88 = (long ********)CONCAT44(local_88._4_4_,0xffffff);
    if (bVar6) {
      FUN_71024d1810((uint *)&local_b8,*DAT_710532a860,0,(byte ****)pauVar18,(long ****)pcVar19,
                     param_6,param_7,param_8);
      pcVar16 = "model.numdlb";
      FUN_710353e1d0((uint *)&local_88,(uint *)&local_b8,(byte *)"model.numdlb");
      uVar26 = (uint)local_88;
      uVar10 = (ulong)local_88 & 0xffffffff;
      if ((uint)local_88 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,(uint)local_88,(long *********)pcVar16,(byte ****)pauVar18,
                       (long ****)pcVar19,param_6,param_7,param_8);
      }
      if ((uVar26 == 0xffffff) ||
         (lVar21 = **(long **)(DAT_7105332f20 + 0x78),
         *(uint *)(*(long *)(lVar21 + 0x40) + 4) <= uVar26)) {
        local_88 = (long ********)0x0;
      }
      else {
        local_88 = (long ********)
                   (*(ulong *)(*(long *)(lVar21 + 0x60) + uVar10 * 0x20) & 0xffffffffff);
      }
      lVar21 = (*(long **)(DAT_7105332f20 + 0x78))[1];
      pcVar19 = FUN_7103542240;
      pauVar18 = (undefined1 (*) [16])&DAT_00000008;
      puVar12 = bsearch(&local_88,*(void **)(lVar21 + 0x20),
                        (ulong)*(uint *)(*(long *)(lVar21 + 8) + 8),8,FUN_7103542240);
      uVar26 = 0xffffff;
      if (puVar12 != (undefined8 *)0x0) {
        uVar27 = (uint)((ulong)*puVar12 >> 0x20);
        uVar25 = uVar27 >> 8;
        if ((uVar25 != 0xffffff) &&
           (uVar2 = *(uint *)(*(long *)(lVar21 + 8) + 4), uVar26 = uVar27 >> 8,
           uVar2 < uVar25 || uVar2 == uVar26)) {
          uVar26 = 0xffffff;
        }
      }
      pppplVar15 = (long ****)&DAT_00000004;
      local_a0 = CONCAT44(local_a0._4_4_,uVar26);
      FUN_71035c2890(&local_88,(uint *)&local_a0,(long *********)&DAT_00000004,(byte ****)pauVar18,
                     (long ****)pcVar19,param_6,param_7,param_8);
      plVar35 = local_80;
      pppppppplVar36 = local_88;
      local_88 = (long ********)0x0;
      local_80 = (long *)0x0;
      plVar39 = (long *)puVar9[0x10];
      puVar9[0xf] = pppppppplVar36;
      puVar9[0x10] = plVar35;
      uVar29 = extraout_x1;
      if (plVar39 != (long *)0x0) {
        plVar35 = plVar39 + 1;
        do {
          lVar21 = *plVar35;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar6) {
            *plVar35 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plVar39 + 0x10))(plVar39);
          std::__shared_weak_count::__release_weak();
          uVar29 = extraout_x1_00;
        }
      }
      if (local_80 != (long *)0x0) {
        plVar35 = local_80 + 1;
        do {
          lVar21 = *plVar35;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar6) {
            *plVar35 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
          std::__shared_weak_count::__release_weak();
          uVar29 = extraout_x1_01;
        }
      }
      lVar21 = DAT_7105332f20;
      uVar10 = (ulong)local_b8 & 0xffffffff;
      if ((uint)local_b8 != 0xffffff) {
        if ((uint)local_b8 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar23 = *(long *)(lVar21 + 0x40);
          if ((*(byte *)(lVar23 + uVar10 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar21,(int *)(lVar23 + uVar10 * 0x48),pppplVar15,(byte ****)pauVar18,
                           (long ****)pcVar19,param_6,param_7,param_8);
          }
          std::recursive_mutex::unlock();
          uVar29 = extraout_x1_02;
        }
        local_b8 = (long ********)CONCAT44(local_b8._4_4_,0xffffff);
      }
      FUN_71035597d0(puVar9 + 0xf,uVar29,pppplVar15,(byte ****)pauVar18,(long ****)pcVar19,param_6,
                     param_7,param_8);
    }
  }
  ppppppppplVar17 = (long *********)0x1;
  FUN_71024d1810((uint *)&local_88,*DAT_710532a860,1,(byte ****)pauVar18,(long ****)pcVar19,param_6,
                 param_7,param_8);
  lVar21 = DAT_7105332f20;
  uVar26 = (uint)local_88;
  uVar10 = (ulong)local_88 & 0xffffffff;
  if ((uint)local_88 == 0xffffff) {
LAB_71019276d4:
    plVar35 = (long *)puVar9[0x13];
    puVar9[0x12] = 0;
    puVar9[0x13] = 0;
    if (plVar35 != (long *)0x0) {
      plVar39 = plVar35 + 1;
      do {
        lVar21 = *plVar39;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar6) {
          *plVar39 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar35 = (long *)puVar9[0x23];
    puVar9[0x22] = 0;
    puVar9[0x23] = 0;
    if (plVar35 != (long *)0x0) {
      plVar39 = plVar35 + 1;
      do {
        lVar21 = *plVar39;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar6) {
          *plVar39 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar35 = (long *)puVar9[0x33];
    puVar9[0x32] = 0;
    puVar9[0x33] = 0;
    if (plVar35 != (long *)0x0) {
      plVar39 = plVar35 + 1;
      do {
        lVar21 = *plVar39;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar6) {
          *plVar39 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar35 = (long *)puVar9[0x43];
    puVar9[0x42] = 0;
    puVar9[0x43] = 0;
    if (plVar35 != (long *)0x0) {
      plVar39 = plVar35 + 1;
      do {
        lVar21 = *plVar39;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar6) {
          *plVar39 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar35 = (long *)puVar9[0x53];
    puVar9[0x52] = 0;
    puVar9[0x53] = 0;
    if (plVar35 != (long *)0x0) {
      plVar39 = plVar35 + 1;
      do {
        lVar21 = *plVar39;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar6) {
          *plVar39 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar35 = (long *)puVar9[99];
    puVar9[0x62] = 0;
    puVar9[99] = 0;
    if (plVar35 != (long *)0x0) {
      plVar39 = plVar35 + 1;
      do {
        lVar21 = *plVar39;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar6) {
          *plVar39 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    if ((uint)local_88 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      piVar38 = (int *)(*(long *)(lVar21 + 0x40) + uVar10 * 0x48);
      bVar4 = *(byte *)(piVar38 + 2);
      std::recursive_mutex::unlock();
      bVar6 = false;
      if (((bVar4 & 1) != 0) && (piVar38 != (int *)0x0)) {
        if (*piVar38 == 0xffffff) {
          iVar8 = -1;
        }
        else {
          iVar8 = FUN_7103543080((long)piVar38);
        }
        bVar6 = iVar8 == 3;
      }
    }
    else {
      bVar6 = false;
    }
    lVar21 = DAT_7105332f20;
    if (uVar26 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar23 = *(long *)(lVar21 + 0x40);
      if ((*(byte *)(lVar23 + uVar10 * 0x48 + 8) & 1) != 0) {
        FUN_710353f5a0(lVar21,(int *)(lVar23 + uVar10 * 0x48),(long ****)ppppppppplVar17,
                       (byte ****)pauVar18,(long ****)pcVar19,param_6,param_7,param_8);
      }
      std::recursive_mutex::unlock();
    }
    local_88 = (long ********)CONCAT44(local_88._4_4_,0xffffff);
    if (!bVar6) goto LAB_71019276d4;
    lVar21 = 0;
    do {
      FUN_71024d1810(local_90,*DAT_710532a860,1,(byte ****)pauVar18,(long ****)pcVar19,param_6,
                     param_7,param_8);
      pcVar16 = "model.numdlb";
      FUN_710353e1d0((uint *)&local_88,local_90,(byte *)"model.numdlb");
      uVar26 = (uint)local_88;
      uVar10 = (ulong)local_88 & 0xffffffff;
      if ((uint)local_88 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,(uint)local_88,(long *********)pcVar16,(byte ****)pauVar18,
                       (long ****)pcVar19,param_6,param_7,param_8);
      }
      if ((uVar26 == 0xffffff) ||
         (lVar23 = **(long **)(DAT_7105332f20 + 0x78),
         *(uint *)(*(long *)(lVar23 + 0x40) + 4) <= uVar26)) {
        local_88 = (long ********)0x0;
      }
      else {
        local_88 = (long ********)
                   (*(ulong *)(*(long *)(lVar23 + 0x60) + uVar10 * 0x20) & 0xffffffffff);
      }
      lVar23 = (*(long **)(DAT_7105332f20 + 0x78))[1];
      pauVar18 = (undefined1 (*) [16])&DAT_00000008;
      pcVar19 = FUN_7103542240;
      puVar12 = bsearch(&local_88,*(void **)(lVar23 + 0x20),
                        (ulong)*(uint *)(*(long *)(lVar23 + 8) + 8),8,FUN_7103542240);
      local_68[0] = 0xffffff;
      if (puVar12 != (undefined8 *)0x0) {
        uVar26 = (uint)((ulong)*puVar12 >> 0x20);
        uVar27 = uVar26 >> 8;
        if ((uVar27 != 0xffffff) &&
           (uVar25 = *(uint *)(*(long *)(lVar23 + 8) + 4), local_68[0] = uVar26 >> 8,
           uVar25 < uVar27 || uVar25 == local_68[0])) {
          local_68[0] = 0xffffff;
        }
      }
      ppppppppplVar17 = (long *********)&DAT_00000004;
      FUN_71035c2890(&local_88,local_68,(long *********)&DAT_00000004,(byte ****)pauVar18,
                     (long ****)pcVar19,param_6,param_7,param_8);
      plVar35 = local_80;
      pppppppplVar36 = local_88;
      local_88 = (long ********)0x0;
      local_80 = (long *)0x0;
      puVar34 = puVar9 + lVar21 * 0x10 + 0x12;
      *puVar34 = (ulong)pppppppplVar36;
      plVar39 = puVar9 + lVar21 * 0x10 + 0x13;
      plVar42 = (long *)*plVar39;
      *plVar39 = (long)plVar35;
      uVar29 = extraout_x1_09;
      if (plVar42 != (long *)0x0) {
        plVar35 = plVar42 + 1;
        do {
          lVar23 = *plVar35;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar6) {
            *plVar35 = lVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plVar42 + 0x10))(plVar42);
          std::__shared_weak_count::__release_weak();
          uVar29 = extraout_x1_11;
          if (local_80 != (long *)0x0) {
            plVar35 = local_80 + 1;
            do {
              lVar23 = *plVar35;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar6) {
                *plVar35 = lVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*local_80 + 0x10))(local_80);
              std::__shared_weak_count::__release_weak();
              uVar29 = extraout_x1_10;
            }
          }
        }
      }
      lVar23 = DAT_7105332f20;
      uVar10 = (ulong)local_90[0];
      if (local_90[0] != 0xffffff) {
        if (local_90[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar24 = *(long *)(lVar23 + 0x40);
          if ((*(byte *)(lVar24 + uVar10 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar23,(int *)(lVar24 + uVar10 * 0x48),(long ****)ppppppppplVar17,
                           (byte ****)pauVar18,(long ****)pcVar19,param_6,param_7,param_8);
          }
          std::recursive_mutex::unlock();
          uVar29 = extraout_x1_12;
        }
        local_90[0] = 0xffffff;
      }
      plVar35 = puVar9 + lVar21 * 0x10 + 0x15;
      plVar42 = (long *)*plVar35;
      puVar37 = puVar9 + lVar21 * 0x10 + 0x14;
      *puVar37 = 0;
      *plVar35 = 0;
      if (plVar42 != (long *)0x0) {
        plVar40 = plVar42 + 1;
        do {
          lVar23 = *plVar40;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar40,0x10);
          if (bVar6) {
            *plVar40 = lVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plVar42 + 0x10))(plVar42);
          std::__shared_weak_count::__release_weak();
          uVar29 = extraout_x1_13;
        }
      }
      plVar40 = puVar9 + lVar21 * 0x10 + 0x17;
      plVar43 = (long *)*plVar40;
      plVar42 = puVar9 + lVar21 * 0x10 + 0x16;
      *plVar42 = 0;
      *plVar40 = 0;
      if (plVar43 != (long *)0x0) {
        plVar41 = plVar43 + 1;
        do {
          lVar23 = *plVar41;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar41,0x10);
          if (bVar6) {
            *plVar41 = lVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plVar43 + 0x10))(plVar43);
          std::__shared_weak_count::__release_weak();
          uVar29 = extraout_x1_14;
        }
      }
      plVar41 = puVar9 + lVar21 * 0x10 + 0x19;
      plVar44 = (long *)*plVar41;
      plVar43 = puVar9 + lVar21 * 0x10 + 0x18;
      *plVar43 = 0;
      *plVar41 = 0;
      if (plVar44 != (long *)0x0) {
        plVar45 = plVar44 + 1;
        do {
          lVar23 = *plVar45;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar45,0x10);
          if (bVar6) {
            *plVar45 = lVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plVar44 + 0x10))(plVar44);
          std::__shared_weak_count::__release_weak();
          uVar29 = extraout_x1_15;
        }
      }
      puVar12 = puVar9 + lVar21 * 0x10 + 0x1b;
      plVar45 = (long *)*puVar12;
      plVar44 = puVar9 + lVar21 * 0x10 + 0x1a;
      *plVar44 = 0;
      *puVar12 = 0;
      if (plVar45 != (long *)0x0) {
        plVar1 = plVar45 + 1;
        do {
          lVar23 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plVar45 + 0x10))(plVar45);
          std::__shared_weak_count::__release_weak();
          uVar29 = extraout_x1_16;
        }
      }
      lVar23 = DAT_7105332f20;
      uVar26 = *(uint *)(*DAT_710532a860 + 0x3cc80);
      uVar10 = (ulong)uVar26;
      if (uVar26 != 0xffffff) {
        if (uVar26 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar24 = *(long *)(lVar23 + 0x40);
          if ((*(byte *)(lVar24 + uVar10 * 0x48 + 8) & 1) == 0) {
            std::recursive_mutex::unlock();
            FUN_7103540d50(lVar23,uVar26,ppppppppplVar17,(byte ****)pauVar18,(long ****)pcVar19,
                           param_6,param_7,param_8);
            uVar29 = extraout_x1_17;
          }
          else {
            FUN_71035432d0((int *)(lVar24 + uVar10 * 0x48));
            std::recursive_mutex::unlock();
            uVar29 = extraout_x1_18;
          }
        }
        lVar23 = DAT_7105332f20;
        if (uVar26 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          piVar38 = (int *)(*(long *)(lVar23 + 0x40) + uVar10 * 0x48);
          bVar4 = *(byte *)(piVar38 + 2);
          std::recursive_mutex::unlock();
          bVar6 = false;
          uVar29 = extraout_x1_19;
          if (((bVar4 & 1) != 0) && (piVar38 != (int *)0x0)) {
            iVar8 = -1;
            if (*piVar38 != 0xffffff) {
              iVar8 = FUN_7103543080((long)piVar38);
              uVar29 = extraout_x1_20;
            }
            bVar6 = iVar8 == 3;
          }
        }
        else {
          bVar6 = false;
        }
        lVar23 = DAT_7105332f20;
        if (uVar26 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar24 = *(long *)(lVar23 + 0x40);
          if ((*(byte *)(lVar24 + uVar10 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar23,(int *)(lVar24 + uVar10 * 0x48),(long ****)ppppppppplVar17,
                           (byte ****)pauVar18,(long ****)pcVar19,param_6,param_7,param_8);
          }
          std::recursive_mutex::unlock();
          uVar29 = extraout_x1_21;
        }
        if (bVar6) {
          puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                   (long ****)pcVar19,param_6,param_7,param_8);
          if (puVar13 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_68[0] = 0;
              local_88 = (long ********)&DAT_00000030;
              ppppppppplVar17 = &local_88;
              uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_68);
              if (((uVar10 & 1) != 0) &&
                 (puVar13 = (undefined8 *)
                            FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                           (long ****)pcVar19,param_6,param_7,param_8),
                 puVar13 != (undefined8 *)0x0)) goto LAB_7101927eb8;
            }
            puVar13 = (undefined8 *)0x0;
          }
LAB_7101927eb8:
          *puVar13 = &PTR_FUN_7105239200;
          puVar13[3] = 0;
          puVar13[4] = 0;
          *(undefined4 *)(puVar13 + 5) = 0x3f800000;
          puVar13[1] = 0;
          puVar13[2] = 0;
          puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                   (long ****)pcVar19,param_6,param_7,param_8);
          if (puVar14 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_68[0] = 0;
              local_88 = (long ********)&SUB_00000020;
              ppppppppplVar17 = &local_88;
              uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_68);
              if (((uVar10 & 1) != 0) &&
                 (puVar14 = (undefined8 *)
                            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                           (long ****)pcVar19,param_6,param_7,param_8),
                 puVar14 != (undefined8 *)0x0)) goto LAB_7101927f2c;
            }
            puVar14 = (undefined8 *)0x0;
          }
LAB_7101927f2c:
          *puVar14 = &DAT_7105239240;
          puVar14[1] = 0;
          puVar14[2] = 0;
          puVar14[3] = puVar13;
          *puVar37 = (ulong)puVar13;
          plVar45 = (long *)*plVar35;
          *plVar35 = (long)puVar14;
          if (plVar45 != (long *)0x0) {
            plVar1 = plVar45 + 1;
            do {
              lVar23 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              std::__shared_weak_count::__release_weak();
            }
          }
          puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,200,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                   (long ****)pcVar19,param_6,param_7,param_8);
          uVar29 = extraout_x1_22;
          if (puVar13 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_68[0] = 0;
              local_88 = (long ********)&DAT_000000c8;
              ppppppppplVar17 = &local_88;
              auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_68);
              uVar29 = auVar50._8_8_;
              if (((auVar50._0_8_ & 1) != 0) &&
                 (puVar13 = (undefined8 *)
                            FUN_710392e290(0x10,200,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                           (long ****)pcVar19,param_6,param_7,param_8),
                 uVar29 = extraout_x1_23, puVar13 != (undefined8 *)0x0)) goto LAB_7101927fd8;
            }
            puVar13 = (undefined8 *)0x0;
          }
LAB_7101927fd8:
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = &PTR_FUN_7104f76000;
          FUN_710367adf0(puVar13 + 3,uVar29,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                         (long ****)pcVar19,param_6,param_7,param_8);
          *plVar42 = (long)(puVar13 + 3);
          plVar45 = (long *)*plVar40;
          *plVar40 = (long)puVar13;
          if (plVar45 != (long *)0x0) {
            plVar1 = plVar45 + 1;
            do {
              lVar23 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              std::__shared_weak_count::__release_weak();
            }
          }
          puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                   (long ****)pcVar19,param_6,param_7,param_8);
          uVar29 = extraout_x1_24;
          if (puVar13 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_68[0] = 0;
              local_88 = (long ********)&DAT_000000a8;
              ppppppppplVar17 = &local_88;
              auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_68);
              uVar29 = auVar50._8_8_;
              if (((auVar50._0_8_ & 1) != 0) &&
                 (puVar13 = (undefined8 *)
                            FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                           (long ****)pcVar19,param_6,param_7,param_8),
                 uVar29 = extraout_x1_25, puVar13 != (undefined8 *)0x0)) goto LAB_7101928090;
            }
            puVar13 = (undefined8 *)0x0;
          }
LAB_7101928090:
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = &PTR_FUN_71050c0538;
          FUN_7103680c00(puVar13 + 3,uVar29,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                         (long ****)pcVar19,param_6,param_7,param_8);
          *plVar43 = (long)(puVar13 + 3);
          plVar45 = (long *)*plVar41;
          *plVar41 = (long)puVar13;
          if (plVar45 != (long *)0x0) {
            plVar1 = plVar45 + 1;
            do {
              lVar23 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              std::__shared_weak_count::__release_weak();
            }
          }
          puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                   (long ****)pcVar19,param_6,param_7,param_8);
          uVar29 = extraout_x1_26;
          if (puVar13 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_68[0] = 0;
              local_88 = (long ********)&DAT_000000a8;
              ppppppppplVar17 = &local_88;
              auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_68);
              uVar29 = auVar50._8_8_;
              if (((auVar50._0_8_ & 1) != 0) &&
                 (puVar13 = (undefined8 *)
                            FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                           (long ****)pcVar19,param_6,param_7,param_8),
                 uVar29 = extraout_x1_27, puVar13 != (undefined8 *)0x0)) goto LAB_710192814c;
            }
            puVar13 = (undefined8 *)0x0;
          }
LAB_710192814c:
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = &PTR_FUN_71050c0570;
          FUN_710367c690(puVar13 + 3,uVar29,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                         (long ****)pcVar19,param_6,param_7,param_8);
          *plVar44 = (long)(puVar13 + 3);
          plVar45 = (long *)*puVar12;
          *puVar12 = puVar13;
          if (plVar45 != (long *)0x0) {
            plVar1 = plVar45 + 1;
            do {
              lVar23 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
              std::__shared_weak_count::__release_weak();
            }
          }
          local_a0 = *puVar34;
          local_98 = (long *)*plVar39;
          if (local_98 != (long *)0x0) {
            plVar39 = local_98 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar6) {
                *plVar39 = *plVar39 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar23 = DAT_7105332f20;
          uVar26 = *(uint *)(*DAT_710532a860 + 0x3cc80);
          local_a8[0] = uVar26;
          if ((uVar26 != 0xffffff) && (uVar26 < *(uint *)(DAT_7105332f20 + 0x48))) {
            std::recursive_mutex::lock();
            lVar24 = *(long *)(lVar23 + 0x40);
            if ((*(byte *)(lVar24 + (ulong)uVar26 * 0x48 + 8) & 1) == 0) {
              std::recursive_mutex::unlock();
              FUN_7103540d50(lVar23,uVar26,ppppppppplVar17,(byte ****)pauVar18,(long ****)pcVar19,
                             param_6,param_7,param_8);
            }
            else {
              FUN_71035432d0((int *)(lVar24 + (ulong)uVar26 * 0x48));
              std::recursive_mutex::unlock();
            }
          }
          local_b8 = (long ********)*puVar37;
          local_b0 = (long *)*plVar35;
          if (local_b0 != (long *)0x0) {
            plVar39 = local_b0 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar6) {
                *plVar39 = *plVar39 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          local_c8 = *plVar42;
          local_c0 = (long *)*plVar40;
          if (local_c0 != (long *)0x0) {
            plVar39 = local_c0 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar6) {
                *plVar39 = *plVar39 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          local_d8 = *plVar43;
          local_d0 = (long *)*plVar41;
          if (local_d0 != (long *)0x0) {
            plVar39 = local_d0 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar6) {
                *plVar39 = *plVar39 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          local_e8 = *plVar44;
          plVar39 = (long *)*puVar12;
          plStack_e0 = plVar39;
          if (plVar39 == (long *)0x0) {
            ppppppppplVar17 = &local_b8;
            pauVar18 = (undefined1 (*) [16])&local_c8;
            pcVar19 = (code *)&local_d8;
            param_6 = (undefined1 (*) [16])&local_e8;
            FUN_71024cc230((long *)&local_a0,local_a8,ppppppppplVar17,(byte ****)pauVar18,
                           (long ****)pcVar19,(long *)param_6,param_7,param_8);
          }
          else {
            plVar45 = plVar39 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar45,0x10);
              if (bVar6) {
                *plVar45 = *plVar45 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            ppppppppplVar17 = &local_b8;
            pauVar18 = (undefined1 (*) [16])&local_c8;
            pcVar19 = (code *)&local_d8;
            param_6 = (undefined1 (*) [16])&local_e8;
            FUN_71024cc230((long *)&local_a0,local_a8,ppppppppplVar17,(byte ****)pauVar18,
                           (long ****)pcVar19,(long *)param_6,param_7,param_8);
            do {
              lVar23 = *plVar45;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar45,0x10);
              if (bVar6) {
                *plVar45 = lVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plVar39 + 0x10))(plVar39);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_d0 != (long *)0x0) {
            plVar39 = local_d0 + 1;
            do {
              lVar23 = *plVar39;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar6) {
                *plVar39 = lVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*local_d0 + 0x10))(local_d0);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_c0 != (long *)0x0) {
            plVar39 = local_c0 + 1;
            do {
              lVar23 = *plVar39;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar6) {
                *plVar39 = lVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*local_c0 + 0x10))(local_c0);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_b0 != (long *)0x0) {
            plVar39 = local_b0 + 1;
            do {
              lVar23 = *plVar39;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar6) {
                *plVar39 = lVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*local_b0 + 0x10))(local_b0);
              std::__shared_weak_count::__release_weak();
            }
          }
          lVar23 = DAT_7105332f20;
          uVar10 = (ulong)local_a8[0];
          if (local_a8[0] != 0xffffff) {
            if (local_a8[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
              std::recursive_mutex::lock();
              lVar24 = *(long *)(lVar23 + 0x40);
              if ((*(byte *)(lVar24 + uVar10 * 0x48 + 8) & 1) != 0) {
                FUN_710353f5a0(lVar23,(int *)(lVar24 + uVar10 * 0x48),(long ****)ppppppppplVar17,
                               (byte ****)pauVar18,(long ****)pcVar19,param_6,param_7,param_8);
              }
              std::recursive_mutex::unlock();
            }
            local_a8[0] = 0xffffff;
          }
          if (local_98 != (long *)0x0) {
            plVar39 = local_98 + 1;
            do {
              lVar23 = *plVar39;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar6) {
                *plVar39 = lVar23 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*local_98 + 0x10))(local_98);
              std::__shared_weak_count::__release_weak();
            }
          }
          auVar50 = (**(code **)(*(long *)*puVar37 + 0x28))();
          uVar29 = auVar50._8_8_;
          if ((auVar50._0_8_ & 1) != 0) {
            *puVar37 = 0;
            plVar39 = (long *)*plVar35;
            *plVar35 = 0;
            if (plVar39 == (long *)0x0) {
              *puVar37 = 0;
              puVar9[lVar21 * 0x10 + 0x15] = 0;
            }
            else {
              plVar45 = plVar39 + 1;
              do {
                lVar23 = *plVar45;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar45,0x10);
                if (bVar6) {
                  *plVar45 = lVar23 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar23 == 0) {
                (**(code **)(*plVar39 + 0x10))(plVar39);
                std::__shared_weak_count::__release_weak();
                uVar29 = extraout_x1_28;
              }
              plVar35 = (long *)*plVar35;
              *puVar37 = 0;
              puVar9[lVar21 * 0x10 + 0x15] = 0;
              if (plVar35 != (long *)0x0) {
                plVar39 = plVar35 + 1;
                do {
                  lVar23 = *plVar39;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
                  if (bVar6) {
                    *plVar39 = lVar23 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar23 == 0) {
                  (**(code **)(*plVar35 + 0x10))(plVar35);
                  std::__shared_weak_count::__release_weak();
                  uVar29 = extraout_x1_29;
                }
              }
            }
          }
          if (*(char *)(*plVar42 + 0xa8) == '\0') {
            *plVar42 = 0;
            plVar35 = (long *)*plVar40;
            *plVar40 = 0;
            if (plVar35 == (long *)0x0) {
              *plVar42 = 0;
              puVar9[lVar21 * 0x10 + 0x17] = 0;
            }
            else {
              plVar39 = plVar35 + 1;
              do {
                lVar23 = *plVar39;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
                if (bVar6) {
                  *plVar39 = lVar23 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar23 == 0) {
                (**(code **)(*plVar35 + 0x10))(plVar35);
                std::__shared_weak_count::__release_weak();
                uVar29 = extraout_x1_03;
              }
              plVar40 = (long *)*plVar40;
              *plVar42 = 0;
              puVar9[lVar21 * 0x10 + 0x17] = 0;
              if (plVar40 != (long *)0x0) {
                plVar35 = plVar40 + 1;
                do {
                  lVar23 = *plVar35;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                  if (bVar6) {
                    *plVar35 = lVar23 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar23 == 0) {
                  (**(code **)(*plVar40 + 0x10))(plVar40);
                  std::__shared_weak_count::__release_weak();
                  uVar29 = extraout_x1_04;
                }
              }
            }
          }
          if (*(char *)(*plVar43 + 0x88) == '\0') {
            *plVar43 = 0;
            plVar35 = (long *)*plVar41;
            *plVar41 = 0;
            if (plVar35 == (long *)0x0) {
              *plVar43 = 0;
              puVar9[lVar21 * 0x10 + 0x19] = 0;
            }
            else {
              plVar39 = plVar35 + 1;
              do {
                lVar23 = *plVar39;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
                if (bVar6) {
                  *plVar39 = lVar23 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar23 == 0) {
                (**(code **)(*plVar35 + 0x10))(plVar35);
                std::__shared_weak_count::__release_weak();
                uVar29 = extraout_x1_05;
              }
              plVar41 = (long *)*plVar41;
              *plVar43 = 0;
              puVar9[lVar21 * 0x10 + 0x19] = 0;
              if (plVar41 != (long *)0x0) {
                plVar35 = plVar41 + 1;
                do {
                  lVar23 = *plVar35;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                  if (bVar6) {
                    *plVar35 = lVar23 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar23 == 0) {
                  (**(code **)(*plVar41 + 0x10))(plVar41);
                  std::__shared_weak_count::__release_weak();
                  uVar29 = extraout_x1_06;
                }
              }
            }
          }
          if (*(char *)(*plVar44 + 0x88) == '\0') {
            *plVar44 = 0;
            plVar35 = (long *)*puVar12;
            *puVar12 = 0;
            if (plVar35 == (long *)0x0) {
              *plVar44 = 0;
              puVar9[lVar21 * 0x10 + 0x1b] = 0;
            }
            else {
              plVar39 = plVar35 + 1;
              do {
                lVar23 = *plVar39;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
                if (bVar6) {
                  *plVar39 = lVar23 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar23 == 0) {
                (**(code **)(*plVar35 + 0x10))(plVar35);
                std::__shared_weak_count::__release_weak();
                uVar29 = extraout_x1_07;
              }
              plVar35 = (long *)*puVar12;
              *plVar44 = 0;
              puVar9[lVar21 * 0x10 + 0x1b] = 0;
              if (plVar35 != (long *)0x0) {
                plVar39 = plVar35 + 1;
                do {
                  lVar23 = *plVar39;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
                  if (bVar6) {
                    *plVar39 = lVar23 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar23 == 0) {
                  (**(code **)(*plVar35 + 0x10))(plVar35);
                  std::__shared_weak_count::__release_weak();
                  uVar29 = extraout_x1_08;
                }
              }
            }
          }
        }
      }
      FUN_71035597d0(puVar34,uVar29,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                     (long ****)pcVar19,param_6,param_7,param_8);
      lVar21 = lVar21 + 1;
    } while (lVar21 != 6);
  }
  *(undefined8 **)(param_1 + 0x228) = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x178,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                          (long ****)pcVar19,param_6,param_7,param_8);
  uVar29 = extraout_x1_30;
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
      local_210 = (long ********)&DAT_00000178;
      ppppppppplVar17 = &local_210;
      auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      uVar29 = auVar50._8_8_;
      if (((auVar50._0_8_ & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x178,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                  (long ****)pcVar19,param_6,param_7,param_8),
         uVar29 = extraout_x1_31, puVar9 != (undefined8 *)0x0)) goto LAB_71019285f8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71019285f8:
  FUN_71024e7ae0(puVar9,uVar29,ppppppppplVar17,(byte ****)pauVar18,pcVar19,(long *)param_6,param_7,
                 param_8);
  *(undefined8 **)(param_1 + 0x230) = puVar9;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x3210,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                          (long ****)pcVar19,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
      local_210 = (long ********)0x3210;
      ppppppppplVar17 = &local_210;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar10 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x3210,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                  (long ****)pcVar19,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101928660;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101928660:
  *puVar9 = &PTR_FUN_71050c0898;
  pppplVar15 = (long ****)0x3205;
  memset(puVar9 + 1,0,0x3205);
  *(undefined8 **)(param_1 + 0x248) = puVar9;
  pppppppplVar36 = *param_3;
  if (pppppppplVar36 != param_3[1]) {
    do {
      local_210 = (long ********)*pppppppplVar36;
      local_208 = 0;
      uVar10 = 0;
      do {
        cVar5 = *(char *)((long)pppppppplVar36 + uVar10 + 0x10);
        uVar22 = uVar10;
        if (cVar5 == '\0') break;
        auStack_1ff[uVar10 - 1] = cVar5;
        cVar5 = *(char *)((long)pppppppplVar36 + uVar10 + 0x11);
        if (cVar5 == '\0') {
          uVar22 = uVar10 + 1;
          break;
        }
        auStack_1ff[uVar10] = cVar5;
        cVar5 = *(char *)((long)pppppppplVar36 + uVar10 + 0x12);
        if (cVar5 == '\0') {
          uVar22 = uVar10 + 2;
          break;
        }
        uVar22 = uVar10 + 3;
        auStack_1ff[uVar10 + 1] = cVar5;
        uVar10 = uVar22;
      } while ((uint)uVar22 < 0x3f);
      auStack_1ff[(uVar22 & 0xffffffff) - 1] = 0;
      local_204 = (undefined4)uVar22;
      pcVar16 = auStack_1ff;
      cVar5 = local_200;
      while (cVar5 != '\0') {
        cVar5 = *pcVar16;
        pcVar16 = pcVar16 + 1;
      }
      FUN_710250b330(*(long *)(param_1 + 0x248),local_210,pppplVar15,(byte ****)pauVar18,
                     (long ****)pcVar19,param_6,param_7,param_8);
      pppppppplVar36 = pppppppplVar36 + 0x25;
    } while (pppppppplVar36 != param_3[1]);
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x3210,pppplVar15,(byte ****)pauVar18,(long ****)pcVar19,param_6,
                          param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
      local_210 = (long ********)0x3210;
      ppppppppplVar17 = &local_210;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar10 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x3210,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                  (long ****)pcVar19,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_710192878c;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710192878c:
  *puVar9 = &PTR_FUN_71050c0858;
  ppppppppplVar17 = (long *********)0x3204;
  memset(puVar9 + 1,0,0x3204);
  *(undefined8 **)(param_1 + 0x250) = puVar9;
  puVar9 = *(undefined8 **)*param_4;
  if (puVar9 != *(undefined8 **)(*param_4 + 8)) {
    do {
      pppppppplVar36 = (long ********)*puVar9;
      local_208 = 0;
      uVar10 = 0;
      do {
        cVar5 = *(char *)((long)puVar9 + uVar10 + 0x10);
        uVar22 = uVar10;
        if (cVar5 == '\0') break;
        auStack_1ff[uVar10 - 1] = cVar5;
        cVar5 = *(char *)((long)puVar9 + uVar10 + 0x11);
        if (cVar5 == '\0') {
          uVar22 = uVar10 + 1;
          break;
        }
        auStack_1ff[uVar10] = cVar5;
        cVar5 = *(char *)((long)puVar9 + uVar10 + 0x12);
        if (cVar5 == '\0') {
          uVar22 = uVar10 + 2;
          break;
        }
        uVar22 = uVar10 + 3;
        auStack_1ff[uVar10 + 1] = cVar5;
        uVar10 = uVar22;
      } while ((uint)uVar22 < 0x3f);
      auStack_1ff[(uVar22 & 0xffffffff) - 1] = 0;
      local_204 = (undefined4)uVar22;
      pcVar16 = auStack_1ff;
      cVar5 = local_200;
      while (cVar5 != '\0') {
        cVar5 = *pcVar16;
        pcVar16 = pcVar16 + 1;
      }
      lVar21 = *(long *)(param_1 + 0x250);
      local_210 = pppppppplVar36;
      puVar12 = (undefined8 *)
                FUN_710392e290(0x10,0xd0,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                               (long ****)pcVar19,param_6,param_7,param_8);
      if (puVar12 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_a0 = local_a0 & 0xffffffff00000000;
          local_88 = (long ********)&DAT_000000d0;
          ppppppppplVar17 = &local_88;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
          if (((uVar10 & 1) != 0) &&
             (puVar12 = (undefined8 *)
                        FUN_710392e290(0x10,0xd0,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                       (long ****)pcVar19,param_6,param_7,param_8),
             puVar12 != (undefined8 *)0x0)) goto LAB_71019288b4;
        }
        puVar12 = (undefined8 *)0x0;
      }
LAB_71019288b4:
      *puVar12 = &PTR_FUN_71050c0838;
      puVar12[1] = pppppppplVar36;
      puVar9 = puVar9 + 0x1a;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0xffffffff00000000;
      puVar12[0x13] = 0;
      *(undefined4 *)(puVar12 + 0x18) = 0;
      *(undefined4 *)((long)puVar12 + 0xc4) = 0x3f800000;
      *(undefined2 *)(puVar12 + 0x19) = 0x100;
      *(undefined2 *)(puVar12 + 0x12) = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[0x16] = 0;
      puVar12[0x17] = 0;
      puVar12[0x14] = 0;
      puVar12[0x15] = 0;
      puVar12[0x10] = 0;
      puVar12[0x11] = 0;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      *(undefined8 **)(lVar21 + (ulong)*(uint *)(lVar21 + 0x3208) * 8 + 8) = puVar12;
      *(int *)(lVar21 + 0x3208) = *(int *)(lVar21 + 0x3208) + 1;
    } while (puVar9 != *(undefined8 **)(*param_4 + 8));
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x418,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                          (long ****)pcVar19,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
      local_210 = (long ********)0x418;
      ppppppppplVar17 = &local_210;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar10 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x418,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                  (long ****)pcVar19,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7101928978;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101928978:
  ppppppppplVar17 = (long *********)0x408;
  *puVar9 = &PTR_FUN_71050c0720;
  memset(puVar9 + 1,0,0x408);
  *(undefined1 *)(puVar9 + 0x82) = 1;
  *(undefined8 **)(param_1 + 600) = puVar9;
  puVar9 = *(undefined8 **)*param_5;
  if (puVar9 != *(undefined8 **)(*param_5 + 8)) {
    do {
      local_210 = (long ********)*puVar9;
      local_208 = 0;
      uVar10 = 0;
      do {
        cVar5 = *(char *)((long)puVar9 + uVar10 + 0x10);
        uVar22 = uVar10;
        if (cVar5 == '\0') break;
        auStack_1ff[uVar10 - 1] = cVar5;
        cVar5 = *(char *)((long)puVar9 + uVar10 + 0x11);
        if (cVar5 == '\0') {
          uVar22 = uVar10 + 1;
          break;
        }
        auStack_1ff[uVar10] = cVar5;
        cVar5 = *(char *)((long)puVar9 + uVar10 + 0x12);
        if (cVar5 == '\0') {
          uVar22 = uVar10 + 2;
          break;
        }
        uVar22 = uVar10 + 3;
        auStack_1ff[uVar10 + 1] = cVar5;
        uVar10 = uVar22;
      } while ((uint)uVar22 < 0x3f);
      auStack_1ff[(uVar22 & 0xffffffff) - 1] = 0;
      local_204 = (undefined4)uVar22;
      pcVar16 = auStack_1ff;
      cVar5 = local_200;
      while (cVar5 != '\0') {
        cVar5 = *pcVar16;
        pcVar16 = pcVar16 + 1;
      }
      FUN_71024eb610(*(long *)(param_1 + 600),(ulong)local_210,ppppppppplVar17,(byte ****)pauVar18,
                     (long ****)pcVar19,(long *)param_6,param_7,param_8);
      puVar9 = puVar9 + 0x19;
    } while (puVar9 != *(undefined8 **)(*param_5 + 8));
  }
  lVar21 = *(long *)(param_1 + 0x220);
  *(undefined4 *)(lVar21 + 0x140) = 1;
  if (*(char *)(param_2 + 0x39) == '\0') {
    fVar47 = (float)param_2[6];
    *(float *)(lVar21 + 8) = fVar47 * 0.017453292;
    fVar47 = sinf(fVar47 * 0.017453292 * 0.5);
    fVar46 = *(float *)(lVar21 + 8) * 0.5;
    fVar47 = 0.35429105 / fVar47;
  }
  else {
    *(undefined4 *)(lVar21 + 8) = 0x3db2b8c2;
    fVar47 = 8.12233;
    fVar46 = 0.04363323;
  }
  *(float *)(lVar21 + 0x170) = fVar47;
  fVar47 = (float)NEON_ucvtf(*param_2);
  *(float *)(lVar21 + 0x148) = (float)param_2[2] * fVar47;
  uVar48 = param_2[1];
  fVar49 = (float)param_2[2];
  *(undefined4 *)(lVar21 + 0x158) = 0;
  fVar47 = (float)NEON_ucvtf(uVar48);
  *(float *)(lVar21 + 0x14c) = fVar49 * fVar47;
  uVar48 = param_2[3];
  *(undefined4 *)(lVar21 + 0x15c) = uVar48;
  *(undefined4 *)(lVar21 + 0x160) = param_2[5];
  *(undefined4 *)(lVar21 + 0x16c) = uVar48;
  *(undefined4 *)(lVar21 + 0x174) = 0;
  *(undefined4 *)(lVar21 + 0x180) = param_2[7];
  *(undefined4 *)(lVar21 + 0x184) = 0;
  fVar47 = (float)param_2[9];
  *(undefined4 *)(lVar21 + 0x18c) = 0x3f800000;
  *(float *)(lVar21 + 0x188) = fVar47;
  fVar49 = (float)param_2[0xb];
  *(float *)(lVar21 + 400) = fVar49;
  *(undefined4 *)(lVar21 + 0x194) = 0;
  *(float *)(lVar21 + 0x198) = fVar49 * 0.0 + fVar47;
  fVar47 = tanf(fVar46);
  fVar47 = fVar47 + fVar47;
  *(float *)(lVar21 + 0x1b0) = fVar47;
  *(float *)(lVar21 + 0x1b4) = fVar47 * *(float *)(lVar21 + 0xc);
  if ((float)param_2[0xd] == 0.0) {
    *(undefined4 *)(lVar21 + 0x150) = *(undefined4 *)(lVar21 + 0x148);
  }
  else {
    *(float *)(lVar21 + 0x150) = (float)param_2[0xd] * (float)param_2[2];
  }
  if ((float)param_2[0xe] == 0.0) {
    *(undefined4 *)(lVar21 + 0x154) = *(undefined4 *)(lVar21 + 0x14c);
    cVar5 = *(char *)(param_2 + 0x39);
  }
  else {
    *(float *)(lVar21 + 0x154) = (float)param_2[0xe] * (float)param_2[2];
    cVar5 = *(char *)(param_2 + 0x39);
  }
  if (cVar5 != '\0') {
    fVar47 = cosf(*(float *)(lVar21 + 0x198) * 0.017453292);
    *(float *)(lVar21 + 0x14c) = *(float *)(lVar21 + 0x14c) / fVar47;
    fVar47 = cosf(*(float *)(lVar21 + 0x198) * 0.017453292);
    *(float *)(lVar21 + 0x154) = *(float *)(lVar21 + 0x154) / fVar47;
    fVar47 = *(float *)(lVar21 + 0x1b0);
  }
  fVar46 = (*(float *)(lVar21 + 0x14c) / fVar47) / *(float *)(lVar21 + 0x170);
  *(ulong *)(lVar21 + 0xf8) = (ulong)(uint)(*(float *)(lVar21 + 0x14c) * 0.5);
  *(ulong *)(lVar21 + 0xf0) = (ulong)(uint)(*(float *)(lVar21 + 0x148) * 0.5);
  fVar47 = *(float *)(lVar21 + 0x160);
  if (fVar46 < *(float *)(lVar21 + 0x160)) {
    *(float *)(lVar21 + 0x160) = fVar46;
    fVar47 = fVar46;
  }
  fVar46 = (*(float *)(lVar21 + 0x148) / *(float *)(lVar21 + 0x1b4)) / *(float *)(lVar21 + 0x170);
  if (fVar46 < fVar47) {
    *(float *)(lVar21 + 0x160) = fVar46;
  }
  *(undefined8 *)(lVar21 + 0x1e8) = 0x3c23d70a3c23d70a;
  *(undefined4 *)(lVar21 + 0x960) = 0;
  iVar8 = *(int *)(lVar21 + 0x178);
  *(undefined1 *)(lVar21 + 0x96f) = 0;
  iVar3 = *(int *)(lVar21 + (long)*(int *)(lVar21 + 0x158) * 4 + 0x180);
  if ((iVar8 <= iVar3) && (-iVar3 <= iVar8)) {
    *(int *)(lVar21 + 0x174) = iVar8;
  }
  pppppppplVar36 = *param_3;
  if (pppppppplVar36 != param_3[1]) {
    uVar26 = 0;
    do {
      pauVar18 = *(undefined1 (**) [16])(param_1 + 0x248);
      uVar25 = *(uint *)(param_1 + 0x238);
      uVar27 = 0xd;
      if (uVar25 != 1) {
        uVar27 = 0xffff;
      }
      uVar2 = 0xb;
      if (uVar25 != 0) {
        uVar2 = uVar27;
      }
      uVar27 = uVar26;
      if (0x3ff < uVar26) {
        uVar27 = uVar26 - 0x400;
        uVar25 = uVar2;
      }
      if (uVar28 < 3) {
        if (0x13 < uVar25) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (0x3ff < uVar27) goto LAB_7101928d3c;
        ppppppppplVar17 =
             (long *********)
             (ulong)((*(uint *)(*(long *)*puVar20 + (ulong)uVar28 * 0x3d700 + (ulong)uVar25 * 0x84 +
                                (ulong)(uVar27 >> 5) * 4 + 0x3cc38) & 1 << (ulong)(uVar27 & 0x1f))
                    != 0);
      }
      else {
LAB_7101928d3c:
        ppppppppplVar17 = (long *********)0x0;
      }
      FUN_71025081a0(*(long *)(*pauVar18 + (ulong)uVar26 * 8 + 8),(long)pppppppplVar36,
                     (long ****)ppppppppplVar17,pauVar18,(undefined1 (*) [16])pcVar19,param_6,
                     param_7,param_8);
      pppppppplVar36 = pppppppplVar36 + 0x25;
      uVar26 = uVar26 + 1;
    } while (pppppppplVar36 != param_3[1]);
  }
  lVar21 = *(long *)*param_4;
  if (lVar21 != *(long *)(*param_4 + 8)) {
    uVar28 = 0;
    do {
      fVar47 = *(float *)(lVar21 + 0x68);
      fVar46 = *(float *)(lVar21 + 0x70);
      lVar23 = *(long *)(*(long *)(param_1 + 0x250) + (ulong)uVar28 * 8 + 8);
      lVar24 = *(long *)(param_1 + 0x248);
      *(ulong *)(lVar23 + 0x48) = (ulong)(uint)(*(float *)(lVar21 + 0x6c) / -10.0);
      *(ulong *)(lVar23 + 0x40) = CONCAT44(fVar46 / 10.0,fVar47 / 10.0);
      fVar47 = *(float *)(lVar21 + 0x74);
      fVar46 = *(float *)(lVar21 + 0x7c);
      *(ulong *)(lVar23 + 0x58) = (ulong)(uint)(*(float *)(lVar21 + 0x78) / -10.0);
      *(ulong *)(lVar23 + 0x50) = CONCAT44(fVar46 / 10.0,fVar47 / 10.0);
      *(undefined4 *)(lVar23 + 0x20) = *(undefined4 *)(lVar21 + 0x50);
      *(undefined4 *)(lVar23 + 0x24) = *(undefined4 *)(lVar21 + 0xa0);
      *(undefined4 *)(lVar23 + 0xa8) = *(undefined4 *)(lVar21 + 0x80);
      *(undefined4 *)(lVar23 + 0xac) = *(undefined4 *)(lVar21 + 0x84);
      *(undefined4 *)(lVar23 + 0xb0) = *(undefined4 *)(lVar21 + 0x88);
      *(undefined4 *)(lVar23 + 0xb4) = *(undefined4 *)(lVar21 + 0x8c);
      *(undefined4 *)(lVar23 + 0xb8) = *(undefined4 *)(lVar21 + 0x90);
      *(undefined4 *)(lVar23 + 0xbc) = *(undefined4 *)(lVar21 + 0x94);
      *(undefined4 *)(lVar23 + 0xc0) = *(undefined4 *)(lVar21 + 0x98);
      *(undefined1 *)(lVar23 + 200) = *(undefined1 *)(lVar21 + 0x9c);
      if (*(uint *)(lVar24 + 0x3208) != 0) {
        uVar26 = 0;
        do {
          lVar33 = *(long *)(lVar24 + (ulong)uVar26 * 8 + 8);
          if (((*(ulong *)(lVar33 + 0x70) ^ *(ulong *)(lVar21 + 0x58)) & 0xffffffffff) == 0)
          goto LAB_7101928e70;
          uVar26 = uVar26 + 1;
        } while (uVar26 < *(uint *)(lVar24 + 0x3208));
      }
      lVar33 = 0;
LAB_7101928e70:
      *(long *)(lVar23 + 0x28) = lVar33;
      if (*(uint *)(lVar24 + 0x3208) != 0) {
        uVar26 = 0;
        do {
          lVar33 = *(long *)(lVar24 + (ulong)uVar26 * 8 + 8);
          if (((*(ulong *)(lVar33 + 0x70) ^ *(ulong *)(lVar21 + 0x60)) & 0xffffffffff) == 0)
          goto LAB_7101928eac;
          uVar26 = uVar26 + 1;
        } while (uVar26 < *(uint *)(lVar24 + 0x3208));
      }
      lVar33 = 0;
LAB_7101928eac:
      *(long *)(lVar23 + 0x30) = lVar33;
      if ((*(ulong *)(lVar21 + 0xa8) & 0xffffffffff) != 0) {
        if (*(uint *)(lVar24 + 0x3208) != 0) {
          uVar26 = 0;
          do {
            lVar33 = *(long *)(lVar24 + (ulong)uVar26 * 8 + 8);
            if (((*(ulong *)(lVar33 + 0x70) ^ *(ulong *)(lVar21 + 0xa8)) & 0xffffffffff) == 0) {
              *(long *)(lVar23 + 0x60) = lVar33;
              if (lVar33 != 0) {
                *(undefined1 *)(lVar33 + 0x25c) = 1;
              }
              goto LAB_7101928f00;
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(uint *)(lVar24 + 0x3208));
        }
        *(undefined8 *)(lVar23 + 0x60) = 0;
      }
LAB_7101928f00:
      if ((*(ulong *)(lVar21 + 0xb0) & 0xffffffffff) != 0) {
        if (*(uint *)(lVar24 + 0x3208) != 0) {
          uVar26 = 0;
          do {
            lVar33 = *(long *)(lVar24 + (ulong)uVar26 * 8 + 8);
            if (((*(ulong *)(lVar33 + 0x70) ^ *(ulong *)(lVar21 + 0xb0)) & 0xffffffffff) == 0) {
              *(long *)(lVar23 + 0x68) = lVar33;
              if (lVar33 != 0) {
                *(undefined1 *)(lVar33 + 0x25c) = 1;
              }
              goto LAB_7101928f50;
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(uint *)(lVar24 + 0x3208));
        }
        *(undefined8 *)(lVar23 + 0x68) = 0;
      }
LAB_7101928f50:
      if ((*(ulong *)(lVar21 + 0xb8) & 0xffffffffff) != 0) {
        if (*(uint *)(lVar24 + 0x3208) != 0) {
          uVar26 = 0;
          do {
            lVar33 = *(long *)(lVar24 + (ulong)uVar26 * 8 + 8);
            if (((*(ulong *)(lVar33 + 0x70) ^ *(ulong *)(lVar21 + 0xb8)) & 0xffffffffff) == 0) {
              *(long *)(lVar23 + 0x70) = lVar33;
              if (lVar33 != 0) {
                *(undefined1 *)(lVar33 + 0x25c) = 1;
              }
              goto LAB_7101928fa0;
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(uint *)(lVar24 + 0x3208));
        }
        *(undefined8 *)(lVar23 + 0x70) = 0;
      }
LAB_7101928fa0:
      if ((*(ulong *)(lVar21 + 0xc0) & 0xffffffffff) != 0) {
        if (*(uint *)(lVar24 + 0x3208) != 0) {
          uVar26 = 0;
          do {
            lVar33 = *(long *)(lVar24 + (ulong)uVar26 * 8 + 8);
            if (((*(ulong *)(lVar33 + 0x70) ^ *(ulong *)(lVar21 + 0xc0)) & 0xffffffffff) == 0) {
              *(long *)(lVar23 + 0x78) = lVar33;
              if (lVar33 != 0) {
                *(undefined1 *)(lVar33 + 0x25c) = 1;
              }
              goto LAB_7101928ff0;
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(uint *)(lVar24 + 0x3208));
        }
        *(undefined8 *)(lVar23 + 0x78) = 0;
      }
LAB_7101928ff0:
      if ((*(ulong *)(lVar21 + 200) & 0xffffffffff) != 0) {
        if (*(uint *)(lVar24 + 0x3208) != 0) {
          uVar26 = 0;
          do {
            lVar33 = *(long *)(lVar24 + (ulong)uVar26 * 8 + 8);
            if (((*(ulong *)(lVar33 + 0x70) ^ *(ulong *)(lVar21 + 200)) & 0xffffffffff) == 0) {
              *(long *)(lVar23 + 0x80) = lVar33;
              if (lVar33 != 0) {
                *(undefined1 *)(lVar33 + 0x25c) = 1;
              }
              goto LAB_7101929040;
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(uint *)(lVar24 + 0x3208));
        }
        *(undefined8 *)(lVar23 + 0x80) = 0;
      }
LAB_7101929040:
      uVar27 = *(uint *)(lVar21 + 0xa4);
      lVar21 = lVar21 + 0xd0;
      *(byte *)(lVar23 + 0x8d) = (byte)(uVar27 >> 8) & 1;
      uVar26 = uVar27 & 0xff;
      *(byte *)(lVar23 + 0x88) = (byte)uVar27 & 1;
      *(byte *)(lVar23 + 0x8e) = (byte)(uVar27 >> 9) & 1;
      *(byte *)(lVar23 + 0x89) = (byte)(uVar26 >> 1) & 1;
      *(byte *)(lVar23 + 0x8f) = (byte)(uVar27 >> 10) & 1;
      *(byte *)(lVar23 + 0x8a) = (byte)(uVar26 >> 2) & 1;
      *(byte *)(lVar23 + 0x90) = (byte)(uVar27 >> 0xb) & 1;
      *(byte *)(lVar23 + 0x91) = (byte)(uVar27 >> 0xc) & 1;
      *(byte *)(lVar23 + 0x8b) = (byte)(uVar26 >> 3) & 1;
      *(byte *)(lVar23 + 0x8c) = (byte)(uVar26 >> 4) & 1;
      uVar28 = uVar28 + 1;
    } while (lVar21 != *(long *)(*param_4 + 8));
  }
  lVar21 = *(long *)*param_5;
  if (lVar21 != *(long *)(*param_5 + 8)) {
    uVar28 = 0;
    do {
      ppppppppplVar17 = *(long **********)(param_1 + 0x248);
      FUN_71024eae10(*(long *)(*(long *)(param_1 + 600) + (ulong)uVar28 * 8 + 8),lVar21,
                     (long *)ppppppppplVar17);
      lVar21 = lVar21 + 200;
      uVar28 = uVar28 + 1;
    } while (lVar21 != *(long *)(*param_5 + 8));
  }
  lVar21 = *(long *)(param_1 + 0x248);
  plVar35 = *(long **)(param_1 + 0x250);
  FUN_710250b4f0(lVar21,plVar35);
  if ((int)plVar35[0x641] != 0) {
    uVar10 = 0;
    do {
      lVar23 = plVar35[uVar10 + 1];
      lVar24 = *(long *)(lVar23 + 0x28);
      if ((*(int *)(lVar24 + 0x88) == 0xd) && (uVar28 = *(uint *)(lVar24 + 0x168), uVar28 != 0)) {
        uVar22 = 0;
        do {
          lVar33 = *(long *)(lVar24 + 0x170 + uVar22 * 8);
          if (((*(ulong *)(lVar33 + 8) ^ *(ulong *)(lVar23 + 8)) & 0xffffffffff) != 0) {
            *(long *)(lVar23 + 0xa0) = lVar33;
            uVar28 = *(uint *)(lVar24 + 0x168);
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar28);
      }
      lVar24 = *(long *)(lVar23 + 0x30);
      if ((*(int *)(lVar24 + 0x88) == 0xd) && (uVar28 = *(uint *)(lVar24 + 0x168), uVar28 != 0)) {
        uVar22 = 0;
        do {
          lVar33 = *(long *)(lVar24 + 0x170 + uVar22 * 8);
          if (((*(ulong *)(lVar33 + 8) ^ *(ulong *)(lVar23 + 8)) & 0xffffffffff) != 0) {
            *(long *)(lVar23 + 0x98) = lVar33;
            uVar28 = *(uint *)(lVar24 + 0x168);
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar28);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(plVar35 + 0x641));
  }
  uVar28 = *(uint *)(lVar21 + 0x3208);
  if (uVar28 != 0) {
    uVar10 = 0;
    do {
      lVar23 = *(long *)(lVar21 + uVar10 * 8 + 8);
      uVar26 = *(uint *)(lVar23 + 0x168);
      if (uVar26 != 0) {
        uVar30 = *(ulong *)(lVar23 + 0x70);
        uVar22 = 0;
        do {
          lVar24 = lVar23 + uVar22 * 8;
          lVar32 = *(long *)(lVar24 + 0x170);
          lVar33 = *(long *)(lVar32 + 0x30);
          if (((*(ulong *)(lVar33 + 0x70) ^ uVar30) & 0xffffffffff) == 0) goto LAB_7101929234;
          for (lVar32 = *(long *)(lVar32 + 0x98); lVar31 = lVar33, lVar32 != 0;
              lVar32 = *(long *)(lVar32 + 0xa0)) {
            while (lVar33 = *(long *)(lVar32 + 0x30),
                  ((*(ulong *)(lVar31 + 0x70) ^ *(ulong *)(lVar33 + 0x70)) & 0xffffffffff) != 0) {
              lVar32 = *(long *)(lVar32 + 0x98);
              lVar31 = lVar33;
              if (lVar32 == 0) goto LAB_7101929244;
            }
LAB_7101929234:
            lVar33 = *(long *)(lVar32 + 0x28);
          }
LAB_7101929244:
          uVar22 = uVar22 + 1;
          *(long *)(lVar24 + 0x1d0) = lVar33;
        } while (uVar22 != uVar26);
        uVar28 = *(uint *)(lVar21 + 0x3208);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar28);
  }
  lVar21 = *DAT_710532a860;
  if (*(long *)(lVar21 + 0x5f398) != 0) {
    puVar9 = (undefined8 *)
             FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                            (long ****)pcVar19,param_6,param_7,param_8);
    if (puVar9 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
        local_210 = (long ********)&DAT_00000070;
        ppppppppplVar17 = &local_210;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar10 & 1) != 0) &&
           (puVar9 = (undefined8 *)
                     FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                    (long ****)pcVar19,param_6,param_7,param_8),
           puVar9 != (undefined8 *)0x0)) goto LAB_71019292dc;
      }
      puVar9 = (undefined8 *)0x0;
    }
LAB_71019292dc:
    FUN_71024ed410(puVar9,*(long **)(*DAT_710532a860 + 0x5f398),ppppppppplVar17,(byte ****)pauVar18,
                   pcVar19,param_6,param_7,param_8);
    *(undefined8 **)(param_1 + 0x260) = puVar9;
    lVar21 = *DAT_710532a860;
  }
  if (*(long *)(lVar21 + 0x5f3a0) != 0) {
    puVar9 = (undefined8 *)
             FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                            (long ****)pcVar19,param_6,param_7,param_8);
    if (puVar9 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
        local_210 = (long ********)&DAT_00000070;
        ppppppppplVar17 = &local_210;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar10 & 1) != 0) &&
           (puVar9 = (undefined8 *)
                     FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                    (long ****)pcVar19,param_6,param_7,param_8),
           puVar9 != (undefined8 *)0x0)) goto LAB_7101929378;
      }
      puVar9 = (undefined8 *)0x0;
    }
LAB_7101929378:
    FUN_71024ed410(puVar9,*(long **)(*DAT_710532a860 + 0x5f3a0),ppppppppplVar17,(byte ****)pauVar18,
                   pcVar19,param_6,param_7,param_8);
    *(undefined8 **)(param_1 + 0x268) = puVar9;
    lVar21 = *DAT_710532a860;
  }
  if (*(long *)(lVar21 + 0x5f3a8) != 0) {
    puVar9 = (undefined8 *)
             FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                            (long ****)pcVar19,param_6,param_7,param_8);
    if (puVar9 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
        local_210 = (long ********)&DAT_00000070;
        ppppppppplVar17 = &local_210;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar10 & 1) != 0) &&
           (puVar9 = (undefined8 *)
                     FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                    (long ****)pcVar19,param_6,param_7,param_8),
           puVar9 != (undefined8 *)0x0)) goto LAB_7101929414;
      }
      puVar9 = (undefined8 *)0x0;
    }
LAB_7101929414:
    FUN_71024ed410(puVar9,*(long **)(*DAT_710532a860 + 0x5f3a8),ppppppppplVar17,(byte ****)pauVar18,
                   pcVar19,param_6,param_7,param_8);
    *(undefined8 **)(param_1 + 0x270) = puVar9;
    lVar21 = *DAT_710532a860;
  }
  if (*(long *)(lVar21 + 0x5f3b0) != 0) {
    puVar9 = (undefined8 *)
             FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                            (long ****)pcVar19,param_6,param_7,param_8);
    if (puVar9 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
        local_210 = (long ********)&DAT_00000070;
        ppppppppplVar17 = &local_210;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar10 & 1) != 0) &&
           (puVar9 = (undefined8 *)
                     FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                    (long ****)pcVar19,param_6,param_7,param_8),
           puVar9 != (undefined8 *)0x0)) goto LAB_71019294b0;
      }
      puVar9 = (undefined8 *)0x0;
    }
LAB_71019294b0:
    FUN_71024ed410(puVar9,*(long **)(*DAT_710532a860 + 0x5f3b0),ppppppppplVar17,(byte ****)pauVar18,
                   pcVar19,param_6,param_7,param_8);
    *(undefined8 **)(param_1 + 0x278) = puVar9;
    lVar21 = *DAT_710532a860;
  }
  if (*(long *)(lVar21 + 0x5f3b8) == 0) {
    return;
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                          (long ****)pcVar19,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
      local_210 = (long ********)&DAT_00000070;
      ppppppppplVar17 = &local_210;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar10 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar17,(byte ****)pauVar18,
                                  (long ****)pcVar19,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_710192954c;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710192954c:
  FUN_71024ed410(puVar9,*(long **)(*DAT_710532a860 + 0x5f3b8),ppppppppplVar17,(byte ****)pauVar18,
                 pcVar19,param_6,param_7,param_8);
  *(undefined8 **)(param_1 + 0x280) = puVar9;
  return;
}

