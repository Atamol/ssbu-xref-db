// addr:      7101da6780
// offset:    0x1da6780
// name:      FUN_7101da6780
// mangled:   
// signature: undefined __cdecl FUN_7101da6780(undefined8 * param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)


void FUN_7101da6780(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar15;
  long *********ppppppppplVar16;
  undefined8 uVar17;
  byte ****ppppbVar18;
  long ****pppplVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  undefined2 *puVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  byte ****ppppbVar28;
  long lVar29;
  float fVar30;
  undefined **local_1a0;
  ulong local_198 [8];
  undefined **local_158;
  ulong local_150;
  undefined **local_148;
  long *local_140 [8];
  undefined **local_100;
  ulong local_f8;
  undefined **local_f0;
  ulong local_e8;
  byte ***local_e0;
  ulong local_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
  long *local_b8 [9];
  
  FUN_7103776640(&local_d0,(long)(param_1 + 10),(byte ****)"set_parts_btn_attacker",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  lVar29 = *(long *)(DAT_710532f730 + 8);
  uVar2 = *(ushort *)(param_1 + 0x13);
  FUN_7103776640(&local_e0,(long)&local_d0,(byte ****)"set_parts_aw",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  uVar7 = local_c8;
  if (((((param_2 & 1) == 0) || (uVar2 == 0xffff)) || (1999 < (short)uVar2)) ||
     (lVar21 = *(long *)(lVar29 + 0x1d8),
     (uint)((int)((ulong)(*(long *)(lVar21 + 0x28) - *(long *)(lVar21 + 0x20)) >> 6) * -0x33333333)
     <= (uint)*(ushort *)(lVar21 + (long)(short)uVar2 * 2 + 0x60))) {
    FUN_7103778300(0x3f800000,local_c8,0x71042c5345);
    if ((*(long *)(local_d8 + 8) != 0) &&
       (lVar29 = *(long *)(*(long *)(local_d8 + 8) + 0x18), lVar29 != 0)) {
      *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
    }
    FUN_71025af650((long)&local_e0,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    goto LAB_7101da6a80;
  }
  if ((*(long *)(local_d8 + 8) != 0) &&
     (lVar21 = *(long *)(*(long *)(local_d8 + 8) + 0x18), lVar21 != 0)) {
    *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 1;
  }
  FUN_7103778300(0x3f800000,local_c8,0x71042f882f);
  ppppbVar18 = &local_e0;
  pppplVar19 = (long ****)0x2;
  ppppppppplVar16 = (long *********)0x0;
  uVar20 = 0;
  FUN_7101da7f90((long)param_1,uVar2,0,(undefined ***)ppppbVar18,(long ****)0x2,0,param_7,param_8);
  lVar21 = *(long *)(lVar29 + 0x1d8);
  lVar26 = (long)(short)uVar2 * 2;
  uVar24 = (ulong)*(ushort *)(lVar21 + lVar26 + 0x60);
  uVar22 = (*(long *)(lVar21 + 0x28) - *(long *)(lVar21 + 0x20) >> 6) * -0x3333333333333333;
  puVar1 = (undefined2 *)(*(long *)(lVar21 + 0x20) + uVar24 * 0x140);
  if (uVar22 < uVar24 || uVar22 - uVar24 == 0) {
    puVar1 = &DAT_7105182b08;
  }
  FUN_7103776640(&local_f0,(long)&local_d0,(byte ****)"set_parts_super",ppppppppplVar16,ppppbVar18,
                 pppplVar19,uVar20,param_7,param_8);
  uVar22 = local_e8;
  lVar21 = *(long *)(lVar29 + 0x1d8);
  uVar3 = *(ushort *)(lVar21 + lVar26 + 0x60);
  uVar5 = (int)((ulong)(*(long *)(lVar21 + 0x28) - *(long *)(lVar21 + 0x20)) >> 6) * -0x33333333;
  if (((uVar3 < uVar5) && (uVar3 = *(ushort *)(lVar21 + (ulong)uVar3 * 2 + 0x1000), uVar3 < uVar5))
     && (*(short *)(*(long *)(lVar21 + 0x20) + (ulong)uVar3 * 0x140) != -1)) {
    FUN_7103778300(0x3f800000,local_e8,0x710438b28f);
    FUN_7103778300(0x3f800000,local_e8,0x710437a53a);
    plVar27 = (long *)*param_1;
    local_c0 = (undefined **)FUN_7103238e70(0x71ffff14e11d26c7,0x13);
    if (((ulong)local_c0 & 0xffffffffff) != 0) {
      lVar21 = *plVar27;
      ppppppppplVar16 = (long *********)(long)*(int *)(lVar21 + 0x70);
      ppppbVar18 = (byte ****)(ulong)*(uint *)(lVar21 + 0x68);
      FUN_710323c4e0(lVar21,(ulong *)&local_c0,ppppppppplVar16,ppppbVar18,pppplVar19,uVar20,param_7,
                     param_8);
    }
    plVar12 = FUN_710323f760((long *)*param_1,0x71ffff14e11d26c7,(long ****)ppppppppplVar16,
                             ppppbVar18,pppplVar19,uVar20,param_7,param_8);
    FUN_7103776640(&local_c0,(long)&local_f0,(byte ****)"set_parts_it_skill",ppppppppplVar16,
                   ppppbVar18,pppplVar19,uVar20,param_7,param_8);
    FUN_7103776910(&local_148,(long)&local_c0,(long ****)"set_pic_icon",ppppppppplVar16,ppppbVar18,
                   pppplVar19,uVar20,param_7,param_8);
    plVar27 = local_140[0];
    FUN_7103778b80((long)local_140[0],(long)plVar12,ppppppppplVar16,ppppbVar18,pppplVar19,uVar20,
                   param_7,param_8);
    local_148 = &PTR_FUN_710523d9a8;
    local_140[0] = (long *)0x0;
    if (plVar27 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar27);
    }
    FUN_7103776910(&local_148,(long)&local_c0,(long ****)"set_txt_help",ppppppppplVar16,ppppbVar18,
                   pppplVar19,uVar20,param_7,param_8);
    FUN_710377a120((long)&local_148,"mnu_spirits_select_grade_up_99",ppppppppplVar16,ppppbVar18,
                   pppplVar19,uVar20,param_7,param_8);
    plVar27 = local_140[0];
    local_148 = &PTR_FUN_710523d9a8;
    local_140[0] = (long *)0x0;
    if (plVar27 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar27);
    }
    plVar27 = local_b8[0];
    local_c0 = &PTR_FUN_710523d988;
    local_b8[0] = (long *)0x0;
joined_r0x007101da6c34:
    if (plVar27 != (long *)0x0) {
      uVar24 = plVar27[3];
      plVar27[2] = (long)&PTR_FUN_710523d9a8;
      plVar27[3] = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      FUN_710392eb40((ulong)plVar27);
    }
  }
  else {
    if (puVar1[0x48] != 0) {
      FUN_7103778300(0x3f800000,local_e8,0x710438b28f);
      FUN_7103778300(0x3f800000,local_e8,0x710446392a);
      lVar21 = *(long *)(DAT_710532f730 + 8);
      ppppppppplVar16 = (long *********)(ulong)(ushort)puVar1[0x48];
      FUN_71032a0c90((uint *)&local_c0,lVar21 + 0x210,puVar1[0x48],ppppbVar18,pppplVar19,uVar20,
                     param_7,param_8);
      uVar24 = FUN_71032a1630(*(long *)(lVar21 + 0x218),puVar1[0x48]);
      plVar27 = (long *)*param_1;
      local_148 = (undefined **)FUN_7103238e70(uVar24,0x13);
      if (((ulong)local_148 & 0xffffffffff) != 0) {
        lVar21 = *plVar27;
        ppppppppplVar16 = (long *********)(long)*(int *)(lVar21 + 0x70);
        ppppbVar18 = (byte ****)(ulong)*(uint *)(lVar21 + 0x68);
        FUN_710323c4e0(lVar21,(ulong *)&local_148,ppppppppplVar16,ppppbVar18,pppplVar19,uVar20,
                       param_7,param_8);
      }
      plVar27 = FUN_710323f760((long *)*param_1,uVar24,(long ****)ppppppppplVar16,ppppbVar18,
                               pppplVar19,uVar20,param_7,param_8);
      FUN_7103776640(&local_148,(long)&local_f0,(byte ****)"set_parts_it_skill",ppppppppplVar16,
                     ppppbVar18,pppplVar19,uVar20,param_7,param_8);
      FUN_7103776910(&local_1a0,(long)&local_148,(long ****)"set_pic_icon",ppppppppplVar16,
                     ppppbVar18,pppplVar19,uVar20,param_7,param_8);
      uVar24 = local_198[0];
      FUN_7103778b80(local_198[0],(long)plVar27,ppppppppplVar16,ppppbVar18,pppplVar19,uVar20,param_7
                     ,param_8);
      local_1a0 = &PTR_FUN_710523d9a8;
      local_198[0] = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      FUN_7103776910(&local_1a0,(long)&local_148,(long ****)"set_txt_help",ppppppppplVar16,
                     ppppbVar18,pppplVar19,uVar20,param_7,param_8);
      FUN_710377a120((long)&local_1a0,(char *)local_b8,ppppppppplVar16,ppppbVar18,pppplVar19,uVar20,
                     param_7,param_8);
      uVar24 = local_198[0];
      local_1a0 = &PTR_FUN_710523d9a8;
      local_198[0] = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      plVar27 = local_140[0];
      local_148 = &PTR_FUN_710523d988;
      local_140[0] = (long *)0x0;
      goto joined_r0x007101da6c34;
    }
    FUN_7103778300(0x3f800000,local_e8,0x7104348100);
  }
  FUN_7103776640(&local_100,(long)&local_d0,(byte ****)"set_parts_lv_individual",ppppppppplVar16,
                 ppppbVar18,pppplVar19,uVar20,param_7,param_8);
  uVar4 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar1 + 0x36) - 1 & 3) << 3));
  if (2 < *(byte *)(puVar1 + 0x36) - 1) {
    uVar4 = 0;
  }
  ppppppppplVar16 = (long *********)0x0;
  FUN_710339dde0((uint *)&local_148,uVar4,'\0');
  uVar24 = local_f8;
  FUN_7103778300(0x3f800000,local_f8,(long)local_140);
  if (puVar1[0x35] == 0) {
    FUN_7103778300(0x3f800000,local_f8,0x7104443cf1);
  }
  else {
    FUN_7103778300(0x3f800000,local_f8,0x71043089e5);
    lVar21 = *(long *)(DAT_710532f730 + 8);
    ppppppppplVar16 = (long *********)(ulong)(ushort)puVar1[0x35];
    FUN_71032a0c90((uint *)&local_c0,lVar21 + 0x210,puVar1[0x35],ppppbVar18,pppplVar19,uVar20,
                   param_7,param_8);
    uVar13 = FUN_71032a1630(*(long *)(lVar21 + 0x218),puVar1[0x35]);
    FUN_7103776290(&local_1a0,extraout_x1_00,(long ****)ppppppppplVar16,ppppbVar18,pppplVar19,uVar20
                   ,param_7,param_8);
    switch(*(undefined1 *)(puVar1 + 0x36)) {
    case 0:
      pcVar15 = "set_parts_it_non";
      break;
    default:
      pcVar15 = "set_parts_it_offense";
      break;
    case 2:
      pcVar15 = "set_parts_it_throw";
      break;
    case 3:
      pcVar15 = "set_parts_it_defense";
    }
    FUN_7103776640(&local_158,(long)&local_100,(byte ****)pcVar15,ppppppppplVar16,ppppbVar18,
                   pppplVar19,uVar20,param_7,param_8);
    uVar6 = local_150;
    uVar25 = local_198[0];
    local_150 = 0;
    local_198[0] = uVar6;
    if (uVar25 != 0) {
      uVar14 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      FUN_710392eb40(uVar25);
    }
    local_158 = &PTR_FUN_710523d988;
    local_150 = 0;
    plVar27 = (long *)*param_1;
    local_158 = (undefined **)FUN_7103238e70(uVar13,0x13);
    if (((ulong)local_158 & 0xffffffffff) != 0) {
      lVar21 = *plVar27;
      ppppppppplVar16 = (long *********)(long)*(int *)(lVar21 + 0x70);
      ppppbVar18 = (byte ****)(ulong)*(uint *)(lVar21 + 0x68);
      FUN_710323c4e0(lVar21,(ulong *)&local_158,ppppppppplVar16,ppppbVar18,pppplVar19,uVar20,param_7
                     ,param_8);
    }
    plVar27 = FUN_710323f760((long *)*param_1,uVar13,(long ****)ppppppppplVar16,ppppbVar18,
                             pppplVar19,uVar20,param_7,param_8);
    FUN_7103776910(&local_158,(long)&local_1a0,(long ****)"set_pic_icon",ppppppppplVar16,ppppbVar18,
                   pppplVar19,uVar20,param_7,param_8);
    uVar13 = local_150;
    FUN_7103778b80(local_150,(long)plVar27,ppppppppplVar16,ppppbVar18,pppplVar19,uVar20,param_7,
                   param_8);
    local_158 = &PTR_FUN_710523d9a8;
    local_150 = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_7103776910(&local_158,(long)&local_1a0,(long ****)"set_txt_help",ppppppppplVar16,ppppbVar18,
                   pppplVar19,uVar20,param_7,param_8);
    FUN_710377a120((long)&local_158,(char *)local_b8,ppppppppplVar16,ppppbVar18,pppplVar19,uVar20,
                   param_7,param_8);
    uVar13 = local_150;
    local_158 = &PTR_FUN_710523d9a8;
    local_150 = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    local_1a0 = &PTR_FUN_710523d988;
    local_198[0] = 0;
    if (uVar6 != 0) {
      uVar13 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar6);
    }
  }
  if (3 < *(uint *)(param_1 + 0x1c)) goto LAB_7101da73a0;
  uVar3 = *(ushort *)((long)param_1 + (ulong)*(uint *)(param_1 + 0x1c) * 0x54 + 0x26a);
  if ((ulong)uVar3 == 0xffff) {
    ppppbVar28 = (byte ****)0x1;
    fVar30 = 0.0;
  }
  else {
    if (uVar3 >> 4 < 0x177) {
      puVar23 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar3 * 0x50 + 72000);
    }
    else {
      puVar23 = &DAT_710532a878;
      if (((ushort)(uVar3 + 0xe890) < 100) &&
         (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar3 + 0xe890) * 0x50,
         *(short *)(lVar21 + 0x88cc8) != -1)) {
        puVar23 = (undefined2 *)(lVar21 + 0x88cc0);
      }
    }
    uVar5 = *(uint *)(puVar23 + 6);
    lVar21 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar3 = *(ushort *)(lVar21 + (long)(short)uVar2 * 2 + 0x60);
    uVar13 = (ulong)uVar3;
    uVar25 = (*(long *)(lVar21 + 0x28) - *(long *)(lVar21 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar3 < (uint)uVar25) {
      puVar23 = (undefined2 *)(*(long *)(lVar21 + 0x20) + uVar13 * 0x140);
      if (uVar25 < uVar13 || uVar25 - uVar13 == 0) {
        puVar23 = &DAT_7105182b08;
      }
      uVar9 = FUN_71025c9ac0(*(float *)(puVar23 + 0x3a),uVar5,*(uint *)(puVar23 + 0x38));
      ppppbVar28 = (byte ****)(ulong)uVar9;
      fVar30 = 1.0;
      if (uVar9 == 99) goto LAB_7101da700c;
    }
    else {
      ppppbVar28 = (byte ****)0x1;
    }
    iVar10 = FUN_71025c9e50(uVar2,(uint)ppppbVar28);
    iVar11 = FUN_71025c9e50(uVar2,(uint)ppppbVar28 + 1);
    fVar30 = 0.0;
    if (iVar11 - iVar10 != 0) {
      fVar30 = (float)(uVar5 - iVar10) / (float)(uint)(iVar11 - iVar10);
    }
  }
LAB_7101da700c:
  FUN_7103776910(&local_c0,(long)&local_100,(long ****)"set_txt_lv",ppppppppplVar16,ppppbVar18,
                 pppplVar19,uVar20,param_7,param_8);
  uVar17 = 1;
  FUN_710377a280((long)&local_c0,(byte *)"mnu_spirits_select_lv",1);
  plVar27 = local_b8[0];
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8[0] = (long *)0x0;
  if (plVar27 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar27);
  }
  FUN_7103776910(&local_c0,(long)&local_100,(long ****)"set_bar_exp",uVar17,ppppbVar28,pppplVar19,
                 uVar20,param_7,param_8);
  plVar27 = local_b8[0];
  lVar21 = *local_b8[0];
  if (lVar21 != 0) {
    *(undefined4 *)(lVar21 + 0x4c) = 0x3f800000;
    *(float *)(lVar21 + 0x48) = fVar30;
    *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 0x10;
  }
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8[0] = (long *)0x0;
  if (plVar27 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar27);
  }
  local_c0 = (undefined **)FUN_7103238d60(*(ulong *)(puVar1 + 0x30),0x11);
  if (((ulong)local_c0 & 0xffffffffff) != 0) {
    lVar21 = param_1[5];
    ppppbVar28 = (byte ****)(ulong)*(uint *)(lVar21 + 0x68);
    FUN_710323c4e0(lVar21,(ulong *)&local_c0,(long *********)(long)*(int *)(lVar21 + 0x70),
                   ppppbVar28,pppplVar19,uVar20,param_7,param_8);
  }
  ppppppppplVar16 = (long *********)&DAT_00000011;
  plVar27 = FUN_710323f600(param_1 + 5,*(ulong *)(puVar1 + 0x30),(long ****)&DAT_00000011,ppppbVar28
                           ,pppplVar19,uVar20,param_7,param_8);
  FUN_7103776640(&local_158,(long)&local_d0,(byte ****)"set_parts_series",ppppppppplVar16,ppppbVar28
                 ,pppplVar19,uVar20,param_7,param_8);
  if (*(uint *)(param_1 + 0x1c) < 4) {
    bVar8 = FUN_71025cb340(param_1[(ulong)*(uint *)(param_1 + 0x1c) * 2 + 0x77],uVar2);
    uVar13 = local_150;
    if (bVar8) {
      FUN_7103778300(0x3f800000,local_150,0x71042c5264);
      pcVar15 = "eff_series_boost";
    }
    else {
      pcVar15 = "anim_stop_boost";
    }
    FUN_7103778300(0x3f800000,uVar13,(long)pcVar15);
    FUN_7103776910(&local_c0,(long)&local_158,(long ****)"set_rep_series_boost",ppppppppplVar16,
                   ppppbVar28,pppplVar19,uVar20,param_7,param_8);
    plVar12 = local_b8[0];
    FUN_7103778b80((long)local_b8[0],(long)plVar27,ppppppppplVar16,ppppbVar28,pppplVar19,uVar20,
                   param_7,param_8);
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar12);
    }
    FUN_7103776910(&local_c0,(long)&local_158,(long ****)"set_rep_series",ppppppppplVar16,ppppbVar28
                   ,pppplVar19,uVar20,param_7,param_8);
    plVar12 = local_b8[0];
    FUN_7103778b80((long)local_b8[0],(long)plVar27,ppppppppplVar16,ppppbVar28,pppplVar19,uVar20,
                   param_7,param_8);
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar12);
    }
    FUN_7103778300(0x3f800000,uVar13,(long)local_140);
    lVar29 = *(long *)(lVar29 + 0x1d8);
    uVar25 = FUN_71032a9470(lVar29,uVar2);
    FUN_71032a9540((uint *)&local_c0,lVar29,uVar25);
    FUN_71003a4ca0((uint *)&local_1a0,"spi_%s",local_b8,uVar25,ppppbVar28,pppplVar19,uVar20,param_7,
                   param_8);
    FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_txt_name_attacker",uVar25,ppppbVar28,
                   pppplVar19,uVar20,param_7,param_8);
    FUN_710377a120((long)&local_c0,(char *)local_198,uVar25,ppppbVar28,pppplVar19,uVar20,param_7,
                   param_8);
    plVar27 = local_b8[0];
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long *)0x0;
    if (plVar27 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar27);
    }
    FUN_7103776640(&local_c0,(long)&local_d0,(byte ****)"set_parts_class",uVar25,ppppbVar28,
                   pppplVar19,uVar20,param_7,param_8);
    plVar27 = local_b8[0];
    switch(*(undefined1 *)(puVar1 + 0x34)) {
    default:
      FUN_7103778300(0x3f800000,(long)local_b8[0],0x7104464374);
      pcVar15 = "color_none";
      break;
    case 1:
      FUN_7103778300(0x3f800000,(long)local_b8[0],0x7104442147);
      pcVar15 = "color_hope";
      break;
    case 2:
      FUN_7103778300(0x3f800000,(long)local_b8[0],0x71044530ac);
      pcVar15 = "color_ace";
      break;
    case 3:
      FUN_7103778300(0x3f800000,(long)local_b8[0],0x710436ac3e);
      pcVar15 = "color_legend";
    }
    FUN_7103778300(0x3f800000,(long)plVar27,(long)pcVar15);
    local_c0 = &PTR_FUN_710523d988;
    local_b8[0] = (long *)0x0;
    if (plVar27 != (long *)0x0) {
      uVar25 = plVar27[3];
      plVar27[2] = (long)&PTR_FUN_710523d9a8;
      plVar27[3] = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40((ulong)plVar27);
    }
    local_158 = &PTR_FUN_710523d988;
    local_150 = 0;
    if (uVar13 != 0) {
      uVar25 = *(ulong *)(uVar13 + 0x18);
      *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar13 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40(uVar13);
    }
    local_100 = &PTR_FUN_710523d988;
    local_f8 = 0;
    if (uVar24 != 0) {
      uVar13 = *(ulong *)(uVar24 + 0x18);
      *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar24 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar24);
    }
    local_f0 = &PTR_FUN_710523d988;
    local_e8 = 0;
    if (uVar22 != 0) {
      uVar24 = *(ulong *)(uVar22 + 0x18);
      *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar22 + 0x18) = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      FUN_710392eb40(uVar22);
    }
LAB_7101da6a80:
    uVar22 = local_d8;
    local_e0 = (byte ***)&PTR_FUN_710523d988;
    local_d8 = 0;
    if (uVar22 != 0) {
      uVar24 = *(ulong *)(uVar22 + 0x18);
      *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar22 + 0x18) = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      FUN_710392eb40(uVar22);
    }
    local_d0 = &PTR_FUN_710523d988;
    local_c8 = 0;
    if (uVar7 != 0) {
      uVar22 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar22 != 0) {
        FUN_710392eb40(uVar22);
      }
      FUN_710392eb40(uVar7);
    }
    return;
  }
LAB_7101da73a0:
                    /* WARNING: Subroutine does not return */
  abort();
}

