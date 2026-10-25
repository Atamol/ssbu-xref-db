// addr:      7101a957a0
// offset:    0x1a957a0
// name:      FUN_7101a957a0
// mangled:   
// signature: undefined __cdecl FUN_7101a957a0(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_7101a957a0(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  uint *puVar5;
  long *plVar6;
  byte *pbVar7;
  undefined2 *puVar8;
  char cVar9;
  uint6 uVar10;
  undefined1 uVar11;
  long ***ppplVar12;
  byte ***pppbVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long *********ppppppppplVar23;
  long *plVar24;
  ulong uVar25;
  undefined1 *puVar26;
  undefined8 uVar27;
  long *plVar28;
  byte bVar29;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long ****pppplVar30;
  undefined **ppuVar31;
  byte ****ppppbVar32;
  undefined4 uVar33;
  uint uVar34;
  uint *puVar35;
  byte **ppbVar36;
  code *pcVar37;
  undefined8 *puVar38;
  char *pcVar39;
  char *pcVar40;
  long lVar41;
  ulong uVar42;
  byte *pbVar43;
  long lVar44;
  long lVar45;
  int iVar46;
  long lVar47;
  ulong uVar48;
  ushort uVar49;
  uint uVar50;
  long lVar51;
  long *plVar52;
  undefined8 *puVar53;
  long **pplVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  uint local_368 [2];
  byte ***local_360;
  long ***local_358;
  undefined4 local_350;
  undefined2 local_34c;
  undefined1 local_34a;
  undefined1 *local_348;
  byte ****local_340;
  long alStack_330 [4];
  long *local_310;
  long alStack_300 [4];
  long *local_2e0;
  long alStack_2d0 [4];
  long *local_2b0;
  long alStack_2a0 [4];
  long *local_280;
  long alStack_270 [4];
  long *local_250;
  undefined4 local_240;
  undefined **local_228;
  ulong local_220;
  undefined **local_218;
  long *local_210;
  undefined **local_208;
  byte ***local_200 [8];
  undefined8 local_1c0;
  byte local_1b8;
  undefined1 uStack_1b7;
  undefined2 uStack_1b6;
  undefined1 uStack_1b4;
  undefined1 uStack_1b3;
  undefined2 uStack_1b2;
  undefined4 local_1b0;
  undefined2 uStack_1ac;
  undefined1 uStack_1aa;
  undefined1 uStack_1a9;
  undefined1 *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  long local_190;
  undefined8 local_188;
  long *local_170;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  undefined4 local_a0;
  
  *param_1 = &PTR_FUN_71050a93f8;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  pppplVar30 = param_3;
  ppppbVar32 = param_4;
  lVar20 = FUN_710392e290(0x10,0x3948,param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar20 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_360 = (byte ***)((ulong)local_360 & 0xffffffff00000000);
      local_1c0._0_4_ = 0x3948;
      local_1c0._4_4_ = 0;
      pppplVar30 = (long ****)&local_1c0;
      uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_360);
      if (((uVar21 & 1) != 0) &&
         (lVar20 = FUN_710392e290(0x10,0x3948,pppplVar30,ppppbVar32,param_5,param_6,param_7,param_8)
         , lVar20 != 0)) goto LAB_7101a95860;
    }
    lVar20 = 0;
  }
LAB_7101a95860:
  *(undefined4 *)(lVar20 + 0x110) = 0xffffffff;
  *(undefined8 *)(lVar20 + 0x10) = 0;
  *(undefined8 *)(lVar20 + 0x18) = 0;
  *(undefined1 *)(lVar20 + 0x114) = 0;
  *(long *)lVar20 = lVar20;
  *(undefined8 *)(lVar20 + 8) = 0;
  *(long **)(lVar20 + 0x118) = param_2;
  *(undefined8 *)(lVar20 + 0x100) = 0;
  *(undefined8 *)(lVar20 + 0x108) = 0xffffffff;
  *(undefined8 *)(lVar20 + 0xf0) = 0;
  *(undefined8 *)(lVar20 + 0xf8) = 0;
  *(undefined8 *)(lVar20 + 0xe0) = 0;
  *(undefined8 *)(lVar20 + 0xe8) = 0;
  *(undefined8 *)(lVar20 + 0xd0) = 0;
  *(undefined8 *)(lVar20 + 0xd8) = 0;
  *(undefined8 *)(lVar20 + 0xc0) = 0;
  *(undefined8 *)(lVar20 + 200) = 0;
  *(undefined8 *)(lVar20 + 0xb0) = 0;
  *(undefined8 *)(lVar20 + 0xb8) = 0;
  *(undefined8 *)(lVar20 + 0xa0) = 0;
  *(undefined8 *)(lVar20 + 0xa8) = 0;
  *(undefined8 *)(lVar20 + 0x90) = 0;
  *(undefined8 *)(lVar20 + 0x98) = 0;
  *(undefined8 *)(lVar20 + 0x80) = 0;
  *(undefined8 *)(lVar20 + 0x88) = 0;
  *(undefined8 *)(lVar20 + 0x70) = 0;
  *(undefined8 *)(lVar20 + 0x78) = 0;
  *(undefined8 *)(lVar20 + 0x60) = 0;
  *(undefined8 *)(lVar20 + 0x68) = 0;
  *(undefined8 *)(lVar20 + 0x50) = 0;
  *(undefined8 *)(lVar20 + 0x58) = 0;
  *(undefined8 *)(lVar20 + 0x40) = 0;
  *(undefined8 *)(lVar20 + 0x48) = 0;
  *(undefined8 *)(lVar20 + 0x30) = 0;
  *(undefined8 *)(lVar20 + 0x38) = 0;
  *(undefined8 *)(lVar20 + 0x20) = 0;
  *(undefined8 *)(lVar20 + 0x28) = 0;
  puVar22 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar30,ppppbVar32,param_5,param_6,param_7,param_8);
  uVar27 = extraout_x1;
  if (puVar22 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_360 = (byte ***)((ulong)local_360 & 0xffffffff00000000);
      local_1c0._0_4_ = 8;
      local_1c0._4_4_ = 0;
      pppplVar30 = (long ****)&local_1c0;
      auVar61 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_360);
      uVar27 = auVar61._8_8_;
      if (((auVar61._0_8_ & 1) != 0) &&
         (puVar22 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar30,ppppbVar32,param_5,param_6,param_7,param_8),
         uVar27 = extraout_x1_00, puVar22 != (undefined8 *)0x0)) goto LAB_7101a95918;
    }
    puVar22 = (undefined8 *)0x0;
  }
LAB_7101a95918:
  FUN_7103773200(puVar22,uVar27,pppplVar30,ppppbVar32,param_5,param_6,param_7,param_8);
  plVar2 = (long *)(lVar20 + 0x128);
  pppplVar30 = (long ****)0x3650;
  *(undefined8 **)(lVar20 + 0x120) = puVar22;
  puVar22 = (undefined8 *)(lVar20 + 0x138);
  memset(plVar2,0,0x3650);
  FUN_7101a8ae40(puVar22);
  FUN_7101a8ae40((undefined8 *)(lVar20 + 0x800));
  FUN_7101a8ae40((undefined8 *)(lVar20 + 0xec8));
  FUN_7101a8ae40((undefined8 *)(lVar20 + 0x1590));
  FUN_7101a8ae40((undefined8 *)(lVar20 + 0x1c58));
  FUN_7101a8ae40((undefined8 *)(lVar20 + 0x2320));
  FUN_7101a8ae40((undefined8 *)(lVar20 + 0x29e8));
  FUN_7101a8ae40((undefined8 *)(lVar20 + 0x30b0));
  *(undefined2 *)(lVar20 + 0x3778) = 1;
  *(undefined2 *)(lVar20 + 0x382c) = 0;
  *(undefined8 *)(lVar20 + 0x3824) = 0;
  *(undefined8 *)(lVar20 + 0x3819) = 0;
  *(undefined8 *)(lVar20 + 0x3814) = 0;
  *(undefined8 *)(lVar20 + 0x380c) = 0;
  *(undefined8 *)(lVar20 + 0x3804) = 0;
  *(undefined8 *)(lVar20 + 0x37fc) = 0;
  *(undefined8 *)(lVar20 + 0x37f4) = 0;
  *(undefined8 *)(lVar20 + 0x37ec) = 0;
  *(undefined8 *)(lVar20 + 0x37e4) = 0;
  *(undefined8 *)(lVar20 + 0x37dc) = 0;
  *(undefined8 *)(lVar20 + 0x37d4) = 0;
  *(undefined8 *)(lVar20 + 0x37cc) = 0;
  *(undefined8 *)(lVar20 + 0x37c4) = 0;
  *(undefined8 *)(lVar20 + 0x37bc) = 0;
  *(undefined8 *)(lVar20 + 0x37b4) = 0;
  *(undefined8 *)(lVar20 + 0x37ac) = 0;
  *(undefined8 *)(lVar20 + 0x37a4) = 0;
  *(undefined8 *)(lVar20 + 0x379c) = 0;
  *(undefined8 *)(lVar20 + 0x3794) = 0;
  *(undefined8 *)(lVar20 + 0x378c) = 0;
  *(undefined8 *)(lVar20 + 0x3784) = 0;
  *(undefined8 *)(lVar20 + 0x377c) = 0;
  *(undefined4 *)(lVar20 + 0x3830) = 0xffffffff;
  *(undefined8 *)(lVar20 + 0x383c) = 0;
  puVar5 = (uint *)(lVar20 + 0x3834);
  puVar5[0] = 0;
  puVar5[1] = 0;
  *(undefined1 *)(lVar20 + 0x3890) = 0;
  plVar6 = (long *)(lVar20 + 0x38e0);
  *(undefined1 **)(lVar20 + 0x38e8) = &DAT_7104742dbb;
  *(undefined4 *)(lVar20 + 0x38f0) = 0xffffff;
  *(long **)(lVar20 + 0x38e0) = plVar6;
  pbVar7 = (byte *)(lVar20 + 0x3912);
  *(undefined8 *)(lVar20 + 0x3888) = 0;
  *(undefined8 *)(lVar20 + 0x3880) = 0;
  *(undefined8 *)(lVar20 + 0x3878) = 0;
  *(undefined8 *)(lVar20 + 0x3870) = 0;
  *(undefined8 *)(lVar20 + 0x3868) = 0;
  *(undefined8 *)(lVar20 + 0x3860) = 0;
  *(undefined8 *)(lVar20 + 0x3858) = 0;
  *(undefined8 *)(lVar20 + 0x3850) = 0;
  *(undefined8 *)(lVar20 + 0x3848) = 0;
  *(undefined8 *)(lVar20 + 0x38d8) = 0;
  *(undefined8 *)(lVar20 + 0x38d0) = 0;
  *(undefined8 *)(lVar20 + 0x38c8) = 0;
  *(undefined8 *)(lVar20 + 0x38c0) = 0;
  *(undefined8 *)(lVar20 + 0x38b8) = 0;
  *(undefined8 *)(lVar20 + 0x38b0) = 0;
  *(undefined8 *)(lVar20 + 0x38a8) = 0;
  *(undefined8 *)(lVar20 + 0x38a0) = 0;
  *(undefined8 *)(lVar20 + 0x3898) = 0;
  *(undefined2 *)(lVar20 + 0x3910) = 0;
  *(undefined8 *)(lVar20 + 0x3908) = 0;
  *(undefined8 *)(lVar20 + 0x3900) = 0;
  *(undefined8 *)(lVar20 + 0x38f8) = 0;
  *pbVar7 = (byte)param_3 & 1;
  *(byte *)(lVar20 + 0x3913) = (byte)param_4 & 1;
  *(undefined8 *)(lVar20 + 0x3914) = 0;
  *(undefined2 *)(lVar20 + 0x391c) = 1;
  *(undefined1 *)(lVar20 + 0x391e) = 0;
  FUN_7103382c30((ulong *)(lVar20 + 0x3920),extraout_x1_01,pppplVar30,ppppbVar32,param_5,param_6,
                 param_7,param_8);
  *(undefined1 *)(lVar20 + 0x3928) = 0;
  *(undefined2 *)(lVar20 + 0x3934) = 0;
  *(undefined8 *)(lVar20 + 0x392c) = 0;
  *(undefined2 *)(lVar20 + 0x3940) = 0;
  *(code **)(lVar20 + 0x28) = FUN_7101a8aef0;
  *(undefined8 *)(lVar20 + 0x30) = 0;
  *(undefined8 *)(lVar20 + 0x3938) = 0;
  *(code **)(lVar20 + 0x48) = FUN_7101a8b200;
  *(undefined8 *)(lVar20 + 0x50) = 0;
  *(code **)(lVar20 + 0x58) = FUN_7101a8b9b0;
  *(undefined8 *)(lVar20 + 0x60) = 0;
  *(code **)(lVar20 + 0x78) = FUN_7101a8e1f0;
  *(undefined8 *)(lVar20 + 0x80) = 0;
  *(code **)(lVar20 + 0x88) = FUN_7101a8f8d0;
  *(undefined8 *)(lVar20 + 0x90) = 0;
  *(code **)(lVar20 + 0x38) = FUN_7101a8af00;
  *(undefined8 *)(lVar20 + 0x40) = 0;
  *(code **)(lVar20 + 0x68) = FUN_7101a8e070;
  *(undefined8 *)(lVar20 + 0x70) = 0;
  *(code **)(lVar20 + 0x98) = FUN_7101a8fb90;
  *(undefined8 *)(lVar20 + 0xa0) = 0;
  *(code **)(lVar20 + 0xa8) = FUN_7101a8fd30;
  *(undefined8 *)(lVar20 + 0xb0) = 0;
  if (0x12 < *(uint *)(lVar20 + 0x104)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar20 + 0x104) * 4 + 0xb8) = 0;
  param_1[0x10] = lVar20;
  puVar3 = (undefined8 *)(lVar20 + 0x120);
  ppuVar31 = (undefined **)&DAT_71045444d8;
  ppppbVar32 = (byte ****)0x1;
  FUN_71032cbf30(puVar3,*param_2,(ulong *)&DAT_71045444d8,(byte ****)0x1,param_5,param_6,param_7,
                 param_8);
  lVar51 = *param_2;
  if (((DAT_710532f4d0 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_710532f4d0), iVar17 != 0)) {
    DAT_710532f4a0 = 0xffffff;
    ppuVar31 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d0);
    lVar44 = *(long *)(lVar51 + 0x10);
    if (lVar44 == 0) goto LAB_7101a95c5c;
LAB_7101a95c18:
    lVar45 = lVar51 + 0x10;
    do {
      bVar15 = (*(ulong *)(lVar44 + 0x20) & 0xfffffffff0) < 0x24a391c610;
      if (!bVar15) {
        lVar45 = lVar44;
      }
      lVar44 = *(long *)(lVar44 + (ulong)bVar15 * 8);
    } while (lVar44 != 0);
    if ((lVar45 == lVar51 + 0x10) || (0x24a391c610 < (*(ulong *)(lVar45 + 0x20) & 0xffffffffff)))
    goto LAB_7101a95c5c;
    puVar35 = (uint *)(lVar45 + 0x28);
  }
  else {
    lVar44 = *(long *)(lVar51 + 0x10);
    if (lVar44 != 0) goto LAB_7101a95c18;
LAB_7101a95c5c:
    puVar35 = &DAT_710532f4a0;
  }
  local_368[0] = *puVar35;
  if (local_368[0] != 0xffffff) {
    FUN_7103540a00(DAT_7105332f20,local_368[0]);
  }
  FUN_7103720c30((long)plVar6,local_368,(long *********)ppuVar31,ppppbVar32,param_5,param_6,param_7,
                 param_8);
  if (local_368[0] != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,local_368[0],(long *********)ppuVar31,ppppbVar32,param_5,param_6,
                   param_7,param_8);
    local_368[0] = 0xffffff;
  }
  lVar51 = DAT_710532f8b8;
  lVar44 = *param_2;
  if (((DAT_710532f4d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_710532f4d8), iVar17 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar45 = *(long *)(lVar44 + 0x28);
  }
  else {
    lVar45 = *(long *)(lVar44 + 0x28);
  }
  if (lVar45 == 0) {
LAB_7101a95d18:
    ppppppppplVar23 = (long *********)&DAT_710532f4a4;
  }
  else {
    lVar41 = lVar44 + 0x28;
    do {
      bVar15 = (*(ulong *)(lVar45 + 0x20) & 0xfffffffffe) < 0x15ad8a36b6;
      if (!bVar15) {
        lVar41 = lVar45;
      }
      lVar45 = *(long *)(lVar45 + (ulong)bVar15 * 8);
    } while (lVar45 != 0);
    if ((lVar41 == lVar44 + 0x28) || (0x15ad8a36b6 < (*(ulong *)(lVar41 + 0x20) & 0xffffffffff)))
    goto LAB_7101a95d18;
    ppppppppplVar23 = (long *********)(lVar41 + 0x28);
  }
  if ((*(int *)ppppppppplVar23 != 0xffffff) &&
     (iVar17 = FUN_710330a8f0(*(long **)(lVar51 + 8),(ulong *)&DAT_71045444d0,
                              (long ****)&DAT_00000007,ppppbVar32,param_5,param_6,param_7,param_8),
     iVar17 != 0)) {
    FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar17,ppppppppplVar23,ppppbVar32,
                   param_5,param_6,param_7,param_8);
  }
  *(undefined1 *)(lVar20 + 0x3941) = 1;
  lVar44 = *(long *)(DAT_710532f730 + 8);
  lVar51 = *(long *)(lVar44 + 0x348);
  lVar45 = *(long *)(lVar51 + 8);
  pcVar40 = *(char **)(lVar45 + 0x20);
  if ((*pcVar40 == '\f') && (iVar17 = *(int *)(pcVar40 + 1) + -1, 0 < *(int *)(pcVar40 + 1))) {
    iVar46 = 0;
    uVar21 = *(ulong *)(lVar45 + 0x48) & 0xffffffffff;
    pbVar43 = &DAT_7104742dbb;
    do {
      iVar4 = iVar17 + iVar46;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar35 = (uint *)(*(long *)(*(long *)(lVar45 + 0x18) + 0x28) + (long)*(int *)(pcVar40 + 5) +
                        (long)iVar4 * 8);
      uVar48 = *(ulong *)(*(long *)(*(long *)(lVar45 + 0x18) + 0x20) + (ulong)*puVar35 * 8);
      if (uVar48 == uVar21) {
        uVar19 = puVar35[1];
        if ((int)uVar19 < 0) goto LAB_7101a95e38;
        pbVar43 = (byte *)(pcVar40 + (int)uVar19);
        break;
      }
      iVar14 = iVar4 + -1;
      if (uVar48 <= uVar21) {
        iVar46 = iVar4 + 1;
        iVar14 = iVar17;
      }
      iVar17 = iVar14;
    } while (iVar46 <= iVar17);
  }
  else {
LAB_7101a95e38:
    pbVar43 = &DAT_7104742dbb;
  }
  plVar28 = (long *)(lVar20 + 0x3808);
  if ((*pbVar43 - 0xb < 2) && (0 < *(int *)(pbVar43 + 1))) {
    uVar19 = 0;
    do {
      plVar52 = *(long **)(lVar20 + 0x118);
      uVar21 = FUN_7103267030(lVar51,uVar19);
      uVar21 = FUN_710323a300(uVar21);
      local_1c0._0_4_ = (uint)uVar21;
      local_1c0._4_4_ = (undefined4)(uVar21 >> 0x20);
      if ((uVar21 & 0xffffffffff) != 0) {
        lVar51 = *plVar52;
        ppppbVar32 = (byte ****)(ulong)*(uint *)(lVar51 + 0x68);
        FUN_710323c4e0(lVar51,&local_1c0,(long *********)(long)*(int *)(lVar51 + 0x70),ppppbVar32,
                       param_5,param_6,param_7,param_8);
      }
      lVar51 = *(long *)(lVar44 + 0x348);
      uVar21 = FUN_7103267030(lVar51,uVar19);
      ppppppppplVar23 = (long *********)FUN_7103268360(lVar51,uVar21);
      lVar51 = DAT_710532f730;
      FUN_71032933e0(&local_1c0,*(long *)(DAT_710532f730 + 8) + 0x2f0,(ulong)ppppppppplVar23);
      if (local_1b8 == 4) {
        lVar45 = *(long *)(*(long *)(lVar51 + 8) + 0x1d8);
        uVar18 = FUN_71032a7800(lVar45,CONCAT17(uStack_1a9,
                                                CONCAT16(uStack_1aa,CONCAT24(uStack_1ac,local_1b0)))
                               );
        lVar51 = *(long *)(lVar45 + 0x20);
        uVar21 = (*(long *)(lVar45 + 0x28) - lVar51 >> 6) * -0x3333333333333333;
        if ((uVar18 < (uint)uVar21) &&
           (uVar49 = *(ushort *)(lVar51 + (ulong)uVar18 * 0x140), uVar49 != 0xffff)) {
          uVar48 = (ulong)*(ushort *)(lVar45 + (long)(short)uVar49 * 2 + 0x60);
        }
        else {
          uVar49 = 0xffff;
          uVar48 = 0xffffffff;
        }
        puVar8 = (undefined2 *)(lVar51 + uVar48 * 0x140);
        if (uVar21 < uVar48 || uVar21 - uVar48 == 0) {
          puVar8 = &DAT_7105182b08;
        }
        if (*(char *)(puVar8 + 0x2f) == '\x03') {
          bVar15 = FUN_71025c9890(uVar49);
          bVar29 = 1;
          if (bVar15) {
            bVar29 = 2;
          }
        }
        else {
          bVar29 = 1;
        }
        ppppbVar32 = (byte ****)0x1;
        FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),bVar29,uVar49,(byte ****)0x1,param_5,
                       param_6,param_7,param_8);
      }
      else {
        FUN_7101b104c0(*(long **)(lVar20 + 0x118),&local_1c0,ppppppppplVar23,ppppbVar32,param_5,
                       param_6,param_7,param_8);
      }
      lVar51 = *(long *)(lVar44 + 0x348);
      lVar45 = *(long *)(lVar51 + 8);
      pcVar40 = *(char **)(lVar45 + 0x20);
      pbVar43 = &DAT_7104742dbb;
      if ((*pcVar40 == '\f') && (iVar17 = *(int *)(pcVar40 + 1) + -1, 0 < *(int *)(pcVar40 + 1))) {
        iVar46 = 0;
        uVar21 = *(ulong *)(lVar45 + 0x48) & 0xffffffffff;
        do {
          iVar4 = iVar17 + iVar46;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar35 = (uint *)(*(long *)(*(long *)(lVar45 + 0x18) + 0x28) +
                             (long)*(int *)(pcVar40 + 5) + (long)iVar4 * 8);
          uVar48 = *(ulong *)(*(long *)(*(long *)(lVar45 + 0x18) + 0x20) + (ulong)*puVar35 * 8);
          if (uVar48 == uVar21) {
            uVar18 = puVar35[1];
            if (-1 < (int)uVar18) {
              pbVar43 = (byte *)(pcVar40 + (int)uVar18);
            }
            break;
          }
          iVar14 = iVar4 + -1;
          if (uVar48 <= uVar21) {
            iVar46 = iVar4 + 1;
            iVar14 = iVar17;
          }
          iVar17 = iVar14;
        } while (iVar46 <= iVar17);
      }
    } while ((*pbVar43 - 0xb < 2) && (uVar19 = uVar19 + 1, (int)uVar19 < *(int *)(pbVar43 + 1)));
  }
  uVar19 = 0;
  plVar52 = (long *)(lVar20 + 0x130);
  while( true ) {
    ppppppppplVar23 = (long *********)FUN_7103268650(lVar51,uVar19);
    lVar51 = DAT_710532f730;
    FUN_71032933e0(&local_1c0,*(long *)(DAT_710532f730 + 8) + 0x2f0,(ulong)ppppppppplVar23);
    if (local_1b8 == 4) {
      lVar45 = *(long *)(*(long *)(lVar51 + 8) + 0x1d8);
      uVar18 = FUN_71032a7800(lVar45,CONCAT17(uStack_1a9,
                                              CONCAT16(uStack_1aa,CONCAT24(uStack_1ac,local_1b0))));
      lVar51 = *(long *)(lVar45 + 0x20);
      uVar21 = (*(long *)(lVar45 + 0x28) - lVar51 >> 6) * -0x3333333333333333;
      if ((uVar18 < (uint)uVar21) &&
         (uVar49 = *(ushort *)(lVar51 + (ulong)uVar18 * 0x140), uVar49 != 0xffff)) {
        uVar48 = (ulong)*(ushort *)(lVar45 + (long)(short)uVar49 * 2 + 0x60);
      }
      else {
        uVar49 = 0xffff;
        uVar48 = 0xffffffff;
      }
      puVar8 = (undefined2 *)(lVar51 + uVar48 * 0x140);
      if (uVar21 < uVar48 || uVar21 - uVar48 == 0) {
        puVar8 = &DAT_7105182b08;
      }
      if (*(char *)(puVar8 + 0x2f) == '\x03') {
        bVar15 = FUN_71025c9890(uVar49);
        bVar29 = 1;
        if (bVar15) {
          bVar29 = 2;
        }
      }
      else {
        bVar29 = 1;
      }
      ppppbVar32 = (byte ****)0x1;
      FUN_710259c150(*(long *)(*DAT_7105329f98 + 0x20),bVar29,uVar49,(byte ****)0x1,param_5,param_6,
                     param_7,param_8);
    }
    else {
      FUN_7101b104c0(*(long **)(lVar20 + 0x118),&local_1c0,ppppppppplVar23,ppppbVar32,param_5,
                     param_6,param_7,param_8);
    }
    if (uVar19 == 7) break;
    lVar51 = *(long *)(lVar44 + 0x348);
    uVar19 = uVar19 + 1;
  }
  local_1c0._0_4_ = 0;
  local_1c0._4_4_ = 0x41a80000;
  local_1b8 = 0;
  uStack_1b7 = 0;
  uStack_1b6 = 0x41a8;
  uStack_1b4 = 0;
  uStack_1b3 = 0;
  uStack_1b2 = 0x41a8;
  local_1b0 = 0x3c;
  uStack_1ac = 9;
  uStack_1aa = 0;
  uStack_1a9 = 0;
  fVar60 = *(float *)(&DAT_7104465228 + (ulong)(*pbVar7 == 0) * 4);
  FUN_7103786640(plVar2,*(long *)*puVar3 + 8,(long ****)"set_parts_cur_hand",(byte ****)&local_1c0,
                 param_5,param_6,param_7,param_8);
  (**(code **)(*(long *)*plVar2 + 0x60))((long *)*plVar2,0);
  lVar45 = *plVar2;
  lVar41 = *(long *)(lVar45 + 0x38);
  lVar51 = 0;
  if (lVar41 != 0) {
    *(byte *)(lVar41 + 0x58) = *(byte *)(lVar41 + 0x58) & 0xfe;
    lVar45 = *plVar2;
    lVar51 = *(long *)(lVar45 + 0x38);
  }
  fVar56 = (float)*(undefined8 *)(lVar45 + 0x60);
  if (fVar56 <= -960.0) {
    fVar56 = -960.0;
  }
  fVar57 = (float)((ulong)*(undefined8 *)(lVar45 + 0x60) >> 0x20);
  fVar58 = fVar60;
  if (fVar56 <= fVar60) {
    fVar58 = fVar56;
  }
  if (fVar57 <= -500.0) {
    fVar57 = -500.0;
  }
  if (530.0 < fVar57) {
    fVar57 = 530.0;
  }
  *(undefined4 *)(lVar45 + 0x90) = 0xc4700000;
  *(float *)(lVar45 + 0x94) = fVar60;
  *(undefined8 *)(lVar45 + 0x98) = 0x44048000c3fa0000;
  *(undefined8 *)(lVar45 + 0x68) = 0;
  *(ulong *)(lVar45 + 0x60) = CONCAT44(fVar57,fVar58);
  if (lVar51 != 0) {
    *(float *)(lVar51 + 0x30) = fVar58;
    *(float *)(lVar51 + 0x34) = fVar57;
    *(byte *)(lVar51 + 0x58) = *(byte *)(lVar51 + 0x58) | 0x10;
  }
  FUN_7103786640(plVar52,*(long *)*puVar3 + 8,(long ****)"set_parts_cur_hammer",
                 (byte ****)&local_1c0,param_5,param_6,param_7,param_8);
  (**(code **)(*(long *)*plVar52 + 0x60))((long *)*plVar52,0);
  lVar45 = *plVar52;
  lVar41 = *(long *)(lVar45 + 0x38);
  lVar51 = 0;
  if (lVar41 != 0) {
    *(byte *)(lVar41 + 0x58) = *(byte *)(lVar41 + 0x58) & 0xfe;
    lVar45 = *plVar52;
    lVar51 = *(long *)(lVar45 + 0x38);
  }
  fVar56 = (float)*(undefined8 *)(lVar45 + 0x60);
  if (fVar56 <= -960.0) {
    fVar56 = -960.0;
  }
  fVar57 = (float)((ulong)*(undefined8 *)(lVar45 + 0x60) >> 0x20);
  if (fVar57 <= -500.0) {
    fVar57 = -500.0;
  }
  fVar58 = fVar60;
  if (fVar56 <= fVar60) {
    fVar58 = fVar56;
  }
  *(undefined4 *)(lVar45 + 0x90) = 0xc4700000;
  *(float *)(lVar45 + 0x94) = fVar60;
  *(undefined8 *)(lVar45 + 0x98) = 0x44048000c3fa0000;
  if (530.0 < fVar57) {
    fVar57 = 530.0;
  }
  *(undefined8 *)(lVar45 + 0x68) = 0;
  *(ulong *)(lVar45 + 0x60) = CONCAT44(fVar57,fVar58);
  if (lVar51 != 0) {
    *(float *)(lVar51 + 0x30) = fVar58;
    *(float *)(lVar51 + 0x34) = fVar57;
    *(byte *)(lVar51 + 0x58) = *(byte *)(lVar51 + 0x58) | 0x10;
  }
  lVar51 = *plVar2;
  fVar56 = *(float *)(lVar51 + 0x90);
  fVar57 = *(float *)(lVar51 + 0x94);
  fVar58 = *(float *)(lVar51 + 0x98);
  fVar59 = *(float *)(lVar51 + 0x9c);
  fVar60 = fVar57;
  if (fVar56 <= fVar57) {
    fVar60 = fVar56;
  }
  fVar55 = fVar59;
  if (fVar58 <= fVar59) {
    fVar55 = fVar58;
  }
  *(undefined8 *)(lVar51 + 0x78) = 0;
  *(ulong *)(lVar51 + 0x70) = CONCAT44(fVar55,fVar60);
  *(undefined8 *)(lVar51 + 0x60) = *(undefined8 *)(lVar51 + 0x70);
  *(undefined8 *)(lVar51 + 0x68) = *(undefined8 *)(lVar51 + 0x78);
  fVar60 = (float)*(undefined8 *)(lVar51 + 0x60);
  fVar55 = (float)((ulong)*(undefined8 *)(lVar51 + 0x60) >> 0x20);
  if (fVar56 <= fVar60) {
    fVar56 = fVar60;
  }
  if (fVar56 <= fVar57) {
    fVar57 = fVar56;
  }
  if (fVar58 <= fVar55) {
    fVar58 = fVar55;
  }
  if (fVar58 <= fVar59) {
    fVar59 = fVar58;
  }
  *(undefined8 *)(lVar51 + 0x68) = 0;
  *(ulong *)(lVar51 + 0x60) = CONCAT44(fVar59,fVar57);
  lVar51 = *(long *)(lVar51 + 0x38);
  if (lVar51 != 0) {
    *(float *)(lVar51 + 0x30) = fVar57;
    *(float *)(lVar51 + 0x34) = fVar59;
    *(byte *)(lVar51 + 0x58) = *(byte *)(lVar51 + 0x58) | 0x10;
  }
  local_1b8 = 1;
  uStack_1b7 = 1;
  local_1c0._0_4_ = 0;
  local_1c0._4_4_ = 0;
  uStack_1b6 = 0;
  uStack_1b4 = 0;
  uStack_1b3 = 0;
  local_1b0 = 1;
  uStack_1ac = 1;
  uStack_1aa = 1;
  local_1a8 = &DAT_41f0000000000000;
  uStack_1b2 = 0;
  local_1a0 = (ulong)local_1a0._4_4_ << 0x20;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_a0 = 0;
  local_360 = (byte ***)&DAT_7105186088;
  local_340 = &local_360;
  FUN_7101989a30((long *)&local_360,alStack_130);
  if (&local_360 == local_340) {
    ppbVar36 = (*local_340)[4];
LAB_7101a964b4:
    (*(code *)ppbVar36)();
  }
  else if (local_340 != (byte ****)0x0) {
    ppbVar36 = (*local_340)[5];
    goto LAB_7101a964b4;
  }
  local_360 = (byte ***)&DAT_71051860d0;
  local_340 = &local_360;
  FUN_7101989a30((long *)&local_360,alStack_100);
  if (&local_360 == local_340) {
    ppbVar36 = (*local_340)[4];
LAB_7101a96500:
    (*(code *)ppbVar36)();
  }
  else if (local_340 != (byte ****)0x0) {
    ppbVar36 = (*local_340)[5];
    goto LAB_7101a96500;
  }
  local_1c0._4_4_ = 3;
  uVar21 = 0;
  uStack_1b7 = 0;
  uStack_1b4 = 1;
  do {
    local_358 = (long ***)((ulong)local_358 & 0xffffffffffffff00);
    local_360 = (byte ***)0x0;
    FUN_710062dc20((uint *)&local_360,"selector_%02d");
    lVar51 = lVar20 + uVar21 * 8;
    plVar2 = (long *)(lVar51 + 0x3780);
    ppppbVar32 = (byte ****)&local_1c0;
    FUN_7103770b30(plVar2,(undefined8 *)(**(long **)(lVar20 + 0x120) + 8),&local_358,ppppbVar32,
                   param_5,param_6,param_7,param_8);
    if ((int)((ulong)(*(long *)(*(long *)(lVar51 + 0x3780) + 0x188) -
                     *(long *)(*(long *)(lVar51 + 0x3780) + 0x180)) >> 3) != 0) {
      uVar19 = 0;
      do {
        FUN_71003a4ca0((uint *)&local_208,"set_parts_in_%d%02d",uVar21 & 0xffffffff,(ulong)uVar19,
                       ppppbVar32,param_5,param_6,param_7,param_8);
        FUN_71037717d0(plVar2,uVar19,(char *)local_200,ppppbVar32,param_5,param_6,param_7,param_8);
        pppplVar30 = (long ****)(ulong)uVar19;
        FUN_7103771d60(&local_218,*plVar2,pppplVar30,ppppbVar32,param_5,param_6,param_7,param_8);
        plVar52 = local_210;
        plVar24 = (long *)*local_210;
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 0x280))(plVar24,0);
        }
        local_218 = &PTR_FUN_710523d9c8;
        local_210 = (long *)0x0;
        if (plVar52 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar52);
        }
        FUN_7103776640(&local_228,*(long *)*puVar3 + 8,local_200,pppplVar30,ppppbVar32,param_5,
                       param_6,param_7,param_8);
        FUN_7103776910(&local_218,(long)&local_228,(long ****)"set_fxui_break",pppplVar30,ppppbVar32
                       ,param_5,param_6,param_7,param_8);
        uVar48 = local_220;
        local_228 = &PTR_FUN_710523d988;
        local_220 = 0;
        if (uVar48 != 0) {
          uVar25 = *(ulong *)(uVar48 + 0x18);
          *(undefined ***)(uVar48 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar48 + 0x18) = 0;
          if (uVar25 != 0) {
            FUN_710392eb40(uVar25);
          }
          FUN_710392eb40(uVar48);
        }
        plVar52 = local_210;
        lVar45 = *local_210;
        if (lVar45 == 0) {
          plVar24 = (long *)0x0;
        }
        else {
          *(byte *)(lVar45 + 0x58) = *(byte *)(lVar45 + 0x58) & 0xfe;
          plVar24 = (long *)*local_210;
        }
        FUN_710377aa20(plVar24,0);
        local_218 = &PTR_FUN_710523d9a8;
        local_210 = (long *)0x0;
        if (plVar52 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar52);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < (uint)((ulong)(*(long *)(*plVar2 + 0x188) - *(long *)(*plVar2 + 0x180)) >> 3
                              ));
    }
    FUN_7103771a80(plVar2,0,0);
    FUN_710062dc20((uint *)&local_360,"selector_%02d");
    plVar2 = (long *)(lVar51 + 0x37c0);
    ppppbVar32 = (byte ****)&local_1c0;
    FUN_7103770b30(plVar2,(undefined8 *)(**(long **)(lVar20 + 0x120) + 8),&local_358,ppppbVar32,
                   param_5,param_6,param_7,param_8);
    if ((int)((ulong)(*(long *)(*(long *)(lVar51 + 0x37c0) + 0x188) -
                     *(long *)(*(long *)(lVar51 + 0x37c0) + 0x180)) >> 3) != 0) {
      uVar19 = 0;
      do {
        FUN_71003a4ca0((uint *)&local_208,"set_parts_out_%d%02d",uVar21 & 0xffffffff,(ulong)uVar19,
                       ppppbVar32,param_5,param_6,param_7,param_8);
        FUN_71037717d0(plVar2,uVar19,(char *)local_200,ppppbVar32,param_5,param_6,param_7,param_8);
        pppplVar30 = (long ****)(ulong)uVar19;
        FUN_7103771d60(&local_218,*plVar2,pppplVar30,ppppbVar32,param_5,param_6,param_7,param_8);
        plVar52 = local_210;
        plVar24 = (long *)*local_210;
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 0x280))(plVar24,0);
        }
        local_218 = &PTR_FUN_710523d9c8;
        local_210 = (long *)0x0;
        if (plVar52 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar52);
        }
        FUN_7103776640(&local_228,*(long *)*puVar3 + 8,local_200,pppplVar30,ppppbVar32,param_5,
                       param_6,param_7,param_8);
        FUN_7103776910(&local_218,(long)&local_228,(long ****)"set_fxui_break",pppplVar30,ppppbVar32
                       ,param_5,param_6,param_7,param_8);
        uVar48 = local_220;
        local_228 = &PTR_FUN_710523d988;
        local_220 = 0;
        if (uVar48 != 0) {
          uVar25 = *(ulong *)(uVar48 + 0x18);
          *(undefined ***)(uVar48 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar48 + 0x18) = 0;
          if (uVar25 != 0) {
            FUN_710392eb40(uVar25);
          }
          FUN_710392eb40(uVar48);
        }
        plVar52 = local_210;
        lVar51 = *local_210;
        if (lVar51 == 0) {
          plVar24 = (long *)0x0;
        }
        else {
          *(byte *)(lVar51 + 0x58) = *(byte *)(lVar51 + 0x58) & 0xfe;
          plVar24 = (long *)*local_210;
        }
        FUN_710377aa20(plVar24,0);
        local_218 = &PTR_FUN_710523d9a8;
        local_210 = (long *)0x0;
        if (plVar52 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar52);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < (uint)((ulong)(*(long *)(*plVar2 + 0x188) - *(long *)(*plVar2 + 0x180)) >> 3
                              ));
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 != 8);
  (**(code **)(**(long **)(lVar20 + 0x3780) + 0x70))(*(long **)(lVar20 + 0x3780),1);
  ppppbVar32 = (byte ****)&local_1c0;
  FUN_7103770b30((long *)(lVar20 + 0x3800),(undefined8 *)(**(long **)(lVar20 + 0x120) + 8),
                 (long ****)"selector",ppppbVar32,param_5,param_6,param_7,param_8);
  pcVar40 = "set_parts_btn_hammer";
  FUN_71037717d0((long *)(lVar20 + 0x3800),0,"set_parts_btn_hammer",ppppbVar32,param_5,param_6,
                 param_7,param_8);
  FUN_7101a936a0(*(float *)(lVar20 + 0x3840),lVar20,extraout_x1_02,pcVar40,ppppbVar32,param_5,
                 param_6,param_7,param_8);
  local_360 = (byte ***)&DAT_300000000;
  local_358 = (long ***)0x1;
  local_350 = 1;
  ppppbVar32 = &local_360;
  local_34c = 1;
  local_34a = 1;
  local_348 = &DAT_41f0000000000000;
  local_340 = (byte ****)((ulong)local_340 & 0xffffffff00000000);
  local_310 = (long *)0x0;
  local_2e0 = (long *)0x0;
  local_2b0 = (long *)0x0;
  local_280 = (long *)0x0;
  local_250 = (long *)0x0;
  local_240 = 0;
  FUN_7103770b30(plVar28,(undefined8 *)(**(long **)(lVar20 + 0x120) + 8),(long ****)"selector_00",
                 ppppbVar32,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar28,0,"part_l",ppppbVar32,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar28,1,"part_r",ppppbVar32,param_5,param_6,param_7,param_8);
  FUN_7103771930(*(long *)(lVar20 + 0x3808),0,(long ****)&DAT_00000007,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  FUN_7103771930(*(long *)(lVar20 + 0x3808),1,(long ****)0x6,(byte ****)0x0,param_5,param_6,param_7,
                 param_8);
  ppppbVar32 = (byte ****)&local_1c0;
  FUN_7103770b30((long *)(lVar20 + 0x3810),(undefined8 *)(**(long **)(lVar20 + 0x120) + 8),
                 (long ****)"selector_17",ppppbVar32,param_5,param_6,param_7,param_8);
  FUN_71037717d0((long *)(lVar20 + 0x3810),0,"btn_back",ppppbVar32,param_5,param_6,param_7,param_8);
  ppppbVar32 = (byte ****)&local_1c0;
  FUN_7103770b30((long *)(lVar20 + 0x3818),(undefined8 *)(**(long **)(lVar20 + 0x120) + 8),
                 (long ****)"selector_19",ppppbVar32,param_5,param_6,param_7,param_8);
  FUN_71037717d0((long *)(lVar20 + 0x3818),0,"set_parts_clear",ppppbVar32,param_5,param_6,param_7,
                 param_8);
  if (alStack_270 == local_250) {
    (**(code **)(*local_250 + 0x20))();
  }
  else if (local_250 != (long *)0x0) {
    (**(code **)(*local_250 + 0x28))();
  }
  if (alStack_2a0 == local_280) {
    pcVar37 = *(code **)(*local_280 + 0x20);
LAB_7101a96a60:
    (*pcVar37)();
  }
  else if (local_280 != (long *)0x0) {
    pcVar37 = *(code **)(*local_280 + 0x28);
    goto LAB_7101a96a60;
  }
  if (alStack_2d0 == local_2b0) {
    pcVar37 = *(code **)(*local_2b0 + 0x20);
LAB_7101a96a90:
    (*pcVar37)();
  }
  else if (local_2b0 != (long *)0x0) {
    pcVar37 = *(code **)(*local_2b0 + 0x28);
    goto LAB_7101a96a90;
  }
  if (alStack_300 == local_2e0) {
    pcVar37 = *(code **)(*local_2e0 + 0x20);
LAB_7101a96ac0:
    (*pcVar37)();
  }
  else if (local_2e0 != (long *)0x0) {
    pcVar37 = *(code **)(*local_2e0 + 0x28);
    goto LAB_7101a96ac0;
  }
  if (alStack_330 == local_310) {
    pcVar37 = *(code **)(*local_310 + 0x20);
LAB_7101a96af0:
    (*pcVar37)();
  }
  else if (local_310 != (long *)0x0) {
    pcVar37 = *(code **)(*local_310 + 0x28);
    goto LAB_7101a96af0;
  }
  if (alStack_d0 == local_b0) {
    pcVar37 = *(code **)(*local_b0 + 0x20);
LAB_7101a96b20:
    (*pcVar37)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar37 = *(code **)(*local_b0 + 0x28);
    goto LAB_7101a96b20;
  }
  if (alStack_100 == local_e0) {
    pcVar37 = *(code **)(*local_e0 + 0x20);
LAB_7101a96b50:
    (*pcVar37)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar37 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101a96b50;
  }
  if (alStack_130 == local_110) {
    pcVar37 = *(code **)(*local_110 + 0x20);
LAB_7101a96b80:
    (*pcVar37)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar37 = *(code **)(*local_110 + 0x28);
    goto LAB_7101a96b80;
  }
  if (alStack_160 == local_140) {
    pcVar37 = *(code **)(*local_140 + 0x20);
LAB_7101a96bb0:
    (*pcVar37)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar37 = *(code **)(*local_140 + 0x28);
    goto LAB_7101a96bb0;
  }
  if (&local_190 == local_170) {
    pcVar37 = *(code **)(*local_170 + 0x20);
  }
  else {
    if (local_170 == (long *)0x0) goto LAB_7101a96be4;
    pcVar37 = *(code **)(*local_170 + 0x28);
  }
  (*pcVar37)();
LAB_7101a96be4:
  lVar51 = *(long *)(DAT_710532f730 + 8);
  puVar38 = *(undefined8 **)(*DAT_7105314510 + 0x248);
  uVar19 = 0;
  do {
    lVar45 = DAT_710532f730;
    *(uint *)((long)puVar22 + 0x694) = uVar19;
    puVar26 = FUN_7103268650(*(long *)(lVar51 + 0x348),uVar19);
    FUN_71032933e0(&local_1c0,*(long *)(lVar45 + 8) + 0x2f0,(ulong)puVar26);
    uVar10 = CONCAT15(uStack_1b3,
                      CONCAT14(uStack_1b4,CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,local_1b8))));
    puVar22[0xd3] = CONCAT44(local_1c0._4_4_,(uint)local_1c0);
    uVar21 = (ulong)uVar10 & 0xff;
    puVar22[0xd6] = local_1a8;
    puVar22[0xd5] = CONCAT17(uStack_1a9,CONCAT16(uStack_1aa,CONCAT24(uStack_1ac,local_1b0)));
    puVar22[0xd4] = CONCAT26(uStack_1b2,uVar10);
    if ((int)uVar21 == 5) {
      uVar21 = FUN_710327d930(*(long *)(*(long *)(*(long *)(lVar45 + 8) + 0x318) + 8),puVar22[0xd5])
      ;
      lVar45 = *(long *)(*(long *)(lVar51 + 0x318) + 8);
      uVar48 = FUN_710327d930(lVar45,0xd61d998cb);
      bVar15 = (uVar21 & 0xffffffffff) != 0;
      bVar16 = (uVar21 & 0xff00000000000000) == 0x2d00000000000000;
      if (((bVar16 && bVar15) && ((uVar48 & 0xff00000000000000) == 0x2d00000000000000)) &&
         ((uVar48 & 0xffffffffff) != 0)) {
        if (((uVar48 ^ uVar21) & 0xffffffffff) == 0) {
LAB_7101a96d68:
          uVar33 = 7;
          goto LAB_7101a96e14;
        }
        uVar48 = FUN_710327d930(lVar45,0x155f9548cb);
        uVar25 = uVar48 & 0xffffffffff;
LAB_7101a96d8c:
        uVar42 = uVar48 & 0xff00000000000000;
        if ((uVar42 != 0x2d00000000000000) || (uVar25 == 0)) goto LAB_7101a96dbc;
        if (((uVar48 ^ uVar21) & 0xffffffffff) == 0) goto LAB_7101a96de0;
      }
      else {
        if (((uVar48 & 0xffffffffff) != 0 && (uVar48 & 0xff00000000000000) == 0x2d00000000000000) ==
            ((uVar21 & 0xff00000000000000) == 0x2d00000000000000 && (uVar21 & 0xffffffffff) != 0))
        goto LAB_7101a96d68;
        uVar48 = FUN_710327d930(lVar45,0x155f9548cb);
        uVar25 = uVar48 & 0xffffffffff;
        if (bVar16 && bVar15) goto LAB_7101a96d8c;
        uVar42 = uVar48 & 0xff00000000000000;
LAB_7101a96dbc:
        if ((uVar25 != 0 && uVar42 == 0x2d00000000000000) == (bVar16 && bVar15)) {
LAB_7101a96de0:
          *(undefined4 *)((long)puVar22 + 0x6bc) = 8;
          goto LAB_7101a96e1c;
        }
      }
      *(undefined4 *)((long)puVar22 + 0x6bc) = 1;
    }
    else {
      switch(uVar21) {
      case 0:
        uVar33 = 2;
        break;
      case 1:
        uVar33 = 3;
        break;
      default:
        *(undefined4 *)((long)puVar22 + 0x6bc) = 1;
        goto LAB_7101a96e1c;
      case 3:
        uVar33 = 5;
        break;
      case 4:
        uVar33 = 4;
        break;
      case 6:
        uVar33 = 6;
      }
LAB_7101a96e14:
      *(undefined4 *)((long)puVar22 + 0x6bc) = uVar33;
    }
LAB_7101a96e1c:
    uVar18 = 0;
    uVar11 = 1;
    puVar53 = puVar22;
    do {
      *(uint *)((long)puVar53 + 0xc) = uVar18;
      pppplVar30 = (long ****)(ulong)uVar18;
      uVar21 = FUN_7103267660(*(long *)(lVar51 + 0x348),*(uint *)((long)puVar22 + 0x694),uVar18);
      if ((uVar21 & 0xff00000000000000) == 0x6200000000000000 && (uVar21 & 0xffffffffff) != 0) {
        uVar27 = FUN_7103268810(uVar21);
        uVar50 = (uint)uVar27;
        uVar34 = uVar50;
        if (0x94 < uVar50) {
          uVar34 = 0x95;
        }
        uVar34 = uVar34 * 3;
        uVar1 = uVar34 + 1;
        if ((uVar1 < 0x1e0) &&
           ((*(uint *)(*(long *)*puVar38 + (ulong)(uVar1 >> 5) * 4) & 1 << (ulong)(uVar1 & 0x1f)) !=
            0)) {
          uVar33 = 3;
        }
        else {
          switch(uVar50) {
          case 0x52:
            bVar29 = *(byte *)(*(long *)*puVar38 + 0x1e) >> 6;
            break;
          case 0x53:
            if ((*(byte *)(*(long *)*puVar38 + 0x1f) >> 1 & 1) != 0)
            goto switchD_7101a96ec4_caseD_55;
            goto LAB_7101a96edc;
          case 0x54:
          case 0x56:
          case 0x5a:
          case 0x5b:
            bVar29 = *(byte *)(*(long *)*puVar38 + 0x1f) >> 4;
            break;
          default:
            goto switchD_7101a96ec4_caseD_55;
          }
          if ((bVar29 & 1) == 0) {
LAB_7101a96edc:
            uVar11 = 0;
            uVar33 = 1;
          }
          else {
switchD_7101a96ec4_caseD_55:
            uVar33 = 2;
            uVar11 = 0;
          }
        }
        *(undefined4 *)puVar53 = uVar33;
        lVar45 = *(long *)(*(long *)(lVar51 + 0x348) + 8);
        pbVar43 = &DAT_7104742dbb;
        pcVar40 = *(char **)(lVar45 + 0x20);
        cVar9 = *pcVar40;
        if (cVar9 == '\f') {
          iVar17 = *(int *)(pcVar40 + 1) + -1;
          if (0 < *(int *)(pcVar40 + 1)) {
            iVar46 = 0;
            uVar48 = *(ulong *)(lVar45 + 0x48) & 0xffffffffff;
            do {
              iVar4 = iVar17 + iVar46;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar35 = (uint *)(*(long *)(*(long *)(lVar45 + 0x18) + 0x28) +
                                 (long)*(int *)(pcVar40 + 5) + (long)iVar4 * 8);
              uVar25 = *(ulong *)(*(long *)(*(long *)(lVar45 + 0x18) + 0x20) + (ulong)*puVar35 * 8);
              if (uVar25 == uVar48) {
                uVar50 = puVar35[1];
                if (-1 < (int)uVar50) {
                  pbVar43 = (byte *)(pcVar40 + (int)uVar50);
                  goto LAB_7101a96fa8;
                }
                break;
              }
              iVar14 = iVar4 + -1;
              if (uVar25 <= uVar48) {
                iVar46 = iVar4 + 1;
                iVar14 = iVar17;
              }
              iVar17 = iVar14;
            } while (iVar46 <= iVar17);
          }
          pbVar43 = &DAT_7104742dbb;
        }
LAB_7101a96fa8:
        if (((1 < *pbVar43 - 0xb) ||
            (uVar50 = (uint)(uVar21 >> 0x28) & 0xffff, *(uint *)(pbVar43 + 1) <= uVar50)) ||
           (uVar48 = FUN_7103269eb0(lVar45,uVar50), ((uVar48 ^ uVar21) & 0xffffffffff) != 0)) {
          uVar50 = FUN_710326a580(lVar45,uVar21 & 0xffffffffff);
        }
        pbVar43 = &DAT_7104742dbb;
        if (cVar9 == '\f') {
          iVar17 = *(int *)(pcVar40 + 1) + -1;
          if (0 < *(int *)(pcVar40 + 1)) {
            iVar46 = 0;
            uVar48 = *(ulong *)(lVar45 + 0x48) & 0xffffffffff;
            do {
              iVar4 = iVar17 + iVar46;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar35 = (uint *)(*(long *)(*(long *)(lVar45 + 0x18) + 0x28) +
                                 (long)*(int *)(pcVar40 + 5) + (long)iVar4 * 8);
              uVar25 = *(ulong *)(*(long *)(*(long *)(lVar45 + 0x18) + 0x20) + (ulong)*puVar35 * 8);
              if (uVar25 == uVar48) {
                uVar1 = puVar35[1];
                if (-1 < (int)uVar1) {
                  pbVar43 = (byte *)(pcVar40 + (int)uVar1);
                  goto LAB_7101a97080;
                }
                break;
              }
              iVar14 = iVar4 + -1;
              if (uVar25 <= uVar48) {
                iVar46 = iVar4 + 1;
                iVar14 = iVar17;
              }
              iVar17 = iVar14;
            } while (iVar46 <= iVar17);
          }
          pbVar43 = &DAT_7104742dbb;
        }
LAB_7101a97080:
        if ((*pbVar43 - 0xb < 2) && (uVar50 < *(uint *)(pbVar43 + 1))) {
          FUN_710326a3e0(&local_1c0,lVar45,uVar50);
          pcVar39 = (char *)CONCAT26(uStack_1b2,
                                     CONCAT15(uStack_1b3,
                                              CONCAT14(uStack_1b4,
                                                       CONCAT22(uStack_1b6,
                                                                CONCAT11(uStack_1b7,local_1b8)))));
          pcVar40 = "";
          if (*pcVar39 == '\f') {
            iVar17 = *(int *)(pcVar39 + 1) + -1;
            if (0 < *(int *)(pcVar39 + 1)) {
              iVar46 = 0;
              do {
                iVar4 = iVar17 + iVar46;
                if (iVar4 < 0) {
                  iVar4 = iVar4 + 1;
                }
                iVar4 = iVar4 >> 1;
                puVar35 = (uint *)(*(long *)(CONCAT44(local_1c0._4_4_,(uint)local_1c0) + 0x28) +
                                   (long)*(int *)(pcVar39 + 5) + (long)iVar4 * 8);
                uVar48 = *(ulong *)(*(long *)(CONCAT44(local_1c0._4_4_,(uint)local_1c0) + 0x20) +
                                   (ulong)*puVar35 * 8);
                if (uVar48 == 0xbda9ba9c6) {
                  uVar50 = puVar35[1];
                  if (-1 < (int)uVar50) {
                    pcVar40 = pcVar39 + (int)uVar50;
                    goto LAB_7101a97170;
                  }
                  break;
                }
                iVar14 = iVar4 + -1;
                if (uVar48 < 0xbda9ba9c7) {
                  iVar46 = iVar4 + 1;
                  iVar14 = iVar17;
                }
                iVar17 = iVar14;
              } while (iVar46 <= iVar17);
            }
            pcVar40 = "";
          }
LAB_7101a97170:
          switch(*pcVar40) {
          case '\x01':
          case '\x03':
            uVar50 = (uint)(byte)pcVar40[1];
            break;
          case '\x02':
            uVar50 = (uint)pcVar40[1];
            break;
          case '\x04':
            uVar50 = (uint)*(short *)(pcVar40 + 1);
            break;
          case '\x05':
            uVar50 = (uint)*(ushort *)(pcVar40 + 1);
            break;
          case '\x06':
          case '\a':
            uVar50 = *(uint *)(pcVar40 + 1);
            break;
          default:
            uVar50 = 0;
          }
          bVar15 = 0 < (int)uVar50;
        }
        else {
          bVar15 = false;
        }
        *(byte *)((long)puVar53 + 9) = bVar15 ^ 1;
        pppplVar30 = (long ****)FUN_7103268360(*(long *)(lVar51 + 0x348),uVar21);
        lVar45 = DAT_710532f730;
        FUN_71032933e0(&local_1c0,*(long *)(DAT_710532f730 + 8) + 0x2f0,(ulong)pppplVar30);
        if (local_1b8 == 5) {
          uVar21 = FUN_710327d930(*(long *)(*(long *)(*(long *)(lVar45 + 8) + 0x318) + 8),
                                  CONCAT17(uStack_1a9,
                                           CONCAT16(uStack_1aa,CONCAT24(uStack_1ac,local_1b0))));
          puVar53[4] = CONCAT17(uStack_1a9,CONCAT16(uStack_1aa,CONCAT24(uStack_1ac,local_1b0)));
          puVar53[5] = local_1a8;
          puVar53[2] = CONCAT44(local_1c0._4_4_,(uint)local_1c0);
          puVar53[3] = CONCAT26(uStack_1b2,
                                CONCAT15(uStack_1b3,
                                         CONCAT14(uStack_1b4,
                                                  CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,local_1b8)
                                                          ))));
          lVar45 = *(long *)(*(long *)(lVar51 + 0x318) + 8);
          uVar48 = FUN_710327d930(lVar45,0xd61d998cb);
          bVar15 = (uVar21 & 0xffffffffff) != 0;
          bVar16 = (uVar21 & 0xff00000000000000) == 0x2d00000000000000;
          if (((bVar16 && bVar15) && ((uVar48 & 0xff00000000000000) == 0x2d00000000000000)) &&
             ((uVar48 & 0xffffffffff) != 0)) {
            if (((uVar48 ^ uVar21) & 0xffffffffff) != 0) {
              uVar48 = FUN_710327d930(lVar45,0x155f9548cb);
              uVar25 = uVar48 & 0xffffffffff;
LAB_7101a97360:
              uVar42 = uVar48 & 0xff00000000000000;
              if ((uVar42 != 0x2d00000000000000) || (uVar25 == 0)) goto LAB_7101a97394;
              if (((uVar48 ^ uVar21) & 0xffffffffff) == 0) goto LAB_7101a973bc;
LAB_7101a97384:
              *(undefined4 *)((long)puVar53 + 4) = 1;
              goto LAB_7101a973f4;
            }
          }
          else if (((uVar48 & 0xffffffffff) != 0 &&
                   (uVar48 & 0xff00000000000000) == 0x2d00000000000000) !=
                   ((uVar21 & 0xff00000000000000) == 0x2d00000000000000 &&
                   (uVar21 & 0xffffffffff) != 0)) {
            uVar48 = FUN_710327d930(lVar45,0x155f9548cb);
            uVar25 = uVar48 & 0xffffffffff;
            if (bVar16 && bVar15) goto LAB_7101a97360;
            uVar42 = uVar48 & 0xff00000000000000;
LAB_7101a97394:
            if ((uVar25 != 0 && uVar42 == 0x2d00000000000000) == (bVar16 && bVar15)) {
LAB_7101a973bc:
              *(undefined4 *)((long)puVar53 + 4) = 8;
              goto LAB_7101a973f4;
            }
            goto LAB_7101a97384;
          }
          *(undefined4 *)((long)puVar53 + 4) = 7;
        }
        else {
          puVar53[4] = CONCAT17(uStack_1a9,CONCAT16(uStack_1aa,CONCAT24(uStack_1ac,local_1b0)));
          puVar53[5] = local_1a8;
          puVar53[2] = CONCAT44(local_1c0._4_4_,(uint)local_1c0);
          puVar53[3] = CONCAT26(uStack_1b2,
                                CONCAT15(uStack_1b3,
                                         CONCAT14(uStack_1b4,
                                                  CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,local_1b8)
                                                          ))));
          switch(local_1b8) {
          case 0:
            uVar33 = 2;
            break;
          case 1:
            uVar33 = 3;
            break;
          default:
            *(undefined4 *)((long)puVar53 + 4) = 1;
            goto LAB_7101a973f4;
          case 3:
            uVar33 = 5;
            break;
          case 4:
            uVar33 = 4;
            break;
          case 6:
            uVar33 = 6;
          }
          *(undefined4 *)((long)puVar53 + 4) = uVar33;
        }
LAB_7101a973f4:
        uVar50 = uVar34 + 2;
        if ((uVar50 < 0x1e0) &&
           ((*(uint *)(*(long *)*puVar38 + (ulong)(uVar50 >> 5) * 4) & 1 << (ulong)(uVar50 & 0x1f))
            != 0)) {
          bVar15 = (*(uint *)(*(long *)*puVar38 + (ulong)(uVar34 >> 5) * 4) &
                   1 << (ulong)(uVar34 & 0x1f)) == 0;
        }
        else {
          bVar15 = false;
        }
        uVar18 = uVar18 + 1;
        *(bool *)(puVar53 + 6) = bVar15;
      }
      puVar53 = puVar53 + 7;
    } while (puVar53 != puVar22 + 0xd2);
    *(undefined1 *)(puVar22 + 0xd2) = uVar11;
    *(uint *)(puVar22 + 0xd7) = uVar18;
    puVar22 = puVar22 + 0xd9;
    if (puVar22 == (undefined8 *)(lVar20 + 0x3778)) break;
    uVar19 = uVar19 + 1;
  } while( true );
  FUN_7101a8fdf0(lVar20,0,pppplVar30,ppppbVar32,param_5,param_6,param_7,param_8);
  uVar27 = extraout_x1_03;
  if (*(int *)(lVar20 + 0x3838) != 0) {
    *(uint *)(lVar20 + 0x3834) = (uint)*(byte *)(*(long *)*puVar38 + 0x2a4);
    fVar60 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)*puVar38 + 0x2a5));
    *(float *)(lVar20 + 0x3840) = fVar60;
    goto LAB_7101a97688;
  }
  pcVar40 = *(char **)(lVar20 + 0x38e8);
  if ((*pcVar40 == '\f') && (iVar17 = *(int *)(pcVar40 + 1) + -1, 0 < *(int *)(pcVar40 + 1))) {
    iVar46 = 0;
    pcVar39 = "";
    do {
      iVar4 = iVar17 + iVar46;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar35 = (uint *)(*(long *)(*plVar6 + 0x28) + (long)*(int *)(pcVar40 + 5) + (long)iVar4 * 8);
      uVar21 = *(ulong *)(*(long *)(*plVar6 + 0x20) + (ulong)*puVar35 * 8);
      if (uVar21 == 0xf4da82f5f) {
        uVar19 = puVar35[1];
        if ((int)uVar19 < 0) goto LAB_7101a97554;
        pcVar39 = pcVar40 + (int)uVar19;
        break;
      }
      iVar14 = iVar4 + -1;
      if (uVar21 < 0xf4da82f60) {
        iVar46 = iVar4 + 1;
        iVar14 = iVar17;
      }
      iVar17 = iVar14;
    } while (iVar46 <= iVar17);
  }
  else {
LAB_7101a97554:
    pcVar39 = "";
  }
  switch(*pcVar39) {
  case '\x01':
  case '\x03':
    uVar19 = (uint)(byte)pcVar39[1];
    break;
  case '\x02':
    uVar19 = (uint)pcVar39[1];
    break;
  case '\x04':
    uVar19 = (uint)*(short *)(pcVar39 + 1);
    break;
  case '\x05':
    uVar19 = (uint)*(ushort *)(pcVar39 + 1);
    break;
  case '\x06':
  case '\a':
    uVar19 = *(uint *)(pcVar39 + 1);
    break;
  default:
    uVar19 = 0;
  }
  *puVar5 = uVar19;
  *(char *)(*(long *)*puVar38 + 0x2a4) = (char)uVar19;
  *(undefined1 *)(*(long *)*puVar38 + 0x2a5) = 0;
  plVar2 = (long *)(*DAT_7105314508 + 0x5b4dd8);
  plVar6 = (long *)(*DAT_7105314508 + 0x5b4de8);
  if (*plVar6 == 0) {
    plVar28 = (long *)FUN_710392e290(0x10,0x18,pppplVar30,ppppbVar32,param_5,param_6,param_7,param_8
                                    );
    uVar27 = extraout_x1_04;
    if (plVar28 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_360 = (byte ***)((ulong)local_360 & 0xffffffff00000000);
        local_1c0._0_4_ = 0x18;
        local_1c0._4_4_ = 0;
        pppplVar30 = (long ****)&local_1c0;
        auVar61 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_360);
        uVar27 = auVar61._8_8_;
        if (((auVar61._0_8_ & 1) != 0) &&
           (plVar28 = (long *)FUN_710392e290(0x10,0x18,pppplVar30,ppppbVar32,param_5,param_6,param_7
                                             ,param_8), uVar27 = extraout_x1_05,
           plVar28 != (long *)0x0)) goto LAB_7101a97660;
      }
      plVar28 = (long *)0x0;
    }
LAB_7101a97660:
    *(undefined1 *)(plVar28 + 2) = 0;
    plVar28[1] = (long)plVar2;
    lVar51 = *plVar2;
    *plVar28 = lVar51;
    *(long **)(lVar51 + 8) = plVar28;
    *plVar2 = (long)plVar28;
    *plVar6 = *plVar6 + 1;
  }
  else {
    *(byte *)(*plVar2 + 0x10) = *(byte *)(*plVar2 + 0x10) & 1;
  }
  fVar60 = *(float *)(lVar20 + 0x3840);
LAB_7101a97688:
  FUN_7101a936a0(fVar60,lVar20,uVar27,pppplVar30,ppppbVar32,param_5,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar20 + 0x120) + 0x10),0x7104400ed2);
  FUN_7103776640(&local_1c0,**(long **)(lVar20 + 0x120) + 8,(byte ****)"set_part_footer",pppplVar30,
                 ppppbVar32,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_360,(long)&local_1c0,(long ****)"set_txt_mission",pppplVar30,ppppbVar32,
                 param_5,param_6,param_7,param_8);
  uVar21 = CONCAT26(uStack_1b2,
                    CONCAT15(uStack_1b3,
                             CONCAT14(uStack_1b4,CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,local_1b8))
                                     )));
  local_1c0._0_4_ = 0x523d988;
  local_1c0._4_4_ = 0x71;
  local_1b8 = 0;
  uStack_1b7 = 0;
  uStack_1b6 = 0;
  uStack_1b4 = 0;
  uStack_1b3 = 0;
  uStack_1b2 = 0;
  if (uVar21 != 0) {
    uVar48 = *(ulong *)(uVar21 + 0x18);
    *(undefined ***)(uVar21 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar21 + 0x18) = 0;
    if (uVar48 != 0) {
      FUN_710392eb40(uVar48);
    }
    FUN_710392eb40(uVar21);
  }
  lVar41 = *(long *)(DAT_710532f730 + 8);
  lVar51 = lVar41 + 0x340;
  lVar45 = 0x144;
  do {
    uVar21 = FUN_7103267660(*(long *)(lVar41 + 0x348),*(uint *)(lVar20 + 0x7cc),
                            *(uint *)(lVar20 + lVar45));
    if ((uVar21 & 0xff00000000000000) == 0x6200000000000000 && (uVar21 & 0xffffffffff) != 0) {
      FUN_7103267fe0((uint *)&local_1c0,lVar51,uVar21);
      FUN_710377a750((long)&local_360,&local_1b8,0,ppppbVar32,param_5,param_6,param_7,param_8);
    }
    lVar45 = lVar45 + 0x38;
  } while (lVar45 != 0x7d4);
  lVar45 = 0;
  do {
    uVar21 = FUN_7103267660(*(long *)(lVar41 + 0x348),*(uint *)(lVar20 + 0xe94),
                            *(uint *)(lVar20 + 0x80c + lVar45));
    if ((uVar21 & 0xff00000000000000) == 0x6200000000000000 && (uVar21 & 0xffffffffff) != 0) {
      FUN_7103267fe0((uint *)&local_1c0,lVar51,uVar21);
      FUN_710377a750((long)&local_360,&local_1b8,0,ppppbVar32,param_5,param_6,param_7,param_8);
    }
    lVar45 = lVar45 + 0x38;
  } while (lVar45 != 0x690);
  lVar45 = 0;
  do {
    uVar21 = FUN_7103267660(*(long *)(lVar41 + 0x348),*(uint *)(lVar20 + 0x155c),
                            *(uint *)(lVar20 + 0xed4 + lVar45));
    if ((uVar21 & 0xff00000000000000) == 0x6200000000000000 && (uVar21 & 0xffffffffff) != 0) {
      FUN_7103267fe0((uint *)&local_1c0,lVar51,uVar21);
      FUN_710377a750((long)&local_360,&local_1b8,0,ppppbVar32,param_5,param_6,param_7,param_8);
    }
    lVar45 = lVar45 + 0x38;
  } while (lVar45 != 0x690);
  lVar45 = 0;
  do {
    uVar21 = FUN_7103267660(*(long *)(lVar41 + 0x348),*(uint *)(lVar20 + 0x1c24),
                            *(uint *)(lVar20 + 0x159c + lVar45));
    if ((uVar21 & 0xff00000000000000) == 0x6200000000000000 && (uVar21 & 0xffffffffff) != 0) {
      FUN_7103267fe0((uint *)&local_1c0,lVar51,uVar21);
      FUN_710377a750((long)&local_360,&local_1b8,0,ppppbVar32,param_5,param_6,param_7,param_8);
    }
    lVar45 = lVar45 + 0x38;
  } while (lVar45 != 0x690);
  lVar45 = 0;
  do {
    uVar21 = FUN_7103267660(*(long *)(lVar41 + 0x348),*(uint *)(lVar20 + 0x22ec),
                            *(uint *)(lVar20 + 0x1c64 + lVar45));
    if ((uVar21 & 0xff00000000000000) == 0x6200000000000000 && (uVar21 & 0xffffffffff) != 0) {
      FUN_7103267fe0((uint *)&local_1c0,lVar51,uVar21);
      FUN_710377a750((long)&local_360,&local_1b8,0,ppppbVar32,param_5,param_6,param_7,param_8);
    }
    lVar45 = lVar45 + 0x38;
  } while (lVar45 != 0x690);
  lVar45 = 0;
  do {
    uVar21 = FUN_7103267660(*(long *)(lVar41 + 0x348),*(uint *)(lVar20 + 0x29b4),
                            *(uint *)(lVar20 + 0x232c + lVar45));
    if ((uVar21 & 0xff00000000000000) == 0x6200000000000000 && (uVar21 & 0xffffffffff) != 0) {
      FUN_7103267fe0((uint *)&local_1c0,lVar51,uVar21);
      FUN_710377a750((long)&local_360,&local_1b8,0,ppppbVar32,param_5,param_6,param_7,param_8);
    }
    lVar45 = lVar45 + 0x38;
  } while (lVar45 != 0x690);
  lVar45 = 0;
  do {
    uVar21 = FUN_7103267660(*(long *)(lVar41 + 0x348),*(uint *)(lVar20 + 0x307c),
                            *(uint *)(lVar20 + 0x29f4 + lVar45));
    if ((uVar21 & 0xff00000000000000) == 0x6200000000000000 && (uVar21 & 0xffffffffff) != 0) {
      FUN_7103267fe0((uint *)&local_1c0,lVar51,uVar21);
      FUN_710377a750((long)&local_360,&local_1b8,0,ppppbVar32,param_5,param_6,param_7,param_8);
    }
    lVar45 = lVar45 + 0x38;
  } while (lVar45 != 0x690);
  lVar45 = 0;
  do {
    uVar19 = *(uint *)(lVar20 + 0x30bc + lVar45);
    uVar48 = (ulong)uVar19;
    uVar21 = FUN_7103267660(*(long *)(lVar41 + 0x348),*(uint *)(lVar20 + 0x3744),uVar19);
    if ((uVar21 & 0xff00000000000000) == 0x6200000000000000 && (uVar21 & 0xffffffffff) != 0) {
      FUN_7103267fe0((uint *)&local_1c0,lVar51,uVar21);
      uVar48 = 0;
      FUN_710377a750((long)&local_360,&local_1b8,0,ppppbVar32,param_5,param_6,param_7,param_8);
    }
    ppplVar12 = local_358;
    lVar45 = lVar45 + 0x38;
  } while (lVar45 != 0x690);
  local_360 = (byte ***)&PTR_FUN_710523d9a8;
  local_358 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar12);
  }
  lVar45 = **(long **)*puVar3;
  *(undefined1 *)(lVar45 + 0x656) = 0;
  *(undefined1 *)(*(long *)(lVar45 + 0x600) + 0x4ab) = 0;
  lVar51 = *(long *)(lVar45 + 0x608);
  lVar41 = *(long *)(lVar45 + 0x610);
  if (lVar51 != lVar41) {
    uVar21 = (lVar41 + -0x10) - lVar51;
    uVar19 = ((uint)(uVar21 >> 4) & 0xfffffff) + 1;
    if ((uVar19 & 3) != 0) {
      lVar47 = -((ulong)uVar19 & 3);
      do {
        plVar2 = (long *)(lVar51 + 8);
        lVar51 = lVar51 + 0x10;
        lVar47 = lVar47 + 1;
        *(undefined1 *)(*plVar2 + 0x4ab) = *(undefined1 *)(lVar45 + 0x656);
      } while (lVar47 != 0);
    }
    if (0x2f < uVar21) {
      do {
        *(undefined1 *)(*(long *)(lVar51 + 8) + 0x4ab) = *(undefined1 *)(lVar45 + 0x656);
        *(undefined1 *)(*(long *)(lVar51 + 0x18) + 0x4ab) = *(undefined1 *)(lVar45 + 0x656);
        *(undefined1 *)(*(long *)(lVar51 + 0x28) + 0x4ab) = *(undefined1 *)(lVar45 + 0x656);
        plVar2 = (long *)(lVar51 + 0x38);
        lVar51 = lVar51 + 0x40;
        *(undefined1 *)(*plVar2 + 0x4ab) = *(undefined1 *)(lVar45 + 0x656);
      } while (lVar41 != lVar51);
    }
  }
  lVar51 = *(long *)(*(long *)(lVar44 + 0x348) + 8);
  pcVar40 = *(char **)(lVar51 + 0x20);
  if ((*pcVar40 == '\f') && (iVar17 = *(int *)(pcVar40 + 1) + -1, 0 < *(int *)(pcVar40 + 1))) {
    iVar46 = 0;
    uVar21 = *(ulong *)(lVar51 + 0x48) & 0xffffffffff;
    pbVar43 = &DAT_7104742dbb;
    do {
      iVar4 = iVar17 + iVar46;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar35 = (uint *)(*(long *)(*(long *)(lVar51 + 0x18) + 0x28) + (long)*(int *)(pcVar40 + 5) +
                        (long)iVar4 * 8);
      uVar25 = *(ulong *)(*(long *)(*(long *)(lVar51 + 0x18) + 0x20) + (ulong)*puVar35 * 8);
      if (uVar25 == uVar21) {
        uVar19 = puVar35[1];
        if ((int)uVar19 < 0) goto LAB_7101a97b54;
        pbVar43 = (byte *)(pcVar40 + (int)uVar19);
        break;
      }
      iVar14 = iVar4 + -1;
      if (uVar25 <= uVar21) {
        iVar46 = iVar4 + 1;
        iVar14 = iVar17;
      }
      iVar17 = iVar14;
    } while (iVar46 <= iVar17);
  }
  else {
LAB_7101a97b54:
    pbVar43 = &DAT_7104742dbb;
  }
  if (*pbVar43 - 0xb < 2) {
    uVar33 = *(undefined4 *)(pbVar43 + 1);
  }
  else {
    uVar33 = 0;
  }
  *(undefined4 *)(lVar20 + 0x383c) = uVar33;
  FUN_7103776910(&local_1c0,**(long **)(lVar20 + 0x120) + 8,(long ****)"set_txt_clear_n",uVar48,
                 ppppbVar32,param_5,param_6,param_7,param_8);
  uVar48 = (ulong)*(uint *)(lVar20 + 0x3838);
  FUN_710377a310((long)&local_1c0,1);
  uVar21 = CONCAT26(uStack_1b2,
                    CONCAT15(uStack_1b3,
                             CONCAT14(uStack_1b4,CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,local_1b8))
                                     )));
  local_1c0._0_4_ = 0x523d9a8;
  local_1c0._4_4_ = 0x71;
  local_1b8 = 0;
  uStack_1b7 = 0;
  uStack_1b6 = 0;
  uStack_1b4 = 0;
  uStack_1b3 = 0;
  uStack_1b2 = 0;
  if (uVar21 != 0) {
    FUN_710392eb40(uVar21);
  }
  FUN_7103776910(&local_1c0,**(long **)(lVar20 + 0x120) + 8,(long ****)"set_txt_clear",uVar48,
                 ppppbVar32,param_5,param_6,param_7,param_8);
  uVar48 = (ulong)*(uint *)(lVar20 + 0x383c);
  FUN_710377a310((long)&local_1c0,1);
  uVar21 = CONCAT26(uStack_1b2,
                    CONCAT15(uStack_1b3,
                             CONCAT14(uStack_1b4,CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,local_1b8))
                                     )));
  local_1c0._0_4_ = 0x523d9a8;
  local_1c0._4_4_ = 0x71;
  local_1b8 = 0;
  uStack_1b7 = 0;
  uStack_1b6 = 0;
  uStack_1b4 = 0;
  uStack_1b3 = 0;
  uStack_1b2 = 0;
  if (uVar21 != 0) {
    FUN_710392eb40(uVar21);
  }
  *(bool *)(lVar20 + 0x3940) = *(int *)(lVar20 + 0x3838) == *(int *)(lVar20 + 0x383c);
  FUN_7103776640(&local_208,**(long **)(lVar20 + 0x120) + 8,(byte ****)"set_parts_btn_hammer",uVar48
                 ,ppppbVar32,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_360,(long)&local_208,(long ****)"set_txt_hammer_n",uVar48,ppppbVar32,param_5
                 ,param_6,param_7,param_8);
  ppplVar12 = local_358;
  pplVar54 = local_358[2];
  if (pplVar54 != (long **)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_188 = 0;
    local_190 = 0;
    local_198 = 0;
    local_1a0 = 0;
    local_1a8 = (undefined1 *)0x0;
    local_1b0 = 0;
    uStack_1ac = 0;
    uStack_1aa = 0;
    uStack_1a9 = 0;
    local_1b8 = 0;
    uStack_1b7 = 0;
    uStack_1b6 = 0;
    uStack_1b4 = 0;
    uStack_1b3 = 0;
    uStack_1b2 = 0;
    local_1c0._0_4_ = 0;
    local_1c0._4_4_ = 0;
    uVar19 = FUN_71037ad940((long)&local_1c0,0x20,0,*puVar5,0,0);
    ppppbVar32 = (byte ****)0x0;
    FUN_71037a2270((long *)pplVar54,(ushort *)&local_1c0,uVar19,0);
  }
  local_360 = (byte ***)&PTR_FUN_710523d9a8;
  local_358 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar12);
  }
  pppbVar13 = local_200[0];
  local_208 = &PTR_FUN_710523d988;
  local_200[0] = (byte ***)0x0;
  if (pppbVar13 != (byte ***)0x0) {
    ppbVar36 = pppbVar13[3];
    pppbVar13[2] = &PTR_FUN_710523d9a8;
    pppbVar13[3] = (byte **)0x0;
    if (ppbVar36 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar36);
    }
    FUN_710392eb40((ulong)pppbVar13);
  }
  if (*pbVar7 == 0) {
    pcVar40 = "on_plt_menu_lyt_00";
  }
  else {
    pcVar40 = "off_plt_menu_lyt_00";
  }
  FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar3 + 0x10),(long)pcVar40);
  FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar3 + 0x10),0x7104454547);
  lVar20 = **(long **)*puVar3;
  *(undefined4 *)(*(long *)(lVar20 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar20 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar20 + 0x600) + 0x18) = 0x200;
  *(undefined4 *)(*(long *)(lVar20 + 0x600) + 0x1c) = 0x100;
  FUN_7103775dc0(*(long **)*puVar3,0,(long ****)&DAT_00001000,ppppbVar32,param_5,param_6,param_7,
                 param_8);
  return;
}

