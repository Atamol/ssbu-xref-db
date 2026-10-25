// addr:      7101d9aeb0
// offset:    0x1d9aeb0
// name:      FUN_7101d9aeb0
// mangled:   
// signature: undefined __cdecl FUN_7101d9aeb0(short * param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d9aeb0(short *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short *psVar1;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
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
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  byte ****ppppbVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined **local_a8;
  ulong local_a0;
  undefined **local_98;
  ulong local_90 [8];
  undefined **local_50;
  ulong local_48;
  
  uVar5 = *param_2;
  uVar11 = param_2[2];
  *(undefined8 *)(param_1 + 4) = param_2[1];
  *(undefined8 *)(param_1 + 8) = uVar11;
  *(undefined8 *)param_1 = uVar5;
  uVar5 = param_2[4];
  uVar11 = param_2[5];
  uVar2 = *(undefined1 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0xc) = param_2[3];
  *(undefined1 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0x14) = uVar11;
  puVar7 = &DAT_7104545888;
  ppppbVar8 = (byte ****)0x1;
  FUN_71032cbf30((undefined8 *)(param_1 + 0x20),**(long **)(param_1 + 0x1c),(ulong *)&DAT_7104545888
                 ,(byte ****)0x1,param_5,param_6,param_7,param_8);
  lVar9 = **(long **)(param_1 + 0x20);
  psVar1 = param_1 + 0x24;
  if (psVar1 != (short *)(lVar9 + 8)) {
    **(undefined8 **)(param_1 + 0x28) = **(undefined8 **)(lVar9 + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0x28) + 8) = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 8);
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 != lVar10) {
      **(undefined8 **)(lVar9 + 0x18) = **(undefined8 **)(lVar10 + 0x18);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x18);
    }
  }
  if (*(char *)(param_2 + 6) == '\0') {
    FUN_7103778630(0x3f800000,*(long *)(param_1 + 0x28),0x710436c84a);
  }
  FUN_71003a4ca0((uint *)&local_98,"player_sp_exp_p%d",1,puVar7,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  if (*param_1 == -1) {
    FUN_7103778300(0xbf800000,*(long *)(param_1 + 0x28),(long)local_90);
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),(long)local_90);
    plVar3 = (long *)(param_1 + 0x30);
    FUN_7103776640(&local_a8,(long)psVar1,(byte ****)"set_parts_sp_00_p%d",1,ppppbVar8,param_5,
                   param_6,param_7,param_8);
    uVar5 = 0;
    FUN_710339b5e0(plVar3,(long)&local_a8,0,ppppbVar8,param_5,param_6,param_7,param_8);
    *(undefined4 *)(*(long *)(param_1 + 0x30) + 4) = 0x18;
    **(short **)(param_1 + 0x30) = *param_1;
    FUN_710339ae90(*(short **)(param_1 + 0x30),extraout_x1,uVar5,ppppbVar8,param_5,param_6,param_7,
                   param_8);
    uVar6 = (ulong)*(uint *)(param_1 + 4);
    FUN_710339b6b0(plVar3,*(uint *)(param_1 + 2),*(uint *)(param_1 + 4));
    FUN_710339bba0(plVar3,*(long **)(param_1 + 0x1c),uVar6,ppppbVar8,param_5,param_6,param_7,param_8
                  );
    lVar9 = *(long *)(param_1 + 0x30);
    uVar5 = extraout_x1_00;
    if (*(long *)(*(long *)(lVar9 + 0x18) + 8) != 0) {
      FUN_7103776910(&local_50,lVar9 + 0x10,(long ****)"set_txt_sp_level",uVar6,ppppbVar8,param_5,
                     param_6,param_7,param_8);
      ppppbVar8 = (byte ****)(ulong)*(uint *)(lVar9 + 0x50);
      uVar6 = 1;
      FUN_710377a280((long)&local_50,(byte *)"mel_result_item_unit_35_00",1);
      uVar4 = local_48;
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      uVar5 = extraout_x1_01;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
        uVar5 = extraout_x1_02;
      }
      lVar9 = *(long *)(*plVar3 + 0x18);
      if (*(long *)(lVar9 + 8) != 0) {
        uVar12 = NEON_ucvtf(*(undefined4 *)(*plVar3 + 0x58));
        FUN_7103778630((ulong)uVar12,lVar9,0x7104464398);
        uVar5 = extraout_x1_03;
      }
    }
    FUN_710339ba00(plVar3,uVar5,uVar6,ppppbVar8,param_5,param_6,param_7,param_8);
    puVar7 = (undefined *)0x1;
    FUN_7103776640(&local_50,(long)psVar1,(byte ****)"set_parts_sp_01_p%d",1,ppppbVar8,param_5,
                   param_6,param_7,param_8);
    uVar6 = local_48;
    uVar5 = 0;
    if ((*(long *)(local_48 + 8) != 0) &&
       (plVar3 = (long *)FUN_71037964b0(*(long *)(local_48 + 8),0x710432a7fc), plVar3 != (long *)0x0
       )) {
      uVar5 = (**(code **)(*plVar3 + 0x1a8))();
    }
    FUN_7103778630(uVar5,uVar6,0x710432a7fc);
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar6 != 0) {
      uVar4 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar6);
    }
    uVar6 = local_a0;
    local_a8 = &PTR_FUN_710523d988;
    local_a0 = 0;
    if (uVar6 != 0) {
      uVar4 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar6);
    }
  }
  FUN_71003a4ca0((uint *)&local_98,"player_sp_exp_p%d",2,puVar7,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  if (param_1[6] == -1) {
    FUN_7103778300(0xbf800000,*(long *)(param_1 + 0x28),(long)local_90);
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),(long)local_90);
    plVar3 = (long *)(param_1 + 0x34);
    FUN_7103776640(&local_a8,(long)psVar1,(byte ****)"set_parts_sp_00_p%d",2,ppppbVar8,param_5,
                   param_6,param_7,param_8);
    uVar5 = 0;
    FUN_710339b5e0(plVar3,(long)&local_a8,0,ppppbVar8,param_5,param_6,param_7,param_8);
    *(undefined4 *)(*(long *)(param_1 + 0x34) + 4) = 0x18;
    **(short **)(param_1 + 0x34) = param_1[6];
    FUN_710339ae90(*(short **)(param_1 + 0x34),extraout_x1_04,uVar5,ppppbVar8,param_5,param_6,
                   param_7,param_8);
    uVar6 = (ulong)*(uint *)(param_1 + 10);
    FUN_710339b6b0(plVar3,*(uint *)(param_1 + 8),*(uint *)(param_1 + 10));
    FUN_710339bba0(plVar3,*(long **)(param_1 + 0x1c),uVar6,ppppbVar8,param_5,param_6,param_7,param_8
                  );
    lVar9 = *(long *)(param_1 + 0x34);
    uVar5 = extraout_x1_05;
    if (*(long *)(*(long *)(lVar9 + 0x18) + 8) != 0) {
      FUN_7103776910(&local_50,lVar9 + 0x10,(long ****)"set_txt_sp_level",uVar6,ppppbVar8,param_5,
                     param_6,param_7,param_8);
      ppppbVar8 = (byte ****)(ulong)*(uint *)(lVar9 + 0x50);
      uVar6 = 1;
      FUN_710377a280((long)&local_50,(byte *)"mel_result_item_unit_35_00",1);
      uVar4 = local_48;
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      uVar5 = extraout_x1_06;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
        uVar5 = extraout_x1_07;
      }
      lVar9 = *(long *)(*plVar3 + 0x18);
      if (*(long *)(lVar9 + 8) != 0) {
        uVar12 = NEON_ucvtf(*(undefined4 *)(*plVar3 + 0x58));
        FUN_7103778630((ulong)uVar12,lVar9,0x7104464398);
        uVar5 = extraout_x1_08;
      }
    }
    FUN_710339ba00(plVar3,uVar5,uVar6,ppppbVar8,param_5,param_6,param_7,param_8);
    puVar7 = (undefined *)0x2;
    FUN_7103776640(&local_50,(long)psVar1,(byte ****)"set_parts_sp_01_p%d",2,ppppbVar8,param_5,
                   param_6,param_7,param_8);
    uVar6 = local_48;
    uVar5 = 0;
    if ((*(long *)(local_48 + 8) != 0) &&
       (plVar3 = (long *)FUN_71037964b0(*(long *)(local_48 + 8),0x710432a7fc), plVar3 != (long *)0x0
       )) {
      uVar5 = (**(code **)(*plVar3 + 0x1a8))();
    }
    FUN_7103778630(uVar5,uVar6,0x710432a7fc);
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar6 != 0) {
      uVar4 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar6);
    }
    uVar6 = local_a0;
    local_a8 = &PTR_FUN_710523d988;
    local_a0 = 0;
    if (uVar6 != 0) {
      uVar4 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar6);
    }
  }
  FUN_71003a4ca0((uint *)&local_98,"player_sp_exp_p%d",3,puVar7,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  if (param_1[0xc] == -1) {
    FUN_7103778300(0xbf800000,*(long *)(param_1 + 0x28),(long)local_90);
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),(long)local_90);
    plVar3 = (long *)(param_1 + 0x38);
    FUN_7103776640(&local_a8,(long)psVar1,(byte ****)"set_parts_sp_00_p%d",3,ppppbVar8,param_5,
                   param_6,param_7,param_8);
    uVar5 = 0;
    FUN_710339b5e0(plVar3,(long)&local_a8,0,ppppbVar8,param_5,param_6,param_7,param_8);
    *(undefined4 *)(*(long *)(param_1 + 0x38) + 4) = 0x18;
    **(short **)(param_1 + 0x38) = param_1[0xc];
    FUN_710339ae90(*(short **)(param_1 + 0x38),extraout_x1_09,uVar5,ppppbVar8,param_5,param_6,
                   param_7,param_8);
    uVar6 = (ulong)*(uint *)(param_1 + 0x10);
    FUN_710339b6b0(plVar3,*(uint *)(param_1 + 0xe),*(uint *)(param_1 + 0x10));
    FUN_710339bba0(plVar3,*(long **)(param_1 + 0x1c),uVar6,ppppbVar8,param_5,param_6,param_7,param_8
                  );
    lVar9 = *(long *)(param_1 + 0x38);
    uVar5 = extraout_x1_10;
    if (*(long *)(*(long *)(lVar9 + 0x18) + 8) != 0) {
      FUN_7103776910(&local_50,lVar9 + 0x10,(long ****)"set_txt_sp_level",uVar6,ppppbVar8,param_5,
                     param_6,param_7,param_8);
      ppppbVar8 = (byte ****)(ulong)*(uint *)(lVar9 + 0x50);
      uVar6 = 1;
      FUN_710377a280((long)&local_50,(byte *)"mel_result_item_unit_35_00",1);
      uVar4 = local_48;
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      uVar5 = extraout_x1_11;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
        uVar5 = extraout_x1_12;
      }
      lVar9 = *(long *)(*plVar3 + 0x18);
      if (*(long *)(lVar9 + 8) != 0) {
        uVar12 = NEON_ucvtf(*(undefined4 *)(*plVar3 + 0x58));
        FUN_7103778630((ulong)uVar12,lVar9,0x7104464398);
        uVar5 = extraout_x1_13;
      }
    }
    FUN_710339ba00(plVar3,uVar5,uVar6,ppppbVar8,param_5,param_6,param_7,param_8);
    puVar7 = (undefined *)0x3;
    FUN_7103776640(&local_50,(long)psVar1,(byte ****)"set_parts_sp_01_p%d",3,ppppbVar8,param_5,
                   param_6,param_7,param_8);
    uVar6 = local_48;
    uVar5 = 0;
    if ((*(long *)(local_48 + 8) != 0) &&
       (plVar3 = (long *)FUN_71037964b0(*(long *)(local_48 + 8),0x710432a7fc), plVar3 != (long *)0x0
       )) {
      uVar5 = (**(code **)(*plVar3 + 0x1a8))();
    }
    FUN_7103778630(uVar5,uVar6,0x710432a7fc);
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar6 != 0) {
      uVar4 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar6);
    }
    uVar6 = local_a0;
    local_a8 = &PTR_FUN_710523d988;
    local_a0 = 0;
    if (uVar6 != 0) {
      uVar4 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar6);
    }
  }
  FUN_71003a4ca0((uint *)&local_98,"player_sp_exp_p%d",4,puVar7,ppppbVar8,param_5,param_6,param_7,
                 param_8);
  if (param_1[0x12] == -1) {
    FUN_7103778300(0xbf800000,*(long *)(param_1 + 0x28),(long)local_90);
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),(long)local_90);
    plVar3 = (long *)(param_1 + 0x3c);
    FUN_7103776640(&local_a8,(long)psVar1,(byte ****)"set_parts_sp_00_p%d",4,ppppbVar8,param_5,
                   param_6,param_7,param_8);
    uVar5 = 0;
    FUN_710339b5e0(plVar3,(long)&local_a8,0,ppppbVar8,param_5,param_6,param_7,param_8);
    *(undefined4 *)(*(long *)(param_1 + 0x3c) + 4) = 0x18;
    **(short **)(param_1 + 0x3c) = param_1[0x12];
    FUN_710339ae90(*(short **)(param_1 + 0x3c),extraout_x1_14,uVar5,ppppbVar8,param_5,param_6,
                   param_7,param_8);
    uVar6 = (ulong)*(uint *)(param_1 + 0x16);
    FUN_710339b6b0(plVar3,*(uint *)(param_1 + 0x14),*(uint *)(param_1 + 0x16));
    FUN_710339bba0(plVar3,*(long **)(param_1 + 0x1c),uVar6,ppppbVar8,param_5,param_6,param_7,param_8
                  );
    lVar9 = *(long *)(param_1 + 0x3c);
    uVar5 = extraout_x1_15;
    if (*(long *)(*(long *)(lVar9 + 0x18) + 8) != 0) {
      FUN_7103776910(&local_50,lVar9 + 0x10,(long ****)"set_txt_sp_level",uVar6,ppppbVar8,param_5,
                     param_6,param_7,param_8);
      ppppbVar8 = (byte ****)(ulong)*(uint *)(lVar9 + 0x50);
      uVar6 = 1;
      FUN_710377a280((long)&local_50,(byte *)"mel_result_item_unit_35_00",1);
      uVar4 = local_48;
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      uVar5 = extraout_x1_16;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
        uVar5 = extraout_x1_17;
      }
      lVar9 = *(long *)(*plVar3 + 0x18);
      if (*(long *)(lVar9 + 8) != 0) {
        uVar12 = NEON_ucvtf(*(undefined4 *)(*plVar3 + 0x58));
        FUN_7103778630((ulong)uVar12,lVar9,0x7104464398);
        uVar5 = extraout_x1_18;
      }
    }
    FUN_710339ba00(plVar3,uVar5,uVar6,ppppbVar8,param_5,param_6,param_7,param_8);
    puVar7 = (undefined *)0x4;
    FUN_7103776640(&local_50,(long)psVar1,(byte ****)"set_parts_sp_01_p%d",4,ppppbVar8,param_5,
                   param_6,param_7,param_8);
    uVar6 = local_48;
    uVar5 = 0;
    if ((*(long *)(local_48 + 8) != 0) &&
       (plVar3 = (long *)FUN_71037964b0(*(long *)(local_48 + 8),0x710432a7fc), plVar3 != (long *)0x0
       )) {
      uVar5 = (**(code **)(*plVar3 + 0x1a8))();
    }
    FUN_7103778630(uVar5,uVar6,0x710432a7fc);
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar6 != 0) {
      uVar4 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar6);
    }
    uVar6 = local_a0;
    local_a8 = &PTR_FUN_710523d988;
    local_a0 = 0;
    if (uVar6 != 0) {
      uVar4 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar6);
    }
  }
  FUN_7103776640(&local_98,(long)psVar1,(byte ****)"parts_key",puVar7,ppppbVar8,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_50,(long)&local_98,(long ****)"set_txt_icon",puVar7,ppppbVar8,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_50,"mel_info_next",puVar7,ppppbVar8,param_5,param_6,param_7,param_8);
  uVar6 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_90[0];
  local_98 = &PTR_FUN_710523d988;
  local_90[0] = 0;
  if (uVar6 != 0) {
    uVar4 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar6);
  }
  return;
}

