// addr:      7101e1f7e0
// offset:    0x1e1f7e0
// name:      FUN_7101e1f7e0
// mangled:   
// signature: undefined __cdecl FUN_7101e1f7e0(long param_1, undefined8 param_2, undefined8 param_3, char * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e1f7e0(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  ushort uVar5;
  undefined8 *puVar6;
  undefined2 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 uVar12;
  char *pcVar13;
  undefined8 extraout_x1;
  undefined8 uVar14;
  long ****pppplVar15;
  undefined **ppuVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  byte ***pppbVar20;
  byte **ppbVar21;
  code *pcVar22;
  byte *pbVar23;
  byte bVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  byte ****ppppbVar30;
  long lVar31;
  byte *pbVar32;
  byte *pbVar33;
  ushort *puVar34;
  char *pcVar35;
  byte ****ppppbVar36;
  uint uVar37;
  float fVar38;
  long local_300;
  undefined **local_2d0;
  long *local_2c8;
  undefined8 local_2c0;
  long *local_2b8;
  undefined8 local_2b0;
  undefined2 local_2a8;
  undefined1 uStack_2a6;
  undefined4 uStack_2a5;
  undefined1 uStack_2a1;
  undefined1 uStack_2a0;
  undefined1 uStack_29f;
  undefined2 uStack_29e;
  long alStack_290 [4];
  long *local_270;
  long alStack_260 [4];
  long *local_240;
  long alStack_230 [4];
  long *local_210;
  long alStack_200 [4];
  long *local_1e0;
  long alStack_1d0 [4];
  long *local_1b0;
  undefined4 local_1a0;
  byte ***pppbStack_190;
  undefined1 auStack_188 [64];
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_134;
  byte ***local_100;
  byte ***local_f8;
  undefined8 uStack_f0;
  byte ****local_e0;
  byte ***local_b8;
  long ****local_b0;
  undefined8 uStack_a8;
  undefined **local_98;
  undefined8 *local_90;
  undefined **local_88;
  ulong local_80;
  
  if (*(char *)(param_1 + 0xf02) != '\0') {
    *(undefined1 *)(param_1 + 0xf02) = 0;
    return;
  }
  lVar18 = **(long **)(param_1 + 0x160);
  puVar1 = (undefined8 *)(param_1 + 0xba0);
  if (puVar1 != (undefined8 *)(lVar18 + 8)) {
    **(undefined8 **)(param_1 + 0xba8) = **(undefined8 **)(lVar18 + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0xba8) + 8) = *(undefined8 *)(*(long *)(lVar18 + 0x10) + 8);
    lVar25 = *(long *)(lVar18 + 0x10);
    lVar18 = *(long *)(param_1 + 0xba8);
    if (lVar18 != lVar25) {
      **(undefined8 **)(lVar18 + 0x18) = **(undefined8 **)(lVar25 + 0x18);
      *(undefined8 *)(*(long *)(lVar18 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar25 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x18);
    }
  }
  FUN_7103776910(&local_2c0,(long)puVar1,(long ****)"set_fxui_stand_trace",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  plVar9 = local_2b8;
  FUN_710377aa20((long *)*local_2b8,0);
  local_2c0 = &PTR_FUN_710523d9a8;
  local_2b8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
  }
  lVar18 = *DAT_7105329f98;
  if (*(char *)(param_1 + 0xe75) == '\0') {
    FUN_7102527570(*(long *)(lVar18 + 0x30),(undefined8 *)(param_1 + 0xdf8),
                   (long ****)(ulong)*(byte *)(param_1 + 0xe70),(byte ****)param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7102527570(*(long *)(lVar18 + 0x30),(undefined8 *)(param_1 + 0xe10),
                   (long ****)(ulong)*(byte *)(param_1 + 0xe71),(byte ****)param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7102527570(*(long *)(lVar18 + 0x30),(undefined8 *)(param_1 + 0xe28),
                   (long ****)(ulong)*(byte *)(param_1 + 0xe72),(byte ****)param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7102527570(*(long *)(lVar18 + 0x30),(undefined8 *)(param_1 + 0xe40),
                   (long ****)(ulong)*(byte *)(param_1 + 0xe73),(byte ****)param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7102527570(*(long *)(lVar18 + 0x30),(undefined8 *)(param_1 + 0xe58),
                   (long ****)(ulong)*(byte *)(param_1 + 0xe74),(byte ****)param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined1 *)(param_1 + 0xe75) = 1;
    cVar4 = *(char *)(param_1 + 0xef0);
  }
  else {
    cVar4 = *(char *)(param_1 + 0xef0);
  }
  if (cVar4 == '\0') {
    *(undefined8 *)(param_1 + 0xe80) = *(undefined8 *)(param_1 + 0xe78);
    *(undefined8 *)(param_1 + 0xe98) = *(undefined8 *)(param_1 + 0xe90);
    *(undefined8 *)(param_1 + 0xeb0) = *(undefined8 *)(param_1 + 0xea8);
    *(undefined8 *)(param_1 + 0xec8) = *(undefined8 *)(param_1 + 0xec0);
    *(undefined8 *)(param_1 + 0xee0) = *(undefined8 *)(param_1 + 0xed8);
    *(undefined1 *)(param_1 + 0xef0) = 0;
    lVar25 = *DAT_7105329f98;
    FUN_7102528c30(*(byte **)(lVar25 + 0x30),(undefined8 *)(param_1 + 0xe78),(long ****)0x0,
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    FUN_7102528c30(*(byte **)(lVar25 + 0x30),(undefined8 *)(param_1 + 0xe90),(long ****)0x1,
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    FUN_7102528c30(*(byte **)(lVar25 + 0x30),(undefined8 *)(param_1 + 0xea8),(long ****)0x2,
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    FUN_7102528c30(*(byte **)(lVar25 + 0x30),(undefined8 *)(param_1 + 0xec0),(long ****)0x3,
                   (byte ****)param_4,param_5,param_6,param_7,param_8);
    FUN_7102528c30(*(byte **)(lVar25 + 0x30),(undefined8 *)(param_1 + 0xed8),
                   (long ****)&DAT_00000004,(byte ****)param_4,param_5,param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0xef0) = 1;
  }
  *(undefined4 *)(param_1 + 0xc04) = 0;
  iVar8 = *(int *)(*(long *)(param_1 + 0x178) + 0x2a4);
  if ((iVar8 < 0) ||
     ((ulong)(*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 3) <= (ulong)(long)iVar8)) {
LAB_7101e1f958:
    local_300 = 0;
  }
  else {
    uVar5 = *(ushort *)(*(long *)(*(long *)(param_1 + 0x188) + (long)iVar8 * 8) + 8);
    if ((long)(short)uVar5 == -1) goto LAB_7101e1f958;
    if (1999 < uVar5) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_300 = *(long *)(param_1 + 0x1020) + (long)(short)uVar5 * 0x60;
  }
  ppppbVar30 = (byte ****)0x0;
  pbVar23 = (byte *)((long)&local_140 + 1);
  do {
    lVar25 = local_300 + (long)ppppbVar30 * 4;
    pbVar32 = (byte *)(lVar25 + 0x4a);
    if (*pbVar32 == 0) break;
    lVar31 = *(long *)(DAT_710532f730 + 8);
    pcVar13 = "set_parts_list_%02d";
    param_4 = (char *)ppppbVar30;
    snprintf((char *)&local_b8,0x20,"set_parts_list_%02d",(int)ppppbVar30);
    FUN_7103776640(&local_88,(long)puVar1,&local_b8,pcVar13,param_4,param_5,param_6,param_7,param_8)
    ;
    puVar34 = (ushort *)(lVar25 + 0x4c);
    lVar19 = (long)(short)*puVar34;
    if (lVar19 == -1) {
      pbVar33 = (byte *)(lVar25 + 0x4b);
      uVar37 = 0;
      uVar27 = 0;
      switch(*pbVar33) {
      case 0:
        FUN_7103776910(&local_2c0,(long)&local_88,(long ****)"set_txt_base",pcVar13,param_4,param_5,
                       param_6,param_7,param_8);
        pcVar13 = (char *)0x1;
        param_4 = "nam_spirits_pedestal_type_attack";
        FUN_710377a280((long)&local_2c0,(byte *)"mnu_spirits_select_ped_nam",1);
        plVar9 = local_2b8;
        local_2c0 = &PTR_FUN_710523d9a8;
        local_2b8 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar9);
        }
        pcVar35 = "spirit_attacker_offense";
        break;
      case 1:
        FUN_7103776910(&local_2c0,(long)&local_88,(long ****)"set_txt_base",pcVar13,param_4,param_5,
                       param_6,param_7,param_8);
        pcVar13 = (char *)0x1;
        param_4 = "nam_spirits_pedestal_type_guard";
        FUN_710377a280((long)&local_2c0,(byte *)"mnu_spirits_select_ped_nam",1);
        plVar9 = local_2b8;
        local_2c0 = &PTR_FUN_710523d9a8;
        local_2b8 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar9);
        }
        pcVar35 = "spirit_attacker_defense";
        break;
      case 2:
        FUN_7103776910(&local_2c0,(long)&local_88,(long ****)"set_txt_base",pcVar13,param_4,param_5,
                       param_6,param_7,param_8);
        pcVar13 = (char *)0x1;
        param_4 = "nam_spirits_pedestal_type_throw";
        FUN_710377a280((long)&local_2c0,(byte *)"mnu_spirits_select_ped_nam",1);
        plVar9 = local_2b8;
        local_2c0 = &PTR_FUN_710523d9a8;
        local_2b8 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar9);
        }
        pcVar35 = "spirit_attacker_throw";
        break;
      case 3:
        FUN_7103776910(&local_2c0,(long)&local_88,(long ****)"set_txt_base",pcVar13,param_4,param_5,
                       param_6,param_7,param_8);
        pcVar13 = (char *)0x1;
        param_4 = "nam_spirits_pedestal_type_none";
        FUN_710377a280((long)&local_2c0,(byte *)"mnu_spirits_select_ped_nam",1);
        plVar9 = local_2b8;
        local_2c0 = &PTR_FUN_710523d9a8;
        local_2b8 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar9);
        }
        pcVar35 = "spirit_attacker_non";
        break;
      case 4:
        FUN_7103776910(&local_2c0,(long)&local_88,(long ****)"set_txt_base",pcVar13,param_4,param_5,
                       param_6,param_7,param_8);
        pcVar13 = (char *)0x1;
        param_4 = "nam_spirits_pedestal_type_support";
        FUN_710377a280((long)&local_2c0,(byte *)"mnu_spirits_select_ped_nam",1);
        plVar9 = local_2b8;
        local_2c0 = &PTR_FUN_710523d9a8;
        local_2b8 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar9);
        }
        pcVar35 = "spirit_supporter";
        break;
      case 5:
        goto switchD_7101e1fac4_caseD_5;
      default:
        goto switchD_7101e1fac4_default;
      }
      FUN_7103778300(0x3f800000,local_80,(long)pcVar35);
      FUN_7103776640(&local_2c0,(long)&local_88,(byte ****)"set_parts_icon_base",pcVar13,param_4,
                     param_5,param_6,param_7,param_8);
      plVar9 = local_2b8;
      FUN_7103778300(0x3f800000,(long)local_2b8,(long)pcVar35);
      local_2c0 = &PTR_FUN_710523d988;
      local_2b8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        uVar26 = plVar9[3];
        plVar9[2] = (long)&PTR_FUN_710523d9a8;
        plVar9[3] = 0;
        if (uVar26 != 0) {
          FUN_710392eb40(uVar26);
        }
        FUN_710392eb40((ulong)plVar9);
      }
switchD_7101e1fac4_default:
      lVar25 = *DAT_7105329f98;
      uVar27 = FUN_7102528ac0(*(byte **)(lVar25 + 0x30),*pbVar33);
      ppppbVar36 = (byte ****)(ulong)uVar27;
      FUN_7103776910(&local_2c0,(long)&local_88,(long ****)"set_txt_num_base_have",pcVar13,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_710377a280((long)&local_2c0,(byte *)"mnu_spirits_recall_rev_pedestal_n",1);
      plVar9 = local_2b8;
      local_2c0 = &PTR_FUN_710523d9a8;
      local_2b8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar9);
      }
      if (uVar27 == 0) {
        pcVar13 = "color_nomal_base";
      }
      else {
        pcVar13 = "color_bright_base";
      }
      FUN_7103778300(0x3f800000,local_80,(long)pcVar13);
      local_f8 = (byte ***)0x0;
      uStack_f0 = 0;
      local_100 = (byte ***)0x0;
      uVar14 = 0;
      FUN_7102527570(*(long *)(lVar25 + 0x30),&local_100,(long ****)0x0,ppppbVar36,param_5,param_6,
                     param_7,param_8);
      if (local_100 == local_f8) {
        uVar37 = 0;
      }
      else {
        lVar25 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        uVar26 = (*(long *)(lVar25 + 0x28) - *(long *)(lVar25 + 0x20) >> 6) * -0x3333333333333333;
        uVar37 = 0;
        pppbVar20 = local_100;
        do {
          if ((long)*(short *)(*pppbVar20 + 1) == -1) {
            uVar28 = 0xffffffff;
          }
          else {
            uVar28 = (ulong)*(ushort *)(lVar25 + (long)*(short *)(*pppbVar20 + 1) * 2 + 0x60);
          }
          puVar3 = (undefined2 *)(*(long *)(lVar25 + 0x20) + uVar28 * 0x140);
          if (uVar26 < uVar28 || uVar26 - uVar28 == 0) {
            puVar3 = &DAT_7105182b08;
          }
          if (*(char *)(puVar3 + 0x2f) == '\0') {
            if (*(byte *)(puVar3 + 0x36) < 4) {
              uVar29 = 0x1020003 >> (ulong)((*(byte *)(puVar3 + 0x36) & 3) << 3);
              goto LAB_7101e20490;
            }
          }
          else {
            uVar29 = 4;
LAB_7101e20490:
            if ((uint)*pbVar33 == (uVar29 & 0xff)) {
              uVar37 = uVar37 + 1;
            }
          }
          pppbVar20 = pppbVar20 + 1;
        } while (local_f8 != pppbVar20);
      }
      FUN_7103776910(&local_2c0,(long)&local_88,(long ****)"set_txt_num_spirit_have",uVar14,
                     ppppbVar36,param_5,param_6,param_7,param_8);
      FUN_710377a280((long)&local_2c0,(byte *)"mnu_spirits_recall_spirit_n",1);
      plVar9 = local_2b8;
      local_2c0 = &PTR_FUN_710523d9a8;
      local_2b8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar9);
      }
      if (uVar37 == 0) {
        pcVar13 = "color_nomal_spirit";
      }
      else {
        pcVar13 = "color_bright_spirit";
      }
      FUN_7103778300(0x3f800000,local_80,(long)pcVar13);
      if (uVar37 + uVar27 == 0) {
        pcVar13 = "color_nomal_txt_have";
      }
      else {
        pcVar13 = "color_bright_txt_have";
      }
      FUN_7103778300(0x3f800000,local_80,(long)pcVar13);
      lVar25 = param_1 + (long)ppppbVar30 * 4;
      uVar29 = 0;
      *(uint *)(lVar25 + 0xc08) = (uint)*pbVar32;
      do {
        param_4 = (char *)(ulong)uVar29;
        pcVar13 = "set_parts_base_%02d";
        snprintf((char *)&local_2c0,0x20,"set_parts_base_%02d",uVar29);
        if ((int)uVar29 < *(int *)(lVar25 + 0xc08)) {
          switch(*pbVar33) {
          case 0:
            FUN_7103776640(&local_148,(long)&local_88,(byte ****)&local_2c0,pcVar13,param_4,param_5,
                           param_6,param_7,param_8);
            pcVar35 = "spirit_attacker_offense";
            break;
          case 1:
            FUN_7103776640(&local_148,(long)&local_88,(byte ****)&local_2c0,pcVar13,param_4,param_5,
                           param_6,param_7,param_8);
            pcVar35 = "spirit_attacker_defense";
            break;
          case 2:
            FUN_7103776640(&local_148,(long)&local_88,(byte ****)&local_2c0,pcVar13,param_4,param_5,
                           param_6,param_7,param_8);
            pcVar35 = "spirit_attacker_throw";
            break;
          default:
            FUN_7103776640(&local_148,(long)&local_88,(byte ****)&local_2c0,pcVar13,param_4,param_5,
                           param_6,param_7,param_8);
            pcVar35 = "spirit_attacker_non";
            break;
          case 4:
            FUN_7103776640(&local_148,(long)&local_88,(byte ****)&local_2c0,pcVar13,param_4,param_5,
                           param_6,param_7,param_8);
            pcVar35 = "spirit_supporter";
          }
          uVar26 = local_140;
          FUN_7103778300(0x3f800000,local_140,(long)pcVar35);
          local_148 = &PTR_FUN_710523d988;
          local_140 = 0;
          if (uVar26 != 0) {
            uVar28 = *(ulong *)(uVar26 + 0x18);
            *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar26 + 0x18) = 0;
            if (uVar28 != 0) {
              FUN_710392eb40(uVar28);
            }
            FUN_710392eb40(uVar26);
          }
          FUN_7103776640(&local_148,(long)&local_88,(byte ****)&local_2c0,pcVar13,param_4,param_5,
                         param_6,param_7,param_8);
          uVar26 = local_140;
          FUN_7103778300(0x3f800000,local_140,0x71043089f8);
          local_148 = &PTR_FUN_710523d988;
          local_140 = 0;
          if (uVar26 != 0) {
            uVar28 = *(ulong *)(uVar26 + 0x18);
            *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar26 + 0x18) = 0;
            if (uVar28 != 0) {
              FUN_710392eb40(uVar28);
            }
            FUN_710392eb40(uVar26);
          }
          FUN_7103776640(&local_148,(long)&local_88,(byte ****)&local_2c0,pcVar13,param_4,param_5,
                         param_6,param_7,param_8);
          uVar26 = local_140;
          FUN_7103778300(0x3f800000,local_140,0x710438d061);
        }
        else {
          FUN_7103776640(&local_148,(long)&local_88,(byte ****)&local_2c0,pcVar13,param_4,param_5,
                         param_6,param_7,param_8);
          uVar26 = local_140;
          if ((*(long *)(local_140 + 8) != 0) &&
             (lVar19 = *(long *)(*(long *)(local_140 + 8) + 0x18), lVar19 != 0)) {
            *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
          }
        }
        local_140 = 0;
        local_148 = &PTR_FUN_710523d988;
        if (uVar26 != 0) {
          local_140 = 0;
          local_148 = &PTR_FUN_710523d988;
          uVar28 = *(ulong *)(uVar26 + 0x18);
          *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar26 + 0x18) = 0;
          if (uVar28 != 0) {
            FUN_710392eb40(uVar28);
          }
          FUN_710392eb40(uVar26);
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != 6);
      lVar25 = param_1 + (long)ppppbVar30 * 0x40;
      *(uint *)(lVar25 + 0xf54) = (uint)*pbVar32;
      *(undefined1 *)(lVar25 + 0xf50) = 0;
      FUN_7103778300(0x3f800000,local_80,0x71042f8875);
      if (local_100 != (byte ***)0x0) {
        local_f8 = local_100;
        FUN_710392eb40((ulong)local_100);
      }
    }
    else {
      lVar25 = *(long *)(lVar31 + 0x1d8);
      uVar28 = (ulong)*(ushort *)(lVar25 + lVar19 * 2 + 0x60);
      uVar26 = (*(long *)(lVar25 + 0x28) - *(long *)(lVar25 + 0x20) >> 6) * -0x3333333333333333;
      puVar3 = (undefined2 *)(*(long *)(lVar25 + 0x20) + uVar28 * 0x140);
      if (uVar26 < uVar28 || uVar26 - uVar28 == 0) {
        puVar3 = &DAT_7105182b08;
      }
      if ((short)*puVar34 < 2000) {
        lVar25 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        uVar5 = *(ushort *)(lVar25 + lVar19 * 2 + 0x60);
        uVar26 = (ulong)uVar5;
        uVar28 = (*(long *)(lVar25 + 0x28) - *(long *)(lVar25 + 0x20) >> 6) * -0x3333333333333333;
        if ((uint)uVar5 < (uint)uVar28) {
          puVar2 = (undefined2 *)(*(long *)(lVar25 + 0x20) + uVar26 * 0x140);
          if (uVar28 < uVar26 || uVar28 - uVar26 == 0) {
            puVar2 = &DAT_7105182b08;
          }
          if (*(char *)(puVar2 + 0x2f) == '\0') {
            uVar12 = 0;
            if (*(byte *)(puVar2 + 0x36) - 1 < 3) {
              uVar12 = (char)(0x20301 >> (ulong)((*(byte *)(puVar2 + 0x36) - 1 & 3) << 3));
            }
          }
          else {
            uVar12 = 4;
          }
        }
        else {
          uVar12 = 0;
        }
      }
      else {
        uVar12 = 0;
      }
      uVar14 = 0;
      FUN_710339dde0((uint *)&local_100,uVar12,'\0');
      uVar7 = local_138._2_2_;
      switch(*(undefined1 *)(puVar3 + 0x34)) {
      case 0:
        local_148._4_4_ = 10;
        uVar27 = 99;
        local_140 = 0x6f6e5f7373616c63;
        uVar37 = 0x811c9dc5;
        local_138 = CONCAT13(local_138._3_1_,0x656e);
        pbVar33 = pbVar23;
        do {
          uVar37 = uVar37 * 0x89 ^ uVar27;
          uVar27 = (uint)*pbVar33;
          pbVar33 = pbVar33 + 1;
        } while (uVar27 != 0);
        break;
      case 1:
        local_148._4_4_ = 10;
        uVar27 = 99;
        local_140 = 0x6f685f7373616c63;
        uVar37 = 0x811c9dc5;
        local_138 = CONCAT13(local_138._3_1_,0x6570);
        pbVar33 = pbVar23;
        do {
          uVar37 = uVar37 * 0x89 ^ uVar27;
          uVar27 = (uint)*pbVar33;
          pbVar33 = pbVar33 + 1;
        } while (uVar27 != 0);
        break;
      case 2:
        uVar27 = 99;
        local_148._4_4_ = 9;
        local_140 = 0x63615f7373616c63;
        uVar37 = 0x811c9dc5;
        local_138 = CONCAT22(uVar7,0x65);
        pbVar33 = pbVar23;
        do {
          uVar37 = uVar37 * 0x89 ^ uVar27;
          uVar27 = (uint)*pbVar33;
          pbVar33 = pbVar33 + 1;
        } while (uVar27 != 0);
        break;
      case 3:
        local_148._4_4_ = 0xc;
        uVar27 = 99;
        local_140 = 0x656c5f7373616c63;
        local_138 = 0x646e6567;
        uVar37 = 0x811c9dc5;
        local_134 = 0;
        pbVar33 = pbVar23;
        do {
          uVar37 = uVar37 * 0x89 ^ uVar27;
          uVar27 = (uint)*pbVar33;
          pbVar33 = pbVar33 + 1;
        } while (uVar27 != 0);
        break;
      default:
        local_148._4_4_ = 10;
        uVar27 = 99;
        local_140 = 0x6f6e5f7373616c63;
        uVar37 = 0x811c9dc5;
        local_138 = CONCAT13(local_138._3_1_,0x656e);
        pbVar33 = pbVar23;
        do {
          uVar37 = uVar37 * 0x89 ^ uVar27;
          uVar27 = (uint)*pbVar33;
          pbVar33 = pbVar33 + 1;
        } while (uVar27 != 0);
      }
      local_148 = (undefined **)CONCAT44(local_148._4_4_,uVar37);
      FUN_7103778300(0x3f800000,local_80,(long)&local_f8);
      FUN_7103776640(&local_2c0,(long)&local_88,(byte ****)"set_parts_icon_base",uVar14,param_4,
                     param_5,param_6,param_7,param_8);
      plVar9 = local_2b8;
      FUN_7103778300(0x3f800000,(long)local_2b8,(long)&local_f8);
      local_2c0 = &PTR_FUN_710523d988;
      local_2b8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        uVar26 = plVar9[3];
        plVar9[2] = (long)&PTR_FUN_710523d9a8;
        plVar9[3] = 0;
        if (uVar26 != 0) {
          FUN_710392eb40(uVar26);
        }
        FUN_710392eb40((ulong)plVar9);
      }
      FUN_7103776640(&local_2c0,(long)&local_88,(byte ****)"set_parts_icon_base",uVar14,param_4,
                     param_5,param_6,param_7,param_8);
      plVar9 = local_2b8;
      FUN_7103778300(0x3f800000,(long)local_2b8,(long)&local_140);
      local_2c0 = &PTR_FUN_710523d988;
      local_2b8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        uVar26 = plVar9[3];
        plVar9[2] = (long)&PTR_FUN_710523d9a8;
        plVar9[3] = 0;
        if (uVar26 != 0) {
          FUN_710392eb40(uVar26);
        }
        FUN_710392eb40((ulong)plVar9);
      }
      lVar25 = *(long *)(lVar31 + 0x1d8);
      uVar26 = FUN_71032a9470(lVar25,*puVar34);
      FUN_71032a9540((uint *)&local_2c0,lVar25,uVar26);
      FUN_71003a4ca0((uint *)&pppbStack_190,"spi_%s",&local_2b8,uVar26,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103776910(&local_2c0,(long)&local_88,(long ****)"set_txt_base",uVar26,param_4,param_5,
                     param_6,param_7,param_8);
      uVar14 = 1;
      puVar17 = auStack_188;
      FUN_710377a280((long)&local_2c0,(byte *)"mnu_spirits_select_ped_nam",1);
      plVar9 = local_2b8;
      local_2c0 = &PTR_FUN_710523d9a8;
      local_2b8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar9);
      }
      uVar5 = *puVar34;
      uVar37 = 0;
      if ((uVar5 != 0xffff) && (iVar8 = (int)(short)uVar5, iVar8 < 2000)) {
        lVar25 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        if ((uint)*(ushort *)(lVar25 + (long)iVar8 * 2 + 0x60) <
            (uint)((int)((ulong)(*(long *)(lVar25 + 0x28) - *(long *)(lVar25 + 0x20)) >> 6) *
                  -0x33333333)) {
          uVar37 = (uint)*(ushort *)(*(long *)(lVar18 + 0x30) + (long)iVar8 * 0x24 + 0x20);
        }
        else {
          uVar37 = 0;
        }
      }
      FUN_7103776910(&local_2c0,(long)&local_88,(long ****)"set_txt_num_spirit_have",uVar14,puVar17,
                     param_5,param_6,param_7,param_8);
      uVar14 = 1;
      uVar26 = (ulong)uVar37;
      FUN_710377a280((long)&local_2c0,(byte *)"mnu_spirits_recall_spirit_n",1);
      plVar9 = local_2b8;
      local_2c0 = &PTR_FUN_710523d9a8;
      local_2b8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar9);
      }
      if (uVar37 == 0) {
        pcVar13 = "color_nomal_spirit";
      }
      else {
        pcVar13 = "color_bright_spirit";
      }
      FUN_7103778300(0x3f800000,local_80,(long)pcVar13);
      uVar5 = *puVar34;
      uVar27 = 0;
      if ((uVar5 != 0xffff) && (iVar8 = (int)(short)uVar5, iVar8 < 2000)) {
        lVar25 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        if ((uint)*(ushort *)(lVar25 + (long)iVar8 * 2 + 0x60) <
            (uint)((int)((ulong)(*(long *)(lVar25 + 0x28) - *(long *)(lVar25 + 0x20)) >> 6) *
                  -0x33333333)) {
          uVar27 = (uint)*(byte *)(*(long *)(lVar18 + 0x30) + (long)iVar8 * 0x24);
        }
        else {
          uVar27 = 0;
        }
      }
      FUN_7103776910(&local_2c0,(long)&local_88,(long ****)"set_txt_num_base_have",uVar14,uVar26,
                     param_5,param_6,param_7,param_8);
      FUN_710377a280((long)&local_2c0,(byte *)"mnu_spirits_recall_rev_pedestal_n",1);
      plVar9 = local_2b8;
      local_2c0 = &PTR_FUN_710523d9a8;
      local_2b8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar9);
      }
      if (uVar27 == 0) {
        pcVar13 = "color_nomal_base";
      }
      else {
        pcVar13 = "color_bright_base";
      }
      FUN_7103778300(0x3f800000,local_80,(long)pcVar13);
      if (uVar37 + uVar27 == 0) {
        pcVar13 = "color_nomal_txt_have";
      }
      else {
        pcVar13 = "color_bright_txt_have";
      }
      FUN_7103778300(0x3f800000,local_80,(long)pcVar13);
      lVar25 = param_1 + (long)ppppbVar30 * 4;
      uVar29 = 0;
      *(undefined4 *)(lVar25 + 0xc08) = 1;
      do {
        param_4 = (char *)(ulong)uVar29;
        pcVar13 = "set_parts_base_%02d";
        snprintf((char *)&local_2c0,0x20,"set_parts_base_%02d",uVar29);
        if ((int)uVar29 < *(int *)(lVar25 + 0xc08)) {
          FUN_7103776640(&local_98,(long)&local_88,(byte ****)&local_2c0,pcVar13,param_4,param_5,
                         param_6,param_7,param_8);
          puVar6 = local_90;
          FUN_7103778300(0x3f800000,(long)local_90,(long)&local_f8);
          local_98 = &PTR_FUN_710523d988;
          local_90 = (undefined8 *)0x0;
          if (puVar6 != (undefined8 *)0x0) {
            uVar26 = puVar6[3];
            puVar6[2] = &PTR_FUN_710523d9a8;
            puVar6[3] = 0;
            if (uVar26 != 0) {
              FUN_710392eb40(uVar26);
            }
            FUN_710392eb40((ulong)puVar6);
          }
          FUN_7103776640(&local_98,(long)&local_88,(byte ****)&local_2c0,pcVar13,param_4,param_5,
                         param_6,param_7,param_8);
          puVar6 = local_90;
          FUN_7103778300(0x3f800000,(long)local_90,(long)&local_140);
          local_98 = &PTR_FUN_710523d988;
          local_90 = (undefined8 *)0x0;
          if (puVar6 != (undefined8 *)0x0) {
            uVar26 = *(ulong *)((long)puVar6 + 0x18);
            *(undefined ***)((long)puVar6 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)((long)puVar6 + 0x18) = 0;
            if (uVar26 != 0) {
              FUN_710392eb40(uVar26);
            }
            FUN_710392eb40((ulong)puVar6);
          }
          FUN_7103776640(&local_98,(long)&local_88,(byte ****)&local_2c0,pcVar13,param_4,param_5,
                         param_6,param_7,param_8);
          puVar6 = local_90;
          FUN_7103778300(0x3f800000,(long)local_90,0x71043089f8);
          local_98 = &PTR_FUN_710523d988;
          local_90 = (undefined8 *)0x0;
          if (puVar6 != (undefined8 *)0x0) {
            uVar26 = *(ulong *)((long)puVar6 + 0x18);
            *(undefined ***)((long)puVar6 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)((long)puVar6 + 0x18) = 0;
            if (uVar26 != 0) {
              FUN_710392eb40(uVar26);
            }
            FUN_710392eb40((ulong)puVar6);
          }
          FUN_7103776640(&local_98,(long)&local_88,(byte ****)&local_2c0,pcVar13,param_4,param_5,
                         param_6,param_7,param_8);
          puVar6 = local_90;
          FUN_7103778300(0x3f800000,(long)local_90,0x71042b48e5);
        }
        else {
          FUN_7103776640(&local_98,(long)&local_88,(byte ****)&local_2c0,pcVar13,param_4,param_5,
                         param_6,param_7,param_8);
          puVar6 = local_90;
          if ((local_90[1] != 0) && (lVar19 = *(long *)(local_90[1] + 0x18), lVar19 != 0)) {
            *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
          }
        }
        local_90 = (undefined8 *)0x0;
        local_98 = &PTR_FUN_710523d988;
        if (puVar6 != (undefined8 *)0x0) {
          local_90 = (undefined8 *)0x0;
          local_98 = &PTR_FUN_710523d988;
          uVar26 = puVar6[3];
          puVar6[2] = &PTR_FUN_710523d9a8;
          puVar6[3] = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40((ulong)puVar6);
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != 6);
      lVar25 = param_1 + (long)ppppbVar30 * 0x40;
      *(uint *)(lVar25 + 0xf54) = (uint)*pbVar32;
      *(undefined1 *)(lVar25 + 0xf50) = 1;
      FUN_7103778300(0x3f800000,local_80,0x71043cf9e1);
    }
switchD_7101e1fac4_caseD_5:
    FUN_7103778300(0x3f800000,local_80,0x710433a689);
    FUN_7103778300(0x3f800000,local_80,0x710433a65a);
    if (uVar27 + uVar37 < (uint)*pbVar32) {
      FUN_7103776910(&local_2c0,(long)&local_88,(long ****)"icon_caution",pcVar13,param_4,param_5,
                     param_6,param_7,param_8);
      lVar25 = *local_2b8;
      plVar9 = local_2b8;
      if (lVar25 != 0) {
        bVar24 = *(byte *)(lVar25 + 0x58) | 1;
LAB_7101e2080c:
        *(byte *)(lVar25 + 0x58) = bVar24;
        plVar9 = local_2b8;
      }
    }
    else {
      FUN_7103776910(&local_2c0,(long)&local_88,(long ****)"icon_caution",pcVar13,param_4,param_5,
                     param_6,param_7,param_8);
      lVar25 = *local_2b8;
      plVar9 = local_2b8;
      if (lVar25 != 0) {
        bVar24 = *(byte *)(lVar25 + 0x58) & 0xfe;
        goto LAB_7101e2080c;
      }
    }
    local_2c0 = &PTR_FUN_710523d9a8;
    local_2b8 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar9);
    }
    FUN_7103776910(&local_2c0,(long)&local_88,(long ****)"set_txt_atr",pcVar13,param_4,param_5,
                   param_6,param_7,param_8);
    plVar9 = local_2b8;
    lVar25 = *local_2b8;
    if (lVar25 != 0) {
      *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe;
    }
    local_2c0 = &PTR_FUN_710523d9a8;
    local_2b8 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar9);
    }
    uVar26 = local_80;
    *(int *)(param_1 + 0xc04) = *(int *)(param_1 + 0xc04) + 1;
    local_88 = &PTR_FUN_710523d988;
    local_80 = 0;
    if (uVar26 != 0) {
      uVar28 = *(ulong *)(uVar26 + 0x18);
      *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar26 + 0x18) = 0;
      if (uVar28 != 0) {
        FUN_710392eb40(uVar28);
      }
      FUN_710392eb40(uVar26);
    }
    ppppbVar30 = (byte ****)((long)ppppbVar30 + 1);
  } while (ppppbVar30 < &DAT_00000004);
  if (*(int *)(param_1 + 0xc04) == 3) {
    lVar25 = *(long *)(param_1 + 0xba8);
    pcVar13 = "view_list_01";
  }
  else if (*(int *)(param_1 + 0xc04) == 2) {
    lVar25 = *(long *)(param_1 + 0xba8);
    pcVar13 = "view_list_00";
  }
  else {
    lVar25 = *(long *)(param_1 + 0xba8);
    pcVar13 = "view_list_02";
  }
  FUN_7103778300(0x3f800000,lVar25,(long)pcVar13);
  if (*(char *)(param_1 + 0xf01) == '\0') {
    local_2b0 = CONCAT17(local_2b0._7_1_,0x1000100000001);
    local_2a8 = 0;
    uStack_2a6 = 0;
    uStack_2a5 = 0xf0000000;
    uStack_2a1 = 0x41;
    local_2c0 = (undefined **)0x0;
    local_2b8 = (long *)0x101;
    uStack_2a0 = 0;
    uStack_29f = 0;
    uStack_29e = 0;
    local_270 = (long *)0x0;
    local_240 = (long *)0x0;
    local_210 = (long *)0x0;
    local_1e0 = (long *)0x0;
    local_1b0 = (long *)0x0;
    local_1a0 = 0;
    FUN_710337df20((long)&local_2c0);
    local_100 = (byte ***)&PTR_FUN_71050b16a8;
    local_e0 = &local_100;
    FUN_7101989a30((long *)&local_100,alStack_230);
    if (&local_100 == local_e0) {
      ppbVar21 = (*local_e0)[4];
LAB_7101e20a8c:
      (*(code *)ppbVar21)();
    }
    else if (local_e0 != (byte ****)0x0) {
      ppbVar21 = (*local_e0)[5];
      goto LAB_7101e20a8c;
    }
    ppppbVar30 = (byte ****)&local_2c0;
    local_2b8 = (long *)((ulong)local_2b8 & 0xffffffffffff0000);
    FUN_7103770b30((long *)(param_1 + 0x528),puVar1,(long ****)"selector_0",ppppbVar30,param_5,
                   param_6,param_7,param_8);
    FUN_71037717d0((long *)(param_1 + 0x528),4,"set_parts_btn_recommend",ppppbVar30,param_5,param_6,
                   param_7,param_8);
    local_100 = (byte ***)0x7fc420ce8;
    FUN_7103772070(*(long *)(param_1 + 0x528),4,(long ****)&local_100,ppppbVar30,param_5,param_6,
                   param_7,param_8);
    plVar9 = (long *)(param_1 + 0xb38);
    param_4 = (char *)&local_2c0;
    FUN_7103770b30(plVar9,puVar1,(long ****)"selector_1",(byte ****)param_4,param_5,param_6,param_7,
                   param_8);
    FUN_71037717d0(plVar9,5,"set_btn_tab_00",param_4,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar9,6,"set_btn_tab_01",param_4,param_5,param_6,param_7,param_8);
    (**(code **)(**(long **)(param_1 + 0xb38) + 0x60))(*(long **)(param_1 + 0xb38),0);
    *(undefined1 *)(param_1 + 0xf01) = 1;
    if (alStack_1d0 == local_1b0) {
      pcVar22 = *(code **)(*local_1b0 + 0x20);
LAB_7101e20b74:
      (*pcVar22)();
    }
    else if (local_1b0 != (long *)0x0) {
      pcVar22 = *(code **)(*local_1b0 + 0x28);
      goto LAB_7101e20b74;
    }
    if (alStack_200 == local_1e0) {
      pcVar22 = *(code **)(*local_1e0 + 0x20);
LAB_7101e20ba4:
      (*pcVar22)();
    }
    else if (local_1e0 != (long *)0x0) {
      pcVar22 = *(code **)(*local_1e0 + 0x28);
      goto LAB_7101e20ba4;
    }
    if (alStack_230 == local_210) {
      pcVar22 = *(code **)(*local_210 + 0x20);
LAB_7101e20bd4:
      (*pcVar22)();
    }
    else if (local_210 != (long *)0x0) {
      pcVar22 = *(code **)(*local_210 + 0x28);
      goto LAB_7101e20bd4;
    }
    if (alStack_260 == local_240) {
      pcVar22 = *(code **)(*local_240 + 0x20);
LAB_7101e20c04:
      (*pcVar22)();
    }
    else if (local_240 != (long *)0x0) {
      pcVar22 = *(code **)(*local_240 + 0x28);
      goto LAB_7101e20c04;
    }
    if (alStack_290 == local_270) {
      pcVar22 = *(code **)(*local_270 + 0x20);
    }
    else {
      if (local_270 == (long *)0x0) goto LAB_7101e20c38;
      pcVar22 = *(code **)(*local_270 + 0x28);
    }
    (*pcVar22)();
  }
LAB_7101e20c38:
  if (0 < *(int *)(param_1 + 0xc04)) {
    uVar37 = 0;
    do {
      param_4 = (char *)(ulong)uVar37;
      pcVar13 = "set_parts_list_%02d";
      snprintf((char *)&pppbStack_190,0x20,"set_parts_list_%02d",uVar37);
      FUN_7103776640(&local_2c0,(long)puVar1,&pppbStack_190,pcVar13,param_4,param_5,param_6,param_7,
                     param_8);
      plVar9 = local_2b8;
      FUN_7103778300(0x3f800000,(long)local_2b8,0x710435bcec);
      local_2c0 = &PTR_FUN_710523d988;
      local_2b8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        uVar26 = plVar9[3];
        plVar9[2] = (long)&PTR_FUN_710523d9a8;
        plVar9[3] = 0;
        if (uVar26 != 0) {
          FUN_710392eb40(uVar26);
        }
        FUN_710392eb40((ulong)plVar9);
      }
      uVar37 = uVar37 + 1;
    } while ((int)uVar37 < *(int *)(param_1 + 0xc04));
  }
  (**(code **)(**(long **)(param_1 + 0x170) + 0x70))(*(long **)(param_1 + 0x170),0);
  (**(code **)(**(long **)(param_1 + 0x170) + 0x60))(*(long **)(param_1 + 0x170),0);
  pppplVar15 = (long ****)0x1001;
  FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x160),0,(long ****)0x1001,(byte ****)param_4,
                 param_5,param_6,param_7,param_8);
  *(undefined4 *)(param_1 + 0xbe8) = *(undefined4 *)(*(long *)(param_1 + 0x178) + 0x2a4);
  FUN_7103775fa0((long *)**(undefined8 **)(param_1 + 0x150),extraout_x1,pppplVar15,
                 (byte ****)param_4,param_5,param_6,param_7,param_8);
  FUN_7101e21d30(param_1,2,(undefined **)pppplVar15,(byte ****)param_4,param_5,param_6,param_7,
                 param_8);
  local_b0 = (long ****)0x0;
  uStack_a8 = 0;
  local_b8 = (byte ***)0x0;
  FUN_7102527570(*(long *)(lVar18 + 0x30),&local_b8,(long ****)0x0,(byte ****)param_4,param_5,
                 param_6,param_7,param_8);
  pppplVar15 = (long ****)(param_1 + 0x580);
  *(undefined4 *)(param_1 + 0x82c) = 0;
  if ((byte ****)(param_1 + 0x760) != &local_b8) {
    FUN_7101958040((byte ****)(param_1 + 0x760),local_b8,local_b0,(byte ****)param_4,param_5,param_6
                   ,param_7,param_8);
  }
  *(undefined8 *)(param_1 + 0x778) = *(undefined8 *)(param_1 + 0x768);
  FUN_7101dfe6f0((long)pppplVar15,0);
  *(undefined4 *)(param_1 + 0x824) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x820) = 0;
  memset((void *)(param_1 + 0x830),0,0x2fc);
  local_2c0 = (undefined **)0x0;
  local_2b8 = (long *)0x4248000041800000;
  local_2a8 = 0;
  uStack_2a6 = 1;
  local_270 = (long *)0x0;
  local_2b0 = 0x101013f800000;
  local_240 = (long *)0x0;
  local_210 = (long *)0x0;
  local_1e0 = (long *)0x0;
  local_1b0 = (long *)0x0;
  uStack_29f = 0;
  uStack_2a1 = 0;
  uStack_2a0 = 0;
  uStack_2a5 = 0;
  FUN_710337e790((long)&local_2c0);
  uStack_2a5 = CONCAT31(0x101,(undefined1)uStack_2a5);
  uStack_2a1 = 0;
  local_2b0 = CONCAT44(1,(undefined4)local_2b0);
  pcVar13 = "scroll_1";
  ppppbVar30 = (byte ****)&local_2c0;
  local_2c0 = (undefined **)
              CONCAT44((int)((ulong)((long)local_b0 - (long)local_b8) >> 3),(uint)local_2c0);
  FUN_7103781a20((long *)(param_1 + 0x570),puVar1,(byte ****)"scroll_1",ppppbVar30,pppplVar15,
                 param_6,param_7,param_8);
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x150),0);
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x168),0);
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x160),1);
  lVar18 = *(long *)**(undefined8 **)(param_1 + 0x160);
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0xdc) = 0x280;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0xe0) = 0x110;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x28) = 0x80;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x2c) = 0x10;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x20) = 0x300;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x30) = 0x400;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x34) = 0x300;
  FUN_7103776910(&local_2d0,(long)puVar1,(long ****)"set_parts_det_key",pcVar13,ppppbVar30,
                 pppplVar15,param_6,param_7,param_8);
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    ppuVar16 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    pcVar13 = (char *)ppuVar16;
  }
  plVar9 = local_2c8;
  if ((DAT_7105307b68._4_4_ < 7) && ((1 << (ulong)(DAT_7105307b68._4_4_ & 0x1f) & 0x58U) != 0)) {
    lVar18 = *local_2c8;
    if (lVar18 != 0) {
      bVar24 = *(byte *)(lVar18 + 0x58) & 0xfe;
LAB_7101e20f40:
      *(byte *)(lVar18 + 0x58) = bVar24;
    }
  }
  else {
    lVar18 = *local_2c8;
    if (lVar18 != 0) {
      bVar24 = *(byte *)(lVar18 + 0x58) | 1;
      goto LAB_7101e20f40;
    }
  }
  FUN_7103776ad0(&local_100,(long)puVar1,(long ****)"set_btn_key_l",pcVar13,ppppbVar30,pppplVar15,
                 param_6,param_7,param_8);
  pppbVar20 = local_f8;
  ppbVar21 = *local_f8;
  if (ppbVar21 != (byte **)0x0) {
    (**(code **)(*ppbVar21 + 0x218))(ppbVar21,1);
    (**(code **)(*ppbVar21 + 0x408))(ppbVar21);
    (**(code **)(*ppbVar21 + 1000))(ppbVar21,1);
    iVar8 = (**(code **)(*ppbVar21 + 0x140))(ppbVar21);
    if ((iVar8 != 6) && (iVar8 = (**(code **)(*ppbVar21 + 0x140))(ppbVar21), iVar8 != 1)) {
      (**(code **)(*ppbVar21 + 0x3f8))(ppbVar21);
    }
    uVar26 = (**(code **)(*ppbVar21 + 0x158))(ppbVar21);
    if ((uVar26 & 1) == 0) {
      (**(code **)(*ppbVar21 + 0x360))(ppbVar21);
    }
  }
  local_100 = (byte ***)&PTR_FUN_710523d9c8;
  local_f8 = (byte ***)0x0;
  if (pppbVar20 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar20);
  }
  FUN_7103776ad0(&local_100,(long)puVar1,(long ****)"set_btn_key_r",pcVar13,ppppbVar30,pppplVar15,
                 param_6,param_7,param_8);
  pppbVar20 = local_f8;
  ppbVar21 = *local_f8;
  if (ppbVar21 != (byte **)0x0) {
    (**(code **)(*ppbVar21 + 0x218))(ppbVar21,1);
    (**(code **)(*ppbVar21 + 0x408))(ppbVar21);
    (**(code **)(*ppbVar21 + 1000))(ppbVar21,1);
    iVar8 = (**(code **)(*ppbVar21 + 0x140))(ppbVar21);
    if ((iVar8 != 6) && (iVar8 = (**(code **)(*ppbVar21 + 0x140))(ppbVar21), iVar8 != 1)) {
      (**(code **)(*ppbVar21 + 0x3f8))(ppbVar21);
    }
    uVar26 = (**(code **)(*ppbVar21 + 0x158))(ppbVar21);
    if ((uVar26 & 1) == 0) {
      (**(code **)(*ppbVar21 + 0x360))(ppbVar21);
    }
  }
  local_100 = (byte ***)&PTR_FUN_710523d9c8;
  local_f8 = (byte ***)0x0;
  if (pppbVar20 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar20);
  }
  FUN_7103776640(&local_100,(long)puVar1,(byte ****)"set_parts_anim_base",pcVar13,ppppbVar30,
                 pppplVar15,param_6,param_7,param_8);
  pppbVar20 = local_f8;
  if ((local_f8[1] != (byte **)0x0) && (pbVar23 = local_f8[1][3], pbVar23 != (byte *)0x0)) {
    pbVar23[0x58] = pbVar23[0x58] & 0xfe;
  }
  local_100 = (byte ***)&PTR_FUN_710523d988;
  local_f8 = (byte ***)0x0;
  if (pppbVar20 != (byte ***)0x0) {
    ppbVar21 = pppbVar20[3];
    pppbVar20[2] = &PTR_FUN_710523d9a8;
    pppbVar20[3] = (byte **)0x0;
    if (ppbVar21 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar21);
    }
    FUN_710392eb40((ulong)pppbVar20);
  }
  FUN_7103776640(&local_100,(long)puVar1,(byte ****)"set_parts_anim_spirit",pcVar13,ppppbVar30,
                 pppplVar15,param_6,param_7,param_8);
  pppbVar20 = local_f8;
  if ((local_f8[1] != (byte **)0x0) && (pbVar23 = local_f8[1][3], pbVar23 != (byte *)0x0)) {
    pbVar23[0x58] = pbVar23[0x58] & 0xfe;
  }
  local_100 = (byte ***)&PTR_FUN_710523d988;
  local_f8 = (byte ***)0x0;
  if (pppbVar20 != (byte ***)0x0) {
    ppbVar21 = pppbVar20[3];
    pppbVar20[2] = &PTR_FUN_710523d9a8;
    pppbVar20[3] = (byte **)0x0;
    if (ppbVar21 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar21);
    }
    FUN_710392eb40((ulong)pppbVar20);
  }
  uVar37 = 0;
  do {
    uVar26 = (ulong)uVar37;
    FUN_7103776640(&local_100,(long)puVar1,(byte ****)"set_parts_btn_spirit_%02d",uVar26,ppppbVar30,
                   pppplVar15,param_6,param_7,param_8);
    pppbVar20 = local_f8;
    uVar27 = DAT_71052391c0;
    DAT_71052391c0 = DAT_71052391c4;
    uVar27 = uVar27 ^ uVar27 << 0xb;
    uVar27 = uVar27 ^ uVar27 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
    DAT_71052391c4 = DAT_71052391c8;
    DAT_71052391c8 = DAT_71052391cc;
    DAT_71052391cc = uVar27;
    FUN_7103778300(0x3f800000,(long)local_f8,0x710445504c);
    fVar38 = (float)(uVar27 % 100);
    if ((pppbVar20[1] != (byte **)0x0) &&
       (plVar10 = (long *)FUN_71037964b0((long)pppbVar20[1],0x710445504c), plVar10 != (long *)0x0))
    {
      (**(code **)(*plVar10 + 0x1a0))(fVar38);
    }
    FUN_7103778300(0x3f800000,(long)pppbVar20,0x710434a8f0);
    if ((pppbVar20[1] != (byte **)0x0) &&
       (plVar10 = (long *)FUN_71037964b0((long)pppbVar20[1],0x710434a8f0), plVar10 != (long *)0x0))
    {
      (**(code **)(*plVar10 + 0x1a0))(fVar38);
    }
    FUN_7103778300(0x3f800000,(long)pppbVar20,0x71042c53b8);
    if ((pppbVar20[1] != (byte **)0x0) &&
       (plVar10 = (long *)FUN_71037964b0((long)pppbVar20[1],0x71042c53b8), plVar10 != (long *)0x0))
    {
      (**(code **)(*plVar10 + 0x1a0))(fVar38);
    }
    FUN_7103778300(0x3f800000,(long)pppbVar20,0x710428105d);
    if ((pppbVar20[1] != (byte **)0x0) &&
       (plVar10 = (long *)FUN_71037964b0((long)pppbVar20[1],0x710428105d), plVar10 != (long *)0x0))
    {
      (**(code **)(*plVar10 + 0x1a0))(fVar38);
    }
    FUN_7103776640(&local_148,(long)&local_100,(byte ****)"set_parts_class_legend",uVar26,ppppbVar30
                   ,pppplVar15,param_6,param_7,param_8);
    uVar28 = local_140;
    FUN_7103778300(0x3f800000,local_140,0x710436ac3e);
    local_148 = &PTR_FUN_710523d988;
    local_140 = 0;
    if (uVar28 != 0) {
      uVar11 = *(ulong *)(uVar28 + 0x18);
      *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar28 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar28);
    }
    FUN_7103776640(&local_148,(long)&local_100,(byte ****)"set_parts_class_legend",uVar26,ppppbVar30
                   ,pppplVar15,param_6,param_7,param_8);
    uVar28 = local_140;
    if ((*(long *)(local_140 + 8) != 0) &&
       (plVar10 = (long *)FUN_71037964b0(*(long *)(local_140 + 8),0x710436ac3e),
       plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1a0))(fVar38);
    }
    local_148 = &PTR_FUN_710523d988;
    local_140 = 0;
    if (uVar28 != 0) {
      uVar11 = *(ulong *)(uVar28 + 0x18);
      *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar28 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar28);
    }
    FUN_7103776640(&local_148,(long)&local_100,(byte ****)"set_parts_class_ace",uVar26,ppppbVar30,
                   pppplVar15,param_6,param_7,param_8);
    uVar28 = local_140;
    FUN_7103778300(0x3f800000,local_140,0x71044530ac);
    local_148 = &PTR_FUN_710523d988;
    local_140 = 0;
    if (uVar28 != 0) {
      uVar11 = *(ulong *)(uVar28 + 0x18);
      *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar28 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar28);
    }
    FUN_7103776640(&local_148,(long)&local_100,(byte ****)"set_parts_class_ace",uVar26,ppppbVar30,
                   pppplVar15,param_6,param_7,param_8);
    uVar28 = local_140;
    if ((*(long *)(local_140 + 8) != 0) &&
       (plVar10 = (long *)FUN_71037964b0(*(long *)(local_140 + 8),0x71044530ac),
       plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1a0))(fVar38);
    }
    local_148 = &PTR_FUN_710523d988;
    local_140 = 0;
    if (uVar28 != 0) {
      uVar11 = *(ulong *)(uVar28 + 0x18);
      *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar28 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar28);
    }
    FUN_7103776640(&local_148,(long)&local_100,(byte ****)"set_parts_class_hope",uVar26,ppppbVar30,
                   pppplVar15,param_6,param_7,param_8);
    uVar28 = local_140;
    FUN_7103778300(0x3f800000,local_140,0x7104442147);
    local_148 = &PTR_FUN_710523d988;
    local_140 = 0;
    if (uVar28 != 0) {
      uVar11 = *(ulong *)(uVar28 + 0x18);
      *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar28 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar28);
    }
    FUN_7103776640(&local_148,(long)&local_100,(byte ****)"set_parts_class_hope",uVar26,ppppbVar30,
                   pppplVar15,param_6,param_7,param_8);
    uVar28 = local_140;
    if ((*(long *)(local_140 + 8) != 0) &&
       (plVar10 = (long *)FUN_71037964b0(*(long *)(local_140 + 8),0x7104442147),
       plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1a0))(fVar38);
    }
    local_148 = &PTR_FUN_710523d988;
    local_140 = 0;
    if (uVar28 != 0) {
      uVar11 = *(ulong *)(uVar28 + 0x18);
      *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar28 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar28);
    }
    FUN_7103776640(&local_148,(long)&local_100,(byte ****)"set_parts_class_none",uVar26,ppppbVar30,
                   pppplVar15,param_6,param_7,param_8);
    uVar28 = local_140;
    FUN_7103778300(0x3f800000,local_140,0x7104464374);
    local_148 = &PTR_FUN_710523d988;
    local_140 = 0;
    if (uVar28 != 0) {
      uVar11 = *(ulong *)(uVar28 + 0x18);
      *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar28 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar28);
    }
    FUN_7103776640(&local_148,(long)&local_100,(byte ****)"set_parts_class_none",uVar26,ppppbVar30,
                   pppplVar15,param_6,param_7,param_8);
    uVar26 = local_140;
    if ((*(long *)(local_140 + 8) != 0) &&
       (plVar10 = (long *)FUN_71037964b0(*(long *)(local_140 + 8),0x7104464374),
       plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1a0))(fVar38);
    }
    local_148 = &PTR_FUN_710523d988;
    local_140 = 0;
    if (uVar26 != 0) {
      uVar28 = *(ulong *)(uVar26 + 0x18);
      *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar26 + 0x18) = 0;
      if (uVar28 != 0) {
        FUN_710392eb40(uVar28);
      }
      FUN_710392eb40(uVar26);
    }
    local_100 = (byte ***)&PTR_FUN_710523d988;
    local_f8 = (byte ***)0x0;
    ppbVar21 = pppbVar20[3];
    pppbVar20[2] = &PTR_FUN_710523d9a8;
    pppbVar20[3] = (byte **)0x0;
    if (ppbVar21 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar21);
    }
    FUN_710392eb40((ulong)pppbVar20);
    uVar37 = uVar37 + 1;
  } while (uVar37 != 0x1e);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x71043f0e27);
  uVar37 = *(uint *)(param_1 + 0xbf8);
  snprintf((char *)&local_100,0x20,"set_parts_list_%02d",*(int *)(param_1 + 0xbf4));
  pcVar13 = "set_parts_base_%02d";
  ppppbVar30 = (byte ****)(ulong)uVar37;
  snprintf((char *)&local_148,0x20,"set_parts_base_%02d",uVar37);
  FUN_7103776640(&local_88,(long)puVar1,&local_100,pcVar13,ppppbVar30,pppplVar15,param_6,param_7,
                 param_8);
  FUN_7103776ad0(&local_98,(long)&local_88,(long ****)&local_148,pcVar13,ppppbVar30,pppplVar15,
                 param_6,param_7,param_8);
  puVar6 = local_90;
  plVar10 = (long *)*local_90;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x218))(plVar10,0);
    (**(code **)(*plVar10 + 0x410))(plVar10);
    (**(code **)(*plVar10 + 0x3f0))(plVar10,0);
    iVar8 = (**(code **)(*plVar10 + 0x140))(plVar10);
    if ((iVar8 != 6) && (iVar8 = (**(code **)(*plVar10 + 0x140))(plVar10), iVar8 != 1)) {
      (**(code **)(*plVar10 + 0x400))(plVar10);
    }
    uVar26 = (**(code **)(*plVar10 + 0x158))(plVar10);
    if ((uVar26 & 1) == 0) {
      (**(code **)(*plVar10 + 0x370))(plVar10);
    }
  }
  local_98 = &PTR_FUN_710523d9c8;
  local_90 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  uVar26 = local_80;
  if (*(int *)(param_1 + 0xbfc) != *(int *)(param_1 + 0xbf4)) {
    FUN_7103778300(0x3f800000,local_80,0x710435bcec);
  }
  local_88 = &PTR_FUN_710523d988;
  local_80 = 0;
  if (uVar26 != 0) {
    uVar28 = *(ulong *)(uVar26 + 0x18);
    *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar26 + 0x18) = 0;
    if (uVar28 != 0) {
      FUN_710392eb40(uVar28);
    }
    FUN_710392eb40(uVar26);
  }
  if (*(int *)(param_1 + 0xdb8) != 1) {
    *(undefined4 *)(param_1 + 0xdb8) = 1;
  }
  *(undefined1 *)(param_1 + 0xd24) = 0;
  *(undefined4 *)(param_1 + 0xbf8) = 0;
  *(undefined4 *)(param_1 + 0xc00) = 0;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x710433a651);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x7104421055);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x71042e77a9);
  if (0 < *(int *)(param_1 + 0xc04)) {
    uVar37 = 0;
LAB_7101e217a8:
    uVar26 = FUN_7101e1f1b0(param_1,uVar37,pcVar13,ppppbVar30,pppplVar15,param_6,param_7,param_8);
    if ((uVar26 & 1) != 0) goto code_r0x007101e217b8;
    FUN_7103776640(&local_100,(long)puVar1,(byte ****)"btn_01_cursor",pcVar13,ppppbVar30,pppplVar15,
                   param_6,param_7,param_8);
    pppbVar20 = local_f8;
    if ((local_f8[1] != (byte **)0x0) && (pbVar23 = local_f8[1][3], pbVar23 != (byte *)0x0)) {
      pbVar23[0x58] = pbVar23[0x58] & 0xfe;
    }
    local_100 = (byte ***)&PTR_FUN_710523d988;
    local_f8 = (byte ***)0x0;
    if (pppbVar20 != (byte ***)0x0) {
      ppbVar21 = pppbVar20[3];
      pppbVar20[2] = &PTR_FUN_710523d9a8;
      pppbVar20[3] = (byte **)0x0;
      if (ppbVar21 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar21);
      }
      FUN_710392eb40((ulong)pppbVar20);
    }
    FUN_7103776640(&local_100,(long)puVar1,(byte ****)"set_parts_btn_recommend",pcVar13,ppppbVar30,
                   pppplVar15,param_6,param_7,param_8);
    pppbVar20 = local_f8;
    if ((local_f8[1] != (byte **)0x0) && (pbVar23 = local_f8[1][3], pbVar23 != (byte *)0x0)) {
      pbVar23[0x58] = pbVar23[0x58] & 0xfe;
    }
    local_100 = (byte ***)&PTR_FUN_710523d988;
    local_f8 = (byte ***)0x0;
    if (pppbVar20 != (byte ***)0x0) {
      ppbVar21 = pppbVar20[3];
      pppbVar20[2] = &PTR_FUN_710523d9a8;
      pppbVar20[3] = (byte **)0x0;
      if (ppbVar21 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar21);
      }
      FUN_710392eb40((ulong)pppbVar20);
    }
    lVar18 = *(long *)(*(long *)(param_1 + 0x528) + 0x1b8);
    if (lVar18 != 0) {
      lVar25 = *(long *)(param_1 + 0x528) + 0x1b8;
      lVar19 = lVar25;
      do {
        if (3 < *(int *)(lVar18 + 0x20)) {
          lVar19 = lVar18;
        }
        lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < 4) * 8);
      } while (lVar18 != 0);
      if (((lVar19 != lVar25) && (*(int *)(lVar19 + 0x20) < 5)) &&
         (plVar10 = *(long **)(lVar19 + 0x28), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x218))(plVar10,0);
        (**(code **)(*plVar10 + 0x410))(plVar10);
        (**(code **)(*plVar10 + 0x3f0))(plVar10,0);
        iVar8 = (**(code **)(*plVar10 + 0x140))(plVar10);
        if ((iVar8 != 6) && (iVar8 = (**(code **)(*plVar10 + 0x140))(plVar10), iVar8 != 1)) {
          (**(code **)(*plVar10 + 0x400))(plVar10);
        }
        uVar26 = (**(code **)(*plVar10 + 0x158))(plVar10);
        if ((uVar26 & 1) == 0) {
          (**(code **)(*plVar10 + 0x370))(plVar10);
        }
      }
    }
    ppuVar16 = (undefined **)&DAT_00000004;
    FUN_7103771d60(&local_100,*(long *)(param_1 + 0x528),(long ****)&DAT_00000004,ppppbVar30,
                   pppplVar15,param_6,param_7,param_8);
    pppbVar20 = local_f8;
    ppbVar21 = *local_f8;
    if (ppbVar21 != (byte **)0x0) {
      (**(code **)(*ppbVar21 + 0x1f8))(ppbVar21,0);
      uVar26 = (**(code **)(*ppbVar21 + 0x200))(ppbVar21);
      if ((uVar26 & 1) == 0) {
        uVar37 = 1;
      }
      else {
        uVar37 = (**(code **)(*ppbVar21 + 0x210))(ppbVar21);
        uVar37 = uVar37 ^ 1;
      }
      ppuVar16 = (undefined **)0x0;
      (**(code **)(*ppbVar21 + 0x388))(ppbVar21,uVar37 & 1);
    }
    local_100 = (byte ***)&PTR_FUN_710523d9c8;
    local_f8 = (byte ***)0x0;
    if (pppbVar20 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar20);
    }
    iVar8 = 0;
    goto LAB_7101e21ac8;
  }
LAB_7101e217c8:
  FUN_7103776640(&local_100,(long)puVar1,(byte ****)"set_parts_btn_recommend",pcVar13,ppppbVar30,
                 pppplVar15,param_6,param_7,param_8);
  pppbVar20 = local_f8;
  if ((local_f8[1] != (byte **)0x0) && (pbVar23 = local_f8[1][3], pbVar23 != (byte *)0x0)) {
    pbVar23[0x58] = pbVar23[0x58] | 1;
  }
  local_100 = (byte ***)&PTR_FUN_710523d988;
  local_f8 = (byte ***)0x0;
  if (pppbVar20 != (byte ***)0x0) {
    ppbVar21 = pppbVar20[3];
    pppbVar20[2] = &PTR_FUN_710523d9a8;
    pppbVar20[3] = (byte **)0x0;
    if (ppbVar21 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar21);
    }
    FUN_710392eb40((ulong)pppbVar20);
  }
  ppuVar16 = (undefined **)&DAT_00000004;
  FUN_7103771d60(&local_100,*(long *)(param_1 + 0x528),(long ****)&DAT_00000004,ppppbVar30,
                 pppplVar15,param_6,param_7,param_8);
  pppbVar20 = local_f8;
  ppbVar21 = *local_f8;
  if (ppbVar21 != (byte **)0x0) {
    uVar37 = 1;
    (**(code **)(*ppbVar21 + 0x1f8))(ppbVar21,1);
    uVar26 = (**(code **)(*ppbVar21 + 0x200))(ppbVar21);
    if ((uVar26 & 1) != 0) {
      uVar37 = (**(code **)(*ppbVar21 + 0x210))(ppbVar21);
      uVar37 = uVar37 ^ 1;
    }
    ppuVar16 = (undefined **)0x0;
    (**(code **)(*ppbVar21 + 0x388))(ppbVar21,uVar37 & 1);
  }
  local_100 = (byte ***)&PTR_FUN_710523d9c8;
  local_f8 = (byte ***)0x0;
  if (pppbVar20 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar20);
  }
  iVar8 = 4;
LAB_7101e21ac8:
  FUN_7101e21d30(param_1,iVar8,ppuVar16,ppppbVar30,pppplVar15,param_6,param_7,param_8);
  local_2d0 = &PTR_FUN_710523d9a8;
  local_2c8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
  }
  if (alStack_1d0 == local_1b0) {
    pcVar22 = *(code **)(*local_1b0 + 0x20);
LAB_7101e21b0c:
    (*pcVar22)();
  }
  else if (local_1b0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_1b0 + 0x28);
    goto LAB_7101e21b0c;
  }
  if (alStack_200 == local_1e0) {
    pcVar22 = *(code **)(*local_1e0 + 0x20);
LAB_7101e21b3c:
    (*pcVar22)();
  }
  else if (local_1e0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_1e0 + 0x28);
    goto LAB_7101e21b3c;
  }
  if (alStack_230 == local_210) {
    pcVar22 = *(code **)(*local_210 + 0x20);
LAB_7101e21b6c:
    (*pcVar22)();
  }
  else if (local_210 != (long *)0x0) {
    pcVar22 = *(code **)(*local_210 + 0x28);
    goto LAB_7101e21b6c;
  }
  if (alStack_260 == local_240) {
    pcVar22 = *(code **)(*local_240 + 0x20);
LAB_7101e21b9c:
    (*pcVar22)();
  }
  else if (local_240 != (long *)0x0) {
    pcVar22 = *(code **)(*local_240 + 0x28);
    goto LAB_7101e21b9c;
  }
  if (alStack_290 == local_270) {
    pcVar22 = *(code **)(*local_270 + 0x20);
  }
  else {
    if (local_270 == (long *)0x0) goto LAB_7101e21bd0;
    pcVar22 = *(code **)(*local_270 + 0x28);
  }
  (*pcVar22)();
LAB_7101e21bd0:
  if (local_b8 != (byte ***)0x0) {
    local_b0 = (long ****)local_b8;
    FUN_710392eb40((ulong)local_b8);
  }
  return;
code_r0x007101e217b8:
  uVar37 = uVar37 + 1;
  if (*(int *)(param_1 + 0xc04) <= (int)uVar37) goto LAB_7101e217c8;
  goto LAB_7101e217a8;
}

