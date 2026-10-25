// addr:      7101d9d070
// offset:    0x1d9d070
// name:      FUN_7101d9d070
// mangled:   
// signature: undefined __cdecl FUN_7101d9d070(long param_1, long param_2, ushort param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, undefined8 param_8)


void FUN_7101d9d070(long param_1,long param_2,ushort param_3,byte ****param_4,long ****param_5,
                   ulong param_6,ulong param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  long ***ppplVar6;
  float fVar7;
  undefined4 uVar8;
  long ********pppppppplVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *******ppppppplVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long ******pppppplVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  undefined1 uVar25;
  undefined8 extraout_x1;
  char *pcVar26;
  undefined8 extraout_x1_00;
  undefined *puVar27;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  long ****pppplVar28;
  long *********ppppppppplVar29;
  undefined8 uVar30;
  long *********ppppppppplVar31;
  long *********ppppppppplVar32;
  long ********pppppppplVar33;
  byte ****ppppbVar34;
  byte ****ppppbVar35;
  long ****pppplVar36;
  ulong *puVar37;
  long *******ppppppplVar38;
  ushort *puVar39;
  long lVar40;
  long **pplVar41;
  long *****ppppplVar42;
  byte *pbVar43;
  byte bVar44;
  ulong uVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  ushort *puVar49;
  int iVar50;
  long ********pppppppplVar51;
  undefined1 *puVar52;
  int iVar53;
  char *pcVar54;
  long lVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  long ********pppppppplVar59;
  undefined4 local_430;
  undefined4 local_420;
  long *******local_3e8;
  undefined **local_3d0;
  ulong local_3c8;
  undefined **local_3c0;
  ulong local_3b8 [8];
  undefined8 local_378;
  long ***local_370;
  undefined4 local_368;
  ushort local_364;
  undefined8 local_330;
  float local_328;
  undefined4 uStack_324;
  long ***local_320;
  undefined8 local_318;
  undefined2 local_310;
  undefined **local_2e8;
  ulong local_2e0;
  undefined **local_2d8;
  ulong local_2d0;
  undefined **local_2c8;
  long *******local_2c0;
  undefined **local_2b8;
  long *******local_2b0;
  long ********local_2a8;
  long ********local_2a0;
  undefined **local_298;
  ulong local_290;
  undefined **local_288;
  ulong local_280;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined2 local_248;
  undefined8 local_246;
  undefined8 local_23e;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  char local_210 [8];
  undefined1 auStack_208 [16];
  undefined1 local_1f8;
  undefined2 local_1d0;
  undefined6 uStack_1ce;
  undefined8 local_1c8;
  undefined8 local_1c0;
  char local_1b8 [64];
  undefined8 local_178;
  char local_170 [64];
  undefined2 local_130;
  undefined6 uStack_12e;
  undefined8 local_128;
  undefined8 local_120;
  char local_118 [64];
  undefined8 local_d8;
  char local_d0 [64];
  undefined2 local_90;
  undefined6 uStack_8e;
  undefined8 local_88;
  
  ppppppppplVar31 = (long *********)(ulong)param_3;
  if ((*(char *)(param_2 + 8) == '\0') ||
     ((*(char *)(param_2 + 0xec) == '\0' && (*(long *)(param_2 + 0x78) == *(long *)(param_2 + 0x70))
      ))) {
LAB_7101d9d130:
    lVar47 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (param_3 == 0xffff) {
      uVar13 = 0xffffffff;
    }
    else {
      uVar13 = (uint)*(ushort *)(lVar47 + (((long)ppppppppplVar31 << 0x30) >> 0x2f) + 0x60);
    }
    lVar48 = *(long *)(lVar47 + 0x20);
    uVar45 = (*(long *)(lVar47 + 0x28) - lVar48 >> 6) * -0x3333333333333333;
    if ((uVar13 < (uint)uVar45) && (*(char *)(lVar48 + (ulong)uVar13 * 0x140 + 0x5e) == '\x02'))
    goto LAB_7101d9d240;
    uVar25 = 0;
    if ((param_3 != 0xffff) && ((short)param_3 < 2000)) {
      uVar4 = *(ushort *)(lVar47 + (((long)ppppppppplVar31 << 0x30) >> 0x2f) + 0x60);
      uVar18 = (ulong)uVar4;
      if ((uint)uVar45 <= (uint)uVar4) goto LAB_7101d9d240;
      puVar1 = (undefined2 *)(lVar48 + uVar18 * 0x140);
      if (uVar45 < uVar18 || uVar45 - uVar18 == 0) {
        puVar1 = &DAT_7105182b08;
      }
      if (*(char *)(puVar1 + 0x2f) == '\0') {
        bVar44 = *(byte *)(puVar1 + 0x36);
LAB_7101d9d21c:
        if (2 < bVar44 - 1) goto LAB_7101d9d240;
        uVar25 = (undefined1)(0x20301 >> (ulong)((bVar44 - 1 & 3) << 3));
      }
      else {
        uVar25 = 4;
      }
    }
  }
  else {
    uVar45 = (ulong)*(short *)(param_2 + 0x88);
    lVar47 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (uVar45 != 0xffffffffffffffff) {
      uVar45 = (ulong)*(ushort *)(lVar47 + uVar45 * 2 + 0x60);
    }
    if (((uint)((int)((ulong)(*(long *)(lVar47 + 0x28) - *(long *)(lVar47 + 0x20)) >> 6) *
               -0x33333333) <= (uint)uVar45) ||
       (*(char *)(*(long *)(lVar47 + 0x20) + (uVar45 & 0xffffffff) * 0x140 + 0x5e) != '\x03'))
    goto LAB_7101d9d130;
    if (*(char *)(param_2 + 0xec) == '\0') {
      lVar47 = *(long *)(param_2 + 0x70);
      lVar48 = *(long *)(param_2 + 0x78);
      if (lVar48 != lVar47) goto LAB_7101d9d1e8;
    }
    else {
      lVar47 = *(long *)(param_2 + 0x70);
      lVar48 = *(long *)(param_2 + 0x78);
LAB_7101d9d1e8:
      uVar13 = (uint)((ulong)(lVar48 - lVar47) >> 3);
      if (uVar13 != 0) {
        uVar14 = 0;
        do {
          lVar48 = *(long *)(lVar47 + (ulong)uVar14 * 8);
          if (*(char *)(lVar48 + 0x10) == '\x01') {
            bVar44 = *(byte *)(lVar48 + 0x48);
            goto LAB_7101d9d21c;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar13);
      }
    }
LAB_7101d9d240:
    uVar25 = 0;
  }
  pppplVar28 = (long ****)0x0;
  ppppbVar34 = param_4;
  pppplVar36 = param_5;
  uVar45 = param_6;
  FUN_710339dde0((uint *)&local_260,uVar25,'\0');
  lVar47 = param_1 + 0x170;
  FUN_7103776640(&local_2a8,lVar47,(byte ****)"set_parts_bg_00",pppplVar28,ppppbVar34,pppplVar36,
                 uVar45,param_7,param_8);
  pppppppplVar33 = local_2a0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
LAB_7101d9d334:
    pcVar54 = (char *)&uStack_258;
  }
  else {
    if (*(char *)(param_2 + 0xec) == '\0') {
      if ((*(char *)(param_2 + 8) != '\0') &&
         (*(long *)(param_2 + 0x78) != *(long *)(param_2 + 0x70))) {
        uVar18 = (ulong)*(short *)(param_2 + 0x88);
        lVar48 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        if (uVar18 != 0xffffffffffffffff) {
          uVar18 = (ulong)*(ushort *)(lVar48 + uVar18 * 2 + 0x60);
        }
        if (((uint)uVar18 <
             (uint)((int)((ulong)(*(long *)(lVar48 + 0x28) - *(long *)(lVar48 + 0x20)) >> 6) *
                   -0x33333333)) &&
           (*(char *)(*(long *)(lVar48 + 0x20) + (uVar18 & 0xffffffff) * 0x140 + 0x5e) == '\x03')) {
          if (*(char *)(param_2 + 0xb9) == '\x02') {
            pcVar54 = "campaign_dark";
          }
          else {
            pcVar54 = "campaign_light";
          }
          goto LAB_7101d9d338;
        }
      }
      goto LAB_7101d9d334;
    }
    pcVar54 = "campaign_boss";
  }
LAB_7101d9d338:
  FUN_7103778300(0x3f800000,(long)local_2a0,(long)pcVar54);
  FUN_7103778300(0x3f800000,(long)local_2a0,0x710432a70e);
  FUN_7103778300(0x3f800000,(long)local_2a0,0x71043f0fa9);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x168),(long)&uStack_258);
  local_2a8 = (long ********)&PTR_FUN_710523d988;
  local_2a0 = (long ********)0x0;
  if (pppppppplVar33 != (long ********)0x0) {
    ppppppplVar16 = pppppppplVar33[3];
    pppppppplVar33[2] = (long *******)&PTR_FUN_710523d9a8;
    pppppppplVar33[3] = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_710392eb40((ulong)pppppppplVar33);
  }
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar28,ppppbVar34,pppplVar36,uVar45,param_7,param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2a8 = (long ********)((ulong)local_2a8 & 0xffffffff00000000);
      local_260 = (undefined **)&SUB_00000020;
      pppplVar28 = (long ****)&local_260;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2a8);
      if (((uVar18 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar28,ppppbVar34,pppplVar36,uVar45,param_7,param_8
                                  ), puVar17 != (undefined8 *)0x0)) goto LAB_7101d9d410;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_7101d9d410:
  puVar17[2] = 0;
  puVar17[3] = 0;
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar28,ppppbVar34,pppplVar36,uVar45,param_7,param_8);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2a8 = (long ********)((ulong)local_2a8 & 0xffffffff00000000);
      local_260 = (undefined **)&SUB_00000020;
      pppplVar28 = (long ****)&local_260;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2a8);
      if (((uVar18 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar28,ppppbVar34,pppplVar36,uVar45,param_7,param_8
                                  ), puVar19 != (undefined8 *)0x0)) goto LAB_7101d9d474;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7101d9d474:
  puVar19[2] = 0;
  puVar19[3] = 0;
  *puVar19 = 0;
  puVar19[1] = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x178),0x710434a773);
    FUN_7103776910(&local_260,lVar47,(long ****)"set_rep_fighter",pppplVar28,ppppbVar34,pppplVar36,
                   uVar45,param_7,param_8);
    local_3e8 = uStack_258;
    uStack_258 = (long *******)0x0;
    if (puVar17 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar17);
    }
    local_260 = &PTR_FUN_710523d9a8;
    uStack_258 = (long *******)0x0;
    FUN_7103776910(&local_260,lVar47,(long ****)"set_rep_fighter_sdw",pppplVar28,ppppbVar34,
                   pppplVar36,uVar45,param_7,param_8);
    ppppppplVar16 = uStack_258;
    uStack_258 = (long *******)0x0;
    if (puVar19 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar19);
    }
    bVar12 = false;
    local_260 = &PTR_FUN_710523d9a8;
    uStack_258 = (long *******)0x0;
    if (*(char *)(param_2 + 0xec) != '\0') goto LAB_7101d9d7ac;
LAB_7101d9d5c0:
    puVar52 = &DAT_c1ffff0000000000;
    if (*(char *)(param_2 + 8) != '\0') {
      lVar48 = *(long *)(param_2 + 0x70);
      uVar18 = *(long *)(param_2 + 0x78) - lVar48;
      if ((uVar18 != 0) && (0 < (int)(uVar18 >> 3))) {
        uVar46 = 0;
        do {
          if (*(char *)(*(long *)(lVar48 + uVar46 * 8) + 0x10) == '\x01') {
            if ((int)uVar46 != -1) {
              if ((ulong)((long)uVar18 >> 3) <= uVar46) goto LAB_7101da1550;
              lVar48 = *(long *)(lVar48 + uVar46 * 8);
              uVar13 = (uint)*(byte *)(lVar48 + 0x20);
              puVar52 = *(undefined1 **)(lVar48 + 0x18);
              goto LAB_7101d9d7b8;
            }
            break;
          }
          uVar46 = uVar46 + 1;
        } while ((long)uVar46 < (long)(uVar18 * 0x20000000) >> 0x20);
      }
    }
  }
  else {
    pcVar54 = (char *)(param_2 + 0xec);
    if (*pcVar54 == '\0') {
      if ((*(char *)(param_2 + 8) == '\0') ||
         (*(long *)(param_2 + 0x78) == *(long *)(param_2 + 0x70))) {
LAB_7101d9d70c:
        FUN_7103776910(&local_260,lVar47,(long ****)"set_rep_fighter_ld",pppplVar28,ppppbVar34,
                       pppplVar36,uVar45,param_7,param_8);
        local_3e8 = uStack_258;
        uStack_258 = (long *******)0x0;
        if (puVar17 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar17);
        }
        local_260 = &PTR_FUN_710523d9a8;
        uStack_258 = (long *******)0x0;
        FUN_7103776910(&local_260,lVar47,(long ****)"set_rep_fighter_sdw",pppplVar28,ppppbVar34,
                       pppplVar36,uVar45,param_7,param_8);
        ppppppplVar16 = uStack_258;
        uStack_258 = (long *******)0x0;
        if (puVar19 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar19);
        }
        lVar48 = *(long *)(param_1 + 0x178);
        if (*(char *)(param_2 + 0xb9) == '\x02') {
          pcVar26 = "rule_spirits_campaign_sb_dark";
        }
        else {
          pcVar26 = "rule_spirits_campaign_sb_light";
        }
      }
      else {
        uVar18 = (ulong)*(short *)(param_2 + 0x88);
        lVar48 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        if (uVar18 != 0xffffffffffffffff) {
          uVar18 = (ulong)*(ushort *)(lVar48 + uVar18 * 2 + 0x60);
        }
        if (((uint)((int)((ulong)(*(long *)(lVar48 + 0x28) - *(long *)(lVar48 + 0x20)) >> 6) *
                   -0x33333333) <= (uint)uVar18) ||
           (*(char *)(*(long *)(lVar48 + 0x20) + (uVar18 & 0xffffffff) * 0x140 + 0x5e) != '\x03'))
        goto LAB_7101d9d70c;
        FUN_7103776910(&local_260,lVar47,(long ****)"set_rep_fighter_fb",pppplVar28,ppppbVar34,
                       pppplVar36,uVar45,param_7,param_8);
        local_3e8 = uStack_258;
        uStack_258 = (long *******)0x0;
        if (puVar17 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar17);
        }
        local_260 = &PTR_FUN_710523d9a8;
        uStack_258 = (long *******)0x0;
        FUN_7103776910(&local_260,lVar47,(long ****)"set_rep_fighter_fb_sdw",pppplVar28,ppppbVar34,
                       pppplVar36,uVar45,param_7,param_8);
        ppppppplVar16 = uStack_258;
        uStack_258 = (long *******)0x0;
        if (puVar19 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar19);
        }
        lVar48 = *(long *)(param_1 + 0x178);
        if (*(char *)(param_2 + 0xb9) == '\x02') {
          pcVar26 = "rule_spirits_campaign_fb_dark";
        }
        else {
          pcVar26 = "rule_spirits_campaign_fb_light";
        }
      }
      uStack_258 = (long *******)0x0;
      local_260 = &PTR_FUN_710523d9a8;
      FUN_7103778300(0x3f800000,lVar48,(long)pcVar26);
      bVar12 = true;
      cVar2 = *pcVar54;
    }
    else {
      FUN_7103776910(&local_260,lVar47,(long ****)"set_rep_boss",pppplVar28,ppppbVar34,pppplVar36,
                     uVar45,param_7,param_8);
      local_3e8 = uStack_258;
      uStack_258 = (long *******)0x0;
      if (puVar17 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar17);
      }
      local_260 = &PTR_FUN_710523d9a8;
      uStack_258 = (long *******)0x0;
      FUN_7103776910(&local_260,lVar47,(long ****)"set_rep_boss_sdw",pppplVar28,ppppbVar34,
                     pppplVar36,uVar45,param_7,param_8);
      ppppppplVar16 = uStack_258;
      uStack_258 = (long *******)0x0;
      if (puVar19 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar19);
      }
      local_260 = &PTR_FUN_710523d9a8;
      uStack_258 = (long *******)0x0;
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x178),0x710424f95a);
      uVar13 = FUN_7102510850(*(ulong *)(param_2 + 0x10),extraout_x1,pppplVar28,ppppbVar34,
                              pppplVar36,uVar45,param_7,param_8);
      if ((uVar13 & 1) == 0) {
        pcVar26 = "boss_art";
      }
      else {
        pcVar26 = "boss_silhouette";
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x178),(long)pcVar26);
      bVar12 = false;
      cVar2 = *pcVar54;
    }
    if (cVar2 == '\0') goto LAB_7101d9d5c0;
LAB_7101d9d7ac:
    puVar52 = *(undefined1 **)(param_2 + 0xf0);
  }
  uVar13 = 0;
LAB_7101d9d7b8:
  pcVar54 = (char *)(param_2 + 0xec);
  plVar23 = (long *)(param_1 + 0x138);
  local_260 = (undefined **)FUN_7103238a70((ulong)puVar52,(ulong)uVar13,3);
  if (((ulong)local_260 & 0xffffffffff) != 0) {
    lVar48 = *plVar23;
    FUN_710323c4e0(lVar48,&local_260,(long *********)(long)*(int *)(lVar48 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar48 + 0x68),pppplVar36,uVar45,param_7,param_8);
  }
  ppppppppplVar32 = (long *********)0x3;
  plVar20 = FUN_710323f330(plVar23,(ulong)puVar52,(ulong)uVar13,3,pppplVar36,uVar45,param_7,param_8)
  ;
  lVar55 = *(long *)(DAT_710532f730 + 8);
  uVar14 = FUN_7103280ec0(*(long *)(lVar55 + 0x2a8),(ulong)puVar52,(ulong)uVar13,ppppppppplVar32,
                          pppplVar36,uVar45,param_7,param_8);
  uVar18 = 0;
  lVar48 = *(long *)(*(long *)(lVar55 + 0x2a8) + 8);
  auVar56 = FUN_710326ad60(ZEXT816(0),lVar48,uVar14,0x12091e3aee);
  auVar57._8_8_ = 0;
  auVar57._0_8_ = uVar18;
  auVar57 = FUN_710326ad60(auVar57 << 0x40,lVar48,uVar14,0x127e190a78);
  ppppppppplVar29 = (long *********)0xf1d20e57b;
  auVar58 = FUN_710326ad60(ZEXT816(0x3f800000),lVar48,uVar14,0xf1d20e57b);
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar29,(byte ****)ppppppppplVar32,
                           pppplVar36,uVar45,param_7,param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2a8 = (long ********)((ulong)local_2a8 & 0xffffffff00000000);
      local_260 = (undefined **)&SUB_00000020;
      ppppppppplVar29 = (long *********)&local_260;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2a8);
      if (((uVar18 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar29,(byte ****)ppppppppplVar32,
                                   pppplVar36,uVar45,param_7,param_8), puVar17 != (undefined8 *)0x0)
         ) goto LAB_7101d9d900;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_7101d9d900:
  puVar17[2] = 0;
  puVar17[3] = 0;
  *puVar17 = 0;
  puVar17[1] = 0;
  local_420 = auVar56._0_4_;
  *puVar17 = *local_3e8;
  local_430 = auVar57._0_4_;
  puVar17[1] = local_3e8[1];
  pppppppplVar51 = (long ********)CONCAT44(local_430,local_420);
  puVar17[2] = local_3e8[2];
  puVar17[3] = local_3e8[3];
  uStack_258 = (long *******)0x0;
  pppppppplVar33 = pppppppplVar51;
  local_260 = (undefined **)pppppppplVar51;
  FUN_7103779770(auVar58._0_4_,(long)puVar17,&local_260);
  if (puVar17 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar17);
  }
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar29,(byte ****)ppppppppplVar32,
                           pppplVar36,uVar45,param_7,param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2a8 = (long ********)((ulong)local_2a8 & 0xffffffff00000000);
      local_260 = (undefined **)&SUB_00000020;
      ppppppppplVar29 = (long *********)&local_260;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2a8);
      if (((uVar18 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar29,(byte ****)ppppppppplVar32,
                                   pppplVar36,uVar45,param_7,param_8), puVar17 != (undefined8 *)0x0)
         ) goto LAB_7101d9d9c0;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_7101d9d9c0:
  puVar17[2] = 0;
  puVar17[3] = 0;
  *puVar17 = 0;
  puVar17[1] = 0;
  *puVar17 = *ppppppplVar16;
  puVar17[1] = ppppppplVar16[1];
  puVar17[2] = ppppppplVar16[2];
  puVar17[3] = ppppppplVar16[3];
  uStack_258 = (long *******)0x0;
  local_260 = (undefined **)pppppppplVar51;
  FUN_7103779770(auVar58._0_4_,(long)puVar17,&local_260);
  if (puVar17 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar17);
  }
  FUN_7103778b80((long)local_3e8,(long)plVar20,ppppppppplVar29,(byte ****)ppppppppplVar32,pppplVar36
                 ,uVar45,param_7,param_8);
  FUN_7103778b80((long)ppppppplVar16,(long)plVar20,ppppppppplVar29,(byte ****)ppppppppplVar32,
                 pppplVar36,uVar45,param_7,param_8);
  if (bVar12) {
    if (((ulong)puVar52 & 0xffffffffff) == 0x1112944904) {
      puVar52 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0x1c2d9aa545);
    }
    uVar14 = FUN_7103280ec0(*(long *)(lVar55 + 0x2a8),(ulong)puVar52,(ulong)uVar13,ppppppppplVar32,
                            pppplVar36,uVar45,param_7,param_8);
    lVar48 = *(long *)(lVar55 + 0x2a8);
    ppppppppplVar29 = (long *********)0x135ac2027a;
    ppppppppplVar32 = (long *********)0x0;
    uVar14 = FUN_710326a6e0(*(long *)(lVar48 + 8),uVar14,0x135ac2027a,0);
    uVar15 = 0;
    if ((uVar14 & 1) != 0) {
      uVar14 = FUN_7103280ec0(lVar48,(ulong)puVar52,(ulong)uVar13,ppppppppplVar32,pppplVar36,uVar45,
                              param_7,param_8);
      ppppppppplVar29 = (long *********)0x11190eeb67;
      ppppppppplVar32 = (long *********)0x0;
      uVar15 = FUN_710326aa20(*(long *)(*(long *)(lVar55 + 0x2a8) + 8),uVar14,0x11190eeb67,0);
    }
    FUN_71003a4ca0((uint *)&local_260,"redeye_%02d",(ulong)uVar15,ppppppppplVar29,ppppppppplVar32,
                   pppplVar36,uVar45,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x178),(long)&uStack_258);
    if (0 < (int)uVar15) {
      uVar14 = 0;
      do {
        ppppppppplVar32 = (long *********)(ulong)uVar14;
        pppplVar36 = (long ****)0x0;
        auVar57 = FUN_7103281470(lVar55 + 0x2a0,(ulong)puVar52,(ulong)uVar13,ppppppppplVar32,0,
                                 uVar45,param_7,param_8);
        ppppppppplVar29 = (long *********)(ulong)uVar14;
        pppppppplVar59 = pppppppplVar33;
        FUN_7103776910(&local_2a8,lVar47,(long ****)"redeye_%02d",ppppppppplVar29,ppppppppplVar32,
                       pppplVar36,uVar45,param_7,param_8);
        pppppppplVar51 = local_2a0;
        ppppppplVar38 = *local_2a0;
        if (ppppppplVar38 != (long *******)0x0) {
          *(int *)(ppppppplVar38 + 6) = auVar57._0_4_;
          *(int *)((long)ppppppplVar38 + 0x34) = (int)pppppppplVar33;
          *(byte *)(ppppppplVar38 + 0xb) = *(byte *)(ppppppplVar38 + 0xb) | 0x10;
        }
        local_2a8 = (long ********)&PTR_FUN_710523d9a8;
        local_2a0 = (long ********)0x0;
        if (pppppppplVar51 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar51);
        }
        uVar14 = uVar14 + 1;
        pppppppplVar33 = pppppppplVar59;
      } while (uVar15 != uVar14);
    }
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x178),0x710436c9ac);
  }
  if (ppppppplVar16 != (long *******)0x0) {
    FUN_710392eb40((ulong)ppppppplVar16);
  }
  if (local_3e8 != (long *******)0x0) {
    FUN_710392eb40((ulong)local_3e8);
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
LAB_7101d9dc78:
    lVar47 = *(long *)(*(long *)(param_1 + 0x188) + 8);
    if ((lVar47 != 0) && (lVar47 = *(long *)(lVar47 + 0x18), lVar47 != 0)) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) | 1;
    }
    lVar47 = *(long *)(*(long *)(param_1 + 0x130) + 8);
    if (param_3 != 0xffff) {
      puVar39 = *(ushort **)(lVar47 + 0x10);
      lVar48 = *(long *)(lVar47 + 0x18) - (long)puVar39;
      uVar18 = lVar48 >> 3;
      if (0 < (int)uVar18) {
        uVar46 = 0;
        lVar48 = lVar48 * 0x20000000 >> 0x20;
        puVar49 = puVar39;
        do {
          if (uVar18 <= uVar46) goto LAB_7101da1550;
          if (*puVar49 == param_3) {
            if (-1 < (int)uVar46) {
              uVar46 = 0;
              goto LAB_7101d9dd0c;
            }
            break;
          }
          uVar46 = uVar46 + 1;
          puVar49 = puVar49 + 4;
        } while ((long)uVar46 < lVar48);
      }
    }
    ppppppppplVar32 = (long *********)0x1;
    ppppppppplVar29 = ppppppppplVar31;
    FUN_710259c150(lVar47,0,param_3,(byte ****)0x1,pppplVar36,uVar45,param_7,param_8);
    goto LAB_7101d9dd5c;
  }
  if (*(char *)(param_2 + 8) == '\0') {
LAB_7101d9dc44:
    if (*(char *)(param_2 + 0xec) == '\0') goto LAB_7101d9dc78;
  }
  else {
    if ((*(char *)(param_2 + 0xec) == '\0') &&
       (*(long *)(param_2 + 0x78) == *(long *)(param_2 + 0x70))) goto LAB_7101d9dc78;
    uVar18 = (ulong)*(short *)(param_2 + 0x88);
    lVar47 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (uVar18 != 0xffffffffffffffff) {
      uVar18 = (ulong)*(ushort *)(lVar47 + uVar18 * 2 + 0x60);
    }
    if (((uint)((int)((ulong)(*(long *)(lVar47 + 0x28) - *(long *)(lVar47 + 0x20)) >> 6) *
               -0x33333333) <= (uint)uVar18) ||
       (*(char *)(*(long *)(lVar47 + 0x20) + (uVar18 & 0xffffffff) * 0x140 + 0x5e) != '\x03'))
    goto LAB_7101d9dc44;
  }
  lVar47 = *(long *)(*(long *)(param_1 + 0x188) + 8);
  if ((lVar47 != 0) && (lVar47 = *(long *)(lVar47 + 0x18), lVar47 != 0)) {
    *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) & 0xfe;
  }
  goto LAB_7101d9ddfc;
  while( true ) {
    uVar46 = uVar46 + 1;
    puVar39 = puVar39 + 4;
    if (lVar48 <= (long)uVar46) break;
LAB_7101d9dd0c:
    if (uVar18 <= uVar46) {
LAB_7101da1550:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    if (*puVar39 == param_3) {
      if (-1 < (int)uVar46) {
        uVar18 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),param_3);
        uVar13 = FUN_71032412a0((long *)(lVar47 + 8),uVar18,(long *********)0x17,
                                (byte ****)ppppppppplVar32,pppplVar36,uVar45,param_7,param_8);
        ppppppppplVar29 = (long *********)&DAT_00000019;
        uVar14 = FUN_71032412a0((long *)(lVar47 + 8),uVar18,(long *********)&DAT_00000019,
                                (byte ****)ppppppppplVar32,pppplVar36,uVar45,param_7,param_8);
        if (((uVar13 & 1) != 0) && ((uVar14 & 1) != 0)) {
          FUN_7103776640(&local_260,param_1 + 0x180,(byte ****)"set_parts_aw",ppppppppplVar29,
                         ppppppppplVar32,pppplVar36,uVar45,param_7,param_8);
          uVar13 = 1;
          if (*(char *)(param_1 + 0x1c6) != '\0') {
            uVar13 = 2;
          }
          param_7 = (ulong)uVar13;
          ppppppppplVar29 = (long *********)0x1;
          ppppppppplVar32 = (long *********)0x1;
          pppplVar36 = (long ****)0x0;
          uVar45 = 0;
          FUN_71025ad150(param_3,(long)&local_260,1,1,0,0,param_7,param_8);
          ppppppplVar16 = uStack_258;
          local_260 = &PTR_FUN_710523d988;
          uStack_258 = (long *******)0x0;
          if (ppppppplVar16 != (long *******)0x0) {
            pppppplVar21 = ppppppplVar16[3];
            ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
            ppppppplVar16[3] = (long ******)0x0;
            if (pppppplVar21 != (long ******)0x0) {
              FUN_710392eb40((ulong)pppppplVar21);
            }
            FUN_710392eb40((ulong)ppppppplVar16);
          }
          goto LAB_7101d9ddfc;
        }
      }
      break;
    }
  }
LAB_7101d9dd5c:
  *(ushort *)(param_1 + 0x1c0) = param_3;
  FUN_7103776640(&local_260,param_1 + 0x180,(byte ****)"set_parts_aw",ppppppppplVar29,
                 ppppppppplVar32,pppplVar36,uVar45,param_7,param_8);
  FUN_7103776910(&local_2a8,(long)&local_260,(long ****)"set_rep_aura_00",ppppppppplVar29,
                 ppppppppplVar32,pppplVar36,uVar45,param_7,param_8);
  pppppppplVar33 = local_2a0;
  FUN_71037790a0((long)local_2a0,1,ppppppppplVar29,(byte ****)ppppppppplVar32,pppplVar36,uVar45,
                 param_7,param_8);
  local_2a8 = (long ********)&PTR_FUN_710523d9a8;
  local_2a0 = (long ********)0x0;
  if (pppppppplVar33 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar33);
  }
  FUN_7103776910(&local_2a8,(long)&local_260,(long ****)"set_rep_spirit_aw",ppppppppplVar29,
                 ppppppppplVar32,pppplVar36,uVar45,param_7,param_8);
  pppppppplVar33 = local_2a0;
  FUN_71037790a0((long)local_2a0,1,ppppppppplVar29,(byte ****)ppppppppplVar32,pppplVar36,uVar45,
                 param_7,param_8);
  local_2a8 = (long ********)&PTR_FUN_710523d9a8;
  local_2a0 = (long ********)0x0;
  if (pppppppplVar33 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar33);
  }
  ppppppplVar16 = uStack_258;
  local_260 = &PTR_FUN_710523d988;
  uStack_258 = (long *******)0x0;
  if (ppppppplVar16 != (long *******)0x0) {
    pppppplVar21 = ppppppplVar16[3];
    ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
    ppppppplVar16[3] = (long ******)0x0;
    if (pppppplVar21 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar21);
    }
    FUN_710392eb40((ulong)ppppppplVar16);
  }
LAB_7101d9ddfc:
  FUN_7103776640(&local_2a8,param_1 + 0x180,(byte ****)"set_parts_aw",ppppppppplVar29,
                 ppppppppplVar32,pppplVar36,uVar45,param_7,param_8);
  FUN_7103776640(&local_260,(long)&local_2a8,(byte ****)"set_parts_base",ppppppppplVar29,
                 ppppppppplVar32,pppplVar36,uVar45,param_7,param_8);
  ppppppplVar16 = uStack_258;
  FUN_7103778300(0x3f800000,(long)uStack_258,0x7104348100);
  local_260 = &PTR_FUN_710523d988;
  uStack_258 = (long *******)0x0;
  if (ppppppplVar16 != (long *******)0x0) {
    pppppplVar21 = ppppppplVar16[3];
    ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
    ppppppplVar16[3] = (long ******)0x0;
    if (pppppplVar21 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar21);
    }
    FUN_710392eb40((ulong)ppppppplVar16);
  }
  pppppppplVar33 = local_2a0;
  local_2a8 = (long ********)&PTR_FUN_710523d988;
  local_2a0 = (long ********)0x0;
  if (pppppppplVar33 != (long ********)0x0) {
    ppppppplVar16 = pppppppplVar33[3];
    pppppppplVar33[2] = (long *******)&PTR_FUN_710523d9a8;
    pppppppplVar33[3] = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_710392eb40((ulong)pppppppplVar33);
  }
  bVar10 = param_3 == 0xffff;
  lVar47 = *(long *)(DAT_710532f730 + 8);
  bVar12 = 1999 < (short)param_3;
  if (((bVar10 || bVar12) ||
      (lVar48 = *(long *)(lVar47 + 0x1d8),
      (uint)((int)((ulong)(*(long *)(lVar48 + 0x28) - *(long *)(lVar48 + 0x20)) >> 6) * -0x33333333)
      <= (uint)*(ushort *)(lVar48 + (((long)ppppppppplVar31 << 0x30) >> 0x2f) + 0x60))) ||
     (*(short *)(*(long *)(*DAT_7105329f98 + 0x30) + (long)(short)param_3 * 0x24 + 0x20) == 0)) {
    FUN_7103776640(&local_260,param_1 + 0x160,(byte ****)"set_parts_class",ppppppppplVar29,
                   ppppppppplVar32,pppplVar36,uVar45,param_7,param_8);
    pcVar26 = "on_empty";
  }
  else {
    FUN_7103776640(&local_260,param_1 + 0x160,(byte ****)"set_parts_class",ppppppppplVar29,
                   ppppppppplVar32,pppplVar36,uVar45,param_7,param_8);
    pcVar26 = "off_empty";
  }
  ppppppplVar16 = uStack_258;
  FUN_7103778300(0x3f800000,(long)uStack_258,(long)pcVar26);
  local_260 = &PTR_FUN_710523d988;
  uStack_258 = (long *******)0x0;
  if (ppppppplVar16 != (long *******)0x0) {
    pppppplVar21 = ppppppplVar16[3];
    ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
    ppppppplVar16[3] = (long ******)0x0;
    if (pppppplVar21 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar21);
    }
    FUN_710392eb40((ulong)ppppppplVar16);
  }
  if (*pcVar54 == '\0') {
    puVar52 = &DAT_c1ffff0000000000;
    if (*(char *)(param_2 + 8) != '\0') {
      lVar48 = *(long *)(param_2 + 0x70);
      uVar18 = *(long *)(param_2 + 0x78) - lVar48;
      if ((uVar18 != 0) && (0 < (int)(uVar18 >> 3))) {
        uVar46 = 0;
        do {
          if (*(char *)(*(long *)(lVar48 + uVar46 * 8) + 0x10) == '\x01') {
            if ((-1 < (int)uVar46) && (uVar46 < (ulong)((long)uVar18 >> 3))) {
              lVar48 = *(long *)(lVar48 + uVar46 * 8);
              puVar52 = *(undefined1 **)(lVar48 + 0x18);
              uVar13 = (uint)*(byte *)(lVar48 + 0x20);
              goto LAB_7101d9dfa0;
            }
            break;
          }
          uVar46 = uVar46 + 1;
        } while ((long)uVar46 < (long)(uVar18 * 0x20000000) >> 0x20);
      }
    }
  }
  else {
    puVar52 = *(undefined1 **)(param_2 + 0xf0);
  }
  uVar13 = 0;
LAB_7101d9dfa0:
  lVar48 = param_1 + 0x160;
  FUN_7103776910(&local_2b8,lVar48,(long ****)"set_txt_series",ppppppppplVar29,ppppppppplVar32,
                 pppplVar36,uVar45,param_7,param_8);
  ppppppplVar16 = local_2b0;
  if ((bVar10 || bVar12) ||
     (lVar55 = *(long *)(lVar47 + 0x1d8),
     (uint)((int)((ulong)(*(long *)(lVar55 + 0x28) - *(long *)(lVar55 + 0x20)) >> 6) * -0x33333333)
     <= (uint)*(ushort *)(lVar55 + (((long)ppppppppplVar31 << 0x30) >> 0x2f) + 0x60))) {
    lVar55 = (long)*local_2b0;
    if (lVar55 != 0) {
      *(byte *)(lVar55 + 0x58) = *(byte *)(lVar55 + 0x58) & 0xfe;
    }
  }
  else {
    lVar40 = (long)*local_2b0;
    if (lVar40 != 0) {
      *(byte *)(lVar40 + 0x58) = *(byte *)(lVar40 + 0x58) | 1;
      lVar55 = *(long *)(lVar47 + 0x1d8);
    }
    if (ppppppppplVar31 == (long *********)0xffff) {
      uVar18 = 0xffffffff;
    }
    else {
      uVar18 = (ulong)*(ushort *)(lVar55 + (long)(short)param_3 * 2 + 0x60);
    }
    uVar46 = (*(long *)(lVar55 + 0x28) - *(long *)(lVar55 + 0x20) >> 6) * -0x3333333333333333;
    puVar1 = (undefined2 *)(*(long *)(lVar55 + 0x20) + uVar18 * 0x140);
    if (uVar46 < uVar18 || uVar46 - uVar18 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    ppppppppplVar29 = *(long **********)(puVar1 + 0x88);
    uVar18 = (ulong)ppppppppplVar29 & 0xffffffffff;
    if (((ulong)ppppppppplVar29 & 0xff00000000000000) == 0x5c00000000000000 && uVar18 != 0) {
      if (uVar18 == 0x13b2d9832e) goto LAB_7101d9e1a0;
      if (uVar18 != 0x111d15b4dc) goto LAB_7101d9e1f4;
      lVar55 = *(long *)(DAT_710532f730 + 8);
      ppppppppplVar29 = *(long **********)(puVar1 + 0x30);
      FUN_7103299d20((uint *)&local_260,*(long *)(lVar55 + 0x188),(ulong)ppppppppplVar29);
      FUN_71003a4ca0((uint *)&local_2a8,"tit_series_%s",&uStack_258,ppppppppplVar29,ppppppppplVar32,
                     pppplVar36,uVar45,param_7,param_8);
      uVar14 = FUN_710329acf0(*(long *)(lVar55 + 0x188),*(ulong *)(puVar1 + 0x30));
      if ((uVar14 & 1) != 0) goto LAB_7101d9e23c;
LAB_7101d9e170:
      ppppppppplVar32 = &local_2a0;
      FUN_710377a120((long)&local_2b8,(char *)ppppppppplVar32,ppppppppplVar29,ppppppppplVar32,
                     pppplVar36,uVar45,param_7,param_8);
    }
    else if (uVar18 == 0x13b2d9832e) {
LAB_7101d9e1a0:
      ppppppppplVar29 = (long *********)FUN_71032a9470(lVar55,param_3);
      FUN_71032a9540((uint *)&local_260,lVar55,(ulong)ppppppppplVar29);
      FUN_71003a4ca0((uint *)&local_2a8,"tit_append_%s",&uStack_258,ppppppppplVar29,ppppppppplVar32,
                     pppplVar36,uVar45,param_7,param_8);
      FUN_710377a120((long)&local_2b8,(char *)&local_2a0,ppppppppplVar29,ppppppppplVar32,pppplVar36,
                     uVar45,param_7,param_8);
    }
    else {
LAB_7101d9e1f4:
      lVar55 = *(long *)(DAT_710532f730 + 8);
      FUN_710327c1a0((uint *)&local_260,*(long *)(lVar55 + 0x2b8),(ulong)ppppppppplVar29);
      FUN_71003a4ca0((uint *)&local_2a8,"tit_%s",&uStack_258,ppppppppplVar29,ppppppppplVar32,
                     pppplVar36,uVar45,param_7,param_8);
      uVar14 = FUN_710327cba0(*(long *)(lVar55 + 0x2b8),*(ulong *)(puVar1 + 0x88));
      if ((uVar14 & 1) == 0) goto LAB_7101d9e170;
LAB_7101d9e23c:
      ppppppppplVar32 = &local_2a0;
      ppppppppplVar29 = (long *********)0x1;
      FUN_710377a280((long)&local_2b8,(byte *)"mnu_spirits_directory_view_series",1);
    }
  }
  FUN_7103776640(&local_2c8,lVar48,(byte ****)"set_parts_caption",ppppppppplVar29,ppppppppplVar32,
                 pppplVar36,uVar45,param_7,param_8);
  if (bVar10 || bVar12) {
LAB_7101d9e30c:
    uVar25 = 0;
  }
  else {
    lVar55 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar4 = *(ushort *)(lVar55 + (((long)ppppppppplVar31 << 0x30) >> 0x2f) + 0x60);
    uVar18 = (*(long *)(lVar55 + 0x28) - *(long *)(lVar55 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar18 <= (uint)uVar4) goto LAB_7101d9e30c;
    uVar46 = 0xffffffff;
    if (ppppppppplVar31 != (long *********)0xffff) {
      uVar46 = (ulong)uVar4;
    }
    puVar1 = (undefined2 *)(*(long *)(lVar55 + 0x20) + uVar46 * 0x140);
    if (uVar18 < uVar46 || uVar18 - uVar46 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    if (*(char *)(puVar1 + 0x2f) == '\0') {
      if (2 < *(byte *)(puVar1 + 0x36) - 1) goto LAB_7101d9e30c;
      uVar25 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar1 + 0x36) - 1 & 3) << 3));
    }
    else {
      uVar25 = 4;
    }
  }
  uVar30 = 0;
  FUN_710339dde0((uint *)&local_2a8,uVar25,'\0');
  FUN_7103776640(&local_260,(long)&local_2c8,(byte ****)"set_parts_titlle_atr",uVar30,
                 ppppppppplVar32,pppplVar36,uVar45,param_7,param_8);
  ppppppplVar38 = uStack_258;
  FUN_7103778300(0x3f800000,(long)uStack_258,(long)&local_2a0);
  local_260 = &PTR_FUN_710523d988;
  uStack_258 = (long *******)0x0;
  if (ppppppplVar38 != (long *******)0x0) {
    pppppplVar21 = ppppppplVar38[3];
    ppppppplVar38[2] = (long ******)&PTR_FUN_710523d9a8;
    ppppppplVar38[3] = (long ******)0x0;
    if (pppppplVar21 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar21);
    }
    FUN_710392eb40((ulong)ppppppplVar38);
  }
  FUN_7103776910(&local_2d8,(long)&local_2c8,(long ****)"set_txt_help",uVar30,ppppppppplVar32,
                 pppplVar36,uVar45,param_7,param_8);
  FUN_7103776910(&local_2e8,lVar48,(long ****)"set_txt_fighter_name",uVar30,ppppppppplVar32,
                 pppplVar36,uVar45,param_7,param_8);
  lVar55 = *(long *)(lVar47 + 0x1d8);
  uVar18 = FUN_71032a9470(lVar55,param_3);
  FUN_71032a9540((uint *)&local_260,lVar55,uVar18);
  pppplVar28 = (long ****)&uStack_258;
  FUN_71003a4ca0((uint *)&local_330,"spi_%s",pppplVar28,uVar18,ppppppppplVar32,pppplVar36,uVar45,
                 param_7,param_8);
  lVar55 = *(long *)(DAT_710532f730 + 8);
  uVar13 = FUN_7103263540(*(long *)(lVar55 + 0x168),(ulong)puVar52,(ulong)uVar13,ppppppppplVar32,
                          pppplVar36,uVar45,param_7,param_8);
  FUN_7103262310((uint *)&local_260,*(long *)(lVar55 + 0x168),(ulong)puVar52);
  FUN_71003a4ca0((uint *)&local_378,"nam_chr1_%02d_%s",(ulong)uVar13,pppplVar28,ppppppppplVar32,
                 pppplVar36,uVar45,param_7,param_8);
  FUN_7102499260((uint *)&local_260,param_2);
  FUN_71024999d0((uint *)&local_3c0,param_2);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x168),0x7104433521);
    lVar55 = *(long *)(lVar47 + 0x1d8);
    if (ppppppppplVar31 == (long *********)0xffff) {
      uVar13 = 0xffffffff;
    }
    else {
      uVar13 = (uint)*(ushort *)(lVar55 + (((long)ppppppppplVar31 << 0x30) >> 0x2f) + 0x60);
    }
LAB_7101d9e5f0:
    if ((uVar13 < (uint)((int)((ulong)(*(long *)(lVar55 + 0x28) - *(long *)(lVar55 + 0x20)) >> 6) *
                        -0x33333333)) &&
       (*(char *)(*(long *)(lVar55 + 0x20) + (ulong)uVar13 * 0x140 + 0x5e) == '\x02')) {
      lVar55 = *(long *)(param_1 + 0x168);
      pcVar26 = "headline_master";
    }
    else {
      lVar55 = *(long *)(param_1 + 0x168);
      pcVar26 = "headline_class";
    }
  }
  else {
    if (*pcVar54 == '\0') {
      if ((*(char *)(param_2 + 8) != '\0') &&
         (*(long *)(param_2 + 0x78) != *(long *)(param_2 + 0x70))) {
        uVar18 = (ulong)*(short *)(param_2 + 0x88);
        lVar55 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        if (uVar18 != 0xffffffffffffffff) {
          uVar18 = (ulong)*(ushort *)(lVar55 + uVar18 * 2 + 0x60);
        }
        if (((uint)uVar18 <
             (uint)((int)((ulong)(*(long *)(lVar55 + 0x28) - *(long *)(lVar55 + 0x20)) >> 6) *
                   -0x33333333)) &&
           (*(char *)(*(long *)(lVar55 + 0x20) + (uVar18 & 0xffffffff) * 0x140 + 0x5e) == '\x03'))
        goto LAB_7101d9e454;
      }
      lVar55 = *(long *)(param_1 + 0x168);
      pcVar26 = "fighter_name_show";
    }
    else {
LAB_7101d9e454:
      lVar55 = *(long *)(param_1 + 0x168);
      pcVar26 = "fighter_name_hide";
    }
    FUN_7103778300(0x3f800000,lVar55,(long)pcVar26);
    if (*pcVar54 == '\0') {
      if ((*(char *)(param_2 + 8) != '\0') &&
         (*(long *)(param_2 + 0x78) != *(long *)(param_2 + 0x70))) {
        uVar18 = (ulong)*(short *)(param_2 + 0x88);
        lVar55 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        if (uVar18 != 0xffffffffffffffff) {
          uVar18 = (ulong)*(ushort *)(lVar55 + uVar18 * 2 + 0x60);
        }
        if (((uint)uVar18 <
             (uint)((int)((ulong)(*(long *)(lVar55 + 0x28) - *(long *)(lVar55 + 0x20)) >> 6) *
                   -0x33333333)) &&
           (*(char *)(*(long *)(lVar55 + 0x20) + (uVar18 & 0xffffffff) * 0x140 + 0x5e) == '\x03')) {
          lVar55 = *(long *)(param_1 + 0x168);
          if (*(char *)(param_2 + 0xb9) == '\x02') {
            pcVar26 = "headline_dark";
          }
          else {
            pcVar26 = "headline_light";
          }
          goto LAB_7101d9e640;
        }
      }
      lVar55 = *(long *)(lVar47 + 0x1d8);
      if (ppppppppplVar31 == (long *********)0xffff) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = (uint)*(ushort *)(lVar55 + (((long)ppppppppplVar31 << 0x30) >> 0x2f) + 0x60);
      }
      goto LAB_7101d9e5f0;
    }
    lVar55 = *(long *)(param_1 + 0x168);
    pcVar26 = "headline_boss";
  }
LAB_7101d9e640:
  FUN_7103778300(0x3f800000,lVar55,(long)pcVar26);
  lVar47 = *(long *)(lVar47 + 0x1d8);
  if (ppppppppplVar31 == (long *********)0xffff) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = (uint)*(ushort *)(lVar47 + (((long)ppppppppplVar31 << 0x30) >> 0x2f) + 0x60);
  }
  if (uVar13 < (uint)((int)((ulong)(*(long *)(lVar47 + 0x28) - *(long *)(lVar47 + 0x20)) >> 6) *
                     -0x33333333)) {
    bVar11 = *(char *)(*(long *)(lVar47 + 0x20) + (ulong)uVar13 * 0x140 + 0x5e) == '\x02';
    if (*(char *)(param_2 + 0xb8) == '\0') goto LAB_7101d9e6f0;
LAB_7101d9e6a8:
    if (bVar11) goto LAB_7101d9e6f4;
    if (*pcVar54 == '\0') {
      if ((*(char *)(param_2 + 8) != '\0') &&
         (*(long *)(param_2 + 0x78) != *(long *)(param_2 + 0x70))) {
        uVar18 = (ulong)*(short *)(param_2 + 0x88);
        lVar47 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        if (uVar18 != 0xffffffffffffffff) {
          uVar18 = (ulong)*(ushort *)(lVar47 + uVar18 * 2 + 0x60);
        }
        if (((uint)uVar18 <
             (uint)((int)((ulong)(*(long *)(lVar47 + 0x28) - *(long *)(lVar47 + 0x20)) >> 6) *
                   -0x33333333)) &&
           (*(char *)(*(long *)(lVar47 + 0x20) + (uVar18 & 0xffffffff) * 0x140 + 0x5e) == '\x03'))
        goto LAB_7101d9e7b0;
      }
      goto LAB_7101d9e7c0;
    }
    uVar13 = FUN_7102510850(*(ulong *)(param_2 + 0x10),extraout_x1_00,pppplVar28,
                            (byte ****)ppppppppplVar32,pppplVar36,uVar45,param_7,param_8);
    if ((uVar13 & 1) == 0) {
LAB_7101d9e7b0:
      FUN_7103776910(&local_3d0,lVar48,(long ****)"set_txt_caption",pppplVar28,ppppppppplVar32,
                     pppplVar36,uVar45,param_7,param_8);
    }
    else {
      FUN_7103776910(&local_3d0,lVar48,(long ****)"set_txt_caption",pppplVar28,ppppppppplVar32,
                     pppplVar36,uVar45,param_7,param_8);
    }
LAB_7101d9e718:
    FUN_710377a280((long)&local_3d0,(byte *)"mnu_spirits_challengeboard_detail_target",1);
    uVar45 = local_3c8;
    local_3d0 = &PTR_FUN_710523d9a8;
    local_3c8 = 0;
    if (uVar45 != 0) {
      FUN_710392eb40(uVar45);
    }
  }
  else {
    bVar11 = false;
    if (*(char *)(param_2 + 0xb8) != '\0') goto LAB_7101d9e6a8;
LAB_7101d9e6f0:
    if (bVar11) {
LAB_7101d9e6f4:
      FUN_7103776910(&local_3d0,lVar48,(long ****)"set_txt_caption",pppplVar28,ppppppppplVar32,
                     pppplVar36,uVar45,param_7,param_8);
      goto LAB_7101d9e718;
    }
LAB_7101d9e7c0:
    FUN_710377a280((long)&local_2d8,(byte *)"mnu_spirits_challengeboard_detail_target",1);
  }
  pppplVar28 = &local_370;
  pppppppplVar33 = (long ********)&uStack_258;
  puVar37 = local_3b8;
  ppppppppplVar29 = (long *********)0x3;
  FUN_710377a280((long)&local_2e8,(byte *)"mnu_spirits_challengeboard_detail_target_fighter",3);
  uVar45 = local_2e0;
  local_2e8 = &PTR_FUN_710523d9a8;
  local_2e0 = 0;
  if (uVar45 != 0) {
    FUN_710392eb40(uVar45);
  }
  uVar45 = local_2d0;
  local_2d8 = &PTR_FUN_710523d9a8;
  local_2d0 = 0;
  if (uVar45 != 0) {
    FUN_710392eb40(uVar45);
  }
  ppppppplVar38 = local_2c0;
  local_2c8 = &PTR_FUN_710523d988;
  local_2c0 = (long *******)0x0;
  if (ppppppplVar38 != (long *******)0x0) {
    uVar45 = *(ulong *)((long)ppppppplVar38 + 0x18);
    *(undefined ***)((long)ppppppplVar38 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppppppplVar38 + 0x18) = 0;
    if (uVar45 != 0) {
      FUN_710392eb40(uVar45);
    }
    FUN_710392eb40((ulong)ppppppplVar38);
  }
  local_2b8 = &PTR_FUN_710523d9a8;
  local_2b0 = (long *******)0x0;
  if (ppppppplVar16 != (long *******)0x0) {
    FUN_710392eb40((ulong)ppppppplVar16);
  }
  uVar13 = 0x811c9dc5;
  local_260._0_4_ = uVar13;
  if (bVar10 || bVar12) {
LAB_7101d9e930:
    FUN_7103776640(&local_2a8,lVar48,(byte ****)"set_parts_class",ppppppppplVar29,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
switchD_7101da05c4_caseD_0:
    pppppppplVar51 = local_2a0;
    FUN_7103778300(0x3f800000,(long)local_2a0,0x7104464374);
    FUN_7103778300(0x3f800000,(long)pppppppplVar51,0x71044530a1);
    local_260._4_4_ = 0x21;
    uStack_258 = (long *******)0x5f73746972697073;
    local_250 = 0x5f74636c5f6d6f63;
    local_248 = 0x6369;
    local_246 = 0x7373616c635f6e6f;
    local_23e = 0x656369766f6e5f;
    uVar14 = 0x73;
    pbVar43 = (byte *)((long)&uStack_258 + 1);
    do {
      local_260._0_4_ = (uint)local_260 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar43;
      pbVar43 = pbVar43 + 1;
    } while (uVar14 != 0);
    goto LAB_7101d9e9f8;
  }
  lVar47 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  uVar4 = *(ushort *)(lVar47 + (((long)ppppppppplVar31 << 0x30) >> 0x2f) + 0x60);
  uVar45 = (*(long *)(lVar47 + 0x28) - *(long *)(lVar47 + 0x20) >> 6) * -0x3333333333333333;
  if ((uint)uVar45 <= (uint)uVar4) goto LAB_7101d9e930;
  uVar18 = 0xffffffff;
  if (ppppppppplVar31 != (long *********)0xffff) {
    uVar18 = (ulong)uVar4;
  }
  puVar17 = (undefined8 *)(*(long *)(lVar47 + 0x20) + uVar18 * 0x140);
  if (uVar45 < uVar18 || uVar45 - uVar18 == 0) {
    puVar17 = (undefined8 *)&DAT_7105182b08;
  }
  local_260 = (undefined **)*puVar17;
  uStack_258 = (long *******)puVar17[1];
  uVar45 = 0;
  while( true ) {
    pcVar54 = (char *)((long)puVar17 + uVar45 + 0x18);
    cVar2 = *pcVar54;
    if (cVar2 == '\0') break;
    *(char *)((long)&local_248 + uVar45) = cVar2;
    if (0x3e < (int)uVar45 + 1U) {
      uVar45 = (ulong)((int)uVar45 + 1);
      break;
    }
    cVar2 = pcVar54[1];
    if (cVar2 == '\0') {
      uVar45 = uVar45 + 1;
      break;
    }
    *(char *)((long)&local_248 + uVar45 + 1) = cVar2;
    uVar45 = uVar45 + 2;
  }
  *(undefined1 *)((long)&local_248 + (uVar45 & 0xffffffff)) = 0;
  local_250 = uVar45 << 0x20;
  uVar15 = (uint)(byte)local_248;
  uVar14 = uVar13;
  if ((byte)local_248 != 0) {
    pbVar43 = (byte *)((long)&local_248 + 1);
    do {
      uVar14 = uVar14 * 0x89 ^ uVar15;
      uVar15 = (uint)*pbVar43;
      pbVar43 = pbVar43 + 1;
    } while (uVar15 != 0);
  }
  ppppppppplVar29 = (long *********)&DAT_000000e8;
  local_250 = CONCAT44((int)uVar45,uVar14);
  memcpy(auStack_208,puVar17 + 0xb,0xe8);
  FUN_7103776640(&local_2a8,lVar48,(byte ****)"set_parts_class",ppppppppplVar29,pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  pppppppplVar51 = local_2a0;
  switch(local_1f8) {
  case 0:
    goto switchD_7101da05c4_caseD_0;
  case 1:
    FUN_7103778300(0x3f800000,(long)local_2a0,0x7104442147);
    FUN_7103778300(0x3f800000,(long)pppppppplVar51,0x710426e5e7);
    local_260._4_4_ = 0x1f;
    uStack_258 = (long *******)0x5f73746972697073;
    local_250 = 0x5f74636c5f6d6f63;
    local_248 = 0x6369;
    local_246 = 0x7373616c635f6e6f;
    local_23e = CONCAT26(local_23e._6_2_,0x65706f685f);
    uVar14 = 0x73;
    pbVar43 = (byte *)((long)&uStack_258 + 1);
    do {
      local_260._0_4_ = (uint)local_260 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar43;
      pbVar43 = pbVar43 + 1;
    } while (uVar14 != 0);
    break;
  case 2:
    FUN_7103778300(0x3f800000,(long)local_2a0,0x71044530ac);
    FUN_7103778300(0x3f800000,(long)pppppppplVar51,0x71044318aa);
    uVar14 = 0x73;
    local_260._4_4_ = 0x1e;
    uStack_258 = (long *******)0x5f73746972697073;
    local_250 = 0x5f74636c5f6d6f63;
    local_248 = 0x6369;
    local_246 = 0x7373616c635f6e6f;
    local_23e = CONCAT35(local_23e._5_3_,0x6563615f);
    pbVar43 = (byte *)((long)&uStack_258 + 1);
    do {
      local_260._0_4_ = (uint)local_260 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar43;
      pbVar43 = pbVar43 + 1;
    } while (uVar14 != 0);
    break;
  case 3:
    FUN_7103778300(0x3f800000,(long)local_2a0,0x710436ac3e);
    FUN_7103778300(0x3f800000,(long)pppppppplVar51,0x710437ae87);
    local_260._4_4_ = 0x21;
    uStack_258 = (long *******)0x5f73746972697073;
    local_250 = 0x5f74636c5f6d6f63;
    local_248 = 0x6369;
    local_246 = 0x7373616c635f6e6f;
    local_23e = 0x646e6567656c5f;
    uVar14 = 0x73;
    pbVar43 = (byte *)((long)&uStack_258 + 1);
    do {
      local_260._0_4_ = (uint)local_260 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar43;
      pbVar43 = pbVar43 + 1;
    } while (uVar14 != 0);
    break;
  default:
    FUN_7103778300(0x3f800000,(long)local_2a0,0x7104464374);
    FUN_7103778300(0x3f800000,(long)pppppppplVar51,0x71044530a1);
    uStack_258 = (long *******)((ulong)uStack_258 & 0xffffffffffffff00);
    local_260._4_4_ = 0;
    local_260._0_4_ = 0x811c9dc5;
    goto LAB_7101d9e9fc;
  }
LAB_7101d9e9f8:
  local_246 = 0x7373616c635f6e6f;
  local_248 = 0x6369;
  local_250 = 0x5f74636c5f6d6f63;
  uStack_258 = (long *******)0x5f73746972697073;
LAB_7101d9e9fc:
  FUN_7103776910(&local_330,(long)&local_2a8,(long ****)"set_pic_txt",ppppppppplVar29,pppppppplVar33
                 ,pppplVar28,puVar37,param_7,param_8);
  if (local_260._4_4_ < 1) {
    uVar45 = CONCAT44(uStack_324,local_328);
    FUN_71037790a0(uVar45,1,ppppppppplVar29,(byte ****)pppppppplVar33,pppplVar28,puVar37,param_7,
                   param_8);
  }
  else {
    plVar20 = *(long **)(param_1 + 0x128);
    local_378 = (undefined **)FUN_710323af70((long)&uStack_258,0);
    if (((ulong)local_378 & 0xffffffffff) != 0) {
      lVar47 = *plVar20;
      pppppppplVar33 = (long ********)(ulong)*(uint *)(lVar47 + 0x68);
      FUN_710323c4e0(lVar47,&local_378,(long *********)(long)*(int *)(lVar47 + 0x70),
                     (byte ****)pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
    }
    ppppppppplVar29 = (long *********)0x0;
    plVar20 = FUN_7103240d30(*(long **)(param_1 + 0x128),(long)&uStack_258,(long ****)0x0,
                             (byte ****)pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
    uVar45 = CONCAT44(uStack_324,local_328);
    FUN_7103778b80(uVar45,(long)plVar20,ppppppppplVar29,(byte ****)pppppppplVar33,pppplVar28,puVar37
                   ,param_7,param_8);
  }
  uStack_324 = 0;
  local_328 = 0.0;
  local_330._4_4_ = 1.58347e-43;
  local_330._0_4_ = 0x523d9a8;
  if (uVar45 != 0) {
    uStack_324 = 0;
    local_328 = 0.0;
    local_330._4_4_ = 1.58347e-43;
    local_330._0_4_ = 0x523d9a8;
    FUN_710392eb40(uVar45);
  }
  local_2a8 = (long ********)&PTR_FUN_710523d988;
  local_2a0 = (long ********)0x0;
  if (pppppppplVar51 != (long ********)0x0) {
    ppppppplVar16 = pppppppplVar51[3];
    pppppppplVar51[2] = (long *******)&PTR_FUN_710523d9a8;
    pppppppplVar51[3] = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_710392eb40((ulong)pppppppplVar51);
  }
  uVar14 = *(uint *)(param_2 + 0x24);
  FUN_7103776640(&local_330,lVar48,(byte ****)"set_parts_stage",ppppppppplVar29,pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  FUN_7103776910(&local_378,lVar48,(long ****)&DAT_710440196e,ppppppppplVar29,pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  ppplVar6 = local_370;
  uVar45 = CONCAT44(uStack_324,local_328);
  lVar47 = *(long *)(uVar45 + 8);
  if (*(char *)(param_2 + 0xec) == '\0') {
    if ((lVar47 != 0) && (lVar47 = *(long *)(lVar47 + 0x18), lVar47 != 0)) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) | 1;
    }
    pplVar41 = *local_370;
    if (pplVar41 != (long **)0x0) {
      bVar44 = *(byte *)(pplVar41 + 0xb) | 1;
      goto LAB_7101d9eb58;
    }
  }
  else {
    if ((lVar47 != 0) && (lVar47 = *(long *)(lVar47 + 0x18), lVar47 != 0)) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) & 0xfe;
    }
    pplVar41 = *local_370;
    if (pplVar41 != (long **)0x0) {
      bVar44 = *(byte *)(pplVar41 + 0xb) & 0xfe;
LAB_7101d9eb58:
      *(byte *)(pplVar41 + 0xb) = bVar44;
    }
  }
  iVar50 = -1;
  if (uVar14 < 0x16c) {
    iVar50 = (&DAT_710454a7ec)[(long)(int)uVar14 * 0x12];
    iVar53 = (&DAT_710454a7f0)[(long)(int)uVar14 * 0x12];
  }
  else {
    iVar53 = 0;
  }
  lVar47 = *(long *)(DAT_710532f730 + 8);
  ppppppppplVar32 = (long *********)FUN_71032b24e0(lVar47 + 0x170,iVar50);
  ppppppppplVar29 = ppppppppplVar32;
  FUN_71032b1a60((uint *)&local_260,*(long *)(lVar47 + 0x178),(ulong)ppppppppplVar32);
  FUN_71003a4ca0((uint *)&local_2a8,"nam_stg1_%s",&uStack_258,ppppppppplVar29,pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  if (iVar53 == 2) {
    FUN_7103778300(0x3f800000,uVar45,0x71042e7659);
    FUN_7103776910(&local_260,(long)&local_330,(long ****)"set_rep_stage_end",ppppppppplVar29,
                   pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
    local_3c0 = (undefined **)FUN_7103238c50((ulong)ppppppppplVar32,0xf);
    if (((ulong)local_3c0 & 0xffffffffff) != 0) {
      lVar47 = *plVar23;
      pppppppplVar33 = (long ********)(ulong)*(uint *)(lVar47 + 0x68);
      FUN_710323c4e0(lVar47,(ulong *)&local_3c0,(long *********)(long)*(int *)(lVar47 + 0x70),
                     (byte ****)pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
    }
    ppppppppplVar29 = (long *********)&DAT_0000000f;
    plVar20 = FUN_710323f4a0(plVar23,(ulong)ppppppppplVar32,(long ****)&DAT_0000000f,
                             (byte ****)pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = uStack_258;
    FUN_7103778b80((long)uStack_258,(long)plVar20,ppppppppplVar29,(byte ****)pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    FUN_7103776910(&local_3c0,(long)&local_330,(long ****)"set_rep_stage_battle",ppppppppplVar29,
                   pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
    local_2b8 = (undefined **)FUN_7103238c50((ulong)ppppppppplVar32,0x10);
    if (((ulong)local_2b8 & 0xffffffffff) != 0) {
      lVar47 = *plVar23;
      pppppppplVar33 = (long ********)(ulong)*(uint *)(lVar47 + 0x68);
      FUN_710323c4e0(lVar47,(ulong *)&local_2b8,(long *********)(long)*(int *)(lVar47 + 0x70),
                     (byte ****)pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
    }
    ppppppppplVar29 = (long *********)&DAT_00000010;
    plVar20 = FUN_710323f4a0(plVar23,(ulong)ppppppppplVar32,(long ****)&DAT_00000010,
                             (byte ****)pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
    uVar18 = local_3b8[0];
    FUN_7103778b80(local_3b8[0],(long)plVar20,ppppppppplVar29,(byte ****)pppppppplVar33,pppplVar28,
                   puVar37,param_7,param_8);
    local_3c0 = &PTR_FUN_710523d9a8;
    local_3b8[0] = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
joined_r0x007101d9eda8:
    local_260._4_4_ = 0x71;
    local_260._0_4_ = 0x523d9a8;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      local_260._4_4_ = 0x71;
      local_260._0_4_ = 0x523d9a8;
      uStack_258 = (long *******)0x0;
      FUN_710392eb40((ulong)ppppppplVar16);
    }
  }
  else {
    if (iVar53 == 1) {
      FUN_7103778300(0x3f800000,uVar45,0x71044424dd);
      FUN_7103776910(&local_260,(long)&local_330,(long ****)"set_rep_stage_end",ppppppppplVar29,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      local_3c0 = (undefined **)FUN_7103238c50((ulong)ppppppppplVar32,0xf);
      if (((ulong)local_3c0 & 0xffffffffff) != 0) {
        lVar47 = *plVar23;
        pppppppplVar33 = (long ********)(ulong)*(uint *)(lVar47 + 0x68);
        FUN_710323c4e0(lVar47,(ulong *)&local_3c0,(long *********)(long)*(int *)(lVar47 + 0x70),
                       (byte ****)pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      }
      ppppppppplVar29 = (long *********)&DAT_0000000f;
LAB_7101d9ec90:
      plVar20 = FUN_710323f4a0(plVar23,(ulong)ppppppppplVar32,(long ****)ppppppppplVar29,
                               (byte ****)pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      ppppppplVar16 = uStack_258;
      FUN_7103778b80((long)uStack_258,(long)plVar20,ppppppppplVar29,(byte ****)pppppppplVar33,
                     pppplVar28,puVar37,param_7,param_8);
      goto joined_r0x007101d9eda8;
    }
    if (iVar53 == 0) {
      FUN_7103778300(0x3f800000,uVar45,0x7104348ed7);
      FUN_7103776910(&local_260,(long)&local_330,(long ****)"set_rep_stage_normal",ppppppppplVar29,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      local_3c0 = (undefined **)FUN_7103238c50((ulong)ppppppppplVar32,0xe);
      if (((ulong)local_3c0 & 0xffffffffff) != 0) {
        lVar47 = *plVar23;
        pppppppplVar33 = (long ********)(ulong)*(uint *)(lVar47 + 0x68);
        FUN_710323c4e0(lVar47,(ulong *)&local_3c0,(long *********)(long)*(int *)(lVar47 + 0x70),
                       (byte ****)pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      }
      ppppppppplVar29 = (long *********)&DAT_0000000e;
      goto LAB_7101d9ec90;
    }
  }
  FUN_7103776910(&local_260,(long)&local_330,(long ****)"set_txt_00",ppppppppplVar29,pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  FUN_710377a120((long)&local_260,(char *)&local_2a0,ppppppppplVar29,pppppppplVar33,pppplVar28,
                 puVar37,param_7,param_8);
  ppppppplVar16 = uStack_258;
  local_260 = &PTR_FUN_710523d9a8;
  uStack_258 = (long *******)0x0;
  if (ppppppplVar16 != (long *******)0x0) {
    FUN_710392eb40((ulong)ppppppplVar16);
  }
  local_378 = &PTR_FUN_710523d9a8;
  local_370 = (long ***)0x0;
  if (ppplVar6 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar6);
  }
  local_330._0_4_ = 0x523d988;
  local_330._4_4_ = 1.58347e-43;
  local_328 = 0.0;
  uStack_324 = 0;
  if (uVar45 != 0) {
    uVar18 = *(ulong *)(uVar45 + 0x18);
    *(undefined ***)(uVar45 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar45 + 0x18) = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40(uVar45);
  }
  FUN_7103776640(&local_2a8,lVar48,(byte ****)"set_parts_rule_00",ppppppppplVar29,pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  pppppppplVar51 = local_2a0;
  FUN_7103778300(0x3f800000,(long)local_2a0,0x710439d809);
  pcVar54 = *(char **)(param_2 + 0x158);
  if ((*(char **)(param_2 + 0x160) == pcVar54) || (*pcVar54 != '\x01')) {
    FUN_7103776640(&local_260,(long)&local_2a8,(byte ****)"set_parts_escort_%02d",0,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = uStack_258;
    if ((uStack_258[1] != (long ******)0x0) &&
       (ppppplVar42 = uStack_258[1][3], ppppplVar42 != (long *****)0x0)) {
      *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) & 0xfe;
    }
    local_260 = &PTR_FUN_710523d988;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      pppppplVar21 = ppppppplVar16[3];
      ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar16[3] = (long ******)0x0;
      if (pppppplVar21 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar21);
      }
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_7103776640(&local_260,(long)&local_2a8,(byte ****)"set_parts_escort_%02d",1,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = uStack_258;
    if ((uStack_258[1] != (long ******)0x0) &&
       (ppppplVar42 = uStack_258[1][3], ppppplVar42 != (long *****)0x0)) {
      *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) & 0xfe;
    }
    local_260 = &PTR_FUN_710523d988;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      pppppplVar21 = ppppppplVar16[3];
      ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar16[3] = (long ******)0x0;
      if (pppppplVar21 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar21);
      }
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_7103776640(&local_260,(long)&local_2a8,(byte ****)"set_parts_escort_%02d",2,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = uStack_258;
    if ((uStack_258[1] != (long ******)0x0) &&
       (ppppplVar42 = uStack_258[1][3], ppppplVar42 != (long *****)0x0)) {
      *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) & 0xfe;
    }
    local_260 = &PTR_FUN_710523d988;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      pppppplVar21 = ppppppplVar16[3];
      ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar16[3] = (long ******)0x0;
      if (pppppplVar21 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar21);
      }
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_7103776640(&local_260,(long)&local_2a8,(byte ****)"set_parts_escort_%02d",3,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = uStack_258;
    if ((uStack_258[1] != (long ******)0x0) &&
       (ppppplVar42 = uStack_258[1][3], ppppplVar42 != (long *****)0x0)) {
      *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) & 0xfe;
    }
    local_260 = &PTR_FUN_710523d988;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      pppppplVar21 = ppppppplVar16[3];
      ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar16[3] = (long ******)0x0;
      if (pppppplVar21 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar21);
      }
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_7103776640(&local_260,(long)&local_2a8,(byte ****)"set_parts_escort_%02d",4,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = uStack_258;
    if ((uStack_258[1] != (long ******)0x0) &&
       (ppppplVar42 = uStack_258[1][3], ppppplVar42 != (long *****)0x0)) {
      *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) & 0xfe;
    }
    local_260 = &PTR_FUN_710523d988;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      pppppplVar21 = ppppppplVar16[3];
      ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar16[3] = (long ******)0x0;
      if (pppppplVar21 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar21);
      }
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_7103776640(&local_260,(long)&local_2a8,(byte ****)"set_parts_escort_%02d",5,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = uStack_258;
    if ((uStack_258[1] != (long ******)0x0) &&
       (ppppplVar42 = uStack_258[1][3], ppppplVar42 != (long *****)0x0)) {
      *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) & 0xfe;
    }
    local_260 = &PTR_FUN_710523d988;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      pppppplVar21 = ppppppplVar16[3];
      ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar16[3] = (long ******)0x0;
      if (pppppplVar21 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar21);
      }
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_7103776640(&local_260,(long)&local_2a8,(byte ****)"set_parts_escort_%02d",6,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = uStack_258;
    if ((uStack_258[1] != (long ******)0x0) &&
       (ppppplVar42 = uStack_258[1][3], ppppplVar42 != (long *****)0x0)) {
      *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) & 0xfe;
    }
    local_260 = &PTR_FUN_710523d988;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      pppppplVar21 = ppppppplVar16[3];
      ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar16[3] = (long ******)0x0;
      if (pppppplVar21 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar21);
      }
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_7103776640(&local_260,(long)&local_2a8,(byte ****)"set_parts_escort_%02d",7,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = uStack_258;
    if ((uStack_258[1] != (long ******)0x0) &&
       (ppppplVar42 = uStack_258[1][3], ppppplVar42 != (long *****)0x0)) {
      *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) & 0xfe;
    }
    local_260 = &PTR_FUN_710523d988;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      pppppplVar21 = ppppppplVar16[3];
      ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar16[3] = (long ******)0x0;
      if (pppppplVar21 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar21);
      }
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_7103776640(&local_260,(long)&local_2a8,(byte ****)"set_parts_escort_%02d",8,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = uStack_258;
    if ((uStack_258[1] != (long ******)0x0) &&
       (ppppplVar42 = uStack_258[1][3], ppppplVar42 != (long *****)0x0)) {
      *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) & 0xfe;
    }
    local_260 = &PTR_FUN_710523d988;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      pppppplVar21 = ppppppplVar16[3];
      ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar16[3] = (long ******)0x0;
      if (pppppplVar21 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar21);
      }
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_7103776640(&local_260,(long)&local_2a8,(byte ****)"set_parts_escort_%02d",9,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = uStack_258;
    if ((uStack_258[1] != (long ******)0x0) &&
       (ppppplVar42 = uStack_258[1][3], ppppplVar42 != (long *****)0x0)) {
      *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) & 0xfe;
    }
    local_260 = &PTR_FUN_710523d988;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      pppppplVar21 = ppppppplVar16[3];
      ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar16[3] = (long ******)0x0;
      if (pppppplVar21 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar21);
      }
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    ppppppppplVar29 = (long *********)0xa;
    FUN_7103776640(&local_260,(long)&local_2a8,(byte ****)"set_parts_escort_%02d",10,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = uStack_258;
    if ((uStack_258[1] != (long ******)0x0) &&
       (ppppplVar42 = uStack_258[1][3], ppppplVar42 != (long *****)0x0)) {
      *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) & 0xfe;
    }
    local_260 = &PTR_FUN_710523d988;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      pppppplVar21 = ppppppplVar16[3];
      ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar16[3] = (long ******)0x0;
      if (pppppplVar21 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar21);
      }
      FUN_710392eb40((ulong)ppppppplVar16);
    }
  }
  else {
    lVar47 = *(long *)(DAT_710532f730 + 8);
    uVar30 = 0;
    FUN_7103776640(&local_330,(long)&local_2a8,(byte ****)"set_parts_escort_%02d",0,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = (long *******)CONCAT44(uStack_324,local_328);
    if ((ppppppplVar16[1] != (long ******)0x0) &&
       (ppppplVar42 = ppppppplVar16[1][3], ppppplVar42 != (long *****)0x0)) {
      *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) | 1;
    }
    FUN_7103776910(&local_260,(long)&local_330,(long ****)"set_txt_player",uVar30,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar38 = uStack_258;
    pppppplVar21 = *uStack_258;
    if (pppppplVar21 != (long ******)0x0) {
      *(byte *)(pppppplVar21 + 0xb) = *(byte *)(pppppplVar21 + 0xb) & 0xfe;
    }
    local_260 = &PTR_FUN_710523d9a8;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar38 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar38);
    }
    uVar45 = *(ulong *)(pcVar54 + 8);
    FUN_7103778300(0x3f800000,(long)ppppppplVar16,0x710425fa89);
    bVar44 = pcVar54[0x10];
    uVar15 = FUN_71032638e0(*(long *)(lVar47 + 0x168),uVar45);
    uVar14 = 0;
    if ((uVar15 & 1) == 0) {
      uVar14 = (uint)bVar44;
    }
    ppppppppplVar29 = (long *********)0x2;
    local_260 = (undefined **)FUN_7103238a70(uVar45,(ulong)uVar14,2);
    if (((ulong)local_260 & 0xffffffffff) != 0) {
      lVar55 = *plVar23;
      ppppppppplVar29 = (long *********)(long)*(int *)(lVar55 + 0x70);
      pppppppplVar33 = (long ********)(ulong)*(uint *)(lVar55 + 0x68);
      FUN_710323c4e0(lVar55,&local_260,ppppppppplVar29,(byte ****)pppppppplVar33,pppplVar28,puVar37,
                     param_7,param_8);
    }
    FUN_7103776910(&local_260,(long)&local_330,(long ****)"set_rep_fighter",ppppppppplVar29,
                   pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
    ppppbVar34 = (byte ****)0x2;
    ppppppppplVar29 = (long *********)(ulong)uVar14;
    plVar20 = FUN_710323f330(plVar23,uVar45,(ulong)ppppppppplVar29,2,pppplVar28,puVar37,param_7,
                             param_8);
    ppppppplVar38 = uStack_258;
    FUN_7103778b80((long)uStack_258,(long)plVar20,ppppppppplVar29,ppppbVar34,pppplVar28,puVar37,
                   param_7,param_8);
    local_260 = &PTR_FUN_710523d9a8;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar38 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar38);
    }
    uVar25 = (undefined1)(0x20301 >> (ulong)(((byte)pcVar54[0x12] - 1 & 3) << 3));
    if (2 < (byte)pcVar54[0x12] - 1) {
      uVar25 = 0;
    }
    FUN_7103776910(&local_260,(long)&local_330,(long ****)"set_txt_power",ppppppppplVar29,ppppbVar34
                   ,pppplVar28,puVar37,param_7,param_8);
    FUN_710377a280((long)&local_260,(byte *)"mnu_spirits_challengeboard_organize_power_n",1);
    ppppppplVar38 = uStack_258;
    local_260 = &PTR_FUN_710523d9a8;
    uStack_258 = (long *******)0x0;
    if (ppppppplVar38 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar38);
    }
    cVar2 = pcVar54[0x12];
    cVar3 = *(char *)(param_1 + 0x1c2);
    if (cVar2 == '\x03') {
      uVar14 = (uint)(cVar3 == '\x01');
      bVar11 = cVar3 == '\x02';
LAB_7101da069c:
      if (bVar11) {
        uVar14 = 0xffffffff;
      }
    }
    else {
      if (cVar2 == '\x02') {
        uVar14 = (uint)(cVar3 == '\x03');
        bVar11 = cVar3 == '\x01';
        goto LAB_7101da069c;
      }
      if (cVar2 == '\x01') {
        uVar14 = (uint)(cVar3 == '\x02');
        bVar11 = cVar3 == '\x03';
        goto LAB_7101da069c;
      }
      uVar14 = 0;
    }
    pppplVar36 = (long ****)(ulong)(byte)pcVar54[0x11];
    pppppppplVar33 = (long ********)(ulong)uVar14;
    pppplVar28 = (long ****)0x0;
    FUN_71025b12c0((long)&local_330,uVar25,(uint)(byte)pcVar54[0x11],pppppppplVar33,0,puVar37,
                   param_7,param_8);
    if (uVar14 != 0) {
      FUN_7103776290(&local_260,extraout_x1_04,pppplVar36,(byte ****)pppppppplVar33,pppplVar28,
                     puVar37,param_7,param_8);
      *uStack_258 = *ppppppplVar16;
      uStack_258[1] = ppppppplVar16[1];
      if (uStack_258 != ppppppplVar16) {
        *uStack_258[3] = *ppppppplVar16[3];
        uStack_258[3][1] = ppppppplVar16[3][1];
        uStack_258[3][2] = ppppppplVar16[3][2];
        uStack_258[3][3] = ppppppplVar16[3][3];
      }
      local_250._0_6_ = (uint6)(0 < (int)uVar14) << 0x20;
      local_250 = CONCAT44(local_250._4_4_,1);
      puVar17 = *(undefined8 **)(param_1 + 0x1e8);
      if (puVar17 == *(undefined8 **)(param_1 + 0x1f0)) {
        FUN_7101da1560((long *)(param_1 + 0x1e0),&local_260,pppplVar36,(byte ****)pppppppplVar33,
                       pppplVar28,puVar37,param_7,param_8);
      }
      else {
        FUN_7103776390(puVar17,&local_260,pppplVar36,(byte ****)pppppppplVar33,pppplVar28,puVar37,
                       param_7,param_8);
        *(undefined2 *)((long)puVar17 + 0x14) = local_250._4_2_;
        *(undefined4 *)(puVar17 + 2) = (undefined4)local_250;
        *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + 0x18;
      }
      ppppppplVar38 = uStack_258;
      local_260 = &PTR_FUN_710523d988;
      uStack_258 = (long *******)0x0;
      if (ppppppplVar38 != (long *******)0x0) {
        pppppplVar21 = ppppppplVar38[3];
        ppppppplVar38[2] = (long ******)&PTR_FUN_710523d9a8;
        ppppppplVar38[3] = (long ******)0x0;
        if (pppppplVar21 != (long ******)0x0) {
          FUN_710392eb40((ulong)pppppplVar21);
        }
        FUN_710392eb40((ulong)ppppppplVar38);
      }
    }
    lVar55 = 0;
    uVar45 = 1;
    do {
      ppppppppplVar29 = (long *********)(uVar45 & 0xffffffff);
      FUN_7103776640(&local_260,(long)&local_2a8,(byte ****)"set_parts_escort_%02d",ppppppppplVar29,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      uVar18 = (*(long *)(param_2 + 0x160) - *(long *)(param_2 + 0x158) >> 3) * -0x5555555555555555;
      if (uVar18 < uVar45 || uVar18 - uVar45 == 0) {
        ppppppplVar38 = uStack_258;
        if ((uStack_258[1] != (long ******)0x0) &&
           (ppppplVar42 = uStack_258[1][3], ppppplVar42 != (long *****)0x0)) {
          *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) & 0xfe;
        }
      }
      else {
        lVar40 = *(long *)(param_2 + 0x158) + lVar55;
        uVar18 = *(ulong *)(lVar40 + 0x20);
        bVar44 = *(byte *)(lVar40 + 0x28);
        uVar15 = FUN_71032638e0(*(long *)(lVar47 + 0x168),uVar18);
        ppppppplVar38 = uStack_258;
        uVar14 = 0;
        if ((uVar15 & 1) == 0) {
          uVar14 = (uint)bVar44;
        }
        if ((uStack_258[1] != (long ******)0x0) &&
           (ppppplVar42 = uStack_258[1][3], ppppplVar42 != (long *****)0x0)) {
          *(byte *)(ppppplVar42 + 0xb) = *(byte *)(ppppplVar42 + 0xb) | 1;
          uVar18 = *(ulong *)(lVar40 + 0x20);
        }
        ppppppppplVar29 = (long *********)0x2;
        local_378 = (undefined **)FUN_7103238a70(uVar18,(ulong)uVar14,2);
        if (((ulong)local_378 & 0xffffffffff) != 0) {
          lVar24 = *plVar23;
          ppppppppplVar29 = (long *********)(long)*(int *)(lVar24 + 0x70);
          pppppppplVar33 = (long ********)(ulong)*(uint *)(lVar24 + 0x68);
          FUN_710323c4e0(lVar24,&local_378,ppppppppplVar29,(byte ****)pppppppplVar33,pppplVar28,
                         puVar37,param_7,param_8);
        }
        FUN_7103776910(&local_378,(long)&local_260,(long ****)"set_rep_fighter",ppppppppplVar29,
                       pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
        pppppppplVar33 = (long ********)0x2;
        ppppppppplVar29 = (long *********)(ulong)uVar14;
        plVar20 = FUN_710323f330(plVar23,*(ulong *)(lVar40 + 0x20),(ulong)ppppppppplVar29,2,
                                 pppplVar28,puVar37,param_7,param_8);
        ppplVar6 = local_370;
        FUN_7103778b80((long)local_370,(long)plVar20,ppppppppplVar29,(byte ****)pppppppplVar33,
                       pppplVar28,puVar37,param_7,param_8);
        local_378 = &PTR_FUN_710523d9a8;
        local_370 = (long ***)0x0;
        if (ppplVar6 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar6);
        }
        FUN_7103778300(0x3f800000,(long)ppppppplVar38,0x71042b4792);
        if (*(byte *)(lVar40 + 0x29) < 2) {
          FUN_7103776910(&local_378,(long)&local_260,(long ****)"set_txt_num",ppppppppplVar29,
                         pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
          ppplVar6 = local_370;
          pplVar41 = *local_370;
          if (pplVar41 != (long **)0x0) {
            *(byte *)(pplVar41 + 0xb) = *(byte *)(pplVar41 + 0xb) & 0xfe;
          }
          local_378 = &PTR_FUN_710523d9a8;
          local_370 = (long ***)0x0;
          if (ppplVar6 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar6);
          }
        }
        else {
          FUN_7103776910(&local_378,(long)&local_260,(long ****)"set_txt_num",ppppppppplVar29,
                         pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
          ppplVar6 = local_370;
          pplVar41 = *local_370;
          if (pplVar41 != (long **)0x0) {
            *(byte *)(pplVar41 + 0xb) = *(byte *)(pplVar41 + 0xb) | 1;
          }
          local_378 = &PTR_FUN_710523d9a8;
          local_370 = (long ***)0x0;
          if (ppplVar6 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar6);
          }
          FUN_7103776910(&local_378,(long)&local_260,(long ****)"set_txt_num",ppppppppplVar29,
                         pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
          pppppppplVar33 = (long ********)(ulong)*(byte *)(lVar40 + 0x29);
          ppppppppplVar29 = (long *********)0x1;
          FUN_710377a280((long)&local_378,(byte *)"mnu_spirits_challengeboard_match_enemy_n",1);
          ppplVar6 = local_370;
          local_378 = &PTR_FUN_710523d9a8;
          local_370 = (long ***)0x0;
          if (ppplVar6 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar6);
          }
        }
      }
      uStack_258 = (long *******)0x0;
      local_260 = &PTR_FUN_710523d988;
      if (ppppppplVar38 != (long *******)0x0) {
        uStack_258 = (long *******)0x0;
        local_260 = &PTR_FUN_710523d988;
        pppppplVar21 = ppppppplVar38[3];
        ppppppplVar38[2] = (long ******)&PTR_FUN_710523d9a8;
        ppppppplVar38[3] = (long ******)0x0;
        if (pppppplVar21 != (long ******)0x0) {
          FUN_710392eb40((ulong)pppppplVar21);
        }
        FUN_710392eb40((ulong)ppppppplVar38);
      }
      lVar55 = lVar55 + 0x18;
      uVar45 = uVar45 + 1;
    } while (lVar55 != 0xf0);
    local_330._0_4_ = 0x523d988;
    local_330._4_4_ = 1.58347e-43;
    local_328 = 0.0;
    uStack_324 = 0;
    if (ppppppplVar16 != (long *******)0x0) {
      pppppplVar21 = ppppppplVar16[3];
      ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar16[3] = (long ******)0x0;
      if (pppppplVar21 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar21);
      }
      FUN_710392eb40((ulong)ppppppplVar16);
    }
  }
  local_2a0 = (long ********)0x0;
  local_2a8 = (long ********)&PTR_FUN_710523d988;
  if (pppppppplVar51 != (long ********)0x0) {
    local_2a0 = (long ********)0x0;
    local_2a8 = (long ********)&PTR_FUN_710523d988;
    ppppppplVar16 = pppppppplVar51[3];
    pppppppplVar51[2] = (long *******)&PTR_FUN_710523d9a8;
    pppppppplVar51[3] = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_710392eb40((ulong)pppppppplVar51);
  }
  if ((((*(char *)(param_2 + 0xb8) != '\0') || (bVar10 || bVar12)) ||
      (lVar47 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),
      (uint)((int)((ulong)(*(long *)(lVar47 + 0x28) - *(long *)(lVar47 + 0x20)) >> 6) * -0x33333333)
      <= (uint)*(ushort *)(lVar47 + (((long)ppppppppplVar31 << 0x30) >> 0x2f) + 0x60))) ||
     ((*(byte *)(*(long *)(*DAT_7105329f98 + 0x30) + (long)(short)param_3 * 0x24 + 1) & 1) == 0)) {
    FUN_7103776640(&local_260,lVar48,(byte ****)"set_parts_clear",ppppppppplVar29,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    puVar27 = &DAT_7104348100;
  }
  else {
    FUN_7103776640(&local_260,lVar48,(byte ****)"set_parts_clear",ppppppppplVar29,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    puVar27 = &DAT_710438b28f;
  }
  ppppppplVar16 = uStack_258;
  FUN_7103778300(0x3f800000,(long)uStack_258,(long)puVar27);
  local_260 = &PTR_FUN_710523d988;
  uStack_258 = (long *******)0x0;
  if (ppppppplVar16 != (long *******)0x0) {
    pppppplVar21 = ppppppplVar16[3];
    ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
    ppppppplVar16[3] = (long ******)0x0;
    if (pppppplVar21 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar21);
    }
    FUN_710392eb40((ulong)ppppppplVar16);
  }
  uStack_258 = (long *******)((ulong)uStack_258 & 0xffffffffffffff00);
  local_260 = (undefined **)0x0;
  local_210[0] = '\0';
  local_218 = 0;
  uStack_214 = 0;
  local_1d0 = 0;
  local_1c8 = 0x71ffff0000000000;
  local_1b8[0] = '\0';
  local_1c0 = 0;
  local_170[0] = '\0';
  local_178 = 0;
  local_130 = 0;
  local_128 = 0x71ffff0000000000;
  local_118[0] = '\0';
  local_120 = 0;
  local_d0[0] = '\0';
  local_d8 = 0;
  local_90 = 0;
  local_88 = 0x71ffff0000000000;
  if (param_4 == (byte ****)0x0) {
    ppppppppplVar31 = (long *********)0x0;
  }
  else {
    local_2a8 = (long ********)CONCAT62(local_2a8._2_6_,0xffff);
    local_2a0 = (long ********)0x52ffff0000000000;
    local_2a8 = (long ********)((ulong)local_2a8 & 0xffffffff);
    local_298 = (undefined **)CONCAT26(local_298._6_2_,0xffffffffffff);
    FUN_71025cae70((undefined2 *)&local_2a8,(long)param_4);
    ppppppppplVar31 = &local_2a8;
  }
  FUN_71025b1bc0((long)&local_260,param_2,(long ****)ppppppppplVar31,(byte ****)pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  if ((uint *)(param_1 + 0x200) != (uint *)&local_260) {
    for (uVar45 = 0; *(char *)((long)&uStack_258 + uVar45) != '\0'; uVar45 = uVar45 + 2) {
      *(char *)(param_1 + uVar45 + 0x208) = *(char *)((long)&uStack_258 + uVar45);
      if (0x3e < (int)uVar45 + 1U) {
        uVar45 = (ulong)((int)uVar45 + 1);
        break;
      }
      cVar2 = *(char *)((long)&uStack_258 + uVar45 + 1);
      if (cVar2 == '\0') {
        uVar45 = uVar45 + 1;
        break;
      }
      *(char *)(param_1 + uVar45 + 0x209) = cVar2;
    }
    *(undefined1 *)(param_1 + 0x208 + (uVar45 & 0xffffffff)) = 0;
    *(int *)(param_1 + 0x204) = (int)uVar45;
    uVar15 = (uint)*(byte *)(param_1 + 0x208);
    uVar14 = uVar13;
    if (*(byte *)(param_1 + 0x208) != 0) {
      pbVar43 = (byte *)(param_1 + 0x209);
      do {
        uVar14 = uVar14 * 0x89 ^ uVar15;
        uVar15 = (uint)*pbVar43;
        pbVar43 = pbVar43 + 1;
      } while (uVar15 != 0);
    }
    *(uint *)(param_1 + 0x200) = uVar14;
    for (uVar45 = 0; local_210[uVar45] != '\0'; uVar45 = uVar45 + 2) {
      *(char *)(param_1 + uVar45 + 0x250) = local_210[uVar45];
      if (0x3e < (int)uVar45 + 1U) {
        uVar45 = (ulong)((int)uVar45 + 1);
        break;
      }
      if (local_210[uVar45 + 1] == '\0') {
        uVar45 = uVar45 + 1;
        break;
      }
      *(char *)(param_1 + uVar45 + 0x251) = local_210[uVar45 + 1];
    }
    *(undefined1 *)(param_1 + 0x250 + (uVar45 & 0xffffffff)) = 0;
    uVar15 = (uint)*(byte *)(param_1 + 0x250);
    *(int *)(param_1 + 0x24c) = (int)uVar45;
    uVar14 = uVar13;
    if (*(byte *)(param_1 + 0x250) != 0) {
      pbVar43 = (byte *)(param_1 + 0x251);
      do {
        uVar14 = uVar14 * 0x89 ^ uVar15;
        uVar15 = (uint)*pbVar43;
        pbVar43 = pbVar43 + 1;
      } while (uVar15 != 0);
    }
    *(uint *)(param_1 + 0x248) = uVar14;
    *(undefined8 *)(param_1 + 0x298) = local_1c8;
    *(ulong *)(param_1 + 0x290) = CONCAT62(uStack_1ce,local_1d0);
    for (uVar45 = 0; local_1b8[uVar45] != '\0'; uVar45 = uVar45 + 2) {
      *(char *)(param_1 + uVar45 + 0x2a8) = local_1b8[uVar45];
      if (0x3e < (int)uVar45 + 1U) {
        uVar45 = (ulong)((int)uVar45 + 1);
        break;
      }
      if (local_1b8[uVar45 + 1] == '\0') {
        uVar45 = uVar45 + 1;
        break;
      }
      *(char *)(param_1 + uVar45 + 0x2a9) = local_1b8[uVar45 + 1];
    }
    *(undefined1 *)(param_1 + 0x2a8 + (uVar45 & 0xffffffff)) = 0;
    uVar15 = (uint)*(byte *)(param_1 + 0x2a8);
    *(int *)(param_1 + 0x2a4) = (int)uVar45;
    uVar14 = uVar13;
    if (*(byte *)(param_1 + 0x2a8) != 0) {
      pbVar43 = (byte *)(param_1 + 0x2a9);
      do {
        uVar14 = uVar14 * 0x89 ^ uVar15;
        uVar15 = (uint)*pbVar43;
        pbVar43 = pbVar43 + 1;
      } while (uVar15 != 0);
    }
    *(uint *)(param_1 + 0x2a0) = uVar14;
    for (uVar45 = 0; local_170[uVar45] != '\0'; uVar45 = uVar45 + 2) {
      *(char *)(param_1 + uVar45 + 0x2f0) = local_170[uVar45];
      if (0x3e < (int)uVar45 + 1U) {
        uVar45 = (ulong)((int)uVar45 + 1);
        break;
      }
      if (local_170[uVar45 + 1] == '\0') {
        uVar45 = uVar45 + 1;
        break;
      }
      *(char *)(param_1 + uVar45 + 0x2f1) = local_170[uVar45 + 1];
    }
    *(undefined1 *)(param_1 + 0x2f0 + (uVar45 & 0xffffffff)) = 0;
    *(int *)(param_1 + 0x2ec) = (int)uVar45;
    uVar15 = (uint)*(byte *)(param_1 + 0x2f0);
    uVar14 = uVar13;
    if (*(byte *)(param_1 + 0x2f0) != 0) {
      pbVar43 = (byte *)(param_1 + 0x2f1);
      do {
        uVar14 = uVar14 * 0x89 ^ uVar15;
        uVar15 = (uint)*pbVar43;
        pbVar43 = pbVar43 + 1;
      } while (uVar15 != 0);
    }
    *(uint *)(param_1 + 0x2e8) = uVar14;
    *(undefined8 *)(param_1 + 0x338) = local_128;
    *(ulong *)(param_1 + 0x330) = CONCAT62(uStack_12e,local_130);
    for (uVar45 = 0; local_118[uVar45] != '\0'; uVar45 = uVar45 + 2) {
      *(char *)(param_1 + uVar45 + 0x348) = local_118[uVar45];
      if (0x3e < (int)uVar45 + 1U) {
        uVar45 = (ulong)((int)uVar45 + 1);
        break;
      }
      if (local_118[uVar45 + 1] == '\0') {
        uVar45 = uVar45 + 1;
        break;
      }
      *(char *)(param_1 + uVar45 + 0x349) = local_118[uVar45 + 1];
    }
    *(undefined1 *)(param_1 + 0x348 + (uVar45 & 0xffffffff)) = 0;
    uVar15 = (uint)*(byte *)(param_1 + 0x348);
    *(int *)(param_1 + 0x344) = (int)uVar45;
    uVar14 = uVar13;
    if (*(byte *)(param_1 + 0x348) != 0) {
      pbVar43 = (byte *)(param_1 + 0x349);
      do {
        uVar14 = uVar14 * 0x89 ^ uVar15;
        uVar15 = (uint)*pbVar43;
        pbVar43 = pbVar43 + 1;
      } while (uVar15 != 0);
    }
    *(uint *)(param_1 + 0x340) = uVar14;
    for (uVar45 = 0; local_d0[uVar45] != '\0'; uVar45 = uVar45 + 2) {
      *(char *)(param_1 + uVar45 + 0x390) = local_d0[uVar45];
      if (0x3e < (int)uVar45 + 1U) {
        uVar45 = (ulong)((int)uVar45 + 1);
        break;
      }
      if (local_d0[uVar45 + 1] == '\0') {
        uVar45 = uVar45 + 1;
        break;
      }
      *(char *)(param_1 + uVar45 + 0x391) = local_d0[uVar45 + 1];
    }
    *(undefined1 *)(param_1 + 0x390 + (uVar45 & 0xffffffff)) = 0;
    uVar14 = (uint)*(byte *)(param_1 + 0x390);
    *(int *)(param_1 + 0x38c) = (int)uVar45;
    if (*(byte *)(param_1 + 0x390) != 0) {
      pbVar43 = (byte *)(param_1 + 0x391);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar43;
        pbVar43 = pbVar43 + 1;
      } while (uVar14 != 0);
    }
    *(uint *)(param_1 + 0x388) = uVar13;
    *(undefined8 *)(param_1 + 0x3d8) = local_88;
    *(ulong *)(param_1 + 0x3d0) = CONCAT62(uStack_8e,local_90);
  }
  FUN_7103776290(&local_2a8,extraout_x1_01,(long ****)ppppppppplVar31,(byte ****)pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  FUN_7103776290(&local_298,extraout_x1_02,(long ****)ppppppppplVar31,(byte ****)pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  FUN_7103776290(&local_288,extraout_x1_03,(long ****)ppppppppplVar31,(byte ****)pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  FUN_7103776640(&local_330,lVar48,(byte ****)"set_parts_rule_01",ppppppppplVar31,pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  pppppppplVar59 = local_2a0;
  pppppppplVar51 = (long ********)CONCAT44(uStack_324,local_328);
  local_328 = 0.0;
  uStack_324 = 0;
  pppppppplVar9 = pppppppplVar51;
  if (local_2a0 != (long ********)0x0) {
    ppppppplVar16 = local_2a0[3];
    local_2a0[2] = (long *******)&PTR_FUN_710523d9a8;
    local_2a0[3] = (long *******)0x0;
    local_2a0 = pppppppplVar51;
    if (ppppppplVar16 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_710392eb40((ulong)pppppppplVar59);
    pppppppplVar9 = local_2a0;
  }
  local_2a0 = pppppppplVar9;
  local_330._0_4_ = 0x523d988;
  local_330._4_4_ = 1.58347e-43;
  local_328 = 0.0;
  uStack_324 = 0;
  FUN_7103776640(&local_330,lVar48,(byte ****)"set_parts_rule_02",ppppppppplVar31,pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  uVar18 = local_290;
  uVar45 = CONCAT44(uStack_324,local_328);
  local_328 = 0.0;
  uStack_324 = 0;
  uVar46 = uVar45;
  if (local_290 != 0) {
    uVar46 = *(ulong *)(local_290 + 0x18);
    *(undefined ***)(local_290 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(local_290 + 0x18) = 0;
    local_290 = uVar45;
    if (uVar46 != 0) {
      FUN_710392eb40(uVar46);
    }
    FUN_710392eb40(uVar18);
    uVar46 = local_290;
  }
  local_290 = uVar46;
  local_330._0_4_ = 0x523d988;
  local_330._4_4_ = 1.58347e-43;
  local_328 = 0.0;
  uStack_324 = 0;
  FUN_7103776640(&local_330,lVar48,(byte ****)"set_parts_rule_03",ppppppppplVar31,pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  uVar46 = local_280;
  uVar18 = CONCAT44(uStack_324,local_328);
  local_328 = 0.0;
  uStack_324 = 0;
  uVar22 = uVar18;
  if (local_280 != 0) {
    uVar22 = *(ulong *)(local_280 + 0x18);
    *(undefined ***)(local_280 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(local_280 + 0x18) = 0;
    local_280 = uVar18;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40(uVar46);
    uVar22 = local_280;
  }
  local_280 = uVar22;
  local_330._0_4_ = 0x523d988;
  local_330._4_4_ = 1.58347e-43;
  local_328 = 0.0;
  uStack_324 = 0;
  if (*(int *)(param_1 + 0x204) == 0) {
    pppppppplVar51 = local_2a0;
    if ((local_2a0[1] != (long *******)0x0) &&
       (pppppplVar21 = local_2a0[1][3], pppppplVar21 != (long ******)0x0)) {
      *(byte *)(pppppplVar21 + 0xb) = *(byte *)(pppppplVar21 + 0xb) & 0xfe;
    }
  }
  else {
    if ((pppppppplVar51[1] != (long *******)0x0) &&
       (pppppplVar21 = pppppppplVar51[1][3], pppppplVar21 != (long ******)0x0)) {
      *(byte *)(pppppplVar21 + 0xb) = *(byte *)(pppppplVar21 + 0xb) | 1;
    }
    if (*(char *)(param_1 + 0x290) == '\0') {
      FUN_7103778300(0x3f800000,(long)pppppppplVar51,0x71043adc00);
      if (*(int *)(param_1 + 0x24c) != 0) goto LAB_7101d9faac;
LAB_7101d9fb18:
      FUN_7103776910(&local_330,(long)&local_2a8,(long ****)"set_txt_00",ppppppppplVar31,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      FUN_710377a120((long)&local_330,(char *)(param_1 + 0x208),ppppppppplVar31,pppppppplVar33,
                     pppplVar28,puVar37,param_7,param_8);
    }
    else {
      FUN_7103778300(0x3f800000,(long)pppppppplVar51,0x710435bc1d);
      FUN_7103778300(0x3f800000,(long)pppppppplVar51,0x71043f0d57);
      FUN_7103776910(&local_330,(long)&local_2a8,(long ****)"set_rep_gimmick",ppppppppplVar31,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      local_378 = (undefined **)FUN_7103238e70(*(ulong *)(param_1 + 0x298),0x13);
      if (((ulong)local_378 & 0xffffffffff) != 0) {
        lVar47 = *plVar23;
        ppppppppplVar31 = (long *********)(long)*(int *)(lVar47 + 0x70);
        pppppppplVar33 = (long ********)(ulong)*(uint *)(lVar47 + 0x68);
        FUN_710323c4e0(lVar47,&local_378,ppppppppplVar31,(byte ****)pppppppplVar33,pppplVar28,
                       puVar37,param_7,param_8);
      }
      plVar20 = FUN_710323f760(plVar23,*(ulong *)(param_1 + 0x298),(long ****)ppppppppplVar31,
                               (byte ****)pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      uVar46 = CONCAT44(uStack_324,local_328);
      FUN_7103778b80(uVar46,(long)plVar20,ppppppppplVar31,(byte ****)pppppppplVar33,pppplVar28,
                     puVar37,param_7,param_8);
      local_330._0_4_ = 0x523d9a8;
      local_330._4_4_ = 1.58347e-43;
      local_328 = 0.0;
      uStack_324 = 0;
      if (uVar46 != 0) {
        FUN_710392eb40(uVar46);
      }
      if (*(int *)(param_1 + 0x24c) == 0) goto LAB_7101d9fb18;
LAB_7101d9faac:
      FUN_7103776910(&local_330,(long)&local_2a8,(long ****)"set_txt_00",ppppppppplVar31,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      pppppppplVar33 = (long ********)(param_1 + 0x250);
      ppppppppplVar31 = (long *********)0x1;
      FUN_710377a280((long)&local_330,(byte *)(param_1 + 0x208),1);
    }
    uVar46 = CONCAT44(uStack_324,local_328);
    local_330._0_4_ = 0x523d9a8;
    local_330._4_4_ = 1.58347e-43;
    local_328 = 0.0;
    uStack_324 = 0;
    if (uVar46 != 0) {
      FUN_710392eb40(uVar46);
    }
  }
  lVar47 = *(long *)(uVar45 + 8);
  if (*(int *)(param_1 + 0x2a4) == 0) {
    if ((lVar47 != 0) && (lVar47 = *(long *)(lVar47 + 0x18), lVar47 != 0)) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) & 0xfe;
    }
  }
  else {
    if ((lVar47 != 0) && (lVar47 = *(long *)(lVar47 + 0x18), lVar47 != 0)) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) | 1;
    }
    if (*(char *)(param_1 + 0x330) == '\0') {
      FUN_7103778300(0x3f800000,uVar45,0x71043adc00);
      if (*(int *)(param_1 + 0x2ec) != 0) goto LAB_7101d9fc24;
LAB_7101d9fc88:
      FUN_7103776910(&local_330,(long)&local_298,(long ****)"set_txt_00",ppppppppplVar31,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      FUN_710377a120((long)&local_330,(char *)(param_1 + 0x2a8),ppppppppplVar31,pppppppplVar33,
                     pppplVar28,puVar37,param_7,param_8);
    }
    else {
      FUN_7103778300(0x3f800000,uVar45,0x710435bc1d);
      FUN_7103778300(0x3f800000,uVar45,0x71043f0d57);
      FUN_7103776910(&local_330,(long)&local_298,(long ****)"set_rep_gimmick",ppppppppplVar31,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      local_378 = (undefined **)FUN_7103238e70(*(ulong *)(param_1 + 0x338),0x13);
      if (((ulong)local_378 & 0xffffffffff) != 0) {
        lVar47 = *plVar23;
        ppppppppplVar31 = (long *********)(long)*(int *)(lVar47 + 0x70);
        pppppppplVar33 = (long ********)(ulong)*(uint *)(lVar47 + 0x68);
        FUN_710323c4e0(lVar47,&local_378,ppppppppplVar31,(byte ****)pppppppplVar33,pppplVar28,
                       puVar37,param_7,param_8);
      }
      plVar20 = FUN_710323f760(plVar23,*(ulong *)(param_1 + 0x338),(long ****)ppppppppplVar31,
                               (byte ****)pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      uVar46 = CONCAT44(uStack_324,local_328);
      FUN_7103778b80(uVar46,(long)plVar20,ppppppppplVar31,(byte ****)pppppppplVar33,pppplVar28,
                     puVar37,param_7,param_8);
      local_330._0_4_ = 0x523d9a8;
      local_330._4_4_ = 1.58347e-43;
      local_328 = 0.0;
      uStack_324 = 0;
      if (uVar46 != 0) {
        FUN_710392eb40(uVar46);
      }
      if (*(int *)(param_1 + 0x2ec) == 0) goto LAB_7101d9fc88;
LAB_7101d9fc24:
      FUN_7103776910(&local_330,(long)&local_298,(long ****)"set_txt_00",ppppppppplVar31,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      pppppppplVar33 = (long ********)(param_1 + 0x2f0);
      ppppppppplVar31 = (long *********)0x1;
      FUN_710377a280((long)&local_330,(byte *)(param_1 + 0x2a8),1);
    }
    uVar46 = CONCAT44(uStack_324,local_328);
    local_330._0_4_ = 0x523d9a8;
    local_330._4_4_ = 1.58347e-43;
    local_328 = 0.0;
    uStack_324 = 0;
    if (uVar46 != 0) {
      FUN_710392eb40(uVar46);
    }
  }
  lVar47 = *(long *)(uVar18 + 8);
  if (*(int *)(param_1 + 0x344) == 0) {
    if ((lVar47 != 0) && (lVar47 = *(long *)(lVar47 + 0x18), lVar47 != 0)) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) & 0xfe;
    }
  }
  else {
    if ((lVar47 != 0) && (lVar47 = *(long *)(lVar47 + 0x18), lVar47 != 0)) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) | 1;
    }
    if (*(char *)(param_1 + 0x3d0) == '\0') {
      FUN_7103778300(0x3f800000,uVar18,0x71043adc00);
    }
    else {
      FUN_7103778300(0x3f800000,uVar18,0x710435bc1d);
      FUN_7103778300(0x3f800000,uVar18,0x71043f0d57);
      FUN_7103776910(&local_330,(long)&local_288,(long ****)"set_rep_gimmick",ppppppppplVar31,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      local_378 = (undefined **)FUN_7103238e70(*(ulong *)(param_1 + 0x3d8),0x13);
      if (((ulong)local_378 & 0xffffffffff) != 0) {
        lVar47 = *plVar23;
        ppppppppplVar31 = (long *********)(long)*(int *)(lVar47 + 0x70);
        pppppppplVar33 = (long ********)(ulong)*(uint *)(lVar47 + 0x68);
        FUN_710323c4e0(lVar47,&local_378,ppppppppplVar31,(byte ****)pppppppplVar33,pppplVar28,
                       puVar37,param_7,param_8);
      }
      plVar20 = FUN_710323f760(plVar23,*(ulong *)(param_1 + 0x3d8),(long ****)ppppppppplVar31,
                               (byte ****)pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      uVar46 = CONCAT44(uStack_324,local_328);
      FUN_7103778b80(uVar46,(long)plVar20,ppppppppplVar31,(byte ****)pppppppplVar33,pppplVar28,
                     puVar37,param_7,param_8);
      local_330._0_4_ = 0x523d9a8;
      local_330._4_4_ = 1.58347e-43;
      local_328 = 0.0;
      uStack_324 = 0;
      if (uVar46 != 0) {
        FUN_710392eb40(uVar46);
      }
    }
    if (*(int *)(param_1 + 0x38c) == 0) {
      FUN_7103776910(&local_330,(long)&local_288,(long ****)"set_txt_00",ppppppppplVar31,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      FUN_710377a120((long)&local_330,(char *)(param_1 + 0x348),ppppppppplVar31,pppppppplVar33,
                     pppplVar28,puVar37,param_7,param_8);
    }
    else {
      FUN_7103776910(&local_330,(long)&local_288,(long ****)"set_txt_00",ppppppppplVar31,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      pppppppplVar33 = (long ********)(param_1 + 0x390);
      ppppppppplVar31 = (long *********)0x1;
      FUN_710377a280((long)&local_330,(byte *)(param_1 + 0x348),1);
    }
    uVar46 = CONCAT44(uStack_324,local_328);
    local_330._0_4_ = 0x523d9a8;
    local_330._4_4_ = 1.58347e-43;
    local_328 = 0.0;
    uStack_324 = 0;
    if (uVar46 != 0) {
      FUN_710392eb40(uVar46);
    }
  }
  FUN_7103776640(&local_330,lVar48,(byte ****)"set_parts_rule_04",ppppppppplVar31,pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  uVar46 = CONCAT44(uStack_324,local_328);
  if ((*(long *)(uVar46 + 8) != 0) &&
     (lVar47 = *(long *)(*(long *)(uVar46 + 8) + 0x18), lVar47 != 0)) {
    *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) & 0xfe;
  }
  local_330._0_4_ = 0x523d988;
  local_330._4_4_ = 1.58347e-43;
  local_328 = 0.0;
  uStack_324 = 0;
  if (uVar46 != 0) {
    uVar22 = *(ulong *)(uVar46 + 0x18);
    *(undefined ***)(uVar46 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar46 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40(uVar46);
  }
  local_288 = &PTR_FUN_710523d988;
  local_280 = 0;
  if (uVar18 == 0) {
LAB_7101d9fee4:
    local_290 = 0;
    local_298 = &PTR_FUN_710523d988;
    uVar18 = *(ulong *)(uVar45 + 0x18);
    *(undefined ***)(uVar45 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar45 + 0x18) = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40(uVar45);
  }
  else {
    uVar45 = *(ulong *)(uVar18 + 0x18);
    *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar18 + 0x18) = 0;
    if (uVar45 != 0) {
      FUN_710392eb40(uVar45);
    }
    FUN_710392eb40(uVar18);
    uVar45 = local_290;
    local_298 = &PTR_FUN_710523d988;
    local_290 = 0;
    if (uVar45 != 0) goto LAB_7101d9fee4;
  }
  if (pppppppplVar51 != (long ********)0x0) {
    local_2a0 = (long ********)0x0;
    local_2a8 = (long ********)&PTR_FUN_710523d988;
    ppppppplVar16 = pppppppplVar51[3];
    pppppppplVar51[2] = (long *******)&PTR_FUN_710523d9a8;
    pppppppplVar51[3] = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_710392eb40((ulong)pppppppplVar51);
  }
  local_2a8 = (long ********)0x0;
  local_2a0 = (long ********)0x0;
  local_298 = (undefined **)0x0;
  FUN_71025b39a0((ulong *)&local_2a8,param_2,(long ****)ppppppppplVar31,(byte ****)pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  uVar14 = (int)((ulong)((long)local_2a0 - (long)local_2a8) >> 2) * -0x6eb3e453;
  uVar13 = 3;
  if (uVar14 < 3) {
    uVar13 = uVar14 & 0xff;
  }
  FUN_71003a4ca0((uint *)&local_260,"hint_%02d",(ulong)uVar13,ppppppppplVar31,pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x168),(long)&uStack_258);
  uVar30 = 0;
  FUN_7103776910(&local_330,lVar48,(long ****)"set_txt_hint_%02d",0,pppppppplVar33,pppplVar28,
                 puVar37,param_7,param_8);
  uVar8 = uStack_324;
  fVar7 = local_328;
  if (uVar13 == 0) {
    lVar47 = *(long *)CONCAT44(uStack_324,local_328);
    if (lVar47 != 0) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) & 0xfe;
    }
  }
  else {
    if (local_2a0 == local_2a8) goto LAB_7101da1540;
    lVar47 = *(long *)CONCAT44(uStack_324,local_328);
    if (lVar47 != 0) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) | 1;
    }
    if (*(int *)((long)local_2a8 + 0x4c) < 1) {
      FUN_710377a120((long)&local_330,(char *)(local_2a8 + 1),uVar30,pppppppplVar33,pppplVar28,
                     puVar37,param_7,param_8);
    }
    else {
      pppppppplVar33 = local_2a8 + 1;
      FUN_710377a280((long)&local_330,(byte *)(local_2a8 + 10),1);
    }
  }
  uStack_324 = 0;
  local_328 = 0.0;
  local_330._4_4_ = 1.58347e-43;
  local_330._0_4_ = 0x523d9a8;
  if (CONCAT44(uVar8,fVar7) != 0) {
    uStack_324 = 0;
    local_328 = 0.0;
    local_330._4_4_ = 1.58347e-43;
    local_330._0_4_ = 0x523d9a8;
    FUN_710392eb40(CONCAT44(uVar8,fVar7));
  }
  uVar30 = 1;
  FUN_7103776910(&local_330,lVar48,(long ****)"set_txt_hint_%02d",1,pppppppplVar33,pppplVar28,
                 puVar37,param_7,param_8);
  uVar8 = uStack_324;
  fVar7 = local_328;
  if (uVar13 < 2) {
    lVar47 = *(long *)CONCAT44(uStack_324,local_328);
    if (lVar47 != 0) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) & 0xfe;
    }
  }
  else {
    if ((ulong)(((long)local_2a0 - (long)local_2a8 >> 2) * 0x14c1bacf914c1bad) < 2)
    goto LAB_7101da1540;
    lVar47 = *(long *)CONCAT44(uStack_324,local_328);
    if (lVar47 != 0) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) | 1;
    }
    if (*(int *)(local_2a8 + 0x1c) < 1) {
      FUN_710377a120((long)&local_330,(char *)((long)local_2a8 + 0x9c),uVar30,pppppppplVar33,
                     pppplVar28,puVar37,param_7,param_8);
    }
    else {
      pppppppplVar33 = (long ********)((long)local_2a8 + 0x9c);
      FUN_710377a280((long)&local_330,(byte *)((long)local_2a8 + 0xe4),1);
    }
  }
  uStack_324 = 0;
  local_328 = 0.0;
  local_330._4_4_ = 1.58347e-43;
  local_330._0_4_ = 0x523d9a8;
  if (CONCAT44(uVar8,fVar7) != 0) {
    uStack_324 = 0;
    local_328 = 0.0;
    local_330._4_4_ = 1.58347e-43;
    local_330._0_4_ = 0x523d9a8;
    FUN_710392eb40(CONCAT44(uVar8,fVar7));
  }
  uVar30 = 2;
  FUN_7103776910(&local_330,lVar48,(long ****)"set_txt_hint_%02d",2,pppppppplVar33,pppplVar28,
                 puVar37,param_7,param_8);
  uVar8 = uStack_324;
  fVar7 = local_328;
  if (uVar13 < 3) {
    lVar47 = *(long *)CONCAT44(uStack_324,local_328);
    if (lVar47 != 0) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) & 0xfe;
    }
  }
  else {
    if ((ulong)(((long)local_2a0 - (long)local_2a8 >> 2) * 0x14c1bacf914c1bad) < 3) {
LAB_7101da1540:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar47 = *(long *)CONCAT44(uStack_324,local_328);
    if (lVar47 != 0) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) | 1;
    }
    if (*(int *)((long)local_2a8 + 0x174) < 1) {
      FUN_710377a120((long)&local_330,(char *)(local_2a8 + 0x26),uVar30,pppppppplVar33,pppplVar28,
                     puVar37,param_7,param_8);
    }
    else {
      pppppppplVar33 = local_2a8 + 0x26;
      uVar30 = 1;
      FUN_710377a280((long)&local_330,(byte *)(local_2a8 + 0x2f),1);
    }
  }
  uStack_324 = 0;
  local_328 = 0.0;
  local_330._4_4_ = 1.58347e-43;
  local_330._0_4_ = 0x523d9a8;
  if (CONCAT44(uVar8,fVar7) != 0) {
    uStack_324 = 0;
    local_328 = 0.0;
    local_330._4_4_ = 1.58347e-43;
    local_330._0_4_ = 0x523d9a8;
    FUN_710392eb40(CONCAT44(uVar8,fVar7));
  }
  if (local_2a8 != (long ********)0x0) {
    local_2a0 = local_2a8;
    FUN_710392eb40((ulong)local_2a8);
  }
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  FUN_7103776640(&local_3c0,lVar48,(byte ****)"set_parts_btn_edit",uVar30,pppppppplVar33,pppplVar28,
                 puVar37,param_7,param_8);
  uVar45 = local_3b8[0];
  lVar47 = *(long *)(local_3b8[0] + 8);
  if (*(char *)(param_1 + 0x1c5) == '\0') {
    if ((lVar47 != 0) && (lVar47 = *(long *)(lVar47 + 0x18), lVar47 != 0)) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) & 0xfe;
    }
    goto joined_r0x007101da0420;
  }
  if ((lVar47 != 0) && (lVar47 = *(long *)(lVar47 + 0x18), lVar47 != 0)) {
    *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) | 1;
  }
  FUN_7103776640(&local_2b8,(long)&local_3c0,(byte ****)"set_parts_escort_00",uVar30,pppppppplVar33,
                 pppplVar28,puVar37,param_7,param_8);
  uVar13 = *(byte *)(param_1 + 0x1c2) - 1;
  uVar25 = (undefined1)(0x20301 >> (ulong)((uVar13 & 3) << 3));
  if (2 < uVar13) {
    uVar25 = 0;
  }
  uVar30 = 0;
  FUN_710339dde0((uint *)&local_2a8,uVar25,'\0');
  if ((param_4 == (byte ****)0x0) || (*(short *)((long)param_4 + 2) == -1)) {
    FUN_7103778300(0x3f800000,uVar45,0x71043bebaa);
    ppppppplVar16 = local_2b0;
    FUN_7103778300(0x3f800000,(long)local_2b0,0x71043bebaa);
    FUN_7103778300(0x3f800000,(long)ppppppplVar16,0x71043ab85a);
    FUN_7103776910(&local_260,(long)&local_2b8,(long ****)"set_txt_power",uVar30,pppppppplVar33,
                   pppplVar28,puVar37,param_7,param_8);
    ppppppplVar16 = uStack_258;
    pppppplVar21 = *uStack_258;
    if (pppppplVar21 != (long ******)0x0) {
      *(byte *)(pppppplVar21 + 0xb) = *(byte *)(pppppplVar21 + 0xb) & 0xfe;
    }
    local_260 = &PTR_FUN_710523d9a8;
    uStack_258 = (long *******)0x0;
  }
  else {
    FUN_7103778300(0x3f800000,uVar45,(long)&local_2a0);
    cVar2 = *(char *)(param_1 + 0x1c2);
    cVar3 = *(char *)(param_1 + 0x1c3);
    if (cVar2 == '\x01') {
      ppppbVar34 = (byte ****)(ulong)(cVar3 == '\x02');
      if (cVar3 != '\x03') goto LAB_7101da07d0;
LAB_7101da07a0:
      iVar50 = -1;
      pppplVar28 = (long ****)0x1;
      pppplVar36 = (long ****)&DAT_ffffffff;
      ppppbVar35 = (byte ****)&DAT_ffffffff;
      FUN_71025b12c0((long)&local_2b8,uVar25,-1,0xffffffff,1,puVar37,param_7,param_8);
      uVar30 = extraout_x1_05;
LAB_7101da07ec:
      FUN_7103776290(&local_260,uVar30,pppplVar36,ppppbVar35,pppplVar28,puVar37,param_7,param_8);
      *uStack_258 = *local_2b0;
      uStack_258[1] = local_2b0[1];
      if (uStack_258 != local_2b0) {
        *uStack_258[3] = *local_2b0[3];
        uStack_258[3][1] = local_2b0[3][1];
        uStack_258[3][2] = local_2b0[3][2];
        uStack_258[3][3] = local_2b0[3][3];
      }
      local_250 = CONCAT26((short)((ulong)local_250 >> 0x30),0x10000000000);
      local_250._0_5_ = CONCAT14(0 < iVar50,1);
      puVar17 = *(undefined8 **)(param_1 + 0x1e8);
      if (puVar17 == *(undefined8 **)(param_1 + 0x1f0)) {
        FUN_7101da1560((long *)(param_1 + 0x1e0),&local_260,pppplVar36,ppppbVar35,pppplVar28,puVar37
                       ,param_7,param_8);
      }
      else {
        FUN_7103776390(puVar17,&local_260,pppplVar36,ppppbVar35,pppplVar28,puVar37,param_7,param_8);
        *(undefined2 *)((long)puVar17 + 0x14) = local_250._4_2_;
        *(undefined4 *)(puVar17 + 2) = (undefined4)local_250;
        *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + 0x18;
      }
      ppppppplVar16 = uStack_258;
      local_260 = &PTR_FUN_710523d988;
      uStack_258 = (long *******)0x0;
      if (ppppppplVar16 != (long *******)0x0) {
        pppppplVar21 = ppppppplVar16[3];
        ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
        ppppppplVar16[3] = (long ******)0x0;
        if (pppppplVar21 != (long ******)0x0) {
          FUN_710392eb40((ulong)pppppplVar21);
        }
        FUN_710392eb40((ulong)ppppppplVar16);
      }
      *(int *)(param_1 + 0x1fc) = iVar50;
    }
    else {
      if (cVar2 == '\x02') {
        ppppbVar34 = (byte ****)(ulong)(cVar3 == '\x03');
        if (cVar3 == '\x01') goto LAB_7101da07a0;
LAB_7101da07d0:
        pppplVar36 = (long ****)&DAT_ffffffff;
        pppplVar28 = (long ****)0x1;
        ppppbVar35 = ppppbVar34;
        FUN_71025b12c0((long)&local_2b8,uVar25,-1,ppppbVar34,1,puVar37,param_7,param_8);
        iVar50 = (int)ppppbVar34;
        uVar30 = extraout_x1_06;
        if (iVar50 != 0) goto LAB_7101da07ec;
      }
      else {
        if (cVar2 == '\x03') {
          ppppbVar34 = (byte ****)(ulong)(cVar3 == '\x01');
          if (cVar3 == '\x02') goto LAB_7101da07a0;
          goto LAB_7101da07d0;
        }
        pppplVar28 = (long ****)0x1;
        FUN_71025b12c0((long)&local_2b8,uVar25,-1,0,1,puVar37,param_7,param_8);
      }
      *(undefined4 *)(param_1 + 0x1fc) = 0;
    }
    local_260 = (undefined **)*param_4;
    uStack_258 = (long *******)(ulong)CONCAT22(uStack_258._2_2_,*(undefined2 *)(param_4 + 1));
    FUN_7101696040((uint *)((long)&uStack_258 + 4),(ushort *)((long)param_4 + 0x14));
    uStack_214 = (undefined4)((ulong)*(undefined8 *)((long)param_4 + 0x49) >> 0x18);
    local_210[0] = (char)((ulong)*(undefined8 *)((long)param_4 + 0x49) >> 0x38);
    uStack_21c = (undefined4)*(undefined8 *)((long)param_4 + 0x44);
    local_218 = (undefined4)((ulong)*(undefined8 *)((long)param_4 + 0x44) >> 0x20);
    uVar18 = (ulong)local_378 >> 0x10;
    local_368 = 0xffffffff;
    local_364 = 0xffff;
    local_378 = (undefined **)CONCAT62((uint6)uVar18 & 0xffff,0xffff);
    local_330._0_4_ = (uint)local_330 & 0xffffff00;
    local_330._4_4_ = 0.0;
    local_328 = 0.0;
    local_310 = 0;
    local_370 = (long ***)0x52ffff0000000000;
    local_320 = (long ***)0x52ffff0000000000;
    local_318 = 0;
    FUN_71025cae70((undefined2 *)&local_378,(long)&local_260);
    uVar4 = (ushort)local_378;
    FUN_71025caab0((long)&local_330,(ushort)local_378,local_378._4_4_);
    if ((uVar4 != 0xffff) && ((short)uVar4 < 2000)) {
      lVar47 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar46 = (*(long *)(lVar47 + 0x28) - *(long *)(lVar47 + 0x20) >> 6) * -0x3333333333333333;
      uVar5 = *(ushort *)(lVar47 + (long)(short)uVar4 * 2 + 0x60);
      uVar18 = (ulong)uVar5;
      if ((uint)uVar5 < (uint)uVar46) {
        puVar1 = (undefined2 *)(*(long *)(lVar47 + 0x20) + uVar18 * 0x140);
        if (uVar46 < uVar18 || uVar46 - uVar18 == 0) {
          puVar1 = &DAT_7105182b08;
        }
        local_330._0_4_ = CONCAT31(local_330._1_3_,*(undefined1 *)(puVar1 + 0x36));
        local_318 = CONCAT62(CONCAT42(local_318._4_4_,puVar1[0x48]),puVar1[0x35]);
      }
    }
    uVar18 = (ulong)local_368._2_2_;
    local_320 = local_370;
    uVar46 = (ulong)local_364;
    FUN_71025cad00((long)&local_330,(ushort)local_368,local_368._2_2_,local_364);
    bVar12 = FUN_71025cb340(*(ulong *)(param_1 + 0x1d0),uVar4);
    if (bVar12) {
      local_330._4_4_ = *(float *)(*DAT_7105329fa0 + 0x2b4) * local_330._4_4_;
      local_328 = *(float *)(*DAT_7105329fa0 + 0x2b4) * local_328;
    }
    uVar13 = FUN_71025cb980((long)&local_330);
    pppppppplVar33 = (long ********)(ulong)uVar13;
    FUN_7103776910(&local_2c8,(long)&local_2b8,(long ****)"set_txt_power",uVar18,uVar46,pppplVar28,
                   puVar37,param_7,param_8);
    ppppppplVar16 = local_2c0;
    lVar47 = (long)*local_2c0;
    if (lVar47 != 0) {
      *(byte *)(lVar47 + 0x58) = *(byte *)(lVar47 + 0x58) | 1;
    }
    local_2c8 = &PTR_FUN_710523d9a8;
    local_2c0 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar16);
    }
    FUN_7103776910(&local_2c8,(long)&local_2b8,(long ****)"set_txt_power",uVar18,uVar46,pppplVar28,
                   puVar37,param_7,param_8);
    FUN_710377a280((long)&local_2c8,(byte *)"mnu_spirits_challengeboard_organize_power_n",1);
    ppppppplVar16 = local_2c0;
    local_2c8 = &PTR_FUN_710523d9a8;
    local_2c0 = (long *******)0x0;
  }
  if (ppppppplVar16 != (long *******)0x0) {
    FUN_710392eb40((ulong)ppppppplVar16);
  }
  lVar47 = *DAT_7105329f98;
  pbVar43 = *(byte **)(lVar47 + 0x68);
  uVar13 = (uint)pbVar43[0x78] + (uint)*pbVar43 + (uint)pbVar43[0xf0] + (uint)pbVar43[0x168];
  if (((uVar13 & 0xff) < 2) || (*(char *)(param_1 + 0x1c6) != '\0')) {
    FUN_7103778300(0x3f800000,uVar45,0x71044227a9);
    ppppppplVar16 = local_2b0;
    if (((*(ulong *)(param_1 + 0x1d0) & 0xff00000000000000) == 0xc100000000000000) &&
       ((*(ulong *)(param_1 + 0x1d0) & 0xffffffffff) != 0)) {
      FUN_7103778300(0x3f800000,(long)local_2b0,0x710425fa89);
      ppppppppplVar31 = (long *********)0x2;
      local_260 = (undefined **)
                  FUN_7103238a70(*(ulong *)(param_1 + 0x1d0),(ulong)*(byte *)(param_1 + 0x1d8),2);
      if (((ulong)local_260 & 0xffffffffff) != 0) {
        lVar47 = *plVar23;
        ppppppppplVar31 = (long *********)(long)*(int *)(lVar47 + 0x70);
        pppppppplVar33 = (long ********)(ulong)*(uint *)(lVar47 + 0x68);
        FUN_710323c4e0(lVar47,&local_260,ppppppppplVar31,(byte ****)pppppppplVar33,pppplVar28,
                       puVar37,param_7,param_8);
      }
      FUN_7103776910(&local_260,(long)&local_2b8,(long ****)"set_rep_fighter",ppppppppplVar31,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      ppppppppplVar31 = (long *********)(ulong)*(byte *)(param_1 + 0x1d8);
      ppppbVar34 = (byte ****)0x2;
      plVar23 = FUN_710323f330(plVar23,*(ulong *)(param_1 + 0x1d0),(ulong)ppppppppplVar31,2,
                               pppplVar28,puVar37,param_7,param_8);
      ppppppplVar38 = uStack_258;
      FUN_7103778b80((long)uStack_258,(long)plVar23,ppppppppplVar31,ppppbVar34,pppplVar28,puVar37,
                     param_7,param_8);
      local_260 = &PTR_FUN_710523d9a8;
      uStack_258 = (long *******)0x0;
      if (ppppppplVar38 != (long *******)0x0) {
        FUN_710392eb40((ulong)ppppppplVar38);
      }
    }
    else {
      FUN_7103778300(0x3f800000,(long)local_2b0,0x710432a66a);
    }
  }
  else {
    FUN_7103778300(0x3f800000,uVar45,0x71043e0582);
    if ((param_6 & 1) == 0) {
      pcVar54 = "anim_icon_multi";
    }
    else {
      pcVar54 = "anim_icon_multi_back";
    }
    FUN_7103778300(0x3f800000,uVar45,(long)pcVar54);
    uVar13 = 4 - uVar13;
    pcVar54 = *(char **)(lVar47 + 0x68);
    if (((*pcVar54 == '\0') ||
        (uVar18 = *(ulong *)(pcVar54 + 8), (uVar18 & 0xff00000000000000) != 0xc100000000000000)) ||
       ((uVar18 & 0xffffffffff) == 0)) {
      iVar50 = 0;
      cVar2 = pcVar54[0x78];
    }
    else {
      ppppppppplVar31 = (long *********)(ulong)(byte)pcVar54[0x10];
      FUN_7103776910(&local_260,(long)&local_3c0,(long ****)"set_rep_icon_multi_0%d",(ulong)uVar13,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      ppppppplVar16 = uStack_258;
      pppppplVar21 = *uStack_258;
      if (pppppplVar21 != (long ******)0x0) {
        *(byte *)(pppppplVar21 + 0xb) = *(byte *)(pppppplVar21 + 0xb) | 1;
      }
      uVar46 = FUN_7103238a70(uVar18,ppppppppplVar31,2);
      local_330._0_4_ = (uint)uVar46;
      local_330._4_4_ = (float)(uVar46 >> 0x20);
      if ((uVar46 & 0xffffffffff) != 0) {
        lVar48 = *plVar23;
        FUN_710323c4e0(lVar48,&local_330,(long *********)(long)*(int *)(lVar48 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar48 + 0x68),pppplVar28,puVar37,param_7,param_8
                      );
      }
      pppppppplVar33 = (long ********)0x2;
      plVar20 = FUN_710323f330(plVar23,uVar18,(ulong)ppppppppplVar31,2,pppplVar28,puVar37,param_7,
                               param_8);
      FUN_7103778b80((long)ppppppplVar16,(long)plVar20,ppppppppplVar31,(byte ****)pppppppplVar33,
                     pppplVar28,puVar37,param_7,param_8);
      local_260 = &PTR_FUN_710523d9a8;
      uStack_258 = (long *******)0x0;
      if (ppppppplVar16 != (long *******)0x0) {
        FUN_710392eb40((ulong)ppppppplVar16);
      }
      pcVar54 = *(char **)(lVar47 + 0x68);
      iVar50 = 1;
      cVar2 = pcVar54[0x78];
    }
    if (((cVar2 != '\0') &&
        (uVar18 = *(ulong *)(pcVar54 + 0x80), (uVar18 & 0xff00000000000000) == 0xc100000000000000))
       && ((uVar18 & 0xffffffffff) != 0)) {
      ppppppppplVar31 = (long *********)(ulong)(byte)pcVar54[0x88];
      FUN_7103776910(&local_260,(long)&local_3c0,(long ****)"set_rep_icon_multi_0%d",
                     (ulong)(iVar50 + uVar13),pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      ppppppplVar16 = uStack_258;
      pppppplVar21 = *uStack_258;
      if (pppppplVar21 != (long ******)0x0) {
        *(byte *)(pppppplVar21 + 0xb) = *(byte *)(pppppplVar21 + 0xb) | 1;
      }
      uVar46 = FUN_7103238a70(uVar18,ppppppppplVar31,2);
      local_330._0_4_ = (uint)uVar46;
      local_330._4_4_ = (float)(uVar46 >> 0x20);
      if ((uVar46 & 0xffffffffff) != 0) {
        lVar48 = *plVar23;
        FUN_710323c4e0(lVar48,&local_330,(long *********)(long)*(int *)(lVar48 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar48 + 0x68),pppplVar28,puVar37,param_7,param_8
                      );
      }
      pppppppplVar33 = (long ********)0x2;
      plVar20 = FUN_710323f330(plVar23,uVar18,(ulong)ppppppppplVar31,2,pppplVar28,puVar37,param_7,
                               param_8);
      FUN_7103778b80((long)ppppppplVar16,(long)plVar20,ppppppppplVar31,(byte ****)pppppppplVar33,
                     pppplVar28,puVar37,param_7,param_8);
      iVar50 = iVar50 + 1;
      local_260 = &PTR_FUN_710523d9a8;
      uStack_258 = (long *******)0x0;
      if (ppppppplVar16 != (long *******)0x0) {
        FUN_710392eb40((ulong)ppppppplVar16);
      }
      pcVar54 = *(char **)(lVar47 + 0x68);
    }
    if (((pcVar54[0xf0] != '\0') &&
        (uVar18 = *(ulong *)(pcVar54 + 0xf8), (uVar18 & 0xff00000000000000) == 0xc100000000000000))
       && ((uVar18 & 0xffffffffff) != 0)) {
      ppppppppplVar31 = (long *********)(ulong)(byte)pcVar54[0x100];
      FUN_7103776910(&local_260,(long)&local_3c0,(long ****)"set_rep_icon_multi_0%d",
                     (ulong)(iVar50 + uVar13),pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      ppppppplVar16 = uStack_258;
      pppppplVar21 = *uStack_258;
      if (pppppplVar21 != (long ******)0x0) {
        *(byte *)(pppppplVar21 + 0xb) = *(byte *)(pppppplVar21 + 0xb) | 1;
      }
      uVar46 = FUN_7103238a70(uVar18,ppppppppplVar31,2);
      local_330._0_4_ = (uint)uVar46;
      local_330._4_4_ = (float)(uVar46 >> 0x20);
      if ((uVar46 & 0xffffffffff) != 0) {
        lVar48 = *plVar23;
        FUN_710323c4e0(lVar48,&local_330,(long *********)(long)*(int *)(lVar48 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar48 + 0x68),pppplVar28,puVar37,param_7,param_8
                      );
      }
      pppppppplVar33 = (long ********)0x2;
      plVar20 = FUN_710323f330(plVar23,uVar18,(ulong)ppppppppplVar31,2,pppplVar28,puVar37,param_7,
                               param_8);
      FUN_7103778b80((long)ppppppplVar16,(long)plVar20,ppppppppplVar31,(byte ****)pppppppplVar33,
                     pppplVar28,puVar37,param_7,param_8);
      iVar50 = iVar50 + 1;
      local_260 = &PTR_FUN_710523d9a8;
      uStack_258 = (long *******)0x0;
      if (ppppppplVar16 != (long *******)0x0) {
        FUN_710392eb40((ulong)ppppppplVar16);
      }
      pcVar54 = *(char **)(lVar47 + 0x68);
    }
    if (((pcVar54[0x168] != '\0') &&
        (uVar18 = *(ulong *)(pcVar54 + 0x170), (uVar18 & 0xff00000000000000) == 0xc100000000000000))
       && ((uVar18 & 0xffffffffff) != 0)) {
      ppppppppplVar31 = (long *********)(ulong)(byte)pcVar54[0x178];
      FUN_7103776910(&local_260,(long)&local_3c0,(long ****)"set_rep_icon_multi_0%d",
                     (ulong)(iVar50 + uVar13),pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      ppppppplVar16 = uStack_258;
      pppppplVar21 = *uStack_258;
      if (pppppplVar21 != (long ******)0x0) {
        *(byte *)(pppppplVar21 + 0xb) = *(byte *)(pppppplVar21 + 0xb) | 1;
      }
      uVar46 = FUN_7103238a70(uVar18,ppppppppplVar31,2);
      local_330._0_4_ = (uint)uVar46;
      local_330._4_4_ = (float)(uVar46 >> 0x20);
      if ((uVar46 & 0xffffffffff) != 0) {
        lVar47 = *plVar23;
        FUN_710323c4e0(lVar47,&local_330,(long *********)(long)*(int *)(lVar47 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar47 + 0x68),pppplVar28,puVar37,param_7,param_8
                      );
      }
      pppppppplVar33 = (long ********)0x2;
      plVar23 = FUN_710323f330(plVar23,uVar18,(ulong)ppppppppplVar31,2,pppplVar28,puVar37,param_7,
                               param_8);
      FUN_7103778b80((long)ppppppplVar16,(long)plVar23,ppppppppplVar31,(byte ****)pppppppplVar33,
                     pppplVar28,puVar37,param_7,param_8);
      local_260 = &PTR_FUN_710523d9a8;
      uStack_258 = (long *******)0x0;
      if (ppppppplVar16 != (long *******)0x0) {
        FUN_710392eb40((ulong)ppppppplVar16);
      }
    }
    if (uVar13 != 0) {
      FUN_7103776910(&local_260,(long)&local_3c0,(long ****)"set_rep_icon_multi_0%d",0,
                     pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
      ppppppplVar16 = uStack_258;
      pppppplVar21 = *uStack_258;
      if (pppppplVar21 != (long ******)0x0) {
        *(byte *)(pppppplVar21 + 0xb) = *(byte *)(pppppplVar21 + 0xb) & 0xfe;
      }
      local_260 = &PTR_FUN_710523d9a8;
      uStack_258 = (long *******)0x0;
      if (ppppppplVar16 != (long *******)0x0) {
        FUN_710392eb40((ulong)ppppppplVar16);
      }
      if (uVar13 != 1) {
        FUN_7103776910(&local_260,(long)&local_3c0,(long ****)"set_rep_icon_multi_0%d",1,
                       pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
        ppppppplVar16 = uStack_258;
        pppppplVar21 = *uStack_258;
        if (pppppplVar21 != (long ******)0x0) {
          *(byte *)(pppppplVar21 + 0xb) = *(byte *)(pppppplVar21 + 0xb) & 0xfe;
        }
        local_260 = &PTR_FUN_710523d9a8;
        uStack_258 = (long *******)0x0;
        if (ppppppplVar16 != (long *******)0x0) {
          FUN_710392eb40((ulong)ppppppplVar16);
        }
        if (2 < uVar13) {
          FUN_7103776910(&local_260,(long)&local_3c0,(long ****)"set_rep_icon_multi_0%d",2,
                         pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
          ppppppplVar16 = uStack_258;
          pppppplVar21 = *uStack_258;
          if (pppppplVar21 != (long ******)0x0) {
            *(byte *)(pppppplVar21 + 0xb) = *(byte *)(pppppplVar21 + 0xb) & 0xfe;
          }
          local_260 = &PTR_FUN_710523d9a8;
          uStack_258 = (long *******)0x0;
          if (ppppppplVar16 != (long *******)0x0) {
            FUN_710392eb40((ulong)ppppppplVar16);
          }
          if (uVar13 != 3) {
            FUN_7103776910(&local_260,(long)&local_3c0,(long ****)"set_rep_icon_multi_0%d",3,
                           pppppppplVar33,pppplVar28,puVar37,param_7,param_8);
            ppppppplVar16 = uStack_258;
            pppppplVar21 = *uStack_258;
            if (pppppplVar21 != (long ******)0x0) {
              *(byte *)(pppppplVar21 + 0xb) = *(byte *)(pppppplVar21 + 0xb) & 0xfe;
            }
            local_260 = &PTR_FUN_710523d9a8;
            uStack_258 = (long *******)0x0;
            if (ppppppplVar16 != (long *******)0x0) {
              FUN_710392eb40((ulong)ppppppplVar16);
            }
          }
        }
      }
    }
    ppppppplVar16 = local_2b0;
    FUN_7103778300(0x3f800000,(long)local_2b0,0x710432a66a);
  }
  local_2b0 = (long *******)0x0;
  local_2b8 = &PTR_FUN_710523d988;
  if (ppppppplVar16 != (long *******)0x0) {
    local_2b0 = (long *******)0x0;
    local_2b8 = &PTR_FUN_710523d988;
    pppppplVar21 = ppppppplVar16[3];
    ppppppplVar16[2] = (long ******)&PTR_FUN_710523d9a8;
    ppppppplVar16[3] = (long ******)0x0;
    if (pppppplVar21 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar21);
    }
    FUN_710392eb40((ulong)ppppppplVar16);
  }
joined_r0x007101da0420:
  local_3b8[0] = 0;
  local_3c0 = &PTR_FUN_710523d988;
  if (uVar45 != 0) {
    local_3b8[0] = 0;
    local_3c0 = &PTR_FUN_710523d988;
    uVar18 = *(ulong *)(uVar45 + 0x18);
    *(undefined ***)(uVar45 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar45 + 0x18) = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40(uVar45);
  }
  if (((ulong)param_5 & 1) == 0) {
    pcVar54 = "time_hide";
  }
  else {
    pcVar54 = "time_show";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x168),(long)pcVar54);
  return;
}

