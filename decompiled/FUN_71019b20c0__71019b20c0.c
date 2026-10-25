// addr:      71019b20c0
// offset:    0x19b20c0
// name:      FUN_71019b20c0
// mangled:   
// signature: undefined __cdecl FUN_71019b20c0(long * * * * * * * * param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019b20c0(long ********param_1,ulong param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long ********pppppppplVar4;
  uint *puVar5;
  byte *pbVar6;
  ulong *puVar7;
  ulong *puVar8;
  byte bVar9;
  char cVar10;
  short sVar11;
  short sVar12;
  long *******ppppppplVar13;
  undefined8 *puVar14;
  bool bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  long ******pppppplVar19;
  long *******ppppppplVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ushort *puVar24;
  undefined8 *puVar25;
  char *pcVar26;
  ulong uVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  undefined8 uVar30;
  undefined ***pppuVar31;
  byte ****ppppbVar32;
  long ****pppplVar33;
  byte *pbVar34;
  ushort uVar35;
  uint uVar36;
  int iVar37;
  ushort *puVar38;
  ulong uVar39;
  uint uVar40;
  ulong uVar41;
  long lVar42;
  long lVar43;
  long ****pppplVar44;
  long ****pppplVar45;
  long *plVar46;
  long lVar47;
  long lVar48;
  long *********ppppppppplVar49;
  long *****ppppplVar50;
  long lVar51;
  long *****ppppplVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  long *local_370;
  undefined **local_348;
  ulong local_340;
  undefined **local_338;
  ulong local_330;
  undefined **local_328;
  ulong local_320;
  long ***local_318;
  long *local_310 [8];
  undefined **local_2d0;
  ulong local_2c8;
  undefined **local_2c0;
  ulong local_2b8;
  undefined **local_2b0;
  ulong local_2a8;
  undefined **local_2a0;
  ulong local_298;
  undefined **local_290;
  ulong local_288;
  undefined **local_280;
  long *local_278;
  undefined **local_270;
  ulong auStack_268 [8];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined **local_1d8;
  ulong local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined **local_180;
  ulong local_178;
  undefined **local_170;
  undefined8 *local_168;
  undefined **local_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined **local_140;
  long *******local_138;
  undefined8 local_130;
  undefined8 local_128;
  long ***local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a4 [5];
  
  uVar39 = (ulong)*(uint *)(param_1 + 0x5a);
  if (2 < *(uint *)(param_1 + 0x5a)) goto LAB_71019b407c;
  lVar48 = *DAT_7105328160;
  lVar51 = *(long *)(DAT_710532f730 + 8);
  uVar41 = param_2 & 0xffffffff;
  local_128._0_1_ = 0;
  local_130 = 0;
  FUN_7103776290(&local_140,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar5 = (uint *)(lVar48 + uVar39 * 0x2041f0 + 0x208578);
  uVar40 = 3;
  if (*puVar5 == 4) {
    uVar40 = 4;
  }
  uVar27 = (ulong)uVar40;
  FUN_710062dc20((uint *)&local_130,"%dp_%02d");
  pppppppplVar4 = param_1 + 1;
  FUN_7103776640(&local_228,(long)pppppppplVar4,(byte ****)&local_128,uVar27,uVar41,param_5,param_6,
                 param_7,param_8);
  ppppppplVar13 = local_138;
  local_138 = local_220;
  local_220 = (long *******)0x0;
  if (ppppppplVar13 != (long *******)0x0) {
    pppppplVar19 = ppppppplVar13[3];
    ppppppplVar13[2] = (long ******)&PTR_FUN_710523d9a8;
    ppppppplVar13[3] = (long ******)0x0;
    if (pppppplVar19 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar19);
    }
    FUN_710392eb40((ulong)ppppppplVar13);
  }
  local_228 = &PTR_FUN_710523d988;
  local_220 = (long *******)0x0;
  FUN_7103776910(&local_228,(long)&local_140,(long ****)"scr_item",uVar27,uVar41,param_5,param_6,
                 param_7,param_8);
  ppppppplVar13 = local_220;
  uVar40 = (uint)param_2;
  if (3 < uVar40) goto LAB_71019b407c;
  lVar42 = (long)(int)uVar40;
  if (param_1 + lVar42 * 2 + 0x5b != (long ********)&local_228) {
    local_220 = (long *******)0x0;
    ppppppplVar20 = param_1[lVar42 * 2 + 0x5c];
    param_1[lVar42 * 2 + 0x5c] = ppppppplVar13;
    if (ppppppplVar20 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar20);
    }
  }
  ppppppplVar13 = local_220;
  local_228 = &PTR_FUN_710523d9a8;
  local_220 = (long *******)0x0;
  if (ppppppplVar13 != (long *******)0x0) {
    FUN_710392eb40((ulong)ppppppplVar13);
  }
  FUN_7103776640(&local_228,(long)&local_140,(byte ****)"set_parts_csr_t",uVar27,uVar41,param_5,
                 param_6,param_7,param_8);
  ppppppplVar13 = local_220;
  if (param_1 + lVar42 * 2 + 99 != (long ********)&local_228) {
    local_220 = (long *******)0x0;
    ppppppplVar20 = param_1[lVar42 * 2 + 100];
    param_1[lVar42 * 2 + 100] = ppppppplVar13;
    if (ppppppplVar20 != (long *******)0x0) {
      pppppplVar19 = ppppppplVar20[3];
      ppppppplVar20[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar20[3] = (long ******)0x0;
      if (pppppplVar19 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar19);
      }
      FUN_710392eb40((ulong)ppppppplVar20);
    }
  }
  ppppppplVar13 = local_220;
  local_228 = &PTR_FUN_710523d988;
  local_220 = (long *******)0x0;
  if (ppppppplVar13 != (long *******)0x0) {
    pppppplVar19 = ppppppplVar13[3];
    ppppppplVar13[2] = (long ******)&PTR_FUN_710523d9a8;
    ppppppplVar13[3] = (long ******)0x0;
    if (pppppplVar19 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar19);
    }
    FUN_710392eb40((ulong)ppppppplVar13);
  }
  FUN_7103776640(&local_228,(long)&local_140,(byte ****)"set_parts_csr_b",uVar27,uVar41,param_5,
                 param_6,param_7,param_8);
  ppppppplVar13 = local_220;
  if (param_1 + lVar42 * 2 + 0x6b != (long ********)&local_228) {
    local_220 = (long *******)0x0;
    ppppppplVar20 = param_1[lVar42 * 2 + 0x6c];
    param_1[lVar42 * 2 + 0x6c] = ppppppplVar13;
    if (ppppppplVar20 != (long *******)0x0) {
      pppppplVar19 = ppppppplVar20[3];
      ppppppplVar20[2] = (long ******)&PTR_FUN_710523d9a8;
      ppppppplVar20[3] = (long ******)0x0;
      if (pppppplVar19 != (long ******)0x0) {
        FUN_710392eb40((ulong)pppppplVar19);
      }
      FUN_710392eb40((ulong)ppppppplVar20);
    }
  }
  ppppppplVar13 = local_220;
  local_228 = &PTR_FUN_710523d988;
  local_220 = (long *******)0x0;
  if (ppppppplVar13 != (long *******)0x0) {
    pppppplVar19 = ppppppplVar13[3];
    ppppppplVar13[2] = (long ******)&PTR_FUN_710523d9a8;
    ppppppplVar13[3] = (long ******)0x0;
    if (pppppplVar19 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar19);
    }
    FUN_710392eb40((ulong)ppppppplVar13);
  }
  lVar47 = lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078;
  pppplVar44 = *(long *****)(lVar47 + 0x2043b8);
  lVar43 = *(long *)(lVar51 + 0x168);
  uVar17 = FUN_71032632a0(lVar43,(ulong)pppplVar44);
  if ((uVar17 & 1) != 0) {
    pppplVar44 = (long ****)FUN_71032631a0(lVar43,0x11b1ccb807);
  }
  if (((ulong)pppplVar44 & 0xff0000ffffffffff) == 0xc1000011cf2812f7) {
    FUN_7103778430((long)&local_140,"ptn_02_for_duckhunt",uVar27,uVar41,param_5,param_6,param_7,
                   param_8);
  }
  pbVar6 = (byte *)(lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078 + 0x2043b4);
  ppppbVar32 = (byte ****)0x3;
  plVar21 = FUN_710323f330((long *)param_1[0x1d],(ulong)pppplVar44,(ulong)*pbVar6,3,param_5,param_6,
                           param_7,param_8);
  lVar43 = *(long *)(DAT_710532f730 + 8);
  bVar15 = 2 < *puVar5;
  uVar17 = FUN_7103280ec0(*(long *)(lVar43 + 0x2a8),(ulong)pppplVar44,(ulong)*pbVar6,ppppbVar32,
                          param_5,param_6,param_7,param_8);
  uVar41 = (&DAT_710455d6e8)[bVar15];
  fVar61 = 0.0;
  uVar27 = 0;
  ppppppppplVar49 = (long *********)(&DAT_710455d728)[bVar15];
  lVar43 = *(long *)(*(long *)(lVar43 + 0x2a8) + 8);
  auVar53 = FUN_710326ad60(ZEXT816(0),lVar43,uVar17,(&DAT_710455d6a8)[bVar15]);
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uVar27;
  auVar54 = FUN_710326ad60(auVar54 << 0x40,lVar43,uVar17,uVar41);
  auVar55 = FUN_710326ad60(ZEXT816(0x3f800000),lVar43,uVar17,(ulong)ppppppppplVar49);
  local_150 = CONCAT44(auVar54._0_4_,auVar53._0_4_);
  uStack_148 = 0;
  FUN_7103776910(&local_160,(long)&local_140,(long ****)"set_rep_char_icn",ppppppppplVar49,
                 ppppbVar32,param_5,param_6,param_7,param_8);
  puVar25 = local_158;
  FUN_7103778b80((long)local_158,(long)plVar21,ppppppppplVar49,ppppbVar32,param_5,param_6,param_7,
                 param_8);
  puVar22 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar49,ppppbVar32,param_5,param_6,param_7,
                           param_8);
  if (puVar22 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c8 = local_1c8 & 0xffffffff00000000;
      local_228 = (undefined **)&SUB_00000020;
      ppppppppplVar49 = (long *********)&local_228;
      uVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
      if (((uVar41 & 1) != 0) &&
         (puVar22 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar49,ppppbVar32,param_5,param_6,
                                   param_7,param_8), puVar22 != (undefined8 *)0x0))
      goto LAB_71019b251c;
    }
    puVar22 = (undefined8 *)0x0;
  }
LAB_71019b251c:
  puVar22[2] = 0;
  puVar22[3] = 0;
  *puVar22 = 0;
  puVar22[1] = 0;
  *puVar22 = *puVar25;
  puVar22[1] = puVar25[1];
  puVar22[2] = local_158[2];
  puVar22[3] = local_158[3];
  FUN_7103779770(auVar55._0_4_,(long)puVar22,&local_150);
  if (puVar22 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar22);
  }
  FUN_7103776910(&local_170,(long)&local_140,(long ****)"set_rep_char_icn_sd",ppppppppplVar49,
                 ppppbVar32,param_5,param_6,param_7,param_8);
  puVar25 = local_168;
  FUN_7103778b80((long)local_168,(long)plVar21,ppppppppplVar49,ppppbVar32,param_5,param_6,param_7,
                 param_8);
  puVar22 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar49,ppppbVar32,param_5,param_6,param_7,
                           param_8);
  if (puVar22 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c8 = local_1c8 & 0xffffffff00000000;
      local_228 = (undefined **)&SUB_00000020;
      pppplVar28 = (long ****)&local_228;
      uVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
      if (((uVar41 & 1) != 0) &&
         (puVar22 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar28,ppppbVar32,param_5,param_6,param_7,param_8),
         puVar22 != (undefined8 *)0x0)) goto LAB_71019b25e8;
    }
    puVar22 = (undefined8 *)0x0;
  }
LAB_71019b25e8:
  puVar14 = local_168;
  puVar22[2] = 0;
  puVar22[3] = 0;
  *puVar22 = 0;
  puVar22[1] = 0;
  *puVar22 = *puVar25;
  puVar22[1] = puVar25[1];
  puVar22[2] = local_168[2];
  puVar22[3] = local_168[3];
  FUN_7103779770(auVar55._0_4_,(long)puVar22,&local_150);
  if (puVar22 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar22);
  }
  uVar41 = FUN_7103263f80(*(long *)(lVar51 + 0x168),(ulong)pppplVar44);
  ppppppppplVar49 = (long *********)&DAT_00000011;
  plVar21 = FUN_710323f600((long *)param_1[0x1d],uVar41,(long ****)&DAT_00000011,ppppbVar32,param_5,
                           param_6,param_7,param_8);
  FUN_7103776910(&local_228,(long)&local_140,(long ****)"set_rep_series00",ppppppppplVar49,
                 ppppbVar32,param_5,param_6,param_7,param_8);
  uVar41 = (ulong)local_220;
  FUN_7103778b80((long)local_220,(long)plVar21,ppppppppplVar49,ppppbVar32,param_5,param_6,param_7,
                 param_8);
  local_228 = &PTR_FUN_710523d9a8;
  local_220 = (long *******)0x0;
  if (uVar41 != 0) {
    FUN_710392eb40(uVar41);
  }
  pppplVar28 = (long ****)(lVar47 + 0x204398);
  FUN_7103776910(&local_228,(long)&local_140,(long ****)"set_rep_series01",ppppppppplVar49,
                 ppppbVar32,param_5,param_6,param_7,param_8);
  uVar41 = (ulong)local_220;
  FUN_7103778b80((long)local_220,(long)plVar21,ppppppppplVar49,ppppbVar32,param_5,param_6,param_7,
                 param_8);
  local_228 = &PTR_FUN_710523d9a8;
  local_220 = (long *******)0x0;
  if (uVar41 != 0) {
    FUN_710392eb40(uVar41);
  }
  uVar18 = 0x811c9dc5;
  FUN_7103776910(&local_180,(long)&local_140,(long ****)"set_txt_p_num",ppppppppplVar49,ppppbVar32,
                 param_5,param_6,param_7,param_8);
  uVar36 = 99;
  local_220 = (long *******)CONCAT17(local_220._7_1_,0x70665f6e6d63);
  pbVar34 = (byte *)((long)&local_220 + 1);
  uVar17 = uVar18;
  do {
    uVar17 = uVar17 * 0x89 ^ uVar36;
    uVar36 = (uint)*pbVar34;
    pbVar34 = pbVar34 + 1;
  } while (uVar36 != 0);
  local_228 = (undefined **)CONCAT44(6,uVar17);
  FUN_710377a120((long)&local_180,(char *)&local_220,ppppppppplVar49,ppppbVar32,param_5,param_6,
                 param_7,param_8);
  pbVar34 = (byte *)(lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078 + 0x204404);
  pppplVar29 = (long ****)(ulong)(*pbVar34 + 1);
  FUN_7103778430((long)&local_140,"rank_%d",pppplVar29,ppppbVar32,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_228,(long)&local_140,(long ****)"set_txt_rank",pppplVar29,ppppbVar32,param_5
                 ,param_6,param_7,param_8);
  uVar41 = (ulong)local_220;
  plVar21 = *(long **)((long)local_220 + 0x10);
  if (plVar21 != (long *)0x0) {
    local_b8 = 0;
    local_b0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (long ***)0x0;
    local_e0 = 0;
    uVar17 = FUN_71037ad940((long)&local_e8,0x20,0,*pbVar34 + 1,0,0);
    pppplVar29 = (long ****)(ulong)uVar17;
    ppppbVar32 = (byte ****)0x0;
    FUN_71037a2270(plVar21,(ushort *)&local_e8,uVar17,0);
  }
  local_228 = &PTR_FUN_710523d9a8;
  local_220 = (long *******)0x0;
  if (uVar41 != 0) {
    FUN_710392eb40(uVar41);
  }
  if (*pbVar34 == 0) {
    FUN_7103776910(&local_228,(long)&local_140,(long ****)"set_fxui_rankflash",pppplVar29,ppppbVar32
                   ,param_5,param_6,param_7,param_8);
    lVar43 = (long)*local_220;
    plVar21 = (long *)local_220;
    if (lVar43 != 0) {
      bVar16 = *(byte *)(lVar43 + 0x58) | 1;
      goto LAB_71019b2868;
    }
  }
  else {
    FUN_7103776910(&local_228,(long)&local_140,(long ****)"set_fxui_rankflash",pppplVar29,ppppbVar32
                   ,param_5,param_6,param_7,param_8);
    lVar43 = (long)*local_220;
    plVar21 = (long *)local_220;
    if (lVar43 != 0) {
      bVar16 = *(byte *)(lVar43 + 0x58) & 0xfe;
LAB_71019b2868:
      *(byte *)(lVar43 + 0x58) = bVar16;
      plVar21 = (long *)local_220;
    }
  }
  local_228 = &PTR_FUN_710523d9a8;
  local_220 = (long *******)0x0;
  if (plVar21 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar21);
  }
  local_1c8 = 0xf00000000;
  uStack_1c0 = 0x635f726579616c70;
  local_1b8 = 0x70665f726f6c6f;
  uVar36 = 0x70;
  pbVar34 = (byte *)((long)&uStack_1c0 + 1);
  uVar17 = uVar18;
  do {
    uVar17 = uVar17 * 0x89 ^ uVar36;
    uVar36 = (uint)*pbVar34;
    pbVar34 = pbVar34 + 1;
  } while (uVar36 != 0);
  local_1c8 = CONCAT44(0xf,uVar17);
  FUN_7103776390(&local_1d8,&local_140,pppplVar29,ppppbVar32,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_228,(long)&local_1d8,(byte ****)"set_parts_csr_t",pppplVar29,ppppbVar32,
                 param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_270,(long)&local_1d8,(byte ****)"set_parts_csr_b",pppplVar29,ppppbVar32,
                 param_5,param_6,param_7,param_8);
  uVar27 = (ulong)local_220;
  FUN_7103778300(0x3f800000,(long)local_220,(long)&uStack_1c0);
  uVar41 = auStack_268[0];
  FUN_7103778300(0x3f800000,auStack_268[0],(long)&uStack_1c0);
  FUN_7103778300(0x3f800000,uVar27,0x7104328277);
  FUN_7103778300(0x3f800000,auStack_268[0],0x7104328277);
  if ((*(long *)(uVar27 + 8) != 0) &&
     (lVar43 = *(long *)(*(long *)(uVar27 + 8) + 0x18), lVar43 != 0)) {
    *(byte *)(lVar43 + 0x58) = *(byte *)(lVar43 + 0x58) & 0xfe;
  }
  *(undefined1 *)((long)param_1 + 0x2d4) = 1;
  local_270 = &PTR_FUN_710523d988;
  auStack_268[0] = 0;
  if (uVar41 != 0) {
    uVar23 = *(ulong *)(uVar41 + 0x18);
    *(undefined ***)(uVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar41 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40(uVar41);
  }
  local_228 = &PTR_FUN_710523d988;
  local_220 = (long *******)0x0;
  if (uVar27 != 0) {
    uVar41 = *(ulong *)(uVar27 + 0x18);
    *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar27 + 0x18) = 0;
    if (uVar41 != 0) {
      FUN_710392eb40(uVar41);
    }
    FUN_710392eb40(uVar27);
  }
  uVar41 = local_1d0;
  local_1d8 = &PTR_FUN_710523d988;
  local_1d0 = 0;
  if (uVar41 != 0) {
    uVar27 = *(ulong *)(uVar41 + 0x18);
    *(undefined ***)(uVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar41 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar41);
  }
  cVar10 = *(char *)(lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078 + 0x2043ff);
  if (cVar10 == '\0') {
    FUN_7103778300(0x3f800000,(long)local_138,0x710425ecc9);
    pcVar26 = "team_color_1_team";
  }
  else if (cVar10 == '\x01') {
    FUN_7103778300(0x3f800000,(long)local_138,0x7104349ba0);
    pcVar26 = "team_color_2_team";
  }
  else {
    FUN_7103778300(0x3f800000,(long)local_138,(long)&uStack_1c0);
    pcVar26 = "player_color_fp_team";
  }
  FUN_7103778300(0x3f800000,(long)local_138,(long)pcVar26);
  if (DAT_710593b580 == (long *)0x0) {
    uVar17 = 4;
  }
  else {
    lVar43 = *DAT_710593b580;
    iVar37 = *(int *)(lVar43 + 0x7300);
    if (iVar37 == -1) {
      plVar21 = (long *)(lVar43 + 0x28);
    }
    else {
      if (*(ulong *)(lVar43 + 0x72c0) <= (ulong)(long)iVar37) {
LAB_71019b407c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      plVar21 = (long *)(lVar43 + (long)iVar37 * 0xcc0 + 0xce8);
    }
    lVar43 = *plVar21;
    if (*(long *)(lVar48 + uVar39 * 0x2041f0 + 0x204398) == lVar43) {
      uVar17 = 0;
    }
    else if (*(long *)(lVar48 + uVar39 * 0x2041f0 + 0x205410) == lVar43) {
      uVar17 = 1;
    }
    else if (*(long *)(lVar48 + uVar39 * 0x2041f0 + 0x206488) == lVar43) {
      uVar17 = 2;
    }
    else {
      uVar17 = 3;
      if (*(long *)(lVar48 + uVar39 * 0x2041f0 + 0x207500) != lVar43) {
        uVar17 = 4;
      }
    }
  }
  pcVar26 = "my_amiibo_show";
  if (uVar17 != uVar40) {
    pcVar26 = "my_amiibo_hide";
  }
  FUN_7103778430((long)&local_140,"%s",pcVar26,ppppbVar32,param_5,param_6,param_7,param_8);
  lVar43 = lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078;
  sVar11 = *(short *)(lVar43 + 0x2043c0);
  sVar12 = *(short *)(lVar43 + 0x2043c2);
  FUN_7103776910(&local_228,(long)&local_140,(long ****)"set_txt_atk_num",pcVar26,ppppbVar32,param_5
                 ,param_6,param_7,param_8);
  uVar30 = 1;
  uVar41 = (long)sVar11 & 0xffffffff;
  FUN_710377a280((long)&local_228,(byte *)"mnu_amiibo_attack_n",1);
  ppppppplVar13 = local_220;
  local_228 = &PTR_FUN_710523d9a8;
  local_220 = (long *******)0x0;
  if (ppppppplVar13 != (long *******)0x0) {
    FUN_710392eb40((ulong)ppppppplVar13);
  }
  FUN_7103776910(&local_228,(long)&local_140,(long ****)"set_txt_def_num",uVar30,uVar41,param_5,
                 param_6,param_7,param_8);
  uVar30 = 1;
  uVar27 = (long)sVar12 & 0xffffffff;
  FUN_710377a280((long)&local_228,(byte *)"mnu_amiibo_defense_n",1);
  uVar41 = (ulong)local_220;
  local_228 = &PTR_FUN_710523d9a8;
  local_220 = (long *******)0x0;
  if (uVar41 != 0) {
    FUN_710392eb40(uVar41);
  }
  for (uVar41 = 0; *(char *)((long)&local_128 + uVar41) != '\0'; uVar41 = uVar41 + 2) {
    *(char *)((long)&local_218 + uVar41) = *(char *)((long)&local_128 + uVar41);
    if (0x3e < (int)uVar41 + 1U) {
      uVar41 = (ulong)((int)uVar41 + 1);
      break;
    }
    cVar10 = *(char *)((long)&local_128 + uVar41 + 1);
    if (cVar10 == '\0') {
      uVar41 = uVar41 + 1;
      break;
    }
    *(char *)((long)&local_218 + uVar41 + 1) = cVar10;
  }
  *(undefined1 *)((long)&local_218 + (uVar41 & 0xffffffff)) = 0;
  uVar17 = (uint)(byte)local_218;
  if ((byte)local_218 != 0) {
    pbVar34 = (byte *)((long)&local_218 + 1);
    do {
      uVar18 = uVar18 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar17 != 0);
  }
  fVar56 = (float)(int)sVar11;
  local_220 = (long *******)CONCAT44((int)uVar41,uVar18);
  fVar58 = (float)(int)sVar12;
  fVar59 = (float)NEON_ucvtf((uint)*(ushort *)
                                    (*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8) + 0x194));
  fVar59 = 10000.0 / fVar59;
  fVar57 = fVar58;
  if (fVar58 <= fVar56) {
    fVar57 = fVar56;
  }
  fVar57 = fVar57 * fVar59;
  fVar60 = (fVar59 * fVar56) / 10000.0;
  fVar58 = (fVar59 * fVar58) / 10000.0;
  fVar56 = fVar60;
  if (1.0 < fVar60) {
    fVar56 = 1.0;
  }
  fVar59 = 0.0;
  if (0.0 <= fVar60) {
    fVar59 = fVar56;
  }
  fVar56 = fVar58;
  if (1.0 < fVar58) {
    fVar56 = 1.0;
  }
  fVar60 = 0.0;
  if (0.0 <= fVar58) {
    fVar60 = fVar56;
  }
  if (1.0 <= fVar57) {
    if (10000.0 < fVar57) {
      fVar57 = 10000.0;
    }
    fVar57 = fVar57 / 10000.0;
  }
  else {
    fVar57 = 0.0001;
  }
  fVar56 = *(float *)(*DAT_7105329fa0 + 0x2d0);
  if (*(float *)(*DAT_7105329fa0 + 0x2d0) <= 0.001) {
    fVar56 = 0.001;
  }
  local_228 = (undefined **)param_1;
  fVar58 = powf(ABS(1.0 - fVar57),fVar56);
  fVar56 = powf(fVar57,1.0 / fVar56);
  fVar57 = (((1.0 - fVar58) + fVar56) * 0.5) / fVar57;
  fVar59 = fVar59 * fVar57;
  fVar60 = fVar60 * fVar57;
  FUN_7103776640(&local_270,(long)pppppppplVar4,(byte ****)&local_218,uVar30,uVar27,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_318,(long)&local_270,(long ****)"set_pic_atk_bar",uVar30,uVar27,param_5,
                 param_6,param_7,param_8);
  uVar41 = auStack_268[0];
  local_270 = &PTR_FUN_710523d988;
  auStack_268[0] = 0;
  if (uVar41 != 0) {
    uVar23 = *(ulong *)(uVar41 + 0x18);
    *(undefined ***)(uVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar41 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40(uVar41);
  }
  plVar21 = local_310[0];
  fVar57 = fVar59;
  if (1.0 < fVar59) {
    fVar57 = 1.0;
  }
  lVar43 = *local_310[0];
  fVar56 = fVar61;
  if (lVar43 != 0) {
    fVar61 = ABS(*(float *)(lVar43 + 0x50));
    fVar56 = ABS(*(float *)(lVar43 + 0x54));
  }
  fVar58 = -1.0;
  if (0.0 <= fVar59) {
    fVar58 = fVar57 + -1.0;
  }
  local_270 = (undefined **)
              (ulong)(uint)(fVar58 * (fVar61 + -34.0) *
                                     ((fVar56 * -0.57735026) / (fVar61 + -34.0) + 1.0));
  auStack_268[0] = 0;
  FUN_7103779770(1.0,(long)local_310[0],&local_270);
  local_318 = (long ***)&PTR_FUN_710523d9a8;
  local_310[0] = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar21);
  }
  FUN_7103776640(&local_270,(long)pppppppplVar4,(byte ****)&local_218,uVar30,uVar27,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_318,(long)&local_270,(long ****)"set_pic_atk_bar_shadow",uVar30,uVar27,
                 param_5,param_6,param_7,param_8);
  uVar41 = auStack_268[0];
  local_270 = &PTR_FUN_710523d988;
  auStack_268[0] = 0;
  if (uVar41 != 0) {
    uVar23 = *(ulong *)(uVar41 + 0x18);
    *(undefined ***)(uVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar41 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40(uVar41);
  }
  plVar21 = local_310[0];
  lVar43 = *local_310[0];
  if (lVar43 == 0) {
    fVar57 = 0.0;
    fVar61 = 0.0;
  }
  else {
    fVar61 = ABS(*(float *)(lVar43 + 0x54));
    fVar57 = ABS(*(float *)(lVar43 + 0x50));
  }
  local_270 = (undefined **)
              (ulong)(uint)(fVar58 * (fVar57 + -34.0) *
                                     ((fVar61 * -0.57735026) / (fVar57 + -34.0) + 1.0));
  auStack_268[0] = 0;
  FUN_7103779770(1.0,(long)local_310[0],&local_270);
  local_318 = (long ***)&PTR_FUN_710523d9a8;
  local_310[0] = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar21);
  }
  FUN_7103776640(&local_270,(long)pppppppplVar4,(byte ****)&local_218,uVar30,uVar27,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_318,(long)&local_270,(long ****)"set_pic_def_bar",uVar30,uVar27,param_5,
                 param_6,param_7,param_8);
  uVar41 = auStack_268[0];
  local_270 = &PTR_FUN_710523d988;
  auStack_268[0] = 0;
  if (uVar41 != 0) {
    uVar23 = *(ulong *)(uVar41 + 0x18);
    *(undefined ***)(uVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar41 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40(uVar41);
  }
  plVar21 = local_310[0];
  fVar61 = fVar60;
  if (1.0 < fVar60) {
    fVar61 = 1.0;
  }
  lVar43 = *local_310[0];
  if (lVar43 == 0) {
    fVar57 = 0.0;
    fVar56 = 0.0;
  }
  else {
    fVar56 = ABS(*(float *)(lVar43 + 0x54));
    fVar57 = ABS(*(float *)(lVar43 + 0x50));
  }
  fVar58 = -1.0;
  if (0.0 <= fVar60) {
    fVar58 = fVar61 + -1.0;
  }
  local_270 = (undefined **)
              (ulong)(uint)(fVar58 * (fVar57 + -34.0) *
                                     ((fVar56 * -0.57735026) / (fVar57 + -34.0) + 1.0));
  auStack_268[0] = 0;
  FUN_7103779770(1.0,(long)local_310[0],&local_270);
  local_318 = (long ***)&PTR_FUN_710523d9a8;
  local_310[0] = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar21);
  }
  FUN_7103776640(&local_270,(long)pppppppplVar4,(byte ****)&local_218,uVar30,uVar27,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_318,(long)&local_270,(long ****)"set_pic_def_bar_shadow",uVar30,uVar27,
                 param_5,param_6,param_7,param_8);
  uVar41 = auStack_268[0];
  local_270 = &PTR_FUN_710523d988;
  auStack_268[0] = 0;
  if (uVar41 != 0) {
    uVar27 = *(ulong *)(uVar41 + 0x18);
    *(undefined ***)(uVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar41 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar41);
  }
  plVar21 = local_310[0];
  lVar43 = *local_310[0];
  if (lVar43 == 0) {
    fVar57 = 0.0;
    fVar61 = 0.0;
  }
  else {
    fVar61 = ABS(*(float *)(lVar43 + 0x54));
    fVar57 = ABS(*(float *)(lVar43 + 0x50));
  }
  local_270 = (undefined **)
              (ulong)(uint)(fVar58 * (fVar57 + -34.0) *
                                     ((fVar61 * -0.57735026) / (fVar57 + -34.0) + 1.0));
  auStack_268[0] = 0;
  FUN_7103779770(1.0,(long)local_310[0],&local_270);
  local_318 = (long ***)&PTR_FUN_710523d9a8;
  local_310[0] = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar21);
  }
  ppppbVar32 = (byte ****)(ulong)*pbVar6;
  pppplVar33 = (long ****)0x0;
  pppplVar29 = pppplVar44;
  FUN_7103265040((uint *)&local_270,lVar51 + 0x160,(undefined1 *)pppplVar44,(ulong)ppppbVar32,0,
                 param_6,param_7,param_8);
  bVar15 = FUN_71037a4570((long *)*DAT_710593bc60,(byte *)auStack_268);
  uVar17 = 0;
  if (bVar15) {
    puVar24 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)auStack_268);
    if (puVar24 == (ushort *)0x0) {
      uVar17 = 0;
    }
    else {
      uVar35 = *puVar24;
      uVar17 = (uint)(uVar35 != 0);
      if (uVar35 != 0) {
        uVar18 = 0;
        puVar38 = puVar24;
        do {
          if ((uVar35 | 1) == 0xf) {
            if (uVar35 == 0xe) {
              iVar37 = (puVar38[3] >> 1) + 4;
            }
            else {
              iVar37 = 3;
              if (uVar35 != 0xf) {
                iVar37 = 0;
              }
            }
          }
          else {
            iVar37 = 1;
            if (uVar35 == 10) {
              uVar17 = uVar17 + 1;
            }
          }
          uVar18 = iVar37 + uVar18;
          puVar38 = puVar24 + uVar18;
          uVar35 = *puVar38;
        } while (uVar35 != 0);
      }
    }
  }
  local_280 = &PTR_FUN_710523d9a8;
  puVar25 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar29,ppppbVar32,pppplVar33,param_6,param_7,param_8);
  if (puVar25 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_e8 = (long ***)((ulong)local_e8 & 0xffffffff00000000);
      local_318 = (long ***)&SUB_00000020;
      pppplVar29 = &local_318;
      uVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e8);
      if (((uVar41 & 1) != 0) &&
         (puVar25 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar29,ppppbVar32,pppplVar33,param_6,param_7,
                                   param_8), puVar25 != (undefined8 *)0x0)) goto LAB_71019b31fc;
    }
    puVar25 = (undefined8 *)0x0;
  }
LAB_71019b31fc:
  puVar25[2] = 0;
  puVar25[3] = 0;
  *puVar25 = 0;
  puVar25[1] = 0;
  local_278 = puVar25;
  puVar22 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar29,ppppbVar32,pppplVar33,param_6,param_7,param_8);
  if (puVar22 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_e8 = (long ***)((ulong)local_e8 & 0xffffffff00000000);
      local_318 = (long ***)&SUB_00000020;
      pppplVar29 = &local_318;
      uVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e8);
      if (((uVar41 & 1) != 0) &&
         (puVar22 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar29,ppppbVar32,pppplVar33,param_6,param_7,
                                   param_8), puVar22 != (undefined8 *)0x0)) goto LAB_71019b3264;
    }
    puVar22 = (undefined8 *)0x0;
  }
LAB_71019b3264:
  puVar22[2] = 0;
  puVar22[3] = 0;
  *puVar22 = 0;
  puVar22[1] = 0;
  if (uVar17 == 1) {
    FUN_7103776910(&local_318,(long)&local_140,(long ****)"set_txt_p_name",pppplVar29,ppppbVar32,
                   pppplVar33,param_6,param_7,param_8);
    local_370 = local_310[0];
    local_310[0] = (long *)0x0;
    local_278 = local_370;
    if (puVar25 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar25);
    }
    pcVar26 = "set_txt_p_name_break";
  }
  else {
    FUN_7103776910(&local_318,(long)&local_140,(long ****)"set_txt_p_name_break",pppplVar29,
                   ppppbVar32,pppplVar33,param_6,param_7,param_8);
    local_370 = local_310[0];
    local_310[0] = (long *)0x0;
    local_278 = local_370;
    if (puVar25 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar25);
    }
    pcVar26 = "set_txt_p_name";
  }
  local_310[0] = (long *)0x0;
  local_318 = (long ***)&PTR_FUN_710523d9a8;
  FUN_7103776910(&local_318,(long)&local_140,(long ****)pcVar26,pppplVar29,ppppbVar32,pppplVar33,
                 param_6,param_7,param_8);
  plVar21 = local_310[0];
  local_310[0] = (long *)0x0;
  if (puVar22 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar22);
  }
  local_318 = (long ***)&PTR_FUN_710523d9a8;
  local_310[0] = (long *)0x0;
  FUN_710377a120((long)&local_280,(char *)auStack_268,pppplVar29,ppppbVar32,pppplVar33,param_6,
                 param_7,param_8);
  lVar51 = *plVar21;
  if (lVar51 != 0) {
    *(byte *)(lVar51 + 0x58) = *(byte *)(lVar51 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_290,(long)&local_140,(long ****)"set_txt_u_name",pppplVar29,ppppbVar32,
                 pppplVar33,param_6,param_7,param_8);
  uVar30 = 1;
  lVar47 = lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078;
  lVar51 = lVar47 + 0x2043a0;
  lVar43 = lVar51;
  FUN_710377a280((long)&local_290,(byte *)"mel_result_fp_nam",1);
  FUN_7103776910(&local_2a0,(long)&local_140,(long ****)"set_txt_u_name_fp",uVar30,lVar43,pppplVar33
                 ,param_6,param_7,param_8);
  uVar30 = 1;
  FUN_710377a280((long)&local_2a0,(byte *)"mel_result_fp_nam",1);
  bVar16 = *(byte *)(lVar47 + 0x2043c4);
  bVar9 = *(byte *)(lVar47 + 0x205408);
  ppppbVar32 = (byte ****)(ulong)bVar9;
  FUN_7103776640(&local_2b0,(long)&local_140,(byte ****)"parts_fp_lv",uVar30,lVar51,pppplVar33,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_2c0,(long)&local_2b0,(long ****)"set_txt_fp_level",uVar30,lVar51,pppplVar33,
                 param_6,param_7,param_8);
  pppplVar29 = (long ****)0x1;
  FUN_710377a280((long)&local_2c0,(byte *)"mel_result_item_unit_35_00",1);
  if (bVar16 < bVar9) {
    FUN_7103776640(&local_318,(long)&local_140,(byte ****)"set_parts_fp_levelup",pppplVar29,
                   ppppbVar32,pppplVar33,param_6,param_7,param_8);
    plVar46 = local_310[0];
    FUN_7103778300(0x3f800000,(long)local_310[0],0x710432a39d);
    local_318 = (long ***)&PTR_FUN_710523d988;
    local_310[0] = (long *)0x0;
    if (plVar46 != (long *)0x0) {
      uVar41 = plVar46[3];
      plVar46[2] = (long)&PTR_FUN_710523d9a8;
      plVar46[3] = 0;
      if (uVar41 != 0) {
        FUN_710392eb40(uVar41);
      }
      FUN_710392eb40((ulong)plVar46);
    }
    FUN_7103776640(&local_318,(long)&local_140,(byte ****)"set_parts_fp_levelup",pppplVar29,
                   ppppbVar32,pppplVar33,param_6,param_7,param_8);
    plVar46 = local_310[0];
    FUN_7103778300(0x3f800000,(long)local_310[0],0x7104421055);
  }
  else {
    FUN_7103776640(&local_318,(long)&local_140,(byte ****)"set_parts_fp_levelup",pppplVar29,
                   ppppbVar32,pppplVar33,param_6,param_7,param_8);
    plVar46 = local_310[0];
    FUN_7103778760((long)local_310[0],0x710428ff7d);
  }
  local_310[0] = (long *)0x0;
  local_318 = (long ***)&PTR_FUN_710523d988;
  if (plVar46 != (long *)0x0) {
    local_310[0] = (long *)0x0;
    local_318 = (long ***)&PTR_FUN_710523d988;
    uVar41 = plVar46[3];
    plVar46[2] = (long)&PTR_FUN_710523d9a8;
    plVar46[3] = 0;
    if (uVar41 != 0) {
      FUN_710392eb40(uVar41);
    }
    FUN_710392eb40((ulong)plVar46);
  }
  uVar17 = *(byte *)(lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078 + 0x204400) - 1;
  if (uVar17 < 3) {
    pppplVar45 = (long ****)(&PTR_s_offense_71050a7490)[(char)uVar17];
    FUN_7103776640(&local_2d0,(long)&local_140,(byte ****)"set_parts_fp_type",pppplVar29,ppppbVar32,
                   pppplVar33,param_6,param_7,param_8);
    FUN_7103778430((long)&local_2d0,"spirit_attacker_%s",pppplVar45,ppppbVar32,pppplVar33,param_6,
                   param_7,param_8);
    pppplVar29 = pppplVar45;
  }
  else {
    FUN_7103776640(&local_2d0,(long)&local_140,(byte ****)"set_parts_fp_type",pppplVar29,ppppbVar32,
                   pppplVar33,param_6,param_7,param_8);
    if ((*(long *)(local_2c8 + 8) != 0) &&
       (lVar51 = *(long *)(*(long *)(local_2c8 + 8) + 0x18), lVar51 != 0)) {
      *(byte *)(lVar51 + 0x58) = *(byte *)(lVar51 + 0x58) & 0xfe;
    }
  }
  lVar51 = lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078;
  local_e8 = *(long ****)(lVar51 + 0x2053c9);
  local_e0 = *(ulong *)(lVar51 + 0x2053d1);
  local_d8 = *(undefined8 *)(lVar51 + 0x2053d9);
  uStack_d0 = *(undefined8 *)(lVar51 + 0x2053e1);
  local_c8 = *(undefined8 *)(lVar51 + 0x2053e9);
  local_c0 = *(undefined8 *)(lVar51 + 0x2053f1);
  local_b8 = *(undefined8 *)(lVar51 + 0x2053f9);
  local_b0 = CONCAT62(local_b0._2_6_,*(undefined2 *)(lVar51 + 0x205401));
  uVar30 = FUN_71032626e0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),(ulong)pppplVar44);
  bVar16 = FUN_7101767150(&local_e8,(int)uVar30);
  FUN_71003a4ca0((uint *)&local_318,"mnu_amiibo_personal_%02d",(ulong)bVar16,pppplVar29,ppppbVar32,
                 pppplVar33,param_6,param_7,param_8);
  FUN_7103776910(&local_e8,(long)&local_140,(long ****)"set_txt_personality",pppplVar29,ppppbVar32,
                 pppplVar33,param_6,param_7,param_8);
  FUN_710377a120((long)&local_e8,(char *)local_310,pppplVar29,ppppbVar32,pppplVar33,param_6,param_7,
                 param_8);
  uVar41 = local_e0;
  local_e8 = (long ***)&PTR_FUN_710523d9a8;
  local_e0 = 0;
  if (uVar41 != 0) {
    FUN_710392eb40(uVar41);
  }
  FUN_7103776390(&local_328,&local_140,pppplVar29,ppppbVar32,pppplVar33,param_6,param_7,param_8);
  pppplVar44 = (long ****)0x0;
  FUN_7103776640(&local_e8,(long)&local_328,(byte ****)"set_parts_skillset_%02d",0,ppppbVar32,
                 pppplVar33,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(param_1 + lVar42 * 0xf + 0x1e),(long)&local_e8,pppplVar44,ppppbVar32,
                 pppplVar33,param_6,param_7,param_8);
  uVar41 = local_e0;
  local_e8 = (long ***)&PTR_FUN_710523d988;
  local_e0 = 0;
  if (uVar41 != 0) {
    uVar27 = *(ulong *)(uVar41 + 0x18);
    *(undefined ***)(uVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar41 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar41);
  }
  uVar41 = local_320;
  local_328 = &PTR_FUN_710523d988;
  local_320 = 0;
  if (uVar41 != 0) {
    uVar27 = *(ulong *)(uVar41 + 0x18);
    *(undefined ***)(uVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar41 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar41);
  }
  FUN_7103776390(&local_328,&local_140,pppplVar44,ppppbVar32,pppplVar33,param_6,param_7,param_8);
  pppplVar44 = (long ****)0x1;
  FUN_7103776640(&local_e8,(long)&local_328,(byte ****)"set_parts_skillset_%02d",1,ppppbVar32,
                 pppplVar33,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(param_1 + lVar42 * 0xf + 0x23),(long)&local_e8,pppplVar44,ppppbVar32,
                 pppplVar33,param_6,param_7,param_8);
  uVar41 = local_e0;
  local_e8 = (long ***)&PTR_FUN_710523d988;
  local_e0 = 0;
  if (uVar41 != 0) {
    uVar27 = *(ulong *)(uVar41 + 0x18);
    *(undefined ***)(uVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar41 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar41);
  }
  uVar41 = local_320;
  local_328 = &PTR_FUN_710523d988;
  local_320 = 0;
  if (uVar41 != 0) {
    uVar27 = *(ulong *)(uVar41 + 0x18);
    *(undefined ***)(uVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar41 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar41);
  }
  FUN_7103776390(&local_328,&local_140,pppplVar44,ppppbVar32,pppplVar33,param_6,param_7,param_8);
  uVar30 = 2;
  FUN_7103776640(&local_e8,(long)&local_328,(byte ****)"set_parts_skillset_%02d",2,ppppbVar32,
                 pppplVar33,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(param_1 + lVar42 * 0xf + 0x28),(long)&local_e8,uVar30,ppppbVar32,pppplVar33,
                 param_6,param_7,param_8);
  uVar41 = local_e0;
  local_e8 = (long ***)&PTR_FUN_710523d988;
  local_e0 = 0;
  if (uVar41 != 0) {
    uVar27 = *(ulong *)(uVar41 + 0x18);
    *(undefined ***)(uVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar41 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar41);
  }
  uVar41 = local_320;
  local_328 = &PTR_FUN_710523d988;
  local_320 = 0;
  if (uVar41 != 0) {
    uVar27 = *(ulong *)(uVar41 + 0x18);
    *(undefined ***)(uVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar41 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar41);
  }
  bVar16 = *(byte *)(lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078 + 0x204401);
  uVar17 = (uint)bVar16;
  if (0xde < bVar16) {
    uVar17 = bVar16 + 0x2e;
  }
  if (uVar17 == 0) {
LAB_71019b38bc:
    FUN_7103778300(0x3f800000,(long)param_1[lVar42 * 0xf + 0x1f],0x7104339aab);
  }
  else {
    if (0xde < uVar17) {
      lVar51 = *(long *)(DAT_710532f730 + 8);
      bVar15 = FUN_71032a2c10(*(long *)(lVar51 + 0x218),(ushort)uVar17);
      if ((!bVar15) ||
         (uVar41 = FUN_71032a2f50(*(long *)(lVar51 + 0x218),(ushort)uVar17), 0xd < (int)uVar41))
      goto LAB_71019b38bc;
    }
    FUN_7103778300(0x3f800000,(long)param_1[lVar42 * 0xf + 0x1f],0x71042b3c6d);
    FUN_71019b6cd0((long)(param_1 + lVar42 * 0xf + 0x1e),(long *)param_1[0x1d],
                   (long *********)(ulong)uVar17,ppppbVar32,pppplVar33,param_6,param_7,param_8);
  }
  bVar16 = *(byte *)(lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078 + 0x204402);
  uVar17 = (uint)bVar16;
  if (0xde < bVar16) {
    uVar17 = bVar16 + 0x2e;
  }
  if (uVar17 == 0) {
LAB_71019b3980:
    FUN_7103778300(0x3f800000,(long)param_1[lVar42 * 0xf + 0x24],0x7104339aab);
  }
  else {
    if (0xde < uVar17) {
      lVar51 = *(long *)(DAT_710532f730 + 8);
      bVar15 = FUN_71032a2c10(*(long *)(lVar51 + 0x218),(ushort)uVar17);
      if ((!bVar15) ||
         (uVar41 = FUN_71032a2f50(*(long *)(lVar51 + 0x218),(ushort)uVar17), 0xd < (int)uVar41))
      goto LAB_71019b3980;
    }
    FUN_7103778300(0x3f800000,(long)param_1[lVar42 * 0xf + 0x24],0x71042b3c6d);
    FUN_71019b6cd0((long)(param_1 + lVar42 * 0xf + 0x23),(long *)param_1[0x1d],
                   (long *********)(ulong)uVar17,ppppbVar32,pppplVar33,param_6,param_7,param_8);
  }
  bVar16 = *(byte *)(lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078 + 0x204403);
  uVar17 = (uint)bVar16;
  if (0xde < bVar16) {
    uVar17 = bVar16 + 0x2e;
  }
  if (uVar17 == 0) {
LAB_71019b3a3c:
    FUN_7103778300(0x3f800000,(long)param_1[lVar42 * 0xf + 0x29],0x7104339aab);
  }
  else {
    if (0xde < uVar17) {
      lVar51 = *(long *)(DAT_710532f730 + 8);
      bVar15 = FUN_71032a2c10(*(long *)(lVar51 + 0x218),(ushort)uVar17);
      if ((!bVar15) ||
         (uVar41 = FUN_71032a2f50(*(long *)(lVar51 + 0x218),(ushort)uVar17), 0xd < (int)uVar41))
      goto LAB_71019b3a3c;
    }
    FUN_7103778300(0x3f800000,(long)param_1[lVar42 * 0xf + 0x29],0x71042b3c6d);
    FUN_71019b6cd0((long)(param_1 + lVar42 * 0xf + 0x28),(long *)param_1[0x1d],
                   (long *********)(ulong)uVar17,ppppbVar32,pppplVar33,param_6,param_7,param_8);
  }
  uVar17 = 0x14;
  if (3 < *puVar5) {
    uVar17 = 0x10;
  }
  lVar51 = lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078;
  puVar7 = (ulong *)(lVar51 + 0x204408);
  uVar41 = *puVar7;
  bVar2 = uVar41 <= uVar17 >> 1;
  bVar15 = uVar17 < uVar41;
  puVar8 = (ulong *)(lVar51 + 0x204410);
  uVar41 = *puVar8;
  bVar3 = uVar41 <= uVar17 >> 1;
  bVar1 = uVar17 < uVar41;
  if ((bVar15 || bVar2) || (bVar1 || bVar3)) {
    if (!bVar1 && !bVar3 || (bVar15 || bVar2)) {
      if (!bVar15 && !bVar2 || (bVar1 || bVar3)) {
        uVar18 = 3;
        if (!bVar15 && !bVar2 || !bVar1 && !bVar3) {
          uVar18 = 0;
        }
        pppplVar44 = (long ****)(ulong)uVar18;
      }
      else {
        pppplVar44 = (long ****)0x2;
      }
    }
    else {
      pppplVar44 = (long ****)0x1;
    }
  }
  else {
    pppplVar44 = (long ****)0x0;
  }
  FUN_7103778430((long)&local_140,"scr_item_ptn_%d",pppplVar44,ppppbVar32,pppplVar33,param_6,param_7
                 ,param_8);
  pppppplVar19 = *param_1[2];
  if (pppppplVar19 != (long ******)0x0) {
    (*(code *)(*pppppplVar19[0x8b])[0xb])();
    ppppplVar52 = pppppplVar19[0x8d];
    for (ppppplVar50 = pppppplVar19[0x8c]; ppppplVar50 != ppppplVar52; ppppplVar50 = ppppplVar50 + 1
        ) {
      pppplVar29 = *ppppplVar50;
      uVar41 = (*(code *)(*pppplVar29)[8])(pppplVar29);
      if ((uVar41 & 1) != 0) {
        (*(code *)(*pppplVar29)[4])(pppplVar29);
      }
    }
  }
  local_338 = &PTR_FUN_710523d9a8;
  puVar25 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar44,ppppbVar32,pppplVar33,param_6,param_7,param_8);
  if (puVar25 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_348 = (undefined **)((ulong)local_348 & 0xffffffff00000000);
      local_e8 = (long ***)&SUB_00000020;
      pppplVar44 = &local_e8;
      uVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_348);
      if (((uVar41 & 1) != 0) &&
         (puVar25 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar44,ppppbVar32,pppplVar33,param_6,param_7,
                                   param_8), puVar25 != (undefined8 *)0x0)) goto LAB_71019b3bec;
    }
    puVar25 = (undefined8 *)0x0;
  }
LAB_71019b3bec:
  puVar25[2] = 0;
  puVar25[3] = 0;
  *puVar25 = 0;
  puVar25[1] = 0;
  FUN_7103776910(&local_e8,(long)&local_140,(long ****)"set_txt_item_02",pppplVar44,ppppbVar32,
                 pppplVar33,param_6,param_7,param_8);
  uVar41 = local_e0;
  local_e0 = 0;
  local_330 = uVar41;
  if (puVar25 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar25);
  }
  local_348 = &PTR_FUN_710523d9a8;
  local_e8 = (long ***)&PTR_FUN_710523d9a8;
  local_e0 = 0;
  puVar25 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar44,ppppbVar32,pppplVar33,param_6,param_7,param_8);
  if (puVar25 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a4[0] = 0;
      local_e8 = (long ***)&SUB_00000020;
      pppplVar44 = &local_e8;
      uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_a4);
      if (((uVar27 & 1) != 0) &&
         (puVar25 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar44,ppppbVar32,pppplVar33,param_6,param_7,
                                   param_8), puVar25 != (undefined8 *)0x0)) goto LAB_71019b3c84;
    }
    puVar25 = (undefined8 *)0x0;
  }
LAB_71019b3c84:
  puVar25[2] = 0;
  puVar25[3] = 0;
  *puVar25 = 0;
  puVar25[1] = 0;
  FUN_7103776910(&local_e8,(long)&local_140,(long ****)"set_txt_title_02",pppplVar44,ppppbVar32,
                 pppplVar33,param_6,param_7,param_8);
  uVar27 = local_e0;
  local_e0 = 0;
  local_340 = uVar27;
  if (puVar25 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar25);
  }
  local_e8 = (long ***)&PTR_FUN_710523d9a8;
  local_e0 = 0;
  uVar18 = (uint)*(byte *)(lVar48 + uVar39 * 0x2041f0 + 0x204390);
  if (uVar18 - 1 < 2) {
    FUN_710377a120((long)&local_348,"mel_result_item_04",pppplVar44,ppppbVar32,pppplVar33,param_6,
                   param_7,param_8);
    if (*(char *)(lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078 + 0x20441c) == '\0') {
      FUN_710377a280((long)&local_338,(byte *)"mel_result_dead_time",2);
    }
    else {
      FUN_710377a120((long)&local_338,"mel_result_not_dead",pppplVar44,ppppbVar32,pppplVar33,param_6
                     ,param_7,param_8);
    }
  }
  else if (uVar18 == 0) {
    FUN_710377a120((long)&local_348,"mel_result_item_03",pppplVar44,ppppbVar32,pppplVar33,param_6,
                   param_7,param_8);
    plVar46 = *(long **)(uVar41 + 0x10);
    if (plVar46 != (long *)0x0) {
      cVar10 = *(char *)(lVar48 + uVar39 * 0x2041f0 + 0x204391);
      local_b8 = 0;
      local_b0 = 0;
      iVar37 = (uint)(cVar10 == -2) << 1;
      local_c8 = 0;
      local_c0 = 0;
      if (cVar10 == -1) {
        iVar37 = 1;
      }
      local_d8 = 0;
      uStack_d0 = 0;
      param_6 = 0;
      local_e8 = (long ***)0x0;
      local_e0 = 0;
      uVar18 = FUN_71037ad940((long)&local_e8,0x20,0,
                              (*(int *)puVar7 - *(int *)puVar8) -
                              iVar37 * *(int *)(lVar48 + uVar39 * 0x2041f0 + lVar42 * 0x1078 +
                                               0x204418),1,0);
      FUN_71037a2270(plVar46,(ushort *)&local_e8,uVar18,0);
    }
  }
  FUN_71019b1b60((long)param_1,uVar17,(long)&local_140,1,pppplVar28,param_6,param_7,param_8);
  pppuVar31 = &local_140;
  uVar30 = 0;
  FUN_71019b1b60((long)param_1,uVar17,(long)pppuVar31,0,pppplVar28,param_6,param_7,param_8);
  FUN_7103776910(&local_e8,(long)&local_140,(long ****)"set_txt_item_03",pppuVar31,uVar30,pppplVar28
                 ,param_6,param_7,param_8);
  FUN_710377a310((long)&local_e8,1);
  uVar39 = local_e0;
  local_e8 = (long ***)&PTR_FUN_710523d9a8;
  local_e0 = 0;
  if (uVar39 != 0) {
    FUN_710392eb40(uVar39);
  }
  FUN_7103778430((long)pppppppplVar4,"in_panel_%dp",(ulong)(uVar40 + 1),uVar30,pppplVar28,param_6,
                 param_7,param_8);
  local_348 = &PTR_FUN_710523d9a8;
  local_340 = 0;
  if (uVar27 != 0) {
    FUN_710392eb40(uVar27);
  }
  local_338 = &PTR_FUN_710523d9a8;
  local_330 = 0;
  if (uVar41 != 0) {
    FUN_710392eb40(uVar41);
  }
  uVar39 = local_2c8;
  local_2d0 = &PTR_FUN_710523d988;
  local_2c8 = 0;
  if (uVar39 != 0) {
    uVar41 = *(ulong *)(uVar39 + 0x18);
    *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar39 + 0x18) = 0;
    if (uVar41 != 0) {
      FUN_710392eb40(uVar41);
    }
    FUN_710392eb40(uVar39);
  }
  uVar39 = local_2b8;
  local_2c0 = &PTR_FUN_710523d9a8;
  local_2b8 = 0;
  if (uVar39 != 0) {
    FUN_710392eb40(uVar39);
  }
  uVar39 = local_2a8;
  local_2b0 = &PTR_FUN_710523d988;
  local_2a8 = 0;
  if (uVar39 != 0) {
    uVar41 = *(ulong *)(uVar39 + 0x18);
    *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar39 + 0x18) = 0;
    if (uVar41 != 0) {
      FUN_710392eb40(uVar41);
    }
    FUN_710392eb40(uVar39);
  }
  uVar39 = local_298;
  local_2a0 = &PTR_FUN_710523d9a8;
  local_298 = 0;
  if (uVar39 != 0) {
    FUN_710392eb40(uVar39);
  }
  uVar39 = local_288;
  local_290 = &PTR_FUN_710523d9a8;
  local_288 = 0;
  if (uVar39 != 0) {
    FUN_710392eb40(uVar39);
  }
  if (plVar21 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar21);
  }
  local_280 = &PTR_FUN_710523d9a8;
  local_278 = (long *)0x0;
  if (local_370 != (long *)0x0) {
    FUN_710392eb40((ulong)local_370);
  }
  uVar39 = local_178;
  local_180 = &PTR_FUN_710523d9a8;
  local_178 = 0;
  if (uVar39 != 0) {
    FUN_710392eb40(uVar39);
  }
  local_170 = &PTR_FUN_710523d9a8;
  local_168 = (undefined8 *)0x0;
  if (puVar14 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar14);
  }
  puVar25 = local_158;
  local_160 = &PTR_FUN_710523d9a8;
  local_158 = (undefined8 *)0x0;
  if (puVar25 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar25);
  }
  ppppppplVar13 = local_138;
  local_140 = &PTR_FUN_710523d988;
  local_138 = (long *******)0x0;
  if (ppppppplVar13 != (long *******)0x0) {
    pppppplVar19 = ppppppplVar13[3];
    ppppppplVar13[2] = (long ******)&PTR_FUN_710523d9a8;
    ppppppplVar13[3] = (long ******)0x0;
    if (pppppplVar19 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar19);
    }
    FUN_710392eb40((ulong)ppppppplVar13);
  }
  return;
}

