// addr:      7101a27570
// offset:    0x1a27570
// name:      FUN_7101a27570
// mangled:   
// signature: undefined __cdecl FUN_7101a27570(long param_1, undefined8 param_2, long * * * * * * * * * * * param_3, long * * * * * * * * * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a27570(long param_1,undefined8 param_2,long ***********param_3,long ************param_4
                   ,long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  ulong *puVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long **********pppppppppplVar14;
  undefined8 uVar15;
  long *********ppppppppplVar16;
  long *plVar17;
  long **********pppppppppplVar18;
  ulong uVar19;
  ulong uVar20;
  long ****pppplVar21;
  byte ****ppppbVar22;
  long lVar23;
  long ********pppppppplVar24;
  char cVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint *puVar32;
  char cVar33;
  undefined8 *puVar34;
  long ***********ppppppppppplVar35;
  int iVar36;
  uint uVar37;
  long lVar38;
  long ************pppppppppppplVar39;
  long ***********ppppppppppplVar40;
  undefined8 *puVar41;
  char *pcVar42;
  uint uVar43;
  uint *puVar44;
  uint *puVar45;
  long **********pppppppppplVar46;
  uint *puVar47;
  undefined1 uVar48;
  ulong *puVar49;
  ulong *puVar50;
  long ***********ppppppppppplVar51;
  long ***********ppppppppppplVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  ulong *puVar55;
  undefined4 uVar56;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  long ************local_190;
  long *********local_178;
  undefined **local_170;
  ulong local_168;
  long ***********local_160;
  undefined8 local_158;
  long ************local_150;
  ulong local_148;
  undefined8 local_140;
  uint local_138;
  uint uStack_134;
  int local_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  long ***********local_118;
  undefined8 local_110;
  long ***********local_108;
  uint local_100;
  undefined4 uStack_fc;
  byte ***local_f8;
  uint local_f0;
  undefined4 uStack_ec;
  long ***********local_e8;
  long **********local_e0;
  undefined8 local_d8;
  long ***********local_c8;
  long ***********local_c0;
  undefined4 local_b8;
  int aiStack_b4 [3];
  int local_a8;
  byte ***apppbStack_a0 [2];
  long ***********local_90;
  long ***********local_88;
  long **********local_80;
  long **********local_68;
  
  lVar30 = DAT_7105324ae8;
  switch(*(undefined4 *)(param_1 + 0x16c)) {
  case 9:
    uVar11 = 0;
    iVar9 = *(int *)(param_1 + 0x160);
    local_130 = 0xffffffff;
    uStack_12c = 0;
    local_118 = (long ***********)&DAT_c1ffff0000000000;
    local_110 = local_110 & 0xffffffff00000000;
    local_108 = (long ***********)0x0;
    local_140._0_4_ = 0;
    local_140._4_4_ = 0xffffffff;
    local_138 = 0xffffffff;
    uStack_134 = 0;
    local_128 = (long ***********)0xffffffffffffffff;
    local_120 = 0xffffffff00000000;
    puVar34 = *(undefined8 **)(*DAT_7105314510 + 0x208);
    puVar47 = *(uint **)*puVar34;
    lVar38 = 0;
    lVar23 = *(long *)(DAT_710532f730 + 8) + 0x160;
    ppppppppppplVar51 = param_3;
    puVar44 = puVar47;
    puVar32 = puVar47;
    do {
      puVar13 = FUN_7103264590(lVar23,(uint)lVar38);
      puVar45 = puVar44;
      uVar43 = uVar11;
      if (((((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)puVar13 & 0xffffffffff) != 0)) &&
         (puVar45 = puVar32, uVar43 = *puVar32, *puVar32 <= uVar11)) {
        puVar45 = puVar44;
        uVar43 = uVar11;
      }
      uVar11 = uVar43;
      lVar38 = lVar38 + 1;
      puVar32 = puVar32 + 6;
      puVar44 = puVar45;
    } while (lVar38 != 99);
    ppppppppppplVar40 =
         (long ***********)
         FUN_7103264590(lVar23,(int)((ulong)((long)puVar45 - (long)puVar47) >> 3) * -0x55555555);
    uVar10 = puVar45[1];
    bVar5 = *(byte *)((long)puVar45 + 7);
    lVar38 = *(long *)(DAT_710532f730 + 8);
    cVar25 = *(char *)((long)puVar45 + 5);
    cVar33 = *(char *)((long)puVar45 + 6);
    uVar28 = *puVar45;
    uVar43 = 0;
    lVar23 = 0;
    uVar11 = 0;
    pcVar42 = (char *)(*(long *)*puVar34 + 6);
    bVar8 = true;
    do {
      puVar13 = FUN_7103264590(lVar38 + 0x160,(uint)lVar23);
      bVar3 = bVar8;
      if ((((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)puVar13 & 0xffffffffff) != 0)) {
        uVar11 = *(int *)(pcVar42 + -6) + uVar11;
        if (pcVar42[-1] != '\0') {
          uVar43 = 1;
        }
        bVar3 = false;
        if (*pcVar42 != '\0') {
          bVar3 = bVar8;
        }
      }
      lVar23 = lVar23 + 1;
      pcVar42 = pcVar42 + 0x18;
      bVar8 = bVar3;
    } while (lVar23 != 99);
    if (cVar25 != '\0') {
      local_110 = CONCAT44(local_110._4_4_,(uint)(byte)uVar10);
      local_118 = ppppppppppplVar40;
    }
    local_140._0_4_ = (uint)(cVar25 != '\0');
    if (cVar33 != '\0') {
      local_140._0_4_ = 2;
    }
    lVar23 = *(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8);
    uVar10 = *(uint *)(lVar23 + 0x20);
    if (uVar10 == 0) {
      local_130 = 0;
      uStack_134 = 0;
    }
    else {
      uVar19 = 0;
      puVar32 = (uint *)(lVar23 + 0x2c);
      do {
        if (*puVar32 <= uVar28) break;
        uVar19 = uVar19 + 1;
        puVar32 = puVar32 + 2;
      } while (uVar19 < uVar10);
      uStack_134 = 1;
      if ((uVar19 & 0x7fffffff) == 0) {
        iVar26 = 1;
      }
      else if (((uint)uVar19 & 0x7fffffff) == 0x32) {
        iVar26 = *(int *)(lVar23 + 0x24);
      }
      else {
        lVar38 = lVar23 + 0x28 + (long)(int)(uint)uVar19 * 8;
        piVar1 = (int *)(lVar23 + 0x28 + (uVar19 & 0xffffffff) * 8);
        iVar26 = piVar1[1];
        uVar4 = *(uint *)(lVar38 + -8);
        iVar26 = (int)((1.0 - (float)(uVar28 - iVar26) /
                              (float)(uint)(*(int *)(lVar38 + -4) - iVar26)) *
                       (float)(*piVar1 - uVar4) + (float)uVar4);
      }
      local_130 = (1 - iVar26) + *(int *)(lVar23 + 0x24);
    }
    if (bVar3) {
      uVar43 = 2;
    }
    local_128 = (long ***********)(ulong)uVar11;
    if (*(uint *)(lVar23 + 0x1c8) == 0) {
      iVar26 = 0;
      iVar36 = 0;
    }
    else {
      uVar19 = 0;
      puVar32 = (uint *)(lVar23 + 0x1d4);
      do {
        if (*puVar32 <= uVar11) break;
        uVar19 = uVar19 + 1;
        puVar32 = puVar32 + 2;
      } while (uVar19 < *(uint *)(lVar23 + 0x1c8));
      iVar36 = 1;
      if ((uVar19 & 0x7fffffff) == 0) {
        iVar26 = 1;
      }
      else if (((uint)uVar19 & 0x7fffffff) == 0x32) {
        iVar26 = *(int *)(lVar23 + 0x1cc);
      }
      else {
        lVar38 = lVar23 + 0x1d0 + (long)(int)(uint)uVar19 * 8;
        piVar1 = (int *)(lVar23 + 0x1d0 + (uVar19 & 0xffffffff) * 8);
        iVar26 = piVar1[1];
        uVar4 = *(uint *)(lVar38 + -8);
        iVar26 = (int)((1.0 - (float)(uVar11 - iVar26) /
                              (float)(uint)(*(int *)(lVar38 + -4) - iVar26)) *
                       (float)(*piVar1 - uVar4) + (float)uVar4);
      }
      iVar26 = (1 - iVar26) + *(int *)(lVar23 + 0x1cc);
    }
    local_120 = CONCAT44(iVar26,iVar36);
    local_138 = (uint)bVar5;
    local_140._4_4_ = uVar28;
    uStack_12c = uVar43;
    if (iVar9 < 2) {
      if (uVar10 == 0) goto LAB_7101a284f0;
      uVar15 = *(undefined8 *)(lVar23 + 0x10);
LAB_7101a284dc:
      local_c8 = (long ***********)0x0;
      FUN_7103741810(uVar15,(ulong *)&local_c8);
      local_108 = local_c8;
      param_3 = local_c8;
    }
    else {
      if (*(int *)(lVar23 + 0x370) != 0) {
        uVar15 = *(undefined8 *)(lVar23 + 0x360);
        goto LAB_7101a284dc;
      }
LAB_7101a284f0:
      param_3 = (long ***********)0x0;
    }
    FUN_7103776390(&local_e0,(undefined8 *)(**(long **)(param_1 + 0x198) + 8),
                   (long ****)ppppppppppplVar51,(byte ****)param_4,param_5,param_6,param_7,param_8);
    if (*(int *)(param_1 + 0x160) < 2) {
      FUN_7103776640(&local_88,(long)&local_e0,(byte ****)"set_parts_score_0",ppppppppppplVar51,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,(long)local_80,0x71043be12d);
      FUN_7103778300(0x3f800000,(long)local_80,0x71044544ba);
      local_c8 = (long ***********)&DAT_ffffffff00000000;
      local_c0 = (long ***********)0xffffffff;
      local_b8 = 0xffffffff;
      FUN_7101a1ba90((long)&local_88,(int *)&local_c8,(ulong)ppppppppppplVar51,(ulong)param_4,
                     param_5,param_6,param_7,param_8);
      pppppppppppplVar39 = &local_c8;
      local_c8 = (long ***********)&DAT_c1ffff0000000000;
      uVar19 = 0;
      local_c0 = (long ***********)((ulong)local_c0 & 0xffffffff00000000);
      FUN_7101a1bc20(param_1,(long)&local_88,0,(byte ****)pppppppppppplVar39,param_5,param_6,param_7
                     ,param_8);
      FUN_7103776640(&local_c8,(long)&local_e0,(byte ****)"set_parts_score_1",uVar19,
                     pppppppppppplVar39,param_5,param_6,param_7,param_8);
      ppppppppppplVar51 = local_c0;
      FUN_7103778300(0x3f800000,(long)local_c0,0x71043be12d);
      FUN_7103778300(0x3f800000,(long)ppppppppppplVar51,0x7104432a14);
      FUN_7101a1ba90((long)&local_c8,(int *)&local_140,uVar19,(ulong)pppppppppppplVar39,param_5,
                     param_6,param_7,param_8);
      pppppppppppplVar39 = &local_118;
      uVar31 = 0;
      FUN_7101a1bc20(param_1,(long)&local_c8,0,(byte ****)pppppppppppplVar39,param_5,param_6,param_7
                     ,param_8);
      FUN_7103776640(&local_150,(long)&local_e0,(byte ****)"set_parts_score_2",uVar31,
                     pppppppppppplVar39,param_5,param_6,param_7,param_8);
      uVar19 = local_148;
      FUN_7103778300(0x3f800000,local_148,0x71043be12d);
      FUN_7103778300(0x3f800000,local_148,0x7104291631);
      FUN_7101a1ba90((long)&local_150,(int *)&uStack_12c,uVar31,(ulong)pppppppppppplVar39,param_5,
                     param_6,param_7,param_8);
      param_4 = &local_160;
      pppplVar21 = (long ****)0x0;
      local_160 = (long ***********)&DAT_c1ffff0000000000;
      local_158 = (ulong)local_158._4_4_ << 0x20;
      FUN_7101a1bc20(param_1,(long)&local_150,0,(byte ****)param_4,param_5,param_6,param_7,param_8);
      local_150 = (long ************)&PTR_FUN_710523d988;
      local_148 = 0;
      if (uVar19 != 0) {
        uVar31 = *(ulong *)(uVar19 + 0x18);
        *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar19 + 0x18) = 0;
        if (uVar31 != 0) {
          FUN_710392eb40(uVar31);
        }
        FUN_710392eb40(uVar19);
      }
      local_c8 = (long ***********)&PTR_FUN_710523d988;
      local_c0 = (long ***********)0x0;
      pppppppppplVar18 = local_80;
      if (ppppppppppplVar51 != (long ***********)0x0) {
        uVar19 = *(ulong *)((long)ppppppppppplVar51 + 0x18);
        *(undefined ***)((long)ppppppppppplVar51 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)ppppppppppplVar51 + 0x18) = 0;
        if (uVar19 != 0) {
          FUN_710392eb40(uVar19);
        }
        FUN_710392eb40((ulong)ppppppppppplVar51);
      }
    }
    else {
      FUN_7103776640(&local_88,(long)&local_e0,(byte ****)"set_parts_score_0",ppppppppppplVar51,
                     param_4,param_5,param_6,param_7,param_8);
      if ((local_80[1] != (long *********)0x0) &&
         (pppppppplVar24 = local_80[1][3], pppppppplVar24 != (long ********)0x0)) {
        *(byte *)(pppppppplVar24 + 0xb) = *(byte *)(pppppppplVar24 + 0xb) | 1;
      }
      FUN_7103778300(0x3f800000,(long)local_80,0x71043be12d);
      FUN_7103778300(0x3f800000,(long)local_80,0x710439ce43);
      local_c8 = (long ***********)&DAT_ffffffff00000000;
      local_c0 = (long ***********)0xffffffff;
      local_b8 = 0xffffffff;
      FUN_7101a1ba90((long)&local_88,(int *)&local_c8,(ulong)ppppppppppplVar51,(ulong)param_4,
                     param_5,param_6,param_7,param_8);
      local_c8 = (long ***********)&DAT_c1ffff0000000000;
      local_c0 = (long ***********)((ulong)local_c0 & 0xffffffff00000000);
      FUN_7101a1bc20(param_1,(long)&local_88,1,(byte ****)&local_c8,param_5,param_6,param_7,param_8)
      ;
      param_4 = &local_c8;
      pppplVar21 = (long ****)0x0;
      local_c8 = (long ***********)&DAT_c1ffff0000000000;
      local_c0 = (long ***********)((ulong)local_c0 & 0xffffffff00000000);
      FUN_7101a1bc20(param_1,(long)&local_88,0,(byte ****)param_4,param_5,param_6,param_7,param_8);
      pppppppppplVar18 = local_80;
    }
    local_80 = (long **********)0x0;
    local_88 = (long ***********)&PTR_FUN_710523d988;
    if (pppppppppplVar18 != (long **********)0x0) {
      local_80 = (long **********)0x0;
      local_88 = (long ***********)&PTR_FUN_710523d988;
      ppppppppplVar16 = pppppppppplVar18[3];
      pppppppppplVar18[2] = (long *********)&PTR_FUN_710523d9a8;
      pppppppppplVar18[3] = (long *********)0x0;
      if (ppppppppplVar16 != (long *********)0x0) {
        FUN_710392eb40((ulong)ppppppppplVar16);
      }
      FUN_710392eb40((ulong)pppppppppplVar18);
    }
    FUN_7103776390(&local_c8,(undefined8 *)(**(long **)(param_1 + 0x198) + 8),pppplVar21,
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    FUN_7101a2ae50((long)&local_c8,iVar36,param_3,param_4,param_5,param_6,param_7,param_8);
    ppppppppppplVar51 = local_c0;
    local_c8 = (long ***********)&PTR_FUN_710523d988;
    local_c0 = (long ***********)0x0;
    if (ppppppppppplVar51 != (long ***********)0x0) {
      uVar19 = *(ulong *)((long)ppppppppppplVar51 + 0x18);
      *(undefined ***)((long)ppppppppppplVar51 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)ppppppppppplVar51 + 0x18) = 0;
      if (uVar19 != 0) {
        FUN_710392eb40(uVar19);
      }
      FUN_710392eb40((ulong)ppppppppppplVar51);
    }
    FUN_7103776390(&local_88,(undefined8 *)(**(long **)(param_1 + 0x1a8) + 8),(long ****)param_3,
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_c8,(long)&local_88,(long ****)"set_txt_lv",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_c8,"mel_chara_select_high_score_none",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    ppppppppppplVar51 = local_c0;
    local_c8 = (long ***********)&PTR_FUN_710523d9a8;
    local_c0 = (long ***********)0x0;
    if (ppppppppppplVar51 != (long ***********)0x0) {
      FUN_710392eb40((ulong)ppppppppppplVar51);
    }
    FUN_7103776910(&local_c8,(long)&local_88,(long ****)"set_txt_standard_sub",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppppppppppplVar51 = local_c0;
    if (*(long **)((long)local_c0 + 0x10) != (long *)0x0) {
      param_3 = (long ***********)0x0;
      param_4 = (long ************)0x0;
      local_150 = (long ************)((ulong)local_150 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)((long)local_c0 + 0x10),(ushort *)&local_150,0,0);
    }
    local_c8 = (long ***********)&PTR_FUN_710523d9a8;
    local_c0 = (long ***********)0x0;
    if (ppppppppppplVar51 != (long ***********)0x0) {
      FUN_710392eb40((ulong)ppppppppppplVar51);
    }
    FUN_7103776910(&local_c8,(long)&local_88,(long ****)"set_txt_route",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    ppppppppppplVar51 = local_c0;
    if (*(long **)((long)local_c0 + 0x10) != (long *)0x0) {
      param_3 = (long ***********)0x0;
      param_4 = (long ************)0x0;
      local_150 = (long ************)((ulong)local_150 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)((long)local_c0 + 0x10),(ushort *)&local_150,0,0);
    }
    local_c8 = (long ***********)&PTR_FUN_710523d9a8;
    local_c0 = (long ***********)0x0;
    if (ppppppppppplVar51 != (long ***********)0x0) {
      FUN_710392eb40((ulong)ppppppppppplVar51);
    }
    FUN_7103778300(0x3f800000,(long)local_80,0x71042f7c57);
    FUN_7101a201c0(*(undefined8 **)(param_1 + 0x298));
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(long *)(param_1 + 0x290) = param_1 + 0x298;
    *(undefined8 *)(param_1 + 0x298) = 0;
    FUN_7101a0cae0(&local_c8,*(long *)(lVar30 + 8),(long **********)param_3,(byte ****)param_4,
                   param_5,param_6,param_7,param_8);
    ppppppppppplVar51 = local_c0;
    if (local_c8 != local_c0) {
      ppppppppppplVar40 = local_c8;
      do {
        ppppppppppplVar52 = (long ***********)*ppppppppppplVar40;
        local_160 = ppppppppppplVar52;
        if (((ulong)ppppppppppplVar52 & 0xff00000000000000) == 0xc100000000000000 &&
            ((ulong)ppppppppppplVar52 & 0xffffffffff) != 0) {
          iVar9 = *(int *)(param_1 + 0x160);
          uVar19 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                  (undefined1 *)ppppppppppplVar52);
          if ((int)uVar19 == -1) goto LAB_7101a28a2c;
          puVar34 = *(undefined8 **)(*DAT_7105314510 + 0x208);
          uVar19 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                  (undefined1 *)ppppppppppplVar52);
          iVar26 = (int)uVar19;
          if (iVar9 < 2) {
            if (iVar26 < 0) {
              local_1a8 = 0;
              cVar25 = '\0';
              cVar33 = '\0';
              uVar43 = 0;
              uVar11 = 0;
            }
            else {
              puVar32 = (uint *)(*(long *)*puVar34 + (long)iVar26 * 0x18);
              uVar11 = *puVar32;
              local_1a8 = (uint)(byte)puVar32[1];
              cVar25 = *(char *)((long)puVar32 + 5);
              cVar33 = *(char *)((long)puVar32 + 6);
              uVar43 = (uint)*(byte *)((long)puVar32 + 7);
            }
            local_1ac = (uint)(cVar25 != '\0');
            if (cVar33 != '\0') {
              local_1ac = 2;
            }
            lVar30 = *(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8);
            uVar28 = *(uint *)(lVar30 + 0x20);
            ppppppppppplVar35 = (long ***********)&DAT_c1ffff0000000000;
            if (uVar28 == 0) {
              local_1b0 = 0;
              goto LAB_7101a28be8;
            }
            uVar19 = 0;
            puVar32 = (uint *)(lVar30 + 0x2c);
            do {
              if (*puVar32 <= uVar11) break;
              uVar19 = uVar19 + 1;
              puVar32 = puVar32 + 2;
            } while (uVar19 < uVar28);
            if ((uVar19 & 0x7fffffff) == 0) {
              iVar9 = 1;
            }
            else if (((uint)uVar19 & 0x7fffffff) == 0x32) {
              iVar9 = *(int *)(lVar30 + 0x24);
            }
            else {
              lVar23 = lVar30 + 0x28 + (long)(int)(uint)uVar19 * 8;
              piVar1 = (int *)(lVar30 + 0x28 + (uVar19 & 0xffffffff) * 8);
              iVar9 = piVar1[1];
              uVar10 = *(uint *)(lVar23 + -8);
              iVar9 = (int)((1.0 - (float)(uVar11 - iVar9) /
                                   (float)(uint)(*(int *)(lVar23 + -4) - iVar9)) *
                            (float)(*piVar1 - uVar10) + (float)uVar10);
            }
            iVar9 = (1 - iVar9) + *(int *)(lVar30 + 0x24);
            if (uVar28 != 0) {
              local_150 = (long ************)0x0;
              FUN_7103741810(*(undefined8 *)(lVar30 + 0x10),(ulong *)&local_150);
              local_1b0 = 0;
              goto LAB_7101a28cf4;
            }
            uVar53 = 1;
            local_190 = (long ************)0x0;
            local_1b0 = 0;
          }
          else {
            if (iVar26 < 0) {
              local_1a8 = 0;
              cVar25 = '\0';
              cVar33 = '\0';
              uVar43 = 0;
              local_1b0 = 0;
              ppppppppppplVar35 = (long ***********)0x0;
              uVar11 = 0;
            }
            else {
              lVar30 = *(long *)*puVar34 + (long)iVar26 * 0x18;
              uVar11 = *(uint *)(lVar30 + 0x948);
              local_1a8 = (uint)*(byte *)(lVar30 + 0x94c);
              cVar25 = *(char *)(lVar30 + 0x94d);
              cVar33 = *(char *)(lVar30 + 0x94e);
              uVar43 = (uint)*(byte *)(lVar30 + 0x94f);
              ppppppppppplVar35 = *(long ************)(lVar30 + 0x950);
              local_1b0 = (uint)*(byte *)(lVar30 + 0x958);
            }
            if (((ulong)ppppppppppplVar35 & 0xffffffffff) == 0 ||
                ((ulong)ppppppppppplVar35 & 0xff00000000000000) != 0xc100000000000000) {
              ppppppppppplVar52 = (long ***********)&DAT_c1ffff0000000000;
            }
            local_1ac = (uint)(cVar25 != '\0');
            if (cVar33 != '\0') {
              local_1ac = 2;
            }
            lVar30 = *(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8);
            uVar28 = *(uint *)(lVar30 + 0x370);
            if (uVar28 == 0) {
LAB_7101a28be8:
              local_190 = (long ************)0x0;
              iVar9 = 0;
              uVar53 = 0;
            }
            else {
              uVar19 = 0;
              puVar32 = (uint *)(lVar30 + 0x37c);
              do {
                if (*puVar32 <= uVar11) break;
                uVar19 = uVar19 + 1;
                puVar32 = puVar32 + 2;
              } while (uVar19 < uVar28);
              if ((uVar19 & 0x7fffffff) == 0) {
                iVar9 = 1;
              }
              else if (((uint)uVar19 & 0x7fffffff) == 0x32) {
                iVar9 = *(int *)(lVar30 + 0x374);
              }
              else {
                lVar23 = lVar30 + 0x378 + (long)(int)(uint)uVar19 * 8;
                piVar1 = (int *)(lVar30 + 0x378 + (uVar19 & 0xffffffff) * 8);
                iVar9 = piVar1[1];
                uVar10 = *(uint *)(lVar23 + -8);
                iVar9 = (int)((1.0 - (float)(uVar11 - iVar9) /
                                     (float)(uint)(*(int *)(lVar23 + -4) - iVar9)) *
                              (float)(*piVar1 - uVar10) + (float)uVar10);
              }
              iVar9 = (1 - iVar9) + *(int *)(lVar30 + 0x374);
              if (uVar28 == 0) {
                uVar53 = 1;
                local_190 = (long ************)0x0;
              }
              else {
                local_150 = (long ************)0x0;
                FUN_7103741810(*(undefined8 *)(lVar30 + 0x360),(ulong *)&local_150);
LAB_7101a28cf4:
                uVar53 = 1;
                local_190 = local_150;
              }
            }
          }
        }
        else {
LAB_7101a28a2c:
          local_190 = (long ************)0x0;
          ppppppppppplVar35 = (long ***********)&DAT_c1ffff0000000000;
          local_1ac = 0;
          uVar53 = 0;
          local_1a8 = 0;
          local_1b0 = 0;
          uVar11 = 0xffffffff;
          iVar9 = -1;
          uVar43 = 0xffffffff;
          ppppppppppplVar52 = ppppppppppplVar35;
        }
        local_150 = &local_160;
        param_3 = (long ***********)&local_150;
        plVar17 = FUN_7101a2af70((long *)(param_1 + 0x290),(ulong)local_160,(long ****)param_3,
                                 (byte ****)param_4,param_5,param_6,param_7,param_8);
        *(uint *)(plVar17 + 5) = local_1ac;
        *(uint *)((long)plVar17 + 0x2c) = uVar11;
        *(uint *)(plVar17 + 6) = uVar43;
        *(undefined4 *)((long)plVar17 + 0x34) = uVar53;
        *(int *)(plVar17 + 7) = iVar9;
        *(undefined4 *)((long)plVar17 + 0x3c) = 0;
        *(uint *)(plVar17 + 9) = local_1a8;
        *(undefined4 *)((long)plVar17 + 0x4c) = 0;
        *(uint *)(plVar17 + 0xb) = local_1b0;
        *(undefined4 *)((long)plVar17 + 0x5c) = 0;
        plVar17[8] = (long)ppppppppppplVar52;
        plVar17[10] = (long)ppppppppppplVar35;
        plVar17[0xc] = (long)&DAT_c1ffff0000000000;
        plVar17[0xd] = 0;
        plVar17[0xe] = (long)&DAT_c1ffff0000000000;
        plVar17[0xf] = 0;
        ppppppppppplVar40 = ppppppppppplVar40 + 1;
        plVar17[0x10] = (long)local_190;
      } while (ppppppppppplVar40 != ppppppppppplVar51);
    }
    if (local_c8 != (long ***********)0x0) {
      local_c0 = local_c8;
      FUN_710392eb40((ulong)local_c8);
    }
    pppppppppplVar18 = local_80;
    local_88 = (long ***********)&PTR_FUN_710523d988;
    local_80 = (long **********)0x0;
    if (pppppppppplVar18 != (long **********)0x0) {
      uVar19 = *(ulong *)((long)pppppppppplVar18 + 0x18);
      *(undefined ***)((long)pppppppppplVar18 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppppppppplVar18 + 0x18) = 0;
      if (uVar19 != 0) {
        FUN_710392eb40(uVar19);
      }
      FUN_710392eb40((ulong)pppppppppplVar18);
    }
    break;
  case 10:
    FUN_7103776390(&local_e0,(undefined8 *)(**(long **)(param_1 + 0x198) + 8),(long ****)param_3,
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    iVar9 = *(int *)(param_1 + 0x160);
    if (iVar9 < 2) {
      iVar9 = *(int *)(param_1 + 0x164);
      puVar34 = *(undefined8 **)(*DAT_7105314510 + 0x208);
      local_c8 = (long ***********)((ulong)local_c8 & 0xffffffffffffff00);
      local_88 = (long ***********)((ulong)local_88 & 0xffffffffffffff00);
      if (iVar9 == 2) {
        puVar2 = (ulong *)(*(long *)*puVar34 + 0x15a8);
        lVar38 = 0;
        uVar11 = 0;
        lVar23 = *(long *)(DAT_710532f730 + 8) + 0x160;
        puVar55 = puVar2;
        puVar49 = puVar2;
        do {
          puVar13 = FUN_7103264590(lVar23,(uint)lVar38);
          puVar50 = puVar49;
          uVar43 = uVar11;
          if (((((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) &&
              (((ulong)puVar13 & 0xffffffffff) != 0)) &&
             (puVar50 = puVar55, uVar43 = (uint)*puVar55, (uint)*puVar55 <= uVar11)) {
            puVar50 = puVar49;
            uVar43 = uVar11;
          }
          uVar11 = uVar43;
          lVar38 = lVar38 + 1;
          puVar55 = puVar55 + 1;
          puVar49 = puVar50;
        } while (lVar38 != 99);
        ppppppppppplVar51 =
             (long ***********)
             FUN_7103264590(lVar23,(uint)((ulong)((long)puVar50 - (long)puVar2) >> 3));
        uVar19 = *puVar50;
        uVar48 = 0;
        lVar23 = 0;
        lVar38 = *(long *)(DAT_710532f730 + 8);
        pppppppppppplVar39 = (long ************)0x0;
        local_c8 = (long ***********)((ulong)local_c8 & 0xffffffffffffff00);
        local_88._0_1_ = 1;
        pcVar42 = (char *)(*(long *)*puVar34 + 0x15ae);
        cVar25 = '\x01';
        do {
          puVar13 = FUN_7103264590(lVar38 + 0x160,(uint)lVar23);
          cVar33 = cVar25;
          if ((((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) &&
             (((ulong)puVar13 & 0xffffffffff) != 0)) {
            pppppppppppplVar39 =
                 (long ************)(ulong)(uint)(*(int *)(pcVar42 + -6) + (int)pppppppppppplVar39);
            if (pcVar42[-1] != '\0') {
              uVar48 = 1;
            }
            cVar33 = '\0';
            if (*pcVar42 != '\0') {
              cVar33 = cVar25;
            }
          }
          lVar23 = lVar23 + 1;
          pcVar42 = pcVar42 + 8;
          cVar25 = cVar33;
        } while (lVar23 != 99);
        uVar11 = 0;
        uVar31 = uVar19 >> 0x30;
        local_c8 = (long ***********)CONCAT71(local_c8._1_7_,uVar48);
        uVar28 = 9;
        lVar23 = 8;
        local_88 = (long ***********)CONCAT71(local_88._1_7_,cVar33);
        uVar43 = 0;
LAB_7101a29594:
        bVar8 = (uVar19 & 0xff0000000000) != 0;
        uVar10 = (uint)(uVar19 >> 0x20) & 0xff;
        if (!bVar8) {
          uVar10 = 0;
        }
        lVar38 = **(long **)(*DAT_7105314510 + 0x68);
        if (!bVar8) {
          ppppppppppplVar51 = (long ***********)&DAT_c1ffff0000000000;
        }
        uVar4 = (uint)bVar8;
        if ((uVar31 & 0xff) != 0) {
          uVar4 = 2;
        }
        lVar29 = *(long *)(lVar38 + 8);
        bVar8 = *(int *)(lVar29 + lVar23 * 0x1a8 + 0x20) == 0;
        if (bVar8) {
          iVar9 = 0;
        }
        else {
          param_3 = (long ***********)(uVar19 & 0xffffffff);
          iVar9 = FUN_71017d1480(lVar38,(ushort)lVar23,(uint)uVar19);
          lVar38 = **(long **)(*DAT_7105314510 + 0x68);
          lVar29 = *(long *)(lVar38 + 8);
        }
        uVar27 = (uint)(byte)local_c8;
        if (cVar33 != '\0') {
          uVar27 = 2;
        }
        bVar3 = *(int *)(lVar29 + (ulong)uVar28 * 0x1a8 + 0x20) == 0;
        uVar37 = (uint)pppppppppppplVar39;
        if (bVar3) {
          iVar26 = 0;
        }
        else {
          iVar26 = FUN_71017d1480(lVar38,(ushort)uVar28,uVar37);
          lVar29 = *(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8);
          param_3 = (long ***********)pppppppppppplVar39;
        }
        if (*(int *)(lVar29 + lVar23 * 0x1a8 + 0x20) == 0) {
          local_108 = (long ***********)0x0;
        }
        else {
          local_140._0_4_ = 0;
          local_140._4_4_ = 0;
          FUN_7103741810(*(undefined8 *)(lVar29 + lVar23 * 0x1a8 + 0x10),&local_140);
          local_108 = (long ***********)CONCAT44(local_140._4_4_,(uint)local_140);
        }
        local_128 = (long ***********)CONCAT44(uVar43,uVar37);
        local_120 = CONCAT44(iVar26,(uint)!bVar3);
        local_110 = CONCAT44(local_110._4_4_,uVar10);
        local_140._0_4_ = uVar4;
        local_140._4_4_ = (uint)uVar19;
        local_138 = uVar11;
        uStack_134 = (uint)!bVar8;
        local_130 = iVar9;
        uStack_12c = uVar27;
        local_118 = ppppppppppplVar51;
      }
      else {
        if (iVar9 == 1) {
          puVar2 = (ulong *)(*(long *)*puVar34 + 0x18c0);
          lVar38 = 0;
          uVar11 = 0;
          lVar23 = *(long *)(DAT_710532f730 + 8) + 0x160;
          puVar55 = puVar2;
          puVar49 = puVar2;
          do {
            puVar13 = FUN_7103264590(lVar23,(uint)lVar38);
            puVar50 = puVar49;
            uVar43 = uVar11;
            if (((((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) &&
                (((ulong)puVar13 & 0xffffffffff) != 0)) &&
               (puVar50 = puVar55, uVar43 = (uint)*puVar55, (uint)*puVar55 <= uVar11)) {
              puVar50 = puVar49;
              uVar43 = uVar11;
            }
            uVar11 = uVar43;
            lVar38 = lVar38 + 1;
            puVar55 = puVar55 + 1;
            puVar49 = puVar50;
          } while (lVar38 != 99);
          ppppppppppplVar51 =
               (long ***********)
               FUN_7103264590(lVar23,(uint)((ulong)((long)puVar50 - (long)puVar2) >> 3));
          uVar19 = *puVar50;
          uVar48 = 0;
          lVar23 = 0;
          lVar38 = *(long *)(DAT_710532f730 + 8);
          pppppppppppplVar39 = (long ************)0x0;
          local_c8 = (long ***********)((ulong)local_c8 & 0xffffffffffffff00);
          local_88._0_1_ = 1;
          pcVar42 = (char *)(*(long *)*puVar34 + 0x18c6);
          cVar25 = '\x01';
          do {
            puVar13 = FUN_7103264590(lVar38 + 0x160,(uint)lVar23);
            cVar33 = cVar25;
            if ((((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) &&
               (((ulong)puVar13 & 0xffffffffff) != 0)) {
              pppppppppppplVar39 =
                   (long ************)
                   (ulong)(uint)(*(int *)(pcVar42 + -6) + (int)pppppppppppplVar39);
              if (pcVar42[-1] != '\0') {
                uVar48 = 1;
              }
              cVar33 = '\0';
              if (*pcVar42 != '\0') {
                cVar33 = cVar25;
              }
            }
            lVar23 = lVar23 + 1;
            pcVar42 = pcVar42 + 8;
            cVar25 = cVar33;
          } while (lVar23 != 99);
          uVar31 = uVar19 >> 0x30;
          uVar28 = 0xe;
          lVar23 = 0xd;
          uVar11 = 0;
          local_c8 = (long ***********)CONCAT71(local_c8._1_7_,uVar48);
          local_88 = (long ***********)CONCAT71(local_88._1_7_,cVar33);
          uVar43 = 0;
          goto LAB_7101a29594;
        }
        if (iVar9 == 0) {
          puVar2 = (ulong *)(*(long *)*puVar34 + 0x1290);
          lVar38 = 0;
          uVar11 = 0;
          lVar23 = *(long *)(DAT_710532f730 + 8) + 0x160;
          puVar49 = puVar2;
          puVar55 = puVar2;
          do {
            puVar13 = FUN_7103264590(lVar23,(uint)lVar38);
            puVar50 = puVar49;
            uVar43 = uVar11;
            if (((((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) &&
                (((ulong)puVar13 & 0xffffffffff) != 0)) &&
               (puVar50 = puVar55, uVar43 = (uint)*puVar55, (uint)*puVar55 <= uVar11)) {
              puVar50 = puVar49;
              uVar43 = uVar11;
            }
            uVar11 = uVar43;
            lVar38 = lVar38 + 1;
            puVar55 = puVar55 + 1;
            puVar49 = puVar50;
          } while (lVar38 != 99);
          ppppppppppplVar51 =
               (long ***********)
               FUN_7103264590(lVar23,(uint)((ulong)((long)puVar50 - (long)puVar2) >> 3));
          uVar19 = *puVar50;
          param_4 = (long ************)0x1;
          param_3 = (long ***********)&local_88;
          uVar31 = uVar19 >> 0x30;
          uVar10 = FUN_71017c0da0(*(long *)*puVar34,(undefined1 *)&local_c8,(char *)param_3,1);
          pppppppppppplVar39 = (long ************)(ulong)uVar10;
          if ((uVar19 >> 0x30 & 0xff) == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = (uint)uVar19;
            if (100 < uVar11) {
              uVar11 = 0x34c25 - uVar11;
            }
          }
          uVar28 = 4;
          lVar23 = 3;
          cVar33 = (char)local_88;
          uVar43 = 0;
          if ((char)local_88 != '\0') {
            uVar43 = uVar10;
          }
          goto LAB_7101a29594;
        }
        local_140._0_4_ = 0;
        local_108 = (long ***********)0x0;
        local_140._4_4_ = 0xffffffff;
        local_138 = 0xffffffff;
        uStack_134 = 0;
        local_130 = -1;
        uStack_12c = 0;
        local_128 = (long ***********)0xffffffffffffffff;
        local_120 = 0xffffffff00000000;
        local_118 = (long ***********)&DAT_c1ffff0000000000;
        local_110 = 0;
      }
      FUN_7103776640(&local_88,(long)&local_e0,(byte ****)"set_parts_score_0",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      pppppppppplVar18 = local_80;
      FUN_7103778300(0x3f800000,(long)local_80,0x7104291612);
      FUN_7103778300(0x3f800000,(long)local_80,0x710429161c);
      local_c8 = (long ***********)&DAT_ffffffff00000000;
      local_c0 = (long ***********)0xffffffff;
      local_b8 = 0xffffffff;
      FUN_7101a1be30((long)&local_88,(int *)&local_c8,(ulong)param_3,(ulong)param_4,param_5,param_6,
                     param_7,param_8);
      pppppppppppplVar39 = &local_c8;
      uVar19 = 0;
      local_c8 = (long ***********)&DAT_c1ffff0000000000;
      local_c0 = (long ***********)((ulong)local_c0 & 0xffffffff00000000);
      FUN_7101a1bc20(param_1,(long)&local_88,0,(byte ****)pppppppppppplVar39,param_5,param_6,param_7
                     ,param_8);
      FUN_7103776640(&local_150,(long)&local_e0,(byte ****)"set_parts_score_1",uVar19,
                     pppppppppppplVar39,param_5,param_6,param_7,param_8);
      uVar31 = local_148;
      FUN_7103778300(0x3f800000,local_148,0x7104291612);
      FUN_7103778300(0x3f800000,local_148,0x7104339bcf);
      FUN_7101a1be30((long)&local_150,(int *)&local_140,uVar19,(ulong)pppppppppppplVar39,param_5,
                     param_6,param_7,param_8);
      pppppppppppplVar39 = &local_118;
      uVar20 = 0;
      FUN_7101a1bc20(param_1,(long)&local_150,0,(byte ****)pppppppppppplVar39,param_5,param_6,
                     param_7,param_8);
      FUN_7103776640(&local_160,(long)&local_e0,(byte ****)"set_parts_score_2",uVar20,
                     pppppppppppplVar39,param_5,param_6,param_7,param_8);
      uVar19 = local_158;
      FUN_7103778300(0x3f800000,local_158,0x7104291612);
      FUN_7103778300(0x3f800000,local_158,0x710439ce1e);
      FUN_7101a1be30((long)&local_160,(int *)&uStack_12c,uVar20,(ulong)pppppppppppplVar39,param_5,
                     param_6,param_7,param_8);
      pppppppppppplVar39 = &local_c8;
      local_c8 = (long ***********)&DAT_c1ffff0000000000;
      pppplVar21 = (long ****)0x0;
      local_c0 = (long ***********)((ulong)local_c0 & 0xffffffff00000000);
      FUN_7101a1bc20(param_1,(long)&local_160,0,(byte ****)pppppppppppplVar39,param_5,param_6,
                     param_7,param_8);
      iVar9 = (int)local_120;
      FUN_7103776390(&local_c8,(undefined8 *)(**(long **)(param_1 + 0x198) + 8),pppplVar21,
                     (byte ****)pppppppppppplVar39,param_5,param_6,param_7,param_8);
      ppppppppppplVar40 = local_108;
      FUN_7101a2ae50((long)&local_c8,iVar9,local_108,pppppppppppplVar39,param_5,param_6,param_7,
                     param_8);
      ppppppppppplVar51 = local_c0;
      local_c8 = (long ***********)&PTR_FUN_710523d988;
      local_c0 = (long ***********)0x0;
      if (ppppppppppplVar51 != (long ***********)0x0) {
        uVar20 = *(ulong *)((long)ppppppppppplVar51 + 0x18);
        *(undefined ***)((long)ppppppppppplVar51 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)ppppppppppplVar51 + 0x18) = 0;
        if (uVar20 != 0) {
          FUN_710392eb40(uVar20);
        }
        FUN_710392eb40((ulong)ppppppppppplVar51);
      }
      local_160 = (long ***********)&PTR_FUN_710523d988;
      local_158 = 0;
      if (uVar19 != 0) {
        uVar20 = *(ulong *)(uVar19 + 0x18);
        *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar19 + 0x18) = 0;
        if (uVar20 != 0) {
          FUN_710392eb40(uVar20);
        }
        FUN_710392eb40(uVar19);
      }
      local_150 = (long ************)&PTR_FUN_710523d988;
      local_148 = 0;
      if (uVar31 != 0) {
        uVar19 = *(ulong *)(uVar31 + 0x18);
        *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar31 + 0x18) = 0;
        if (uVar19 != 0) {
          FUN_710392eb40(uVar19);
        }
        FUN_710392eb40(uVar31);
      }
      local_88 = (long ***********)&PTR_FUN_710523d988;
      local_80 = (long **********)0x0;
      if (pppppppppplVar18 != (long **********)0x0) {
        ppppppppplVar16 = pppppppppplVar18[3];
        pppppppppplVar18[2] = (long *********)&PTR_FUN_710523d9a8;
        pppppppppplVar18[3] = (long *********)0x0;
        if (ppppppppplVar16 != (long *********)0x0) {
          FUN_710392eb40((ulong)ppppppppplVar16);
        }
        goto LAB_7101a29ea4;
      }
    }
    else {
      iVar26 = *(int *)(param_1 + 0x164);
      local_140._0_4_ = 0;
      local_140._4_4_ = 0xffffffff;
      local_130 = -1;
      local_138 = 0xffffffff;
      uStack_134 = 0;
      local_128 = (long ***********)&DAT_c1ffff0000000000;
      uVar19 = local_120 >> 0x20;
      local_120 = local_120 & 0xffffffff00000000;
      local_118 = (long ***********)&DAT_c1ffff0000000000;
      uVar31 = local_110 >> 0x20;
      local_110 = local_110 & 0xffffffff00000000;
      local_108 = (long ***********)&DAT_c1ffff0000000000;
      local_100 = 0;
      local_f8 = (byte ***)&DAT_c1ffff0000000000;
      local_f0 = 0;
      local_e8 = (long ***********)0x0;
      puVar34 = *(undefined8 **)(*DAT_7105314510 + 0x208);
      if (iVar9 == 4) {
        if (iVar26 == 1) {
          lVar23 = *(long *)*puVar34;
          local_100 = (uint)*(byte *)(lVar23 + 0x236a);
          param_3 = (long ***********)(ulong)*(uint *)(lVar23 + 0x2340);
          local_118 = *(long ************)(lVar23 + 0x2350);
          cVar25 = *(char *)(lVar23 + 0x2344);
          local_138 = 0;
          cVar33 = *(char *)(lVar23 + 0x2345);
          local_128 = *(long ************)(lVar23 + 0x2348);
          uVar11 = (uint)*(byte *)(lVar23 + 0x2368);
          lVar38 = 0x11;
          uVar43 = (uint)*(byte *)(lVar23 + 0x2369);
          local_f0 = (uint)*(byte *)(lVar23 + 0x236b);
          local_108 = *(long ************)(lVar23 + 0x2358);
          local_f8 = *(byte ****)(lVar23 + 0x2360);
        }
        else if (iVar26 == 2) {
          lVar23 = *(long *)*puVar34;
          local_100 = (uint)*(byte *)(lVar23 + 0x22f2);
          param_3 = (long ***********)(ulong)*(uint *)(lVar23 + 0x22c8);
          local_118 = *(long ************)(lVar23 + 0x22d8);
          cVar25 = *(char *)(lVar23 + 0x22cc);
          local_138 = 0;
          cVar33 = *(char *)(lVar23 + 0x22cd);
          local_128 = *(long ************)(lVar23 + 0x22d0);
          uVar11 = (uint)*(byte *)(lVar23 + 0x22f0);
          lVar38 = 0xc;
          uVar43 = (uint)*(byte *)(lVar23 + 0x22f1);
          local_f0 = (uint)*(byte *)(lVar23 + 0x22f3);
          local_108 = *(long ************)(lVar23 + 0x22e0);
          local_f8 = *(byte ****)(lVar23 + 0x22e8);
        }
        else {
          lVar23 = *(long *)*puVar34;
          local_138 = *(uint *)(lVar23 + 0x2250);
          param_3 = (long ***********)(ulong)local_138;
          cVar25 = *(char *)(lVar23 + 0x2254);
          local_128 = *(long ************)(lVar23 + 0x2258);
          cVar33 = *(char *)(lVar23 + 0x2255);
          local_118 = *(long ************)(lVar23 + 0x2260);
          local_108 = *(long ************)(lVar23 + 0x2268);
          local_f8 = *(byte ****)(lVar23 + 0x2270);
          uVar11 = (uint)*(byte *)(lVar23 + 0x2278);
          uVar43 = (uint)*(byte *)(lVar23 + 0x2279);
          local_100 = (uint)*(byte *)(lVar23 + 0x227a);
          local_f0 = (uint)*(byte *)(lVar23 + 0x227b);
          if (cVar33 == '\0') {
            local_138 = 0;
          }
          else if (100 < local_138) {
            local_138 = 0x34c25 - local_138;
          }
          lVar38 = 7;
        }
        local_140._0_4_ = (uint)(cVar25 != '\0');
        if (cVar33 != '\0') {
          local_140._0_4_ = 2;
        }
        local_140._4_4_ = (uint)param_3;
        lVar23 = **(long **)(*DAT_7105314510 + 0x68);
        lVar29 = *(long *)(lVar23 + 8);
LAB_7101a29bf0:
        local_110 = CONCAT44((int)uVar31,uVar43);
        local_120 = CONCAT44((int)uVar19,uVar11);
        bVar8 = *(int *)(lVar29 + lVar38 * 0x1a8 + 0x20) == 0;
        if (bVar8) {
          local_130 = 0;
        }
        else {
          local_130 = FUN_71017d1480(lVar23,(ushort)lVar38,(uint)param_3);
        }
        uStack_134 = (uint)!bVar8;
        lVar23 = *(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8);
        if (*(int *)(lVar23 + lVar38 * 0x1a8 + 0x20) == 0) {
          ppppppppppplVar40 = (long ***********)0x0;
        }
        else {
          local_c8 = (long ***********)0x0;
          FUN_7103741810(*(undefined8 *)(lVar23 + lVar38 * 0x1a8 + 0x10),(ulong *)&local_c8);
          local_e8 = local_c8;
          ppppppppppplVar40 = local_c8;
        }
      }
      else {
        if (iVar9 == 3) {
          if (iVar26 == 1) {
            lVar23 = *(long *)*puVar34;
            param_3 = (long ***********)(ulong)*(uint *)(lVar23 + 0x2318);
            local_138 = 0;
            cVar25 = *(char *)(lVar23 + 0x231c);
            lVar38 = 0x10;
            cVar33 = *(char *)(lVar23 + 0x231d);
            local_128 = *(long ************)(lVar23 + 0x2320);
            uVar11 = (uint)*(byte *)(lVar23 + 0x2338);
            uVar43 = (uint)*(byte *)(lVar23 + 0x2339);
            local_100 = (uint)*(byte *)(lVar23 + 0x233a);
            local_118 = *(long ************)(lVar23 + 9000);
            local_108 = *(long ************)(lVar23 + 0x2330);
          }
          else if (iVar26 == 2) {
            lVar23 = *(long *)*puVar34;
            param_3 = (long ***********)(ulong)*(uint *)(lVar23 + 0x22a0);
            local_138 = 0;
            cVar25 = *(char *)(lVar23 + 0x22a4);
            lVar38 = 0xb;
            cVar33 = *(char *)(lVar23 + 0x22a5);
            local_128 = *(long ************)(lVar23 + 0x22a8);
            uVar11 = (uint)*(byte *)(lVar23 + 0x22c0);
            uVar43 = (uint)*(byte *)(lVar23 + 0x22c1);
            local_100 = (uint)*(byte *)(lVar23 + 0x22c2);
            local_118 = *(long ************)(lVar23 + 0x22b0);
            local_108 = *(long ************)(lVar23 + 0x22b8);
          }
          else {
            lVar23 = *(long *)*puVar34;
            cVar25 = *(char *)(lVar23 + 0x222c);
            cVar33 = *(char *)(lVar23 + 0x222d);
            uVar11 = (uint)*(byte *)(lVar23 + 0x2248);
            uVar43 = (uint)*(byte *)(lVar23 + 0x2249);
            local_138 = *(uint *)(lVar23 + 0x2228);
            param_3 = (long ***********)(ulong)local_138;
            local_128 = *(long ************)(lVar23 + 0x2230);
            local_118 = *(long ************)(lVar23 + 0x2238);
            local_108 = *(long ************)(lVar23 + 0x2240);
            local_100 = (uint)*(byte *)(lVar23 + 0x224a);
            if (cVar33 == '\0') {
              local_138 = 0;
            }
            else if (100 < local_138) {
              local_138 = 0x34c25 - local_138;
            }
            lVar38 = 6;
          }
          local_140._0_4_ = (uint)(cVar25 != '\0');
          if (cVar33 != '\0') {
            local_140._0_4_ = 2;
          }
          plVar17 = *(long **)(*DAT_7105314510 + 0x68);
LAB_7101a29bdc:
          local_140._4_4_ = (uint)param_3;
          lVar23 = *plVar17;
          lVar29 = *(long *)(lVar23 + 8);
          goto LAB_7101a29bf0;
        }
        ppppppppppplVar40 = (long ***********)0x0;
        if (iVar9 == 2) {
          if (iVar26 == 1) {
            lVar23 = *(long *)*puVar34;
            cVar25 = *(char *)(lVar23 + 0x22fc);
            param_3 = (long ***********)(ulong)*(uint *)(lVar23 + 0x22f8);
            uVar11 = (uint)*(byte *)(lVar23 + 0x2310);
            local_128 = *(long ************)(lVar23 + 0x2300);
            cVar33 = *(char *)(lVar23 + 0x22fd);
            local_118 = *(long ************)(lVar23 + 0x2308);
            uVar43 = (uint)*(byte *)(lVar23 + 0x2311);
            local_138 = 0;
            lVar38 = 0xf;
          }
          else if (iVar26 == 2) {
            lVar23 = *(long *)*puVar34;
            cVar25 = *(char *)(lVar23 + 0x2284);
            param_3 = (long ***********)(ulong)*(uint *)(lVar23 + 0x2280);
            uVar11 = (uint)*(byte *)(lVar23 + 0x2298);
            local_128 = *(long ************)(lVar23 + 0x2288);
            cVar33 = *(char *)(lVar23 + 0x2285);
            local_118 = *(long ************)(lVar23 + 0x2290);
            uVar43 = (uint)*(byte *)(lVar23 + 0x2299);
            local_138 = 0;
            lVar38 = 10;
          }
          else {
            lVar23 = *(long *)*puVar34;
            cVar25 = *(char *)(lVar23 + 0x220c);
            local_138 = *(uint *)(lVar23 + 0x2208);
            param_3 = (long ***********)(ulong)local_138;
            cVar33 = *(char *)(lVar23 + 0x220d);
            local_128 = *(long ************)(lVar23 + 0x2210);
            local_118 = *(long ************)(lVar23 + 0x2218);
            uVar11 = (uint)*(byte *)(lVar23 + 0x2220);
            uVar43 = (uint)*(byte *)(lVar23 + 0x2221);
            if (cVar33 == '\0') {
              local_138 = 0;
            }
            else if (100 < local_138) {
              local_138 = 0x34c25 - local_138;
            }
            lVar38 = 5;
          }
          plVar17 = *(long **)(*DAT_7105314510 + 0x68);
          local_140._0_4_ = (uint)(cVar25 != '\0');
          if (cVar33 != '\0') {
            local_140._0_4_ = 2;
          }
          goto LAB_7101a29bdc;
        }
      }
      lVar23 = *(long *)(DAT_710532f730 + 8);
      if ((((ulong)local_128 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)local_128 & 0xffffffffff) != 0)) {
        lVar38 = *(long *)(lVar23 + 0x168);
        uVar11 = FUN_71032632a0(lVar38,(ulong)local_128);
        if ((uVar11 & 1) != 0) {
          local_128 = (long ***********)FUN_71032631a0(lVar38,0x11b1ccb807);
        }
      }
      if ((((ulong)local_118 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)local_118 & 0xffffffffff) != 0)) {
        lVar38 = *(long *)(lVar23 + 0x168);
        uVar11 = FUN_71032632a0(lVar38,(ulong)local_118);
        if ((uVar11 & 1) != 0) {
          local_118 = (long ***********)FUN_71032631a0(lVar38,0x11b1ccb807);
        }
      }
      if ((((ulong)local_108 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)local_108 & 0xffffffffff) != 0)) {
        lVar38 = *(long *)(lVar23 + 0x168);
        uVar11 = FUN_71032632a0(lVar38,(ulong)local_108);
        if ((uVar11 & 1) != 0) {
          local_108 = (long ***********)FUN_71032631a0(lVar38,0x11b1ccb807);
        }
      }
      if ((((ulong)local_f8 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)local_f8 & 0xffffffffff) != 0)) {
        lVar23 = *(long *)(lVar23 + 0x168);
        uVar11 = FUN_71032632a0(lVar23,(ulong)local_f8);
        if ((uVar11 & 1) != 0) {
          local_f8 = (byte ***)FUN_71032631a0(lVar23,0x11b1ccb807);
        }
      }
      FUN_7103776640(&local_88,(long)&local_e0,(byte ****)"set_parts_score_0",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      pppppppppplVar18 = local_80;
      FUN_7103778300(0x3f800000,(long)local_80,0x7104291612);
      uVar19 = (ulong)*(uint *)(param_1 + 0x160);
      FUN_7103778430((long)&local_88,"kumite_%d",uVar19,param_4,param_5,param_6,param_7,param_8);
      FUN_7101a1be30((long)&local_88,(int *)&local_140,uVar19,(ulong)param_4,param_5,param_6,param_7
                     ,param_8);
      FUN_7101a1bc20(param_1,(long)&local_88,3,&local_f8,param_5,param_6,param_7,param_8);
      FUN_7101a1bc20(param_1,(long)&local_88,2,(byte ****)&local_108,param_5,param_6,param_7,param_8
                    );
      FUN_7101a1bc20(param_1,(long)&local_88,1,(byte ****)&local_118,param_5,param_6,param_7,param_8
                    );
      pppppppppppplVar39 = (long ************)&local_128;
      pppplVar21 = (long ****)0x0;
      FUN_7101a1bc20(param_1,(long)&local_88,0,(byte ****)pppppppppppplVar39,param_5,param_6,param_7
                     ,param_8);
      uVar11 = uStack_134;
      FUN_7103776390(&local_c8,(undefined8 *)(**(long **)(param_1 + 0x198) + 8),pppplVar21,
                     (byte ****)pppppppppppplVar39,param_5,param_6,param_7,param_8);
      FUN_7101a2ae50((long)&local_c8,uVar11,ppppppppppplVar40,pppppppppppplVar39,param_5,param_6,
                     param_7,param_8);
      ppppppppppplVar51 = local_c0;
      local_c8 = (long ***********)&PTR_FUN_710523d988;
      local_c0 = (long ***********)0x0;
      if (ppppppppppplVar51 != (long ***********)0x0) {
        pppppppppplVar14 = ppppppppppplVar51[3];
        ppppppppppplVar51[2] = (long **********)&PTR_FUN_710523d9a8;
        ppppppppppplVar51[3] = (long **********)0x0;
        if (pppppppppplVar14 != (long **********)0x0) {
          FUN_710392eb40((ulong)pppppppppplVar14);
        }
        FUN_710392eb40((ulong)ppppppppppplVar51);
      }
      local_88 = (long ***********)&PTR_FUN_710523d988;
      local_80 = (long **********)0x0;
      if (pppppppppplVar18 != (long **********)0x0) {
        ppppppppplVar16 = pppppppppplVar18[3];
        pppppppppplVar18[2] = (long *********)&PTR_FUN_710523d9a8;
        pppppppppplVar18[3] = (long *********)0x0;
        if (ppppppppplVar16 != (long *********)0x0) {
          FUN_710392eb40((ulong)ppppppppplVar16);
        }
LAB_7101a29ea4:
        FUN_710392eb40((ulong)pppppppppplVar18);
      }
    }
    FUN_7101a201c0(*(undefined8 **)(param_1 + 0x298));
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(long *)(param_1 + 0x290) = param_1 + 0x298;
    *(undefined8 *)(param_1 + 0x298) = 0;
    FUN_7101a0cae0(&local_140,*(long *)(lVar30 + 8),(long **********)ppppppppppplVar40,
                   (byte ****)pppppppppppplVar39,param_5,param_6,param_7,param_8);
    puVar34 = (undefined8 *)CONCAT44(local_140._4_4_,(uint)local_140);
    puVar6 = (undefined8 *)CONCAT44(uStack_134,local_138);
    if (puVar34 != puVar6) {
      do {
        ppppppppppplVar51 = (long ***********)*puVar34;
        local_88 = ppppppppppplVar51;
        if (((ulong)ppppppppppplVar51 & 0xff00000000000000) == 0xc100000000000000 &&
            ((ulong)ppppppppppplVar51 & 0xffffffffff) != 0) {
          iVar9 = *(int *)(param_1 + 0x164);
          uVar19 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                  (undefined1 *)ppppppppppplVar51);
          if ((int)uVar19 == -1) goto LAB_7101a29fb0;
          puVar41 = *(undefined8 **)(*DAT_7105314510 + 0x208);
          if (iVar9 == 1) {
            uVar19 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                    (undefined1 *)ppppppppppplVar51);
            if ((int)uVar19 < 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(ulong *)(*(long *)*puVar41 + (long)(int)uVar19 * 8 + 0x18c0);
            }
            uVar11 = 0;
            uVar31 = uVar19 >> 0x30;
            lVar30 = 0xd;
LAB_7101a2a0c0:
            uVar43 = (uint)(uVar19 >> 0x20);
          }
          else {
            if (iVar9 != 2) {
              uVar19 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                      (undefined1 *)ppppppppppplVar51);
              if ((int)uVar19 < 0) {
                uVar19 = 0;
              }
              else {
                uVar19 = *(ulong *)(*(long *)*puVar41 + (long)(int)uVar19 * 8 + 0x1290);
              }
              uVar31 = uVar19 >> 0x30 & 0xff;
              if ((int)uVar31 == 0) {
                uVar11 = 0;
              }
              else {
                uVar11 = (uint)uVar19;
                uVar31 = uVar19 >> 0x30;
                if (100 < uVar11) {
                  uVar11 = 0x34c25 - uVar11;
                }
              }
              lVar30 = 3;
              goto LAB_7101a2a0c0;
            }
            uVar19 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                    (undefined1 *)ppppppppppplVar51);
            if ((int)uVar19 < 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(ulong *)(*(long *)*puVar41 + (long)(int)uVar19 * 8 + 0x15a8);
            }
            uVar11 = 0;
            uVar43 = (uint)(uVar19 >> 0x20);
            uVar31 = uVar19 >> 0x30;
            lVar30 = 8;
          }
          uVar10 = (uint)uVar19;
          uVar43 = uVar43 & 0xff;
          uVar28 = (uint)((uVar19 >> 0x28 & 0xff) != 0);
          if ((uVar31 & 0xff) != 0) {
            uVar28 = 2;
          }
          if (*(int *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + lVar30 * 0x1a8 + 0x20)
              == 0) {
            ppppppppppplVar52 = (long ***********)0x0;
            iVar9 = 0;
            uVar53 = 0;
          }
          else {
            iVar9 = FUN_71017d1480(**(long **)(*DAT_7105314510 + 0x68),(ushort)lVar30,uVar10);
            lVar23 = *(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8);
            if (*(int *)(lVar23 + lVar30 * 0x1a8 + 0x20) == 0) {
              local_c8 = (long ***********)0x0;
            }
            else {
              local_c8 = (long ***********)0x0;
              FUN_7103741810(*(undefined8 *)(lVar23 + lVar30 * 0x1a8 + 0x10),(ulong *)&local_c8);
            }
            uVar53 = 1;
            ppppppppppplVar52 = local_c8;
          }
        }
        else {
LAB_7101a29fb0:
          ppppppppppplVar51 = (long ***********)&DAT_c1ffff0000000000;
          uVar28 = 0;
          uVar53 = 0;
          uVar43 = 0;
          iVar9 = -1;
          uVar11 = 0xffffffff;
          uVar10 = 0xffffffff;
          ppppppppppplVar52 = (long ***********)0x0;
        }
        local_c8 = (long ***********)&local_88;
        ppppppppppplVar40 = (long ***********)&local_c8;
        plVar17 = FUN_7101a2af70((long *)(param_1 + 0x290),(ulong)local_88,
                                 (long ****)ppppppppppplVar40,(byte ****)pppppppppppplVar39,param_5,
                                 param_6,param_7,param_8);
        *(uint *)(plVar17 + 5) = uVar28;
        *(uint *)((long)plVar17 + 0x2c) = uVar10;
        *(uint *)(plVar17 + 6) = uVar11;
        *(undefined4 *)((long)plVar17 + 0x34) = uVar53;
        puVar34 = puVar34 + 1;
        *(int *)(plVar17 + 7) = iVar9;
        *(undefined4 *)((long)plVar17 + 0x3c) = 0;
        *(uint *)(plVar17 + 9) = uVar43;
        *(undefined4 *)((long)plVar17 + 0x4c) = 0;
        plVar17[8] = (long)ppppppppppplVar51;
        plVar17[0x10] = (long)ppppppppppplVar52;
        plVar17[10] = (long)&DAT_c1ffff0000000000;
        plVar17[0xb] = 0;
        plVar17[0xc] = (long)&DAT_c1ffff0000000000;
        plVar17[0xd] = 0;
        plVar17[0xe] = (long)&DAT_c1ffff0000000000;
        plVar17[0xf] = 0;
      } while (puVar6 != puVar34);
      puVar34 = (undefined8 *)CONCAT44(local_140._4_4_,(uint)local_140);
    }
    if (puVar34 != (undefined8 *)0x0) {
      local_138 = (uint)puVar34;
      uStack_134 = (uint)((ulong)puVar34 >> 0x20);
      FUN_710392eb40((ulong)puVar34);
    }
    goto LAB_7101a2a1d4;
  case 0xb:
    lVar30 = **(long **)(param_1 + 0x198);
    FUN_7103778300(0x3f800000,*(long *)(lVar30 + 0x10),0x7104454478);
    FUN_7103776910(&local_140,lVar30 + 8,(long ****)"set_txt_count",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pppppppppplVar18 = (long **********)CONCAT44(uStack_134,local_138);
    if (pppppppppplVar18[2] != (long *********)0x0) {
      param_3 = (long ***********)0x0;
      param_4 = (long ************)0x0;
      local_c8 = (long ***********)((ulong)local_c8 & 0xffffffff00000000);
      FUN_71037a2270((long *)pppppppppplVar18[2],(ushort *)&local_c8,0,0);
    }
    local_140._0_4_ = 0x523d9a8;
    local_140._4_4_ = 0x71;
    local_138 = 0;
    uStack_134 = 0;
    if (pppppppppplVar18 == (long **********)0x0) goto switchD_7101a275bc_caseD_c;
    goto LAB_7101a2a1fc;
  default:
    goto switchD_7101a275bc_caseD_c;
  case 0xd:
    FUN_7103776390(&local_88,(undefined8 *)(**(long **)(param_1 + 0x198) + 8),(long ****)param_3,
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    FUN_7101a0e010((uint *)&local_c8);
    FUN_7103776640(&local_150,(long)&local_88,(byte ****)"set_parts_score_0",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    uVar7 = local_148;
    FUN_7103778300(0x3f800000,local_148,0x7104291612);
    FUN_7103778300(0x3f800000,local_148,0x710429161c);
    local_140._0_4_ = 0;
    local_140._4_4_ = 0xffffffff;
    local_138 = 0xffffffff;
    uStack_134 = 0;
    local_130 = -1;
    FUN_7101a1c140((long)&local_150,(int *)&local_140,(ulong)param_3,(ulong)param_4,param_5,param_6,
                   param_7,param_8);
    ppppbVar22 = (byte ****)&local_140;
    local_140._0_4_ = 0;
    local_140._4_4_ = 0xc1ffff00;
    uVar19 = 0;
    local_138 = 0;
    FUN_7101a1bc20(param_1,(long)&local_150,0,ppppbVar22,param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_160,(long)&local_88,(byte ****)"set_parts_score_1",uVar19,ppppbVar22,
                   param_5,param_6,param_7,param_8);
    uVar20 = local_158;
    FUN_7103778300(0x3f800000,local_158,0x7104291612);
    FUN_7103778300(0x3f800000,local_158,0x7104339bcf);
    FUN_7101a1c140((long)&local_160,(int *)&local_c8,uVar19,(ulong)ppppbVar22,param_5,param_6,
                   param_7,param_8);
    ppppbVar22 = apppbStack_a0;
    uVar19 = 0;
    FUN_7101a1bc20(param_1,(long)&local_160,0,ppppbVar22,param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_170,(long)&local_88,(byte ****)"set_parts_score_2",uVar19,ppppbVar22,
                   param_5,param_6,param_7,param_8);
    uVar31 = local_168;
    FUN_7103778300(0x3f800000,local_168,0x7104291612);
    FUN_7103778300(0x3f800000,local_168,0x710439ce1e);
    FUN_7101a1c140((long)&local_170,aiStack_b4,uVar19,(ulong)ppppbVar22,param_5,param_6,param_7,
                   param_8);
    param_4 = (long ************)&local_140;
    pppplVar21 = (long ****)0x0;
    local_140._0_4_ = 0;
    local_140._4_4_ = 0xc1ffff00;
    local_138 = 0;
    FUN_7101a1bc20(param_1,(long)&local_170,0,(byte ****)param_4,param_5,param_6,param_7,param_8);
    FUN_7103776390(&local_140,(undefined8 *)(**(long **)(param_1 + 0x198) + 8),pppplVar21,
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    FUN_7101a2ae50((long)&local_140,local_a8,local_90,param_4,param_5,param_6,param_7,param_8);
    uVar19 = CONCAT44(uStack_134,local_138);
    local_140._0_4_ = 0x523d988;
    local_140._4_4_ = 0x71;
    local_138 = 0;
    uStack_134 = 0;
    param_3 = local_90;
    if (uVar19 != 0) {
      uVar12 = *(ulong *)(uVar19 + 0x18);
      *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar19 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
        param_3 = local_90;
      }
      FUN_710392eb40(uVar19);
    }
    FUN_7101a201c0(*(undefined8 **)(param_1 + 0x298));
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(long *)(param_1 + 0x290) = param_1 + 0x298;
    *(undefined8 *)(param_1 + 0x298) = 0;
    FUN_7101a0cae0(&local_e0,*(long *)(lVar30 + 8),(long **********)param_3,(byte ****)param_4,
                   param_5,param_6,param_7,param_8);
    pppppppppplVar18 = local_d8;
    if (local_e0 != local_d8) {
      pppppppppplVar14 = local_e0;
      do {
        pppppppppplVar46 = pppppppppplVar14 + 1;
        local_178 = *pppppppppplVar14;
        FUN_7101a0dde0((uint *)&local_140,(undefined1 *)local_178);
        param_3 = &local_68;
        local_68 = &local_178;
        plVar17 = FUN_7101a2af70((long *)(param_1 + 0x290),(ulong)local_178,(long ****)param_3,
                                 (byte ****)param_4,param_5,param_6,param_7,param_8);
        plVar17[7] = CONCAT44(uStack_12c,local_130);
        plVar17[8] = (long)local_128;
        plVar17[5] = CONCAT44(local_140._4_4_,(uint)local_140);
        plVar17[6] = CONCAT44(uStack_134,local_138);
        plVar17[0xb] = local_110;
        plVar17[0xc] = (long)local_108;
        plVar17[9] = local_120;
        plVar17[10] = (long)local_118;
        plVar17[0xf] = CONCAT44(uStack_ec,local_f0);
        plVar17[0x10] = (long)local_e8;
        plVar17[0xd] = CONCAT44(uStack_fc,local_100);
        plVar17[0xe] = (long)local_f8;
        pppppppppplVar14 = pppppppppplVar46;
      } while (pppppppppplVar18 != pppppppppplVar46);
    }
    if (local_e0 != (long **********)0x0) {
      local_d8 = local_e0;
      FUN_710392eb40((ulong)local_e0);
    }
    local_170 = &PTR_FUN_710523d988;
    local_168 = 0;
    if (uVar31 != 0) {
      uVar19 = *(ulong *)(uVar31 + 0x18);
      *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar31 + 0x18) = 0;
      if (uVar19 != 0) {
        FUN_710392eb40(uVar19);
      }
      FUN_710392eb40(uVar31);
    }
    local_160 = (long ***********)&PTR_FUN_710523d988;
    local_158 = 0;
    if (uVar20 != 0) {
      uVar19 = *(ulong *)(uVar20 + 0x18);
      *(undefined ***)(uVar20 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar20 + 0x18) = 0;
      if (uVar19 != 0) {
        FUN_710392eb40(uVar19);
      }
      FUN_710392eb40(uVar20);
    }
    local_150 = (long ************)&PTR_FUN_710523d988;
    local_148 = 0;
    if (uVar7 != 0) {
      uVar19 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar19 != 0) {
        FUN_710392eb40(uVar19);
      }
      FUN_710392eb40(uVar7);
    }
    goto LAB_7101a27e50;
  case 0xe:
    FUN_7103776390(&local_e0,(undefined8 *)(**(long **)(param_1 + 0x198) + 8),(long ****)param_3,
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    local_108 = (long ***********)&DAT_c1ffff0000000000;
    local_f8 = (byte ***)&DAT_c1ffff0000000000;
    local_100 = 0;
    local_f0 = 0;
    local_e8 = (long ***********)0x0;
    lVar30 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0x208);
    ppppppppppplVar51 = *(long ************)(lVar30 + 0x2378);
    local_140._4_4_ = *(uint *)(lVar30 + 0x2370);
    local_118 = *(long ************)(lVar30 + 0x2380);
    local_120 = CONCAT44(local_120._4_4_,(uint)*(byte *)(lVar30 + 0x2388));
    local_110 = CONCAT44(local_110._4_4_,(uint)*(byte *)(lVar30 + 0x2389));
    local_140._0_4_ = (uint)(*(char *)(lVar30 + 0x2374) != '\0');
    if (*(char *)(lVar30 + 0x2375) != '\0') {
      local_140._0_4_ = 2;
    }
    local_138 = (uint)*(byte *)(lVar30 + 0x2376);
    lVar30 = *(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8);
    uVar11 = *(uint *)(lVar30 + 0x2140);
    local_128 = ppppppppppplVar51;
    if (uVar11 == 0) {
      iVar9 = 0;
      uStack_134 = 0;
      local_130 = 0;
    }
    else {
      uVar19 = 0;
      puVar32 = (uint *)(lVar30 + 0x214c);
      do {
        if (*puVar32 <= local_140._4_4_) break;
        uVar19 = uVar19 + 1;
        puVar32 = puVar32 + 2;
      } while (uVar19 < uVar11);
      iVar9 = 1;
      if ((uVar19 & 0x7fffffff) == 0) {
        iVar26 = 1;
      }
      else if (((uint)uVar19 & 0x7fffffff) == 0x32) {
        iVar26 = *(int *)(lVar30 + 0x2144);
      }
      else {
        lVar23 = lVar30 + 0x2148 + (long)(int)(uint)uVar19 * 8;
        piVar1 = (int *)(lVar30 + 0x2148 + (uVar19 & 0xffffffff) * 8);
        iVar26 = piVar1[1];
        uVar43 = *(uint *)(lVar23 + -8);
        iVar26 = (int)((1.0 - (float)(local_140._4_4_ - iVar26) /
                              (float)(uint)(*(int *)(lVar23 + -4) - iVar26)) *
                       (float)(*piVar1 - uVar43) + (float)uVar43);
      }
      local_130 = (1 - iVar26) + *(int *)(lVar30 + 0x2144);
      uStack_134 = 1;
      if (uVar11 != 0) {
        local_c8 = (long ***********)0x0;
        FUN_7103741810(*(undefined8 *)(lVar30 + 0x2130),(ulong *)&local_c8);
        iVar9 = 1;
        local_e8 = local_c8;
      }
    }
    ppppppppppplVar40 = local_e8;
    lVar30 = *(long *)(DAT_710532f730 + 8);
    pppppppppppplVar39 = (long ************)&local_128;
    if ((((ulong)ppppppppppplVar51 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)ppppppppppplVar51 & 0xffffffffff) != 0)) {
      lVar23 = *(long *)(lVar30 + 0x168);
      uVar11 = FUN_71032632a0(lVar23,(ulong)ppppppppppplVar51);
      if ((uVar11 & 1) != 0) {
        local_128 = (long ***********)FUN_71032631a0(lVar23,0x11b1ccb807);
      }
    }
    if ((((ulong)local_118 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)local_118 & 0xffffffffff) != 0)) {
      lVar30 = *(long *)(lVar30 + 0x168);
      uVar11 = FUN_71032632a0(lVar30,(ulong)local_118);
      if ((uVar11 & 1) != 0) {
        local_118 = (long ***********)FUN_71032631a0(lVar30,0x11b1ccb807);
      }
    }
    FUN_7103776640(&local_88,(long)&local_e0,(byte ****)"set_parts_score_0",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    pppppppppplVar18 = local_80;
    FUN_7103778300(0x3f800000,(long)local_80,0x7104291612);
    FUN_7103778300(0x3f800000,(long)local_80,0x710437bffd);
    FUN_7101a1c140((long)&local_88,(int *)&local_140,(ulong)param_3,(ulong)param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7101a1bc20(param_1,(long)&local_88,3,&local_f8,param_5,param_6,param_7,param_8);
    FUN_7101a1bc20(param_1,(long)&local_88,2,(byte ****)&local_108,param_5,param_6,param_7,param_8);
    FUN_7101a1bc20(param_1,(long)&local_88,1,(byte ****)&local_118,param_5,param_6,param_7,param_8);
    pppplVar21 = (long ****)0x0;
    FUN_7101a1bc20(param_1,(long)&local_88,0,(byte ****)pppppppppppplVar39,param_5,param_6,param_7,
                   param_8);
    FUN_7103776390(&local_c8,(undefined8 *)(**(long **)(param_1 + 0x198) + 8),pppplVar21,
                   (byte ****)pppppppppppplVar39,param_5,param_6,param_7,param_8);
    FUN_7101a2ae50((long)&local_c8,iVar9,ppppppppppplVar40,pppppppppppplVar39,param_5,param_6,
                   param_7,param_8);
    ppppppppppplVar51 = local_c0;
    local_c8 = (long ***********)&PTR_FUN_710523d988;
    local_c0 = (long ***********)0x0;
    if (ppppppppppplVar51 != (long ***********)0x0) {
      pppppppppplVar14 = ppppppppppplVar51[3];
      ppppppppppplVar51[2] = (long **********)&PTR_FUN_710523d9a8;
      ppppppppppplVar51[3] = (long **********)0x0;
      if (pppppppppplVar14 != (long **********)0x0) {
        FUN_710392eb40((ulong)pppppppppplVar14);
      }
      FUN_710392eb40((ulong)ppppppppppplVar51);
    }
    local_88 = (long ***********)&PTR_FUN_710523d988;
    local_80 = (long **********)0x0;
    if (pppppppppplVar18 != (long **********)0x0) {
      ppppppppplVar16 = pppppppppplVar18[3];
      pppppppppplVar18[2] = (long *********)&PTR_FUN_710523d9a8;
      pppppppppplVar18[3] = (long *********)0x0;
      if (ppppppppplVar16 != (long *********)0x0) {
        FUN_710392eb40((ulong)ppppppppplVar16);
      }
      FUN_710392eb40((ulong)pppppppppplVar18);
    }
LAB_7101a2a1d4:
    pppppppppplVar18 = local_d8;
    local_e0 = (long **********)&PTR_FUN_710523d988;
    local_d8 = (long **********)0x0;
    param_3 = ppppppppppplVar40;
    param_4 = pppppppppppplVar39;
joined_r0x007101a27e58:
    if (pppppppppplVar18 == (long **********)0x0) goto switchD_7101a275bc_caseD_c;
    goto LAB_7101a2a1e4;
  case 0xf:
    FUN_7103776390(&local_88,(undefined8 *)(**(long **)(param_1 + 0x1a8) + 8),(long ****)param_3,
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    FUN_7101a0e010((uint *)&local_c8);
    FUN_7101a2ae50((long)&local_88,local_a8,local_90,param_4,param_5,param_6,param_7,param_8);
    if (local_a8 != 0) {
      FUN_7103778300(0x3f800000,(long)local_80,0x710437bff3);
    }
    local_e0 = (long **********)&DAT_c1ffff0000000000;
    local_d8._0_4_ = 0;
    local_140._0_4_ = 0;
    local_140._4_4_ = 0xffffffff;
    local_138 = 0xffffffff;
    uStack_134 = 0;
    local_130 = 0xffffffff;
    FUN_7101a1b4a0(param_1,0,(ulong *)&local_e0,(byte ****)&local_140,param_5,param_6,param_7,
                   param_8);
    local_e0 = (long **********)&DAT_c1ffff0000000000;
    local_d8._0_4_ = 0;
    local_140._0_4_ = 0;
    local_140._4_4_ = 0xffffffff;
    local_138 = 0xffffffff;
    uStack_134 = 0;
    local_130 = 0xffffffff;
    FUN_7101a1b4a0(param_1,1,(ulong *)&local_e0,(byte ****)&local_140,param_5,param_6,param_7,
                   param_8);
    local_e0 = (long **********)&DAT_c1ffff0000000000;
    local_d8._0_4_ = 0;
    local_140._0_4_ = 0;
    local_140._4_4_ = 0xffffffff;
    local_138 = 0xffffffff;
    uStack_134 = 0;
    local_130 = 0xffffffff;
    FUN_7101a1b4a0(param_1,2,(ulong *)&local_e0,(byte ****)&local_140,param_5,param_6,param_7,
                   param_8);
    param_3 = &local_e0;
    param_4 = (long ************)&local_140;
    local_e0 = (long **********)&DAT_c1ffff0000000000;
    local_d8 = (long **********)((ulong)local_d8._4_4_ << 0x20);
    local_140._0_4_ = 0;
    local_140._4_4_ = 0xffffffff;
    local_138 = 0xffffffff;
    uStack_134 = 0;
    local_130 = -1;
    FUN_7101a1b4a0(param_1,3,(ulong *)param_3,(byte ****)param_4,param_5,param_6,param_7,param_8);
    FUN_7101a201c0(*(undefined8 **)(param_1 + 0x298));
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(long *)(param_1 + 0x290) = param_1 + 0x298;
    *(undefined8 *)(param_1 + 0x298) = 0;
    FUN_7101a0cae0(&local_e0,*(long *)(lVar30 + 8),(long **********)param_3,(byte ****)param_4,
                   param_5,param_6,param_7,param_8);
    pppppppppplVar18 = local_d8;
    if (local_e0 != local_d8) {
      pppppppppplVar14 = local_e0;
      do {
        pppppppppplVar46 = pppppppppplVar14 + 1;
        local_160 = (long ***********)*pppppppppplVar14;
        FUN_7101a0dde0((uint *)&local_140,(undefined1 *)local_160);
        param_3 = (long ***********)&local_150;
        local_150 = &local_160;
        plVar17 = FUN_7101a2af70((long *)(param_1 + 0x290),(ulong)local_160,(long ****)param_3,
                                 (byte ****)param_4,param_5,param_6,param_7,param_8);
        plVar17[7] = CONCAT44(uStack_12c,local_130);
        plVar17[8] = (long)local_128;
        plVar17[5] = CONCAT44(local_140._4_4_,(uint)local_140);
        plVar17[6] = CONCAT44(uStack_134,local_138);
        plVar17[0xb] = local_110;
        plVar17[0xc] = (long)local_108;
        plVar17[9] = local_120;
        plVar17[10] = (long)local_118;
        plVar17[0xf] = CONCAT44(uStack_ec,local_f0);
        plVar17[0x10] = (long)local_e8;
        plVar17[0xd] = CONCAT44(uStack_fc,local_100);
        plVar17[0xe] = (long)local_f8;
        pppppppppplVar14 = pppppppppplVar46;
      } while (pppppppppplVar18 != pppppppppplVar46);
    }
    if (local_e0 != (long **********)0x0) {
      local_d8 = local_e0;
      FUN_710392eb40((ulong)local_e0);
    }
LAB_7101a27e50:
    pppppppppplVar18 = local_80;
    local_88 = (long ***********)&PTR_FUN_710523d988;
    local_80 = (long **********)0x0;
    goto joined_r0x007101a27e58;
  case 0x14:
  case 0x15:
    FUN_7103776390(&local_e0,(undefined8 *)(**(long **)(param_1 + 0x198) + 8),(long ****)param_3,
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    if (*(int *)(param_1 + 0x160) < 2) {
      local_88 = (long ***********)&DAT_c1ffff0000000000;
      bVar8 = FUN_7101798a80((uint *)&local_150,&local_88,0x15);
      if ((bVar8) && (*(int *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + 0x22e8) != 0)) {
        iVar9 = FUN_71017d1480(**(long **)(*DAT_7105314510 + 0x68),0x15,(uint)local_150);
        uStack_134 = 1;
        local_150 = (long ************)CONCAT44(local_150._4_4_,iVar9);
      }
      else {
        uStack_134 = 0;
      }
      uVar19 = 0x16;
      local_140._0_4_ = 0;
      local_140._4_4_ = 0xc1ffff00;
      bVar8 = FUN_7101798a80((uint *)&local_160,&local_140,0x16);
      lVar23 = *(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8);
      if ((bVar8) && (*(uint *)(lVar23 + 0x2490) != 0)) {
        uVar31 = 0;
        puVar32 = (uint *)(lVar23 + 0x249c);
        do {
          if (*puVar32 <= (uint)local_160) break;
          uVar31 = uVar31 + 1;
          puVar32 = puVar32 + 2;
        } while (uVar31 < *(uint *)(lVar23 + 0x2490));
        uVar11 = 1;
        if ((uVar31 & 0x7fffffff) == 0) {
          iVar9 = 1;
        }
        else if (((uint)uVar31 & 0x7fffffff) == 0x32) {
          iVar9 = *(int *)(lVar23 + 0x2494);
        }
        else {
          lVar38 = lVar23 + 0x2498 + (long)(int)(uint)uVar31 * 8;
          piVar1 = (int *)(lVar23 + 0x2498 + (uVar31 & 0xffffffff) * 8);
          iVar9 = piVar1[1];
          uVar43 = *(uint *)(lVar38 + -8);
          iVar9 = (int)((1.0 - (float)((uint)local_160 - iVar9) /
                               (float)(uint)(*(int *)(lVar38 + -4) - iVar9)) *
                        (float)(*piVar1 - uVar43) + (float)uVar43);
        }
        local_160 = (long ***********)
                    CONCAT44(local_160._4_4_,(1 - iVar9) + *(int *)(lVar23 + 0x2494));
      }
      else {
        uVar11 = 0;
      }
      local_140._4_4_ = 0xffffffff;
      local_138 = 0xffffffff;
      local_128 = (long ***********)0xffffffffffffffff;
      local_118 = local_88;
      local_130 = (uint)local_150;
      local_108 = (long ***********)0x0;
      local_110 = (ulong)local_110._4_4_ << 0x20;
      local_120 = CONCAT44((uint)local_160,uVar11);
      local_140._0_4_ = uStack_134;
      uStack_12c = uVar11;
      if (*(int *)(lVar23 + 0x22e8) != 0) {
        local_c8 = (long ***********)0x0;
        FUN_7103741810(*(undefined8 *)(lVar23 + 0x22d8),(ulong *)&local_c8);
        local_108 = local_c8;
      }
      param_3 = local_108;
      FUN_7103776640(&local_88,(long)&local_e0,(byte ****)"set_parts_score_0",uVar19,param_4,param_5
                     ,param_6,param_7,param_8);
      pppppppppplVar18 = local_80;
      FUN_7103778300(0x3f800000,(long)local_80,0x710435af85);
      FUN_7103778300(0x3f800000,(long)local_80,0x710436bccf);
      local_c8 = (long ***********)&DAT_ffffffff00000000;
      local_c0 = (long ***********)0xffffffff;
      local_b8 = 0xffffffff;
      FUN_7101a1c070((long)&local_88,(int *)&local_c8,uVar19,param_4,param_5,param_6,param_7,param_8
                    );
      pppppppppppplVar39 = &local_c8;
      local_c8 = (long ***********)&DAT_c1ffff0000000000;
      uVar19 = 0;
      local_c0 = (long ***********)((ulong)local_c0 & 0xffffffff00000000);
      FUN_7101a1bc20(param_1,(long)&local_88,0,(byte ****)pppppppppppplVar39,param_5,param_6,param_7
                     ,param_8);
      FUN_7103776640(&local_150,(long)&local_e0,(byte ****)"set_parts_score_1",uVar19,
                     pppppppppppplVar39,param_5,param_6,param_7,param_8);
      uVar31 = local_148;
      FUN_7103778300(0x3f800000,local_148,0x710435af85);
      FUN_7103778300(0x3f800000,local_148,0x7104442ff4);
      FUN_7101a1c070((long)&local_150,(int *)&local_140,uVar19,pppppppppppplVar39,param_5,param_6,
                     param_7,param_8);
      pppppppppppplVar39 = &local_118;
      uVar20 = 0;
      FUN_7101a1bc20(param_1,(long)&local_150,0,(byte ****)pppppppppppplVar39,param_5,param_6,
                     param_7,param_8);
      FUN_7103776640(&local_160,(long)&local_e0,(byte ****)"set_parts_score_2",uVar20,
                     pppppppppppplVar39,param_5,param_6,param_7,param_8);
      uVar19 = local_158;
      FUN_7103778300(0x3f800000,local_158,0x710435af85);
      FUN_7103778300(0x3f800000,local_158,0x710439ce31);
      FUN_7101a1c070((long)&local_160,(int *)&uStack_12c,uVar20,pppppppppppplVar39,param_5,param_6,
                     param_7,param_8);
      param_4 = &local_c8;
      pppplVar21 = (long ****)0x0;
      local_c8 = (long ***********)&DAT_c1ffff0000000000;
      local_c0 = (long ***********)((ulong)local_c0 & 0xffffffff00000000);
      FUN_7101a1bc20(param_1,(long)&local_160,0,(byte ****)param_4,param_5,param_6,param_7,param_8);
      FUN_7103776390(&local_c8,(undefined8 *)(**(long **)(param_1 + 0x198) + 8),pppplVar21,
                     (byte ****)param_4,param_5,param_6,param_7,param_8);
      FUN_7101a2ae50((long)&local_c8,uVar11,param_3,param_4,param_5,param_6,param_7,param_8);
      ppppppppppplVar51 = local_c0;
      local_c8 = (long ***********)&PTR_FUN_710523d988;
      local_c0 = (long ***********)0x0;
      if (ppppppppppplVar51 != (long ***********)0x0) {
        uVar20 = *(ulong *)((long)ppppppppppplVar51 + 0x18);
        *(undefined ***)((long)ppppppppppplVar51 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)ppppppppppplVar51 + 0x18) = 0;
        if (uVar20 != 0) {
          FUN_710392eb40(uVar20);
        }
        FUN_710392eb40((ulong)ppppppppppplVar51);
      }
      local_160 = (long ***********)&PTR_FUN_710523d988;
      local_158 = 0;
      if (uVar19 != 0) {
        uVar20 = *(ulong *)(uVar19 + 0x18);
        *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar19 + 0x18) = 0;
        if (uVar20 != 0) {
          FUN_710392eb40(uVar20);
        }
        FUN_710392eb40(uVar19);
      }
      local_150 = (long ************)&PTR_FUN_710523d988;
      local_148 = 0;
      if (uVar31 != 0) {
        uVar19 = *(ulong *)(uVar31 + 0x18);
        *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar31 + 0x18) = 0;
        if (uVar19 != 0) {
          FUN_710392eb40(uVar19);
        }
        FUN_710392eb40(uVar31);
      }
      local_88 = (long ***********)&PTR_FUN_710523d988;
      local_80 = (long **********)0x0;
      if (pppppppppplVar18 != (long **********)0x0) {
        ppppppppplVar16 = pppppppppplVar18[3];
        pppppppppplVar18[2] = (long *********)&PTR_FUN_710523d9a8;
        pppppppppplVar18[3] = (long *********)0x0;
        if (ppppppppplVar16 != (long *********)0x0) {
          FUN_710392eb40((ulong)ppppppppplVar16);
        }
        FUN_710392eb40((ulong)pppppppppplVar18);
      }
    }
    FUN_7101a201c0(*(undefined8 **)(param_1 + 0x298));
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(long *)(param_1 + 0x290) = param_1 + 0x298;
    *(undefined8 *)(param_1 + 0x298) = 0;
    FUN_7101a0cae0(&local_140,*(long *)(lVar30 + 8),(long **********)param_3,(byte ****)param_4,
                   param_5,param_6,param_7,param_8);
    puVar34 = (undefined8 *)CONCAT44(local_140._4_4_,(uint)local_140);
    puVar6 = (undefined8 *)CONCAT44(uStack_134,local_138);
    if (puVar34 != puVar6) {
      do {
        ppppppppppplVar51 = (long ***********)*puVar34;
        local_88 = ppppppppppplVar51;
        if ((((ulong)ppppppppppplVar51 & 0xff00000000000000) == 0xc100000000000000 &&
             ((ulong)ppppppppppplVar51 & 0xffffffffff) != 0) &&
           (local_c8 = ppppppppppplVar51,
           uVar19 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                   (undefined1 *)ppppppppppplVar51), (int)uVar19 != -1)) {
          param_4 = &local_c8;
          FUN_71017994c0((uint *)&local_150,&local_160,0x15,param_4);
          uVar54 = 1;
          uVar53 = 1;
          uVar56 = (uint)local_150;
          if ((char)local_160 != '\0') {
            uVar53 = 2;
          }
        }
        else {
          uVar54 = 0;
          uVar53 = 0;
          ppppppppppplVar51 = (long ***********)&DAT_c1ffff0000000000;
          uVar56 = 0xffffffff;
        }
        param_3 = (long ***********)&local_c8;
        local_c8 = (long ***********)&local_88;
        plVar17 = FUN_7101a2af70((long *)(param_1 + 0x290),(ulong)local_88,(long ****)param_3,
                                 (byte ****)param_4,param_5,param_6,param_7,param_8);
        puVar34 = puVar34 + 1;
        *(undefined4 *)(plVar17 + 5) = uVar54;
        *(undefined8 *)((long)plVar17 + 0x2c) = 0xffffffffffffffff;
        *(undefined4 *)((long)plVar17 + 0x34) = uVar53;
        *(undefined4 *)(plVar17 + 7) = uVar56;
        *(undefined4 *)((long)plVar17 + 0x3c) = 0;
        plVar17[0xe] = (long)&DAT_c1ffff0000000000;
        plVar17[8] = (long)ppppppppppplVar51;
        plVar17[9] = 0;
        plVar17[10] = (long)&DAT_c1ffff0000000000;
        plVar17[0xb] = 0;
        plVar17[0xc] = (long)&DAT_c1ffff0000000000;
        plVar17[0xd] = 0;
        plVar17[0xf] = 0;
        plVar17[0x10] = 0;
      } while (puVar6 != puVar34);
      puVar34 = (undefined8 *)CONCAT44(local_140._4_4_,(uint)local_140);
    }
    if (puVar34 != (undefined8 *)0x0) {
      local_138 = (uint)puVar34;
      uStack_134 = (uint)((ulong)puVar34 >> 0x20);
      FUN_710392eb40((ulong)puVar34);
    }
  }
  pppppppppplVar18 = local_d8;
  local_e0 = (long **********)&PTR_FUN_710523d988;
  local_d8 = (long **********)0x0;
  if (pppppppppplVar18 != (long **********)0x0) {
LAB_7101a2a1e4:
    ppppppppplVar16 = pppppppppplVar18[3];
    pppppppppplVar18[2] = (long *********)&PTR_FUN_710523d9a8;
    pppppppppplVar18[3] = (long *********)0x0;
    if (ppppppppplVar16 != (long *********)0x0) {
      FUN_710392eb40((ulong)ppppppppplVar16);
    }
LAB_7101a2a1fc:
    FUN_710392eb40((ulong)pppppppppplVar18);
  }
switchD_7101a275bc_caseD_c:
  if (0 < *(int *)(param_1 + 0x160)) {
    iVar9 = 0;
    do {
      FUN_7101a19420(param_1,iVar9,(long ****)param_3,(byte ****)param_4,param_5,param_6,param_7,
                     param_8);
      FUN_7101a19990(param_1,iVar9,param_3,(byte ****)param_4,param_5,param_6,param_7,param_8);
      FUN_7101a19eb0(param_1,iVar9);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x160));
  }
  return;
}

