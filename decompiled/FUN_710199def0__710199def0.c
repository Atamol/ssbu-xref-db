// addr:      710199def0
// offset:    0x199def0
// name:      FUN_710199def0
// mangled:   
// signature: undefined __cdecl FUN_710199def0(long param_1, undefined8 param_2, undefined * * param_3, undefined8 param_4, long * * * * param_5, ulong param_6, long * * * * param_7, long * * param_8)


void FUN_710199def0(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                   long ****param_5,ulong param_6,long ****param_7,long **param_8)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined2 uVar14;
  undefined2 uVar15;
  undefined8 *puVar16;
  int iVar17;
  bool bVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  long lVar24;
  long *plVar25;
  int *piVar26;
  long *plVar27;
  ushort uVar28;
  byte *pbVar29;
  undefined8 extraout_x1;
  undefined8 uVar30;
  undefined **ppuVar31;
  ulong uVar32;
  long ***ppplVar33;
  ulong uVar34;
  byte ****ppppbVar35;
  uint uVar36;
  long *plVar37;
  undefined2 *puVar38;
  undefined4 uVar39;
  long lVar40;
  long ****pppplVar41;
  byte *pbVar42;
  char *pcVar43;
  int iVar44;
  ulong uVar45;
  byte *pbVar46;
  int iVar47;
  uint uVar48;
  uint uVar49;
  short sVar50;
  short sVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar64;
  float fVar65;
  float local_2b0;
  undefined4 uStack_2ac;
  float local_2a0;
  float fStack_29c;
  byte abStack_288 [64];
  undefined8 local_248;
  undefined8 local_240;
  char local_1fc [4];
  long ********pppppppplStack_1f8;
  undefined1 local_1f0 [16];
  undefined **local_1e0;
  undefined8 uStack_1d8;
  
  local_1f0 = ZEXT816(0);
  if (*(short *)(param_1 + 0x396) == -1) {
    uVar45 = 0;
  }
  else {
    local_1f0 = FUN_710199c690(param_1);
    uVar45 = local_1f0._0_8_;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar22 = __cxa_guard_acquire(&DAT_71053144d8), iVar22 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  piVar23 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  lVar2 = param_1 + 0x18;
  if ((uVar45 & 0xffff) == 0) {
    pcVar43 = "exp_non";
  }
  else {
    pcVar43 = "exp_up";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),(long)pcVar43);
  uVar28 = *(ushort *)((long)piVar23 + 0xa2);
  uVar20 = FUN_710324bb60(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),uVar28);
  FUN_7103776910(&local_1e0,lVar2,(long ****)"set_txt_level_num_00",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar30 = 1;
  uVar32 = (ulong)(uVar20 & 0xff);
  FUN_710377a280((long)&local_1e0,(byte *)"mnu_amiibo_level_n",1);
  uVar34 = (ulong)uStack_1d8;
  local_1e0 = &PTR_FUN_710523d9a8;
  uStack_1d8 = (long *)0x0;
  if (uVar34 != 0) {
    FUN_710392eb40(uVar34);
  }
  iVar22 = (uint)uVar28 + ((uint)uVar45 & 0xffff);
  uVar21 = FUN_710324bb60(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),(ushort)iVar22);
  FUN_7103776910(&local_1e0,lVar2,(long ****)"set_txt_level_num_01",uVar30,uVar32,param_5,param_6,
                 param_7,param_8);
  ppuVar31 = (undefined **)0x1;
  ppplVar33 = (long ***)(ulong)(uVar21 & 0xff);
  FUN_710377a280((long)&local_1e0,(byte *)"mnu_amiibo_level_n",1);
  uVar45 = (ulong)uStack_1d8;
  local_1e0 = &PTR_FUN_710523d9a8;
  uStack_1d8 = (long *)0x0;
  if (uVar45 != 0) {
    FUN_710392eb40(uVar45);
  }
  if ((uVar20 & 0xff) < (uVar21 & 0xff)) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71043df98d);
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71042e699e);
    FUN_7103776910(&local_1e0,lVar2,(long ****)"set_fxui_level",ppuVar31,ppplVar33,param_5,param_6,
                   param_7,param_8);
    plVar25 = uStack_1d8;
    FUN_710377acb0((long *)*uStack_1d8,0,ppuVar31,ppplVar33,param_5,param_6,param_7,param_8);
    local_1e0 = &PTR_FUN_710523d9a8;
    uStack_1d8 = (long *)0x0;
    if (plVar25 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar25);
    }
  }
  lVar24 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8);
  lVar40 = *(long *)(lVar24 + 8);
  pcVar43 = *(char **)(lVar40 + 0x20);
  if ((*pcVar43 == '\f') && (iVar47 = *(int *)(pcVar43 + 1) + -1, 0 < *(int *)(pcVar43 + 1))) {
    pppplVar41 = *(long *****)(lVar40 + 0x18);
    iVar44 = 0;
    pbVar42 = &DAT_7104742dbb;
    do {
      iVar3 = iVar47 + iVar44;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)((long)pppplVar41[5] + (long)iVar3 * 8 + (long)*(int *)(pcVar43 + 5));
      if (pppplVar41[4][*puVar1] == (long **)0x9aef34832) {
        uVar21 = puVar1[1];
        if ((int)uVar21 < 0) goto LAB_710199e180;
        pbVar42 = (byte *)(pcVar43 + (int)uVar21);
        goto LAB_710199e18c;
      }
      iVar17 = iVar3 + -1;
      if (pppplVar41[4][*puVar1] < (long **)0x9aef34833) {
        iVar44 = iVar3 + 1;
        iVar17 = iVar47;
      }
      iVar47 = iVar17;
    } while (iVar44 <= iVar47);
    pppplVar41 = (long ****)0x0;
  }
  else {
LAB_710199e180:
    pppplVar41 = (long ****)0x0;
    pbVar42 = &DAT_7104742dbb;
  }
LAB_710199e18c:
  if ((*pbVar42 - 0xb < 2) && (1 < *(int *)(pbVar42 + 1))) {
    uVar45 = 1;
    do {
      if (*pbVar42 == 0xb) {
        param_5 = pppplVar41;
        pbVar46 = pbVar42 + *(int *)(pbVar42 + (uVar45 & 0x3fffffff) * 4 + 5);
      }
      else {
        param_5 = (long ****)0x0;
        pbVar46 = &DAT_7104742dbb;
      }
      pbVar29 = &DAT_7104742dbb;
      if ((*pbVar46 == 0xc) && (uVar21 = *(int *)(pbVar46 + 1) - 1, 0 < *(int *)(pbVar46 + 1))) {
        ppplVar33 = param_5[4];
        ppuVar31 = (undefined **)0x0;
        param_5 = (long ****)((long)param_5[5] + (long)*(int *)(pbVar46 + 5));
        do {
          uVar36 = (uint)ppuVar31;
          iVar47 = uVar21 + uVar36;
          if (iVar47 < 0) {
            iVar47 = iVar47 + 1;
          }
          uVar48 = iVar47 >> 1;
          param_6 = (ulong)uVar48;
          param_7 = param_5 + (int)uVar48;
          param_8 = ppplVar33[*(uint *)param_7];
          if (param_8 == (long **)0x945ad9f40) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar29 = pbVar46 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (long ****)(ulong)(uVar48 - 1);
          uVar49 = uVar48 - 1;
          if (param_8 < (long **)0x945ad9f41) {
            uVar36 = uVar48 + 1;
            uVar49 = uVar21;
          }
          uVar21 = uVar49;
          ppuVar31 = (undefined **)(ulong)uVar36;
        } while ((int)uVar36 <= (int)uVar21);
      }
      switch(*pbVar29) {
      case 1:
      case 3:
        uVar21 = (uint)pbVar29[1];
        break;
      case 2:
        uVar21 = (uint)(char)pbVar29[1];
        break;
      case 4:
        uVar21 = (uint)*(short *)(pbVar29 + 1);
        break;
      case 5:
      case 6:
      case 7:
        uVar21 = (uint)*(ushort *)(pbVar29 + 1);
        break;
      default:
        uVar21 = 0;
      }
      uVar36 = (uVar21 & 0xffff) - (uint)*(ushort *)((long)piVar23 + 0xa2);
      if ((uint)*(ushort *)((long)piVar23 + 0xa2) <= (uVar21 & 0xffff) && uVar36 != 0) {
        if ((uVar36 & 0xffff) != 0) {
          uVar45 = FUN_710324c360(lVar24,uVar20 & 0xff);
          uVar20 = (uint)uVar45 & 0xffff;
          FUN_7103776910(&local_1e0,lVar2,(long ****)"exp_bar_base",ppuVar31,ppplVar33,param_5,
                         param_6,param_7,param_8);
          plVar25 = uStack_1d8;
          if (*uStack_1d8 == 0) {
            fVar64 = 0.0;
          }
          else {
            fVar64 = ABS(*(float *)(*uStack_1d8 + 0x50));
          }
          fVar55 = (float)(((uint)uVar28 + (uVar36 & 0xffff)) - uVar20);
          local_1e0 = &PTR_FUN_710523d9a8;
          uStack_1d8 = (long *)0x0;
          if (plVar25 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar25);
          }
          fVar52 = (float)(uVar28 - uVar20) / fVar55;
          FUN_7103776910(&local_1e0,lVar2,(long ****)"set_pic_exp_bar_01",ppuVar31,ppplVar33,param_5
                         ,param_6,param_7,param_8);
          plVar25 = uStack_1d8;
          lVar24 = *uStack_1d8;
          if (lVar24 != 0) {
            fVar56 = fVar52;
            if (1.0 < fVar52) {
              fVar56 = 1.0;
            }
            *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 0x10;
            *(float *)(lVar24 + 0x50) = fVar56 * fVar64;
            *(float *)(lVar24 + 0x54) = ABS(*(float *)(lVar24 + 0x54));
          }
          local_1e0 = &PTR_FUN_710523d9a8;
          uStack_1d8 = (long *)0x0;
          if (plVar25 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar25);
          }
          FUN_7103776910(&local_1e0,lVar2,(long ****)"exp_bar_base",ppuVar31,ppplVar33,param_5,
                         param_6,param_7,param_8);
          plVar25 = uStack_1d8;
          if (*uStack_1d8 == 0) {
            fVar64 = 0.0;
          }
          else {
            fVar64 = ABS(*(float *)(*uStack_1d8 + 0x50));
          }
          local_1e0 = &PTR_FUN_710523d9a8;
          uStack_1d8 = (long *)0x0;
          if (plVar25 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar25);
          }
          fVar55 = (float)(iVar22 - uVar20) / fVar55;
          FUN_7103776910(&local_1e0,lVar2,(long ****)"set_pic_exp_bar_00",ppuVar31,ppplVar33,param_5
                         ,param_6,param_7,param_8);
          plVar25 = uStack_1d8;
          lVar24 = *uStack_1d8;
          if (lVar24 != 0) {
            fVar56 = fVar55;
            if (1.0 < fVar55) {
              fVar56 = 1.0;
            }
            *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 0x10;
            *(float *)(lVar24 + 0x50) = fVar56 * fVar64;
            *(float *)(lVar24 + 0x54) = ABS(*(float *)(lVar24 + 0x54));
          }
          local_1e0 = &PTR_FUN_710523d9a8;
          uStack_1d8 = (long *)0x0;
          if (plVar25 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar25);
          }
          uVar39 = 0x1e;
          if (fVar52 != fVar55) {
            uVar39 = 0;
          }
          *(float *)(param_1 + 0x3b4) = fVar52;
          *(float *)(param_1 + 0x3b0) = fVar55;
          *(undefined4 *)(param_1 + 0x3b8) = uVar39;
          *(uint *)(param_1 + 0x3bc) = (uint)(fVar52 != fVar55);
          goto joined_r0x0071019a02bc;
        }
        break;
      }
      uVar45 = uVar45 + 1;
    } while ((long)uVar45 < (long)*(int *)(pbVar42 + 1));
  }
  FUN_7103776910(&local_1e0,lVar2,(long ****)"exp_bar_base",ppuVar31,ppplVar33,param_5,param_6,
                 param_7,param_8);
  plVar25 = uStack_1d8;
  if (*uStack_1d8 == 0) {
    fVar64 = 0.0;
  }
  else {
    fVar64 = ABS(*(float *)(*uStack_1d8 + 0x50));
  }
  local_1e0 = &PTR_FUN_710523d9a8;
  bVar18 = uStack_1d8 != (long *)0x0;
  uStack_1d8 = (long *)0x0;
  if (bVar18) {
    uStack_1d8 = (long *)0x0;
    local_1e0 = &PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)plVar25);
  }
  FUN_7103776910(&local_1e0,lVar2,(long ****)"set_pic_exp_bar_01",ppuVar31,ppplVar33,param_5,param_6
                 ,param_7,param_8);
  plVar25 = uStack_1d8;
  lVar24 = *uStack_1d8;
  if (lVar24 != 0) {
    *(float *)(lVar24 + 0x50) = fVar64 * 0.0;
    *(float *)(lVar24 + 0x54) = ABS(*(float *)(lVar24 + 0x54));
    *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 0x10;
  }
  local_1e0 = &PTR_FUN_710523d9a8;
  uStack_1d8 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar25);
  }
  FUN_7103776910(&local_1e0,lVar2,(long ****)"exp_bar_base",ppuVar31,ppplVar33,param_5,param_6,
                 param_7,param_8);
  plVar25 = uStack_1d8;
  if (*uStack_1d8 == 0) {
    fVar64 = 0.0;
  }
  else {
    fVar64 = ABS(*(float *)(*uStack_1d8 + 0x50));
  }
  local_1e0 = &PTR_FUN_710523d9a8;
  bVar18 = uStack_1d8 != (long *)0x0;
  uStack_1d8 = (long *)0x0;
  if (bVar18) {
    uStack_1d8 = (long *)0x0;
    local_1e0 = &PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)plVar25);
  }
  FUN_7103776910(&local_1e0,lVar2,(long ****)"set_pic_exp_bar_00",ppuVar31,ppplVar33,param_5,param_6
                 ,param_7,param_8);
  plVar25 = uStack_1d8;
  lVar24 = *uStack_1d8;
  if (lVar24 != 0) {
    *(float *)(lVar24 + 0x50) = fVar64 * 0.0;
    *(float *)(lVar24 + 0x54) = ABS(*(float *)(lVar24 + 0x54));
    *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 0x10;
  }
  local_1e0 = &PTR_FUN_710523d9a8;
  uStack_1d8 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar25);
  }
joined_r0x0071019a02bc:
  if (((DAT_71053144d8 & 1) == 0) && (iVar22 = __cxa_guard_acquire(&DAT_71053144d8), iVar22 != 0)) {
    FUN_7101764000();
    ppuVar31 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  piVar23 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  sVar50 = *(short *)((long)piVar23 + 0xa6);
  sVar51 = (short)piVar23[0x2a];
  uVar14 = local_1f0._2_2_;
  uVar15 = local_1f0._4_2_;
  iVar22 = (int)(short)local_1f0._2_2_;
  uVar20 = iVar22 + sVar50;
  iVar47 = (int)(short)local_1f0._4_2_;
  uVar21 = iVar47 + sVar51;
  FUN_7103776910(&local_1e0,lVar2,(long ****)"set_txt_atk_num",ppuVar31,ppplVar33,param_5,param_6,
                 param_7,param_8);
  uVar30 = 1;
  uVar34 = (ulong)uVar20;
  FUN_710377a280((long)&local_1e0,(byte *)"mnu_amiibo_growth_attack_n",1);
  uVar45 = (ulong)uStack_1d8;
  local_1e0 = &PTR_FUN_710523d9a8;
  uStack_1d8 = (long *)0x0;
  if (uVar45 != 0) {
    FUN_710392eb40(uVar45);
  }
  FUN_7103776910(&local_1e0,lVar2,(long ****)"set_txt_def_num",uVar30,uVar34,param_5,param_6,param_7
                 ,param_8);
  uVar30 = 1;
  uVar45 = (ulong)uVar21;
  FUN_710377a280((long)&local_1e0,(byte *)"mnu_amiibo_growth_defense_n",1);
  uVar34 = (ulong)uStack_1d8;
  local_1e0 = &PTR_FUN_710523d9a8;
  uStack_1d8 = (undefined8 *)0x0;
  if (uVar34 != 0) {
    FUN_710392eb40(uVar34);
  }
  uVar36 = (uint)(short)uVar15;
  if (iVar22 < 1) {
    if ((short)uVar14 < 0) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x7104280279);
      FUN_7103776910(&local_1e0,lVar2,(long ****)"set_txt_atk_variable",uVar30,uVar45,param_5,
                     param_6,param_7,param_8);
      uVar45 = (ulong)(uint)-(int)(short)uVar14;
      uVar30 = 1;
      FUN_710377a280((long)&local_1e0,(byte *)"mnu_amiibo_growth_rising_attack_n",1);
      puVar16 = uStack_1d8;
      local_1e0 = &PTR_FUN_710523d9a8;
      uStack_1d8 = (undefined8 *)0x0;
      if (puVar16 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar16);
      }
      goto joined_r0x00710199e614;
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x7104307def);
    if (iVar47 < 1) goto LAB_710199e528;
LAB_710199e618:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x710435adb8);
    FUN_7103776910(&local_1e0,lVar2,(long ****)"set_txt_def_variable",uVar30,uVar45,param_5,param_6,
                   param_7,param_8);
    uVar48 = uVar36;
LAB_710199e654:
    uVar45 = (ulong)uVar48;
    uVar30 = 1;
    FUN_710377a280((long)&local_1e0,(byte *)"mnu_amiibo_growth_rising_defense_n",1);
    puVar16 = uStack_1d8;
    local_1e0 = &PTR_FUN_710523d9a8;
    uStack_1d8 = (undefined8 *)0x0;
    if (puVar16 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar16);
    }
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x710438c1ed);
    FUN_7103776910(&local_1e0,lVar2,(long ****)"set_txt_atk_variable",uVar30,uVar45,param_5,param_6,
                   param_7,param_8);
    uVar30 = 1;
    uVar45 = (ulong)(uint)(int)(short)uVar14;
    FUN_710377a280((long)&local_1e0,(byte *)"mnu_amiibo_growth_rising_attack_n",1);
    puVar16 = uStack_1d8;
    local_1e0 = &PTR_FUN_710523d9a8;
    uStack_1d8 = (undefined8 *)0x0;
    if (puVar16 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar16);
    }
joined_r0x00710199e614:
    if (0 < (short)uVar15) goto LAB_710199e618;
LAB_710199e528:
    if ((int)uVar36 < 0) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x7104349b32);
      FUN_7103776910(&local_1e0,lVar2,(long ****)"set_txt_def_variable",uVar30,uVar45,param_5,
                     param_6,param_7,param_8);
      uVar48 = -uVar36;
      goto LAB_710199e654;
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71042f7ab9);
  }
  if ((short)uVar14 < 1) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71042f7ac9);
    FUN_7103776910(&local_1e0,lVar2,(long ****)"set_fxui_atk",uVar30,uVar45,param_5,param_6,param_7,
                   param_8);
    puVar16 = uStack_1d8;
    FUN_710377acb0((long *)*uStack_1d8,0,uVar30,uVar45,param_5,param_6,param_7,param_8);
    local_1e0 = &PTR_FUN_710523d9a8;
    uStack_1d8 = (undefined8 *)0x0;
    if (puVar16 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar16);
    }
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71042914c0);
  }
  if ((int)uVar36 < 1) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x710439cc28);
    FUN_7103776910(&local_1e0,lVar2,(long ****)"set_fxui_def",uVar30,uVar45,param_5,param_6,param_7,
                   param_8);
    puVar16 = uStack_1d8;
    FUN_710377acb0((long *)*uStack_1d8,0,uVar30,uVar45,param_5,param_6,param_7,param_8);
    local_1e0 = &PTR_FUN_710523d9a8;
    uStack_1d8 = (undefined8 *)0x0;
    if (puVar16 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar16);
    }
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x7104280289);
  }
  uVar48 = (uint)sVar50;
  uVar49 = (uint)sVar51;
  uVar36 = uVar48;
  if (uVar48 == uVar49 || (int)sVar50 < (int)sVar51) {
    uVar36 = uVar49;
  }
  uVar4 = uVar21;
  if ((int)uVar21 <= (int)uVar20) {
    uVar4 = uVar20;
  }
  if ((int)uVar4 <= (int)uVar36) {
    uVar4 = uVar36;
  }
  fVar65 = 0.0;
  fVar55 = (float)NEON_ucvtf((uint)*(ushort *)
                                    (*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8) + 0x194));
  fVar55 = 10000.0 / fVar55;
  fVar64 = fVar55 * (float)(int)uVar4;
  fVar56 = (fVar55 * (float)(int)uVar48) / 10000.0;
  fVar52 = (fVar55 * (float)(int)uVar49) / 10000.0;
  fVar55 = fVar56;
  if (1.0 < fVar56) {
    fVar55 = 1.0;
  }
  fVar57 = 0.0;
  if (0.0 <= fVar56) {
    fVar57 = fVar55;
  }
  fVar55 = fVar52;
  if (1.0 < fVar52) {
    fVar55 = 1.0;
  }
  fVar56 = 0.0;
  if (0.0 <= fVar52) {
    fVar56 = fVar55;
  }
  fVar52 = 0.0001;
  fVar55 = fVar52;
  if (1.0 <= fVar64) {
    if (10000.0 < fVar64) {
      fVar64 = 10000.0;
    }
    fVar55 = fVar64 / 10000.0;
  }
  fVar64 = *(float *)(*DAT_7105329fa0 + 0x2d0);
  if (*(float *)(*DAT_7105329fa0 + 0x2d0) <= 0.001) {
    fVar64 = 0.001;
  }
  fVar63 = powf(ABS(1.0 - fVar55),fVar64);
  fVar64 = powf(fVar55,1.0 / fVar64);
  fVar55 = (((1.0 - fVar63) + fVar64) * 0.5) / fVar55;
  fVar57 = fVar57 * fVar55;
  fVar56 = fVar56 * fVar55;
  fVar63 = fVar55 * 0.0;
  fVar55 = fVar55 * 0.0;
  fVar64 = fVar57;
  if (1.0 < fVar57) {
    fVar64 = 1.0;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar57) {
    fVar7 = fVar64;
  }
  fVar64 = fVar56;
  if (1.0 < fVar56) {
    fVar64 = 1.0;
  }
  fVar57 = 0.0;
  fVar8 = 0.0;
  if (0.0 <= fVar56) {
    fVar8 = fVar64;
  }
  fVar56 = (float)NEON_ucvtf((uint)*(ushort *)
                                    (*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8) + 0x194));
  fVar56 = 10000.0 / fVar56;
  fVar64 = fVar56 * (float)(int)uVar4;
  fVar58 = (fVar56 * (float)(int)uVar20) / 10000.0;
  fVar53 = (fVar56 * (float)(int)uVar21) / 10000.0;
  fVar56 = fVar58;
  if (1.0 < fVar58) {
    fVar56 = 1.0;
  }
  fVar59 = 0.0;
  if (0.0 <= fVar58) {
    fVar59 = fVar56;
  }
  fVar56 = fVar53;
  if (1.0 < fVar53) {
    fVar56 = 1.0;
  }
  fVar58 = 0.0;
  if (0.0 <= fVar53) {
    fVar58 = fVar56;
  }
  if (1.0 <= fVar64) {
    if (10000.0 < fVar64) {
      fVar64 = 10000.0;
    }
    fVar52 = fVar64 / 10000.0;
  }
  sVar50 = -(ushort)(0 < (short)uVar15);
  auVar10._10_2_ = sVar50;
  auVar10._8_2_ = sVar50;
  auVar10._12_2_ = sVar50;
  auVar10._14_2_ = sVar50;
  uStack_2ac = (undefined4)(CONCAT26(sVar50,CONCAT24(sVar50,CONCAT22(sVar50,sVar50))) >> 0x20);
  sVar51 = -(ushort)(0 < (short)uVar14);
  auVar9._10_2_ = sVar51;
  auVar9._8_2_ = sVar51;
  auVar9._12_2_ = sVar51;
  auVar9._14_2_ = sVar51;
  auVar9._2_2_ = sVar51;
  auVar9._0_2_ = sVar51;
  auVar9._4_2_ = sVar51;
  auVar9._6_2_ = sVar51;
  fVar64 = *(float *)(*DAT_7105329fa0 + 0x2d0);
  if (*(float *)(*DAT_7105329fa0 + 0x2d0) <= 0.001) {
    fVar64 = 0.001;
  }
  fVar56 = powf(ABS(1.0 - fVar52),fVar64);
  fVar64 = powf(fVar52,1.0 / fVar64);
  fVar52 = (((1.0 - fVar56) + fVar64) * 0.5) / fVar52;
  fVar59 = fVar59 * fVar52;
  fVar58 = fVar58 * fVar52;
  fVar64 = fVar59;
  if (1.0 < fVar59) {
    fVar64 = 1.0;
  }
  auVar10._4_4_ = uStack_2ac;
  auVar10._0_4_ = CONCAT22(sVar50,sVar50);
  auVar13._4_4_ = fVar8;
  auVar13._0_4_ = fVar7;
  auVar13._8_4_ = fVar63;
  auVar13._12_4_ = fVar55;
  auVar62._4_4_ = fVar8;
  auVar62._0_4_ = fVar7;
  auVar62._8_4_ = fVar63;
  auVar62._12_4_ = fVar55;
  auVar12._4_4_ = fVar8;
  auVar12._0_4_ = fVar7;
  auVar12._8_4_ = fVar63;
  auVar12._12_4_ = fVar55;
  auVar60._4_4_ = fVar8;
  auVar60._0_4_ = fVar7;
  auVar60._8_4_ = fVar63;
  auVar60._12_4_ = fVar55;
  auVar11._4_4_ = fVar8;
  auVar11._0_4_ = fVar7;
  auVar11._8_4_ = fVar63;
  auVar11._12_4_ = fVar55;
  fVar55 = 0.0;
  if (0.0 <= fVar59) {
    fVar55 = fVar64;
  }
  bVar18 = 0.0 <= fVar58;
  auVar54._4_12_ = auVar13._4_12_;
  auVar54._0_4_ = fVar55;
  if (1.0 < fVar58) {
    fVar58 = 1.0;
  }
  fVar64 = fVar65;
  if (bVar18) {
    fVar64 = fVar58;
  }
  auVar60 = auVar60 ^ (auVar11 ^ auVar54) & auVar9;
  auVar61._0_2_ = -(ushort)((short)uVar14 < 0);
  auVar61._2_2_ = auVar61._0_2_;
  auVar61._4_2_ = auVar61._0_2_;
  auVar61._6_2_ = auVar61._0_2_;
  auVar61._8_2_ = auVar61._0_2_;
  auVar61._10_2_ = auVar61._0_2_;
  auVar61._12_2_ = auVar61._0_2_;
  auVar61._14_2_ = auVar61._0_2_;
  auVar6._4_2_ = SUB42(fVar64,0);
  auVar6._0_4_ = auVar60._0_4_;
  auVar6._6_2_ = (short)((uint)fVar64 >> 0x10);
  auVar6._8_2_ = auVar60._8_2_;
  auVar6._10_2_ = auVar60._10_2_;
  auVar6._12_2_ = auVar60._12_2_;
  auVar6._14_2_ = auVar60._14_2_;
  auVar60 = auVar60 ^ (auVar60 ^ auVar6) & auVar10;
  auVar62 = auVar62 ^ (auVar12 ^ auVar54) & auVar61;
  sVar50 = -(ushort)((short)uVar15 < 0);
  uVar34 = auVar62._0_8_;
  local_2b0 = auVar60._0_4_;
  fStack_29c = (float)(CONCAT26(sVar50,CONCAT24(sVar50,CONCAT22(sVar50,sVar50))) >> 0x20);
  FUN_7103776910(&local_248,lVar2,(long ****)"set_pic_atk_bar_00",uVar30,uVar45,param_5,param_6,
                 param_7,param_8);
  plVar25 = local_240;
  lVar24 = *local_240;
  if (lVar24 != 0) {
    fVar65 = ABS(*(float *)(lVar24 + 0x50));
    fVar57 = ABS(*(float *)(lVar24 + 0x54));
  }
  uVar34 = uVar34 ^ (uVar34 ^ CONCAT44(fVar64,auVar62._0_4_)) &
                    CONCAT44(fStack_29c,CONCAT22(sVar50,sVar50));
  local_2a0 = (float)uVar34;
  fStack_29c = (float)(uVar34 >> 0x20);
  uStack_1d8 = (long *)0x0;
  local_1e0 = (undefined **)
              (ulong)(uint)((local_2b0 + -1.0) *
                           (fVar65 + -34.0) * ((fVar57 * -0.57735026) / (fVar65 + -34.0) + 1.0));
  FUN_7103779770(1.0,(long)local_240,&local_1e0);
  local_248 = &PTR_FUN_710523d9a8;
  local_240 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar25);
  }
  FUN_7103776910(&local_248,lVar2,(long ****)"set_pic_atk_bar_01",uVar30,uVar45,param_5,param_6,
                 param_7,param_8);
  plVar25 = local_240;
  lVar24 = *local_240;
  if (lVar24 == 0) {
    fVar52 = 0.0;
    fVar56 = 0.0;
  }
  else {
    fVar56 = ABS(*(float *)(lVar24 + 0x54));
    fVar52 = ABS(*(float *)(lVar24 + 0x50));
  }
  uStack_1d8 = (long *)0x0;
  local_1e0 = (undefined **)
              (ulong)(uint)((local_2a0 + -0.5) *
                           (fVar52 + -34.0) * ((fVar56 * -0.57735026) / (fVar52 + -34.0) + 1.0));
  FUN_7103779770(1.0,(long)local_240,&local_1e0);
  local_248 = &PTR_FUN_710523d9a8;
  local_240 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar25);
  }
  FUN_7103776910(&local_248,lVar2,(long ****)"set_pic_atk_bar_shadow",uVar30,uVar45,param_5,param_6,
                 param_7,param_8);
  plVar25 = local_240;
  lVar24 = *local_240;
  if (lVar24 == 0) {
    fVar52 = 0.0;
    fVar56 = 0.0;
  }
  else {
    fVar56 = ABS(*(float *)(lVar24 + 0x54));
    fVar52 = ABS(*(float *)(lVar24 + 0x50));
  }
  uStack_1d8 = (long *)0x0;
  local_1e0 = (undefined **)
              (ulong)(uint)((local_2b0 + -1.0) *
                           (fVar52 + -34.0) * ((fVar56 * -0.57735026) / (fVar52 + -34.0) + 1.0));
  FUN_7103779770(1.0,(long)local_240,&local_1e0);
  local_248 = &PTR_FUN_710523d9a8;
  local_240 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar25);
  }
  FUN_7103776910(&local_248,lVar2,(long ****)"set_pic_atk_frame_00",uVar30,uVar45,param_5,param_6,
                 param_7,param_8);
  plVar25 = local_240;
  lVar24 = *local_240;
  if (lVar24 == 0) {
    fVar52 = 0.0;
    fVar56 = 0.0;
  }
  else {
    fVar56 = ABS(*(float *)(lVar24 + 0x54));
    fVar52 = ABS(*(float *)(lVar24 + 0x50));
  }
  uStack_1d8 = (long *)0x0;
  local_1e0 = (undefined **)
              (ulong)(uint)((fVar7 + -1.0) *
                           (fVar52 + -34.0) * ((fVar56 * -0.57735026) / (fVar52 + -34.0) + 1.0));
  FUN_7103779770(1.0,(long)local_240,&local_1e0);
  local_248 = &PTR_FUN_710523d9a8;
  local_240 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar25);
  }
  FUN_7103776910(&local_248,lVar2,(long ****)"set_pic_atk_frame_01",uVar30,uVar45,param_5,param_6,
                 param_7,param_8);
  plVar25 = local_240;
  lVar24 = *local_240;
  if (lVar24 == 0) {
    fVar52 = 0.0;
    fVar56 = 0.0;
  }
  else {
    fVar56 = ABS(*(float *)(lVar24 + 0x54));
    fVar52 = ABS(*(float *)(lVar24 + 0x50));
  }
  uStack_1d8 = (long *)0x0;
  local_1e0 = (undefined **)
              (ulong)(uint)((fVar7 + -1.0) *
                           (fVar52 + -34.0) * ((fVar56 * -0.57735026) / (fVar52 + -34.0) + 1.0));
  FUN_7103779770(1.0,(long)local_240,&local_1e0);
  local_248 = &PTR_FUN_710523d9a8;
  local_240 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar25);
  }
  *(float *)(param_1 + 0x3c4) = fVar7;
  uVar39 = 0x1e;
  if (fVar7 != fVar55) {
    uVar39 = 0;
  }
  *(uint *)(param_1 + 0x3cc) = (uint)(fVar7 != fVar55);
  *(float *)(param_1 + 0x3c0) = fVar55;
  *(undefined4 *)(param_1 + 0x3c8) = uVar39;
  FUN_7103776910(&local_248,lVar2,(long ****)"set_pic_def_bar_00",uVar30,uVar45,param_5,param_6,
                 param_7,param_8);
  plVar25 = local_240;
  lVar24 = *local_240;
  if (lVar24 == 0) {
    fVar55 = 0.0;
    fVar52 = 0.0;
  }
  else {
    fVar52 = ABS(*(float *)(lVar24 + 0x54));
    fVar55 = ABS(*(float *)(lVar24 + 0x50));
  }
  fVar56 = auVar60._4_4_ + -1.0;
  uStack_1d8 = (long *)0x0;
  local_1e0 = (undefined **)
              (ulong)(uint)(fVar56 * (fVar55 + -34.0) *
                                     ((fVar52 * -0.57735026) / (fVar55 + -34.0) + 1.0));
  FUN_7103779770(1.0,(long)local_240,&local_1e0);
  local_248 = &PTR_FUN_710523d9a8;
  local_240 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar25);
  }
  FUN_7103776910(&local_248,lVar2,(long ****)"set_pic_def_bar_01",uVar30,uVar45,param_5,param_6,
                 param_7,param_8);
  plVar25 = local_240;
  lVar24 = *local_240;
  if (lVar24 == 0) {
    fVar55 = 0.0;
    fVar52 = 0.0;
  }
  else {
    fVar52 = ABS(*(float *)(lVar24 + 0x54));
    fVar55 = ABS(*(float *)(lVar24 + 0x50));
  }
  uStack_1d8 = (long *)0x0;
  local_1e0 = (undefined **)
              (ulong)(uint)((fStack_29c + -0.5) *
                           (fVar55 + -34.0) * ((fVar52 * -0.57735026) / (fVar55 + -34.0) + 1.0));
  FUN_7103779770(1.0,(long)local_240,&local_1e0);
  local_248 = &PTR_FUN_710523d9a8;
  local_240 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar25);
  }
  FUN_7103776910(&local_248,lVar2,(long ****)"set_pic_def_bar_shadow",uVar30,uVar45,param_5,param_6,
                 param_7,param_8);
  plVar25 = local_240;
  lVar24 = *local_240;
  if (lVar24 == 0) {
    fVar55 = 0.0;
    fVar52 = 0.0;
  }
  else {
    fVar52 = ABS(*(float *)(lVar24 + 0x54));
    fVar55 = ABS(*(float *)(lVar24 + 0x50));
  }
  uStack_1d8 = (long *)0x0;
  local_1e0 = (undefined **)
              (ulong)(uint)(fVar56 * (fVar55 + -34.0) *
                                     ((fVar52 * -0.57735026) / (fVar55 + -34.0) + 1.0));
  FUN_7103779770(1.0,(long)local_240,&local_1e0);
  local_248 = &PTR_FUN_710523d9a8;
  local_240 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar25);
  }
  FUN_7103776910(&local_248,lVar2,(long ****)"set_pic_def_frame_00",uVar30,uVar45,param_5,param_6,
                 param_7,param_8);
  plVar25 = local_240;
  lVar24 = *local_240;
  if (lVar24 == 0) {
    fVar55 = 0.0;
    fVar52 = 0.0;
  }
  else {
    fVar52 = ABS(*(float *)(lVar24 + 0x54));
    fVar55 = ABS(*(float *)(lVar24 + 0x50));
  }
  uStack_1d8 = (long *)0x0;
  local_1e0 = (undefined **)
              (ulong)(uint)((fVar8 + -1.0) *
                           (fVar55 + -34.0) * ((fVar52 * -0.57735026) / (fVar55 + -34.0) + 1.0));
  FUN_7103779770(1.0,(long)local_240,&local_1e0);
  local_248 = &PTR_FUN_710523d9a8;
  local_240 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar25);
  }
  FUN_7103776910(&local_248,lVar2,(long ****)"set_pic_def_frame_01",uVar30,uVar45,param_5,param_6,
                 param_7,param_8);
  plVar25 = local_240;
  lVar24 = *local_240;
  if (lVar24 == 0) {
    fVar55 = 0.0;
    fVar52 = 0.0;
  }
  else {
    fVar52 = ABS(*(float *)(lVar24 + 0x54));
    fVar55 = ABS(*(float *)(lVar24 + 0x50));
  }
  uStack_1d8 = (long *)0x0;
  local_1e0 = (undefined **)
              (ulong)(uint)((fVar8 + -1.0) *
                           (fVar55 + -34.0) * ((fVar52 * -0.57735026) / (fVar55 + -34.0) + 1.0));
  FUN_7103779770(1.0,(long)local_240,&local_1e0);
  local_248 = &PTR_FUN_710523d9a8;
  local_240 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar25);
  }
  uVar39 = 0x1e;
  lVar24 = *(long *)(param_1 + 0x20);
  *(float *)(param_1 + 0x3d0) = fVar64;
  if (fVar8 != fVar64) {
    uVar39 = 0;
  }
  *(float *)(param_1 + 0x3d4) = fVar8;
  *(undefined4 *)(param_1 + 0x3d8) = uVar39;
  *(uint *)(param_1 + 0x3dc) = (uint)(fVar8 != fVar64);
  lVar40 = *(long *)(lVar24 + 8);
  if (local_1f0._12_4_ == 2) {
    if ((lVar40 == 0) ||
       (plVar25 = (long *)FUN_71037964b0(lVar40,0x71043187d8), plVar25 == (long *)0x0)) {
LAB_710199ef7c:
      pcVar43 = "limit_fp_mark_show";
      goto LAB_710199f084;
    }
    uVar45 = (**(code **)(*plVar25 + 0x130))();
    if ((uVar45 & 1) == 0) {
      lVar24 = *(long *)(param_1 + 0x20);
      goto LAB_710199ef7c;
    }
  }
  else {
    if ((lVar40 != 0) &&
       (plVar25 = (long *)FUN_71037964b0(lVar40,0x71043187d8), plVar25 != (long *)0x0)) {
      (**(code **)(*plVar25 + 0x140))(plVar25,1);
      lVar24 = *(long *)(lVar24 + 8);
      if (lVar24 != 0) {
        plVar27 = *(long **)(lVar24 + 0x80);
        while (plVar27 != (long *)(lVar24 + 0x88)) {
          uVar45 = (**(code **)(*(long *)plVar27[0xd] + 0x148))();
          if (((uVar45 & 1) != 0) &&
             (uVar45 = (**(code **)(*plVar25 + 0x120))(plVar25,plVar27[0xd]), (uVar45 & 1) != 0)) {
            (**(code **)(*(long *)plVar27[0xd] + 0x178))();
            (**(code **)(*(long *)plVar27[0xd] + 0x140))((long *)plVar27[0xd],0);
          }
          plVar37 = (long *)plVar27[1];
          if ((long *)plVar27[1] == (long *)0x0) {
            plVar37 = plVar27 + 2;
            bVar18 = *(long **)*plVar37 != plVar27;
            plVar27 = (long *)*plVar37;
            if (bVar18) {
              do {
                lVar40 = *plVar37;
                plVar37 = (long *)(lVar40 + 0x10);
                plVar27 = (long *)*plVar37;
              } while (*plVar27 != lVar40);
            }
          }
          else {
            do {
              plVar27 = plVar37;
              plVar37 = (long *)*plVar27;
            } while ((long *)*plVar27 != (long *)0x0);
          }
        }
      }
      (**(code **)(*plVar25 + 0x178))(plVar25);
      lVar24 = *(long *)(param_1 + 0x20);
    }
    pcVar43 = "limit_fp_mark_hide";
LAB_710199f084:
    FUN_7103778300(0x3f800000,lVar24,(long)pcVar43);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar22 = __cxa_guard_acquire(&DAT_71053144d8), iVar22 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  piVar23 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  cVar5 = *(char *)((long)piVar23 + 0x103);
  ppuVar31 = (undefined **)&pppppppplStack_1f8;
  ppppbVar35 = (byte ****)local_1fc;
  FUN_7101766e10((long)piVar23,local_1f0 + 8,(char *)ppuVar31,(undefined1 *)ppppbVar35);
  if (cVar5 == local_1fc[0]) {
    pcVar43 = "attribute_glow_hide";
  }
  else {
    pcVar43 = "attribute_glow_show";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),(long)pcVar43);
  switch(local_1fc[0]) {
  case '\0':
    lVar24 = *(long *)(param_1 + 0x20);
    pcVar43 = "amiibo_non";
    break;
  case '\x01':
    lVar24 = *(long *)(param_1 + 0x20);
    pcVar43 = "amiibo_offense";
    break;
  case '\x02':
    lVar24 = *(long *)(param_1 + 0x20);
    pcVar43 = "amiibo_defense";
    break;
  case '\x03':
    lVar24 = *(long *)(param_1 + 0x20);
    pcVar43 = "amiibo_throw";
    break;
  default:
    goto switchD_710199f110_default;
  }
  FUN_7103778300(0x3f800000,lVar24,(long)pcVar43);
switchD_710199f110_default:
  if (((DAT_71053144d8 & 1) == 0) && (iVar22 = __cxa_guard_acquire(&DAT_71053144d8), iVar22 != 0)) {
    FUN_7101764000();
    ppuVar31 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  piVar26 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x80),0x7104339aab);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xa8),0x7104339aab);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xd0),0x7104339aab);
  plVar25 = (long *)(param_1 + 8);
  if (*(char *)(param_1 + 0x60) != '\0') {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x80),0x71042b3c6d);
    if (3 < *(uint *)(param_1 + 100)) goto LAB_710199f540;
    switch(*(uint *)(param_1 + 100)) {
    case 0:
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x80),0x71044548ad);
      bVar19 = *(byte *)((long)piVar26 + 0xaa);
      uVar36 = (uint)bVar19;
      uVar20 = bVar19 + 0x2e;
      uVar21 = (uint)bVar19;
      if (0xde < bVar19) {
        uVar21 = uVar20;
      }
      if (uVar21 == 0) break;
      if (0xde < uVar21) {
        lVar24 = *(long *)(DAT_710532f730 + 8);
        uVar28 = (ushort)uVar21;
        bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
        if ((bVar18) &&
           (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
          lVar24 = *(long *)(DAT_710532f730 + 8);
          bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
          if ((bVar18) &&
             (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
            uVar36 = (uint)*(byte *)((long)piVar26 + 0xaa);
LAB_710199f520:
            uVar20 = uVar36 + 0x2e;
            goto LAB_710199f350;
          }
        }
        break;
      }
LAB_710199f350:
      if (((0xde < uVar36) || (uVar20 = uVar36, uVar36 != 0)) && (0xde < uVar20)) {
        lVar24 = *(long *)(DAT_710532f730 + 8);
        bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),(ushort)uVar20);
        if ((!bVar18) ||
           (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),(ushort)uVar20), 0xd < (int)uVar45))
        break;
      }
      goto LAB_710199f530;
    case 1:
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x80),0x71044548ad);
      bVar19 = *(byte *)((long)piVar26 + 0xab);
      uVar36 = (uint)bVar19;
      uVar20 = bVar19 + 0x2e;
      uVar21 = (uint)bVar19;
      if (0xde < bVar19) {
        uVar21 = uVar20;
      }
      if (uVar21 != 0) {
        if (uVar21 < 0xdf) goto LAB_710199f350;
        lVar24 = *(long *)(DAT_710532f730 + 8);
        uVar28 = (ushort)uVar21;
        bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
        if ((bVar18) &&
           (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
          lVar24 = *(long *)(DAT_710532f730 + 8);
          bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
          if ((bVar18) &&
             (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
            uVar36 = (uint)*(byte *)((long)piVar26 + 0xab);
            goto LAB_710199f520;
          }
        }
      }
      break;
    case 2:
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x80),0x71044548ad);
      bVar19 = *(byte *)(piVar26 + 0x2b);
      uVar36 = (uint)bVar19;
      uVar20 = bVar19 + 0x2e;
      uVar21 = (uint)bVar19;
      if (0xde < bVar19) {
        uVar21 = uVar20;
      }
      if (uVar21 != 0) {
        if (uVar21 < 0xdf) goto LAB_710199f350;
        lVar24 = *(long *)(DAT_710532f730 + 8);
        uVar28 = (ushort)uVar21;
        bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
        if ((bVar18) &&
           (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
          lVar24 = *(long *)(DAT_710532f730 + 8);
          bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
          if ((bVar18) &&
             (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
            uVar36 = (uint)*(byte *)(piVar26 + 0x2b);
            goto LAB_710199f520;
          }
        }
      }
      break;
    case 3:
      uVar28 = *(ushort *)(param_1 + 0x396);
      if (uVar28 >> 4 < 0x177) {
        puVar38 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar28 * 0x50 + 72000);
      }
      else {
        puVar38 = &DAT_710532a878;
        if (((ushort)(uVar28 + 0xe890) < 100) &&
           (lVar24 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar28 + 0xe890) * 0x50,
           *(short *)(lVar24 + 0x88cc8) != -1)) {
          puVar38 = (undefined2 *)(lVar24 + 0x88cc0);
        }
      }
      uVar45 = (ulong)(short)puVar38[4];
      lVar24 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      if (uVar45 != 0xffffffffffffffff) {
        uVar45 = (ulong)*(ushort *)(lVar24 + uVar45 * 2 + 0x60);
      }
      uVar34 = (*(long *)(lVar24 + 0x28) - *(long *)(lVar24 + 0x20) >> 6) * -0x3333333333333333;
      puVar38 = (undefined2 *)(*(long *)(lVar24 + 0x20) + uVar45 * 0x140);
      if (uVar34 < uVar45 || uVar34 - uVar45 == 0) {
        puVar38 = &DAT_7105182b08;
      }
      uVar45 = FUN_71032a1630(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x218),puVar38[0x35]);
      local_1e0 = (undefined **)FUN_7103238e70(uVar45,0x13);
      if (((ulong)local_1e0 & 0xffffffffff) != 0) {
        lVar24 = *plVar25;
        ppppbVar35 = (byte ****)(ulong)*(uint *)(lVar24 + 0x68);
        FUN_710323c4e0(lVar24,(ulong *)&local_1e0,(long *********)(long)*(int *)(lVar24 + 0x70),
                       ppppbVar35,param_5,param_6,param_7,param_8);
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x80),0x71043ced64);
      ppuVar31 = (undefined **)(ulong)(ushort)puVar38[0x35];
      goto LAB_710199f53c;
    }
    uVar20 = 0;
LAB_710199f530:
    ppuVar31 = (undefined **)(ulong)uVar20;
LAB_710199f53c:
    FUN_71019b6cd0(param_1 + 0x78,plVar25,(long *********)ppuVar31,ppppbVar35,param_5,param_6,
                   param_7,param_8);
  }
LAB_710199f540:
  if (*(char *)(param_1 + 0x68) != '\0') {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xa8),0x71042b3c6d);
    if (3 < *(uint *)(param_1 + 0x6c)) goto LAB_710199f8c0;
    switch(*(uint *)(param_1 + 0x6c)) {
    case 0:
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xa8),0x71044548ad);
      bVar19 = *(byte *)((long)piVar26 + 0xaa);
      uVar36 = (uint)bVar19;
      uVar20 = bVar19 + 0x2e;
      uVar21 = (uint)bVar19;
      if (0xde < bVar19) {
        uVar21 = uVar20;
      }
      if (uVar21 == 0) break;
      if (0xde < uVar21) {
        lVar24 = *(long *)(DAT_710532f730 + 8);
        uVar28 = (ushort)uVar21;
        bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
        if ((bVar18) &&
           (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
          lVar24 = *(long *)(DAT_710532f730 + 8);
          bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
          if ((bVar18) &&
             (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
            uVar36 = (uint)*(byte *)((long)piVar26 + 0xaa);
LAB_710199f8a0:
            uVar20 = uVar36 + 0x2e;
            goto LAB_710199f6d0;
          }
        }
        break;
      }
LAB_710199f6d0:
      if (((0xde < uVar36) || (uVar20 = uVar36, uVar36 != 0)) && (0xde < uVar20)) {
        lVar24 = *(long *)(DAT_710532f730 + 8);
        bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),(ushort)uVar20);
        if ((!bVar18) ||
           (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),(ushort)uVar20), 0xd < (int)uVar45))
        break;
      }
      goto LAB_710199f8b0;
    case 1:
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xa8),0x71044548ad);
      bVar19 = *(byte *)((long)piVar26 + 0xab);
      uVar36 = (uint)bVar19;
      uVar20 = bVar19 + 0x2e;
      uVar21 = (uint)bVar19;
      if (0xde < bVar19) {
        uVar21 = uVar20;
      }
      if (uVar21 != 0) {
        if (uVar21 < 0xdf) goto LAB_710199f6d0;
        lVar24 = *(long *)(DAT_710532f730 + 8);
        uVar28 = (ushort)uVar21;
        bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
        if ((bVar18) &&
           (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
          lVar24 = *(long *)(DAT_710532f730 + 8);
          bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
          if ((bVar18) &&
             (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
            uVar36 = (uint)*(byte *)((long)piVar26 + 0xab);
            goto LAB_710199f8a0;
          }
        }
      }
      break;
    case 2:
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xa8),0x71044548ad);
      bVar19 = *(byte *)(piVar26 + 0x2b);
      uVar36 = (uint)bVar19;
      uVar20 = bVar19 + 0x2e;
      uVar21 = (uint)bVar19;
      if (0xde < bVar19) {
        uVar21 = uVar20;
      }
      if (uVar21 != 0) {
        if (uVar21 < 0xdf) goto LAB_710199f6d0;
        lVar24 = *(long *)(DAT_710532f730 + 8);
        uVar28 = (ushort)uVar21;
        bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
        if ((bVar18) &&
           (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
          lVar24 = *(long *)(DAT_710532f730 + 8);
          bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
          if ((bVar18) &&
             (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
            uVar36 = (uint)*(byte *)(piVar26 + 0x2b);
            goto LAB_710199f8a0;
          }
        }
      }
      break;
    case 3:
      uVar28 = *(ushort *)(param_1 + 0x396);
      if (uVar28 >> 4 < 0x177) {
        puVar38 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar28 * 0x50 + 72000);
      }
      else {
        puVar38 = &DAT_710532a878;
        if (((ushort)(uVar28 + 0xe890) < 100) &&
           (lVar24 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar28 + 0xe890) * 0x50,
           *(short *)(lVar24 + 0x88cc8) != -1)) {
          puVar38 = (undefined2 *)(lVar24 + 0x88cc0);
        }
      }
      uVar45 = (ulong)(short)puVar38[4];
      lVar24 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      if (uVar45 != 0xffffffffffffffff) {
        uVar45 = (ulong)*(ushort *)(lVar24 + uVar45 * 2 + 0x60);
      }
      uVar34 = (*(long *)(lVar24 + 0x28) - *(long *)(lVar24 + 0x20) >> 6) * -0x3333333333333333;
      puVar38 = (undefined2 *)(*(long *)(lVar24 + 0x20) + uVar45 * 0x140);
      if (uVar34 < uVar45 || uVar34 - uVar45 == 0) {
        puVar38 = &DAT_7105182b08;
      }
      uVar45 = FUN_71032a1630(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x218),puVar38[0x35]);
      local_1e0 = (undefined **)FUN_7103238e70(uVar45,0x13);
      if (((ulong)local_1e0 & 0xffffffffff) != 0) {
        lVar24 = *plVar25;
        ppppbVar35 = (byte ****)(ulong)*(uint *)(lVar24 + 0x68);
        FUN_710323c4e0(lVar24,(ulong *)&local_1e0,(long *********)(long)*(int *)(lVar24 + 0x70),
                       ppppbVar35,param_5,param_6,param_7,param_8);
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xa8),0x71043ced64);
      ppuVar31 = (undefined **)(ulong)(ushort)puVar38[0x35];
      goto LAB_710199f8bc;
    }
    uVar20 = 0;
LAB_710199f8b0:
    ppuVar31 = (undefined **)(ulong)uVar20;
LAB_710199f8bc:
    FUN_71019b6cd0(param_1 + 0xa0,plVar25,(long *********)ppuVar31,ppppbVar35,param_5,param_6,
                   param_7,param_8);
  }
LAB_710199f8c0:
  if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xd0),0x71042b3c6d);
    if (3 < *(uint *)(param_1 + 0x74)) goto LAB_710199fc40;
    switch(*(uint *)(param_1 + 0x74)) {
    case 0:
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xd0),0x71044548ad);
      bVar19 = *(byte *)((long)piVar26 + 0xaa);
      uVar36 = (uint)bVar19;
      uVar20 = bVar19 + 0x2e;
      uVar21 = (uint)bVar19;
      if (0xde < bVar19) {
        uVar21 = uVar20;
      }
      if (uVar21 == 0) break;
      if (0xde < uVar21) {
        lVar24 = *(long *)(DAT_710532f730 + 8);
        uVar28 = (ushort)uVar21;
        bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
        if ((bVar18) &&
           (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
          lVar24 = *(long *)(DAT_710532f730 + 8);
          bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
          if ((bVar18) &&
             (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
            uVar36 = (uint)*(byte *)((long)piVar26 + 0xaa);
LAB_710199fc20:
            uVar20 = uVar36 + 0x2e;
            goto LAB_710199fa50;
          }
        }
        break;
      }
LAB_710199fa50:
      if (((0xde < uVar36) || (uVar20 = uVar36, uVar36 != 0)) && (0xde < uVar20)) {
        lVar24 = *(long *)(DAT_710532f730 + 8);
        bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),(ushort)uVar20);
        if ((!bVar18) ||
           (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),(ushort)uVar20), 0xd < (int)uVar45))
        break;
      }
      goto LAB_710199fc30;
    case 1:
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xd0),0x71044548ad);
      bVar19 = *(byte *)((long)piVar26 + 0xab);
      uVar36 = (uint)bVar19;
      uVar20 = bVar19 + 0x2e;
      uVar21 = (uint)bVar19;
      if (0xde < bVar19) {
        uVar21 = uVar20;
      }
      if (uVar21 != 0) {
        if (uVar21 < 0xdf) goto LAB_710199fa50;
        lVar24 = *(long *)(DAT_710532f730 + 8);
        uVar28 = (ushort)uVar21;
        bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
        if ((bVar18) &&
           (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
          lVar24 = *(long *)(DAT_710532f730 + 8);
          bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
          if ((bVar18) &&
             (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
            uVar36 = (uint)*(byte *)((long)piVar26 + 0xab);
            goto LAB_710199fc20;
          }
        }
      }
      break;
    case 2:
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xd0),0x71044548ad);
      bVar19 = *(byte *)(piVar26 + 0x2b);
      uVar36 = (uint)bVar19;
      uVar20 = bVar19 + 0x2e;
      uVar21 = (uint)bVar19;
      if (0xde < bVar19) {
        uVar21 = uVar20;
      }
      if (uVar21 != 0) {
        if (uVar21 < 0xdf) goto LAB_710199fa50;
        lVar24 = *(long *)(DAT_710532f730 + 8);
        uVar28 = (ushort)uVar21;
        bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
        if ((bVar18) &&
           (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
          lVar24 = *(long *)(DAT_710532f730 + 8);
          bVar18 = FUN_71032a2c10(*(long *)(lVar24 + 0x218),uVar28);
          if ((bVar18) &&
             (uVar45 = FUN_71032a2f50(*(long *)(lVar24 + 0x218),uVar28), (int)uVar45 < 0xe)) {
            uVar36 = (uint)*(byte *)(piVar26 + 0x2b);
            goto LAB_710199fc20;
          }
        }
      }
      break;
    case 3:
      uVar28 = *(ushort *)(param_1 + 0x396);
      if (uVar28 >> 4 < 0x177) {
        puVar38 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar28 * 0x50 + 72000);
      }
      else {
        puVar38 = &DAT_710532a878;
        if (((ushort)(uVar28 + 0xe890) < 100) &&
           (lVar24 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar28 + 0xe890) * 0x50,
           *(short *)(lVar24 + 0x88cc8) != -1)) {
          puVar38 = (undefined2 *)(lVar24 + 0x88cc0);
        }
      }
      uVar45 = (ulong)(short)puVar38[4];
      lVar24 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      if (uVar45 != 0xffffffffffffffff) {
        uVar45 = (ulong)*(ushort *)(lVar24 + uVar45 * 2 + 0x60);
      }
      uVar34 = (*(long *)(lVar24 + 0x28) - *(long *)(lVar24 + 0x20) >> 6) * -0x3333333333333333;
      puVar38 = (undefined2 *)(*(long *)(lVar24 + 0x20) + uVar45 * 0x140);
      if (uVar34 < uVar45 || uVar34 - uVar45 == 0) {
        puVar38 = &DAT_7105182b08;
      }
      uVar45 = FUN_71032a1630(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x218),puVar38[0x35]);
      local_1e0 = (undefined **)FUN_7103238e70(uVar45,0x13);
      if (((ulong)local_1e0 & 0xffffffffff) != 0) {
        lVar24 = *plVar25;
        ppppbVar35 = (byte ****)(ulong)*(uint *)(lVar24 + 0x68);
        FUN_710323c4e0(lVar24,(ulong *)&local_1e0,(long *********)(long)*(int *)(lVar24 + 0x70),
                       ppppbVar35,param_5,param_6,param_7,param_8);
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xd0),0x71043ced64);
      ppuVar31 = (undefined **)(ulong)(ushort)puVar38[0x35];
      goto LAB_710199fc3c;
    }
    uVar20 = 0;
LAB_710199fc30:
    ppuVar31 = (undefined **)(ulong)uVar20;
LAB_710199fc3c:
    FUN_71019b6cd0(param_1 + 200,plVar25,(long *********)ppuVar31,ppppbVar35,param_5,param_6,param_7
                   ,param_8);
  }
LAB_710199fc40:
  uVar28 = *(ushort *)(param_1 + 0x396);
  if ((ulong)uVar28 == 0xffff) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71043ad03d);
    return;
  }
  if (uVar28 >> 4 < 0x177) {
    puVar38 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar28 * 0x50 + 72000);
  }
  else {
    puVar38 = &DAT_710532a878;
    if (((ushort)(uVar28 + 0xe890) < 100) &&
       (lVar24 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar28 + 0xe890) * 0x50,
       *(short *)(lVar24 + 0x88cc8) != -1)) {
      puVar38 = (undefined2 *)(lVar24 + 0x88cc0);
    }
  }
  lVar40 = *(long *)(DAT_710532f730 + 8);
  uVar45 = (ulong)(short)puVar38[4];
  lVar24 = *(long *)(lVar40 + 0x1d8);
  if (uVar45 != 0xffffffffffffffff) {
    uVar45 = (ulong)*(ushort *)(lVar24 + uVar45 * 2 + 0x60);
  }
  uVar34 = (*(long *)(lVar24 + 0x28) - *(long *)(lVar24 + 0x20) >> 6) * -0x3333333333333333;
  puVar38 = (undefined2 *)(*(long *)(lVar24 + 0x20) + uVar45 * 0x140);
  if (uVar34 < uVar45 || uVar34 - uVar45 == 0) {
    puVar38 = &DAT_7105182b08;
  }
  if ((*(char *)(puVar38 + 0x2f) == '\x01') && (uVar28 = puVar38[0x35], uVar28 != 0)) {
    if (0xde < uVar28) {
      bVar18 = FUN_71032a2c10(*(long *)(lVar40 + 0x218),uVar28);
      if ((!bVar18) ||
         (uVar45 = FUN_71032a2f50(*(long *)(lVar40 + 0x218),uVar28), 0xd < (int)uVar45))
      goto LAB_710199fe54;
      uVar28 = puVar38[0x35];
      lVar40 = *(long *)(DAT_710532f730 + 8);
    }
    uVar45 = FUN_71032a1630(*(long *)(lVar40 + 0x218),uVar28);
    local_1e0 = (undefined **)FUN_7103238e70(uVar45,0x13);
    if (((ulong)local_1e0 & 0xffffffffff) != 0) {
      lVar24 = *plVar25;
      ppuVar31 = (undefined **)(long)*(int *)(lVar24 + 0x70);
      ppppbVar35 = (byte ****)(ulong)*(uint *)(lVar24 + 0x68);
      FUN_710323c4e0(lVar24,(ulong *)&local_1e0,(long *********)ppuVar31,ppppbVar35,param_5,param_6,
                     param_7,param_8);
    }
    uVar45 = FUN_71032a0fd0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x218),puVar38[0x35]);
    uVar21 = FUN_7101766070((long)piVar23);
    uVar20 = (uint)uVar45 & 0xff;
    lVar24 = *(long *)(param_1 + 0x20);
    if (uVar21 + uVar20 < 4) goto LAB_710199fe58;
    if (((*(long *)(lVar24 + 8) != 0) &&
        (plVar27 = (long *)FUN_71037964b0(*(long *)(lVar24 + 8),0x71042914b5),
        plVar27 != (long *)0x0)) && (uVar45 = (**(code **)(*plVar27 + 0x130))(), (uVar45 & 1) != 0))
    goto LAB_710199fe68;
    FUN_7103778430(lVar2,"skillset_alert_cost%d",(ulong)uVar20,ppppbVar35,param_5,param_6,param_7,
                   param_8);
    ppuVar31 = (undefined **)(ulong)(ushort)puVar38[0x35];
    FUN_71019b6cd0(param_1 + 0xf0,plVar25,(long *********)ppuVar31,ppppbVar35,param_5,param_6,
                   param_7,param_8);
    lVar24 = *(long *)(param_1 + 0xf8);
    pcVar43 = "skillset_on";
  }
  else {
LAB_710199fe54:
    lVar24 = *(long *)(param_1 + 0x20);
LAB_710199fe58:
    pcVar43 = "skillset_alert_off";
  }
  FUN_7103778300(0x3f800000,lVar24,(long)pcVar43);
LAB_710199fe68:
  uVar30 = FUN_71032626e0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),*(ulong *)(piVar23 + 2));
  local_240 = (long *)((ulong)local_240 & 0xffffffffffffff00);
  local_248 = (undefined **)0x0;
  uVar28 = *(ushort *)(param_1 + 0x396);
  if ((ulong)uVar28 == 0xffff) {
    bVar19 = FUN_7101767150((undefined8 *)((long)piVar23 + 0xc5),(int)uVar30);
    FUN_71003a4ca0((uint *)&local_1e0,"mnu_amiibo_personal_%02d",(ulong)bVar19,ppuVar31,ppppbVar35,
                   param_5,param_6,param_7,param_8);
    for (uVar45 = 0; *(char *)((long)&uStack_1d8 + uVar45) != '\0'; uVar45 = uVar45 + 2) {
      *(char *)((long)&local_240 + uVar45) = *(char *)((long)&uStack_1d8 + uVar45);
      if (0x3e < (int)uVar45 + 1U) {
        uVar45 = (ulong)((int)uVar45 + 1);
        break;
      }
      cVar5 = *(char *)((long)&uStack_1d8 + uVar45 + 1);
      if (cVar5 == '\0') {
        uVar45 = uVar45 + 1;
        break;
      }
      *(char *)((long)&local_240 + uVar45 + 1) = cVar5;
    }
    uVar20 = 0x811c9dc5;
    *(undefined1 *)((long)&local_240 + (uVar45 & 0xffffffff)) = 0;
    uVar21 = (uint)(byte)local_240;
    local_248._4_4_ = (undefined4)uVar45;
    if ((byte)local_240 != 0) {
      pbVar42 = (byte *)((long)&local_240 + 1);
      do {
        uVar20 = uVar20 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar42;
        pbVar42 = pbVar42 + 1;
      } while (uVar21 != 0);
    }
  }
  else {
    if (uVar28 >> 4 < 0x177) {
      puVar38 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar28 * 0x50 + 72000);
    }
    else {
      puVar38 = &DAT_710532a878;
      if (((ushort)(uVar28 + 0xe890) < 100) &&
         (lVar24 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar28 + 0xe890) * 0x50,
         *(short *)(lVar24 + 0x88cc8) != -1)) {
        puVar38 = (undefined2 *)(lVar24 + 0x88cc0);
      }
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar22 = __cxa_guard_acquire(&DAT_71053144d8), iVar22 != 0))
    {
      FUN_7101764000();
      ppuVar31 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    iVar22 = DAT_7105307d50;
    lVar24 = *(long *)(DAT_710532f7b0 + 8);
    piVar23 = FUN_71032df050(lVar24,DAT_7105307d50);
    if (*(long *)(piVar23 + 0x4c) == 0) {
      piVar26 = FUN_71032df050(lVar24,iVar22);
      FUN_7103343310((long)piVar26,extraout_x1,(long ****)ppuVar31,ppppbVar35,param_5,param_6,
                     param_7,param_8);
    }
    uVar45 = (ulong)(short)puVar38[4];
    lVar24 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (uVar45 != 0xffffffffffffffff) {
      uVar45 = (ulong)*(ushort *)(lVar24 + uVar45 * 2 + 0x60);
    }
    uVar34 = (*(long *)(lVar24 + 0x28) - *(long *)(lVar24 + 0x20) >> 6) * -0x3333333333333333;
    ppuVar31 = (undefined **)0x124;
    puVar38 = (undefined2 *)(*(long *)(lVar24 + 0x20) + uVar45 * 0x140);
    if (uVar34 < uVar45 || uVar34 - uVar45 == 0) {
      puVar38 = &DAT_7105182b08;
    }
    memcpy(&local_1e0,*(void **)(piVar23 + 0x4c),0x124);
    FUN_7101767b10(*(char *)((long)puVar38 + 0x81),(float *)&local_1e0);
    FUN_7100325eb0((float *)&local_1e0,abStack_288);
    bVar19 = FUN_7101767150((undefined8 *)abStack_288,(int)uVar30);
    FUN_71003a4ca0((uint *)&local_1e0,"mnu_amiibo_personal_%02d",(ulong)bVar19,ppuVar31,ppppbVar35,
                   param_5,param_6,param_7,param_8);
    for (uVar45 = 0; *(char *)((long)&uStack_1d8 + uVar45) != '\0'; uVar45 = uVar45 + 2) {
      *(char *)((long)&local_240 + uVar45) = *(char *)((long)&uStack_1d8 + uVar45);
      if (0x3e < (int)uVar45 + 1U) {
        uVar45 = (ulong)((int)uVar45 + 1);
        break;
      }
      cVar5 = *(char *)((long)&uStack_1d8 + uVar45 + 1);
      if (cVar5 == '\0') {
        uVar45 = uVar45 + 1;
        break;
      }
      *(char *)((long)&local_240 + uVar45 + 1) = cVar5;
    }
    uVar20 = 0x811c9dc5;
    *(undefined1 *)((long)&local_240 + (uVar45 & 0xffffffff)) = 0;
    uVar21 = (uint)(byte)local_240;
    local_248._4_4_ = (undefined4)uVar45;
    if ((byte)local_240 != 0) {
      pbVar42 = (byte *)((long)&local_240 + 1);
      do {
        uVar20 = uVar20 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar42;
        pbVar42 = pbVar42 + 1;
      } while (uVar21 != 0);
    }
  }
  local_248 = (undefined **)CONCAT44(local_248._4_4_,uVar20);
  FUN_7103776910(&local_1e0,lVar2,(long ****)"set_txt_personality",ppuVar31,ppppbVar35,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_1e0,(char *)&local_240,ppuVar31,ppppbVar35,param_5,param_6,param_7,
                 param_8);
  uVar45 = (ulong)uStack_1d8;
  local_1e0 = &PTR_FUN_710523d9a8;
  uStack_1d8 = (long *)0x0;
  if (uVar45 != 0) {
    FUN_710392eb40(uVar45);
  }
  return;
}

