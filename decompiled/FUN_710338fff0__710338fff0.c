// addr:      710338fff0
// offset:    0x338fff0
// name:      FUN_710338fff0
// mangled:   
// signature: undefined __cdecl FUN_710338fff0(long * param_1, ulong * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710338fff0(long *param_1,ulong *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float *pfVar1;
  undefined2 *puVar2;
  char cVar3;
  long *plVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long ********pppppppplVar11;
  long *********ppppppppplVar12;
  char *pcVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar14;
  long *********ppppppppplVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  uint uVar20;
  long lVar21;
  ushort uVar22;
  undefined8 *puVar23;
  char *pcVar24;
  float fVar25;
  float fVar26;
  undefined8 local_2a0;
  undefined8 local_298;
  long *********local_258;
  long *********local_250 [8];
  undefined **local_210;
  ulong local_208;
  undefined **local_200;
  ulong local_1f8;
  undefined **local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined **local_198;
  ulong local_190;
  long ***local_188;
  long *local_180 [8];
  undefined **local_140;
  ulong local_138;
  undefined **local_130;
  ulong local_128;
  undefined **local_120;
  ulong local_118;
  undefined **local_110;
  undefined8 local_108;
  
  if (param_3[1][1] == (long *******)0x0) {
    return;
  }
  ppppppppplVar15 = param_3;
  FUN_7103778300(0x3f800000,(long)param_3[1],0x71043ffc1a);
  if ((((char)param_2[5] != '\0') || ((*param_2 & 0xff00000000000000) != 0xc100000000000000)) ||
     ((*param_2 & 0xffffffffff) == 0)) {
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71042e59d7);
    FUN_7103778300(0x3f800000,(long)param_3[1],0x7104306de4);
    FUN_7103776640(&local_110,(long)param_3,(byte ****)"set_parts_atr_bg",ppppppppplVar15,param_4,
                   param_5,param_6,param_7,param_8);
    plVar8 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar15,param_4,param_5,param_6,
                                    param_7,param_8);
    if (plVar8 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1e0 = (undefined **)((ulong)local_1e0 & 0xffffffff00000000);
        local_188 = (long ***)&SUB_00000020;
        pppplVar14 = &local_188;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1e0);
        if (((uVar9 & 1) != 0) &&
           (plVar8 = (long *)FUN_710392e290(0x10,0x20,pppplVar14,param_4,param_5,param_6,param_7,
                                            param_8), plVar8 != (long *)0x0)) goto LAB_71033900e0;
      }
      plVar8 = (long *)0x0;
    }
LAB_71033900e0:
    uVar6 = 0;
    plVar8[2] = 0;
    plVar8[3] = 0;
    *plVar8 = 0;
    plVar8[1] = 0;
    do {
      uVar9 = (ulong)uVar6;
      FUN_7103776910(&local_188,(long)&local_110,(long ****)"set_fxui_eff_aura_%02d",uVar9,param_4,
                     param_5,param_6,param_7,param_8);
      plVar4 = local_180[0];
      local_180[0] = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar8);
      }
      local_188 = (long ***)&PTR_FUN_710523d9a8;
      local_180[0] = (long *)0x0;
      FUN_710377aa20((long *)*plVar4,0);
      uVar18 = local_108;
      lVar17 = *plVar4;
      if (lVar17 != 0) {
        *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
      }
      FUN_7103778300(0x3f800000,local_108,0x7104338aad);
      FUN_710377acb0((long *)*plVar4,1,uVar9,param_4,param_5,param_6,param_7,param_8);
      uVar6 = uVar6 + 1;
      plVar8 = plVar4;
    } while (uVar6 != 0x10);
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71043176ce);
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    local_110 = &PTR_FUN_710523d988;
    local_108 = 0;
    if (uVar18 == 0) {
      return;
    }
    uVar9 = *(ulong *)(uVar18 + 0x18);
    *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar18 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    goto LAB_71033901c8;
  }
  FUN_7103778300(0x3f800000,(long)param_3[1],0x710437ae59);
  FUN_710338bbe0(&local_110,(long)param_2,ppppppppplVar15,param_4,param_5,param_6,param_7,param_8);
  if ((char)local_110 == '\0') {
    pcVar24 = "effect_rarity_hide";
  }
  else {
    pcVar24 = "effect_rarity_show";
  }
  FUN_7103778300(0x3f800000,(long)param_3[1],(long)pcVar24);
  if (*(int *)((long)param_2 + 0x24) == 0) {
    FUN_7103778300(0x3f800000,(long)param_3[1],0x710439b9e1);
  }
  else {
    FUN_7103776640(&local_188,(long)param_3,(byte ****)"set_parts_discount",ppppppppplVar15,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_1e0,(long)&local_188,(long ****)"set_txt_value",ppppppppplVar15,param_4,
                   param_5,param_6,param_7,param_8);
    ppppppppplVar15 = (long *********)(ulong)*(uint *)((long)param_2 + 0x24);
    FUN_710377a310((long)&local_1e0,1);
    FUN_7103778300(0x3f800000,(long)param_3[1],0x710427f2c1);
    uVar9 = local_1d8;
    local_1e0 = &PTR_FUN_710523d9a8;
    local_1d8 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    plVar8 = local_180[0];
    local_188 = (long ***)&PTR_FUN_710523d988;
    local_180[0] = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      uVar9 = plVar8[3];
      plVar8[2] = (long)&PTR_FUN_710523d9a8;
      plVar8[3] = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)plVar8);
    }
  }
  FUN_7103776640(&local_120,(long)param_3,(byte ****)"set_parts_text_scroll",ppppppppplVar15,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_130,(long)&local_120,(long ****)"set_txt_main",ppppppppplVar15,param_4,
                 param_5,param_6,param_7,param_8);
  pcVar24 = (char *)((long)&local_108 + 4);
  FUN_710377a120((long)&local_130,pcVar24,ppppppppplVar15,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_140,(long)&local_120,(long ****)"set_txt_mask",ppppppppplVar15,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_140,pcVar24,ppppppppplVar15,param_4,param_5,param_6,param_7,param_8);
  if (*(long *)(local_118 + 8) != 0) {
    puVar23 = *(undefined8 **)(*(long *)(local_118 + 8) + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_710593ba40), iVar7 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_710593ba48), iVar7 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar23 != (undefined8 *)0x0) {
      for (puVar10 = (undefined8 *)(**(code **)*puVar23)(puVar23); puVar10 != (undefined8 *)0x0;
          puVar10 = (undefined8 *)*puVar10) {
        if ((undefined8 **)puVar10 == &DAT_710593ba58) {
          fVar26 = 640.0;
          fVar25 = 0.0;
          if ((*(char *)((long)puVar23 + 99) != '\0') ||
             (fVar25 = 0.0, *(char *)((long)puVar23 + 0x61) != '\0')) goto LAB_7103390448;
          break;
        }
      }
    }
  }
  pfVar1 = (float *)&nn::util::Vector4f::ConstantZero;
  if (*(long *)(local_128 + 0x10) != 0) {
    pfVar1 = (float *)(*(long *)(local_128 + 0x10) + 0x240);
  }
  fVar26 = *pfVar1;
  FUN_7103776910(&local_188,(long)&local_120,(long ****)"name_base",ppppppppplVar15,param_4,param_5,
                 param_6,param_7,param_8);
  plVar8 = local_180[0];
  lVar17 = *local_180[0];
  if (lVar17 == 0) {
    fVar25 = 0.0;
  }
  else {
    fVar25 = ABS(*(float *)(lVar17 + 0x54) * *(float *)(lVar17 + 0x4c));
  }
  local_188 = (long ***)&PTR_FUN_710523d9a8;
  local_180[0] = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar8);
  }
  fVar26 = fVar26 + 58.0;
LAB_7103390448:
  FUN_7103776910(&local_188,(long)&local_120,(long ****)"name_base",ppppppppplVar15,param_4,param_5,
                 param_6,param_7,param_8);
  plVar8 = local_180[0];
  lVar17 = *local_180[0];
  if (lVar17 != 0) {
    *(float *)(lVar17 + 0x50) = fVar26;
    *(float *)(lVar17 + 0x54) = fVar25;
    *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
  }
  local_188 = (long ***)&PTR_FUN_710523d9a8;
  local_180[0] = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar8);
  }
  uVar6 = 0x811c9dc5;
  FUN_710338d030((uint *)&local_188,param_2);
  FUN_7103776910(&local_198,(long)param_3,(long ****)"set_txt_category",ppppppppplVar15,param_4,
                 param_5,param_6,param_7,param_8);
  local_1e0 = (undefined **)0x1300000000;
  local_1d8 = 0x646f6f675f6d616e;
  local_1d0 = 0x6f67657461635f73;
  local_1c8 = 0x5f7972;
  uVar20 = 0x6e;
  pbVar19 = (byte *)((long)&local_1d8 + 1);
  local_1e0._0_4_ = uVar6;
  do {
    local_1e0._0_4_ = (uint)local_1e0 * 0x89 ^ uVar20;
    uVar20 = (uint)*pbVar19;
    pbVar19 = pbVar19 + 1;
  } while (uVar20 != 0);
  local_1e0._4_4_ = 0x13;
  lVar17 = 8;
  do {
    cVar3 = *(char *)((long)local_180 + lVar17 + -8);
    if (cVar3 == '\0') break;
    lVar21 = (long)local_1e0._4_4_;
    lVar17 = lVar17 + 1;
    local_1e0._4_4_ = local_1e0._4_4_ + 1;
    *(char *)((long)&local_1d8 + lVar21) = cVar3;
  } while ((int)lVar17 + 10U < 0x3e);
  *(undefined1 *)((long)&local_1d8 + (long)local_1e0._4_4_) = 0;
  uVar16 = (uint)(byte)local_1d8;
  uVar20 = uVar6;
  if ((byte)local_1d8 != 0) {
    pbVar19 = (byte *)((long)&local_1d8 + 1);
    do {
      uVar20 = uVar20 * 0x89 ^ uVar16;
      uVar16 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar16 != 0);
  }
  local_1e0 = (undefined **)CONCAT44(local_1e0._4_4_,uVar20);
  FUN_710377a120((long)&local_198,(char *)&local_1d8,ppppppppplVar15,param_4,param_5,param_6,param_7
                 ,param_8);
  switch((char)param_2[1]) {
  case '\0':
    lVar17 = *(long *)(DAT_710532f730 + 8) + 0x230;
    FUN_7103289030(&local_258,lVar17,(long ****)param_2[2],param_4,param_5,param_6,param_7,param_8);
    ppppppppplVar15 = local_250[0];
    uVar9 = FUN_7103289420(lVar17,(ulong *)local_258,(ulong *)local_250[0]);
    if (local_258 != (long *********)0x0) {
      local_250[0] = local_258;
      FUN_710392eb40((ulong)local_258);
    }
    plVar8 = FUN_7103240170(param_1,uVar9,(long ****)ppppppppplVar15,param_4,param_5,param_6,param_7
                            ,param_8);
    break;
  case '\x01':
    lVar17 = *(long *)(DAT_710532f730 + 8) + 0x240;
    FUN_7103284fe0(&local_258,lVar17,(long ****)param_2[2],param_4,param_5,param_6,param_7,param_8);
    ppppppppplVar15 = local_250[0];
    uVar9 = FUN_71032853d0(lVar17,(ulong *)local_258,(ulong *)local_250[0]);
    if (local_258 != (long *********)0x0) {
      local_250[0] = local_258;
      FUN_710392eb40((ulong)local_258);
    }
    plVar8 = FUN_71032402d0(param_1,uVar9,(long ****)ppppppppplVar15,param_4,param_5,param_6,param_7
                            ,param_8);
    break;
  default:
    goto switchD_71033905c4_caseD_2;
  case '\x03':
    FUN_7103776640(&local_2a0,(long)param_3,(byte ****)"set_parts_music",ppppppppplVar15,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_258,(long)&local_2a0,(long ****)"set_txt_help",ppppppppplVar15,param_4,
                   param_5,param_6,param_7,param_8);
    ppppppppplVar12 = local_298;
    local_2a0 = &PTR_FUN_710523d988;
    local_298 = (long *********)0x0;
    if (ppppppppplVar12 != (long *********)0x0) {
      pppppppplVar11 = ppppppppplVar12[3];
      ppppppppplVar12[2] = (long ********)&PTR_FUN_710523d9a8;
      ppppppppplVar12[3] = (long ********)0x0;
      if (pppppppplVar11 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar11);
      }
      FUN_710392eb40((ulong)ppppppppplVar12);
    }
    FUN_710377a120((long)&local_258,pcVar24,ppppppppplVar15,param_4,param_5,param_6,param_7,param_8)
    ;
    uVar9 = FUN_7101780950((long)param_2);
    ppppppppplVar15 = (long *********)&DAT_00000011;
    plVar8 = FUN_710323f600(param_1,uVar9,(long ****)&DAT_00000011,param_4,param_5,param_6,param_7,
                            param_8);
    FUN_7103776910(&local_2a0,(long)param_3,(long ****)"set_rep_music_series",ppppppppplVar15,
                   param_4,param_5,param_6,param_7,param_8);
    uVar9 = (ulong)local_298;
    FUN_7103778b80((long)local_298,(long)plVar8,ppppppppplVar15,param_4,param_5,param_6,param_7,
                   param_8);
    local_2a0 = &PTR_FUN_710523d9a8;
    local_298 = (long *********)0x0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    ppppppppplVar12 = local_250[0];
    local_258 = (long *********)&PTR_FUN_710523d9a8;
    local_250[0] = (long *********)0x0;
    if (ppppppppplVar12 == (long *********)0x0) goto switchD_71033905c4_caseD_2;
    goto LAB_7103390bcc;
  case '\x04':
    lVar21 = *(long *)(DAT_710532f730 + 8);
    lVar17 = *(long *)(lVar21 + 0x1d8);
    uVar20 = FUN_71032a7800(lVar17,param_2[2]);
    if (uVar20 < (uint)((int)((ulong)(*(long *)(lVar17 + 0x28) - *(long *)(lVar17 + 0x20)) >> 6) *
                       -0x33333333)) {
      uVar22 = *(ushort *)(*(long *)(lVar17 + 0x20) + (ulong)uVar20 * 0x140);
    }
    else {
      uVar22 = 0xffff;
    }
    FUN_7103776640(&local_2a0,(long)param_3,(byte ****)"set_parts_class",ppppppppplVar15,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_1f0,(long)param_3,(byte ****)"set_parts_atr_bg",ppppppppplVar15,param_4,
                   param_5,param_6,param_7,param_8);
    lVar17 = *(long *)(lVar21 + 0x1d8);
    if (uVar22 == 0xffff) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (ulong)*(ushort *)(lVar17 + ((long)((ulong)uVar22 << 0x30) >> 0x2f) + 0x60);
    }
    uVar18 = (*(long *)(lVar17 + 0x28) - *(long *)(lVar17 + 0x20) >> 6) * -0x3333333333333333;
    puVar2 = (undefined2 *)(*(long *)(lVar17 + 0x20) + uVar9 * 0x140);
    if (uVar18 < uVar9 || uVar18 - uVar9 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    cVar3 = *(char *)(puVar2 + 0x34);
    if (cVar3 == '\x01') {
      pcVar24 = "class_hope";
      FUN_7103778300(0x3f800000,(long)local_298,0x7104442147);
      pcVar13 = "color_hope";
    }
    else if (cVar3 == '\x02') {
      pcVar24 = "class_ace";
      FUN_7103778300(0x3f800000,(long)local_298,0x71044530ac);
      pcVar13 = "color_ace";
    }
    else if (cVar3 == '\x03') {
      pcVar24 = "class_legend";
      FUN_7103778300(0x3f800000,(long)local_298,0x710436ac3e);
      pcVar13 = "color_legend";
    }
    else {
      pcVar24 = "class_none";
      FUN_7103778300(0x3f800000,(long)local_298,0x7104464374);
      pcVar13 = "color_none";
    }
    FUN_7103778300(0x3f800000,(long)local_298,(long)pcVar13);
    uVar9 = local_1e8;
    FUN_7103778300(0x3f800000,local_1e8,(long)pcVar24);
    FUN_7103776910(&local_200,(long)param_3,(long ****)"set_rep_spirit",ppppppppplVar15,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_210,(long)param_3,(long ****)"set_rep_spirit_shadow",ppppppppplVar15,
                   param_4,param_5,param_6,param_7,param_8);
    bVar5 = FUN_71025c9890(uVar22);
    if (bVar5) {
      FUN_71025ae1b0(uVar22,&local_200,0,(byte ****)0x2,param_5,param_6,param_7,param_8);
      param_4 = (byte ****)0x2;
    }
    else {
      FUN_71025ae1b0(uVar22,&local_200,0,(byte ****)0x0,param_5,param_6,param_7,param_8);
      param_4 = (byte ****)0x0;
    }
    ppppppppplVar15 = (long *********)0x0;
    FUN_71025ae1b0(uVar22,&local_210,0,param_4,param_5,param_6,param_7,param_8);
    FUN_710338d570((uint *)&local_258,param_2);
    FUN_7103778300(0x3f800000,local_1e8,(long)local_250);
    FUN_7103776910(&local_258,(long)&local_1f0,(long ****)"set_rep_eff_aura_00",ppppppppplVar15,
                   param_4,param_5,param_6,param_7,param_8);
    ppppppppplVar12 = local_250[0];
    pppppppplVar11 = *local_250[0];
    if (pppppppplVar11 != (long ********)0x0) {
      *(byte *)(pppppppplVar11 + 0xb) = *(byte *)(pppppppplVar11 + 0xb) | 1;
    }
    if (((local_250[0][1] != (long ********)0x0) && (DAT_710593bc38 != 0)) &&
       (lVar17 = *(long *)(*(long *)(DAT_710593bc38 + 8) + 0x88), lVar17 != 0)) {
      ppppppppplVar15 = (long *********)0x0;
      FUN_710379e9c0((long *)local_250[0][1],lVar17,0);
    }
    local_258 = (long *********)&PTR_FUN_710523d9a8;
    local_250[0] = (long *********)0x0;
    FUN_710392eb40((ulong)ppppppppplVar12);
    uVar18 = local_208;
    local_210 = &PTR_FUN_710523d9a8;
    local_208 = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    uVar18 = local_1f8;
    local_200 = &PTR_FUN_710523d9a8;
    local_1f8 = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    local_1f0 = &PTR_FUN_710523d988;
    local_1e8 = 0;
    ppppppppplVar12 = local_298;
    if (uVar9 != 0) {
      uVar18 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar9);
    }
    goto joined_r0x0071033908d4;
  case '\x05':
    lVar17 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x318);
    ppppppppplVar15 = (long *********)FUN_710327d930(*(long *)(lVar17 + 8),param_2[2]);
    FUN_710327cd40((uint *)&local_258,lVar17,(ulong)ppppppppplVar15);
    lVar17 = DAT_710532f730;
    if ((char)param_2[1] == '\x05') {
      lVar21 = *(long *)(DAT_710532f730 + 8);
      uVar9 = FUN_710327d930(*(long *)(*(long *)(lVar21 + 0x318) + 8),param_2[2]);
      uVar20 = FUN_710327de70(lVar21 + 0x310,uVar9);
      if ((uVar20 & 0xff) < 0xe) goto LAB_710339089c;
      lVar17 = *(long *)(lVar17 + 8);
      uVar9 = FUN_710327d930(*(long *)(*(long *)(lVar17 + 0x318) + 8),param_2[2]);
      uVar20 = FUN_710327de70(lVar17 + 0x310,uVar9);
      if (0x10 < (uVar20 & 0xff)) goto LAB_710339089c;
      FUN_7103776640(&local_2a0,(long)param_3,(byte ****)"set_parts_energy",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
    }
    else {
LAB_710339089c:
      FUN_7103776640(&local_2a0,(long)param_3,(byte ****)"set_parts_supportitem",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
    }
    FUN_7103778300(0x3f800000,(long)local_298,(long)local_250);
    ppppppppplVar12 = local_298;
joined_r0x0071033908d4:
    local_298 = (long *********)0x0;
    local_2a0 = &PTR_FUN_710523d988;
    if (ppppppppplVar12 != (long *********)0x0) {
      local_298 = (long *********)0x0;
      local_2a0 = &PTR_FUN_710523d988;
      pppppppplVar11 = ppppppppplVar12[3];
      ppppppppplVar12[2] = (long ********)&PTR_FUN_710523d9a8;
      ppppppppplVar12[3] = (long ********)0x0;
      if (pppppppplVar11 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar11);
      }
      goto LAB_7103390bcc;
    }
    goto switchD_71033905c4_caseD_2;
  }
  FUN_7103776910(&local_258,(long)param_3,(long ****)"set_rep_mii",ppppppppplVar15,param_4,param_5,
                 param_6,param_7,param_8);
  ppppppppplVar12 = local_250[0];
  FUN_7103778b80((long)local_250[0],(long)plVar8,ppppppppplVar15,param_4,param_5,param_6,param_7,
                 param_8);
  local_258 = (long *********)&PTR_FUN_710523d9a8;
  local_250[0] = (long *********)0x0;
  if (ppppppppplVar12 != (long *********)0x0) {
    FUN_710392eb40((ulong)ppppppppplVar12);
  }
  FUN_7103776910(&local_258,(long)param_3,(long ****)"set_rep_mii_shadow",ppppppppplVar15,param_4,
                 param_5,param_6,param_7,param_8);
  ppppppppplVar12 = local_250[0];
  FUN_7103778b80((long)local_250[0],(long)plVar8,ppppppppplVar15,param_4,param_5,param_6,param_7,
                 param_8);
  local_258 = (long *********)&PTR_FUN_710523d9a8;
  local_250[0] = (long *********)0x0;
  if (ppppppppplVar12 != (long *********)0x0) {
LAB_7103390bcc:
    FUN_710392eb40((ulong)ppppppppplVar12);
  }
switchD_71033905c4_caseD_2:
  FUN_710338d570((uint *)&local_258,param_2);
  local_298 = (long *********)CONCAT26(local_298._6_2_,0x5f64726163);
  pcVar24 = (char *)((long)&local_298 + 1);
  do {
    cVar3 = *pcVar24;
    pcVar24 = pcVar24 + 1;
  } while (cVar3 != '\0');
  local_2a0._4_4_ = 5;
  lVar17 = 8;
  do {
    cVar3 = *(char *)((long)local_250 + lVar17 + -8);
    if (cVar3 == '\0') break;
    lVar21 = (long)local_2a0._4_4_;
    local_2a0._4_4_ = local_2a0._4_4_ + 1;
    lVar17 = lVar17 + 1;
    *(char *)((long)&local_298 + lVar21) = cVar3;
  } while ((int)lVar17 - 4U < 0x3e);
  *(undefined1 *)((long)&local_298 + (long)local_2a0._4_4_) = 0;
  uVar20 = (uint)(byte)local_298;
  if ((byte)local_298 != 0) {
    pbVar19 = (byte *)((long)&local_298 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar20;
      uVar20 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar20 != 0);
  }
  local_2a0 = (undefined **)CONCAT44(local_2a0._4_4_,uVar6);
  FUN_7103778300(0x3f800000,(long)param_3[1],(long)&local_298);
  FUN_7103776910(&local_1f0,(long)param_3,(long ****)"set_txt_price",ppppppppplVar15,param_4,param_5
                 ,param_6,param_7,param_8);
  uVar9 = (ulong)(uint)param_2[4];
  FUN_710377a310((long)&local_1f0,1);
  FUN_7103776910(&local_200,(long)param_3,(long ****)"set_txt_have_num",uVar9,param_4,param_5,
                 param_6,param_7,param_8);
  uVar9 = 0;
  if (((*param_2 & 0xff00000000000000) == 0xc100000000000000) && ((*param_2 & 0xffffffffff) != 0)) {
    if ((((byte)param_2[1] == 6) || ((7 < (byte)param_2[1] || ((param_2[2] & 0xffffffffff) != 0))))
       || ((int)param_2[3] < 1)) {
      uVar6 = FUN_7101782120(param_2,extraout_x1,0,param_4,param_5,param_6,param_7,param_8);
      uVar9 = (ulong)uVar6;
    }
    else {
      uVar9 = 0;
    }
  }
  FUN_710377a310((long)&local_200,1);
  uVar6 = FUN_710338b9b0(param_2,extraout_x1_00,uVar9,param_4,param_5,param_6,param_7,param_8);
  if ((uVar6 & 1) == 0) {
    pcVar24 = "new_hide";
  }
  else {
    pcVar24 = "new_show";
  }
  FUN_7103778300(0x3f800000,(long)param_3[1],(long)pcVar24);
  uVar9 = local_1f8;
  local_200 = &PTR_FUN_710523d9a8;
  local_1f8 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_1e8;
  local_1f0 = &PTR_FUN_710523d9a8;
  local_1e8 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_190;
  local_198 = &PTR_FUN_710523d9a8;
  local_190 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_138;
  local_140 = &PTR_FUN_710523d9a8;
  local_138 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_128;
  local_130 = &PTR_FUN_710523d9a8;
  local_128 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  uVar18 = local_118;
  local_120 = &PTR_FUN_710523d988;
  local_118 = 0;
  if (uVar18 != 0) {
    uVar9 = *(ulong *)(uVar18 + 0x18);
    *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar18 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
LAB_71033901c8:
    FUN_710392eb40(uVar18);
  }
  return;
}

