// addr:      7101da9e30
// offset:    0x1da9e30
// name:      FUN_7101da9e30
// mangled:   
// signature: undefined __cdecl FUN_7101da9e30(undefined8 * param_1, uint param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101da9e30(undefined8 *param_1,uint param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  ushort *puVar1;
  undefined2 *puVar2;
  char *pcVar3;
  ushort uVar4;
  short sVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  char *pcVar15;
  long *plVar16;
  long *********ppppppppplVar17;
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
  long *********ppppppppplVar18;
  long ****pppplVar19;
  char cVar20;
  byte *pbVar21;
  byte bVar22;
  uint uVar23;
  long ********pppppppplVar24;
  long lVar25;
  uint uVar26;
  undefined8 uVar27;
  char *pcVar28;
  int iVar29;
  ulong uVar30;
  byte ****ppppbVar31;
  byte ****ppppbVar32;
  ulong uVar33;
  undefined8 *puVar34;
  long lVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  undefined1 *puVar38;
  char cVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined **local_170;
  ulong local_168;
  undefined **local_160;
  ulong local_158;
  undefined **local_150;
  ulong local_148;
  undefined **local_140;
  long *local_138;
  undefined4 local_130;
  undefined2 local_12c;
  uint local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined2 local_108;
  undefined **local_100;
  long *local_f8;
  undefined **local_f0;
  ulong local_e8;
  byte ***local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ushort local_cc;
  
  if (*(uint *)(param_1 + 0x1c) != param_2) {
    return;
  }
  puVar34 = (undefined8 *)param_1[0x86];
  puVar36 = (undefined8 *)param_1[0x87];
  ppppppppplVar18 = param_3;
  ppppbVar31 = param_4;
  if (puVar36 != puVar34) {
    do {
      puVar37 = puVar36 + -3;
      *puVar37 = &PTR_FUN_710523d988;
      uVar30 = puVar36[-2];
      puVar36[-2] = 0;
      if (uVar30 != 0) {
        uVar12 = *(ulong *)(uVar30 + 0x18);
        *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar30 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar30);
      }
      puVar36 = puVar37;
    } while (puVar34 != puVar37);
    param_2 = *(uint *)(param_1 + 0x1c);
  }
  param_1[0x87] = puVar34;
  *(undefined4 *)(param_1 + 0x89) = 0;
  if (3 < param_2) {
LAB_7101dab56c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pppppppplVar24 = *param_3;
  uVar30 = (ulong)param_2;
  ppppppppplVar17 = (long *********)((long)param_1 + (ulong)param_2 * 0x54 + 0x268);
  *(undefined2 *)((long)param_1 + (ulong)param_2 * 0x54 + 0x270) = *(undefined2 *)(param_3 + 1);
  *(long *********)((long)param_1 + (ulong)param_2 * 0x54 + 0x268) = pppppppplVar24;
  if (ppppppppplVar17 == param_3) {
    uVar27 = *(undefined8 *)((long)param_3 + 0x44);
    *(undefined8 *)((long)param_1 + uVar30 * 0x54 + 0x2b1) = *(undefined8 *)((long)param_3 + 0x49);
    *(undefined8 *)((long)param_1 + uVar30 * 0x54 + 0x2ac) = uVar27;
  }
  else {
    FUN_7101696040((uint *)((long)param_1 + uVar30 * 0x54 + 0x274),(ushort *)((long)param_3 + 0x14))
    ;
    uVar10 = *(uint *)(param_1 + 0x1c);
    uVar27 = *(undefined8 *)((long)param_3 + 0x44);
    *(undefined8 *)((long)param_1 + uVar30 * 0x54 + 0x2b1) = *(undefined8 *)((long)param_3 + 0x49);
    *(undefined8 *)((long)param_1 + uVar30 * 0x54 + 0x2ac) = uVar27;
    if (3 < uVar10) goto LAB_7101dab56c;
    ppppppppplVar17 = (long *********)((long)param_1 + (ulong)uVar10 * 0x54 + 0x268);
  }
  puVar1 = (ushort *)(param_1 + 0x13);
  FUN_71025cae70(puVar1,(long)ppppppppplVar17);
  FUN_7101da6780(param_1,1,ppppppppplVar18,ppppbVar31,param_5,param_6,param_7,param_8);
  FUN_7101da73b0((long)param_1,1,ppppppppplVar18,ppppbVar31,param_5,param_6,param_7,param_8);
  lVar35 = *(long *)(DAT_710532f730 + 8);
  local_128 = local_128 & 0xffffff00;
  fStack_124 = 0.0;
  fStack_120 = 0.0;
  local_108 = 0;
  local_118 = 0x52ffff0000000000;
  local_110 = 0;
  FUN_71025caab0((long)&local_128,*(ushort *)(param_1 + 0x13),*(int *)((long)param_1 + 0x9c));
  sVar5 = *(short *)(param_1 + 0x13);
  if ((sVar5 != -1) && (sVar5 < 2000)) {
    lVar25 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar12 = (*(long *)(lVar25 + 0x28) - *(long *)(lVar25 + 0x20) >> 6) * -0x3333333333333333;
    uVar4 = *(ushort *)(lVar25 + (long)(int)sVar5 * 2 + 0x60);
    uVar30 = (ulong)uVar4;
    if ((uint)uVar4 < (uint)uVar12) {
      puVar2 = (undefined2 *)(*(long *)(lVar25 + 0x20) + uVar30 * 0x140);
      if (uVar12 < uVar30 || uVar12 - uVar30 == 0) {
        puVar2 = &DAT_7105182b08;
      }
      local_128 = CONCAT31(local_128._1_3_,*(undefined1 *)(puVar2 + 0x36));
      local_110 = CONCAT62(CONCAT42(local_110._4_4_,puVar2[0x48]),puVar2[0x35]);
    }
  }
  local_118 = param_1[0x14];
  uVar30 = (ulong)*(ushort *)((long)param_1 + 0xaa);
  uVar12 = (ulong)*(ushort *)((long)param_1 + 0xac);
  FUN_71025cad00((long)&local_128,*(ushort *)(param_1 + 0x15),*(ushort *)((long)param_1 + 0xaa),
                 *(ushort *)((long)param_1 + 0xac));
  if (3 < *(uint *)(param_1 + 0x1c)) goto LAB_7101dab56c;
  bVar9 = FUN_71025cb340(param_1[(ulong)*(uint *)(param_1 + 0x1c) * 2 + 0x77],
                         *(ushort *)(param_1 + 0x13));
  if (bVar9) {
    fStack_124 = *(float *)(*DAT_7105329fa0 + 0x2b4) * fStack_124;
    fStack_120 = *(float *)(*DAT_7105329fa0 + 0x2b4) * fStack_120;
  }
  uVar10 = FUN_71025cb980((long)&local_128);
  puVar36 = param_1 + 10;
  ppppbVar31 = (byte ****)(ulong)uVar10;
  FUN_7103776640(&local_f0,(long)puVar36,(byte ****)"set_parts_set_power",uVar30,uVar12,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_e0,(long)&local_f0,(long ****)"set_txt_power",uVar30,uVar12,param_5,param_6,
                 param_7,param_8);
  uVar27 = 1;
  ppppbVar32 = ppppbVar31;
  FUN_710377a280((long)&local_e0,(byte *)"mnu_spirits_challengeboard_organize_strength_n",1);
  uVar30 = (ulong)local_d8;
  local_e0 = (byte ***)&PTR_FUN_710523d9a8;
  local_d8 = (long *)0x0;
  if (uVar30 != 0) {
    FUN_710392eb40(uVar30);
  }
  FUN_7103776910(&local_e0,(long)&local_f0,(long ****)"set_txt_power_sdw",uVar27,ppppbVar32,param_5,
                 param_6,param_7,param_8);
  ppppppppplVar18 = (long *********)0x1;
  FUN_710377a280((long)&local_e0,(byte *)"mnu_spirits_challengeboard_organize_strength_n",1);
  uVar30 = (ulong)local_d8;
  local_e0 = (byte ***)&PTR_FUN_710523d9a8;
  local_d8 = (long *)0x0;
  if (uVar30 != 0) {
    FUN_710392eb40(uVar30);
  }
  sVar5 = *(short *)(param_1 + 0x13);
  if ((sVar5 == -1) || (1999 < sVar5)) {
LAB_7101daa224:
    *(undefined1 *)((long)param_1 + 0x44c) = 0;
    FUN_7103778300(0x3f800000,local_e8,0x71043bebaa);
    uVar30 = local_e8;
  }
  else {
    lVar35 = *(long *)(lVar35 + 0x1d8);
    uVar4 = *(ushort *)(lVar35 + (long)(int)sVar5 * 2 + 0x60);
    uVar30 = (ulong)uVar4;
    uVar12 = (*(long *)(lVar35 + 0x28) - *(long *)(lVar35 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar12 <= (uint)uVar4) goto LAB_7101daa224;
    puVar2 = (undefined2 *)(*(long *)(lVar35 + 0x20) + uVar30 * 0x140);
    if (uVar12 < uVar30 || uVar12 - uVar30 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    bVar22 = *(byte *)(puVar2 + 0x36);
    uVar10 = bVar22 - 1;
    uVar6 = (undefined1)(0x20301 >> (ulong)((uVar10 & 3) << 3));
    if (2 < uVar10) {
      uVar6 = 0;
    }
    uVar27 = 0;
    FUN_710339dde0((uint *)&local_e0,uVar6,'\0');
    FUN_7103778300(0x3f800000,local_e8,(long)&local_d8);
    FUN_7103776640(&local_100,(long)&local_f0,(byte ****)"set_parts_atr",uVar27,ppppbVar31,param_5,
                   param_6,param_7,param_8);
    cVar39 = '\0';
    if (*(char *)(param_1 + 0x1e) == '\0') {
LAB_7101daabe0:
      if (bVar22 != 1) goto LAB_7101daabe8;
LAB_7101daaba0:
      ppppbVar31 = (byte ****)(ulong)(cVar39 == '\x02');
      if (cVar39 == '\x03') {
LAB_7101daac1c:
        iVar29 = -1;
        param_5 = (long ****)0x1;
        pppplVar19 = (long ****)&DAT_ffffffff;
        ppppbVar32 = (byte ****)&DAT_ffffffff;
        FUN_71025b12c0((long)&local_100,uVar6,-1,0xffffffff,1,param_6,param_7,param_8);
        uVar27 = extraout_x1_07;
      }
      else {
LAB_7101daabb0:
        pppplVar19 = (long ****)&DAT_ffffffff;
        param_5 = (long ****)0x1;
        ppppbVar32 = ppppbVar31;
        FUN_71025b12c0((long)&local_100,uVar6,-1,ppppbVar31,1,param_6,param_7,param_8);
        iVar29 = (int)ppppbVar31;
        uVar27 = extraout_x1_06;
        if (iVar29 == 0) goto LAB_7101daad64;
      }
      FUN_7103776290(&local_140,uVar27,pppplVar19,ppppbVar32,param_5,param_6,param_7,param_8);
      *local_138 = *local_f8;
      local_138[1] = local_f8[1];
      if (local_138 != local_f8) {
        *(undefined8 *)local_138[3] = *(undefined8 *)local_f8[3];
        *(undefined8 *)(local_138[3] + 8) = *(undefined8 *)(local_f8[3] + 8);
        *(undefined8 *)(local_138[3] + 0x10) = *(undefined8 *)(local_f8[3] + 0x10);
        *(undefined8 *)(local_138[3] + 0x18) = *(undefined8 *)(local_f8[3] + 0x18);
      }
      local_130 = 1;
      local_12c = CONCAT11(1,0 < iVar29);
      puVar34 = (undefined8 *)param_1[0x87];
      if (puVar34 == (undefined8 *)param_1[0x88]) {
        FUN_7101dac340(param_1 + 0x86,&local_140,pppplVar19,ppppbVar32,param_5,param_6,param_7,
                       param_8);
      }
      else {
        FUN_7103776390(puVar34,&local_140,pppplVar19,ppppbVar32,param_5,param_6,param_7,param_8);
        *(undefined2 *)((long)puVar34 + 0x14) = local_12c;
        *(undefined4 *)(puVar34 + 2) = local_130;
        param_1[0x87] = param_1[0x87] + 0x18;
      }
      plVar13 = local_138;
      local_140 = &PTR_FUN_710523d988;
      local_138 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        uVar30 = plVar13[3];
        plVar13[2] = (long)&PTR_FUN_710523d9a8;
        plVar13[3] = 0;
        if (uVar30 != 0) {
          FUN_710392eb40(uVar30);
        }
        FUN_710392eb40((ulong)plVar13);
      }
    }
    else {
      if (*(char *)((long)param_1 + 0x1d4) == '\0') {
        lVar35 = param_1[0x2b];
        lVar25 = param_1[0x2c];
        if (lVar25 != lVar35) goto LAB_7101daab68;
      }
      else {
        lVar35 = param_1[0x2b];
        lVar25 = param_1[0x2c];
LAB_7101daab68:
        uVar10 = (uint)((ulong)(lVar25 - lVar35) >> 3);
        if (uVar10 != 0) {
          uVar11 = 0;
          do {
            lVar25 = *(long *)(lVar35 + (ulong)uVar11 * 8);
            if (*(char *)(lVar25 + 0x10) == '\x01') {
              cVar39 = *(char *)(lVar25 + 0x48);
              goto LAB_7101daabe0;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar10);
        }
      }
      cVar39 = '\0';
      if (bVar22 == 1) goto LAB_7101daaba0;
LAB_7101daabe8:
      if (bVar22 == 2) {
        ppppbVar31 = (byte ****)(ulong)(cVar39 == '\x03');
        if (cVar39 == '\x01') goto LAB_7101daac1c;
        goto LAB_7101daabb0;
      }
      if (bVar22 == 3) {
        ppppbVar31 = (byte ****)(ulong)(cVar39 == '\x01');
        if (cVar39 != '\x02') goto LAB_7101daabb0;
        goto LAB_7101daac1c;
      }
      pppplVar19 = (long ****)&DAT_ffffffff;
      param_5 = (long ****)0x1;
      ppppbVar32 = (byte ****)0x0;
      FUN_71025b12c0((long)&local_100,uVar6,-1,0,1,param_6,param_7,param_8);
      iVar29 = 0;
    }
LAB_7101daad64:
    *(char *)((long)param_1 + 0x44c) = (char)iVar29;
    FUN_7103776910(&local_140,(long)&local_f0,(long ****)"set_txt_offense",pppplVar19,ppppbVar32,
                   param_5,param_6,param_7,param_8);
    fVar43 = fStack_124;
    uVar30 = (ulong)(uint)(int)fStack_124;
    uVar27 = 1;
    FUN_710377a280((long)&local_140,(byte *)"mnu_spirits_challengeboard_organize_status_atk_n",1);
    plVar13 = local_138;
    local_140 = &PTR_FUN_710523d9a8;
    local_138 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar13);
    }
    FUN_7103776910(&local_140,(long)&local_f0,(long ****)"set_txt_defense",uVar27,uVar30,param_5,
                   param_6,param_7,param_8);
    fVar42 = fStack_120;
    ppppbVar31 = (byte ****)(ulong)(uint)(int)fStack_120;
    ppppppppplVar18 = (long *********)0x1;
    FUN_710377a280((long)&local_140,(byte *)"mnu_spirits_challengeboard_organize_status_def_n",1);
    plVar13 = local_138;
    local_140 = &PTR_FUN_710523d9a8;
    local_138 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar13);
    }
    fVar41 = fVar43 / 10000.0;
    fVar44 = fVar42;
    if (fVar42 <= fVar43) {
      fVar44 = fVar43;
    }
    fVar43 = fVar41;
    if (1.0 < fVar41) {
      fVar43 = 1.0;
    }
    fVar42 = fVar42 / 10000.0;
    fVar40 = 0.0;
    if (0.0 <= fVar41) {
      fVar40 = fVar43;
    }
    fVar43 = fVar42;
    if (1.0 < fVar42) {
      fVar43 = 1.0;
    }
    fVar41 = 0.0;
    if (0.0 <= fVar42) {
      fVar41 = fVar43;
    }
    if (1.0 <= fVar44) {
      if (10000.0 < fVar44) {
        fVar44 = 10000.0;
      }
      fVar44 = fVar44 / 10000.0;
    }
    else {
      fVar44 = 0.0001;
    }
    fVar43 = *(float *)(*DAT_7105329fa0 + 0x2d0);
    if (*(float *)(*DAT_7105329fa0 + 0x2d0) <= 0.001) {
      fVar43 = 0.001;
    }
    fVar42 = powf(ABS(1.0 - fVar44),fVar43);
    fVar43 = powf(fVar44,1.0 / fVar43);
    fVar44 = (((1.0 - fVar42) + fVar43) * 0.5) / fVar44;
    fVar40 = fVar40 * fVar44;
    fVar41 = fVar41 * fVar44;
    fVar43 = fVar40;
    if (1.0 < fVar40) {
      fVar43 = 1.0;
    }
    fVar42 = fVar41;
    if (1.0 < fVar41) {
      fVar42 = 1.0;
    }
    FUN_7103776910(&local_140,(long)&local_f0,(long ****)"set_bar_offense",ppppppppplVar18,
                   ppppbVar31,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_150,(long)&local_f0,(long ****)"set_bar_offense_sdw",ppppppppplVar18,
                   ppppbVar31,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_160,(long)&local_f0,(long ****)"set_bar_defense",ppppppppplVar18,
                   ppppbVar31,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_170,(long)&local_f0,(long ****)"set_bar_defense_sdw",ppppppppplVar18,
                   ppppbVar31,param_5,param_6,param_7,param_8);
    plVar13 = local_138;
    if (*(long **)((long)local_138 + 8) == (long *)0x0) {
      uVar30 = _ConstantZero;
      if (((*(long *)((long)local_138 + 0x18) != 0) &&
          (lVar35 = *(long *)(*(long *)((long)local_138 + 0x18) + 0x118), lVar35 != 0)) &&
         ((*(byte *)(lVar35 + 0x14) & 3) != 0)) {
        lVar35 = *(long *)(lVar35 + 0x18);
        goto LAB_7101daaf60;
      }
    }
    else {
      lVar35 = FUN_71000597e0(*(long **)((long)local_138 + 8));
      uVar30 = _ConstantZero;
      if ((lVar35 != 0) && ((*(byte *)(lVar35 + 0x14) & 3) != 0)) {
        lVar35 = *(long *)(lVar35 + 0x18);
LAB_7101daaf60:
        uVar30 = _ConstantZero;
        if (*(long **)(lVar35 + 8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar35 + 8) + 0x20))(&local_180);
          uVar10 = NEON_ucvtf((uint)local_180 & 0xffff);
          NEON_ucvtf((uint)local_180 >> 0x10);
          uVar30 = (ulong)uVar10;
        }
      }
    }
    uStack_178 = uRam0000007107459008;
    fVar44 = 0.93;
    if (0.0 <= fVar40) {
      fVar44 = 1.0 - (fVar43 * 0.93 + 0.07);
    }
    local_180 = CONCAT44((int)(_ConstantZero >> 0x20),-(fVar44 * (float)uVar30));
    FUN_7103779770(1.0,(long)plVar13,&local_180);
    uVar14 = local_148;
    FUN_7103779770(1.0,local_148,&local_180);
    uVar12 = local_158;
    fVar43 = 0.93;
    if (0.0 <= fVar41) {
      fVar43 = 1.0 - (fVar42 * 0.93 + 0.07);
    }
    uStack_188 = uRam0000007107459008;
    local_190 = CONCAT44((int)(_ConstantZero >> 0x20),-(fVar43 * (float)uVar30));
    FUN_7103779770(1.0,local_158,&local_190);
    uVar30 = local_168;
    FUN_7103779770(1.0,local_168,&local_190);
    local_170 = &PTR_FUN_710523d9a8;
    local_168 = 0;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
    local_160 = &PTR_FUN_710523d9a8;
    local_158 = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    local_150 = &PTR_FUN_710523d9a8;
    local_148 = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    local_140 = &PTR_FUN_710523d9a8;
    local_138 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar13);
    }
    plVar13 = local_f8;
    local_100 = &PTR_FUN_710523d988;
    local_f8 = (long *)0x0;
    uVar30 = local_e8;
    if (plVar13 != (long *)0x0) {
      uVar12 = plVar13[3];
      plVar13[2] = (long)&PTR_FUN_710523d9a8;
      plVar13[3] = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40((ulong)plVar13);
    }
  }
  local_f0 = &PTR_FUN_710523d988;
  local_e8 = 0;
  if (uVar30 != 0) {
    uVar12 = *(ulong *)(uVar30 + 0x18);
    *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar30 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar30);
  }
  iVar29 = (int)(char)((char)param_4 + -2);
  if (-1 < iVar29) {
    ppppppppplVar18 = (long *********)0x0;
    FUN_7103771a80(param_1 + 0x10,iVar29 + 0x14,0);
  }
  FUN_7103776640(&local_e0,(long)puVar36,(byte ****)"set_parts_btn_spirit",ppppppppplVar18,
                 ppppbVar31,param_5,param_6,param_7,param_8);
  if (*(short *)(param_1 + 0x13) == -1) {
    FUN_7103778300(0x3f800000,(long)local_d8,0x7104443c1f);
    FUN_7103778300(0x3f800000,(long)local_d8,0x7104412d83);
    lVar35 = *(long *)param_1[0xd];
    uVar27 = extraout_x1_01;
    if (lVar35 != 0) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) & 0xfe;
    }
  }
  else {
    FUN_7103778300(0x3f800000,(long)local_d8,0x710424f98c);
    FUN_7103778300(0x3f800000,(long)local_d8,0x7104412d83);
    FUN_7103776910((undefined8 *)&local_128,(long)&local_e0,(long ****)"set_rep_spirit",
                   ppppppppplVar18,ppppbVar31,param_5,param_6,param_7,param_8);
    uVar30 = CONCAT44(uStack_11c,fStack_120);
    FUN_71037790a0(uVar30,1,ppppppppplVar18,ppppbVar31,param_5,param_6,param_7,param_8);
    ppppppppplVar18 = (long *********)0x1;
    ppppbVar31 = &local_e0;
    param_6 = 3;
    param_5 = (long ****)0x0;
    FUN_7101da7f90((long)param_1,*(ushort *)(param_1 + 0x13),1,(undefined ***)ppppbVar31,
                   (long ****)0x0,3,param_7,param_8);
    lVar35 = *(long *)param_1[0xd];
    if (lVar35 != 0) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 1;
    }
    local_128 = 0x523d9a8;
    fStack_124 = 1.58347e-43;
    fStack_120 = 0.0;
    uStack_11c = 0;
    uVar27 = extraout_x1;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
      uVar27 = extraout_x1_00;
    }
  }
  uVar30 = (ulong)local_d8;
  local_e0 = (byte ***)&PTR_FUN_710523d988;
  local_d8 = (long *)0x0;
  if (uVar30 != 0) {
    uVar12 = *(ulong *)(uVar30 + 0x18);
    *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar30 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar30);
    uVar27 = extraout_x1_02;
  }
  if ((*(char *)(param_1 + 0x1e) != '\0') &&
     ((*(char *)((long)param_1 + 0x1d4) != '\0' || (param_1[0x2c] != param_1[0x2b])))) {
    puVar38 = &DAT_c1ffff0000000000;
    FUN_7103776640((undefined8 *)&local_128,(long)puVar36,(byte ****)"set_parts_btn_rule",
                   ppppppppplVar18,ppppbVar31,param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_140,(long)&local_128,(byte ****)"set_parts_atr",ppppppppplVar18,ppppbVar31
                   ,param_5,param_6,param_7,param_8);
    if (*(char *)(param_1 + 0x1e) == '\0') {
LAB_7101daa4ec:
      uVar10 = 0;
      uVar11 = 0;
joined_r0x007101daa47c:
      if (*(char *)((long)param_1 + 0x1d4) == '\0') goto LAB_7101daa480;
      FUN_7103776910(&local_e0,(long)&local_140,(long ****)"set_txt_power",ppppppppplVar18,
                     ppppbVar31,param_5,param_6,param_7,param_8);
      lVar35 = *local_d8;
      plVar13 = local_d8;
      if (lVar35 != 0) {
        *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) & 0xfe;
      }
    }
    else {
      if (*(char *)((long)param_1 + 0x1d4) != '\0') {
        lVar35 = param_1[0x2b];
        lVar25 = param_1[0x2c];
LAB_7101daa424:
        uVar30 = lVar25 - lVar35;
        if (0 < (int)(uVar30 >> 3)) {
          uVar12 = 0;
          do {
            if (*(char *)(*(long *)(lVar35 + uVar12 * 8) + 0x10) == '\x01') {
              if ((-1 < (int)uVar12) && (uVar12 < (ulong)((long)uVar30 >> 3))) {
                lVar35 = *(long *)(lVar35 + uVar12 * 8);
                puVar38 = *(undefined1 **)(lVar35 + 0x18);
                uVar10 = (uint)*(byte *)(lVar35 + 0x20);
                uVar11 = (uint)*(byte *)(lVar35 + 0x48);
                goto joined_r0x007101daa47c;
              }
              break;
            }
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(uVar30 * 0x20000000) >> 0x20);
        }
        goto LAB_7101daa4ec;
      }
      lVar35 = param_1[0x2b];
      lVar25 = param_1[0x2c];
      if (lVar25 != lVar35) goto LAB_7101daa424;
      uVar11 = 0;
      uVar10 = 0;
LAB_7101daa480:
      FUN_7103776910(&local_e0,(long)&local_140,(long ****)"set_txt_power",ppppppppplVar18,
                     ppppbVar31,param_5,param_6,param_7,param_8);
      plVar13 = local_d8;
      lVar35 = *local_d8;
      if (lVar35 != 0) {
        *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 1;
      }
      local_e0 = (byte ***)&PTR_FUN_710523d9a8;
      local_d8 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar13);
      }
      FUN_7103776910(&local_e0,(long)&local_140,(long ****)"set_txt_power",ppppppppplVar18,
                     ppppbVar31,param_5,param_6,param_7,param_8);
      FUN_710377a280((long)&local_e0,(byte *)"mnu_spirits_challengeboard_organize_power_n",1);
      plVar13 = local_d8;
    }
    local_e0 = (byte ***)&PTR_FUN_710523d9a8;
    local_d8 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar13);
    }
    sVar5 = *(short *)(param_1 + 0x13);
    uVar6 = (undefined1)(0x20301 >> (ulong)((uVar11 - 1 & 3) << 3));
    cVar39 = '\0';
    if (2 < uVar11 - 1) {
      uVar6 = 0;
    }
    if ((sVar5 == -1) || (1999 < sVar5)) {
LAB_7101daa5c0:
      cVar20 = cVar39;
      if (uVar11 != 1) goto LAB_7101daa5c8;
LAB_7101daa624:
      ppppbVar32 = (byte ****)(ulong)(cVar20 == '\x02');
      if (cVar20 == '\x03') goto LAB_7101daa5fc;
LAB_7101daa634:
      ppppppppplVar18 = (long *********)&DAT_ffffffff;
      param_5 = (long ****)0x0;
      ppppbVar31 = ppppbVar32;
      FUN_71025b12c0((long)&local_140,uVar6,-1,ppppbVar32,0,param_6,param_7,param_8);
      iVar29 = (int)ppppbVar32;
      uVar27 = extraout_x1_04;
      if (iVar29 != 0) {
LAB_7101daa64c:
        FUN_7103776290(&local_e0,uVar27,(long ****)ppppppppplVar18,ppppbVar31,param_5,param_6,
                       param_7,param_8);
        *local_d8 = *local_138;
        local_d8[1] = local_138[1];
        if (local_d8 != local_138) {
          *(undefined8 *)local_d8[3] = *(undefined8 *)local_138[3];
          *(undefined8 *)(local_d8[3] + 8) = *(undefined8 *)(local_138[3] + 8);
          *(undefined8 *)(local_d8[3] + 0x10) = *(undefined8 *)(local_138[3] + 0x10);
          *(undefined8 *)(local_d8[3] + 0x18) = *(undefined8 *)(local_138[3] + 0x18);
        }
        local_cc = (ushort)(0 < iVar29);
        local_d0 = 1;
        puVar34 = (undefined8 *)param_1[0x87];
        if (puVar34 == (undefined8 *)param_1[0x88]) {
          FUN_7101dac340(param_1 + 0x86,&local_e0,(long ****)ppppppppplVar18,ppppbVar31,param_5,
                         param_6,param_7,param_8);
        }
        else {
          FUN_7103776390(puVar34,&local_e0,(long ****)ppppppppplVar18,ppppbVar31,param_5,param_6,
                         param_7,param_8);
          *(ushort *)((long)puVar34 + 0x14) = local_cc;
          *(undefined4 *)(puVar34 + 2) = local_d0;
          param_1[0x87] = param_1[0x87] + 0x18;
        }
        plVar13 = local_d8;
        local_e0 = (byte ***)&PTR_FUN_710523d988;
        local_d8 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          uVar30 = plVar13[3];
          plVar13[2] = (long)&PTR_FUN_710523d9a8;
          plVar13[3] = 0;
          if (uVar30 != 0) {
            FUN_710392eb40(uVar30);
          }
          FUN_710392eb40((ulong)plVar13);
        }
      }
      if (*(char *)((long)param_1 + 0x1d4) != '\0') goto LAB_7101daa828;
LAB_7101daa744:
      local_e0 = (byte ***)FUN_7103238a70((ulong)puVar38,(ulong)uVar10,2);
      if (((ulong)local_e0 & 0xffffffffff) != 0) {
        lVar35 = param_1[5];
        FUN_710323c4e0(lVar35,(ulong *)&local_e0,(long *********)(long)*(int *)(lVar35 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar35 + 0x68),param_5,param_6,param_7,param_8);
      }
      ppppbVar31 = (byte ****)0x2;
      ppppppppplVar18 = (long *********)(ulong)uVar10;
      plVar16 = FUN_710323f330(param_1 + 5,(ulong)puVar38,(ulong)ppppppppplVar18,2,param_5,param_6,
                               param_7,param_8);
      FUN_7103776910(&local_e0,(long)&local_140,(long ****)"set_rep_fighter",ppppppppplVar18,
                     ppppbVar31,param_5,param_6,param_7,param_8);
      plVar13 = local_d8;
      FUN_7103778b80((long)local_d8,(long)plVar16,ppppppppplVar18,ppppbVar31,param_5,param_6,param_7
                     ,param_8);
      local_e0 = (byte ***)&PTR_FUN_710523d9a8;
      local_d8 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar13);
      }
      FUN_7103776910(&local_e0,(long)&local_140,(long ****)"set_rep_fighter",ppppppppplVar18,
                     ppppbVar31,param_5,param_6,param_7,param_8);
      lVar35 = *local_d8;
      plVar13 = local_d8;
      if (lVar35 != 0) {
        bVar22 = *(byte *)(lVar35 + 0x58) | 1;
        goto LAB_7101daa850;
      }
    }
    else {
      lVar35 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar12 = (*(long *)(lVar35 + 0x28) - *(long *)(lVar35 + 0x20) >> 6) * -0x3333333333333333;
      uVar4 = *(ushort *)(lVar35 + (long)(int)sVar5 * 2 + 0x60);
      uVar30 = (ulong)uVar4;
      if ((uint)uVar4 < (uint)uVar12) {
        puVar2 = (undefined2 *)(*(long *)(lVar35 + 0x20) + uVar30 * 0x140);
        if (uVar12 < uVar30 || uVar12 - uVar30 == 0) {
          puVar2 = &DAT_7105182b08;
        }
        cVar39 = *(char *)(puVar2 + 0x36);
        goto LAB_7101daa5c0;
      }
      cVar39 = '\0';
      cVar20 = '\0';
      if (uVar11 == 1) goto LAB_7101daa624;
LAB_7101daa5c8:
      if (uVar11 == 2) {
        ppppbVar32 = (byte ****)(ulong)(cVar39 == '\x03');
        if (cVar39 != '\x01') goto LAB_7101daa634;
LAB_7101daa5fc:
        iVar29 = -1;
        ppppppppplVar18 = (long *********)&DAT_ffffffff;
        ppppbVar31 = (byte ****)&DAT_ffffffff;
        param_5 = (long ****)0x0;
        FUN_71025b12c0((long)&local_140,uVar6,-1,0xffffffff,0,param_6,param_7,param_8);
        uVar27 = extraout_x1_03;
        goto LAB_7101daa64c;
      }
      if (uVar11 == 3) {
        ppppbVar32 = (byte ****)(ulong)(cVar39 == '\x01');
        if (cVar39 == '\x02') goto LAB_7101daa5fc;
        goto LAB_7101daa634;
      }
      ppppppppplVar18 = (long *********)&DAT_ffffffff;
      ppppbVar31 = (byte ****)0x0;
      param_5 = (long ****)0x0;
      FUN_71025b12c0((long)&local_140,uVar6,-1,0,0,param_6,param_7,param_8);
      if (*(char *)((long)param_1 + 0x1d4) == '\0') goto LAB_7101daa744;
LAB_7101daa828:
      FUN_7103776910(&local_e0,(long)&local_140,(long ****)"set_rep_fighter",ppppppppplVar18,
                     ppppbVar31,param_5,param_6,param_7,param_8);
      lVar35 = *local_d8;
      plVar13 = local_d8;
      if (lVar35 != 0) {
        bVar22 = *(byte *)(lVar35 + 0x58) & 0xfe;
LAB_7101daa850:
        *(byte *)(lVar35 + 0x58) = bVar22;
        plVar13 = local_d8;
      }
    }
    local_e0 = (byte ***)&PTR_FUN_710523d9a8;
    local_d8 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar13);
    }
    pcVar15 = (char *)param_1[0x27];
    pcVar3 = (char *)param_1[0x28];
    uVar30 = (long)pcVar3 - (long)pcVar15 >> 5;
    uVar10 = (uint)uVar30;
    if (uVar10 != 0) {
      uVar11 = 0;
      do {
        if (uVar30 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        if (pcVar15[(ulong)uVar11 * 0x20] == '\f') {
          iVar29 = 8;
          goto LAB_7101daa8c8;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar10);
    }
    uVar10 = *(byte *)((long)param_1 + 0x11a) - 1;
    if (uVar10 < 9) {
      iVar29 = (uVar10 & 0xff) + 1;
    }
    else {
      iVar29 = 0;
    }
LAB_7101daa8c8:
    uVar30 = 0x71ffff0000000000;
    uVar12 = FUN_71025b2eb0(iVar29);
    if (pcVar15 == pcVar3) {
      uVar33 = 0;
      cVar39 = '\0';
      uVar14 = 0x71ffff0000000000;
    }
    else {
      do {
        pcVar28 = pcVar15 + 0x20;
        cVar39 = *pcVar15;
        uVar14 = FUN_71025b3940(cVar39);
        if (((uVar14 & 0xff00000000000000) == 0x7100000000000000) && ((uVar14 & 0xffffffffff) != 0))
        {
          uVar33 = *(ulong *)(pcVar15 + 8);
          goto LAB_7101daa93c;
        }
        pcVar15 = pcVar28;
      } while (pcVar3 != pcVar28);
      uVar33 = 0;
      cVar39 = '\0';
    }
LAB_7101daa93c:
    uVar7 = uStack_11c;
    fVar43 = fStack_120;
    bVar9 = (uVar12 & 0xffffffffff) != 0;
    bVar8 = (uVar12 & 0xff00000000000000) == 0x7100000000000000;
    if ((bVar8 && bVar9) ||
       (((uVar14 & 0xff00000000000000) == 0x7100000000000000 && ((uVar14 & 0xffffffffff) != 0)))) {
      *(undefined1 *)((long)param_1 + 0xdd) = 1;
      lVar35 = CONCAT44(uStack_11c,fStack_120);
      uVar10 = 0x811c9dc5;
      FUN_7103778300(0x3f800000,lVar35,0x71042a34a8);
      local_d8 = (long *)((ulong)local_d8 & 0xffffffffffffff00);
      local_e0 = (byte ***)0x811c9dc5;
      if (bVar8 && bVar9) {
        uVar30 = (long)(param_1[0x28] - param_1[0x27]) >> 5;
        uVar11 = (uint)uVar30;
        if (uVar11 != 0) {
          uVar23 = 0;
          do {
            if (uVar30 <= uVar23) goto LAB_7101dab564;
            if (*(char *)(param_1[0x27] + (ulong)uVar23 * 0x20) == '\f') {
              iVar29 = 8;
              goto LAB_7101daaa98;
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 < uVar11);
        }
        uVar11 = *(byte *)((long)param_1 + 0x11a) - 1;
        if (uVar11 < 9) {
          iVar29 = (uVar11 & 0xff) + 1;
        }
        else {
          iVar29 = 0;
        }
LAB_7101daaa98:
        uVar11 = FUN_71025cfbc0(iVar29,puVar1,(long ****)ppppppppplVar18,ppppbVar31,param_5,param_6,
                                param_7,param_8);
        uVar30 = (long)(param_1[0x28] - param_1[0x27]) >> 5;
        uVar23 = (uint)uVar30;
        if (uVar23 != 0) {
          uVar26 = 0;
          uVar14 = 7;
          do {
            if (uVar30 <= uVar26) {
LAB_7101dab564:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            if (*(char *)(param_1[0x27] + (ulong)uVar26 * 0x20) == '\f') goto LAB_7101daaaf4;
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar23);
        }
        uVar23 = *(byte *)((long)param_1 + 0x11a) - 1;
        if (uVar23 < 9) {
          uVar14 = (ulong)uVar23 & 0xff;
LAB_7101daaaf4:
          puVar38 = (&PTR_s_mnu_spirits_challengeboard_gimmi_71050c5470)[uVar14];
          if (puVar38 != (undefined1 *)0x0) goto LAB_7101daab04;
          uVar30 = 0;
        }
        else {
          puVar38 = &DAT_7104867c2e;
LAB_7101daab04:
          uVar30 = 0;
          while( true ) {
            cVar39 = puVar38[uVar30];
            if (cVar39 == '\0') break;
            *(char *)((long)&local_d8 + uVar30) = cVar39;
            if (0x3e < (int)uVar30 + 1U) {
              uVar30 = (ulong)((int)uVar30 + 1);
              break;
            }
            cVar39 = (puVar38 + uVar30)[1];
            if (cVar39 == '\0') {
              uVar30 = uVar30 + 1;
              break;
            }
            *(char *)((long)&local_d8 + uVar30 + 1) = cVar39;
            uVar30 = uVar30 + 2;
          }
        }
        *(undefined1 *)((long)&local_d8 + (uVar30 & 0xffffffff)) = 0;
        uVar23 = (uint)(byte)local_d8;
        if ((byte)local_d8 != 0) {
          pbVar21 = (byte *)((long)&local_d8 + 1);
          uVar10 = 0x811c9dc5;
          do {
            uVar10 = uVar10 * 0x89 ^ uVar23;
            uVar23 = (uint)*pbVar21;
            pbVar21 = pbVar21 + 1;
          } while (uVar23 != 0);
        }
        local_e0 = (byte ***)CONCAT44((int)uVar30,uVar10);
        uVar30 = uVar12;
joined_r0x007101dab1d0:
        if ((uVar11 & 1) == 0) goto LAB_7101dab1d4;
        FUN_7103778300(0x3f800000,lVar35,0x710438ceff);
      }
      else {
        if (((uVar14 & 0xff00000000000000) == 0x7100000000000000) && ((uVar14 & 0xffffffffff) != 0))
        {
          pcVar15 = (char *)param_1[0x27];
          pcVar3 = (char *)param_1[0x28];
          if (pcVar15 == pcVar3) {
            uVar11 = 0;
          }
          else {
            do {
              pcVar28 = pcVar15 + 0x20;
              uVar11 = FUN_71025d0920(*pcVar15,puVar1,(long ****)ppppppppplVar18,ppppbVar31,param_5,
                                      param_6,param_7,param_8);
              if ((uVar11 & 1) != 0) break;
              pcVar15 = pcVar28;
            } while (pcVar3 != pcVar28);
          }
          pcVar15 = FUN_71025b32d0(cVar39,uVar33);
          if (pcVar15 == (char *)0x0) {
            uVar30 = 0;
          }
          else {
            uVar30 = 0;
            while( true ) {
              cVar39 = pcVar15[uVar30];
              if (cVar39 == '\0') break;
              *(char *)((long)&local_d8 + uVar30) = cVar39;
              if (0x3e < (int)uVar30 + 1U) {
                uVar30 = (ulong)((int)uVar30 + 1);
                break;
              }
              cVar39 = (pcVar15 + uVar30)[1];
              if (cVar39 == '\0') {
                uVar30 = uVar30 + 1;
                break;
              }
              *(char *)((long)&local_d8 + uVar30 + 1) = cVar39;
              uVar30 = uVar30 + 2;
            }
          }
          *(undefined1 *)((long)&local_d8 + (uVar30 & 0xffffffff)) = 0;
          uVar23 = (uint)(byte)local_d8;
          if ((byte)local_d8 != 0) {
            pbVar21 = (byte *)((long)&local_d8 + 1);
            uVar10 = 0x811c9dc5;
            do {
              uVar10 = uVar10 * 0x89 ^ uVar23;
              uVar23 = (uint)*pbVar21;
              pbVar21 = pbVar21 + 1;
            } while (uVar23 != 0);
          }
          local_e0 = (byte ***)CONCAT44((int)uVar30,uVar10);
          uVar30 = uVar14;
          goto joined_r0x007101dab1d0;
        }
LAB_7101dab1d4:
        FUN_7103778300(0x3f800000,lVar35,0x71043f0d57);
      }
      FUN_7103776640(&local_f0,(long)&local_128,(byte ****)"set_parts_it_gimmick",ppppppppplVar18,
                     ppppbVar31,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_100,(long)&local_f0,(long ****)"set_txt_help",ppppppppplVar18,ppppbVar31
                     ,param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_100,(char *)&local_d8,ppppppppplVar18,ppppbVar31,param_5,param_6,
                     param_7,param_8);
      plVar13 = local_f8;
      local_100 = &PTR_FUN_710523d9a8;
      local_f8 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar13);
      }
      if (((uVar30 & 0xff00000000000000) == 0x7100000000000000) && ((uVar30 & 0xffffffffff) != 0)) {
        local_100 = (undefined **)FUN_7103238e70(uVar30,0x13);
        if (((ulong)local_100 & 0xffffffffff) != 0) {
          lVar35 = param_1[5];
          ppppppppplVar18 = (long *********)(long)*(int *)(lVar35 + 0x70);
          ppppbVar31 = (byte ****)(ulong)*(uint *)(lVar35 + 0x68);
          FUN_710323c4e0(lVar35,(ulong *)&local_100,ppppppppplVar18,ppppbVar31,param_5,param_6,
                         param_7,param_8);
        }
        plVar16 = FUN_710323f760(param_1 + 5,uVar30,(long ****)ppppppppplVar18,ppppbVar31,param_5,
                                 param_6,param_7,param_8);
        FUN_7103776910(&local_100,(long)&local_128,(long ****)"set_rep_gimmick",ppppppppplVar18,
                       ppppbVar31,param_5,param_6,param_7,param_8);
        plVar13 = local_f8;
        FUN_7103778b80((long)local_f8,(long)plVar16,ppppppppplVar18,ppppbVar31,param_5,param_6,
                       param_7,param_8);
        local_100 = &PTR_FUN_710523d9a8;
        local_f8 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar13);
        }
        FUN_7103776910(&local_100,(long)&local_f0,(long ****)"set_pic_icon",ppppppppplVar18,
                       ppppbVar31,param_5,param_6,param_7,param_8);
        plVar13 = local_f8;
        FUN_7103778b80((long)local_f8,(long)plVar16,ppppppppplVar18,ppppbVar31,param_5,param_6,
                       param_7,param_8);
        uVar27 = extraout_x1_08;
      }
      else {
        FUN_7103776910(&local_100,(long)&local_128,(long ****)"set_rep_gimmick",ppppppppplVar18,
                       ppppbVar31,param_5,param_6,param_7,param_8);
        plVar13 = local_f8;
        FUN_71037790a0((long)local_f8,1,ppppppppplVar18,ppppbVar31,param_5,param_6,param_7,param_8);
        uVar27 = extraout_x1_09;
      }
      local_f8 = (long *)0x0;
      local_100 = &PTR_FUN_710523d9a8;
      if (plVar13 != (long *)0x0) {
        local_f8 = (long *)0x0;
        local_100 = &PTR_FUN_710523d9a8;
        FUN_710392eb40((ulong)plVar13);
        uVar27 = extraout_x1_10;
      }
      uVar30 = local_e8;
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = 0;
      if (uVar30 != 0) {
        uVar12 = *(ulong *)(uVar30 + 0x18);
        *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar30 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar30);
        uVar27 = extraout_x1_11;
      }
    }
    else {
      FUN_7103778300(0x3f800000,CONCAT44(uStack_11c,fStack_120),0x71042a34b8);
      *(undefined1 *)((long)param_1 + 0xdd) = 0;
      uVar27 = extraout_x1_05;
    }
    plVar13 = local_138;
    uVar30 = CONCAT44(uVar7,fVar43);
    local_140 = &PTR_FUN_710523d988;
    local_138 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      uVar12 = plVar13[3];
      plVar13[2] = (long)&PTR_FUN_710523d9a8;
      plVar13[3] = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40((ulong)plVar13);
      uVar27 = extraout_x1_12;
    }
    local_128 = 0x523d988;
    fStack_124 = 1.58347e-43;
    fStack_120 = 0.0;
    uStack_11c = 0;
    if (uVar30 != 0) {
      uVar12 = *(ulong *)(uVar30 + 0x18);
      *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar30 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar30);
      uVar27 = extraout_x1_13;
    }
  }
  if (*(int *)(param_1 + 0x12) == 2) {
    FUN_7101da5a40((long)param_1,uVar27,ppppppppplVar18,ppppbVar31,param_5,param_6,param_7,param_8);
  }
  else {
    FUN_7101dac110((long)param_1,uVar27,ppppppppplVar18,ppppbVar31,param_5,param_6,param_7,param_8);
  }
  switch((uint)param_4 & 0xff) {
  case 1:
    FUN_7103776640(&local_e0,(long)puVar36,(byte ****)"set_parts_btn_attacker",ppppppppplVar18,
                   ppppbVar31,param_5,param_6,param_7,param_8);
    plVar13 = local_d8;
    FUN_7103778300(0x3f800000,(long)local_d8,0x710434a8a5);
    goto LAB_7101dab4b0;
  case 2:
    FUN_7103776640(&local_e0,(long)puVar36,(byte ****)"set_parts_slot",ppppppppplVar18,ppppbVar31,
                   param_5,param_6,param_7,param_8);
    pcVar15 = "set_parts_btn_spter_00";
    break;
  case 3:
    FUN_7103776640(&local_e0,(long)puVar36,(byte ****)"set_parts_slot",ppppppppplVar18,ppppbVar31,
                   param_5,param_6,param_7,param_8);
    pcVar15 = "set_parts_btn_spter_01";
    break;
  case 4:
    FUN_7103776640(&local_e0,(long)puVar36,(byte ****)"set_parts_slot",ppppppppplVar18,ppppbVar31,
                   param_5,param_6,param_7,param_8);
    pcVar15 = "set_parts_btn_spter_02";
    break;
  default:
    goto switchD_7101dab3d8_default;
  }
  FUN_7103776640((undefined8 *)&local_128,(long)&local_e0,(byte ****)pcVar15,ppppppppplVar18,
                 ppppbVar31,param_5,param_6,param_7,param_8);
  uVar30 = CONCAT44(uStack_11c,fStack_120);
  FUN_7103778300(0x3f800000,uVar30,0x710434a8a5);
  local_128 = 0x523d988;
  fStack_124 = 1.58347e-43;
  fStack_120 = 0.0;
  uStack_11c = 0;
  plVar13 = local_d8;
  if (uVar30 != 0) {
    uVar12 = *(ulong *)(uVar30 + 0x18);
    *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar30 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar30);
    plVar13 = local_d8;
  }
LAB_7101dab4b0:
  local_e0 = (byte ***)&PTR_FUN_710523d988;
  local_d8 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    uVar30 = plVar13[3];
    plVar13[2] = (long)&PTR_FUN_710523d9a8;
    plVar13[3] = 0;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
    FUN_710392eb40((ulong)plVar13);
  }
switchD_7101dab3d8_default:
  if (*(short *)(param_1 + 0x13) == -1) {
    if (*(char *)(param_1 + 0x8a) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x8a) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x8a) != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x8a) = 1;
  }
  FUN_7103776910(&local_e0,(long)puVar36,(long ****)"set_fxui_energy",ppppppppplVar18,ppppbVar31,
                 param_5,param_6,param_7,param_8);
  plVar13 = local_d8;
  FUN_710377aa20((long *)*local_d8,*(byte *)(param_1 + 0x8a));
  local_e0 = (byte ***)&PTR_FUN_710523d9a8;
  local_d8 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar13);
  }
  return;
}

