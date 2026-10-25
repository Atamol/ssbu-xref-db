// addr:      7101cfbe40
// offset:    0x1cfbe40
// name:      FUN_7101cfbe40
// mangled:   
// signature: undefined __cdecl FUN_7101cfbe40(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cfbe40(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long ***ppplVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long ****pppplVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  char *pcVar11;
  undefined *puVar12;
  byte *pbVar13;
  long *********ppppppppplVar14;
  undefined8 uVar15;
  byte ****ppppbVar16;
  long ****pppplVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint *puVar22;
  ushort uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined1 auVar28 [16];
  undefined **local_1188;
  undefined8 *local_1180;
  undefined **local_1178;
  undefined8 *local_1170;
  undefined **local_1168;
  ulong local_1160;
  undefined8 local_1158;
  ulong local_1150;
  long ***local_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  long ****local_118;
  int local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined4 local_ee;
  undefined2 local_ea;
  long ***local_c0;
  long ***local_b8 [9];
  
  *param_1 = &PTR_FUN_71050ae800;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = param_1 + 0x10;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0xf] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  pppplVar10 = param_3;
  ppppbVar16 = param_4;
  puVar8 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_158 = (long ***)((ulong)local_158 & 0xffffffff00000000);
      local_1158 = (undefined **)&DAT_00000008;
      pppplVar10 = (long ****)&local_1158;
      auVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_158);
      uVar15 = auVar28._8_8_;
      if (((auVar28._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar10,ppppbVar16,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_00, puVar8 != (undefined8 *)0x0)) goto LAB_7101cfbf08;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101cfbf08:
  FUN_7103773200(puVar8,uVar15,pppplVar10,ppppbVar16,param_5,param_6,param_7,param_8);
  param_1[0x10] = puVar8;
  pppuVar2 = (undefined ***)(param_1 + 0x11);
  FUN_7103776290(pppuVar2,extraout_x1_01,pppplVar10,ppppbVar16,param_5,param_6,param_7,param_8);
  pppuVar3 = (undefined ***)(param_1 + 0x13);
  FUN_7103776290(pppuVar3,extraout_x1_02,pppplVar10,ppppbVar16,param_5,param_6,param_7,param_8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar12 = &DAT_71045454d8;
  uVar15 = 1;
  FUN_71032cbf30(puVar1,*param_2,(ulong *)&DAT_71045454d8,(byte ****)0x1,param_5,param_6,param_7,
                 param_8);
  lVar19 = *(long *)(*(long *)(DAT_7105329740 + 8) + 0x80);
  if (*(long *)(*(long *)(DAT_7105329740 + 8) + 0x88) == lVar19) goto LAB_7101cfc8c4;
  if (*(uint *)(lVar19 + 0x814) < 2) {
    FUN_7103776640(&local_1178,*(long *)param_1[0x10] + 8,(byte ****)"set_parts_winner_panel",
                   puVar12,uVar15,param_5,param_6,param_7,param_8);
    puVar8 = local_1170;
    if (pppuVar3 != &local_1178) {
      *(undefined8 *)param_1[0x14] = *local_1170;
      *(undefined8 *)(param_1[0x14] + 8) = local_1170[1];
      puVar20 = (undefined8 *)param_1[0x14];
      if (puVar20 != local_1170) {
        *(undefined8 *)puVar20[3] = *(undefined8 *)local_1170[3];
        *(undefined8 *)(puVar20[3] + 8) = *(undefined8 *)(local_1170[3] + 8);
        *(undefined8 *)(puVar20[3] + 0x10) = *(undefined8 *)(local_1170[3] + 0x10);
        *(undefined8 *)(puVar20[3] + 0x18) = *(undefined8 *)(local_1170[3] + 0x18);
      }
    }
    local_1178 = &PTR_FUN_710523d988;
    local_1170 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      uVar9 = puVar8[3];
      puVar8[2] = &PTR_FUN_710523d9a8;
      puVar8[3] = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)puVar8);
    }
    lVar19 = *(long *)(*(long *)*puVar1 + 0x10);
    pcVar11 = "game_single";
  }
  else {
    FUN_7103776640(&local_1178,*(long *)param_1[0x10] + 8,(byte ****)"set_parts_winner_team",puVar12
                   ,uVar15,param_5,param_6,param_7,param_8);
    puVar8 = local_1170;
    if (pppuVar3 != &local_1178) {
      *(undefined8 *)param_1[0x14] = *local_1170;
      *(undefined8 *)(param_1[0x14] + 8) = local_1170[1];
      puVar20 = (undefined8 *)param_1[0x14];
      if (puVar20 != local_1170) {
        *(undefined8 *)puVar20[3] = *(undefined8 *)local_1170[3];
        *(undefined8 *)(puVar20[3] + 8) = *(undefined8 *)(local_1170[3] + 8);
        *(undefined8 *)(puVar20[3] + 0x10) = *(undefined8 *)(local_1170[3] + 0x10);
        *(undefined8 *)(puVar20[3] + 0x18) = *(undefined8 *)(local_1170[3] + 0x18);
      }
    }
    local_1178 = &PTR_FUN_710523d988;
    local_1170 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      uVar9 = puVar8[3];
      puVar8[2] = &PTR_FUN_710523d9a8;
      puVar8[3] = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)puVar8);
    }
    lVar19 = *(long *)(*(long *)*puVar1 + 0x10);
    pcVar11 = "game_team";
  }
  FUN_7103778300(0x3f800000,lVar19,(long)pcVar11);
  FUN_7103776640(&local_1188,*(long *)*puVar1 + 8,(byte ****)"set_parts_title",puVar12,uVar15,
                 param_5,param_6,param_7,param_8);
  if (pppuVar2 != &local_1188) {
    *(undefined8 *)param_1[0x12] = *local_1180;
    *(undefined8 *)(param_1[0x12] + 8) = local_1180[1];
    puVar8 = (undefined8 *)param_1[0x12];
    if (puVar8 != local_1180) {
      *(undefined8 *)puVar8[3] = *(undefined8 *)local_1180[3];
      *(undefined8 *)(puVar8[3] + 8) = *(undefined8 *)(local_1180[3] + 8);
      *(undefined8 *)(puVar8[3] + 0x10) = *(undefined8 *)(local_1180[3] + 0x10);
      *(undefined8 *)(puVar8[3] + 0x18) = *(undefined8 *)(local_1180[3] + 0x18);
    }
  }
  FUN_7103776910(&local_1158,(long)pppuVar2,(long ****)"set_txt_tnmt_title",puVar12,uVar15,param_5,
                 param_6,param_7,param_8);
  uVar9 = local_1150;
  if (*(long **)(local_1150 + 0x10) != (long *)0x0) {
    puVar12 = (undefined *)0xffffffff;
    uVar15 = 1;
    FUN_71037a2270(*(long **)(local_1150 + 0x10),(ushort *)(param_3 + 1),0xffffffff,1);
  }
  local_1158 = &PTR_FUN_710523d9a8;
  local_1150 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  FUN_7103776910(&local_1168,(long)pppuVar2,(long ****)"set_txt_rule",puVar12,uVar15,param_5,param_6
                 ,param_7,param_8);
  if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  bVar6 = DAT_710530a97b;
  uVar23 = DAT_710530a978;
  cVar5 = DAT_710530a976;
  uVar26 = (ulong)DAT_710530a978;
  uVar25 = (ulong)DAT_710530a97a;
  local_118 = &local_158;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = (long ***)0x0;
  local_110 = 0;
  FUN_7103397500((uint *)&local_c0,DAT_710530a974,DAT_710530a975,DAT_710530a978);
  uVar9 = uVar26 / 0x3c;
  uVar24 = uVar23 / 0x3c;
  uVar18 = (uint)uVar23 + uVar24 * -0x3c;
  if (0x3e6 < uVar24) {
    uVar9 = 999;
  }
  uVar21 = (ulong)uVar18 & 0xffff;
  if (0x3e6 < (uVar18 & 0xffff)) {
    uVar21 = 999;
  }
  pppplVar17 = (long ****)((uVar26 / 0xe10) * 1000000 + uVar9 * 1000 + uVar21);
  pppplVar10 = local_b8;
  if (bVar6 < 0xc) {
    uVar9 = (ulong)*(uint *)(&DAT_7104ada9c0 + (long)(char)bVar6 * 4);
  }
  else {
    uVar9 = 0x96;
  }
  uVar18 = 0x811c9dc5;
  if (cVar5 == '\x02') {
    local_108._4_4_ = 0x17;
    local_100 = 0x656c75725f6c656d;
    local_f8 = 0x6f665f6d6165745f;
    local_f0 = 0x6d72;
    local_ee = 0x305f7461;
    uVar24 = 0x6d;
    local_ea = 0x32;
    pbVar13 = (byte *)((long)&local_100 + 1);
    do {
      uVar18 = uVar18 * 0x89 ^ uVar24;
      uVar24 = (uint)*pbVar13;
      pbVar13 = pbVar13 + 1;
    } while (uVar24 != 0);
  }
  else if (cVar5 == '\x01') {
    local_108._4_4_ = 0x17;
    local_100 = 0x656c75725f6c656d;
    local_f8 = 0x6f665f6d6165745f;
    local_f0 = 0x6d72;
    local_ee = 0x305f7461;
    uVar24 = 0x6d;
    local_ea = 0x31;
    pbVar13 = (byte *)((long)&local_100 + 1);
    do {
      uVar18 = uVar18 * 0x89 ^ uVar24;
      uVar24 = (uint)*pbVar13;
      pbVar13 = pbVar13 + 1;
    } while (uVar24 != 0);
  }
  else if (cVar5 == '\0') {
    local_108._4_4_ = 0x17;
    local_100 = 0x656c75725f6c656d;
    local_f8 = 0x6f665f6d6165745f;
    local_f0 = 0x6d72;
    local_ee = 0x305f7461;
    uVar24 = 0x6d;
    local_ea = 0x30;
    pbVar13 = (byte *)((long)&local_100 + 1);
    do {
      uVar18 = uVar18 * 0x89 ^ uVar24;
      uVar24 = (uint)*pbVar13;
      pbVar13 = pbVar13 + 1;
    } while (uVar24 != 0);
  }
  else {
    local_100 = local_100 & 0xffffffffffffff00;
    local_108._4_4_ = 0;
  }
  puVar8 = &local_100;
  ppppbVar16 = (byte ****)&DAT_00000004;
  local_108 = (long ********)CONCAT44(local_108._4_4_,uVar18);
  FUN_71037ab600(&local_1158,0x800,(byte *)pppplVar10,4);
  if ((ushort)local_1158 == 0) {
    uVar26 = 0;
  }
  else {
    uVar21 = 0;
    uVar18 = 0;
    uVar26 = 0;
    uVar23 = (ushort)local_1158;
    do {
      if ((uVar23 | 1) == 0xf) {
        if (uVar23 == 0xe) {
          iVar7 = (*(ushort *)((long)&local_1158 + uVar21 * 2 + 6) >> 1) + 4;
        }
        else {
          iVar7 = 3;
          if (uVar23 != 0xf) {
            iVar7 = 0;
          }
        }
      }
      else {
        iVar7 = 1;
      }
      uVar18 = iVar7 + uVar18;
      uVar21 = (ulong)uVar18;
      uVar26 = (ulong)(uint)(iVar7 + (int)uVar26);
      uVar23 = *(ushort *)((long)&local_1158 + (ulong)uVar18 * 2);
    } while (uVar23 != 0);
  }
  lVar27 = (long)local_110;
  lVar19 = lVar27 + (int)uVar26;
  iVar7 = (int)lVar19;
  if (iVar7 < 0x20) {
    local_118 = &local_158;
    memcpy((void *)((long)local_118 + lVar27 * 2),&local_1158,
           -(uVar26 >> 0x1f) & 0xfffffffe00000000 | uVar26 << 1);
  }
  else {
    uVar21 = lVar19 + 1;
    ppplVar4 = (long ***)(uVar21 * 2);
    if (CARRY8(uVar21,uVar21)) {
      ppplVar4 = (long ***)0xffffffffffffffff;
    }
    if (ppplVar4 == (long ***)0x0) {
      ppplVar4 = (long ***)0x1;
    }
    pppplVar10 = (long ****)
                 FUN_710392e290(0x10,ppplVar4,pppplVar10,ppppbVar16,pppplVar17,uVar25,uVar9,puVar8);
    if (pppplVar10 == (long ****)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_108 = (long ********)((ulong)local_108 & 0xffffffff00000000);
        pppplVar10 = &local_c0;
        local_c0 = ppplVar4;
        uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
        if (((uVar21 & 1) != 0) &&
           (pppplVar10 = (long ****)
                         FUN_710392e290(0x10,ppplVar4,pppplVar10,ppppbVar16,pppplVar17,uVar25,uVar9,
                                        puVar8), pppplVar10 != (long ****)0x0)) goto LAB_7101cfc5b8;
      }
      pppplVar10 = (long ****)0x0;
    }
LAB_7101cfc5b8:
    pppplVar17 = local_118;
    memcpy(pppplVar10,local_118,lVar27 * 2);
    memcpy((void *)((long)pppplVar10 + lVar27 * 2),&local_1158,
           -(uVar26 >> 0x1f) & 0xfffffffe00000000 | uVar26 << 1);
    if ((&local_158 != pppplVar17) && (pppplVar17 != (long ****)0x0)) {
      FUN_710392eb40((ulong)pppplVar17);
    }
    local_158 = (long ***)((ulong)local_158 & 0xffffffffffff0000);
    local_118 = pppplVar10;
  }
  *(undefined2 *)((long)local_118 + (long)iVar7 * 2) = 0;
  lVar19 = *(long *)(*(long *)(DAT_7105329740 + 8) + 0x80);
  uVar26 = *(long *)(*(long *)(DAT_7105329740 + 8) + 0x88) - lVar19;
  local_110 = iVar7;
  if (uVar26 == 0) {
LAB_7101cfc8c4:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar15 = 2;
  ppppbVar16 = (byte ****)
               (ulong)(uint)((int)(uVar26 >> 5) * -0x3f03f03f << (1 < *(uint *)(lVar19 + 0x814)));
  pppplVar10 = local_118;
  FUN_710377a280((long)&local_1168,(byte *)"mel_tournament_chart_rule",2);
  if ((&local_158 != local_118) && (local_118 != (long ****)0x0)) {
    FUN_710392eb40((ulong)local_118);
  }
  uVar26 = local_1160;
  local_1168 = &PTR_FUN_710523d9a8;
  local_1160 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  puVar20 = local_1180;
  local_1188 = &PTR_FUN_710523d988;
  local_1180 = (undefined8 *)0x0;
  if (puVar20 != (undefined8 *)0x0) {
    uVar26 = puVar20[3];
    puVar20[2] = &PTR_FUN_710523d9a8;
    puVar20[3] = 0;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
    FUN_710392eb40((ulong)puVar20);
  }
  FUN_7103778300(0x3f800000,param_1[0x12],0x7104348100);
  FUN_7103778300(0x3f800000,*(long *)(*(long *)param_1[0x10] + 0x10),0x710435b9a9);
  if (((ulong)param_4 & 1) == 0) {
    pcVar11 = "waiting_type_lose";
  }
  else {
    pcVar11 = "waiting_type_alive";
  }
  FUN_7103778300(0x3f800000,*(long *)(*(long *)param_1[0x10] + 0x10),(long)pcVar11);
  uVar26 = *(ulong *)(DAT_7105329740 + 8);
  if (*(int *)(uVar26 + 0x4d8) == 1) {
    puVar22 = *(uint **)(uVar26 + 0x1b8);
    if (*(uint **)(uVar26 + 0x1c0) == puVar22) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
  }
  else if (*(int *)(uVar26 + 0x4d8) == 2) {
    if (*(char *)(uVar26 + 0x568) == '\0') goto LAB_7101cfc790;
    puVar22 = (uint *)(uVar26 + 0x738);
  }
  else {
    puVar22 = *(uint **)(uVar26 + 0x1a0);
    if (*(uint **)(uVar26 + 0x1a8) == puVar22) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
  }
  uVar26 = (ulong)*puVar22;
LAB_7101cfc790:
  local_108 = (long ********)CONCAT44(local_108._4_4_,(int)uVar26);
  FUN_7103776910(&local_c0,*(long *)*puVar1 + 8,(long ****)"set_txt_title_prog",uVar15,ppppbVar16,
                 pppplVar10,uVar25,uVar9,puVar8);
  pbVar13 = (byte *)&local_108;
  FUN_7103779d90((long)&local_c0,1,pbVar13);
  ppplVar4 = local_b8[0];
  local_c0 = (long ***)&PTR_FUN_710523d9a8;
  local_b8[0] = (long ***)0x0;
  if (ppplVar4 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar4);
  }
  FUN_7103776910(&local_1158,(long)pppuVar2,(long ****)"set_band_color_00",pbVar13,ppppbVar16,
                 pppplVar10,uVar25,uVar9,puVar8);
  pbVar13 = (byte *)&local_108;
  FUN_7103779d90((long)&local_1158,1,pbVar13);
  uVar26 = local_1150;
  local_1158 = &PTR_FUN_710523d9a8;
  local_1150 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  FUN_7103776910(&local_158,(long)pppuVar2,(long ****)"set_band_color_01",pbVar13,ppppbVar16,
                 pppplVar10,uVar25,uVar9,puVar8);
  ppppppppplVar14 = (long *********)&local_108;
  FUN_7103779d90((long)&local_158,1,(byte *)ppppppppplVar14);
  uVar26 = local_150;
  local_158 = (long ***)&PTR_FUN_710523d9a8;
  local_150 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  FUN_710323eba0((undefined8 *)(*param_2 + 8),(ulong *)&DAT_71045454d8,ppppppppplVar14,ppppbVar16,
                 pppplVar10,uVar25,uVar9,puVar8);
  return;
}

