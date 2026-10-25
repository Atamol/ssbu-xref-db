// addr:      7101ef9f70
// offset:    0x1ef9f70
// name:      FUN_7101ef9f70
// mangled:   
// signature: undefined __cdecl FUN_7101ef9f70(undefined1[16] param_1, undefined4 param_2, float param_3, uint * param_4, long * param_5, undefined8 param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)


void FUN_7101ef9f70(undefined1 param_1 [16],undefined4 param_2,float param_3,uint *param_4,
                   long *param_5,undefined8 param_6,byte ****param_7,long ****param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 *puVar10;
  long ********pppppppplVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ushort *puVar17;
  undefined8 uVar18;
  long *********ppppppppplVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  byte ****ppppbVar22;
  long ****pppplVar23;
  undefined8 uVar24;
  byte *pbVar25;
  char *pcVar26;
  uint uVar27;
  long lVar28;
  undefined1 *puVar29;
  ulong uVar30;
  long lVar31;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined **local_1a8;
  ulong local_1a0;
  undefined **local_198;
  undefined8 *local_190 [8];
  undefined **local_150;
  ulong local_148;
  undefined **local_140;
  ulong local_138;
  undefined **local_130;
  ulong local_128;
  undefined **local_120;
  ulong local_118;
  undefined **local_110;
  undefined8 *local_108;
  undefined **local_100;
  ulong local_f8;
  undefined **local_f0;
  ulong local_e8;
  undefined **local_e0;
  ulong local_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(param_1._0_4_,&DAT_71053144d8), iVar13 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar30 = (ulong)param_4[2];
  puVar5 = &DAT_710530a9c8;
  if (*param_4 != 0) {
    puVar5 = &DAT_710530bdf0;
  }
  if (4 < param_4[2]) goto LAB_7101efabf4;
  puVar4 = &DAT_710530b2b0;
  if (*param_4 != 0) {
    puVar4 = &DAT_710530c6d8;
  }
  lVar31 = *(long *)(DAT_710532f730 + 8);
  lVar28 = *(long *)(lVar31 + 0x168);
  puVar29 = *(undefined1 **)(puVar5 + uVar30 * 0x1c8 + 0x40);
  uVar12 = FUN_71032632a0(lVar28,(ulong)puVar29);
  if ((uVar12 & 1) != 0) {
    puVar29 = FUN_71032631a0(lVar28,0x11b1ccb807);
  }
  uVar14 = FUN_7103263f80(lVar28,(ulong)puVar29);
  uVar18 = 0x11;
  plVar15 = FUN_710323f600(param_5,uVar14,(long ****)&DAT_00000011,param_7,param_8,param_9,param_10,
                           param_11);
  puVar1 = param_4 + 0x88;
  FUN_7103776910(&local_d0,(long)puVar1,(long ****)"set_rep_chara",uVar18,param_7,param_8,param_9,
                 param_10,param_11);
  ppppppppplVar19 = (long *********)(ulong)*param_4;
  ppppbVar22 = (byte ****)(ulong)param_4[2];
  pppplVar23 = (long ****)0x1;
  uVar24 = 2;
  uVar18 = 0;
  auVar7._4_4_ = extraout_var;
  auVar7._0_4_ = extraout_s0;
  auVar7._8_8_ = extraout_var_02;
  FUN_7101f09020(auVar7,param_2,param_3,param_5,&local_d0,ppppppppplVar19,ppppbVar22,(long ****)0x1,
                 0,2,param_11);
  uVar14 = local_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  FUN_7103776910(&local_e0,(long)puVar1,(long ****)"set_rep_chara_sd",ppppppppplVar19,ppppbVar22,
                 pppplVar23,uVar18,uVar24,param_11);
  ppppppppplVar19 = (long *********)(ulong)*param_4;
  ppppbVar22 = (byte ****)(ulong)param_4[2];
  pppplVar23 = (long ****)0x1;
  uVar24 = 2;
  uVar18 = 0;
  auVar8._4_4_ = extraout_var_00;
  auVar8._0_4_ = extraout_s0_00;
  auVar8._8_8_ = extraout_var_03;
  FUN_7101f09020(auVar8,param_2,param_3,param_5,&local_e0,ppppppppplVar19,ppppbVar22,(long ****)0x1,
                 0,2,param_11);
  uVar14 = local_d8;
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  FUN_7103776910(&local_f0,(long)puVar1,(long ****)"set_rep_chara_lose",ppppppppplVar19,ppppbVar22,
                 pppplVar23,uVar18,uVar24,param_11);
  ppuVar20 = (undefined **)(ulong)*param_4;
  ppppbVar22 = (byte ****)(ulong)param_4[2];
  pppplVar23 = (long ****)0x1;
  uVar24 = 2;
  uVar18 = 0;
  auVar9._4_4_ = extraout_var_01;
  auVar9._0_4_ = extraout_s0_01;
  auVar9._8_8_ = extraout_var_04;
  FUN_7101f09020(auVar9,param_2,param_3,param_5,&local_f0,(long *********)ppuVar20,ppppbVar22,
                 (long ****)0x1,0,2,param_11);
  uVar14 = local_e8;
  local_f0 = &PTR_FUN_710523d9a8;
  local_e8 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  FUN_7103776910(&local_c0,(long)puVar1,(long ****)"set_rep_mark",ppuVar20,ppppbVar22,pppplVar23,
                 uVar18,uVar24,param_11);
  pppppppplVar11 = local_b8;
  FUN_7103778b80((long)local_b8,(long)plVar15,(long *********)ppuVar20,ppppbVar22,pppplVar23,uVar18,
                 uVar24,param_11);
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = (long ********)0x0;
  if (pppppppplVar11 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar11);
  }
  FUN_7103776910(&local_100,(long)puVar1,(long ****)"set_txt_chara_name",ppuVar20,ppppbVar22,
                 pppplVar23,uVar18,uVar24,param_11);
  FUN_7103776910(&local_110,(long)puVar1,(long ****)"set_txt_00",ppuVar20,ppppbVar22,pppplVar23,
                 uVar18,uVar24,param_11);
  FUN_7103776640(&local_120,(long)puVar1,(byte ****)"set_part_cp_level",ppuVar20,ppppbVar22,
                 pppplVar23,uVar18,uVar24,param_11);
  FUN_7103776910(&local_130,(long)puVar1,(long ****)"set_txt_fp_level",ppuVar20,ppppbVar22,
                 pppplVar23,uVar18,uVar24,param_11);
  FUN_7103776640(&local_140,(long)puVar1,(byte ****)"set_part_spirits",ppuVar20,ppppbVar22,
                 pppplVar23,uVar18,uVar24,param_11);
  FUN_7103776640(&local_150,(long)puVar1,(byte ****)"set_part_spirits_mark",ppuVar20,ppppbVar22,
                 pppplVar23,uVar18,uVar24,param_11);
  uVar14 = local_f8;
  if (*(long **)(local_f8 + 0x10) != (long *)0x0) {
    ppuVar20 = (undefined **)0x0;
    ppppbVar22 = (byte ****)0x0;
    local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
    FUN_71037a2270(*(long **)(local_f8 + 0x10),(ushort *)&local_c0,0,0);
  }
  puVar10 = local_108;
  if ((long *)local_108[2] != (long *)0x0) {
    ppuVar20 = (undefined **)0x0;
    ppppbVar22 = (byte ****)0x0;
    local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
    FUN_71037a2270((long *)local_108[2],(ushort *)&local_c0,0,0);
  }
  uVar12 = *(uint *)(puVar5 + uVar30 * 0x1c8 + 0x30);
  if (uVar12 != 2) {
    if (uVar12 == 1) {
      FUN_7103778300(0x3f800000,*(long *)(param_4 + 0x8a),0x71042d6b4d);
      ppuVar20 = (undefined **)(ulong)(byte)puVar5[uVar30 * 0x1c8 + 0x49];
      FUN_7103778430((long)&local_120,"cp_level_%d",ppuVar20,ppppbVar22,pppplVar23,uVar18,uVar24,
                     param_11);
      FUN_7103776910(&local_198,(long)&local_120,(long ****)"set_txt_level",ppuVar20,ppppbVar22,
                     pppplVar23,uVar18,uVar24,param_11);
      puVar10 = local_190[0];
      plVar15 = (long *)local_190[0][2];
      if (plVar15 != (long *)0x0) {
        pppplVar23 = (long ****)0x0;
        uVar18 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_c0 = (undefined **)0x0;
        local_b8 = (long ********)0x0;
        uVar12 = FUN_71037ad940((long)&local_c0,0x20,0,(uint)(byte)puVar5[uVar30 * 0x1c8 + 0x49],0,0
                               );
        ppuVar20 = (undefined **)(ulong)uVar12;
        ppppbVar22 = (byte ****)0x0;
        FUN_71037a2270(plVar15,(ushort *)&local_c0,uVar12,0);
      }
      local_198 = &PTR_FUN_710523d9a8;
      local_190[0] = (undefined8 *)0x0;
      if (puVar10 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar10);
      }
      goto LAB_7101efa704;
    }
    if (uVar12 != 0) goto LAB_7101efa704;
    if (puVar4[uVar30 * 0x90 + 1] + 1 < 2) {
      FUN_7103778300(0x3f800000,*(long *)(param_4 + 0x8a),0x71042a37ee);
      goto LAB_7101efa704;
    }
    FUN_7103778300(0x3f800000,*(long *)(param_4 + 0x8a),0x710435c003);
    local_198 = &PTR_FUN_710523d9a8;
    puVar16 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppuVar20,ppppbVar22,pppplVar23,uVar18,uVar24,
                             param_11);
    if (puVar16 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1a8 = (undefined **)((ulong)local_1a8 & 0xffffffff00000000);
        local_c0 = (undefined **)&SUB_00000020;
        ppuVar20 = (undefined **)&local_c0;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1a8);
        if (((uVar14 & 1) != 0) &&
           (puVar16 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppuVar20,ppppbVar22,pppplVar23,uVar18,
                                     uVar24,param_11), puVar16 != (undefined8 *)0x0))
        goto LAB_7101efa468;
      }
      puVar16 = (undefined8 *)0x0;
    }
LAB_7101efa468:
    puVar16[2] = 0;
    puVar16[3] = 0;
    *puVar16 = 0;
    puVar16[1] = 0;
    *puVar16 = *puVar10;
    puVar16[1] = puVar10[1];
    plVar15 = (long *)local_108[2];
    puVar16[2] = plVar15;
    puVar16[3] = local_108[3];
    uVar12 = puVar4[uVar30 * 0x90 + 1];
    local_190[0] = puVar16;
    if (uVar12 + 1 < 2) {
      ppppbVar22 = (byte ****)(ulong)*(uint *)(puVar5 + uVar30 * 0x1c8 + 0x28);
      ppuVar20 = (undefined **)0x1;
      FUN_710377a280((long)&local_198,(byte *)"mel_player_n",1);
    }
    else {
      pcVar26 = &DAT_7105314518;
      if ((uVar12 < 0x3d) && (*(char *)*DAT_7105314510 == '\0')) {
        pcVar26 = (char *)(*(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x58) +
                          (ulong)uVar12 * 0xf7d8);
      }
      if (*pcVar26 == '\0') {
        if (plVar15 != (long *)0x0) {
          puVar17 = (ushort *)&local_c0;
          ppuVar20 = (undefined **)0x0;
          ppppbVar22 = (byte ****)0x0;
          local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
          goto LAB_7101efab18;
        }
      }
      else if (plVar15 != (long *)0x0) {
        puVar17 = (ushort *)(pcVar26 + 0xc);
        ppuVar20 = (undefined **)&DAT_ffffffff;
        ppppbVar22 = (byte ****)0x1;
LAB_7101efab18:
        FUN_71037a2270(plVar15,puVar17,(uint)ppuVar20,(ulong)ppppbVar22);
      }
    }
    local_190[0] = (undefined8 *)0x0;
    local_198 = &PTR_FUN_710523d9a8;
    if (puVar16 != (undefined8 *)0x0) {
      local_190[0] = (undefined8 *)0x0;
      local_198 = &PTR_FUN_710523d9a8;
      FUN_710392eb40((ulong)puVar16);
    }
    goto LAB_7101efa79c;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_4 + 0x8a),0x710435c018);
  local_a8._4_4_ = (undefined4)((ulong)local_a8 >> 0x30);
  FUN_7103778300(0x3f800000,*(long *)(param_4 + 0x8a),0x7104270826);
  switch(puVar5[uVar30 * 0x1c8 + 0x130]) {
  case 0:
    local_b0 = 0x5f72656b63617474;
    uVar12 = 0x811c9dc5;
    uVar27 = 0x73;
    pbVar25 = (byte *)((long)&local_b8 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar27;
      uVar27 = (uint)*pbVar25;
      pbVar25 = pbVar25 + 1;
    } while (uVar27 != 0);
    goto LAB_7101efa6b8;
  case 1:
    local_c0._4_4_ = 0x17;
    local_b0 = 0x5f72656b63617474;
    uVar12 = 0x811c9dc5;
    local_a8 = 0x65736e6566666f;
    uVar27 = 0x73;
    pbVar25 = (byte *)((long)&local_b8 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar27;
      uVar27 = (uint)*pbVar25;
      pbVar25 = pbVar25 + 1;
    } while (uVar27 != 0);
    break;
  case 2:
    local_c0._4_4_ = 0x17;
    local_b0 = 0x5f72656b63617474;
    uVar12 = 0x811c9dc5;
    local_a8 = 0x65736e65666564;
    uVar27 = 0x73;
    pbVar25 = (byte *)((long)&local_b8 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar27;
      uVar27 = (uint)*pbVar25;
      pbVar25 = pbVar25 + 1;
    } while (uVar27 != 0);
    break;
  case 3:
    local_c0._4_4_ = 0x15;
    local_b0 = 0x5f72656b63617474;
    local_a8 = CONCAT26(local_a8._6_2_,0x776f726874);
    uVar12 = 0x811c9dc5;
    uVar27 = 0x73;
    pbVar25 = (byte *)((long)&local_b8 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar27;
      uVar27 = (uint)*pbVar25;
      pbVar25 = pbVar25 + 1;
    } while (uVar27 != 0);
    break;
  default:
    local_b0 = 0x5f72656b63617474;
    uVar12 = 0x811c9dc5;
    uVar27 = 0x73;
    pbVar25 = (byte *)((long)&local_b8 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar27;
      uVar27 = (uint)*pbVar25;
      pbVar25 = pbVar25 + 1;
    } while (uVar27 != 0);
LAB_7101efa6b8:
    local_a8 = CONCAT44(local_a8._4_4_,0x6e6f6e);
    local_c0 = (undefined **)CONCAT44(0x13,uVar12);
    goto LAB_7101efa6bc;
  }
  local_c0 = (undefined **)CONCAT44(local_c0._4_4_,uVar12);
LAB_7101efa6bc:
  local_b0 = 0x5f72656b63617474;
  local_b8 = (long ********)0x615f746972697073;
  FUN_7103778300(0x3f800000,local_148,(long)&local_b8);
  if ((long *)puVar10[2] != (long *)0x0) {
    ppppbVar22 = (byte ****)0x1;
    FUN_71037a2270((long *)puVar10[2],(ushort *)(puVar5 + uVar30 * 0x1c8 + 0xf8),0xffffffff,1);
  }
  ppuVar20 = (undefined **)(ulong)(byte)puVar5[uVar30 * 0x1c8 + 0x118];
  FUN_710377a310((long)&local_130,1);
LAB_7101efa704:
  lVar28 = *(long *)(lVar31 + 0x168);
  uVar12 = FUN_71032638e0(lVar28,(ulong)puVar29);
  if ((uVar12 & 1) == 0) {
    uVar12 = FUN_7103263540(lVar28,(ulong)puVar29,(ulong)(byte)puVar5[uVar30 * 0x1c8 + 0x48],
                            ppppbVar22,pppplVar23,uVar18,uVar24,param_11);
    FUN_7103262310((uint *)&local_c0,*(long *)(lVar31 + 0x168),(ulong)puVar29);
    ppuVar20 = (undefined **)&local_b8;
    FUN_71003a4ca0((uint *)&local_198,"nam_chr1_%02d_%s",(ulong)uVar12,ppuVar20,ppppbVar22,
                   pppplVar23,uVar18,uVar24,param_11);
    FUN_710377a120((long)&local_100,(char *)local_190,ppuVar20,ppppbVar22,pppplVar23,uVar18,uVar24,
                   param_11);
  }
  else if (*(long **)(uVar14 + 0x10) != (long *)0x0) {
    ppuVar20 = (undefined **)&DAT_ffffffff;
    ppppbVar22 = (byte ****)0x1;
    FUN_71037a2270(*(long **)(uVar14 + 0x10),(ushort *)(puVar5 + uVar30 * 0x1c8 + 0x68),0xffffffff,1
                  );
  }
LAB_7101efa79c:
  if (*(uint *)(puVar5 + uVar30 * 0x1c8 + 0x30) < 2) {
    uVar12 = *param_4;
    uVar27 = param_4[2];
    if (((DAT_71053144d8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_71053144d8), iVar13 != 0))
    {
      FUN_7101764000();
      ppuVar20 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (uVar27 < 5) {
      puVar5 = &DAT_710530a9c8;
      if (uVar12 != 0) {
        puVar5 = &DAT_710530bdf0;
      }
      sVar6 = *(short *)(puVar5 + (ulong)uVar27 * 0x1c8 + 0x1b6);
      if (sVar6 == -1) {
        FUN_7103778300(0x3f800000,*(long *)(param_4 + 0x8a),0x7104308c19);
        goto LAB_7101efa9e8;
      }
      uVar12 = *param_4;
      uVar27 = param_4[2];
      lVar28 = *DAT_7105328e18;
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(&DAT_71053144d8), iVar13 != 0)) {
        FUN_7101764000();
        ppuVar20 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if ((uVar12 < 2) && (uVar27 < 5)) {
        puVar5 = &DAT_710530a9c8;
        if (uVar12 != 0) {
          puVar5 = &DAT_710530bdf0;
        }
        uVar3 = 0;
        if (*(short *)(puVar5 + (ulong)uVar27 * 0x1c8 + 0x1b6) != -1) {
          uVar3 = *(uint *)(lVar28 + (ulong)uVar12 * 0x1b8 + (ulong)uVar27 * 0x50 + 0x6c);
        }
        FUN_7103778300(0x3f800000,*(long *)(param_4 + 0x8a),0x71042d6b5d);
        **(short **)(param_4 + 0x90) = sVar6;
        puVar2 = param_4 + 0x90;
        FUN_710339ae90(*(short **)(param_4 + 0x90),extraout_x1,ppuVar20,ppppbVar22,pppplVar23,uVar18
                       ,uVar24,param_11);
        uVar30 = (ulong)uVar3;
        *(undefined4 *)(*(long *)(param_4 + 0x90) + 4) = 0x18;
        FUN_710339b6b0((undefined8 *)puVar2,uVar3,uVar3);
        FUN_7103776640(&local_1a8,(long)puVar1,(byte ****)"set_part_spirits",uVar30,ppppbVar22,
                       pppplVar23,uVar18,uVar24,param_11);
        uVar21 = 1;
        FUN_710339b5e0((long *)puVar2,(long)&local_1a8,1,ppppbVar22,pppplVar23,uVar18,uVar24,
                       param_11);
        FUN_710339bba0((undefined8 *)puVar2,param_5,uVar21,ppppbVar22,pppplVar23,uVar18,uVar24,
                       param_11);
        FUN_710339ba00((long *)puVar2,extraout_x1_00,uVar21,ppppbVar22,pppplVar23,uVar18,uVar24,
                       param_11);
        if (*(long *)(*(long *)(*(long *)(param_4 + 0x90) + 0x18) + 8) != 0) {
          FUN_7103776910(&local_c0,*(long *)(param_4 + 0x90) + 0x10,(long ****)"set_txt_sp_level",
                         uVar21,ppppbVar22,pppplVar23,uVar18,uVar24,param_11);
          FUN_710377a280((long)&local_c0,(byte *)"mel_result_item_unit_35_00",1);
          pppppppplVar11 = local_b8;
          local_c0 = &PTR_FUN_710523d9a8;
          local_b8 = (long ********)0x0;
          if (pppppppplVar11 != (long ********)0x0) {
            FUN_710392eb40((ulong)pppppppplVar11);
          }
          lVar28 = *(long *)(*(long *)puVar2 + 0x18);
          if (*(long *)(lVar28 + 8) != 0) {
            uVar12 = NEON_ucvtf(*(undefined4 *)(*(long *)puVar2 + 0x58));
            FUN_7103778630((ulong)uVar12,lVar28,0x7104464398);
          }
        }
        if ((*param_4 < 2) && (param_4[2] < 5)) {
          if (*(short *)(*DAT_7105328e18 + (ulong)*param_4 * 0x1b8 + (ulong)param_4[2] * 0x50 + 0x78
                        ) == -1) {
            pcVar26 = "level_off";
          }
          else {
            pcVar26 = "level_on";
          }
          FUN_7103778300(0x3f800000,*(long *)(param_4 + 0x8a),(long)pcVar26);
          uVar30 = local_1a0;
          local_1a8 = &PTR_FUN_710523d988;
          local_1a0 = 0;
          if (uVar30 != 0) {
            uVar14 = *(ulong *)(uVar30 + 0x18);
            *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar30 + 0x18) = 0;
            if (uVar14 != 0) {
              FUN_710392eb40(uVar14);
            }
            FUN_710392eb40(uVar30);
          }
          goto LAB_7101efa9e8;
        }
      }
    }
LAB_7101efabf4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_7101efa9e8:
  uVar30 = local_148;
  local_150 = &PTR_FUN_710523d988;
  local_148 = 0;
  if (uVar30 != 0) {
    uVar14 = *(ulong *)(uVar30 + 0x18);
    *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar30 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar30);
  }
  uVar30 = local_138;
  local_140 = &PTR_FUN_710523d988;
  local_138 = 0;
  if (uVar30 != 0) {
    uVar14 = *(ulong *)(uVar30 + 0x18);
    *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar30 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar30);
  }
  uVar30 = local_128;
  local_130 = &PTR_FUN_710523d9a8;
  local_128 = 0;
  if (uVar30 != 0) {
    FUN_710392eb40(uVar30);
  }
  uVar30 = local_118;
  local_120 = &PTR_FUN_710523d988;
  local_118 = 0;
  if (uVar30 != 0) {
    uVar14 = *(ulong *)(uVar30 + 0x18);
    *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar30 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar30);
  }
  puVar10 = local_108;
  local_110 = &PTR_FUN_710523d9a8;
  local_108 = (undefined8 *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar10);
  }
  uVar30 = local_f8;
  local_100 = &PTR_FUN_710523d9a8;
  local_f8 = 0;
  if (uVar30 != 0) {
    FUN_710392eb40(uVar30);
  }
  return;
}

