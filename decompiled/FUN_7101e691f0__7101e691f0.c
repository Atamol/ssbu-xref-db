// addr:      7101e691f0
// offset:    0x1e691f0
// name:      FUN_7101e691f0
// mangled:   
// signature: undefined __cdecl FUN_7101e691f0(undefined8 * param_1)


void FUN_7101e691f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  long ***ppplVar6;
  byte ***pppbVar7;
  undefined **ppuVar8;
  uint uVar9;
  byte **ppbVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long **pplVar13;
  ushort uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined *puVar15;
  char *pcVar16;
  undefined8 uVar17;
  byte ****ppppbVar18;
  char *pcVar19;
  long ****in_x4;
  long ****pppplVar20;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar21;
  ulong uVar22;
  undefined ***pppuVar23;
  undefined8 *puVar24;
  long ****pppplVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  ulong uVar29;
  long *plVar30;
  long ***ppplVar31;
  long lVar32;
  ulong uVar33;
  undefined1 auVar34 [16];
  long ***local_1468;
  long ***local_1460;
  undefined **local_1458;
  byte ***local_1450 [8];
  uint local_1410 [2];
  undefined1 local_1408;
  undefined4 uStack_1407;
  undefined1 uStack_1403;
  undefined2 uStack_1402;
  ulong local_1400;
  undefined8 local_a50;
  undefined **local_a48;
  undefined **local_a40 [312];
  byte local_80 [8];
  long ***local_78;
  undefined4 local_6c [3];
  
  puVar15 = &DAT_7104545b88;
  uVar17 = 1;
  FUN_71032cbf30(param_1 + 0x3c,*(long *)*param_1,(ulong *)&DAT_7104545b88,(byte ****)0x1,in_x4,
                 in_x5,in_x6,in_x7);
  lVar21 = *(long *)param_1[0x3c];
  puVar1 = param_1 + 0x3d;
  if (puVar1 != (undefined8 *)(lVar21 + 8)) {
    *(undefined8 *)param_1[0x3e] = **(undefined8 **)(lVar21 + 0x10);
    *(undefined8 *)(param_1[0x3e] + 8) = *(undefined8 *)(*(long *)(lVar21 + 0x10) + 8);
    lVar27 = *(long *)(lVar21 + 0x10);
    lVar21 = param_1[0x3e];
    if (lVar21 != lVar27) {
      **(undefined8 **)(lVar21 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
      *(undefined8 *)(*(long *)(lVar21 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
    }
  }
  lVar21 = **(long **)param_1[0x3c];
  *(undefined4 *)(*(long *)(lVar21 + 0x600) + 0x1c) = 0xff0000f;
  *(undefined4 *)(*(long *)(lVar21 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar21 + 0x600) + 0x14) = 0x40;
  FUN_7103776640(&local_1458,(long)puVar1,(byte ****)"header_band",puVar15,uVar17,in_x4,in_x5,in_x6,
                 in_x7);
  bVar2 = *(byte *)(param_1[0x9a] + 8);
  FUN_7103776910((undefined8 *)local_1410,(long)&local_1458,(long ****)"set_txt_title",puVar15,
                 uVar17,in_x4,in_x5,in_x6,in_x7);
  FUN_71003a4ca0((uint *)&local_a48,"cam_searchfield%d_field_name",(ulong)bVar2,puVar15,uVar17,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_710377a120((long)local_1410,(char *)local_a40,puVar15,uVar17,in_x4,in_x5,in_x6,in_x7);
  uVar22 = CONCAT26(uStack_1402,CONCAT15(uStack_1403,CONCAT41(uStack_1407,local_1408)));
  local_1410[0] = 0x523d9a8;
  local_1410[1] = 0x71;
  local_1408 = 0;
  uStack_1407 = 0;
  uStack_1403 = 0;
  uStack_1402 = 0;
  if (uVar22 != 0) {
    FUN_710392eb40(uVar22);
  }
  pppbVar7 = local_1450[0];
  local_1458 = &PTR_FUN_710523d988;
  local_1450[0] = (byte ***)0x0;
  if (pppbVar7 != (byte ***)0x0) {
    ppbVar10 = pppbVar7[3];
    pppbVar7[2] = &PTR_FUN_710523d9a8;
    pppbVar7[3] = (byte **)0x0;
    if (ppbVar10 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar10);
    }
    FUN_710392eb40((ulong)pppbVar7);
  }
  *(undefined8 *)param_1[0x42] = *(undefined8 *)param_1[0x3e];
  *(undefined8 *)(param_1[0x42] + 8) = *(undefined8 *)(param_1[0x3e] + 8);
  lVar27 = param_1[0x3e];
  lVar21 = param_1[0x42];
  if (lVar21 != lVar27) {
    **(undefined8 **)(lVar21 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
    *(undefined8 *)(*(long *)(lVar21 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
    *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x10) =
         *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
    *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x18) =
         *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
  }
  FUN_7101e965f0((long)(param_1 + 0x3f),puVar1,(long ****)"selector_menu","set_parts_menu_%02d",
                 in_x4,in_x5,in_x6,in_x7);
  *(undefined1 *)(param_1[0x40] + 8) = 1;
  *(undefined1 *)(param_1[0x40] + 0x50) = 0;
  plVar30 = (long *)*param_1;
  *(undefined8 *)param_1[0x48] = *(undefined8 *)param_1[0x3e];
  *(undefined8 *)(param_1[0x48] + 8) = *(undefined8 *)(param_1[0x3e] + 8);
  lVar27 = param_1[0x3e];
  lVar21 = param_1[0x48];
  if (lVar21 != lVar27) {
    **(undefined8 **)(lVar21 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
    *(undefined8 *)(*(long *)(lVar21 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
    *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x10) =
         *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
    *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x18) =
         *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
  }
  pppplVar20 = (long ****)(ulong)*(byte *)(param_1 + 0x46);
  ppppbVar18 = (byte ****)0x2;
  FUN_7101e945c0(param_1 + 0x49,(long)puVar1,(byte ****)"set_parts_talk",2,pppplVar20,in_x5,in_x6,
                 in_x7);
  lVar21 = *(long *)(*DAT_7105329fa0 + 0x858);
  uVar29 = (*(long *)(*DAT_7105329fa0 + 0x860) - lVar21 >> 4) * -0x5555555555555555;
  uVar22 = (ulong)*(byte *)(param_1 + 0x46);
  if (uVar22 <= uVar29 && uVar29 - uVar22 != 0) {
    lVar27 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar9 = FUN_71032a7800(lVar27,*(ulong *)(lVar21 + uVar22 * 0x30));
    if (uVar9 < (uint)((int)((ulong)(*(long *)(lVar27 + 0x28) - *(long *)(lVar27 + 0x20)) >> 6) *
                      -0x33333333)) {
      uVar14 = *(ushort *)(*(long *)(lVar27 + 0x20) + (ulong)uVar9 * 0x140);
      goto LAB_7101e69548;
    }
  }
  uVar14 = 0xffff;
LAB_7101e69548:
  FUN_7101e95dd0(param_1 + 0x49,uVar14,plVar30,ppppbVar18,pppplVar20,in_x5,in_x6,in_x7);
  pcVar16 = "selector_return";
  pcVar19 = "set_btn_return";
  FUN_7101e95110(param_1 + 0x59,puVar1,(long ****)"selector_return",(byte ****)"set_btn_return",
                 pppplVar20,in_x5,in_x6,in_x7);
  FUN_7103778300(0x3f800000,*(long *)(param_1[0x59] + 0x10),0x71043adec5);
  (**(code **)(**(long **)param_1[0x59] + 0x60))(*(long **)param_1[0x59],0);
  FUN_71037780e0(&local_a48,(long)puVar1,(long ****)"gauge_in",pcVar16,pcVar19,pppplVar20,in_x5,
                 in_x6,in_x7);
  ppuVar8 = local_a40[0];
  pppuVar23 = (undefined ***)param_1[0x68];
  if (pppuVar23 != &local_a48) {
    local_a40[0] = (undefined **)0x0;
    ppuVar11 = pppuVar23[1];
    pppuVar23[1] = ppuVar8;
    if (ppuVar11 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar11);
    }
  }
  ppuVar8 = local_a40[0];
  local_a48 = &PTR_FUN_710523d9e8;
  local_a40[0] = (undefined **)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar8);
  }
  FUN_71037780e0(&local_a48,(long)puVar1,(long ****)"gauge_out",pcVar16,pcVar19,pppplVar20,in_x5,
                 in_x6,in_x7);
  ppuVar8 = local_a40[0];
  lVar21 = param_1[0x68];
  if ((undefined ***)(lVar21 + 0x10) != &local_a48) {
    local_a40[0] = (undefined **)0x0;
    uVar22 = *(ulong *)(lVar21 + 0x18);
    *(undefined ***)(lVar21 + 0x18) = ppuVar8;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
  }
  ppuVar8 = local_a40[0];
  local_a48 = &PTR_FUN_710523d9e8;
  local_a40[0] = (undefined **)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar8);
  }
  FUN_71037780e0(&local_a48,(long)puVar1,(long ****)"gauge_loop",pcVar16,pcVar19,pppplVar20,in_x5,
                 in_x6,in_x7);
  ppuVar8 = local_a40[0];
  lVar21 = param_1[0x68];
  if ((undefined ***)(lVar21 + 0x20) != &local_a48) {
    local_a40[0] = (undefined **)0x0;
    uVar22 = *(ulong *)(lVar21 + 0x28);
    *(undefined ***)(lVar21 + 0x28) = ppuVar8;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
  }
  ppuVar8 = local_a40[0];
  local_a48 = &PTR_FUN_710523d9e8;
  local_a40[0] = (undefined **)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar8);
  }
  FUN_71037780e0(&local_a48,(long)puVar1,(long ****)"gauge_progress",pcVar16,pcVar19,pppplVar20,
                 in_x5,in_x6,in_x7);
  ppuVar8 = local_a40[0];
  lVar21 = param_1[0x68];
  if ((undefined ***)(lVar21 + 0x30) != &local_a48) {
    local_a40[0] = (undefined **)0x0;
    uVar22 = *(ulong *)(lVar21 + 0x38);
    *(undefined ***)(lVar21 + 0x38) = ppuVar8;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
  }
  ppuVar8 = local_a40[0];
  local_a48 = &PTR_FUN_710523d9e8;
  local_a40[0] = (undefined **)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar8);
  }
  FUN_7103776910(&local_a48,(long)puVar1,(long ****)"set_txt_resttime",pcVar16,pcVar19,pppplVar20,
                 in_x5,in_x6,in_x7);
  ppuVar8 = local_a40[0];
  lVar21 = param_1[0x68];
  if ((undefined ***)(lVar21 + 0x40) != &local_a48) {
    local_a40[0] = (undefined **)0x0;
    uVar22 = *(ulong *)(lVar21 + 0x48);
    *(undefined ***)(lVar21 + 0x48) = ppuVar8;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
  }
  ppuVar8 = local_a40[0];
  local_a48 = &PTR_FUN_710523d9a8;
  local_a40[0] = (undefined **)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar8);
  }
  FUN_710377b140(param_1[0x68] + 0x10);
  *(undefined1 *)((long)param_1 + 0x2e1) = *(undefined1 *)(param_1[0x9a] + 8);
  puVar24 = (undefined8 *)param_1[0x5b];
  if (puVar24 != puVar1) {
    *(undefined8 *)puVar24[1] = *(undefined8 *)param_1[0x3e];
    *(undefined8 *)(puVar24[1] + 8) = *(undefined8 *)(param_1[0x3e] + 8);
    lVar27 = param_1[0x3e];
    lVar21 = puVar24[1];
    if (lVar21 != lVar27) {
      **(undefined8 **)(lVar21 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
      *(undefined8 *)(*(long *)(lVar21 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
    }
  }
  FUN_7103776910(&local_a48,(long)puVar1,(long ****)"set_enemy_pos",pcVar16,pcVar19,pppplVar20,in_x5
                 ,in_x6,in_x7);
  ppuVar8 = local_a40[0];
  lVar21 = param_1[0x5b];
  uVar17 = extraout_x1;
  if ((undefined ***)(lVar21 + 0x10) != &local_a48) {
    local_a40[0] = (undefined **)0x0;
    uVar22 = *(ulong *)(lVar21 + 0x18);
    *(undefined ***)(lVar21 + 0x18) = ppuVar8;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
      uVar17 = extraout_x1_00;
    }
  }
  ppuVar8 = local_a40[0];
  local_a48 = &PTR_FUN_710523d9a8;
  local_a40[0] = (undefined **)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar8);
    uVar17 = extraout_x1_01;
  }
  FUN_7101e97110(param_1 + 0x5b,uVar17,pcVar16,(byte ****)pcVar19,pppplVar20,in_x5,in_x6,in_x7);
  *(undefined1 *)((long)param_1 + 0x32a) = *(undefined1 *)(param_1[0x9a] + 8);
  local_1400 = 0;
  uStack_1402 = 0;
  uStack_1403 = 0;
  local_80[0] = 0;
  local_80[1] = 1;
  local_80[2] = 2;
  local_80[3] = 3;
  local_80[4] = 4;
  local_1410[0] = 0x65642f18;
  local_1410[1] = 0x72752f76;
  local_1408 = 0x61;
  uStack_1407 = 0x6d6f646e;
  std::random_device::random_device((random_device *)&local_a48,(string *)local_1410);
  if (((local_1410[0] & 1) != 0) && (local_1400 != 0)) {
    FUN_710392eb40(local_1400);
  }
  uVar33 = (ulong)local_80 | 1;
  uVar29 = (ulong)local_80 | 2;
  uVar22 = (ulong)local_80 | 3;
  local_1410[0] = std::random_device::operator()((random_device *)&local_a48);
  lVar21 = -0x26e;
  iVar28 = 1;
  puVar4 = local_1410;
  uVar9 = local_1410[0];
  while( true ) {
    iVar5 = (int)lVar21;
    uVar9 = iVar5 + (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 0x26f;
    puVar4[1] = uVar9;
    if (lVar21 == 0) break;
    iVar3 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965;
    uVar9 = iVar3 + iVar28 + 1;
    iVar28 = iVar28 + 2;
    lVar21 = lVar21 + 2;
    puVar4[2] = iVar5 + iVar3 + 0x270;
    puVar4 = puVar4 + 2;
  }
  local_a50 = 0;
  local_1458 = (undefined **)0x0;
  local_1450[0] = (byte ***)&DAT_00000004;
  lVar21 = FUN_7101d71a30((long)local_1410,(long *)&local_1458);
  if (lVar21 != 0) {
    local_80[0] = local_80[lVar21];
    local_80[lVar21] = 0;
  }
  local_1458 = (undefined **)0x0;
  local_1450[0] = (byte ***)0x3;
  lVar21 = FUN_7101d71a30((long)local_1410,(long *)&local_1458);
  if (lVar21 != 0) {
    bVar2 = local_80[1];
    local_80[1] = *(undefined1 *)(uVar33 + lVar21);
    *(byte *)(uVar33 + lVar21) = bVar2;
  }
  local_1458 = (undefined **)0x0;
  local_1450[0] = (byte ***)0x2;
  lVar21 = FUN_7101d71a30((long)local_1410,(long *)&local_1458);
  if (lVar21 != 0) {
    bVar2 = local_80[2];
    local_80[2] = *(undefined1 *)(uVar29 + lVar21);
    *(byte *)(uVar29 + lVar21) = bVar2;
  }
  local_1458 = (undefined **)0x0;
  local_1450[0] = (byte ***)0x1;
  lVar21 = FUN_7101d71a30((long)local_1410,(long *)&local_1458);
  if (lVar21 != 0) {
    bVar2 = local_80[3];
    local_80[3] = *(undefined1 *)(uVar22 + lVar21);
    *(byte *)(uVar22 + lVar21) = bVar2;
  }
  puVar24 = (undefined8 *)param_1[0x62];
  if (puVar24 != puVar1) {
    *(undefined8 *)puVar24[1] = *(undefined8 *)param_1[0x3e];
    *(undefined8 *)(puVar24[1] + 8) = *(undefined8 *)(param_1[0x3e] + 8);
    lVar27 = param_1[0x3e];
    lVar21 = puVar24[1];
    if (lVar21 != lVar27) {
      **(undefined8 **)(lVar21 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
      *(undefined8 *)(*(long *)(lVar21 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
    }
  }
  uVar22 = 0;
  lVar21 = 0x18;
  do {
    FUN_71003a4ca0((uint *)&local_1458,"set_parts_slot_%02d",uVar22 & 0xffffffff,pcVar16,pcVar19,
                   pppplVar20,in_x5,in_x6,in_x7);
    lVar27 = param_1[0x62];
    puVar24 = (undefined8 *)
              FUN_710392e290(0x10,0x78,(long ****)pcVar16,(byte ****)pcVar19,pppplVar20,in_x5,in_x6,
                             in_x7);
    uVar17 = extraout_x1_02;
    if (puVar24 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
        local_1468 = (long ***)&DAT_00000078;
        pcVar16 = (char *)&local_1468;
        auVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
        uVar17 = auVar34._8_8_;
        if (((auVar34._0_8_ & 1) != 0) &&
           (puVar24 = (undefined8 *)
                      FUN_710392e290(0x10,0x78,(long ****)pcVar16,(byte ****)pcVar19,pppplVar20,
                                     in_x5,in_x6,in_x7), uVar17 = extraout_x1_03,
           puVar24 != (undefined8 *)0x0)) goto LAB_7101e69acc;
      }
      puVar24 = (undefined8 *)0x0;
    }
LAB_7101e69acc:
    puVar24[0xd] = 0;
    puVar24[0xe] = 0;
    puVar24[0xb] = 0;
    puVar24[0xc] = 0;
    *puVar24 = 0;
    puVar24[9] = 0;
    puVar24[10] = 0;
    puVar24[7] = 0;
    puVar24[8] = 0;
    puVar24[5] = 0;
    puVar24[6] = 0;
    puVar24[3] = 0;
    puVar24[4] = 0;
    puVar24[1] = 0;
    puVar24[2] = 0;
    FUN_7103776290(puVar24,uVar17,(long ****)pcVar16,(byte ****)pcVar19,pppplVar20,in_x5,in_x6,in_x7
                  );
    puVar24[2] = &PTR_FUN_710523d9a8;
    puVar12 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)pcVar16,(byte ****)pcVar19,pppplVar20,in_x5,in_x6,
                             in_x7);
    uVar17 = extraout_x1_04;
    if (puVar12 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
        local_1468 = (long ***)&SUB_00000020;
        pcVar16 = (char *)&local_1468;
        auVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
        uVar17 = auVar34._8_8_;
        if (((auVar34._0_8_ & 1) != 0) &&
           (puVar12 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)pcVar16,(byte ****)pcVar19,pppplVar20,
                                     in_x5,in_x6,in_x7), uVar17 = extraout_x1_05,
           puVar12 != (undefined8 *)0x0)) goto LAB_7101e69b4c;
      }
      puVar12 = (undefined8 *)0x0;
    }
LAB_7101e69b4c:
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar24[3] = puVar12;
    FUN_7103776290(puVar24 + 4,uVar17,(long ****)pcVar16,(byte ****)pcVar19,pppplVar20,in_x5,in_x6,
                   in_x7);
    puVar24[6] = &PTR_FUN_710523d9a8;
    puVar12 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)pcVar16,(byte ****)pcVar19,pppplVar20,in_x5,in_x6,
                             in_x7);
    if (puVar12 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
        local_1468 = (long ***)&SUB_00000020;
        pcVar16 = (char *)&local_1468;
        uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
        if (((uVar29 & 1) != 0) &&
           (puVar12 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)pcVar16,(byte ****)pcVar19,pppplVar20,
                                     in_x5,in_x6,in_x7), puVar12 != (undefined8 *)0x0))
        goto LAB_7101e69bbc;
      }
      puVar12 = (undefined8 *)0x0;
    }
LAB_7101e69bbc:
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar24[7] = puVar12;
    puVar24[8] = &PTR_FUN_710523d9a8;
    puVar12 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)pcVar16,(byte ****)pcVar19,pppplVar20,in_x5,in_x6,
                             in_x7);
    if (puVar12 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
        local_1468 = (long ***)&SUB_00000020;
        pcVar16 = (char *)&local_1468;
        uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
        if (((uVar29 & 1) != 0) &&
           (puVar12 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)pcVar16,(byte ****)pcVar19,pppplVar20,
                                     in_x5,in_x6,in_x7), puVar12 != (undefined8 *)0x0))
        goto LAB_7101e69c1c;
      }
      puVar12 = (undefined8 *)0x0;
    }
LAB_7101e69c1c:
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar24[9] = puVar12;
    *(undefined1 *)(puVar24 + 10) = 0;
    *(undefined1 *)((long)puVar24 + 0x54) = 0;
    *(undefined4 *)(puVar24 + 0xe) = 0;
    puVar24[0xc] = 0;
    puVar24[0xd] = 0;
    puVar12 = *(undefined8 **)(lVar27 + lVar21);
    *(undefined8 **)(lVar27 + lVar21) = puVar24;
    if (puVar12 != (undefined8 *)0x0) {
      plVar30 = (long *)puVar12[0xd];
      puVar12[0xd] = 0;
      if (plVar30 != (long *)0x0) {
        (**(code **)(*plVar30 + 8))();
      }
      plVar30 = (long *)puVar12[0xc];
      puVar12[0xc] = 0;
      if (plVar30 != (long *)0x0) {
        (**(code **)(*plVar30 + 8))();
      }
      uVar29 = puVar12[9];
      puVar12[8] = &PTR_FUN_710523d9a8;
      puVar12[9] = 0;
      if (uVar29 != 0) {
        FUN_710392eb40(uVar29);
      }
      uVar29 = puVar12[7];
      puVar12[6] = &PTR_FUN_710523d9a8;
      puVar12[7] = 0;
      if (uVar29 != 0) {
        FUN_710392eb40(uVar29);
      }
      uVar29 = puVar12[5];
      puVar12[4] = &PTR_FUN_710523d988;
      puVar12[5] = 0;
      if (uVar29 != 0) {
        uVar33 = *(ulong *)(uVar29 + 0x18);
        *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar29 + 0x18) = 0;
        if (uVar33 != 0) {
          FUN_710392eb40(uVar33);
        }
        FUN_710392eb40(uVar29);
      }
      uVar29 = puVar12[3];
      puVar12[2] = &PTR_FUN_710523d9a8;
      puVar12[3] = 0;
      if (uVar29 != 0) {
        FUN_710392eb40(uVar29);
      }
      uVar29 = puVar12[1];
      *puVar12 = &PTR_FUN_710523d988;
      puVar12[1] = 0;
      if (uVar29 != 0) {
        uVar33 = *(ulong *)(uVar29 + 0x18);
        *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar29 + 0x18) = 0;
        if (uVar33 != 0) {
          FUN_710392eb40(uVar33);
        }
        FUN_710392eb40(uVar29);
      }
      FUN_710392eb40((ulong)puVar12);
    }
    FUN_7103776640(&local_1468,(long)puVar1,local_1450,pcVar16,pcVar19,pppplVar20,in_x5,in_x6,in_x7)
    ;
    ppplVar6 = local_1460;
    pppplVar25 = *(long *****)(lVar27 + lVar21);
    if (pppplVar25 != &local_1468) {
      local_1460 = (long ***)0x0;
      ppplVar31 = pppplVar25[1];
      pppplVar25[1] = ppplVar6;
      if (ppplVar31 != (long ***)0x0) {
        pplVar13 = ppplVar31[3];
        ppplVar31[2] = (long **)&PTR_FUN_710523d9a8;
        ppplVar31[3] = (long **)0x0;
        if (pplVar13 != (long **)0x0) {
          FUN_710392eb40((ulong)pplVar13);
        }
        FUN_710392eb40((ulong)ppplVar31);
      }
    }
    ppplVar6 = local_1460;
    local_1468 = (long ***)&PTR_FUN_710523d988;
    local_1460 = (long ***)0x0;
    if (ppplVar6 != (long ***)0x0) {
      pplVar13 = ppplVar6[3];
      ppplVar6[2] = (long **)&PTR_FUN_710523d9a8;
      ppplVar6[3] = (long **)0x0;
      if (pplVar13 != (long **)0x0) {
        FUN_710392eb40((ulong)pplVar13);
      }
      FUN_710392eb40((ulong)ppplVar6);
    }
    FUN_7103776910(&local_1468,(long)puVar1,(long ****)local_1450,pcVar16,pcVar19,pppplVar20,in_x5,
                   in_x6,in_x7);
    ppplVar6 = local_1460;
    lVar26 = *(long *)(lVar27 + lVar21);
    if ((long ****)(lVar26 + 0x10) != &local_1468) {
      local_1460 = (long ***)0x0;
      uVar29 = *(ulong *)(lVar26 + 0x18);
      *(long ****)(lVar26 + 0x18) = ppplVar6;
      if (uVar29 != 0) {
        FUN_710392eb40(uVar29);
      }
    }
    ppplVar6 = local_1460;
    local_1468 = (long ***)&PTR_FUN_710523d9a8;
    local_1460 = (long ***)0x0;
    if (ppplVar6 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar6);
    }
    lVar32 = *(long *)(lVar27 + lVar21);
    FUN_7103776910(&local_1468,lVar32,(long ****)"set_rep_spirit",pcVar16,pcVar19,pppplVar20,in_x5,
                   in_x6,in_x7);
    ppplVar6 = local_1460;
    lVar26 = *(long *)(lVar27 + lVar21);
    if ((long ****)(lVar26 + 0x30) != &local_1468) {
      local_1460 = (long ***)0x0;
      uVar29 = *(ulong *)(lVar26 + 0x38);
      *(long ****)(lVar26 + 0x38) = ppplVar6;
      if (uVar29 != 0) {
        FUN_710392eb40(uVar29);
      }
    }
    ppplVar6 = local_1460;
    local_1468 = (long ***)&PTR_FUN_710523d9a8;
    local_1460 = (long ***)0x0;
    if (ppplVar6 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar6);
    }
    FUN_7103776910(&local_1468,lVar32,(long ****)"set_rep_spirit_shadow",pcVar16,pcVar19,pppplVar20,
                   in_x5,in_x6,in_x7);
    ppplVar6 = local_1460;
    lVar26 = *(long *)(lVar27 + lVar21);
    if ((long ****)(lVar26 + 0x40) != &local_1468) {
      local_1460 = (long ***)0x0;
      uVar29 = *(ulong *)(lVar26 + 0x48);
      *(long ****)(lVar26 + 0x48) = ppplVar6;
      if (uVar29 != 0) {
        FUN_710392eb40(uVar29);
      }
    }
    ppplVar6 = local_1460;
    local_1468 = (long ***)&PTR_FUN_710523d9a8;
    local_1460 = (long ***)0x0;
    if (ppplVar6 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar6);
    }
    FUN_7103776640(&local_1468,lVar32,(byte ****)"set_parts_effect",pcVar16,pcVar19,pppplVar20,in_x5
                   ,in_x6,in_x7);
    ppplVar6 = local_1460;
    lVar26 = *(long *)(lVar27 + lVar21);
    if ((long ****)(lVar26 + 0x20) != &local_1468) {
      local_1460 = (long ***)0x0;
      uVar29 = *(ulong *)(lVar26 + 0x28);
      *(long ****)(lVar26 + 0x28) = ppplVar6;
      if (uVar29 != 0) {
        uVar33 = *(ulong *)(uVar29 + 0x18);
        *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar29 + 0x18) = 0;
        if (uVar33 != 0) {
          FUN_710392eb40(uVar33);
        }
        FUN_710392eb40(uVar29);
      }
    }
    ppplVar6 = local_1460;
    local_1468 = (long ***)&PTR_FUN_710523d988;
    local_1460 = (long ***)0x0;
    if (ppplVar6 != (long ***)0x0) {
      uVar29 = *(ulong *)((long)ppplVar6 + 0x18);
      *(undefined ***)((long)ppplVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)ppplVar6 + 0x18) = 0;
      if (uVar29 != 0) {
        FUN_710392eb40(uVar29);
      }
      FUN_710392eb40((ulong)ppplVar6);
    }
    pcVar16 = (char *)(ulong)local_80[uVar22];
    FUN_71037780e0(&local_1468,*(long *)(lVar27 + lVar21),(long ****)"move_%02d",pcVar16,pcVar19,
                   pppplVar20,in_x5,in_x6,in_x7);
    pppplVar25 = (long ****)
                 FUN_710392e290(0x10,0x10,(long ****)pcVar16,(byte ****)pcVar19,pppplVar20,in_x5,
                                in_x6,in_x7);
    if (pppplVar25 == (long ****)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6c[0] = 0;
        local_78 = (long ***)&DAT_00000010;
        pcVar16 = (char *)&local_78;
        uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
        if (((uVar29 & 1) != 0) &&
           (pppplVar25 = (long ****)
                         FUN_710392e290(0x10,0x10,(long ****)pcVar16,(byte ****)pcVar19,pppplVar20,
                                        in_x5,in_x6,in_x7), pppplVar25 != (long ****)0x0))
        goto LAB_7101e69f48;
      }
      pppplVar25 = (long ****)0x0;
    }
LAB_7101e69f48:
    ppplVar6 = local_1460;
    *pppplVar25 = (long ***)&PTR_FUN_710523d9e8;
    pppplVar25[1] = (long ***)0x0;
    if (&local_1468 != pppplVar25) {
      local_1460 = (long ***)0x0;
      pppplVar25[1] = ppplVar6;
    }
    plVar30 = *(long **)(*(long *)(lVar27 + lVar21) + 0x68);
    *(long *****)(*(long *)(lVar27 + lVar21) + 0x68) = pppplVar25;
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 8))(plVar30);
    }
    ppplVar6 = local_1460;
    local_1468 = (long ***)&PTR_FUN_710523d9e8;
    local_1460 = (long ***)0x0;
    if (ppplVar6 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar6);
    }
    lVar21 = lVar21 + 8;
    uVar22 = uVar22 + 1;
    if (lVar21 == 0x38) {
      std::random_device::~random_device((random_device *)&local_a48);
      puVar24 = (undefined8 *)param_1[0x5d];
      if (puVar24 != puVar1) {
        *(undefined8 *)puVar24[1] = *(undefined8 *)param_1[0x3e];
        *(undefined8 *)(puVar24[1] + 8) = *(undefined8 *)(param_1[0x3e] + 8);
        lVar27 = param_1[0x3e];
        lVar21 = puVar24[1];
        if (lVar21 != lVar27) {
          **(undefined8 **)(lVar21 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
          *(undefined8 *)(*(long *)(lVar21 + 0x18) + 8) =
               *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
          *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x10) =
               *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
          *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x18) =
               *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
        }
      }
      FUN_71037780e0(&local_a48,(long)puVar1,(long ****)"anime_tresure_light",pcVar16,pcVar19,
                     pppplVar20,in_x5,in_x6,in_x7);
      ppuVar8 = local_a40[0];
      lVar21 = param_1[0x5d];
      if ((undefined ***)(lVar21 + 0x10) != &local_a48) {
        local_a40[0] = (undefined **)0x0;
        uVar22 = *(ulong *)(lVar21 + 0x18);
        *(undefined ***)(lVar21 + 0x18) = ppuVar8;
        if (uVar22 != 0) {
          FUN_710392eb40(uVar22);
        }
      }
      ppuVar8 = local_a40[0];
      local_a48 = &PTR_FUN_710523d9e8;
      local_a40[0] = (undefined **)0x0;
      if (ppuVar8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar8);
      }
      uVar22 = (ulong)*(byte *)(param_1[0x9a] + 8);
      puVar24 = (undefined8 *)param_1[0x66];
      if (puVar24 != puVar1) {
        *(undefined8 *)puVar24[1] = *(undefined8 *)param_1[0x3e];
        *(undefined8 *)(puVar24[1] + 8) = *(undefined8 *)(param_1[0x3e] + 8);
        lVar27 = param_1[0x3e];
        lVar21 = puVar24[1];
        if (lVar21 != lVar27) {
          **(undefined8 **)(lVar21 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
          *(undefined8 *)(*(long *)(lVar21 + 0x18) + 8) =
               *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
          *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x10) =
               *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
          *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x18) =
               *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
        }
      }
      uVar29 = uVar22;
      FUN_7103778430((long)puVar1,"bg_inner_scene_%02d",uVar22,pcVar19,pppplVar20,in_x5,in_x6,in_x7)
      ;
      FUN_71037780e0(&local_a48,(long)puVar1,(long ****)"bg_move",uVar29,pcVar19,pppplVar20,in_x5,
                     in_x6,in_x7);
      ppuVar8 = local_a40[0];
      lVar21 = param_1[0x66];
      if ((undefined ***)(lVar21 + 0x10) != &local_a48) {
        local_a40[0] = (undefined **)0x0;
        uVar29 = *(ulong *)(lVar21 + 0x18);
        *(undefined ***)(lVar21 + 0x18) = ppuVar8;
        if (uVar29 != 0) {
          FUN_710392eb40(uVar29);
        }
      }
      ppuVar8 = local_a40[0];
      local_a48 = &PTR_FUN_710523d9e8;
      local_a40[0] = (undefined **)0x0;
      if (ppuVar8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar8);
      }
      FUN_71037780e0(&local_a48,(long)puVar1,(long ****)"overlay_in_%02d",uVar22,pcVar19,pppplVar20,
                     in_x5,in_x6,in_x7);
      ppuVar8 = local_a40[0];
      lVar21 = param_1[0x66];
      if ((undefined ***)(lVar21 + 0x20) != &local_a48) {
        local_a40[0] = (undefined **)0x0;
        uVar29 = *(ulong *)(lVar21 + 0x28);
        *(undefined ***)(lVar21 + 0x28) = ppuVar8;
        if (uVar29 != 0) {
          FUN_710392eb40(uVar29);
        }
      }
      ppuVar8 = local_a40[0];
      local_a48 = &PTR_FUN_710523d9e8;
      local_a40[0] = (undefined **)0x0;
      if (ppuVar8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar8);
      }
      FUN_71037780e0(&local_a48,(long)puVar1,(long ****)"overlay_out_%02d",uVar22,pcVar19,pppplVar20
                     ,in_x5,in_x6,in_x7);
      ppuVar8 = local_a40[0];
      lVar21 = param_1[0x66];
      if ((undefined ***)(lVar21 + 0x30) != &local_a48) {
        local_a40[0] = (undefined **)0x0;
        uVar29 = *(ulong *)(lVar21 + 0x38);
        *(undefined ***)(lVar21 + 0x38) = ppuVar8;
        if (uVar29 != 0) {
          FUN_710392eb40(uVar29);
        }
      }
      ppuVar8 = local_a40[0];
      local_a48 = &PTR_FUN_710523d9e8;
      local_a40[0] = (undefined **)0x0;
      if (ppuVar8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar8);
      }
      FUN_71037780e0(&local_a48,(long)puVar1,(long ****)"overlay_out_complete",uVar22,pcVar19,
                     pppplVar20,in_x5,in_x6,in_x7);
      ppuVar8 = local_a40[0];
      lVar21 = param_1[0x66];
      if ((undefined ***)(lVar21 + 0x40) != &local_a48) {
        local_a40[0] = (undefined **)0x0;
        uVar22 = *(ulong *)(lVar21 + 0x48);
        *(undefined ***)(lVar21 + 0x48) = ppuVar8;
        if (uVar22 != 0) {
          FUN_710392eb40(uVar22);
        }
      }
      ppuVar8 = local_a40[0];
      local_a48 = &PTR_FUN_710523d9e8;
      local_a40[0] = (undefined **)0x0;
      if (ppuVar8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar8);
      }
      return;
    }
  } while( true );
}

