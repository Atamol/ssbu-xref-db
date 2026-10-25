// addr:      71017dfe10
// offset:    0x17dfe10
// name:      FUN_71017dfe10
// mangled:   
// signature: undefined __cdecl FUN_71017dfe10(byte * param_1, uint param_2, undefined8 param_3, ulong param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71017dfe10(byte *param_1,uint param_2,undefined8 param_3,ulong param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  char *pcVar10;
  ulong *puVar11;
  ulong *puVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  uint local_260 [2];
  undefined1 auStack_258 [248];
  undefined2 local_160;
  uint local_158 [2];
  undefined1 auStack_150 [248];
  undefined2 local_58;
  
  iVar8 = (int)param_3;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  *param_1 = 0;
  if (7 < iVar8 - 0x13U) {
    return;
  }
  uVar20 = param_5 & 0xffffffff;
  uVar17 = (uint)param_4;
  switch(iVar8) {
  case 0x13:
    local_58 = 0;
    local_158[0]._0_1_ = 0;
    if (param_2 == 0x4a) {
      pcVar10 = "b_normalgunner_m/c00";
LAB_71017e0030:
      FUN_710147f330((long)local_158,pcVar10,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      if (param_2 == 0x49) {
        pcVar10 = "b_normalswordman_m/c00";
        goto LAB_71017e0030;
      }
      if (param_2 == 0x48) {
        pcVar10 = "b_normalfighter_m/c00";
        goto LAB_71017e0030;
      }
    }
    lVar21 = *(long *)(DAT_710532f730 + 8);
    lVar19 = *(long *)(lVar21 + 0x248);
    lVar7 = *(long *)(lVar19 + 8);
    pcVar10 = *(char **)(lVar7 + 0x20);
    if ((*pcVar10 == '\f') && (iVar8 = *(int *)(pcVar10 + 1) + -1, 0 < *(int *)(pcVar10 + 1))) {
      uVar18 = *(ulong *)(lVar7 + 0x48) & 0xffffffffff;
      iVar15 = 0;
      pbVar13 = &DAT_7104742dbb;
      do {
        iVar2 = iVar8 + iVar15;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x28) + (long)*(int *)(pcVar10 + 5) +
                         (long)iVar2 * 8);
        uVar16 = *(ulong *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
        if (uVar16 == uVar18) {
          uVar14 = puVar1[1];
          if ((int)uVar14 < 0) goto LAB_71017e0260;
          pbVar13 = (byte *)(pcVar10 + (int)uVar14);
          break;
        }
        iVar5 = iVar2 + -1;
        if (uVar16 <= uVar18) {
          iVar15 = iVar2 + 1;
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
      } while (iVar15 <= iVar8);
    }
    else {
LAB_71017e0260:
      pbVar13 = &DAT_7104742dbb;
    }
    if ((*pbVar13 - 0xb < 2) && (uVar17 < *(uint *)(pbVar13 + 1))) {
      uVar18 = FUN_7103282b70(lVar7,uVar17);
      bVar6 = FUN_71032830b0(lVar19,uVar18);
      if (!bVar6) goto LAB_71017e02e0;
      if (param_2 == 0x4a) {
        uVar16 = FUN_7103282890(*(long *)(lVar21 + 0x248),uVar18);
        if ((uVar16 & 0xffffffffff) == 0xa36984b32) {
LAB_71017e0750:
          FUN_71032836d0(local_260,*(long *)(lVar21 + 0x248),uVar18);
          FUN_710147f330((long)local_158,"%s/c%02d",auStack_258,uVar20,param_5,param_6,param_7,
                         param_8);
        }
      }
      else if (param_2 == 0x49) {
        uVar16 = FUN_7103282890(*(long *)(lVar21 + 0x248),uVar18);
        if ((uVar16 & 0xffffffffff) == 0xd47a2b829) goto LAB_71017e0750;
      }
      else {
        if (param_2 != 0x48) goto LAB_71017e02e0;
        uVar16 = FUN_7103282890(*(long *)(lVar21 + 0x248),uVar18);
        if ((uVar16 & 0xffffffffff) == 0xb46978f7e) goto LAB_71017e0750;
      }
LAB_71017e02e8:
      puVar9 = (&PTR_s_mario_7104f81e20)[(int)param_2];
    }
    else {
LAB_71017e02e0:
      if (param_2 < 0x76) goto LAB_71017e02e8;
      puVar9 = &DAT_71042b2e2e;
    }
    pcVar10 = "fighter/%s/model/%s/model.numdlb";
    goto LAB_71017e03cc;
  case 0x14:
    lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x238);
    lVar7 = *(long *)(lVar19 + 8);
    pcVar10 = *(char **)(lVar7 + 0x20);
    if ((*pcVar10 == '\f') && (iVar8 = *(int *)(pcVar10 + 1) + -1, 0 < *(int *)(pcVar10 + 1))) {
      uVar18 = *(ulong *)(lVar7 + 0x48) & 0xffffffffff;
      iVar15 = 0;
      pbVar13 = &DAT_7104742dbb;
      do {
        iVar2 = iVar8 + iVar15;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x28) + (long)*(int *)(pcVar10 + 5) +
                         (long)iVar2 * 8);
        uVar16 = *(ulong *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
        if (uVar16 == uVar18) {
          uVar14 = puVar1[1];
          if ((int)uVar14 < 0) goto LAB_71017e018c;
          pbVar13 = (byte *)(pcVar10 + (int)uVar14);
          break;
        }
        iVar5 = iVar2 + -1;
        if (uVar16 <= uVar18) {
          iVar15 = iVar2 + 1;
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
      } while (iVar15 <= iVar8);
    }
    else {
LAB_71017e018c:
      pbVar13 = &DAT_7104742dbb;
    }
    if ((*pbVar13 - 0xb < 2) && (uVar17 < *(uint *)(pbVar13 + 1))) {
      uVar18 = FUN_71032870b0(lVar7,uVar17);
      FUN_7103287980(local_158,lVar19,uVar18);
      FUN_710147f330((long)param_1,"miihat/%s/model/body/c%02d/model.numdlb",auStack_150,uVar20,
                     param_5,param_6,param_7,param_8);
    }
    break;
  case 0x15:
    break;
  default:
    local_58 = 0;
    local_158[0]._0_1_ = 0;
    switch(param_4 & 0xffffffff) {
    case 0:
      pcVar10 = "vc_mii_m01_boy_low";
      break;
    case 1:
      pcVar10 = "vc_mii_m01_boy_mid";
      break;
    case 2:
      pcVar10 = "vc_mii_m01_boy_high";
      break;
    case 3:
      pcVar10 = "vc_mii_m02_young_low";
      break;
    case 4:
      pcVar10 = "vc_mii_m02_young_mid";
      break;
    case 5:
      pcVar10 = "vc_mii_m02_young_high";
      break;
    case 6:
      pcVar10 = "vc_mii_m03_passionate_low";
      break;
    case 7:
      pcVar10 = "vc_mii_m03_passionate_mid";
      break;
    case 8:
      pcVar10 = "vc_mii_m03_passionate_high";
      break;
    case 9:
      pcVar10 = "vc_mii_m04_rough_low";
      break;
    case 10:
      pcVar10 = "vc_mii_m04_rough_mid";
      break;
    case 0xb:
      pcVar10 = "vc_mii_m04_rough_high";
      break;
    case 0xc:
      pcVar10 = "vc_mii_m05_cool_low";
      break;
    case 0xd:
      pcVar10 = "vc_mii_m05_cool_mid";
      break;
    case 0xe:
      pcVar10 = "vc_mii_m05_cool_high";
      break;
    case 0xf:
      pcVar10 = "vc_mii_m06_warrior_low";
      break;
    case 0x10:
      pcVar10 = "vc_mii_m06_warrior_mid";
      break;
    case 0x11:
      pcVar10 = "vc_mii_m06_warrior_high";
      break;
    case 0x12:
      pcVar10 = "vc_mii_f01_girl_low";
      break;
    case 0x13:
      pcVar10 = "vc_mii_f01_girl_mid";
      break;
    case 0x14:
      pcVar10 = "vc_mii_f01_girl_high";
      break;
    case 0x15:
      pcVar10 = "vc_mii_f02_young_low";
      break;
    case 0x16:
      pcVar10 = "vc_mii_f02_young_mid";
      break;
    case 0x17:
      pcVar10 = "vc_mii_f02_young_high";
      break;
    case 0x18:
      pcVar10 = "vc_mii_f03_active_low";
      break;
    case 0x19:
      pcVar10 = "vc_mii_f03_active_mid";
      break;
    case 0x1a:
      pcVar10 = "vc_mii_f03_active_high";
      break;
    case 0x1b:
      pcVar10 = "vc_mii_f04_beauty_low";
      break;
    case 0x1c:
      pcVar10 = "vc_mii_f04_beauty_mid";
      break;
    case 0x1d:
      pcVar10 = "vc_mii_f04_beauty_high";
      break;
    case 0x1e:
      pcVar10 = "vc_mii_f05_gloomy_low";
      break;
    case 0x1f:
      pcVar10 = "vc_mii_f05_gloomy_mid";
      break;
    case 0x20:
      pcVar10 = "vc_mii_f05_gloomy_high";
      break;
    case 0x21:
      pcVar10 = "vc_mii_f06_warrior_low";
      break;
    case 0x22:
      pcVar10 = "vc_mii_f06_warrior_mid";
      break;
    case 0x23:
      pcVar10 = "vc_mii_f06_warrior_high";
      break;
    default:
      goto switchD_71017dfe8c_default;
    }
    FUN_710147f330((long)local_158,pcVar10,param_3,param_4,param_5,param_6,param_7,param_8);
switchD_71017dfe8c_default:
    local_160 = 0;
    local_260[0]._0_1_ = 0;
    if (iVar8 == 0x18) {
      pcVar10 = "nus3audio";
LAB_71017e05c4:
      FUN_710147f330((long)local_260,pcVar10,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      if (iVar8 == 0x17) {
        pcVar10 = "tonelabel";
        goto LAB_71017e05c4;
      }
      if (iVar8 == 0x16) {
        pcVar10 = "nus3bank";
        goto LAB_71017e05c4;
      }
    }
    FUN_710147f330((long)param_1,"sound/bank/fighter_voice/%s.%s",local_158,local_260,param_5,
                   param_6,param_7,param_8);
    uVar17 = (uint)*param_1;
    if (*param_1 != 0) {
      uVar20 = 0;
      uVar14 = 0xffffffff;
      pbVar13 = param_1;
      do {
        pbVar13 = pbVar13 + 1;
        uVar4 = uVar17 + 0x20;
        if (0x19 < uVar17 - 0x41) {
          uVar4 = uVar17;
        }
        uVar14 = (&DAT_7104754084)[(uVar4 ^ uVar14) & 0xff] ^ uVar14 >> 8;
        uVar17 = (uint)*pbVar13;
        uVar20 = uVar20 + 0x100000000;
      } while (uVar17 != 0);
      uVar20 = uVar20 & 0xff00000000 | (ulong)~uVar14;
      if (uVar20 != 0) {
        lVar19 = **(long **)(*(long *)(DAT_7105332f28 + 0xd0) + 0x78);
        lVar7 = *(long *)(lVar19 + 0x50);
        uVar16 = (ulong)*(uint *)(lVar7 + 4);
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = uVar20 / uVar16;
        }
        lVar7 = lVar7 + (uVar20 - uVar18 * uVar16) * 8;
        uVar17 = *(uint *)(lVar7 + 0xc);
        uVar18 = (ulong)uVar17;
        puVar12 = (ulong *)(*(long *)(lVar19 + 0x58) + (ulong)*(uint *)(lVar7 + 8) * 8);
        puVar3 = puVar12 + uVar18;
        puVar11 = puVar12;
        if (uVar17 != 0) {
          do {
            uVar16 = uVar18;
            if ((long)uVar18 < 0) {
              uVar16 = uVar18 + 1;
            }
            uVar16 = (long)uVar16 >> 1;
            puVar12 = puVar11 + uVar16 + 1;
            uVar18 = uVar18 + ~uVar16;
            if (uVar20 <= (puVar11[uVar16] & 0xffffffffff)) {
              puVar12 = puVar11;
              uVar18 = uVar16;
            }
            puVar11 = puVar12;
          } while (uVar18 != 0);
        }
        if ((puVar12 != puVar3) &&
           ((*puVar12 & 0xffffffffff) == uVar20 && *puVar12 < 0xffffff0000000000)) {
          return;
        }
      }
    }
    param_1[0x100] = 0;
    param_1[0x101] = 0;
    *param_1 = 0;
    break;
  case 0x19:
    local_58 = 0;
    local_158[0]._0_1_ = 0;
    if (param_2 == 0x4a) {
      pcVar10 = "b_normalgunner_m";
LAB_71017e00e0:
      FUN_710147f330((long)local_158,pcVar10,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      if (param_2 == 0x49) {
        pcVar10 = "b_normalswordman_m";
        goto LAB_71017e00e0;
      }
      if (param_2 == 0x48) {
        pcVar10 = "b_normalfighter_m";
        goto LAB_71017e00e0;
      }
    }
    lVar21 = *(long *)(DAT_710532f730 + 8);
    lVar19 = *(long *)(lVar21 + 0x248);
    lVar7 = *(long *)(lVar19 + 8);
    pcVar10 = *(char **)(lVar7 + 0x20);
    if ((*pcVar10 == '\f') && (iVar8 = *(int *)(pcVar10 + 1) + -1, 0 < *(int *)(pcVar10 + 1))) {
      uVar20 = *(ulong *)(lVar7 + 0x48) & 0xffffffffff;
      iVar15 = 0;
      pbVar13 = &DAT_7104742dbb;
      do {
        iVar2 = iVar8 + iVar15;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x28) + (long)*(int *)(pcVar10 + 5) +
                         (long)iVar2 * 8);
        uVar18 = *(ulong *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
        if (uVar18 == uVar20) {
          uVar14 = puVar1[1];
          if ((int)uVar14 < 0) goto LAB_71017e031c;
          pbVar13 = (byte *)(pcVar10 + (int)uVar14);
          break;
        }
        iVar5 = iVar2 + -1;
        if (uVar18 <= uVar20) {
          iVar15 = iVar2 + 1;
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
      } while (iVar15 <= iVar8);
    }
    else {
LAB_71017e031c:
      pbVar13 = &DAT_7104742dbb;
    }
    if ((*pbVar13 - 0xb < 2) && (uVar17 < *(uint *)(pbVar13 + 1))) {
      uVar20 = FUN_7103282b70(lVar7,uVar17);
      bVar6 = FUN_71032830b0(lVar19,uVar20);
      if (!bVar6) goto LAB_71017e039c;
      if (param_2 == 0x4a) {
        uVar18 = FUN_7103282890(*(long *)(lVar21 + 0x248),uVar20);
        if ((uVar18 & 0xffffffffff) == 0xa36984b32) {
LAB_71017e07cc:
          FUN_71032836d0(local_260,*(long *)(lVar21 + 0x248),uVar20);
          FUN_710147f330((long)local_158,"%s",auStack_258,param_4,param_5,param_6,param_7,param_8);
        }
      }
      else if (param_2 == 0x49) {
        uVar18 = FUN_7103282890(*(long *)(lVar21 + 0x248),uVar20);
        if ((uVar18 & 0xffffffffff) == 0xd47a2b829) goto LAB_71017e07cc;
      }
      else {
        if (param_2 != 0x48) goto LAB_71017e039c;
        uVar18 = FUN_7103282890(*(long *)(lVar21 + 0x248),uVar20);
        if ((uVar18 & 0xffffffffff) == 0xb46978f7e) goto LAB_71017e07cc;
      }
LAB_71017e03a4:
      pcVar10 = "fighter/%s/motion/%s/c00/motion_list.bin";
      puVar9 = (&PTR_s_mario_7104f81e20)[(int)param_2];
    }
    else {
LAB_71017e039c:
      if (param_2 < 0x76) goto LAB_71017e03a4;
      puVar9 = &DAT_71042b2e2e;
      pcVar10 = "fighter/%s/motion/%s/c00/motion_list.bin";
    }
LAB_71017e03cc:
    FUN_710147f330((long)param_1,pcVar10,puVar9,local_158,param_5,param_6,param_7,param_8);
    break;
  case 0x1a:
    lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x238);
    lVar7 = *(long *)(lVar19 + 8);
    pcVar10 = *(char **)(lVar7 + 0x20);
    if ((*pcVar10 == '\f') && (iVar8 = *(int *)(pcVar10 + 1) + -1, 0 < *(int *)(pcVar10 + 1))) {
      uVar20 = *(ulong *)(lVar7 + 0x48) & 0xffffffffff;
      iVar15 = 0;
      pbVar13 = &DAT_7104742dbb;
      do {
        iVar2 = iVar8 + iVar15;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x28) + (long)*(int *)(pcVar10 + 5) +
                         (long)iVar2 * 8);
        uVar18 = *(ulong *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
        if (uVar18 == uVar20) {
          uVar14 = puVar1[1];
          if ((int)uVar14 < 0) goto LAB_71017e01f8;
          pbVar13 = (byte *)(pcVar10 + (int)uVar14);
          break;
        }
        iVar5 = iVar2 + -1;
        if (uVar18 <= uVar20) {
          iVar15 = iVar2 + 1;
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
      } while (iVar15 <= iVar8);
    }
    else {
LAB_71017e01f8:
      pbVar13 = &DAT_7104742dbb;
    }
    if ((*pbVar13 - 0xb < 2) && (uVar17 < *(uint *)(pbVar13 + 1))) {
      uVar20 = FUN_71032870b0(lVar7,uVar17);
      FUN_7103287980(local_158,lVar19,uVar20);
      FUN_710147f330((long)param_1,"miihat/%s/motion/body/c00/motion_list.bin",auStack_150,param_4,
                     param_5,param_6,param_7,param_8);
    }
  }
  return;
}

